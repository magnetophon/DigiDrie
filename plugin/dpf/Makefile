all: build generate_ttl

build: common DigiDrie

.PHONY: patch
patch:
	$(MAKE) -C patch

.PHONY: generate_ttl
generate_ttl: build
	./generate-ttl.sh

# DEBUG=true
# export DEBUG

LV2 ?= true
VST2 ?= true
VST3 ?= true
CLAP ?= true
AU   ?= true
JACK ?= true

# DigiDrie's UI is OpenGL via NanoVG; the Cairo DGL variant is unused.
# Default HAVE_CAIRO to false so DPF doesn't auto-detect and try to
# build libdgl-cairo.a, which (a) is wasted work on every platform and
# (b) fails on environments where Cairo's headers aren't pre-installed
# (e.g. the macos-15 Apple Silicon runner image as of May 2026, where
# pkg-config reports cairo as present but the headers aren't actually
# on the include path).
#
# DPF's Makefile.base.mk does `HAVE_CAIRO = $(shell pkg-config ...)`,
# which is an unconditional assignment that would clobber any value
# inherited from the environment. We therefore pass HAVE_CAIRO as a
# *command-line* variable to each `$(MAKE) -C ...` call below, since
# command-line definitions are the only ones that win against an
# unconditional Makefile assignment in GNU make. Override locally with
# `make HAVE_CAIRO=true` if you ever want to build the Cairo variant.
HAVE_CAIRO ?= false

ifeq ($(LV2),true)
INSTALL_TARGET += installLV2
endif
ifeq ($(VST2),true)
INSTALL_TARGET += installVST2
endif
ifeq ($(VST3),true)
INSTALL_TARGET += installVST3
endif
ifeq ($(CLAP),true)
INSTALL_TARGET += installCLAP
endif
ifeq ($(JACK),true)
INSTALL_TARGET += installJACK
endif

pkgname ?= magnetophon
projectname ?= digidrie
PREFIX ?= /usr/local
lv2dir ?= $(DESTDIR)$(PREFIX)/lib/lv2
vst2dir ?= $(DESTDIR)$(PREFIX)/lib/vst
vst3dir ?= $(DESTDIR)$(PREFIX)/lib/vst3
clapdir ?= $(DESTDIR)$(PREFIX)/lib/clap
bindir ?= $(DESTDIR)$(PREFIX)/bin
sysconfdir ?= $(DESTDIR)$(PREFIX)/etc
# Where installed config files will be found at runtime, excluding any
# DESTDIR staging prefix (which only affects where the install step
# writes them, not where the running binary looks for them). Compile
# time uses this; install time uses $(sysconfdir) above.
runtime_sysconfdir ?= $(PREFIX)/etc
datarootdir ?= $(DESTDIR)$(PREFIX)/share
datadir ?= $(datarootdir)
docdir ?= $(datarootdir)/doc

.PHONY: dpf
dpf: patch
	$(MAKE) -C lib/DPF HAVE_CAIRO=$(HAVE_CAIRO) USE_WEB_VIEW=false dgl utils/lv2_ttl_generator

.PHONY: common
common: dpf
	$(MAKE) -C common SYSCONFDIR=$(runtime_sysconfdir)/$(pkgname)

.PHONY: DigiDrie
DigiDrie: common
	$(MAKE) -C DigiDrie HAVE_CAIRO=$(HAVE_CAIRO) LV2=$(LV2) VST2=$(VST2) VST3=$(VST3) CLAP=$(CLAP) AU=$(AU) JACK=$(JACK)

.PHONY: install
install: $(INSTALL_TARGET) installConfig installResource installDoc

.PHONY: installConfig
installConfig:
	mkdir -p $(sysconfdir)/$(pkgname)/style
	install -m644 style/style.json $(sysconfdir)/$(pkgname)/style/style.json

.PHONY: installResource
installResource:
	mkdir -p $(datadir)/$(pkgname)/themes
	install -m644 style/themes/*.json $(datadir)/$(pkgname)/themes/

.PHONY: installDoc
installDoc:
	mkdir -p $(docdir)/$(projectname)
	install -m644 ../../README.md          $(docdir)/$(projectname)/README.md
	install -m644 ../../LICENSE.txt        $(docdir)/$(projectname)/LICENSE.txt
	install -m644 style/ColorConfig.md     $(docdir)/$(projectname)/ColorConfig.md

.PHONY: installLV2
installLV2:
	mkdir -p $(lv2dir)
	cp -r bin/*.lv2 $(lv2dir)

.PHONY: installVST2
installVST2:
	mkdir -p $(vst2dir)
	install -m755 bin/DigiDrie-vst.so $(vst2dir)/DigiDrie-vst.so

.PHONY: installVST3
installVST3:
	mkdir -p $(vst3dir)
	cp -r bin/*.vst3 $(vst3dir)

.PHONY: installCLAP
installCLAP:
	mkdir -p $(clapdir)
	cp -r bin/*.clap $(clapdir)

.PHONY: installJACK
installJACK:
	mkdir -p $(bindir)
	install -m755 bin/DigiDrie $(bindir)/DigiDrie

.PHONY: installHome
installHome:
	mkdir -p ~/.lv2
	cp -r bin/*.lv2 ~/.lv2
	# python3 install.py # TODO: Add style.json installation.

.PHONY: installHomeVST2
installHomeVST2:
	mkdir -p ~/.lxvst
	cp -r bin/*-vst.so ~/.lxvst
	python3 install.py

.PHONY: clean
clean:
	rm -rf bin
	rm -rf build

.PHONY: cleanDPF
cleanDPF:
	$(MAKE) -C lib/DPF clean

.PHONY: cleanall
cleanall: cleanDPF clean
