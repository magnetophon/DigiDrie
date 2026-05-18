#!/usr/bin/env bash
#
# install-macos.sh — drop DigiDrie's plug-in bundles into your user-level
# audio plug-in directories and clear macOS's quarantine attribute so
# Gatekeeper doesn't refuse to load them.
#
# Run from the extracted release directory:
#   tar xzf DigiDrie-v0.3.x-macos-*.tar.gz
#   cd DigiDrie-v0.3.x-macos-*
#   ./install-macos.sh
#
# The script copies each format only if present in the artifact, so it's
# safe to run from a partial download. Re-running overwrites existing
# installations.
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$SCRIPT_DIR"

PLUGINS_DIR="$HOME/Library/Audio/Plug-Ins"

# Each pair is: src-subdir-in-artifact  dst-subdir-under-Plug-Ins.
# Order is just for tidy progress output; install order doesn't matter.
install_bundle() {
    local src="$1"
    local dst_dir="$2"
    if [ ! -e "$src" ]; then
        return
    fi
    mkdir -p "$dst_dir"
    cp -R "$src" "$dst_dir/"
    local installed="$dst_dir/$(basename "$src")"
    # cp -R preserves any existing quarantine xattr from the unzip; strip
    # it so Gatekeeper and the host loader don't refuse the bundle.
    xattr -dr com.apple.quarantine "$installed" 2>/dev/null || true
    echo "  installed $(basename "$src") -> $dst_dir/"
}

echo "Installing DigiDrie plug-ins to $PLUGINS_DIR/"
install_bundle "lib/vst/DigiDrie.vst"          "$PLUGINS_DIR/VST"
install_bundle "lib/vst3/DigiDrie.vst3"        "$PLUGINS_DIR/VST3"
install_bundle "lib/clap/DigiDrie.clap"        "$PLUGINS_DIR/CLAP"
install_bundle "lib/au/DigiDrie.component"     "$PLUGINS_DIR/Components"
install_bundle "lib/lv2/DigiDrie.lv2"          "$PLUGINS_DIR/LV2"
echo
echo "Done. Restart your DAW. If Ableton Live doesn't see the plug-in"
echo "after restart, try Settings -> Plug-Ins -> Rescan (hold shift) to"
echo "clear the plug-in cache and force a full re-scan."
