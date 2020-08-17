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

ifeq ($(LV2),true)
INSTALL_TARGET += installLV2
endif
ifeq ($(VST2),true)
INSTALL_TARGET += installVST2
endif
ifeq ($(JACK),true)
INSTALL_TARGET += installJACK
endif

pkgname ?= UhhyouPlugins
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
	$(MAKE) -C lib/DPF dgl utils/lv2_ttl_generator

.PHONY: common
common: dpf
	$(MAKE) -C common

.PHONY: DigiDrie
DigiDrie: common
	$(MAKE) -C DigiDrie LV2=$(LV2) VST2=$(VST2) JACK=$(JACK)

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
