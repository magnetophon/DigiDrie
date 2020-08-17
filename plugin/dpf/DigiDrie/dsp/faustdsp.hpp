/* ------------------------------------------------------------
author: "Bart Brouns"
license: "AGPLv3"
name: "DigiFaustMidi"
Code generated with Faust 2.28.0 (https://faust.grame.fr)
Compilation options: -lang cpp -os -scal -ftz 0
------------------------------------------------------------ */

#pragma once

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <array>
#include <cmath>
#include <math.h>

class mydspSIG0 {
	
  public:
	
	int iRec10[2];
	
  public:
	
	int getNumInputsmydspSIG0() {
		return 0;
	}
	int getNumOutputsmydspSIG0() {
		return 1;
	}
	int getInputRatemydspSIG0(int channel) {
		int rate;
		switch ((channel)) {
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	int getOutputRatemydspSIG0(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 0;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	void instanceInitmydspSIG0(int sample_rate) {
		for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) {
			iRec10[l9] = 0;
		}
	}
	
	void fillmydspSIG0(int count, float* table) {
		for (int i = 0; (i < count); i = (i + 1)) {
			iRec10[0] = (iRec10[1] + 1);
			table[i] = std::sin((9.58738019e-05f * float((iRec10[0] + -1))));
			iRec10[1] = iRec10[0];
		}
	}

};

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
static void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

static float ftbl0mydspSIG0[65536];
static float mydsp_faustpower2_f(float value) {
	return (value * value);
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#define FAUST_INPUTS 0
#define FAUST_OUTPUTS  2
#define FAUST_INT_CONTROLS 81
#define FAUST_REAL_CONTROLS 850

class mydsp {
 public:
	std::array<int, FAUST_INT_CONTROLS> ictrl{};
	std::array<FAUSTFLOAT, FAUST_REAL_CONTROLS> rctrl{};

	
 public:
	
	int iVec0[2];
	FAUSTFLOAT fButton0;
	float fVec1[2];
	int iVec2[2];
	FAUSTFLOAT fHslider0;
	int iRec1[2];
	int fSampleRate;
	float fConst0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	float fConst1;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	float fRec0[2];
	FAUSTFLOAT fHbargraph0;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	FAUSTFLOAT fHslider9;
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	FAUSTFLOAT fHslider20;
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	FAUSTFLOAT fHslider24;
	float fRec6[2];
	FAUSTFLOAT fHbargraph1;
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	FAUSTFLOAT fHslider27;
	FAUSTFLOAT fHslider28;
	FAUSTFLOAT fHslider29;
	float fRec7[2];
	FAUSTFLOAT fHbargraph2;
	FAUSTFLOAT fHslider30;
	FAUSTFLOAT fHslider31;
	FAUSTFLOAT fHslider32;
	FAUSTFLOAT fHslider33;
	FAUSTFLOAT fHslider34;
	float fRec8[2];
	FAUSTFLOAT fHbargraph3;
	FAUSTFLOAT fHslider35;
	FAUSTFLOAT fHslider36;
	FAUSTFLOAT fHslider37;
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	float fRec9[2];
	FAUSTFLOAT fHbargraph4;
	FAUSTFLOAT fHslider40;
	float fRec11[2];
	FAUSTFLOAT fHbargraph5;
	FAUSTFLOAT fHslider41;
	float fRec12[2];
	FAUSTFLOAT fHbargraph6;
	FAUSTFLOAT fHslider42;
	float fRec13[2];
	FAUSTFLOAT fHbargraph7;
	FAUSTFLOAT fHslider43;
	float fRec14[2];
	FAUSTFLOAT fHbargraph8;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVslider3;
	int iRec16[2];
	float fRec15[2];
	FAUSTFLOAT fHslider44;
	FAUSTFLOAT fHslider45;
	FAUSTFLOAT fHslider46;
	float fRec18[2];
	float fRec17[2];
	FAUSTFLOAT fHbargraph9;
	FAUSTFLOAT fHslider47;
	FAUSTFLOAT fHslider48;
	FAUSTFLOAT fHslider49;
	FAUSTFLOAT fHslider50;
	FAUSTFLOAT fHslider51;
	FAUSTFLOAT fHslider52;
	FAUSTFLOAT fHslider53;
	FAUSTFLOAT fHslider54;
	FAUSTFLOAT fHslider55;
	FAUSTFLOAT fHslider56;
	FAUSTFLOAT fHslider57;
	FAUSTFLOAT fHslider58;
	FAUSTFLOAT fHslider59;
	FAUSTFLOAT fHslider60;
	FAUSTFLOAT fHslider61;
	FAUSTFLOAT fHslider62;
	FAUSTFLOAT fHslider63;
	FAUSTFLOAT fHslider64;
	float fRec20[2];
	float fRec19[2];
	FAUSTFLOAT fHbargraph10;
	FAUSTFLOAT fHslider65;
	FAUSTFLOAT fHslider66;
	FAUSTFLOAT fHslider67;
	FAUSTFLOAT fHslider68;
	FAUSTFLOAT fHslider69;
	FAUSTFLOAT fHslider70;
	FAUSTFLOAT fHslider71;
	FAUSTFLOAT fHslider72;
	FAUSTFLOAT fHslider73;
	FAUSTFLOAT fHslider74;
	FAUSTFLOAT fHslider75;
	FAUSTFLOAT fHslider76;
	FAUSTFLOAT fHslider77;
	FAUSTFLOAT fHslider78;
	FAUSTFLOAT fHslider79;
	FAUSTFLOAT fHslider80;
	FAUSTFLOAT fHslider81;
	FAUSTFLOAT fHslider82;
	float fRec22[2];
	float fRec21[2];
	FAUSTFLOAT fHbargraph11;
	FAUSTFLOAT fHslider83;
	FAUSTFLOAT fHslider84;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	float fTempPerm0;
	FAUSTFLOAT fHslider85;
	FAUSTFLOAT fHslider86;
	FAUSTFLOAT fHslider87;
	FAUSTFLOAT fHslider88;
	float fTempPerm1;
	FAUSTFLOAT fHslider89;
	FAUSTFLOAT fHslider90;
	FAUSTFLOAT fHslider91;
	FAUSTFLOAT fHslider92;
	float fTempPerm2;
	FAUSTFLOAT fHslider93;
	FAUSTFLOAT fHslider94;
	FAUSTFLOAT fHslider95;
	FAUSTFLOAT fHslider96;
	float fTempPerm3;
	float fTempPerm4;
	float fTempPerm5;
	FAUSTFLOAT fHslider97;
	FAUSTFLOAT fHslider98;
	FAUSTFLOAT fHslider99;
	FAUSTFLOAT fHslider100;
	float fTempPerm6;
	FAUSTFLOAT fHslider101;
	FAUSTFLOAT fHslider102;
	FAUSTFLOAT fHslider103;
	FAUSTFLOAT fHslider104;
	float fTempPerm7;
	FAUSTFLOAT fHslider105;
	FAUSTFLOAT fHslider106;
	FAUSTFLOAT fHslider107;
	FAUSTFLOAT fHslider108;
	float fTempPerm8;
	FAUSTFLOAT fHslider109;
	FAUSTFLOAT fHslider110;
	FAUSTFLOAT fHslider111;
	FAUSTFLOAT fHslider112;
	float fTempPerm9;
	float fTempPerm10;
	float fTempPerm11;
	FAUSTFLOAT fHslider113;
	FAUSTFLOAT fHslider114;
	FAUSTFLOAT fHslider115;
	FAUSTFLOAT fHslider116;
	float fTempPerm12;
	FAUSTFLOAT fHslider117;
	FAUSTFLOAT fHslider118;
	FAUSTFLOAT fHslider119;
	FAUSTFLOAT fHslider120;
	float fTempPerm13;
	FAUSTFLOAT fHslider121;
	FAUSTFLOAT fHslider122;
	FAUSTFLOAT fHslider123;
	FAUSTFLOAT fHslider124;
	float fTempPerm14;
	FAUSTFLOAT fHslider125;
	FAUSTFLOAT fHslider126;
	FAUSTFLOAT fHslider127;
	FAUSTFLOAT fHslider128;
	float fTempPerm15;
	float fTempPerm16;
	float fTempPerm17;
	float fTempPerm18;
	float fTempPerm19;
	float fTempPerm20;
	float fTempPerm21;
	int iTempPerm22;
	float fConst2;
	float fConst3;
	float fConst4;
	FAUSTFLOAT fHslider129;
	FAUSTFLOAT fHslider130;
	FAUSTFLOAT fHslider131;
	FAUSTFLOAT fHslider132;
	float fTempPerm23;
	int iTempPerm24;
	float fTempPerm25;
	int iTempPerm26;
	float fTempPerm27;
	int iTempPerm28;
	int iTempPerm29;
	int iTempPerm30;
	float fTempPerm31;
	FAUSTFLOAT fHslider133;
	FAUSTFLOAT fHslider134;
	FAUSTFLOAT fHslider135;
	FAUSTFLOAT fHslider136;
	float fTempPerm32;
	FAUSTFLOAT fHslider137;
	FAUSTFLOAT fHslider138;
	FAUSTFLOAT fHslider139;
	FAUSTFLOAT fHslider140;
	float fTempPerm33;
	FAUSTFLOAT fHslider141;
	FAUSTFLOAT fHslider142;
	FAUSTFLOAT fHslider143;
	FAUSTFLOAT fHslider144;
	float fTempPerm34;
	float fTempPerm35;
	FAUSTFLOAT fHslider145;
	FAUSTFLOAT fHslider146;
	FAUSTFLOAT fHslider147;
	FAUSTFLOAT fHslider148;
	float fTempPerm36;
	FAUSTFLOAT fHslider149;
	FAUSTFLOAT fHslider150;
	FAUSTFLOAT fHslider151;
	FAUSTFLOAT fHslider152;
	float fTempPerm37;
	FAUSTFLOAT fHslider153;
	FAUSTFLOAT fHslider154;
	FAUSTFLOAT fHslider155;
	FAUSTFLOAT fHslider156;
	float fTempPerm38;
	FAUSTFLOAT fHslider157;
	FAUSTFLOAT fHslider158;
	FAUSTFLOAT fHslider159;
	FAUSTFLOAT fHslider160;
	float fTempPerm39;
	float fTempPerm40;
	FAUSTFLOAT fHslider161;
	FAUSTFLOAT fHslider162;
	FAUSTFLOAT fHslider163;
	FAUSTFLOAT fHslider164;
	float fTempPerm41;
	FAUSTFLOAT fHslider165;
	FAUSTFLOAT fHslider166;
	FAUSTFLOAT fHslider167;
	FAUSTFLOAT fHslider168;
	float fTempPerm42;
	FAUSTFLOAT fHslider169;
	FAUSTFLOAT fHslider170;
	FAUSTFLOAT fHslider171;
	FAUSTFLOAT fHslider172;
	float fTempPerm43;
	FAUSTFLOAT fHslider173;
	FAUSTFLOAT fHslider174;
	FAUSTFLOAT fHslider175;
	FAUSTFLOAT fHslider176;
	float fTempPerm44;
	float fTempPerm45;
	FAUSTFLOAT fHslider177;
	FAUSTFLOAT fHslider178;
	FAUSTFLOAT fHslider179;
	FAUSTFLOAT fHslider180;
	float fTempPerm46;
	FAUSTFLOAT fHslider181;
	FAUSTFLOAT fHslider182;
	FAUSTFLOAT fHslider183;
	FAUSTFLOAT fHslider184;
	float fTempPerm47;
	FAUSTFLOAT fHslider185;
	FAUSTFLOAT fHslider186;
	FAUSTFLOAT fHslider187;
	FAUSTFLOAT fHslider188;
	float fTempPerm48;
	FAUSTFLOAT fHslider189;
	FAUSTFLOAT fHslider190;
	FAUSTFLOAT fHslider191;
	FAUSTFLOAT fHslider192;
	float fTempPerm49;
	float fTempPerm50;
	float fConst5;
	FAUSTFLOAT fEntry0;
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT fHslider193;
	float fRec27[2];
	float fTempPerm51;
	float fRec28[2];
	FAUSTFLOAT fEntry1;
	FAUSTFLOAT fEntry2;
	float fTempPerm52;
	int iVec3[2];
	FAUSTFLOAT fCheckbox0;
	float fRec26[2];
	FAUSTFLOAT fVslider8;
	float fTempPerm53;
	float fRec29[2];
	float fTempPerm54;
	FAUSTFLOAT fHslider194;
	FAUSTFLOAT fHslider195;
	FAUSTFLOAT fHslider196;
	FAUSTFLOAT fHslider197;
	float fTempPerm55;
	FAUSTFLOAT fHslider198;
	FAUSTFLOAT fHslider199;
	FAUSTFLOAT fHslider200;
	FAUSTFLOAT fHslider201;
	float fTempPerm56;
	FAUSTFLOAT fHslider202;
	FAUSTFLOAT fHslider203;
	FAUSTFLOAT fHslider204;
	FAUSTFLOAT fHslider205;
	float fTempPerm57;
	FAUSTFLOAT fHslider206;
	FAUSTFLOAT fHslider207;
	FAUSTFLOAT fHslider208;
	FAUSTFLOAT fHslider209;
	float fTempPerm58;
	float fTempPerm59;
	FAUSTFLOAT fHslider210;
	FAUSTFLOAT fHslider211;
	FAUSTFLOAT fHslider212;
	FAUSTFLOAT fHslider213;
	float fTempPerm60;
	FAUSTFLOAT fHslider214;
	FAUSTFLOAT fHslider215;
	FAUSTFLOAT fHslider216;
	FAUSTFLOAT fHslider217;
	float fTempPerm61;
	FAUSTFLOAT fHslider218;
	FAUSTFLOAT fHslider219;
	FAUSTFLOAT fHslider220;
	FAUSTFLOAT fHslider221;
	float fTempPerm62;
	FAUSTFLOAT fHslider222;
	FAUSTFLOAT fHslider223;
	FAUSTFLOAT fHslider224;
	FAUSTFLOAT fHslider225;
	float fTempPerm63;
	float fTempPerm64;
	float fTempPerm65;
	float fTempPerm66;
	float fTempPerm67;
	float fTempPerm68;
	int iTempPerm69;
	FAUSTFLOAT fHslider226;
	FAUSTFLOAT fHslider227;
	FAUSTFLOAT fHslider228;
	FAUSTFLOAT fHslider229;
	float fTempPerm70;
	FAUSTFLOAT fHslider230;
	FAUSTFLOAT fHslider231;
	FAUSTFLOAT fHslider232;
	FAUSTFLOAT fHslider233;
	float fTempPerm71;
	FAUSTFLOAT fHslider234;
	FAUSTFLOAT fHslider235;
	FAUSTFLOAT fHslider236;
	FAUSTFLOAT fHslider237;
	float fTempPerm72;
	FAUSTFLOAT fHslider238;
	FAUSTFLOAT fHslider239;
	FAUSTFLOAT fHslider240;
	FAUSTFLOAT fHslider241;
	float fTempPerm73;
	float fTempPerm74;
	float fTempPerm75;
	float fTempPerm76;
	FAUSTFLOAT fHslider242;
	FAUSTFLOAT fHslider243;
	FAUSTFLOAT fHslider244;
	FAUSTFLOAT fHslider245;
	float fTempPerm77;
	FAUSTFLOAT fHslider246;
	FAUSTFLOAT fHslider247;
	FAUSTFLOAT fHslider248;
	FAUSTFLOAT fHslider249;
	float fTempPerm78;
	FAUSTFLOAT fHslider250;
	FAUSTFLOAT fHslider251;
	FAUSTFLOAT fHslider252;
	FAUSTFLOAT fHslider253;
	float fTempPerm79;
	FAUSTFLOAT fHslider254;
	FAUSTFLOAT fHslider255;
	FAUSTFLOAT fHslider256;
	FAUSTFLOAT fHslider257;
	float fTempPerm80;
	float fTempPerm81;
	float fTempPerm82;
	float fTempPerm83;
	float fTempPerm84;
	float fRec23[2];
	float fTempPerm85;
	float fRec24[2];
	float fTempPerm86;
	float fTempPerm87;
	float fTempPerm88;
	float fTempPerm89;
	float fTempPerm90;
	float fTempPerm91;
	float fTempPerm92;
	float fTempPerm93;
	float fTempPerm94;
	float fRec30[2];
	float fTempPerm95;
	float fRec31[2];
	float fRec32[2];
	float fTempPerm96;
	float fTempPerm97;
	float fTempPerm98;
	float fTempPerm99;
	float fTempPerm100;
	float fTempPerm101;
	float fTempPerm102;
	float fRec35[2];
	float fTempPerm103;
	float fRec36[2];
	float fTempPerm104;
	float fTempPerm105;
	float fTempPerm106;
	float fVec4[2];
	FAUSTFLOAT fHslider258;
	FAUSTFLOAT fHslider259;
	FAUSTFLOAT fHslider260;
	FAUSTFLOAT fHslider261;
	float fTempPerm107;
	FAUSTFLOAT fHslider262;
	FAUSTFLOAT fHslider263;
	FAUSTFLOAT fHslider264;
	FAUSTFLOAT fHslider265;
	float fTempPerm108;
	FAUSTFLOAT fHslider266;
	FAUSTFLOAT fHslider267;
	FAUSTFLOAT fHslider268;
	FAUSTFLOAT fHslider269;
	float fTempPerm109;
	FAUSTFLOAT fHslider270;
	FAUSTFLOAT fHslider271;
	FAUSTFLOAT fHslider272;
	FAUSTFLOAT fHslider273;
	float fTempPerm110;
	float fTempPerm111;
	float fTempPerm112;
	float fTempPerm113;
	float fTempPerm114;
	float fTempPerm115;
	float fRec38[2];
	float fTempPerm116;
	float fTempPerm117;
	float fTempPerm118;
	float fTempPerm119;
	float fVec5[2];
	int iTempPerm120;
	int iVec6[2];
	int iTempPerm121;
	float fRec43[2];
	float fTempPerm122;
	float fRec42[2];
	float fRec41[2];
	float fRec40[2];
	float fRec39[2];
	float fRec37[2];
	float fTempPerm123;
	float fTempPerm124;
	float fTempPerm125;
	float fTempPerm126;
	float fTempPerm127;
	float fTempPerm128;
	int iTempPerm129;
	float fTempPerm130;
	float fTempPerm131;
	float fTempPerm132;
	float fRec44[2];
	float fTempPerm133;
	float fRec45[2];
	float fTempPerm134;
	float fTempPerm135;
	float fTempPerm136;
	float fRec47[2];
	float fTempPerm137;
	float fRec48[2];
	float fRec49[2];
	float fTempPerm138;
	float fTempPerm139;
	float fTempPerm140;
	float fTempPerm141;
	float fTempPerm142;
	float fRec52[2];
	float fTempPerm143;
	float fRec53[2];
	float fTempPerm144;
	float fVec7[2];
	float fTempPerm145;
	float fRec55[2];
	float fTempPerm146;
	float fTempPerm147;
	float fTempPerm148;
	float fTempPerm149;
	float fVec8[2];
	int iTempPerm150;
	int iVec9[2];
	int iTempPerm151;
	float fRec60[2];
	float fTempPerm152;
	float fRec59[2];
	float fRec58[2];
	float fRec57[2];
	float fRec56[2];
	float fRec54[2];
	float fTempPerm153;
	float fTempPerm154;
	float fConst6;
	float fConst7;
	float fTempPerm155;
	float fTempPerm156;
	float fTempPerm157;
	float fTempPerm158;
	float fTempPerm159;
	float fTempPerm160;
	float fTempPerm161;
	float fTempPerm162;
	float fTempPerm163;
	float fTempPerm164;
	float fTempPerm165;
	float fTempPerm166;
	float fTempPerm167;
	float fTempPerm168;
	float fTempPerm169;
	float fTempPerm170;
	float fTempPerm171;
	float fTempPerm172;
	float fTempPerm173;
	float fTempPerm174;
	float fTempPerm175;
	float fTempPerm176;
	float fTempPerm177;
	float fTempPerm178;
	float fTempPerm179;
	float fTempPerm180;
	float fTempPerm181;
	float fTempPerm182;
	float fTempPerm183;
	float fTempPerm184;
	float fTempPerm185;
	float fTempPerm186;
	float fTempPerm187;
	float fTempPerm188;
	float fTempPerm189;
	float fTempPerm190;
	float fTempPerm191;
	float fTempPerm192;
	float fTempPerm193;
	float fTempPerm194;
	float fTempPerm195;
	float fTempPerm196;
	float fTempPerm197;
	float fTempPerm198;
	float fTempPerm199;
	float fTempPerm200;
	float fTempPerm201;
	float fTempPerm202;
	float fTempPerm203;
	float fTempPerm204;
	float fTempPerm205;
	float fTempPerm206;
	float fTempPerm207;
	float fTempPerm208;
	float fTempPerm209;
	float fTempPerm210;
	float fTempPerm211;
	float fConst8;
	float fTempPerm212;
	float fTempPerm213;
	float fTempPerm214;
	float fTempPerm215;
	float fRec61[2];
	float fTempPerm216;
	float fTempPerm217;
	float fRec62[2];
	float fTempPerm218;
	float fTempPerm219;
	float fTempPerm220;
	float fRec2[2];
	FAUSTFLOAT fHslider274;
	FAUSTFLOAT fHslider275;
	FAUSTFLOAT fHslider276;
	FAUSTFLOAT fHslider277;
	float fTempPerm221;
	FAUSTFLOAT fHslider278;
	FAUSTFLOAT fHslider279;
	FAUSTFLOAT fHslider280;
	FAUSTFLOAT fHslider281;
	float fTempPerm222;
	FAUSTFLOAT fHslider282;
	FAUSTFLOAT fHslider283;
	FAUSTFLOAT fHslider284;
	FAUSTFLOAT fHslider285;
	float fTempPerm223;
	FAUSTFLOAT fHslider286;
	FAUSTFLOAT fHslider287;
	FAUSTFLOAT fHslider288;
	FAUSTFLOAT fHslider289;
	float fTempPerm224;
	float fTempPerm225;
	FAUSTFLOAT fHslider290;
	FAUSTFLOAT fHslider291;
	FAUSTFLOAT fHslider292;
	FAUSTFLOAT fHslider293;
	float fTempPerm226;
	FAUSTFLOAT fHslider294;
	FAUSTFLOAT fHslider295;
	FAUSTFLOAT fHslider296;
	FAUSTFLOAT fHslider297;
	float fTempPerm227;
	FAUSTFLOAT fHslider298;
	FAUSTFLOAT fHslider299;
	FAUSTFLOAT fHslider300;
	FAUSTFLOAT fHslider301;
	float fTempPerm228;
	FAUSTFLOAT fHslider302;
	FAUSTFLOAT fHslider303;
	FAUSTFLOAT fHslider304;
	FAUSTFLOAT fHslider305;
	float fTempPerm229;
	float fTempPerm230;
	FAUSTFLOAT fHslider306;
	FAUSTFLOAT fHslider307;
	FAUSTFLOAT fHslider308;
	FAUSTFLOAT fHslider309;
	float fTempPerm231;
	FAUSTFLOAT fHslider310;
	FAUSTFLOAT fHslider311;
	FAUSTFLOAT fHslider312;
	FAUSTFLOAT fHslider313;
	float fTempPerm232;
	FAUSTFLOAT fHslider314;
	FAUSTFLOAT fHslider315;
	FAUSTFLOAT fHslider316;
	FAUSTFLOAT fHslider317;
	float fTempPerm233;
	FAUSTFLOAT fHslider318;
	FAUSTFLOAT fHslider319;
	FAUSTFLOAT fHslider320;
	FAUSTFLOAT fHslider321;
	float fTempPerm234;
	float fTempPerm235;
	FAUSTFLOAT fHslider322;
	FAUSTFLOAT fHslider323;
	FAUSTFLOAT fHslider324;
	FAUSTFLOAT fHslider325;
	float fTempPerm236;
	FAUSTFLOAT fHslider326;
	FAUSTFLOAT fHslider327;
	FAUSTFLOAT fHslider328;
	FAUSTFLOAT fHslider329;
	float fTempPerm237;
	FAUSTFLOAT fHslider330;
	FAUSTFLOAT fHslider331;
	FAUSTFLOAT fHslider332;
	FAUSTFLOAT fHslider333;
	float fTempPerm238;
	FAUSTFLOAT fHslider334;
	FAUSTFLOAT fHslider335;
	FAUSTFLOAT fHslider336;
	FAUSTFLOAT fHslider337;
	float fTempPerm239;
	float fTempPerm240;
	FAUSTFLOAT fHslider338;
	FAUSTFLOAT fHslider339;
	FAUSTFLOAT fHslider340;
	FAUSTFLOAT fHslider341;
	float fTempPerm241;
	FAUSTFLOAT fHslider342;
	FAUSTFLOAT fHslider343;
	FAUSTFLOAT fHslider344;
	FAUSTFLOAT fHslider345;
	float fTempPerm242;
	FAUSTFLOAT fHslider346;
	FAUSTFLOAT fHslider347;
	FAUSTFLOAT fHslider348;
	FAUSTFLOAT fHslider349;
	float fTempPerm243;
	FAUSTFLOAT fHslider350;
	FAUSTFLOAT fHslider351;
	FAUSTFLOAT fHslider352;
	FAUSTFLOAT fHslider353;
	float fTempPerm244;
	float fTempPerm245;
	float fTempPerm246;
	float fTempPerm247;
	float fTempPerm248;
	int iTempPerm249;
	FAUSTFLOAT fHslider354;
	FAUSTFLOAT fHslider355;
	FAUSTFLOAT fHslider356;
	FAUSTFLOAT fHslider357;
	float fTempPerm250;
	FAUSTFLOAT fHslider358;
	FAUSTFLOAT fHslider359;
	FAUSTFLOAT fHslider360;
	FAUSTFLOAT fHslider361;
	float fTempPerm251;
	FAUSTFLOAT fHslider362;
	FAUSTFLOAT fHslider363;
	FAUSTFLOAT fHslider364;
	FAUSTFLOAT fHslider365;
	float fTempPerm252;
	FAUSTFLOAT fHslider366;
	FAUSTFLOAT fHslider367;
	FAUSTFLOAT fHslider368;
	FAUSTFLOAT fHslider369;
	float fTempPerm253;
	float fTempPerm254;
	float fTempPerm255;
	float fTempPerm256;
	float fTempPerm257;
	float fRec63[2];
	float fTempPerm258;
	float fRec64[2];
	float fTempPerm259;
	float fTempPerm260;
	float fRec66[2];
	float fTempPerm261;
	float fRec67[2];
	float fRec68[2];
	float fTempPerm262;
	float fTempPerm263;
	float fTempPerm264;
	float fTempPerm265;
	float fTempPerm266;
	float fRec71[2];
	float fTempPerm267;
	float fRec72[2];
	float fTempPerm268;
	float fVec10[2];
	FAUSTFLOAT fHslider370;
	FAUSTFLOAT fHslider371;
	FAUSTFLOAT fHslider372;
	FAUSTFLOAT fHslider373;
	float fTempPerm269;
	FAUSTFLOAT fHslider374;
	FAUSTFLOAT fHslider375;
	FAUSTFLOAT fHslider376;
	FAUSTFLOAT fHslider377;
	float fTempPerm270;
	FAUSTFLOAT fHslider378;
	FAUSTFLOAT fHslider379;
	FAUSTFLOAT fHslider380;
	FAUSTFLOAT fHslider381;
	float fTempPerm271;
	FAUSTFLOAT fHslider382;
	FAUSTFLOAT fHslider383;
	FAUSTFLOAT fHslider384;
	FAUSTFLOAT fHslider385;
	float fTempPerm272;
	float fTempPerm273;
	float fTempPerm274;
	float fTempPerm275;
	float fTempPerm276;
	float fTempPerm277;
	float fRec74[2];
	float fTempPerm278;
	float fTempPerm279;
	float fTempPerm280;
	float fTempPerm281;
	float fVec11[2];
	int iTempPerm282;
	int iVec12[2];
	int iTempPerm283;
	float fRec79[2];
	float fTempPerm284;
	float fRec78[2];
	float fRec77[2];
	float fRec76[2];
	float fRec75[2];
	float fRec73[2];
	float fTempPerm285;
	float fTempPerm286;
	float fTempPerm287;
	float fTempPerm288;
	float fTempPerm289;
	float fTempPerm290;
	int iTempPerm291;
	float fTempPerm292;
	float fTempPerm293;
	float fTempPerm294;
	float fRec80[2];
	float fTempPerm295;
	float fRec81[2];
	float fTempPerm296;
	float fTempPerm297;
	float fRec83[2];
	float fTempPerm298;
	float fRec84[2];
	float fRec85[2];
	float fTempPerm299;
	float fTempPerm300;
	float fTempPerm301;
	float fTempPerm302;
	float fTempPerm303;
	float fRec88[2];
	float fTempPerm304;
	float fRec89[2];
	float fTempPerm305;
	float fVec13[2];
	float fTempPerm306;
	float fRec91[2];
	float fTempPerm307;
	float fTempPerm308;
	float fTempPerm309;
	float fTempPerm310;
	float fVec14[2];
	int iTempPerm311;
	int iVec15[2];
	int iTempPerm312;
	float fRec96[2];
	float fTempPerm313;
	float fRec95[2];
	float fRec94[2];
	float fRec93[2];
	float fRec92[2];
	float fRec90[2];
	float fTempPerm314;
	float fTempPerm315;
	float fTempPerm316;
	float fTempPerm317;
	float fTempPerm318;
	float fTempPerm319;
	float fTempPerm320;
	float fTempPerm321;
	float fTempPerm322;
	float fTempPerm323;
	float fTempPerm324;
	float fTempPerm325;
	float fTempPerm326;
	float fTempPerm327;
	float fTempPerm328;
	float fTempPerm329;
	float fTempPerm330;
	float fTempPerm331;
	float fTempPerm332;
	float fTempPerm333;
	float fTempPerm334;
	float fTempPerm335;
	float fTempPerm336;
	float fTempPerm337;
	float fTempPerm338;
	float fTempPerm339;
	float fTempPerm340;
	float fTempPerm341;
	float fTempPerm342;
	float fTempPerm343;
	float fTempPerm344;
	float fTempPerm345;
	float fTempPerm346;
	float fTempPerm347;
	float fTempPerm348;
	float fTempPerm349;
	float fTempPerm350;
	float fTempPerm351;
	float fTempPerm352;
	float fTempPerm353;
	float fTempPerm354;
	float fTempPerm355;
	float fTempPerm356;
	float fTempPerm357;
	float fTempPerm358;
	float fTempPerm359;
	float fTempPerm360;
	float fTempPerm361;
	float fTempPerm362;
	float fTempPerm363;
	float fTempPerm364;
	float fTempPerm365;
	float fTempPerm366;
	float fTempPerm367;
	float fTempPerm368;
	float fTempPerm369;
	float fTempPerm370;
	float fTempPerm371;
	float fTempPerm372;
	float fTempPerm373;
	float fTempPerm374;
	float fTempPerm375;
	float fTempPerm376;
	float fRec97[2];
	float fTempPerm377;
	float fTempPerm378;
	float fRec98[2];
	float fTempPerm379;
	float fTempPerm380;
	float fTempPerm381;
	float fRec3[2];
	FAUSTFLOAT fHslider386;
	FAUSTFLOAT fHslider387;
	FAUSTFLOAT fHslider388;
	FAUSTFLOAT fHslider389;
	float fTempPerm382;
	FAUSTFLOAT fHslider390;
	FAUSTFLOAT fHslider391;
	FAUSTFLOAT fHslider392;
	FAUSTFLOAT fHslider393;
	float fTempPerm383;
	FAUSTFLOAT fHslider394;
	FAUSTFLOAT fHslider395;
	FAUSTFLOAT fHslider396;
	FAUSTFLOAT fHslider397;
	float fTempPerm384;
	FAUSTFLOAT fHslider398;
	FAUSTFLOAT fHslider399;
	FAUSTFLOAT fHslider400;
	FAUSTFLOAT fHslider401;
	float fTempPerm385;
	float fTempPerm386;
	FAUSTFLOAT fHslider402;
	FAUSTFLOAT fHslider403;
	FAUSTFLOAT fHslider404;
	FAUSTFLOAT fHslider405;
	float fTempPerm387;
	FAUSTFLOAT fHslider406;
	FAUSTFLOAT fHslider407;
	FAUSTFLOAT fHslider408;
	FAUSTFLOAT fHslider409;
	float fTempPerm388;
	FAUSTFLOAT fHslider410;
	FAUSTFLOAT fHslider411;
	FAUSTFLOAT fHslider412;
	FAUSTFLOAT fHslider413;
	float fTempPerm389;
	FAUSTFLOAT fHslider414;
	FAUSTFLOAT fHslider415;
	FAUSTFLOAT fHslider416;
	FAUSTFLOAT fHslider417;
	float fTempPerm390;
	float fTempPerm391;
	FAUSTFLOAT fHslider418;
	FAUSTFLOAT fHslider419;
	FAUSTFLOAT fHslider420;
	FAUSTFLOAT fHslider421;
	float fTempPerm392;
	FAUSTFLOAT fHslider422;
	FAUSTFLOAT fHslider423;
	FAUSTFLOAT fHslider424;
	FAUSTFLOAT fHslider425;
	float fTempPerm393;
	FAUSTFLOAT fHslider426;
	FAUSTFLOAT fHslider427;
	FAUSTFLOAT fHslider428;
	FAUSTFLOAT fHslider429;
	float fTempPerm394;
	FAUSTFLOAT fHslider430;
	FAUSTFLOAT fHslider431;
	FAUSTFLOAT fHslider432;
	FAUSTFLOAT fHslider433;
	float fTempPerm395;
	float fTempPerm396;
	FAUSTFLOAT fHslider434;
	FAUSTFLOAT fHslider435;
	FAUSTFLOAT fHslider436;
	FAUSTFLOAT fHslider437;
	float fTempPerm397;
	FAUSTFLOAT fHslider438;
	FAUSTFLOAT fHslider439;
	FAUSTFLOAT fHslider440;
	FAUSTFLOAT fHslider441;
	float fTempPerm398;
	FAUSTFLOAT fHslider442;
	FAUSTFLOAT fHslider443;
	FAUSTFLOAT fHslider444;
	FAUSTFLOAT fHslider445;
	float fTempPerm399;
	FAUSTFLOAT fHslider446;
	FAUSTFLOAT fHslider447;
	FAUSTFLOAT fHslider448;
	FAUSTFLOAT fHslider449;
	float fTempPerm400;
	float fTempPerm401;
	FAUSTFLOAT fHslider450;
	FAUSTFLOAT fHslider451;
	FAUSTFLOAT fHslider452;
	FAUSTFLOAT fHslider453;
	float fTempPerm402;
	FAUSTFLOAT fHslider454;
	FAUSTFLOAT fHslider455;
	FAUSTFLOAT fHslider456;
	FAUSTFLOAT fHslider457;
	float fTempPerm403;
	FAUSTFLOAT fHslider458;
	FAUSTFLOAT fHslider459;
	FAUSTFLOAT fHslider460;
	FAUSTFLOAT fHslider461;
	float fTempPerm404;
	FAUSTFLOAT fHslider462;
	FAUSTFLOAT fHslider463;
	FAUSTFLOAT fHslider464;
	FAUSTFLOAT fHslider465;
	float fTempPerm405;
	float fTempPerm406;
	float fTempPerm407;
	float fTempPerm408;
	float fTempPerm409;
	int iTempPerm410;
	FAUSTFLOAT fHslider466;
	FAUSTFLOAT fHslider467;
	FAUSTFLOAT fHslider468;
	FAUSTFLOAT fHslider469;
	float fTempPerm411;
	FAUSTFLOAT fHslider470;
	FAUSTFLOAT fHslider471;
	FAUSTFLOAT fHslider472;
	FAUSTFLOAT fHslider473;
	float fTempPerm412;
	FAUSTFLOAT fHslider474;
	FAUSTFLOAT fHslider475;
	FAUSTFLOAT fHslider476;
	FAUSTFLOAT fHslider477;
	float fTempPerm413;
	FAUSTFLOAT fHslider478;
	FAUSTFLOAT fHslider479;
	FAUSTFLOAT fHslider480;
	FAUSTFLOAT fHslider481;
	float fTempPerm414;
	float fTempPerm415;
	float fTempPerm416;
	float fTempPerm417;
	float fTempPerm418;
	float fRec99[2];
	float fTempPerm419;
	float fRec100[2];
	float fTempPerm420;
	float fTempPerm421;
	float fRec102[2];
	float fTempPerm422;
	float fRec103[2];
	float fRec104[2];
	float fTempPerm423;
	float fTempPerm424;
	float fTempPerm425;
	float fTempPerm426;
	float fTempPerm427;
	float fRec107[2];
	float fTempPerm428;
	float fRec108[2];
	float fTempPerm429;
	float fVec16[2];
	FAUSTFLOAT fHslider482;
	FAUSTFLOAT fHslider483;
	FAUSTFLOAT fHslider484;
	FAUSTFLOAT fHslider485;
	float fTempPerm430;
	FAUSTFLOAT fHslider486;
	FAUSTFLOAT fHslider487;
	FAUSTFLOAT fHslider488;
	FAUSTFLOAT fHslider489;
	float fTempPerm431;
	FAUSTFLOAT fHslider490;
	FAUSTFLOAT fHslider491;
	FAUSTFLOAT fHslider492;
	FAUSTFLOAT fHslider493;
	float fTempPerm432;
	FAUSTFLOAT fHslider494;
	FAUSTFLOAT fHslider495;
	FAUSTFLOAT fHslider496;
	FAUSTFLOAT fHslider497;
	float fTempPerm433;
	float fTempPerm434;
	float fTempPerm435;
	float fTempPerm436;
	float fTempPerm437;
	float fTempPerm438;
	float fRec110[2];
	float fTempPerm439;
	float fTempPerm440;
	float fTempPerm441;
	float fTempPerm442;
	float fVec17[2];
	int iTempPerm443;
	int iVec18[2];
	int iTempPerm444;
	float fRec115[2];
	float fTempPerm445;
	float fRec114[2];
	float fRec113[2];
	float fRec112[2];
	float fRec111[2];
	float fRec109[2];
	float fTempPerm446;
	float fTempPerm447;
	float fTempPerm448;
	float fTempPerm449;
	float fTempPerm450;
	float fTempPerm451;
	int iTempPerm452;
	float fTempPerm453;
	float fTempPerm454;
	float fTempPerm455;
	float fRec116[2];
	float fTempPerm456;
	float fRec117[2];
	float fTempPerm457;
	float fTempPerm458;
	float fRec119[2];
	float fTempPerm459;
	float fRec120[2];
	float fRec121[2];
	float fTempPerm460;
	float fTempPerm461;
	float fTempPerm462;
	float fTempPerm463;
	float fTempPerm464;
	float fRec124[2];
	float fTempPerm465;
	float fRec125[2];
	float fTempPerm466;
	float fVec19[2];
	float fTempPerm467;
	float fRec127[2];
	float fTempPerm468;
	float fTempPerm469;
	float fTempPerm470;
	float fTempPerm471;
	float fVec20[2];
	int iTempPerm472;
	int iVec21[2];
	int iTempPerm473;
	float fRec132[2];
	float fTempPerm474;
	float fRec131[2];
	float fRec130[2];
	float fRec129[2];
	float fRec128[2];
	float fRec126[2];
	float fTempPerm475;
	float fTempPerm476;
	float fTempPerm477;
	float fTempPerm478;
	float fTempPerm479;
	float fTempPerm480;
	float fTempPerm481;
	float fTempPerm482;
	float fTempPerm483;
	float fTempPerm484;
	float fTempPerm485;
	float fTempPerm486;
	float fTempPerm487;
	float fTempPerm488;
	float fTempPerm489;
	float fTempPerm490;
	float fTempPerm491;
	float fTempPerm492;
	float fTempPerm493;
	float fTempPerm494;
	float fTempPerm495;
	float fTempPerm496;
	float fTempPerm497;
	float fTempPerm498;
	float fTempPerm499;
	float fTempPerm500;
	float fTempPerm501;
	float fTempPerm502;
	float fTempPerm503;
	float fTempPerm504;
	float fTempPerm505;
	float fTempPerm506;
	float fTempPerm507;
	float fTempPerm508;
	float fTempPerm509;
	float fTempPerm510;
	float fTempPerm511;
	float fTempPerm512;
	float fTempPerm513;
	float fTempPerm514;
	float fTempPerm515;
	float fTempPerm516;
	float fTempPerm517;
	float fTempPerm518;
	float fTempPerm519;
	float fTempPerm520;
	float fTempPerm521;
	float fTempPerm522;
	float fTempPerm523;
	float fTempPerm524;
	float fTempPerm525;
	float fTempPerm526;
	float fTempPerm527;
	float fTempPerm528;
	float fTempPerm529;
	float fTempPerm530;
	float fTempPerm531;
	float fTempPerm532;
	float fTempPerm533;
	float fTempPerm534;
	float fTempPerm535;
	float fTempPerm536;
	float fTempPerm537;
	float fRec133[2];
	float fTempPerm538;
	float fTempPerm539;
	float fRec134[2];
	float fTempPerm540;
	float fTempPerm541;
	float fTempPerm542;
	float fRec4[2];
	FAUSTFLOAT fHslider498;
	FAUSTFLOAT fHslider499;
	FAUSTFLOAT fHslider500;
	FAUSTFLOAT fHslider501;
	float fTempPerm543;
	FAUSTFLOAT fHslider502;
	FAUSTFLOAT fHslider503;
	FAUSTFLOAT fHslider504;
	FAUSTFLOAT fHslider505;
	float fTempPerm544;
	FAUSTFLOAT fHslider506;
	FAUSTFLOAT fHslider507;
	FAUSTFLOAT fHslider508;
	FAUSTFLOAT fHslider509;
	float fTempPerm545;
	FAUSTFLOAT fHslider510;
	FAUSTFLOAT fHslider511;
	FAUSTFLOAT fHslider512;
	FAUSTFLOAT fHslider513;
	float fTempPerm546;
	float fTempPerm547;
	FAUSTFLOAT fHslider514;
	FAUSTFLOAT fHslider515;
	FAUSTFLOAT fHslider516;
	FAUSTFLOAT fHslider517;
	float fTempPerm548;
	FAUSTFLOAT fHslider518;
	FAUSTFLOAT fHslider519;
	FAUSTFLOAT fHslider520;
	FAUSTFLOAT fHslider521;
	float fTempPerm549;
	FAUSTFLOAT fHslider522;
	FAUSTFLOAT fHslider523;
	FAUSTFLOAT fHslider524;
	FAUSTFLOAT fHslider525;
	float fTempPerm550;
	FAUSTFLOAT fHslider526;
	FAUSTFLOAT fHslider527;
	FAUSTFLOAT fHslider528;
	FAUSTFLOAT fHslider529;
	float fTempPerm551;
	float fTempPerm552;
	FAUSTFLOAT fHslider530;
	FAUSTFLOAT fHslider531;
	FAUSTFLOAT fHslider532;
	FAUSTFLOAT fHslider533;
	float fTempPerm553;
	FAUSTFLOAT fHslider534;
	FAUSTFLOAT fHslider535;
	FAUSTFLOAT fHslider536;
	FAUSTFLOAT fHslider537;
	float fTempPerm554;
	FAUSTFLOAT fHslider538;
	FAUSTFLOAT fHslider539;
	FAUSTFLOAT fHslider540;
	FAUSTFLOAT fHslider541;
	float fTempPerm555;
	FAUSTFLOAT fHslider542;
	FAUSTFLOAT fHslider543;
	FAUSTFLOAT fHslider544;
	FAUSTFLOAT fHslider545;
	float fTempPerm556;
	float fTempPerm557;
	FAUSTFLOAT fHslider546;
	FAUSTFLOAT fHslider547;
	FAUSTFLOAT fHslider548;
	FAUSTFLOAT fHslider549;
	float fTempPerm558;
	FAUSTFLOAT fHslider550;
	FAUSTFLOAT fHslider551;
	FAUSTFLOAT fHslider552;
	FAUSTFLOAT fHslider553;
	float fTempPerm559;
	FAUSTFLOAT fHslider554;
	FAUSTFLOAT fHslider555;
	FAUSTFLOAT fHslider556;
	FAUSTFLOAT fHslider557;
	float fTempPerm560;
	FAUSTFLOAT fHslider558;
	FAUSTFLOAT fHslider559;
	FAUSTFLOAT fHslider560;
	FAUSTFLOAT fHslider561;
	float fTempPerm561;
	float fTempPerm562;
	FAUSTFLOAT fHslider562;
	FAUSTFLOAT fHslider563;
	FAUSTFLOAT fHslider564;
	FAUSTFLOAT fHslider565;
	float fTempPerm563;
	FAUSTFLOAT fHslider566;
	FAUSTFLOAT fHslider567;
	FAUSTFLOAT fHslider568;
	FAUSTFLOAT fHslider569;
	float fTempPerm564;
	FAUSTFLOAT fHslider570;
	FAUSTFLOAT fHslider571;
	FAUSTFLOAT fHslider572;
	FAUSTFLOAT fHslider573;
	float fTempPerm565;
	FAUSTFLOAT fHslider574;
	FAUSTFLOAT fHslider575;
	FAUSTFLOAT fHslider576;
	FAUSTFLOAT fHslider577;
	float fTempPerm566;
	float fTempPerm567;
	float fTempPerm568;
	float fTempPerm569;
	float fTempPerm570;
	int iTempPerm571;
	FAUSTFLOAT fHslider578;
	FAUSTFLOAT fHslider579;
	FAUSTFLOAT fHslider580;
	FAUSTFLOAT fHslider581;
	float fTempPerm572;
	FAUSTFLOAT fHslider582;
	FAUSTFLOAT fHslider583;
	FAUSTFLOAT fHslider584;
	FAUSTFLOAT fHslider585;
	float fTempPerm573;
	FAUSTFLOAT fHslider586;
	FAUSTFLOAT fHslider587;
	FAUSTFLOAT fHslider588;
	FAUSTFLOAT fHslider589;
	float fTempPerm574;
	FAUSTFLOAT fHslider590;
	FAUSTFLOAT fHslider591;
	FAUSTFLOAT fHslider592;
	FAUSTFLOAT fHslider593;
	float fTempPerm575;
	float fTempPerm576;
	float fTempPerm577;
	float fTempPerm578;
	float fTempPerm579;
	float fRec135[2];
	float fTempPerm580;
	float fRec136[2];
	float fTempPerm581;
	float fTempPerm582;
	float fRec138[2];
	float fTempPerm583;
	float fRec139[2];
	float fRec140[2];
	float fTempPerm584;
	float fTempPerm585;
	float fTempPerm586;
	float fTempPerm587;
	float fTempPerm588;
	float fRec143[2];
	float fTempPerm589;
	float fRec144[2];
	float fTempPerm590;
	float fVec22[2];
	FAUSTFLOAT fHslider594;
	FAUSTFLOAT fHslider595;
	FAUSTFLOAT fHslider596;
	FAUSTFLOAT fHslider597;
	float fTempPerm591;
	FAUSTFLOAT fHslider598;
	FAUSTFLOAT fHslider599;
	FAUSTFLOAT fHslider600;
	FAUSTFLOAT fHslider601;
	float fTempPerm592;
	FAUSTFLOAT fHslider602;
	FAUSTFLOAT fHslider603;
	FAUSTFLOAT fHslider604;
	FAUSTFLOAT fHslider605;
	float fTempPerm593;
	FAUSTFLOAT fHslider606;
	FAUSTFLOAT fHslider607;
	FAUSTFLOAT fHslider608;
	FAUSTFLOAT fHslider609;
	float fTempPerm594;
	float fTempPerm595;
	float fTempPerm596;
	float fTempPerm597;
	float fTempPerm598;
	float fTempPerm599;
	float fRec146[2];
	float fTempPerm600;
	float fTempPerm601;
	float fTempPerm602;
	float fTempPerm603;
	float fVec23[2];
	int iTempPerm604;
	int iVec24[2];
	int iTempPerm605;
	float fRec151[2];
	float fTempPerm606;
	float fRec150[2];
	float fRec149[2];
	float fRec148[2];
	float fRec147[2];
	float fRec145[2];
	float fTempPerm607;
	float fTempPerm608;
	float fTempPerm609;
	float fTempPerm610;
	float fTempPerm611;
	float fTempPerm612;
	int iTempPerm613;
	float fTempPerm614;
	float fTempPerm615;
	float fTempPerm616;
	float fRec152[2];
	float fTempPerm617;
	float fRec153[2];
	float fTempPerm618;
	float fTempPerm619;
	float fRec155[2];
	float fTempPerm620;
	float fRec156[2];
	float fRec157[2];
	float fTempPerm621;
	float fTempPerm622;
	float fTempPerm623;
	float fTempPerm624;
	float fTempPerm625;
	float fRec160[2];
	float fTempPerm626;
	float fRec161[2];
	float fTempPerm627;
	float fVec25[2];
	float fTempPerm628;
	float fRec163[2];
	float fTempPerm629;
	float fTempPerm630;
	float fTempPerm631;
	float fTempPerm632;
	float fVec26[2];
	int iTempPerm633;
	int iVec27[2];
	int iTempPerm634;
	float fRec168[2];
	float fTempPerm635;
	float fRec167[2];
	float fRec166[2];
	float fRec165[2];
	float fRec164[2];
	float fRec162[2];
	float fTempPerm636;
	float fTempPerm637;
	float fTempPerm638;
	float fTempPerm639;
	float fTempPerm640;
	float fTempPerm641;
	float fTempPerm642;
	float fTempPerm643;
	float fTempPerm644;
	float fTempPerm645;
	float fTempPerm646;
	float fTempPerm647;
	float fTempPerm648;
	float fTempPerm649;
	float fTempPerm650;
	float fTempPerm651;
	float fTempPerm652;
	float fTempPerm653;
	float fTempPerm654;
	float fTempPerm655;
	float fTempPerm656;
	float fTempPerm657;
	float fTempPerm658;
	float fTempPerm659;
	float fTempPerm660;
	float fTempPerm661;
	float fTempPerm662;
	float fTempPerm663;
	float fTempPerm664;
	float fTempPerm665;
	float fTempPerm666;
	float fTempPerm667;
	float fTempPerm668;
	float fTempPerm669;
	float fTempPerm670;
	float fTempPerm671;
	float fTempPerm672;
	float fTempPerm673;
	float fTempPerm674;
	float fTempPerm675;
	float fTempPerm676;
	float fTempPerm677;
	float fTempPerm678;
	float fTempPerm679;
	float fTempPerm680;
	float fTempPerm681;
	float fTempPerm682;
	float fTempPerm683;
	float fTempPerm684;
	float fTempPerm685;
	float fTempPerm686;
	float fTempPerm687;
	float fTempPerm688;
	float fTempPerm689;
	float fTempPerm690;
	float fTempPerm691;
	float fTempPerm692;
	float fTempPerm693;
	float fTempPerm694;
	float fTempPerm695;
	float fTempPerm696;
	float fTempPerm697;
	float fTempPerm698;
	float fRec169[2];
	float fTempPerm699;
	float fTempPerm700;
	float fRec170[2];
	float fTempPerm701;
	float fTempPerm702;
	float fTempPerm703;
	float fRec5[2];
	FAUSTFLOAT fHslider610;
	FAUSTFLOAT fHslider611;
	FAUSTFLOAT fHslider612;
	FAUSTFLOAT fHslider613;
	FAUSTFLOAT fHslider614;
	FAUSTFLOAT fHslider615;
	FAUSTFLOAT fHslider616;
	FAUSTFLOAT fHslider617;
	FAUSTFLOAT fHslider618;
	FAUSTFLOAT fHslider619;
	FAUSTFLOAT fHslider620;
	FAUSTFLOAT fHslider621;
	FAUSTFLOAT fHslider622;
	FAUSTFLOAT fHslider623;
	FAUSTFLOAT fHslider624;
	FAUSTFLOAT fHslider625;
	FAUSTFLOAT fHslider626;
	FAUSTFLOAT fHslider627;
	FAUSTFLOAT fHslider628;
	FAUSTFLOAT fHslider629;
	FAUSTFLOAT fHslider630;
	FAUSTFLOAT fHslider631;
	FAUSTFLOAT fHslider632;
	FAUSTFLOAT fHslider633;
	FAUSTFLOAT fHslider634;
	FAUSTFLOAT fHslider635;
	FAUSTFLOAT fHslider636;
	FAUSTFLOAT fHslider637;
	FAUSTFLOAT fHslider638;
	FAUSTFLOAT fHslider639;
	FAUSTFLOAT fHslider640;
	FAUSTFLOAT fHslider641;
	float fTempPerm704;
	float fTempPerm705;
	float fTempPerm706;
	float fTempPerm707;
	float fTempPerm708;
	float fTempPerm709;
	float fTempPerm710;
	float fTempPerm711;
	float fTempPerm712;
	float fTempPerm713;
	float fTempPerm714;
	float fTempPerm715;
	float fTempPerm716;
	float fTempPerm717;
	float fTempPerm718;
	float fTempPerm719;
	int iTempPerm720;
	float fTempPerm721;
	float fTempPerm722;
	float fTempPerm723;
	float fTempPerm724;
	float fTempPerm725;
	float fTempPerm726;
	float fTempPerm727;
	float fRec175[2];
	float fTempPerm728;
	float fRec176[2];
	float fTempPerm729;
	float fTempPerm730;
	float fTempPerm731;
	float fTempPerm732;
	float fTempPerm733;
	float fTempPerm734;
	float fTempPerm735;
	float fTempPerm736;
	float fTempPerm737;
	float fRec178[2];
	float fTempPerm738;
	float fRec179[2];
	float fRec180[2];
	float fTempPerm739;
	float fTempPerm740;
	float fTempPerm741;
	float fTempPerm742;
	float fTempPerm743;
	float fTempPerm744;
	float fTempPerm745;
	float fRec183[2];
	float fTempPerm746;
	float fRec184[2];
	float fTempPerm747;
	float fTempPerm748;
	float fTempPerm749;
	float fVec28[2];
	float fTempPerm750;
	float fTempPerm751;
	float fTempPerm752;
	float fTempPerm753;
	float fTempPerm754;
	float fRec186[2];
	float fTempPerm755;
	float fTempPerm756;
	float fTempPerm757;
	float fTempPerm758;
	float fVec29[2];
	int iTempPerm759;
	int iVec30[2];
	int iTempPerm760;
	float fRec191[2];
	float fTempPerm761;
	float fRec190[2];
	float fRec189[2];
	float fRec188[2];
	float fRec187[2];
	float fRec185[2];
	float fTempPerm762;
	float fTempPerm763;
	float fTempPerm764;
	float fTempPerm765;
	float fTempPerm766;
	float fTempPerm767;
	int iTempPerm768;
	float fTempPerm769;
	float fTempPerm770;
	float fTempPerm771;
	float fRec192[2];
	float fTempPerm772;
	float fRec193[2];
	float fTempPerm773;
	float fTempPerm774;
	float fTempPerm775;
	float fRec195[2];
	float fTempPerm776;
	float fRec196[2];
	float fRec197[2];
	float fTempPerm777;
	float fTempPerm778;
	float fTempPerm779;
	float fTempPerm780;
	float fTempPerm781;
	float fRec200[2];
	float fTempPerm782;
	float fRec201[2];
	float fTempPerm783;
	float fVec31[2];
	float fTempPerm784;
	float fRec203[2];
	float fTempPerm785;
	float fTempPerm786;
	float fTempPerm787;
	float fTempPerm788;
	float fVec32[2];
	int iTempPerm789;
	int iVec33[2];
	int iTempPerm790;
	float fRec208[2];
	float fTempPerm791;
	float fRec207[2];
	float fRec206[2];
	float fRec205[2];
	float fRec204[2];
	float fRec202[2];
	float fTempPerm792;
	float fTempPerm793;
	float fTempPerm794;
	float fTempPerm795;
	float fTempPerm796;
	float fTempPerm797;
	float fTempPerm798;
	float fTempPerm799;
	float fTempPerm800;
	float fTempPerm801;
	float fTempPerm802;
	float fTempPerm803;
	float fTempPerm804;
	float fTempPerm805;
	float fTempPerm806;
	float fTempPerm807;
	float fTempPerm808;
	float fTempPerm809;
	float fTempPerm810;
	float fTempPerm811;
	float fTempPerm812;
	float fTempPerm813;
	float fTempPerm814;
	float fTempPerm815;
	float fTempPerm816;
	float fTempPerm817;
	float fTempPerm818;
	float fTempPerm819;
	float fTempPerm820;
	float fTempPerm821;
	float fTempPerm822;
	float fTempPerm823;
	float fTempPerm824;
	float fTempPerm825;
	float fTempPerm826;
	float fTempPerm827;
	float fTempPerm828;
	float fTempPerm829;
	float fTempPerm830;
	float fTempPerm831;
	float fTempPerm832;
	float fTempPerm833;
	float fTempPerm834;
	float fTempPerm835;
	float fTempPerm836;
	float fTempPerm837;
	float fTempPerm838;
	float fTempPerm839;
	float fTempPerm840;
	float fTempPerm841;
	float fTempPerm842;
	float fTempPerm843;
	float fTempPerm844;
	float fTempPerm845;
	float fTempPerm846;
	float fTempPerm847;
	float fTempPerm848;
	float fTempPerm849;
	float fTempPerm850;
	float fTempPerm851;
	float fTempPerm852;
	float fTempPerm853;
	float fTempPerm854;
	float fRec209[2];
	float fTempPerm855;
	float fTempPerm856;
	float fRec210[2];
	float fTempPerm857;
	float fTempPerm858;
	float fTempPerm859;
	float fRec171[2];
	float fTempPerm860;
	float fTempPerm861;
	float fTempPerm862;
	float fTempPerm863;
	float fTempPerm864;
	float fTempPerm865;
	float fTempPerm866;
	float fTempPerm867;
	int iTempPerm868;
	float fTempPerm869;
	float fTempPerm870;
	float fTempPerm871;
	float fTempPerm872;
	float fRec211[2];
	float fTempPerm873;
	float fRec212[2];
	float fTempPerm874;
	float fTempPerm875;
	float fRec214[2];
	float fTempPerm876;
	float fRec215[2];
	float fRec216[2];
	float fTempPerm877;
	float fTempPerm878;
	float fTempPerm879;
	float fTempPerm880;
	float fTempPerm881;
	float fRec219[2];
	float fTempPerm882;
	float fRec220[2];
	float fTempPerm883;
	float fVec34[2];
	float fTempPerm884;
	float fTempPerm885;
	float fTempPerm886;
	float fTempPerm887;
	float fTempPerm888;
	float fRec222[2];
	float fTempPerm889;
	float fTempPerm890;
	float fTempPerm891;
	float fTempPerm892;
	float fVec35[2];
	int iTempPerm893;
	int iVec36[2];
	int iTempPerm894;
	float fRec227[2];
	float fTempPerm895;
	float fRec226[2];
	float fRec225[2];
	float fRec224[2];
	float fRec223[2];
	float fRec221[2];
	float fTempPerm896;
	float fTempPerm897;
	float fTempPerm898;
	float fTempPerm899;
	float fTempPerm900;
	float fTempPerm901;
	int iTempPerm902;
	float fTempPerm903;
	float fTempPerm904;
	float fTempPerm905;
	float fRec228[2];
	float fTempPerm906;
	float fRec229[2];
	float fTempPerm907;
	float fTempPerm908;
	float fRec231[2];
	float fTempPerm909;
	float fRec232[2];
	float fRec233[2];
	float fTempPerm910;
	float fTempPerm911;
	float fTempPerm912;
	float fTempPerm913;
	float fTempPerm914;
	float fRec236[2];
	float fTempPerm915;
	float fRec237[2];
	float fTempPerm916;
	float fVec37[2];
	float fTempPerm917;
	float fRec239[2];
	float fTempPerm918;
	float fTempPerm919;
	float fTempPerm920;
	float fTempPerm921;
	float fVec38[2];
	int iTempPerm922;
	int iVec39[2];
	int iTempPerm923;
	float fRec244[2];
	float fTempPerm924;
	float fRec243[2];
	float fRec242[2];
	float fRec241[2];
	float fRec240[2];
	float fRec238[2];
	float fTempPerm925;
	float fTempPerm926;
	float fTempPerm927;
	float fTempPerm928;
	float fTempPerm929;
	float fTempPerm930;
	float fTempPerm931;
	float fTempPerm932;
	float fTempPerm933;
	float fTempPerm934;
	float fTempPerm935;
	float fTempPerm936;
	float fTempPerm937;
	float fTempPerm938;
	float fTempPerm939;
	float fTempPerm940;
	float fTempPerm941;
	float fTempPerm942;
	float fTempPerm943;
	float fTempPerm944;
	float fTempPerm945;
	float fTempPerm946;
	float fTempPerm947;
	float fTempPerm948;
	float fTempPerm949;
	float fTempPerm950;
	float fTempPerm951;
	float fTempPerm952;
	float fTempPerm953;
	float fTempPerm954;
	float fTempPerm955;
	float fTempPerm956;
	float fTempPerm957;
	float fTempPerm958;
	float fTempPerm959;
	float fTempPerm960;
	float fTempPerm961;
	float fTempPerm962;
	float fTempPerm963;
	float fTempPerm964;
	float fTempPerm965;
	float fTempPerm966;
	float fTempPerm967;
	float fTempPerm968;
	float fTempPerm969;
	float fTempPerm970;
	float fTempPerm971;
	float fTempPerm972;
	float fTempPerm973;
	float fTempPerm974;
	float fTempPerm975;
	float fTempPerm976;
	float fTempPerm977;
	float fTempPerm978;
	float fTempPerm979;
	float fTempPerm980;
	float fTempPerm981;
	float fTempPerm982;
	float fTempPerm983;
	float fTempPerm984;
	float fTempPerm985;
	float fTempPerm986;
	float fTempPerm987;
	float fRec245[2];
	float fTempPerm988;
	float fTempPerm989;
	float fRec246[2];
	float fTempPerm990;
	float fTempPerm991;
	float fTempPerm992;
	float fRec172[2];
	float fTempPerm993;
	float fTempPerm994;
	float fTempPerm995;
	float fTempPerm996;
	float fTempPerm997;
	float fTempPerm998;
	float fTempPerm999;
	float fTempPerm1000;
	int iTempPerm1001;
	float fTempPerm1002;
	float fTempPerm1003;
	float fTempPerm1004;
	float fTempPerm1005;
	float fRec247[2];
	float fTempPerm1006;
	float fRec248[2];
	float fTempPerm1007;
	float fTempPerm1008;
	float fRec250[2];
	float fTempPerm1009;
	float fRec251[2];
	float fRec252[2];
	float fTempPerm1010;
	float fTempPerm1011;
	float fTempPerm1012;
	float fTempPerm1013;
	float fTempPerm1014;
	float fRec255[2];
	float fTempPerm1015;
	float fRec256[2];
	float fTempPerm1016;
	float fVec40[2];
	float fTempPerm1017;
	float fTempPerm1018;
	float fTempPerm1019;
	float fTempPerm1020;
	float fTempPerm1021;
	float fRec258[2];
	float fTempPerm1022;
	float fTempPerm1023;
	float fTempPerm1024;
	float fTempPerm1025;
	float fVec41[2];
	int iTempPerm1026;
	int iVec42[2];
	int iTempPerm1027;
	float fRec263[2];
	float fTempPerm1028;
	float fRec262[2];
	float fRec261[2];
	float fRec260[2];
	float fRec259[2];
	float fRec257[2];
	float fTempPerm1029;
	float fTempPerm1030;
	float fTempPerm1031;
	float fTempPerm1032;
	float fTempPerm1033;
	float fTempPerm1034;
	int iTempPerm1035;
	float fTempPerm1036;
	float fTempPerm1037;
	float fTempPerm1038;
	float fRec264[2];
	float fTempPerm1039;
	float fRec265[2];
	float fTempPerm1040;
	float fTempPerm1041;
	float fRec267[2];
	float fTempPerm1042;
	float fRec268[2];
	float fRec269[2];
	float fTempPerm1043;
	float fTempPerm1044;
	float fTempPerm1045;
	float fTempPerm1046;
	float fTempPerm1047;
	float fRec272[2];
	float fTempPerm1048;
	float fRec273[2];
	float fTempPerm1049;
	float fVec43[2];
	float fTempPerm1050;
	float fRec275[2];
	float fTempPerm1051;
	float fTempPerm1052;
	float fTempPerm1053;
	float fTempPerm1054;
	float fVec44[2];
	int iTempPerm1055;
	int iVec45[2];
	int iTempPerm1056;
	float fRec280[2];
	float fTempPerm1057;
	float fRec279[2];
	float fRec278[2];
	float fRec277[2];
	float fRec276[2];
	float fRec274[2];
	float fTempPerm1058;
	float fTempPerm1059;
	float fTempPerm1060;
	float fTempPerm1061;
	float fTempPerm1062;
	float fTempPerm1063;
	float fTempPerm1064;
	float fTempPerm1065;
	float fTempPerm1066;
	float fTempPerm1067;
	float fTempPerm1068;
	float fTempPerm1069;
	float fTempPerm1070;
	float fTempPerm1071;
	float fTempPerm1072;
	float fTempPerm1073;
	float fTempPerm1074;
	float fTempPerm1075;
	float fTempPerm1076;
	float fTempPerm1077;
	float fTempPerm1078;
	float fTempPerm1079;
	float fTempPerm1080;
	float fTempPerm1081;
	float fTempPerm1082;
	float fTempPerm1083;
	float fTempPerm1084;
	float fTempPerm1085;
	float fTempPerm1086;
	float fTempPerm1087;
	float fTempPerm1088;
	float fTempPerm1089;
	float fTempPerm1090;
	float fTempPerm1091;
	float fTempPerm1092;
	float fTempPerm1093;
	float fTempPerm1094;
	float fTempPerm1095;
	float fTempPerm1096;
	float fTempPerm1097;
	float fTempPerm1098;
	float fTempPerm1099;
	float fTempPerm1100;
	float fTempPerm1101;
	float fTempPerm1102;
	float fTempPerm1103;
	float fTempPerm1104;
	float fTempPerm1105;
	float fTempPerm1106;
	float fTempPerm1107;
	float fTempPerm1108;
	float fTempPerm1109;
	float fTempPerm1110;
	float fTempPerm1111;
	float fTempPerm1112;
	float fTempPerm1113;
	float fTempPerm1114;
	float fTempPerm1115;
	float fTempPerm1116;
	float fTempPerm1117;
	float fTempPerm1118;
	float fTempPerm1119;
	float fTempPerm1120;
	float fRec281[2];
	float fTempPerm1121;
	float fTempPerm1122;
	float fRec282[2];
	float fTempPerm1123;
	float fTempPerm1124;
	float fTempPerm1125;
	float fRec173[2];
	float fTempPerm1126;
	float fTempPerm1127;
	float fTempPerm1128;
	float fTempPerm1129;
	float fTempPerm1130;
	float fTempPerm1131;
	float fTempPerm1132;
	float fTempPerm1133;
	int iTempPerm1134;
	float fTempPerm1135;
	float fTempPerm1136;
	float fTempPerm1137;
	float fTempPerm1138;
	float fRec283[2];
	float fTempPerm1139;
	float fRec284[2];
	float fTempPerm1140;
	float fTempPerm1141;
	float fRec286[2];
	float fTempPerm1142;
	float fRec287[2];
	float fRec288[2];
	float fTempPerm1143;
	float fTempPerm1144;
	float fTempPerm1145;
	float fTempPerm1146;
	float fTempPerm1147;
	float fRec291[2];
	float fTempPerm1148;
	float fRec292[2];
	float fTempPerm1149;
	float fVec46[2];
	float fTempPerm1150;
	float fTempPerm1151;
	float fTempPerm1152;
	float fTempPerm1153;
	float fTempPerm1154;
	float fRec294[2];
	float fTempPerm1155;
	float fTempPerm1156;
	float fTempPerm1157;
	float fTempPerm1158;
	float fVec47[2];
	int iTempPerm1159;
	int iVec48[2];
	int iTempPerm1160;
	float fRec299[2];
	float fTempPerm1161;
	float fRec298[2];
	float fRec297[2];
	float fRec296[2];
	float fRec295[2];
	float fRec293[2];
	float fTempPerm1162;
	float fTempPerm1163;
	float fTempPerm1164;
	float fTempPerm1165;
	float fTempPerm1166;
	float fTempPerm1167;
	int iTempPerm1168;
	float fTempPerm1169;
	float fTempPerm1170;
	float fTempPerm1171;
	float fRec300[2];
	float fTempPerm1172;
	float fRec301[2];
	float fTempPerm1173;
	float fTempPerm1174;
	float fRec303[2];
	float fTempPerm1175;
	float fRec304[2];
	float fRec305[2];
	float fTempPerm1176;
	float fTempPerm1177;
	float fTempPerm1178;
	float fTempPerm1179;
	float fTempPerm1180;
	float fRec308[2];
	float fTempPerm1181;
	float fRec309[2];
	float fTempPerm1182;
	float fVec49[2];
	float fTempPerm1183;
	float fRec311[2];
	float fTempPerm1184;
	float fTempPerm1185;
	float fTempPerm1186;
	float fTempPerm1187;
	float fVec50[2];
	int iTempPerm1188;
	int iVec51[2];
	int iTempPerm1189;
	float fRec316[2];
	float fTempPerm1190;
	float fRec315[2];
	float fRec314[2];
	float fRec313[2];
	float fRec312[2];
	float fRec310[2];
	float fTempPerm1191;
	float fTempPerm1192;
	float fTempPerm1193;
	float fTempPerm1194;
	float fTempPerm1195;
	float fTempPerm1196;
	float fTempPerm1197;
	float fTempPerm1198;
	float fTempPerm1199;
	float fTempPerm1200;
	float fTempPerm1201;
	float fTempPerm1202;
	float fTempPerm1203;
	float fTempPerm1204;
	float fTempPerm1205;
	float fTempPerm1206;
	float fTempPerm1207;
	float fTempPerm1208;
	float fTempPerm1209;
	float fTempPerm1210;
	float fTempPerm1211;
	float fTempPerm1212;
	float fTempPerm1213;
	float fTempPerm1214;
	float fTempPerm1215;
	float fTempPerm1216;
	float fTempPerm1217;
	float fTempPerm1218;
	float fTempPerm1219;
	float fTempPerm1220;
	float fTempPerm1221;
	float fTempPerm1222;
	float fTempPerm1223;
	float fTempPerm1224;
	float fTempPerm1225;
	float fTempPerm1226;
	float fTempPerm1227;
	float fTempPerm1228;
	float fTempPerm1229;
	float fTempPerm1230;
	float fTempPerm1231;
	float fTempPerm1232;
	float fTempPerm1233;
	float fTempPerm1234;
	float fTempPerm1235;
	float fTempPerm1236;
	float fTempPerm1237;
	float fTempPerm1238;
	float fTempPerm1239;
	float fTempPerm1240;
	float fTempPerm1241;
	float fTempPerm1242;
	float fTempPerm1243;
	float fTempPerm1244;
	float fTempPerm1245;
	float fTempPerm1246;
	float fTempPerm1247;
	float fTempPerm1248;
	float fTempPerm1249;
	float fTempPerm1250;
	float fTempPerm1251;
	float fTempPerm1252;
	float fTempPerm1253;
	float fRec317[2];
	float fTempPerm1254;
	float fTempPerm1255;
	float fRec318[2];
	float fTempPerm1256;
	float fTempPerm1257;
	float fTempPerm1258;
	float fRec174[2];
	
 public:
	

	int getNumInputs() {
		return 0;
	}
	int getNumOutputs() {
		return 2;
	}
	int getInputRate(int channel) {
		int rate;
		switch ((channel)) {
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	int getOutputRate(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	static void classInit(int sample_rate) {
		mydspSIG0* sig0 = newmydspSIG0();
		sig0->instanceInitmydspSIG0(sample_rate);
		sig0->fillmydspSIG0(65536, ftbl0mydspSIG0);
		deletemydspSIG0(sig0);
	}
	
	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = (1.0f / fConst0);
		fConst2 = (3.14159274f / fConst0);
		fConst3 = (0.5f * fConst0);
		fConst4 = (fConst3 + -10.0f);
		fConst5 = (0.00390625f / fConst0);
		fConst6 = (8.0f / fConst0);
		fConst7 = (0.00390625f * fConst0);
		fConst8 = (0.25f * fConst0);
	}
	
	void instanceResetUserInterface() {
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider0 = FAUSTFLOAT(0.10000000000000001f);
		fHslider1 = FAUSTFLOAT(0.01f);
		fHslider2 = FAUSTFLOAT(0.10000000000000001f);
		fHslider3 = FAUSTFLOAT(0.0f);
		fHslider4 = FAUSTFLOAT(0.5f);
		fHslider5 = FAUSTFLOAT(0.75f);
		fVslider0 = FAUSTFLOAT(2.0f);
		fHslider6 = FAUSTFLOAT(0.0f);
		fHslider7 = FAUSTFLOAT(0.0f);
		fHslider8 = FAUSTFLOAT(0.0f);
		fHslider9 = FAUSTFLOAT(0.0f);
		fHslider10 = FAUSTFLOAT(0.0f);
		fHslider11 = FAUSTFLOAT(0.0f);
		fHslider12 = FAUSTFLOAT(0.0f);
		fHslider13 = FAUSTFLOAT(0.0f);
		fHslider14 = FAUSTFLOAT(0.0f);
		fHslider15 = FAUSTFLOAT(0.0f);
		fHslider16 = FAUSTFLOAT(0.0f);
		fHslider17 = FAUSTFLOAT(0.0f);
		fHslider18 = FAUSTFLOAT(0.0f);
		fHslider19 = FAUSTFLOAT(0.0f);
		fHslider20 = FAUSTFLOAT(0.10000000000000001f);
		fHslider21 = FAUSTFLOAT(0.01f);
		fHslider22 = FAUSTFLOAT(0.10000000000000001f);
		fHslider23 = FAUSTFLOAT(0.0f);
		fHslider24 = FAUSTFLOAT(0.75f);
		fHslider25 = FAUSTFLOAT(0.10000000000000001f);
		fHslider26 = FAUSTFLOAT(0.01f);
		fHslider27 = FAUSTFLOAT(0.10000000000000001f);
		fHslider28 = FAUSTFLOAT(0.0f);
		fHslider29 = FAUSTFLOAT(0.75f);
		fHslider30 = FAUSTFLOAT(0.10000000000000001f);
		fHslider31 = FAUSTFLOAT(0.01f);
		fHslider32 = FAUSTFLOAT(0.10000000000000001f);
		fHslider33 = FAUSTFLOAT(0.0f);
		fHslider34 = FAUSTFLOAT(0.75f);
		fHslider35 = FAUSTFLOAT(0.10000000000000001f);
		fHslider36 = FAUSTFLOAT(0.01f);
		fHslider37 = FAUSTFLOAT(0.10000000000000001f);
		fHslider38 = FAUSTFLOAT(0.0f);
		fHslider39 = FAUSTFLOAT(0.75f);
		fHslider40 = FAUSTFLOAT(1.0f);
		fHslider41 = FAUSTFLOAT(1.0f);
		fHslider42 = FAUSTFLOAT(1.0f);
		fHslider43 = FAUSTFLOAT(1.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fHslider44 = FAUSTFLOAT(0.0f);
		fHslider45 = FAUSTFLOAT(0.10000000000000001f);
		fHslider46 = FAUSTFLOAT(0.10000000000000001f);
		fHslider47 = FAUSTFLOAT(0.0f);
		fHslider48 = FAUSTFLOAT(0.0f);
		fHslider49 = FAUSTFLOAT(0.0f);
		fHslider50 = FAUSTFLOAT(0.0f);
		fHslider51 = FAUSTFLOAT(0.0f);
		fHslider52 = FAUSTFLOAT(0.0f);
		fHslider53 = FAUSTFLOAT(0.0f);
		fHslider54 = FAUSTFLOAT(0.0f);
		fHslider55 = FAUSTFLOAT(0.0f);
		fHslider56 = FAUSTFLOAT(0.0f);
		fHslider57 = FAUSTFLOAT(0.0f);
		fHslider58 = FAUSTFLOAT(0.0f);
		fHslider59 = FAUSTFLOAT(0.0f);
		fHslider60 = FAUSTFLOAT(0.0f);
		fHslider61 = FAUSTFLOAT(0.0f);
		fHslider62 = FAUSTFLOAT(0.0f);
		fHslider63 = FAUSTFLOAT(0.10000000000000001f);
		fHslider64 = FAUSTFLOAT(0.10000000000000001f);
		fHslider65 = FAUSTFLOAT(0.0f);
		fHslider66 = FAUSTFLOAT(0.0f);
		fHslider67 = FAUSTFLOAT(0.0f);
		fHslider68 = FAUSTFLOAT(0.0f);
		fHslider69 = FAUSTFLOAT(0.0f);
		fHslider70 = FAUSTFLOAT(0.0f);
		fHslider71 = FAUSTFLOAT(0.0f);
		fHslider72 = FAUSTFLOAT(0.0f);
		fHslider73 = FAUSTFLOAT(0.0f);
		fHslider74 = FAUSTFLOAT(0.0f);
		fHslider75 = FAUSTFLOAT(0.0f);
		fHslider76 = FAUSTFLOAT(0.0f);
		fHslider77 = FAUSTFLOAT(0.0f);
		fHslider78 = FAUSTFLOAT(0.0f);
		fHslider79 = FAUSTFLOAT(0.0f);
		fHslider80 = FAUSTFLOAT(0.0f);
		fHslider81 = FAUSTFLOAT(0.10000000000000001f);
		fHslider82 = FAUSTFLOAT(0.10000000000000001f);
		fHslider83 = FAUSTFLOAT(0.0f);
		fHslider84 = FAUSTFLOAT(0.0f);
		fVslider4 = FAUSTFLOAT(2.0f);
		fVslider5 = FAUSTFLOAT(2.0f);
		fVslider6 = FAUSTFLOAT(2.0f);
		fHslider85 = FAUSTFLOAT(0.0f);
		fHslider86 = FAUSTFLOAT(0.0f);
		fHslider87 = FAUSTFLOAT(0.0f);
		fHslider88 = FAUSTFLOAT(0.0f);
		fHslider89 = FAUSTFLOAT(0.0f);
		fHslider90 = FAUSTFLOAT(0.0f);
		fHslider91 = FAUSTFLOAT(0.0f);
		fHslider92 = FAUSTFLOAT(0.0f);
		fHslider93 = FAUSTFLOAT(0.0f);
		fHslider94 = FAUSTFLOAT(0.0f);
		fHslider95 = FAUSTFLOAT(0.0f);
		fHslider96 = FAUSTFLOAT(0.0f);
		fHslider97 = FAUSTFLOAT(0.0f);
		fHslider98 = FAUSTFLOAT(0.0f);
		fHslider99 = FAUSTFLOAT(0.0f);
		fHslider100 = FAUSTFLOAT(0.0f);
		fHslider101 = FAUSTFLOAT(0.0f);
		fHslider102 = FAUSTFLOAT(0.0f);
		fHslider103 = FAUSTFLOAT(0.0f);
		fHslider104 = FAUSTFLOAT(0.0f);
		fHslider105 = FAUSTFLOAT(0.0f);
		fHslider106 = FAUSTFLOAT(0.0f);
		fHslider107 = FAUSTFLOAT(0.0f);
		fHslider108 = FAUSTFLOAT(0.0f);
		fHslider109 = FAUSTFLOAT(0.0f);
		fHslider110 = FAUSTFLOAT(0.0f);
		fHslider111 = FAUSTFLOAT(0.0f);
		fHslider112 = FAUSTFLOAT(0.0f);
		fHslider113 = FAUSTFLOAT(0.0f);
		fHslider114 = FAUSTFLOAT(0.0f);
		fHslider115 = FAUSTFLOAT(0.0f);
		fHslider116 = FAUSTFLOAT(0.0f);
		fHslider117 = FAUSTFLOAT(0.0f);
		fHslider118 = FAUSTFLOAT(0.0f);
		fHslider119 = FAUSTFLOAT(0.0f);
		fHslider120 = FAUSTFLOAT(0.0f);
		fHslider121 = FAUSTFLOAT(0.0f);
		fHslider122 = FAUSTFLOAT(0.0f);
		fHslider123 = FAUSTFLOAT(0.0f);
		fHslider124 = FAUSTFLOAT(0.0f);
		fHslider125 = FAUSTFLOAT(0.0f);
		fHslider126 = FAUSTFLOAT(0.0f);
		fHslider127 = FAUSTFLOAT(0.0f);
		fHslider128 = FAUSTFLOAT(0.0f);
		fHslider129 = FAUSTFLOAT(0.0f);
		fHslider130 = FAUSTFLOAT(0.0f);
		fHslider131 = FAUSTFLOAT(0.0f);
		fHslider132 = FAUSTFLOAT(0.0f);
		fHslider133 = FAUSTFLOAT(0.0f);
		fHslider134 = FAUSTFLOAT(0.0f);
		fHslider135 = FAUSTFLOAT(0.0f);
		fHslider136 = FAUSTFLOAT(0.0f);
		fHslider137 = FAUSTFLOAT(0.0f);
		fHslider138 = FAUSTFLOAT(0.0f);
		fHslider139 = FAUSTFLOAT(0.0f);
		fHslider140 = FAUSTFLOAT(0.0f);
		fHslider141 = FAUSTFLOAT(0.0f);
		fHslider142 = FAUSTFLOAT(0.0f);
		fHslider143 = FAUSTFLOAT(0.0f);
		fHslider144 = FAUSTFLOAT(0.0f);
		fHslider145 = FAUSTFLOAT(0.0f);
		fHslider146 = FAUSTFLOAT(0.0f);
		fHslider147 = FAUSTFLOAT(0.0f);
		fHslider148 = FAUSTFLOAT(0.0f);
		fHslider149 = FAUSTFLOAT(0.0f);
		fHslider150 = FAUSTFLOAT(0.0f);
		fHslider151 = FAUSTFLOAT(0.0f);
		fHslider152 = FAUSTFLOAT(0.0f);
		fHslider153 = FAUSTFLOAT(0.0f);
		fHslider154 = FAUSTFLOAT(0.0f);
		fHslider155 = FAUSTFLOAT(0.0f);
		fHslider156 = FAUSTFLOAT(0.0f);
		fHslider157 = FAUSTFLOAT(0.0f);
		fHslider158 = FAUSTFLOAT(0.0f);
		fHslider159 = FAUSTFLOAT(0.0f);
		fHslider160 = FAUSTFLOAT(0.0f);
		fHslider161 = FAUSTFLOAT(0.0f);
		fHslider162 = FAUSTFLOAT(0.0f);
		fHslider163 = FAUSTFLOAT(0.0f);
		fHslider164 = FAUSTFLOAT(0.0f);
		fHslider165 = FAUSTFLOAT(0.0f);
		fHslider166 = FAUSTFLOAT(0.0f);
		fHslider167 = FAUSTFLOAT(0.0f);
		fHslider168 = FAUSTFLOAT(0.0f);
		fHslider169 = FAUSTFLOAT(0.0f);
		fHslider170 = FAUSTFLOAT(0.0f);
		fHslider171 = FAUSTFLOAT(0.0f);
		fHslider172 = FAUSTFLOAT(0.0f);
		fHslider173 = FAUSTFLOAT(0.0f);
		fHslider174 = FAUSTFLOAT(0.0f);
		fHslider175 = FAUSTFLOAT(0.0f);
		fHslider176 = FAUSTFLOAT(0.0f);
		fHslider177 = FAUSTFLOAT(0.0f);
		fHslider178 = FAUSTFLOAT(0.0f);
		fHslider179 = FAUSTFLOAT(0.0f);
		fHslider180 = FAUSTFLOAT(0.0f);
		fHslider181 = FAUSTFLOAT(0.0f);
		fHslider182 = FAUSTFLOAT(0.0f);
		fHslider183 = FAUSTFLOAT(0.0f);
		fHslider184 = FAUSTFLOAT(0.0f);
		fHslider185 = FAUSTFLOAT(0.0f);
		fHslider186 = FAUSTFLOAT(0.0f);
		fHslider187 = FAUSTFLOAT(0.0f);
		fHslider188 = FAUSTFLOAT(0.0f);
		fHslider189 = FAUSTFLOAT(0.0f);
		fHslider190 = FAUSTFLOAT(0.0f);
		fHslider191 = FAUSTFLOAT(0.0f);
		fHslider192 = FAUSTFLOAT(0.0f);
		fEntry0 = FAUSTFLOAT(1.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
		fHslider193 = FAUSTFLOAT(440.0f);
		fEntry1 = FAUSTFLOAT(-12.0f);
		fEntry2 = FAUSTFLOAT(12.0f);
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fVslider8 = FAUSTFLOAT(0.0f);
		fHslider194 = FAUSTFLOAT(0.0f);
		fHslider195 = FAUSTFLOAT(0.0f);
		fHslider196 = FAUSTFLOAT(0.0f);
		fHslider197 = FAUSTFLOAT(0.0f);
		fHslider198 = FAUSTFLOAT(0.0f);
		fHslider199 = FAUSTFLOAT(0.0f);
		fHslider200 = FAUSTFLOAT(0.0f);
		fHslider201 = FAUSTFLOAT(0.0f);
		fHslider202 = FAUSTFLOAT(0.0f);
		fHslider203 = FAUSTFLOAT(0.0f);
		fHslider204 = FAUSTFLOAT(0.0f);
		fHslider205 = FAUSTFLOAT(0.0f);
		fHslider206 = FAUSTFLOAT(0.0f);
		fHslider207 = FAUSTFLOAT(0.0f);
		fHslider208 = FAUSTFLOAT(0.0f);
		fHslider209 = FAUSTFLOAT(0.0f);
		fHslider210 = FAUSTFLOAT(0.0f);
		fHslider211 = FAUSTFLOAT(0.0f);
		fHslider212 = FAUSTFLOAT(0.0f);
		fHslider213 = FAUSTFLOAT(0.0f);
		fHslider214 = FAUSTFLOAT(0.0f);
		fHslider215 = FAUSTFLOAT(0.0f);
		fHslider216 = FAUSTFLOAT(0.0f);
		fHslider217 = FAUSTFLOAT(0.0f);
		fHslider218 = FAUSTFLOAT(0.0f);
		fHslider219 = FAUSTFLOAT(0.0f);
		fHslider220 = FAUSTFLOAT(0.0f);
		fHslider221 = FAUSTFLOAT(0.0f);
		fHslider222 = FAUSTFLOAT(0.0f);
		fHslider223 = FAUSTFLOAT(0.0f);
		fHslider224 = FAUSTFLOAT(0.0f);
		fHslider225 = FAUSTFLOAT(0.0f);
		fHslider226 = FAUSTFLOAT(0.0f);
		fHslider227 = FAUSTFLOAT(0.0f);
		fHslider228 = FAUSTFLOAT(0.0f);
		fHslider229 = FAUSTFLOAT(0.0f);
		fHslider230 = FAUSTFLOAT(0.0f);
		fHslider231 = FAUSTFLOAT(0.0f);
		fHslider232 = FAUSTFLOAT(0.0f);
		fHslider233 = FAUSTFLOAT(0.0f);
		fHslider234 = FAUSTFLOAT(0.0f);
		fHslider235 = FAUSTFLOAT(0.0f);
		fHslider236 = FAUSTFLOAT(0.0f);
		fHslider237 = FAUSTFLOAT(0.0f);
		fHslider238 = FAUSTFLOAT(0.0f);
		fHslider239 = FAUSTFLOAT(0.0f);
		fHslider240 = FAUSTFLOAT(0.0f);
		fHslider241 = FAUSTFLOAT(0.0f);
		fHslider242 = FAUSTFLOAT(0.0f);
		fHslider243 = FAUSTFLOAT(0.0f);
		fHslider244 = FAUSTFLOAT(0.0f);
		fHslider245 = FAUSTFLOAT(0.0f);
		fHslider246 = FAUSTFLOAT(0.0f);
		fHslider247 = FAUSTFLOAT(0.0f);
		fHslider248 = FAUSTFLOAT(0.0f);
		fHslider249 = FAUSTFLOAT(0.0f);
		fHslider250 = FAUSTFLOAT(0.0f);
		fHslider251 = FAUSTFLOAT(0.0f);
		fHslider252 = FAUSTFLOAT(0.0f);
		fHslider253 = FAUSTFLOAT(0.0f);
		fHslider254 = FAUSTFLOAT(0.0f);
		fHslider255 = FAUSTFLOAT(0.0f);
		fHslider256 = FAUSTFLOAT(0.0f);
		fHslider257 = FAUSTFLOAT(0.0f);
		fHslider258 = FAUSTFLOAT(0.0f);
		fHslider259 = FAUSTFLOAT(0.0f);
		fHslider260 = FAUSTFLOAT(0.0f);
		fHslider261 = FAUSTFLOAT(0.0f);
		fHslider262 = FAUSTFLOAT(0.0f);
		fHslider263 = FAUSTFLOAT(0.0f);
		fHslider264 = FAUSTFLOAT(0.0f);
		fHslider265 = FAUSTFLOAT(0.0f);
		fHslider266 = FAUSTFLOAT(0.0f);
		fHslider267 = FAUSTFLOAT(0.0f);
		fHslider268 = FAUSTFLOAT(0.0f);
		fHslider269 = FAUSTFLOAT(0.0f);
		fHslider270 = FAUSTFLOAT(0.0f);
		fHslider271 = FAUSTFLOAT(0.0f);
		fHslider272 = FAUSTFLOAT(0.0f);
		fHslider273 = FAUSTFLOAT(0.0f);
		fHslider274 = FAUSTFLOAT(0.0f);
		fHslider275 = FAUSTFLOAT(0.0f);
		fHslider276 = FAUSTFLOAT(0.0f);
		fHslider277 = FAUSTFLOAT(0.0f);
		fHslider278 = FAUSTFLOAT(0.0f);
		fHslider279 = FAUSTFLOAT(0.0f);
		fHslider280 = FAUSTFLOAT(0.0f);
		fHslider281 = FAUSTFLOAT(0.0f);
		fHslider282 = FAUSTFLOAT(0.0f);
		fHslider283 = FAUSTFLOAT(0.0f);
		fHslider284 = FAUSTFLOAT(0.0f);
		fHslider285 = FAUSTFLOAT(0.0f);
		fHslider286 = FAUSTFLOAT(0.0f);
		fHslider287 = FAUSTFLOAT(0.0f);
		fHslider288 = FAUSTFLOAT(0.0f);
		fHslider289 = FAUSTFLOAT(0.0f);
		fHslider290 = FAUSTFLOAT(0.0f);
		fHslider291 = FAUSTFLOAT(0.0f);
		fHslider292 = FAUSTFLOAT(0.0f);
		fHslider293 = FAUSTFLOAT(0.0f);
		fHslider294 = FAUSTFLOAT(0.0f);
		fHslider295 = FAUSTFLOAT(0.0f);
		fHslider296 = FAUSTFLOAT(0.0f);
		fHslider297 = FAUSTFLOAT(0.0f);
		fHslider298 = FAUSTFLOAT(0.0f);
		fHslider299 = FAUSTFLOAT(0.0f);
		fHslider300 = FAUSTFLOAT(0.0f);
		fHslider301 = FAUSTFLOAT(0.0f);
		fHslider302 = FAUSTFLOAT(0.0f);
		fHslider303 = FAUSTFLOAT(0.0f);
		fHslider304 = FAUSTFLOAT(0.0f);
		fHslider305 = FAUSTFLOAT(0.0f);
		fHslider306 = FAUSTFLOAT(0.0f);
		fHslider307 = FAUSTFLOAT(0.0f);
		fHslider308 = FAUSTFLOAT(0.0f);
		fHslider309 = FAUSTFLOAT(0.0f);
		fHslider310 = FAUSTFLOAT(0.0f);
		fHslider311 = FAUSTFLOAT(0.0f);
		fHslider312 = FAUSTFLOAT(0.0f);
		fHslider313 = FAUSTFLOAT(0.0f);
		fHslider314 = FAUSTFLOAT(0.0f);
		fHslider315 = FAUSTFLOAT(0.0f);
		fHslider316 = FAUSTFLOAT(0.0f);
		fHslider317 = FAUSTFLOAT(0.0f);
		fHslider318 = FAUSTFLOAT(0.0f);
		fHslider319 = FAUSTFLOAT(0.0f);
		fHslider320 = FAUSTFLOAT(0.0f);
		fHslider321 = FAUSTFLOAT(0.0f);
		fHslider322 = FAUSTFLOAT(0.0f);
		fHslider323 = FAUSTFLOAT(0.0f);
		fHslider324 = FAUSTFLOAT(0.0f);
		fHslider325 = FAUSTFLOAT(0.0f);
		fHslider326 = FAUSTFLOAT(0.0f);
		fHslider327 = FAUSTFLOAT(0.0f);
		fHslider328 = FAUSTFLOAT(0.0f);
		fHslider329 = FAUSTFLOAT(0.0f);
		fHslider330 = FAUSTFLOAT(0.0f);
		fHslider331 = FAUSTFLOAT(0.0f);
		fHslider332 = FAUSTFLOAT(0.0f);
		fHslider333 = FAUSTFLOAT(0.0f);
		fHslider334 = FAUSTFLOAT(0.0f);
		fHslider335 = FAUSTFLOAT(0.0f);
		fHslider336 = FAUSTFLOAT(0.0f);
		fHslider337 = FAUSTFLOAT(0.0f);
		fHslider338 = FAUSTFLOAT(0.0f);
		fHslider339 = FAUSTFLOAT(0.0f);
		fHslider340 = FAUSTFLOAT(0.0f);
		fHslider341 = FAUSTFLOAT(0.0f);
		fHslider342 = FAUSTFLOAT(0.0f);
		fHslider343 = FAUSTFLOAT(0.0f);
		fHslider344 = FAUSTFLOAT(0.0f);
		fHslider345 = FAUSTFLOAT(0.0f);
		fHslider346 = FAUSTFLOAT(0.0f);
		fHslider347 = FAUSTFLOAT(0.0f);
		fHslider348 = FAUSTFLOAT(0.0f);
		fHslider349 = FAUSTFLOAT(0.0f);
		fHslider350 = FAUSTFLOAT(0.0f);
		fHslider351 = FAUSTFLOAT(0.0f);
		fHslider352 = FAUSTFLOAT(0.0f);
		fHslider353 = FAUSTFLOAT(0.0f);
		fHslider354 = FAUSTFLOAT(0.0f);
		fHslider355 = FAUSTFLOAT(0.0f);
		fHslider356 = FAUSTFLOAT(0.0f);
		fHslider357 = FAUSTFLOAT(0.0f);
		fHslider358 = FAUSTFLOAT(0.0f);
		fHslider359 = FAUSTFLOAT(0.0f);
		fHslider360 = FAUSTFLOAT(0.0f);
		fHslider361 = FAUSTFLOAT(0.0f);
		fHslider362 = FAUSTFLOAT(0.0f);
		fHslider363 = FAUSTFLOAT(0.0f);
		fHslider364 = FAUSTFLOAT(0.0f);
		fHslider365 = FAUSTFLOAT(0.0f);
		fHslider366 = FAUSTFLOAT(0.0f);
		fHslider367 = FAUSTFLOAT(0.0f);
		fHslider368 = FAUSTFLOAT(0.0f);
		fHslider369 = FAUSTFLOAT(0.0f);
		fHslider370 = FAUSTFLOAT(0.0f);
		fHslider371 = FAUSTFLOAT(0.0f);
		fHslider372 = FAUSTFLOAT(0.0f);
		fHslider373 = FAUSTFLOAT(0.0f);
		fHslider374 = FAUSTFLOAT(0.0f);
		fHslider375 = FAUSTFLOAT(0.0f);
		fHslider376 = FAUSTFLOAT(0.0f);
		fHslider377 = FAUSTFLOAT(0.0f);
		fHslider378 = FAUSTFLOAT(0.0f);
		fHslider379 = FAUSTFLOAT(0.0f);
		fHslider380 = FAUSTFLOAT(0.0f);
		fHslider381 = FAUSTFLOAT(0.0f);
		fHslider382 = FAUSTFLOAT(0.0f);
		fHslider383 = FAUSTFLOAT(0.0f);
		fHslider384 = FAUSTFLOAT(0.0f);
		fHslider385 = FAUSTFLOAT(0.0f);
		fHslider386 = FAUSTFLOAT(0.0f);
		fHslider387 = FAUSTFLOAT(0.0f);
		fHslider388 = FAUSTFLOAT(0.0f);
		fHslider389 = FAUSTFLOAT(0.0f);
		fHslider390 = FAUSTFLOAT(0.0f);
		fHslider391 = FAUSTFLOAT(0.0f);
		fHslider392 = FAUSTFLOAT(0.0f);
		fHslider393 = FAUSTFLOAT(0.0f);
		fHslider394 = FAUSTFLOAT(0.0f);
		fHslider395 = FAUSTFLOAT(0.0f);
		fHslider396 = FAUSTFLOAT(0.0f);
		fHslider397 = FAUSTFLOAT(0.0f);
		fHslider398 = FAUSTFLOAT(0.0f);
		fHslider399 = FAUSTFLOAT(0.0f);
		fHslider400 = FAUSTFLOAT(0.0f);
		fHslider401 = FAUSTFLOAT(0.0f);
		fHslider402 = FAUSTFLOAT(0.0f);
		fHslider403 = FAUSTFLOAT(0.0f);
		fHslider404 = FAUSTFLOAT(0.0f);
		fHslider405 = FAUSTFLOAT(0.0f);
		fHslider406 = FAUSTFLOAT(0.0f);
		fHslider407 = FAUSTFLOAT(0.0f);
		fHslider408 = FAUSTFLOAT(0.0f);
		fHslider409 = FAUSTFLOAT(0.0f);
		fHslider410 = FAUSTFLOAT(0.0f);
		fHslider411 = FAUSTFLOAT(0.0f);
		fHslider412 = FAUSTFLOAT(0.0f);
		fHslider413 = FAUSTFLOAT(0.0f);
		fHslider414 = FAUSTFLOAT(0.0f);
		fHslider415 = FAUSTFLOAT(0.0f);
		fHslider416 = FAUSTFLOAT(0.0f);
		fHslider417 = FAUSTFLOAT(0.0f);
		fHslider418 = FAUSTFLOAT(0.0f);
		fHslider419 = FAUSTFLOAT(0.0f);
		fHslider420 = FAUSTFLOAT(0.0f);
		fHslider421 = FAUSTFLOAT(0.0f);
		fHslider422 = FAUSTFLOAT(0.0f);
		fHslider423 = FAUSTFLOAT(0.0f);
		fHslider424 = FAUSTFLOAT(0.0f);
		fHslider425 = FAUSTFLOAT(0.0f);
		fHslider426 = FAUSTFLOAT(0.0f);
		fHslider427 = FAUSTFLOAT(0.0f);
		fHslider428 = FAUSTFLOAT(0.0f);
		fHslider429 = FAUSTFLOAT(0.0f);
		fHslider430 = FAUSTFLOAT(0.0f);
		fHslider431 = FAUSTFLOAT(0.0f);
		fHslider432 = FAUSTFLOAT(0.0f);
		fHslider433 = FAUSTFLOAT(0.0f);
		fHslider434 = FAUSTFLOAT(0.0f);
		fHslider435 = FAUSTFLOAT(0.0f);
		fHslider436 = FAUSTFLOAT(0.0f);
		fHslider437 = FAUSTFLOAT(0.0f);
		fHslider438 = FAUSTFLOAT(0.0f);
		fHslider439 = FAUSTFLOAT(0.0f);
		fHslider440 = FAUSTFLOAT(0.0f);
		fHslider441 = FAUSTFLOAT(0.0f);
		fHslider442 = FAUSTFLOAT(0.0f);
		fHslider443 = FAUSTFLOAT(0.0f);
		fHslider444 = FAUSTFLOAT(0.0f);
		fHslider445 = FAUSTFLOAT(0.0f);
		fHslider446 = FAUSTFLOAT(0.0f);
		fHslider447 = FAUSTFLOAT(0.0f);
		fHslider448 = FAUSTFLOAT(0.0f);
		fHslider449 = FAUSTFLOAT(0.0f);
		fHslider450 = FAUSTFLOAT(0.0f);
		fHslider451 = FAUSTFLOAT(0.0f);
		fHslider452 = FAUSTFLOAT(0.0f);
		fHslider453 = FAUSTFLOAT(0.0f);
		fHslider454 = FAUSTFLOAT(0.0f);
		fHslider455 = FAUSTFLOAT(0.0f);
		fHslider456 = FAUSTFLOAT(0.0f);
		fHslider457 = FAUSTFLOAT(0.0f);
		fHslider458 = FAUSTFLOAT(0.0f);
		fHslider459 = FAUSTFLOAT(0.0f);
		fHslider460 = FAUSTFLOAT(0.0f);
		fHslider461 = FAUSTFLOAT(0.0f);
		fHslider462 = FAUSTFLOAT(0.0f);
		fHslider463 = FAUSTFLOAT(0.0f);
		fHslider464 = FAUSTFLOAT(0.0f);
		fHslider465 = FAUSTFLOAT(0.0f);
		fHslider466 = FAUSTFLOAT(0.0f);
		fHslider467 = FAUSTFLOAT(0.0f);
		fHslider468 = FAUSTFLOAT(0.0f);
		fHslider469 = FAUSTFLOAT(0.0f);
		fHslider470 = FAUSTFLOAT(0.0f);
		fHslider471 = FAUSTFLOAT(0.0f);
		fHslider472 = FAUSTFLOAT(0.0f);
		fHslider473 = FAUSTFLOAT(0.0f);
		fHslider474 = FAUSTFLOAT(0.0f);
		fHslider475 = FAUSTFLOAT(0.0f);
		fHslider476 = FAUSTFLOAT(0.0f);
		fHslider477 = FAUSTFLOAT(0.0f);
		fHslider478 = FAUSTFLOAT(0.0f);
		fHslider479 = FAUSTFLOAT(0.0f);
		fHslider480 = FAUSTFLOAT(0.0f);
		fHslider481 = FAUSTFLOAT(0.0f);
		fHslider482 = FAUSTFLOAT(0.0f);
		fHslider483 = FAUSTFLOAT(0.0f);
		fHslider484 = FAUSTFLOAT(0.0f);
		fHslider485 = FAUSTFLOAT(0.0f);
		fHslider486 = FAUSTFLOAT(0.0f);
		fHslider487 = FAUSTFLOAT(0.0f);
		fHslider488 = FAUSTFLOAT(0.0f);
		fHslider489 = FAUSTFLOAT(0.0f);
		fHslider490 = FAUSTFLOAT(0.0f);
		fHslider491 = FAUSTFLOAT(0.0f);
		fHslider492 = FAUSTFLOAT(0.0f);
		fHslider493 = FAUSTFLOAT(0.0f);
		fHslider494 = FAUSTFLOAT(0.0f);
		fHslider495 = FAUSTFLOAT(0.0f);
		fHslider496 = FAUSTFLOAT(0.0f);
		fHslider497 = FAUSTFLOAT(0.0f);
		fHslider498 = FAUSTFLOAT(0.0f);
		fHslider499 = FAUSTFLOAT(0.0f);
		fHslider500 = FAUSTFLOAT(0.0f);
		fHslider501 = FAUSTFLOAT(0.0f);
		fHslider502 = FAUSTFLOAT(0.0f);
		fHslider503 = FAUSTFLOAT(0.0f);
		fHslider504 = FAUSTFLOAT(0.0f);
		fHslider505 = FAUSTFLOAT(0.0f);
		fHslider506 = FAUSTFLOAT(0.0f);
		fHslider507 = FAUSTFLOAT(0.0f);
		fHslider508 = FAUSTFLOAT(0.0f);
		fHslider509 = FAUSTFLOAT(0.0f);
		fHslider510 = FAUSTFLOAT(0.0f);
		fHslider511 = FAUSTFLOAT(0.0f);
		fHslider512 = FAUSTFLOAT(0.0f);
		fHslider513 = FAUSTFLOAT(0.0f);
		fHslider514 = FAUSTFLOAT(0.0f);
		fHslider515 = FAUSTFLOAT(0.0f);
		fHslider516 = FAUSTFLOAT(0.0f);
		fHslider517 = FAUSTFLOAT(0.0f);
		fHslider518 = FAUSTFLOAT(0.0f);
		fHslider519 = FAUSTFLOAT(0.0f);
		fHslider520 = FAUSTFLOAT(0.0f);
		fHslider521 = FAUSTFLOAT(0.0f);
		fHslider522 = FAUSTFLOAT(0.0f);
		fHslider523 = FAUSTFLOAT(0.0f);
		fHslider524 = FAUSTFLOAT(0.0f);
		fHslider525 = FAUSTFLOAT(0.0f);
		fHslider526 = FAUSTFLOAT(0.0f);
		fHslider527 = FAUSTFLOAT(0.0f);
		fHslider528 = FAUSTFLOAT(0.0f);
		fHslider529 = FAUSTFLOAT(0.0f);
		fHslider530 = FAUSTFLOAT(0.0f);
		fHslider531 = FAUSTFLOAT(0.0f);
		fHslider532 = FAUSTFLOAT(0.0f);
		fHslider533 = FAUSTFLOAT(0.0f);
		fHslider534 = FAUSTFLOAT(0.0f);
		fHslider535 = FAUSTFLOAT(0.0f);
		fHslider536 = FAUSTFLOAT(0.0f);
		fHslider537 = FAUSTFLOAT(0.0f);
		fHslider538 = FAUSTFLOAT(0.0f);
		fHslider539 = FAUSTFLOAT(0.0f);
		fHslider540 = FAUSTFLOAT(0.0f);
		fHslider541 = FAUSTFLOAT(0.0f);
		fHslider542 = FAUSTFLOAT(0.0f);
		fHslider543 = FAUSTFLOAT(0.0f);
		fHslider544 = FAUSTFLOAT(0.0f);
		fHslider545 = FAUSTFLOAT(0.0f);
		fHslider546 = FAUSTFLOAT(0.0f);
		fHslider547 = FAUSTFLOAT(0.0f);
		fHslider548 = FAUSTFLOAT(0.0f);
		fHslider549 = FAUSTFLOAT(0.0f);
		fHslider550 = FAUSTFLOAT(0.0f);
		fHslider551 = FAUSTFLOAT(0.0f);
		fHslider552 = FAUSTFLOAT(0.0f);
		fHslider553 = FAUSTFLOAT(0.0f);
		fHslider554 = FAUSTFLOAT(0.0f);
		fHslider555 = FAUSTFLOAT(0.0f);
		fHslider556 = FAUSTFLOAT(0.0f);
		fHslider557 = FAUSTFLOAT(0.0f);
		fHslider558 = FAUSTFLOAT(0.0f);
		fHslider559 = FAUSTFLOAT(0.0f);
		fHslider560 = FAUSTFLOAT(0.0f);
		fHslider561 = FAUSTFLOAT(0.0f);
		fHslider562 = FAUSTFLOAT(0.0f);
		fHslider563 = FAUSTFLOAT(0.0f);
		fHslider564 = FAUSTFLOAT(0.0f);
		fHslider565 = FAUSTFLOAT(0.0f);
		fHslider566 = FAUSTFLOAT(0.0f);
		fHslider567 = FAUSTFLOAT(0.0f);
		fHslider568 = FAUSTFLOAT(0.0f);
		fHslider569 = FAUSTFLOAT(0.0f);
		fHslider570 = FAUSTFLOAT(0.0f);
		fHslider571 = FAUSTFLOAT(0.0f);
		fHslider572 = FAUSTFLOAT(0.0f);
		fHslider573 = FAUSTFLOAT(0.0f);
		fHslider574 = FAUSTFLOAT(0.0f);
		fHslider575 = FAUSTFLOAT(0.0f);
		fHslider576 = FAUSTFLOAT(0.0f);
		fHslider577 = FAUSTFLOAT(0.0f);
		fHslider578 = FAUSTFLOAT(0.0f);
		fHslider579 = FAUSTFLOAT(0.0f);
		fHslider580 = FAUSTFLOAT(0.0f);
		fHslider581 = FAUSTFLOAT(0.0f);
		fHslider582 = FAUSTFLOAT(0.0f);
		fHslider583 = FAUSTFLOAT(0.0f);
		fHslider584 = FAUSTFLOAT(0.0f);
		fHslider585 = FAUSTFLOAT(0.0f);
		fHslider586 = FAUSTFLOAT(0.0f);
		fHslider587 = FAUSTFLOAT(0.0f);
		fHslider588 = FAUSTFLOAT(0.0f);
		fHslider589 = FAUSTFLOAT(0.0f);
		fHslider590 = FAUSTFLOAT(0.0f);
		fHslider591 = FAUSTFLOAT(0.0f);
		fHslider592 = FAUSTFLOAT(0.0f);
		fHslider593 = FAUSTFLOAT(0.0f);
		fHslider594 = FAUSTFLOAT(0.0f);
		fHslider595 = FAUSTFLOAT(0.0f);
		fHslider596 = FAUSTFLOAT(0.0f);
		fHslider597 = FAUSTFLOAT(0.0f);
		fHslider598 = FAUSTFLOAT(0.0f);
		fHslider599 = FAUSTFLOAT(0.0f);
		fHslider600 = FAUSTFLOAT(0.0f);
		fHslider601 = FAUSTFLOAT(0.0f);
		fHslider602 = FAUSTFLOAT(0.0f);
		fHslider603 = FAUSTFLOAT(0.0f);
		fHslider604 = FAUSTFLOAT(0.0f);
		fHslider605 = FAUSTFLOAT(0.0f);
		fHslider606 = FAUSTFLOAT(0.0f);
		fHslider607 = FAUSTFLOAT(0.0f);
		fHslider608 = FAUSTFLOAT(0.0f);
		fHslider609 = FAUSTFLOAT(0.0f);
		fHslider610 = FAUSTFLOAT(0.0f);
		fHslider611 = FAUSTFLOAT(0.0f);
		fHslider612 = FAUSTFLOAT(0.0f);
		fHslider613 = FAUSTFLOAT(0.0f);
		fHslider614 = FAUSTFLOAT(0.0f);
		fHslider615 = FAUSTFLOAT(0.0f);
		fHslider616 = FAUSTFLOAT(0.0f);
		fHslider617 = FAUSTFLOAT(0.0f);
		fHslider618 = FAUSTFLOAT(0.0f);
		fHslider619 = FAUSTFLOAT(0.0f);
		fHslider620 = FAUSTFLOAT(0.0f);
		fHslider621 = FAUSTFLOAT(0.0f);
		fHslider622 = FAUSTFLOAT(0.0f);
		fHslider623 = FAUSTFLOAT(0.0f);
		fHslider624 = FAUSTFLOAT(0.0f);
		fHslider625 = FAUSTFLOAT(0.0f);
		fHslider626 = FAUSTFLOAT(0.0f);
		fHslider627 = FAUSTFLOAT(0.0f);
		fHslider628 = FAUSTFLOAT(0.0f);
		fHslider629 = FAUSTFLOAT(0.0f);
		fHslider630 = FAUSTFLOAT(0.0f);
		fHslider631 = FAUSTFLOAT(0.0f);
		fHslider632 = FAUSTFLOAT(0.0f);
		fHslider633 = FAUSTFLOAT(0.0f);
		fHslider634 = FAUSTFLOAT(0.0f);
		fHslider635 = FAUSTFLOAT(0.0f);
		fHslider636 = FAUSTFLOAT(0.0f);
		fHslider637 = FAUSTFLOAT(0.0f);
		fHslider638 = FAUSTFLOAT(0.0f);
		fHslider639 = FAUSTFLOAT(0.0f);
		fHslider640 = FAUSTFLOAT(0.0f);
		fHslider641 = FAUSTFLOAT(0.0f);
	}
	
	void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fVec1[l1] = 0.0f;
		}
		for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) {
			iVec2[l2] = 0;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			iRec1[l3] = 0;
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fRec0[l4] = 0.0f;
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec6[l5] = 0.0f;
		}
		for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) {
			fRec7[l6] = 0.0f;
		}
		for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) {
			fRec8[l7] = 0.0f;
		}
		for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) {
			fRec9[l8] = 0.0f;
		}
		for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) {
			fRec11[l10] = 0.0f;
		}
		for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) {
			fRec12[l11] = 0.0f;
		}
		for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) {
			fRec13[l12] = 0.0f;
		}
		for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) {
			fRec14[l13] = 0.0f;
		}
		for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) {
			iRec16[l14] = 0;
		}
		for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) {
			fRec15[l15] = 0.0f;
		}
		for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) {
			fRec18[l16] = 0.0f;
		}
		for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) {
			fRec17[l17] = 0.0f;
		}
		for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) {
			fRec20[l18] = 0.0f;
		}
		for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) {
			fRec19[l19] = 0.0f;
		}
		for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) {
			fRec22[l20] = 0.0f;
		}
		for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) {
			fRec21[l21] = 0.0f;
		}
		fTempPerm0 = 0.0f;
		fTempPerm1 = 0.0f;
		fTempPerm2 = 0.0f;
		fTempPerm3 = 0.0f;
		fTempPerm4 = 0.0f;
		fTempPerm5 = 0.0f;
		fTempPerm6 = 0.0f;
		fTempPerm7 = 0.0f;
		fTempPerm8 = 0.0f;
		fTempPerm9 = 0.0f;
		fTempPerm10 = 0.0f;
		fTempPerm11 = 0.0f;
		fTempPerm12 = 0.0f;
		fTempPerm13 = 0.0f;
		fTempPerm14 = 0.0f;
		fTempPerm15 = 0.0f;
		fTempPerm16 = 0.0f;
		fTempPerm17 = 0.0f;
		fTempPerm18 = 0.0f;
		fTempPerm19 = 0.0f;
		fTempPerm20 = 0.0f;
		fTempPerm21 = 0.0f;
		iTempPerm22 = 0;
		fTempPerm23 = 0.0f;
		iTempPerm24 = 0;
		fTempPerm25 = 0.0f;
		iTempPerm26 = 0;
		fTempPerm27 = 0.0f;
		iTempPerm28 = 0;
		iTempPerm29 = 0;
		iTempPerm30 = 0;
		fTempPerm31 = 0.0f;
		fTempPerm32 = 0.0f;
		fTempPerm33 = 0.0f;
		fTempPerm34 = 0.0f;
		fTempPerm35 = 0.0f;
		fTempPerm36 = 0.0f;
		fTempPerm37 = 0.0f;
		fTempPerm38 = 0.0f;
		fTempPerm39 = 0.0f;
		fTempPerm40 = 0.0f;
		fTempPerm41 = 0.0f;
		fTempPerm42 = 0.0f;
		fTempPerm43 = 0.0f;
		fTempPerm44 = 0.0f;
		fTempPerm45 = 0.0f;
		fTempPerm46 = 0.0f;
		fTempPerm47 = 0.0f;
		fTempPerm48 = 0.0f;
		fTempPerm49 = 0.0f;
		fTempPerm50 = 0.0f;
		for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) {
			fRec27[l22] = 0.0f;
		}
		fTempPerm51 = 0.0f;
		for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) {
			fRec28[l23] = 0.0f;
		}
		fTempPerm52 = 0.0f;
		for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) {
			iVec3[l24] = 0;
		}
		for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) {
			fRec26[l25] = 0.0f;
		}
		fTempPerm53 = 0.0f;
		for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) {
			fRec29[l26] = 0.0f;
		}
		fTempPerm54 = 0.0f;
		fTempPerm55 = 0.0f;
		fTempPerm56 = 0.0f;
		fTempPerm57 = 0.0f;
		fTempPerm58 = 0.0f;
		fTempPerm59 = 0.0f;
		fTempPerm60 = 0.0f;
		fTempPerm61 = 0.0f;
		fTempPerm62 = 0.0f;
		fTempPerm63 = 0.0f;
		fTempPerm64 = 0.0f;
		fTempPerm65 = 0.0f;
		fTempPerm66 = 0.0f;
		fTempPerm67 = 0.0f;
		fTempPerm68 = 0.0f;
		iTempPerm69 = 0;
		fTempPerm70 = 0.0f;
		fTempPerm71 = 0.0f;
		fTempPerm72 = 0.0f;
		fTempPerm73 = 0.0f;
		fTempPerm74 = 0.0f;
		fTempPerm75 = 0.0f;
		fTempPerm76 = 0.0f;
		fTempPerm77 = 0.0f;
		fTempPerm78 = 0.0f;
		fTempPerm79 = 0.0f;
		fTempPerm80 = 0.0f;
		fTempPerm81 = 0.0f;
		fTempPerm82 = 0.0f;
		fTempPerm83 = 0.0f;
		fTempPerm84 = 0.0f;
		for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) {
			fRec23[l27] = 0.0f;
		}
		fTempPerm85 = 0.0f;
		for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) {
			fRec24[l28] = 0.0f;
		}
		fTempPerm86 = 0.0f;
		fTempPerm87 = 0.0f;
		fTempPerm88 = 0.0f;
		fTempPerm89 = 0.0f;
		fTempPerm90 = 0.0f;
		fTempPerm91 = 0.0f;
		fTempPerm92 = 0.0f;
		fTempPerm93 = 0.0f;
		fTempPerm94 = 0.0f;
		for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) {
			fRec30[l29] = 0.0f;
		}
		fTempPerm95 = 0.0f;
		for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) {
			fRec31[l30] = 0.0f;
		}
		for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) {
			fRec32[l31] = 0.0f;
		}
		fTempPerm96 = 0.0f;
		fTempPerm97 = 0.0f;
		fTempPerm98 = 0.0f;
		fTempPerm99 = 0.0f;
		fTempPerm100 = 0.0f;
		fTempPerm101 = 0.0f;
		fTempPerm102 = 0.0f;
		for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) {
			fRec35[l32] = 0.0f;
		}
		fTempPerm103 = 0.0f;
		for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) {
			fRec36[l33] = 0.0f;
		}
		fTempPerm104 = 0.0f;
		fTempPerm105 = 0.0f;
		fTempPerm106 = 0.0f;
		for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) {
			fVec4[l34] = 0.0f;
		}
		fTempPerm107 = 0.0f;
		fTempPerm108 = 0.0f;
		fTempPerm109 = 0.0f;
		fTempPerm110 = 0.0f;
		fTempPerm111 = 0.0f;
		fTempPerm112 = 0.0f;
		fTempPerm113 = 0.0f;
		fTempPerm114 = 0.0f;
		fTempPerm115 = 0.0f;
		for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) {
			fRec38[l35] = 0.0f;
		}
		fTempPerm116 = 0.0f;
		fTempPerm117 = 0.0f;
		fTempPerm118 = 0.0f;
		fTempPerm119 = 0.0f;
		for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) {
			fVec5[l36] = 0.0f;
		}
		iTempPerm120 = 0;
		for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) {
			iVec6[l37] = 0;
		}
		iTempPerm121 = 0;
		for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) {
			fRec43[l38] = 0.0f;
		}
		fTempPerm122 = 0.0f;
		for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) {
			fRec42[l39] = 0.0f;
		}
		for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) {
			fRec41[l40] = 0.0f;
		}
		for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) {
			fRec40[l41] = 0.0f;
		}
		for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) {
			fRec39[l42] = 0.0f;
		}
		for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) {
			fRec37[l43] = 0.0f;
		}
		fTempPerm123 = 0.0f;
		fTempPerm124 = 0.0f;
		fTempPerm125 = 0.0f;
		fTempPerm126 = 0.0f;
		fTempPerm127 = 0.0f;
		fTempPerm128 = 0.0f;
		iTempPerm129 = 0;
		fTempPerm130 = 0.0f;
		fTempPerm131 = 0.0f;
		fTempPerm132 = 0.0f;
		for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) {
			fRec44[l44] = 0.0f;
		}
		fTempPerm133 = 0.0f;
		for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) {
			fRec45[l45] = 0.0f;
		}
		fTempPerm134 = 0.0f;
		fTempPerm135 = 0.0f;
		fTempPerm136 = 0.0f;
		for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) {
			fRec47[l46] = 0.0f;
		}
		fTempPerm137 = 0.0f;
		for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) {
			fRec48[l47] = 0.0f;
		}
		for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) {
			fRec49[l48] = 0.0f;
		}
		fTempPerm138 = 0.0f;
		fTempPerm139 = 0.0f;
		fTempPerm140 = 0.0f;
		fTempPerm141 = 0.0f;
		fTempPerm142 = 0.0f;
		for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) {
			fRec52[l49] = 0.0f;
		}
		fTempPerm143 = 0.0f;
		for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) {
			fRec53[l50] = 0.0f;
		}
		fTempPerm144 = 0.0f;
		for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) {
			fVec7[l51] = 0.0f;
		}
		fTempPerm145 = 0.0f;
		for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) {
			fRec55[l52] = 0.0f;
		}
		fTempPerm146 = 0.0f;
		fTempPerm147 = 0.0f;
		fTempPerm148 = 0.0f;
		fTempPerm149 = 0.0f;
		for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) {
			fVec8[l53] = 0.0f;
		}
		iTempPerm150 = 0;
		for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) {
			iVec9[l54] = 0;
		}
		iTempPerm151 = 0;
		for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) {
			fRec60[l55] = 0.0f;
		}
		fTempPerm152 = 0.0f;
		for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) {
			fRec59[l56] = 0.0f;
		}
		for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) {
			fRec58[l57] = 0.0f;
		}
		for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) {
			fRec57[l58] = 0.0f;
		}
		for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) {
			fRec56[l59] = 0.0f;
		}
		for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) {
			fRec54[l60] = 0.0f;
		}
		fTempPerm153 = 0.0f;
		fTempPerm154 = 0.0f;
		fTempPerm155 = 0.0f;
		fTempPerm156 = 0.0f;
		fTempPerm157 = 0.0f;
		fTempPerm158 = 0.0f;
		fTempPerm159 = 0.0f;
		fTempPerm160 = 0.0f;
		fTempPerm161 = 0.0f;
		fTempPerm162 = 0.0f;
		fTempPerm163 = 0.0f;
		fTempPerm164 = 0.0f;
		fTempPerm165 = 0.0f;
		fTempPerm166 = 0.0f;
		fTempPerm167 = 0.0f;
		fTempPerm168 = 0.0f;
		fTempPerm169 = 0.0f;
		fTempPerm170 = 0.0f;
		fTempPerm171 = 0.0f;
		fTempPerm172 = 0.0f;
		fTempPerm173 = 0.0f;
		fTempPerm174 = 0.0f;
		fTempPerm175 = 0.0f;
		fTempPerm176 = 0.0f;
		fTempPerm177 = 0.0f;
		fTempPerm178 = 0.0f;
		fTempPerm179 = 0.0f;
		fTempPerm180 = 0.0f;
		fTempPerm181 = 0.0f;
		fTempPerm182 = 0.0f;
		fTempPerm183 = 0.0f;
		fTempPerm184 = 0.0f;
		fTempPerm185 = 0.0f;
		fTempPerm186 = 0.0f;
		fTempPerm187 = 0.0f;
		fTempPerm188 = 0.0f;
		fTempPerm189 = 0.0f;
		fTempPerm190 = 0.0f;
		fTempPerm191 = 0.0f;
		fTempPerm192 = 0.0f;
		fTempPerm193 = 0.0f;
		fTempPerm194 = 0.0f;
		fTempPerm195 = 0.0f;
		fTempPerm196 = 0.0f;
		fTempPerm197 = 0.0f;
		fTempPerm198 = 0.0f;
		fTempPerm199 = 0.0f;
		fTempPerm200 = 0.0f;
		fTempPerm201 = 0.0f;
		fTempPerm202 = 0.0f;
		fTempPerm203 = 0.0f;
		fTempPerm204 = 0.0f;
		fTempPerm205 = 0.0f;
		fTempPerm206 = 0.0f;
		fTempPerm207 = 0.0f;
		fTempPerm208 = 0.0f;
		fTempPerm209 = 0.0f;
		fTempPerm210 = 0.0f;
		fTempPerm211 = 0.0f;
		fTempPerm212 = 0.0f;
		fTempPerm213 = 0.0f;
		fTempPerm214 = 0.0f;
		fTempPerm215 = 0.0f;
		for (int l61 = 0; (l61 < 2); l61 = (l61 + 1)) {
			fRec61[l61] = 0.0f;
		}
		fTempPerm216 = 0.0f;
		fTempPerm217 = 0.0f;
		for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) {
			fRec62[l62] = 0.0f;
		}
		fTempPerm218 = 0.0f;
		fTempPerm219 = 0.0f;
		fTempPerm220 = 0.0f;
		for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) {
			fRec2[l63] = 0.0f;
		}
		fTempPerm221 = 0.0f;
		fTempPerm222 = 0.0f;
		fTempPerm223 = 0.0f;
		fTempPerm224 = 0.0f;
		fTempPerm225 = 0.0f;
		fTempPerm226 = 0.0f;
		fTempPerm227 = 0.0f;
		fTempPerm228 = 0.0f;
		fTempPerm229 = 0.0f;
		fTempPerm230 = 0.0f;
		fTempPerm231 = 0.0f;
		fTempPerm232 = 0.0f;
		fTempPerm233 = 0.0f;
		fTempPerm234 = 0.0f;
		fTempPerm235 = 0.0f;
		fTempPerm236 = 0.0f;
		fTempPerm237 = 0.0f;
		fTempPerm238 = 0.0f;
		fTempPerm239 = 0.0f;
		fTempPerm240 = 0.0f;
		fTempPerm241 = 0.0f;
		fTempPerm242 = 0.0f;
		fTempPerm243 = 0.0f;
		fTempPerm244 = 0.0f;
		fTempPerm245 = 0.0f;
		fTempPerm246 = 0.0f;
		fTempPerm247 = 0.0f;
		fTempPerm248 = 0.0f;
		iTempPerm249 = 0;
		fTempPerm250 = 0.0f;
		fTempPerm251 = 0.0f;
		fTempPerm252 = 0.0f;
		fTempPerm253 = 0.0f;
		fTempPerm254 = 0.0f;
		fTempPerm255 = 0.0f;
		fTempPerm256 = 0.0f;
		fTempPerm257 = 0.0f;
		for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) {
			fRec63[l64] = 0.0f;
		}
		fTempPerm258 = 0.0f;
		for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) {
			fRec64[l65] = 0.0f;
		}
		fTempPerm259 = 0.0f;
		fTempPerm260 = 0.0f;
		for (int l66 = 0; (l66 < 2); l66 = (l66 + 1)) {
			fRec66[l66] = 0.0f;
		}
		fTempPerm261 = 0.0f;
		for (int l67 = 0; (l67 < 2); l67 = (l67 + 1)) {
			fRec67[l67] = 0.0f;
		}
		for (int l68 = 0; (l68 < 2); l68 = (l68 + 1)) {
			fRec68[l68] = 0.0f;
		}
		fTempPerm262 = 0.0f;
		fTempPerm263 = 0.0f;
		fTempPerm264 = 0.0f;
		fTempPerm265 = 0.0f;
		fTempPerm266 = 0.0f;
		for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) {
			fRec71[l69] = 0.0f;
		}
		fTempPerm267 = 0.0f;
		for (int l70 = 0; (l70 < 2); l70 = (l70 + 1)) {
			fRec72[l70] = 0.0f;
		}
		fTempPerm268 = 0.0f;
		for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) {
			fVec10[l71] = 0.0f;
		}
		fTempPerm269 = 0.0f;
		fTempPerm270 = 0.0f;
		fTempPerm271 = 0.0f;
		fTempPerm272 = 0.0f;
		fTempPerm273 = 0.0f;
		fTempPerm274 = 0.0f;
		fTempPerm275 = 0.0f;
		fTempPerm276 = 0.0f;
		fTempPerm277 = 0.0f;
		for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) {
			fRec74[l72] = 0.0f;
		}
		fTempPerm278 = 0.0f;
		fTempPerm279 = 0.0f;
		fTempPerm280 = 0.0f;
		fTempPerm281 = 0.0f;
		for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) {
			fVec11[l73] = 0.0f;
		}
		iTempPerm282 = 0;
		for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) {
			iVec12[l74] = 0;
		}
		iTempPerm283 = 0;
		for (int l75 = 0; (l75 < 2); l75 = (l75 + 1)) {
			fRec79[l75] = 0.0f;
		}
		fTempPerm284 = 0.0f;
		for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) {
			fRec78[l76] = 0.0f;
		}
		for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) {
			fRec77[l77] = 0.0f;
		}
		for (int l78 = 0; (l78 < 2); l78 = (l78 + 1)) {
			fRec76[l78] = 0.0f;
		}
		for (int l79 = 0; (l79 < 2); l79 = (l79 + 1)) {
			fRec75[l79] = 0.0f;
		}
		for (int l80 = 0; (l80 < 2); l80 = (l80 + 1)) {
			fRec73[l80] = 0.0f;
		}
		fTempPerm285 = 0.0f;
		fTempPerm286 = 0.0f;
		fTempPerm287 = 0.0f;
		fTempPerm288 = 0.0f;
		fTempPerm289 = 0.0f;
		fTempPerm290 = 0.0f;
		iTempPerm291 = 0;
		fTempPerm292 = 0.0f;
		fTempPerm293 = 0.0f;
		fTempPerm294 = 0.0f;
		for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) {
			fRec80[l81] = 0.0f;
		}
		fTempPerm295 = 0.0f;
		for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) {
			fRec81[l82] = 0.0f;
		}
		fTempPerm296 = 0.0f;
		fTempPerm297 = 0.0f;
		for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) {
			fRec83[l83] = 0.0f;
		}
		fTempPerm298 = 0.0f;
		for (int l84 = 0; (l84 < 2); l84 = (l84 + 1)) {
			fRec84[l84] = 0.0f;
		}
		for (int l85 = 0; (l85 < 2); l85 = (l85 + 1)) {
			fRec85[l85] = 0.0f;
		}
		fTempPerm299 = 0.0f;
		fTempPerm300 = 0.0f;
		fTempPerm301 = 0.0f;
		fTempPerm302 = 0.0f;
		fTempPerm303 = 0.0f;
		for (int l86 = 0; (l86 < 2); l86 = (l86 + 1)) {
			fRec88[l86] = 0.0f;
		}
		fTempPerm304 = 0.0f;
		for (int l87 = 0; (l87 < 2); l87 = (l87 + 1)) {
			fRec89[l87] = 0.0f;
		}
		fTempPerm305 = 0.0f;
		for (int l88 = 0; (l88 < 2); l88 = (l88 + 1)) {
			fVec13[l88] = 0.0f;
		}
		fTempPerm306 = 0.0f;
		for (int l89 = 0; (l89 < 2); l89 = (l89 + 1)) {
			fRec91[l89] = 0.0f;
		}
		fTempPerm307 = 0.0f;
		fTempPerm308 = 0.0f;
		fTempPerm309 = 0.0f;
		fTempPerm310 = 0.0f;
		for (int l90 = 0; (l90 < 2); l90 = (l90 + 1)) {
			fVec14[l90] = 0.0f;
		}
		iTempPerm311 = 0;
		for (int l91 = 0; (l91 < 2); l91 = (l91 + 1)) {
			iVec15[l91] = 0;
		}
		iTempPerm312 = 0;
		for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) {
			fRec96[l92] = 0.0f;
		}
		fTempPerm313 = 0.0f;
		for (int l93 = 0; (l93 < 2); l93 = (l93 + 1)) {
			fRec95[l93] = 0.0f;
		}
		for (int l94 = 0; (l94 < 2); l94 = (l94 + 1)) {
			fRec94[l94] = 0.0f;
		}
		for (int l95 = 0; (l95 < 2); l95 = (l95 + 1)) {
			fRec93[l95] = 0.0f;
		}
		for (int l96 = 0; (l96 < 2); l96 = (l96 + 1)) {
			fRec92[l96] = 0.0f;
		}
		for (int l97 = 0; (l97 < 2); l97 = (l97 + 1)) {
			fRec90[l97] = 0.0f;
		}
		fTempPerm314 = 0.0f;
		fTempPerm315 = 0.0f;
		fTempPerm316 = 0.0f;
		fTempPerm317 = 0.0f;
		fTempPerm318 = 0.0f;
		fTempPerm319 = 0.0f;
		fTempPerm320 = 0.0f;
		fTempPerm321 = 0.0f;
		fTempPerm322 = 0.0f;
		fTempPerm323 = 0.0f;
		fTempPerm324 = 0.0f;
		fTempPerm325 = 0.0f;
		fTempPerm326 = 0.0f;
		fTempPerm327 = 0.0f;
		fTempPerm328 = 0.0f;
		fTempPerm329 = 0.0f;
		fTempPerm330 = 0.0f;
		fTempPerm331 = 0.0f;
		fTempPerm332 = 0.0f;
		fTempPerm333 = 0.0f;
		fTempPerm334 = 0.0f;
		fTempPerm335 = 0.0f;
		fTempPerm336 = 0.0f;
		fTempPerm337 = 0.0f;
		fTempPerm338 = 0.0f;
		fTempPerm339 = 0.0f;
		fTempPerm340 = 0.0f;
		fTempPerm341 = 0.0f;
		fTempPerm342 = 0.0f;
		fTempPerm343 = 0.0f;
		fTempPerm344 = 0.0f;
		fTempPerm345 = 0.0f;
		fTempPerm346 = 0.0f;
		fTempPerm347 = 0.0f;
		fTempPerm348 = 0.0f;
		fTempPerm349 = 0.0f;
		fTempPerm350 = 0.0f;
		fTempPerm351 = 0.0f;
		fTempPerm352 = 0.0f;
		fTempPerm353 = 0.0f;
		fTempPerm354 = 0.0f;
		fTempPerm355 = 0.0f;
		fTempPerm356 = 0.0f;
		fTempPerm357 = 0.0f;
		fTempPerm358 = 0.0f;
		fTempPerm359 = 0.0f;
		fTempPerm360 = 0.0f;
		fTempPerm361 = 0.0f;
		fTempPerm362 = 0.0f;
		fTempPerm363 = 0.0f;
		fTempPerm364 = 0.0f;
		fTempPerm365 = 0.0f;
		fTempPerm366 = 0.0f;
		fTempPerm367 = 0.0f;
		fTempPerm368 = 0.0f;
		fTempPerm369 = 0.0f;
		fTempPerm370 = 0.0f;
		fTempPerm371 = 0.0f;
		fTempPerm372 = 0.0f;
		fTempPerm373 = 0.0f;
		fTempPerm374 = 0.0f;
		fTempPerm375 = 0.0f;
		fTempPerm376 = 0.0f;
		for (int l98 = 0; (l98 < 2); l98 = (l98 + 1)) {
			fRec97[l98] = 0.0f;
		}
		fTempPerm377 = 0.0f;
		fTempPerm378 = 0.0f;
		for (int l99 = 0; (l99 < 2); l99 = (l99 + 1)) {
			fRec98[l99] = 0.0f;
		}
		fTempPerm379 = 0.0f;
		fTempPerm380 = 0.0f;
		fTempPerm381 = 0.0f;
		for (int l100 = 0; (l100 < 2); l100 = (l100 + 1)) {
			fRec3[l100] = 0.0f;
		}
		fTempPerm382 = 0.0f;
		fTempPerm383 = 0.0f;
		fTempPerm384 = 0.0f;
		fTempPerm385 = 0.0f;
		fTempPerm386 = 0.0f;
		fTempPerm387 = 0.0f;
		fTempPerm388 = 0.0f;
		fTempPerm389 = 0.0f;
		fTempPerm390 = 0.0f;
		fTempPerm391 = 0.0f;
		fTempPerm392 = 0.0f;
		fTempPerm393 = 0.0f;
		fTempPerm394 = 0.0f;
		fTempPerm395 = 0.0f;
		fTempPerm396 = 0.0f;
		fTempPerm397 = 0.0f;
		fTempPerm398 = 0.0f;
		fTempPerm399 = 0.0f;
		fTempPerm400 = 0.0f;
		fTempPerm401 = 0.0f;
		fTempPerm402 = 0.0f;
		fTempPerm403 = 0.0f;
		fTempPerm404 = 0.0f;
		fTempPerm405 = 0.0f;
		fTempPerm406 = 0.0f;
		fTempPerm407 = 0.0f;
		fTempPerm408 = 0.0f;
		fTempPerm409 = 0.0f;
		iTempPerm410 = 0;
		fTempPerm411 = 0.0f;
		fTempPerm412 = 0.0f;
		fTempPerm413 = 0.0f;
		fTempPerm414 = 0.0f;
		fTempPerm415 = 0.0f;
		fTempPerm416 = 0.0f;
		fTempPerm417 = 0.0f;
		fTempPerm418 = 0.0f;
		for (int l101 = 0; (l101 < 2); l101 = (l101 + 1)) {
			fRec99[l101] = 0.0f;
		}
		fTempPerm419 = 0.0f;
		for (int l102 = 0; (l102 < 2); l102 = (l102 + 1)) {
			fRec100[l102] = 0.0f;
		}
		fTempPerm420 = 0.0f;
		fTempPerm421 = 0.0f;
		for (int l103 = 0; (l103 < 2); l103 = (l103 + 1)) {
			fRec102[l103] = 0.0f;
		}
		fTempPerm422 = 0.0f;
		for (int l104 = 0; (l104 < 2); l104 = (l104 + 1)) {
			fRec103[l104] = 0.0f;
		}
		for (int l105 = 0; (l105 < 2); l105 = (l105 + 1)) {
			fRec104[l105] = 0.0f;
		}
		fTempPerm423 = 0.0f;
		fTempPerm424 = 0.0f;
		fTempPerm425 = 0.0f;
		fTempPerm426 = 0.0f;
		fTempPerm427 = 0.0f;
		for (int l106 = 0; (l106 < 2); l106 = (l106 + 1)) {
			fRec107[l106] = 0.0f;
		}
		fTempPerm428 = 0.0f;
		for (int l107 = 0; (l107 < 2); l107 = (l107 + 1)) {
			fRec108[l107] = 0.0f;
		}
		fTempPerm429 = 0.0f;
		for (int l108 = 0; (l108 < 2); l108 = (l108 + 1)) {
			fVec16[l108] = 0.0f;
		}
		fTempPerm430 = 0.0f;
		fTempPerm431 = 0.0f;
		fTempPerm432 = 0.0f;
		fTempPerm433 = 0.0f;
		fTempPerm434 = 0.0f;
		fTempPerm435 = 0.0f;
		fTempPerm436 = 0.0f;
		fTempPerm437 = 0.0f;
		fTempPerm438 = 0.0f;
		for (int l109 = 0; (l109 < 2); l109 = (l109 + 1)) {
			fRec110[l109] = 0.0f;
		}
		fTempPerm439 = 0.0f;
		fTempPerm440 = 0.0f;
		fTempPerm441 = 0.0f;
		fTempPerm442 = 0.0f;
		for (int l110 = 0; (l110 < 2); l110 = (l110 + 1)) {
			fVec17[l110] = 0.0f;
		}
		iTempPerm443 = 0;
		for (int l111 = 0; (l111 < 2); l111 = (l111 + 1)) {
			iVec18[l111] = 0;
		}
		iTempPerm444 = 0;
		for (int l112 = 0; (l112 < 2); l112 = (l112 + 1)) {
			fRec115[l112] = 0.0f;
		}
		fTempPerm445 = 0.0f;
		for (int l113 = 0; (l113 < 2); l113 = (l113 + 1)) {
			fRec114[l113] = 0.0f;
		}
		for (int l114 = 0; (l114 < 2); l114 = (l114 + 1)) {
			fRec113[l114] = 0.0f;
		}
		for (int l115 = 0; (l115 < 2); l115 = (l115 + 1)) {
			fRec112[l115] = 0.0f;
		}
		for (int l116 = 0; (l116 < 2); l116 = (l116 + 1)) {
			fRec111[l116] = 0.0f;
		}
		for (int l117 = 0; (l117 < 2); l117 = (l117 + 1)) {
			fRec109[l117] = 0.0f;
		}
		fTempPerm446 = 0.0f;
		fTempPerm447 = 0.0f;
		fTempPerm448 = 0.0f;
		fTempPerm449 = 0.0f;
		fTempPerm450 = 0.0f;
		fTempPerm451 = 0.0f;
		iTempPerm452 = 0;
		fTempPerm453 = 0.0f;
		fTempPerm454 = 0.0f;
		fTempPerm455 = 0.0f;
		for (int l118 = 0; (l118 < 2); l118 = (l118 + 1)) {
			fRec116[l118] = 0.0f;
		}
		fTempPerm456 = 0.0f;
		for (int l119 = 0; (l119 < 2); l119 = (l119 + 1)) {
			fRec117[l119] = 0.0f;
		}
		fTempPerm457 = 0.0f;
		fTempPerm458 = 0.0f;
		for (int l120 = 0; (l120 < 2); l120 = (l120 + 1)) {
			fRec119[l120] = 0.0f;
		}
		fTempPerm459 = 0.0f;
		for (int l121 = 0; (l121 < 2); l121 = (l121 + 1)) {
			fRec120[l121] = 0.0f;
		}
		for (int l122 = 0; (l122 < 2); l122 = (l122 + 1)) {
			fRec121[l122] = 0.0f;
		}
		fTempPerm460 = 0.0f;
		fTempPerm461 = 0.0f;
		fTempPerm462 = 0.0f;
		fTempPerm463 = 0.0f;
		fTempPerm464 = 0.0f;
		for (int l123 = 0; (l123 < 2); l123 = (l123 + 1)) {
			fRec124[l123] = 0.0f;
		}
		fTempPerm465 = 0.0f;
		for (int l124 = 0; (l124 < 2); l124 = (l124 + 1)) {
			fRec125[l124] = 0.0f;
		}
		fTempPerm466 = 0.0f;
		for (int l125 = 0; (l125 < 2); l125 = (l125 + 1)) {
			fVec19[l125] = 0.0f;
		}
		fTempPerm467 = 0.0f;
		for (int l126 = 0; (l126 < 2); l126 = (l126 + 1)) {
			fRec127[l126] = 0.0f;
		}
		fTempPerm468 = 0.0f;
		fTempPerm469 = 0.0f;
		fTempPerm470 = 0.0f;
		fTempPerm471 = 0.0f;
		for (int l127 = 0; (l127 < 2); l127 = (l127 + 1)) {
			fVec20[l127] = 0.0f;
		}
		iTempPerm472 = 0;
		for (int l128 = 0; (l128 < 2); l128 = (l128 + 1)) {
			iVec21[l128] = 0;
		}
		iTempPerm473 = 0;
		for (int l129 = 0; (l129 < 2); l129 = (l129 + 1)) {
			fRec132[l129] = 0.0f;
		}
		fTempPerm474 = 0.0f;
		for (int l130 = 0; (l130 < 2); l130 = (l130 + 1)) {
			fRec131[l130] = 0.0f;
		}
		for (int l131 = 0; (l131 < 2); l131 = (l131 + 1)) {
			fRec130[l131] = 0.0f;
		}
		for (int l132 = 0; (l132 < 2); l132 = (l132 + 1)) {
			fRec129[l132] = 0.0f;
		}
		for (int l133 = 0; (l133 < 2); l133 = (l133 + 1)) {
			fRec128[l133] = 0.0f;
		}
		for (int l134 = 0; (l134 < 2); l134 = (l134 + 1)) {
			fRec126[l134] = 0.0f;
		}
		fTempPerm475 = 0.0f;
		fTempPerm476 = 0.0f;
		fTempPerm477 = 0.0f;
		fTempPerm478 = 0.0f;
		fTempPerm479 = 0.0f;
		fTempPerm480 = 0.0f;
		fTempPerm481 = 0.0f;
		fTempPerm482 = 0.0f;
		fTempPerm483 = 0.0f;
		fTempPerm484 = 0.0f;
		fTempPerm485 = 0.0f;
		fTempPerm486 = 0.0f;
		fTempPerm487 = 0.0f;
		fTempPerm488 = 0.0f;
		fTempPerm489 = 0.0f;
		fTempPerm490 = 0.0f;
		fTempPerm491 = 0.0f;
		fTempPerm492 = 0.0f;
		fTempPerm493 = 0.0f;
		fTempPerm494 = 0.0f;
		fTempPerm495 = 0.0f;
		fTempPerm496 = 0.0f;
		fTempPerm497 = 0.0f;
		fTempPerm498 = 0.0f;
		fTempPerm499 = 0.0f;
		fTempPerm500 = 0.0f;
		fTempPerm501 = 0.0f;
		fTempPerm502 = 0.0f;
		fTempPerm503 = 0.0f;
		fTempPerm504 = 0.0f;
		fTempPerm505 = 0.0f;
		fTempPerm506 = 0.0f;
		fTempPerm507 = 0.0f;
		fTempPerm508 = 0.0f;
		fTempPerm509 = 0.0f;
		fTempPerm510 = 0.0f;
		fTempPerm511 = 0.0f;
		fTempPerm512 = 0.0f;
		fTempPerm513 = 0.0f;
		fTempPerm514 = 0.0f;
		fTempPerm515 = 0.0f;
		fTempPerm516 = 0.0f;
		fTempPerm517 = 0.0f;
		fTempPerm518 = 0.0f;
		fTempPerm519 = 0.0f;
		fTempPerm520 = 0.0f;
		fTempPerm521 = 0.0f;
		fTempPerm522 = 0.0f;
		fTempPerm523 = 0.0f;
		fTempPerm524 = 0.0f;
		fTempPerm525 = 0.0f;
		fTempPerm526 = 0.0f;
		fTempPerm527 = 0.0f;
		fTempPerm528 = 0.0f;
		fTempPerm529 = 0.0f;
		fTempPerm530 = 0.0f;
		fTempPerm531 = 0.0f;
		fTempPerm532 = 0.0f;
		fTempPerm533 = 0.0f;
		fTempPerm534 = 0.0f;
		fTempPerm535 = 0.0f;
		fTempPerm536 = 0.0f;
		fTempPerm537 = 0.0f;
		for (int l135 = 0; (l135 < 2); l135 = (l135 + 1)) {
			fRec133[l135] = 0.0f;
		}
		fTempPerm538 = 0.0f;
		fTempPerm539 = 0.0f;
		for (int l136 = 0; (l136 < 2); l136 = (l136 + 1)) {
			fRec134[l136] = 0.0f;
		}
		fTempPerm540 = 0.0f;
		fTempPerm541 = 0.0f;
		fTempPerm542 = 0.0f;
		for (int l137 = 0; (l137 < 2); l137 = (l137 + 1)) {
			fRec4[l137] = 0.0f;
		}
		fTempPerm543 = 0.0f;
		fTempPerm544 = 0.0f;
		fTempPerm545 = 0.0f;
		fTempPerm546 = 0.0f;
		fTempPerm547 = 0.0f;
		fTempPerm548 = 0.0f;
		fTempPerm549 = 0.0f;
		fTempPerm550 = 0.0f;
		fTempPerm551 = 0.0f;
		fTempPerm552 = 0.0f;
		fTempPerm553 = 0.0f;
		fTempPerm554 = 0.0f;
		fTempPerm555 = 0.0f;
		fTempPerm556 = 0.0f;
		fTempPerm557 = 0.0f;
		fTempPerm558 = 0.0f;
		fTempPerm559 = 0.0f;
		fTempPerm560 = 0.0f;
		fTempPerm561 = 0.0f;
		fTempPerm562 = 0.0f;
		fTempPerm563 = 0.0f;
		fTempPerm564 = 0.0f;
		fTempPerm565 = 0.0f;
		fTempPerm566 = 0.0f;
		fTempPerm567 = 0.0f;
		fTempPerm568 = 0.0f;
		fTempPerm569 = 0.0f;
		fTempPerm570 = 0.0f;
		iTempPerm571 = 0;
		fTempPerm572 = 0.0f;
		fTempPerm573 = 0.0f;
		fTempPerm574 = 0.0f;
		fTempPerm575 = 0.0f;
		fTempPerm576 = 0.0f;
		fTempPerm577 = 0.0f;
		fTempPerm578 = 0.0f;
		fTempPerm579 = 0.0f;
		for (int l138 = 0; (l138 < 2); l138 = (l138 + 1)) {
			fRec135[l138] = 0.0f;
		}
		fTempPerm580 = 0.0f;
		for (int l139 = 0; (l139 < 2); l139 = (l139 + 1)) {
			fRec136[l139] = 0.0f;
		}
		fTempPerm581 = 0.0f;
		fTempPerm582 = 0.0f;
		for (int l140 = 0; (l140 < 2); l140 = (l140 + 1)) {
			fRec138[l140] = 0.0f;
		}
		fTempPerm583 = 0.0f;
		for (int l141 = 0; (l141 < 2); l141 = (l141 + 1)) {
			fRec139[l141] = 0.0f;
		}
		for (int l142 = 0; (l142 < 2); l142 = (l142 + 1)) {
			fRec140[l142] = 0.0f;
		}
		fTempPerm584 = 0.0f;
		fTempPerm585 = 0.0f;
		fTempPerm586 = 0.0f;
		fTempPerm587 = 0.0f;
		fTempPerm588 = 0.0f;
		for (int l143 = 0; (l143 < 2); l143 = (l143 + 1)) {
			fRec143[l143] = 0.0f;
		}
		fTempPerm589 = 0.0f;
		for (int l144 = 0; (l144 < 2); l144 = (l144 + 1)) {
			fRec144[l144] = 0.0f;
		}
		fTempPerm590 = 0.0f;
		for (int l145 = 0; (l145 < 2); l145 = (l145 + 1)) {
			fVec22[l145] = 0.0f;
		}
		fTempPerm591 = 0.0f;
		fTempPerm592 = 0.0f;
		fTempPerm593 = 0.0f;
		fTempPerm594 = 0.0f;
		fTempPerm595 = 0.0f;
		fTempPerm596 = 0.0f;
		fTempPerm597 = 0.0f;
		fTempPerm598 = 0.0f;
		fTempPerm599 = 0.0f;
		for (int l146 = 0; (l146 < 2); l146 = (l146 + 1)) {
			fRec146[l146] = 0.0f;
		}
		fTempPerm600 = 0.0f;
		fTempPerm601 = 0.0f;
		fTempPerm602 = 0.0f;
		fTempPerm603 = 0.0f;
		for (int l147 = 0; (l147 < 2); l147 = (l147 + 1)) {
			fVec23[l147] = 0.0f;
		}
		iTempPerm604 = 0;
		for (int l148 = 0; (l148 < 2); l148 = (l148 + 1)) {
			iVec24[l148] = 0;
		}
		iTempPerm605 = 0;
		for (int l149 = 0; (l149 < 2); l149 = (l149 + 1)) {
			fRec151[l149] = 0.0f;
		}
		fTempPerm606 = 0.0f;
		for (int l150 = 0; (l150 < 2); l150 = (l150 + 1)) {
			fRec150[l150] = 0.0f;
		}
		for (int l151 = 0; (l151 < 2); l151 = (l151 + 1)) {
			fRec149[l151] = 0.0f;
		}
		for (int l152 = 0; (l152 < 2); l152 = (l152 + 1)) {
			fRec148[l152] = 0.0f;
		}
		for (int l153 = 0; (l153 < 2); l153 = (l153 + 1)) {
			fRec147[l153] = 0.0f;
		}
		for (int l154 = 0; (l154 < 2); l154 = (l154 + 1)) {
			fRec145[l154] = 0.0f;
		}
		fTempPerm607 = 0.0f;
		fTempPerm608 = 0.0f;
		fTempPerm609 = 0.0f;
		fTempPerm610 = 0.0f;
		fTempPerm611 = 0.0f;
		fTempPerm612 = 0.0f;
		iTempPerm613 = 0;
		fTempPerm614 = 0.0f;
		fTempPerm615 = 0.0f;
		fTempPerm616 = 0.0f;
		for (int l155 = 0; (l155 < 2); l155 = (l155 + 1)) {
			fRec152[l155] = 0.0f;
		}
		fTempPerm617 = 0.0f;
		for (int l156 = 0; (l156 < 2); l156 = (l156 + 1)) {
			fRec153[l156] = 0.0f;
		}
		fTempPerm618 = 0.0f;
		fTempPerm619 = 0.0f;
		for (int l157 = 0; (l157 < 2); l157 = (l157 + 1)) {
			fRec155[l157] = 0.0f;
		}
		fTempPerm620 = 0.0f;
		for (int l158 = 0; (l158 < 2); l158 = (l158 + 1)) {
			fRec156[l158] = 0.0f;
		}
		for (int l159 = 0; (l159 < 2); l159 = (l159 + 1)) {
			fRec157[l159] = 0.0f;
		}
		fTempPerm621 = 0.0f;
		fTempPerm622 = 0.0f;
		fTempPerm623 = 0.0f;
		fTempPerm624 = 0.0f;
		fTempPerm625 = 0.0f;
		for (int l160 = 0; (l160 < 2); l160 = (l160 + 1)) {
			fRec160[l160] = 0.0f;
		}
		fTempPerm626 = 0.0f;
		for (int l161 = 0; (l161 < 2); l161 = (l161 + 1)) {
			fRec161[l161] = 0.0f;
		}
		fTempPerm627 = 0.0f;
		for (int l162 = 0; (l162 < 2); l162 = (l162 + 1)) {
			fVec25[l162] = 0.0f;
		}
		fTempPerm628 = 0.0f;
		for (int l163 = 0; (l163 < 2); l163 = (l163 + 1)) {
			fRec163[l163] = 0.0f;
		}
		fTempPerm629 = 0.0f;
		fTempPerm630 = 0.0f;
		fTempPerm631 = 0.0f;
		fTempPerm632 = 0.0f;
		for (int l164 = 0; (l164 < 2); l164 = (l164 + 1)) {
			fVec26[l164] = 0.0f;
		}
		iTempPerm633 = 0;
		for (int l165 = 0; (l165 < 2); l165 = (l165 + 1)) {
			iVec27[l165] = 0;
		}
		iTempPerm634 = 0;
		for (int l166 = 0; (l166 < 2); l166 = (l166 + 1)) {
			fRec168[l166] = 0.0f;
		}
		fTempPerm635 = 0.0f;
		for (int l167 = 0; (l167 < 2); l167 = (l167 + 1)) {
			fRec167[l167] = 0.0f;
		}
		for (int l168 = 0; (l168 < 2); l168 = (l168 + 1)) {
			fRec166[l168] = 0.0f;
		}
		for (int l169 = 0; (l169 < 2); l169 = (l169 + 1)) {
			fRec165[l169] = 0.0f;
		}
		for (int l170 = 0; (l170 < 2); l170 = (l170 + 1)) {
			fRec164[l170] = 0.0f;
		}
		for (int l171 = 0; (l171 < 2); l171 = (l171 + 1)) {
			fRec162[l171] = 0.0f;
		}
		fTempPerm636 = 0.0f;
		fTempPerm637 = 0.0f;
		fTempPerm638 = 0.0f;
		fTempPerm639 = 0.0f;
		fTempPerm640 = 0.0f;
		fTempPerm641 = 0.0f;
		fTempPerm642 = 0.0f;
		fTempPerm643 = 0.0f;
		fTempPerm644 = 0.0f;
		fTempPerm645 = 0.0f;
		fTempPerm646 = 0.0f;
		fTempPerm647 = 0.0f;
		fTempPerm648 = 0.0f;
		fTempPerm649 = 0.0f;
		fTempPerm650 = 0.0f;
		fTempPerm651 = 0.0f;
		fTempPerm652 = 0.0f;
		fTempPerm653 = 0.0f;
		fTempPerm654 = 0.0f;
		fTempPerm655 = 0.0f;
		fTempPerm656 = 0.0f;
		fTempPerm657 = 0.0f;
		fTempPerm658 = 0.0f;
		fTempPerm659 = 0.0f;
		fTempPerm660 = 0.0f;
		fTempPerm661 = 0.0f;
		fTempPerm662 = 0.0f;
		fTempPerm663 = 0.0f;
		fTempPerm664 = 0.0f;
		fTempPerm665 = 0.0f;
		fTempPerm666 = 0.0f;
		fTempPerm667 = 0.0f;
		fTempPerm668 = 0.0f;
		fTempPerm669 = 0.0f;
		fTempPerm670 = 0.0f;
		fTempPerm671 = 0.0f;
		fTempPerm672 = 0.0f;
		fTempPerm673 = 0.0f;
		fTempPerm674 = 0.0f;
		fTempPerm675 = 0.0f;
		fTempPerm676 = 0.0f;
		fTempPerm677 = 0.0f;
		fTempPerm678 = 0.0f;
		fTempPerm679 = 0.0f;
		fTempPerm680 = 0.0f;
		fTempPerm681 = 0.0f;
		fTempPerm682 = 0.0f;
		fTempPerm683 = 0.0f;
		fTempPerm684 = 0.0f;
		fTempPerm685 = 0.0f;
		fTempPerm686 = 0.0f;
		fTempPerm687 = 0.0f;
		fTempPerm688 = 0.0f;
		fTempPerm689 = 0.0f;
		fTempPerm690 = 0.0f;
		fTempPerm691 = 0.0f;
		fTempPerm692 = 0.0f;
		fTempPerm693 = 0.0f;
		fTempPerm694 = 0.0f;
		fTempPerm695 = 0.0f;
		fTempPerm696 = 0.0f;
		fTempPerm697 = 0.0f;
		fTempPerm698 = 0.0f;
		for (int l172 = 0; (l172 < 2); l172 = (l172 + 1)) {
			fRec169[l172] = 0.0f;
		}
		fTempPerm699 = 0.0f;
		fTempPerm700 = 0.0f;
		for (int l173 = 0; (l173 < 2); l173 = (l173 + 1)) {
			fRec170[l173] = 0.0f;
		}
		fTempPerm701 = 0.0f;
		fTempPerm702 = 0.0f;
		fTempPerm703 = 0.0f;
		for (int l174 = 0; (l174 < 2); l174 = (l174 + 1)) {
			fRec5[l174] = 0.0f;
		}
		fTempPerm704 = 0.0f;
		fTempPerm705 = 0.0f;
		fTempPerm706 = 0.0f;
		fTempPerm707 = 0.0f;
		fTempPerm708 = 0.0f;
		fTempPerm709 = 0.0f;
		fTempPerm710 = 0.0f;
		fTempPerm711 = 0.0f;
		fTempPerm712 = 0.0f;
		fTempPerm713 = 0.0f;
		fTempPerm714 = 0.0f;
		fTempPerm715 = 0.0f;
		fTempPerm716 = 0.0f;
		fTempPerm717 = 0.0f;
		fTempPerm718 = 0.0f;
		fTempPerm719 = 0.0f;
		iTempPerm720 = 0;
		fTempPerm721 = 0.0f;
		fTempPerm722 = 0.0f;
		fTempPerm723 = 0.0f;
		fTempPerm724 = 0.0f;
		fTempPerm725 = 0.0f;
		fTempPerm726 = 0.0f;
		fTempPerm727 = 0.0f;
		for (int l175 = 0; (l175 < 2); l175 = (l175 + 1)) {
			fRec175[l175] = 0.0f;
		}
		fTempPerm728 = 0.0f;
		for (int l176 = 0; (l176 < 2); l176 = (l176 + 1)) {
			fRec176[l176] = 0.0f;
		}
		fTempPerm729 = 0.0f;
		fTempPerm730 = 0.0f;
		fTempPerm731 = 0.0f;
		fTempPerm732 = 0.0f;
		fTempPerm733 = 0.0f;
		fTempPerm734 = 0.0f;
		fTempPerm735 = 0.0f;
		fTempPerm736 = 0.0f;
		fTempPerm737 = 0.0f;
		for (int l177 = 0; (l177 < 2); l177 = (l177 + 1)) {
			fRec178[l177] = 0.0f;
		}
		fTempPerm738 = 0.0f;
		for (int l178 = 0; (l178 < 2); l178 = (l178 + 1)) {
			fRec179[l178] = 0.0f;
		}
		for (int l179 = 0; (l179 < 2); l179 = (l179 + 1)) {
			fRec180[l179] = 0.0f;
		}
		fTempPerm739 = 0.0f;
		fTempPerm740 = 0.0f;
		fTempPerm741 = 0.0f;
		fTempPerm742 = 0.0f;
		fTempPerm743 = 0.0f;
		fTempPerm744 = 0.0f;
		fTempPerm745 = 0.0f;
		for (int l180 = 0; (l180 < 2); l180 = (l180 + 1)) {
			fRec183[l180] = 0.0f;
		}
		fTempPerm746 = 0.0f;
		for (int l181 = 0; (l181 < 2); l181 = (l181 + 1)) {
			fRec184[l181] = 0.0f;
		}
		fTempPerm747 = 0.0f;
		fTempPerm748 = 0.0f;
		fTempPerm749 = 0.0f;
		for (int l182 = 0; (l182 < 2); l182 = (l182 + 1)) {
			fVec28[l182] = 0.0f;
		}
		fTempPerm750 = 0.0f;
		fTempPerm751 = 0.0f;
		fTempPerm752 = 0.0f;
		fTempPerm753 = 0.0f;
		fTempPerm754 = 0.0f;
		for (int l183 = 0; (l183 < 2); l183 = (l183 + 1)) {
			fRec186[l183] = 0.0f;
		}
		fTempPerm755 = 0.0f;
		fTempPerm756 = 0.0f;
		fTempPerm757 = 0.0f;
		fTempPerm758 = 0.0f;
		for (int l184 = 0; (l184 < 2); l184 = (l184 + 1)) {
			fVec29[l184] = 0.0f;
		}
		iTempPerm759 = 0;
		for (int l185 = 0; (l185 < 2); l185 = (l185 + 1)) {
			iVec30[l185] = 0;
		}
		iTempPerm760 = 0;
		for (int l186 = 0; (l186 < 2); l186 = (l186 + 1)) {
			fRec191[l186] = 0.0f;
		}
		fTempPerm761 = 0.0f;
		for (int l187 = 0; (l187 < 2); l187 = (l187 + 1)) {
			fRec190[l187] = 0.0f;
		}
		for (int l188 = 0; (l188 < 2); l188 = (l188 + 1)) {
			fRec189[l188] = 0.0f;
		}
		for (int l189 = 0; (l189 < 2); l189 = (l189 + 1)) {
			fRec188[l189] = 0.0f;
		}
		for (int l190 = 0; (l190 < 2); l190 = (l190 + 1)) {
			fRec187[l190] = 0.0f;
		}
		for (int l191 = 0; (l191 < 2); l191 = (l191 + 1)) {
			fRec185[l191] = 0.0f;
		}
		fTempPerm762 = 0.0f;
		fTempPerm763 = 0.0f;
		fTempPerm764 = 0.0f;
		fTempPerm765 = 0.0f;
		fTempPerm766 = 0.0f;
		fTempPerm767 = 0.0f;
		iTempPerm768 = 0;
		fTempPerm769 = 0.0f;
		fTempPerm770 = 0.0f;
		fTempPerm771 = 0.0f;
		for (int l192 = 0; (l192 < 2); l192 = (l192 + 1)) {
			fRec192[l192] = 0.0f;
		}
		fTempPerm772 = 0.0f;
		for (int l193 = 0; (l193 < 2); l193 = (l193 + 1)) {
			fRec193[l193] = 0.0f;
		}
		fTempPerm773 = 0.0f;
		fTempPerm774 = 0.0f;
		fTempPerm775 = 0.0f;
		for (int l194 = 0; (l194 < 2); l194 = (l194 + 1)) {
			fRec195[l194] = 0.0f;
		}
		fTempPerm776 = 0.0f;
		for (int l195 = 0; (l195 < 2); l195 = (l195 + 1)) {
			fRec196[l195] = 0.0f;
		}
		for (int l196 = 0; (l196 < 2); l196 = (l196 + 1)) {
			fRec197[l196] = 0.0f;
		}
		fTempPerm777 = 0.0f;
		fTempPerm778 = 0.0f;
		fTempPerm779 = 0.0f;
		fTempPerm780 = 0.0f;
		fTempPerm781 = 0.0f;
		for (int l197 = 0; (l197 < 2); l197 = (l197 + 1)) {
			fRec200[l197] = 0.0f;
		}
		fTempPerm782 = 0.0f;
		for (int l198 = 0; (l198 < 2); l198 = (l198 + 1)) {
			fRec201[l198] = 0.0f;
		}
		fTempPerm783 = 0.0f;
		for (int l199 = 0; (l199 < 2); l199 = (l199 + 1)) {
			fVec31[l199] = 0.0f;
		}
		fTempPerm784 = 0.0f;
		for (int l200 = 0; (l200 < 2); l200 = (l200 + 1)) {
			fRec203[l200] = 0.0f;
		}
		fTempPerm785 = 0.0f;
		fTempPerm786 = 0.0f;
		fTempPerm787 = 0.0f;
		fTempPerm788 = 0.0f;
		for (int l201 = 0; (l201 < 2); l201 = (l201 + 1)) {
			fVec32[l201] = 0.0f;
		}
		iTempPerm789 = 0;
		for (int l202 = 0; (l202 < 2); l202 = (l202 + 1)) {
			iVec33[l202] = 0;
		}
		iTempPerm790 = 0;
		for (int l203 = 0; (l203 < 2); l203 = (l203 + 1)) {
			fRec208[l203] = 0.0f;
		}
		fTempPerm791 = 0.0f;
		for (int l204 = 0; (l204 < 2); l204 = (l204 + 1)) {
			fRec207[l204] = 0.0f;
		}
		for (int l205 = 0; (l205 < 2); l205 = (l205 + 1)) {
			fRec206[l205] = 0.0f;
		}
		for (int l206 = 0; (l206 < 2); l206 = (l206 + 1)) {
			fRec205[l206] = 0.0f;
		}
		for (int l207 = 0; (l207 < 2); l207 = (l207 + 1)) {
			fRec204[l207] = 0.0f;
		}
		for (int l208 = 0; (l208 < 2); l208 = (l208 + 1)) {
			fRec202[l208] = 0.0f;
		}
		fTempPerm792 = 0.0f;
		fTempPerm793 = 0.0f;
		fTempPerm794 = 0.0f;
		fTempPerm795 = 0.0f;
		fTempPerm796 = 0.0f;
		fTempPerm797 = 0.0f;
		fTempPerm798 = 0.0f;
		fTempPerm799 = 0.0f;
		fTempPerm800 = 0.0f;
		fTempPerm801 = 0.0f;
		fTempPerm802 = 0.0f;
		fTempPerm803 = 0.0f;
		fTempPerm804 = 0.0f;
		fTempPerm805 = 0.0f;
		fTempPerm806 = 0.0f;
		fTempPerm807 = 0.0f;
		fTempPerm808 = 0.0f;
		fTempPerm809 = 0.0f;
		fTempPerm810 = 0.0f;
		fTempPerm811 = 0.0f;
		fTempPerm812 = 0.0f;
		fTempPerm813 = 0.0f;
		fTempPerm814 = 0.0f;
		fTempPerm815 = 0.0f;
		fTempPerm816 = 0.0f;
		fTempPerm817 = 0.0f;
		fTempPerm818 = 0.0f;
		fTempPerm819 = 0.0f;
		fTempPerm820 = 0.0f;
		fTempPerm821 = 0.0f;
		fTempPerm822 = 0.0f;
		fTempPerm823 = 0.0f;
		fTempPerm824 = 0.0f;
		fTempPerm825 = 0.0f;
		fTempPerm826 = 0.0f;
		fTempPerm827 = 0.0f;
		fTempPerm828 = 0.0f;
		fTempPerm829 = 0.0f;
		fTempPerm830 = 0.0f;
		fTempPerm831 = 0.0f;
		fTempPerm832 = 0.0f;
		fTempPerm833 = 0.0f;
		fTempPerm834 = 0.0f;
		fTempPerm835 = 0.0f;
		fTempPerm836 = 0.0f;
		fTempPerm837 = 0.0f;
		fTempPerm838 = 0.0f;
		fTempPerm839 = 0.0f;
		fTempPerm840 = 0.0f;
		fTempPerm841 = 0.0f;
		fTempPerm842 = 0.0f;
		fTempPerm843 = 0.0f;
		fTempPerm844 = 0.0f;
		fTempPerm845 = 0.0f;
		fTempPerm846 = 0.0f;
		fTempPerm847 = 0.0f;
		fTempPerm848 = 0.0f;
		fTempPerm849 = 0.0f;
		fTempPerm850 = 0.0f;
		fTempPerm851 = 0.0f;
		fTempPerm852 = 0.0f;
		fTempPerm853 = 0.0f;
		fTempPerm854 = 0.0f;
		for (int l209 = 0; (l209 < 2); l209 = (l209 + 1)) {
			fRec209[l209] = 0.0f;
		}
		fTempPerm855 = 0.0f;
		fTempPerm856 = 0.0f;
		for (int l210 = 0; (l210 < 2); l210 = (l210 + 1)) {
			fRec210[l210] = 0.0f;
		}
		fTempPerm857 = 0.0f;
		fTempPerm858 = 0.0f;
		fTempPerm859 = 0.0f;
		for (int l211 = 0; (l211 < 2); l211 = (l211 + 1)) {
			fRec171[l211] = 0.0f;
		}
		fTempPerm860 = 0.0f;
		fTempPerm861 = 0.0f;
		fTempPerm862 = 0.0f;
		fTempPerm863 = 0.0f;
		fTempPerm864 = 0.0f;
		fTempPerm865 = 0.0f;
		fTempPerm866 = 0.0f;
		fTempPerm867 = 0.0f;
		iTempPerm868 = 0;
		fTempPerm869 = 0.0f;
		fTempPerm870 = 0.0f;
		fTempPerm871 = 0.0f;
		fTempPerm872 = 0.0f;
		for (int l212 = 0; (l212 < 2); l212 = (l212 + 1)) {
			fRec211[l212] = 0.0f;
		}
		fTempPerm873 = 0.0f;
		for (int l213 = 0; (l213 < 2); l213 = (l213 + 1)) {
			fRec212[l213] = 0.0f;
		}
		fTempPerm874 = 0.0f;
		fTempPerm875 = 0.0f;
		for (int l214 = 0; (l214 < 2); l214 = (l214 + 1)) {
			fRec214[l214] = 0.0f;
		}
		fTempPerm876 = 0.0f;
		for (int l215 = 0; (l215 < 2); l215 = (l215 + 1)) {
			fRec215[l215] = 0.0f;
		}
		for (int l216 = 0; (l216 < 2); l216 = (l216 + 1)) {
			fRec216[l216] = 0.0f;
		}
		fTempPerm877 = 0.0f;
		fTempPerm878 = 0.0f;
		fTempPerm879 = 0.0f;
		fTempPerm880 = 0.0f;
		fTempPerm881 = 0.0f;
		for (int l217 = 0; (l217 < 2); l217 = (l217 + 1)) {
			fRec219[l217] = 0.0f;
		}
		fTempPerm882 = 0.0f;
		for (int l218 = 0; (l218 < 2); l218 = (l218 + 1)) {
			fRec220[l218] = 0.0f;
		}
		fTempPerm883 = 0.0f;
		for (int l219 = 0; (l219 < 2); l219 = (l219 + 1)) {
			fVec34[l219] = 0.0f;
		}
		fTempPerm884 = 0.0f;
		fTempPerm885 = 0.0f;
		fTempPerm886 = 0.0f;
		fTempPerm887 = 0.0f;
		fTempPerm888 = 0.0f;
		for (int l220 = 0; (l220 < 2); l220 = (l220 + 1)) {
			fRec222[l220] = 0.0f;
		}
		fTempPerm889 = 0.0f;
		fTempPerm890 = 0.0f;
		fTempPerm891 = 0.0f;
		fTempPerm892 = 0.0f;
		for (int l221 = 0; (l221 < 2); l221 = (l221 + 1)) {
			fVec35[l221] = 0.0f;
		}
		iTempPerm893 = 0;
		for (int l222 = 0; (l222 < 2); l222 = (l222 + 1)) {
			iVec36[l222] = 0;
		}
		iTempPerm894 = 0;
		for (int l223 = 0; (l223 < 2); l223 = (l223 + 1)) {
			fRec227[l223] = 0.0f;
		}
		fTempPerm895 = 0.0f;
		for (int l224 = 0; (l224 < 2); l224 = (l224 + 1)) {
			fRec226[l224] = 0.0f;
		}
		for (int l225 = 0; (l225 < 2); l225 = (l225 + 1)) {
			fRec225[l225] = 0.0f;
		}
		for (int l226 = 0; (l226 < 2); l226 = (l226 + 1)) {
			fRec224[l226] = 0.0f;
		}
		for (int l227 = 0; (l227 < 2); l227 = (l227 + 1)) {
			fRec223[l227] = 0.0f;
		}
		for (int l228 = 0; (l228 < 2); l228 = (l228 + 1)) {
			fRec221[l228] = 0.0f;
		}
		fTempPerm896 = 0.0f;
		fTempPerm897 = 0.0f;
		fTempPerm898 = 0.0f;
		fTempPerm899 = 0.0f;
		fTempPerm900 = 0.0f;
		fTempPerm901 = 0.0f;
		iTempPerm902 = 0;
		fTempPerm903 = 0.0f;
		fTempPerm904 = 0.0f;
		fTempPerm905 = 0.0f;
		for (int l229 = 0; (l229 < 2); l229 = (l229 + 1)) {
			fRec228[l229] = 0.0f;
		}
		fTempPerm906 = 0.0f;
		for (int l230 = 0; (l230 < 2); l230 = (l230 + 1)) {
			fRec229[l230] = 0.0f;
		}
		fTempPerm907 = 0.0f;
		fTempPerm908 = 0.0f;
		for (int l231 = 0; (l231 < 2); l231 = (l231 + 1)) {
			fRec231[l231] = 0.0f;
		}
		fTempPerm909 = 0.0f;
		for (int l232 = 0; (l232 < 2); l232 = (l232 + 1)) {
			fRec232[l232] = 0.0f;
		}
		for (int l233 = 0; (l233 < 2); l233 = (l233 + 1)) {
			fRec233[l233] = 0.0f;
		}
		fTempPerm910 = 0.0f;
		fTempPerm911 = 0.0f;
		fTempPerm912 = 0.0f;
		fTempPerm913 = 0.0f;
		fTempPerm914 = 0.0f;
		for (int l234 = 0; (l234 < 2); l234 = (l234 + 1)) {
			fRec236[l234] = 0.0f;
		}
		fTempPerm915 = 0.0f;
		for (int l235 = 0; (l235 < 2); l235 = (l235 + 1)) {
			fRec237[l235] = 0.0f;
		}
		fTempPerm916 = 0.0f;
		for (int l236 = 0; (l236 < 2); l236 = (l236 + 1)) {
			fVec37[l236] = 0.0f;
		}
		fTempPerm917 = 0.0f;
		for (int l237 = 0; (l237 < 2); l237 = (l237 + 1)) {
			fRec239[l237] = 0.0f;
		}
		fTempPerm918 = 0.0f;
		fTempPerm919 = 0.0f;
		fTempPerm920 = 0.0f;
		fTempPerm921 = 0.0f;
		for (int l238 = 0; (l238 < 2); l238 = (l238 + 1)) {
			fVec38[l238] = 0.0f;
		}
		iTempPerm922 = 0;
		for (int l239 = 0; (l239 < 2); l239 = (l239 + 1)) {
			iVec39[l239] = 0;
		}
		iTempPerm923 = 0;
		for (int l240 = 0; (l240 < 2); l240 = (l240 + 1)) {
			fRec244[l240] = 0.0f;
		}
		fTempPerm924 = 0.0f;
		for (int l241 = 0; (l241 < 2); l241 = (l241 + 1)) {
			fRec243[l241] = 0.0f;
		}
		for (int l242 = 0; (l242 < 2); l242 = (l242 + 1)) {
			fRec242[l242] = 0.0f;
		}
		for (int l243 = 0; (l243 < 2); l243 = (l243 + 1)) {
			fRec241[l243] = 0.0f;
		}
		for (int l244 = 0; (l244 < 2); l244 = (l244 + 1)) {
			fRec240[l244] = 0.0f;
		}
		for (int l245 = 0; (l245 < 2); l245 = (l245 + 1)) {
			fRec238[l245] = 0.0f;
		}
		fTempPerm925 = 0.0f;
		fTempPerm926 = 0.0f;
		fTempPerm927 = 0.0f;
		fTempPerm928 = 0.0f;
		fTempPerm929 = 0.0f;
		fTempPerm930 = 0.0f;
		fTempPerm931 = 0.0f;
		fTempPerm932 = 0.0f;
		fTempPerm933 = 0.0f;
		fTempPerm934 = 0.0f;
		fTempPerm935 = 0.0f;
		fTempPerm936 = 0.0f;
		fTempPerm937 = 0.0f;
		fTempPerm938 = 0.0f;
		fTempPerm939 = 0.0f;
		fTempPerm940 = 0.0f;
		fTempPerm941 = 0.0f;
		fTempPerm942 = 0.0f;
		fTempPerm943 = 0.0f;
		fTempPerm944 = 0.0f;
		fTempPerm945 = 0.0f;
		fTempPerm946 = 0.0f;
		fTempPerm947 = 0.0f;
		fTempPerm948 = 0.0f;
		fTempPerm949 = 0.0f;
		fTempPerm950 = 0.0f;
		fTempPerm951 = 0.0f;
		fTempPerm952 = 0.0f;
		fTempPerm953 = 0.0f;
		fTempPerm954 = 0.0f;
		fTempPerm955 = 0.0f;
		fTempPerm956 = 0.0f;
		fTempPerm957 = 0.0f;
		fTempPerm958 = 0.0f;
		fTempPerm959 = 0.0f;
		fTempPerm960 = 0.0f;
		fTempPerm961 = 0.0f;
		fTempPerm962 = 0.0f;
		fTempPerm963 = 0.0f;
		fTempPerm964 = 0.0f;
		fTempPerm965 = 0.0f;
		fTempPerm966 = 0.0f;
		fTempPerm967 = 0.0f;
		fTempPerm968 = 0.0f;
		fTempPerm969 = 0.0f;
		fTempPerm970 = 0.0f;
		fTempPerm971 = 0.0f;
		fTempPerm972 = 0.0f;
		fTempPerm973 = 0.0f;
		fTempPerm974 = 0.0f;
		fTempPerm975 = 0.0f;
		fTempPerm976 = 0.0f;
		fTempPerm977 = 0.0f;
		fTempPerm978 = 0.0f;
		fTempPerm979 = 0.0f;
		fTempPerm980 = 0.0f;
		fTempPerm981 = 0.0f;
		fTempPerm982 = 0.0f;
		fTempPerm983 = 0.0f;
		fTempPerm984 = 0.0f;
		fTempPerm985 = 0.0f;
		fTempPerm986 = 0.0f;
		fTempPerm987 = 0.0f;
		for (int l246 = 0; (l246 < 2); l246 = (l246 + 1)) {
			fRec245[l246] = 0.0f;
		}
		fTempPerm988 = 0.0f;
		fTempPerm989 = 0.0f;
		for (int l247 = 0; (l247 < 2); l247 = (l247 + 1)) {
			fRec246[l247] = 0.0f;
		}
		fTempPerm990 = 0.0f;
		fTempPerm991 = 0.0f;
		fTempPerm992 = 0.0f;
		for (int l248 = 0; (l248 < 2); l248 = (l248 + 1)) {
			fRec172[l248] = 0.0f;
		}
		fTempPerm993 = 0.0f;
		fTempPerm994 = 0.0f;
		fTempPerm995 = 0.0f;
		fTempPerm996 = 0.0f;
		fTempPerm997 = 0.0f;
		fTempPerm998 = 0.0f;
		fTempPerm999 = 0.0f;
		fTempPerm1000 = 0.0f;
		iTempPerm1001 = 0;
		fTempPerm1002 = 0.0f;
		fTempPerm1003 = 0.0f;
		fTempPerm1004 = 0.0f;
		fTempPerm1005 = 0.0f;
		for (int l249 = 0; (l249 < 2); l249 = (l249 + 1)) {
			fRec247[l249] = 0.0f;
		}
		fTempPerm1006 = 0.0f;
		for (int l250 = 0; (l250 < 2); l250 = (l250 + 1)) {
			fRec248[l250] = 0.0f;
		}
		fTempPerm1007 = 0.0f;
		fTempPerm1008 = 0.0f;
		for (int l251 = 0; (l251 < 2); l251 = (l251 + 1)) {
			fRec250[l251] = 0.0f;
		}
		fTempPerm1009 = 0.0f;
		for (int l252 = 0; (l252 < 2); l252 = (l252 + 1)) {
			fRec251[l252] = 0.0f;
		}
		for (int l253 = 0; (l253 < 2); l253 = (l253 + 1)) {
			fRec252[l253] = 0.0f;
		}
		fTempPerm1010 = 0.0f;
		fTempPerm1011 = 0.0f;
		fTempPerm1012 = 0.0f;
		fTempPerm1013 = 0.0f;
		fTempPerm1014 = 0.0f;
		for (int l254 = 0; (l254 < 2); l254 = (l254 + 1)) {
			fRec255[l254] = 0.0f;
		}
		fTempPerm1015 = 0.0f;
		for (int l255 = 0; (l255 < 2); l255 = (l255 + 1)) {
			fRec256[l255] = 0.0f;
		}
		fTempPerm1016 = 0.0f;
		for (int l256 = 0; (l256 < 2); l256 = (l256 + 1)) {
			fVec40[l256] = 0.0f;
		}
		fTempPerm1017 = 0.0f;
		fTempPerm1018 = 0.0f;
		fTempPerm1019 = 0.0f;
		fTempPerm1020 = 0.0f;
		fTempPerm1021 = 0.0f;
		for (int l257 = 0; (l257 < 2); l257 = (l257 + 1)) {
			fRec258[l257] = 0.0f;
		}
		fTempPerm1022 = 0.0f;
		fTempPerm1023 = 0.0f;
		fTempPerm1024 = 0.0f;
		fTempPerm1025 = 0.0f;
		for (int l258 = 0; (l258 < 2); l258 = (l258 + 1)) {
			fVec41[l258] = 0.0f;
		}
		iTempPerm1026 = 0;
		for (int l259 = 0; (l259 < 2); l259 = (l259 + 1)) {
			iVec42[l259] = 0;
		}
		iTempPerm1027 = 0;
		for (int l260 = 0; (l260 < 2); l260 = (l260 + 1)) {
			fRec263[l260] = 0.0f;
		}
		fTempPerm1028 = 0.0f;
		for (int l261 = 0; (l261 < 2); l261 = (l261 + 1)) {
			fRec262[l261] = 0.0f;
		}
		for (int l262 = 0; (l262 < 2); l262 = (l262 + 1)) {
			fRec261[l262] = 0.0f;
		}
		for (int l263 = 0; (l263 < 2); l263 = (l263 + 1)) {
			fRec260[l263] = 0.0f;
		}
		for (int l264 = 0; (l264 < 2); l264 = (l264 + 1)) {
			fRec259[l264] = 0.0f;
		}
		for (int l265 = 0; (l265 < 2); l265 = (l265 + 1)) {
			fRec257[l265] = 0.0f;
		}
		fTempPerm1029 = 0.0f;
		fTempPerm1030 = 0.0f;
		fTempPerm1031 = 0.0f;
		fTempPerm1032 = 0.0f;
		fTempPerm1033 = 0.0f;
		fTempPerm1034 = 0.0f;
		iTempPerm1035 = 0;
		fTempPerm1036 = 0.0f;
		fTempPerm1037 = 0.0f;
		fTempPerm1038 = 0.0f;
		for (int l266 = 0; (l266 < 2); l266 = (l266 + 1)) {
			fRec264[l266] = 0.0f;
		}
		fTempPerm1039 = 0.0f;
		for (int l267 = 0; (l267 < 2); l267 = (l267 + 1)) {
			fRec265[l267] = 0.0f;
		}
		fTempPerm1040 = 0.0f;
		fTempPerm1041 = 0.0f;
		for (int l268 = 0; (l268 < 2); l268 = (l268 + 1)) {
			fRec267[l268] = 0.0f;
		}
		fTempPerm1042 = 0.0f;
		for (int l269 = 0; (l269 < 2); l269 = (l269 + 1)) {
			fRec268[l269] = 0.0f;
		}
		for (int l270 = 0; (l270 < 2); l270 = (l270 + 1)) {
			fRec269[l270] = 0.0f;
		}
		fTempPerm1043 = 0.0f;
		fTempPerm1044 = 0.0f;
		fTempPerm1045 = 0.0f;
		fTempPerm1046 = 0.0f;
		fTempPerm1047 = 0.0f;
		for (int l271 = 0; (l271 < 2); l271 = (l271 + 1)) {
			fRec272[l271] = 0.0f;
		}
		fTempPerm1048 = 0.0f;
		for (int l272 = 0; (l272 < 2); l272 = (l272 + 1)) {
			fRec273[l272] = 0.0f;
		}
		fTempPerm1049 = 0.0f;
		for (int l273 = 0; (l273 < 2); l273 = (l273 + 1)) {
			fVec43[l273] = 0.0f;
		}
		fTempPerm1050 = 0.0f;
		for (int l274 = 0; (l274 < 2); l274 = (l274 + 1)) {
			fRec275[l274] = 0.0f;
		}
		fTempPerm1051 = 0.0f;
		fTempPerm1052 = 0.0f;
		fTempPerm1053 = 0.0f;
		fTempPerm1054 = 0.0f;
		for (int l275 = 0; (l275 < 2); l275 = (l275 + 1)) {
			fVec44[l275] = 0.0f;
		}
		iTempPerm1055 = 0;
		for (int l276 = 0; (l276 < 2); l276 = (l276 + 1)) {
			iVec45[l276] = 0;
		}
		iTempPerm1056 = 0;
		for (int l277 = 0; (l277 < 2); l277 = (l277 + 1)) {
			fRec280[l277] = 0.0f;
		}
		fTempPerm1057 = 0.0f;
		for (int l278 = 0; (l278 < 2); l278 = (l278 + 1)) {
			fRec279[l278] = 0.0f;
		}
		for (int l279 = 0; (l279 < 2); l279 = (l279 + 1)) {
			fRec278[l279] = 0.0f;
		}
		for (int l280 = 0; (l280 < 2); l280 = (l280 + 1)) {
			fRec277[l280] = 0.0f;
		}
		for (int l281 = 0; (l281 < 2); l281 = (l281 + 1)) {
			fRec276[l281] = 0.0f;
		}
		for (int l282 = 0; (l282 < 2); l282 = (l282 + 1)) {
			fRec274[l282] = 0.0f;
		}
		fTempPerm1058 = 0.0f;
		fTempPerm1059 = 0.0f;
		fTempPerm1060 = 0.0f;
		fTempPerm1061 = 0.0f;
		fTempPerm1062 = 0.0f;
		fTempPerm1063 = 0.0f;
		fTempPerm1064 = 0.0f;
		fTempPerm1065 = 0.0f;
		fTempPerm1066 = 0.0f;
		fTempPerm1067 = 0.0f;
		fTempPerm1068 = 0.0f;
		fTempPerm1069 = 0.0f;
		fTempPerm1070 = 0.0f;
		fTempPerm1071 = 0.0f;
		fTempPerm1072 = 0.0f;
		fTempPerm1073 = 0.0f;
		fTempPerm1074 = 0.0f;
		fTempPerm1075 = 0.0f;
		fTempPerm1076 = 0.0f;
		fTempPerm1077 = 0.0f;
		fTempPerm1078 = 0.0f;
		fTempPerm1079 = 0.0f;
		fTempPerm1080 = 0.0f;
		fTempPerm1081 = 0.0f;
		fTempPerm1082 = 0.0f;
		fTempPerm1083 = 0.0f;
		fTempPerm1084 = 0.0f;
		fTempPerm1085 = 0.0f;
		fTempPerm1086 = 0.0f;
		fTempPerm1087 = 0.0f;
		fTempPerm1088 = 0.0f;
		fTempPerm1089 = 0.0f;
		fTempPerm1090 = 0.0f;
		fTempPerm1091 = 0.0f;
		fTempPerm1092 = 0.0f;
		fTempPerm1093 = 0.0f;
		fTempPerm1094 = 0.0f;
		fTempPerm1095 = 0.0f;
		fTempPerm1096 = 0.0f;
		fTempPerm1097 = 0.0f;
		fTempPerm1098 = 0.0f;
		fTempPerm1099 = 0.0f;
		fTempPerm1100 = 0.0f;
		fTempPerm1101 = 0.0f;
		fTempPerm1102 = 0.0f;
		fTempPerm1103 = 0.0f;
		fTempPerm1104 = 0.0f;
		fTempPerm1105 = 0.0f;
		fTempPerm1106 = 0.0f;
		fTempPerm1107 = 0.0f;
		fTempPerm1108 = 0.0f;
		fTempPerm1109 = 0.0f;
		fTempPerm1110 = 0.0f;
		fTempPerm1111 = 0.0f;
		fTempPerm1112 = 0.0f;
		fTempPerm1113 = 0.0f;
		fTempPerm1114 = 0.0f;
		fTempPerm1115 = 0.0f;
		fTempPerm1116 = 0.0f;
		fTempPerm1117 = 0.0f;
		fTempPerm1118 = 0.0f;
		fTempPerm1119 = 0.0f;
		fTempPerm1120 = 0.0f;
		for (int l283 = 0; (l283 < 2); l283 = (l283 + 1)) {
			fRec281[l283] = 0.0f;
		}
		fTempPerm1121 = 0.0f;
		fTempPerm1122 = 0.0f;
		for (int l284 = 0; (l284 < 2); l284 = (l284 + 1)) {
			fRec282[l284] = 0.0f;
		}
		fTempPerm1123 = 0.0f;
		fTempPerm1124 = 0.0f;
		fTempPerm1125 = 0.0f;
		for (int l285 = 0; (l285 < 2); l285 = (l285 + 1)) {
			fRec173[l285] = 0.0f;
		}
		fTempPerm1126 = 0.0f;
		fTempPerm1127 = 0.0f;
		fTempPerm1128 = 0.0f;
		fTempPerm1129 = 0.0f;
		fTempPerm1130 = 0.0f;
		fTempPerm1131 = 0.0f;
		fTempPerm1132 = 0.0f;
		fTempPerm1133 = 0.0f;
		iTempPerm1134 = 0;
		fTempPerm1135 = 0.0f;
		fTempPerm1136 = 0.0f;
		fTempPerm1137 = 0.0f;
		fTempPerm1138 = 0.0f;
		for (int l286 = 0; (l286 < 2); l286 = (l286 + 1)) {
			fRec283[l286] = 0.0f;
		}
		fTempPerm1139 = 0.0f;
		for (int l287 = 0; (l287 < 2); l287 = (l287 + 1)) {
			fRec284[l287] = 0.0f;
		}
		fTempPerm1140 = 0.0f;
		fTempPerm1141 = 0.0f;
		for (int l288 = 0; (l288 < 2); l288 = (l288 + 1)) {
			fRec286[l288] = 0.0f;
		}
		fTempPerm1142 = 0.0f;
		for (int l289 = 0; (l289 < 2); l289 = (l289 + 1)) {
			fRec287[l289] = 0.0f;
		}
		for (int l290 = 0; (l290 < 2); l290 = (l290 + 1)) {
			fRec288[l290] = 0.0f;
		}
		fTempPerm1143 = 0.0f;
		fTempPerm1144 = 0.0f;
		fTempPerm1145 = 0.0f;
		fTempPerm1146 = 0.0f;
		fTempPerm1147 = 0.0f;
		for (int l291 = 0; (l291 < 2); l291 = (l291 + 1)) {
			fRec291[l291] = 0.0f;
		}
		fTempPerm1148 = 0.0f;
		for (int l292 = 0; (l292 < 2); l292 = (l292 + 1)) {
			fRec292[l292] = 0.0f;
		}
		fTempPerm1149 = 0.0f;
		for (int l293 = 0; (l293 < 2); l293 = (l293 + 1)) {
			fVec46[l293] = 0.0f;
		}
		fTempPerm1150 = 0.0f;
		fTempPerm1151 = 0.0f;
		fTempPerm1152 = 0.0f;
		fTempPerm1153 = 0.0f;
		fTempPerm1154 = 0.0f;
		for (int l294 = 0; (l294 < 2); l294 = (l294 + 1)) {
			fRec294[l294] = 0.0f;
		}
		fTempPerm1155 = 0.0f;
		fTempPerm1156 = 0.0f;
		fTempPerm1157 = 0.0f;
		fTempPerm1158 = 0.0f;
		for (int l295 = 0; (l295 < 2); l295 = (l295 + 1)) {
			fVec47[l295] = 0.0f;
		}
		iTempPerm1159 = 0;
		for (int l296 = 0; (l296 < 2); l296 = (l296 + 1)) {
			iVec48[l296] = 0;
		}
		iTempPerm1160 = 0;
		for (int l297 = 0; (l297 < 2); l297 = (l297 + 1)) {
			fRec299[l297] = 0.0f;
		}
		fTempPerm1161 = 0.0f;
		for (int l298 = 0; (l298 < 2); l298 = (l298 + 1)) {
			fRec298[l298] = 0.0f;
		}
		for (int l299 = 0; (l299 < 2); l299 = (l299 + 1)) {
			fRec297[l299] = 0.0f;
		}
		for (int l300 = 0; (l300 < 2); l300 = (l300 + 1)) {
			fRec296[l300] = 0.0f;
		}
		for (int l301 = 0; (l301 < 2); l301 = (l301 + 1)) {
			fRec295[l301] = 0.0f;
		}
		for (int l302 = 0; (l302 < 2); l302 = (l302 + 1)) {
			fRec293[l302] = 0.0f;
		}
		fTempPerm1162 = 0.0f;
		fTempPerm1163 = 0.0f;
		fTempPerm1164 = 0.0f;
		fTempPerm1165 = 0.0f;
		fTempPerm1166 = 0.0f;
		fTempPerm1167 = 0.0f;
		iTempPerm1168 = 0;
		fTempPerm1169 = 0.0f;
		fTempPerm1170 = 0.0f;
		fTempPerm1171 = 0.0f;
		for (int l303 = 0; (l303 < 2); l303 = (l303 + 1)) {
			fRec300[l303] = 0.0f;
		}
		fTempPerm1172 = 0.0f;
		for (int l304 = 0; (l304 < 2); l304 = (l304 + 1)) {
			fRec301[l304] = 0.0f;
		}
		fTempPerm1173 = 0.0f;
		fTempPerm1174 = 0.0f;
		for (int l305 = 0; (l305 < 2); l305 = (l305 + 1)) {
			fRec303[l305] = 0.0f;
		}
		fTempPerm1175 = 0.0f;
		for (int l306 = 0; (l306 < 2); l306 = (l306 + 1)) {
			fRec304[l306] = 0.0f;
		}
		for (int l307 = 0; (l307 < 2); l307 = (l307 + 1)) {
			fRec305[l307] = 0.0f;
		}
		fTempPerm1176 = 0.0f;
		fTempPerm1177 = 0.0f;
		fTempPerm1178 = 0.0f;
		fTempPerm1179 = 0.0f;
		fTempPerm1180 = 0.0f;
		for (int l308 = 0; (l308 < 2); l308 = (l308 + 1)) {
			fRec308[l308] = 0.0f;
		}
		fTempPerm1181 = 0.0f;
		for (int l309 = 0; (l309 < 2); l309 = (l309 + 1)) {
			fRec309[l309] = 0.0f;
		}
		fTempPerm1182 = 0.0f;
		for (int l310 = 0; (l310 < 2); l310 = (l310 + 1)) {
			fVec49[l310] = 0.0f;
		}
		fTempPerm1183 = 0.0f;
		for (int l311 = 0; (l311 < 2); l311 = (l311 + 1)) {
			fRec311[l311] = 0.0f;
		}
		fTempPerm1184 = 0.0f;
		fTempPerm1185 = 0.0f;
		fTempPerm1186 = 0.0f;
		fTempPerm1187 = 0.0f;
		for (int l312 = 0; (l312 < 2); l312 = (l312 + 1)) {
			fVec50[l312] = 0.0f;
		}
		iTempPerm1188 = 0;
		for (int l313 = 0; (l313 < 2); l313 = (l313 + 1)) {
			iVec51[l313] = 0;
		}
		iTempPerm1189 = 0;
		for (int l314 = 0; (l314 < 2); l314 = (l314 + 1)) {
			fRec316[l314] = 0.0f;
		}
		fTempPerm1190 = 0.0f;
		for (int l315 = 0; (l315 < 2); l315 = (l315 + 1)) {
			fRec315[l315] = 0.0f;
		}
		for (int l316 = 0; (l316 < 2); l316 = (l316 + 1)) {
			fRec314[l316] = 0.0f;
		}
		for (int l317 = 0; (l317 < 2); l317 = (l317 + 1)) {
			fRec313[l317] = 0.0f;
		}
		for (int l318 = 0; (l318 < 2); l318 = (l318 + 1)) {
			fRec312[l318] = 0.0f;
		}
		for (int l319 = 0; (l319 < 2); l319 = (l319 + 1)) {
			fRec310[l319] = 0.0f;
		}
		fTempPerm1191 = 0.0f;
		fTempPerm1192 = 0.0f;
		fTempPerm1193 = 0.0f;
		fTempPerm1194 = 0.0f;
		fTempPerm1195 = 0.0f;
		fTempPerm1196 = 0.0f;
		fTempPerm1197 = 0.0f;
		fTempPerm1198 = 0.0f;
		fTempPerm1199 = 0.0f;
		fTempPerm1200 = 0.0f;
		fTempPerm1201 = 0.0f;
		fTempPerm1202 = 0.0f;
		fTempPerm1203 = 0.0f;
		fTempPerm1204 = 0.0f;
		fTempPerm1205 = 0.0f;
		fTempPerm1206 = 0.0f;
		fTempPerm1207 = 0.0f;
		fTempPerm1208 = 0.0f;
		fTempPerm1209 = 0.0f;
		fTempPerm1210 = 0.0f;
		fTempPerm1211 = 0.0f;
		fTempPerm1212 = 0.0f;
		fTempPerm1213 = 0.0f;
		fTempPerm1214 = 0.0f;
		fTempPerm1215 = 0.0f;
		fTempPerm1216 = 0.0f;
		fTempPerm1217 = 0.0f;
		fTempPerm1218 = 0.0f;
		fTempPerm1219 = 0.0f;
		fTempPerm1220 = 0.0f;
		fTempPerm1221 = 0.0f;
		fTempPerm1222 = 0.0f;
		fTempPerm1223 = 0.0f;
		fTempPerm1224 = 0.0f;
		fTempPerm1225 = 0.0f;
		fTempPerm1226 = 0.0f;
		fTempPerm1227 = 0.0f;
		fTempPerm1228 = 0.0f;
		fTempPerm1229 = 0.0f;
		fTempPerm1230 = 0.0f;
		fTempPerm1231 = 0.0f;
		fTempPerm1232 = 0.0f;
		fTempPerm1233 = 0.0f;
		fTempPerm1234 = 0.0f;
		fTempPerm1235 = 0.0f;
		fTempPerm1236 = 0.0f;
		fTempPerm1237 = 0.0f;
		fTempPerm1238 = 0.0f;
		fTempPerm1239 = 0.0f;
		fTempPerm1240 = 0.0f;
		fTempPerm1241 = 0.0f;
		fTempPerm1242 = 0.0f;
		fTempPerm1243 = 0.0f;
		fTempPerm1244 = 0.0f;
		fTempPerm1245 = 0.0f;
		fTempPerm1246 = 0.0f;
		fTempPerm1247 = 0.0f;
		fTempPerm1248 = 0.0f;
		fTempPerm1249 = 0.0f;
		fTempPerm1250 = 0.0f;
		fTempPerm1251 = 0.0f;
		fTempPerm1252 = 0.0f;
		fTempPerm1253 = 0.0f;
		for (int l320 = 0; (l320 < 2); l320 = (l320 + 1)) {
			fRec317[l320] = 0.0f;
		}
		fTempPerm1254 = 0.0f;
		fTempPerm1255 = 0.0f;
		for (int l321 = 0; (l321 < 2); l321 = (l321 + 1)) {
			fRec318[l321] = 0.0f;
		}
		fTempPerm1256 = 0.0f;
		fTempPerm1257 = 0.0f;
		fTempPerm1258 = 0.0f;
		for (int l322 = 0; (l322 < 2); l322 = (l322 + 1)) {
			fRec174[l322] = 0.0f;
		}
	}
	
	void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	mydsp* clone() {
		return new mydsp();
	}
	
	int getSampleRate() {
		return fSampleRate;
	}
	
	void control(int* iControl, FAUSTFLOAT* fControl) {
		fControl[0] = float(fButton0);
		iControl[0] = (fControl[0] > 0.0f);
		iControl[1] = iControl[0];
		fControl[1] = float(fHslider0);
		fControl[2] = float(fHslider1);
		iControl[2] = int((fConst0 * fControl[2]));
		fControl[3] = float(fHslider2);
		fControl[4] = float(fHslider4);
		fControl[5] = (fControl[4] + -1.0f);
		fControl[6] = ((float(fHslider3) * fControl[5]) + 1.0f);
		fControl[7] = float(iControl[0]);
		fControl[8] = (float(fHslider5) * fControl[7]);
		fControl[9] = float(fVslider0);
		fControl[10] = std::min<float>(8.0f, fControl[9]);
		fControl[11] = float((0.0f == fControl[10]));
		iControl[3] = (fControl[11] != 0.0f);
		fControl[12] = float(fHslider6);
		fControl[13] = std::fabs(fControl[12]);
		fControl[14] = float(fHslider7);
		fControl[15] = std::fabs(fControl[14]);
		fControl[16] = float(fHslider8);
		fControl[17] = std::fabs(fControl[16]);
		fControl[18] = float(fHslider9);
		fControl[19] = std::fabs(fControl[18]);
		fControl[20] = float(fHslider10);
		fControl[21] = std::fabs(fControl[20]);
		fControl[22] = float(fHslider11);
		fControl[23] = std::fabs(fControl[22]);
		fControl[24] = float(fHslider12);
		fControl[25] = std::fabs(fControl[24]);
		fControl[26] = float(fHslider13);
		fControl[27] = std::fabs(fControl[26]);
		fControl[28] = float(fHslider14);
		fControl[29] = std::fabs(fControl[28]);
		fControl[30] = float(fHslider15);
		fControl[31] = std::fabs(fControl[30]);
		fControl[32] = float(fHslider16);
		fControl[33] = std::fabs(fControl[32]);
		fControl[34] = float(fHslider17);
		fControl[35] = std::fabs(fControl[34]);
		fControl[36] = float(fHslider18);
		fControl[37] = std::fabs(fControl[36]);
		fControl[38] = float(fHslider19);
		fControl[39] = std::fabs(fControl[38]);
		fControl[40] = (((((((fControl[13] + (fControl[15] + (fControl[17] + (fControl[19] + (fControl[21] + (fControl[23] + (fControl[25] + fControl[27]))))))) + fControl[29]) + fControl[31]) + fControl[33]) + fControl[35]) + fControl[37]) + fControl[39]);
		fControl[41] = std::min<float>(1.0f, fControl[40]);
		fControl[42] = (fControl[41] / std::max<float>(1.84317514e-35f, fControl[40]));
		fControl[43] = std::max<float>(1.31655367e-36f, fControl[13]);
		fControl[44] = ((fControl[13] < 0.0f) ? (0.0f - fControl[43]) : fControl[43]);
		iControl[4] = (fControl[12] < 0.0f);
		fControl[45] = float(fHslider20);
		fControl[46] = float(fHslider21);
		iControl[5] = int((fConst0 * fControl[46]));
		fControl[47] = float(fHslider22);
		fControl[48] = ((float(fHslider23) * fControl[5]) + 1.0f);
		fControl[49] = (float(fHslider24) * fControl[7]);
		fControl[50] = std::max<float>(1.31655367e-36f, fControl[15]);
		fControl[51] = ((fControl[15] < 0.0f) ? (0.0f - fControl[50]) : fControl[50]);
		iControl[6] = (fControl[14] < 0.0f);
		fControl[52] = float(fHslider25);
		fControl[53] = float(fHslider26);
		iControl[7] = int((fConst0 * fControl[53]));
		fControl[54] = float(fHslider27);
		fControl[55] = ((float(fHslider28) * fControl[5]) + 1.0f);
		fControl[56] = (float(fHslider29) * fControl[7]);
		fControl[57] = std::max<float>(1.31655367e-36f, fControl[17]);
		fControl[58] = ((fControl[17] < 0.0f) ? (0.0f - fControl[57]) : fControl[57]);
		iControl[8] = (fControl[16] < 0.0f);
		fControl[59] = float(fHslider30);
		fControl[60] = float(fHslider31);
		iControl[9] = int((fConst0 * fControl[60]));
		fControl[61] = float(fHslider32);
		fControl[62] = ((float(fHslider33) * fControl[5]) + 1.0f);
		fControl[63] = (float(fHslider34) * fControl[7]);
		fControl[64] = std::max<float>(1.31655367e-36f, fControl[19]);
		fControl[65] = ((fControl[19] < 0.0f) ? (0.0f - fControl[64]) : fControl[64]);
		iControl[10] = (fControl[18] < 0.0f);
		fControl[66] = float(fHslider35);
		fControl[67] = float(fHslider36);
		iControl[11] = int((fConst0 * fControl[67]));
		fControl[68] = float(fHslider37);
		fControl[69] = ((float(fHslider38) * fControl[5]) + 1.0f);
		fControl[70] = (float(fHslider39) * fControl[7]);
		fControl[71] = std::max<float>(1.31655367e-36f, fControl[21]);
		fControl[72] = ((fControl[21] < 0.0f) ? (0.0f - fControl[71]) : fControl[71]);
		iControl[12] = (fControl[20] < 0.0f);
		fControl[73] = (fConst1 * float(fHslider40));
		fControl[74] = std::max<float>(1.31655367e-36f, fControl[23]);
		fControl[75] = ((fControl[23] < 0.0f) ? (0.0f - fControl[74]) : fControl[74]);
		iControl[13] = (fControl[22] < 0.0f);
		fControl[76] = (fConst1 * float(fHslider41));
		fControl[77] = std::max<float>(1.31655367e-36f, fControl[27]);
		fControl[78] = ((fControl[27] < 0.0f) ? (0.0f - fControl[77]) : fControl[77]);
		iControl[14] = (fControl[26] < 0.0f);
		fControl[79] = (fConst1 * float(fHslider42));
		fControl[80] = std::max<float>(1.31655367e-36f, fControl[25]);
		fControl[81] = ((fControl[25] < 0.0f) ? (0.0f - fControl[80]) : fControl[80]);
		iControl[15] = (fControl[24] < 0.0f);
		fControl[82] = (fConst1 * float(fHslider43));
		fControl[83] = std::max<float>(1.31655367e-36f, fControl[29]);
		fControl[84] = (0.00787401572f * float(fVslider1));
		fControl[85] = (1.0f - fControl[84]);
		fControl[86] = (((fControl[29] < 0.0f) ? (0.0f - fControl[83]) : fControl[83]) * ((fControl[28] < 0.0f) ? fControl[85] : fControl[84]));
		fControl[87] = std::max<float>(1.31655367e-36f, fControl[31]);
		fControl[88] = (((fControl[31] < 0.0f) ? (0.0f - fControl[87]) : fControl[87]) * float(((fControl[30] < 0.0f) ? 1 : 0)));
		fControl[89] = std::max<float>(1.31655367e-36f, fControl[33]);
		fControl[90] = (1.0f - fControl[4]);
		fControl[91] = (((fControl[33] < 0.0f) ? (0.0f - fControl[89]) : fControl[89]) * ((fControl[32] < 0.0f) ? fControl[90] : fControl[4]));
		fControl[92] = std::max<float>(1.31655367e-36f, fControl[35]);
		fControl[93] = (0.00787401572f * float(fVslider2));
		fControl[94] = (1.0f - fControl[93]);
		fControl[95] = (((fControl[35] < 0.0f) ? (0.0f - fControl[92]) : fControl[92]) * ((fControl[34] < 0.0f) ? fControl[94] : fControl[93]));
		fControl[96] = std::max<float>(1.31655367e-36f, fControl[37]);
		fControl[97] = float(fVslider3);
		fControl[98] = (0.000122070312f * fControl[97]);
		fControl[99] = (1.0f - fControl[98]);
		fControl[100] = (((fControl[37] < 0.0f) ? (0.0f - fControl[96]) : fControl[96]) * ((fControl[36] < 0.0f) ? fControl[99] : fControl[98]));
		fControl[101] = std::max<float>(1.31655367e-36f, fControl[39]);
		fControl[102] = ((fControl[39] < 0.0f) ? (0.0f - fControl[101]) : fControl[101]);
		iControl[16] = (fControl[38] < 0.0f);
		fControl[103] = (1.0f - fControl[41]);
		fControl[104] = float(fHslider44);
		fControl[105] = float(fHslider45);
		iControl[17] = (std::fabs(fControl[105]) < 1.1920929e-07f);
		fControl[106] = (iControl[17] ? 0.0f : std::exp((0.0f - (fConst1 / (iControl[17] ? 1.0f : fControl[105])))));
		fControl[107] = float(fHslider46);
		iControl[18] = (std::fabs(fControl[107]) < 1.1920929e-07f);
		fControl[108] = (iControl[18] ? 0.0f : std::exp((0.0f - (fConst1 / (iControl[18] ? 1.0f : fControl[107])))));
		fControl[109] = float(fHslider47);
		fControl[110] = float(fHslider48);
		fControl[111] = std::fabs(fControl[110]);
		fControl[112] = float(fHslider49);
		fControl[113] = std::fabs(fControl[112]);
		fControl[114] = float(fHslider50);
		fControl[115] = std::fabs(fControl[114]);
		fControl[116] = float(fHslider51);
		fControl[117] = std::fabs(fControl[116]);
		fControl[118] = float(fHslider52);
		fControl[119] = std::fabs(fControl[118]);
		fControl[120] = float(fHslider53);
		fControl[121] = std::fabs(fControl[120]);
		fControl[122] = float(fHslider54);
		fControl[123] = std::fabs(fControl[122]);
		fControl[124] = float(fHslider55);
		fControl[125] = std::fabs(fControl[124]);
		fControl[126] = float(fHslider56);
		fControl[127] = std::fabs(fControl[126]);
		fControl[128] = float(fHslider57);
		fControl[129] = std::fabs(fControl[128]);
		fControl[130] = float(fHslider58);
		fControl[131] = std::fabs(fControl[130]);
		fControl[132] = float(fHslider59);
		fControl[133] = std::fabs(fControl[132]);
		fControl[134] = float(fHslider60);
		fControl[135] = std::fabs(fControl[134]);
		fControl[136] = float(fHslider61);
		fControl[137] = std::fabs(fControl[136]);
		fControl[138] = (((((((fControl[111] + (fControl[113] + (fControl[115] + (fControl[117] + (fControl[119] + (fControl[121] + (fControl[123] + fControl[125]))))))) + fControl[127]) + fControl[129]) + fControl[131]) + fControl[133]) + fControl[135]) + fControl[137]);
		fControl[139] = std::min<float>(1.0f, fControl[138]);
		fControl[140] = (fControl[139] / std::max<float>(1.84317514e-35f, fControl[138]));
		fControl[141] = std::max<float>(1.31655367e-36f, fControl[111]);
		fControl[142] = ((fControl[111] < 0.0f) ? (0.0f - fControl[141]) : fControl[141]);
		iControl[19] = (fControl[110] < 0.0f);
		fControl[143] = std::max<float>(1.31655367e-36f, fControl[113]);
		fControl[144] = ((fControl[113] < 0.0f) ? (0.0f - fControl[143]) : fControl[143]);
		iControl[20] = (fControl[112] < 0.0f);
		fControl[145] = std::max<float>(1.31655367e-36f, fControl[115]);
		fControl[146] = ((fControl[115] < 0.0f) ? (0.0f - fControl[145]) : fControl[145]);
		iControl[21] = (fControl[114] < 0.0f);
		fControl[147] = std::max<float>(1.31655367e-36f, fControl[117]);
		fControl[148] = ((fControl[117] < 0.0f) ? (0.0f - fControl[147]) : fControl[147]);
		iControl[22] = (fControl[116] < 0.0f);
		fControl[149] = std::max<float>(1.31655367e-36f, fControl[119]);
		fControl[150] = ((fControl[119] < 0.0f) ? (0.0f - fControl[149]) : fControl[149]);
		iControl[23] = (fControl[118] < 0.0f);
		fControl[151] = std::max<float>(1.31655367e-36f, fControl[121]);
		fControl[152] = ((fControl[121] < 0.0f) ? (0.0f - fControl[151]) : fControl[151]);
		iControl[24] = (fControl[120] < 0.0f);
		fControl[153] = std::max<float>(1.31655367e-36f, fControl[125]);
		fControl[154] = ((fControl[125] < 0.0f) ? (0.0f - fControl[153]) : fControl[153]);
		iControl[25] = (fControl[124] < 0.0f);
		fControl[155] = std::max<float>(1.31655367e-36f, fControl[123]);
		fControl[156] = ((fControl[123] < 0.0f) ? (0.0f - fControl[155]) : fControl[155]);
		iControl[26] = (fControl[122] < 0.0f);
		fControl[157] = std::max<float>(1.31655367e-36f, fControl[127]);
		fControl[158] = (((fControl[127] < 0.0f) ? (0.0f - fControl[157]) : fControl[157]) * ((fControl[126] < 0.0f) ? fControl[85] : fControl[84]));
		fControl[159] = std::max<float>(1.31655367e-36f, fControl[129]);
		fControl[160] = (((fControl[129] < 0.0f) ? (0.0f - fControl[159]) : fControl[159]) * float(((fControl[128] < 0.0f) ? 1 : 0)));
		fControl[161] = std::max<float>(1.31655367e-36f, fControl[131]);
		fControl[162] = (((fControl[131] < 0.0f) ? (0.0f - fControl[161]) : fControl[161]) * ((fControl[130] < 0.0f) ? fControl[90] : fControl[4]));
		fControl[163] = std::max<float>(1.31655367e-36f, fControl[133]);
		fControl[164] = (((fControl[133] < 0.0f) ? (0.0f - fControl[163]) : fControl[163]) * ((fControl[132] < 0.0f) ? fControl[94] : fControl[93]));
		fControl[165] = std::max<float>(1.31655367e-36f, fControl[135]);
		fControl[166] = (((fControl[135] < 0.0f) ? (0.0f - fControl[165]) : fControl[165]) * ((fControl[134] < 0.0f) ? fControl[99] : fControl[98]));
		fControl[167] = std::max<float>(1.31655367e-36f, fControl[137]);
		fControl[168] = ((fControl[137] < 0.0f) ? (0.0f - fControl[167]) : fControl[167]);
		iControl[27] = (fControl[136] < 0.0f);
		fControl[169] = (1.0f - fControl[139]);
		fControl[170] = float(fHslider62);
		fControl[171] = float(fHslider63);
		iControl[28] = (std::fabs(fControl[171]) < 1.1920929e-07f);
		fControl[172] = (iControl[28] ? 0.0f : std::exp((0.0f - (fConst1 / (iControl[28] ? 1.0f : fControl[171])))));
		fControl[173] = float(fHslider64);
		iControl[29] = (std::fabs(fControl[173]) < 1.1920929e-07f);
		fControl[174] = (iControl[29] ? 0.0f : std::exp((0.0f - (fConst1 / (iControl[29] ? 1.0f : fControl[173])))));
		fControl[175] = float(fHslider65);
		fControl[176] = float(fHslider66);
		fControl[177] = std::fabs(fControl[176]);
		fControl[178] = float(fHslider67);
		fControl[179] = std::fabs(fControl[178]);
		fControl[180] = float(fHslider68);
		fControl[181] = std::fabs(fControl[180]);
		fControl[182] = float(fHslider69);
		fControl[183] = std::fabs(fControl[182]);
		fControl[184] = float(fHslider70);
		fControl[185] = std::fabs(fControl[184]);
		fControl[186] = float(fHslider71);
		fControl[187] = std::fabs(fControl[186]);
		fControl[188] = float(fHslider72);
		fControl[189] = std::fabs(fControl[188]);
		fControl[190] = float(fHslider73);
		fControl[191] = std::fabs(fControl[190]);
		fControl[192] = float(fHslider74);
		fControl[193] = std::fabs(fControl[192]);
		fControl[194] = float(fHslider75);
		fControl[195] = std::fabs(fControl[194]);
		fControl[196] = float(fHslider76);
		fControl[197] = std::fabs(fControl[196]);
		fControl[198] = float(fHslider77);
		fControl[199] = std::fabs(fControl[198]);
		fControl[200] = float(fHslider78);
		fControl[201] = std::fabs(fControl[200]);
		fControl[202] = float(fHslider79);
		fControl[203] = std::fabs(fControl[202]);
		fControl[204] = (((((((fControl[177] + (fControl[179] + (fControl[181] + (fControl[183] + (fControl[185] + (fControl[187] + (fControl[189] + fControl[191]))))))) + fControl[193]) + fControl[195]) + fControl[197]) + fControl[199]) + fControl[201]) + fControl[203]);
		fControl[205] = std::min<float>(1.0f, fControl[204]);
		fControl[206] = (fControl[205] / std::max<float>(1.84317514e-35f, fControl[204]));
		fControl[207] = std::max<float>(1.31655367e-36f, fControl[177]);
		fControl[208] = ((fControl[177] < 0.0f) ? (0.0f - fControl[207]) : fControl[207]);
		iControl[30] = (fControl[176] < 0.0f);
		fControl[209] = std::max<float>(1.31655367e-36f, fControl[179]);
		fControl[210] = ((fControl[179] < 0.0f) ? (0.0f - fControl[209]) : fControl[209]);
		iControl[31] = (fControl[178] < 0.0f);
		fControl[211] = std::max<float>(1.31655367e-36f, fControl[181]);
		fControl[212] = ((fControl[181] < 0.0f) ? (0.0f - fControl[211]) : fControl[211]);
		iControl[32] = (fControl[180] < 0.0f);
		fControl[213] = std::max<float>(1.31655367e-36f, fControl[183]);
		fControl[214] = ((fControl[183] < 0.0f) ? (0.0f - fControl[213]) : fControl[213]);
		iControl[33] = (fControl[182] < 0.0f);
		fControl[215] = std::max<float>(1.31655367e-36f, fControl[185]);
		fControl[216] = ((fControl[185] < 0.0f) ? (0.0f - fControl[215]) : fControl[215]);
		iControl[34] = (fControl[184] < 0.0f);
		fControl[217] = std::max<float>(1.31655367e-36f, fControl[187]);
		fControl[218] = ((fControl[187] < 0.0f) ? (0.0f - fControl[217]) : fControl[217]);
		iControl[35] = (fControl[186] < 0.0f);
		fControl[219] = std::max<float>(1.31655367e-36f, fControl[191]);
		fControl[220] = ((fControl[191] < 0.0f) ? (0.0f - fControl[219]) : fControl[219]);
		iControl[36] = (fControl[190] < 0.0f);
		fControl[221] = std::max<float>(1.31655367e-36f, fControl[189]);
		fControl[222] = ((fControl[189] < 0.0f) ? (0.0f - fControl[221]) : fControl[221]);
		iControl[37] = (fControl[188] < 0.0f);
		fControl[223] = std::max<float>(1.31655367e-36f, fControl[193]);
		fControl[224] = (((fControl[193] < 0.0f) ? (0.0f - fControl[223]) : fControl[223]) * ((fControl[192] < 0.0f) ? fControl[85] : fControl[84]));
		fControl[225] = std::max<float>(1.31655367e-36f, fControl[195]);
		fControl[226] = (((fControl[195] < 0.0f) ? (0.0f - fControl[225]) : fControl[225]) * float(((fControl[194] < 0.0f) ? 1 : 0)));
		fControl[227] = std::max<float>(1.31655367e-36f, fControl[197]);
		fControl[228] = (((fControl[197] < 0.0f) ? (0.0f - fControl[227]) : fControl[227]) * ((fControl[196] < 0.0f) ? fControl[90] : fControl[4]));
		fControl[229] = std::max<float>(1.31655367e-36f, fControl[199]);
		fControl[230] = (((fControl[199] < 0.0f) ? (0.0f - fControl[229]) : fControl[229]) * ((fControl[198] < 0.0f) ? fControl[94] : fControl[93]));
		fControl[231] = std::max<float>(1.31655367e-36f, fControl[201]);
		fControl[232] = (((fControl[201] < 0.0f) ? (0.0f - fControl[231]) : fControl[231]) * ((fControl[200] < 0.0f) ? fControl[99] : fControl[98]));
		fControl[233] = std::max<float>(1.31655367e-36f, fControl[203]);
		fControl[234] = ((fControl[203] < 0.0f) ? (0.0f - fControl[233]) : fControl[233]);
		iControl[38] = (fControl[202] < 0.0f);
		fControl[235] = (1.0f - fControl[205]);
		fControl[236] = float(fHslider80);
		fControl[237] = float(fHslider81);
		iControl[39] = (std::fabs(fControl[237]) < 1.1920929e-07f);
		fControl[238] = (iControl[39] ? 0.0f : std::exp((0.0f - (fConst1 / (iControl[39] ? 1.0f : fControl[237])))));
		fControl[239] = float(fHslider82);
		iControl[40] = (std::fabs(fControl[239]) < 1.1920929e-07f);
		fControl[240] = (iControl[40] ? 0.0f : std::exp((0.0f - (fConst1 / (iControl[40] ? 1.0f : fControl[239])))));
		fControl[241] = float(fHslider83);
		fControl[242] = float(fHslider84);
		fControl[243] = float(fVslider4);
		fControl[244] = std::min<float>(8.0f, fControl[243]);
		fControl[245] = float((8.0f == fControl[244]));
		iControl[41] = (fControl[245] != 0.0f);
		fControl[246] = float((7.0f == fControl[244]));
		iControl[42] = (fControl[246] != 0.0f);
		fControl[247] = float((6.0f == fControl[244]));
		iControl[43] = (fControl[247] != 0.0f);
		fControl[248] = float((5.0f == fControl[244]));
		iControl[44] = (fControl[248] != 0.0f);
		fControl[249] = float((4.0f == fControl[244]));
		iControl[45] = (fControl[249] != 0.0f);
		fControl[250] = float((3.0f == fControl[244]));
		iControl[46] = (fControl[250] != 0.0f);
		fControl[251] = float((2.0f == fControl[244]));
		iControl[47] = (fControl[251] != 0.0f);
		fControl[252] = float((1.0f == fControl[244]));
		iControl[48] = (fControl[252] != 0.0f);
		fControl[253] = float((0.0f == fControl[244]));
		iControl[49] = (fControl[253] != 0.0f);
		fControl[254] = float(fVslider5);
		fControl[255] = std::min<float>(8.0f, fControl[254]);
		fControl[256] = float((8.0f == fControl[255]));
		iControl[50] = (fControl[256] != 0.0f);
		fControl[257] = float((7.0f == fControl[255]));
		iControl[51] = (fControl[257] != 0.0f);
		fControl[258] = float((6.0f == fControl[255]));
		iControl[52] = (fControl[258] != 0.0f);
		fControl[259] = float((5.0f == fControl[255]));
		iControl[53] = (fControl[259] != 0.0f);
		fControl[260] = float((4.0f == fControl[255]));
		iControl[54] = (fControl[260] != 0.0f);
		fControl[261] = float((3.0f == fControl[255]));
		iControl[55] = (fControl[261] != 0.0f);
		fControl[262] = float((2.0f == fControl[255]));
		iControl[56] = (fControl[262] != 0.0f);
		fControl[263] = float((1.0f == fControl[255]));
		iControl[57] = (fControl[263] != 0.0f);
		fControl[264] = float((0.0f == fControl[255]));
		iControl[58] = (fControl[264] != 0.0f);
		fControl[265] = float(fVslider6);
		fControl[266] = std::min<float>(8.0f, fControl[265]);
		fControl[267] = float((8.0f == fControl[266]));
		iControl[59] = (fControl[267] != 0.0f);
		fControl[268] = float((7.0f == fControl[266]));
		iControl[60] = (fControl[268] != 0.0f);
		fControl[269] = float((6.0f == fControl[266]));
		iControl[61] = (fControl[269] != 0.0f);
		fControl[270] = float((5.0f == fControl[266]));
		iControl[62] = (fControl[270] != 0.0f);
		fControl[271] = float((4.0f == fControl[266]));
		iControl[63] = (fControl[271] != 0.0f);
		fControl[272] = float((3.0f == fControl[266]));
		iControl[64] = (fControl[272] != 0.0f);
		fControl[273] = float((2.0f == fControl[266]));
		iControl[65] = (fControl[273] != 0.0f);
		fControl[274] = float((1.0f == fControl[266]));
		iControl[66] = (fControl[274] != 0.0f);
		fControl[275] = float((0.0f == fControl[266]));
		iControl[67] = (fControl[275] != 0.0f);
		fControl[276] = float((8.0f == fControl[10]));
		iControl[68] = (fControl[276] != 0.0f);
		fControl[277] = float((7.0f == fControl[10]));
		iControl[69] = (fControl[277] != 0.0f);
		fControl[278] = float((6.0f == fControl[10]));
		iControl[70] = (fControl[278] != 0.0f);
		fControl[279] = float((5.0f == fControl[10]));
		iControl[71] = (fControl[279] != 0.0f);
		fControl[280] = float((4.0f == fControl[10]));
		iControl[72] = (fControl[280] != 0.0f);
		fControl[281] = float((3.0f == fControl[10]));
		iControl[73] = (fControl[281] != 0.0f);
		fControl[282] = float((2.0f == fControl[10]));
		iControl[74] = (fControl[282] != 0.0f);
		fControl[283] = float((1.0f == fControl[10]));
		iControl[75] = (fControl[283] != 0.0f);
		fControl[284] = float(fHslider85);
		fControl[285] = float(fHslider86);
		fControl[286] = float(fHslider87);
		fControl[287] = float(fHslider88);
		fControl[288] = float(fHslider89);
		fControl[289] = float(fHslider90);
		fControl[290] = float(fHslider91);
		fControl[291] = float(fHslider92);
		fControl[292] = float(fHslider93);
		fControl[293] = float(fHslider94);
		fControl[294] = float(fHslider95);
		fControl[295] = float(fHslider96);
		fControl[296] = float(fHslider97);
		fControl[297] = float(fHslider98);
		fControl[298] = float(fHslider99);
		fControl[299] = float(fHslider100);
		fControl[300] = float(fHslider101);
		fControl[301] = float(fHslider102);
		fControl[302] = float(fHslider103);
		fControl[303] = float(fHslider104);
		fControl[304] = float(fHslider105);
		fControl[305] = float(fHslider106);
		fControl[306] = float(fHslider107);
		fControl[307] = float(fHslider108);
		fControl[308] = float(fHslider109);
		fControl[309] = float(fHslider110);
		fControl[310] = float(fHslider111);
		fControl[311] = float(fHslider112);
		fControl[312] = float(fHslider113);
		fControl[313] = float(fHslider114);
		fControl[314] = float(fHslider115);
		fControl[315] = float(fHslider116);
		fControl[316] = float(fHslider117);
		fControl[317] = float(fHslider118);
		fControl[318] = float(fHslider119);
		fControl[319] = float(fHslider120);
		fControl[320] = float(fHslider121);
		fControl[321] = float(fHslider122);
		fControl[322] = float(fHslider123);
		fControl[323] = float(fHslider124);
		fControl[324] = float(fHslider125);
		fControl[325] = float(fHslider126);
		fControl[326] = float(fHslider127);
		fControl[327] = float(fHslider128);
		fControl[328] = float(fHslider129);
		fControl[329] = float(fHslider130);
		fControl[330] = float(fHslider131);
		fControl[331] = float(fHslider132);
		fControl[332] = float(fHslider133);
		fControl[333] = float(fHslider134);
		fControl[334] = float(fHslider135);
		fControl[335] = float(fHslider136);
		fControl[336] = float(fHslider137);
		fControl[337] = float(fHslider138);
		fControl[338] = float(fHslider139);
		fControl[339] = float(fHslider140);
		fControl[340] = float(fHslider141);
		fControl[341] = float(fHslider142);
		fControl[342] = float(fHslider143);
		fControl[343] = float(fHslider144);
		fControl[344] = float(fHslider145);
		fControl[345] = float(fHslider146);
		fControl[346] = float(fHslider147);
		fControl[347] = float(fHslider148);
		fControl[348] = float(fHslider149);
		fControl[349] = float(fHslider150);
		fControl[350] = float(fHslider151);
		fControl[351] = float(fHslider152);
		fControl[352] = float(fHslider153);
		fControl[353] = float(fHslider154);
		fControl[354] = float(fHslider155);
		fControl[355] = float(fHslider156);
		fControl[356] = float(fHslider157);
		fControl[357] = float(fHslider158);
		fControl[358] = float(fHslider159);
		fControl[359] = float(fHslider160);
		fControl[360] = float(fHslider161);
		fControl[361] = float(fHslider162);
		fControl[362] = float(fHslider163);
		fControl[363] = float(fHslider164);
		fControl[364] = float(fHslider165);
		fControl[365] = float(fHslider166);
		fControl[366] = float(fHslider167);
		fControl[367] = float(fHslider168);
		fControl[368] = float(fHslider169);
		fControl[369] = float(fHslider170);
		fControl[370] = float(fHslider171);
		fControl[371] = float(fHslider172);
		fControl[372] = float(fHslider173);
		fControl[373] = float(fHslider174);
		fControl[374] = float(fHslider175);
		fControl[375] = float(fHslider176);
		fControl[376] = float(fHslider177);
		fControl[377] = float(fHslider178);
		fControl[378] = float(fHslider179);
		fControl[379] = float(fHslider180);
		fControl[380] = float(fHslider181);
		fControl[381] = float(fHslider182);
		fControl[382] = float(fHslider183);
		fControl[383] = float(fHslider184);
		fControl[384] = float(fHslider185);
		fControl[385] = float(fHslider186);
		fControl[386] = float(fHslider187);
		fControl[387] = float(fHslider188);
		fControl[388] = float(fHslider189);
		fControl[389] = float(fHslider190);
		fControl[390] = float(fHslider191);
		fControl[391] = float(fHslider192);
		iControl[76] = int(float(fEntry0));
		iControl[77] = (iControl[76] == 0);
		iControl[78] = (iControl[76] == 1);
		fControl[392] = float(fVslider7);
		iControl[79] = (std::fabs(fControl[392]) < 1.1920929e-07f);
		fControl[393] = (iControl[79] ? 0.0f : std::exp((0.0f - (fConst1 / (iControl[79] ? 1.0f : fControl[392])))));
		fControl[394] = (4.0f * float(fHslider193));
		fControl[395] = (fControl[394] * (1.0f - fControl[393]));
		fControl[396] = std::pow(2.0f, ((1.01725263e-05f * fControl[97]) * ((fControl[98] > 0.0f) ? float(fEntry2) : (0.0f - float(fEntry1)))));
		iControl[80] = (float(fCheckbox0) != 1.0f);
		fControl[397] = float(fVslider8);
		fControl[398] = float(fHslider194);
		fControl[399] = float(fHslider195);
		fControl[400] = float(fHslider196);
		fControl[401] = float(fHslider197);
		fControl[402] = float(fHslider198);
		fControl[403] = float(fHslider199);
		fControl[404] = float(fHslider200);
		fControl[405] = float(fHslider201);
		fControl[406] = float(fHslider202);
		fControl[407] = float(fHslider203);
		fControl[408] = float(fHslider204);
		fControl[409] = float(fHslider205);
		fControl[410] = float(fHslider206);
		fControl[411] = float(fHslider207);
		fControl[412] = float(fHslider208);
		fControl[413] = float(fHslider209);
		fControl[414] = float(fHslider210);
		fControl[415] = float(fHslider211);
		fControl[416] = float(fHslider212);
		fControl[417] = float(fHslider213);
		fControl[418] = float(fHslider214);
		fControl[419] = float(fHslider215);
		fControl[420] = float(fHslider216);
		fControl[421] = float(fHslider217);
		fControl[422] = float(fHslider218);
		fControl[423] = float(fHslider219);
		fControl[424] = float(fHslider220);
		fControl[425] = float(fHslider221);
		fControl[426] = float(fHslider222);
		fControl[427] = float(fHslider223);
		fControl[428] = float(fHslider224);
		fControl[429] = float(fHslider225);
		fControl[430] = float(fHslider226);
		fControl[431] = float(fHslider227);
		fControl[432] = float(fHslider228);
		fControl[433] = float(fHslider229);
		fControl[434] = float(fHslider230);
		fControl[435] = float(fHslider231);
		fControl[436] = float(fHslider232);
		fControl[437] = float(fHslider233);
		fControl[438] = float(fHslider234);
		fControl[439] = float(fHslider235);
		fControl[440] = float(fHslider236);
		fControl[441] = float(fHslider237);
		fControl[442] = float(fHslider238);
		fControl[443] = float(fHslider239);
		fControl[444] = float(fHslider240);
		fControl[445] = float(fHslider241);
		fControl[446] = float(fHslider242);
		fControl[447] = float(fHslider243);
		fControl[448] = float(fHslider244);
		fControl[449] = float(fHslider245);
		fControl[450] = float(fHslider246);
		fControl[451] = float(fHslider247);
		fControl[452] = float(fHslider248);
		fControl[453] = float(fHslider249);
		fControl[454] = float(fHslider250);
		fControl[455] = float(fHslider251);
		fControl[456] = float(fHslider252);
		fControl[457] = float(fHslider253);
		fControl[458] = float(fHslider254);
		fControl[459] = float(fHslider255);
		fControl[460] = float(fHslider256);
		fControl[461] = float(fHslider257);
		fControl[462] = float(((fControl[9] > 5.0f) ? 64 : 1));
		fControl[463] = float(fHslider258);
		fControl[464] = float(fHslider259);
		fControl[465] = float(fHslider260);
		fControl[466] = float(fHslider261);
		fControl[467] = float(fHslider262);
		fControl[468] = float(fHslider263);
		fControl[469] = float(fHslider264);
		fControl[470] = float(fHslider265);
		fControl[471] = float(fHslider266);
		fControl[472] = float(fHslider267);
		fControl[473] = float(fHslider268);
		fControl[474] = float(fHslider269);
		fControl[475] = float(fHslider270);
		fControl[476] = float(fHslider271);
		fControl[477] = float(fHslider272);
		fControl[478] = float(fHslider273);
		fControl[479] = float(fHslider274);
		fControl[480] = float(fHslider275);
		fControl[481] = float(fHslider276);
		fControl[482] = float(fHslider277);
		fControl[483] = float(fHslider278);
		fControl[484] = float(fHslider279);
		fControl[485] = float(fHslider280);
		fControl[486] = float(fHslider281);
		fControl[487] = float(fHslider282);
		fControl[488] = float(fHslider283);
		fControl[489] = float(fHslider284);
		fControl[490] = float(fHslider285);
		fControl[491] = float(fHslider286);
		fControl[492] = float(fHslider287);
		fControl[493] = float(fHslider288);
		fControl[494] = float(fHslider289);
		fControl[495] = float(fHslider290);
		fControl[496] = float(fHslider291);
		fControl[497] = float(fHslider292);
		fControl[498] = float(fHslider293);
		fControl[499] = float(fHslider294);
		fControl[500] = float(fHslider295);
		fControl[501] = float(fHslider296);
		fControl[502] = float(fHslider297);
		fControl[503] = float(fHslider298);
		fControl[504] = float(fHslider299);
		fControl[505] = float(fHslider300);
		fControl[506] = float(fHslider301);
		fControl[507] = float(fHslider302);
		fControl[508] = float(fHslider303);
		fControl[509] = float(fHslider304);
		fControl[510] = float(fHslider305);
		fControl[511] = float(fHslider306);
		fControl[512] = float(fHslider307);
		fControl[513] = float(fHslider308);
		fControl[514] = float(fHslider309);
		fControl[515] = float(fHslider310);
		fControl[516] = float(fHslider311);
		fControl[517] = float(fHslider312);
		fControl[518] = float(fHslider313);
		fControl[519] = float(fHslider314);
		fControl[520] = float(fHslider315);
		fControl[521] = float(fHslider316);
		fControl[522] = float(fHslider317);
		fControl[523] = float(fHslider318);
		fControl[524] = float(fHslider319);
		fControl[525] = float(fHslider320);
		fControl[526] = float(fHslider321);
		fControl[527] = float(fHslider322);
		fControl[528] = float(fHslider323);
		fControl[529] = float(fHslider324);
		fControl[530] = float(fHslider325);
		fControl[531] = float(fHslider326);
		fControl[532] = float(fHslider327);
		fControl[533] = float(fHslider328);
		fControl[534] = float(fHslider329);
		fControl[535] = float(fHslider330);
		fControl[536] = float(fHslider331);
		fControl[537] = float(fHslider332);
		fControl[538] = float(fHslider333);
		fControl[539] = float(fHslider334);
		fControl[540] = float(fHslider335);
		fControl[541] = float(fHslider336);
		fControl[542] = float(fHslider337);
		fControl[543] = float(fHslider338);
		fControl[544] = float(fHslider339);
		fControl[545] = float(fHslider340);
		fControl[546] = float(fHslider341);
		fControl[547] = float(fHslider342);
		fControl[548] = float(fHslider343);
		fControl[549] = float(fHslider344);
		fControl[550] = float(fHslider345);
		fControl[551] = float(fHslider346);
		fControl[552] = float(fHslider347);
		fControl[553] = float(fHslider348);
		fControl[554] = float(fHslider349);
		fControl[555] = float(fHslider350);
		fControl[556] = float(fHslider351);
		fControl[557] = float(fHslider352);
		fControl[558] = float(fHslider353);
		fControl[559] = float(fHslider354);
		fControl[560] = float(fHslider355);
		fControl[561] = float(fHslider356);
		fControl[562] = float(fHslider357);
		fControl[563] = float(fHslider358);
		fControl[564] = float(fHslider359);
		fControl[565] = float(fHslider360);
		fControl[566] = float(fHslider361);
		fControl[567] = float(fHslider362);
		fControl[568] = float(fHslider363);
		fControl[569] = float(fHslider364);
		fControl[570] = float(fHslider365);
		fControl[571] = float(fHslider366);
		fControl[572] = float(fHslider367);
		fControl[573] = float(fHslider368);
		fControl[574] = float(fHslider369);
		fControl[575] = float(((fControl[265] > 5.0f) ? 64 : 1));
		fControl[576] = float(fHslider370);
		fControl[577] = float(fHslider371);
		fControl[578] = float(fHslider372);
		fControl[579] = float(fHslider373);
		fControl[580] = float(fHslider374);
		fControl[581] = float(fHslider375);
		fControl[582] = float(fHslider376);
		fControl[583] = float(fHslider377);
		fControl[584] = float(fHslider378);
		fControl[585] = float(fHslider379);
		fControl[586] = float(fHslider380);
		fControl[587] = float(fHslider381);
		fControl[588] = float(fHslider382);
		fControl[589] = float(fHslider383);
		fControl[590] = float(fHslider384);
		fControl[591] = float(fHslider385);
		fControl[592] = float(fHslider386);
		fControl[593] = float(fHslider387);
		fControl[594] = float(fHslider388);
		fControl[595] = float(fHslider389);
		fControl[596] = float(fHslider390);
		fControl[597] = float(fHslider391);
		fControl[598] = float(fHslider392);
		fControl[599] = float(fHslider393);
		fControl[600] = float(fHslider394);
		fControl[601] = float(fHslider395);
		fControl[602] = float(fHslider396);
		fControl[603] = float(fHslider397);
		fControl[604] = float(fHslider398);
		fControl[605] = float(fHslider399);
		fControl[606] = float(fHslider400);
		fControl[607] = float(fHslider401);
		fControl[608] = float(fHslider402);
		fControl[609] = float(fHslider403);
		fControl[610] = float(fHslider404);
		fControl[611] = float(fHslider405);
		fControl[612] = float(fHslider406);
		fControl[613] = float(fHslider407);
		fControl[614] = float(fHslider408);
		fControl[615] = float(fHslider409);
		fControl[616] = float(fHslider410);
		fControl[617] = float(fHslider411);
		fControl[618] = float(fHslider412);
		fControl[619] = float(fHslider413);
		fControl[620] = float(fHslider414);
		fControl[621] = float(fHslider415);
		fControl[622] = float(fHslider416);
		fControl[623] = float(fHslider417);
		fControl[624] = float(fHslider418);
		fControl[625] = float(fHslider419);
		fControl[626] = float(fHslider420);
		fControl[627] = float(fHslider421);
		fControl[628] = float(fHslider422);
		fControl[629] = float(fHslider423);
		fControl[630] = float(fHslider424);
		fControl[631] = float(fHslider425);
		fControl[632] = float(fHslider426);
		fControl[633] = float(fHslider427);
		fControl[634] = float(fHslider428);
		fControl[635] = float(fHslider429);
		fControl[636] = float(fHslider430);
		fControl[637] = float(fHslider431);
		fControl[638] = float(fHslider432);
		fControl[639] = float(fHslider433);
		fControl[640] = float(fHslider434);
		fControl[641] = float(fHslider435);
		fControl[642] = float(fHslider436);
		fControl[643] = float(fHslider437);
		fControl[644] = float(fHslider438);
		fControl[645] = float(fHslider439);
		fControl[646] = float(fHslider440);
		fControl[647] = float(fHslider441);
		fControl[648] = float(fHslider442);
		fControl[649] = float(fHslider443);
		fControl[650] = float(fHslider444);
		fControl[651] = float(fHslider445);
		fControl[652] = float(fHslider446);
		fControl[653] = float(fHslider447);
		fControl[654] = float(fHslider448);
		fControl[655] = float(fHslider449);
		fControl[656] = float(fHslider450);
		fControl[657] = float(fHslider451);
		fControl[658] = float(fHslider452);
		fControl[659] = float(fHslider453);
		fControl[660] = float(fHslider454);
		fControl[661] = float(fHslider455);
		fControl[662] = float(fHslider456);
		fControl[663] = float(fHslider457);
		fControl[664] = float(fHslider458);
		fControl[665] = float(fHslider459);
		fControl[666] = float(fHslider460);
		fControl[667] = float(fHslider461);
		fControl[668] = float(fHslider462);
		fControl[669] = float(fHslider463);
		fControl[670] = float(fHslider464);
		fControl[671] = float(fHslider465);
		fControl[672] = float(fHslider466);
		fControl[673] = float(fHslider467);
		fControl[674] = float(fHslider468);
		fControl[675] = float(fHslider469);
		fControl[676] = float(fHslider470);
		fControl[677] = float(fHslider471);
		fControl[678] = float(fHslider472);
		fControl[679] = float(fHslider473);
		fControl[680] = float(fHslider474);
		fControl[681] = float(fHslider475);
		fControl[682] = float(fHslider476);
		fControl[683] = float(fHslider477);
		fControl[684] = float(fHslider478);
		fControl[685] = float(fHslider479);
		fControl[686] = float(fHslider480);
		fControl[687] = float(fHslider481);
		fControl[688] = float(((fControl[254] > 5.0f) ? 64 : 1));
		fControl[689] = float(fHslider482);
		fControl[690] = float(fHslider483);
		fControl[691] = float(fHslider484);
		fControl[692] = float(fHslider485);
		fControl[693] = float(fHslider486);
		fControl[694] = float(fHslider487);
		fControl[695] = float(fHslider488);
		fControl[696] = float(fHslider489);
		fControl[697] = float(fHslider490);
		fControl[698] = float(fHslider491);
		fControl[699] = float(fHslider492);
		fControl[700] = float(fHslider493);
		fControl[701] = float(fHslider494);
		fControl[702] = float(fHslider495);
		fControl[703] = float(fHslider496);
		fControl[704] = float(fHslider497);
		fControl[705] = float(fHslider498);
		fControl[706] = float(fHslider499);
		fControl[707] = float(fHslider500);
		fControl[708] = float(fHslider501);
		fControl[709] = float(fHslider502);
		fControl[710] = float(fHslider503);
		fControl[711] = float(fHslider504);
		fControl[712] = float(fHslider505);
		fControl[713] = float(fHslider506);
		fControl[714] = float(fHslider507);
		fControl[715] = float(fHslider508);
		fControl[716] = float(fHslider509);
		fControl[717] = float(fHslider510);
		fControl[718] = float(fHslider511);
		fControl[719] = float(fHslider512);
		fControl[720] = float(fHslider513);
		fControl[721] = float(fHslider514);
		fControl[722] = float(fHslider515);
		fControl[723] = float(fHslider516);
		fControl[724] = float(fHslider517);
		fControl[725] = float(fHslider518);
		fControl[726] = float(fHslider519);
		fControl[727] = float(fHslider520);
		fControl[728] = float(fHslider521);
		fControl[729] = float(fHslider522);
		fControl[730] = float(fHslider523);
		fControl[731] = float(fHslider524);
		fControl[732] = float(fHslider525);
		fControl[733] = float(fHslider526);
		fControl[734] = float(fHslider527);
		fControl[735] = float(fHslider528);
		fControl[736] = float(fHslider529);
		fControl[737] = float(fHslider530);
		fControl[738] = float(fHslider531);
		fControl[739] = float(fHslider532);
		fControl[740] = float(fHslider533);
		fControl[741] = float(fHslider534);
		fControl[742] = float(fHslider535);
		fControl[743] = float(fHslider536);
		fControl[744] = float(fHslider537);
		fControl[745] = float(fHslider538);
		fControl[746] = float(fHslider539);
		fControl[747] = float(fHslider540);
		fControl[748] = float(fHslider541);
		fControl[749] = float(fHslider542);
		fControl[750] = float(fHslider543);
		fControl[751] = float(fHslider544);
		fControl[752] = float(fHslider545);
		fControl[753] = float(fHslider546);
		fControl[754] = float(fHslider547);
		fControl[755] = float(fHslider548);
		fControl[756] = float(fHslider549);
		fControl[757] = float(fHslider550);
		fControl[758] = float(fHslider551);
		fControl[759] = float(fHslider552);
		fControl[760] = float(fHslider553);
		fControl[761] = float(fHslider554);
		fControl[762] = float(fHslider555);
		fControl[763] = float(fHslider556);
		fControl[764] = float(fHslider557);
		fControl[765] = float(fHslider558);
		fControl[766] = float(fHslider559);
		fControl[767] = float(fHslider560);
		fControl[768] = float(fHslider561);
		fControl[769] = float(fHslider562);
		fControl[770] = float(fHslider563);
		fControl[771] = float(fHslider564);
		fControl[772] = float(fHslider565);
		fControl[773] = float(fHslider566);
		fControl[774] = float(fHslider567);
		fControl[775] = float(fHslider568);
		fControl[776] = float(fHslider569);
		fControl[777] = float(fHslider570);
		fControl[778] = float(fHslider571);
		fControl[779] = float(fHslider572);
		fControl[780] = float(fHslider573);
		fControl[781] = float(fHslider574);
		fControl[782] = float(fHslider575);
		fControl[783] = float(fHslider576);
		fControl[784] = float(fHslider577);
		fControl[785] = float(fHslider578);
		fControl[786] = float(fHslider579);
		fControl[787] = float(fHslider580);
		fControl[788] = float(fHslider581);
		fControl[789] = float(fHslider582);
		fControl[790] = float(fHslider583);
		fControl[791] = float(fHslider584);
		fControl[792] = float(fHslider585);
		fControl[793] = float(fHslider586);
		fControl[794] = float(fHslider587);
		fControl[795] = float(fHslider588);
		fControl[796] = float(fHslider589);
		fControl[797] = float(fHslider590);
		fControl[798] = float(fHslider591);
		fControl[799] = float(fHslider592);
		fControl[800] = float(fHslider593);
		fControl[801] = float(((fControl[243] > 5.0f) ? 64 : 1));
		fControl[802] = float(fHslider594);
		fControl[803] = float(fHslider595);
		fControl[804] = float(fHslider596);
		fControl[805] = float(fHslider597);
		fControl[806] = float(fHslider598);
		fControl[807] = float(fHslider599);
		fControl[808] = float(fHslider600);
		fControl[809] = float(fHslider601);
		fControl[810] = float(fHslider602);
		fControl[811] = float(fHslider603);
		fControl[812] = float(fHslider604);
		fControl[813] = float(fHslider605);
		fControl[814] = float(fHslider606);
		fControl[815] = float(fHslider607);
		fControl[816] = float(fHslider608);
		fControl[817] = float(fHslider609);
		fControl[818] = float(fHslider610);
		fControl[819] = float(fHslider611);
		fControl[820] = float(fHslider612);
		fControl[821] = float(fHslider613);
		fControl[822] = float(fHslider614);
		fControl[823] = float(fHslider615);
		fControl[824] = float(fHslider616);
		fControl[825] = float(fHslider617);
		fControl[826] = float(fHslider618);
		fControl[827] = float(fHslider619);
		fControl[828] = float(fHslider620);
		fControl[829] = float(fHslider621);
		fControl[830] = float(fHslider622);
		fControl[831] = float(fHslider623);
		fControl[832] = float(fHslider624);
		fControl[833] = float(fHslider625);
		fControl[834] = float(fHslider626);
		fControl[835] = float(fHslider627);
		fControl[836] = float(fHslider628);
		fControl[837] = float(fHslider629);
		fControl[838] = float(fHslider630);
		fControl[839] = float(fHslider631);
		fControl[840] = float(fHslider632);
		fControl[841] = float(fHslider633);
		fControl[842] = float(fHslider634);
		fControl[843] = float(fHslider635);
		fControl[844] = float(fHslider636);
		fControl[845] = float(fHslider637);
		fControl[846] = float(fHslider638);
		fControl[847] = float(fHslider639);
		fControl[848] = float(fHslider640);
		fControl[849] = float(fHslider641);
	}

	int getNumIntControls() { return 81; }
	int getNumRealControls() { return 850; }
	
	void compute(FAUSTFLOAT* inputs, FAUSTFLOAT* outputs, int* iControl, FAUSTFLOAT* fControl) {
		float fRec25 = 0.0f;
		float fRec33 = 0.0f;
		float fRec34 = 0.0f;
		float fRec46 = 0.0f;
		float fRec50 = 0.0f;
		float fRec51 = 0.0f;
		float fRec65 = 0.0f;
		float fRec69 = 0.0f;
		float fRec70 = 0.0f;
		float fRec82 = 0.0f;
		float fRec86 = 0.0f;
		float fRec87 = 0.0f;
		float fRec101 = 0.0f;
		float fRec105 = 0.0f;
		float fRec106 = 0.0f;
		float fRec118 = 0.0f;
		float fRec122 = 0.0f;
		float fRec123 = 0.0f;
		float fRec137 = 0.0f;
		float fRec141 = 0.0f;
		float fRec142 = 0.0f;
		float fRec154 = 0.0f;
		float fRec158 = 0.0f;
		float fRec159 = 0.0f;
		float fRec177 = 0.0f;
		float fRec181 = 0.0f;
		float fRec182 = 0.0f;
		float fRec194 = 0.0f;
		float fRec198 = 0.0f;
		float fRec199 = 0.0f;
		float fRec213 = 0.0f;
		float fRec217 = 0.0f;
		float fRec218 = 0.0f;
		float fRec230 = 0.0f;
		float fRec234 = 0.0f;
		float fRec235 = 0.0f;
		float fRec249 = 0.0f;
		float fRec253 = 0.0f;
		float fRec254 = 0.0f;
		float fRec266 = 0.0f;
		float fRec270 = 0.0f;
		float fRec271 = 0.0f;
		float fRec285 = 0.0f;
		float fRec289 = 0.0f;
		float fRec290 = 0.0f;
		float fRec302 = 0.0f;
		float fRec306 = 0.0f;
		float fRec307 = 0.0f;
		iVec0[0] = 1;
		fVec1[0] = fControl[0];
		iVec2[0] = iControl[0];
		iRec1[0] = (iControl[0] * (iRec1[1] + 1));
		int iTemp0 = (iControl[0] - iVec2[1]);
		int iTemp1 = (iTemp0 * (iTemp0 > 0));
		int iTemp2 = ((iRec1[0] < iControl[2]) | iTemp1);
		float fTemp3 = (0.144717798f * (iControl[1] ? (iTemp2 ? fControl[2] : fControl[3]) : fControl[1]));
		int iTemp4 = (std::fabs(fTemp3) < 1.1920929e-07f);
		float fTemp5 = (iTemp4 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp4 ? 1.0f : fTemp3)))));
		fRec0[0] = ((fRec0[1] * fTemp5) + (fControl[6] * ((iControl[1] ? (iTemp2 ? fControl[7] : fControl[8]) : 0.0f) * (1.0f - fTemp5))));
		fHbargraph0 = FAUSTFLOAT(fRec0[0]);
		int iTemp6 = ((iRec1[0] < iControl[5]) | iTemp1);
		float fTemp7 = (0.144717798f * (iControl[1] ? (iTemp6 ? fControl[46] : fControl[47]) : fControl[45]));
		int iTemp8 = (std::fabs(fTemp7) < 1.1920929e-07f);
		float fTemp9 = (iTemp8 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp8 ? 1.0f : fTemp7)))));
		fRec6[0] = ((fRec6[1] * fTemp9) + (fControl[48] * ((iControl[1] ? (iTemp6 ? fControl[7] : fControl[49]) : 0.0f) * (1.0f - fTemp9))));
		fHbargraph1 = FAUSTFLOAT(fRec6[0]);
		float fTemp10 = (1.0f - fHbargraph1);
		int iTemp11 = ((iRec1[0] < iControl[7]) | iTemp1);
		float fTemp12 = (0.144717798f * (iControl[1] ? (iTemp11 ? fControl[53] : fControl[54]) : fControl[52]));
		int iTemp13 = (std::fabs(fTemp12) < 1.1920929e-07f);
		float fTemp14 = (iTemp13 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp13 ? 1.0f : fTemp12)))));
		fRec7[0] = ((fRec7[1] * fTemp14) + (fControl[55] * ((iControl[1] ? (iTemp11 ? fControl[7] : fControl[56]) : 0.0f) * (1.0f - fTemp14))));
		fHbargraph2 = FAUSTFLOAT(fRec7[0]);
		float fTemp15 = (1.0f - fHbargraph2);
		int iTemp16 = ((iRec1[0] < iControl[9]) | iTemp1);
		float fTemp17 = (0.144717798f * (iControl[1] ? (iTemp16 ? fControl[60] : fControl[61]) : fControl[59]));
		int iTemp18 = (std::fabs(fTemp17) < 1.1920929e-07f);
		float fTemp19 = (iTemp18 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp18 ? 1.0f : fTemp17)))));
		fRec8[0] = ((fRec8[1] * fTemp19) + (fControl[62] * ((iControl[1] ? (iTemp16 ? fControl[7] : fControl[63]) : 0.0f) * (1.0f - fTemp19))));
		fHbargraph3 = FAUSTFLOAT(fRec8[0]);
		float fTemp20 = (1.0f - fHbargraph3);
		int iTemp21 = ((iRec1[0] < iControl[11]) | iTemp1);
		float fTemp22 = (0.144717798f * (iControl[1] ? (iTemp21 ? fControl[67] : fControl[68]) : fControl[66]));
		int iTemp23 = (std::fabs(fTemp22) < 1.1920929e-07f);
		float fTemp24 = (iTemp23 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp23 ? 1.0f : fTemp22)))));
		fRec9[0] = ((fRec9[1] * fTemp24) + (fControl[69] * ((iControl[1] ? (iTemp21 ? fControl[7] : fControl[70]) : 0.0f) * (1.0f - fTemp24))));
		fHbargraph4 = FAUSTFLOAT(fRec9[0]);
		float fTemp25 = (1.0f - fHbargraph4);
		fRec11[0] = (fControl[73] + (fRec11[1] - std::floor((fControl[73] + fRec11[1]))));
		fHbargraph5 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec11[0]))]);
		float fTemp26 = (0.5f * (fHbargraph5 + 1.0f));
		float fTemp27 = (1.0f - fTemp26);
		fRec12[0] = (fControl[76] + (fRec12[1] - std::floor((fControl[76] + fRec12[1]))));
		fHbargraph6 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec12[0]))]);
		float fTemp28 = (0.5f * (fHbargraph6 + 1.0f));
		float fTemp29 = (1.0f - fTemp28);
		fRec13[0] = (fControl[79] + (fRec13[1] - std::floor((fControl[79] + fRec13[1]))));
		fHbargraph7 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec13[0]))]);
		float fTemp30 = (0.5f * (fHbargraph7 + 1.0f));
		float fTemp31 = (1.0f - fTemp30);
		fRec14[0] = (fControl[82] + (fRec14[1] - std::floor((fControl[82] + fRec14[1]))));
		fHbargraph8 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec14[0]))]);
		float fTemp32 = (0.5f * (fHbargraph8 + 1.0f));
		float fTemp33 = (1.0f - fTemp32);
		float fTemp34 = (fControl[0] - fVec1[1]);
		float fTemp35 = (fTemp34 * float((fTemp34 > 0.0f)));
		iRec16[0] = ((1103515245 * iRec16[1]) + 12345);
		float fTemp36 = float(iRec16[0]);
		fRec15[0] = (int(fTemp35) ? (4.65661287e-10f * fTemp36) : fRec15[1]);
		float fTemp37 = (1.0f - fRec15[0]);
		float fTemp38 = ((fRec17[1] > fControl[104]) ? fControl[108] : fControl[106]);
		fRec18[0] = ((fRec18[1] * fTemp38) + (fControl[104] * (1.0f - fTemp38)));
		fRec17[0] = fRec18[0];
		fHbargraph9 = FAUSTFLOAT(((fControl[42] * ((((((((((((((fControl[44] * (iControl[4] ? fTemp10 : fHbargraph1)) + (fControl[51] * (iControl[6] ? fTemp15 : fHbargraph2))) + (fControl[58] * (iControl[8] ? fTemp20 : fHbargraph3))) + (fControl[65] * (iControl[10] ? fTemp25 : fHbargraph4))) + (fControl[72] * (iControl[12] ? fTemp27 : fTemp26))) + (fControl[75] * (iControl[13] ? fTemp29 : fTemp28))) + (fControl[78] * (iControl[14] ? fTemp31 : fTemp30))) + (fControl[81] * (iControl[15] ? fTemp33 : fTemp32))) + fControl[86]) + fControl[88]) + fControl[91]) + fControl[95]) + fControl[100]) + (fControl[102] * (iControl[16] ? fTemp37 : fRec15[0])))) + (fControl[103] * fRec17[0])));
		float fTemp39 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph9));
		float fTemp40 = (1.0f - fTemp39);
		float fTemp41 = ((fRec19[1] > fControl[170]) ? fControl[174] : fControl[172]);
		fRec20[0] = ((fRec20[1] * fTemp41) + (fControl[170] * (1.0f - fTemp41)));
		fRec19[0] = fRec20[0];
		fHbargraph10 = FAUSTFLOAT(((fControl[140] * ((((((((((((((fControl[142] * (iControl[19] ? fTemp10 : fHbargraph1)) + (fControl[144] * (iControl[20] ? fTemp15 : fHbargraph2))) + (fControl[146] * (iControl[21] ? fTemp20 : fHbargraph3))) + (fControl[148] * (iControl[22] ? fTemp25 : fHbargraph4))) + (fControl[150] * (iControl[23] ? fTemp27 : fTemp26))) + (fControl[152] * (iControl[24] ? fTemp29 : fTemp28))) + (fControl[154] * (iControl[25] ? fTemp31 : fTemp30))) + (fControl[156] * (iControl[26] ? fTemp33 : fTemp32))) + fControl[158]) + fControl[160]) + fControl[162]) + fControl[164]) + fControl[166]) + (fControl[168] * (iControl[27] ? fTemp37 : fRec15[0])))) + (fControl[169] * fRec19[0])));
		float fTemp42 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph10));
		float fTemp43 = (1.0f - fTemp42);
		float fTemp44 = ((fRec21[1] > fControl[236]) ? fControl[240] : fControl[238]);
		fRec22[0] = ((fRec22[1] * fTemp44) + (fControl[236] * (1.0f - fTemp44)));
		fRec21[0] = fRec22[0];
		fHbargraph11 = FAUSTFLOAT(((fControl[206] * ((((((((((((((fControl[208] * (iControl[30] ? fTemp10 : fHbargraph1)) + (fControl[210] * (iControl[31] ? fTemp15 : fHbargraph2))) + (fControl[212] * (iControl[32] ? fTemp20 : fHbargraph3))) + (fControl[214] * (iControl[33] ? fTemp25 : fHbargraph4))) + (fControl[216] * (iControl[34] ? fTemp27 : fTemp26))) + (fControl[218] * (iControl[35] ? fTemp29 : fTemp28))) + (fControl[220] * (iControl[36] ? fTemp31 : fTemp30))) + (fControl[222] * (iControl[37] ? fTemp33 : fTemp32))) + fControl[224]) + fControl[226]) + fControl[228]) + fControl[230]) + fControl[232]) + (fControl[234] * (iControl[38] ? fTemp37 : fRec15[0])))) + (fControl[235] * fRec21[0])));
		float fTemp45 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph11));
		float fTemp46 = (1.0f - fTemp45);
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm0 = ((((fControl[109] * fTemp43) + (fControl[175] * fTemp42)) * fTemp46) + (fTemp45 * ((fControl[241] * fTemp43) + (fControl[242] * fTemp42))));
			fTempPerm1 = ((fTemp46 * ((fControl[284] * fTemp43) + (fControl[285] * fTemp42))) + (fTemp45 * ((fControl[286] * fTemp43) + (fControl[287] * fTemp42))));
			fTempPerm2 = ((fTemp46 * ((fControl[288] * fTemp43) + (fControl[289] * fTemp42))) + (fTemp45 * ((fControl[290] * fTemp43) + (fControl[291] * fTemp42))));
			fTempPerm3 = ((fTemp46 * ((fControl[292] * fTemp43) + (fControl[293] * fTemp42))) + (fTemp45 * ((fControl[294] * fTemp43) + (fControl[295] * fTemp42))));
			fTempPerm4 = ((fTemp40 * (fTempPerm0 + fTempPerm1)) + (fTemp39 * (fTempPerm2 + fTempPerm3)));
			fTempPerm5 = std::fabs(fTempPerm4);
			fTempPerm6 = ((fTemp46 * ((fControl[296] * fTemp43) + (fControl[297] * fTemp42))) + (fTemp45 * ((fControl[298] * fTemp43) + (fControl[299] * fTemp42))));
			fTempPerm7 = ((fTemp46 * ((fControl[300] * fTemp43) + (fControl[301] * fTemp42))) + (fTemp45 * ((fControl[302] * fTemp43) + (fControl[303] * fTemp42))));
			fTempPerm8 = ((fTemp46 * ((fControl[304] * fTemp43) + (fControl[305] * fTemp42))) + (fTemp45 * ((fControl[306] * fTemp43) + (fControl[307] * fTemp42))));
			fTempPerm9 = ((fTemp46 * ((fControl[308] * fTemp43) + (fControl[309] * fTemp42))) + (fTemp45 * ((fControl[310] * fTemp43) + (fControl[311] * fTemp42))));
			fTempPerm10 = ((fTemp40 * (fTempPerm6 + fTempPerm7)) + (fTemp39 * (fTempPerm8 + fTempPerm9)));
			fTempPerm11 = std::fabs(fTempPerm10);
			fTempPerm12 = ((fTemp46 * ((fControl[312] * fTemp43) + (fControl[313] * fTemp42))) + (fTemp45 * ((fControl[314] * fTemp43) + (fControl[315] * fTemp42))));
			fTempPerm13 = ((fTemp46 * ((fControl[316] * fTemp43) + (fControl[317] * fTemp42))) + (fTemp45 * ((fControl[318] * fTemp43) + (fControl[319] * fTemp42))));
			fTempPerm14 = ((fTemp46 * ((fControl[320] * fTemp43) + (fControl[321] * fTemp42))) + (fTemp45 * ((fControl[322] * fTemp43) + (fControl[323] * fTemp42))));
			fTempPerm15 = ((fTemp46 * ((fControl[324] * fTemp43) + (fControl[325] * fTemp42))) + (fTemp45 * ((fControl[326] * fTemp43) + (fControl[327] * fTemp42))));
			fTempPerm16 = ((fTemp40 * (fTempPerm12 + fTempPerm13)) + (fTemp39 * (fTempPerm14 + fTempPerm15)));
			fTempPerm17 = std::fabs(fTempPerm16);
			fTempPerm18 = ((fTempPerm5 + fTempPerm11) + fTempPerm17);
			fTempPerm19 = std::min<float>(1.0f, fTempPerm18);
			fTempPerm20 = std::max<float>(2.82118644e-37f, fTempPerm5);
			fTempPerm21 = ((fTempPerm4 < 0.0f) ? (0.0f - fTempPerm20) : fTempPerm20);
			iTempPerm22 = (float((fTempPerm4 != 0.0f)) != 0.0f);
			fTempPerm23 = ((fTemp40 * (fTempPerm12 - fTempPerm13)) + (fTemp39 * (fTempPerm14 - fTempPerm15)));
			iTempPerm24 = (float((fTempPerm23 != 0.0f)) != 0.0f);
			fTempPerm25 = ((fTemp40 * (fTempPerm6 - fTempPerm7)) + (fTemp39 * (fTempPerm8 - fTempPerm9)));
			iTempPerm26 = (float((fTempPerm25 != 0.0f)) != 0.0f);
			fTempPerm27 = ((fTemp40 * (fTempPerm0 - fTempPerm1)) + (fTemp39 * (fTempPerm2 - fTempPerm3)));
			iTempPerm28 = (float((fTempPerm27 != 0.0f)) != 0.0f);
			iTempPerm29 = (float((fTempPerm16 != 0.0f)) != 0.0f);
			iTempPerm30 = (float((fTempPerm10 != 0.0f)) != 0.0f);
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | ((iControl[41] & iTempPerm29) | ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm31 = ((fTemp46 * ((fControl[328] * fTemp43) + (fControl[329] * fTemp42))) + (fTemp45 * ((fControl[330] * fTemp43) + (fControl[331] * fTemp42))));
			fTempPerm32 = ((fTemp46 * ((fControl[332] * fTemp43) + (fControl[333] * fTemp42))) + (fTemp45 * ((fControl[334] * fTemp43) + (fControl[335] * fTemp42))));
			fTempPerm33 = ((fTemp46 * ((fControl[336] * fTemp43) + (fControl[337] * fTemp42))) + (fTemp45 * ((fControl[338] * fTemp43) + (fControl[339] * fTemp42))));
			fTempPerm34 = ((fTemp46 * ((fControl[340] * fTemp43) + (fControl[341] * fTemp42))) + (fTemp45 * ((fControl[342] * fTemp43) + (fControl[343] * fTemp42))));
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | (iControl[41] & iTempPerm29)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm35 = std::tan((fConst2 * std::min<float>(fConst4, std::max<float>(0.0f, (440.0f * std::pow(2.0f, (0.0833333358f * ((127.0f * std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTempPerm31 + fTempPerm32)) + (fTemp39 * (fTempPerm33 + fTempPerm34)))))) + -49.0f))))))));
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm36 = ((fTemp46 * ((fControl[344] * fTemp43) + (fControl[345] * fTemp42))) + (fTemp45 * ((fControl[346] * fTemp43) + (fControl[347] * fTemp42))));
			fTempPerm37 = ((fTemp46 * ((fControl[348] * fTemp43) + (fControl[349] * fTemp42))) + (fTemp45 * ((fControl[350] * fTemp43) + (fControl[351] * fTemp42))));
			fTempPerm38 = ((fTemp46 * ((fControl[352] * fTemp43) + (fControl[353] * fTemp42))) + (fTemp45 * ((fControl[354] * fTemp43) + (fControl[355] * fTemp42))));
			fTempPerm39 = ((fTemp46 * ((fControl[356] * fTemp43) + (fControl[357] * fTemp42))) + (fTemp45 * ((fControl[358] * fTemp43) + (fControl[359] * fTemp42))));
			fTempPerm40 = (fRec5[1] * ((fTemp40 * (fTempPerm36 + fTempPerm37)) + (fTemp39 * (fTempPerm38 + fTempPerm39))));
			fTempPerm41 = ((fTemp46 * ((fControl[360] * fTemp43) + (fControl[361] * fTemp42))) + (fTemp45 * ((fControl[362] * fTemp43) + (fControl[363] * fTemp42))));
			fTempPerm42 = ((fTemp46 * ((fControl[364] * fTemp43) + (fControl[365] * fTemp42))) + (fTemp45 * ((fControl[366] * fTemp43) + (fControl[367] * fTemp42))));
			fTempPerm43 = ((fTemp46 * ((fControl[368] * fTemp43) + (fControl[369] * fTemp42))) + (fTemp45 * ((fControl[370] * fTemp43) + (fControl[371] * fTemp42))));
			fTempPerm44 = ((fTemp46 * ((fControl[372] * fTemp43) + (fControl[373] * fTemp42))) + (fTemp45 * ((fControl[374] * fTemp43) + (fControl[375] * fTemp42))));
			fTempPerm45 = (fRec4[1] * ((fTemp40 * (fTempPerm41 + fTempPerm42)) + (fTemp39 * (fTempPerm43 + fTempPerm44))));
			fTempPerm46 = ((fTemp46 * ((fControl[376] * fTemp43) + (fControl[377] * fTemp42))) + (fTemp45 * ((fControl[378] * fTemp43) + (fControl[379] * fTemp42))));
			fTempPerm47 = ((fTemp46 * ((fControl[380] * fTemp43) + (fControl[381] * fTemp42))) + (fTemp45 * ((fControl[382] * fTemp43) + (fControl[383] * fTemp42))));
			fTempPerm48 = ((fTemp46 * ((fControl[384] * fTemp43) + (fControl[385] * fTemp42))) + (fTemp45 * ((fControl[386] * fTemp43) + (fControl[387] * fTemp42))));
			fTempPerm49 = ((fTemp46 * ((fControl[388] * fTemp43) + (fControl[389] * fTemp42))) + (fTemp45 * ((fControl[390] * fTemp43) + (fControl[391] * fTemp42))));
			fTempPerm50 = (fRec3[1] * ((fTemp40 * (fTempPerm46 + fTempPerm47)) + (fTemp39 * (fTempPerm48 + fTempPerm49))));
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fRec27[0] = ((fRec27[1] * fControl[393]) + fControl[395]);
			fTempPerm51 = (float((int(fVec1[1]) & int(fControl[0]))) * fControl[393]);
			fRec28[0] = ((fTempPerm51 * fRec28[1]) + (fControl[394] * (1.0f - fTempPerm51)));
			fTempPerm52 = (fRec26[1] + (fConst5 * ((iControl[77] ? fControl[394] : (iControl[78] ? fRec28[0] : fRec27[0])) * fControl[396])));
			iVec3[0] = (fHbargraph0 < 0.100000001f);
			fRec26[0] = ((fTempPerm52 - std::floor(fTempPerm52)) * float((float((int(float((iVec3[1] & int(fTemp35)))) & iControl[80])) == 0.0f)));
			fTempPerm53 = float(((1 - iVec0[1]) < 1));
			fRec29[0] = ((fControl[397] * (1.0f - (0.999000013f * fTempPerm53))) + (0.999000013f * (fTempPerm53 * fRec29[1])));
			fTempPerm54 = (fRec26[0] + fRec29[0]);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm55 = ((fTemp46 * ((fControl[398] * fTemp43) + (fControl[399] * fTemp42))) + (fTemp45 * ((fControl[400] * fTemp43) + (fControl[401] * fTemp42))));
			fTempPerm56 = ((fTemp46 * ((fControl[402] * fTemp43) + (fControl[403] * fTemp42))) + (fTemp45 * ((fControl[404] * fTemp43) + (fControl[405] * fTemp42))));
			fTempPerm57 = ((fTemp46 * ((fControl[406] * fTemp43) + (fControl[407] * fTemp42))) + (fTemp45 * ((fControl[408] * fTemp43) + (fControl[409] * fTemp42))));
			fTempPerm58 = ((fTemp46 * ((fControl[410] * fTemp43) + (fControl[411] * fTemp42))) + (fTemp45 * ((fControl[412] * fTemp43) + (fControl[413] * fTemp42))));
			fTempPerm59 = ((fTemp40 * (fTempPerm55 + fTempPerm56)) + (fTemp39 * (fTempPerm57 + fTempPerm58)));
			fTempPerm60 = ((fTemp46 * ((fControl[414] * fTemp43) + (fControl[415] * fTemp42))) + (fTemp45 * ((fControl[416] * fTemp43) + (fControl[417] * fTemp42))));
			fTempPerm61 = ((fTemp46 * ((fControl[418] * fTemp43) + (fControl[419] * fTemp42))) + (fTemp45 * ((fControl[420] * fTemp43) + (fControl[421] * fTemp42))));
			fTempPerm62 = ((fTemp46 * ((fControl[422] * fTemp43) + (fControl[423] * fTemp42))) + (fTemp45 * ((fControl[424] * fTemp43) + (fControl[425] * fTemp42))));
			fTempPerm63 = ((fTemp46 * ((fControl[426] * fTemp43) + (fControl[427] * fTemp42))) + (fTemp45 * ((fControl[428] * fTemp43) + (fControl[429] * fTemp42))));
			fTempPerm64 = ((fTemp40 * (fTempPerm60 + fTempPerm61)) + (fTemp39 * (fTempPerm62 + fTempPerm63)));
			fTempPerm65 = std::floor(fTempPerm64);
			fTempPerm66 = (fTempPerm65 + float(((fTempPerm64 < 0.0f) & (fTempPerm64 != fTempPerm65))));
			fTempPerm67 = (fTempPerm54 + (0.00390625f * (fTempPerm59 * std::pow(2.0f, (0.0f - fTempPerm66)))));
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm68 = std::floor(fTempPerm54);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			iTempPerm69 = int(fTempPerm66);
			fTempPerm70 = ((fTemp46 * ((fControl[430] * fTemp43) + (fControl[431] * fTemp42))) + (fTemp45 * ((fControl[432] * fTemp43) + (fControl[433] * fTemp42))));
			fTempPerm71 = ((fTemp46 * ((fControl[434] * fTemp43) + (fControl[435] * fTemp42))) + (fTemp45 * ((fControl[436] * fTemp43) + (fControl[437] * fTemp42))));
			fTempPerm72 = ((fTemp46 * ((fControl[438] * fTemp43) + (fControl[439] * fTemp42))) + (fTemp45 * ((fControl[440] * fTemp43) + (fControl[441] * fTemp42))));
			fTempPerm73 = ((fTemp46 * ((fControl[442] * fTemp43) + (fControl[443] * fTemp42))) + (fTemp45 * ((fControl[444] * fTemp43) + (fControl[445] * fTemp42))));
			fTempPerm74 = (fRec2[1] * ((fTemp40 * (fTempPerm70 + fTempPerm71)) + (fTemp39 * (fTempPerm72 + fTempPerm73))));
			fTempPerm75 = (fTempPerm40 + (fTempPerm45 + (fTempPerm50 + (std::fmod((256.0f * ((fTempPerm67 - (fTempPerm68 + std::floor((fTempPerm67 - fTempPerm68)))) * (((float((iTempPerm69 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm69)))))) + float((iTempPerm69 == 0))) + float(((iTempPerm69 > 0) * int(std::pow(2.0f, float(iTempPerm69)))))))), 1.0f) + fTempPerm74))));
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))) {
			fTempPerm76 = (fRec23[1] + (fTempPerm35 * (fTempPerm75 - fRec24[1])));
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | ((iControl[41] & iTempPerm29) | ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm77 = ((fTemp46 * ((fControl[446] * fTemp43) + (fControl[447] * fTemp42))) + (fTemp45 * ((fControl[448] * fTemp43) + (fControl[449] * fTemp42))));
			fTempPerm78 = ((fTemp46 * ((fControl[450] * fTemp43) + (fControl[451] * fTemp42))) + (fTemp45 * ((fControl[452] * fTemp43) + (fControl[453] * fTemp42))));
			fTempPerm79 = ((fTemp46 * ((fControl[454] * fTemp43) + (fControl[455] * fTemp42))) + (fTemp45 * ((fControl[456] * fTemp43) + (fControl[457] * fTemp42))));
			fTempPerm80 = ((fTemp46 * ((fControl[458] * fTemp43) + (fControl[459] * fTemp42))) + (fTemp45 * ((fControl[460] * fTemp43) + (fControl[461] * fTemp42))));
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | (iControl[41] & iTempPerm29)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm81 = std::min<float>(10.0f, std::max<float>(0.00999999978f, ((fTemp40 * (fTempPerm77 + fTempPerm78)) + (fTemp39 * (fTempPerm79 + fTempPerm80)))));
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | (iControl[41] & iTempPerm29)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm82 = (fTempPerm35 + (1.0f / fTempPerm81));
			fTempPerm83 = ((fTempPerm35 * fTempPerm82) + 1.0f);
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))) {
			fTempPerm84 = (fTempPerm76 / fTempPerm83);
			fRec23[0] = ((2.0f * fTempPerm84) - fRec23[1]);
			fTempPerm85 = (fRec24[1] + ((fTempPerm35 * fTempPerm76) / fTempPerm83));
			fRec24[0] = ((2.0f * fTempPerm85) - fRec24[1]);
			fRec25 = fTempPerm85;
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm86 = std::max<float>(2.82118644e-37f, fTempPerm11);
			fTempPerm87 = ((fTempPerm10 < 0.0f) ? (0.0f - fTempPerm86) : fTempPerm86);
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))) {
			fTempPerm88 = (fTempPerm35 * (fTempPerm75 - fRec32[1]));
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | ((iControl[68] & iTempPerm30) | ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | ((iControl[59] & iTempPerm30) | ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | ((iControl[50] & iTempPerm30) | ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))))))))))))))))))))))))))))) {
			fTempPerm89 = (fTempPerm81 + -0.707000017f);
			fTempPerm90 = (fTempPerm35 + 1.0f);
			fTempPerm91 = (1.0f - (fTempPerm35 / fTempPerm90));
			fTempPerm92 = (0.0f - (1.0f / fTempPerm90));
			fTempPerm93 = (1.0f - (0.215215757f * (((fTempPerm35 * fTempPerm89) * fTempPerm91) / fTempPerm90)));
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))) {
			fTempPerm94 = ((fTempPerm35 * ((((fRec32[1] + ((fTempPerm88 + (0.215215757f * ((fRec30[1] * fTempPerm89) * fTempPerm91))) / fTempPerm90)) + (fRec31[1] * fTempPerm92)) / fTempPerm93) - fRec30[1])) / fTempPerm90);
			fRec30[0] = (fRec30[1] + (2.0f * fTempPerm94));
			fTempPerm95 = (fRec30[1] + fTempPerm94);
			fRec31[0] = (fRec31[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm95)) - fRec31[1])) / fTempPerm90)));
			fRec32[0] = (fRec32[1] + (2.0f * (fTempPerm88 / fTempPerm90)));
			fRec33 = fTempPerm95;
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm96 = std::max<float>(2.82118644e-37f, fTempPerm17);
			fTempPerm97 = ((fTempPerm16 < 0.0f) ? (0.0f - fTempPerm96) : fTempPerm96);
		}
		if ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))) {
			fTempPerm98 = (fTempPerm75 - (fRec35[1] + (fTempPerm82 * fRec36[1])));
			fTempPerm99 = ((fTempPerm35 * fTempPerm98) / fTempPerm83);
			fTempPerm100 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec36[1] + fTempPerm99)));
			fTempPerm101 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm100)));
			fTempPerm102 = ((fTempPerm35 * fTempPerm100) * fTempPerm101);
			fRec34 = (fRec35[1] + fTempPerm102);
			fRec35[0] = (fRec35[1] + (2.0f * fTempPerm102));
			fTempPerm103 = (fTempPerm100 * fTempPerm101);
			fRec36[0] = (fTempPerm99 + fTempPerm103);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm104 = std::max<float>(8.46355933e-37f, fTempPerm18);
			fTempPerm105 = (1.0f - fTempPerm19);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm106 = (((fTempPerm19 * (((fTempPerm21 * fRec25) + (fTempPerm87 * fRec33)) + (fTempPerm97 * fRec34))) / fTempPerm104) + (fTempPerm75 * fTempPerm105));
			fVec4[0] = fTempPerm106;
			fTempPerm107 = ((fTemp46 * ((fControl[463] * fTemp43) + (fControl[464] * fTemp42))) + (fTemp45 * ((fControl[465] * fTemp43) + (fControl[466] * fTemp42))));
			fTempPerm108 = ((fTemp46 * ((fControl[467] * fTemp43) + (fControl[468] * fTemp42))) + (fTemp45 * ((fControl[469] * fTemp43) + (fControl[470] * fTemp42))));
			fTempPerm109 = ((fTemp46 * ((fControl[471] * fTemp43) + (fControl[472] * fTemp42))) + (fTemp45 * ((fControl[473] * fTemp43) + (fControl[474] * fTemp42))));
			fTempPerm110 = ((fTemp46 * ((fControl[475] * fTemp43) + (fControl[476] * fTemp42))) + (fTemp45 * ((fControl[477] * fTemp43) + (fControl[478] * fTemp42))));
			fTempPerm111 = ((fTemp40 * (fTempPerm107 + fTempPerm108)) + (fTemp39 * (fTempPerm109 + fTempPerm110)));
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
			fTempPerm112 = (fControl[462] * fTempPerm111);
		}
		if (iControl[3]) {
			fTempPerm113 = (2.0f * fTempPerm112);
			fTempPerm114 = std::min<float>(1.0f, fTempPerm113);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fTempPerm115 = (fTempPerm106 - fVec4[1]);
			fRec38[0] = ((std::fabs(fTempPerm115) < 0.5f) ? (fConst0 * fTempPerm115) : fRec38[1]);
		}
		if (iControl[3]) {
			fTempPerm116 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec38[0])))))));
			fTempPerm117 = (1.0f - fTempPerm116);
		}
		if (iControl[3] | iControl[69]) {
			fTempPerm118 = std::floor(fTempPerm106);
			fTempPerm119 = (fTempPerm106 - fTempPerm118);
			fVec5[0] = fTempPerm119;
			iTempPerm120 = (fTempPerm119 < 0.5f);
			iVec6[0] = iTempPerm120;
		}
		if (iControl[3]) {
			iTempPerm121 = ((iVec6[1] <= 0) & (iTempPerm120 > 0));
			fRec43[0] = ((fRec43[1] * float((1 - iTempPerm121))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm121))));
			fTempPerm122 = (fTempPerm116 + 1.0f);
			fRec42[0] = (0.0f - (((fTempPerm117 * fRec42[1]) - (fRec43[0] + fRec43[1])) / fTempPerm122));
			fRec41[0] = (0.0f - (((fTempPerm117 * fRec41[1]) - (fRec42[0] + fRec42[1])) / fTempPerm122));
			fRec40[0] = (0.0f - (((fTempPerm117 * fRec40[1]) - (fRec41[0] + fRec41[1])) / fTempPerm122));
			fRec39[0] = (0.0f - (((fTempPerm117 * fRec39[1]) - (fRec40[0] + fRec40[1])) / fTempPerm122));
			fRec37[0] = (0.0f - (((fRec37[1] * fTempPerm117) - (fRec39[0] + fRec39[1])) / fTempPerm122));
			fTempPerm123 = (std::sin((6.28318548f * fTempPerm106)) * ((fTempPerm114 * (fRec37[0] + -1.0f)) + 1.0f));
			fTempPerm124 = (std::max<float>(1.0f, fTempPerm113) + -1.0f);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm125 = std::fmod(std::fabs(fTempPerm64), 1.0f);
			fTempPerm126 = (1.0f - fTempPerm125);
			fTempPerm127 = (fTempPerm65 + float((fTempPerm64 > 0.0f)));
			fTempPerm128 = (fTempPerm54 + (0.00390625f * (fTempPerm59 * std::pow(2.0f, (0.0f - fTempPerm127)))));
			iTempPerm129 = int(fTempPerm127);
			fTempPerm130 = ((((fTempPerm74 + fTempPerm50) + fTempPerm45) + fTempPerm40) + std::fmod((256.0f * ((fTempPerm128 - (fTempPerm68 + std::floor((fTempPerm128 - fTempPerm68)))) * (((float((iTempPerm129 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm129)))))) + float((iTempPerm129 == 0))) + float(((iTempPerm129 > 0) * int(std::pow(2.0f, float(iTempPerm129)))))))), 1.0f));
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))) {
			fTempPerm131 = (fRec44[1] + (fTempPerm35 * (fTempPerm130 - fRec45[1])));
			fTempPerm132 = (fTempPerm131 / fTempPerm83);
			fRec44[0] = ((2.0f * fTempPerm132) - fRec44[1]);
			fTempPerm133 = (fRec45[1] + ((fTempPerm35 * fTempPerm131) / fTempPerm83));
			fRec45[0] = ((2.0f * fTempPerm133) - fRec45[1]);
			fRec46 = fTempPerm133;
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))) {
			fTempPerm134 = (fTempPerm35 * (fTempPerm130 - fRec49[1]));
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | ((iControl[68] & iTempPerm30) | ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | ((iControl[59] & iTempPerm30) | ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | ((iControl[50] & iTempPerm30) | ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))))))))))))))))))))))))))))) {
			fTempPerm135 = (fTempPerm89 * fTempPerm91);
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))) {
			fTempPerm136 = ((fTempPerm35 * ((((fRec49[1] + ((fTempPerm134 + (0.215215757f * (fTempPerm135 * fRec47[1]))) / fTempPerm90)) + (fTempPerm92 * fRec48[1])) / fTempPerm93) - fRec47[1])) / fTempPerm90);
			fRec47[0] = (fRec47[1] + (2.0f * fTempPerm136));
			fTempPerm137 = (fRec47[1] + fTempPerm136);
			fRec48[0] = (fRec48[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm137)) - fRec48[1])) / fTempPerm90)));
			fRec49[0] = (fRec49[1] + (2.0f * (fTempPerm134 / fTempPerm90)));
			fRec50 = fTempPerm137;
		}
		if ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))) {
			fTempPerm138 = (fTempPerm130 - (fRec52[1] + (fTempPerm82 * fRec53[1])));
			fTempPerm139 = ((fTempPerm35 * fTempPerm138) / fTempPerm83);
			fTempPerm140 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec53[1] + fTempPerm139)));
			fTempPerm141 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm140)));
			fTempPerm142 = ((fTempPerm35 * fTempPerm140) * fTempPerm141);
			fRec51 = (fRec52[1] + fTempPerm142);
			fRec52[0] = (fRec52[1] + (2.0f * fTempPerm142));
			fTempPerm143 = (fTempPerm140 * fTempPerm141);
			fRec53[0] = (fTempPerm139 + fTempPerm143);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm144 = (((fTempPerm19 * (((fTempPerm21 * fRec46) + (fTempPerm87 * fRec50)) + (fTempPerm97 * fRec51))) / fTempPerm104) + (fTempPerm105 * fTempPerm130));
			fVec7[0] = fTempPerm144;
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fTempPerm145 = (fTempPerm144 - fVec7[1]);
			fRec55[0] = ((std::fabs(fTempPerm145) < 0.5f) ? (fConst0 * fTempPerm145) : fRec55[1]);
		}
		if (iControl[3]) {
			fTempPerm146 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec55[0])))))));
			fTempPerm147 = (1.0f - fTempPerm146);
		}
		if (iControl[3] | iControl[69]) {
			fTempPerm148 = std::floor(fTempPerm144);
			fTempPerm149 = (fTempPerm144 - fTempPerm148);
			fVec8[0] = fTempPerm149;
			iTempPerm150 = (fTempPerm149 < 0.5f);
			iVec9[0] = iTempPerm150;
		}
		if (iControl[3]) {
			iTempPerm151 = ((iVec9[1] <= 0) & (iTempPerm150 > 0));
			fRec60[0] = ((fRec60[1] * float((1 - iTempPerm151))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm151))));
			fTempPerm152 = (fTempPerm146 + 1.0f);
			fRec59[0] = (0.0f - (((fTempPerm147 * fRec59[1]) - (fRec60[0] + fRec60[1])) / fTempPerm152));
			fRec58[0] = (0.0f - (((fTempPerm147 * fRec58[1]) - (fRec59[0] + fRec59[1])) / fTempPerm152));
			fRec57[0] = (0.0f - (((fTempPerm147 * fRec57[1]) - (fRec58[0] + fRec58[1])) / fTempPerm152));
			fRec56[0] = (0.0f - (((fTempPerm147 * fRec56[1]) - (fRec57[0] + fRec57[1])) / fTempPerm152));
			fRec54[0] = (0.0f - (((fRec54[1] * fTempPerm147) - (fRec56[0] + fRec56[1])) / fTempPerm152));
			fTempPerm153 = (std::sin((6.28318548f * fTempPerm144)) * ((fTempPerm114 * (fRec54[0] + -1.0f)) + 1.0f));
			fTempPerm154 = (((fTempPerm123 + (fTempPerm124 * (fRec37[0] - fTempPerm123))) * fTempPerm126) + (fTempPerm125 * (fTempPerm153 + (fTempPerm124 * (fRec54[0] - fTempPerm153)))));
		}
		if (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71])))) {
			fTempPerm155 = (fTempPerm112 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec38[0] - fConst7))))));
		}
		if (iControl[75] | (iControl[73] | (iControl[72] | iControl[71]))) {
			fTempPerm156 = (1.0f - fTempPerm155);
		}
		if (iControl[75]) {
			fTempPerm157 = ((0.75f * fTempPerm156) + (fTempPerm106 + (0.5f * fTempPerm155)));
			fTempPerm158 = std::floor(fTempPerm157);
		}
		if (iControl[75] | iControl[71]) {
			fTempPerm159 = (0.5f * fTempPerm156);
		}
		if (iControl[75]) {
			fTempPerm160 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm159));
			fTempPerm161 = (0.5f - fTempPerm160);
		}
		if (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71])))) {
			fTempPerm162 = (fTempPerm112 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec55[0] - fConst7))))));
		}
		if (iControl[75] | (iControl[73] | (iControl[72] | iControl[71]))) {
			fTempPerm163 = (1.0f - fTempPerm162);
		}
		if (iControl[75]) {
			fTempPerm164 = ((0.75f * fTempPerm163) + (fTempPerm144 + (0.5f * fTempPerm162)));
			fTempPerm165 = std::floor(fTempPerm164);
		}
		if (iControl[75] | iControl[71]) {
			fTempPerm166 = (0.5f * fTempPerm163);
		}
		if (iControl[75]) {
			fTempPerm167 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm166));
			fTempPerm168 = (0.5f - fTempPerm167);
			fTempPerm169 = ((fTempPerm126 * std::cos((6.28318548f * ((fTempPerm157 + std::min<float>((((fTempPerm157 - fTempPerm158) * fTempPerm161) / fTempPerm160), ((fTempPerm161 * (fTempPerm158 + (1.0f - fTempPerm157))) / (1.0f - fTempPerm160)))) - fTempPerm158)))) + (fTempPerm125 * std::cos((6.28318548f * ((fTempPerm164 + std::min<float>((((fTempPerm164 - fTempPerm165) * fTempPerm168) / fTempPerm167), ((fTempPerm168 * (fTempPerm165 + (1.0f - fTempPerm164))) / (1.0f - fTempPerm167)))) - fTempPerm165)))));
		}
		if (iControl[74]) {
			fTempPerm170 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm155));
			fTempPerm171 = (1.0f - fTempPerm170);
			fTempPerm172 = (0.25f * fTempPerm171);
			fTempPerm173 = (fTempPerm106 - (fTempPerm172 + std::floor((fTempPerm106 - fTempPerm172))));
			fTempPerm174 = (2.0f * fTempPerm173);
			fTempPerm175 = std::floor((fTempPerm174 + 1.0f));
			fTempPerm176 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm162));
			fTempPerm177 = (1.0f - fTempPerm176);
			fTempPerm178 = (0.25f * fTempPerm177);
			fTempPerm179 = (fTempPerm144 - (fTempPerm178 + std::floor((fTempPerm144 - fTempPerm178))));
			fTempPerm180 = (2.0f * fTempPerm179);
			fTempPerm181 = std::floor((fTempPerm180 + 1.0f));
			fTempPerm182 = ((fTempPerm126 * std::cos((3.14159274f * ((float((fTempPerm173 >= 0.5f)) + fTempPerm174) + (1.0f - (fTempPerm175 + std::min<float>((fTempPerm174 + (1.0f - fTempPerm175)), ((fTempPerm170 * (fTempPerm175 - fTempPerm174)) / fTempPerm171)))))))) + (fTempPerm125 * std::cos((3.14159274f * ((float((fTempPerm179 >= 0.5f)) + fTempPerm180) + (1.0f - (fTempPerm181 + std::min<float>((fTempPerm180 + (1.0f - fTempPerm181)), ((fTempPerm176 * (fTempPerm181 - fTempPerm180)) / fTempPerm177)))))))));
		}
		if (iControl[73]) {
			fTempPerm183 = (0.25f * fTempPerm156);
			fTempPerm184 = (fTempPerm183 + std::floor((fTempPerm106 - fTempPerm183)));
		}
		if (iControl[73] | (iControl[72] | (iControl[70] | iControl[68]))) {
			fTempPerm185 = (1.0f - fTempPerm106);
		}
		if (iControl[73]) {
			fTempPerm186 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm155));
			fTempPerm187 = (0.25f * fTempPerm163);
			fTempPerm188 = (fTempPerm187 + std::floor((fTempPerm144 - fTempPerm187)));
		}
		if (iControl[73] | (iControl[72] | (iControl[70] | iControl[68]))) {
			fTempPerm189 = (1.0f - fTempPerm144);
		}
		if (iControl[73]) {
			fTempPerm190 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm162));
			fTempPerm191 = ((fTempPerm126 * std::cos((6.28318548f * (fTempPerm106 - (fTempPerm184 + std::min<float>((fTempPerm106 - fTempPerm184), (((fTempPerm184 + fTempPerm185) * fTempPerm186) / (1.0f - fTempPerm186)))))))) + (fTempPerm125 * std::cos((6.28318548f * (fTempPerm144 - (fTempPerm188 + std::min<float>((fTempPerm144 - fTempPerm188), (((fTempPerm188 + fTempPerm189) * fTempPerm190) / (1.0f - fTempPerm190)))))))));
		}
		if (iControl[72]) {
			fTempPerm192 = ((0.125f * fTempPerm156) + (0.25f * fTempPerm155));
			fTempPerm193 = (fTempPerm192 + std::floor((fTempPerm106 - fTempPerm192)));
			fTempPerm194 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm155));
			fTempPerm195 = (0.49000001f * fTempPerm194);
			fTempPerm196 = ((0.125f * fTempPerm163) + (0.25f * fTempPerm162));
			fTempPerm197 = (fTempPerm196 + std::floor((fTempPerm144 - fTempPerm196)));
			fTempPerm198 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm162));
			fTempPerm199 = (0.49000001f * fTempPerm198);
			fTempPerm200 = ((fTempPerm126 * std::cos((12.566371f * ((fTempPerm106 + std::min<float>((0.49000001f * (((fTempPerm106 - fTempPerm193) * fTempPerm194) / (0.5f - fTempPerm195))), (0.49000001f * ((fTempPerm194 * (fTempPerm193 + fTempPerm185)) / (fTempPerm195 + 0.5f))))) - fTempPerm193)))) + (fTempPerm125 * std::cos((12.566371f * ((fTempPerm144 + std::min<float>((0.49000001f * (((fTempPerm144 - fTempPerm197) * fTempPerm198) / (0.5f - fTempPerm199))), (0.49000001f * ((fTempPerm198 * (fTempPerm197 + fTempPerm189)) / (fTempPerm199 + 0.5f))))) - fTempPerm197)))));
		}
		if (iControl[71]) {
			fTempPerm201 = std::min<float>(0.975000024f, fTempPerm155);
			fTempPerm202 = (0.25f * (1.0f - fTempPerm201));
			fTempPerm203 = (fTempPerm202 + (0.5f * fTempPerm201));
			fTempPerm204 = std::floor((fTempPerm106 - fTempPerm203));
			fTempPerm205 = (fTempPerm106 - (fTempPerm203 + fTempPerm204));
			fTempPerm206 = std::min<float>(0.975000024f, fTempPerm162);
			fTempPerm207 = (0.25f * (1.0f - fTempPerm206));
			fTempPerm208 = (fTempPerm207 + (0.5f * fTempPerm206));
			fTempPerm209 = std::floor((fTempPerm144 - fTempPerm208));
			fTempPerm210 = (fTempPerm144 - (fTempPerm208 + fTempPerm209));
			fTempPerm211 = ((fTempPerm126 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm205 < 0.5f) ? fTempPerm205 : (0.5f * (((fTempPerm106 - ((fTempPerm202 + fTempPerm204) + (0.5f * (fTempPerm201 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm159))) + 1.0f))))))) + (fTempPerm125 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm210 < 0.5f) ? fTempPerm210 : (0.5f * (((fTempPerm144 - ((fTempPerm207 + fTempPerm209) + (0.5f * (fTempPerm206 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm166))) + 1.0f))))))));
		}
		if (iControl[70] | iControl[68]) {
			fTempPerm212 = (fTempPerm106 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec38[0] * fControl[462]) * fTempPerm111))) / fRec38[0])));
			fTempPerm213 = (fTempPerm144 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec55[0] * fControl[462]) * fTempPerm111))) / fRec55[0])));
		}
		if (iControl[70]) {
			fTempPerm214 = ((fTempPerm126 * (((0.0f - fTempPerm185) * (1.0f - std::cos((6.28318548f * (fTempPerm212 + (1.0f - std::floor((fTempPerm212 + 1.0f)))))))) + 1.0f)) + (fTempPerm125 * (((0.0f - fTempPerm189) * (1.0f - std::cos((6.28318548f * (fTempPerm213 + (1.0f - std::floor((fTempPerm213 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[69]) {
			fTempPerm215 = (fTempPerm106 - (fTempPerm118 + fVec5[1]));
			fRec61[0] = ((std::fabs(fTempPerm215) < 0.5f) ? (fConst0 * fTempPerm215) : fRec61[1]);
			fTempPerm216 = (fTempPerm119 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec61[0] * fControl[462]) * fTempPerm111))) / fRec61[0])));
			fTempPerm217 = (fTempPerm144 - (fTempPerm148 + fVec8[1]));
			fRec62[0] = ((std::fabs(fTempPerm217) < 0.5f) ? (fConst0 * fTempPerm217) : fRec62[1]);
			fTempPerm218 = (fTempPerm149 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec62[0] * fControl[462]) * fTempPerm111))) / fRec62[0])));
			fTempPerm219 = ((fTempPerm126 * (((iTempPerm120 ? (2.0f * fTempPerm119) : (2.0f * (1.0f - fTempPerm119))) * (std::cos((6.28318548f * (fTempPerm216 + (1.0f - std::floor((fTempPerm216 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm125 * (((iTempPerm150 ? (2.0f * fTempPerm149) : (2.0f * (1.0f - fTempPerm149))) * (std::cos((6.28318548f * (fTempPerm218 + (1.0f - std::floor((fTempPerm218 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[68]) {
			fTempPerm220 = (((fTempPerm126 * std::min<float>(1.0f, (2.0f * fTempPerm185))) * std::sin((6.28318548f * (fTempPerm212 - std::floor(fTempPerm212))))) + ((fTempPerm125 * std::min<float>(1.0f, (2.0f * fTempPerm189))) * std::sin((6.28318548f * (fTempPerm213 - std::floor(fTempPerm213))))));
		}
		fRec2[0] = (((((((((fControl[11] * fTempPerm154) + (fControl[283] * fTempPerm169)) + (fControl[282] * fTempPerm182)) + (fControl[281] * fTempPerm191)) + (fControl[280] * fTempPerm200)) + (fControl[279] * fTempPerm211)) + (fControl[278] * fTempPerm214)) + (fControl[277] * fTempPerm219)) + (fControl[276] * fTempPerm220));
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm221 = ((fTemp46 * ((fControl[479] * fTemp43) + (fControl[480] * fTemp42))) + (fTemp45 * ((fControl[481] * fTemp43) + (fControl[482] * fTemp42))));
			fTempPerm222 = ((fTemp46 * ((fControl[483] * fTemp43) + (fControl[484] * fTemp42))) + (fTemp45 * ((fControl[485] * fTemp43) + (fControl[486] * fTemp42))));
			fTempPerm223 = ((fTemp46 * ((fControl[487] * fTemp43) + (fControl[488] * fTemp42))) + (fTemp45 * ((fControl[489] * fTemp43) + (fControl[490] * fTemp42))));
			fTempPerm224 = ((fTemp46 * ((fControl[491] * fTemp43) + (fControl[492] * fTemp42))) + (fTemp45 * ((fControl[493] * fTemp43) + (fControl[494] * fTemp42))));
			fTempPerm225 = (fRec5[1] * ((fTemp40 * (fTempPerm221 + fTempPerm222)) + (fTemp39 * (fTempPerm223 + fTempPerm224))));
			fTempPerm226 = ((fTemp46 * ((fControl[495] * fTemp43) + (fControl[496] * fTemp42))) + (fTemp45 * ((fControl[497] * fTemp43) + (fControl[498] * fTemp42))));
			fTempPerm227 = ((fTemp46 * ((fControl[499] * fTemp43) + (fControl[500] * fTemp42))) + (fTemp45 * ((fControl[501] * fTemp43) + (fControl[502] * fTemp42))));
			fTempPerm228 = ((fTemp46 * ((fControl[503] * fTemp43) + (fControl[504] * fTemp42))) + (fTemp45 * ((fControl[505] * fTemp43) + (fControl[506] * fTemp42))));
			fTempPerm229 = ((fTemp46 * ((fControl[507] * fTemp43) + (fControl[508] * fTemp42))) + (fTemp45 * ((fControl[509] * fTemp43) + (fControl[510] * fTemp42))));
			fTempPerm230 = (fRec4[1] * ((fTemp40 * (fTempPerm226 + fTempPerm227)) + (fTemp39 * (fTempPerm228 + fTempPerm229))));
			fTempPerm231 = ((fTemp46 * ((fControl[511] * fTemp43) + (fControl[512] * fTemp42))) + (fTemp45 * ((fControl[513] * fTemp43) + (fControl[514] * fTemp42))));
			fTempPerm232 = ((fTemp46 * ((fControl[515] * fTemp43) + (fControl[516] * fTemp42))) + (fTemp45 * ((fControl[517] * fTemp43) + (fControl[518] * fTemp42))));
			fTempPerm233 = ((fTemp46 * ((fControl[519] * fTemp43) + (fControl[520] * fTemp42))) + (fTemp45 * ((fControl[521] * fTemp43) + (fControl[522] * fTemp42))));
			fTempPerm234 = ((fTemp46 * ((fControl[523] * fTemp43) + (fControl[524] * fTemp42))) + (fTemp45 * ((fControl[525] * fTemp43) + (fControl[526] * fTemp42))));
			fTempPerm235 = (fRec3[1] * ((fTemp40 * (fTempPerm231 + fTempPerm232)) + (fTemp39 * (fTempPerm233 + fTempPerm234))));
			fTempPerm236 = ((fTemp46 * ((fControl[527] * fTemp43) + (fControl[528] * fTemp42))) + (fTemp45 * ((fControl[529] * fTemp43) + (fControl[530] * fTemp42))));
			fTempPerm237 = ((fTemp46 * ((fControl[531] * fTemp43) + (fControl[532] * fTemp42))) + (fTemp45 * ((fControl[533] * fTemp43) + (fControl[534] * fTemp42))));
			fTempPerm238 = ((fTemp46 * ((fControl[535] * fTemp43) + (fControl[536] * fTemp42))) + (fTemp45 * ((fControl[537] * fTemp43) + (fControl[538] * fTemp42))));
			fTempPerm239 = ((fTemp46 * ((fControl[539] * fTemp43) + (fControl[540] * fTemp42))) + (fTemp45 * ((fControl[541] * fTemp43) + (fControl[542] * fTemp42))));
			fTempPerm240 = ((fTemp40 * (fTempPerm236 + fTempPerm237)) + (fTemp39 * (fTempPerm238 + fTempPerm239)));
			fTempPerm241 = ((fTemp46 * ((fControl[543] * fTemp43) + (fControl[544] * fTemp42))) + (fTemp45 * ((fControl[545] * fTemp43) + (fControl[546] * fTemp42))));
			fTempPerm242 = ((fTemp46 * ((fControl[547] * fTemp43) + (fControl[548] * fTemp42))) + (fTemp45 * ((fControl[549] * fTemp43) + (fControl[550] * fTemp42))));
			fTempPerm243 = ((fTemp46 * ((fControl[551] * fTemp43) + (fControl[552] * fTemp42))) + (fTemp45 * ((fControl[553] * fTemp43) + (fControl[554] * fTemp42))));
			fTempPerm244 = ((fTemp46 * ((fControl[555] * fTemp43) + (fControl[556] * fTemp42))) + (fTemp45 * ((fControl[557] * fTemp43) + (fControl[558] * fTemp42))));
			fTempPerm245 = ((fTemp40 * (fTempPerm241 + fTempPerm242)) + (fTemp39 * (fTempPerm243 + fTempPerm244)));
			fTempPerm246 = std::floor(fTempPerm245);
			fTempPerm247 = (fTempPerm246 + float(((fTempPerm245 < 0.0f) & (fTempPerm245 != fTempPerm246))));
			fTempPerm248 = (fTempPerm54 + (0.00390625f * (fTempPerm240 * std::pow(2.0f, (0.0f - fTempPerm247)))));
			iTempPerm249 = int(fTempPerm247);
			fTempPerm250 = ((fTemp46 * ((fControl[559] * fTemp43) + (fControl[560] * fTemp42))) + (fTemp45 * ((fControl[561] * fTemp43) + (fControl[562] * fTemp42))));
			fTempPerm251 = ((fTemp46 * ((fControl[563] * fTemp43) + (fControl[564] * fTemp42))) + (fTemp45 * ((fControl[565] * fTemp43) + (fControl[566] * fTemp42))));
			fTempPerm252 = ((fTemp46 * ((fControl[567] * fTemp43) + (fControl[568] * fTemp42))) + (fTemp45 * ((fControl[569] * fTemp43) + (fControl[570] * fTemp42))));
			fTempPerm253 = ((fTemp46 * ((fControl[571] * fTemp43) + (fControl[572] * fTemp42))) + (fTemp45 * ((fControl[573] * fTemp43) + (fControl[574] * fTemp42))));
			fTempPerm254 = (fRec2[1] * ((fTemp40 * (fTempPerm250 + fTempPerm251)) + (fTemp39 * (fTempPerm252 + fTempPerm253))));
			fTempPerm255 = (fTempPerm225 + (fTempPerm230 + (fTempPerm235 + (std::fmod((256.0f * ((fTempPerm248 - (fTempPerm68 + std::floor((fTempPerm248 - fTempPerm68)))) * (((float((iTempPerm249 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm249)))))) + float((iTempPerm249 == 0))) + float(((iTempPerm249 > 0) * int(std::pow(2.0f, float(iTempPerm249)))))))), 1.0f) + fTempPerm254))));
		}
		if ((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))) {
			fTempPerm256 = (fRec63[1] + (fTempPerm35 * (fTempPerm255 - fRec64[1])));
			fTempPerm257 = (fTempPerm256 / fTempPerm83);
			fRec63[0] = ((2.0f * fTempPerm257) - fRec63[1]);
			fTempPerm258 = (fRec64[1] + ((fTempPerm35 * fTempPerm256) / fTempPerm83));
			fRec64[0] = ((2.0f * fTempPerm258) - fRec64[1]);
			fRec65 = fTempPerm258;
		}
		if ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))) {
			fTempPerm259 = (fTempPerm35 * (fTempPerm255 - fRec68[1]));
			fTempPerm260 = ((fTempPerm35 * ((((fRec68[1] + ((fTempPerm259 + (0.215215757f * (fTempPerm135 * fRec66[1]))) / fTempPerm90)) + (fTempPerm92 * fRec67[1])) / fTempPerm93) - fRec66[1])) / fTempPerm90);
			fRec66[0] = (fRec66[1] + (2.0f * fTempPerm260));
			fTempPerm261 = (fRec66[1] + fTempPerm260);
			fRec67[0] = (fRec67[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm261)) - fRec67[1])) / fTempPerm90)));
			fRec68[0] = (fRec68[1] + (2.0f * (fTempPerm259 / fTempPerm90)));
			fRec69 = fTempPerm261;
		}
		if ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))) {
			fTempPerm262 = (fTempPerm255 - (fRec71[1] + (fTempPerm82 * fRec72[1])));
			fTempPerm263 = ((fTempPerm35 * fTempPerm262) / fTempPerm83);
			fTempPerm264 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec72[1] + fTempPerm263)));
			fTempPerm265 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm264)));
			fTempPerm266 = ((fTempPerm35 * fTempPerm264) * fTempPerm265);
			fRec70 = (fRec71[1] + fTempPerm266);
			fRec71[0] = (fRec71[1] + (2.0f * fTempPerm266));
			fTempPerm267 = (fTempPerm264 * fTempPerm265);
			fRec72[0] = (fTempPerm263 + fTempPerm267);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm268 = (((fTempPerm19 * (((fTempPerm21 * fRec65) + (fTempPerm87 * fRec69)) + (fTempPerm97 * fRec70))) / fTempPerm104) + (fTempPerm105 * fTempPerm255));
			fVec10[0] = fTempPerm268;
			fTempPerm269 = ((fTemp46 * ((fControl[576] * fTemp43) + (fControl[577] * fTemp42))) + (fTemp45 * ((fControl[578] * fTemp43) + (fControl[579] * fTemp42))));
			fTempPerm270 = ((fTemp46 * ((fControl[580] * fTemp43) + (fControl[581] * fTemp42))) + (fTemp45 * ((fControl[582] * fTemp43) + (fControl[583] * fTemp42))));
			fTempPerm271 = ((fTemp46 * ((fControl[584] * fTemp43) + (fControl[585] * fTemp42))) + (fTemp45 * ((fControl[586] * fTemp43) + (fControl[587] * fTemp42))));
			fTempPerm272 = ((fTemp46 * ((fControl[588] * fTemp43) + (fControl[589] * fTemp42))) + (fTemp45 * ((fControl[590] * fTemp43) + (fControl[591] * fTemp42))));
			fTempPerm273 = ((fTemp40 * (fTempPerm269 + fTempPerm270)) + (fTemp39 * (fTempPerm271 + fTempPerm272)));
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
			fTempPerm274 = (fControl[575] * fTempPerm273);
		}
		if (iControl[67]) {
			fTempPerm275 = (2.0f * fTempPerm274);
			fTempPerm276 = std::min<float>(1.0f, fTempPerm275);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fTempPerm277 = (fTempPerm268 - fVec10[1]);
			fRec74[0] = ((std::fabs(fTempPerm277) < 0.5f) ? (fConst0 * fTempPerm277) : fRec74[1]);
		}
		if (iControl[67]) {
			fTempPerm278 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec74[0])))))));
			fTempPerm279 = (1.0f - fTempPerm278);
		}
		if (iControl[67] | iControl[60]) {
			fTempPerm280 = std::floor(fTempPerm268);
			fTempPerm281 = (fTempPerm268 - fTempPerm280);
			fVec11[0] = fTempPerm281;
			iTempPerm282 = (fTempPerm281 < 0.5f);
			iVec12[0] = iTempPerm282;
		}
		if (iControl[67]) {
			iTempPerm283 = ((iVec12[1] <= 0) & (iTempPerm282 > 0));
			fRec79[0] = ((fRec79[1] * float((1 - iTempPerm283))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm283))));
			fTempPerm284 = (fTempPerm278 + 1.0f);
			fRec78[0] = (0.0f - (((fTempPerm279 * fRec78[1]) - (fRec79[0] + fRec79[1])) / fTempPerm284));
			fRec77[0] = (0.0f - (((fTempPerm279 * fRec77[1]) - (fRec78[0] + fRec78[1])) / fTempPerm284));
			fRec76[0] = (0.0f - (((fTempPerm279 * fRec76[1]) - (fRec77[0] + fRec77[1])) / fTempPerm284));
			fRec75[0] = (0.0f - (((fTempPerm279 * fRec75[1]) - (fRec76[0] + fRec76[1])) / fTempPerm284));
			fRec73[0] = (0.0f - (((fRec73[1] * fTempPerm279) - (fRec75[0] + fRec75[1])) / fTempPerm284));
			fTempPerm285 = (std::sin((6.28318548f * fTempPerm268)) * ((fTempPerm276 * (fRec73[0] + -1.0f)) + 1.0f));
			fTempPerm286 = (std::max<float>(1.0f, fTempPerm275) + -1.0f);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm287 = std::fmod(std::fabs(fTempPerm245), 1.0f);
			fTempPerm288 = (1.0f - fTempPerm287);
			fTempPerm289 = (fTempPerm246 + float((fTempPerm245 > 0.0f)));
			fTempPerm290 = (fTempPerm54 + (0.00390625f * (fTempPerm240 * std::pow(2.0f, (0.0f - fTempPerm289)))));
			iTempPerm291 = int(fTempPerm289);
			fTempPerm292 = ((((fTempPerm254 + fTempPerm235) + fTempPerm230) + fTempPerm225) + std::fmod((256.0f * ((fTempPerm290 - (fTempPerm68 + std::floor((fTempPerm290 - fTempPerm68)))) * (((float((iTempPerm291 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm291)))))) + float((iTempPerm291 == 0))) + float(((iTempPerm291 > 0) * int(std::pow(2.0f, float(iTempPerm291)))))))), 1.0f));
		}
		if ((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))) {
			fTempPerm293 = (fRec80[1] + (fTempPerm35 * (fTempPerm292 - fRec81[1])));
			fTempPerm294 = (fTempPerm293 / fTempPerm83);
			fRec80[0] = ((2.0f * fTempPerm294) - fRec80[1]);
			fTempPerm295 = (fRec81[1] + ((fTempPerm35 * fTempPerm293) / fTempPerm83));
			fRec81[0] = ((2.0f * fTempPerm295) - fRec81[1]);
			fRec82 = fTempPerm295;
		}
		if ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))) {
			fTempPerm296 = (fTempPerm35 * (fTempPerm292 - fRec85[1]));
			fTempPerm297 = ((fTempPerm35 * ((((fRec85[1] + ((fTempPerm296 + (0.215215757f * (fTempPerm135 * fRec83[1]))) / fTempPerm90)) + (fTempPerm92 * fRec84[1])) / fTempPerm93) - fRec83[1])) / fTempPerm90);
			fRec83[0] = (fRec83[1] + (2.0f * fTempPerm297));
			fTempPerm298 = (fRec83[1] + fTempPerm297);
			fRec84[0] = (fRec84[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm298)) - fRec84[1])) / fTempPerm90)));
			fRec85[0] = (fRec85[1] + (2.0f * (fTempPerm296 / fTempPerm90)));
			fRec86 = fTempPerm298;
		}
		if ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))) {
			fTempPerm299 = (fTempPerm292 - (fRec88[1] + (fTempPerm82 * fRec89[1])));
			fTempPerm300 = ((fTempPerm35 * fTempPerm299) / fTempPerm83);
			fTempPerm301 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec89[1] + fTempPerm300)));
			fTempPerm302 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm301)));
			fTempPerm303 = ((fTempPerm35 * fTempPerm301) * fTempPerm302);
			fRec87 = (fRec88[1] + fTempPerm303);
			fRec88[0] = (fRec88[1] + (2.0f * fTempPerm303));
			fTempPerm304 = (fTempPerm301 * fTempPerm302);
			fRec89[0] = (fTempPerm300 + fTempPerm304);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm305 = (((fTempPerm19 * (((fTempPerm21 * fRec82) + (fTempPerm87 * fRec86)) + (fTempPerm97 * fRec87))) / fTempPerm104) + (fTempPerm105 * fTempPerm292));
			fVec13[0] = fTempPerm305;
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fTempPerm306 = (fTempPerm305 - fVec13[1]);
			fRec91[0] = ((std::fabs(fTempPerm306) < 0.5f) ? (fConst0 * fTempPerm306) : fRec91[1]);
		}
		if (iControl[67]) {
			fTempPerm307 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec91[0])))))));
			fTempPerm308 = (1.0f - fTempPerm307);
		}
		if (iControl[67] | iControl[60]) {
			fTempPerm309 = std::floor(fTempPerm305);
			fTempPerm310 = (fTempPerm305 - fTempPerm309);
			fVec14[0] = fTempPerm310;
			iTempPerm311 = (fTempPerm310 < 0.5f);
			iVec15[0] = iTempPerm311;
		}
		if (iControl[67]) {
			iTempPerm312 = ((iVec15[1] <= 0) & (iTempPerm311 > 0));
			fRec96[0] = ((fRec96[1] * float((1 - iTempPerm312))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm312))));
			fTempPerm313 = (fTempPerm307 + 1.0f);
			fRec95[0] = (0.0f - (((fTempPerm308 * fRec95[1]) - (fRec96[0] + fRec96[1])) / fTempPerm313));
			fRec94[0] = (0.0f - (((fTempPerm308 * fRec94[1]) - (fRec95[0] + fRec95[1])) / fTempPerm313));
			fRec93[0] = (0.0f - (((fTempPerm308 * fRec93[1]) - (fRec94[0] + fRec94[1])) / fTempPerm313));
			fRec92[0] = (0.0f - (((fTempPerm308 * fRec92[1]) - (fRec93[0] + fRec93[1])) / fTempPerm313));
			fRec90[0] = (0.0f - (((fRec90[1] * fTempPerm308) - (fRec92[0] + fRec92[1])) / fTempPerm313));
			fTempPerm314 = (std::sin((6.28318548f * fTempPerm305)) * ((fTempPerm276 * (fRec90[0] + -1.0f)) + 1.0f));
			fTempPerm315 = (((fTempPerm285 + (fTempPerm286 * (fRec73[0] - fTempPerm285))) * fTempPerm288) + (fTempPerm287 * (fTempPerm314 + (fTempPerm286 * (fRec90[0] - fTempPerm314)))));
		}
		if (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62])))) {
			fTempPerm316 = (fTempPerm274 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec74[0] - fConst7))))));
		}
		if (iControl[66] | (iControl[64] | (iControl[63] | iControl[62]))) {
			fTempPerm317 = (1.0f - fTempPerm316);
		}
		if (iControl[66]) {
			fTempPerm318 = ((0.75f * fTempPerm317) + (fTempPerm268 + (0.5f * fTempPerm316)));
			fTempPerm319 = std::floor(fTempPerm318);
		}
		if (iControl[66] | iControl[62]) {
			fTempPerm320 = (0.5f * fTempPerm317);
		}
		if (iControl[66]) {
			fTempPerm321 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm320));
			fTempPerm322 = (0.5f - fTempPerm321);
		}
		if (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62])))) {
			fTempPerm323 = (fTempPerm274 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec91[0] - fConst7))))));
		}
		if (iControl[66] | (iControl[64] | (iControl[63] | iControl[62]))) {
			fTempPerm324 = (1.0f - fTempPerm323);
		}
		if (iControl[66]) {
			fTempPerm325 = ((0.75f * fTempPerm324) + (fTempPerm305 + (0.5f * fTempPerm323)));
			fTempPerm326 = std::floor(fTempPerm325);
		}
		if (iControl[66] | iControl[62]) {
			fTempPerm327 = (0.5f * fTempPerm324);
		}
		if (iControl[66]) {
			fTempPerm328 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm327));
			fTempPerm329 = (0.5f - fTempPerm328);
			fTempPerm330 = ((fTempPerm288 * std::cos((6.28318548f * ((fTempPerm318 + std::min<float>((((fTempPerm318 - fTempPerm319) * fTempPerm322) / fTempPerm321), ((fTempPerm322 * (fTempPerm319 + (1.0f - fTempPerm318))) / (1.0f - fTempPerm321)))) - fTempPerm319)))) + (fTempPerm287 * std::cos((6.28318548f * ((fTempPerm325 + std::min<float>((((fTempPerm325 - fTempPerm326) * fTempPerm329) / fTempPerm328), ((fTempPerm329 * (fTempPerm326 + (1.0f - fTempPerm325))) / (1.0f - fTempPerm328)))) - fTempPerm326)))));
		}
		if (iControl[65]) {
			fTempPerm331 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm316));
			fTempPerm332 = (1.0f - fTempPerm331);
			fTempPerm333 = (0.25f * fTempPerm332);
			fTempPerm334 = (fTempPerm268 - (fTempPerm333 + std::floor((fTempPerm268 - fTempPerm333))));
			fTempPerm335 = (2.0f * fTempPerm334);
			fTempPerm336 = std::floor((fTempPerm335 + 1.0f));
			fTempPerm337 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm323));
			fTempPerm338 = (1.0f - fTempPerm337);
			fTempPerm339 = (0.25f * fTempPerm338);
			fTempPerm340 = (fTempPerm305 - (fTempPerm339 + std::floor((fTempPerm305 - fTempPerm339))));
			fTempPerm341 = (2.0f * fTempPerm340);
			fTempPerm342 = std::floor((fTempPerm341 + 1.0f));
			fTempPerm343 = ((fTempPerm288 * std::cos((3.14159274f * ((float((fTempPerm334 >= 0.5f)) + fTempPerm335) + (1.0f - (fTempPerm336 + std::min<float>((fTempPerm335 + (1.0f - fTempPerm336)), ((fTempPerm331 * (fTempPerm336 - fTempPerm335)) / fTempPerm332)))))))) + (fTempPerm287 * std::cos((3.14159274f * ((float((fTempPerm340 >= 0.5f)) + fTempPerm341) + (1.0f - (fTempPerm342 + std::min<float>((fTempPerm341 + (1.0f - fTempPerm342)), ((fTempPerm337 * (fTempPerm342 - fTempPerm341)) / fTempPerm338)))))))));
		}
		if (iControl[64]) {
			fTempPerm344 = (0.25f * fTempPerm317);
			fTempPerm345 = (fTempPerm344 + std::floor((fTempPerm268 - fTempPerm344)));
		}
		if (iControl[64] | (iControl[63] | (iControl[61] | iControl[59]))) {
			fTempPerm346 = (1.0f - fTempPerm268);
		}
		if (iControl[64]) {
			fTempPerm347 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm316));
			fTempPerm348 = (0.25f * fTempPerm324);
			fTempPerm349 = (fTempPerm348 + std::floor((fTempPerm305 - fTempPerm348)));
		}
		if (iControl[64] | (iControl[63] | (iControl[61] | iControl[59]))) {
			fTempPerm350 = (1.0f - fTempPerm305);
		}
		if (iControl[64]) {
			fTempPerm351 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm323));
			fTempPerm352 = ((fTempPerm288 * std::cos((6.28318548f * (fTempPerm268 - (fTempPerm345 + std::min<float>((fTempPerm268 - fTempPerm345), (((fTempPerm345 + fTempPerm346) * fTempPerm347) / (1.0f - fTempPerm347)))))))) + (fTempPerm287 * std::cos((6.28318548f * (fTempPerm305 - (fTempPerm349 + std::min<float>((fTempPerm305 - fTempPerm349), (((fTempPerm349 + fTempPerm350) * fTempPerm351) / (1.0f - fTempPerm351)))))))));
		}
		if (iControl[63]) {
			fTempPerm353 = ((0.125f * fTempPerm317) + (0.25f * fTempPerm316));
			fTempPerm354 = (fTempPerm353 + std::floor((fTempPerm268 - fTempPerm353)));
			fTempPerm355 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm316));
			fTempPerm356 = (0.49000001f * fTempPerm355);
			fTempPerm357 = ((0.125f * fTempPerm324) + (0.25f * fTempPerm323));
			fTempPerm358 = (fTempPerm357 + std::floor((fTempPerm305 - fTempPerm357)));
			fTempPerm359 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm323));
			fTempPerm360 = (0.49000001f * fTempPerm359);
			fTempPerm361 = ((fTempPerm288 * std::cos((12.566371f * ((fTempPerm268 + std::min<float>((0.49000001f * (((fTempPerm268 - fTempPerm354) * fTempPerm355) / (0.5f - fTempPerm356))), (0.49000001f * ((fTempPerm355 * (fTempPerm354 + fTempPerm346)) / (fTempPerm356 + 0.5f))))) - fTempPerm354)))) + (fTempPerm287 * std::cos((12.566371f * ((fTempPerm305 + std::min<float>((0.49000001f * (((fTempPerm305 - fTempPerm358) * fTempPerm359) / (0.5f - fTempPerm360))), (0.49000001f * ((fTempPerm359 * (fTempPerm358 + fTempPerm350)) / (fTempPerm360 + 0.5f))))) - fTempPerm358)))));
		}
		if (iControl[62]) {
			fTempPerm362 = std::min<float>(0.975000024f, fTempPerm316);
			fTempPerm363 = (0.25f * (1.0f - fTempPerm362));
			fTempPerm364 = (fTempPerm363 + (0.5f * fTempPerm362));
			fTempPerm365 = std::floor((fTempPerm268 - fTempPerm364));
			fTempPerm366 = (fTempPerm268 - (fTempPerm364 + fTempPerm365));
			fTempPerm367 = std::min<float>(0.975000024f, fTempPerm323);
			fTempPerm368 = (0.25f * (1.0f - fTempPerm367));
			fTempPerm369 = (fTempPerm368 + (0.5f * fTempPerm367));
			fTempPerm370 = std::floor((fTempPerm305 - fTempPerm369));
			fTempPerm371 = (fTempPerm305 - (fTempPerm369 + fTempPerm370));
			fTempPerm372 = ((fTempPerm288 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm366 < 0.5f) ? fTempPerm366 : (0.5f * (((fTempPerm268 - ((fTempPerm363 + fTempPerm365) + (0.5f * (fTempPerm362 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm320))) + 1.0f))))))) + (fTempPerm287 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm371 < 0.5f) ? fTempPerm371 : (0.5f * (((fTempPerm305 - ((fTempPerm368 + fTempPerm370) + (0.5f * (fTempPerm367 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm327))) + 1.0f))))))));
		}
		if (iControl[61] | iControl[59]) {
			fTempPerm373 = (fTempPerm268 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec74[0] * fControl[575]) * fTempPerm273))) / fRec74[0])));
			fTempPerm374 = (fTempPerm305 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec91[0] * fControl[575]) * fTempPerm273))) / fRec91[0])));
		}
		if (iControl[61]) {
			fTempPerm375 = ((fTempPerm288 * (((0.0f - fTempPerm346) * (1.0f - std::cos((6.28318548f * (fTempPerm373 + (1.0f - std::floor((fTempPerm373 + 1.0f)))))))) + 1.0f)) + (fTempPerm287 * (((0.0f - fTempPerm350) * (1.0f - std::cos((6.28318548f * (fTempPerm374 + (1.0f - std::floor((fTempPerm374 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[60]) {
			fTempPerm376 = (fTempPerm268 - (fTempPerm280 + fVec11[1]));
			fRec97[0] = ((std::fabs(fTempPerm376) < 0.5f) ? (fConst0 * fTempPerm376) : fRec97[1]);
			fTempPerm377 = (fTempPerm281 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec97[0] * fControl[575]) * fTempPerm273))) / fRec97[0])));
			fTempPerm378 = (fTempPerm305 - (fTempPerm309 + fVec14[1]));
			fRec98[0] = ((std::fabs(fTempPerm378) < 0.5f) ? (fConst0 * fTempPerm378) : fRec98[1]);
			fTempPerm379 = (fTempPerm310 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec98[0] * fControl[575]) * fTempPerm273))) / fRec98[0])));
			fTempPerm380 = ((fTempPerm288 * (((iTempPerm282 ? (2.0f * fTempPerm281) : (2.0f * (1.0f - fTempPerm281))) * (std::cos((6.28318548f * (fTempPerm377 + (1.0f - std::floor((fTempPerm377 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm287 * (((iTempPerm311 ? (2.0f * fTempPerm310) : (2.0f * (1.0f - fTempPerm310))) * (std::cos((6.28318548f * (fTempPerm379 + (1.0f - std::floor((fTempPerm379 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[59]) {
			fTempPerm381 = (((fTempPerm288 * std::min<float>(1.0f, (2.0f * fTempPerm346))) * std::sin((6.28318548f * (fTempPerm373 - std::floor(fTempPerm373))))) + ((fTempPerm287 * std::min<float>(1.0f, (2.0f * fTempPerm350))) * std::sin((6.28318548f * (fTempPerm374 - std::floor(fTempPerm374))))));
		}
		fRec3[0] = (((((((((fControl[275] * fTempPerm315) + (fControl[274] * fTempPerm330)) + (fControl[273] * fTempPerm343)) + (fControl[272] * fTempPerm352)) + (fControl[271] * fTempPerm361)) + (fControl[270] * fTempPerm372)) + (fControl[269] * fTempPerm375)) + (fControl[268] * fTempPerm380)) + (fControl[267] * fTempPerm381));
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm382 = ((fTemp46 * ((fControl[592] * fTemp43) + (fControl[593] * fTemp42))) + (fTemp45 * ((fControl[594] * fTemp43) + (fControl[595] * fTemp42))));
			fTempPerm383 = ((fTemp46 * ((fControl[596] * fTemp43) + (fControl[597] * fTemp42))) + (fTemp45 * ((fControl[598] * fTemp43) + (fControl[599] * fTemp42))));
			fTempPerm384 = ((fTemp46 * ((fControl[600] * fTemp43) + (fControl[601] * fTemp42))) + (fTemp45 * ((fControl[602] * fTemp43) + (fControl[603] * fTemp42))));
			fTempPerm385 = ((fTemp46 * ((fControl[604] * fTemp43) + (fControl[605] * fTemp42))) + (fTemp45 * ((fControl[606] * fTemp43) + (fControl[607] * fTemp42))));
			fTempPerm386 = (fRec5[1] * ((fTemp40 * (fTempPerm382 + fTempPerm383)) + (fTemp39 * (fTempPerm384 + fTempPerm385))));
			fTempPerm387 = ((fTemp46 * ((fControl[608] * fTemp43) + (fControl[609] * fTemp42))) + (fTemp45 * ((fControl[610] * fTemp43) + (fControl[611] * fTemp42))));
			fTempPerm388 = ((fTemp46 * ((fControl[612] * fTemp43) + (fControl[613] * fTemp42))) + (fTemp45 * ((fControl[614] * fTemp43) + (fControl[615] * fTemp42))));
			fTempPerm389 = ((fTemp46 * ((fControl[616] * fTemp43) + (fControl[617] * fTemp42))) + (fTemp45 * ((fControl[618] * fTemp43) + (fControl[619] * fTemp42))));
			fTempPerm390 = ((fTemp46 * ((fControl[620] * fTemp43) + (fControl[621] * fTemp42))) + (fTemp45 * ((fControl[622] * fTemp43) + (fControl[623] * fTemp42))));
			fTempPerm391 = (fRec4[1] * ((fTemp40 * (fTempPerm387 + fTempPerm388)) + (fTemp39 * (fTempPerm389 + fTempPerm390))));
			fTempPerm392 = ((fTemp46 * ((fControl[624] * fTemp43) + (fControl[625] * fTemp42))) + (fTemp45 * ((fControl[626] * fTemp43) + (fControl[627] * fTemp42))));
			fTempPerm393 = ((fTemp46 * ((fControl[628] * fTemp43) + (fControl[629] * fTemp42))) + (fTemp45 * ((fControl[630] * fTemp43) + (fControl[631] * fTemp42))));
			fTempPerm394 = ((fTemp46 * ((fControl[632] * fTemp43) + (fControl[633] * fTemp42))) + (fTemp45 * ((fControl[634] * fTemp43) + (fControl[635] * fTemp42))));
			fTempPerm395 = ((fTemp46 * ((fControl[636] * fTemp43) + (fControl[637] * fTemp42))) + (fTemp45 * ((fControl[638] * fTemp43) + (fControl[639] * fTemp42))));
			fTempPerm396 = (fRec3[1] * ((fTemp40 * (fTempPerm392 + fTempPerm393)) + (fTemp39 * (fTempPerm394 + fTempPerm395))));
			fTempPerm397 = ((fTemp46 * ((fControl[640] * fTemp43) + (fControl[641] * fTemp42))) + (fTemp45 * ((fControl[642] * fTemp43) + (fControl[643] * fTemp42))));
			fTempPerm398 = ((fTemp46 * ((fControl[644] * fTemp43) + (fControl[645] * fTemp42))) + (fTemp45 * ((fControl[646] * fTemp43) + (fControl[647] * fTemp42))));
			fTempPerm399 = ((fTemp46 * ((fControl[648] * fTemp43) + (fControl[649] * fTemp42))) + (fTemp45 * ((fControl[650] * fTemp43) + (fControl[651] * fTemp42))));
			fTempPerm400 = ((fTemp46 * ((fControl[652] * fTemp43) + (fControl[653] * fTemp42))) + (fTemp45 * ((fControl[654] * fTemp43) + (fControl[655] * fTemp42))));
			fTempPerm401 = ((fTemp40 * (fTempPerm397 + fTempPerm398)) + (fTemp39 * (fTempPerm399 + fTempPerm400)));
			fTempPerm402 = ((fTemp46 * ((fControl[656] * fTemp43) + (fControl[657] * fTemp42))) + (fTemp45 * ((fControl[658] * fTemp43) + (fControl[659] * fTemp42))));
			fTempPerm403 = ((fTemp46 * ((fControl[660] * fTemp43) + (fControl[661] * fTemp42))) + (fTemp45 * ((fControl[662] * fTemp43) + (fControl[663] * fTemp42))));
			fTempPerm404 = ((fTemp46 * ((fControl[664] * fTemp43) + (fControl[665] * fTemp42))) + (fTemp45 * ((fControl[666] * fTemp43) + (fControl[667] * fTemp42))));
			fTempPerm405 = ((fTemp46 * ((fControl[668] * fTemp43) + (fControl[669] * fTemp42))) + (fTemp45 * ((fControl[670] * fTemp43) + (fControl[671] * fTemp42))));
			fTempPerm406 = ((fTemp40 * (fTempPerm402 + fTempPerm403)) + (fTemp39 * (fTempPerm404 + fTempPerm405)));
			fTempPerm407 = std::floor(fTempPerm406);
			fTempPerm408 = (fTempPerm407 + float(((fTempPerm406 < 0.0f) & (fTempPerm406 != fTempPerm407))));
			fTempPerm409 = (fTempPerm54 + (0.00390625f * (fTempPerm401 * std::pow(2.0f, (0.0f - fTempPerm408)))));
			iTempPerm410 = int(fTempPerm408);
			fTempPerm411 = ((fTemp46 * ((fControl[672] * fTemp43) + (fControl[673] * fTemp42))) + (fTemp45 * ((fControl[674] * fTemp43) + (fControl[675] * fTemp42))));
			fTempPerm412 = ((fTemp46 * ((fControl[676] * fTemp43) + (fControl[677] * fTemp42))) + (fTemp45 * ((fControl[678] * fTemp43) + (fControl[679] * fTemp42))));
			fTempPerm413 = ((fTemp46 * ((fControl[680] * fTemp43) + (fControl[681] * fTemp42))) + (fTemp45 * ((fControl[682] * fTemp43) + (fControl[683] * fTemp42))));
			fTempPerm414 = ((fTemp46 * ((fControl[684] * fTemp43) + (fControl[685] * fTemp42))) + (fTemp45 * ((fControl[686] * fTemp43) + (fControl[687] * fTemp42))));
			fTempPerm415 = (fRec2[1] * ((fTemp40 * (fTempPerm411 + fTempPerm412)) + (fTemp39 * (fTempPerm413 + fTempPerm414))));
			fTempPerm416 = (fTempPerm386 + (fTempPerm391 + (fTempPerm396 + (std::fmod((256.0f * ((fTempPerm409 - (fTempPerm68 + std::floor((fTempPerm409 - fTempPerm68)))) * (((float((iTempPerm410 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm410)))))) + float((iTempPerm410 == 0))) + float(((iTempPerm410 > 0) * int(std::pow(2.0f, float(iTempPerm410)))))))), 1.0f) + fTempPerm415))));
		}
		if ((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))) {
			fTempPerm417 = (fRec99[1] + (fTempPerm35 * (fTempPerm416 - fRec100[1])));
			fTempPerm418 = (fTempPerm417 / fTempPerm83);
			fRec99[0] = ((2.0f * fTempPerm418) - fRec99[1]);
			fTempPerm419 = (fRec100[1] + ((fTempPerm35 * fTempPerm417) / fTempPerm83));
			fRec100[0] = ((2.0f * fTempPerm419) - fRec100[1]);
			fRec101 = fTempPerm419;
		}
		if ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))) {
			fTempPerm420 = (fTempPerm35 * (fTempPerm416 - fRec104[1]));
			fTempPerm421 = ((fTempPerm35 * ((((fRec104[1] + ((fTempPerm420 + (0.215215757f * (fTempPerm135 * fRec102[1]))) / fTempPerm90)) + (fTempPerm92 * fRec103[1])) / fTempPerm93) - fRec102[1])) / fTempPerm90);
			fRec102[0] = (fRec102[1] + (2.0f * fTempPerm421));
			fTempPerm422 = (fRec102[1] + fTempPerm421);
			fRec103[0] = (fRec103[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm422)) - fRec103[1])) / fTempPerm90)));
			fRec104[0] = (fRec104[1] + (2.0f * (fTempPerm420 / fTempPerm90)));
			fRec105 = fTempPerm422;
		}
		if ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))) {
			fTempPerm423 = (fTempPerm416 - (fRec107[1] + (fTempPerm82 * fRec108[1])));
			fTempPerm424 = ((fTempPerm35 * fTempPerm423) / fTempPerm83);
			fTempPerm425 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec108[1] + fTempPerm424)));
			fTempPerm426 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm425)));
			fTempPerm427 = ((fTempPerm35 * fTempPerm425) * fTempPerm426);
			fRec106 = (fRec107[1] + fTempPerm427);
			fRec107[0] = (fRec107[1] + (2.0f * fTempPerm427));
			fTempPerm428 = (fTempPerm425 * fTempPerm426);
			fRec108[0] = (fTempPerm424 + fTempPerm428);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm429 = (((fTempPerm19 * (((fTempPerm21 * fRec101) + (fTempPerm87 * fRec105)) + (fTempPerm97 * fRec106))) / fTempPerm104) + (fTempPerm105 * fTempPerm416));
			fVec16[0] = fTempPerm429;
			fTempPerm430 = ((fTemp46 * ((fControl[689] * fTemp43) + (fControl[690] * fTemp42))) + (fTemp45 * ((fControl[691] * fTemp43) + (fControl[692] * fTemp42))));
			fTempPerm431 = ((fTemp46 * ((fControl[693] * fTemp43) + (fControl[694] * fTemp42))) + (fTemp45 * ((fControl[695] * fTemp43) + (fControl[696] * fTemp42))));
			fTempPerm432 = ((fTemp46 * ((fControl[697] * fTemp43) + (fControl[698] * fTemp42))) + (fTemp45 * ((fControl[699] * fTemp43) + (fControl[700] * fTemp42))));
			fTempPerm433 = ((fTemp46 * ((fControl[701] * fTemp43) + (fControl[702] * fTemp42))) + (fTemp45 * ((fControl[703] * fTemp43) + (fControl[704] * fTemp42))));
			fTempPerm434 = ((fTemp40 * (fTempPerm430 + fTempPerm431)) + (fTemp39 * (fTempPerm432 + fTempPerm433)));
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
			fTempPerm435 = (fControl[688] * fTempPerm434);
		}
		if (iControl[58]) {
			fTempPerm436 = (2.0f * fTempPerm435);
			fTempPerm437 = std::min<float>(1.0f, fTempPerm436);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fTempPerm438 = (fTempPerm429 - fVec16[1]);
			fRec110[0] = ((std::fabs(fTempPerm438) < 0.5f) ? (fConst0 * fTempPerm438) : fRec110[1]);
		}
		if (iControl[58]) {
			fTempPerm439 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec110[0])))))));
			fTempPerm440 = (1.0f - fTempPerm439);
		}
		if (iControl[58] | iControl[51]) {
			fTempPerm441 = std::floor(fTempPerm429);
			fTempPerm442 = (fTempPerm429 - fTempPerm441);
			fVec17[0] = fTempPerm442;
			iTempPerm443 = (fTempPerm442 < 0.5f);
			iVec18[0] = iTempPerm443;
		}
		if (iControl[58]) {
			iTempPerm444 = ((iVec18[1] <= 0) & (iTempPerm443 > 0));
			fRec115[0] = ((fRec115[1] * float((1 - iTempPerm444))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm444))));
			fTempPerm445 = (fTempPerm439 + 1.0f);
			fRec114[0] = (0.0f - (((fTempPerm440 * fRec114[1]) - (fRec115[0] + fRec115[1])) / fTempPerm445));
			fRec113[0] = (0.0f - (((fTempPerm440 * fRec113[1]) - (fRec114[0] + fRec114[1])) / fTempPerm445));
			fRec112[0] = (0.0f - (((fTempPerm440 * fRec112[1]) - (fRec113[0] + fRec113[1])) / fTempPerm445));
			fRec111[0] = (0.0f - (((fTempPerm440 * fRec111[1]) - (fRec112[0] + fRec112[1])) / fTempPerm445));
			fRec109[0] = (0.0f - (((fRec109[1] * fTempPerm440) - (fRec111[0] + fRec111[1])) / fTempPerm445));
			fTempPerm446 = (std::sin((6.28318548f * fTempPerm429)) * ((fTempPerm437 * (fRec109[0] + -1.0f)) + 1.0f));
			fTempPerm447 = (std::max<float>(1.0f, fTempPerm436) + -1.0f);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm448 = std::fmod(std::fabs(fTempPerm406), 1.0f);
			fTempPerm449 = (1.0f - fTempPerm448);
			fTempPerm450 = (fTempPerm407 + float((fTempPerm406 > 0.0f)));
			fTempPerm451 = (fTempPerm54 + (0.00390625f * (fTempPerm401 * std::pow(2.0f, (0.0f - fTempPerm450)))));
			iTempPerm452 = int(fTempPerm450);
			fTempPerm453 = ((((fTempPerm415 + fTempPerm396) + fTempPerm391) + fTempPerm386) + std::fmod((256.0f * ((fTempPerm451 - (fTempPerm68 + std::floor((fTempPerm451 - fTempPerm68)))) * (((float((iTempPerm452 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm452)))))) + float((iTempPerm452 == 0))) + float(((iTempPerm452 > 0) * int(std::pow(2.0f, float(iTempPerm452)))))))), 1.0f));
		}
		if ((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))) {
			fTempPerm454 = (fRec116[1] + (fTempPerm35 * (fTempPerm453 - fRec117[1])));
			fTempPerm455 = (fTempPerm454 / fTempPerm83);
			fRec116[0] = ((2.0f * fTempPerm455) - fRec116[1]);
			fTempPerm456 = (fRec117[1] + ((fTempPerm35 * fTempPerm454) / fTempPerm83));
			fRec117[0] = ((2.0f * fTempPerm456) - fRec117[1]);
			fRec118 = fTempPerm456;
		}
		if ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))) {
			fTempPerm457 = (fTempPerm35 * (fTempPerm453 - fRec121[1]));
			fTempPerm458 = ((fTempPerm35 * ((((fRec121[1] + ((fTempPerm457 + (0.215215757f * (fTempPerm135 * fRec119[1]))) / fTempPerm90)) + (fTempPerm92 * fRec120[1])) / fTempPerm93) - fRec119[1])) / fTempPerm90);
			fRec119[0] = (fRec119[1] + (2.0f * fTempPerm458));
			fTempPerm459 = (fRec119[1] + fTempPerm458);
			fRec120[0] = (fRec120[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm459)) - fRec120[1])) / fTempPerm90)));
			fRec121[0] = (fRec121[1] + (2.0f * (fTempPerm457 / fTempPerm90)));
			fRec122 = fTempPerm459;
		}
		if ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))) {
			fTempPerm460 = (fTempPerm453 - (fRec124[1] + (fTempPerm82 * fRec125[1])));
			fTempPerm461 = ((fTempPerm35 * fTempPerm460) / fTempPerm83);
			fTempPerm462 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec125[1] + fTempPerm461)));
			fTempPerm463 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm462)));
			fTempPerm464 = ((fTempPerm35 * fTempPerm462) * fTempPerm463);
			fRec123 = (fRec124[1] + fTempPerm464);
			fRec124[0] = (fRec124[1] + (2.0f * fTempPerm464));
			fTempPerm465 = (fTempPerm462 * fTempPerm463);
			fRec125[0] = (fTempPerm461 + fTempPerm465);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm466 = (((fTempPerm19 * (((fTempPerm21 * fRec118) + (fTempPerm87 * fRec122)) + (fTempPerm97 * fRec123))) / fTempPerm104) + (fTempPerm105 * fTempPerm453));
			fVec19[0] = fTempPerm466;
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fTempPerm467 = (fTempPerm466 - fVec19[1]);
			fRec127[0] = ((std::fabs(fTempPerm467) < 0.5f) ? (fConst0 * fTempPerm467) : fRec127[1]);
		}
		if (iControl[58]) {
			fTempPerm468 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec127[0])))))));
			fTempPerm469 = (1.0f - fTempPerm468);
		}
		if (iControl[58] | iControl[51]) {
			fTempPerm470 = std::floor(fTempPerm466);
			fTempPerm471 = (fTempPerm466 - fTempPerm470);
			fVec20[0] = fTempPerm471;
			iTempPerm472 = (fTempPerm471 < 0.5f);
			iVec21[0] = iTempPerm472;
		}
		if (iControl[58]) {
			iTempPerm473 = ((iVec21[1] <= 0) & (iTempPerm472 > 0));
			fRec132[0] = ((fRec132[1] * float((1 - iTempPerm473))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm473))));
			fTempPerm474 = (fTempPerm468 + 1.0f);
			fRec131[0] = (0.0f - (((fTempPerm469 * fRec131[1]) - (fRec132[0] + fRec132[1])) / fTempPerm474));
			fRec130[0] = (0.0f - (((fTempPerm469 * fRec130[1]) - (fRec131[0] + fRec131[1])) / fTempPerm474));
			fRec129[0] = (0.0f - (((fTempPerm469 * fRec129[1]) - (fRec130[0] + fRec130[1])) / fTempPerm474));
			fRec128[0] = (0.0f - (((fTempPerm469 * fRec128[1]) - (fRec129[0] + fRec129[1])) / fTempPerm474));
			fRec126[0] = (0.0f - (((fRec126[1] * fTempPerm469) - (fRec128[0] + fRec128[1])) / fTempPerm474));
			fTempPerm475 = (std::sin((6.28318548f * fTempPerm466)) * ((fTempPerm437 * (fRec126[0] + -1.0f)) + 1.0f));
			fTempPerm476 = (((fTempPerm446 + (fTempPerm447 * (fRec109[0] - fTempPerm446))) * fTempPerm449) + (fTempPerm448 * (fTempPerm475 + (fTempPerm447 * (fRec126[0] - fTempPerm475)))));
		}
		if (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53])))) {
			fTempPerm477 = (fTempPerm435 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec110[0] - fConst7))))));
		}
		if (iControl[57] | (iControl[55] | (iControl[54] | iControl[53]))) {
			fTempPerm478 = (1.0f - fTempPerm477);
		}
		if (iControl[57]) {
			fTempPerm479 = ((0.75f * fTempPerm478) + (fTempPerm429 + (0.5f * fTempPerm477)));
			fTempPerm480 = std::floor(fTempPerm479);
		}
		if (iControl[57] | iControl[53]) {
			fTempPerm481 = (0.5f * fTempPerm478);
		}
		if (iControl[57]) {
			fTempPerm482 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm481));
			fTempPerm483 = (0.5f - fTempPerm482);
		}
		if (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53])))) {
			fTempPerm484 = (fTempPerm435 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec127[0] - fConst7))))));
		}
		if (iControl[57] | (iControl[55] | (iControl[54] | iControl[53]))) {
			fTempPerm485 = (1.0f - fTempPerm484);
		}
		if (iControl[57]) {
			fTempPerm486 = ((0.75f * fTempPerm485) + (fTempPerm466 + (0.5f * fTempPerm484)));
			fTempPerm487 = std::floor(fTempPerm486);
		}
		if (iControl[57] | iControl[53]) {
			fTempPerm488 = (0.5f * fTempPerm485);
		}
		if (iControl[57]) {
			fTempPerm489 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm488));
			fTempPerm490 = (0.5f - fTempPerm489);
			fTempPerm491 = ((fTempPerm449 * std::cos((6.28318548f * ((fTempPerm479 + std::min<float>((((fTempPerm479 - fTempPerm480) * fTempPerm483) / fTempPerm482), ((fTempPerm483 * (fTempPerm480 + (1.0f - fTempPerm479))) / (1.0f - fTempPerm482)))) - fTempPerm480)))) + (fTempPerm448 * std::cos((6.28318548f * ((fTempPerm486 + std::min<float>((((fTempPerm486 - fTempPerm487) * fTempPerm490) / fTempPerm489), ((fTempPerm490 * (fTempPerm487 + (1.0f - fTempPerm486))) / (1.0f - fTempPerm489)))) - fTempPerm487)))));
		}
		if (iControl[56]) {
			fTempPerm492 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm477));
			fTempPerm493 = (1.0f - fTempPerm492);
			fTempPerm494 = (0.25f * fTempPerm493);
			fTempPerm495 = (fTempPerm429 - (fTempPerm494 + std::floor((fTempPerm429 - fTempPerm494))));
			fTempPerm496 = (2.0f * fTempPerm495);
			fTempPerm497 = std::floor((fTempPerm496 + 1.0f));
			fTempPerm498 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm484));
			fTempPerm499 = (1.0f - fTempPerm498);
			fTempPerm500 = (0.25f * fTempPerm499);
			fTempPerm501 = (fTempPerm466 - (fTempPerm500 + std::floor((fTempPerm466 - fTempPerm500))));
			fTempPerm502 = (2.0f * fTempPerm501);
			fTempPerm503 = std::floor((fTempPerm502 + 1.0f));
			fTempPerm504 = ((fTempPerm449 * std::cos((3.14159274f * ((float((fTempPerm495 >= 0.5f)) + fTempPerm496) + (1.0f - (fTempPerm497 + std::min<float>((fTempPerm496 + (1.0f - fTempPerm497)), ((fTempPerm492 * (fTempPerm497 - fTempPerm496)) / fTempPerm493)))))))) + (fTempPerm448 * std::cos((3.14159274f * ((float((fTempPerm501 >= 0.5f)) + fTempPerm502) + (1.0f - (fTempPerm503 + std::min<float>((fTempPerm502 + (1.0f - fTempPerm503)), ((fTempPerm498 * (fTempPerm503 - fTempPerm502)) / fTempPerm499)))))))));
		}
		if (iControl[55]) {
			fTempPerm505 = (0.25f * fTempPerm478);
			fTempPerm506 = (fTempPerm505 + std::floor((fTempPerm429 - fTempPerm505)));
		}
		if (iControl[55] | (iControl[54] | (iControl[52] | iControl[50]))) {
			fTempPerm507 = (1.0f - fTempPerm429);
		}
		if (iControl[55]) {
			fTempPerm508 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm477));
			fTempPerm509 = (0.25f * fTempPerm485);
			fTempPerm510 = (fTempPerm509 + std::floor((fTempPerm466 - fTempPerm509)));
		}
		if (iControl[55] | (iControl[54] | (iControl[52] | iControl[50]))) {
			fTempPerm511 = (1.0f - fTempPerm466);
		}
		if (iControl[55]) {
			fTempPerm512 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm484));
			fTempPerm513 = ((fTempPerm449 * std::cos((6.28318548f * (fTempPerm429 - (fTempPerm506 + std::min<float>((fTempPerm429 - fTempPerm506), (((fTempPerm506 + fTempPerm507) * fTempPerm508) / (1.0f - fTempPerm508)))))))) + (fTempPerm448 * std::cos((6.28318548f * (fTempPerm466 - (fTempPerm510 + std::min<float>((fTempPerm466 - fTempPerm510), (((fTempPerm510 + fTempPerm511) * fTempPerm512) / (1.0f - fTempPerm512)))))))));
		}
		if (iControl[54]) {
			fTempPerm514 = ((0.125f * fTempPerm478) + (0.25f * fTempPerm477));
			fTempPerm515 = (fTempPerm514 + std::floor((fTempPerm429 - fTempPerm514)));
			fTempPerm516 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm477));
			fTempPerm517 = (0.49000001f * fTempPerm516);
			fTempPerm518 = ((0.125f * fTempPerm485) + (0.25f * fTempPerm484));
			fTempPerm519 = (fTempPerm518 + std::floor((fTempPerm466 - fTempPerm518)));
			fTempPerm520 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm484));
			fTempPerm521 = (0.49000001f * fTempPerm520);
			fTempPerm522 = ((fTempPerm449 * std::cos((12.566371f * ((fTempPerm429 + std::min<float>((0.49000001f * (((fTempPerm429 - fTempPerm515) * fTempPerm516) / (0.5f - fTempPerm517))), (0.49000001f * ((fTempPerm516 * (fTempPerm515 + fTempPerm507)) / (fTempPerm517 + 0.5f))))) - fTempPerm515)))) + (fTempPerm448 * std::cos((12.566371f * ((fTempPerm466 + std::min<float>((0.49000001f * (((fTempPerm466 - fTempPerm519) * fTempPerm520) / (0.5f - fTempPerm521))), (0.49000001f * ((fTempPerm520 * (fTempPerm519 + fTempPerm511)) / (fTempPerm521 + 0.5f))))) - fTempPerm519)))));
		}
		if (iControl[53]) {
			fTempPerm523 = std::min<float>(0.975000024f, fTempPerm477);
			fTempPerm524 = (0.25f * (1.0f - fTempPerm523));
			fTempPerm525 = (fTempPerm524 + (0.5f * fTempPerm523));
			fTempPerm526 = std::floor((fTempPerm429 - fTempPerm525));
			fTempPerm527 = (fTempPerm429 - (fTempPerm525 + fTempPerm526));
			fTempPerm528 = std::min<float>(0.975000024f, fTempPerm484);
			fTempPerm529 = (0.25f * (1.0f - fTempPerm528));
			fTempPerm530 = (fTempPerm529 + (0.5f * fTempPerm528));
			fTempPerm531 = std::floor((fTempPerm466 - fTempPerm530));
			fTempPerm532 = (fTempPerm466 - (fTempPerm530 + fTempPerm531));
			fTempPerm533 = ((fTempPerm449 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm527 < 0.5f) ? fTempPerm527 : (0.5f * (((fTempPerm429 - ((fTempPerm524 + fTempPerm526) + (0.5f * (fTempPerm523 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm481))) + 1.0f))))))) + (fTempPerm448 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm532 < 0.5f) ? fTempPerm532 : (0.5f * (((fTempPerm466 - ((fTempPerm529 + fTempPerm531) + (0.5f * (fTempPerm528 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm488))) + 1.0f))))))));
		}
		if (iControl[52] | iControl[50]) {
			fTempPerm534 = (fTempPerm429 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec110[0] * fControl[688]) * fTempPerm434))) / fRec110[0])));
			fTempPerm535 = (fTempPerm466 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec127[0] * fControl[688]) * fTempPerm434))) / fRec127[0])));
		}
		if (iControl[52]) {
			fTempPerm536 = ((fTempPerm449 * (((0.0f - fTempPerm507) * (1.0f - std::cos((6.28318548f * (fTempPerm534 + (1.0f - std::floor((fTempPerm534 + 1.0f)))))))) + 1.0f)) + (fTempPerm448 * (((0.0f - fTempPerm511) * (1.0f - std::cos((6.28318548f * (fTempPerm535 + (1.0f - std::floor((fTempPerm535 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[51]) {
			fTempPerm537 = (fTempPerm429 - (fTempPerm441 + fVec17[1]));
			fRec133[0] = ((std::fabs(fTempPerm537) < 0.5f) ? (fConst0 * fTempPerm537) : fRec133[1]);
			fTempPerm538 = (fTempPerm442 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec133[0] * fControl[688]) * fTempPerm434))) / fRec133[0])));
			fTempPerm539 = (fTempPerm466 - (fTempPerm470 + fVec20[1]));
			fRec134[0] = ((std::fabs(fTempPerm539) < 0.5f) ? (fConst0 * fTempPerm539) : fRec134[1]);
			fTempPerm540 = (fTempPerm471 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec134[0] * fControl[688]) * fTempPerm434))) / fRec134[0])));
			fTempPerm541 = ((fTempPerm449 * (((iTempPerm443 ? (2.0f * fTempPerm442) : (2.0f * (1.0f - fTempPerm442))) * (std::cos((6.28318548f * (fTempPerm538 + (1.0f - std::floor((fTempPerm538 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm448 * (((iTempPerm472 ? (2.0f * fTempPerm471) : (2.0f * (1.0f - fTempPerm471))) * (std::cos((6.28318548f * (fTempPerm540 + (1.0f - std::floor((fTempPerm540 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[50]) {
			fTempPerm542 = (((fTempPerm449 * std::min<float>(1.0f, (2.0f * fTempPerm507))) * std::sin((6.28318548f * (fTempPerm534 - std::floor(fTempPerm534))))) + ((fTempPerm448 * std::min<float>(1.0f, (2.0f * fTempPerm511))) * std::sin((6.28318548f * (fTempPerm535 - std::floor(fTempPerm535))))));
		}
		fRec4[0] = (((((((((fControl[264] * fTempPerm476) + (fControl[263] * fTempPerm491)) + (fControl[262] * fTempPerm504)) + (fControl[261] * fTempPerm513)) + (fControl[260] * fTempPerm522)) + (fControl[259] * fTempPerm533)) + (fControl[258] * fTempPerm536)) + (fControl[257] * fTempPerm541)) + (fControl[256] * fTempPerm542));
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm543 = ((fTemp46 * ((fControl[705] * fTemp43) + (fControl[706] * fTemp42))) + (fTemp45 * ((fControl[707] * fTemp43) + (fControl[708] * fTemp42))));
			fTempPerm544 = ((fTemp46 * ((fControl[709] * fTemp43) + (fControl[710] * fTemp42))) + (fTemp45 * ((fControl[711] * fTemp43) + (fControl[712] * fTemp42))));
			fTempPerm545 = ((fTemp46 * ((fControl[713] * fTemp43) + (fControl[714] * fTemp42))) + (fTemp45 * ((fControl[715] * fTemp43) + (fControl[716] * fTemp42))));
			fTempPerm546 = ((fTemp46 * ((fControl[717] * fTemp43) + (fControl[718] * fTemp42))) + (fTemp45 * ((fControl[719] * fTemp43) + (fControl[720] * fTemp42))));
			fTempPerm547 = (fRec5[1] * ((fTemp40 * (fTempPerm543 + fTempPerm544)) + (fTemp39 * (fTempPerm545 + fTempPerm546))));
			fTempPerm548 = ((fTemp46 * ((fControl[721] * fTemp43) + (fControl[722] * fTemp42))) + (fTemp45 * ((fControl[723] * fTemp43) + (fControl[724] * fTemp42))));
			fTempPerm549 = ((fTemp46 * ((fControl[725] * fTemp43) + (fControl[726] * fTemp42))) + (fTemp45 * ((fControl[727] * fTemp43) + (fControl[728] * fTemp42))));
			fTempPerm550 = ((fTemp46 * ((fControl[729] * fTemp43) + (fControl[730] * fTemp42))) + (fTemp45 * ((fControl[731] * fTemp43) + (fControl[732] * fTemp42))));
			fTempPerm551 = ((fTemp46 * ((fControl[733] * fTemp43) + (fControl[734] * fTemp42))) + (fTemp45 * ((fControl[735] * fTemp43) + (fControl[736] * fTemp42))));
			fTempPerm552 = (fRec4[1] * ((fTemp40 * (fTempPerm548 + fTempPerm549)) + (fTemp39 * (fTempPerm550 + fTempPerm551))));
			fTempPerm553 = ((fTemp46 * ((fControl[737] * fTemp43) + (fControl[738] * fTemp42))) + (fTemp45 * ((fControl[739] * fTemp43) + (fControl[740] * fTemp42))));
			fTempPerm554 = ((fTemp46 * ((fControl[741] * fTemp43) + (fControl[742] * fTemp42))) + (fTemp45 * ((fControl[743] * fTemp43) + (fControl[744] * fTemp42))));
			fTempPerm555 = ((fTemp46 * ((fControl[745] * fTemp43) + (fControl[746] * fTemp42))) + (fTemp45 * ((fControl[747] * fTemp43) + (fControl[748] * fTemp42))));
			fTempPerm556 = ((fTemp46 * ((fControl[749] * fTemp43) + (fControl[750] * fTemp42))) + (fTemp45 * ((fControl[751] * fTemp43) + (fControl[752] * fTemp42))));
			fTempPerm557 = (fRec3[1] * ((fTemp40 * (fTempPerm553 + fTempPerm554)) + (fTemp39 * (fTempPerm555 + fTempPerm556))));
			fTempPerm558 = ((fTemp46 * ((fControl[753] * fTemp43) + (fControl[754] * fTemp42))) + (fTemp45 * ((fControl[755] * fTemp43) + (fControl[756] * fTemp42))));
			fTempPerm559 = ((fTemp46 * ((fControl[757] * fTemp43) + (fControl[758] * fTemp42))) + (fTemp45 * ((fControl[759] * fTemp43) + (fControl[760] * fTemp42))));
			fTempPerm560 = ((fTemp46 * ((fControl[761] * fTemp43) + (fControl[762] * fTemp42))) + (fTemp45 * ((fControl[763] * fTemp43) + (fControl[764] * fTemp42))));
			fTempPerm561 = ((fTemp46 * ((fControl[765] * fTemp43) + (fControl[766] * fTemp42))) + (fTemp45 * ((fControl[767] * fTemp43) + (fControl[768] * fTemp42))));
			fTempPerm562 = ((fTemp40 * (fTempPerm558 + fTempPerm559)) + (fTemp39 * (fTempPerm560 + fTempPerm561)));
			fTempPerm563 = ((fTemp46 * ((fControl[769] * fTemp43) + (fControl[770] * fTemp42))) + (fTemp45 * ((fControl[771] * fTemp43) + (fControl[772] * fTemp42))));
			fTempPerm564 = ((fTemp46 * ((fControl[773] * fTemp43) + (fControl[774] * fTemp42))) + (fTemp45 * ((fControl[775] * fTemp43) + (fControl[776] * fTemp42))));
			fTempPerm565 = ((fTemp46 * ((fControl[777] * fTemp43) + (fControl[778] * fTemp42))) + (fTemp45 * ((fControl[779] * fTemp43) + (fControl[780] * fTemp42))));
			fTempPerm566 = ((fTemp46 * ((fControl[781] * fTemp43) + (fControl[782] * fTemp42))) + (fTemp45 * ((fControl[783] * fTemp43) + (fControl[784] * fTemp42))));
			fTempPerm567 = ((fTemp40 * (fTempPerm563 + fTempPerm564)) + (fTemp39 * (fTempPerm565 + fTempPerm566)));
			fTempPerm568 = std::floor(fTempPerm567);
			fTempPerm569 = (fTempPerm568 + float(((fTempPerm567 < 0.0f) & (fTempPerm567 != fTempPerm568))));
			fTempPerm570 = (fTempPerm54 + (0.00390625f * (fTempPerm562 * std::pow(2.0f, (0.0f - fTempPerm569)))));
			iTempPerm571 = int(fTempPerm569);
			fTempPerm572 = ((fTemp46 * ((fControl[785] * fTemp43) + (fControl[786] * fTemp42))) + (fTemp45 * ((fControl[787] * fTemp43) + (fControl[788] * fTemp42))));
			fTempPerm573 = ((fTemp46 * ((fControl[789] * fTemp43) + (fControl[790] * fTemp42))) + (fTemp45 * ((fControl[791] * fTemp43) + (fControl[792] * fTemp42))));
			fTempPerm574 = ((fTemp46 * ((fControl[793] * fTemp43) + (fControl[794] * fTemp42))) + (fTemp45 * ((fControl[795] * fTemp43) + (fControl[796] * fTemp42))));
			fTempPerm575 = ((fTemp46 * ((fControl[797] * fTemp43) + (fControl[798] * fTemp42))) + (fTemp45 * ((fControl[799] * fTemp43) + (fControl[800] * fTemp42))));
			fTempPerm576 = (fRec2[1] * ((fTemp40 * (fTempPerm572 + fTempPerm573)) + (fTemp39 * (fTempPerm574 + fTempPerm575))));
			fTempPerm577 = (fTempPerm547 + (fTempPerm552 + (fTempPerm557 + (std::fmod((256.0f * ((fTempPerm570 - (fTempPerm68 + std::floor((fTempPerm570 - fTempPerm68)))) * (((float((iTempPerm571 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm571)))))) + float((iTempPerm571 == 0))) + float(((iTempPerm571 > 0) * int(std::pow(2.0f, float(iTempPerm571)))))))), 1.0f) + fTempPerm576))));
		}
		if ((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))) {
			fTempPerm578 = (fRec135[1] + (fTempPerm35 * (fTempPerm577 - fRec136[1])));
			fTempPerm579 = (fTempPerm578 / fTempPerm83);
			fRec135[0] = ((2.0f * fTempPerm579) - fRec135[1]);
			fTempPerm580 = (fRec136[1] + ((fTempPerm35 * fTempPerm578) / fTempPerm83));
			fRec136[0] = ((2.0f * fTempPerm580) - fRec136[1]);
			fRec137 = fTempPerm580;
		}
		if ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))) {
			fTempPerm581 = (fTempPerm35 * (fTempPerm577 - fRec140[1]));
			fTempPerm582 = ((fTempPerm35 * ((((fRec140[1] + ((fTempPerm581 + (0.215215757f * (fTempPerm135 * fRec138[1]))) / fTempPerm90)) + (fTempPerm92 * fRec139[1])) / fTempPerm93) - fRec138[1])) / fTempPerm90);
			fRec138[0] = (fRec138[1] + (2.0f * fTempPerm582));
			fTempPerm583 = (fRec138[1] + fTempPerm582);
			fRec139[0] = (fRec139[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm583)) - fRec139[1])) / fTempPerm90)));
			fRec140[0] = (fRec140[1] + (2.0f * (fTempPerm581 / fTempPerm90)));
			fRec141 = fTempPerm583;
		}
		if ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))) {
			fTempPerm584 = (fTempPerm577 - (fRec143[1] + (fTempPerm82 * fRec144[1])));
			fTempPerm585 = ((fTempPerm35 * fTempPerm584) / fTempPerm83);
			fTempPerm586 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec144[1] + fTempPerm585)));
			fTempPerm587 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm586)));
			fTempPerm588 = ((fTempPerm35 * fTempPerm586) * fTempPerm587);
			fRec142 = (fRec143[1] + fTempPerm588);
			fRec143[0] = (fRec143[1] + (2.0f * fTempPerm588));
			fTempPerm589 = (fTempPerm586 * fTempPerm587);
			fRec144[0] = (fTempPerm585 + fTempPerm589);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm590 = (((fTempPerm19 * (((fTempPerm21 * fRec137) + (fTempPerm87 * fRec141)) + (fTempPerm97 * fRec142))) / fTempPerm104) + (fTempPerm105 * fTempPerm577));
			fVec22[0] = fTempPerm590;
			fTempPerm591 = ((fTemp46 * ((fControl[802] * fTemp43) + (fControl[803] * fTemp42))) + (fTemp45 * ((fControl[804] * fTemp43) + (fControl[805] * fTemp42))));
			fTempPerm592 = ((fTemp46 * ((fControl[806] * fTemp43) + (fControl[807] * fTemp42))) + (fTemp45 * ((fControl[808] * fTemp43) + (fControl[809] * fTemp42))));
			fTempPerm593 = ((fTemp46 * ((fControl[810] * fTemp43) + (fControl[811] * fTemp42))) + (fTemp45 * ((fControl[812] * fTemp43) + (fControl[813] * fTemp42))));
			fTempPerm594 = ((fTemp46 * ((fControl[814] * fTemp43) + (fControl[815] * fTemp42))) + (fTemp45 * ((fControl[816] * fTemp43) + (fControl[817] * fTemp42))));
			fTempPerm595 = ((fTemp40 * (fTempPerm591 + fTempPerm592)) + (fTemp39 * (fTempPerm593 + fTempPerm594)));
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
			fTempPerm596 = (fControl[801] * fTempPerm595);
		}
		if (iControl[49]) {
			fTempPerm597 = (2.0f * fTempPerm596);
			fTempPerm598 = std::min<float>(1.0f, fTempPerm597);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fTempPerm599 = (fTempPerm590 - fVec22[1]);
			fRec146[0] = ((std::fabs(fTempPerm599) < 0.5f) ? (fConst0 * fTempPerm599) : fRec146[1]);
		}
		if (iControl[49]) {
			fTempPerm600 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec146[0])))))));
			fTempPerm601 = (1.0f - fTempPerm600);
		}
		if (iControl[49] | iControl[42]) {
			fTempPerm602 = std::floor(fTempPerm590);
			fTempPerm603 = (fTempPerm590 - fTempPerm602);
			fVec23[0] = fTempPerm603;
			iTempPerm604 = (fTempPerm603 < 0.5f);
			iVec24[0] = iTempPerm604;
		}
		if (iControl[49]) {
			iTempPerm605 = ((iVec24[1] <= 0) & (iTempPerm604 > 0));
			fRec151[0] = ((fRec151[1] * float((1 - iTempPerm605))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm605))));
			fTempPerm606 = (fTempPerm600 + 1.0f);
			fRec150[0] = (0.0f - (((fTempPerm601 * fRec150[1]) - (fRec151[0] + fRec151[1])) / fTempPerm606));
			fRec149[0] = (0.0f - (((fTempPerm601 * fRec149[1]) - (fRec150[0] + fRec150[1])) / fTempPerm606));
			fRec148[0] = (0.0f - (((fTempPerm601 * fRec148[1]) - (fRec149[0] + fRec149[1])) / fTempPerm606));
			fRec147[0] = (0.0f - (((fTempPerm601 * fRec147[1]) - (fRec148[0] + fRec148[1])) / fTempPerm606));
			fRec145[0] = (0.0f - (((fRec145[1] * fTempPerm601) - (fRec147[0] + fRec147[1])) / fTempPerm606));
			fTempPerm607 = (std::sin((6.28318548f * fTempPerm590)) * ((fTempPerm598 * (fRec145[0] + -1.0f)) + 1.0f));
			fTempPerm608 = (std::max<float>(1.0f, fTempPerm597) + -1.0f);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm609 = std::fmod(std::fabs(fTempPerm567), 1.0f);
			fTempPerm610 = (1.0f - fTempPerm609);
			fTempPerm611 = (fTempPerm568 + float((fTempPerm567 > 0.0f)));
			fTempPerm612 = (fTempPerm54 + (0.00390625f * (fTempPerm562 * std::pow(2.0f, (0.0f - fTempPerm611)))));
			iTempPerm613 = int(fTempPerm611);
			fTempPerm614 = ((((fTempPerm576 + fTempPerm557) + fTempPerm552) + fTempPerm547) + std::fmod((256.0f * ((fTempPerm612 - (fTempPerm68 + std::floor((fTempPerm612 - fTempPerm68)))) * (((float((iTempPerm613 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm613)))))) + float((iTempPerm613 == 0))) + float(((iTempPerm613 > 0) * int(std::pow(2.0f, float(iTempPerm613)))))))), 1.0f));
		}
		if ((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))) {
			fTempPerm615 = (fRec152[1] + (fTempPerm35 * (fTempPerm614 - fRec153[1])));
			fTempPerm616 = (fTempPerm615 / fTempPerm83);
			fRec152[0] = ((2.0f * fTempPerm616) - fRec152[1]);
			fTempPerm617 = (fRec153[1] + ((fTempPerm35 * fTempPerm615) / fTempPerm83));
			fRec153[0] = ((2.0f * fTempPerm617) - fRec153[1]);
			fRec154 = fTempPerm617;
		}
		if ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))) {
			fTempPerm618 = (fTempPerm35 * (fTempPerm614 - fRec157[1]));
			fTempPerm619 = ((fTempPerm35 * ((((fRec157[1] + ((fTempPerm618 + (0.215215757f * (fTempPerm135 * fRec155[1]))) / fTempPerm90)) + (fTempPerm92 * fRec156[1])) / fTempPerm93) - fRec155[1])) / fTempPerm90);
			fRec155[0] = (fRec155[1] + (2.0f * fTempPerm619));
			fTempPerm620 = (fRec155[1] + fTempPerm619);
			fRec156[0] = (fRec156[1] + (2.0f * ((fTempPerm35 * ((0.215215757f * (fTempPerm89 * fTempPerm620)) - fRec156[1])) / fTempPerm90)));
			fRec157[0] = (fRec157[1] + (2.0f * (fTempPerm618 / fTempPerm90)));
			fRec158 = fTempPerm620;
		}
		if ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))) {
			fTempPerm621 = (fTempPerm614 - (fRec160[1] + (fTempPerm82 * fRec161[1])));
			fTempPerm622 = ((fTempPerm35 * fTempPerm621) / fTempPerm83);
			fTempPerm623 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec161[1] + fTempPerm622)));
			fTempPerm624 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm623)));
			fTempPerm625 = ((fTempPerm35 * fTempPerm623) * fTempPerm624);
			fRec159 = (fRec160[1] + fTempPerm625);
			fRec160[0] = (fRec160[1] + (2.0f * fTempPerm625));
			fTempPerm626 = (fTempPerm623 * fTempPerm624);
			fRec161[0] = (fTempPerm622 + fTempPerm626);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm627 = (((fTempPerm19 * (((fTempPerm21 * fRec154) + (fTempPerm87 * fRec158)) + (fTempPerm97 * fRec159))) / fTempPerm104) + (fTempPerm105 * fTempPerm614));
			fVec25[0] = fTempPerm627;
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fTempPerm628 = (fTempPerm627 - fVec25[1]);
			fRec163[0] = ((std::fabs(fTempPerm628) < 0.5f) ? (fConst0 * fTempPerm628) : fRec163[1]);
		}
		if (iControl[49]) {
			fTempPerm629 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec163[0])))))));
			fTempPerm630 = (1.0f - fTempPerm629);
		}
		if (iControl[49] | iControl[42]) {
			fTempPerm631 = std::floor(fTempPerm627);
			fTempPerm632 = (fTempPerm627 - fTempPerm631);
			fVec26[0] = fTempPerm632;
			iTempPerm633 = (fTempPerm632 < 0.5f);
			iVec27[0] = iTempPerm633;
		}
		if (iControl[49]) {
			iTempPerm634 = ((iVec27[1] <= 0) & (iTempPerm633 > 0));
			fRec168[0] = ((fRec168[1] * float((1 - iTempPerm634))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm634))));
			fTempPerm635 = (fTempPerm629 + 1.0f);
			fRec167[0] = (0.0f - (((fTempPerm630 * fRec167[1]) - (fRec168[0] + fRec168[1])) / fTempPerm635));
			fRec166[0] = (0.0f - (((fTempPerm630 * fRec166[1]) - (fRec167[0] + fRec167[1])) / fTempPerm635));
			fRec165[0] = (0.0f - (((fTempPerm630 * fRec165[1]) - (fRec166[0] + fRec166[1])) / fTempPerm635));
			fRec164[0] = (0.0f - (((fTempPerm630 * fRec164[1]) - (fRec165[0] + fRec165[1])) / fTempPerm635));
			fRec162[0] = (0.0f - (((fRec162[1] * fTempPerm630) - (fRec164[0] + fRec164[1])) / fTempPerm635));
			fTempPerm636 = (std::sin((6.28318548f * fTempPerm627)) * ((fTempPerm598 * (fRec162[0] + -1.0f)) + 1.0f));
			fTempPerm637 = (((fTempPerm607 + (fTempPerm608 * (fRec145[0] - fTempPerm607))) * fTempPerm610) + (fTempPerm609 * (fTempPerm636 + (fTempPerm608 * (fRec162[0] - fTempPerm636)))));
		}
		if (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44])))) {
			fTempPerm638 = (fTempPerm596 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec146[0] - fConst7))))));
		}
		if (iControl[48] | (iControl[46] | (iControl[45] | iControl[44]))) {
			fTempPerm639 = (1.0f - fTempPerm638);
		}
		if (iControl[48]) {
			fTempPerm640 = ((0.75f * fTempPerm639) + (fTempPerm590 + (0.5f * fTempPerm638)));
			fTempPerm641 = std::floor(fTempPerm640);
		}
		if (iControl[48] | iControl[44]) {
			fTempPerm642 = (0.5f * fTempPerm639);
		}
		if (iControl[48]) {
			fTempPerm643 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm642));
			fTempPerm644 = (0.5f - fTempPerm643);
		}
		if (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44])))) {
			fTempPerm645 = (fTempPerm596 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec163[0] - fConst7))))));
		}
		if (iControl[48] | (iControl[46] | (iControl[45] | iControl[44]))) {
			fTempPerm646 = (1.0f - fTempPerm645);
		}
		if (iControl[48]) {
			fTempPerm647 = ((0.75f * fTempPerm646) + (fTempPerm627 + (0.5f * fTempPerm645)));
			fTempPerm648 = std::floor(fTempPerm647);
		}
		if (iControl[48] | iControl[44]) {
			fTempPerm649 = (0.5f * fTempPerm646);
		}
		if (iControl[48]) {
			fTempPerm650 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm649));
			fTempPerm651 = (0.5f - fTempPerm650);
			fTempPerm652 = ((fTempPerm610 * std::cos((6.28318548f * ((fTempPerm640 + std::min<float>((((fTempPerm640 - fTempPerm641) * fTempPerm644) / fTempPerm643), ((fTempPerm644 * (fTempPerm641 + (1.0f - fTempPerm640))) / (1.0f - fTempPerm643)))) - fTempPerm641)))) + (fTempPerm609 * std::cos((6.28318548f * ((fTempPerm647 + std::min<float>((((fTempPerm647 - fTempPerm648) * fTempPerm651) / fTempPerm650), ((fTempPerm651 * (fTempPerm648 + (1.0f - fTempPerm647))) / (1.0f - fTempPerm650)))) - fTempPerm648)))));
		}
		if (iControl[47]) {
			fTempPerm653 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm638));
			fTempPerm654 = (1.0f - fTempPerm653);
			fTempPerm655 = (0.25f * fTempPerm654);
			fTempPerm656 = (fTempPerm590 - (fTempPerm655 + std::floor((fTempPerm590 - fTempPerm655))));
			fTempPerm657 = (2.0f * fTempPerm656);
			fTempPerm658 = std::floor((fTempPerm657 + 1.0f));
			fTempPerm659 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm645));
			fTempPerm660 = (1.0f - fTempPerm659);
			fTempPerm661 = (0.25f * fTempPerm660);
			fTempPerm662 = (fTempPerm627 - (fTempPerm661 + std::floor((fTempPerm627 - fTempPerm661))));
			fTempPerm663 = (2.0f * fTempPerm662);
			fTempPerm664 = std::floor((fTempPerm663 + 1.0f));
			fTempPerm665 = ((fTempPerm610 * std::cos((3.14159274f * ((float((fTempPerm656 >= 0.5f)) + fTempPerm657) + (1.0f - (fTempPerm658 + std::min<float>((fTempPerm657 + (1.0f - fTempPerm658)), ((fTempPerm653 * (fTempPerm658 - fTempPerm657)) / fTempPerm654)))))))) + (fTempPerm609 * std::cos((3.14159274f * ((float((fTempPerm662 >= 0.5f)) + fTempPerm663) + (1.0f - (fTempPerm664 + std::min<float>((fTempPerm663 + (1.0f - fTempPerm664)), ((fTempPerm659 * (fTempPerm664 - fTempPerm663)) / fTempPerm660)))))))));
		}
		if (iControl[46]) {
			fTempPerm666 = (0.25f * fTempPerm639);
			fTempPerm667 = (fTempPerm666 + std::floor((fTempPerm590 - fTempPerm666)));
		}
		if (iControl[46] | (iControl[45] | (iControl[43] | iControl[41]))) {
			fTempPerm668 = (1.0f - fTempPerm590);
		}
		if (iControl[46]) {
			fTempPerm669 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm638));
			fTempPerm670 = (0.25f * fTempPerm646);
			fTempPerm671 = (fTempPerm670 + std::floor((fTempPerm627 - fTempPerm670)));
		}
		if (iControl[46] | (iControl[45] | (iControl[43] | iControl[41]))) {
			fTempPerm672 = (1.0f - fTempPerm627);
		}
		if (iControl[46]) {
			fTempPerm673 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm645));
			fTempPerm674 = ((fTempPerm610 * std::cos((6.28318548f * (fTempPerm590 - (fTempPerm667 + std::min<float>((fTempPerm590 - fTempPerm667), (((fTempPerm667 + fTempPerm668) * fTempPerm669) / (1.0f - fTempPerm669)))))))) + (fTempPerm609 * std::cos((6.28318548f * (fTempPerm627 - (fTempPerm671 + std::min<float>((fTempPerm627 - fTempPerm671), (((fTempPerm671 + fTempPerm672) * fTempPerm673) / (1.0f - fTempPerm673)))))))));
		}
		if (iControl[45]) {
			fTempPerm675 = ((0.125f * fTempPerm639) + (0.25f * fTempPerm638));
			fTempPerm676 = (fTempPerm675 + std::floor((fTempPerm590 - fTempPerm675)));
			fTempPerm677 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm638));
			fTempPerm678 = (0.49000001f * fTempPerm677);
			fTempPerm679 = ((0.125f * fTempPerm646) + (0.25f * fTempPerm645));
			fTempPerm680 = (fTempPerm679 + std::floor((fTempPerm627 - fTempPerm679)));
			fTempPerm681 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm645));
			fTempPerm682 = (0.49000001f * fTempPerm681);
			fTempPerm683 = ((fTempPerm610 * std::cos((12.566371f * ((fTempPerm590 + std::min<float>((0.49000001f * (((fTempPerm590 - fTempPerm676) * fTempPerm677) / (0.5f - fTempPerm678))), (0.49000001f * ((fTempPerm677 * (fTempPerm676 + fTempPerm668)) / (fTempPerm678 + 0.5f))))) - fTempPerm676)))) + (fTempPerm609 * std::cos((12.566371f * ((fTempPerm627 + std::min<float>((0.49000001f * (((fTempPerm627 - fTempPerm680) * fTempPerm681) / (0.5f - fTempPerm682))), (0.49000001f * ((fTempPerm681 * (fTempPerm680 + fTempPerm672)) / (fTempPerm682 + 0.5f))))) - fTempPerm680)))));
		}
		if (iControl[44]) {
			fTempPerm684 = std::min<float>(0.975000024f, fTempPerm638);
			fTempPerm685 = (0.25f * (1.0f - fTempPerm684));
			fTempPerm686 = (fTempPerm685 + (0.5f * fTempPerm684));
			fTempPerm687 = std::floor((fTempPerm590 - fTempPerm686));
			fTempPerm688 = (fTempPerm590 - (fTempPerm686 + fTempPerm687));
			fTempPerm689 = std::min<float>(0.975000024f, fTempPerm645);
			fTempPerm690 = (0.25f * (1.0f - fTempPerm689));
			fTempPerm691 = (fTempPerm690 + (0.5f * fTempPerm689));
			fTempPerm692 = std::floor((fTempPerm627 - fTempPerm691));
			fTempPerm693 = (fTempPerm627 - (fTempPerm691 + fTempPerm692));
			fTempPerm694 = ((fTempPerm610 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm688 < 0.5f) ? fTempPerm688 : (0.5f * (((fTempPerm590 - ((fTempPerm685 + fTempPerm687) + (0.5f * (fTempPerm684 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm642))) + 1.0f))))))) + (fTempPerm609 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm693 < 0.5f) ? fTempPerm693 : (0.5f * (((fTempPerm627 - ((fTempPerm690 + fTempPerm692) + (0.5f * (fTempPerm689 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm649))) + 1.0f))))))));
		}
		if (iControl[43] | iControl[41]) {
			fTempPerm695 = (fTempPerm590 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec146[0] * fControl[801]) * fTempPerm595))) / fRec146[0])));
			fTempPerm696 = (fTempPerm627 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec163[0] * fControl[801]) * fTempPerm595))) / fRec163[0])));
		}
		if (iControl[43]) {
			fTempPerm697 = ((fTempPerm610 * (((0.0f - fTempPerm668) * (1.0f - std::cos((6.28318548f * (fTempPerm695 + (1.0f - std::floor((fTempPerm695 + 1.0f)))))))) + 1.0f)) + (fTempPerm609 * (((0.0f - fTempPerm672) * (1.0f - std::cos((6.28318548f * (fTempPerm696 + (1.0f - std::floor((fTempPerm696 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[42]) {
			fTempPerm698 = (fTempPerm590 - (fTempPerm602 + fVec23[1]));
			fRec169[0] = ((std::fabs(fTempPerm698) < 0.5f) ? (fConst0 * fTempPerm698) : fRec169[1]);
			fTempPerm699 = (fTempPerm603 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec169[0] * fControl[801]) * fTempPerm595))) / fRec169[0])));
			fTempPerm700 = (fTempPerm627 - (fTempPerm631 + fVec26[1]));
			fRec170[0] = ((std::fabs(fTempPerm700) < 0.5f) ? (fConst0 * fTempPerm700) : fRec170[1]);
			fTempPerm701 = (fTempPerm632 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec170[0] * fControl[801]) * fTempPerm595))) / fRec170[0])));
			fTempPerm702 = ((fTempPerm610 * (((iTempPerm604 ? (2.0f * fTempPerm603) : (2.0f * (1.0f - fTempPerm603))) * (std::cos((6.28318548f * (fTempPerm699 + (1.0f - std::floor((fTempPerm699 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm609 * (((iTempPerm633 ? (2.0f * fTempPerm632) : (2.0f * (1.0f - fTempPerm632))) * (std::cos((6.28318548f * (fTempPerm701 + (1.0f - std::floor((fTempPerm701 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[41]) {
			fTempPerm703 = (((fTempPerm610 * std::min<float>(1.0f, (2.0f * fTempPerm668))) * std::sin((6.28318548f * (fTempPerm695 - std::floor(fTempPerm695))))) + ((fTempPerm609 * std::min<float>(1.0f, (2.0f * fTempPerm672))) * std::sin((6.28318548f * (fTempPerm696 - std::floor(fTempPerm696))))));
		}
		fRec5[0] = (((((((((fControl[253] * fTempPerm637) + (fControl[252] * fTempPerm652)) + (fControl[251] * fTempPerm665)) + (fControl[250] * fTempPerm674)) + (fControl[249] * fTempPerm683)) + (fControl[248] * fTempPerm694)) + (fControl[247] * fTempPerm697)) + (fControl[246] * fTempPerm702)) + (fControl[245] * fTempPerm703));
		float fTemp751 = ((fTemp46 * ((fControl[818] * fTemp43) + (fControl[819] * fTemp42))) + (fTemp45 * ((fControl[820] * fTemp43) + (fControl[821] * fTemp42))));
		float fTemp752 = ((fTemp46 * ((fControl[822] * fTemp43) + (fControl[823] * fTemp42))) + (fTemp45 * ((fControl[824] * fTemp43) + (fControl[825] * fTemp42))));
		float fTemp753 = ((fTemp46 * ((fControl[826] * fTemp43) + (fControl[827] * fTemp42))) + (fTemp45 * ((fControl[828] * fTemp43) + (fControl[829] * fTemp42))));
		float fTemp754 = ((fTemp46 * ((fControl[830] * fTemp43) + (fControl[831] * fTemp42))) + (fTemp45 * ((fControl[832] * fTemp43) + (fControl[833] * fTemp42))));
		float fTemp755 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp751 + fTemp752)) + (fTemp39 * (fTemp753 + fTemp754)))));
		float fTemp756 = (1.0f - fTemp755);
		float fTemp757 = ((fTemp46 * ((fControl[834] * fTemp43) + (fControl[835] * fTemp42))) + (fTemp45 * ((fControl[836] * fTemp43) + (fControl[837] * fTemp42))));
		float fTemp758 = ((fTemp46 * ((fControl[838] * fTemp43) + (fControl[839] * fTemp42))) + (fTemp45 * ((fControl[840] * fTemp43) + (fControl[841] * fTemp42))));
		float fTemp759 = ((fTemp46 * ((fControl[842] * fTemp43) + (fControl[843] * fTemp42))) + (fTemp45 * ((fControl[844] * fTemp43) + (fControl[845] * fTemp42))));
		float fTemp760 = ((fTemp46 * ((fControl[846] * fTemp43) + (fControl[847] * fTemp42))) + (fTemp45 * ((fControl[848] * fTemp43) + (fControl[849] * fTemp42))));
		float fTemp761 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp757 + fTemp758)) + (fTemp39 * (fTemp759 + fTemp760)))));
		outputs[0] = FAUSTFLOAT((fHbargraph0 * ((((fRec2[0] * fTemp756) + (fRec3[0] * fTemp755)) * (1.0f - fTemp761)) + (fTemp761 * ((fRec4[0] * fTemp756) + (fRec5[0] * fTemp755))))));
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm704 = std::fabs(fTempPerm27);
			fTempPerm705 = std::fabs(fTempPerm25);
			fTempPerm706 = std::fabs(fTempPerm23);
			fTempPerm707 = ((fTempPerm704 + fTempPerm705) + fTempPerm706);
			fTempPerm708 = std::min<float>(1.0f, fTempPerm707);
			fTempPerm709 = std::max<float>(2.82118644e-37f, fTempPerm704);
			fTempPerm710 = ((fTempPerm27 < 0.0f) ? (0.0f - fTempPerm709) : fTempPerm709);
		}
		if ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm711 = std::tan((fConst2 * std::min<float>(fConst4, std::max<float>(0.0f, (440.0f * std::pow(2.0f, (0.0833333358f * ((127.0f * std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTempPerm31 - fTempPerm32)) + (fTemp39 * (fTempPerm33 - fTempPerm34)))))) + -49.0f))))))));
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm712 = (fRec174[1] * ((fTemp40 * (fTempPerm36 - fTempPerm37)) + (fTemp39 * (fTempPerm38 - fTempPerm39))));
			fTempPerm713 = (fRec173[1] * ((fTemp40 * (fTempPerm41 - fTempPerm42)) + (fTemp39 * (fTempPerm43 - fTempPerm44))));
			fTempPerm714 = (fRec172[1] * ((fTemp40 * (fTempPerm46 - fTempPerm47)) + (fTemp39 * (fTempPerm48 - fTempPerm49))));
			fTempPerm715 = ((fTemp40 * (fTempPerm55 - fTempPerm56)) + (fTemp39 * (fTempPerm57 - fTempPerm58)));
			fTempPerm716 = ((fTemp40 * (fTempPerm60 - fTempPerm61)) + (fTemp39 * (fTempPerm62 - fTempPerm63)));
			fTempPerm717 = std::floor(fTempPerm716);
			fTempPerm718 = (fTempPerm717 + float(((fTempPerm716 < 0.0f) & (fTempPerm716 != fTempPerm717))));
			fTempPerm719 = (fTempPerm54 + (0.00390625f * (fTempPerm715 * std::pow(2.0f, (0.0f - fTempPerm718)))));
			iTempPerm720 = int(fTempPerm718);
			fTempPerm721 = (fRec171[1] * ((fTemp40 * (fTempPerm70 - fTempPerm71)) + (fTemp39 * (fTempPerm72 - fTempPerm73))));
			fTempPerm722 = (fTempPerm712 + (fTempPerm713 + (fTempPerm714 + (std::fmod((256.0f * ((fTempPerm719 - (fTempPerm68 + std::floor((fTempPerm719 - fTempPerm68)))) * (((float((iTempPerm720 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm720)))))) + float((iTempPerm720 == 0))) + float(((iTempPerm720 > 0) * int(std::pow(2.0f, float(iTempPerm720)))))))), 1.0f) + fTempPerm721))));
		}
		if ((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))) {
			fTempPerm723 = (fRec175[1] + (fTempPerm711 * (fTempPerm722 - fRec176[1])));
		}
		if ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm724 = std::min<float>(10.0f, std::max<float>(0.00999999978f, ((fTemp40 * (fTempPerm77 - fTempPerm78)) + (fTemp39 * (fTempPerm79 - fTempPerm80)))));
		}
		if ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm725 = (fTempPerm711 + (1.0f / fTempPerm724));
			fTempPerm726 = ((fTempPerm711 * fTempPerm725) + 1.0f);
		}
		if ((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))) {
			fTempPerm727 = (fTempPerm723 / fTempPerm726);
			fRec175[0] = ((2.0f * fTempPerm727) - fRec175[1]);
			fTempPerm728 = (fRec176[1] + ((fTempPerm711 * fTempPerm723) / fTempPerm726));
			fRec176[0] = ((2.0f * fTempPerm728) - fRec176[1]);
			fRec177 = fTempPerm728;
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm729 = std::max<float>(2.82118644e-37f, fTempPerm705);
			fTempPerm730 = ((fTempPerm25 < 0.0f) ? (0.0f - fTempPerm729) : fTempPerm729);
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))) {
			fTempPerm731 = (fTempPerm711 * (fTempPerm722 - fRec180[1]));
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | ((iControl[68] & iTempPerm26) | ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | ((iControl[59] & iTempPerm26) | ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | ((iControl[50] & iTempPerm26) | ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))))))))))))))))))))))))))))) {
			fTempPerm732 = (fTempPerm724 + -0.707000017f);
			fTempPerm733 = (fTempPerm711 + 1.0f);
			fTempPerm734 = (1.0f - (fTempPerm711 / fTempPerm733));
			fTempPerm735 = (0.0f - (1.0f / fTempPerm733));
			fTempPerm736 = (1.0f - (0.215215757f * (((fTempPerm711 * fTempPerm732) * fTempPerm734) / fTempPerm733)));
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))) {
			fTempPerm737 = ((fTempPerm711 * ((((fRec180[1] + ((fTempPerm731 + (0.215215757f * ((fRec178[1] * fTempPerm732) * fTempPerm734))) / fTempPerm733)) + (fRec179[1] * fTempPerm735)) / fTempPerm736) - fRec178[1])) / fTempPerm733);
			fRec178[0] = (fRec178[1] + (2.0f * fTempPerm737));
			fTempPerm738 = (fRec178[1] + fTempPerm737);
			fRec179[0] = (fRec179[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm738)) - fRec179[1])) / fTempPerm733)));
			fRec180[0] = (fRec180[1] + (2.0f * (fTempPerm731 / fTempPerm733)));
			fRec181 = fTempPerm738;
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm739 = std::max<float>(2.82118644e-37f, fTempPerm706);
			fTempPerm740 = ((fTempPerm23 < 0.0f) ? (0.0f - fTempPerm739) : fTempPerm739);
		}
		if ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))) {
			fTempPerm741 = (fTempPerm722 - (fRec183[1] + (fTempPerm725 * fRec184[1])));
			fTempPerm742 = ((fTempPerm711 * fTempPerm741) / fTempPerm726);
			fTempPerm743 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec184[1] + fTempPerm742)));
			fTempPerm744 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm743)));
			fTempPerm745 = ((fTempPerm711 * fTempPerm743) * fTempPerm744);
			fRec182 = (fRec183[1] + fTempPerm745);
			fRec183[0] = (fRec183[1] + (2.0f * fTempPerm745));
			fTempPerm746 = (fTempPerm743 * fTempPerm744);
			fRec184[0] = (fTempPerm742 + fTempPerm746);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fTempPerm747 = std::max<float>(8.46355933e-37f, fTempPerm707);
			fTempPerm748 = (1.0f - fTempPerm708);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm749 = (((fTempPerm708 * (((fTempPerm710 * fRec177) + (fTempPerm730 * fRec181)) + (fTempPerm740 * fRec182))) / fTempPerm747) + (fTempPerm722 * fTempPerm748));
			fVec28[0] = fTempPerm749;
			fTempPerm750 = ((fTemp40 * (fTempPerm107 - fTempPerm108)) + (fTemp39 * (fTempPerm109 - fTempPerm110)));
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
			fTempPerm751 = (fControl[462] * fTempPerm750);
		}
		if (iControl[3]) {
			fTempPerm752 = (2.0f * fTempPerm751);
			fTempPerm753 = std::min<float>(1.0f, fTempPerm752);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fTempPerm754 = (fTempPerm749 - fVec28[1]);
			fRec186[0] = ((std::fabs(fTempPerm754) < 0.5f) ? (fConst0 * fTempPerm754) : fRec186[1]);
		}
		if (iControl[3]) {
			fTempPerm755 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec186[0])))))));
			fTempPerm756 = (1.0f - fTempPerm755);
		}
		if (iControl[3] | iControl[69]) {
			fTempPerm757 = std::floor(fTempPerm749);
			fTempPerm758 = (fTempPerm749 - fTempPerm757);
			fVec29[0] = fTempPerm758;
			iTempPerm759 = (fTempPerm758 < 0.5f);
			iVec30[0] = iTempPerm759;
		}
		if (iControl[3]) {
			iTempPerm760 = ((iVec30[1] <= 0) & (iTempPerm759 > 0));
			fRec191[0] = ((fRec191[1] * float((1 - iTempPerm760))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm760))));
			fTempPerm761 = (fTempPerm755 + 1.0f);
			fRec190[0] = (0.0f - (((fTempPerm756 * fRec190[1]) - (fRec191[0] + fRec191[1])) / fTempPerm761));
			fRec189[0] = (0.0f - (((fTempPerm756 * fRec189[1]) - (fRec190[0] + fRec190[1])) / fTempPerm761));
			fRec188[0] = (0.0f - (((fTempPerm756 * fRec188[1]) - (fRec189[0] + fRec189[1])) / fTempPerm761));
			fRec187[0] = (0.0f - (((fTempPerm756 * fRec187[1]) - (fRec188[0] + fRec188[1])) / fTempPerm761));
			fRec185[0] = (0.0f - (((fRec185[1] * fTempPerm756) - (fRec187[0] + fRec187[1])) / fTempPerm761));
			fTempPerm762 = (std::sin((6.28318548f * fTempPerm749)) * ((fTempPerm753 * (fRec185[0] + -1.0f)) + 1.0f));
			fTempPerm763 = (std::max<float>(1.0f, fTempPerm752) + -1.0f);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm764 = std::fmod(std::fabs(fTempPerm716), 1.0f);
			fTempPerm765 = (1.0f - fTempPerm764);
			fTempPerm766 = (fTempPerm717 + float((fTempPerm716 > 0.0f)));
			fTempPerm767 = (fTempPerm54 + (0.00390625f * (fTempPerm715 * std::pow(2.0f, (0.0f - fTempPerm766)))));
			iTempPerm768 = int(fTempPerm766);
			fTempPerm769 = ((((fTempPerm721 + fTempPerm714) + fTempPerm713) + fTempPerm712) + std::fmod((256.0f * ((fTempPerm767 - (fTempPerm68 + std::floor((fTempPerm767 - fTempPerm68)))) * (((float((iTempPerm768 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm768)))))) + float((iTempPerm768 == 0))) + float(((iTempPerm768 > 0) * int(std::pow(2.0f, float(iTempPerm768)))))))), 1.0f));
		}
		if ((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))) {
			fTempPerm770 = (fRec192[1] + (fTempPerm711 * (fTempPerm769 - fRec193[1])));
			fTempPerm771 = (fTempPerm770 / fTempPerm726);
			fRec192[0] = ((2.0f * fTempPerm771) - fRec192[1]);
			fTempPerm772 = (fRec193[1] + ((fTempPerm711 * fTempPerm770) / fTempPerm726));
			fRec193[0] = ((2.0f * fTempPerm772) - fRec193[1]);
			fRec194 = fTempPerm772;
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))) {
			fTempPerm773 = (fTempPerm711 * (fTempPerm769 - fRec197[1]));
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | ((iControl[68] & iTempPerm26) | ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | ((iControl[59] & iTempPerm26) | ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | ((iControl[50] & iTempPerm26) | ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))))))))))))))))))))))))))))) {
			fTempPerm774 = (fTempPerm732 * fTempPerm734);
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))) {
			fTempPerm775 = ((fTempPerm711 * ((((fRec197[1] + ((fTempPerm773 + (0.215215757f * (fTempPerm774 * fRec195[1]))) / fTempPerm733)) + (fTempPerm735 * fRec196[1])) / fTempPerm736) - fRec195[1])) / fTempPerm733);
			fRec195[0] = (fRec195[1] + (2.0f * fTempPerm775));
			fTempPerm776 = (fRec195[1] + fTempPerm775);
			fRec196[0] = (fRec196[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm776)) - fRec196[1])) / fTempPerm733)));
			fRec197[0] = (fRec197[1] + (2.0f * (fTempPerm773 / fTempPerm733)));
			fRec198 = fTempPerm776;
		}
		if ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))) {
			fTempPerm777 = (fTempPerm769 - (fRec200[1] + (fTempPerm725 * fRec201[1])));
			fTempPerm778 = ((fTempPerm711 * fTempPerm777) / fTempPerm726);
			fTempPerm779 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec201[1] + fTempPerm778)));
			fTempPerm780 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm779)));
			fTempPerm781 = ((fTempPerm711 * fTempPerm779) * fTempPerm780);
			fRec199 = (fRec200[1] + fTempPerm781);
			fRec200[0] = (fRec200[1] + (2.0f * fTempPerm781));
			fTempPerm782 = (fTempPerm779 * fTempPerm780);
			fRec201[0] = (fTempPerm778 + fTempPerm782);
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fTempPerm783 = (((fTempPerm708 * (((fTempPerm710 * fRec194) + (fTempPerm730 * fRec198)) + (fTempPerm740 * fRec199))) / fTempPerm747) + (fTempPerm748 * fTempPerm769));
			fVec31[0] = fTempPerm783;
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fTempPerm784 = (fTempPerm783 - fVec31[1]);
			fRec203[0] = ((std::fabs(fTempPerm784) < 0.5f) ? (fConst0 * fTempPerm784) : fRec203[1]);
		}
		if (iControl[3]) {
			fTempPerm785 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec203[0])))))));
			fTempPerm786 = (1.0f - fTempPerm785);
		}
		if (iControl[3] | iControl[69]) {
			fTempPerm787 = std::floor(fTempPerm783);
			fTempPerm788 = (fTempPerm783 - fTempPerm787);
			fVec32[0] = fTempPerm788;
			iTempPerm789 = (fTempPerm788 < 0.5f);
			iVec33[0] = iTempPerm789;
		}
		if (iControl[3]) {
			iTempPerm790 = ((iVec33[1] <= 0) & (iTempPerm789 > 0));
			fRec208[0] = ((fRec208[1] * float((1 - iTempPerm790))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm790))));
			fTempPerm791 = (fTempPerm785 + 1.0f);
			fRec207[0] = (0.0f - (((fTempPerm786 * fRec207[1]) - (fRec208[0] + fRec208[1])) / fTempPerm791));
			fRec206[0] = (0.0f - (((fTempPerm786 * fRec206[1]) - (fRec207[0] + fRec207[1])) / fTempPerm791));
			fRec205[0] = (0.0f - (((fTempPerm786 * fRec205[1]) - (fRec206[0] + fRec206[1])) / fTempPerm791));
			fRec204[0] = (0.0f - (((fTempPerm786 * fRec204[1]) - (fRec205[0] + fRec205[1])) / fTempPerm791));
			fRec202[0] = (0.0f - (((fRec202[1] * fTempPerm786) - (fRec204[0] + fRec204[1])) / fTempPerm791));
			fTempPerm792 = (std::sin((6.28318548f * fTempPerm783)) * ((fTempPerm753 * (fRec202[0] + -1.0f)) + 1.0f));
			fTempPerm793 = (((fTempPerm762 + (fTempPerm763 * (fRec185[0] - fTempPerm762))) * fTempPerm765) + (fTempPerm764 * (fTempPerm792 + (fTempPerm763 * (fRec202[0] - fTempPerm792)))));
		}
		if (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71])))) {
			fTempPerm794 = (fTempPerm751 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec186[0] - fConst7))))));
		}
		if (iControl[75] | (iControl[73] | (iControl[72] | iControl[71]))) {
			fTempPerm795 = (1.0f - fTempPerm794);
		}
		if (iControl[75]) {
			fTempPerm796 = ((0.75f * fTempPerm795) + (fTempPerm749 + (0.5f * fTempPerm794)));
			fTempPerm797 = std::floor(fTempPerm796);
		}
		if (iControl[75] | iControl[71]) {
			fTempPerm798 = (0.5f * fTempPerm795);
		}
		if (iControl[75]) {
			fTempPerm799 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm798));
			fTempPerm800 = (0.5f - fTempPerm799);
		}
		if (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71])))) {
			fTempPerm801 = (fTempPerm751 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec203[0] - fConst7))))));
		}
		if (iControl[75] | (iControl[73] | (iControl[72] | iControl[71]))) {
			fTempPerm802 = (1.0f - fTempPerm801);
		}
		if (iControl[75]) {
			fTempPerm803 = ((0.75f * fTempPerm802) + (fTempPerm783 + (0.5f * fTempPerm801)));
			fTempPerm804 = std::floor(fTempPerm803);
		}
		if (iControl[75] | iControl[71]) {
			fTempPerm805 = (0.5f * fTempPerm802);
		}
		if (iControl[75]) {
			fTempPerm806 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm805));
			fTempPerm807 = (0.5f - fTempPerm806);
			fTempPerm808 = ((fTempPerm765 * std::cos((6.28318548f * ((fTempPerm796 + std::min<float>((((fTempPerm796 - fTempPerm797) * fTempPerm800) / fTempPerm799), ((fTempPerm800 * (fTempPerm797 + (1.0f - fTempPerm796))) / (1.0f - fTempPerm799)))) - fTempPerm797)))) + (fTempPerm764 * std::cos((6.28318548f * ((fTempPerm803 + std::min<float>((((fTempPerm803 - fTempPerm804) * fTempPerm807) / fTempPerm806), ((fTempPerm807 * (fTempPerm804 + (1.0f - fTempPerm803))) / (1.0f - fTempPerm806)))) - fTempPerm804)))));
		}
		if (iControl[74]) {
			fTempPerm809 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm794));
			fTempPerm810 = (1.0f - fTempPerm809);
			fTempPerm811 = (0.25f * fTempPerm810);
			fTempPerm812 = (fTempPerm749 - (fTempPerm811 + std::floor((fTempPerm749 - fTempPerm811))));
			fTempPerm813 = (2.0f * fTempPerm812);
			fTempPerm814 = std::floor((fTempPerm813 + 1.0f));
			fTempPerm815 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm801));
			fTempPerm816 = (1.0f - fTempPerm815);
			fTempPerm817 = (0.25f * fTempPerm816);
			fTempPerm818 = (fTempPerm783 - (fTempPerm817 + std::floor((fTempPerm783 - fTempPerm817))));
			fTempPerm819 = (2.0f * fTempPerm818);
			fTempPerm820 = std::floor((fTempPerm819 + 1.0f));
			fTempPerm821 = ((fTempPerm765 * std::cos((3.14159274f * ((float((fTempPerm812 >= 0.5f)) + fTempPerm813) + (1.0f - (fTempPerm814 + std::min<float>((fTempPerm813 + (1.0f - fTempPerm814)), ((fTempPerm809 * (fTempPerm814 - fTempPerm813)) / fTempPerm810)))))))) + (fTempPerm764 * std::cos((3.14159274f * ((float((fTempPerm818 >= 0.5f)) + fTempPerm819) + (1.0f - (fTempPerm820 + std::min<float>((fTempPerm819 + (1.0f - fTempPerm820)), ((fTempPerm815 * (fTempPerm820 - fTempPerm819)) / fTempPerm816)))))))));
		}
		if (iControl[73]) {
			fTempPerm822 = (0.25f * fTempPerm795);
			fTempPerm823 = (fTempPerm822 + std::floor((fTempPerm749 - fTempPerm822)));
		}
		if (iControl[73] | (iControl[72] | (iControl[70] | iControl[68]))) {
			fTempPerm824 = (1.0f - fTempPerm749);
		}
		if (iControl[73]) {
			fTempPerm825 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm794));
			fTempPerm826 = (0.25f * fTempPerm802);
			fTempPerm827 = (fTempPerm826 + std::floor((fTempPerm783 - fTempPerm826)));
		}
		if (iControl[73] | (iControl[72] | (iControl[70] | iControl[68]))) {
			fTempPerm828 = (1.0f - fTempPerm783);
		}
		if (iControl[73]) {
			fTempPerm829 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm801));
			fTempPerm830 = ((fTempPerm765 * std::cos((6.28318548f * (fTempPerm749 - (fTempPerm823 + std::min<float>((fTempPerm749 - fTempPerm823), (((fTempPerm823 + fTempPerm824) * fTempPerm825) / (1.0f - fTempPerm825)))))))) + (fTempPerm764 * std::cos((6.28318548f * (fTempPerm783 - (fTempPerm827 + std::min<float>((fTempPerm783 - fTempPerm827), (((fTempPerm827 + fTempPerm828) * fTempPerm829) / (1.0f - fTempPerm829)))))))));
		}
		if (iControl[72]) {
			fTempPerm831 = ((0.125f * fTempPerm795) + (0.25f * fTempPerm794));
			fTempPerm832 = (fTempPerm831 + std::floor((fTempPerm749 - fTempPerm831)));
			fTempPerm833 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm794));
			fTempPerm834 = (0.49000001f * fTempPerm833);
			fTempPerm835 = ((0.125f * fTempPerm802) + (0.25f * fTempPerm801));
			fTempPerm836 = (fTempPerm835 + std::floor((fTempPerm783 - fTempPerm835)));
			fTempPerm837 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm801));
			fTempPerm838 = (0.49000001f * fTempPerm837);
			fTempPerm839 = ((fTempPerm765 * std::cos((12.566371f * ((fTempPerm749 + std::min<float>((0.49000001f * (((fTempPerm749 - fTempPerm832) * fTempPerm833) / (0.5f - fTempPerm834))), (0.49000001f * ((fTempPerm833 * (fTempPerm832 + fTempPerm824)) / (fTempPerm834 + 0.5f))))) - fTempPerm832)))) + (fTempPerm764 * std::cos((12.566371f * ((fTempPerm783 + std::min<float>((0.49000001f * (((fTempPerm783 - fTempPerm836) * fTempPerm837) / (0.5f - fTempPerm838))), (0.49000001f * ((fTempPerm837 * (fTempPerm836 + fTempPerm828)) / (fTempPerm838 + 0.5f))))) - fTempPerm836)))));
		}
		if (iControl[71]) {
			fTempPerm840 = std::min<float>(0.975000024f, fTempPerm794);
			fTempPerm841 = (0.25f * (1.0f - fTempPerm840));
			fTempPerm842 = (fTempPerm841 + (0.5f * fTempPerm840));
			fTempPerm843 = std::floor((fTempPerm749 - fTempPerm842));
			fTempPerm844 = (fTempPerm749 - (fTempPerm842 + fTempPerm843));
			fTempPerm845 = std::min<float>(0.975000024f, fTempPerm801);
			fTempPerm846 = (0.25f * (1.0f - fTempPerm845));
			fTempPerm847 = (fTempPerm846 + (0.5f * fTempPerm845));
			fTempPerm848 = std::floor((fTempPerm783 - fTempPerm847));
			fTempPerm849 = (fTempPerm783 - (fTempPerm847 + fTempPerm848));
			fTempPerm850 = ((fTempPerm765 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm844 < 0.5f) ? fTempPerm844 : (0.5f * (((fTempPerm749 - ((fTempPerm841 + fTempPerm843) + (0.5f * (fTempPerm840 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm798))) + 1.0f))))))) + (fTempPerm764 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm849 < 0.5f) ? fTempPerm849 : (0.5f * (((fTempPerm783 - ((fTempPerm846 + fTempPerm848) + (0.5f * (fTempPerm845 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm805))) + 1.0f))))))));
		}
		if (iControl[70] | iControl[68]) {
			fTempPerm851 = (fTempPerm749 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec186[0] * fControl[462]) * fTempPerm750))) / fRec186[0])));
			fTempPerm852 = (fTempPerm783 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec203[0] * fControl[462]) * fTempPerm750))) / fRec203[0])));
		}
		if (iControl[70]) {
			fTempPerm853 = ((fTempPerm765 * (((0.0f - fTempPerm824) * (1.0f - std::cos((6.28318548f * (fTempPerm851 + (1.0f - std::floor((fTempPerm851 + 1.0f)))))))) + 1.0f)) + (fTempPerm764 * (((0.0f - fTempPerm828) * (1.0f - std::cos((6.28318548f * (fTempPerm852 + (1.0f - std::floor((fTempPerm852 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[69]) {
			fTempPerm854 = (fTempPerm749 - (fTempPerm757 + fVec29[1]));
			fRec209[0] = ((std::fabs(fTempPerm854) < 0.5f) ? (fConst0 * fTempPerm854) : fRec209[1]);
			fTempPerm855 = (fTempPerm758 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec209[0] * fControl[462]) * fTempPerm750))) / fRec209[0])));
			fTempPerm856 = (fTempPerm783 - (fTempPerm787 + fVec32[1]));
			fRec210[0] = ((std::fabs(fTempPerm856) < 0.5f) ? (fConst0 * fTempPerm856) : fRec210[1]);
			fTempPerm857 = (fTempPerm788 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec210[0] * fControl[462]) * fTempPerm750))) / fRec210[0])));
			fTempPerm858 = ((fTempPerm765 * (((iTempPerm759 ? (2.0f * fTempPerm758) : (2.0f * (1.0f - fTempPerm758))) * (std::cos((6.28318548f * (fTempPerm855 + (1.0f - std::floor((fTempPerm855 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm764 * (((iTempPerm789 ? (2.0f * fTempPerm788) : (2.0f * (1.0f - fTempPerm788))) * (std::cos((6.28318548f * (fTempPerm857 + (1.0f - std::floor((fTempPerm857 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[68]) {
			fTempPerm859 = (((fTempPerm765 * std::min<float>(1.0f, (2.0f * fTempPerm824))) * std::sin((6.28318548f * (fTempPerm851 - std::floor(fTempPerm851))))) + ((fTempPerm764 * std::min<float>(1.0f, (2.0f * fTempPerm828))) * std::sin((6.28318548f * (fTempPerm852 - std::floor(fTempPerm852))))));
		}
		fRec171[0] = (((((((((fControl[11] * fTempPerm793) + (fControl[283] * fTempPerm808)) + (fControl[282] * fTempPerm821)) + (fControl[281] * fTempPerm830)) + (fControl[280] * fTempPerm839)) + (fControl[279] * fTempPerm850)) + (fControl[278] * fTempPerm853)) + (fControl[277] * fTempPerm858)) + (fControl[276] * fTempPerm859));
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm860 = (fRec174[1] * ((fTemp40 * (fTempPerm221 - fTempPerm222)) + (fTemp39 * (fTempPerm223 - fTempPerm224))));
			fTempPerm861 = (fRec173[1] * ((fTemp40 * (fTempPerm226 - fTempPerm227)) + (fTemp39 * (fTempPerm228 - fTempPerm229))));
			fTempPerm862 = (fRec172[1] * ((fTemp40 * (fTempPerm231 - fTempPerm232)) + (fTemp39 * (fTempPerm233 - fTempPerm234))));
			fTempPerm863 = ((fTemp40 * (fTempPerm236 - fTempPerm237)) + (fTemp39 * (fTempPerm238 - fTempPerm239)));
			fTempPerm864 = ((fTemp40 * (fTempPerm241 - fTempPerm242)) + (fTemp39 * (fTempPerm243 - fTempPerm244)));
			fTempPerm865 = std::floor(fTempPerm864);
			fTempPerm866 = (fTempPerm865 + float(((fTempPerm864 < 0.0f) & (fTempPerm864 != fTempPerm865))));
			fTempPerm867 = (fTempPerm54 + (0.00390625f * (fTempPerm863 * std::pow(2.0f, (0.0f - fTempPerm866)))));
			iTempPerm868 = int(fTempPerm866);
			fTempPerm869 = (fRec171[1] * ((fTemp40 * (fTempPerm250 - fTempPerm251)) + (fTemp39 * (fTempPerm252 - fTempPerm253))));
			fTempPerm870 = (fTempPerm860 + (fTempPerm861 + (fTempPerm862 + (std::fmod((256.0f * ((fTempPerm867 - (fTempPerm68 + std::floor((fTempPerm867 - fTempPerm68)))) * (((float((iTempPerm868 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm868)))))) + float((iTempPerm868 == 0))) + float(((iTempPerm868 > 0) * int(std::pow(2.0f, float(iTempPerm868)))))))), 1.0f) + fTempPerm869))));
		}
		if ((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))) {
			fTempPerm871 = (fRec211[1] + (fTempPerm711 * (fTempPerm870 - fRec212[1])));
			fTempPerm872 = (fTempPerm871 / fTempPerm726);
			fRec211[0] = ((2.0f * fTempPerm872) - fRec211[1]);
			fTempPerm873 = (fRec212[1] + ((fTempPerm711 * fTempPerm871) / fTempPerm726));
			fRec212[0] = ((2.0f * fTempPerm873) - fRec212[1]);
			fRec213 = fTempPerm873;
		}
		if ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))) {
			fTempPerm874 = (fTempPerm711 * (fTempPerm870 - fRec216[1]));
			fTempPerm875 = ((fTempPerm711 * ((((fRec216[1] + ((fTempPerm874 + (0.215215757f * (fTempPerm774 * fRec214[1]))) / fTempPerm733)) + (fTempPerm735 * fRec215[1])) / fTempPerm736) - fRec214[1])) / fTempPerm733);
			fRec214[0] = (fRec214[1] + (2.0f * fTempPerm875));
			fTempPerm876 = (fRec214[1] + fTempPerm875);
			fRec215[0] = (fRec215[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm876)) - fRec215[1])) / fTempPerm733)));
			fRec216[0] = (fRec216[1] + (2.0f * (fTempPerm874 / fTempPerm733)));
			fRec217 = fTempPerm876;
		}
		if ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))) {
			fTempPerm877 = (fTempPerm870 - (fRec219[1] + (fTempPerm725 * fRec220[1])));
			fTempPerm878 = ((fTempPerm711 * fTempPerm877) / fTempPerm726);
			fTempPerm879 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec220[1] + fTempPerm878)));
			fTempPerm880 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm879)));
			fTempPerm881 = ((fTempPerm711 * fTempPerm879) * fTempPerm880);
			fRec218 = (fRec219[1] + fTempPerm881);
			fRec219[0] = (fRec219[1] + (2.0f * fTempPerm881));
			fTempPerm882 = (fTempPerm879 * fTempPerm880);
			fRec220[0] = (fTempPerm878 + fTempPerm882);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm883 = (((fTempPerm708 * (((fTempPerm710 * fRec213) + (fTempPerm730 * fRec217)) + (fTempPerm740 * fRec218))) / fTempPerm747) + (fTempPerm748 * fTempPerm870));
			fVec34[0] = fTempPerm883;
			fTempPerm884 = ((fTemp40 * (fTempPerm269 - fTempPerm270)) + (fTemp39 * (fTempPerm271 - fTempPerm272)));
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
			fTempPerm885 = (fControl[575] * fTempPerm884);
		}
		if (iControl[67]) {
			fTempPerm886 = (2.0f * fTempPerm885);
			fTempPerm887 = std::min<float>(1.0f, fTempPerm886);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fTempPerm888 = (fTempPerm883 - fVec34[1]);
			fRec222[0] = ((std::fabs(fTempPerm888) < 0.5f) ? (fConst0 * fTempPerm888) : fRec222[1]);
		}
		if (iControl[67]) {
			fTempPerm889 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec222[0])))))));
			fTempPerm890 = (1.0f - fTempPerm889);
		}
		if (iControl[67] | iControl[60]) {
			fTempPerm891 = std::floor(fTempPerm883);
			fTempPerm892 = (fTempPerm883 - fTempPerm891);
			fVec35[0] = fTempPerm892;
			iTempPerm893 = (fTempPerm892 < 0.5f);
			iVec36[0] = iTempPerm893;
		}
		if (iControl[67]) {
			iTempPerm894 = ((iVec36[1] <= 0) & (iTempPerm893 > 0));
			fRec227[0] = ((fRec227[1] * float((1 - iTempPerm894))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm894))));
			fTempPerm895 = (fTempPerm889 + 1.0f);
			fRec226[0] = (0.0f - (((fTempPerm890 * fRec226[1]) - (fRec227[0] + fRec227[1])) / fTempPerm895));
			fRec225[0] = (0.0f - (((fTempPerm890 * fRec225[1]) - (fRec226[0] + fRec226[1])) / fTempPerm895));
			fRec224[0] = (0.0f - (((fTempPerm890 * fRec224[1]) - (fRec225[0] + fRec225[1])) / fTempPerm895));
			fRec223[0] = (0.0f - (((fTempPerm890 * fRec223[1]) - (fRec224[0] + fRec224[1])) / fTempPerm895));
			fRec221[0] = (0.0f - (((fRec221[1] * fTempPerm890) - (fRec223[0] + fRec223[1])) / fTempPerm895));
			fTempPerm896 = (std::sin((6.28318548f * fTempPerm883)) * ((fTempPerm887 * (fRec221[0] + -1.0f)) + 1.0f));
			fTempPerm897 = (std::max<float>(1.0f, fTempPerm886) + -1.0f);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm898 = std::fmod(std::fabs(fTempPerm864), 1.0f);
			fTempPerm899 = (1.0f - fTempPerm898);
			fTempPerm900 = (fTempPerm865 + float((fTempPerm864 > 0.0f)));
			fTempPerm901 = (fTempPerm54 + (0.00390625f * (fTempPerm863 * std::pow(2.0f, (0.0f - fTempPerm900)))));
			iTempPerm902 = int(fTempPerm900);
			fTempPerm903 = ((((fTempPerm869 + fTempPerm862) + fTempPerm861) + fTempPerm860) + std::fmod((256.0f * ((fTempPerm901 - (fTempPerm68 + std::floor((fTempPerm901 - fTempPerm68)))) * (((float((iTempPerm902 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm902)))))) + float((iTempPerm902 == 0))) + float(((iTempPerm902 > 0) * int(std::pow(2.0f, float(iTempPerm902)))))))), 1.0f));
		}
		if ((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))) {
			fTempPerm904 = (fRec228[1] + (fTempPerm711 * (fTempPerm903 - fRec229[1])));
			fTempPerm905 = (fTempPerm904 / fTempPerm726);
			fRec228[0] = ((2.0f * fTempPerm905) - fRec228[1]);
			fTempPerm906 = (fRec229[1] + ((fTempPerm711 * fTempPerm904) / fTempPerm726));
			fRec229[0] = ((2.0f * fTempPerm906) - fRec229[1]);
			fRec230 = fTempPerm906;
		}
		if ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))) {
			fTempPerm907 = (fTempPerm711 * (fTempPerm903 - fRec233[1]));
			fTempPerm908 = ((fTempPerm711 * ((((fRec233[1] + ((fTempPerm907 + (0.215215757f * (fTempPerm774 * fRec231[1]))) / fTempPerm733)) + (fTempPerm735 * fRec232[1])) / fTempPerm736) - fRec231[1])) / fTempPerm733);
			fRec231[0] = (fRec231[1] + (2.0f * fTempPerm908));
			fTempPerm909 = (fRec231[1] + fTempPerm908);
			fRec232[0] = (fRec232[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm909)) - fRec232[1])) / fTempPerm733)));
			fRec233[0] = (fRec233[1] + (2.0f * (fTempPerm907 / fTempPerm733)));
			fRec234 = fTempPerm909;
		}
		if ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))) {
			fTempPerm910 = (fTempPerm903 - (fRec236[1] + (fTempPerm725 * fRec237[1])));
			fTempPerm911 = ((fTempPerm711 * fTempPerm910) / fTempPerm726);
			fTempPerm912 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec237[1] + fTempPerm911)));
			fTempPerm913 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm912)));
			fTempPerm914 = ((fTempPerm711 * fTempPerm912) * fTempPerm913);
			fRec235 = (fRec236[1] + fTempPerm914);
			fRec236[0] = (fRec236[1] + (2.0f * fTempPerm914));
			fTempPerm915 = (fTempPerm912 * fTempPerm913);
			fRec237[0] = (fTempPerm911 + fTempPerm915);
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fTempPerm916 = (((fTempPerm708 * (((fTempPerm710 * fRec230) + (fTempPerm730 * fRec234)) + (fTempPerm740 * fRec235))) / fTempPerm747) + (fTempPerm748 * fTempPerm903));
			fVec37[0] = fTempPerm916;
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fTempPerm917 = (fTempPerm916 - fVec37[1]);
			fRec239[0] = ((std::fabs(fTempPerm917) < 0.5f) ? (fConst0 * fTempPerm917) : fRec239[1]);
		}
		if (iControl[67]) {
			fTempPerm918 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec239[0])))))));
			fTempPerm919 = (1.0f - fTempPerm918);
		}
		if (iControl[67] | iControl[60]) {
			fTempPerm920 = std::floor(fTempPerm916);
			fTempPerm921 = (fTempPerm916 - fTempPerm920);
			fVec38[0] = fTempPerm921;
			iTempPerm922 = (fTempPerm921 < 0.5f);
			iVec39[0] = iTempPerm922;
		}
		if (iControl[67]) {
			iTempPerm923 = ((iVec39[1] <= 0) & (iTempPerm922 > 0));
			fRec244[0] = ((fRec244[1] * float((1 - iTempPerm923))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm923))));
			fTempPerm924 = (fTempPerm918 + 1.0f);
			fRec243[0] = (0.0f - (((fTempPerm919 * fRec243[1]) - (fRec244[0] + fRec244[1])) / fTempPerm924));
			fRec242[0] = (0.0f - (((fTempPerm919 * fRec242[1]) - (fRec243[0] + fRec243[1])) / fTempPerm924));
			fRec241[0] = (0.0f - (((fTempPerm919 * fRec241[1]) - (fRec242[0] + fRec242[1])) / fTempPerm924));
			fRec240[0] = (0.0f - (((fTempPerm919 * fRec240[1]) - (fRec241[0] + fRec241[1])) / fTempPerm924));
			fRec238[0] = (0.0f - (((fRec238[1] * fTempPerm919) - (fRec240[0] + fRec240[1])) / fTempPerm924));
			fTempPerm925 = (std::sin((6.28318548f * fTempPerm916)) * ((fTempPerm887 * (fRec238[0] + -1.0f)) + 1.0f));
			fTempPerm926 = (((fTempPerm896 + (fTempPerm897 * (fRec221[0] - fTempPerm896))) * fTempPerm899) + (fTempPerm898 * (fTempPerm925 + (fTempPerm897 * (fRec238[0] - fTempPerm925)))));
		}
		if (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62])))) {
			fTempPerm927 = (fTempPerm885 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec222[0] - fConst7))))));
		}
		if (iControl[66] | (iControl[64] | (iControl[63] | iControl[62]))) {
			fTempPerm928 = (1.0f - fTempPerm927);
		}
		if (iControl[66]) {
			fTempPerm929 = ((0.75f * fTempPerm928) + (fTempPerm883 + (0.5f * fTempPerm927)));
			fTempPerm930 = std::floor(fTempPerm929);
		}
		if (iControl[66] | iControl[62]) {
			fTempPerm931 = (0.5f * fTempPerm928);
		}
		if (iControl[66]) {
			fTempPerm932 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm931));
			fTempPerm933 = (0.5f - fTempPerm932);
		}
		if (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62])))) {
			fTempPerm934 = (fTempPerm885 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec239[0] - fConst7))))));
		}
		if (iControl[66] | (iControl[64] | (iControl[63] | iControl[62]))) {
			fTempPerm935 = (1.0f - fTempPerm934);
		}
		if (iControl[66]) {
			fTempPerm936 = ((0.75f * fTempPerm935) + (fTempPerm916 + (0.5f * fTempPerm934)));
			fTempPerm937 = std::floor(fTempPerm936);
		}
		if (iControl[66] | iControl[62]) {
			fTempPerm938 = (0.5f * fTempPerm935);
		}
		if (iControl[66]) {
			fTempPerm939 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm938));
			fTempPerm940 = (0.5f - fTempPerm939);
			fTempPerm941 = ((fTempPerm899 * std::cos((6.28318548f * ((fTempPerm929 + std::min<float>((((fTempPerm929 - fTempPerm930) * fTempPerm933) / fTempPerm932), ((fTempPerm933 * (fTempPerm930 + (1.0f - fTempPerm929))) / (1.0f - fTempPerm932)))) - fTempPerm930)))) + (fTempPerm898 * std::cos((6.28318548f * ((fTempPerm936 + std::min<float>((((fTempPerm936 - fTempPerm937) * fTempPerm940) / fTempPerm939), ((fTempPerm940 * (fTempPerm937 + (1.0f - fTempPerm936))) / (1.0f - fTempPerm939)))) - fTempPerm937)))));
		}
		if (iControl[65]) {
			fTempPerm942 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm927));
			fTempPerm943 = (1.0f - fTempPerm942);
			fTempPerm944 = (0.25f * fTempPerm943);
			fTempPerm945 = (fTempPerm883 - (fTempPerm944 + std::floor((fTempPerm883 - fTempPerm944))));
			fTempPerm946 = (2.0f * fTempPerm945);
			fTempPerm947 = std::floor((fTempPerm946 + 1.0f));
			fTempPerm948 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm934));
			fTempPerm949 = (1.0f - fTempPerm948);
			fTempPerm950 = (0.25f * fTempPerm949);
			fTempPerm951 = (fTempPerm916 - (fTempPerm950 + std::floor((fTempPerm916 - fTempPerm950))));
			fTempPerm952 = (2.0f * fTempPerm951);
			fTempPerm953 = std::floor((fTempPerm952 + 1.0f));
			fTempPerm954 = ((fTempPerm899 * std::cos((3.14159274f * ((float((fTempPerm945 >= 0.5f)) + fTempPerm946) + (1.0f - (fTempPerm947 + std::min<float>((fTempPerm946 + (1.0f - fTempPerm947)), ((fTempPerm942 * (fTempPerm947 - fTempPerm946)) / fTempPerm943)))))))) + (fTempPerm898 * std::cos((3.14159274f * ((float((fTempPerm951 >= 0.5f)) + fTempPerm952) + (1.0f - (fTempPerm953 + std::min<float>((fTempPerm952 + (1.0f - fTempPerm953)), ((fTempPerm948 * (fTempPerm953 - fTempPerm952)) / fTempPerm949)))))))));
		}
		if (iControl[64]) {
			fTempPerm955 = (0.25f * fTempPerm928);
			fTempPerm956 = (fTempPerm955 + std::floor((fTempPerm883 - fTempPerm955)));
		}
		if (iControl[64] | (iControl[63] | (iControl[61] | iControl[59]))) {
			fTempPerm957 = (1.0f - fTempPerm883);
		}
		if (iControl[64]) {
			fTempPerm958 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm927));
			fTempPerm959 = (0.25f * fTempPerm935);
			fTempPerm960 = (fTempPerm959 + std::floor((fTempPerm916 - fTempPerm959)));
		}
		if (iControl[64] | (iControl[63] | (iControl[61] | iControl[59]))) {
			fTempPerm961 = (1.0f - fTempPerm916);
		}
		if (iControl[64]) {
			fTempPerm962 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm934));
			fTempPerm963 = ((fTempPerm899 * std::cos((6.28318548f * (fTempPerm883 - (fTempPerm956 + std::min<float>((fTempPerm883 - fTempPerm956), (((fTempPerm956 + fTempPerm957) * fTempPerm958) / (1.0f - fTempPerm958)))))))) + (fTempPerm898 * std::cos((6.28318548f * (fTempPerm916 - (fTempPerm960 + std::min<float>((fTempPerm916 - fTempPerm960), (((fTempPerm960 + fTempPerm961) * fTempPerm962) / (1.0f - fTempPerm962)))))))));
		}
		if (iControl[63]) {
			fTempPerm964 = ((0.125f * fTempPerm928) + (0.25f * fTempPerm927));
			fTempPerm965 = (fTempPerm964 + std::floor((fTempPerm883 - fTempPerm964)));
			fTempPerm966 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm927));
			fTempPerm967 = (0.49000001f * fTempPerm966);
			fTempPerm968 = ((0.125f * fTempPerm935) + (0.25f * fTempPerm934));
			fTempPerm969 = (fTempPerm968 + std::floor((fTempPerm916 - fTempPerm968)));
			fTempPerm970 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm934));
			fTempPerm971 = (0.49000001f * fTempPerm970);
			fTempPerm972 = ((fTempPerm899 * std::cos((12.566371f * ((fTempPerm883 + std::min<float>((0.49000001f * (((fTempPerm883 - fTempPerm965) * fTempPerm966) / (0.5f - fTempPerm967))), (0.49000001f * ((fTempPerm966 * (fTempPerm965 + fTempPerm957)) / (fTempPerm967 + 0.5f))))) - fTempPerm965)))) + (fTempPerm898 * std::cos((12.566371f * ((fTempPerm916 + std::min<float>((0.49000001f * (((fTempPerm916 - fTempPerm969) * fTempPerm970) / (0.5f - fTempPerm971))), (0.49000001f * ((fTempPerm970 * (fTempPerm969 + fTempPerm961)) / (fTempPerm971 + 0.5f))))) - fTempPerm969)))));
		}
		if (iControl[62]) {
			fTempPerm973 = std::min<float>(0.975000024f, fTempPerm927);
			fTempPerm974 = (0.25f * (1.0f - fTempPerm973));
			fTempPerm975 = (fTempPerm974 + (0.5f * fTempPerm973));
			fTempPerm976 = std::floor((fTempPerm883 - fTempPerm975));
			fTempPerm977 = (fTempPerm883 - (fTempPerm975 + fTempPerm976));
			fTempPerm978 = std::min<float>(0.975000024f, fTempPerm934);
			fTempPerm979 = (0.25f * (1.0f - fTempPerm978));
			fTempPerm980 = (fTempPerm979 + (0.5f * fTempPerm978));
			fTempPerm981 = std::floor((fTempPerm916 - fTempPerm980));
			fTempPerm982 = (fTempPerm916 - (fTempPerm980 + fTempPerm981));
			fTempPerm983 = ((fTempPerm899 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm977 < 0.5f) ? fTempPerm977 : (0.5f * (((fTempPerm883 - ((fTempPerm974 + fTempPerm976) + (0.5f * (fTempPerm973 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm931))) + 1.0f))))))) + (fTempPerm898 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm982 < 0.5f) ? fTempPerm982 : (0.5f * (((fTempPerm916 - ((fTempPerm979 + fTempPerm981) + (0.5f * (fTempPerm978 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm938))) + 1.0f))))))));
		}
		if (iControl[61] | iControl[59]) {
			fTempPerm984 = (fTempPerm883 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec222[0] * fControl[575]) * fTempPerm884))) / fRec222[0])));
			fTempPerm985 = (fTempPerm916 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec239[0] * fControl[575]) * fTempPerm884))) / fRec239[0])));
		}
		if (iControl[61]) {
			fTempPerm986 = ((fTempPerm899 * (((0.0f - fTempPerm957) * (1.0f - std::cos((6.28318548f * (fTempPerm984 + (1.0f - std::floor((fTempPerm984 + 1.0f)))))))) + 1.0f)) + (fTempPerm898 * (((0.0f - fTempPerm961) * (1.0f - std::cos((6.28318548f * (fTempPerm985 + (1.0f - std::floor((fTempPerm985 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[60]) {
			fTempPerm987 = (fTempPerm883 - (fTempPerm891 + fVec35[1]));
			fRec245[0] = ((std::fabs(fTempPerm987) < 0.5f) ? (fConst0 * fTempPerm987) : fRec245[1]);
			fTempPerm988 = (fTempPerm892 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec245[0] * fControl[575]) * fTempPerm884))) / fRec245[0])));
			fTempPerm989 = (fTempPerm916 - (fTempPerm920 + fVec38[1]));
			fRec246[0] = ((std::fabs(fTempPerm989) < 0.5f) ? (fConst0 * fTempPerm989) : fRec246[1]);
			fTempPerm990 = (fTempPerm921 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec246[0] * fControl[575]) * fTempPerm884))) / fRec246[0])));
			fTempPerm991 = ((fTempPerm899 * (((iTempPerm893 ? (2.0f * fTempPerm892) : (2.0f * (1.0f - fTempPerm892))) * (std::cos((6.28318548f * (fTempPerm988 + (1.0f - std::floor((fTempPerm988 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm898 * (((iTempPerm922 ? (2.0f * fTempPerm921) : (2.0f * (1.0f - fTempPerm921))) * (std::cos((6.28318548f * (fTempPerm990 + (1.0f - std::floor((fTempPerm990 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[59]) {
			fTempPerm992 = (((fTempPerm899 * std::min<float>(1.0f, (2.0f * fTempPerm957))) * std::sin((6.28318548f * (fTempPerm984 - std::floor(fTempPerm984))))) + ((fTempPerm898 * std::min<float>(1.0f, (2.0f * fTempPerm961))) * std::sin((6.28318548f * (fTempPerm985 - std::floor(fTempPerm985))))));
		}
		fRec172[0] = (((((((((fControl[275] * fTempPerm926) + (fControl[274] * fTempPerm941)) + (fControl[273] * fTempPerm954)) + (fControl[272] * fTempPerm963)) + (fControl[271] * fTempPerm972)) + (fControl[270] * fTempPerm983)) + (fControl[269] * fTempPerm986)) + (fControl[268] * fTempPerm991)) + (fControl[267] * fTempPerm992));
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm993 = (fRec174[1] * ((fTemp40 * (fTempPerm382 - fTempPerm383)) + (fTemp39 * (fTempPerm384 - fTempPerm385))));
			fTempPerm994 = (fRec173[1] * ((fTemp40 * (fTempPerm387 - fTempPerm388)) + (fTemp39 * (fTempPerm389 - fTempPerm390))));
			fTempPerm995 = (fRec172[1] * ((fTemp40 * (fTempPerm392 - fTempPerm393)) + (fTemp39 * (fTempPerm394 - fTempPerm395))));
			fTempPerm996 = ((fTemp40 * (fTempPerm397 - fTempPerm398)) + (fTemp39 * (fTempPerm399 - fTempPerm400)));
			fTempPerm997 = ((fTemp40 * (fTempPerm402 - fTempPerm403)) + (fTemp39 * (fTempPerm404 - fTempPerm405)));
			fTempPerm998 = std::floor(fTempPerm997);
			fTempPerm999 = (fTempPerm998 + float(((fTempPerm997 < 0.0f) & (fTempPerm997 != fTempPerm998))));
			fTempPerm1000 = (fTempPerm54 + (0.00390625f * (fTempPerm996 * std::pow(2.0f, (0.0f - fTempPerm999)))));
			iTempPerm1001 = int(fTempPerm999);
			fTempPerm1002 = (fRec171[1] * ((fTemp40 * (fTempPerm411 - fTempPerm412)) + (fTemp39 * (fTempPerm413 - fTempPerm414))));
			fTempPerm1003 = (fTempPerm993 + (fTempPerm994 + (fTempPerm995 + (std::fmod((256.0f * ((fTempPerm1000 - (fTempPerm68 + std::floor((fTempPerm1000 - fTempPerm68)))) * (((float((iTempPerm1001 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1001)))))) + float((iTempPerm1001 == 0))) + float(((iTempPerm1001 > 0) * int(std::pow(2.0f, float(iTempPerm1001)))))))), 1.0f) + fTempPerm1002))));
		}
		if ((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))) {
			fTempPerm1004 = (fRec247[1] + (fTempPerm711 * (fTempPerm1003 - fRec248[1])));
			fTempPerm1005 = (fTempPerm1004 / fTempPerm726);
			fRec247[0] = ((2.0f * fTempPerm1005) - fRec247[1]);
			fTempPerm1006 = (fRec248[1] + ((fTempPerm711 * fTempPerm1004) / fTempPerm726));
			fRec248[0] = ((2.0f * fTempPerm1006) - fRec248[1]);
			fRec249 = fTempPerm1006;
		}
		if ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))) {
			fTempPerm1007 = (fTempPerm711 * (fTempPerm1003 - fRec252[1]));
			fTempPerm1008 = ((fTempPerm711 * ((((fRec252[1] + ((fTempPerm1007 + (0.215215757f * (fTempPerm774 * fRec250[1]))) / fTempPerm733)) + (fTempPerm735 * fRec251[1])) / fTempPerm736) - fRec250[1])) / fTempPerm733);
			fRec250[0] = (fRec250[1] + (2.0f * fTempPerm1008));
			fTempPerm1009 = (fRec250[1] + fTempPerm1008);
			fRec251[0] = (fRec251[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm1009)) - fRec251[1])) / fTempPerm733)));
			fRec252[0] = (fRec252[1] + (2.0f * (fTempPerm1007 / fTempPerm733)));
			fRec253 = fTempPerm1009;
		}
		if ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))) {
			fTempPerm1010 = (fTempPerm1003 - (fRec255[1] + (fTempPerm725 * fRec256[1])));
			fTempPerm1011 = ((fTempPerm711 * fTempPerm1010) / fTempPerm726);
			fTempPerm1012 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec256[1] + fTempPerm1011)));
			fTempPerm1013 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm1012)));
			fTempPerm1014 = ((fTempPerm711 * fTempPerm1012) * fTempPerm1013);
			fRec254 = (fRec255[1] + fTempPerm1014);
			fRec255[0] = (fRec255[1] + (2.0f * fTempPerm1014));
			fTempPerm1015 = (fTempPerm1012 * fTempPerm1013);
			fRec256[0] = (fTempPerm1011 + fTempPerm1015);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm1016 = (((fTempPerm708 * (((fTempPerm710 * fRec249) + (fTempPerm730 * fRec253)) + (fTempPerm740 * fRec254))) / fTempPerm747) + (fTempPerm748 * fTempPerm1003));
			fVec40[0] = fTempPerm1016;
			fTempPerm1017 = ((fTemp40 * (fTempPerm430 - fTempPerm431)) + (fTemp39 * (fTempPerm432 - fTempPerm433)));
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
			fTempPerm1018 = (fControl[688] * fTempPerm1017);
		}
		if (iControl[58]) {
			fTempPerm1019 = (2.0f * fTempPerm1018);
			fTempPerm1020 = std::min<float>(1.0f, fTempPerm1019);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fTempPerm1021 = (fTempPerm1016 - fVec40[1]);
			fRec258[0] = ((std::fabs(fTempPerm1021) < 0.5f) ? (fConst0 * fTempPerm1021) : fRec258[1]);
		}
		if (iControl[58]) {
			fTempPerm1022 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec258[0])))))));
			fTempPerm1023 = (1.0f - fTempPerm1022);
		}
		if (iControl[58] | iControl[51]) {
			fTempPerm1024 = std::floor(fTempPerm1016);
			fTempPerm1025 = (fTempPerm1016 - fTempPerm1024);
			fVec41[0] = fTempPerm1025;
			iTempPerm1026 = (fTempPerm1025 < 0.5f);
			iVec42[0] = iTempPerm1026;
		}
		if (iControl[58]) {
			iTempPerm1027 = ((iVec42[1] <= 0) & (iTempPerm1026 > 0));
			fRec263[0] = ((fRec263[1] * float((1 - iTempPerm1027))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm1027))));
			fTempPerm1028 = (fTempPerm1022 + 1.0f);
			fRec262[0] = (0.0f - (((fTempPerm1023 * fRec262[1]) - (fRec263[0] + fRec263[1])) / fTempPerm1028));
			fRec261[0] = (0.0f - (((fTempPerm1023 * fRec261[1]) - (fRec262[0] + fRec262[1])) / fTempPerm1028));
			fRec260[0] = (0.0f - (((fTempPerm1023 * fRec260[1]) - (fRec261[0] + fRec261[1])) / fTempPerm1028));
			fRec259[0] = (0.0f - (((fTempPerm1023 * fRec259[1]) - (fRec260[0] + fRec260[1])) / fTempPerm1028));
			fRec257[0] = (0.0f - (((fRec257[1] * fTempPerm1023) - (fRec259[0] + fRec259[1])) / fTempPerm1028));
			fTempPerm1029 = (std::sin((6.28318548f * fTempPerm1016)) * ((fTempPerm1020 * (fRec257[0] + -1.0f)) + 1.0f));
			fTempPerm1030 = (std::max<float>(1.0f, fTempPerm1019) + -1.0f);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm1031 = std::fmod(std::fabs(fTempPerm997), 1.0f);
			fTempPerm1032 = (1.0f - fTempPerm1031);
			fTempPerm1033 = (fTempPerm998 + float((fTempPerm997 > 0.0f)));
			fTempPerm1034 = (fTempPerm54 + (0.00390625f * (fTempPerm996 * std::pow(2.0f, (0.0f - fTempPerm1033)))));
			iTempPerm1035 = int(fTempPerm1033);
			fTempPerm1036 = ((((fTempPerm1002 + fTempPerm995) + fTempPerm994) + fTempPerm993) + std::fmod((256.0f * ((fTempPerm1034 - (fTempPerm68 + std::floor((fTempPerm1034 - fTempPerm68)))) * (((float((iTempPerm1035 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1035)))))) + float((iTempPerm1035 == 0))) + float(((iTempPerm1035 > 0) * int(std::pow(2.0f, float(iTempPerm1035)))))))), 1.0f));
		}
		if ((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))) {
			fTempPerm1037 = (fRec264[1] + (fTempPerm711 * (fTempPerm1036 - fRec265[1])));
			fTempPerm1038 = (fTempPerm1037 / fTempPerm726);
			fRec264[0] = ((2.0f * fTempPerm1038) - fRec264[1]);
			fTempPerm1039 = (fRec265[1] + ((fTempPerm711 * fTempPerm1037) / fTempPerm726));
			fRec265[0] = ((2.0f * fTempPerm1039) - fRec265[1]);
			fRec266 = fTempPerm1039;
		}
		if ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))) {
			fTempPerm1040 = (fTempPerm711 * (fTempPerm1036 - fRec269[1]));
			fTempPerm1041 = ((fTempPerm711 * ((((fRec269[1] + ((fTempPerm1040 + (0.215215757f * (fTempPerm774 * fRec267[1]))) / fTempPerm733)) + (fTempPerm735 * fRec268[1])) / fTempPerm736) - fRec267[1])) / fTempPerm733);
			fRec267[0] = (fRec267[1] + (2.0f * fTempPerm1041));
			fTempPerm1042 = (fRec267[1] + fTempPerm1041);
			fRec268[0] = (fRec268[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm1042)) - fRec268[1])) / fTempPerm733)));
			fRec269[0] = (fRec269[1] + (2.0f * (fTempPerm1040 / fTempPerm733)));
			fRec270 = fTempPerm1042;
		}
		if ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))) {
			fTempPerm1043 = (fTempPerm1036 - (fRec272[1] + (fTempPerm725 * fRec273[1])));
			fTempPerm1044 = ((fTempPerm711 * fTempPerm1043) / fTempPerm726);
			fTempPerm1045 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec273[1] + fTempPerm1044)));
			fTempPerm1046 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm1045)));
			fTempPerm1047 = ((fTempPerm711 * fTempPerm1045) * fTempPerm1046);
			fRec271 = (fRec272[1] + fTempPerm1047);
			fRec272[0] = (fRec272[1] + (2.0f * fTempPerm1047));
			fTempPerm1048 = (fTempPerm1045 * fTempPerm1046);
			fRec273[0] = (fTempPerm1044 + fTempPerm1048);
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fTempPerm1049 = (((fTempPerm708 * (((fTempPerm710 * fRec266) + (fTempPerm730 * fRec270)) + (fTempPerm740 * fRec271))) / fTempPerm747) + (fTempPerm748 * fTempPerm1036));
			fVec43[0] = fTempPerm1049;
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fTempPerm1050 = (fTempPerm1049 - fVec43[1]);
			fRec275[0] = ((std::fabs(fTempPerm1050) < 0.5f) ? (fConst0 * fTempPerm1050) : fRec275[1]);
		}
		if (iControl[58]) {
			fTempPerm1051 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec275[0])))))));
			fTempPerm1052 = (1.0f - fTempPerm1051);
		}
		if (iControl[58] | iControl[51]) {
			fTempPerm1053 = std::floor(fTempPerm1049);
			fTempPerm1054 = (fTempPerm1049 - fTempPerm1053);
			fVec44[0] = fTempPerm1054;
			iTempPerm1055 = (fTempPerm1054 < 0.5f);
			iVec45[0] = iTempPerm1055;
		}
		if (iControl[58]) {
			iTempPerm1056 = ((iVec45[1] <= 0) & (iTempPerm1055 > 0));
			fRec280[0] = ((fRec280[1] * float((1 - iTempPerm1056))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm1056))));
			fTempPerm1057 = (fTempPerm1051 + 1.0f);
			fRec279[0] = (0.0f - (((fTempPerm1052 * fRec279[1]) - (fRec280[0] + fRec280[1])) / fTempPerm1057));
			fRec278[0] = (0.0f - (((fTempPerm1052 * fRec278[1]) - (fRec279[0] + fRec279[1])) / fTempPerm1057));
			fRec277[0] = (0.0f - (((fTempPerm1052 * fRec277[1]) - (fRec278[0] + fRec278[1])) / fTempPerm1057));
			fRec276[0] = (0.0f - (((fTempPerm1052 * fRec276[1]) - (fRec277[0] + fRec277[1])) / fTempPerm1057));
			fRec274[0] = (0.0f - (((fRec274[1] * fTempPerm1052) - (fRec276[0] + fRec276[1])) / fTempPerm1057));
			fTempPerm1058 = (std::sin((6.28318548f * fTempPerm1049)) * ((fTempPerm1020 * (fRec274[0] + -1.0f)) + 1.0f));
			fTempPerm1059 = (((fTempPerm1029 + (fTempPerm1030 * (fRec257[0] - fTempPerm1029))) * fTempPerm1032) + (fTempPerm1031 * (fTempPerm1058 + (fTempPerm1030 * (fRec274[0] - fTempPerm1058)))));
		}
		if (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53])))) {
			fTempPerm1060 = (fTempPerm1018 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec258[0] - fConst7))))));
		}
		if (iControl[57] | (iControl[55] | (iControl[54] | iControl[53]))) {
			fTempPerm1061 = (1.0f - fTempPerm1060);
		}
		if (iControl[57]) {
			fTempPerm1062 = ((0.75f * fTempPerm1061) + (fTempPerm1016 + (0.5f * fTempPerm1060)));
			fTempPerm1063 = std::floor(fTempPerm1062);
		}
		if (iControl[57] | iControl[53]) {
			fTempPerm1064 = (0.5f * fTempPerm1061);
		}
		if (iControl[57]) {
			fTempPerm1065 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1064));
			fTempPerm1066 = (0.5f - fTempPerm1065);
		}
		if (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53])))) {
			fTempPerm1067 = (fTempPerm1018 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec275[0] - fConst7))))));
		}
		if (iControl[57] | (iControl[55] | (iControl[54] | iControl[53]))) {
			fTempPerm1068 = (1.0f - fTempPerm1067);
		}
		if (iControl[57]) {
			fTempPerm1069 = ((0.75f * fTempPerm1068) + (fTempPerm1049 + (0.5f * fTempPerm1067)));
			fTempPerm1070 = std::floor(fTempPerm1069);
		}
		if (iControl[57] | iControl[53]) {
			fTempPerm1071 = (0.5f * fTempPerm1068);
		}
		if (iControl[57]) {
			fTempPerm1072 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1071));
			fTempPerm1073 = (0.5f - fTempPerm1072);
			fTempPerm1074 = ((fTempPerm1032 * std::cos((6.28318548f * ((fTempPerm1062 + std::min<float>((((fTempPerm1062 - fTempPerm1063) * fTempPerm1066) / fTempPerm1065), ((fTempPerm1066 * (fTempPerm1063 + (1.0f - fTempPerm1062))) / (1.0f - fTempPerm1065)))) - fTempPerm1063)))) + (fTempPerm1031 * std::cos((6.28318548f * ((fTempPerm1069 + std::min<float>((((fTempPerm1069 - fTempPerm1070) * fTempPerm1073) / fTempPerm1072), ((fTempPerm1073 * (fTempPerm1070 + (1.0f - fTempPerm1069))) / (1.0f - fTempPerm1072)))) - fTempPerm1070)))));
		}
		if (iControl[56]) {
			fTempPerm1075 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1060));
			fTempPerm1076 = (1.0f - fTempPerm1075);
			fTempPerm1077 = (0.25f * fTempPerm1076);
			fTempPerm1078 = (fTempPerm1016 - (fTempPerm1077 + std::floor((fTempPerm1016 - fTempPerm1077))));
			fTempPerm1079 = (2.0f * fTempPerm1078);
			fTempPerm1080 = std::floor((fTempPerm1079 + 1.0f));
			fTempPerm1081 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1067));
			fTempPerm1082 = (1.0f - fTempPerm1081);
			fTempPerm1083 = (0.25f * fTempPerm1082);
			fTempPerm1084 = (fTempPerm1049 - (fTempPerm1083 + std::floor((fTempPerm1049 - fTempPerm1083))));
			fTempPerm1085 = (2.0f * fTempPerm1084);
			fTempPerm1086 = std::floor((fTempPerm1085 + 1.0f));
			fTempPerm1087 = ((fTempPerm1032 * std::cos((3.14159274f * ((float((fTempPerm1078 >= 0.5f)) + fTempPerm1079) + (1.0f - (fTempPerm1080 + std::min<float>((fTempPerm1079 + (1.0f - fTempPerm1080)), ((fTempPerm1075 * (fTempPerm1080 - fTempPerm1079)) / fTempPerm1076)))))))) + (fTempPerm1031 * std::cos((3.14159274f * ((float((fTempPerm1084 >= 0.5f)) + fTempPerm1085) + (1.0f - (fTempPerm1086 + std::min<float>((fTempPerm1085 + (1.0f - fTempPerm1086)), ((fTempPerm1081 * (fTempPerm1086 - fTempPerm1085)) / fTempPerm1082)))))))));
		}
		if (iControl[55]) {
			fTempPerm1088 = (0.25f * fTempPerm1061);
			fTempPerm1089 = (fTempPerm1088 + std::floor((fTempPerm1016 - fTempPerm1088)));
		}
		if (iControl[55] | (iControl[54] | (iControl[52] | iControl[50]))) {
			fTempPerm1090 = (1.0f - fTempPerm1016);
		}
		if (iControl[55]) {
			fTempPerm1091 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1060));
			fTempPerm1092 = (0.25f * fTempPerm1068);
			fTempPerm1093 = (fTempPerm1092 + std::floor((fTempPerm1049 - fTempPerm1092)));
		}
		if (iControl[55] | (iControl[54] | (iControl[52] | iControl[50]))) {
			fTempPerm1094 = (1.0f - fTempPerm1049);
		}
		if (iControl[55]) {
			fTempPerm1095 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1067));
			fTempPerm1096 = ((fTempPerm1032 * std::cos((6.28318548f * (fTempPerm1016 - (fTempPerm1089 + std::min<float>((fTempPerm1016 - fTempPerm1089), (((fTempPerm1089 + fTempPerm1090) * fTempPerm1091) / (1.0f - fTempPerm1091)))))))) + (fTempPerm1031 * std::cos((6.28318548f * (fTempPerm1049 - (fTempPerm1093 + std::min<float>((fTempPerm1049 - fTempPerm1093), (((fTempPerm1093 + fTempPerm1094) * fTempPerm1095) / (1.0f - fTempPerm1095)))))))));
		}
		if (iControl[54]) {
			fTempPerm1097 = ((0.125f * fTempPerm1061) + (0.25f * fTempPerm1060));
			fTempPerm1098 = (fTempPerm1097 + std::floor((fTempPerm1016 - fTempPerm1097)));
			fTempPerm1099 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1060));
			fTempPerm1100 = (0.49000001f * fTempPerm1099);
			fTempPerm1101 = ((0.125f * fTempPerm1068) + (0.25f * fTempPerm1067));
			fTempPerm1102 = (fTempPerm1101 + std::floor((fTempPerm1049 - fTempPerm1101)));
			fTempPerm1103 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1067));
			fTempPerm1104 = (0.49000001f * fTempPerm1103);
			fTempPerm1105 = ((fTempPerm1032 * std::cos((12.566371f * ((fTempPerm1016 + std::min<float>((0.49000001f * (((fTempPerm1016 - fTempPerm1098) * fTempPerm1099) / (0.5f - fTempPerm1100))), (0.49000001f * ((fTempPerm1099 * (fTempPerm1098 + fTempPerm1090)) / (fTempPerm1100 + 0.5f))))) - fTempPerm1098)))) + (fTempPerm1031 * std::cos((12.566371f * ((fTempPerm1049 + std::min<float>((0.49000001f * (((fTempPerm1049 - fTempPerm1102) * fTempPerm1103) / (0.5f - fTempPerm1104))), (0.49000001f * ((fTempPerm1103 * (fTempPerm1102 + fTempPerm1094)) / (fTempPerm1104 + 0.5f))))) - fTempPerm1102)))));
		}
		if (iControl[53]) {
			fTempPerm1106 = std::min<float>(0.975000024f, fTempPerm1060);
			fTempPerm1107 = (0.25f * (1.0f - fTempPerm1106));
			fTempPerm1108 = (fTempPerm1107 + (0.5f * fTempPerm1106));
			fTempPerm1109 = std::floor((fTempPerm1016 - fTempPerm1108));
			fTempPerm1110 = (fTempPerm1016 - (fTempPerm1108 + fTempPerm1109));
			fTempPerm1111 = std::min<float>(0.975000024f, fTempPerm1067);
			fTempPerm1112 = (0.25f * (1.0f - fTempPerm1111));
			fTempPerm1113 = (fTempPerm1112 + (0.5f * fTempPerm1111));
			fTempPerm1114 = std::floor((fTempPerm1049 - fTempPerm1113));
			fTempPerm1115 = (fTempPerm1049 - (fTempPerm1113 + fTempPerm1114));
			fTempPerm1116 = ((fTempPerm1032 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm1110 < 0.5f) ? fTempPerm1110 : (0.5f * (((fTempPerm1016 - ((fTempPerm1107 + fTempPerm1109) + (0.5f * (fTempPerm1106 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1064))) + 1.0f))))))) + (fTempPerm1031 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm1115 < 0.5f) ? fTempPerm1115 : (0.5f * (((fTempPerm1049 - ((fTempPerm1112 + fTempPerm1114) + (0.5f * (fTempPerm1111 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1071))) + 1.0f))))))));
		}
		if (iControl[52] | iControl[50]) {
			fTempPerm1117 = (fTempPerm1016 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec258[0] * fControl[688]) * fTempPerm1017))) / fRec258[0])));
			fTempPerm1118 = (fTempPerm1049 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec275[0] * fControl[688]) * fTempPerm1017))) / fRec275[0])));
		}
		if (iControl[52]) {
			fTempPerm1119 = ((fTempPerm1032 * (((0.0f - fTempPerm1090) * (1.0f - std::cos((6.28318548f * (fTempPerm1117 + (1.0f - std::floor((fTempPerm1117 + 1.0f)))))))) + 1.0f)) + (fTempPerm1031 * (((0.0f - fTempPerm1094) * (1.0f - std::cos((6.28318548f * (fTempPerm1118 + (1.0f - std::floor((fTempPerm1118 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[51]) {
			fTempPerm1120 = (fTempPerm1016 - (fTempPerm1024 + fVec41[1]));
			fRec281[0] = ((std::fabs(fTempPerm1120) < 0.5f) ? (fConst0 * fTempPerm1120) : fRec281[1]);
			fTempPerm1121 = (fTempPerm1025 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec281[0] * fControl[688]) * fTempPerm1017))) / fRec281[0])));
			fTempPerm1122 = (fTempPerm1049 - (fTempPerm1053 + fVec44[1]));
			fRec282[0] = ((std::fabs(fTempPerm1122) < 0.5f) ? (fConst0 * fTempPerm1122) : fRec282[1]);
			fTempPerm1123 = (fTempPerm1054 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec282[0] * fControl[688]) * fTempPerm1017))) / fRec282[0])));
			fTempPerm1124 = ((fTempPerm1032 * (((iTempPerm1026 ? (2.0f * fTempPerm1025) : (2.0f * (1.0f - fTempPerm1025))) * (std::cos((6.28318548f * (fTempPerm1121 + (1.0f - std::floor((fTempPerm1121 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm1031 * (((iTempPerm1055 ? (2.0f * fTempPerm1054) : (2.0f * (1.0f - fTempPerm1054))) * (std::cos((6.28318548f * (fTempPerm1123 + (1.0f - std::floor((fTempPerm1123 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[50]) {
			fTempPerm1125 = (((fTempPerm1032 * std::min<float>(1.0f, (2.0f * fTempPerm1090))) * std::sin((6.28318548f * (fTempPerm1117 - std::floor(fTempPerm1117))))) + ((fTempPerm1031 * std::min<float>(1.0f, (2.0f * fTempPerm1094))) * std::sin((6.28318548f * (fTempPerm1118 - std::floor(fTempPerm1118))))));
		}
		fRec173[0] = (((((((((fControl[264] * fTempPerm1059) + (fControl[263] * fTempPerm1074)) + (fControl[262] * fTempPerm1087)) + (fControl[261] * fTempPerm1096)) + (fControl[260] * fTempPerm1105)) + (fControl[259] * fTempPerm1116)) + (fControl[258] * fTempPerm1119)) + (fControl[257] * fTempPerm1124)) + (fControl[256] * fTempPerm1125));
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm1126 = (fRec174[1] * ((fTemp40 * (fTempPerm543 - fTempPerm544)) + (fTemp39 * (fTempPerm545 - fTempPerm546))));
			fTempPerm1127 = (fRec173[1] * ((fTemp40 * (fTempPerm548 - fTempPerm549)) + (fTemp39 * (fTempPerm550 - fTempPerm551))));
			fTempPerm1128 = (fRec172[1] * ((fTemp40 * (fTempPerm553 - fTempPerm554)) + (fTemp39 * (fTempPerm555 - fTempPerm556))));
			fTempPerm1129 = ((fTemp40 * (fTempPerm558 - fTempPerm559)) + (fTemp39 * (fTempPerm560 - fTempPerm561)));
			fTempPerm1130 = ((fTemp40 * (fTempPerm563 - fTempPerm564)) + (fTemp39 * (fTempPerm565 - fTempPerm566)));
			fTempPerm1131 = std::floor(fTempPerm1130);
			fTempPerm1132 = (fTempPerm1131 + float(((fTempPerm1130 < 0.0f) & (fTempPerm1130 != fTempPerm1131))));
			fTempPerm1133 = (fTempPerm54 + (0.00390625f * (fTempPerm1129 * std::pow(2.0f, (0.0f - fTempPerm1132)))));
			iTempPerm1134 = int(fTempPerm1132);
			fTempPerm1135 = (fRec171[1] * ((fTemp40 * (fTempPerm572 - fTempPerm573)) + (fTemp39 * (fTempPerm574 - fTempPerm575))));
			fTempPerm1136 = (fTempPerm1126 + (fTempPerm1127 + (fTempPerm1128 + (std::fmod((256.0f * ((fTempPerm1133 - (fTempPerm68 + std::floor((fTempPerm1133 - fTempPerm68)))) * (((float((iTempPerm1134 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1134)))))) + float((iTempPerm1134 == 0))) + float(((iTempPerm1134 > 0) * int(std::pow(2.0f, float(iTempPerm1134)))))))), 1.0f) + fTempPerm1135))));
		}
		if ((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))) {
			fTempPerm1137 = (fRec283[1] + (fTempPerm711 * (fTempPerm1136 - fRec284[1])));
			fTempPerm1138 = (fTempPerm1137 / fTempPerm726);
			fRec283[0] = ((2.0f * fTempPerm1138) - fRec283[1]);
			fTempPerm1139 = (fRec284[1] + ((fTempPerm711 * fTempPerm1137) / fTempPerm726));
			fRec284[0] = ((2.0f * fTempPerm1139) - fRec284[1]);
			fRec285 = fTempPerm1139;
		}
		if ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))) {
			fTempPerm1140 = (fTempPerm711 * (fTempPerm1136 - fRec288[1]));
			fTempPerm1141 = ((fTempPerm711 * ((((fRec288[1] + ((fTempPerm1140 + (0.215215757f * (fTempPerm774 * fRec286[1]))) / fTempPerm733)) + (fTempPerm735 * fRec287[1])) / fTempPerm736) - fRec286[1])) / fTempPerm733);
			fRec286[0] = (fRec286[1] + (2.0f * fTempPerm1141));
			fTempPerm1142 = (fRec286[1] + fTempPerm1141);
			fRec287[0] = (fRec287[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm1142)) - fRec287[1])) / fTempPerm733)));
			fRec288[0] = (fRec288[1] + (2.0f * (fTempPerm1140 / fTempPerm733)));
			fRec289 = fTempPerm1142;
		}
		if ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))) {
			fTempPerm1143 = (fTempPerm1136 - (fRec291[1] + (fTempPerm725 * fRec292[1])));
			fTempPerm1144 = ((fTempPerm711 * fTempPerm1143) / fTempPerm726);
			fTempPerm1145 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec292[1] + fTempPerm1144)));
			fTempPerm1146 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm1145)));
			fTempPerm1147 = ((fTempPerm711 * fTempPerm1145) * fTempPerm1146);
			fRec290 = (fRec291[1] + fTempPerm1147);
			fRec291[0] = (fRec291[1] + (2.0f * fTempPerm1147));
			fTempPerm1148 = (fTempPerm1145 * fTempPerm1146);
			fRec292[0] = (fTempPerm1144 + fTempPerm1148);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm1149 = (((fTempPerm708 * (((fTempPerm710 * fRec285) + (fTempPerm730 * fRec289)) + (fTempPerm740 * fRec290))) / fTempPerm747) + (fTempPerm748 * fTempPerm1136));
			fVec46[0] = fTempPerm1149;
			fTempPerm1150 = ((fTemp40 * (fTempPerm591 - fTempPerm592)) + (fTemp39 * (fTempPerm593 - fTempPerm594)));
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
			fTempPerm1151 = (fControl[801] * fTempPerm1150);
		}
		if (iControl[49]) {
			fTempPerm1152 = (2.0f * fTempPerm1151);
			fTempPerm1153 = std::min<float>(1.0f, fTempPerm1152);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fTempPerm1154 = (fTempPerm1149 - fVec46[1]);
			fRec294[0] = ((std::fabs(fTempPerm1154) < 0.5f) ? (fConst0 * fTempPerm1154) : fRec294[1]);
		}
		if (iControl[49]) {
			fTempPerm1155 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec294[0])))))));
			fTempPerm1156 = (1.0f - fTempPerm1155);
		}
		if (iControl[49] | iControl[42]) {
			fTempPerm1157 = std::floor(fTempPerm1149);
			fTempPerm1158 = (fTempPerm1149 - fTempPerm1157);
			fVec47[0] = fTempPerm1158;
			iTempPerm1159 = (fTempPerm1158 < 0.5f);
			iVec48[0] = iTempPerm1159;
		}
		if (iControl[49]) {
			iTempPerm1160 = ((iVec48[1] <= 0) & (iTempPerm1159 > 0));
			fRec299[0] = ((fRec299[1] * float((1 - iTempPerm1160))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm1160))));
			fTempPerm1161 = (fTempPerm1155 + 1.0f);
			fRec298[0] = (0.0f - (((fTempPerm1156 * fRec298[1]) - (fRec299[0] + fRec299[1])) / fTempPerm1161));
			fRec297[0] = (0.0f - (((fTempPerm1156 * fRec297[1]) - (fRec298[0] + fRec298[1])) / fTempPerm1161));
			fRec296[0] = (0.0f - (((fTempPerm1156 * fRec296[1]) - (fRec297[0] + fRec297[1])) / fTempPerm1161));
			fRec295[0] = (0.0f - (((fTempPerm1156 * fRec295[1]) - (fRec296[0] + fRec296[1])) / fTempPerm1161));
			fRec293[0] = (0.0f - (((fRec293[1] * fTempPerm1156) - (fRec295[0] + fRec295[1])) / fTempPerm1161));
			fTempPerm1162 = (std::sin((6.28318548f * fTempPerm1149)) * ((fTempPerm1153 * (fRec293[0] + -1.0f)) + 1.0f));
			fTempPerm1163 = (std::max<float>(1.0f, fTempPerm1152) + -1.0f);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm1164 = std::fmod(std::fabs(fTempPerm1130), 1.0f);
			fTempPerm1165 = (1.0f - fTempPerm1164);
			fTempPerm1166 = (fTempPerm1131 + float((fTempPerm1130 > 0.0f)));
			fTempPerm1167 = (fTempPerm54 + (0.00390625f * (fTempPerm1129 * std::pow(2.0f, (0.0f - fTempPerm1166)))));
			iTempPerm1168 = int(fTempPerm1166);
			fTempPerm1169 = ((((fTempPerm1135 + fTempPerm1128) + fTempPerm1127) + fTempPerm1126) + std::fmod((256.0f * ((fTempPerm1167 - (fTempPerm68 + std::floor((fTempPerm1167 - fTempPerm68)))) * (((float((iTempPerm1168 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1168)))))) + float((iTempPerm1168 == 0))) + float(((iTempPerm1168 > 0) * int(std::pow(2.0f, float(iTempPerm1168)))))))), 1.0f));
		}
		if ((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))) {
			fTempPerm1170 = (fRec300[1] + (fTempPerm711 * (fTempPerm1169 - fRec301[1])));
			fTempPerm1171 = (fTempPerm1170 / fTempPerm726);
			fRec300[0] = ((2.0f * fTempPerm1171) - fRec300[1]);
			fTempPerm1172 = (fRec301[1] + ((fTempPerm711 * fTempPerm1170) / fTempPerm726));
			fRec301[0] = ((2.0f * fTempPerm1172) - fRec301[1]);
			fRec302 = fTempPerm1172;
		}
		if ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))) {
			fTempPerm1173 = (fTempPerm711 * (fTempPerm1169 - fRec305[1]));
			fTempPerm1174 = ((fTempPerm711 * ((((fRec305[1] + ((fTempPerm1173 + (0.215215757f * (fTempPerm774 * fRec303[1]))) / fTempPerm733)) + (fTempPerm735 * fRec304[1])) / fTempPerm736) - fRec303[1])) / fTempPerm733);
			fRec303[0] = (fRec303[1] + (2.0f * fTempPerm1174));
			fTempPerm1175 = (fRec303[1] + fTempPerm1174);
			fRec304[0] = (fRec304[1] + (2.0f * ((fTempPerm711 * ((0.215215757f * (fTempPerm732 * fTempPerm1175)) - fRec304[1])) / fTempPerm733)));
			fRec305[0] = (fRec305[1] + (2.0f * (fTempPerm1173 / fTempPerm733)));
			fRec306 = fTempPerm1175;
		}
		if ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))) {
			fTempPerm1176 = (fTempPerm1169 - (fRec308[1] + (fTempPerm725 * fRec309[1])));
			fTempPerm1177 = ((fTempPerm711 * fTempPerm1176) / fTempPerm726);
			fTempPerm1178 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec309[1] + fTempPerm1177)));
			fTempPerm1179 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTempPerm1178)));
			fTempPerm1180 = ((fTempPerm711 * fTempPerm1178) * fTempPerm1179);
			fRec307 = (fRec308[1] + fTempPerm1180);
			fRec308[0] = (fRec308[1] + (2.0f * fTempPerm1180));
			fTempPerm1181 = (fTempPerm1178 * fTempPerm1179);
			fRec309[0] = (fTempPerm1177 + fTempPerm1181);
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fTempPerm1182 = (((fTempPerm708 * (((fTempPerm710 * fRec302) + (fTempPerm730 * fRec306)) + (fTempPerm740 * fRec307))) / fTempPerm747) + (fTempPerm748 * fTempPerm1169));
			fVec49[0] = fTempPerm1182;
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fTempPerm1183 = (fTempPerm1182 - fVec49[1]);
			fRec311[0] = ((std::fabs(fTempPerm1183) < 0.5f) ? (fConst0 * fTempPerm1183) : fRec311[1]);
		}
		if (iControl[49]) {
			fTempPerm1184 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec311[0])))))));
			fTempPerm1185 = (1.0f - fTempPerm1184);
		}
		if (iControl[49] | iControl[42]) {
			fTempPerm1186 = std::floor(fTempPerm1182);
			fTempPerm1187 = (fTempPerm1182 - fTempPerm1186);
			fVec50[0] = fTempPerm1187;
			iTempPerm1188 = (fTempPerm1187 < 0.5f);
			iVec51[0] = iTempPerm1188;
		}
		if (iControl[49]) {
			iTempPerm1189 = ((iVec51[1] <= 0) & (iTempPerm1188 > 0));
			fRec316[0] = ((fRec316[1] * float((1 - iTempPerm1189))) + (4.65661287e-10f * (fTemp36 * float(iTempPerm1189))));
			fTempPerm1190 = (fTempPerm1184 + 1.0f);
			fRec315[0] = (0.0f - (((fTempPerm1185 * fRec315[1]) - (fRec316[0] + fRec316[1])) / fTempPerm1190));
			fRec314[0] = (0.0f - (((fTempPerm1185 * fRec314[1]) - (fRec315[0] + fRec315[1])) / fTempPerm1190));
			fRec313[0] = (0.0f - (((fTempPerm1185 * fRec313[1]) - (fRec314[0] + fRec314[1])) / fTempPerm1190));
			fRec312[0] = (0.0f - (((fTempPerm1185 * fRec312[1]) - (fRec313[0] + fRec313[1])) / fTempPerm1190));
			fRec310[0] = (0.0f - (((fRec310[1] * fTempPerm1185) - (fRec312[0] + fRec312[1])) / fTempPerm1190));
			fTempPerm1191 = (std::sin((6.28318548f * fTempPerm1182)) * ((fTempPerm1153 * (fRec310[0] + -1.0f)) + 1.0f));
			fTempPerm1192 = (((fTempPerm1162 + (fTempPerm1163 * (fRec293[0] - fTempPerm1162))) * fTempPerm1165) + (fTempPerm1164 * (fTempPerm1191 + (fTempPerm1163 * (fRec310[0] - fTempPerm1191)))));
		}
		if (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44])))) {
			fTempPerm1193 = (fTempPerm1151 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec294[0] - fConst7))))));
		}
		if (iControl[48] | (iControl[46] | (iControl[45] | iControl[44]))) {
			fTempPerm1194 = (1.0f - fTempPerm1193);
		}
		if (iControl[48]) {
			fTempPerm1195 = ((0.75f * fTempPerm1194) + (fTempPerm1149 + (0.5f * fTempPerm1193)));
			fTempPerm1196 = std::floor(fTempPerm1195);
		}
		if (iControl[48] | iControl[44]) {
			fTempPerm1197 = (0.5f * fTempPerm1194);
		}
		if (iControl[48]) {
			fTempPerm1198 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1197));
			fTempPerm1199 = (0.5f - fTempPerm1198);
		}
		if (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44])))) {
			fTempPerm1200 = (fTempPerm1151 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec311[0] - fConst7))))));
		}
		if (iControl[48] | (iControl[46] | (iControl[45] | iControl[44]))) {
			fTempPerm1201 = (1.0f - fTempPerm1200);
		}
		if (iControl[48]) {
			fTempPerm1202 = ((0.75f * fTempPerm1201) + (fTempPerm1182 + (0.5f * fTempPerm1200)));
			fTempPerm1203 = std::floor(fTempPerm1202);
		}
		if (iControl[48] | iControl[44]) {
			fTempPerm1204 = (0.5f * fTempPerm1201);
		}
		if (iControl[48]) {
			fTempPerm1205 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1204));
			fTempPerm1206 = (0.5f - fTempPerm1205);
			fTempPerm1207 = ((fTempPerm1165 * std::cos((6.28318548f * ((fTempPerm1195 + std::min<float>((((fTempPerm1195 - fTempPerm1196) * fTempPerm1199) / fTempPerm1198), ((fTempPerm1199 * (fTempPerm1196 + (1.0f - fTempPerm1195))) / (1.0f - fTempPerm1198)))) - fTempPerm1196)))) + (fTempPerm1164 * std::cos((6.28318548f * ((fTempPerm1202 + std::min<float>((((fTempPerm1202 - fTempPerm1203) * fTempPerm1206) / fTempPerm1205), ((fTempPerm1206 * (fTempPerm1203 + (1.0f - fTempPerm1202))) / (1.0f - fTempPerm1205)))) - fTempPerm1203)))));
		}
		if (iControl[47]) {
			fTempPerm1208 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1193));
			fTempPerm1209 = (1.0f - fTempPerm1208);
			fTempPerm1210 = (0.25f * fTempPerm1209);
			fTempPerm1211 = (fTempPerm1149 - (fTempPerm1210 + std::floor((fTempPerm1149 - fTempPerm1210))));
			fTempPerm1212 = (2.0f * fTempPerm1211);
			fTempPerm1213 = std::floor((fTempPerm1212 + 1.0f));
			fTempPerm1214 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1200));
			fTempPerm1215 = (1.0f - fTempPerm1214);
			fTempPerm1216 = (0.25f * fTempPerm1215);
			fTempPerm1217 = (fTempPerm1182 - (fTempPerm1216 + std::floor((fTempPerm1182 - fTempPerm1216))));
			fTempPerm1218 = (2.0f * fTempPerm1217);
			fTempPerm1219 = std::floor((fTempPerm1218 + 1.0f));
			fTempPerm1220 = ((fTempPerm1165 * std::cos((3.14159274f * ((float((fTempPerm1211 >= 0.5f)) + fTempPerm1212) + (1.0f - (fTempPerm1213 + std::min<float>((fTempPerm1212 + (1.0f - fTempPerm1213)), ((fTempPerm1208 * (fTempPerm1213 - fTempPerm1212)) / fTempPerm1209)))))))) + (fTempPerm1164 * std::cos((3.14159274f * ((float((fTempPerm1217 >= 0.5f)) + fTempPerm1218) + (1.0f - (fTempPerm1219 + std::min<float>((fTempPerm1218 + (1.0f - fTempPerm1219)), ((fTempPerm1214 * (fTempPerm1219 - fTempPerm1218)) / fTempPerm1215)))))))));
		}
		if (iControl[46]) {
			fTempPerm1221 = (0.25f * fTempPerm1194);
			fTempPerm1222 = (fTempPerm1221 + std::floor((fTempPerm1149 - fTempPerm1221)));
		}
		if (iControl[46] | (iControl[45] | (iControl[43] | iControl[41]))) {
			fTempPerm1223 = (1.0f - fTempPerm1149);
		}
		if (iControl[46]) {
			fTempPerm1224 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1193));
			fTempPerm1225 = (0.25f * fTempPerm1201);
			fTempPerm1226 = (fTempPerm1225 + std::floor((fTempPerm1182 - fTempPerm1225)));
		}
		if (iControl[46] | (iControl[45] | (iControl[43] | iControl[41]))) {
			fTempPerm1227 = (1.0f - fTempPerm1182);
		}
		if (iControl[46]) {
			fTempPerm1228 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1200));
			fTempPerm1229 = ((fTempPerm1165 * std::cos((6.28318548f * (fTempPerm1149 - (fTempPerm1222 + std::min<float>((fTempPerm1149 - fTempPerm1222), (((fTempPerm1222 + fTempPerm1223) * fTempPerm1224) / (1.0f - fTempPerm1224)))))))) + (fTempPerm1164 * std::cos((6.28318548f * (fTempPerm1182 - (fTempPerm1226 + std::min<float>((fTempPerm1182 - fTempPerm1226), (((fTempPerm1226 + fTempPerm1227) * fTempPerm1228) / (1.0f - fTempPerm1228)))))))));
		}
		if (iControl[45]) {
			fTempPerm1230 = ((0.125f * fTempPerm1194) + (0.25f * fTempPerm1193));
			fTempPerm1231 = (fTempPerm1230 + std::floor((fTempPerm1149 - fTempPerm1230)));
			fTempPerm1232 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1193));
			fTempPerm1233 = (0.49000001f * fTempPerm1232);
			fTempPerm1234 = ((0.125f * fTempPerm1201) + (0.25f * fTempPerm1200));
			fTempPerm1235 = (fTempPerm1234 + std::floor((fTempPerm1182 - fTempPerm1234)));
			fTempPerm1236 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1200));
			fTempPerm1237 = (0.49000001f * fTempPerm1236);
			fTempPerm1238 = ((fTempPerm1165 * std::cos((12.566371f * ((fTempPerm1149 + std::min<float>((0.49000001f * (((fTempPerm1149 - fTempPerm1231) * fTempPerm1232) / (0.5f - fTempPerm1233))), (0.49000001f * ((fTempPerm1232 * (fTempPerm1231 + fTempPerm1223)) / (fTempPerm1233 + 0.5f))))) - fTempPerm1231)))) + (fTempPerm1164 * std::cos((12.566371f * ((fTempPerm1182 + std::min<float>((0.49000001f * (((fTempPerm1182 - fTempPerm1235) * fTempPerm1236) / (0.5f - fTempPerm1237))), (0.49000001f * ((fTempPerm1236 * (fTempPerm1235 + fTempPerm1227)) / (fTempPerm1237 + 0.5f))))) - fTempPerm1235)))));
		}
		if (iControl[44]) {
			fTempPerm1239 = std::min<float>(0.975000024f, fTempPerm1193);
			fTempPerm1240 = (0.25f * (1.0f - fTempPerm1239));
			fTempPerm1241 = (fTempPerm1240 + (0.5f * fTempPerm1239));
			fTempPerm1242 = std::floor((fTempPerm1149 - fTempPerm1241));
			fTempPerm1243 = (fTempPerm1149 - (fTempPerm1241 + fTempPerm1242));
			fTempPerm1244 = std::min<float>(0.975000024f, fTempPerm1200);
			fTempPerm1245 = (0.25f * (1.0f - fTempPerm1244));
			fTempPerm1246 = (fTempPerm1245 + (0.5f * fTempPerm1244));
			fTempPerm1247 = std::floor((fTempPerm1182 - fTempPerm1246));
			fTempPerm1248 = (fTempPerm1182 - (fTempPerm1246 + fTempPerm1247));
			fTempPerm1249 = ((fTempPerm1165 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm1243 < 0.5f) ? fTempPerm1243 : (0.5f * (((fTempPerm1149 - ((fTempPerm1240 + fTempPerm1242) + (0.5f * (fTempPerm1239 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1197))) + 1.0f))))))) + (fTempPerm1164 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTempPerm1248 < 0.5f) ? fTempPerm1248 : (0.5f * (((fTempPerm1182 - ((fTempPerm1245 + fTempPerm1247) + (0.5f * (fTempPerm1244 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1204))) + 1.0f))))))));
		}
		if (iControl[43] | iControl[41]) {
			fTempPerm1250 = (fTempPerm1149 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec294[0] * fControl[801]) * fTempPerm1150))) / fRec294[0])));
			fTempPerm1251 = (fTempPerm1182 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec311[0] * fControl[801]) * fTempPerm1150))) / fRec311[0])));
		}
		if (iControl[43]) {
			fTempPerm1252 = ((fTempPerm1165 * (((0.0f - fTempPerm1223) * (1.0f - std::cos((6.28318548f * (fTempPerm1250 + (1.0f - std::floor((fTempPerm1250 + 1.0f)))))))) + 1.0f)) + (fTempPerm1164 * (((0.0f - fTempPerm1227) * (1.0f - std::cos((6.28318548f * (fTempPerm1251 + (1.0f - std::floor((fTempPerm1251 + 1.0f)))))))) + 1.0f)));
		}
		if (iControl[42]) {
			fTempPerm1253 = (fTempPerm1149 - (fTempPerm1157 + fVec47[1]));
			fRec317[0] = ((std::fabs(fTempPerm1253) < 0.5f) ? (fConst0 * fTempPerm1253) : fRec317[1]);
			fTempPerm1254 = (fTempPerm1158 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec317[0] * fControl[801]) * fTempPerm1150))) / fRec317[0])));
			fTempPerm1255 = (fTempPerm1182 - (fTempPerm1186 + fVec50[1]));
			fRec318[0] = ((std::fabs(fTempPerm1255) < 0.5f) ? (fConst0 * fTempPerm1255) : fRec318[1]);
			fTempPerm1256 = (fTempPerm1187 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec318[0] * fControl[801]) * fTempPerm1150))) / fRec318[0])));
			fTempPerm1257 = ((fTempPerm1165 * (((iTempPerm1159 ? (2.0f * fTempPerm1158) : (2.0f * (1.0f - fTempPerm1158))) * (std::cos((6.28318548f * (fTempPerm1254 + (1.0f - std::floor((fTempPerm1254 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTempPerm1164 * (((iTempPerm1188 ? (2.0f * fTempPerm1187) : (2.0f * (1.0f - fTempPerm1187))) * (std::cos((6.28318548f * (fTempPerm1256 + (1.0f - std::floor((fTempPerm1256 + 1.0f)))))) + 1.0f)) + -1.0f)));
		}
		if (iControl[41]) {
			fTempPerm1258 = (((fTempPerm1165 * std::min<float>(1.0f, (2.0f * fTempPerm1223))) * std::sin((6.28318548f * (fTempPerm1250 - std::floor(fTempPerm1250))))) + ((fTempPerm1164 * std::min<float>(1.0f, (2.0f * fTempPerm1227))) * std::sin((6.28318548f * (fTempPerm1251 - std::floor(fTempPerm1251))))));
		}
		fRec174[0] = (((((((((fControl[253] * fTempPerm1192) + (fControl[252] * fTempPerm1207)) + (fControl[251] * fTempPerm1220)) + (fControl[250] * fTempPerm1229)) + (fControl[249] * fTempPerm1238)) + (fControl[248] * fTempPerm1249)) + (fControl[247] * fTempPerm1252)) + (fControl[246] * fTempPerm1257)) + (fControl[245] * fTempPerm1258));
		float fTemp1317 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp751 - fTemp752)) + (fTemp39 * (fTemp753 - fTemp754)))));
		float fTemp1318 = (1.0f - fTemp1317);
		float fTemp1319 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp757 - fTemp758)) + (fTemp39 * (fTemp759 - fTemp760)))));
		outputs[1] = FAUSTFLOAT((fHbargraph0 * ((((fRec171[0] * fTemp1318) + (fRec172[0] * fTemp1317)) * (1.0f - fTemp1319)) + (fTemp1319 * ((fRec173[0] * fTemp1318) + (fRec174[0] * fTemp1317))))));
		iVec0[1] = iVec0[0];
		fVec1[1] = fVec1[0];
		iVec2[1] = iVec2[0];
		iRec1[1] = iRec1[0];
		fRec0[1] = fRec0[0];
		fRec6[1] = fRec6[0];
		fRec7[1] = fRec7[0];
		fRec8[1] = fRec8[0];
		fRec9[1] = fRec9[0];
		fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		iRec16[1] = iRec16[0];
		fRec15[1] = fRec15[0];
		fRec18[1] = fRec18[0];
		fRec17[1] = fRec17[0];
		fRec20[1] = fRec20[0];
		fRec19[1] = fRec19[0];
		fRec22[1] = fRec22[0];
		fRec21[1] = fRec21[0];
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))) {
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			iVec3[1] = iVec3[0];
			fRec26[1] = fRec26[0];
			fRec29[1] = fRec29[0];
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))) {
			fRec23[1] = fRec23[0];
			fRec24[1] = fRec24[0];
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))) {
			fRec30[1] = fRec30[0];
			fRec31[1] = fRec31[0];
			fRec32[1] = fRec32[0];
		}
		if ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))) {
			fRec35[1] = fRec35[0];
			fRec36[1] = fRec36[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fVec4[1] = fVec4[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fRec38[1] = fRec38[0];
		}
		if (iControl[3] | iControl[69]) {
			fVec5[1] = fVec5[0];
			iVec6[1] = iVec6[0];
		}
		if (iControl[3]) {
			fRec43[1] = fRec43[0];
			fRec42[1] = fRec42[0];
			fRec41[1] = fRec41[0];
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			fRec37[1] = fRec37[0];
		}
		if ((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))) {
			fRec44[1] = fRec44[0];
			fRec45[1] = fRec45[0];
		}
		if ((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))) {
			fRec47[1] = fRec47[0];
			fRec48[1] = fRec48[0];
			fRec49[1] = fRec49[0];
		}
		if ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))) {
			fRec52[1] = fRec52[0];
			fRec53[1] = fRec53[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fVec7[1] = fVec7[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fRec55[1] = fRec55[0];
		}
		if (iControl[3] | iControl[69]) {
			fVec8[1] = fVec8[0];
			iVec9[1] = iVec9[0];
		}
		if (iControl[3]) {
			fRec60[1] = fRec60[0];
			fRec59[1] = fRec59[0];
			fRec58[1] = fRec58[0];
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
			fRec54[1] = fRec54[0];
		}
		if (iControl[69]) {
			fRec61[1] = fRec61[0];
			fRec62[1] = fRec62[0];
		}
		fRec2[1] = fRec2[0];
		if ((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))) {
			fRec63[1] = fRec63[0];
			fRec64[1] = fRec64[0];
		}
		if ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))) {
			fRec66[1] = fRec66[0];
			fRec67[1] = fRec67[0];
			fRec68[1] = fRec68[0];
		}
		if ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))) {
			fRec71[1] = fRec71[0];
			fRec72[1] = fRec72[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fVec10[1] = fVec10[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fRec74[1] = fRec74[0];
		}
		if (iControl[67] | iControl[60]) {
			fVec11[1] = fVec11[0];
			iVec12[1] = iVec12[0];
		}
		if (iControl[67]) {
			fRec79[1] = fRec79[0];
			fRec78[1] = fRec78[0];
			fRec77[1] = fRec77[0];
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			fRec73[1] = fRec73[0];
		}
		if ((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))) {
			fRec80[1] = fRec80[0];
			fRec81[1] = fRec81[0];
		}
		if ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))) {
			fRec83[1] = fRec83[0];
			fRec84[1] = fRec84[0];
			fRec85[1] = fRec85[0];
		}
		if ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))) {
			fRec88[1] = fRec88[0];
			fRec89[1] = fRec89[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fVec13[1] = fVec13[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fRec91[1] = fRec91[0];
		}
		if (iControl[67] | iControl[60]) {
			fVec14[1] = fVec14[0];
			iVec15[1] = iVec15[0];
		}
		if (iControl[67]) {
			fRec96[1] = fRec96[0];
			fRec95[1] = fRec95[0];
			fRec94[1] = fRec94[0];
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fRec90[1] = fRec90[0];
		}
		if (iControl[60]) {
			fRec97[1] = fRec97[0];
			fRec98[1] = fRec98[0];
		}
		fRec3[1] = fRec3[0];
		if ((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))) {
			fRec99[1] = fRec99[0];
			fRec100[1] = fRec100[0];
		}
		if ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))) {
			fRec102[1] = fRec102[0];
			fRec103[1] = fRec103[0];
			fRec104[1] = fRec104[0];
		}
		if ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))) {
			fRec107[1] = fRec107[0];
			fRec108[1] = fRec108[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fVec16[1] = fVec16[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fRec110[1] = fRec110[0];
		}
		if (iControl[58] | iControl[51]) {
			fVec17[1] = fVec17[0];
			iVec18[1] = iVec18[0];
		}
		if (iControl[58]) {
			fRec115[1] = fRec115[0];
			fRec114[1] = fRec114[0];
			fRec113[1] = fRec113[0];
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			fRec109[1] = fRec109[0];
		}
		if ((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))) {
			fRec116[1] = fRec116[0];
			fRec117[1] = fRec117[0];
		}
		if ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))) {
			fRec119[1] = fRec119[0];
			fRec120[1] = fRec120[0];
			fRec121[1] = fRec121[0];
		}
		if ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))) {
			fRec124[1] = fRec124[0];
			fRec125[1] = fRec125[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fVec19[1] = fVec19[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fRec127[1] = fRec127[0];
		}
		if (iControl[58] | iControl[51]) {
			fVec20[1] = fVec20[0];
			iVec21[1] = iVec21[0];
		}
		if (iControl[58]) {
			fRec132[1] = fRec132[0];
			fRec131[1] = fRec131[0];
			fRec130[1] = fRec130[0];
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fRec126[1] = fRec126[0];
		}
		if (iControl[51]) {
			fRec133[1] = fRec133[0];
			fRec134[1] = fRec134[0];
		}
		fRec4[1] = fRec4[0];
		if ((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))) {
			fRec135[1] = fRec135[0];
			fRec136[1] = fRec136[0];
		}
		if ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))) {
			fRec138[1] = fRec138[0];
			fRec139[1] = fRec139[0];
			fRec140[1] = fRec140[0];
		}
		if ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))) {
			fRec143[1] = fRec143[0];
			fRec144[1] = fRec144[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fVec22[1] = fVec22[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fRec146[1] = fRec146[0];
		}
		if (iControl[49] | iControl[42]) {
			fVec23[1] = fVec23[0];
			iVec24[1] = iVec24[0];
		}
		if (iControl[49]) {
			fRec151[1] = fRec151[0];
			fRec150[1] = fRec150[0];
			fRec149[1] = fRec149[0];
			fRec148[1] = fRec148[0];
			fRec147[1] = fRec147[0];
			fRec145[1] = fRec145[0];
		}
		if ((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))) {
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
		}
		if ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))) {
			fRec155[1] = fRec155[0];
			fRec156[1] = fRec156[0];
			fRec157[1] = fRec157[0];
		}
		if ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))) {
			fRec160[1] = fRec160[0];
			fRec161[1] = fRec161[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fVec25[1] = fVec25[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fRec163[1] = fRec163[0];
		}
		if (iControl[49] | iControl[42]) {
			fVec26[1] = fVec26[0];
			iVec27[1] = iVec27[0];
		}
		if (iControl[49]) {
			fRec168[1] = fRec168[0];
			fRec167[1] = fRec167[0];
			fRec166[1] = fRec166[0];
			fRec165[1] = fRec165[0];
			fRec164[1] = fRec164[0];
			fRec162[1] = fRec162[0];
		}
		if (iControl[42]) {
			fRec169[1] = fRec169[0];
			fRec170[1] = fRec170[0];
		}
		fRec5[1] = fRec5[0];
		if ((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))) {
			fRec175[1] = fRec175[0];
			fRec176[1] = fRec176[0];
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))) {
			fRec178[1] = fRec178[0];
			fRec179[1] = fRec179[0];
			fRec180[1] = fRec180[0];
		}
		if ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))) {
			fRec183[1] = fRec183[0];
			fRec184[1] = fRec184[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fVec28[1] = fVec28[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fRec186[1] = fRec186[0];
		}
		if (iControl[3] | iControl[69]) {
			fVec29[1] = fVec29[0];
			iVec30[1] = iVec30[0];
		}
		if (iControl[3]) {
			fRec191[1] = fRec191[0];
			fRec190[1] = fRec190[0];
			fRec189[1] = fRec189[0];
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec185[1] = fRec185[0];
		}
		if ((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))) {
			fRec192[1] = fRec192[0];
			fRec193[1] = fRec193[0];
		}
		if ((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))) {
			fRec195[1] = fRec195[0];
			fRec196[1] = fRec196[0];
			fRec197[1] = fRec197[0];
		}
		if ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))) {
			fRec200[1] = fRec200[0];
			fRec201[1] = fRec201[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))) {
			fVec31[1] = fVec31[0];
		}
		if (iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))) {
			fRec203[1] = fRec203[0];
		}
		if (iControl[3] | iControl[69]) {
			fVec32[1] = fVec32[0];
			iVec33[1] = iVec33[0];
		}
		if (iControl[3]) {
			fRec208[1] = fRec208[0];
			fRec207[1] = fRec207[0];
			fRec206[1] = fRec206[0];
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			fRec202[1] = fRec202[0];
		}
		if (iControl[69]) {
			fRec209[1] = fRec209[0];
			fRec210[1] = fRec210[0];
		}
		fRec171[1] = fRec171[0];
		if ((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))) {
			fRec211[1] = fRec211[0];
			fRec212[1] = fRec212[0];
		}
		if ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))) {
			fRec214[1] = fRec214[0];
			fRec215[1] = fRec215[0];
			fRec216[1] = fRec216[0];
		}
		if ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))) {
			fRec219[1] = fRec219[0];
			fRec220[1] = fRec220[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fVec34[1] = fVec34[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fRec222[1] = fRec222[0];
		}
		if (iControl[67] | iControl[60]) {
			fVec35[1] = fVec35[0];
			iVec36[1] = iVec36[0];
		}
		if (iControl[67]) {
			fRec227[1] = fRec227[0];
			fRec226[1] = fRec226[0];
			fRec225[1] = fRec225[0];
			fRec224[1] = fRec224[0];
			fRec223[1] = fRec223[0];
			fRec221[1] = fRec221[0];
		}
		if ((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))) {
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
		}
		if ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))) {
			fRec231[1] = fRec231[0];
			fRec232[1] = fRec232[0];
			fRec233[1] = fRec233[0];
		}
		if ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))) {
			fRec236[1] = fRec236[0];
			fRec237[1] = fRec237[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))) {
			fVec37[1] = fVec37[0];
		}
		if (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))) {
			fRec239[1] = fRec239[0];
		}
		if (iControl[67] | iControl[60]) {
			fVec38[1] = fVec38[0];
			iVec39[1] = iVec39[0];
		}
		if (iControl[67]) {
			fRec244[1] = fRec244[0];
			fRec243[1] = fRec243[0];
			fRec242[1] = fRec242[0];
			fRec241[1] = fRec241[0];
			fRec240[1] = fRec240[0];
			fRec238[1] = fRec238[0];
		}
		if (iControl[60]) {
			fRec245[1] = fRec245[0];
			fRec246[1] = fRec246[0];
		}
		fRec172[1] = fRec172[0];
		if ((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))) {
			fRec247[1] = fRec247[0];
			fRec248[1] = fRec248[0];
		}
		if ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))) {
			fRec250[1] = fRec250[0];
			fRec251[1] = fRec251[0];
			fRec252[1] = fRec252[0];
		}
		if ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))) {
			fRec255[1] = fRec255[0];
			fRec256[1] = fRec256[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fVec40[1] = fVec40[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fRec258[1] = fRec258[0];
		}
		if (iControl[58] | iControl[51]) {
			fVec41[1] = fVec41[0];
			iVec42[1] = iVec42[0];
		}
		if (iControl[58]) {
			fRec263[1] = fRec263[0];
			fRec262[1] = fRec262[0];
			fRec261[1] = fRec261[0];
			fRec260[1] = fRec260[0];
			fRec259[1] = fRec259[0];
			fRec257[1] = fRec257[0];
		}
		if ((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))) {
			fRec264[1] = fRec264[0];
			fRec265[1] = fRec265[0];
		}
		if ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))) {
			fRec267[1] = fRec267[0];
			fRec268[1] = fRec268[0];
			fRec269[1] = fRec269[0];
		}
		if ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))) {
			fRec272[1] = fRec272[0];
			fRec273[1] = fRec273[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))) {
			fVec43[1] = fVec43[0];
		}
		if (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))) {
			fRec275[1] = fRec275[0];
		}
		if (iControl[58] | iControl[51]) {
			fVec44[1] = fVec44[0];
			iVec45[1] = iVec45[0];
		}
		if (iControl[58]) {
			fRec280[1] = fRec280[0];
			fRec279[1] = fRec279[0];
			fRec278[1] = fRec278[0];
			fRec277[1] = fRec277[0];
			fRec276[1] = fRec276[0];
			fRec274[1] = fRec274[0];
		}
		if (iControl[51]) {
			fRec281[1] = fRec281[0];
			fRec282[1] = fRec282[0];
		}
		fRec173[1] = fRec173[0];
		if ((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))) {
			fRec283[1] = fRec283[0];
			fRec284[1] = fRec284[0];
		}
		if ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))) {
			fRec286[1] = fRec286[0];
			fRec287[1] = fRec287[0];
			fRec288[1] = fRec288[0];
		}
		if ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))) {
			fRec291[1] = fRec291[0];
			fRec292[1] = fRec292[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fVec46[1] = fVec46[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fRec294[1] = fRec294[0];
		}
		if (iControl[49] | iControl[42]) {
			fVec47[1] = fVec47[0];
			iVec48[1] = iVec48[0];
		}
		if (iControl[49]) {
			fRec299[1] = fRec299[0];
			fRec298[1] = fRec298[0];
			fRec297[1] = fRec297[0];
			fRec296[1] = fRec296[0];
			fRec295[1] = fRec295[0];
			fRec293[1] = fRec293[0];
		}
		if ((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))) {
			fRec300[1] = fRec300[0];
			fRec301[1] = fRec301[0];
		}
		if ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))) {
			fRec303[1] = fRec303[0];
			fRec304[1] = fRec304[0];
			fRec305[1] = fRec305[0];
		}
		if ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))) {
			fRec308[1] = fRec308[0];
			fRec309[1] = fRec309[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))) {
			fVec49[1] = fVec49[0];
		}
		if (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))) {
			fRec311[1] = fRec311[0];
		}
		if (iControl[49] | iControl[42]) {
			fVec50[1] = fVec50[0];
			iVec51[1] = iVec51[0];
		}
		if (iControl[49]) {
			fRec316[1] = fRec316[0];
			fRec315[1] = fRec315[0];
			fRec314[1] = fRec314[0];
			fRec313[1] = fRec313[0];
			fRec312[1] = fRec312[0];
			fRec310[1] = fRec310[0];
		}
		if (iControl[42]) {
			fRec317[1] = fRec317[0];
			fRec318[1] = fRec318[0];
		}
		fRec174[1] = fRec174[0];
	}

};

#endif
