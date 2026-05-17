/*
TODO:
- Add license.
- Change brand.
- Change URI.
*/

#ifndef DISTRHO_PLUGIN_INFO_H_INCLUDED
#define DISTRHO_PLUGIN_INFO_H_INCLUDED

#define DISTRHO_PLUGIN_BRAND "Digital Magic Industries"
#define DISTRHO_PLUGIN_NAME "DigiDrie"
#define DISTRHO_PLUGIN_URI "https://github.com/magnetophon/DigiDrie"

// Stable reverse-DNS identifier used by CLAP hosts to remap plugin instances
// across sessions. Matches the CFBundleIdentifier used by the macOS .vst /
// .clap bundles, so hosts that key off either see consistent identity.
#define DISTRHO_PLUGIN_CLAP_ID "com.magnetophon.DigiDrie"

// VST3 subcategories filter what shows up in host browsers that group
// plugins by type. DigiDrie is a stereo synthesizer; without this macro
// DPF defaults to just "Instrument" (since IS_SYNTH=1), which is correct
// but less specific.
#define DISTRHO_PLUGIN_VST3_CATEGORIES "Instrument|Synth|Stereo"

#define DISTRHO_PLUGIN_HAS_UI 1
#define DISTRHO_PLUGIN_IS_RT_SAFE 1
#define DISTRHO_PLUGIN_IS_SYNTH 1
#define DISTRHO_PLUGIN_NUM_INPUTS 0
#define DISTRHO_PLUGIN_NUM_OUTPUTS 2
#define DISTRHO_PLUGIN_WANT_PROGRAMS 1
#define DISTRHO_PLUGIN_WANT_TIMEPOS 1
#define DISTRHO_PLUGIN_WANT_MIDI_INPUT 1
#define DISTRHO_PLUGIN_WANT_STATE 1
#define DISTRHO_PLUGIN_WANT_FULL_STATE 1
#define DISTRHO_UI_USER_RESIZABLE 1
#define DISTRHO_UI_USE_NANOVG 1

#define MAJOR_VERSION 0
#define MINOR_VERSION 2
#define PATCH_VERSION 0

#endif // DISTRHO_PLUGIN_INFO_H_INCLUDED
