all: patch build generate_ttl

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
ifeq ($(JACK),true)
INSTALL_TARGET += installJACK
endif

pkgname ?= magnetophon
PREFIX ?= /usr/local
lv2dir ?= $(DESTDIR)$(PREFIX)/lib/lv2
vst2dir ?= $(DESTDIR)$(PREFIX)/lib/lxvst
bindir ?= $(DESTDIR)$(PREFIX)/bin
sysconfdir ?= $(DESTDIR)$(PREFIX)/etc
datarootdir ?= $(DESTDIR)$(PREFIX)/share
datadir ?= $(datarootdir)
docdir ?= $(datarootdir)/doc

.PHONY: dpf
dpf:
	$(MAKE) -C lib/DPF HAVE_CAIRO=$(HAVE_CAIRO) dgl utils/lv2_ttl_generator

.PHONY: common
common: dpf
	$(MAKE) -C common

.PHONY: DigiDrie
DigiDrie: common
	$(MAKE) -C DigiDrie HAVE_CAIRO=$(HAVE_CAIRO) LV2=$(LV2) VST2=$(VST2) JACK=$(JACK)

.PHONY: install
install: $(INSTALL_TARGET) installConfig installResource installDoc

.PHONY: installConfig
installConfig:
	mkdir -p $(sysconfdir)/$(pkgname)/style
	cp -r style/style.json $(sysconfdir)/$(pkgname)/style

.PHONY: installResource
installResource:
	mkdir -p $(datadir)/$(pkgname)/themes
	cp -r style/themes $(datadir)/$(pkgname)

.PHONY: installDoc
installDoc:
	mkdir -p $(docdir)/$(pkgname)
	cp -r License $(docdir)/$(pkgname)
	cp README.md $(docdir)/$(pkgname)
	cp style/ColorConfig.md $(docdir)/$(pkgname)

.PHONY: installLV2
installLV2:
	mkdir -p $(lv2dir)
	cp -r bin/*.lv2 $(lv2dir)

.PHONY: installVST2
installVST2:
	mkdir -p $(vst2dir)/$(pkgname)
	cp -r bin/*-vst.so $(vst2dir)/$(pkgname)

.PHONY: installJACK
installJACK:
	mkdir -p $(bindir)
	cp -r `find bin -maxdepth 1 -type f ! -name "*.*"` $(bindir)

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
