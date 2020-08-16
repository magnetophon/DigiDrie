/* ------------------------------------------------------------
author: "Bart Brouns"
license: "AGPLv3"
name: "DigiFaustMidi"
Code generated with Faust 2.28.0 (https://faust.grame.fr)
Compilation options: -lang cpp -scal -ftz 0
------------------------------------------------------------ */

#pragma once

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
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

class mydsp {
	
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
		
	void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = float(fButton0);
		int iSlow1 = (fSlow0 > 0.0f);
		float fSlow2 = float(fHslider0);
		float fSlow3 = float(fHslider1);
		int iSlow4 = int((fConst0 * fSlow3));
		float fSlow5 = float(fHslider2);
		float fSlow6 = float(fHslider4);
		float fSlow7 = (fSlow6 + -1.0f);
		float fSlow8 = ((float(fHslider3) * fSlow7) + 1.0f);
		float fSlow9 = float(iSlow1);
		float fSlow10 = (float(fHslider5) * fSlow9);
		float fSlow11 = float(fVslider0);
		float fSlow12 = std::min<float>(8.0f, fSlow11);
		float fSlow13 = float((0.0f == fSlow12));
		int iSlow14 = (fSlow13 != 0.0f);
		float fSlow15 = float(fHslider6);
		float fSlow16 = std::fabs(fSlow15);
		float fSlow17 = float(fHslider7);
		float fSlow18 = std::fabs(fSlow17);
		float fSlow19 = float(fHslider8);
		float fSlow20 = std::fabs(fSlow19);
		float fSlow21 = float(fHslider9);
		float fSlow22 = std::fabs(fSlow21);
		float fSlow23 = float(fHslider10);
		float fSlow24 = std::fabs(fSlow23);
		float fSlow25 = float(fHslider11);
		float fSlow26 = std::fabs(fSlow25);
		float fSlow27 = float(fHslider12);
		float fSlow28 = std::fabs(fSlow27);
		float fSlow29 = float(fHslider13);
		float fSlow30 = std::fabs(fSlow29);
		float fSlow31 = float(fHslider14);
		float fSlow32 = std::fabs(fSlow31);
		float fSlow33 = float(fHslider15);
		float fSlow34 = std::fabs(fSlow33);
		float fSlow35 = float(fHslider16);
		float fSlow36 = std::fabs(fSlow35);
		float fSlow37 = float(fHslider17);
		float fSlow38 = std::fabs(fSlow37);
		float fSlow39 = float(fHslider18);
		float fSlow40 = std::fabs(fSlow39);
		float fSlow41 = float(fHslider19);
		float fSlow42 = std::fabs(fSlow41);
		float fSlow43 = (((((((fSlow16 + (fSlow18 + (fSlow20 + (fSlow22 + (fSlow24 + (fSlow26 + (fSlow28 + fSlow30))))))) + fSlow32) + fSlow34) + fSlow36) + fSlow38) + fSlow40) + fSlow42);
		float fSlow44 = std::min<float>(1.0f, fSlow43);
		float fSlow45 = (fSlow44 / std::max<float>(1.84317514e-35f, fSlow43));
		float fSlow46 = std::max<float>(1.31655367e-36f, fSlow16);
		float fSlow47 = ((fSlow16 < 0.0f) ? (0.0f - fSlow46) : fSlow46);
		int iSlow48 = (fSlow15 < 0.0f);
		float fSlow49 = float(fHslider20);
		float fSlow50 = float(fHslider21);
		int iSlow51 = int((fConst0 * fSlow50));
		float fSlow52 = float(fHslider22);
		float fSlow53 = ((float(fHslider23) * fSlow7) + 1.0f);
		float fSlow54 = (float(fHslider24) * fSlow9);
		float fSlow55 = std::max<float>(1.31655367e-36f, fSlow18);
		float fSlow56 = ((fSlow18 < 0.0f) ? (0.0f - fSlow55) : fSlow55);
		int iSlow57 = (fSlow17 < 0.0f);
		float fSlow58 = float(fHslider25);
		float fSlow59 = float(fHslider26);
		int iSlow60 = int((fConst0 * fSlow59));
		float fSlow61 = float(fHslider27);
		float fSlow62 = ((float(fHslider28) * fSlow7) + 1.0f);
		float fSlow63 = (float(fHslider29) * fSlow9);
		float fSlow64 = std::max<float>(1.31655367e-36f, fSlow20);
		float fSlow65 = ((fSlow20 < 0.0f) ? (0.0f - fSlow64) : fSlow64);
		int iSlow66 = (fSlow19 < 0.0f);
		float fSlow67 = float(fHslider30);
		float fSlow68 = float(fHslider31);
		int iSlow69 = int((fConst0 * fSlow68));
		float fSlow70 = float(fHslider32);
		float fSlow71 = ((float(fHslider33) * fSlow7) + 1.0f);
		float fSlow72 = (float(fHslider34) * fSlow9);
		float fSlow73 = std::max<float>(1.31655367e-36f, fSlow22);
		float fSlow74 = ((fSlow22 < 0.0f) ? (0.0f - fSlow73) : fSlow73);
		int iSlow75 = (fSlow21 < 0.0f);
		float fSlow76 = float(fHslider35);
		float fSlow77 = float(fHslider36);
		int iSlow78 = int((fConst0 * fSlow77));
		float fSlow79 = float(fHslider37);
		float fSlow80 = ((float(fHslider38) * fSlow7) + 1.0f);
		float fSlow81 = (float(fHslider39) * fSlow9);
		float fSlow82 = std::max<float>(1.31655367e-36f, fSlow24);
		float fSlow83 = ((fSlow24 < 0.0f) ? (0.0f - fSlow82) : fSlow82);
		int iSlow84 = (fSlow23 < 0.0f);
		float fSlow85 = (fConst1 * float(fHslider40));
		float fSlow86 = std::max<float>(1.31655367e-36f, fSlow26);
		float fSlow87 = ((fSlow26 < 0.0f) ? (0.0f - fSlow86) : fSlow86);
		int iSlow88 = (fSlow25 < 0.0f);
		float fSlow89 = (fConst1 * float(fHslider41));
		float fSlow90 = std::max<float>(1.31655367e-36f, fSlow30);
		float fSlow91 = ((fSlow30 < 0.0f) ? (0.0f - fSlow90) : fSlow90);
		int iSlow92 = (fSlow29 < 0.0f);
		float fSlow93 = (fConst1 * float(fHslider42));
		float fSlow94 = std::max<float>(1.31655367e-36f, fSlow28);
		float fSlow95 = ((fSlow28 < 0.0f) ? (0.0f - fSlow94) : fSlow94);
		int iSlow96 = (fSlow27 < 0.0f);
		float fSlow97 = (fConst1 * float(fHslider43));
		float fSlow98 = std::max<float>(1.31655367e-36f, fSlow32);
		float fSlow99 = (0.00787401572f * float(fVslider1));
		float fSlow100 = (1.0f - fSlow99);
		float fSlow101 = (((fSlow32 < 0.0f) ? (0.0f - fSlow98) : fSlow98) * ((fSlow31 < 0.0f) ? fSlow100 : fSlow99));
		float fSlow102 = std::max<float>(1.31655367e-36f, fSlow34);
		float fSlow103 = (((fSlow34 < 0.0f) ? (0.0f - fSlow102) : fSlow102) * float(((fSlow33 < 0.0f) ? 1 : 0)));
		float fSlow104 = std::max<float>(1.31655367e-36f, fSlow36);
		float fSlow105 = (1.0f - fSlow6);
		float fSlow106 = (((fSlow36 < 0.0f) ? (0.0f - fSlow104) : fSlow104) * ((fSlow35 < 0.0f) ? fSlow105 : fSlow6));
		float fSlow107 = std::max<float>(1.31655367e-36f, fSlow38);
		float fSlow108 = (0.00787401572f * float(fVslider2));
		float fSlow109 = (1.0f - fSlow108);
		float fSlow110 = (((fSlow38 < 0.0f) ? (0.0f - fSlow107) : fSlow107) * ((fSlow37 < 0.0f) ? fSlow109 : fSlow108));
		float fSlow111 = std::max<float>(1.31655367e-36f, fSlow40);
		float fSlow112 = float(fVslider3);
		float fSlow113 = (0.000122070312f * fSlow112);
		float fSlow114 = (1.0f - fSlow113);
		float fSlow115 = (((fSlow40 < 0.0f) ? (0.0f - fSlow111) : fSlow111) * ((fSlow39 < 0.0f) ? fSlow114 : fSlow113));
		float fSlow116 = std::max<float>(1.31655367e-36f, fSlow42);
		float fSlow117 = ((fSlow42 < 0.0f) ? (0.0f - fSlow116) : fSlow116);
		int iSlow118 = (fSlow41 < 0.0f);
		float fSlow119 = (1.0f - fSlow44);
		float fSlow120 = float(fHslider44);
		float fSlow121 = float(fHslider45);
		int iSlow122 = (std::fabs(fSlow121) < 1.1920929e-07f);
		float fSlow123 = (iSlow122 ? 0.0f : std::exp((0.0f - (fConst1 / (iSlow122 ? 1.0f : fSlow121)))));
		float fSlow124 = float(fHslider46);
		int iSlow125 = (std::fabs(fSlow124) < 1.1920929e-07f);
		float fSlow126 = (iSlow125 ? 0.0f : std::exp((0.0f - (fConst1 / (iSlow125 ? 1.0f : fSlow124)))));
		float fSlow127 = float(fHslider47);
		float fSlow128 = float(fHslider48);
		float fSlow129 = std::fabs(fSlow128);
		float fSlow130 = float(fHslider49);
		float fSlow131 = std::fabs(fSlow130);
		float fSlow132 = float(fHslider50);
		float fSlow133 = std::fabs(fSlow132);
		float fSlow134 = float(fHslider51);
		float fSlow135 = std::fabs(fSlow134);
		float fSlow136 = float(fHslider52);
		float fSlow137 = std::fabs(fSlow136);
		float fSlow138 = float(fHslider53);
		float fSlow139 = std::fabs(fSlow138);
		float fSlow140 = float(fHslider54);
		float fSlow141 = std::fabs(fSlow140);
		float fSlow142 = float(fHslider55);
		float fSlow143 = std::fabs(fSlow142);
		float fSlow144 = float(fHslider56);
		float fSlow145 = std::fabs(fSlow144);
		float fSlow146 = float(fHslider57);
		float fSlow147 = std::fabs(fSlow146);
		float fSlow148 = float(fHslider58);
		float fSlow149 = std::fabs(fSlow148);
		float fSlow150 = float(fHslider59);
		float fSlow151 = std::fabs(fSlow150);
		float fSlow152 = float(fHslider60);
		float fSlow153 = std::fabs(fSlow152);
		float fSlow154 = float(fHslider61);
		float fSlow155 = std::fabs(fSlow154);
		float fSlow156 = (((((((fSlow129 + (fSlow131 + (fSlow133 + (fSlow135 + (fSlow137 + (fSlow139 + (fSlow141 + fSlow143))))))) + fSlow145) + fSlow147) + fSlow149) + fSlow151) + fSlow153) + fSlow155);
		float fSlow157 = std::min<float>(1.0f, fSlow156);
		float fSlow158 = (fSlow157 / std::max<float>(1.84317514e-35f, fSlow156));
		float fSlow159 = std::max<float>(1.31655367e-36f, fSlow129);
		float fSlow160 = ((fSlow129 < 0.0f) ? (0.0f - fSlow159) : fSlow159);
		int iSlow161 = (fSlow128 < 0.0f);
		float fSlow162 = std::max<float>(1.31655367e-36f, fSlow131);
		float fSlow163 = ((fSlow131 < 0.0f) ? (0.0f - fSlow162) : fSlow162);
		int iSlow164 = (fSlow130 < 0.0f);
		float fSlow165 = std::max<float>(1.31655367e-36f, fSlow133);
		float fSlow166 = ((fSlow133 < 0.0f) ? (0.0f - fSlow165) : fSlow165);
		int iSlow167 = (fSlow132 < 0.0f);
		float fSlow168 = std::max<float>(1.31655367e-36f, fSlow135);
		float fSlow169 = ((fSlow135 < 0.0f) ? (0.0f - fSlow168) : fSlow168);
		int iSlow170 = (fSlow134 < 0.0f);
		float fSlow171 = std::max<float>(1.31655367e-36f, fSlow137);
		float fSlow172 = ((fSlow137 < 0.0f) ? (0.0f - fSlow171) : fSlow171);
		int iSlow173 = (fSlow136 < 0.0f);
		float fSlow174 = std::max<float>(1.31655367e-36f, fSlow139);
		float fSlow175 = ((fSlow139 < 0.0f) ? (0.0f - fSlow174) : fSlow174);
		int iSlow176 = (fSlow138 < 0.0f);
		float fSlow177 = std::max<float>(1.31655367e-36f, fSlow143);
		float fSlow178 = ((fSlow143 < 0.0f) ? (0.0f - fSlow177) : fSlow177);
		int iSlow179 = (fSlow142 < 0.0f);
		float fSlow180 = std::max<float>(1.31655367e-36f, fSlow141);
		float fSlow181 = ((fSlow141 < 0.0f) ? (0.0f - fSlow180) : fSlow180);
		int iSlow182 = (fSlow140 < 0.0f);
		float fSlow183 = std::max<float>(1.31655367e-36f, fSlow145);
		float fSlow184 = (((fSlow145 < 0.0f) ? (0.0f - fSlow183) : fSlow183) * ((fSlow144 < 0.0f) ? fSlow100 : fSlow99));
		float fSlow185 = std::max<float>(1.31655367e-36f, fSlow147);
		float fSlow186 = (((fSlow147 < 0.0f) ? (0.0f - fSlow185) : fSlow185) * float(((fSlow146 < 0.0f) ? 1 : 0)));
		float fSlow187 = std::max<float>(1.31655367e-36f, fSlow149);
		float fSlow188 = (((fSlow149 < 0.0f) ? (0.0f - fSlow187) : fSlow187) * ((fSlow148 < 0.0f) ? fSlow105 : fSlow6));
		float fSlow189 = std::max<float>(1.31655367e-36f, fSlow151);
		float fSlow190 = (((fSlow151 < 0.0f) ? (0.0f - fSlow189) : fSlow189) * ((fSlow150 < 0.0f) ? fSlow109 : fSlow108));
		float fSlow191 = std::max<float>(1.31655367e-36f, fSlow153);
		float fSlow192 = (((fSlow153 < 0.0f) ? (0.0f - fSlow191) : fSlow191) * ((fSlow152 < 0.0f) ? fSlow114 : fSlow113));
		float fSlow193 = std::max<float>(1.31655367e-36f, fSlow155);
		float fSlow194 = ((fSlow155 < 0.0f) ? (0.0f - fSlow193) : fSlow193);
		int iSlow195 = (fSlow154 < 0.0f);
		float fSlow196 = (1.0f - fSlow157);
		float fSlow197 = float(fHslider62);
		float fSlow198 = float(fHslider63);
		int iSlow199 = (std::fabs(fSlow198) < 1.1920929e-07f);
		float fSlow200 = (iSlow199 ? 0.0f : std::exp((0.0f - (fConst1 / (iSlow199 ? 1.0f : fSlow198)))));
		float fSlow201 = float(fHslider64);
		int iSlow202 = (std::fabs(fSlow201) < 1.1920929e-07f);
		float fSlow203 = (iSlow202 ? 0.0f : std::exp((0.0f - (fConst1 / (iSlow202 ? 1.0f : fSlow201)))));
		float fSlow204 = float(fHslider65);
		float fSlow205 = float(fHslider66);
		float fSlow206 = std::fabs(fSlow205);
		float fSlow207 = float(fHslider67);
		float fSlow208 = std::fabs(fSlow207);
		float fSlow209 = float(fHslider68);
		float fSlow210 = std::fabs(fSlow209);
		float fSlow211 = float(fHslider69);
		float fSlow212 = std::fabs(fSlow211);
		float fSlow213 = float(fHslider70);
		float fSlow214 = std::fabs(fSlow213);
		float fSlow215 = float(fHslider71);
		float fSlow216 = std::fabs(fSlow215);
		float fSlow217 = float(fHslider72);
		float fSlow218 = std::fabs(fSlow217);
		float fSlow219 = float(fHslider73);
		float fSlow220 = std::fabs(fSlow219);
		float fSlow221 = float(fHslider74);
		float fSlow222 = std::fabs(fSlow221);
		float fSlow223 = float(fHslider75);
		float fSlow224 = std::fabs(fSlow223);
		float fSlow225 = float(fHslider76);
		float fSlow226 = std::fabs(fSlow225);
		float fSlow227 = float(fHslider77);
		float fSlow228 = std::fabs(fSlow227);
		float fSlow229 = float(fHslider78);
		float fSlow230 = std::fabs(fSlow229);
		float fSlow231 = float(fHslider79);
		float fSlow232 = std::fabs(fSlow231);
		float fSlow233 = (((((((fSlow206 + (fSlow208 + (fSlow210 + (fSlow212 + (fSlow214 + (fSlow216 + (fSlow218 + fSlow220))))))) + fSlow222) + fSlow224) + fSlow226) + fSlow228) + fSlow230) + fSlow232);
		float fSlow234 = std::min<float>(1.0f, fSlow233);
		float fSlow235 = (fSlow234 / std::max<float>(1.84317514e-35f, fSlow233));
		float fSlow236 = std::max<float>(1.31655367e-36f, fSlow206);
		float fSlow237 = ((fSlow206 < 0.0f) ? (0.0f - fSlow236) : fSlow236);
		int iSlow238 = (fSlow205 < 0.0f);
		float fSlow239 = std::max<float>(1.31655367e-36f, fSlow208);
		float fSlow240 = ((fSlow208 < 0.0f) ? (0.0f - fSlow239) : fSlow239);
		int iSlow241 = (fSlow207 < 0.0f);
		float fSlow242 = std::max<float>(1.31655367e-36f, fSlow210);
		float fSlow243 = ((fSlow210 < 0.0f) ? (0.0f - fSlow242) : fSlow242);
		int iSlow244 = (fSlow209 < 0.0f);
		float fSlow245 = std::max<float>(1.31655367e-36f, fSlow212);
		float fSlow246 = ((fSlow212 < 0.0f) ? (0.0f - fSlow245) : fSlow245);
		int iSlow247 = (fSlow211 < 0.0f);
		float fSlow248 = std::max<float>(1.31655367e-36f, fSlow214);
		float fSlow249 = ((fSlow214 < 0.0f) ? (0.0f - fSlow248) : fSlow248);
		int iSlow250 = (fSlow213 < 0.0f);
		float fSlow251 = std::max<float>(1.31655367e-36f, fSlow216);
		float fSlow252 = ((fSlow216 < 0.0f) ? (0.0f - fSlow251) : fSlow251);
		int iSlow253 = (fSlow215 < 0.0f);
		float fSlow254 = std::max<float>(1.31655367e-36f, fSlow220);
		float fSlow255 = ((fSlow220 < 0.0f) ? (0.0f - fSlow254) : fSlow254);
		int iSlow256 = (fSlow219 < 0.0f);
		float fSlow257 = std::max<float>(1.31655367e-36f, fSlow218);
		float fSlow258 = ((fSlow218 < 0.0f) ? (0.0f - fSlow257) : fSlow257);
		int iSlow259 = (fSlow217 < 0.0f);
		float fSlow260 = std::max<float>(1.31655367e-36f, fSlow222);
		float fSlow261 = (((fSlow222 < 0.0f) ? (0.0f - fSlow260) : fSlow260) * ((fSlow221 < 0.0f) ? fSlow100 : fSlow99));
		float fSlow262 = std::max<float>(1.31655367e-36f, fSlow224);
		float fSlow263 = (((fSlow224 < 0.0f) ? (0.0f - fSlow262) : fSlow262) * float(((fSlow223 < 0.0f) ? 1 : 0)));
		float fSlow264 = std::max<float>(1.31655367e-36f, fSlow226);
		float fSlow265 = (((fSlow226 < 0.0f) ? (0.0f - fSlow264) : fSlow264) * ((fSlow225 < 0.0f) ? fSlow105 : fSlow6));
		float fSlow266 = std::max<float>(1.31655367e-36f, fSlow228);
		float fSlow267 = (((fSlow228 < 0.0f) ? (0.0f - fSlow266) : fSlow266) * ((fSlow227 < 0.0f) ? fSlow109 : fSlow108));
		float fSlow268 = std::max<float>(1.31655367e-36f, fSlow230);
		float fSlow269 = (((fSlow230 < 0.0f) ? (0.0f - fSlow268) : fSlow268) * ((fSlow229 < 0.0f) ? fSlow114 : fSlow113));
		float fSlow270 = std::max<float>(1.31655367e-36f, fSlow232);
		float fSlow271 = ((fSlow232 < 0.0f) ? (0.0f - fSlow270) : fSlow270);
		int iSlow272 = (fSlow231 < 0.0f);
		float fSlow273 = (1.0f - fSlow234);
		float fSlow274 = float(fHslider80);
		float fSlow275 = float(fHslider81);
		int iSlow276 = (std::fabs(fSlow275) < 1.1920929e-07f);
		float fSlow277 = (iSlow276 ? 0.0f : std::exp((0.0f - (fConst1 / (iSlow276 ? 1.0f : fSlow275)))));
		float fSlow278 = float(fHslider82);
		int iSlow279 = (std::fabs(fSlow278) < 1.1920929e-07f);
		float fSlow280 = (iSlow279 ? 0.0f : std::exp((0.0f - (fConst1 / (iSlow279 ? 1.0f : fSlow278)))));
		float fSlow281 = float(fHslider83);
		float fSlow282 = float(fHslider84);
		float fSlow283 = float(fVslider4);
		float fSlow284 = std::min<float>(8.0f, fSlow283);
		float fSlow285 = float((8.0f == fSlow284));
		int iSlow286 = (fSlow285 != 0.0f);
		float fSlow287 = float((7.0f == fSlow284));
		int iSlow288 = (fSlow287 != 0.0f);
		float fSlow289 = float((6.0f == fSlow284));
		int iSlow290 = (fSlow289 != 0.0f);
		float fSlow291 = float((5.0f == fSlow284));
		int iSlow292 = (fSlow291 != 0.0f);
		float fSlow293 = float((4.0f == fSlow284));
		int iSlow294 = (fSlow293 != 0.0f);
		float fSlow295 = float((3.0f == fSlow284));
		int iSlow296 = (fSlow295 != 0.0f);
		float fSlow297 = float((2.0f == fSlow284));
		int iSlow298 = (fSlow297 != 0.0f);
		float fSlow299 = float((1.0f == fSlow284));
		int iSlow300 = (fSlow299 != 0.0f);
		float fSlow301 = float((0.0f == fSlow284));
		int iSlow302 = (fSlow301 != 0.0f);
		float fSlow303 = float(fVslider5);
		float fSlow304 = std::min<float>(8.0f, fSlow303);
		float fSlow305 = float((8.0f == fSlow304));
		int iSlow306 = (fSlow305 != 0.0f);
		float fSlow307 = float((7.0f == fSlow304));
		int iSlow308 = (fSlow307 != 0.0f);
		float fSlow309 = float((6.0f == fSlow304));
		int iSlow310 = (fSlow309 != 0.0f);
		float fSlow311 = float((5.0f == fSlow304));
		int iSlow312 = (fSlow311 != 0.0f);
		float fSlow313 = float((4.0f == fSlow304));
		int iSlow314 = (fSlow313 != 0.0f);
		float fSlow315 = float((3.0f == fSlow304));
		int iSlow316 = (fSlow315 != 0.0f);
		float fSlow317 = float((2.0f == fSlow304));
		int iSlow318 = (fSlow317 != 0.0f);
		float fSlow319 = float((1.0f == fSlow304));
		int iSlow320 = (fSlow319 != 0.0f);
		float fSlow321 = float((0.0f == fSlow304));
		int iSlow322 = (fSlow321 != 0.0f);
		float fSlow323 = float(fVslider6);
		float fSlow324 = std::min<float>(8.0f, fSlow323);
		float fSlow325 = float((8.0f == fSlow324));
		int iSlow326 = (fSlow325 != 0.0f);
		float fSlow327 = float((7.0f == fSlow324));
		int iSlow328 = (fSlow327 != 0.0f);
		float fSlow329 = float((6.0f == fSlow324));
		int iSlow330 = (fSlow329 != 0.0f);
		float fSlow331 = float((5.0f == fSlow324));
		int iSlow332 = (fSlow331 != 0.0f);
		float fSlow333 = float((4.0f == fSlow324));
		int iSlow334 = (fSlow333 != 0.0f);
		float fSlow335 = float((3.0f == fSlow324));
		int iSlow336 = (fSlow335 != 0.0f);
		float fSlow337 = float((2.0f == fSlow324));
		int iSlow338 = (fSlow337 != 0.0f);
		float fSlow339 = float((1.0f == fSlow324));
		int iSlow340 = (fSlow339 != 0.0f);
		float fSlow341 = float((0.0f == fSlow324));
		int iSlow342 = (fSlow341 != 0.0f);
		float fSlow343 = float((8.0f == fSlow12));
		int iSlow344 = (fSlow343 != 0.0f);
		float fSlow345 = float((7.0f == fSlow12));
		int iSlow346 = (fSlow345 != 0.0f);
		float fSlow347 = float((6.0f == fSlow12));
		int iSlow348 = (fSlow347 != 0.0f);
		float fSlow349 = float((5.0f == fSlow12));
		int iSlow350 = (fSlow349 != 0.0f);
		float fSlow351 = float((4.0f == fSlow12));
		int iSlow352 = (fSlow351 != 0.0f);
		float fSlow353 = float((3.0f == fSlow12));
		int iSlow354 = (fSlow353 != 0.0f);
		float fSlow355 = float((2.0f == fSlow12));
		int iSlow356 = (fSlow355 != 0.0f);
		float fSlow357 = float((1.0f == fSlow12));
		int iSlow358 = (fSlow357 != 0.0f);
		float fTemp47 = fTempPerm0;
		float fSlow359 = float(fHslider85);
		float fSlow360 = float(fHslider86);
		float fSlow361 = float(fHslider87);
		float fSlow362 = float(fHslider88);
		float fTemp48 = fTempPerm1;
		float fSlow363 = float(fHslider89);
		float fSlow364 = float(fHslider90);
		float fSlow365 = float(fHslider91);
		float fSlow366 = float(fHslider92);
		float fTemp49 = fTempPerm2;
		float fSlow367 = float(fHslider93);
		float fSlow368 = float(fHslider94);
		float fSlow369 = float(fHslider95);
		float fSlow370 = float(fHslider96);
		float fTemp50 = fTempPerm3;
		float fTemp51 = fTempPerm4;
		float fTemp52 = fTempPerm5;
		float fSlow371 = float(fHslider97);
		float fSlow372 = float(fHslider98);
		float fSlow373 = float(fHslider99);
		float fSlow374 = float(fHslider100);
		float fTemp53 = fTempPerm6;
		float fSlow375 = float(fHslider101);
		float fSlow376 = float(fHslider102);
		float fSlow377 = float(fHslider103);
		float fSlow378 = float(fHslider104);
		float fTemp54 = fTempPerm7;
		float fSlow379 = float(fHslider105);
		float fSlow380 = float(fHslider106);
		float fSlow381 = float(fHslider107);
		float fSlow382 = float(fHslider108);
		float fTemp55 = fTempPerm8;
		float fSlow383 = float(fHslider109);
		float fSlow384 = float(fHslider110);
		float fSlow385 = float(fHslider111);
		float fSlow386 = float(fHslider112);
		float fTemp56 = fTempPerm9;
		float fTemp57 = fTempPerm10;
		float fTemp58 = fTempPerm11;
		float fSlow387 = float(fHslider113);
		float fSlow388 = float(fHslider114);
		float fSlow389 = float(fHslider115);
		float fSlow390 = float(fHslider116);
		float fTemp59 = fTempPerm12;
		float fSlow391 = float(fHslider117);
		float fSlow392 = float(fHslider118);
		float fSlow393 = float(fHslider119);
		float fSlow394 = float(fHslider120);
		float fTemp60 = fTempPerm13;
		float fSlow395 = float(fHslider121);
		float fSlow396 = float(fHslider122);
		float fSlow397 = float(fHslider123);
		float fSlow398 = float(fHslider124);
		float fTemp61 = fTempPerm14;
		float fSlow399 = float(fHslider125);
		float fSlow400 = float(fHslider126);
		float fSlow401 = float(fHslider127);
		float fSlow402 = float(fHslider128);
		float fTemp62 = fTempPerm15;
		float fTemp63 = fTempPerm16;
		float fTemp64 = fTempPerm17;
		float fTemp65 = fTempPerm18;
		float fTemp66 = fTempPerm19;
		float fTemp67 = fTempPerm20;
		float fTemp68 = fTempPerm21;
		int iTemp69 = iTempPerm22;
		float fSlow403 = float(fHslider129);
		float fSlow404 = float(fHslider130);
		float fSlow405 = float(fHslider131);
		float fSlow406 = float(fHslider132);
		float fTemp71 = fTempPerm23;
		int iTemp72 = iTempPerm24;
		float fTemp73 = fTempPerm25;
		int iTemp74 = iTempPerm26;
		float fTemp75 = fTempPerm27;
		int iTemp76 = iTempPerm28;
		int iTemp77 = iTempPerm29;
		int iTemp78 = iTempPerm30;
		float fTemp70 = fTempPerm31;
		float fSlow407 = float(fHslider133);
		float fSlow408 = float(fHslider134);
		float fSlow409 = float(fHslider135);
		float fSlow410 = float(fHslider136);
		float fTemp79 = fTempPerm32;
		float fSlow411 = float(fHslider137);
		float fSlow412 = float(fHslider138);
		float fSlow413 = float(fHslider139);
		float fSlow414 = float(fHslider140);
		float fTemp80 = fTempPerm33;
		float fSlow415 = float(fHslider141);
		float fSlow416 = float(fHslider142);
		float fSlow417 = float(fHslider143);
		float fSlow418 = float(fHslider144);
		float fTemp81 = fTempPerm34;
		float fTemp82 = fTempPerm35;
		float fSlow419 = float(fHslider145);
		float fSlow420 = float(fHslider146);
		float fSlow421 = float(fHslider147);
		float fSlow422 = float(fHslider148);
		float fTemp83 = fTempPerm36;
		float fSlow423 = float(fHslider149);
		float fSlow424 = float(fHslider150);
		float fSlow425 = float(fHslider151);
		float fSlow426 = float(fHslider152);
		float fTemp84 = fTempPerm37;
		float fSlow427 = float(fHslider153);
		float fSlow428 = float(fHslider154);
		float fSlow429 = float(fHslider155);
		float fSlow430 = float(fHslider156);
		float fTemp85 = fTempPerm38;
		float fSlow431 = float(fHslider157);
		float fSlow432 = float(fHslider158);
		float fSlow433 = float(fHslider159);
		float fSlow434 = float(fHslider160);
		float fTemp86 = fTempPerm39;
		float fTemp87 = fTempPerm40;
		float fSlow435 = float(fHslider161);
		float fSlow436 = float(fHslider162);
		float fSlow437 = float(fHslider163);
		float fSlow438 = float(fHslider164);
		float fTemp88 = fTempPerm41;
		float fSlow439 = float(fHslider165);
		float fSlow440 = float(fHslider166);
		float fSlow441 = float(fHslider167);
		float fSlow442 = float(fHslider168);
		float fTemp89 = fTempPerm42;
		float fSlow443 = float(fHslider169);
		float fSlow444 = float(fHslider170);
		float fSlow445 = float(fHslider171);
		float fSlow446 = float(fHslider172);
		float fTemp90 = fTempPerm43;
		float fSlow447 = float(fHslider173);
		float fSlow448 = float(fHslider174);
		float fSlow449 = float(fHslider175);
		float fSlow450 = float(fHslider176);
		float fTemp91 = fTempPerm44;
		float fTemp92 = fTempPerm45;
		float fSlow451 = float(fHslider177);
		float fSlow452 = float(fHslider178);
		float fSlow453 = float(fHslider179);
		float fSlow454 = float(fHslider180);
		float fTemp93 = fTempPerm46;
		float fSlow455 = float(fHslider181);
		float fSlow456 = float(fHslider182);
		float fSlow457 = float(fHslider183);
		float fSlow458 = float(fHslider184);
		float fTemp94 = fTempPerm47;
		float fSlow459 = float(fHslider185);
		float fSlow460 = float(fHslider186);
		float fSlow461 = float(fHslider187);
		float fSlow462 = float(fHslider188);
		float fTemp95 = fTempPerm48;
		float fSlow463 = float(fHslider189);
		float fSlow464 = float(fHslider190);
		float fSlow465 = float(fHslider191);
		float fSlow466 = float(fHslider192);
		float fTemp96 = fTempPerm49;
		float fTemp97 = fTempPerm50;
		int iSlow467 = int(float(fEntry0));
		int iSlow468 = (iSlow467 == 0);
		int iSlow469 = (iSlow467 == 1);
		float fSlow470 = float(fVslider7);
		int iSlow471 = (std::fabs(fSlow470) < 1.1920929e-07f);
		float fSlow472 = (iSlow471 ? 0.0f : std::exp((0.0f - (fConst1 / (iSlow471 ? 1.0f : fSlow470)))));
		float fSlow473 = (4.0f * float(fHslider193));
		float fSlow474 = (fSlow473 * (1.0f - fSlow472));
		float fTemp98 = fTempPerm51;
		float fSlow475 = std::pow(2.0f, ((1.01725263e-05f * fSlow112) * ((fSlow113 > 0.0f) ? float(fEntry2) : (0.0f - float(fEntry1)))));
		float fTemp99 = fTempPerm52;
		int iSlow476 = (float(fCheckbox0) != 1.0f);
		float fSlow477 = float(fVslider8);
		float fTemp100 = fTempPerm53;
		float fTemp101 = fTempPerm54;
		float fSlow478 = float(fHslider194);
		float fSlow479 = float(fHslider195);
		float fSlow480 = float(fHslider196);
		float fSlow481 = float(fHslider197);
		float fTemp102 = fTempPerm55;
		float fSlow482 = float(fHslider198);
		float fSlow483 = float(fHslider199);
		float fSlow484 = float(fHslider200);
		float fSlow485 = float(fHslider201);
		float fTemp103 = fTempPerm56;
		float fSlow486 = float(fHslider202);
		float fSlow487 = float(fHslider203);
		float fSlow488 = float(fHslider204);
		float fSlow489 = float(fHslider205);
		float fTemp104 = fTempPerm57;
		float fSlow490 = float(fHslider206);
		float fSlow491 = float(fHslider207);
		float fSlow492 = float(fHslider208);
		float fSlow493 = float(fHslider209);
		float fTemp105 = fTempPerm58;
		float fTemp106 = fTempPerm59;
		float fSlow494 = float(fHslider210);
		float fSlow495 = float(fHslider211);
		float fSlow496 = float(fHslider212);
		float fSlow497 = float(fHslider213);
		float fTemp107 = fTempPerm60;
		float fSlow498 = float(fHslider214);
		float fSlow499 = float(fHslider215);
		float fSlow500 = float(fHslider216);
		float fSlow501 = float(fHslider217);
		float fTemp108 = fTempPerm61;
		float fSlow502 = float(fHslider218);
		float fSlow503 = float(fHslider219);
		float fSlow504 = float(fHslider220);
		float fSlow505 = float(fHslider221);
		float fTemp109 = fTempPerm62;
		float fSlow506 = float(fHslider222);
		float fSlow507 = float(fHslider223);
		float fSlow508 = float(fHslider224);
		float fSlow509 = float(fHslider225);
		float fTemp110 = fTempPerm63;
		float fTemp111 = fTempPerm64;
		float fTemp112 = fTempPerm65;
		float fTemp113 = fTempPerm66;
		float fTemp114 = fTempPerm67;
		float fTemp115 = fTempPerm68;
		int iTemp116 = iTempPerm69;
		float fSlow510 = float(fHslider226);
		float fSlow511 = float(fHslider227);
		float fSlow512 = float(fHslider228);
		float fSlow513 = float(fHslider229);
		float fTemp117 = fTempPerm70;
		float fSlow514 = float(fHslider230);
		float fSlow515 = float(fHslider231);
		float fSlow516 = float(fHslider232);
		float fSlow517 = float(fHslider233);
		float fTemp118 = fTempPerm71;
		float fSlow518 = float(fHslider234);
		float fSlow519 = float(fHslider235);
		float fSlow520 = float(fHslider236);
		float fSlow521 = float(fHslider237);
		float fTemp119 = fTempPerm72;
		float fSlow522 = float(fHslider238);
		float fSlow523 = float(fHslider239);
		float fSlow524 = float(fHslider240);
		float fSlow525 = float(fHslider241);
		float fTemp120 = fTempPerm73;
		float fTemp121 = fTempPerm74;
		float fTemp122 = fTempPerm75;
		float fTemp123 = fTempPerm76;
		float fSlow526 = float(fHslider242);
		float fSlow527 = float(fHslider243);
		float fSlow528 = float(fHslider244);
		float fSlow529 = float(fHslider245);
		float fTemp124 = fTempPerm77;
		float fSlow530 = float(fHslider246);
		float fSlow531 = float(fHslider247);
		float fSlow532 = float(fHslider248);
		float fSlow533 = float(fHslider249);
		float fTemp125 = fTempPerm78;
		float fSlow534 = float(fHslider250);
		float fSlow535 = float(fHslider251);
		float fSlow536 = float(fHslider252);
		float fSlow537 = float(fHslider253);
		float fTemp126 = fTempPerm79;
		float fSlow538 = float(fHslider254);
		float fSlow539 = float(fHslider255);
		float fSlow540 = float(fHslider256);
		float fSlow541 = float(fHslider257);
		float fTemp127 = fTempPerm80;
		float fTemp128 = fTempPerm81;
		float fTemp129 = fTempPerm82;
		float fTemp130 = fTempPerm83;
		float fTemp131 = fTempPerm84;
		float fTemp132 = fTempPerm85;
		float fTemp133 = fTempPerm86;
		float fTemp134 = fTempPerm87;
		float fTemp135 = fTempPerm88;
		float fTemp136 = fTempPerm89;
		float fTemp137 = fTempPerm90;
		float fTemp138 = fTempPerm91;
		float fTemp139 = fTempPerm92;
		float fTemp140 = fTempPerm93;
		float fTemp141 = fTempPerm94;
		float fTemp142 = fTempPerm95;
		float fTemp143 = fTempPerm96;
		float fTemp144 = fTempPerm97;
		float fTemp145 = fTempPerm98;
		float fTemp146 = fTempPerm99;
		float fTemp147 = fTempPerm100;
		float fTemp148 = fTempPerm101;
		float fTemp149 = fTempPerm102;
		float fTemp150 = fTempPerm103;
		float fTemp151 = fTempPerm104;
		float fTemp152 = fTempPerm105;
		float fTemp153 = fTempPerm106;
		float fSlow542 = float(((fSlow11 > 5.0f) ? 64 : 1));
		float fSlow543 = float(fHslider258);
		float fSlow544 = float(fHslider259);
		float fSlow545 = float(fHslider260);
		float fSlow546 = float(fHslider261);
		float fTemp154 = fTempPerm107;
		float fSlow547 = float(fHslider262);
		float fSlow548 = float(fHslider263);
		float fSlow549 = float(fHslider264);
		float fSlow550 = float(fHslider265);
		float fTemp155 = fTempPerm108;
		float fSlow551 = float(fHslider266);
		float fSlow552 = float(fHslider267);
		float fSlow553 = float(fHslider268);
		float fSlow554 = float(fHslider269);
		float fTemp156 = fTempPerm109;
		float fSlow555 = float(fHslider270);
		float fSlow556 = float(fHslider271);
		float fSlow557 = float(fHslider272);
		float fSlow558 = float(fHslider273);
		float fTemp157 = fTempPerm110;
		float fTemp158 = fTempPerm111;
		float fTemp159 = fTempPerm112;
		float fTemp160 = fTempPerm113;
		float fTemp161 = fTempPerm114;
		float fTemp162 = fTempPerm115;
		float fTemp163 = fTempPerm116;
		float fTemp164 = fTempPerm117;
		float fTemp165 = fTempPerm118;
		float fTemp166 = fTempPerm119;
		int iTemp167 = iTempPerm120;
		int iTemp168 = iTempPerm121;
		float fTemp169 = fTempPerm122;
		float fTemp170 = fTempPerm123;
		float fTemp171 = fTempPerm124;
		float fTemp172 = fTempPerm125;
		float fTemp173 = fTempPerm126;
		float fTemp174 = fTempPerm127;
		float fTemp175 = fTempPerm128;
		int iTemp176 = iTempPerm129;
		float fTemp177 = fTempPerm130;
		float fTemp178 = fTempPerm131;
		float fTemp179 = fTempPerm132;
		float fTemp180 = fTempPerm133;
		float fTemp181 = fTempPerm134;
		float fTemp182 = fTempPerm135;
		float fTemp183 = fTempPerm136;
		float fTemp184 = fTempPerm137;
		float fTemp185 = fTempPerm138;
		float fTemp186 = fTempPerm139;
		float fTemp187 = fTempPerm140;
		float fTemp188 = fTempPerm141;
		float fTemp189 = fTempPerm142;
		float fTemp190 = fTempPerm143;
		float fTemp191 = fTempPerm144;
		float fTemp192 = fTempPerm145;
		float fTemp193 = fTempPerm146;
		float fTemp194 = fTempPerm147;
		float fTemp195 = fTempPerm148;
		float fTemp196 = fTempPerm149;
		int iTemp197 = iTempPerm150;
		int iTemp198 = iTempPerm151;
		float fTemp199 = fTempPerm152;
		float fTemp200 = fTempPerm153;
		float fTemp201 = fTempPerm154;
		float fTemp202 = fTempPerm155;
		float fTemp203 = fTempPerm156;
		float fTemp204 = fTempPerm157;
		float fTemp205 = fTempPerm158;
		float fTemp206 = fTempPerm159;
		float fTemp207 = fTempPerm160;
		float fTemp208 = fTempPerm161;
		float fTemp209 = fTempPerm162;
		float fTemp210 = fTempPerm163;
		float fTemp211 = fTempPerm164;
		float fTemp212 = fTempPerm165;
		float fTemp213 = fTempPerm166;
		float fTemp214 = fTempPerm167;
		float fTemp215 = fTempPerm168;
		float fTemp216 = fTempPerm169;
		float fTemp217 = fTempPerm170;
		float fTemp218 = fTempPerm171;
		float fTemp219 = fTempPerm172;
		float fTemp220 = fTempPerm173;
		float fTemp221 = fTempPerm174;
		float fTemp222 = fTempPerm175;
		float fTemp223 = fTempPerm176;
		float fTemp224 = fTempPerm177;
		float fTemp225 = fTempPerm178;
		float fTemp226 = fTempPerm179;
		float fTemp227 = fTempPerm180;
		float fTemp228 = fTempPerm181;
		float fTemp229 = fTempPerm182;
		float fTemp230 = fTempPerm183;
		float fTemp231 = fTempPerm184;
		float fTemp232 = fTempPerm185;
		float fTemp233 = fTempPerm186;
		float fTemp234 = fTempPerm187;
		float fTemp235 = fTempPerm188;
		float fTemp236 = fTempPerm189;
		float fTemp237 = fTempPerm190;
		float fTemp238 = fTempPerm191;
		float fTemp239 = fTempPerm192;
		float fTemp240 = fTempPerm193;
		float fTemp241 = fTempPerm194;
		float fTemp242 = fTempPerm195;
		float fTemp243 = fTempPerm196;
		float fTemp244 = fTempPerm197;
		float fTemp245 = fTempPerm198;
		float fTemp246 = fTempPerm199;
		float fTemp247 = fTempPerm200;
		float fTemp248 = fTempPerm201;
		float fTemp249 = fTempPerm202;
		float fTemp250 = fTempPerm203;
		float fTemp251 = fTempPerm204;
		float fTemp252 = fTempPerm205;
		float fTemp253 = fTempPerm206;
		float fTemp254 = fTempPerm207;
		float fTemp255 = fTempPerm208;
		float fTemp256 = fTempPerm209;
		float fTemp257 = fTempPerm210;
		float fTemp258 = fTempPerm211;
		float fTemp259 = fTempPerm212;
		float fTemp260 = fTempPerm213;
		float fTemp261 = fTempPerm214;
		float fTemp262 = fTempPerm215;
		float fTemp263 = fTempPerm216;
		float fTemp264 = fTempPerm217;
		float fTemp265 = fTempPerm218;
		float fTemp266 = fTempPerm219;
		float fTemp267 = fTempPerm220;
		float fSlow559 = float(fHslider274);
		float fSlow560 = float(fHslider275);
		float fSlow561 = float(fHslider276);
		float fSlow562 = float(fHslider277);
		float fTemp268 = fTempPerm221;
		float fSlow563 = float(fHslider278);
		float fSlow564 = float(fHslider279);
		float fSlow565 = float(fHslider280);
		float fSlow566 = float(fHslider281);
		float fTemp269 = fTempPerm222;
		float fSlow567 = float(fHslider282);
		float fSlow568 = float(fHslider283);
		float fSlow569 = float(fHslider284);
		float fSlow570 = float(fHslider285);
		float fTemp270 = fTempPerm223;
		float fSlow571 = float(fHslider286);
		float fSlow572 = float(fHslider287);
		float fSlow573 = float(fHslider288);
		float fSlow574 = float(fHslider289);
		float fTemp271 = fTempPerm224;
		float fTemp272 = fTempPerm225;
		float fSlow575 = float(fHslider290);
		float fSlow576 = float(fHslider291);
		float fSlow577 = float(fHslider292);
		float fSlow578 = float(fHslider293);
		float fTemp273 = fTempPerm226;
		float fSlow579 = float(fHslider294);
		float fSlow580 = float(fHslider295);
		float fSlow581 = float(fHslider296);
		float fSlow582 = float(fHslider297);
		float fTemp274 = fTempPerm227;
		float fSlow583 = float(fHslider298);
		float fSlow584 = float(fHslider299);
		float fSlow585 = float(fHslider300);
		float fSlow586 = float(fHslider301);
		float fTemp275 = fTempPerm228;
		float fSlow587 = float(fHslider302);
		float fSlow588 = float(fHslider303);
		float fSlow589 = float(fHslider304);
		float fSlow590 = float(fHslider305);
		float fTemp276 = fTempPerm229;
		float fTemp277 = fTempPerm230;
		float fSlow591 = float(fHslider306);
		float fSlow592 = float(fHslider307);
		float fSlow593 = float(fHslider308);
		float fSlow594 = float(fHslider309);
		float fTemp278 = fTempPerm231;
		float fSlow595 = float(fHslider310);
		float fSlow596 = float(fHslider311);
		float fSlow597 = float(fHslider312);
		float fSlow598 = float(fHslider313);
		float fTemp279 = fTempPerm232;
		float fSlow599 = float(fHslider314);
		float fSlow600 = float(fHslider315);
		float fSlow601 = float(fHslider316);
		float fSlow602 = float(fHslider317);
		float fTemp280 = fTempPerm233;
		float fSlow603 = float(fHslider318);
		float fSlow604 = float(fHslider319);
		float fSlow605 = float(fHslider320);
		float fSlow606 = float(fHslider321);
		float fTemp281 = fTempPerm234;
		float fTemp282 = fTempPerm235;
		float fSlow607 = float(fHslider322);
		float fSlow608 = float(fHslider323);
		float fSlow609 = float(fHslider324);
		float fSlow610 = float(fHslider325);
		float fTemp283 = fTempPerm236;
		float fSlow611 = float(fHslider326);
		float fSlow612 = float(fHslider327);
		float fSlow613 = float(fHslider328);
		float fSlow614 = float(fHslider329);
		float fTemp284 = fTempPerm237;
		float fSlow615 = float(fHslider330);
		float fSlow616 = float(fHslider331);
		float fSlow617 = float(fHslider332);
		float fSlow618 = float(fHslider333);
		float fTemp285 = fTempPerm238;
		float fSlow619 = float(fHslider334);
		float fSlow620 = float(fHslider335);
		float fSlow621 = float(fHslider336);
		float fSlow622 = float(fHslider337);
		float fTemp286 = fTempPerm239;
		float fTemp287 = fTempPerm240;
		float fSlow623 = float(fHslider338);
		float fSlow624 = float(fHslider339);
		float fSlow625 = float(fHslider340);
		float fSlow626 = float(fHslider341);
		float fTemp288 = fTempPerm241;
		float fSlow627 = float(fHslider342);
		float fSlow628 = float(fHslider343);
		float fSlow629 = float(fHslider344);
		float fSlow630 = float(fHslider345);
		float fTemp289 = fTempPerm242;
		float fSlow631 = float(fHslider346);
		float fSlow632 = float(fHslider347);
		float fSlow633 = float(fHslider348);
		float fSlow634 = float(fHslider349);
		float fTemp290 = fTempPerm243;
		float fSlow635 = float(fHslider350);
		float fSlow636 = float(fHslider351);
		float fSlow637 = float(fHslider352);
		float fSlow638 = float(fHslider353);
		float fTemp291 = fTempPerm244;
		float fTemp292 = fTempPerm245;
		float fTemp293 = fTempPerm246;
		float fTemp294 = fTempPerm247;
		float fTemp295 = fTempPerm248;
		int iTemp296 = iTempPerm249;
		float fSlow639 = float(fHslider354);
		float fSlow640 = float(fHslider355);
		float fSlow641 = float(fHslider356);
		float fSlow642 = float(fHslider357);
		float fTemp297 = fTempPerm250;
		float fSlow643 = float(fHslider358);
		float fSlow644 = float(fHslider359);
		float fSlow645 = float(fHslider360);
		float fSlow646 = float(fHslider361);
		float fTemp298 = fTempPerm251;
		float fSlow647 = float(fHslider362);
		float fSlow648 = float(fHslider363);
		float fSlow649 = float(fHslider364);
		float fSlow650 = float(fHslider365);
		float fTemp299 = fTempPerm252;
		float fSlow651 = float(fHslider366);
		float fSlow652 = float(fHslider367);
		float fSlow653 = float(fHslider368);
		float fSlow654 = float(fHslider369);
		float fTemp300 = fTempPerm253;
		float fTemp301 = fTempPerm254;
		float fTemp302 = fTempPerm255;
		float fTemp303 = fTempPerm256;
		float fTemp304 = fTempPerm257;
		float fTemp305 = fTempPerm258;
		float fTemp306 = fTempPerm259;
		float fTemp307 = fTempPerm260;
		float fTemp308 = fTempPerm261;
		float fTemp309 = fTempPerm262;
		float fTemp310 = fTempPerm263;
		float fTemp311 = fTempPerm264;
		float fTemp312 = fTempPerm265;
		float fTemp313 = fTempPerm266;
		float fTemp314 = fTempPerm267;
		float fTemp315 = fTempPerm268;
		float fSlow655 = float(((fSlow323 > 5.0f) ? 64 : 1));
		float fSlow656 = float(fHslider370);
		float fSlow657 = float(fHslider371);
		float fSlow658 = float(fHslider372);
		float fSlow659 = float(fHslider373);
		float fTemp316 = fTempPerm269;
		float fSlow660 = float(fHslider374);
		float fSlow661 = float(fHslider375);
		float fSlow662 = float(fHslider376);
		float fSlow663 = float(fHslider377);
		float fTemp317 = fTempPerm270;
		float fSlow664 = float(fHslider378);
		float fSlow665 = float(fHslider379);
		float fSlow666 = float(fHslider380);
		float fSlow667 = float(fHslider381);
		float fTemp318 = fTempPerm271;
		float fSlow668 = float(fHslider382);
		float fSlow669 = float(fHslider383);
		float fSlow670 = float(fHslider384);
		float fSlow671 = float(fHslider385);
		float fTemp319 = fTempPerm272;
		float fTemp320 = fTempPerm273;
		float fTemp321 = fTempPerm274;
		float fTemp322 = fTempPerm275;
		float fTemp323 = fTempPerm276;
		float fTemp324 = fTempPerm277;
		float fTemp325 = fTempPerm278;
		float fTemp326 = fTempPerm279;
		float fTemp327 = fTempPerm280;
		float fTemp328 = fTempPerm281;
		int iTemp329 = iTempPerm282;
		int iTemp330 = iTempPerm283;
		float fTemp331 = fTempPerm284;
		float fTemp332 = fTempPerm285;
		float fTemp333 = fTempPerm286;
		float fTemp334 = fTempPerm287;
		float fTemp335 = fTempPerm288;
		float fTemp336 = fTempPerm289;
		float fTemp337 = fTempPerm290;
		int iTemp338 = iTempPerm291;
		float fTemp339 = fTempPerm292;
		float fTemp340 = fTempPerm293;
		float fTemp341 = fTempPerm294;
		float fTemp342 = fTempPerm295;
		float fTemp343 = fTempPerm296;
		float fTemp344 = fTempPerm297;
		float fTemp345 = fTempPerm298;
		float fTemp346 = fTempPerm299;
		float fTemp347 = fTempPerm300;
		float fTemp348 = fTempPerm301;
		float fTemp349 = fTempPerm302;
		float fTemp350 = fTempPerm303;
		float fTemp351 = fTempPerm304;
		float fTemp352 = fTempPerm305;
		float fTemp353 = fTempPerm306;
		float fTemp354 = fTempPerm307;
		float fTemp355 = fTempPerm308;
		float fTemp356 = fTempPerm309;
		float fTemp357 = fTempPerm310;
		int iTemp358 = iTempPerm311;
		int iTemp359 = iTempPerm312;
		float fTemp360 = fTempPerm313;
		float fTemp361 = fTempPerm314;
		float fTemp362 = fTempPerm315;
		float fTemp363 = fTempPerm316;
		float fTemp364 = fTempPerm317;
		float fTemp365 = fTempPerm318;
		float fTemp366 = fTempPerm319;
		float fTemp367 = fTempPerm320;
		float fTemp368 = fTempPerm321;
		float fTemp369 = fTempPerm322;
		float fTemp370 = fTempPerm323;
		float fTemp371 = fTempPerm324;
		float fTemp372 = fTempPerm325;
		float fTemp373 = fTempPerm326;
		float fTemp374 = fTempPerm327;
		float fTemp375 = fTempPerm328;
		float fTemp376 = fTempPerm329;
		float fTemp377 = fTempPerm330;
		float fTemp378 = fTempPerm331;
		float fTemp379 = fTempPerm332;
		float fTemp380 = fTempPerm333;
		float fTemp381 = fTempPerm334;
		float fTemp382 = fTempPerm335;
		float fTemp383 = fTempPerm336;
		float fTemp384 = fTempPerm337;
		float fTemp385 = fTempPerm338;
		float fTemp386 = fTempPerm339;
		float fTemp387 = fTempPerm340;
		float fTemp388 = fTempPerm341;
		float fTemp389 = fTempPerm342;
		float fTemp390 = fTempPerm343;
		float fTemp391 = fTempPerm344;
		float fTemp392 = fTempPerm345;
		float fTemp393 = fTempPerm346;
		float fTemp394 = fTempPerm347;
		float fTemp395 = fTempPerm348;
		float fTemp396 = fTempPerm349;
		float fTemp397 = fTempPerm350;
		float fTemp398 = fTempPerm351;
		float fTemp399 = fTempPerm352;
		float fTemp400 = fTempPerm353;
		float fTemp401 = fTempPerm354;
		float fTemp402 = fTempPerm355;
		float fTemp403 = fTempPerm356;
		float fTemp404 = fTempPerm357;
		float fTemp405 = fTempPerm358;
		float fTemp406 = fTempPerm359;
		float fTemp407 = fTempPerm360;
		float fTemp408 = fTempPerm361;
		float fTemp409 = fTempPerm362;
		float fTemp410 = fTempPerm363;
		float fTemp411 = fTempPerm364;
		float fTemp412 = fTempPerm365;
		float fTemp413 = fTempPerm366;
		float fTemp414 = fTempPerm367;
		float fTemp415 = fTempPerm368;
		float fTemp416 = fTempPerm369;
		float fTemp417 = fTempPerm370;
		float fTemp418 = fTempPerm371;
		float fTemp419 = fTempPerm372;
		float fTemp420 = fTempPerm373;
		float fTemp421 = fTempPerm374;
		float fTemp422 = fTempPerm375;
		float fTemp423 = fTempPerm376;
		float fTemp424 = fTempPerm377;
		float fTemp425 = fTempPerm378;
		float fTemp426 = fTempPerm379;
		float fTemp427 = fTempPerm380;
		float fTemp428 = fTempPerm381;
		float fSlow672 = float(fHslider386);
		float fSlow673 = float(fHslider387);
		float fSlow674 = float(fHslider388);
		float fSlow675 = float(fHslider389);
		float fTemp429 = fTempPerm382;
		float fSlow676 = float(fHslider390);
		float fSlow677 = float(fHslider391);
		float fSlow678 = float(fHslider392);
		float fSlow679 = float(fHslider393);
		float fTemp430 = fTempPerm383;
		float fSlow680 = float(fHslider394);
		float fSlow681 = float(fHslider395);
		float fSlow682 = float(fHslider396);
		float fSlow683 = float(fHslider397);
		float fTemp431 = fTempPerm384;
		float fSlow684 = float(fHslider398);
		float fSlow685 = float(fHslider399);
		float fSlow686 = float(fHslider400);
		float fSlow687 = float(fHslider401);
		float fTemp432 = fTempPerm385;
		float fTemp433 = fTempPerm386;
		float fSlow688 = float(fHslider402);
		float fSlow689 = float(fHslider403);
		float fSlow690 = float(fHslider404);
		float fSlow691 = float(fHslider405);
		float fTemp434 = fTempPerm387;
		float fSlow692 = float(fHslider406);
		float fSlow693 = float(fHslider407);
		float fSlow694 = float(fHslider408);
		float fSlow695 = float(fHslider409);
		float fTemp435 = fTempPerm388;
		float fSlow696 = float(fHslider410);
		float fSlow697 = float(fHslider411);
		float fSlow698 = float(fHslider412);
		float fSlow699 = float(fHslider413);
		float fTemp436 = fTempPerm389;
		float fSlow700 = float(fHslider414);
		float fSlow701 = float(fHslider415);
		float fSlow702 = float(fHslider416);
		float fSlow703 = float(fHslider417);
		float fTemp437 = fTempPerm390;
		float fTemp438 = fTempPerm391;
		float fSlow704 = float(fHslider418);
		float fSlow705 = float(fHslider419);
		float fSlow706 = float(fHslider420);
		float fSlow707 = float(fHslider421);
		float fTemp439 = fTempPerm392;
		float fSlow708 = float(fHslider422);
		float fSlow709 = float(fHslider423);
		float fSlow710 = float(fHslider424);
		float fSlow711 = float(fHslider425);
		float fTemp440 = fTempPerm393;
		float fSlow712 = float(fHslider426);
		float fSlow713 = float(fHslider427);
		float fSlow714 = float(fHslider428);
		float fSlow715 = float(fHslider429);
		float fTemp441 = fTempPerm394;
		float fSlow716 = float(fHslider430);
		float fSlow717 = float(fHslider431);
		float fSlow718 = float(fHslider432);
		float fSlow719 = float(fHslider433);
		float fTemp442 = fTempPerm395;
		float fTemp443 = fTempPerm396;
		float fSlow720 = float(fHslider434);
		float fSlow721 = float(fHslider435);
		float fSlow722 = float(fHslider436);
		float fSlow723 = float(fHslider437);
		float fTemp444 = fTempPerm397;
		float fSlow724 = float(fHslider438);
		float fSlow725 = float(fHslider439);
		float fSlow726 = float(fHslider440);
		float fSlow727 = float(fHslider441);
		float fTemp445 = fTempPerm398;
		float fSlow728 = float(fHslider442);
		float fSlow729 = float(fHslider443);
		float fSlow730 = float(fHslider444);
		float fSlow731 = float(fHslider445);
		float fTemp446 = fTempPerm399;
		float fSlow732 = float(fHslider446);
		float fSlow733 = float(fHslider447);
		float fSlow734 = float(fHslider448);
		float fSlow735 = float(fHslider449);
		float fTemp447 = fTempPerm400;
		float fTemp448 = fTempPerm401;
		float fSlow736 = float(fHslider450);
		float fSlow737 = float(fHslider451);
		float fSlow738 = float(fHslider452);
		float fSlow739 = float(fHslider453);
		float fTemp449 = fTempPerm402;
		float fSlow740 = float(fHslider454);
		float fSlow741 = float(fHslider455);
		float fSlow742 = float(fHslider456);
		float fSlow743 = float(fHslider457);
		float fTemp450 = fTempPerm403;
		float fSlow744 = float(fHslider458);
		float fSlow745 = float(fHslider459);
		float fSlow746 = float(fHslider460);
		float fSlow747 = float(fHslider461);
		float fTemp451 = fTempPerm404;
		float fSlow748 = float(fHslider462);
		float fSlow749 = float(fHslider463);
		float fSlow750 = float(fHslider464);
		float fSlow751 = float(fHslider465);
		float fTemp452 = fTempPerm405;
		float fTemp453 = fTempPerm406;
		float fTemp454 = fTempPerm407;
		float fTemp455 = fTempPerm408;
		float fTemp456 = fTempPerm409;
		int iTemp457 = iTempPerm410;
		float fSlow752 = float(fHslider466);
		float fSlow753 = float(fHslider467);
		float fSlow754 = float(fHslider468);
		float fSlow755 = float(fHslider469);
		float fTemp458 = fTempPerm411;
		float fSlow756 = float(fHslider470);
		float fSlow757 = float(fHslider471);
		float fSlow758 = float(fHslider472);
		float fSlow759 = float(fHslider473);
		float fTemp459 = fTempPerm412;
		float fSlow760 = float(fHslider474);
		float fSlow761 = float(fHslider475);
		float fSlow762 = float(fHslider476);
		float fSlow763 = float(fHslider477);
		float fTemp460 = fTempPerm413;
		float fSlow764 = float(fHslider478);
		float fSlow765 = float(fHslider479);
		float fSlow766 = float(fHslider480);
		float fSlow767 = float(fHslider481);
		float fTemp461 = fTempPerm414;
		float fTemp462 = fTempPerm415;
		float fTemp463 = fTempPerm416;
		float fTemp464 = fTempPerm417;
		float fTemp465 = fTempPerm418;
		float fTemp466 = fTempPerm419;
		float fTemp467 = fTempPerm420;
		float fTemp468 = fTempPerm421;
		float fTemp469 = fTempPerm422;
		float fTemp470 = fTempPerm423;
		float fTemp471 = fTempPerm424;
		float fTemp472 = fTempPerm425;
		float fTemp473 = fTempPerm426;
		float fTemp474 = fTempPerm427;
		float fTemp475 = fTempPerm428;
		float fTemp476 = fTempPerm429;
		float fSlow768 = float(((fSlow303 > 5.0f) ? 64 : 1));
		float fSlow769 = float(fHslider482);
		float fSlow770 = float(fHslider483);
		float fSlow771 = float(fHslider484);
		float fSlow772 = float(fHslider485);
		float fTemp477 = fTempPerm430;
		float fSlow773 = float(fHslider486);
		float fSlow774 = float(fHslider487);
		float fSlow775 = float(fHslider488);
		float fSlow776 = float(fHslider489);
		float fTemp478 = fTempPerm431;
		float fSlow777 = float(fHslider490);
		float fSlow778 = float(fHslider491);
		float fSlow779 = float(fHslider492);
		float fSlow780 = float(fHslider493);
		float fTemp479 = fTempPerm432;
		float fSlow781 = float(fHslider494);
		float fSlow782 = float(fHslider495);
		float fSlow783 = float(fHslider496);
		float fSlow784 = float(fHslider497);
		float fTemp480 = fTempPerm433;
		float fTemp481 = fTempPerm434;
		float fTemp482 = fTempPerm435;
		float fTemp483 = fTempPerm436;
		float fTemp484 = fTempPerm437;
		float fTemp485 = fTempPerm438;
		float fTemp486 = fTempPerm439;
		float fTemp487 = fTempPerm440;
		float fTemp488 = fTempPerm441;
		float fTemp489 = fTempPerm442;
		int iTemp490 = iTempPerm443;
		int iTemp491 = iTempPerm444;
		float fTemp492 = fTempPerm445;
		float fTemp493 = fTempPerm446;
		float fTemp494 = fTempPerm447;
		float fTemp495 = fTempPerm448;
		float fTemp496 = fTempPerm449;
		float fTemp497 = fTempPerm450;
		float fTemp498 = fTempPerm451;
		int iTemp499 = iTempPerm452;
		float fTemp500 = fTempPerm453;
		float fTemp501 = fTempPerm454;
		float fTemp502 = fTempPerm455;
		float fTemp503 = fTempPerm456;
		float fTemp504 = fTempPerm457;
		float fTemp505 = fTempPerm458;
		float fTemp506 = fTempPerm459;
		float fTemp507 = fTempPerm460;
		float fTemp508 = fTempPerm461;
		float fTemp509 = fTempPerm462;
		float fTemp510 = fTempPerm463;
		float fTemp511 = fTempPerm464;
		float fTemp512 = fTempPerm465;
		float fTemp513 = fTempPerm466;
		float fTemp514 = fTempPerm467;
		float fTemp515 = fTempPerm468;
		float fTemp516 = fTempPerm469;
		float fTemp517 = fTempPerm470;
		float fTemp518 = fTempPerm471;
		int iTemp519 = iTempPerm472;
		int iTemp520 = iTempPerm473;
		float fTemp521 = fTempPerm474;
		float fTemp522 = fTempPerm475;
		float fTemp523 = fTempPerm476;
		float fTemp524 = fTempPerm477;
		float fTemp525 = fTempPerm478;
		float fTemp526 = fTempPerm479;
		float fTemp527 = fTempPerm480;
		float fTemp528 = fTempPerm481;
		float fTemp529 = fTempPerm482;
		float fTemp530 = fTempPerm483;
		float fTemp531 = fTempPerm484;
		float fTemp532 = fTempPerm485;
		float fTemp533 = fTempPerm486;
		float fTemp534 = fTempPerm487;
		float fTemp535 = fTempPerm488;
		float fTemp536 = fTempPerm489;
		float fTemp537 = fTempPerm490;
		float fTemp538 = fTempPerm491;
		float fTemp539 = fTempPerm492;
		float fTemp540 = fTempPerm493;
		float fTemp541 = fTempPerm494;
		float fTemp542 = fTempPerm495;
		float fTemp543 = fTempPerm496;
		float fTemp544 = fTempPerm497;
		float fTemp545 = fTempPerm498;
		float fTemp546 = fTempPerm499;
		float fTemp547 = fTempPerm500;
		float fTemp548 = fTempPerm501;
		float fTemp549 = fTempPerm502;
		float fTemp550 = fTempPerm503;
		float fTemp551 = fTempPerm504;
		float fTemp552 = fTempPerm505;
		float fTemp553 = fTempPerm506;
		float fTemp554 = fTempPerm507;
		float fTemp555 = fTempPerm508;
		float fTemp556 = fTempPerm509;
		float fTemp557 = fTempPerm510;
		float fTemp558 = fTempPerm511;
		float fTemp559 = fTempPerm512;
		float fTemp560 = fTempPerm513;
		float fTemp561 = fTempPerm514;
		float fTemp562 = fTempPerm515;
		float fTemp563 = fTempPerm516;
		float fTemp564 = fTempPerm517;
		float fTemp565 = fTempPerm518;
		float fTemp566 = fTempPerm519;
		float fTemp567 = fTempPerm520;
		float fTemp568 = fTempPerm521;
		float fTemp569 = fTempPerm522;
		float fTemp570 = fTempPerm523;
		float fTemp571 = fTempPerm524;
		float fTemp572 = fTempPerm525;
		float fTemp573 = fTempPerm526;
		float fTemp574 = fTempPerm527;
		float fTemp575 = fTempPerm528;
		float fTemp576 = fTempPerm529;
		float fTemp577 = fTempPerm530;
		float fTemp578 = fTempPerm531;
		float fTemp579 = fTempPerm532;
		float fTemp580 = fTempPerm533;
		float fTemp581 = fTempPerm534;
		float fTemp582 = fTempPerm535;
		float fTemp583 = fTempPerm536;
		float fTemp584 = fTempPerm537;
		float fTemp585 = fTempPerm538;
		float fTemp586 = fTempPerm539;
		float fTemp587 = fTempPerm540;
		float fTemp588 = fTempPerm541;
		float fTemp589 = fTempPerm542;
		float fSlow785 = float(fHslider498);
		float fSlow786 = float(fHslider499);
		float fSlow787 = float(fHslider500);
		float fSlow788 = float(fHslider501);
		float fTemp590 = fTempPerm543;
		float fSlow789 = float(fHslider502);
		float fSlow790 = float(fHslider503);
		float fSlow791 = float(fHslider504);
		float fSlow792 = float(fHslider505);
		float fTemp591 = fTempPerm544;
		float fSlow793 = float(fHslider506);
		float fSlow794 = float(fHslider507);
		float fSlow795 = float(fHslider508);
		float fSlow796 = float(fHslider509);
		float fTemp592 = fTempPerm545;
		float fSlow797 = float(fHslider510);
		float fSlow798 = float(fHslider511);
		float fSlow799 = float(fHslider512);
		float fSlow800 = float(fHslider513);
		float fTemp593 = fTempPerm546;
		float fTemp594 = fTempPerm547;
		float fSlow801 = float(fHslider514);
		float fSlow802 = float(fHslider515);
		float fSlow803 = float(fHslider516);
		float fSlow804 = float(fHslider517);
		float fTemp595 = fTempPerm548;
		float fSlow805 = float(fHslider518);
		float fSlow806 = float(fHslider519);
		float fSlow807 = float(fHslider520);
		float fSlow808 = float(fHslider521);
		float fTemp596 = fTempPerm549;
		float fSlow809 = float(fHslider522);
		float fSlow810 = float(fHslider523);
		float fSlow811 = float(fHslider524);
		float fSlow812 = float(fHslider525);
		float fTemp597 = fTempPerm550;
		float fSlow813 = float(fHslider526);
		float fSlow814 = float(fHslider527);
		float fSlow815 = float(fHslider528);
		float fSlow816 = float(fHslider529);
		float fTemp598 = fTempPerm551;
		float fTemp599 = fTempPerm552;
		float fSlow817 = float(fHslider530);
		float fSlow818 = float(fHslider531);
		float fSlow819 = float(fHslider532);
		float fSlow820 = float(fHslider533);
		float fTemp600 = fTempPerm553;
		float fSlow821 = float(fHslider534);
		float fSlow822 = float(fHslider535);
		float fSlow823 = float(fHslider536);
		float fSlow824 = float(fHslider537);
		float fTemp601 = fTempPerm554;
		float fSlow825 = float(fHslider538);
		float fSlow826 = float(fHslider539);
		float fSlow827 = float(fHslider540);
		float fSlow828 = float(fHslider541);
		float fTemp602 = fTempPerm555;
		float fSlow829 = float(fHslider542);
		float fSlow830 = float(fHslider543);
		float fSlow831 = float(fHslider544);
		float fSlow832 = float(fHslider545);
		float fTemp603 = fTempPerm556;
		float fTemp604 = fTempPerm557;
		float fSlow833 = float(fHslider546);
		float fSlow834 = float(fHslider547);
		float fSlow835 = float(fHslider548);
		float fSlow836 = float(fHslider549);
		float fTemp605 = fTempPerm558;
		float fSlow837 = float(fHslider550);
		float fSlow838 = float(fHslider551);
		float fSlow839 = float(fHslider552);
		float fSlow840 = float(fHslider553);
		float fTemp606 = fTempPerm559;
		float fSlow841 = float(fHslider554);
		float fSlow842 = float(fHslider555);
		float fSlow843 = float(fHslider556);
		float fSlow844 = float(fHslider557);
		float fTemp607 = fTempPerm560;
		float fSlow845 = float(fHslider558);
		float fSlow846 = float(fHslider559);
		float fSlow847 = float(fHslider560);
		float fSlow848 = float(fHslider561);
		float fTemp608 = fTempPerm561;
		float fTemp609 = fTempPerm562;
		float fSlow849 = float(fHslider562);
		float fSlow850 = float(fHslider563);
		float fSlow851 = float(fHslider564);
		float fSlow852 = float(fHslider565);
		float fTemp610 = fTempPerm563;
		float fSlow853 = float(fHslider566);
		float fSlow854 = float(fHslider567);
		float fSlow855 = float(fHslider568);
		float fSlow856 = float(fHslider569);
		float fTemp611 = fTempPerm564;
		float fSlow857 = float(fHslider570);
		float fSlow858 = float(fHslider571);
		float fSlow859 = float(fHslider572);
		float fSlow860 = float(fHslider573);
		float fTemp612 = fTempPerm565;
		float fSlow861 = float(fHslider574);
		float fSlow862 = float(fHslider575);
		float fSlow863 = float(fHslider576);
		float fSlow864 = float(fHslider577);
		float fTemp613 = fTempPerm566;
		float fTemp614 = fTempPerm567;
		float fTemp615 = fTempPerm568;
		float fTemp616 = fTempPerm569;
		float fTemp617 = fTempPerm570;
		int iTemp618 = iTempPerm571;
		float fSlow865 = float(fHslider578);
		float fSlow866 = float(fHslider579);
		float fSlow867 = float(fHslider580);
		float fSlow868 = float(fHslider581);
		float fTemp619 = fTempPerm572;
		float fSlow869 = float(fHslider582);
		float fSlow870 = float(fHslider583);
		float fSlow871 = float(fHslider584);
		float fSlow872 = float(fHslider585);
		float fTemp620 = fTempPerm573;
		float fSlow873 = float(fHslider586);
		float fSlow874 = float(fHslider587);
		float fSlow875 = float(fHslider588);
		float fSlow876 = float(fHslider589);
		float fTemp621 = fTempPerm574;
		float fSlow877 = float(fHslider590);
		float fSlow878 = float(fHslider591);
		float fSlow879 = float(fHslider592);
		float fSlow880 = float(fHslider593);
		float fTemp622 = fTempPerm575;
		float fTemp623 = fTempPerm576;
		float fTemp624 = fTempPerm577;
		float fTemp625 = fTempPerm578;
		float fTemp626 = fTempPerm579;
		float fTemp627 = fTempPerm580;
		float fTemp628 = fTempPerm581;
		float fTemp629 = fTempPerm582;
		float fTemp630 = fTempPerm583;
		float fTemp631 = fTempPerm584;
		float fTemp632 = fTempPerm585;
		float fTemp633 = fTempPerm586;
		float fTemp634 = fTempPerm587;
		float fTemp635 = fTempPerm588;
		float fTemp636 = fTempPerm589;
		float fTemp637 = fTempPerm590;
		float fSlow881 = float(((fSlow283 > 5.0f) ? 64 : 1));
		float fSlow882 = float(fHslider594);
		float fSlow883 = float(fHslider595);
		float fSlow884 = float(fHslider596);
		float fSlow885 = float(fHslider597);
		float fTemp638 = fTempPerm591;
		float fSlow886 = float(fHslider598);
		float fSlow887 = float(fHslider599);
		float fSlow888 = float(fHslider600);
		float fSlow889 = float(fHslider601);
		float fTemp639 = fTempPerm592;
		float fSlow890 = float(fHslider602);
		float fSlow891 = float(fHslider603);
		float fSlow892 = float(fHslider604);
		float fSlow893 = float(fHslider605);
		float fTemp640 = fTempPerm593;
		float fSlow894 = float(fHslider606);
		float fSlow895 = float(fHslider607);
		float fSlow896 = float(fHslider608);
		float fSlow897 = float(fHslider609);
		float fTemp641 = fTempPerm594;
		float fTemp642 = fTempPerm595;
		float fTemp643 = fTempPerm596;
		float fTemp644 = fTempPerm597;
		float fTemp645 = fTempPerm598;
		float fTemp646 = fTempPerm599;
		float fTemp647 = fTempPerm600;
		float fTemp648 = fTempPerm601;
		float fTemp649 = fTempPerm602;
		float fTemp650 = fTempPerm603;
		int iTemp651 = iTempPerm604;
		int iTemp652 = iTempPerm605;
		float fTemp653 = fTempPerm606;
		float fTemp654 = fTempPerm607;
		float fTemp655 = fTempPerm608;
		float fTemp656 = fTempPerm609;
		float fTemp657 = fTempPerm610;
		float fTemp658 = fTempPerm611;
		float fTemp659 = fTempPerm612;
		int iTemp660 = iTempPerm613;
		float fTemp661 = fTempPerm614;
		float fTemp662 = fTempPerm615;
		float fTemp663 = fTempPerm616;
		float fTemp664 = fTempPerm617;
		float fTemp665 = fTempPerm618;
		float fTemp666 = fTempPerm619;
		float fTemp667 = fTempPerm620;
		float fTemp668 = fTempPerm621;
		float fTemp669 = fTempPerm622;
		float fTemp670 = fTempPerm623;
		float fTemp671 = fTempPerm624;
		float fTemp672 = fTempPerm625;
		float fTemp673 = fTempPerm626;
		float fTemp674 = fTempPerm627;
		float fTemp675 = fTempPerm628;
		float fTemp676 = fTempPerm629;
		float fTemp677 = fTempPerm630;
		float fTemp678 = fTempPerm631;
		float fTemp679 = fTempPerm632;
		int iTemp680 = iTempPerm633;
		int iTemp681 = iTempPerm634;
		float fTemp682 = fTempPerm635;
		float fTemp683 = fTempPerm636;
		float fTemp684 = fTempPerm637;
		float fTemp685 = fTempPerm638;
		float fTemp686 = fTempPerm639;
		float fTemp687 = fTempPerm640;
		float fTemp688 = fTempPerm641;
		float fTemp689 = fTempPerm642;
		float fTemp690 = fTempPerm643;
		float fTemp691 = fTempPerm644;
		float fTemp692 = fTempPerm645;
		float fTemp693 = fTempPerm646;
		float fTemp694 = fTempPerm647;
		float fTemp695 = fTempPerm648;
		float fTemp696 = fTempPerm649;
		float fTemp697 = fTempPerm650;
		float fTemp698 = fTempPerm651;
		float fTemp699 = fTempPerm652;
		float fTemp700 = fTempPerm653;
		float fTemp701 = fTempPerm654;
		float fTemp702 = fTempPerm655;
		float fTemp703 = fTempPerm656;
		float fTemp704 = fTempPerm657;
		float fTemp705 = fTempPerm658;
		float fTemp706 = fTempPerm659;
		float fTemp707 = fTempPerm660;
		float fTemp708 = fTempPerm661;
		float fTemp709 = fTempPerm662;
		float fTemp710 = fTempPerm663;
		float fTemp711 = fTempPerm664;
		float fTemp712 = fTempPerm665;
		float fTemp713 = fTempPerm666;
		float fTemp714 = fTempPerm667;
		float fTemp715 = fTempPerm668;
		float fTemp716 = fTempPerm669;
		float fTemp717 = fTempPerm670;
		float fTemp718 = fTempPerm671;
		float fTemp719 = fTempPerm672;
		float fTemp720 = fTempPerm673;
		float fTemp721 = fTempPerm674;
		float fTemp722 = fTempPerm675;
		float fTemp723 = fTempPerm676;
		float fTemp724 = fTempPerm677;
		float fTemp725 = fTempPerm678;
		float fTemp726 = fTempPerm679;
		float fTemp727 = fTempPerm680;
		float fTemp728 = fTempPerm681;
		float fTemp729 = fTempPerm682;
		float fTemp730 = fTempPerm683;
		float fTemp731 = fTempPerm684;
		float fTemp732 = fTempPerm685;
		float fTemp733 = fTempPerm686;
		float fTemp734 = fTempPerm687;
		float fTemp735 = fTempPerm688;
		float fTemp736 = fTempPerm689;
		float fTemp737 = fTempPerm690;
		float fTemp738 = fTempPerm691;
		float fTemp739 = fTempPerm692;
		float fTemp740 = fTempPerm693;
		float fTemp741 = fTempPerm694;
		float fTemp742 = fTempPerm695;
		float fTemp743 = fTempPerm696;
		float fTemp744 = fTempPerm697;
		float fTemp745 = fTempPerm698;
		float fTemp746 = fTempPerm699;
		float fTemp747 = fTempPerm700;
		float fTemp748 = fTempPerm701;
		float fTemp749 = fTempPerm702;
		float fTemp750 = fTempPerm703;
		float fSlow898 = float(fHslider610);
		float fSlow899 = float(fHslider611);
		float fSlow900 = float(fHslider612);
		float fSlow901 = float(fHslider613);
		float fSlow902 = float(fHslider614);
		float fSlow903 = float(fHslider615);
		float fSlow904 = float(fHslider616);
		float fSlow905 = float(fHslider617);
		float fSlow906 = float(fHslider618);
		float fSlow907 = float(fHslider619);
		float fSlow908 = float(fHslider620);
		float fSlow909 = float(fHslider621);
		float fSlow910 = float(fHslider622);
		float fSlow911 = float(fHslider623);
		float fSlow912 = float(fHslider624);
		float fSlow913 = float(fHslider625);
		float fSlow914 = float(fHslider626);
		float fSlow915 = float(fHslider627);
		float fSlow916 = float(fHslider628);
		float fSlow917 = float(fHslider629);
		float fSlow918 = float(fHslider630);
		float fSlow919 = float(fHslider631);
		float fSlow920 = float(fHslider632);
		float fSlow921 = float(fHslider633);
		float fSlow922 = float(fHslider634);
		float fSlow923 = float(fHslider635);
		float fSlow924 = float(fHslider636);
		float fSlow925 = float(fHslider637);
		float fSlow926 = float(fHslider638);
		float fSlow927 = float(fHslider639);
		float fSlow928 = float(fHslider640);
		float fSlow929 = float(fHslider641);
		float fTemp762 = fTempPerm704;
		float fTemp763 = fTempPerm705;
		float fTemp764 = fTempPerm706;
		float fTemp765 = fTempPerm707;
		float fTemp766 = fTempPerm708;
		float fTemp767 = fTempPerm709;
		float fTemp768 = fTempPerm710;
		float fTemp769 = fTempPerm711;
		float fTemp770 = fTempPerm712;
		float fTemp771 = fTempPerm713;
		float fTemp772 = fTempPerm714;
		float fTemp773 = fTempPerm715;
		float fTemp774 = fTempPerm716;
		float fTemp775 = fTempPerm717;
		float fTemp776 = fTempPerm718;
		float fTemp777 = fTempPerm719;
		int iTemp778 = iTempPerm720;
		float fTemp779 = fTempPerm721;
		float fTemp780 = fTempPerm722;
		float fTemp781 = fTempPerm723;
		float fTemp782 = fTempPerm724;
		float fTemp783 = fTempPerm725;
		float fTemp784 = fTempPerm726;
		float fTemp785 = fTempPerm727;
		float fTemp786 = fTempPerm728;
		float fTemp787 = fTempPerm729;
		float fTemp788 = fTempPerm730;
		float fTemp789 = fTempPerm731;
		float fTemp790 = fTempPerm732;
		float fTemp791 = fTempPerm733;
		float fTemp792 = fTempPerm734;
		float fTemp793 = fTempPerm735;
		float fTemp794 = fTempPerm736;
		float fTemp795 = fTempPerm737;
		float fTemp796 = fTempPerm738;
		float fTemp797 = fTempPerm739;
		float fTemp798 = fTempPerm740;
		float fTemp799 = fTempPerm741;
		float fTemp800 = fTempPerm742;
		float fTemp801 = fTempPerm743;
		float fTemp802 = fTempPerm744;
		float fTemp803 = fTempPerm745;
		float fTemp804 = fTempPerm746;
		float fTemp805 = fTempPerm747;
		float fTemp806 = fTempPerm748;
		float fTemp807 = fTempPerm749;
		float fTemp808 = fTempPerm750;
		float fTemp809 = fTempPerm751;
		float fTemp810 = fTempPerm752;
		float fTemp811 = fTempPerm753;
		float fTemp812 = fTempPerm754;
		float fTemp813 = fTempPerm755;
		float fTemp814 = fTempPerm756;
		float fTemp815 = fTempPerm757;
		float fTemp816 = fTempPerm758;
		int iTemp817 = iTempPerm759;
		int iTemp818 = iTempPerm760;
		float fTemp819 = fTempPerm761;
		float fTemp820 = fTempPerm762;
		float fTemp821 = fTempPerm763;
		float fTemp822 = fTempPerm764;
		float fTemp823 = fTempPerm765;
		float fTemp824 = fTempPerm766;
		float fTemp825 = fTempPerm767;
		int iTemp826 = iTempPerm768;
		float fTemp827 = fTempPerm769;
		float fTemp828 = fTempPerm770;
		float fTemp829 = fTempPerm771;
		float fTemp830 = fTempPerm772;
		float fTemp831 = fTempPerm773;
		float fTemp832 = fTempPerm774;
		float fTemp833 = fTempPerm775;
		float fTemp834 = fTempPerm776;
		float fTemp835 = fTempPerm777;
		float fTemp836 = fTempPerm778;
		float fTemp837 = fTempPerm779;
		float fTemp838 = fTempPerm780;
		float fTemp839 = fTempPerm781;
		float fTemp840 = fTempPerm782;
		float fTemp841 = fTempPerm783;
		float fTemp842 = fTempPerm784;
		float fTemp843 = fTempPerm785;
		float fTemp844 = fTempPerm786;
		float fTemp845 = fTempPerm787;
		float fTemp846 = fTempPerm788;
		int iTemp847 = iTempPerm789;
		int iTemp848 = iTempPerm790;
		float fTemp849 = fTempPerm791;
		float fTemp850 = fTempPerm792;
		float fTemp851 = fTempPerm793;
		float fTemp852 = fTempPerm794;
		float fTemp853 = fTempPerm795;
		float fTemp854 = fTempPerm796;
		float fTemp855 = fTempPerm797;
		float fTemp856 = fTempPerm798;
		float fTemp857 = fTempPerm799;
		float fTemp858 = fTempPerm800;
		float fTemp859 = fTempPerm801;
		float fTemp860 = fTempPerm802;
		float fTemp861 = fTempPerm803;
		float fTemp862 = fTempPerm804;
		float fTemp863 = fTempPerm805;
		float fTemp864 = fTempPerm806;
		float fTemp865 = fTempPerm807;
		float fTemp866 = fTempPerm808;
		float fTemp867 = fTempPerm809;
		float fTemp868 = fTempPerm810;
		float fTemp869 = fTempPerm811;
		float fTemp870 = fTempPerm812;
		float fTemp871 = fTempPerm813;
		float fTemp872 = fTempPerm814;
		float fTemp873 = fTempPerm815;
		float fTemp874 = fTempPerm816;
		float fTemp875 = fTempPerm817;
		float fTemp876 = fTempPerm818;
		float fTemp877 = fTempPerm819;
		float fTemp878 = fTempPerm820;
		float fTemp879 = fTempPerm821;
		float fTemp880 = fTempPerm822;
		float fTemp881 = fTempPerm823;
		float fTemp882 = fTempPerm824;
		float fTemp883 = fTempPerm825;
		float fTemp884 = fTempPerm826;
		float fTemp885 = fTempPerm827;
		float fTemp886 = fTempPerm828;
		float fTemp887 = fTempPerm829;
		float fTemp888 = fTempPerm830;
		float fTemp889 = fTempPerm831;
		float fTemp890 = fTempPerm832;
		float fTemp891 = fTempPerm833;
		float fTemp892 = fTempPerm834;
		float fTemp893 = fTempPerm835;
		float fTemp894 = fTempPerm836;
		float fTemp895 = fTempPerm837;
		float fTemp896 = fTempPerm838;
		float fTemp897 = fTempPerm839;
		float fTemp898 = fTempPerm840;
		float fTemp899 = fTempPerm841;
		float fTemp900 = fTempPerm842;
		float fTemp901 = fTempPerm843;
		float fTemp902 = fTempPerm844;
		float fTemp903 = fTempPerm845;
		float fTemp904 = fTempPerm846;
		float fTemp905 = fTempPerm847;
		float fTemp906 = fTempPerm848;
		float fTemp907 = fTempPerm849;
		float fTemp908 = fTempPerm850;
		float fTemp909 = fTempPerm851;
		float fTemp910 = fTempPerm852;
		float fTemp911 = fTempPerm853;
		float fTemp912 = fTempPerm854;
		float fTemp913 = fTempPerm855;
		float fTemp914 = fTempPerm856;
		float fTemp915 = fTempPerm857;
		float fTemp916 = fTempPerm858;
		float fTemp917 = fTempPerm859;
		float fTemp918 = fTempPerm860;
		float fTemp919 = fTempPerm861;
		float fTemp920 = fTempPerm862;
		float fTemp921 = fTempPerm863;
		float fTemp922 = fTempPerm864;
		float fTemp923 = fTempPerm865;
		float fTemp924 = fTempPerm866;
		float fTemp925 = fTempPerm867;
		int iTemp926 = iTempPerm868;
		float fTemp927 = fTempPerm869;
		float fTemp928 = fTempPerm870;
		float fTemp929 = fTempPerm871;
		float fTemp930 = fTempPerm872;
		float fTemp931 = fTempPerm873;
		float fTemp932 = fTempPerm874;
		float fTemp933 = fTempPerm875;
		float fTemp934 = fTempPerm876;
		float fTemp935 = fTempPerm877;
		float fTemp936 = fTempPerm878;
		float fTemp937 = fTempPerm879;
		float fTemp938 = fTempPerm880;
		float fTemp939 = fTempPerm881;
		float fTemp940 = fTempPerm882;
		float fTemp941 = fTempPerm883;
		float fTemp942 = fTempPerm884;
		float fTemp943 = fTempPerm885;
		float fTemp944 = fTempPerm886;
		float fTemp945 = fTempPerm887;
		float fTemp946 = fTempPerm888;
		float fTemp947 = fTempPerm889;
		float fTemp948 = fTempPerm890;
		float fTemp949 = fTempPerm891;
		float fTemp950 = fTempPerm892;
		int iTemp951 = iTempPerm893;
		int iTemp952 = iTempPerm894;
		float fTemp953 = fTempPerm895;
		float fTemp954 = fTempPerm896;
		float fTemp955 = fTempPerm897;
		float fTemp956 = fTempPerm898;
		float fTemp957 = fTempPerm899;
		float fTemp958 = fTempPerm900;
		float fTemp959 = fTempPerm901;
		int iTemp960 = iTempPerm902;
		float fTemp961 = fTempPerm903;
		float fTemp962 = fTempPerm904;
		float fTemp963 = fTempPerm905;
		float fTemp964 = fTempPerm906;
		float fTemp965 = fTempPerm907;
		float fTemp966 = fTempPerm908;
		float fTemp967 = fTempPerm909;
		float fTemp968 = fTempPerm910;
		float fTemp969 = fTempPerm911;
		float fTemp970 = fTempPerm912;
		float fTemp971 = fTempPerm913;
		float fTemp972 = fTempPerm914;
		float fTemp973 = fTempPerm915;
		float fTemp974 = fTempPerm916;
		float fTemp975 = fTempPerm917;
		float fTemp976 = fTempPerm918;
		float fTemp977 = fTempPerm919;
		float fTemp978 = fTempPerm920;
		float fTemp979 = fTempPerm921;
		int iTemp980 = iTempPerm922;
		int iTemp981 = iTempPerm923;
		float fTemp982 = fTempPerm924;
		float fTemp983 = fTempPerm925;
		float fTemp984 = fTempPerm926;
		float fTemp985 = fTempPerm927;
		float fTemp986 = fTempPerm928;
		float fTemp987 = fTempPerm929;
		float fTemp988 = fTempPerm930;
		float fTemp989 = fTempPerm931;
		float fTemp990 = fTempPerm932;
		float fTemp991 = fTempPerm933;
		float fTemp992 = fTempPerm934;
		float fTemp993 = fTempPerm935;
		float fTemp994 = fTempPerm936;
		float fTemp995 = fTempPerm937;
		float fTemp996 = fTempPerm938;
		float fTemp997 = fTempPerm939;
		float fTemp998 = fTempPerm940;
		float fTemp999 = fTempPerm941;
		float fTemp1000 = fTempPerm942;
		float fTemp1001 = fTempPerm943;
		float fTemp1002 = fTempPerm944;
		float fTemp1003 = fTempPerm945;
		float fTemp1004 = fTempPerm946;
		float fTemp1005 = fTempPerm947;
		float fTemp1006 = fTempPerm948;
		float fTemp1007 = fTempPerm949;
		float fTemp1008 = fTempPerm950;
		float fTemp1009 = fTempPerm951;
		float fTemp1010 = fTempPerm952;
		float fTemp1011 = fTempPerm953;
		float fTemp1012 = fTempPerm954;
		float fTemp1013 = fTempPerm955;
		float fTemp1014 = fTempPerm956;
		float fTemp1015 = fTempPerm957;
		float fTemp1016 = fTempPerm958;
		float fTemp1017 = fTempPerm959;
		float fTemp1018 = fTempPerm960;
		float fTemp1019 = fTempPerm961;
		float fTemp1020 = fTempPerm962;
		float fTemp1021 = fTempPerm963;
		float fTemp1022 = fTempPerm964;
		float fTemp1023 = fTempPerm965;
		float fTemp1024 = fTempPerm966;
		float fTemp1025 = fTempPerm967;
		float fTemp1026 = fTempPerm968;
		float fTemp1027 = fTempPerm969;
		float fTemp1028 = fTempPerm970;
		float fTemp1029 = fTempPerm971;
		float fTemp1030 = fTempPerm972;
		float fTemp1031 = fTempPerm973;
		float fTemp1032 = fTempPerm974;
		float fTemp1033 = fTempPerm975;
		float fTemp1034 = fTempPerm976;
		float fTemp1035 = fTempPerm977;
		float fTemp1036 = fTempPerm978;
		float fTemp1037 = fTempPerm979;
		float fTemp1038 = fTempPerm980;
		float fTemp1039 = fTempPerm981;
		float fTemp1040 = fTempPerm982;
		float fTemp1041 = fTempPerm983;
		float fTemp1042 = fTempPerm984;
		float fTemp1043 = fTempPerm985;
		float fTemp1044 = fTempPerm986;
		float fTemp1045 = fTempPerm987;
		float fTemp1046 = fTempPerm988;
		float fTemp1047 = fTempPerm989;
		float fTemp1048 = fTempPerm990;
		float fTemp1049 = fTempPerm991;
		float fTemp1050 = fTempPerm992;
		float fTemp1051 = fTempPerm993;
		float fTemp1052 = fTempPerm994;
		float fTemp1053 = fTempPerm995;
		float fTemp1054 = fTempPerm996;
		float fTemp1055 = fTempPerm997;
		float fTemp1056 = fTempPerm998;
		float fTemp1057 = fTempPerm999;
		float fTemp1058 = fTempPerm1000;
		int iTemp1059 = iTempPerm1001;
		float fTemp1060 = fTempPerm1002;
		float fTemp1061 = fTempPerm1003;
		float fTemp1062 = fTempPerm1004;
		float fTemp1063 = fTempPerm1005;
		float fTemp1064 = fTempPerm1006;
		float fTemp1065 = fTempPerm1007;
		float fTemp1066 = fTempPerm1008;
		float fTemp1067 = fTempPerm1009;
		float fTemp1068 = fTempPerm1010;
		float fTemp1069 = fTempPerm1011;
		float fTemp1070 = fTempPerm1012;
		float fTemp1071 = fTempPerm1013;
		float fTemp1072 = fTempPerm1014;
		float fTemp1073 = fTempPerm1015;
		float fTemp1074 = fTempPerm1016;
		float fTemp1075 = fTempPerm1017;
		float fTemp1076 = fTempPerm1018;
		float fTemp1077 = fTempPerm1019;
		float fTemp1078 = fTempPerm1020;
		float fTemp1079 = fTempPerm1021;
		float fTemp1080 = fTempPerm1022;
		float fTemp1081 = fTempPerm1023;
		float fTemp1082 = fTempPerm1024;
		float fTemp1083 = fTempPerm1025;
		int iTemp1084 = iTempPerm1026;
		int iTemp1085 = iTempPerm1027;
		float fTemp1086 = fTempPerm1028;
		float fTemp1087 = fTempPerm1029;
		float fTemp1088 = fTempPerm1030;
		float fTemp1089 = fTempPerm1031;
		float fTemp1090 = fTempPerm1032;
		float fTemp1091 = fTempPerm1033;
		float fTemp1092 = fTempPerm1034;
		int iTemp1093 = iTempPerm1035;
		float fTemp1094 = fTempPerm1036;
		float fTemp1095 = fTempPerm1037;
		float fTemp1096 = fTempPerm1038;
		float fTemp1097 = fTempPerm1039;
		float fTemp1098 = fTempPerm1040;
		float fTemp1099 = fTempPerm1041;
		float fTemp1100 = fTempPerm1042;
		float fTemp1101 = fTempPerm1043;
		float fTemp1102 = fTempPerm1044;
		float fTemp1103 = fTempPerm1045;
		float fTemp1104 = fTempPerm1046;
		float fTemp1105 = fTempPerm1047;
		float fTemp1106 = fTempPerm1048;
		float fTemp1107 = fTempPerm1049;
		float fTemp1108 = fTempPerm1050;
		float fTemp1109 = fTempPerm1051;
		float fTemp1110 = fTempPerm1052;
		float fTemp1111 = fTempPerm1053;
		float fTemp1112 = fTempPerm1054;
		int iTemp1113 = iTempPerm1055;
		int iTemp1114 = iTempPerm1056;
		float fTemp1115 = fTempPerm1057;
		float fTemp1116 = fTempPerm1058;
		float fTemp1117 = fTempPerm1059;
		float fTemp1118 = fTempPerm1060;
		float fTemp1119 = fTempPerm1061;
		float fTemp1120 = fTempPerm1062;
		float fTemp1121 = fTempPerm1063;
		float fTemp1122 = fTempPerm1064;
		float fTemp1123 = fTempPerm1065;
		float fTemp1124 = fTempPerm1066;
		float fTemp1125 = fTempPerm1067;
		float fTemp1126 = fTempPerm1068;
		float fTemp1127 = fTempPerm1069;
		float fTemp1128 = fTempPerm1070;
		float fTemp1129 = fTempPerm1071;
		float fTemp1130 = fTempPerm1072;
		float fTemp1131 = fTempPerm1073;
		float fTemp1132 = fTempPerm1074;
		float fTemp1133 = fTempPerm1075;
		float fTemp1134 = fTempPerm1076;
		float fTemp1135 = fTempPerm1077;
		float fTemp1136 = fTempPerm1078;
		float fTemp1137 = fTempPerm1079;
		float fTemp1138 = fTempPerm1080;
		float fTemp1139 = fTempPerm1081;
		float fTemp1140 = fTempPerm1082;
		float fTemp1141 = fTempPerm1083;
		float fTemp1142 = fTempPerm1084;
		float fTemp1143 = fTempPerm1085;
		float fTemp1144 = fTempPerm1086;
		float fTemp1145 = fTempPerm1087;
		float fTemp1146 = fTempPerm1088;
		float fTemp1147 = fTempPerm1089;
		float fTemp1148 = fTempPerm1090;
		float fTemp1149 = fTempPerm1091;
		float fTemp1150 = fTempPerm1092;
		float fTemp1151 = fTempPerm1093;
		float fTemp1152 = fTempPerm1094;
		float fTemp1153 = fTempPerm1095;
		float fTemp1154 = fTempPerm1096;
		float fTemp1155 = fTempPerm1097;
		float fTemp1156 = fTempPerm1098;
		float fTemp1157 = fTempPerm1099;
		float fTemp1158 = fTempPerm1100;
		float fTemp1159 = fTempPerm1101;
		float fTemp1160 = fTempPerm1102;
		float fTemp1161 = fTempPerm1103;
		float fTemp1162 = fTempPerm1104;
		float fTemp1163 = fTempPerm1105;
		float fTemp1164 = fTempPerm1106;
		float fTemp1165 = fTempPerm1107;
		float fTemp1166 = fTempPerm1108;
		float fTemp1167 = fTempPerm1109;
		float fTemp1168 = fTempPerm1110;
		float fTemp1169 = fTempPerm1111;
		float fTemp1170 = fTempPerm1112;
		float fTemp1171 = fTempPerm1113;
		float fTemp1172 = fTempPerm1114;
		float fTemp1173 = fTempPerm1115;
		float fTemp1174 = fTempPerm1116;
		float fTemp1175 = fTempPerm1117;
		float fTemp1176 = fTempPerm1118;
		float fTemp1177 = fTempPerm1119;
		float fTemp1178 = fTempPerm1120;
		float fTemp1179 = fTempPerm1121;
		float fTemp1180 = fTempPerm1122;
		float fTemp1181 = fTempPerm1123;
		float fTemp1182 = fTempPerm1124;
		float fTemp1183 = fTempPerm1125;
		float fTemp1184 = fTempPerm1126;
		float fTemp1185 = fTempPerm1127;
		float fTemp1186 = fTempPerm1128;
		float fTemp1187 = fTempPerm1129;
		float fTemp1188 = fTempPerm1130;
		float fTemp1189 = fTempPerm1131;
		float fTemp1190 = fTempPerm1132;
		float fTemp1191 = fTempPerm1133;
		int iTemp1192 = iTempPerm1134;
		float fTemp1193 = fTempPerm1135;
		float fTemp1194 = fTempPerm1136;
		float fTemp1195 = fTempPerm1137;
		float fTemp1196 = fTempPerm1138;
		float fTemp1197 = fTempPerm1139;
		float fTemp1198 = fTempPerm1140;
		float fTemp1199 = fTempPerm1141;
		float fTemp1200 = fTempPerm1142;
		float fTemp1201 = fTempPerm1143;
		float fTemp1202 = fTempPerm1144;
		float fTemp1203 = fTempPerm1145;
		float fTemp1204 = fTempPerm1146;
		float fTemp1205 = fTempPerm1147;
		float fTemp1206 = fTempPerm1148;
		float fTemp1207 = fTempPerm1149;
		float fTemp1208 = fTempPerm1150;
		float fTemp1209 = fTempPerm1151;
		float fTemp1210 = fTempPerm1152;
		float fTemp1211 = fTempPerm1153;
		float fTemp1212 = fTempPerm1154;
		float fTemp1213 = fTempPerm1155;
		float fTemp1214 = fTempPerm1156;
		float fTemp1215 = fTempPerm1157;
		float fTemp1216 = fTempPerm1158;
		int iTemp1217 = iTempPerm1159;
		int iTemp1218 = iTempPerm1160;
		float fTemp1219 = fTempPerm1161;
		float fTemp1220 = fTempPerm1162;
		float fTemp1221 = fTempPerm1163;
		float fTemp1222 = fTempPerm1164;
		float fTemp1223 = fTempPerm1165;
		float fTemp1224 = fTempPerm1166;
		float fTemp1225 = fTempPerm1167;
		int iTemp1226 = iTempPerm1168;
		float fTemp1227 = fTempPerm1169;
		float fTemp1228 = fTempPerm1170;
		float fTemp1229 = fTempPerm1171;
		float fTemp1230 = fTempPerm1172;
		float fTemp1231 = fTempPerm1173;
		float fTemp1232 = fTempPerm1174;
		float fTemp1233 = fTempPerm1175;
		float fTemp1234 = fTempPerm1176;
		float fTemp1235 = fTempPerm1177;
		float fTemp1236 = fTempPerm1178;
		float fTemp1237 = fTempPerm1179;
		float fTemp1238 = fTempPerm1180;
		float fTemp1239 = fTempPerm1181;
		float fTemp1240 = fTempPerm1182;
		float fTemp1241 = fTempPerm1183;
		float fTemp1242 = fTempPerm1184;
		float fTemp1243 = fTempPerm1185;
		float fTemp1244 = fTempPerm1186;
		float fTemp1245 = fTempPerm1187;
		int iTemp1246 = iTempPerm1188;
		int iTemp1247 = iTempPerm1189;
		float fTemp1248 = fTempPerm1190;
		float fTemp1249 = fTempPerm1191;
		float fTemp1250 = fTempPerm1192;
		float fTemp1251 = fTempPerm1193;
		float fTemp1252 = fTempPerm1194;
		float fTemp1253 = fTempPerm1195;
		float fTemp1254 = fTempPerm1196;
		float fTemp1255 = fTempPerm1197;
		float fTemp1256 = fTempPerm1198;
		float fTemp1257 = fTempPerm1199;
		float fTemp1258 = fTempPerm1200;
		float fTemp1259 = fTempPerm1201;
		float fTemp1260 = fTempPerm1202;
		float fTemp1261 = fTempPerm1203;
		float fTemp1262 = fTempPerm1204;
		float fTemp1263 = fTempPerm1205;
		float fTemp1264 = fTempPerm1206;
		float fTemp1265 = fTempPerm1207;
		float fTemp1266 = fTempPerm1208;
		float fTemp1267 = fTempPerm1209;
		float fTemp1268 = fTempPerm1210;
		float fTemp1269 = fTempPerm1211;
		float fTemp1270 = fTempPerm1212;
		float fTemp1271 = fTempPerm1213;
		float fTemp1272 = fTempPerm1214;
		float fTemp1273 = fTempPerm1215;
		float fTemp1274 = fTempPerm1216;
		float fTemp1275 = fTempPerm1217;
		float fTemp1276 = fTempPerm1218;
		float fTemp1277 = fTempPerm1219;
		float fTemp1278 = fTempPerm1220;
		float fTemp1279 = fTempPerm1221;
		float fTemp1280 = fTempPerm1222;
		float fTemp1281 = fTempPerm1223;
		float fTemp1282 = fTempPerm1224;
		float fTemp1283 = fTempPerm1225;
		float fTemp1284 = fTempPerm1226;
		float fTemp1285 = fTempPerm1227;
		float fTemp1286 = fTempPerm1228;
		float fTemp1287 = fTempPerm1229;
		float fTemp1288 = fTempPerm1230;
		float fTemp1289 = fTempPerm1231;
		float fTemp1290 = fTempPerm1232;
		float fTemp1291 = fTempPerm1233;
		float fTemp1292 = fTempPerm1234;
		float fTemp1293 = fTempPerm1235;
		float fTemp1294 = fTempPerm1236;
		float fTemp1295 = fTempPerm1237;
		float fTemp1296 = fTempPerm1238;
		float fTemp1297 = fTempPerm1239;
		float fTemp1298 = fTempPerm1240;
		float fTemp1299 = fTempPerm1241;
		float fTemp1300 = fTempPerm1242;
		float fTemp1301 = fTempPerm1243;
		float fTemp1302 = fTempPerm1244;
		float fTemp1303 = fTempPerm1245;
		float fTemp1304 = fTempPerm1246;
		float fTemp1305 = fTempPerm1247;
		float fTemp1306 = fTempPerm1248;
		float fTemp1307 = fTempPerm1249;
		float fTemp1308 = fTempPerm1250;
		float fTemp1309 = fTempPerm1251;
		float fTemp1310 = fTempPerm1252;
		float fTemp1311 = fTempPerm1253;
		float fTemp1312 = fTempPerm1254;
		float fTemp1313 = fTempPerm1255;
		float fTemp1314 = fTempPerm1256;
		float fTemp1315 = fTempPerm1257;
		float fTemp1316 = fTempPerm1258;
		for (int i = 0; (i < count); i = (i + 1)) {
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
			fVec1[0] = fSlow0;
			iVec2[0] = iSlow1;
			iRec1[0] = (iSlow1 * (iRec1[1] + 1));
			int iTemp0 = (iSlow1 - iVec2[1]);
			int iTemp1 = (iTemp0 * (iTemp0 > 0));
			int iTemp2 = ((iRec1[0] < iSlow4) | iTemp1);
			float fTemp3 = (0.144717798f * (iSlow1 ? (iTemp2 ? fSlow3 : fSlow5) : fSlow2));
			int iTemp4 = (std::fabs(fTemp3) < 1.1920929e-07f);
			float fTemp5 = (iTemp4 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp4 ? 1.0f : fTemp3)))));
			fRec0[0] = ((fRec0[1] * fTemp5) + (fSlow8 * ((iSlow1 ? (iTemp2 ? fSlow9 : fSlow10) : 0.0f) * (1.0f - fTemp5))));
			fHbargraph0 = FAUSTFLOAT(fRec0[0]);
			int iTemp6 = ((iRec1[0] < iSlow51) | iTemp1);
			float fTemp7 = (0.144717798f * (iSlow1 ? (iTemp6 ? fSlow50 : fSlow52) : fSlow49));
			int iTemp8 = (std::fabs(fTemp7) < 1.1920929e-07f);
			float fTemp9 = (iTemp8 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp8 ? 1.0f : fTemp7)))));
			fRec6[0] = ((fRec6[1] * fTemp9) + (fSlow53 * ((iSlow1 ? (iTemp6 ? fSlow9 : fSlow54) : 0.0f) * (1.0f - fTemp9))));
			fHbargraph1 = FAUSTFLOAT(fRec6[0]);
			float fTemp10 = (1.0f - fHbargraph1);
			int iTemp11 = ((iRec1[0] < iSlow60) | iTemp1);
			float fTemp12 = (0.144717798f * (iSlow1 ? (iTemp11 ? fSlow59 : fSlow61) : fSlow58));
			int iTemp13 = (std::fabs(fTemp12) < 1.1920929e-07f);
			float fTemp14 = (iTemp13 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp13 ? 1.0f : fTemp12)))));
			fRec7[0] = ((fRec7[1] * fTemp14) + (fSlow62 * ((iSlow1 ? (iTemp11 ? fSlow9 : fSlow63) : 0.0f) * (1.0f - fTemp14))));
			fHbargraph2 = FAUSTFLOAT(fRec7[0]);
			float fTemp15 = (1.0f - fHbargraph2);
			int iTemp16 = ((iRec1[0] < iSlow69) | iTemp1);
			float fTemp17 = (0.144717798f * (iSlow1 ? (iTemp16 ? fSlow68 : fSlow70) : fSlow67));
			int iTemp18 = (std::fabs(fTemp17) < 1.1920929e-07f);
			float fTemp19 = (iTemp18 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp18 ? 1.0f : fTemp17)))));
			fRec8[0] = ((fRec8[1] * fTemp19) + (fSlow71 * ((iSlow1 ? (iTemp16 ? fSlow9 : fSlow72) : 0.0f) * (1.0f - fTemp19))));
			fHbargraph3 = FAUSTFLOAT(fRec8[0]);
			float fTemp20 = (1.0f - fHbargraph3);
			int iTemp21 = ((iRec1[0] < iSlow78) | iTemp1);
			float fTemp22 = (0.144717798f * (iSlow1 ? (iTemp21 ? fSlow77 : fSlow79) : fSlow76));
			int iTemp23 = (std::fabs(fTemp22) < 1.1920929e-07f);
			float fTemp24 = (iTemp23 ? 0.0f : std::exp((0.0f - (fConst1 / (iTemp23 ? 1.0f : fTemp22)))));
			fRec9[0] = ((fRec9[1] * fTemp24) + (fSlow80 * ((iSlow1 ? (iTemp21 ? fSlow9 : fSlow81) : 0.0f) * (1.0f - fTemp24))));
			fHbargraph4 = FAUSTFLOAT(fRec9[0]);
			float fTemp25 = (1.0f - fHbargraph4);
			fRec11[0] = (fSlow85 + (fRec11[1] - std::floor((fSlow85 + fRec11[1]))));
			fHbargraph5 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec11[0]))]);
			float fTemp26 = (0.5f * (fHbargraph5 + 1.0f));
			float fTemp27 = (1.0f - fTemp26);
			fRec12[0] = (fSlow89 + (fRec12[1] - std::floor((fSlow89 + fRec12[1]))));
			fHbargraph6 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec12[0]))]);
			float fTemp28 = (0.5f * (fHbargraph6 + 1.0f));
			float fTemp29 = (1.0f - fTemp28);
			fRec13[0] = (fSlow93 + (fRec13[1] - std::floor((fSlow93 + fRec13[1]))));
			fHbargraph7 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec13[0]))]);
			float fTemp30 = (0.5f * (fHbargraph7 + 1.0f));
			float fTemp31 = (1.0f - fTemp30);
			fRec14[0] = (fSlow97 + (fRec14[1] - std::floor((fSlow97 + fRec14[1]))));
			fHbargraph8 = FAUSTFLOAT(ftbl0mydspSIG0[int((65536.0f * fRec14[0]))]);
			float fTemp32 = (0.5f * (fHbargraph8 + 1.0f));
			float fTemp33 = (1.0f - fTemp32);
			float fTemp34 = (fSlow0 - fVec1[1]);
			float fTemp35 = (fTemp34 * float((fTemp34 > 0.0f)));
			iRec16[0] = ((1103515245 * iRec16[1]) + 12345);
			float fTemp36 = float(iRec16[0]);
			fRec15[0] = (int(fTemp35) ? (4.65661287e-10f * fTemp36) : fRec15[1]);
			float fTemp37 = (1.0f - fRec15[0]);
			float fTemp38 = ((fRec17[1] > fSlow120) ? fSlow126 : fSlow123);
			fRec18[0] = ((fRec18[1] * fTemp38) + (fSlow120 * (1.0f - fTemp38)));
			fRec17[0] = fRec18[0];
			fHbargraph9 = FAUSTFLOAT(((fSlow45 * ((((((((((((((fSlow47 * (iSlow48 ? fTemp10 : fHbargraph1)) + (fSlow56 * (iSlow57 ? fTemp15 : fHbargraph2))) + (fSlow65 * (iSlow66 ? fTemp20 : fHbargraph3))) + (fSlow74 * (iSlow75 ? fTemp25 : fHbargraph4))) + (fSlow83 * (iSlow84 ? fTemp27 : fTemp26))) + (fSlow87 * (iSlow88 ? fTemp29 : fTemp28))) + (fSlow91 * (iSlow92 ? fTemp31 : fTemp30))) + (fSlow95 * (iSlow96 ? fTemp33 : fTemp32))) + fSlow101) + fSlow103) + fSlow106) + fSlow110) + fSlow115) + (fSlow117 * (iSlow118 ? fTemp37 : fRec15[0])))) + (fSlow119 * fRec17[0])));
			float fTemp39 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph9));
			float fTemp40 = (1.0f - fTemp39);
			float fTemp41 = ((fRec19[1] > fSlow197) ? fSlow203 : fSlow200);
			fRec20[0] = ((fRec20[1] * fTemp41) + (fSlow197 * (1.0f - fTemp41)));
			fRec19[0] = fRec20[0];
			fHbargraph10 = FAUSTFLOAT(((fSlow158 * ((((((((((((((fSlow160 * (iSlow161 ? fTemp10 : fHbargraph1)) + (fSlow163 * (iSlow164 ? fTemp15 : fHbargraph2))) + (fSlow166 * (iSlow167 ? fTemp20 : fHbargraph3))) + (fSlow169 * (iSlow170 ? fTemp25 : fHbargraph4))) + (fSlow172 * (iSlow173 ? fTemp27 : fTemp26))) + (fSlow175 * (iSlow176 ? fTemp29 : fTemp28))) + (fSlow178 * (iSlow179 ? fTemp31 : fTemp30))) + (fSlow181 * (iSlow182 ? fTemp33 : fTemp32))) + fSlow184) + fSlow186) + fSlow188) + fSlow190) + fSlow192) + (fSlow194 * (iSlow195 ? fTemp37 : fRec15[0])))) + (fSlow196 * fRec19[0])));
			float fTemp42 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph10));
			float fTemp43 = (1.0f - fTemp42);
			float fTemp44 = ((fRec21[1] > fSlow274) ? fSlow280 : fSlow277);
			fRec22[0] = ((fRec22[1] * fTemp44) + (fSlow274 * (1.0f - fTemp44)));
			fRec21[0] = fRec22[0];
			fHbargraph11 = FAUSTFLOAT(((fSlow235 * ((((((((((((((fSlow237 * (iSlow238 ? fTemp10 : fHbargraph1)) + (fSlow240 * (iSlow241 ? fTemp15 : fHbargraph2))) + (fSlow243 * (iSlow244 ? fTemp20 : fHbargraph3))) + (fSlow246 * (iSlow247 ? fTemp25 : fHbargraph4))) + (fSlow249 * (iSlow250 ? fTemp27 : fTemp26))) + (fSlow252 * (iSlow253 ? fTemp29 : fTemp28))) + (fSlow255 * (iSlow256 ? fTemp31 : fTemp30))) + (fSlow258 * (iSlow259 ? fTemp33 : fTemp32))) + fSlow261) + fSlow263) + fSlow265) + fSlow267) + fSlow269) + (fSlow271 * (iSlow272 ? fTemp37 : fRec15[0])))) + (fSlow273 * fRec21[0])));
			float fTemp45 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph11));
			float fTemp46 = (1.0f - fTemp45);
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp47 = ((((fSlow127 * fTemp43) + (fSlow204 * fTemp42)) * fTemp46) + (fTemp45 * ((fSlow281 * fTemp43) + (fSlow282 * fTemp42))));
				fTemp48 = ((fTemp46 * ((fSlow359 * fTemp43) + (fSlow360 * fTemp42))) + (fTemp45 * ((fSlow361 * fTemp43) + (fSlow362 * fTemp42))));
				fTemp49 = ((fTemp46 * ((fSlow363 * fTemp43) + (fSlow364 * fTemp42))) + (fTemp45 * ((fSlow365 * fTemp43) + (fSlow366 * fTemp42))));
				fTemp50 = ((fTemp46 * ((fSlow367 * fTemp43) + (fSlow368 * fTemp42))) + (fTemp45 * ((fSlow369 * fTemp43) + (fSlow370 * fTemp42))));
				fTemp51 = ((fTemp40 * (fTemp47 + fTemp48)) + (fTemp39 * (fTemp49 + fTemp50)));
				fTemp52 = std::fabs(fTemp51);
				fTemp53 = ((fTemp46 * ((fSlow371 * fTemp43) + (fSlow372 * fTemp42))) + (fTemp45 * ((fSlow373 * fTemp43) + (fSlow374 * fTemp42))));
				fTemp54 = ((fTemp46 * ((fSlow375 * fTemp43) + (fSlow376 * fTemp42))) + (fTemp45 * ((fSlow377 * fTemp43) + (fSlow378 * fTemp42))));
				fTemp55 = ((fTemp46 * ((fSlow379 * fTemp43) + (fSlow380 * fTemp42))) + (fTemp45 * ((fSlow381 * fTemp43) + (fSlow382 * fTemp42))));
				fTemp56 = ((fTemp46 * ((fSlow383 * fTemp43) + (fSlow384 * fTemp42))) + (fTemp45 * ((fSlow385 * fTemp43) + (fSlow386 * fTemp42))));
				fTemp57 = ((fTemp40 * (fTemp53 + fTemp54)) + (fTemp39 * (fTemp55 + fTemp56)));
				fTemp58 = std::fabs(fTemp57);
				fTemp59 = ((fTemp46 * ((fSlow387 * fTemp43) + (fSlow388 * fTemp42))) + (fTemp45 * ((fSlow389 * fTemp43) + (fSlow390 * fTemp42))));
				fTemp60 = ((fTemp46 * ((fSlow391 * fTemp43) + (fSlow392 * fTemp42))) + (fTemp45 * ((fSlow393 * fTemp43) + (fSlow394 * fTemp42))));
				fTemp61 = ((fTemp46 * ((fSlow395 * fTemp43) + (fSlow396 * fTemp42))) + (fTemp45 * ((fSlow397 * fTemp43) + (fSlow398 * fTemp42))));
				fTemp62 = ((fTemp46 * ((fSlow399 * fTemp43) + (fSlow400 * fTemp42))) + (fTemp45 * ((fSlow401 * fTemp43) + (fSlow402 * fTemp42))));
				fTemp63 = ((fTemp40 * (fTemp59 + fTemp60)) + (fTemp39 * (fTemp61 + fTemp62)));
				fTemp64 = std::fabs(fTemp63);
				fTemp65 = ((fTemp52 + fTemp58) + fTemp64);
				fTemp66 = std::min<float>(1.0f, fTemp65);
				fTemp67 = std::max<float>(2.82118644e-37f, fTemp52);
				fTemp68 = ((fTemp51 < 0.0f) ? (0.0f - fTemp67) : fTemp67);
				iTemp69 = (float((fTemp51 != 0.0f)) != 0.0f);
				fTemp71 = ((fTemp40 * (fTemp59 - fTemp60)) + (fTemp39 * (fTemp61 - fTemp62)));
				iTemp72 = (float((fTemp71 != 0.0f)) != 0.0f);
				fTemp73 = ((fTemp40 * (fTemp53 - fTemp54)) + (fTemp39 * (fTemp55 - fTemp56)));
				iTemp74 = (float((fTemp73 != 0.0f)) != 0.0f);
				fTemp75 = ((fTemp40 * (fTemp47 - fTemp48)) + (fTemp39 * (fTemp49 - fTemp50)));
				iTemp76 = (float((fTemp75 != 0.0f)) != 0.0f);
				iTemp77 = (float((fTemp63 != 0.0f)) != 0.0f);
				iTemp78 = (float((fTemp57 != 0.0f)) != 0.0f);
			}
			if ((iSlow14 & iTemp69) | ((iSlow14 & iTemp78) | ((iSlow14 & iTemp77) | ((iSlow358 & iTemp69) | ((iSlow358 & iTemp78) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp69) | ((iSlow356 & iTemp78) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp69) | ((iSlow354 & iTemp78) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp69) | ((iSlow352 & iTemp78) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp69) | ((iSlow350 & iTemp78) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp69) | ((iSlow348 & iTemp78) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp69) | ((iSlow346 & iTemp78) | ((iSlow346 & iTemp77) | ((iSlow344 & iTemp69) | ((iSlow344 & iTemp78) | ((iSlow344 & iTemp77) | ((iSlow342 & iTemp69) | ((iSlow342 & iTemp78) | ((iSlow342 & iTemp77) | ((iSlow340 & iTemp69) | ((iSlow340 & iTemp78) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp69) | ((iSlow338 & iTemp78) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp69) | ((iSlow336 & iTemp78) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp69) | ((iSlow334 & iTemp78) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp69) | ((iSlow332 & iTemp78) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp69) | ((iSlow330 & iTemp78) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp69) | ((iSlow328 & iTemp78) | ((iSlow328 & iTemp77) | ((iSlow326 & iTemp69) | ((iSlow326 & iTemp78) | ((iSlow326 & iTemp77) | ((iSlow322 & iTemp69) | ((iSlow322 & iTemp78) | ((iSlow322 & iTemp77) | ((iSlow320 & iTemp69) | ((iSlow320 & iTemp78) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp69) | ((iSlow318 & iTemp78) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp69) | ((iSlow316 & iTemp78) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp69) | ((iSlow314 & iTemp78) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp69) | ((iSlow312 & iTemp78) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp69) | ((iSlow310 & iTemp78) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp69) | ((iSlow308 & iTemp78) | ((iSlow308 & iTemp77) | ((iSlow306 & iTemp69) | ((iSlow306 & iTemp78) | ((iSlow306 & iTemp77) | ((iSlow302 & iTemp69) | ((iSlow302 & iTemp78) | ((iSlow302 & iTemp77) | ((iSlow300 & iTemp69) | ((iSlow300 & iTemp78) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp69) | ((iSlow298 & iTemp78) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp69) | ((iSlow296 & iTemp78) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp69) | ((iSlow294 & iTemp78) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp69) | ((iSlow292 & iTemp78) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp69) | ((iSlow290 & iTemp78) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp69) | ((iSlow288 & iTemp78) | ((iSlow288 & iTemp77) | ((iSlow286 & iTemp69) | ((iSlow286 & iTemp78) | ((iSlow286 & iTemp77) | ((iSlow14 & iTemp76) | ((iSlow14 & iTemp74) | ((iSlow14 & iTemp72) | ((iSlow358 & iTemp76) | ((iSlow358 & iTemp74) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp76) | ((iSlow356 & iTemp74) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp76) | ((iSlow354 & iTemp74) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp76) | ((iSlow352 & iTemp74) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp76) | ((iSlow350 & iTemp74) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp76) | ((iSlow348 & iTemp74) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp76) | ((iSlow346 & iTemp74) | ((iSlow346 & iTemp72) | ((iSlow344 & iTemp76) | ((iSlow344 & iTemp74) | ((iSlow344 & iTemp72) | ((iSlow342 & iTemp76) | ((iSlow342 & iTemp74) | ((iSlow342 & iTemp72) | ((iSlow340 & iTemp76) | ((iSlow340 & iTemp74) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp76) | ((iSlow338 & iTemp74) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp76) | ((iSlow336 & iTemp74) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp76) | ((iSlow334 & iTemp74) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp76) | ((iSlow332 & iTemp74) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp76) | ((iSlow330 & iTemp74) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp76) | ((iSlow328 & iTemp74) | ((iSlow328 & iTemp72) | ((iSlow326 & iTemp76) | ((iSlow326 & iTemp74) | ((iSlow326 & iTemp72) | ((iSlow322 & iTemp76) | ((iSlow322 & iTemp74) | ((iSlow322 & iTemp72) | ((iSlow320 & iTemp76) | ((iSlow320 & iTemp74) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp76) | ((iSlow318 & iTemp74) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp76) | ((iSlow316 & iTemp74) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp76) | ((iSlow314 & iTemp74) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp76) | ((iSlow312 & iTemp74) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp76) | ((iSlow310 & iTemp74) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp76) | ((iSlow308 & iTemp74) | ((iSlow308 & iTemp72) | ((iSlow306 & iTemp76) | ((iSlow306 & iTemp74) | ((iSlow306 & iTemp72) | ((iSlow302 & iTemp76) | ((iSlow302 & iTemp74) | ((iSlow302 & iTemp72) | ((iSlow300 & iTemp76) | ((iSlow300 & iTemp74) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp76) | ((iSlow298 & iTemp74) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp76) | ((iSlow296 & iTemp74) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp76) | ((iSlow294 & iTemp74) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp76) | ((iSlow292 & iTemp74) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp76) | ((iSlow290 & iTemp74) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp76) | ((iSlow288 & iTemp74) | ((iSlow288 & iTemp72) | ((iSlow286 & iTemp76) | ((iSlow286 & iTemp74) | (iSlow286 & iTemp72)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp70 = ((fTemp46 * ((fSlow403 * fTemp43) + (fSlow404 * fTemp42))) + (fTemp45 * ((fSlow405 * fTemp43) + (fSlow406 * fTemp42))));
				fTemp79 = ((fTemp46 * ((fSlow407 * fTemp43) + (fSlow408 * fTemp42))) + (fTemp45 * ((fSlow409 * fTemp43) + (fSlow410 * fTemp42))));
				fTemp80 = ((fTemp46 * ((fSlow411 * fTemp43) + (fSlow412 * fTemp42))) + (fTemp45 * ((fSlow413 * fTemp43) + (fSlow414 * fTemp42))));
				fTemp81 = ((fTemp46 * ((fSlow415 * fTemp43) + (fSlow416 * fTemp42))) + (fTemp45 * ((fSlow417 * fTemp43) + (fSlow418 * fTemp42))));
			}
			if ((iSlow14 & iTemp69) | ((iSlow14 & iTemp78) | ((iSlow14 & iTemp77) | ((iSlow358 & iTemp69) | ((iSlow358 & iTemp78) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp69) | ((iSlow356 & iTemp78) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp69) | ((iSlow354 & iTemp78) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp69) | ((iSlow352 & iTemp78) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp69) | ((iSlow350 & iTemp78) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp69) | ((iSlow348 & iTemp78) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp69) | ((iSlow346 & iTemp78) | ((iSlow346 & iTemp77) | ((iSlow344 & iTemp69) | ((iSlow344 & iTemp78) | ((iSlow344 & iTemp77) | ((iSlow342 & iTemp69) | ((iSlow342 & iTemp78) | ((iSlow342 & iTemp77) | ((iSlow340 & iTemp69) | ((iSlow340 & iTemp78) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp69) | ((iSlow338 & iTemp78) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp69) | ((iSlow336 & iTemp78) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp69) | ((iSlow334 & iTemp78) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp69) | ((iSlow332 & iTemp78) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp69) | ((iSlow330 & iTemp78) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp69) | ((iSlow328 & iTemp78) | ((iSlow328 & iTemp77) | ((iSlow326 & iTemp69) | ((iSlow326 & iTemp78) | ((iSlow326 & iTemp77) | ((iSlow322 & iTemp69) | ((iSlow322 & iTemp78) | ((iSlow322 & iTemp77) | ((iSlow320 & iTemp69) | ((iSlow320 & iTemp78) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp69) | ((iSlow318 & iTemp78) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp69) | ((iSlow316 & iTemp78) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp69) | ((iSlow314 & iTemp78) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp69) | ((iSlow312 & iTemp78) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp69) | ((iSlow310 & iTemp78) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp69) | ((iSlow308 & iTemp78) | ((iSlow308 & iTemp77) | ((iSlow306 & iTemp69) | ((iSlow306 & iTemp78) | ((iSlow306 & iTemp77) | ((iSlow302 & iTemp69) | ((iSlow302 & iTemp78) | ((iSlow302 & iTemp77) | ((iSlow300 & iTemp69) | ((iSlow300 & iTemp78) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp69) | ((iSlow298 & iTemp78) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp69) | ((iSlow296 & iTemp78) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp69) | ((iSlow294 & iTemp78) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp69) | ((iSlow292 & iTemp78) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp69) | ((iSlow290 & iTemp78) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp69) | ((iSlow288 & iTemp78) | ((iSlow288 & iTemp77) | ((iSlow286 & iTemp69) | ((iSlow286 & iTemp78) | (iSlow286 & iTemp77)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp82 = std::tan((fConst2 * std::min<float>(fConst4, std::max<float>(0.0f, (440.0f * std::pow(2.0f, (0.0833333358f * ((127.0f * std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp70 + fTemp79)) + (fTemp39 * (fTemp80 + fTemp81)))))) + -49.0f))))))));
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp83 = ((fTemp46 * ((fSlow419 * fTemp43) + (fSlow420 * fTemp42))) + (fTemp45 * ((fSlow421 * fTemp43) + (fSlow422 * fTemp42))));
				fTemp84 = ((fTemp46 * ((fSlow423 * fTemp43) + (fSlow424 * fTemp42))) + (fTemp45 * ((fSlow425 * fTemp43) + (fSlow426 * fTemp42))));
				fTemp85 = ((fTemp46 * ((fSlow427 * fTemp43) + (fSlow428 * fTemp42))) + (fTemp45 * ((fSlow429 * fTemp43) + (fSlow430 * fTemp42))));
				fTemp86 = ((fTemp46 * ((fSlow431 * fTemp43) + (fSlow432 * fTemp42))) + (fTemp45 * ((fSlow433 * fTemp43) + (fSlow434 * fTemp42))));
				fTemp87 = (fRec5[1] * ((fTemp40 * (fTemp83 + fTemp84)) + (fTemp39 * (fTemp85 + fTemp86))));
				fTemp88 = ((fTemp46 * ((fSlow435 * fTemp43) + (fSlow436 * fTemp42))) + (fTemp45 * ((fSlow437 * fTemp43) + (fSlow438 * fTemp42))));
				fTemp89 = ((fTemp46 * ((fSlow439 * fTemp43) + (fSlow440 * fTemp42))) + (fTemp45 * ((fSlow441 * fTemp43) + (fSlow442 * fTemp42))));
				fTemp90 = ((fTemp46 * ((fSlow443 * fTemp43) + (fSlow444 * fTemp42))) + (fTemp45 * ((fSlow445 * fTemp43) + (fSlow446 * fTemp42))));
				fTemp91 = ((fTemp46 * ((fSlow447 * fTemp43) + (fSlow448 * fTemp42))) + (fTemp45 * ((fSlow449 * fTemp43) + (fSlow450 * fTemp42))));
				fTemp92 = (fRec4[1] * ((fTemp40 * (fTemp88 + fTemp89)) + (fTemp39 * (fTemp90 + fTemp91))));
				fTemp93 = ((fTemp46 * ((fSlow451 * fTemp43) + (fSlow452 * fTemp42))) + (fTemp45 * ((fSlow453 * fTemp43) + (fSlow454 * fTemp42))));
				fTemp94 = ((fTemp46 * ((fSlow455 * fTemp43) + (fSlow456 * fTemp42))) + (fTemp45 * ((fSlow457 * fTemp43) + (fSlow458 * fTemp42))));
				fTemp95 = ((fTemp46 * ((fSlow459 * fTemp43) + (fSlow460 * fTemp42))) + (fTemp45 * ((fSlow461 * fTemp43) + (fSlow462 * fTemp42))));
				fTemp96 = ((fTemp46 * ((fSlow463 * fTemp43) + (fSlow464 * fTemp42))) + (fTemp45 * ((fSlow465 * fTemp43) + (fSlow466 * fTemp42))));
				fTemp97 = (fRec3[1] * ((fTemp40 * (fTemp93 + fTemp94)) + (fTemp39 * (fTemp95 + fTemp96))));
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fRec27[0] = ((fRec27[1] * fSlow472) + fSlow474);
				fTemp98 = (float((int(fVec1[1]) & int(fSlow0))) * fSlow472);
				fRec28[0] = ((fTemp98 * fRec28[1]) + (fSlow473 * (1.0f - fTemp98)));
				fTemp99 = (fRec26[1] + (fConst5 * ((iSlow468 ? fSlow473 : (iSlow469 ? fRec28[0] : fRec27[0])) * fSlow475)));
				iVec3[0] = (fHbargraph0 < 0.100000001f);
				fRec26[0] = ((fTemp99 - std::floor(fTemp99)) * float((float((int(float((iVec3[1] & int(fTemp35)))) & iSlow476)) == 0.0f)));
				fTemp100 = float(((1 - iVec0[1]) < 1));
				fRec29[0] = ((fSlow477 * (1.0f - (0.999000013f * fTemp100))) + (0.999000013f * (fTemp100 * fRec29[1])));
				fTemp101 = (fRec26[0] + fRec29[0]);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp102 = ((fTemp46 * ((fSlow478 * fTemp43) + (fSlow479 * fTemp42))) + (fTemp45 * ((fSlow480 * fTemp43) + (fSlow481 * fTemp42))));
				fTemp103 = ((fTemp46 * ((fSlow482 * fTemp43) + (fSlow483 * fTemp42))) + (fTemp45 * ((fSlow484 * fTemp43) + (fSlow485 * fTemp42))));
				fTemp104 = ((fTemp46 * ((fSlow486 * fTemp43) + (fSlow487 * fTemp42))) + (fTemp45 * ((fSlow488 * fTemp43) + (fSlow489 * fTemp42))));
				fTemp105 = ((fTemp46 * ((fSlow490 * fTemp43) + (fSlow491 * fTemp42))) + (fTemp45 * ((fSlow492 * fTemp43) + (fSlow493 * fTemp42))));
				fTemp106 = ((fTemp40 * (fTemp102 + fTemp103)) + (fTemp39 * (fTemp104 + fTemp105)));
				fTemp107 = ((fTemp46 * ((fSlow494 * fTemp43) + (fSlow495 * fTemp42))) + (fTemp45 * ((fSlow496 * fTemp43) + (fSlow497 * fTemp42))));
				fTemp108 = ((fTemp46 * ((fSlow498 * fTemp43) + (fSlow499 * fTemp42))) + (fTemp45 * ((fSlow500 * fTemp43) + (fSlow501 * fTemp42))));
				fTemp109 = ((fTemp46 * ((fSlow502 * fTemp43) + (fSlow503 * fTemp42))) + (fTemp45 * ((fSlow504 * fTemp43) + (fSlow505 * fTemp42))));
				fTemp110 = ((fTemp46 * ((fSlow506 * fTemp43) + (fSlow507 * fTemp42))) + (fTemp45 * ((fSlow508 * fTemp43) + (fSlow509 * fTemp42))));
				fTemp111 = ((fTemp40 * (fTemp107 + fTemp108)) + (fTemp39 * (fTemp109 + fTemp110)));
				fTemp112 = std::floor(fTemp111);
				fTemp113 = (fTemp112 + float(((fTemp111 < 0.0f) & (fTemp111 != fTemp112))));
				fTemp114 = (fTemp101 + (0.00390625f * (fTemp106 * std::pow(2.0f, (0.0f - fTemp113)))));
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp115 = std::floor(fTemp101);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				iTemp116 = int(fTemp113);
				fTemp117 = ((fTemp46 * ((fSlow510 * fTemp43) + (fSlow511 * fTemp42))) + (fTemp45 * ((fSlow512 * fTemp43) + (fSlow513 * fTemp42))));
				fTemp118 = ((fTemp46 * ((fSlow514 * fTemp43) + (fSlow515 * fTemp42))) + (fTemp45 * ((fSlow516 * fTemp43) + (fSlow517 * fTemp42))));
				fTemp119 = ((fTemp46 * ((fSlow518 * fTemp43) + (fSlow519 * fTemp42))) + (fTemp45 * ((fSlow520 * fTemp43) + (fSlow521 * fTemp42))));
				fTemp120 = ((fTemp46 * ((fSlow522 * fTemp43) + (fSlow523 * fTemp42))) + (fTemp45 * ((fSlow524 * fTemp43) + (fSlow525 * fTemp42))));
				fTemp121 = (fRec2[1] * ((fTemp40 * (fTemp117 + fTemp118)) + (fTemp39 * (fTemp119 + fTemp120))));
				fTemp122 = (fTemp87 + (fTemp92 + (fTemp97 + (std::fmod((256.0f * ((fTemp114 - (fTemp115 + std::floor((fTemp114 - fTemp115)))) * (((float((iTemp116 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp116)))))) + float((iTemp116 == 0))) + float(((iTemp116 > 0) * int(std::pow(2.0f, float(iTemp116)))))))), 1.0f) + fTemp121))));
			}
			if ((iSlow14 & iTemp69) | ((iSlow358 & iTemp69) | ((iSlow356 & iTemp69) | ((iSlow354 & iTemp69) | ((iSlow352 & iTemp69) | ((iSlow350 & iTemp69) | ((iSlow348 & iTemp69) | ((iSlow346 & iTemp69) | (iSlow344 & iTemp69))))))))) {
				fTemp123 = (fRec23[1] + (fTemp82 * (fTemp122 - fRec24[1])));
			}
			if ((iSlow14 & iTemp69) | ((iSlow14 & iTemp78) | ((iSlow14 & iTemp77) | ((iSlow358 & iTemp69) | ((iSlow358 & iTemp78) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp69) | ((iSlow356 & iTemp78) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp69) | ((iSlow354 & iTemp78) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp69) | ((iSlow352 & iTemp78) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp69) | ((iSlow350 & iTemp78) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp69) | ((iSlow348 & iTemp78) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp69) | ((iSlow346 & iTemp78) | ((iSlow346 & iTemp77) | ((iSlow344 & iTemp69) | ((iSlow344 & iTemp78) | ((iSlow344 & iTemp77) | ((iSlow342 & iTemp69) | ((iSlow342 & iTemp78) | ((iSlow342 & iTemp77) | ((iSlow340 & iTemp69) | ((iSlow340 & iTemp78) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp69) | ((iSlow338 & iTemp78) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp69) | ((iSlow336 & iTemp78) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp69) | ((iSlow334 & iTemp78) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp69) | ((iSlow332 & iTemp78) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp69) | ((iSlow330 & iTemp78) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp69) | ((iSlow328 & iTemp78) | ((iSlow328 & iTemp77) | ((iSlow326 & iTemp69) | ((iSlow326 & iTemp78) | ((iSlow326 & iTemp77) | ((iSlow322 & iTemp69) | ((iSlow322 & iTemp78) | ((iSlow322 & iTemp77) | ((iSlow320 & iTemp69) | ((iSlow320 & iTemp78) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp69) | ((iSlow318 & iTemp78) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp69) | ((iSlow316 & iTemp78) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp69) | ((iSlow314 & iTemp78) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp69) | ((iSlow312 & iTemp78) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp69) | ((iSlow310 & iTemp78) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp69) | ((iSlow308 & iTemp78) | ((iSlow308 & iTemp77) | ((iSlow306 & iTemp69) | ((iSlow306 & iTemp78) | ((iSlow306 & iTemp77) | ((iSlow302 & iTemp69) | ((iSlow302 & iTemp78) | ((iSlow302 & iTemp77) | ((iSlow300 & iTemp69) | ((iSlow300 & iTemp78) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp69) | ((iSlow298 & iTemp78) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp69) | ((iSlow296 & iTemp78) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp69) | ((iSlow294 & iTemp78) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp69) | ((iSlow292 & iTemp78) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp69) | ((iSlow290 & iTemp78) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp69) | ((iSlow288 & iTemp78) | ((iSlow288 & iTemp77) | ((iSlow286 & iTemp69) | ((iSlow286 & iTemp78) | ((iSlow286 & iTemp77) | ((iSlow14 & iTemp76) | ((iSlow14 & iTemp74) | ((iSlow14 & iTemp72) | ((iSlow358 & iTemp76) | ((iSlow358 & iTemp74) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp76) | ((iSlow356 & iTemp74) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp76) | ((iSlow354 & iTemp74) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp76) | ((iSlow352 & iTemp74) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp76) | ((iSlow350 & iTemp74) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp76) | ((iSlow348 & iTemp74) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp76) | ((iSlow346 & iTemp74) | ((iSlow346 & iTemp72) | ((iSlow344 & iTemp76) | ((iSlow344 & iTemp74) | ((iSlow344 & iTemp72) | ((iSlow342 & iTemp76) | ((iSlow342 & iTemp74) | ((iSlow342 & iTemp72) | ((iSlow340 & iTemp76) | ((iSlow340 & iTemp74) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp76) | ((iSlow338 & iTemp74) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp76) | ((iSlow336 & iTemp74) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp76) | ((iSlow334 & iTemp74) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp76) | ((iSlow332 & iTemp74) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp76) | ((iSlow330 & iTemp74) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp76) | ((iSlow328 & iTemp74) | ((iSlow328 & iTemp72) | ((iSlow326 & iTemp76) | ((iSlow326 & iTemp74) | ((iSlow326 & iTemp72) | ((iSlow322 & iTemp76) | ((iSlow322 & iTemp74) | ((iSlow322 & iTemp72) | ((iSlow320 & iTemp76) | ((iSlow320 & iTemp74) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp76) | ((iSlow318 & iTemp74) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp76) | ((iSlow316 & iTemp74) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp76) | ((iSlow314 & iTemp74) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp76) | ((iSlow312 & iTemp74) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp76) | ((iSlow310 & iTemp74) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp76) | ((iSlow308 & iTemp74) | ((iSlow308 & iTemp72) | ((iSlow306 & iTemp76) | ((iSlow306 & iTemp74) | ((iSlow306 & iTemp72) | ((iSlow302 & iTemp76) | ((iSlow302 & iTemp74) | ((iSlow302 & iTemp72) | ((iSlow300 & iTemp76) | ((iSlow300 & iTemp74) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp76) | ((iSlow298 & iTemp74) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp76) | ((iSlow296 & iTemp74) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp76) | ((iSlow294 & iTemp74) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp76) | ((iSlow292 & iTemp74) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp76) | ((iSlow290 & iTemp74) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp76) | ((iSlow288 & iTemp74) | ((iSlow288 & iTemp72) | ((iSlow286 & iTemp76) | ((iSlow286 & iTemp74) | (iSlow286 & iTemp72)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp124 = ((fTemp46 * ((fSlow526 * fTemp43) + (fSlow527 * fTemp42))) + (fTemp45 * ((fSlow528 * fTemp43) + (fSlow529 * fTemp42))));
				fTemp125 = ((fTemp46 * ((fSlow530 * fTemp43) + (fSlow531 * fTemp42))) + (fTemp45 * ((fSlow532 * fTemp43) + (fSlow533 * fTemp42))));
				fTemp126 = ((fTemp46 * ((fSlow534 * fTemp43) + (fSlow535 * fTemp42))) + (fTemp45 * ((fSlow536 * fTemp43) + (fSlow537 * fTemp42))));
				fTemp127 = ((fTemp46 * ((fSlow538 * fTemp43) + (fSlow539 * fTemp42))) + (fTemp45 * ((fSlow540 * fTemp43) + (fSlow541 * fTemp42))));
			}
			if ((iSlow14 & iTemp69) | ((iSlow14 & iTemp78) | ((iSlow14 & iTemp77) | ((iSlow358 & iTemp69) | ((iSlow358 & iTemp78) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp69) | ((iSlow356 & iTemp78) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp69) | ((iSlow354 & iTemp78) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp69) | ((iSlow352 & iTemp78) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp69) | ((iSlow350 & iTemp78) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp69) | ((iSlow348 & iTemp78) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp69) | ((iSlow346 & iTemp78) | ((iSlow346 & iTemp77) | ((iSlow344 & iTemp69) | ((iSlow344 & iTemp78) | ((iSlow344 & iTemp77) | ((iSlow342 & iTemp69) | ((iSlow342 & iTemp78) | ((iSlow342 & iTemp77) | ((iSlow340 & iTemp69) | ((iSlow340 & iTemp78) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp69) | ((iSlow338 & iTemp78) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp69) | ((iSlow336 & iTemp78) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp69) | ((iSlow334 & iTemp78) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp69) | ((iSlow332 & iTemp78) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp69) | ((iSlow330 & iTemp78) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp69) | ((iSlow328 & iTemp78) | ((iSlow328 & iTemp77) | ((iSlow326 & iTemp69) | ((iSlow326 & iTemp78) | ((iSlow326 & iTemp77) | ((iSlow322 & iTemp69) | ((iSlow322 & iTemp78) | ((iSlow322 & iTemp77) | ((iSlow320 & iTemp69) | ((iSlow320 & iTemp78) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp69) | ((iSlow318 & iTemp78) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp69) | ((iSlow316 & iTemp78) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp69) | ((iSlow314 & iTemp78) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp69) | ((iSlow312 & iTemp78) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp69) | ((iSlow310 & iTemp78) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp69) | ((iSlow308 & iTemp78) | ((iSlow308 & iTemp77) | ((iSlow306 & iTemp69) | ((iSlow306 & iTemp78) | ((iSlow306 & iTemp77) | ((iSlow302 & iTemp69) | ((iSlow302 & iTemp78) | ((iSlow302 & iTemp77) | ((iSlow300 & iTemp69) | ((iSlow300 & iTemp78) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp69) | ((iSlow298 & iTemp78) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp69) | ((iSlow296 & iTemp78) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp69) | ((iSlow294 & iTemp78) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp69) | ((iSlow292 & iTemp78) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp69) | ((iSlow290 & iTemp78) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp69) | ((iSlow288 & iTemp78) | ((iSlow288 & iTemp77) | ((iSlow286 & iTemp69) | ((iSlow286 & iTemp78) | (iSlow286 & iTemp77)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp128 = std::min<float>(10.0f, std::max<float>(0.00999999978f, ((fTemp40 * (fTemp124 + fTemp125)) + (fTemp39 * (fTemp126 + fTemp127)))));
			}
			if ((iSlow14 & iTemp69) | ((iSlow14 & iTemp77) | ((iSlow358 & iTemp69) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp69) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp69) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp69) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp69) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp69) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp69) | ((iSlow346 & iTemp77) | ((iSlow344 & iTemp69) | ((iSlow344 & iTemp77) | ((iSlow342 & iTemp69) | ((iSlow342 & iTemp77) | ((iSlow340 & iTemp69) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp69) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp69) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp69) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp69) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp69) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp69) | ((iSlow328 & iTemp77) | ((iSlow326 & iTemp69) | ((iSlow326 & iTemp77) | ((iSlow322 & iTemp69) | ((iSlow322 & iTemp77) | ((iSlow320 & iTemp69) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp69) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp69) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp69) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp69) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp69) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp69) | ((iSlow308 & iTemp77) | ((iSlow306 & iTemp69) | ((iSlow306 & iTemp77) | ((iSlow302 & iTemp69) | ((iSlow302 & iTemp77) | ((iSlow300 & iTemp69) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp69) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp69) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp69) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp69) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp69) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp69) | ((iSlow288 & iTemp77) | ((iSlow286 & iTemp69) | (iSlow286 & iTemp77)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp129 = (fTemp82 + (1.0f / fTemp128));
				fTemp130 = ((fTemp82 * fTemp129) + 1.0f);
			}
			if ((iSlow14 & iTemp69) | ((iSlow358 & iTemp69) | ((iSlow356 & iTemp69) | ((iSlow354 & iTemp69) | ((iSlow352 & iTemp69) | ((iSlow350 & iTemp69) | ((iSlow348 & iTemp69) | ((iSlow346 & iTemp69) | (iSlow344 & iTemp69))))))))) {
				fTemp131 = (fTemp123 / fTemp130);
				fRec23[0] = ((2.0f * fTemp131) - fRec23[1]);
				fTemp132 = (fRec24[1] + ((fTemp82 * fTemp123) / fTemp130));
				fRec24[0] = ((2.0f * fTemp132) - fRec24[1]);
				fRec25 = fTemp132;
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp133 = std::max<float>(2.82118644e-37f, fTemp58);
				fTemp134 = ((fTemp57 < 0.0f) ? (0.0f - fTemp133) : fTemp133);
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | (iSlow344 & iTemp78))))))))) {
				fTemp135 = (fTemp82 * (fTemp122 - fRec32[1]));
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | ((iSlow344 & iTemp78) | ((iSlow342 & iTemp78) | ((iSlow340 & iTemp78) | ((iSlow338 & iTemp78) | ((iSlow336 & iTemp78) | ((iSlow334 & iTemp78) | ((iSlow332 & iTemp78) | ((iSlow330 & iTemp78) | ((iSlow328 & iTemp78) | ((iSlow326 & iTemp78) | ((iSlow322 & iTemp78) | ((iSlow320 & iTemp78) | ((iSlow318 & iTemp78) | ((iSlow316 & iTemp78) | ((iSlow314 & iTemp78) | ((iSlow312 & iTemp78) | ((iSlow310 & iTemp78) | ((iSlow308 & iTemp78) | ((iSlow306 & iTemp78) | ((iSlow302 & iTemp78) | ((iSlow300 & iTemp78) | ((iSlow298 & iTemp78) | ((iSlow296 & iTemp78) | ((iSlow294 & iTemp78) | ((iSlow292 & iTemp78) | ((iSlow290 & iTemp78) | ((iSlow288 & iTemp78) | (iSlow286 & iTemp78)))))))))))))))))))))))))))))))))))) {
				fTemp136 = (fTemp128 + -0.707000017f);
				fTemp137 = (fTemp82 + 1.0f);
				fTemp138 = (1.0f - (fTemp82 / fTemp137));
				fTemp139 = (0.0f - (1.0f / fTemp137));
				fTemp140 = (1.0f - (0.215215757f * (((fTemp82 * fTemp136) * fTemp138) / fTemp137)));
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | (iSlow344 & iTemp78))))))))) {
				fTemp141 = ((fTemp82 * ((((fRec32[1] + ((fTemp135 + (0.215215757f * ((fRec30[1] * fTemp136) * fTemp138))) / fTemp137)) + (fRec31[1] * fTemp139)) / fTemp140) - fRec30[1])) / fTemp137);
				fRec30[0] = (fRec30[1] + (2.0f * fTemp141));
				fTemp142 = (fRec30[1] + fTemp141);
				fRec31[0] = (fRec31[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp142)) - fRec31[1])) / fTemp137)));
				fRec32[0] = (fRec32[1] + (2.0f * (fTemp135 / fTemp137)));
				fRec33 = fTemp142;
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp143 = std::max<float>(2.82118644e-37f, fTemp64);
				fTemp144 = ((fTemp63 < 0.0f) ? (0.0f - fTemp143) : fTemp143);
			}
			if ((iSlow14 & iTemp77) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp77) | (iSlow344 & iTemp77))))))))) {
				fTemp145 = (fTemp122 - (fRec35[1] + (fTemp129 * fRec36[1])));
				fTemp146 = ((fTemp82 * fTemp145) / fTemp130);
				fTemp147 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec36[1] + fTemp146)));
				fTemp148 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp147)));
				fTemp149 = ((fTemp82 * fTemp147) * fTemp148);
				fRec34 = (fRec35[1] + fTemp149);
				fRec35[0] = (fRec35[1] + (2.0f * fTemp149));
				fTemp150 = (fTemp147 * fTemp148);
				fRec36[0] = (fTemp146 + fTemp150);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp151 = std::max<float>(8.46355933e-37f, fTemp65);
				fTemp152 = (1.0f - fTemp66);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp153 = (((fTemp66 * (((fTemp68 * fRec25) + (fTemp134 * fRec33)) + (fTemp144 * fRec34))) / fTemp151) + (fTemp122 * fTemp152));
				fVec4[0] = fTemp153;
				fTemp154 = ((fTemp46 * ((fSlow543 * fTemp43) + (fSlow544 * fTemp42))) + (fTemp45 * ((fSlow545 * fTemp43) + (fSlow546 * fTemp42))));
				fTemp155 = ((fTemp46 * ((fSlow547 * fTemp43) + (fSlow548 * fTemp42))) + (fTemp45 * ((fSlow549 * fTemp43) + (fSlow550 * fTemp42))));
				fTemp156 = ((fTemp46 * ((fSlow551 * fTemp43) + (fSlow552 * fTemp42))) + (fTemp45 * ((fSlow553 * fTemp43) + (fSlow554 * fTemp42))));
				fTemp157 = ((fTemp46 * ((fSlow555 * fTemp43) + (fSlow556 * fTemp42))) + (fTemp45 * ((fSlow557 * fTemp43) + (fSlow558 * fTemp42))));
				fTemp158 = ((fTemp40 * (fTemp154 + fTemp155)) + (fTemp39 * (fTemp156 + fTemp157)));
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | iSlow350))))) {
				fTemp159 = (fSlow542 * fTemp158);
			}
			if (iSlow14) {
				fTemp160 = (2.0f * fTemp159);
				fTemp161 = std::min<float>(1.0f, fTemp160);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fTemp162 = (fTemp153 - fVec4[1]);
				fRec38[0] = ((std::fabs(fTemp162) < 0.5f) ? (fConst0 * fTemp162) : fRec38[1]);
			}
			if (iSlow14) {
				fTemp163 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec38[0])))))));
				fTemp164 = (1.0f - fTemp163);
			}
			if (iSlow14 | iSlow346) {
				fTemp165 = std::floor(fTemp153);
				fTemp166 = (fTemp153 - fTemp165);
				fVec5[0] = fTemp166;
				iTemp167 = (fTemp166 < 0.5f);
				iVec6[0] = iTemp167;
			}
			if (iSlow14) {
				iTemp168 = ((iVec6[1] <= 0) & (iTemp167 > 0));
				fRec43[0] = ((fRec43[1] * float((1 - iTemp168))) + (4.65661287e-10f * (fTemp36 * float(iTemp168))));
				fTemp169 = (fTemp163 + 1.0f);
				fRec42[0] = (0.0f - (((fTemp164 * fRec42[1]) - (fRec43[0] + fRec43[1])) / fTemp169));
				fRec41[0] = (0.0f - (((fTemp164 * fRec41[1]) - (fRec42[0] + fRec42[1])) / fTemp169));
				fRec40[0] = (0.0f - (((fTemp164 * fRec40[1]) - (fRec41[0] + fRec41[1])) / fTemp169));
				fRec39[0] = (0.0f - (((fTemp164 * fRec39[1]) - (fRec40[0] + fRec40[1])) / fTemp169));
				fRec37[0] = (0.0f - (((fRec37[1] * fTemp164) - (fRec39[0] + fRec39[1])) / fTemp169));
				fTemp170 = (std::sin((6.28318548f * fTemp153)) * ((fTemp161 * (fRec37[0] + -1.0f)) + 1.0f));
				fTemp171 = (std::max<float>(1.0f, fTemp160) + -1.0f);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp172 = std::fmod(std::fabs(fTemp111), 1.0f);
				fTemp173 = (1.0f - fTemp172);
				fTemp174 = (fTemp112 + float((fTemp111 > 0.0f)));
				fTemp175 = (fTemp101 + (0.00390625f * (fTemp106 * std::pow(2.0f, (0.0f - fTemp174)))));
				iTemp176 = int(fTemp174);
				fTemp177 = ((((fTemp121 + fTemp97) + fTemp92) + fTemp87) + std::fmod((256.0f * ((fTemp175 - (fTemp115 + std::floor((fTemp175 - fTemp115)))) * (((float((iTemp176 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp176)))))) + float((iTemp176 == 0))) + float(((iTemp176 > 0) * int(std::pow(2.0f, float(iTemp176)))))))), 1.0f));
			}
			if ((iSlow14 & iTemp69) | ((iSlow358 & iTemp69) | ((iSlow356 & iTemp69) | ((iSlow354 & iTemp69) | ((iSlow352 & iTemp69) | ((iSlow350 & iTemp69) | ((iSlow348 & iTemp69) | ((iSlow346 & iTemp69) | (iSlow344 & iTemp69))))))))) {
				fTemp178 = (fRec44[1] + (fTemp82 * (fTemp177 - fRec45[1])));
				fTemp179 = (fTemp178 / fTemp130);
				fRec44[0] = ((2.0f * fTemp179) - fRec44[1]);
				fTemp180 = (fRec45[1] + ((fTemp82 * fTemp178) / fTemp130));
				fRec45[0] = ((2.0f * fTemp180) - fRec45[1]);
				fRec46 = fTemp180;
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | (iSlow344 & iTemp78))))))))) {
				fTemp181 = (fTemp82 * (fTemp177 - fRec49[1]));
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | ((iSlow344 & iTemp78) | ((iSlow342 & iTemp78) | ((iSlow340 & iTemp78) | ((iSlow338 & iTemp78) | ((iSlow336 & iTemp78) | ((iSlow334 & iTemp78) | ((iSlow332 & iTemp78) | ((iSlow330 & iTemp78) | ((iSlow328 & iTemp78) | ((iSlow326 & iTemp78) | ((iSlow322 & iTemp78) | ((iSlow320 & iTemp78) | ((iSlow318 & iTemp78) | ((iSlow316 & iTemp78) | ((iSlow314 & iTemp78) | ((iSlow312 & iTemp78) | ((iSlow310 & iTemp78) | ((iSlow308 & iTemp78) | ((iSlow306 & iTemp78) | ((iSlow302 & iTemp78) | ((iSlow300 & iTemp78) | ((iSlow298 & iTemp78) | ((iSlow296 & iTemp78) | ((iSlow294 & iTemp78) | ((iSlow292 & iTemp78) | ((iSlow290 & iTemp78) | ((iSlow288 & iTemp78) | (iSlow286 & iTemp78)))))))))))))))))))))))))))))))))))) {
				fTemp182 = (fTemp136 * fTemp138);
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | (iSlow344 & iTemp78))))))))) {
				fTemp183 = ((fTemp82 * ((((fRec49[1] + ((fTemp181 + (0.215215757f * (fTemp182 * fRec47[1]))) / fTemp137)) + (fTemp139 * fRec48[1])) / fTemp140) - fRec47[1])) / fTemp137);
				fRec47[0] = (fRec47[1] + (2.0f * fTemp183));
				fTemp184 = (fRec47[1] + fTemp183);
				fRec48[0] = (fRec48[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp184)) - fRec48[1])) / fTemp137)));
				fRec49[0] = (fRec49[1] + (2.0f * (fTemp181 / fTemp137)));
				fRec50 = fTemp184;
			}
			if ((iSlow14 & iTemp77) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp77) | (iSlow344 & iTemp77))))))))) {
				fTemp185 = (fTemp177 - (fRec52[1] + (fTemp129 * fRec53[1])));
				fTemp186 = ((fTemp82 * fTemp185) / fTemp130);
				fTemp187 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec53[1] + fTemp186)));
				fTemp188 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp187)));
				fTemp189 = ((fTemp82 * fTemp187) * fTemp188);
				fRec51 = (fRec52[1] + fTemp189);
				fRec52[0] = (fRec52[1] + (2.0f * fTemp189));
				fTemp190 = (fTemp187 * fTemp188);
				fRec53[0] = (fTemp186 + fTemp190);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp191 = (((fTemp66 * (((fTemp68 * fRec46) + (fTemp134 * fRec50)) + (fTemp144 * fRec51))) / fTemp151) + (fTemp152 * fTemp177));
				fVec7[0] = fTemp191;
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fTemp192 = (fTemp191 - fVec7[1]);
				fRec55[0] = ((std::fabs(fTemp192) < 0.5f) ? (fConst0 * fTemp192) : fRec55[1]);
			}
			if (iSlow14) {
				fTemp193 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec55[0])))))));
				fTemp194 = (1.0f - fTemp193);
			}
			if (iSlow14 | iSlow346) {
				fTemp195 = std::floor(fTemp191);
				fTemp196 = (fTemp191 - fTemp195);
				fVec8[0] = fTemp196;
				iTemp197 = (fTemp196 < 0.5f);
				iVec9[0] = iTemp197;
			}
			if (iSlow14) {
				iTemp198 = ((iVec9[1] <= 0) & (iTemp197 > 0));
				fRec60[0] = ((fRec60[1] * float((1 - iTemp198))) + (4.65661287e-10f * (fTemp36 * float(iTemp198))));
				fTemp199 = (fTemp193 + 1.0f);
				fRec59[0] = (0.0f - (((fTemp194 * fRec59[1]) - (fRec60[0] + fRec60[1])) / fTemp199));
				fRec58[0] = (0.0f - (((fTemp194 * fRec58[1]) - (fRec59[0] + fRec59[1])) / fTemp199));
				fRec57[0] = (0.0f - (((fTemp194 * fRec57[1]) - (fRec58[0] + fRec58[1])) / fTemp199));
				fRec56[0] = (0.0f - (((fTemp194 * fRec56[1]) - (fRec57[0] + fRec57[1])) / fTemp199));
				fRec54[0] = (0.0f - (((fRec54[1] * fTemp194) - (fRec56[0] + fRec56[1])) / fTemp199));
				fTemp200 = (std::sin((6.28318548f * fTemp191)) * ((fTemp161 * (fRec54[0] + -1.0f)) + 1.0f));
				fTemp201 = (((fTemp170 + (fTemp171 * (fRec37[0] - fTemp170))) * fTemp173) + (fTemp172 * (fTemp200 + (fTemp171 * (fRec54[0] - fTemp200)))));
			}
			if (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | iSlow350)))) {
				fTemp202 = (fTemp159 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec38[0] - fConst7))))));
			}
			if (iSlow358 | (iSlow354 | (iSlow352 | iSlow350))) {
				fTemp203 = (1.0f - fTemp202);
			}
			if (iSlow358) {
				fTemp204 = ((0.75f * fTemp203) + (fTemp153 + (0.5f * fTemp202)));
				fTemp205 = std::floor(fTemp204);
			}
			if (iSlow358 | iSlow350) {
				fTemp206 = (0.5f * fTemp203);
			}
			if (iSlow358) {
				fTemp207 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp206));
				fTemp208 = (0.5f - fTemp207);
			}
			if (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | iSlow350)))) {
				fTemp209 = (fTemp159 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec55[0] - fConst7))))));
			}
			if (iSlow358 | (iSlow354 | (iSlow352 | iSlow350))) {
				fTemp210 = (1.0f - fTemp209);
			}
			if (iSlow358) {
				fTemp211 = ((0.75f * fTemp210) + (fTemp191 + (0.5f * fTemp209)));
				fTemp212 = std::floor(fTemp211);
			}
			if (iSlow358 | iSlow350) {
				fTemp213 = (0.5f * fTemp210);
			}
			if (iSlow358) {
				fTemp214 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp213));
				fTemp215 = (0.5f - fTemp214);
				fTemp216 = ((fTemp173 * std::cos((6.28318548f * ((fTemp204 + std::min<float>((((fTemp204 - fTemp205) * fTemp208) / fTemp207), ((fTemp208 * (fTemp205 + (1.0f - fTemp204))) / (1.0f - fTemp207)))) - fTemp205)))) + (fTemp172 * std::cos((6.28318548f * ((fTemp211 + std::min<float>((((fTemp211 - fTemp212) * fTemp215) / fTemp214), ((fTemp215 * (fTemp212 + (1.0f - fTemp211))) / (1.0f - fTemp214)))) - fTemp212)))));
			}
			if (iSlow356) {
				fTemp217 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp202));
				fTemp218 = (1.0f - fTemp217);
				fTemp219 = (0.25f * fTemp218);
				fTemp220 = (fTemp153 - (fTemp219 + std::floor((fTemp153 - fTemp219))));
				fTemp221 = (2.0f * fTemp220);
				fTemp222 = std::floor((fTemp221 + 1.0f));
				fTemp223 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp209));
				fTemp224 = (1.0f - fTemp223);
				fTemp225 = (0.25f * fTemp224);
				fTemp226 = (fTemp191 - (fTemp225 + std::floor((fTemp191 - fTemp225))));
				fTemp227 = (2.0f * fTemp226);
				fTemp228 = std::floor((fTemp227 + 1.0f));
				fTemp229 = ((fTemp173 * std::cos((3.14159274f * ((float((fTemp220 >= 0.5f)) + fTemp221) + (1.0f - (fTemp222 + std::min<float>((fTemp221 + (1.0f - fTemp222)), ((fTemp217 * (fTemp222 - fTemp221)) / fTemp218)))))))) + (fTemp172 * std::cos((3.14159274f * ((float((fTemp226 >= 0.5f)) + fTemp227) + (1.0f - (fTemp228 + std::min<float>((fTemp227 + (1.0f - fTemp228)), ((fTemp223 * (fTemp228 - fTemp227)) / fTemp224)))))))));
			}
			if (iSlow354) {
				fTemp230 = (0.25f * fTemp203);
				fTemp231 = (fTemp230 + std::floor((fTemp153 - fTemp230)));
			}
			if (iSlow354 | (iSlow352 | (iSlow348 | iSlow344))) {
				fTemp232 = (1.0f - fTemp153);
			}
			if (iSlow354) {
				fTemp233 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp202));
				fTemp234 = (0.25f * fTemp210);
				fTemp235 = (fTemp234 + std::floor((fTemp191 - fTemp234)));
			}
			if (iSlow354 | (iSlow352 | (iSlow348 | iSlow344))) {
				fTemp236 = (1.0f - fTemp191);
			}
			if (iSlow354) {
				fTemp237 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp209));
				fTemp238 = ((fTemp173 * std::cos((6.28318548f * (fTemp153 - (fTemp231 + std::min<float>((fTemp153 - fTemp231), (((fTemp231 + fTemp232) * fTemp233) / (1.0f - fTemp233)))))))) + (fTemp172 * std::cos((6.28318548f * (fTemp191 - (fTemp235 + std::min<float>((fTemp191 - fTemp235), (((fTemp235 + fTemp236) * fTemp237) / (1.0f - fTemp237)))))))));
			}
			if (iSlow352) {
				fTemp239 = ((0.125f * fTemp203) + (0.25f * fTemp202));
				fTemp240 = (fTemp239 + std::floor((fTemp153 - fTemp239)));
				fTemp241 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp202));
				fTemp242 = (0.49000001f * fTemp241);
				fTemp243 = ((0.125f * fTemp210) + (0.25f * fTemp209));
				fTemp244 = (fTemp243 + std::floor((fTemp191 - fTemp243)));
				fTemp245 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp209));
				fTemp246 = (0.49000001f * fTemp245);
				fTemp247 = ((fTemp173 * std::cos((12.566371f * ((fTemp153 + std::min<float>((0.49000001f * (((fTemp153 - fTemp240) * fTemp241) / (0.5f - fTemp242))), (0.49000001f * ((fTemp241 * (fTemp240 + fTemp232)) / (fTemp242 + 0.5f))))) - fTemp240)))) + (fTemp172 * std::cos((12.566371f * ((fTemp191 + std::min<float>((0.49000001f * (((fTemp191 - fTemp244) * fTemp245) / (0.5f - fTemp246))), (0.49000001f * ((fTemp245 * (fTemp244 + fTemp236)) / (fTemp246 + 0.5f))))) - fTemp244)))));
			}
			if (iSlow350) {
				fTemp248 = std::min<float>(0.975000024f, fTemp202);
				fTemp249 = (0.25f * (1.0f - fTemp248));
				fTemp250 = (fTemp249 + (0.5f * fTemp248));
				fTemp251 = std::floor((fTemp153 - fTemp250));
				fTemp252 = (fTemp153 - (fTemp250 + fTemp251));
				fTemp253 = std::min<float>(0.975000024f, fTemp209);
				fTemp254 = (0.25f * (1.0f - fTemp253));
				fTemp255 = (fTemp254 + (0.5f * fTemp253));
				fTemp256 = std::floor((fTemp191 - fTemp255));
				fTemp257 = (fTemp191 - (fTemp255 + fTemp256));
				fTemp258 = ((fTemp173 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp252 < 0.5f) ? fTemp252 : (0.5f * (((fTemp153 - ((fTemp249 + fTemp251) + (0.5f * (fTemp248 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp206))) + 1.0f))))))) + (fTemp172 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp257 < 0.5f) ? fTemp257 : (0.5f * (((fTemp191 - ((fTemp254 + fTemp256) + (0.5f * (fTemp253 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp213))) + 1.0f))))))));
			}
			if (iSlow348 | iSlow344) {
				fTemp259 = (fTemp153 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec38[0] * fSlow542) * fTemp158))) / fRec38[0])));
				fTemp260 = (fTemp191 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec55[0] * fSlow542) * fTemp158))) / fRec55[0])));
			}
			if (iSlow348) {
				fTemp261 = ((fTemp173 * (((0.0f - fTemp232) * (1.0f - std::cos((6.28318548f * (fTemp259 + (1.0f - std::floor((fTemp259 + 1.0f)))))))) + 1.0f)) + (fTemp172 * (((0.0f - fTemp236) * (1.0f - std::cos((6.28318548f * (fTemp260 + (1.0f - std::floor((fTemp260 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow346) {
				fTemp262 = (fTemp153 - (fTemp165 + fVec5[1]));
				fRec61[0] = ((std::fabs(fTemp262) < 0.5f) ? (fConst0 * fTemp262) : fRec61[1]);
				fTemp263 = (fTemp166 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec61[0] * fSlow542) * fTemp158))) / fRec61[0])));
				fTemp264 = (fTemp191 - (fTemp195 + fVec8[1]));
				fRec62[0] = ((std::fabs(fTemp264) < 0.5f) ? (fConst0 * fTemp264) : fRec62[1]);
				fTemp265 = (fTemp196 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec62[0] * fSlow542) * fTemp158))) / fRec62[0])));
				fTemp266 = ((fTemp173 * (((iTemp167 ? (2.0f * fTemp166) : (2.0f * (1.0f - fTemp166))) * (std::cos((6.28318548f * (fTemp263 + (1.0f - std::floor((fTemp263 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp172 * (((iTemp197 ? (2.0f * fTemp196) : (2.0f * (1.0f - fTemp196))) * (std::cos((6.28318548f * (fTemp265 + (1.0f - std::floor((fTemp265 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow344) {
				fTemp267 = (((fTemp173 * std::min<float>(1.0f, (2.0f * fTemp232))) * std::sin((6.28318548f * (fTemp259 - std::floor(fTemp259))))) + ((fTemp172 * std::min<float>(1.0f, (2.0f * fTemp236))) * std::sin((6.28318548f * (fTemp260 - std::floor(fTemp260))))));
			}
			fRec2[0] = (((((((((fSlow13 * fTemp201) + (fSlow357 * fTemp216)) + (fSlow355 * fTemp229)) + (fSlow353 * fTemp238)) + (fSlow351 * fTemp247)) + (fSlow349 * fTemp258)) + (fSlow347 * fTemp261)) + (fSlow345 * fTemp266)) + (fSlow343 * fTemp267));
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp268 = ((fTemp46 * ((fSlow559 * fTemp43) + (fSlow560 * fTemp42))) + (fTemp45 * ((fSlow561 * fTemp43) + (fSlow562 * fTemp42))));
				fTemp269 = ((fTemp46 * ((fSlow563 * fTemp43) + (fSlow564 * fTemp42))) + (fTemp45 * ((fSlow565 * fTemp43) + (fSlow566 * fTemp42))));
				fTemp270 = ((fTemp46 * ((fSlow567 * fTemp43) + (fSlow568 * fTemp42))) + (fTemp45 * ((fSlow569 * fTemp43) + (fSlow570 * fTemp42))));
				fTemp271 = ((fTemp46 * ((fSlow571 * fTemp43) + (fSlow572 * fTemp42))) + (fTemp45 * ((fSlow573 * fTemp43) + (fSlow574 * fTemp42))));
				fTemp272 = (fRec5[1] * ((fTemp40 * (fTemp268 + fTemp269)) + (fTemp39 * (fTemp270 + fTemp271))));
				fTemp273 = ((fTemp46 * ((fSlow575 * fTemp43) + (fSlow576 * fTemp42))) + (fTemp45 * ((fSlow577 * fTemp43) + (fSlow578 * fTemp42))));
				fTemp274 = ((fTemp46 * ((fSlow579 * fTemp43) + (fSlow580 * fTemp42))) + (fTemp45 * ((fSlow581 * fTemp43) + (fSlow582 * fTemp42))));
				fTemp275 = ((fTemp46 * ((fSlow583 * fTemp43) + (fSlow584 * fTemp42))) + (fTemp45 * ((fSlow585 * fTemp43) + (fSlow586 * fTemp42))));
				fTemp276 = ((fTemp46 * ((fSlow587 * fTemp43) + (fSlow588 * fTemp42))) + (fTemp45 * ((fSlow589 * fTemp43) + (fSlow590 * fTemp42))));
				fTemp277 = (fRec4[1] * ((fTemp40 * (fTemp273 + fTemp274)) + (fTemp39 * (fTemp275 + fTemp276))));
				fTemp278 = ((fTemp46 * ((fSlow591 * fTemp43) + (fSlow592 * fTemp42))) + (fTemp45 * ((fSlow593 * fTemp43) + (fSlow594 * fTemp42))));
				fTemp279 = ((fTemp46 * ((fSlow595 * fTemp43) + (fSlow596 * fTemp42))) + (fTemp45 * ((fSlow597 * fTemp43) + (fSlow598 * fTemp42))));
				fTemp280 = ((fTemp46 * ((fSlow599 * fTemp43) + (fSlow600 * fTemp42))) + (fTemp45 * ((fSlow601 * fTemp43) + (fSlow602 * fTemp42))));
				fTemp281 = ((fTemp46 * ((fSlow603 * fTemp43) + (fSlow604 * fTemp42))) + (fTemp45 * ((fSlow605 * fTemp43) + (fSlow606 * fTemp42))));
				fTemp282 = (fRec3[1] * ((fTemp40 * (fTemp278 + fTemp279)) + (fTemp39 * (fTemp280 + fTemp281))));
				fTemp283 = ((fTemp46 * ((fSlow607 * fTemp43) + (fSlow608 * fTemp42))) + (fTemp45 * ((fSlow609 * fTemp43) + (fSlow610 * fTemp42))));
				fTemp284 = ((fTemp46 * ((fSlow611 * fTemp43) + (fSlow612 * fTemp42))) + (fTemp45 * ((fSlow613 * fTemp43) + (fSlow614 * fTemp42))));
				fTemp285 = ((fTemp46 * ((fSlow615 * fTemp43) + (fSlow616 * fTemp42))) + (fTemp45 * ((fSlow617 * fTemp43) + (fSlow618 * fTemp42))));
				fTemp286 = ((fTemp46 * ((fSlow619 * fTemp43) + (fSlow620 * fTemp42))) + (fTemp45 * ((fSlow621 * fTemp43) + (fSlow622 * fTemp42))));
				fTemp287 = ((fTemp40 * (fTemp283 + fTemp284)) + (fTemp39 * (fTemp285 + fTemp286)));
				fTemp288 = ((fTemp46 * ((fSlow623 * fTemp43) + (fSlow624 * fTemp42))) + (fTemp45 * ((fSlow625 * fTemp43) + (fSlow626 * fTemp42))));
				fTemp289 = ((fTemp46 * ((fSlow627 * fTemp43) + (fSlow628 * fTemp42))) + (fTemp45 * ((fSlow629 * fTemp43) + (fSlow630 * fTemp42))));
				fTemp290 = ((fTemp46 * ((fSlow631 * fTemp43) + (fSlow632 * fTemp42))) + (fTemp45 * ((fSlow633 * fTemp43) + (fSlow634 * fTemp42))));
				fTemp291 = ((fTemp46 * ((fSlow635 * fTemp43) + (fSlow636 * fTemp42))) + (fTemp45 * ((fSlow637 * fTemp43) + (fSlow638 * fTemp42))));
				fTemp292 = ((fTemp40 * (fTemp288 + fTemp289)) + (fTemp39 * (fTemp290 + fTemp291)));
				fTemp293 = std::floor(fTemp292);
				fTemp294 = (fTemp293 + float(((fTemp292 < 0.0f) & (fTemp292 != fTemp293))));
				fTemp295 = (fTemp101 + (0.00390625f * (fTemp287 * std::pow(2.0f, (0.0f - fTemp294)))));
				iTemp296 = int(fTemp294);
				fTemp297 = ((fTemp46 * ((fSlow639 * fTemp43) + (fSlow640 * fTemp42))) + (fTemp45 * ((fSlow641 * fTemp43) + (fSlow642 * fTemp42))));
				fTemp298 = ((fTemp46 * ((fSlow643 * fTemp43) + (fSlow644 * fTemp42))) + (fTemp45 * ((fSlow645 * fTemp43) + (fSlow646 * fTemp42))));
				fTemp299 = ((fTemp46 * ((fSlow647 * fTemp43) + (fSlow648 * fTemp42))) + (fTemp45 * ((fSlow649 * fTemp43) + (fSlow650 * fTemp42))));
				fTemp300 = ((fTemp46 * ((fSlow651 * fTemp43) + (fSlow652 * fTemp42))) + (fTemp45 * ((fSlow653 * fTemp43) + (fSlow654 * fTemp42))));
				fTemp301 = (fRec2[1] * ((fTemp40 * (fTemp297 + fTemp298)) + (fTemp39 * (fTemp299 + fTemp300))));
				fTemp302 = (fTemp272 + (fTemp277 + (fTemp282 + (std::fmod((256.0f * ((fTemp295 - (fTemp115 + std::floor((fTemp295 - fTemp115)))) * (((float((iTemp296 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp296)))))) + float((iTemp296 == 0))) + float(((iTemp296 > 0) * int(std::pow(2.0f, float(iTemp296)))))))), 1.0f) + fTemp301))));
			}
			if ((iSlow342 & iTemp69) | ((iSlow340 & iTemp69) | ((iSlow338 & iTemp69) | ((iSlow336 & iTemp69) | ((iSlow334 & iTemp69) | ((iSlow332 & iTemp69) | ((iSlow330 & iTemp69) | ((iSlow328 & iTemp69) | (iSlow326 & iTemp69))))))))) {
				fTemp303 = (fRec63[1] + (fTemp82 * (fTemp302 - fRec64[1])));
				fTemp304 = (fTemp303 / fTemp130);
				fRec63[0] = ((2.0f * fTemp304) - fRec63[1]);
				fTemp305 = (fRec64[1] + ((fTemp82 * fTemp303) / fTemp130));
				fRec64[0] = ((2.0f * fTemp305) - fRec64[1]);
				fRec65 = fTemp305;
			}
			if ((iSlow342 & iTemp78) | ((iSlow340 & iTemp78) | ((iSlow338 & iTemp78) | ((iSlow336 & iTemp78) | ((iSlow334 & iTemp78) | ((iSlow332 & iTemp78) | ((iSlow330 & iTemp78) | ((iSlow328 & iTemp78) | (iSlow326 & iTemp78))))))))) {
				fTemp306 = (fTemp82 * (fTemp302 - fRec68[1]));
				fTemp307 = ((fTemp82 * ((((fRec68[1] + ((fTemp306 + (0.215215757f * (fTemp182 * fRec66[1]))) / fTemp137)) + (fTemp139 * fRec67[1])) / fTemp140) - fRec66[1])) / fTemp137);
				fRec66[0] = (fRec66[1] + (2.0f * fTemp307));
				fTemp308 = (fRec66[1] + fTemp307);
				fRec67[0] = (fRec67[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp308)) - fRec67[1])) / fTemp137)));
				fRec68[0] = (fRec68[1] + (2.0f * (fTemp306 / fTemp137)));
				fRec69 = fTemp308;
			}
			if ((iSlow342 & iTemp77) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp77) | (iSlow326 & iTemp77))))))))) {
				fTemp309 = (fTemp302 - (fRec71[1] + (fTemp129 * fRec72[1])));
				fTemp310 = ((fTemp82 * fTemp309) / fTemp130);
				fTemp311 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec72[1] + fTemp310)));
				fTemp312 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp311)));
				fTemp313 = ((fTemp82 * fTemp311) * fTemp312);
				fRec70 = (fRec71[1] + fTemp313);
				fRec71[0] = (fRec71[1] + (2.0f * fTemp313));
				fTemp314 = (fTemp311 * fTemp312);
				fRec72[0] = (fTemp310 + fTemp314);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp315 = (((fTemp66 * (((fTemp68 * fRec65) + (fTemp134 * fRec69)) + (fTemp144 * fRec70))) / fTemp151) + (fTemp152 * fTemp302));
				fVec10[0] = fTemp315;
				fTemp316 = ((fTemp46 * ((fSlow656 * fTemp43) + (fSlow657 * fTemp42))) + (fTemp45 * ((fSlow658 * fTemp43) + (fSlow659 * fTemp42))));
				fTemp317 = ((fTemp46 * ((fSlow660 * fTemp43) + (fSlow661 * fTemp42))) + (fTemp45 * ((fSlow662 * fTemp43) + (fSlow663 * fTemp42))));
				fTemp318 = ((fTemp46 * ((fSlow664 * fTemp43) + (fSlow665 * fTemp42))) + (fTemp45 * ((fSlow666 * fTemp43) + (fSlow667 * fTemp42))));
				fTemp319 = ((fTemp46 * ((fSlow668 * fTemp43) + (fSlow669 * fTemp42))) + (fTemp45 * ((fSlow670 * fTemp43) + (fSlow671 * fTemp42))));
				fTemp320 = ((fTemp40 * (fTemp316 + fTemp317)) + (fTemp39 * (fTemp318 + fTemp319)));
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | iSlow332))))) {
				fTemp321 = (fSlow655 * fTemp320);
			}
			if (iSlow342) {
				fTemp322 = (2.0f * fTemp321);
				fTemp323 = std::min<float>(1.0f, fTemp322);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fTemp324 = (fTemp315 - fVec10[1]);
				fRec74[0] = ((std::fabs(fTemp324) < 0.5f) ? (fConst0 * fTemp324) : fRec74[1]);
			}
			if (iSlow342) {
				fTemp325 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec74[0])))))));
				fTemp326 = (1.0f - fTemp325);
			}
			if (iSlow342 | iSlow328) {
				fTemp327 = std::floor(fTemp315);
				fTemp328 = (fTemp315 - fTemp327);
				fVec11[0] = fTemp328;
				iTemp329 = (fTemp328 < 0.5f);
				iVec12[0] = iTemp329;
			}
			if (iSlow342) {
				iTemp330 = ((iVec12[1] <= 0) & (iTemp329 > 0));
				fRec79[0] = ((fRec79[1] * float((1 - iTemp330))) + (4.65661287e-10f * (fTemp36 * float(iTemp330))));
				fTemp331 = (fTemp325 + 1.0f);
				fRec78[0] = (0.0f - (((fTemp326 * fRec78[1]) - (fRec79[0] + fRec79[1])) / fTemp331));
				fRec77[0] = (0.0f - (((fTemp326 * fRec77[1]) - (fRec78[0] + fRec78[1])) / fTemp331));
				fRec76[0] = (0.0f - (((fTemp326 * fRec76[1]) - (fRec77[0] + fRec77[1])) / fTemp331));
				fRec75[0] = (0.0f - (((fTemp326 * fRec75[1]) - (fRec76[0] + fRec76[1])) / fTemp331));
				fRec73[0] = (0.0f - (((fRec73[1] * fTemp326) - (fRec75[0] + fRec75[1])) / fTemp331));
				fTemp332 = (std::sin((6.28318548f * fTemp315)) * ((fTemp323 * (fRec73[0] + -1.0f)) + 1.0f));
				fTemp333 = (std::max<float>(1.0f, fTemp322) + -1.0f);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp334 = std::fmod(std::fabs(fTemp292), 1.0f);
				fTemp335 = (1.0f - fTemp334);
				fTemp336 = (fTemp293 + float((fTemp292 > 0.0f)));
				fTemp337 = (fTemp101 + (0.00390625f * (fTemp287 * std::pow(2.0f, (0.0f - fTemp336)))));
				iTemp338 = int(fTemp336);
				fTemp339 = ((((fTemp301 + fTemp282) + fTemp277) + fTemp272) + std::fmod((256.0f * ((fTemp337 - (fTemp115 + std::floor((fTemp337 - fTemp115)))) * (((float((iTemp338 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp338)))))) + float((iTemp338 == 0))) + float(((iTemp338 > 0) * int(std::pow(2.0f, float(iTemp338)))))))), 1.0f));
			}
			if ((iSlow342 & iTemp69) | ((iSlow340 & iTemp69) | ((iSlow338 & iTemp69) | ((iSlow336 & iTemp69) | ((iSlow334 & iTemp69) | ((iSlow332 & iTemp69) | ((iSlow330 & iTemp69) | ((iSlow328 & iTemp69) | (iSlow326 & iTemp69))))))))) {
				fTemp340 = (fRec80[1] + (fTemp82 * (fTemp339 - fRec81[1])));
				fTemp341 = (fTemp340 / fTemp130);
				fRec80[0] = ((2.0f * fTemp341) - fRec80[1]);
				fTemp342 = (fRec81[1] + ((fTemp82 * fTemp340) / fTemp130));
				fRec81[0] = ((2.0f * fTemp342) - fRec81[1]);
				fRec82 = fTemp342;
			}
			if ((iSlow342 & iTemp78) | ((iSlow340 & iTemp78) | ((iSlow338 & iTemp78) | ((iSlow336 & iTemp78) | ((iSlow334 & iTemp78) | ((iSlow332 & iTemp78) | ((iSlow330 & iTemp78) | ((iSlow328 & iTemp78) | (iSlow326 & iTemp78))))))))) {
				fTemp343 = (fTemp82 * (fTemp339 - fRec85[1]));
				fTemp344 = ((fTemp82 * ((((fRec85[1] + ((fTemp343 + (0.215215757f * (fTemp182 * fRec83[1]))) / fTemp137)) + (fTemp139 * fRec84[1])) / fTemp140) - fRec83[1])) / fTemp137);
				fRec83[0] = (fRec83[1] + (2.0f * fTemp344));
				fTemp345 = (fRec83[1] + fTemp344);
				fRec84[0] = (fRec84[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp345)) - fRec84[1])) / fTemp137)));
				fRec85[0] = (fRec85[1] + (2.0f * (fTemp343 / fTemp137)));
				fRec86 = fTemp345;
			}
			if ((iSlow342 & iTemp77) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp77) | (iSlow326 & iTemp77))))))))) {
				fTemp346 = (fTemp339 - (fRec88[1] + (fTemp129 * fRec89[1])));
				fTemp347 = ((fTemp82 * fTemp346) / fTemp130);
				fTemp348 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec89[1] + fTemp347)));
				fTemp349 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp348)));
				fTemp350 = ((fTemp82 * fTemp348) * fTemp349);
				fRec87 = (fRec88[1] + fTemp350);
				fRec88[0] = (fRec88[1] + (2.0f * fTemp350));
				fTemp351 = (fTemp348 * fTemp349);
				fRec89[0] = (fTemp347 + fTemp351);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp352 = (((fTemp66 * (((fTemp68 * fRec82) + (fTemp134 * fRec86)) + (fTemp144 * fRec87))) / fTemp151) + (fTemp152 * fTemp339));
				fVec13[0] = fTemp352;
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fTemp353 = (fTemp352 - fVec13[1]);
				fRec91[0] = ((std::fabs(fTemp353) < 0.5f) ? (fConst0 * fTemp353) : fRec91[1]);
			}
			if (iSlow342) {
				fTemp354 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec91[0])))))));
				fTemp355 = (1.0f - fTemp354);
			}
			if (iSlow342 | iSlow328) {
				fTemp356 = std::floor(fTemp352);
				fTemp357 = (fTemp352 - fTemp356);
				fVec14[0] = fTemp357;
				iTemp358 = (fTemp357 < 0.5f);
				iVec15[0] = iTemp358;
			}
			if (iSlow342) {
				iTemp359 = ((iVec15[1] <= 0) & (iTemp358 > 0));
				fRec96[0] = ((fRec96[1] * float((1 - iTemp359))) + (4.65661287e-10f * (fTemp36 * float(iTemp359))));
				fTemp360 = (fTemp354 + 1.0f);
				fRec95[0] = (0.0f - (((fTemp355 * fRec95[1]) - (fRec96[0] + fRec96[1])) / fTemp360));
				fRec94[0] = (0.0f - (((fTemp355 * fRec94[1]) - (fRec95[0] + fRec95[1])) / fTemp360));
				fRec93[0] = (0.0f - (((fTemp355 * fRec93[1]) - (fRec94[0] + fRec94[1])) / fTemp360));
				fRec92[0] = (0.0f - (((fTemp355 * fRec92[1]) - (fRec93[0] + fRec93[1])) / fTemp360));
				fRec90[0] = (0.0f - (((fRec90[1] * fTemp355) - (fRec92[0] + fRec92[1])) / fTemp360));
				fTemp361 = (std::sin((6.28318548f * fTemp352)) * ((fTemp323 * (fRec90[0] + -1.0f)) + 1.0f));
				fTemp362 = (((fTemp332 + (fTemp333 * (fRec73[0] - fTemp332))) * fTemp335) + (fTemp334 * (fTemp361 + (fTemp333 * (fRec90[0] - fTemp361)))));
			}
			if (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | iSlow332)))) {
				fTemp363 = (fTemp321 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec74[0] - fConst7))))));
			}
			if (iSlow340 | (iSlow336 | (iSlow334 | iSlow332))) {
				fTemp364 = (1.0f - fTemp363);
			}
			if (iSlow340) {
				fTemp365 = ((0.75f * fTemp364) + (fTemp315 + (0.5f * fTemp363)));
				fTemp366 = std::floor(fTemp365);
			}
			if (iSlow340 | iSlow332) {
				fTemp367 = (0.5f * fTemp364);
			}
			if (iSlow340) {
				fTemp368 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp367));
				fTemp369 = (0.5f - fTemp368);
			}
			if (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | iSlow332)))) {
				fTemp370 = (fTemp321 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec91[0] - fConst7))))));
			}
			if (iSlow340 | (iSlow336 | (iSlow334 | iSlow332))) {
				fTemp371 = (1.0f - fTemp370);
			}
			if (iSlow340) {
				fTemp372 = ((0.75f * fTemp371) + (fTemp352 + (0.5f * fTemp370)));
				fTemp373 = std::floor(fTemp372);
			}
			if (iSlow340 | iSlow332) {
				fTemp374 = (0.5f * fTemp371);
			}
			if (iSlow340) {
				fTemp375 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp374));
				fTemp376 = (0.5f - fTemp375);
				fTemp377 = ((fTemp335 * std::cos((6.28318548f * ((fTemp365 + std::min<float>((((fTemp365 - fTemp366) * fTemp369) / fTemp368), ((fTemp369 * (fTemp366 + (1.0f - fTemp365))) / (1.0f - fTemp368)))) - fTemp366)))) + (fTemp334 * std::cos((6.28318548f * ((fTemp372 + std::min<float>((((fTemp372 - fTemp373) * fTemp376) / fTemp375), ((fTemp376 * (fTemp373 + (1.0f - fTemp372))) / (1.0f - fTemp375)))) - fTemp373)))));
			}
			if (iSlow338) {
				fTemp378 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp363));
				fTemp379 = (1.0f - fTemp378);
				fTemp380 = (0.25f * fTemp379);
				fTemp381 = (fTemp315 - (fTemp380 + std::floor((fTemp315 - fTemp380))));
				fTemp382 = (2.0f * fTemp381);
				fTemp383 = std::floor((fTemp382 + 1.0f));
				fTemp384 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp370));
				fTemp385 = (1.0f - fTemp384);
				fTemp386 = (0.25f * fTemp385);
				fTemp387 = (fTemp352 - (fTemp386 + std::floor((fTemp352 - fTemp386))));
				fTemp388 = (2.0f * fTemp387);
				fTemp389 = std::floor((fTemp388 + 1.0f));
				fTemp390 = ((fTemp335 * std::cos((3.14159274f * ((float((fTemp381 >= 0.5f)) + fTemp382) + (1.0f - (fTemp383 + std::min<float>((fTemp382 + (1.0f - fTemp383)), ((fTemp378 * (fTemp383 - fTemp382)) / fTemp379)))))))) + (fTemp334 * std::cos((3.14159274f * ((float((fTemp387 >= 0.5f)) + fTemp388) + (1.0f - (fTemp389 + std::min<float>((fTemp388 + (1.0f - fTemp389)), ((fTemp384 * (fTemp389 - fTemp388)) / fTemp385)))))))));
			}
			if (iSlow336) {
				fTemp391 = (0.25f * fTemp364);
				fTemp392 = (fTemp391 + std::floor((fTemp315 - fTemp391)));
			}
			if (iSlow336 | (iSlow334 | (iSlow330 | iSlow326))) {
				fTemp393 = (1.0f - fTemp315);
			}
			if (iSlow336) {
				fTemp394 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp363));
				fTemp395 = (0.25f * fTemp371);
				fTemp396 = (fTemp395 + std::floor((fTemp352 - fTemp395)));
			}
			if (iSlow336 | (iSlow334 | (iSlow330 | iSlow326))) {
				fTemp397 = (1.0f - fTemp352);
			}
			if (iSlow336) {
				fTemp398 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp370));
				fTemp399 = ((fTemp335 * std::cos((6.28318548f * (fTemp315 - (fTemp392 + std::min<float>((fTemp315 - fTemp392), (((fTemp392 + fTemp393) * fTemp394) / (1.0f - fTemp394)))))))) + (fTemp334 * std::cos((6.28318548f * (fTemp352 - (fTemp396 + std::min<float>((fTemp352 - fTemp396), (((fTemp396 + fTemp397) * fTemp398) / (1.0f - fTemp398)))))))));
			}
			if (iSlow334) {
				fTemp400 = ((0.125f * fTemp364) + (0.25f * fTemp363));
				fTemp401 = (fTemp400 + std::floor((fTemp315 - fTemp400)));
				fTemp402 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp363));
				fTemp403 = (0.49000001f * fTemp402);
				fTemp404 = ((0.125f * fTemp371) + (0.25f * fTemp370));
				fTemp405 = (fTemp404 + std::floor((fTemp352 - fTemp404)));
				fTemp406 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp370));
				fTemp407 = (0.49000001f * fTemp406);
				fTemp408 = ((fTemp335 * std::cos((12.566371f * ((fTemp315 + std::min<float>((0.49000001f * (((fTemp315 - fTemp401) * fTemp402) / (0.5f - fTemp403))), (0.49000001f * ((fTemp402 * (fTemp401 + fTemp393)) / (fTemp403 + 0.5f))))) - fTemp401)))) + (fTemp334 * std::cos((12.566371f * ((fTemp352 + std::min<float>((0.49000001f * (((fTemp352 - fTemp405) * fTemp406) / (0.5f - fTemp407))), (0.49000001f * ((fTemp406 * (fTemp405 + fTemp397)) / (fTemp407 + 0.5f))))) - fTemp405)))));
			}
			if (iSlow332) {
				fTemp409 = std::min<float>(0.975000024f, fTemp363);
				fTemp410 = (0.25f * (1.0f - fTemp409));
				fTemp411 = (fTemp410 + (0.5f * fTemp409));
				fTemp412 = std::floor((fTemp315 - fTemp411));
				fTemp413 = (fTemp315 - (fTemp411 + fTemp412));
				fTemp414 = std::min<float>(0.975000024f, fTemp370);
				fTemp415 = (0.25f * (1.0f - fTemp414));
				fTemp416 = (fTemp415 + (0.5f * fTemp414));
				fTemp417 = std::floor((fTemp352 - fTemp416));
				fTemp418 = (fTemp352 - (fTemp416 + fTemp417));
				fTemp419 = ((fTemp335 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp413 < 0.5f) ? fTemp413 : (0.5f * (((fTemp315 - ((fTemp410 + fTemp412) + (0.5f * (fTemp409 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp367))) + 1.0f))))))) + (fTemp334 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp418 < 0.5f) ? fTemp418 : (0.5f * (((fTemp352 - ((fTemp415 + fTemp417) + (0.5f * (fTemp414 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp374))) + 1.0f))))))));
			}
			if (iSlow330 | iSlow326) {
				fTemp420 = (fTemp315 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec74[0] * fSlow655) * fTemp320))) / fRec74[0])));
				fTemp421 = (fTemp352 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec91[0] * fSlow655) * fTemp320))) / fRec91[0])));
			}
			if (iSlow330) {
				fTemp422 = ((fTemp335 * (((0.0f - fTemp393) * (1.0f - std::cos((6.28318548f * (fTemp420 + (1.0f - std::floor((fTemp420 + 1.0f)))))))) + 1.0f)) + (fTemp334 * (((0.0f - fTemp397) * (1.0f - std::cos((6.28318548f * (fTemp421 + (1.0f - std::floor((fTemp421 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow328) {
				fTemp423 = (fTemp315 - (fTemp327 + fVec11[1]));
				fRec97[0] = ((std::fabs(fTemp423) < 0.5f) ? (fConst0 * fTemp423) : fRec97[1]);
				fTemp424 = (fTemp328 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec97[0] * fSlow655) * fTemp320))) / fRec97[0])));
				fTemp425 = (fTemp352 - (fTemp356 + fVec14[1]));
				fRec98[0] = ((std::fabs(fTemp425) < 0.5f) ? (fConst0 * fTemp425) : fRec98[1]);
				fTemp426 = (fTemp357 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec98[0] * fSlow655) * fTemp320))) / fRec98[0])));
				fTemp427 = ((fTemp335 * (((iTemp329 ? (2.0f * fTemp328) : (2.0f * (1.0f - fTemp328))) * (std::cos((6.28318548f * (fTemp424 + (1.0f - std::floor((fTemp424 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp334 * (((iTemp358 ? (2.0f * fTemp357) : (2.0f * (1.0f - fTemp357))) * (std::cos((6.28318548f * (fTemp426 + (1.0f - std::floor((fTemp426 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow326) {
				fTemp428 = (((fTemp335 * std::min<float>(1.0f, (2.0f * fTemp393))) * std::sin((6.28318548f * (fTemp420 - std::floor(fTemp420))))) + ((fTemp334 * std::min<float>(1.0f, (2.0f * fTemp397))) * std::sin((6.28318548f * (fTemp421 - std::floor(fTemp421))))));
			}
			fRec3[0] = (((((((((fSlow341 * fTemp362) + (fSlow339 * fTemp377)) + (fSlow337 * fTemp390)) + (fSlow335 * fTemp399)) + (fSlow333 * fTemp408)) + (fSlow331 * fTemp419)) + (fSlow329 * fTemp422)) + (fSlow327 * fTemp427)) + (fSlow325 * fTemp428));
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp429 = ((fTemp46 * ((fSlow672 * fTemp43) + (fSlow673 * fTemp42))) + (fTemp45 * ((fSlow674 * fTemp43) + (fSlow675 * fTemp42))));
				fTemp430 = ((fTemp46 * ((fSlow676 * fTemp43) + (fSlow677 * fTemp42))) + (fTemp45 * ((fSlow678 * fTemp43) + (fSlow679 * fTemp42))));
				fTemp431 = ((fTemp46 * ((fSlow680 * fTemp43) + (fSlow681 * fTemp42))) + (fTemp45 * ((fSlow682 * fTemp43) + (fSlow683 * fTemp42))));
				fTemp432 = ((fTemp46 * ((fSlow684 * fTemp43) + (fSlow685 * fTemp42))) + (fTemp45 * ((fSlow686 * fTemp43) + (fSlow687 * fTemp42))));
				fTemp433 = (fRec5[1] * ((fTemp40 * (fTemp429 + fTemp430)) + (fTemp39 * (fTemp431 + fTemp432))));
				fTemp434 = ((fTemp46 * ((fSlow688 * fTemp43) + (fSlow689 * fTemp42))) + (fTemp45 * ((fSlow690 * fTemp43) + (fSlow691 * fTemp42))));
				fTemp435 = ((fTemp46 * ((fSlow692 * fTemp43) + (fSlow693 * fTemp42))) + (fTemp45 * ((fSlow694 * fTemp43) + (fSlow695 * fTemp42))));
				fTemp436 = ((fTemp46 * ((fSlow696 * fTemp43) + (fSlow697 * fTemp42))) + (fTemp45 * ((fSlow698 * fTemp43) + (fSlow699 * fTemp42))));
				fTemp437 = ((fTemp46 * ((fSlow700 * fTemp43) + (fSlow701 * fTemp42))) + (fTemp45 * ((fSlow702 * fTemp43) + (fSlow703 * fTemp42))));
				fTemp438 = (fRec4[1] * ((fTemp40 * (fTemp434 + fTemp435)) + (fTemp39 * (fTemp436 + fTemp437))));
				fTemp439 = ((fTemp46 * ((fSlow704 * fTemp43) + (fSlow705 * fTemp42))) + (fTemp45 * ((fSlow706 * fTemp43) + (fSlow707 * fTemp42))));
				fTemp440 = ((fTemp46 * ((fSlow708 * fTemp43) + (fSlow709 * fTemp42))) + (fTemp45 * ((fSlow710 * fTemp43) + (fSlow711 * fTemp42))));
				fTemp441 = ((fTemp46 * ((fSlow712 * fTemp43) + (fSlow713 * fTemp42))) + (fTemp45 * ((fSlow714 * fTemp43) + (fSlow715 * fTemp42))));
				fTemp442 = ((fTemp46 * ((fSlow716 * fTemp43) + (fSlow717 * fTemp42))) + (fTemp45 * ((fSlow718 * fTemp43) + (fSlow719 * fTemp42))));
				fTemp443 = (fRec3[1] * ((fTemp40 * (fTemp439 + fTemp440)) + (fTemp39 * (fTemp441 + fTemp442))));
				fTemp444 = ((fTemp46 * ((fSlow720 * fTemp43) + (fSlow721 * fTemp42))) + (fTemp45 * ((fSlow722 * fTemp43) + (fSlow723 * fTemp42))));
				fTemp445 = ((fTemp46 * ((fSlow724 * fTemp43) + (fSlow725 * fTemp42))) + (fTemp45 * ((fSlow726 * fTemp43) + (fSlow727 * fTemp42))));
				fTemp446 = ((fTemp46 * ((fSlow728 * fTemp43) + (fSlow729 * fTemp42))) + (fTemp45 * ((fSlow730 * fTemp43) + (fSlow731 * fTemp42))));
				fTemp447 = ((fTemp46 * ((fSlow732 * fTemp43) + (fSlow733 * fTemp42))) + (fTemp45 * ((fSlow734 * fTemp43) + (fSlow735 * fTemp42))));
				fTemp448 = ((fTemp40 * (fTemp444 + fTemp445)) + (fTemp39 * (fTemp446 + fTemp447)));
				fTemp449 = ((fTemp46 * ((fSlow736 * fTemp43) + (fSlow737 * fTemp42))) + (fTemp45 * ((fSlow738 * fTemp43) + (fSlow739 * fTemp42))));
				fTemp450 = ((fTemp46 * ((fSlow740 * fTemp43) + (fSlow741 * fTemp42))) + (fTemp45 * ((fSlow742 * fTemp43) + (fSlow743 * fTemp42))));
				fTemp451 = ((fTemp46 * ((fSlow744 * fTemp43) + (fSlow745 * fTemp42))) + (fTemp45 * ((fSlow746 * fTemp43) + (fSlow747 * fTemp42))));
				fTemp452 = ((fTemp46 * ((fSlow748 * fTemp43) + (fSlow749 * fTemp42))) + (fTemp45 * ((fSlow750 * fTemp43) + (fSlow751 * fTemp42))));
				fTemp453 = ((fTemp40 * (fTemp449 + fTemp450)) + (fTemp39 * (fTemp451 + fTemp452)));
				fTemp454 = std::floor(fTemp453);
				fTemp455 = (fTemp454 + float(((fTemp453 < 0.0f) & (fTemp453 != fTemp454))));
				fTemp456 = (fTemp101 + (0.00390625f * (fTemp448 * std::pow(2.0f, (0.0f - fTemp455)))));
				iTemp457 = int(fTemp455);
				fTemp458 = ((fTemp46 * ((fSlow752 * fTemp43) + (fSlow753 * fTemp42))) + (fTemp45 * ((fSlow754 * fTemp43) + (fSlow755 * fTemp42))));
				fTemp459 = ((fTemp46 * ((fSlow756 * fTemp43) + (fSlow757 * fTemp42))) + (fTemp45 * ((fSlow758 * fTemp43) + (fSlow759 * fTemp42))));
				fTemp460 = ((fTemp46 * ((fSlow760 * fTemp43) + (fSlow761 * fTemp42))) + (fTemp45 * ((fSlow762 * fTemp43) + (fSlow763 * fTemp42))));
				fTemp461 = ((fTemp46 * ((fSlow764 * fTemp43) + (fSlow765 * fTemp42))) + (fTemp45 * ((fSlow766 * fTemp43) + (fSlow767 * fTemp42))));
				fTemp462 = (fRec2[1] * ((fTemp40 * (fTemp458 + fTemp459)) + (fTemp39 * (fTemp460 + fTemp461))));
				fTemp463 = (fTemp433 + (fTemp438 + (fTemp443 + (std::fmod((256.0f * ((fTemp456 - (fTemp115 + std::floor((fTemp456 - fTemp115)))) * (((float((iTemp457 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp457)))))) + float((iTemp457 == 0))) + float(((iTemp457 > 0) * int(std::pow(2.0f, float(iTemp457)))))))), 1.0f) + fTemp462))));
			}
			if ((iSlow322 & iTemp69) | ((iSlow320 & iTemp69) | ((iSlow318 & iTemp69) | ((iSlow316 & iTemp69) | ((iSlow314 & iTemp69) | ((iSlow312 & iTemp69) | ((iSlow310 & iTemp69) | ((iSlow308 & iTemp69) | (iSlow306 & iTemp69))))))))) {
				fTemp464 = (fRec99[1] + (fTemp82 * (fTemp463 - fRec100[1])));
				fTemp465 = (fTemp464 / fTemp130);
				fRec99[0] = ((2.0f * fTemp465) - fRec99[1]);
				fTemp466 = (fRec100[1] + ((fTemp82 * fTemp464) / fTemp130));
				fRec100[0] = ((2.0f * fTemp466) - fRec100[1]);
				fRec101 = fTemp466;
			}
			if ((iSlow322 & iTemp78) | ((iSlow320 & iTemp78) | ((iSlow318 & iTemp78) | ((iSlow316 & iTemp78) | ((iSlow314 & iTemp78) | ((iSlow312 & iTemp78) | ((iSlow310 & iTemp78) | ((iSlow308 & iTemp78) | (iSlow306 & iTemp78))))))))) {
				fTemp467 = (fTemp82 * (fTemp463 - fRec104[1]));
				fTemp468 = ((fTemp82 * ((((fRec104[1] + ((fTemp467 + (0.215215757f * (fTemp182 * fRec102[1]))) / fTemp137)) + (fTemp139 * fRec103[1])) / fTemp140) - fRec102[1])) / fTemp137);
				fRec102[0] = (fRec102[1] + (2.0f * fTemp468));
				fTemp469 = (fRec102[1] + fTemp468);
				fRec103[0] = (fRec103[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp469)) - fRec103[1])) / fTemp137)));
				fRec104[0] = (fRec104[1] + (2.0f * (fTemp467 / fTemp137)));
				fRec105 = fTemp469;
			}
			if ((iSlow322 & iTemp77) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp77) | (iSlow306 & iTemp77))))))))) {
				fTemp470 = (fTemp463 - (fRec107[1] + (fTemp129 * fRec108[1])));
				fTemp471 = ((fTemp82 * fTemp470) / fTemp130);
				fTemp472 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec108[1] + fTemp471)));
				fTemp473 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp472)));
				fTemp474 = ((fTemp82 * fTemp472) * fTemp473);
				fRec106 = (fRec107[1] + fTemp474);
				fRec107[0] = (fRec107[1] + (2.0f * fTemp474));
				fTemp475 = (fTemp472 * fTemp473);
				fRec108[0] = (fTemp471 + fTemp475);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp476 = (((fTemp66 * (((fTemp68 * fRec101) + (fTemp134 * fRec105)) + (fTemp144 * fRec106))) / fTemp151) + (fTemp152 * fTemp463));
				fVec16[0] = fTemp476;
				fTemp477 = ((fTemp46 * ((fSlow769 * fTemp43) + (fSlow770 * fTemp42))) + (fTemp45 * ((fSlow771 * fTemp43) + (fSlow772 * fTemp42))));
				fTemp478 = ((fTemp46 * ((fSlow773 * fTemp43) + (fSlow774 * fTemp42))) + (fTemp45 * ((fSlow775 * fTemp43) + (fSlow776 * fTemp42))));
				fTemp479 = ((fTemp46 * ((fSlow777 * fTemp43) + (fSlow778 * fTemp42))) + (fTemp45 * ((fSlow779 * fTemp43) + (fSlow780 * fTemp42))));
				fTemp480 = ((fTemp46 * ((fSlow781 * fTemp43) + (fSlow782 * fTemp42))) + (fTemp45 * ((fSlow783 * fTemp43) + (fSlow784 * fTemp42))));
				fTemp481 = ((fTemp40 * (fTemp477 + fTemp478)) + (fTemp39 * (fTemp479 + fTemp480)));
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | iSlow312))))) {
				fTemp482 = (fSlow768 * fTemp481);
			}
			if (iSlow322) {
				fTemp483 = (2.0f * fTemp482);
				fTemp484 = std::min<float>(1.0f, fTemp483);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fTemp485 = (fTemp476 - fVec16[1]);
				fRec110[0] = ((std::fabs(fTemp485) < 0.5f) ? (fConst0 * fTemp485) : fRec110[1]);
			}
			if (iSlow322) {
				fTemp486 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec110[0])))))));
				fTemp487 = (1.0f - fTemp486);
			}
			if (iSlow322 | iSlow308) {
				fTemp488 = std::floor(fTemp476);
				fTemp489 = (fTemp476 - fTemp488);
				fVec17[0] = fTemp489;
				iTemp490 = (fTemp489 < 0.5f);
				iVec18[0] = iTemp490;
			}
			if (iSlow322) {
				iTemp491 = ((iVec18[1] <= 0) & (iTemp490 > 0));
				fRec115[0] = ((fRec115[1] * float((1 - iTemp491))) + (4.65661287e-10f * (fTemp36 * float(iTemp491))));
				fTemp492 = (fTemp486 + 1.0f);
				fRec114[0] = (0.0f - (((fTemp487 * fRec114[1]) - (fRec115[0] + fRec115[1])) / fTemp492));
				fRec113[0] = (0.0f - (((fTemp487 * fRec113[1]) - (fRec114[0] + fRec114[1])) / fTemp492));
				fRec112[0] = (0.0f - (((fTemp487 * fRec112[1]) - (fRec113[0] + fRec113[1])) / fTemp492));
				fRec111[0] = (0.0f - (((fTemp487 * fRec111[1]) - (fRec112[0] + fRec112[1])) / fTemp492));
				fRec109[0] = (0.0f - (((fRec109[1] * fTemp487) - (fRec111[0] + fRec111[1])) / fTemp492));
				fTemp493 = (std::sin((6.28318548f * fTemp476)) * ((fTemp484 * (fRec109[0] + -1.0f)) + 1.0f));
				fTemp494 = (std::max<float>(1.0f, fTemp483) + -1.0f);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp495 = std::fmod(std::fabs(fTemp453), 1.0f);
				fTemp496 = (1.0f - fTemp495);
				fTemp497 = (fTemp454 + float((fTemp453 > 0.0f)));
				fTemp498 = (fTemp101 + (0.00390625f * (fTemp448 * std::pow(2.0f, (0.0f - fTemp497)))));
				iTemp499 = int(fTemp497);
				fTemp500 = ((((fTemp462 + fTemp443) + fTemp438) + fTemp433) + std::fmod((256.0f * ((fTemp498 - (fTemp115 + std::floor((fTemp498 - fTemp115)))) * (((float((iTemp499 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp499)))))) + float((iTemp499 == 0))) + float(((iTemp499 > 0) * int(std::pow(2.0f, float(iTemp499)))))))), 1.0f));
			}
			if ((iSlow322 & iTemp69) | ((iSlow320 & iTemp69) | ((iSlow318 & iTemp69) | ((iSlow316 & iTemp69) | ((iSlow314 & iTemp69) | ((iSlow312 & iTemp69) | ((iSlow310 & iTemp69) | ((iSlow308 & iTemp69) | (iSlow306 & iTemp69))))))))) {
				fTemp501 = (fRec116[1] + (fTemp82 * (fTemp500 - fRec117[1])));
				fTemp502 = (fTemp501 / fTemp130);
				fRec116[0] = ((2.0f * fTemp502) - fRec116[1]);
				fTemp503 = (fRec117[1] + ((fTemp82 * fTemp501) / fTemp130));
				fRec117[0] = ((2.0f * fTemp503) - fRec117[1]);
				fRec118 = fTemp503;
			}
			if ((iSlow322 & iTemp78) | ((iSlow320 & iTemp78) | ((iSlow318 & iTemp78) | ((iSlow316 & iTemp78) | ((iSlow314 & iTemp78) | ((iSlow312 & iTemp78) | ((iSlow310 & iTemp78) | ((iSlow308 & iTemp78) | (iSlow306 & iTemp78))))))))) {
				fTemp504 = (fTemp82 * (fTemp500 - fRec121[1]));
				fTemp505 = ((fTemp82 * ((((fRec121[1] + ((fTemp504 + (0.215215757f * (fTemp182 * fRec119[1]))) / fTemp137)) + (fTemp139 * fRec120[1])) / fTemp140) - fRec119[1])) / fTemp137);
				fRec119[0] = (fRec119[1] + (2.0f * fTemp505));
				fTemp506 = (fRec119[1] + fTemp505);
				fRec120[0] = (fRec120[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp506)) - fRec120[1])) / fTemp137)));
				fRec121[0] = (fRec121[1] + (2.0f * (fTemp504 / fTemp137)));
				fRec122 = fTemp506;
			}
			if ((iSlow322 & iTemp77) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp77) | (iSlow306 & iTemp77))))))))) {
				fTemp507 = (fTemp500 - (fRec124[1] + (fTemp129 * fRec125[1])));
				fTemp508 = ((fTemp82 * fTemp507) / fTemp130);
				fTemp509 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec125[1] + fTemp508)));
				fTemp510 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp509)));
				fTemp511 = ((fTemp82 * fTemp509) * fTemp510);
				fRec123 = (fRec124[1] + fTemp511);
				fRec124[0] = (fRec124[1] + (2.0f * fTemp511));
				fTemp512 = (fTemp509 * fTemp510);
				fRec125[0] = (fTemp508 + fTemp512);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp513 = (((fTemp66 * (((fTemp68 * fRec118) + (fTemp134 * fRec122)) + (fTemp144 * fRec123))) / fTemp151) + (fTemp152 * fTemp500));
				fVec19[0] = fTemp513;
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fTemp514 = (fTemp513 - fVec19[1]);
				fRec127[0] = ((std::fabs(fTemp514) < 0.5f) ? (fConst0 * fTemp514) : fRec127[1]);
			}
			if (iSlow322) {
				fTemp515 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec127[0])))))));
				fTemp516 = (1.0f - fTemp515);
			}
			if (iSlow322 | iSlow308) {
				fTemp517 = std::floor(fTemp513);
				fTemp518 = (fTemp513 - fTemp517);
				fVec20[0] = fTemp518;
				iTemp519 = (fTemp518 < 0.5f);
				iVec21[0] = iTemp519;
			}
			if (iSlow322) {
				iTemp520 = ((iVec21[1] <= 0) & (iTemp519 > 0));
				fRec132[0] = ((fRec132[1] * float((1 - iTemp520))) + (4.65661287e-10f * (fTemp36 * float(iTemp520))));
				fTemp521 = (fTemp515 + 1.0f);
				fRec131[0] = (0.0f - (((fTemp516 * fRec131[1]) - (fRec132[0] + fRec132[1])) / fTemp521));
				fRec130[0] = (0.0f - (((fTemp516 * fRec130[1]) - (fRec131[0] + fRec131[1])) / fTemp521));
				fRec129[0] = (0.0f - (((fTemp516 * fRec129[1]) - (fRec130[0] + fRec130[1])) / fTemp521));
				fRec128[0] = (0.0f - (((fTemp516 * fRec128[1]) - (fRec129[0] + fRec129[1])) / fTemp521));
				fRec126[0] = (0.0f - (((fRec126[1] * fTemp516) - (fRec128[0] + fRec128[1])) / fTemp521));
				fTemp522 = (std::sin((6.28318548f * fTemp513)) * ((fTemp484 * (fRec126[0] + -1.0f)) + 1.0f));
				fTemp523 = (((fTemp493 + (fTemp494 * (fRec109[0] - fTemp493))) * fTemp496) + (fTemp495 * (fTemp522 + (fTemp494 * (fRec126[0] - fTemp522)))));
			}
			if (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | iSlow312)))) {
				fTemp524 = (fTemp482 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec110[0] - fConst7))))));
			}
			if (iSlow320 | (iSlow316 | (iSlow314 | iSlow312))) {
				fTemp525 = (1.0f - fTemp524);
			}
			if (iSlow320) {
				fTemp526 = ((0.75f * fTemp525) + (fTemp476 + (0.5f * fTemp524)));
				fTemp527 = std::floor(fTemp526);
			}
			if (iSlow320 | iSlow312) {
				fTemp528 = (0.5f * fTemp525);
			}
			if (iSlow320) {
				fTemp529 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp528));
				fTemp530 = (0.5f - fTemp529);
			}
			if (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | iSlow312)))) {
				fTemp531 = (fTemp482 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec127[0] - fConst7))))));
			}
			if (iSlow320 | (iSlow316 | (iSlow314 | iSlow312))) {
				fTemp532 = (1.0f - fTemp531);
			}
			if (iSlow320) {
				fTemp533 = ((0.75f * fTemp532) + (fTemp513 + (0.5f * fTemp531)));
				fTemp534 = std::floor(fTemp533);
			}
			if (iSlow320 | iSlow312) {
				fTemp535 = (0.5f * fTemp532);
			}
			if (iSlow320) {
				fTemp536 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp535));
				fTemp537 = (0.5f - fTemp536);
				fTemp538 = ((fTemp496 * std::cos((6.28318548f * ((fTemp526 + std::min<float>((((fTemp526 - fTemp527) * fTemp530) / fTemp529), ((fTemp530 * (fTemp527 + (1.0f - fTemp526))) / (1.0f - fTemp529)))) - fTemp527)))) + (fTemp495 * std::cos((6.28318548f * ((fTemp533 + std::min<float>((((fTemp533 - fTemp534) * fTemp537) / fTemp536), ((fTemp537 * (fTemp534 + (1.0f - fTemp533))) / (1.0f - fTemp536)))) - fTemp534)))));
			}
			if (iSlow318) {
				fTemp539 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp524));
				fTemp540 = (1.0f - fTemp539);
				fTemp541 = (0.25f * fTemp540);
				fTemp542 = (fTemp476 - (fTemp541 + std::floor((fTemp476 - fTemp541))));
				fTemp543 = (2.0f * fTemp542);
				fTemp544 = std::floor((fTemp543 + 1.0f));
				fTemp545 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp531));
				fTemp546 = (1.0f - fTemp545);
				fTemp547 = (0.25f * fTemp546);
				fTemp548 = (fTemp513 - (fTemp547 + std::floor((fTemp513 - fTemp547))));
				fTemp549 = (2.0f * fTemp548);
				fTemp550 = std::floor((fTemp549 + 1.0f));
				fTemp551 = ((fTemp496 * std::cos((3.14159274f * ((float((fTemp542 >= 0.5f)) + fTemp543) + (1.0f - (fTemp544 + std::min<float>((fTemp543 + (1.0f - fTemp544)), ((fTemp539 * (fTemp544 - fTemp543)) / fTemp540)))))))) + (fTemp495 * std::cos((3.14159274f * ((float((fTemp548 >= 0.5f)) + fTemp549) + (1.0f - (fTemp550 + std::min<float>((fTemp549 + (1.0f - fTemp550)), ((fTemp545 * (fTemp550 - fTemp549)) / fTemp546)))))))));
			}
			if (iSlow316) {
				fTemp552 = (0.25f * fTemp525);
				fTemp553 = (fTemp552 + std::floor((fTemp476 - fTemp552)));
			}
			if (iSlow316 | (iSlow314 | (iSlow310 | iSlow306))) {
				fTemp554 = (1.0f - fTemp476);
			}
			if (iSlow316) {
				fTemp555 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp524));
				fTemp556 = (0.25f * fTemp532);
				fTemp557 = (fTemp556 + std::floor((fTemp513 - fTemp556)));
			}
			if (iSlow316 | (iSlow314 | (iSlow310 | iSlow306))) {
				fTemp558 = (1.0f - fTemp513);
			}
			if (iSlow316) {
				fTemp559 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp531));
				fTemp560 = ((fTemp496 * std::cos((6.28318548f * (fTemp476 - (fTemp553 + std::min<float>((fTemp476 - fTemp553), (((fTemp553 + fTemp554) * fTemp555) / (1.0f - fTemp555)))))))) + (fTemp495 * std::cos((6.28318548f * (fTemp513 - (fTemp557 + std::min<float>((fTemp513 - fTemp557), (((fTemp557 + fTemp558) * fTemp559) / (1.0f - fTemp559)))))))));
			}
			if (iSlow314) {
				fTemp561 = ((0.125f * fTemp525) + (0.25f * fTemp524));
				fTemp562 = (fTemp561 + std::floor((fTemp476 - fTemp561)));
				fTemp563 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp524));
				fTemp564 = (0.49000001f * fTemp563);
				fTemp565 = ((0.125f * fTemp532) + (0.25f * fTemp531));
				fTemp566 = (fTemp565 + std::floor((fTemp513 - fTemp565)));
				fTemp567 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp531));
				fTemp568 = (0.49000001f * fTemp567);
				fTemp569 = ((fTemp496 * std::cos((12.566371f * ((fTemp476 + std::min<float>((0.49000001f * (((fTemp476 - fTemp562) * fTemp563) / (0.5f - fTemp564))), (0.49000001f * ((fTemp563 * (fTemp562 + fTemp554)) / (fTemp564 + 0.5f))))) - fTemp562)))) + (fTemp495 * std::cos((12.566371f * ((fTemp513 + std::min<float>((0.49000001f * (((fTemp513 - fTemp566) * fTemp567) / (0.5f - fTemp568))), (0.49000001f * ((fTemp567 * (fTemp566 + fTemp558)) / (fTemp568 + 0.5f))))) - fTemp566)))));
			}
			if (iSlow312) {
				fTemp570 = std::min<float>(0.975000024f, fTemp524);
				fTemp571 = (0.25f * (1.0f - fTemp570));
				fTemp572 = (fTemp571 + (0.5f * fTemp570));
				fTemp573 = std::floor((fTemp476 - fTemp572));
				fTemp574 = (fTemp476 - (fTemp572 + fTemp573));
				fTemp575 = std::min<float>(0.975000024f, fTemp531);
				fTemp576 = (0.25f * (1.0f - fTemp575));
				fTemp577 = (fTemp576 + (0.5f * fTemp575));
				fTemp578 = std::floor((fTemp513 - fTemp577));
				fTemp579 = (fTemp513 - (fTemp577 + fTemp578));
				fTemp580 = ((fTemp496 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp574 < 0.5f) ? fTemp574 : (0.5f * (((fTemp476 - ((fTemp571 + fTemp573) + (0.5f * (fTemp570 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp528))) + 1.0f))))))) + (fTemp495 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp579 < 0.5f) ? fTemp579 : (0.5f * (((fTemp513 - ((fTemp576 + fTemp578) + (0.5f * (fTemp575 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp535))) + 1.0f))))))));
			}
			if (iSlow310 | iSlow306) {
				fTemp581 = (fTemp476 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec110[0] * fSlow768) * fTemp481))) / fRec110[0])));
				fTemp582 = (fTemp513 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec127[0] * fSlow768) * fTemp481))) / fRec127[0])));
			}
			if (iSlow310) {
				fTemp583 = ((fTemp496 * (((0.0f - fTemp554) * (1.0f - std::cos((6.28318548f * (fTemp581 + (1.0f - std::floor((fTemp581 + 1.0f)))))))) + 1.0f)) + (fTemp495 * (((0.0f - fTemp558) * (1.0f - std::cos((6.28318548f * (fTemp582 + (1.0f - std::floor((fTemp582 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow308) {
				fTemp584 = (fTemp476 - (fTemp488 + fVec17[1]));
				fRec133[0] = ((std::fabs(fTemp584) < 0.5f) ? (fConst0 * fTemp584) : fRec133[1]);
				fTemp585 = (fTemp489 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec133[0] * fSlow768) * fTemp481))) / fRec133[0])));
				fTemp586 = (fTemp513 - (fTemp517 + fVec20[1]));
				fRec134[0] = ((std::fabs(fTemp586) < 0.5f) ? (fConst0 * fTemp586) : fRec134[1]);
				fTemp587 = (fTemp518 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec134[0] * fSlow768) * fTemp481))) / fRec134[0])));
				fTemp588 = ((fTemp496 * (((iTemp490 ? (2.0f * fTemp489) : (2.0f * (1.0f - fTemp489))) * (std::cos((6.28318548f * (fTemp585 + (1.0f - std::floor((fTemp585 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp495 * (((iTemp519 ? (2.0f * fTemp518) : (2.0f * (1.0f - fTemp518))) * (std::cos((6.28318548f * (fTemp587 + (1.0f - std::floor((fTemp587 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow306) {
				fTemp589 = (((fTemp496 * std::min<float>(1.0f, (2.0f * fTemp554))) * std::sin((6.28318548f * (fTemp581 - std::floor(fTemp581))))) + ((fTemp495 * std::min<float>(1.0f, (2.0f * fTemp558))) * std::sin((6.28318548f * (fTemp582 - std::floor(fTemp582))))));
			}
			fRec4[0] = (((((((((fSlow321 * fTemp523) + (fSlow319 * fTemp538)) + (fSlow317 * fTemp551)) + (fSlow315 * fTemp560)) + (fSlow313 * fTemp569)) + (fSlow311 * fTemp580)) + (fSlow309 * fTemp583)) + (fSlow307 * fTemp588)) + (fSlow305 * fTemp589));
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp590 = ((fTemp46 * ((fSlow785 * fTemp43) + (fSlow786 * fTemp42))) + (fTemp45 * ((fSlow787 * fTemp43) + (fSlow788 * fTemp42))));
				fTemp591 = ((fTemp46 * ((fSlow789 * fTemp43) + (fSlow790 * fTemp42))) + (fTemp45 * ((fSlow791 * fTemp43) + (fSlow792 * fTemp42))));
				fTemp592 = ((fTemp46 * ((fSlow793 * fTemp43) + (fSlow794 * fTemp42))) + (fTemp45 * ((fSlow795 * fTemp43) + (fSlow796 * fTemp42))));
				fTemp593 = ((fTemp46 * ((fSlow797 * fTemp43) + (fSlow798 * fTemp42))) + (fTemp45 * ((fSlow799 * fTemp43) + (fSlow800 * fTemp42))));
				fTemp594 = (fRec5[1] * ((fTemp40 * (fTemp590 + fTemp591)) + (fTemp39 * (fTemp592 + fTemp593))));
				fTemp595 = ((fTemp46 * ((fSlow801 * fTemp43) + (fSlow802 * fTemp42))) + (fTemp45 * ((fSlow803 * fTemp43) + (fSlow804 * fTemp42))));
				fTemp596 = ((fTemp46 * ((fSlow805 * fTemp43) + (fSlow806 * fTemp42))) + (fTemp45 * ((fSlow807 * fTemp43) + (fSlow808 * fTemp42))));
				fTemp597 = ((fTemp46 * ((fSlow809 * fTemp43) + (fSlow810 * fTemp42))) + (fTemp45 * ((fSlow811 * fTemp43) + (fSlow812 * fTemp42))));
				fTemp598 = ((fTemp46 * ((fSlow813 * fTemp43) + (fSlow814 * fTemp42))) + (fTemp45 * ((fSlow815 * fTemp43) + (fSlow816 * fTemp42))));
				fTemp599 = (fRec4[1] * ((fTemp40 * (fTemp595 + fTemp596)) + (fTemp39 * (fTemp597 + fTemp598))));
				fTemp600 = ((fTemp46 * ((fSlow817 * fTemp43) + (fSlow818 * fTemp42))) + (fTemp45 * ((fSlow819 * fTemp43) + (fSlow820 * fTemp42))));
				fTemp601 = ((fTemp46 * ((fSlow821 * fTemp43) + (fSlow822 * fTemp42))) + (fTemp45 * ((fSlow823 * fTemp43) + (fSlow824 * fTemp42))));
				fTemp602 = ((fTemp46 * ((fSlow825 * fTemp43) + (fSlow826 * fTemp42))) + (fTemp45 * ((fSlow827 * fTemp43) + (fSlow828 * fTemp42))));
				fTemp603 = ((fTemp46 * ((fSlow829 * fTemp43) + (fSlow830 * fTemp42))) + (fTemp45 * ((fSlow831 * fTemp43) + (fSlow832 * fTemp42))));
				fTemp604 = (fRec3[1] * ((fTemp40 * (fTemp600 + fTemp601)) + (fTemp39 * (fTemp602 + fTemp603))));
				fTemp605 = ((fTemp46 * ((fSlow833 * fTemp43) + (fSlow834 * fTemp42))) + (fTemp45 * ((fSlow835 * fTemp43) + (fSlow836 * fTemp42))));
				fTemp606 = ((fTemp46 * ((fSlow837 * fTemp43) + (fSlow838 * fTemp42))) + (fTemp45 * ((fSlow839 * fTemp43) + (fSlow840 * fTemp42))));
				fTemp607 = ((fTemp46 * ((fSlow841 * fTemp43) + (fSlow842 * fTemp42))) + (fTemp45 * ((fSlow843 * fTemp43) + (fSlow844 * fTemp42))));
				fTemp608 = ((fTemp46 * ((fSlow845 * fTemp43) + (fSlow846 * fTemp42))) + (fTemp45 * ((fSlow847 * fTemp43) + (fSlow848 * fTemp42))));
				fTemp609 = ((fTemp40 * (fTemp605 + fTemp606)) + (fTemp39 * (fTemp607 + fTemp608)));
				fTemp610 = ((fTemp46 * ((fSlow849 * fTemp43) + (fSlow850 * fTemp42))) + (fTemp45 * ((fSlow851 * fTemp43) + (fSlow852 * fTemp42))));
				fTemp611 = ((fTemp46 * ((fSlow853 * fTemp43) + (fSlow854 * fTemp42))) + (fTemp45 * ((fSlow855 * fTemp43) + (fSlow856 * fTemp42))));
				fTemp612 = ((fTemp46 * ((fSlow857 * fTemp43) + (fSlow858 * fTemp42))) + (fTemp45 * ((fSlow859 * fTemp43) + (fSlow860 * fTemp42))));
				fTemp613 = ((fTemp46 * ((fSlow861 * fTemp43) + (fSlow862 * fTemp42))) + (fTemp45 * ((fSlow863 * fTemp43) + (fSlow864 * fTemp42))));
				fTemp614 = ((fTemp40 * (fTemp610 + fTemp611)) + (fTemp39 * (fTemp612 + fTemp613)));
				fTemp615 = std::floor(fTemp614);
				fTemp616 = (fTemp615 + float(((fTemp614 < 0.0f) & (fTemp614 != fTemp615))));
				fTemp617 = (fTemp101 + (0.00390625f * (fTemp609 * std::pow(2.0f, (0.0f - fTemp616)))));
				iTemp618 = int(fTemp616);
				fTemp619 = ((fTemp46 * ((fSlow865 * fTemp43) + (fSlow866 * fTemp42))) + (fTemp45 * ((fSlow867 * fTemp43) + (fSlow868 * fTemp42))));
				fTemp620 = ((fTemp46 * ((fSlow869 * fTemp43) + (fSlow870 * fTemp42))) + (fTemp45 * ((fSlow871 * fTemp43) + (fSlow872 * fTemp42))));
				fTemp621 = ((fTemp46 * ((fSlow873 * fTemp43) + (fSlow874 * fTemp42))) + (fTemp45 * ((fSlow875 * fTemp43) + (fSlow876 * fTemp42))));
				fTemp622 = ((fTemp46 * ((fSlow877 * fTemp43) + (fSlow878 * fTemp42))) + (fTemp45 * ((fSlow879 * fTemp43) + (fSlow880 * fTemp42))));
				fTemp623 = (fRec2[1] * ((fTemp40 * (fTemp619 + fTemp620)) + (fTemp39 * (fTemp621 + fTemp622))));
				fTemp624 = (fTemp594 + (fTemp599 + (fTemp604 + (std::fmod((256.0f * ((fTemp617 - (fTemp115 + std::floor((fTemp617 - fTemp115)))) * (((float((iTemp618 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp618)))))) + float((iTemp618 == 0))) + float(((iTemp618 > 0) * int(std::pow(2.0f, float(iTemp618)))))))), 1.0f) + fTemp623))));
			}
			if ((iSlow302 & iTemp69) | ((iSlow300 & iTemp69) | ((iSlow298 & iTemp69) | ((iSlow296 & iTemp69) | ((iSlow294 & iTemp69) | ((iSlow292 & iTemp69) | ((iSlow290 & iTemp69) | ((iSlow288 & iTemp69) | (iSlow286 & iTemp69))))))))) {
				fTemp625 = (fRec135[1] + (fTemp82 * (fTemp624 - fRec136[1])));
				fTemp626 = (fTemp625 / fTemp130);
				fRec135[0] = ((2.0f * fTemp626) - fRec135[1]);
				fTemp627 = (fRec136[1] + ((fTemp82 * fTemp625) / fTemp130));
				fRec136[0] = ((2.0f * fTemp627) - fRec136[1]);
				fRec137 = fTemp627;
			}
			if ((iSlow302 & iTemp78) | ((iSlow300 & iTemp78) | ((iSlow298 & iTemp78) | ((iSlow296 & iTemp78) | ((iSlow294 & iTemp78) | ((iSlow292 & iTemp78) | ((iSlow290 & iTemp78) | ((iSlow288 & iTemp78) | (iSlow286 & iTemp78))))))))) {
				fTemp628 = (fTemp82 * (fTemp624 - fRec140[1]));
				fTemp629 = ((fTemp82 * ((((fRec140[1] + ((fTemp628 + (0.215215757f * (fTemp182 * fRec138[1]))) / fTemp137)) + (fTemp139 * fRec139[1])) / fTemp140) - fRec138[1])) / fTemp137);
				fRec138[0] = (fRec138[1] + (2.0f * fTemp629));
				fTemp630 = (fRec138[1] + fTemp629);
				fRec139[0] = (fRec139[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp630)) - fRec139[1])) / fTemp137)));
				fRec140[0] = (fRec140[1] + (2.0f * (fTemp628 / fTemp137)));
				fRec141 = fTemp630;
			}
			if ((iSlow302 & iTemp77) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp77) | (iSlow286 & iTemp77))))))))) {
				fTemp631 = (fTemp624 - (fRec143[1] + (fTemp129 * fRec144[1])));
				fTemp632 = ((fTemp82 * fTemp631) / fTemp130);
				fTemp633 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec144[1] + fTemp632)));
				fTemp634 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp633)));
				fTemp635 = ((fTemp82 * fTemp633) * fTemp634);
				fRec142 = (fRec143[1] + fTemp635);
				fRec143[0] = (fRec143[1] + (2.0f * fTemp635));
				fTemp636 = (fTemp633 * fTemp634);
				fRec144[0] = (fTemp632 + fTemp636);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp637 = (((fTemp66 * (((fTemp68 * fRec137) + (fTemp134 * fRec141)) + (fTemp144 * fRec142))) / fTemp151) + (fTemp152 * fTemp624));
				fVec22[0] = fTemp637;
				fTemp638 = ((fTemp46 * ((fSlow882 * fTemp43) + (fSlow883 * fTemp42))) + (fTemp45 * ((fSlow884 * fTemp43) + (fSlow885 * fTemp42))));
				fTemp639 = ((fTemp46 * ((fSlow886 * fTemp43) + (fSlow887 * fTemp42))) + (fTemp45 * ((fSlow888 * fTemp43) + (fSlow889 * fTemp42))));
				fTemp640 = ((fTemp46 * ((fSlow890 * fTemp43) + (fSlow891 * fTemp42))) + (fTemp45 * ((fSlow892 * fTemp43) + (fSlow893 * fTemp42))));
				fTemp641 = ((fTemp46 * ((fSlow894 * fTemp43) + (fSlow895 * fTemp42))) + (fTemp45 * ((fSlow896 * fTemp43) + (fSlow897 * fTemp42))));
				fTemp642 = ((fTemp40 * (fTemp638 + fTemp639)) + (fTemp39 * (fTemp640 + fTemp641)));
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | iSlow292))))) {
				fTemp643 = (fSlow881 * fTemp642);
			}
			if (iSlow302) {
				fTemp644 = (2.0f * fTemp643);
				fTemp645 = std::min<float>(1.0f, fTemp644);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fTemp646 = (fTemp637 - fVec22[1]);
				fRec146[0] = ((std::fabs(fTemp646) < 0.5f) ? (fConst0 * fTemp646) : fRec146[1]);
			}
			if (iSlow302) {
				fTemp647 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec146[0])))))));
				fTemp648 = (1.0f - fTemp647);
			}
			if (iSlow302 | iSlow288) {
				fTemp649 = std::floor(fTemp637);
				fTemp650 = (fTemp637 - fTemp649);
				fVec23[0] = fTemp650;
				iTemp651 = (fTemp650 < 0.5f);
				iVec24[0] = iTemp651;
			}
			if (iSlow302) {
				iTemp652 = ((iVec24[1] <= 0) & (iTemp651 > 0));
				fRec151[0] = ((fRec151[1] * float((1 - iTemp652))) + (4.65661287e-10f * (fTemp36 * float(iTemp652))));
				fTemp653 = (fTemp647 + 1.0f);
				fRec150[0] = (0.0f - (((fTemp648 * fRec150[1]) - (fRec151[0] + fRec151[1])) / fTemp653));
				fRec149[0] = (0.0f - (((fTemp648 * fRec149[1]) - (fRec150[0] + fRec150[1])) / fTemp653));
				fRec148[0] = (0.0f - (((fTemp648 * fRec148[1]) - (fRec149[0] + fRec149[1])) / fTemp653));
				fRec147[0] = (0.0f - (((fTemp648 * fRec147[1]) - (fRec148[0] + fRec148[1])) / fTemp653));
				fRec145[0] = (0.0f - (((fRec145[1] * fTemp648) - (fRec147[0] + fRec147[1])) / fTemp653));
				fTemp654 = (std::sin((6.28318548f * fTemp637)) * ((fTemp645 * (fRec145[0] + -1.0f)) + 1.0f));
				fTemp655 = (std::max<float>(1.0f, fTemp644) + -1.0f);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp656 = std::fmod(std::fabs(fTemp614), 1.0f);
				fTemp657 = (1.0f - fTemp656);
				fTemp658 = (fTemp615 + float((fTemp614 > 0.0f)));
				fTemp659 = (fTemp101 + (0.00390625f * (fTemp609 * std::pow(2.0f, (0.0f - fTemp658)))));
				iTemp660 = int(fTemp658);
				fTemp661 = ((((fTemp623 + fTemp604) + fTemp599) + fTemp594) + std::fmod((256.0f * ((fTemp659 - (fTemp115 + std::floor((fTemp659 - fTemp115)))) * (((float((iTemp660 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp660)))))) + float((iTemp660 == 0))) + float(((iTemp660 > 0) * int(std::pow(2.0f, float(iTemp660)))))))), 1.0f));
			}
			if ((iSlow302 & iTemp69) | ((iSlow300 & iTemp69) | ((iSlow298 & iTemp69) | ((iSlow296 & iTemp69) | ((iSlow294 & iTemp69) | ((iSlow292 & iTemp69) | ((iSlow290 & iTemp69) | ((iSlow288 & iTemp69) | (iSlow286 & iTemp69))))))))) {
				fTemp662 = (fRec152[1] + (fTemp82 * (fTemp661 - fRec153[1])));
				fTemp663 = (fTemp662 / fTemp130);
				fRec152[0] = ((2.0f * fTemp663) - fRec152[1]);
				fTemp664 = (fRec153[1] + ((fTemp82 * fTemp662) / fTemp130));
				fRec153[0] = ((2.0f * fTemp664) - fRec153[1]);
				fRec154 = fTemp664;
			}
			if ((iSlow302 & iTemp78) | ((iSlow300 & iTemp78) | ((iSlow298 & iTemp78) | ((iSlow296 & iTemp78) | ((iSlow294 & iTemp78) | ((iSlow292 & iTemp78) | ((iSlow290 & iTemp78) | ((iSlow288 & iTemp78) | (iSlow286 & iTemp78))))))))) {
				fTemp665 = (fTemp82 * (fTemp661 - fRec157[1]));
				fTemp666 = ((fTemp82 * ((((fRec157[1] + ((fTemp665 + (0.215215757f * (fTemp182 * fRec155[1]))) / fTemp137)) + (fTemp139 * fRec156[1])) / fTemp140) - fRec155[1])) / fTemp137);
				fRec155[0] = (fRec155[1] + (2.0f * fTemp666));
				fTemp667 = (fRec155[1] + fTemp666);
				fRec156[0] = (fRec156[1] + (2.0f * ((fTemp82 * ((0.215215757f * (fTemp136 * fTemp667)) - fRec156[1])) / fTemp137)));
				fRec157[0] = (fRec157[1] + (2.0f * (fTemp665 / fTemp137)));
				fRec158 = fTemp667;
			}
			if ((iSlow302 & iTemp77) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp77) | (iSlow286 & iTemp77))))))))) {
				fTemp668 = (fTemp661 - (fRec160[1] + (fTemp129 * fRec161[1])));
				fTemp669 = ((fTemp82 * fTemp668) / fTemp130);
				fTemp670 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec161[1] + fTemp669)));
				fTemp671 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp670)));
				fTemp672 = ((fTemp82 * fTemp670) * fTemp671);
				fRec159 = (fRec160[1] + fTemp672);
				fRec160[0] = (fRec160[1] + (2.0f * fTemp672));
				fTemp673 = (fTemp670 * fTemp671);
				fRec161[0] = (fTemp669 + fTemp673);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp674 = (((fTemp66 * (((fTemp68 * fRec154) + (fTemp134 * fRec158)) + (fTemp144 * fRec159))) / fTemp151) + (fTemp152 * fTemp661));
				fVec25[0] = fTemp674;
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fTemp675 = (fTemp674 - fVec25[1]);
				fRec163[0] = ((std::fabs(fTemp675) < 0.5f) ? (fConst0 * fTemp675) : fRec163[1]);
			}
			if (iSlow302) {
				fTemp676 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec163[0])))))));
				fTemp677 = (1.0f - fTemp676);
			}
			if (iSlow302 | iSlow288) {
				fTemp678 = std::floor(fTemp674);
				fTemp679 = (fTemp674 - fTemp678);
				fVec26[0] = fTemp679;
				iTemp680 = (fTemp679 < 0.5f);
				iVec27[0] = iTemp680;
			}
			if (iSlow302) {
				iTemp681 = ((iVec27[1] <= 0) & (iTemp680 > 0));
				fRec168[0] = ((fRec168[1] * float((1 - iTemp681))) + (4.65661287e-10f * (fTemp36 * float(iTemp681))));
				fTemp682 = (fTemp676 + 1.0f);
				fRec167[0] = (0.0f - (((fTemp677 * fRec167[1]) - (fRec168[0] + fRec168[1])) / fTemp682));
				fRec166[0] = (0.0f - (((fTemp677 * fRec166[1]) - (fRec167[0] + fRec167[1])) / fTemp682));
				fRec165[0] = (0.0f - (((fTemp677 * fRec165[1]) - (fRec166[0] + fRec166[1])) / fTemp682));
				fRec164[0] = (0.0f - (((fTemp677 * fRec164[1]) - (fRec165[0] + fRec165[1])) / fTemp682));
				fRec162[0] = (0.0f - (((fRec162[1] * fTemp677) - (fRec164[0] + fRec164[1])) / fTemp682));
				fTemp683 = (std::sin((6.28318548f * fTemp674)) * ((fTemp645 * (fRec162[0] + -1.0f)) + 1.0f));
				fTemp684 = (((fTemp654 + (fTemp655 * (fRec145[0] - fTemp654))) * fTemp657) + (fTemp656 * (fTemp683 + (fTemp655 * (fRec162[0] - fTemp683)))));
			}
			if (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | iSlow292)))) {
				fTemp685 = (fTemp643 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec146[0] - fConst7))))));
			}
			if (iSlow300 | (iSlow296 | (iSlow294 | iSlow292))) {
				fTemp686 = (1.0f - fTemp685);
			}
			if (iSlow300) {
				fTemp687 = ((0.75f * fTemp686) + (fTemp637 + (0.5f * fTemp685)));
				fTemp688 = std::floor(fTemp687);
			}
			if (iSlow300 | iSlow292) {
				fTemp689 = (0.5f * fTemp686);
			}
			if (iSlow300) {
				fTemp690 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp689));
				fTemp691 = (0.5f - fTemp690);
			}
			if (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | iSlow292)))) {
				fTemp692 = (fTemp643 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec163[0] - fConst7))))));
			}
			if (iSlow300 | (iSlow296 | (iSlow294 | iSlow292))) {
				fTemp693 = (1.0f - fTemp692);
			}
			if (iSlow300) {
				fTemp694 = ((0.75f * fTemp693) + (fTemp674 + (0.5f * fTemp692)));
				fTemp695 = std::floor(fTemp694);
			}
			if (iSlow300 | iSlow292) {
				fTemp696 = (0.5f * fTemp693);
			}
			if (iSlow300) {
				fTemp697 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp696));
				fTemp698 = (0.5f - fTemp697);
				fTemp699 = ((fTemp657 * std::cos((6.28318548f * ((fTemp687 + std::min<float>((((fTemp687 - fTemp688) * fTemp691) / fTemp690), ((fTemp691 * (fTemp688 + (1.0f - fTemp687))) / (1.0f - fTemp690)))) - fTemp688)))) + (fTemp656 * std::cos((6.28318548f * ((fTemp694 + std::min<float>((((fTemp694 - fTemp695) * fTemp698) / fTemp697), ((fTemp698 * (fTemp695 + (1.0f - fTemp694))) / (1.0f - fTemp697)))) - fTemp695)))));
			}
			if (iSlow298) {
				fTemp700 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp685));
				fTemp701 = (1.0f - fTemp700);
				fTemp702 = (0.25f * fTemp701);
				fTemp703 = (fTemp637 - (fTemp702 + std::floor((fTemp637 - fTemp702))));
				fTemp704 = (2.0f * fTemp703);
				fTemp705 = std::floor((fTemp704 + 1.0f));
				fTemp706 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp692));
				fTemp707 = (1.0f - fTemp706);
				fTemp708 = (0.25f * fTemp707);
				fTemp709 = (fTemp674 - (fTemp708 + std::floor((fTemp674 - fTemp708))));
				fTemp710 = (2.0f * fTemp709);
				fTemp711 = std::floor((fTemp710 + 1.0f));
				fTemp712 = ((fTemp657 * std::cos((3.14159274f * ((float((fTemp703 >= 0.5f)) + fTemp704) + (1.0f - (fTemp705 + std::min<float>((fTemp704 + (1.0f - fTemp705)), ((fTemp700 * (fTemp705 - fTemp704)) / fTemp701)))))))) + (fTemp656 * std::cos((3.14159274f * ((float((fTemp709 >= 0.5f)) + fTemp710) + (1.0f - (fTemp711 + std::min<float>((fTemp710 + (1.0f - fTemp711)), ((fTemp706 * (fTemp711 - fTemp710)) / fTemp707)))))))));
			}
			if (iSlow296) {
				fTemp713 = (0.25f * fTemp686);
				fTemp714 = (fTemp713 + std::floor((fTemp637 - fTemp713)));
			}
			if (iSlow296 | (iSlow294 | (iSlow290 | iSlow286))) {
				fTemp715 = (1.0f - fTemp637);
			}
			if (iSlow296) {
				fTemp716 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp685));
				fTemp717 = (0.25f * fTemp693);
				fTemp718 = (fTemp717 + std::floor((fTemp674 - fTemp717)));
			}
			if (iSlow296 | (iSlow294 | (iSlow290 | iSlow286))) {
				fTemp719 = (1.0f - fTemp674);
			}
			if (iSlow296) {
				fTemp720 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp692));
				fTemp721 = ((fTemp657 * std::cos((6.28318548f * (fTemp637 - (fTemp714 + std::min<float>((fTemp637 - fTemp714), (((fTemp714 + fTemp715) * fTemp716) / (1.0f - fTemp716)))))))) + (fTemp656 * std::cos((6.28318548f * (fTemp674 - (fTemp718 + std::min<float>((fTemp674 - fTemp718), (((fTemp718 + fTemp719) * fTemp720) / (1.0f - fTemp720)))))))));
			}
			if (iSlow294) {
				fTemp722 = ((0.125f * fTemp686) + (0.25f * fTemp685));
				fTemp723 = (fTemp722 + std::floor((fTemp637 - fTemp722)));
				fTemp724 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp685));
				fTemp725 = (0.49000001f * fTemp724);
				fTemp726 = ((0.125f * fTemp693) + (0.25f * fTemp692));
				fTemp727 = (fTemp726 + std::floor((fTemp674 - fTemp726)));
				fTemp728 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp692));
				fTemp729 = (0.49000001f * fTemp728);
				fTemp730 = ((fTemp657 * std::cos((12.566371f * ((fTemp637 + std::min<float>((0.49000001f * (((fTemp637 - fTemp723) * fTemp724) / (0.5f - fTemp725))), (0.49000001f * ((fTemp724 * (fTemp723 + fTemp715)) / (fTemp725 + 0.5f))))) - fTemp723)))) + (fTemp656 * std::cos((12.566371f * ((fTemp674 + std::min<float>((0.49000001f * (((fTemp674 - fTemp727) * fTemp728) / (0.5f - fTemp729))), (0.49000001f * ((fTemp728 * (fTemp727 + fTemp719)) / (fTemp729 + 0.5f))))) - fTemp727)))));
			}
			if (iSlow292) {
				fTemp731 = std::min<float>(0.975000024f, fTemp685);
				fTemp732 = (0.25f * (1.0f - fTemp731));
				fTemp733 = (fTemp732 + (0.5f * fTemp731));
				fTemp734 = std::floor((fTemp637 - fTemp733));
				fTemp735 = (fTemp637 - (fTemp733 + fTemp734));
				fTemp736 = std::min<float>(0.975000024f, fTemp692);
				fTemp737 = (0.25f * (1.0f - fTemp736));
				fTemp738 = (fTemp737 + (0.5f * fTemp736));
				fTemp739 = std::floor((fTemp674 - fTemp738));
				fTemp740 = (fTemp674 - (fTemp738 + fTemp739));
				fTemp741 = ((fTemp657 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp735 < 0.5f) ? fTemp735 : (0.5f * (((fTemp637 - ((fTemp732 + fTemp734) + (0.5f * (fTemp731 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp689))) + 1.0f))))))) + (fTemp656 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp740 < 0.5f) ? fTemp740 : (0.5f * (((fTemp674 - ((fTemp737 + fTemp739) + (0.5f * (fTemp736 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp696))) + 1.0f))))))));
			}
			if (iSlow290 | iSlow286) {
				fTemp742 = (fTemp637 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec146[0] * fSlow881) * fTemp642))) / fRec146[0])));
				fTemp743 = (fTemp674 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec163[0] * fSlow881) * fTemp642))) / fRec163[0])));
			}
			if (iSlow290) {
				fTemp744 = ((fTemp657 * (((0.0f - fTemp715) * (1.0f - std::cos((6.28318548f * (fTemp742 + (1.0f - std::floor((fTemp742 + 1.0f)))))))) + 1.0f)) + (fTemp656 * (((0.0f - fTemp719) * (1.0f - std::cos((6.28318548f * (fTemp743 + (1.0f - std::floor((fTemp743 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow288) {
				fTemp745 = (fTemp637 - (fTemp649 + fVec23[1]));
				fRec169[0] = ((std::fabs(fTemp745) < 0.5f) ? (fConst0 * fTemp745) : fRec169[1]);
				fTemp746 = (fTemp650 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec169[0] * fSlow881) * fTemp642))) / fRec169[0])));
				fTemp747 = (fTemp674 - (fTemp678 + fVec26[1]));
				fRec170[0] = ((std::fabs(fTemp747) < 0.5f) ? (fConst0 * fTemp747) : fRec170[1]);
				fTemp748 = (fTemp679 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec170[0] * fSlow881) * fTemp642))) / fRec170[0])));
				fTemp749 = ((fTemp657 * (((iTemp651 ? (2.0f * fTemp650) : (2.0f * (1.0f - fTemp650))) * (std::cos((6.28318548f * (fTemp746 + (1.0f - std::floor((fTemp746 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp656 * (((iTemp680 ? (2.0f * fTemp679) : (2.0f * (1.0f - fTemp679))) * (std::cos((6.28318548f * (fTemp748 + (1.0f - std::floor((fTemp748 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow286) {
				fTemp750 = (((fTemp657 * std::min<float>(1.0f, (2.0f * fTemp715))) * std::sin((6.28318548f * (fTemp742 - std::floor(fTemp742))))) + ((fTemp656 * std::min<float>(1.0f, (2.0f * fTemp719))) * std::sin((6.28318548f * (fTemp743 - std::floor(fTemp743))))));
			}
			fRec5[0] = (((((((((fSlow301 * fTemp684) + (fSlow299 * fTemp699)) + (fSlow297 * fTemp712)) + (fSlow295 * fTemp721)) + (fSlow293 * fTemp730)) + (fSlow291 * fTemp741)) + (fSlow289 * fTemp744)) + (fSlow287 * fTemp749)) + (fSlow285 * fTemp750));
			float fTemp751 = ((fTemp46 * ((fSlow898 * fTemp43) + (fSlow899 * fTemp42))) + (fTemp45 * ((fSlow900 * fTemp43) + (fSlow901 * fTemp42))));
			float fTemp752 = ((fTemp46 * ((fSlow902 * fTemp43) + (fSlow903 * fTemp42))) + (fTemp45 * ((fSlow904 * fTemp43) + (fSlow905 * fTemp42))));
			float fTemp753 = ((fTemp46 * ((fSlow906 * fTemp43) + (fSlow907 * fTemp42))) + (fTemp45 * ((fSlow908 * fTemp43) + (fSlow909 * fTemp42))));
			float fTemp754 = ((fTemp46 * ((fSlow910 * fTemp43) + (fSlow911 * fTemp42))) + (fTemp45 * ((fSlow912 * fTemp43) + (fSlow913 * fTemp42))));
			float fTemp755 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp751 + fTemp752)) + (fTemp39 * (fTemp753 + fTemp754)))));
			float fTemp756 = (1.0f - fTemp755);
			float fTemp757 = ((fTemp46 * ((fSlow914 * fTemp43) + (fSlow915 * fTemp42))) + (fTemp45 * ((fSlow916 * fTemp43) + (fSlow917 * fTemp42))));
			float fTemp758 = ((fTemp46 * ((fSlow918 * fTemp43) + (fSlow919 * fTemp42))) + (fTemp45 * ((fSlow920 * fTemp43) + (fSlow921 * fTemp42))));
			float fTemp759 = ((fTemp46 * ((fSlow922 * fTemp43) + (fSlow923 * fTemp42))) + (fTemp45 * ((fSlow924 * fTemp43) + (fSlow925 * fTemp42))));
			float fTemp760 = ((fTemp46 * ((fSlow926 * fTemp43) + (fSlow927 * fTemp42))) + (fTemp45 * ((fSlow928 * fTemp43) + (fSlow929 * fTemp42))));
			float fTemp761 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp757 + fTemp758)) + (fTemp39 * (fTemp759 + fTemp760)))));
			output0[i] = FAUSTFLOAT((fHbargraph0 * ((((fRec2[0] * fTemp756) + (fRec3[0] * fTemp755)) * (1.0f - fTemp761)) + (fTemp761 * ((fRec4[0] * fTemp756) + (fRec5[0] * fTemp755))))));
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp762 = std::fabs(fTemp75);
				fTemp763 = std::fabs(fTemp73);
				fTemp764 = std::fabs(fTemp71);
				fTemp765 = ((fTemp762 + fTemp763) + fTemp764);
				fTemp766 = std::min<float>(1.0f, fTemp765);
				fTemp767 = std::max<float>(2.82118644e-37f, fTemp762);
				fTemp768 = ((fTemp75 < 0.0f) ? (0.0f - fTemp767) : fTemp767);
			}
			if ((iSlow14 & iTemp76) | ((iSlow14 & iTemp74) | ((iSlow14 & iTemp72) | ((iSlow358 & iTemp76) | ((iSlow358 & iTemp74) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp76) | ((iSlow356 & iTemp74) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp76) | ((iSlow354 & iTemp74) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp76) | ((iSlow352 & iTemp74) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp76) | ((iSlow350 & iTemp74) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp76) | ((iSlow348 & iTemp74) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp76) | ((iSlow346 & iTemp74) | ((iSlow346 & iTemp72) | ((iSlow344 & iTemp76) | ((iSlow344 & iTemp74) | ((iSlow344 & iTemp72) | ((iSlow342 & iTemp76) | ((iSlow342 & iTemp74) | ((iSlow342 & iTemp72) | ((iSlow340 & iTemp76) | ((iSlow340 & iTemp74) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp76) | ((iSlow338 & iTemp74) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp76) | ((iSlow336 & iTemp74) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp76) | ((iSlow334 & iTemp74) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp76) | ((iSlow332 & iTemp74) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp76) | ((iSlow330 & iTemp74) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp76) | ((iSlow328 & iTemp74) | ((iSlow328 & iTemp72) | ((iSlow326 & iTemp76) | ((iSlow326 & iTemp74) | ((iSlow326 & iTemp72) | ((iSlow322 & iTemp76) | ((iSlow322 & iTemp74) | ((iSlow322 & iTemp72) | ((iSlow320 & iTemp76) | ((iSlow320 & iTemp74) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp76) | ((iSlow318 & iTemp74) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp76) | ((iSlow316 & iTemp74) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp76) | ((iSlow314 & iTemp74) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp76) | ((iSlow312 & iTemp74) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp76) | ((iSlow310 & iTemp74) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp76) | ((iSlow308 & iTemp74) | ((iSlow308 & iTemp72) | ((iSlow306 & iTemp76) | ((iSlow306 & iTemp74) | ((iSlow306 & iTemp72) | ((iSlow302 & iTemp76) | ((iSlow302 & iTemp74) | ((iSlow302 & iTemp72) | ((iSlow300 & iTemp76) | ((iSlow300 & iTemp74) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp76) | ((iSlow298 & iTemp74) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp76) | ((iSlow296 & iTemp74) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp76) | ((iSlow294 & iTemp74) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp76) | ((iSlow292 & iTemp74) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp76) | ((iSlow290 & iTemp74) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp76) | ((iSlow288 & iTemp74) | ((iSlow288 & iTemp72) | ((iSlow286 & iTemp76) | ((iSlow286 & iTemp74) | (iSlow286 & iTemp72)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp769 = std::tan((fConst2 * std::min<float>(fConst4, std::max<float>(0.0f, (440.0f * std::pow(2.0f, (0.0833333358f * ((127.0f * std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp70 - fTemp79)) + (fTemp39 * (fTemp80 - fTemp81)))))) + -49.0f))))))));
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp770 = (fRec174[1] * ((fTemp40 * (fTemp83 - fTemp84)) + (fTemp39 * (fTemp85 - fTemp86))));
				fTemp771 = (fRec173[1] * ((fTemp40 * (fTemp88 - fTemp89)) + (fTemp39 * (fTemp90 - fTemp91))));
				fTemp772 = (fRec172[1] * ((fTemp40 * (fTemp93 - fTemp94)) + (fTemp39 * (fTemp95 - fTemp96))));
				fTemp773 = ((fTemp40 * (fTemp102 - fTemp103)) + (fTemp39 * (fTemp104 - fTemp105)));
				fTemp774 = ((fTemp40 * (fTemp107 - fTemp108)) + (fTemp39 * (fTemp109 - fTemp110)));
				fTemp775 = std::floor(fTemp774);
				fTemp776 = (fTemp775 + float(((fTemp774 < 0.0f) & (fTemp774 != fTemp775))));
				fTemp777 = (fTemp101 + (0.00390625f * (fTemp773 * std::pow(2.0f, (0.0f - fTemp776)))));
				iTemp778 = int(fTemp776);
				fTemp779 = (fRec171[1] * ((fTemp40 * (fTemp117 - fTemp118)) + (fTemp39 * (fTemp119 - fTemp120))));
				fTemp780 = (fTemp770 + (fTemp771 + (fTemp772 + (std::fmod((256.0f * ((fTemp777 - (fTemp115 + std::floor((fTemp777 - fTemp115)))) * (((float((iTemp778 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp778)))))) + float((iTemp778 == 0))) + float(((iTemp778 > 0) * int(std::pow(2.0f, float(iTemp778)))))))), 1.0f) + fTemp779))));
			}
			if ((iSlow14 & iTemp76) | ((iSlow358 & iTemp76) | ((iSlow356 & iTemp76) | ((iSlow354 & iTemp76) | ((iSlow352 & iTemp76) | ((iSlow350 & iTemp76) | ((iSlow348 & iTemp76) | ((iSlow346 & iTemp76) | (iSlow344 & iTemp76))))))))) {
				fTemp781 = (fRec175[1] + (fTemp769 * (fTemp780 - fRec176[1])));
			}
			if ((iSlow14 & iTemp76) | ((iSlow14 & iTemp74) | ((iSlow14 & iTemp72) | ((iSlow358 & iTemp76) | ((iSlow358 & iTemp74) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp76) | ((iSlow356 & iTemp74) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp76) | ((iSlow354 & iTemp74) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp76) | ((iSlow352 & iTemp74) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp76) | ((iSlow350 & iTemp74) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp76) | ((iSlow348 & iTemp74) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp76) | ((iSlow346 & iTemp74) | ((iSlow346 & iTemp72) | ((iSlow344 & iTemp76) | ((iSlow344 & iTemp74) | ((iSlow344 & iTemp72) | ((iSlow342 & iTemp76) | ((iSlow342 & iTemp74) | ((iSlow342 & iTemp72) | ((iSlow340 & iTemp76) | ((iSlow340 & iTemp74) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp76) | ((iSlow338 & iTemp74) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp76) | ((iSlow336 & iTemp74) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp76) | ((iSlow334 & iTemp74) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp76) | ((iSlow332 & iTemp74) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp76) | ((iSlow330 & iTemp74) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp76) | ((iSlow328 & iTemp74) | ((iSlow328 & iTemp72) | ((iSlow326 & iTemp76) | ((iSlow326 & iTemp74) | ((iSlow326 & iTemp72) | ((iSlow322 & iTemp76) | ((iSlow322 & iTemp74) | ((iSlow322 & iTemp72) | ((iSlow320 & iTemp76) | ((iSlow320 & iTemp74) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp76) | ((iSlow318 & iTemp74) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp76) | ((iSlow316 & iTemp74) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp76) | ((iSlow314 & iTemp74) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp76) | ((iSlow312 & iTemp74) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp76) | ((iSlow310 & iTemp74) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp76) | ((iSlow308 & iTemp74) | ((iSlow308 & iTemp72) | ((iSlow306 & iTemp76) | ((iSlow306 & iTemp74) | ((iSlow306 & iTemp72) | ((iSlow302 & iTemp76) | ((iSlow302 & iTemp74) | ((iSlow302 & iTemp72) | ((iSlow300 & iTemp76) | ((iSlow300 & iTemp74) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp76) | ((iSlow298 & iTemp74) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp76) | ((iSlow296 & iTemp74) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp76) | ((iSlow294 & iTemp74) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp76) | ((iSlow292 & iTemp74) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp76) | ((iSlow290 & iTemp74) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp76) | ((iSlow288 & iTemp74) | ((iSlow288 & iTemp72) | ((iSlow286 & iTemp76) | ((iSlow286 & iTemp74) | (iSlow286 & iTemp72)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp782 = std::min<float>(10.0f, std::max<float>(0.00999999978f, ((fTemp40 * (fTemp124 - fTemp125)) + (fTemp39 * (fTemp126 - fTemp127)))));
			}
			if ((iSlow14 & iTemp76) | ((iSlow14 & iTemp72) | ((iSlow358 & iTemp76) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp76) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp76) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp76) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp76) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp76) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp76) | ((iSlow346 & iTemp72) | ((iSlow344 & iTemp76) | ((iSlow344 & iTemp72) | ((iSlow342 & iTemp76) | ((iSlow342 & iTemp72) | ((iSlow340 & iTemp76) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp76) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp76) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp76) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp76) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp76) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp76) | ((iSlow328 & iTemp72) | ((iSlow326 & iTemp76) | ((iSlow326 & iTemp72) | ((iSlow322 & iTemp76) | ((iSlow322 & iTemp72) | ((iSlow320 & iTemp76) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp76) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp76) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp76) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp76) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp76) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp76) | ((iSlow308 & iTemp72) | ((iSlow306 & iTemp76) | ((iSlow306 & iTemp72) | ((iSlow302 & iTemp76) | ((iSlow302 & iTemp72) | ((iSlow300 & iTemp76) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp76) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp76) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp76) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp76) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp76) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp76) | ((iSlow288 & iTemp72) | ((iSlow286 & iTemp76) | (iSlow286 & iTemp72)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
				fTemp783 = (fTemp769 + (1.0f / fTemp782));
				fTemp784 = ((fTemp769 * fTemp783) + 1.0f);
			}
			if ((iSlow14 & iTemp76) | ((iSlow358 & iTemp76) | ((iSlow356 & iTemp76) | ((iSlow354 & iTemp76) | ((iSlow352 & iTemp76) | ((iSlow350 & iTemp76) | ((iSlow348 & iTemp76) | ((iSlow346 & iTemp76) | (iSlow344 & iTemp76))))))))) {
				fTemp785 = (fTemp781 / fTemp784);
				fRec175[0] = ((2.0f * fTemp785) - fRec175[1]);
				fTemp786 = (fRec176[1] + ((fTemp769 * fTemp781) / fTemp784));
				fRec176[0] = ((2.0f * fTemp786) - fRec176[1]);
				fRec177 = fTemp786;
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp787 = std::max<float>(2.82118644e-37f, fTemp763);
				fTemp788 = ((fTemp73 < 0.0f) ? (0.0f - fTemp787) : fTemp787);
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | (iSlow344 & iTemp74))))))))) {
				fTemp789 = (fTemp769 * (fTemp780 - fRec180[1]));
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | ((iSlow344 & iTemp74) | ((iSlow342 & iTemp74) | ((iSlow340 & iTemp74) | ((iSlow338 & iTemp74) | ((iSlow336 & iTemp74) | ((iSlow334 & iTemp74) | ((iSlow332 & iTemp74) | ((iSlow330 & iTemp74) | ((iSlow328 & iTemp74) | ((iSlow326 & iTemp74) | ((iSlow322 & iTemp74) | ((iSlow320 & iTemp74) | ((iSlow318 & iTemp74) | ((iSlow316 & iTemp74) | ((iSlow314 & iTemp74) | ((iSlow312 & iTemp74) | ((iSlow310 & iTemp74) | ((iSlow308 & iTemp74) | ((iSlow306 & iTemp74) | ((iSlow302 & iTemp74) | ((iSlow300 & iTemp74) | ((iSlow298 & iTemp74) | ((iSlow296 & iTemp74) | ((iSlow294 & iTemp74) | ((iSlow292 & iTemp74) | ((iSlow290 & iTemp74) | ((iSlow288 & iTemp74) | (iSlow286 & iTemp74)))))))))))))))))))))))))))))))))))) {
				fTemp790 = (fTemp782 + -0.707000017f);
				fTemp791 = (fTemp769 + 1.0f);
				fTemp792 = (1.0f - (fTemp769 / fTemp791));
				fTemp793 = (0.0f - (1.0f / fTemp791));
				fTemp794 = (1.0f - (0.215215757f * (((fTemp769 * fTemp790) * fTemp792) / fTemp791)));
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | (iSlow344 & iTemp74))))))))) {
				fTemp795 = ((fTemp769 * ((((fRec180[1] + ((fTemp789 + (0.215215757f * ((fRec178[1] * fTemp790) * fTemp792))) / fTemp791)) + (fRec179[1] * fTemp793)) / fTemp794) - fRec178[1])) / fTemp791);
				fRec178[0] = (fRec178[1] + (2.0f * fTemp795));
				fTemp796 = (fRec178[1] + fTemp795);
				fRec179[0] = (fRec179[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp796)) - fRec179[1])) / fTemp791)));
				fRec180[0] = (fRec180[1] + (2.0f * (fTemp789 / fTemp791)));
				fRec181 = fTemp796;
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp797 = std::max<float>(2.82118644e-37f, fTemp764);
				fTemp798 = ((fTemp71 < 0.0f) ? (0.0f - fTemp797) : fTemp797);
			}
			if ((iSlow14 & iTemp72) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp72) | (iSlow344 & iTemp72))))))))) {
				fTemp799 = (fTemp780 - (fRec183[1] + (fTemp783 * fRec184[1])));
				fTemp800 = ((fTemp769 * fTemp799) / fTemp784);
				fTemp801 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec184[1] + fTemp800)));
				fTemp802 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp801)));
				fTemp803 = ((fTemp769 * fTemp801) * fTemp802);
				fRec182 = (fRec183[1] + fTemp803);
				fRec183[0] = (fRec183[1] + (2.0f * fTemp803));
				fTemp804 = (fTemp801 * fTemp802);
				fRec184[0] = (fTemp800 + fTemp804);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fTemp805 = std::max<float>(8.46355933e-37f, fTemp765);
				fTemp806 = (1.0f - fTemp766);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp807 = (((fTemp766 * (((fTemp768 * fRec177) + (fTemp788 * fRec181)) + (fTemp798 * fRec182))) / fTemp805) + (fTemp780 * fTemp806));
				fVec28[0] = fTemp807;
				fTemp808 = ((fTemp40 * (fTemp154 - fTemp155)) + (fTemp39 * (fTemp156 - fTemp157)));
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | iSlow350))))) {
				fTemp809 = (fSlow542 * fTemp808);
			}
			if (iSlow14) {
				fTemp810 = (2.0f * fTemp809);
				fTemp811 = std::min<float>(1.0f, fTemp810);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fTemp812 = (fTemp807 - fVec28[1]);
				fRec186[0] = ((std::fabs(fTemp812) < 0.5f) ? (fConst0 * fTemp812) : fRec186[1]);
			}
			if (iSlow14) {
				fTemp813 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec186[0])))))));
				fTemp814 = (1.0f - fTemp813);
			}
			if (iSlow14 | iSlow346) {
				fTemp815 = std::floor(fTemp807);
				fTemp816 = (fTemp807 - fTemp815);
				fVec29[0] = fTemp816;
				iTemp817 = (fTemp816 < 0.5f);
				iVec30[0] = iTemp817;
			}
			if (iSlow14) {
				iTemp818 = ((iVec30[1] <= 0) & (iTemp817 > 0));
				fRec191[0] = ((fRec191[1] * float((1 - iTemp818))) + (4.65661287e-10f * (fTemp36 * float(iTemp818))));
				fTemp819 = (fTemp813 + 1.0f);
				fRec190[0] = (0.0f - (((fTemp814 * fRec190[1]) - (fRec191[0] + fRec191[1])) / fTemp819));
				fRec189[0] = (0.0f - (((fTemp814 * fRec189[1]) - (fRec190[0] + fRec190[1])) / fTemp819));
				fRec188[0] = (0.0f - (((fTemp814 * fRec188[1]) - (fRec189[0] + fRec189[1])) / fTemp819));
				fRec187[0] = (0.0f - (((fTemp814 * fRec187[1]) - (fRec188[0] + fRec188[1])) / fTemp819));
				fRec185[0] = (0.0f - (((fRec185[1] * fTemp814) - (fRec187[0] + fRec187[1])) / fTemp819));
				fTemp820 = (std::sin((6.28318548f * fTemp807)) * ((fTemp811 * (fRec185[0] + -1.0f)) + 1.0f));
				fTemp821 = (std::max<float>(1.0f, fTemp810) + -1.0f);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp822 = std::fmod(std::fabs(fTemp774), 1.0f);
				fTemp823 = (1.0f - fTemp822);
				fTemp824 = (fTemp775 + float((fTemp774 > 0.0f)));
				fTemp825 = (fTemp101 + (0.00390625f * (fTemp773 * std::pow(2.0f, (0.0f - fTemp824)))));
				iTemp826 = int(fTemp824);
				fTemp827 = ((((fTemp779 + fTemp772) + fTemp771) + fTemp770) + std::fmod((256.0f * ((fTemp825 - (fTemp115 + std::floor((fTemp825 - fTemp115)))) * (((float((iTemp826 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp826)))))) + float((iTemp826 == 0))) + float(((iTemp826 > 0) * int(std::pow(2.0f, float(iTemp826)))))))), 1.0f));
			}
			if ((iSlow14 & iTemp76) | ((iSlow358 & iTemp76) | ((iSlow356 & iTemp76) | ((iSlow354 & iTemp76) | ((iSlow352 & iTemp76) | ((iSlow350 & iTemp76) | ((iSlow348 & iTemp76) | ((iSlow346 & iTemp76) | (iSlow344 & iTemp76))))))))) {
				fTemp828 = (fRec192[1] + (fTemp769 * (fTemp827 - fRec193[1])));
				fTemp829 = (fTemp828 / fTemp784);
				fRec192[0] = ((2.0f * fTemp829) - fRec192[1]);
				fTemp830 = (fRec193[1] + ((fTemp769 * fTemp828) / fTemp784));
				fRec193[0] = ((2.0f * fTemp830) - fRec193[1]);
				fRec194 = fTemp830;
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | (iSlow344 & iTemp74))))))))) {
				fTemp831 = (fTemp769 * (fTemp827 - fRec197[1]));
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | ((iSlow344 & iTemp74) | ((iSlow342 & iTemp74) | ((iSlow340 & iTemp74) | ((iSlow338 & iTemp74) | ((iSlow336 & iTemp74) | ((iSlow334 & iTemp74) | ((iSlow332 & iTemp74) | ((iSlow330 & iTemp74) | ((iSlow328 & iTemp74) | ((iSlow326 & iTemp74) | ((iSlow322 & iTemp74) | ((iSlow320 & iTemp74) | ((iSlow318 & iTemp74) | ((iSlow316 & iTemp74) | ((iSlow314 & iTemp74) | ((iSlow312 & iTemp74) | ((iSlow310 & iTemp74) | ((iSlow308 & iTemp74) | ((iSlow306 & iTemp74) | ((iSlow302 & iTemp74) | ((iSlow300 & iTemp74) | ((iSlow298 & iTemp74) | ((iSlow296 & iTemp74) | ((iSlow294 & iTemp74) | ((iSlow292 & iTemp74) | ((iSlow290 & iTemp74) | ((iSlow288 & iTemp74) | (iSlow286 & iTemp74)))))))))))))))))))))))))))))))))))) {
				fTemp832 = (fTemp790 * fTemp792);
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | (iSlow344 & iTemp74))))))))) {
				fTemp833 = ((fTemp769 * ((((fRec197[1] + ((fTemp831 + (0.215215757f * (fTemp832 * fRec195[1]))) / fTemp791)) + (fTemp793 * fRec196[1])) / fTemp794) - fRec195[1])) / fTemp791);
				fRec195[0] = (fRec195[1] + (2.0f * fTemp833));
				fTemp834 = (fRec195[1] + fTemp833);
				fRec196[0] = (fRec196[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp834)) - fRec196[1])) / fTemp791)));
				fRec197[0] = (fRec197[1] + (2.0f * (fTemp831 / fTemp791)));
				fRec198 = fTemp834;
			}
			if ((iSlow14 & iTemp72) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp72) | (iSlow344 & iTemp72))))))))) {
				fTemp835 = (fTemp827 - (fRec200[1] + (fTemp783 * fRec201[1])));
				fTemp836 = ((fTemp769 * fTemp835) / fTemp784);
				fTemp837 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec201[1] + fTemp836)));
				fTemp838 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp837)));
				fTemp839 = ((fTemp769 * fTemp837) * fTemp838);
				fRec199 = (fRec200[1] + fTemp839);
				fRec200[0] = (fRec200[1] + (2.0f * fTemp839));
				fTemp840 = (fTemp837 * fTemp838);
				fRec201[0] = (fTemp836 + fTemp840);
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fTemp841 = (((fTemp766 * (((fTemp768 * fRec194) + (fTemp788 * fRec198)) + (fTemp798 * fRec199))) / fTemp805) + (fTemp806 * fTemp827));
				fVec31[0] = fTemp841;
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fTemp842 = (fTemp841 - fVec31[1]);
				fRec203[0] = ((std::fabs(fTemp842) < 0.5f) ? (fConst0 * fTemp842) : fRec203[1]);
			}
			if (iSlow14) {
				fTemp843 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec203[0])))))));
				fTemp844 = (1.0f - fTemp843);
			}
			if (iSlow14 | iSlow346) {
				fTemp845 = std::floor(fTemp841);
				fTemp846 = (fTemp841 - fTemp845);
				fVec32[0] = fTemp846;
				iTemp847 = (fTemp846 < 0.5f);
				iVec33[0] = iTemp847;
			}
			if (iSlow14) {
				iTemp848 = ((iVec33[1] <= 0) & (iTemp847 > 0));
				fRec208[0] = ((fRec208[1] * float((1 - iTemp848))) + (4.65661287e-10f * (fTemp36 * float(iTemp848))));
				fTemp849 = (fTemp843 + 1.0f);
				fRec207[0] = (0.0f - (((fTemp844 * fRec207[1]) - (fRec208[0] + fRec208[1])) / fTemp849));
				fRec206[0] = (0.0f - (((fTemp844 * fRec206[1]) - (fRec207[0] + fRec207[1])) / fTemp849));
				fRec205[0] = (0.0f - (((fTemp844 * fRec205[1]) - (fRec206[0] + fRec206[1])) / fTemp849));
				fRec204[0] = (0.0f - (((fTemp844 * fRec204[1]) - (fRec205[0] + fRec205[1])) / fTemp849));
				fRec202[0] = (0.0f - (((fRec202[1] * fTemp844) - (fRec204[0] + fRec204[1])) / fTemp849));
				fTemp850 = (std::sin((6.28318548f * fTemp841)) * ((fTemp811 * (fRec202[0] + -1.0f)) + 1.0f));
				fTemp851 = (((fTemp820 + (fTemp821 * (fRec185[0] - fTemp820))) * fTemp823) + (fTemp822 * (fTemp850 + (fTemp821 * (fRec202[0] - fTemp850)))));
			}
			if (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | iSlow350)))) {
				fTemp852 = (fTemp809 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec186[0] - fConst7))))));
			}
			if (iSlow358 | (iSlow354 | (iSlow352 | iSlow350))) {
				fTemp853 = (1.0f - fTemp852);
			}
			if (iSlow358) {
				fTemp854 = ((0.75f * fTemp853) + (fTemp807 + (0.5f * fTemp852)));
				fTemp855 = std::floor(fTemp854);
			}
			if (iSlow358 | iSlow350) {
				fTemp856 = (0.5f * fTemp853);
			}
			if (iSlow358) {
				fTemp857 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp856));
				fTemp858 = (0.5f - fTemp857);
			}
			if (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | iSlow350)))) {
				fTemp859 = (fTemp809 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec203[0] - fConst7))))));
			}
			if (iSlow358 | (iSlow354 | (iSlow352 | iSlow350))) {
				fTemp860 = (1.0f - fTemp859);
			}
			if (iSlow358) {
				fTemp861 = ((0.75f * fTemp860) + (fTemp841 + (0.5f * fTemp859)));
				fTemp862 = std::floor(fTemp861);
			}
			if (iSlow358 | iSlow350) {
				fTemp863 = (0.5f * fTemp860);
			}
			if (iSlow358) {
				fTemp864 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp863));
				fTemp865 = (0.5f - fTemp864);
				fTemp866 = ((fTemp823 * std::cos((6.28318548f * ((fTemp854 + std::min<float>((((fTemp854 - fTemp855) * fTemp858) / fTemp857), ((fTemp858 * (fTemp855 + (1.0f - fTemp854))) / (1.0f - fTemp857)))) - fTemp855)))) + (fTemp822 * std::cos((6.28318548f * ((fTemp861 + std::min<float>((((fTemp861 - fTemp862) * fTemp865) / fTemp864), ((fTemp865 * (fTemp862 + (1.0f - fTemp861))) / (1.0f - fTemp864)))) - fTemp862)))));
			}
			if (iSlow356) {
				fTemp867 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp852));
				fTemp868 = (1.0f - fTemp867);
				fTemp869 = (0.25f * fTemp868);
				fTemp870 = (fTemp807 - (fTemp869 + std::floor((fTemp807 - fTemp869))));
				fTemp871 = (2.0f * fTemp870);
				fTemp872 = std::floor((fTemp871 + 1.0f));
				fTemp873 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp859));
				fTemp874 = (1.0f - fTemp873);
				fTemp875 = (0.25f * fTemp874);
				fTemp876 = (fTemp841 - (fTemp875 + std::floor((fTemp841 - fTemp875))));
				fTemp877 = (2.0f * fTemp876);
				fTemp878 = std::floor((fTemp877 + 1.0f));
				fTemp879 = ((fTemp823 * std::cos((3.14159274f * ((float((fTemp870 >= 0.5f)) + fTemp871) + (1.0f - (fTemp872 + std::min<float>((fTemp871 + (1.0f - fTemp872)), ((fTemp867 * (fTemp872 - fTemp871)) / fTemp868)))))))) + (fTemp822 * std::cos((3.14159274f * ((float((fTemp876 >= 0.5f)) + fTemp877) + (1.0f - (fTemp878 + std::min<float>((fTemp877 + (1.0f - fTemp878)), ((fTemp873 * (fTemp878 - fTemp877)) / fTemp874)))))))));
			}
			if (iSlow354) {
				fTemp880 = (0.25f * fTemp853);
				fTemp881 = (fTemp880 + std::floor((fTemp807 - fTemp880)));
			}
			if (iSlow354 | (iSlow352 | (iSlow348 | iSlow344))) {
				fTemp882 = (1.0f - fTemp807);
			}
			if (iSlow354) {
				fTemp883 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp852));
				fTemp884 = (0.25f * fTemp860);
				fTemp885 = (fTemp884 + std::floor((fTemp841 - fTemp884)));
			}
			if (iSlow354 | (iSlow352 | (iSlow348 | iSlow344))) {
				fTemp886 = (1.0f - fTemp841);
			}
			if (iSlow354) {
				fTemp887 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp859));
				fTemp888 = ((fTemp823 * std::cos((6.28318548f * (fTemp807 - (fTemp881 + std::min<float>((fTemp807 - fTemp881), (((fTemp881 + fTemp882) * fTemp883) / (1.0f - fTemp883)))))))) + (fTemp822 * std::cos((6.28318548f * (fTemp841 - (fTemp885 + std::min<float>((fTemp841 - fTemp885), (((fTemp885 + fTemp886) * fTemp887) / (1.0f - fTemp887)))))))));
			}
			if (iSlow352) {
				fTemp889 = ((0.125f * fTemp853) + (0.25f * fTemp852));
				fTemp890 = (fTemp889 + std::floor((fTemp807 - fTemp889)));
				fTemp891 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp852));
				fTemp892 = (0.49000001f * fTemp891);
				fTemp893 = ((0.125f * fTemp860) + (0.25f * fTemp859));
				fTemp894 = (fTemp893 + std::floor((fTemp841 - fTemp893)));
				fTemp895 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp859));
				fTemp896 = (0.49000001f * fTemp895);
				fTemp897 = ((fTemp823 * std::cos((12.566371f * ((fTemp807 + std::min<float>((0.49000001f * (((fTemp807 - fTemp890) * fTemp891) / (0.5f - fTemp892))), (0.49000001f * ((fTemp891 * (fTemp890 + fTemp882)) / (fTemp892 + 0.5f))))) - fTemp890)))) + (fTemp822 * std::cos((12.566371f * ((fTemp841 + std::min<float>((0.49000001f * (((fTemp841 - fTemp894) * fTemp895) / (0.5f - fTemp896))), (0.49000001f * ((fTemp895 * (fTemp894 + fTemp886)) / (fTemp896 + 0.5f))))) - fTemp894)))));
			}
			if (iSlow350) {
				fTemp898 = std::min<float>(0.975000024f, fTemp852);
				fTemp899 = (0.25f * (1.0f - fTemp898));
				fTemp900 = (fTemp899 + (0.5f * fTemp898));
				fTemp901 = std::floor((fTemp807 - fTemp900));
				fTemp902 = (fTemp807 - (fTemp900 + fTemp901));
				fTemp903 = std::min<float>(0.975000024f, fTemp859);
				fTemp904 = (0.25f * (1.0f - fTemp903));
				fTemp905 = (fTemp904 + (0.5f * fTemp903));
				fTemp906 = std::floor((fTemp841 - fTemp905));
				fTemp907 = (fTemp841 - (fTemp905 + fTemp906));
				fTemp908 = ((fTemp823 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp902 < 0.5f) ? fTemp902 : (0.5f * (((fTemp807 - ((fTemp899 + fTemp901) + (0.5f * (fTemp898 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp856))) + 1.0f))))))) + (fTemp822 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp907 < 0.5f) ? fTemp907 : (0.5f * (((fTemp841 - ((fTemp904 + fTemp906) + (0.5f * (fTemp903 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp863))) + 1.0f))))))));
			}
			if (iSlow348 | iSlow344) {
				fTemp909 = (fTemp807 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec186[0] * fSlow542) * fTemp808))) / fRec186[0])));
				fTemp910 = (fTemp841 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec203[0] * fSlow542) * fTemp808))) / fRec203[0])));
			}
			if (iSlow348) {
				fTemp911 = ((fTemp823 * (((0.0f - fTemp882) * (1.0f - std::cos((6.28318548f * (fTemp909 + (1.0f - std::floor((fTemp909 + 1.0f)))))))) + 1.0f)) + (fTemp822 * (((0.0f - fTemp886) * (1.0f - std::cos((6.28318548f * (fTemp910 + (1.0f - std::floor((fTemp910 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow346) {
				fTemp912 = (fTemp807 - (fTemp815 + fVec29[1]));
				fRec209[0] = ((std::fabs(fTemp912) < 0.5f) ? (fConst0 * fTemp912) : fRec209[1]);
				fTemp913 = (fTemp816 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec209[0] * fSlow542) * fTemp808))) / fRec209[0])));
				fTemp914 = (fTemp841 - (fTemp845 + fVec32[1]));
				fRec210[0] = ((std::fabs(fTemp914) < 0.5f) ? (fConst0 * fTemp914) : fRec210[1]);
				fTemp915 = (fTemp846 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec210[0] * fSlow542) * fTemp808))) / fRec210[0])));
				fTemp916 = ((fTemp823 * (((iTemp817 ? (2.0f * fTemp816) : (2.0f * (1.0f - fTemp816))) * (std::cos((6.28318548f * (fTemp913 + (1.0f - std::floor((fTemp913 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp822 * (((iTemp847 ? (2.0f * fTemp846) : (2.0f * (1.0f - fTemp846))) * (std::cos((6.28318548f * (fTemp915 + (1.0f - std::floor((fTemp915 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow344) {
				fTemp917 = (((fTemp823 * std::min<float>(1.0f, (2.0f * fTemp882))) * std::sin((6.28318548f * (fTemp909 - std::floor(fTemp909))))) + ((fTemp822 * std::min<float>(1.0f, (2.0f * fTemp886))) * std::sin((6.28318548f * (fTemp910 - std::floor(fTemp910))))));
			}
			fRec171[0] = (((((((((fSlow13 * fTemp851) + (fSlow357 * fTemp866)) + (fSlow355 * fTemp879)) + (fSlow353 * fTemp888)) + (fSlow351 * fTemp897)) + (fSlow349 * fTemp908)) + (fSlow347 * fTemp911)) + (fSlow345 * fTemp916)) + (fSlow343 * fTemp917));
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp918 = (fRec174[1] * ((fTemp40 * (fTemp268 - fTemp269)) + (fTemp39 * (fTemp270 - fTemp271))));
				fTemp919 = (fRec173[1] * ((fTemp40 * (fTemp273 - fTemp274)) + (fTemp39 * (fTemp275 - fTemp276))));
				fTemp920 = (fRec172[1] * ((fTemp40 * (fTemp278 - fTemp279)) + (fTemp39 * (fTemp280 - fTemp281))));
				fTemp921 = ((fTemp40 * (fTemp283 - fTemp284)) + (fTemp39 * (fTemp285 - fTemp286)));
				fTemp922 = ((fTemp40 * (fTemp288 - fTemp289)) + (fTemp39 * (fTemp290 - fTemp291)));
				fTemp923 = std::floor(fTemp922);
				fTemp924 = (fTemp923 + float(((fTemp922 < 0.0f) & (fTemp922 != fTemp923))));
				fTemp925 = (fTemp101 + (0.00390625f * (fTemp921 * std::pow(2.0f, (0.0f - fTemp924)))));
				iTemp926 = int(fTemp924);
				fTemp927 = (fRec171[1] * ((fTemp40 * (fTemp297 - fTemp298)) + (fTemp39 * (fTemp299 - fTemp300))));
				fTemp928 = (fTemp918 + (fTemp919 + (fTemp920 + (std::fmod((256.0f * ((fTemp925 - (fTemp115 + std::floor((fTemp925 - fTemp115)))) * (((float((iTemp926 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp926)))))) + float((iTemp926 == 0))) + float(((iTemp926 > 0) * int(std::pow(2.0f, float(iTemp926)))))))), 1.0f) + fTemp927))));
			}
			if ((iSlow342 & iTemp76) | ((iSlow340 & iTemp76) | ((iSlow338 & iTemp76) | ((iSlow336 & iTemp76) | ((iSlow334 & iTemp76) | ((iSlow332 & iTemp76) | ((iSlow330 & iTemp76) | ((iSlow328 & iTemp76) | (iSlow326 & iTemp76))))))))) {
				fTemp929 = (fRec211[1] + (fTemp769 * (fTemp928 - fRec212[1])));
				fTemp930 = (fTemp929 / fTemp784);
				fRec211[0] = ((2.0f * fTemp930) - fRec211[1]);
				fTemp931 = (fRec212[1] + ((fTemp769 * fTemp929) / fTemp784));
				fRec212[0] = ((2.0f * fTemp931) - fRec212[1]);
				fRec213 = fTemp931;
			}
			if ((iSlow342 & iTemp74) | ((iSlow340 & iTemp74) | ((iSlow338 & iTemp74) | ((iSlow336 & iTemp74) | ((iSlow334 & iTemp74) | ((iSlow332 & iTemp74) | ((iSlow330 & iTemp74) | ((iSlow328 & iTemp74) | (iSlow326 & iTemp74))))))))) {
				fTemp932 = (fTemp769 * (fTemp928 - fRec216[1]));
				fTemp933 = ((fTemp769 * ((((fRec216[1] + ((fTemp932 + (0.215215757f * (fTemp832 * fRec214[1]))) / fTemp791)) + (fTemp793 * fRec215[1])) / fTemp794) - fRec214[1])) / fTemp791);
				fRec214[0] = (fRec214[1] + (2.0f * fTemp933));
				fTemp934 = (fRec214[1] + fTemp933);
				fRec215[0] = (fRec215[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp934)) - fRec215[1])) / fTemp791)));
				fRec216[0] = (fRec216[1] + (2.0f * (fTemp932 / fTemp791)));
				fRec217 = fTemp934;
			}
			if ((iSlow342 & iTemp72) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp72) | (iSlow326 & iTemp72))))))))) {
				fTemp935 = (fTemp928 - (fRec219[1] + (fTemp783 * fRec220[1])));
				fTemp936 = ((fTemp769 * fTemp935) / fTemp784);
				fTemp937 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec220[1] + fTemp936)));
				fTemp938 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp937)));
				fTemp939 = ((fTemp769 * fTemp937) * fTemp938);
				fRec218 = (fRec219[1] + fTemp939);
				fRec219[0] = (fRec219[1] + (2.0f * fTemp939));
				fTemp940 = (fTemp937 * fTemp938);
				fRec220[0] = (fTemp936 + fTemp940);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp941 = (((fTemp766 * (((fTemp768 * fRec213) + (fTemp788 * fRec217)) + (fTemp798 * fRec218))) / fTemp805) + (fTemp806 * fTemp928));
				fVec34[0] = fTemp941;
				fTemp942 = ((fTemp40 * (fTemp316 - fTemp317)) + (fTemp39 * (fTemp318 - fTemp319)));
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | iSlow332))))) {
				fTemp943 = (fSlow655 * fTemp942);
			}
			if (iSlow342) {
				fTemp944 = (2.0f * fTemp943);
				fTemp945 = std::min<float>(1.0f, fTemp944);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fTemp946 = (fTemp941 - fVec34[1]);
				fRec222[0] = ((std::fabs(fTemp946) < 0.5f) ? (fConst0 * fTemp946) : fRec222[1]);
			}
			if (iSlow342) {
				fTemp947 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec222[0])))))));
				fTemp948 = (1.0f - fTemp947);
			}
			if (iSlow342 | iSlow328) {
				fTemp949 = std::floor(fTemp941);
				fTemp950 = (fTemp941 - fTemp949);
				fVec35[0] = fTemp950;
				iTemp951 = (fTemp950 < 0.5f);
				iVec36[0] = iTemp951;
			}
			if (iSlow342) {
				iTemp952 = ((iVec36[1] <= 0) & (iTemp951 > 0));
				fRec227[0] = ((fRec227[1] * float((1 - iTemp952))) + (4.65661287e-10f * (fTemp36 * float(iTemp952))));
				fTemp953 = (fTemp947 + 1.0f);
				fRec226[0] = (0.0f - (((fTemp948 * fRec226[1]) - (fRec227[0] + fRec227[1])) / fTemp953));
				fRec225[0] = (0.0f - (((fTemp948 * fRec225[1]) - (fRec226[0] + fRec226[1])) / fTemp953));
				fRec224[0] = (0.0f - (((fTemp948 * fRec224[1]) - (fRec225[0] + fRec225[1])) / fTemp953));
				fRec223[0] = (0.0f - (((fTemp948 * fRec223[1]) - (fRec224[0] + fRec224[1])) / fTemp953));
				fRec221[0] = (0.0f - (((fRec221[1] * fTemp948) - (fRec223[0] + fRec223[1])) / fTemp953));
				fTemp954 = (std::sin((6.28318548f * fTemp941)) * ((fTemp945 * (fRec221[0] + -1.0f)) + 1.0f));
				fTemp955 = (std::max<float>(1.0f, fTemp944) + -1.0f);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp956 = std::fmod(std::fabs(fTemp922), 1.0f);
				fTemp957 = (1.0f - fTemp956);
				fTemp958 = (fTemp923 + float((fTemp922 > 0.0f)));
				fTemp959 = (fTemp101 + (0.00390625f * (fTemp921 * std::pow(2.0f, (0.0f - fTemp958)))));
				iTemp960 = int(fTemp958);
				fTemp961 = ((((fTemp927 + fTemp920) + fTemp919) + fTemp918) + std::fmod((256.0f * ((fTemp959 - (fTemp115 + std::floor((fTemp959 - fTemp115)))) * (((float((iTemp960 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp960)))))) + float((iTemp960 == 0))) + float(((iTemp960 > 0) * int(std::pow(2.0f, float(iTemp960)))))))), 1.0f));
			}
			if ((iSlow342 & iTemp76) | ((iSlow340 & iTemp76) | ((iSlow338 & iTemp76) | ((iSlow336 & iTemp76) | ((iSlow334 & iTemp76) | ((iSlow332 & iTemp76) | ((iSlow330 & iTemp76) | ((iSlow328 & iTemp76) | (iSlow326 & iTemp76))))))))) {
				fTemp962 = (fRec228[1] + (fTemp769 * (fTemp961 - fRec229[1])));
				fTemp963 = (fTemp962 / fTemp784);
				fRec228[0] = ((2.0f * fTemp963) - fRec228[1]);
				fTemp964 = (fRec229[1] + ((fTemp769 * fTemp962) / fTemp784));
				fRec229[0] = ((2.0f * fTemp964) - fRec229[1]);
				fRec230 = fTemp964;
			}
			if ((iSlow342 & iTemp74) | ((iSlow340 & iTemp74) | ((iSlow338 & iTemp74) | ((iSlow336 & iTemp74) | ((iSlow334 & iTemp74) | ((iSlow332 & iTemp74) | ((iSlow330 & iTemp74) | ((iSlow328 & iTemp74) | (iSlow326 & iTemp74))))))))) {
				fTemp965 = (fTemp769 * (fTemp961 - fRec233[1]));
				fTemp966 = ((fTemp769 * ((((fRec233[1] + ((fTemp965 + (0.215215757f * (fTemp832 * fRec231[1]))) / fTemp791)) + (fTemp793 * fRec232[1])) / fTemp794) - fRec231[1])) / fTemp791);
				fRec231[0] = (fRec231[1] + (2.0f * fTemp966));
				fTemp967 = (fRec231[1] + fTemp966);
				fRec232[0] = (fRec232[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp967)) - fRec232[1])) / fTemp791)));
				fRec233[0] = (fRec233[1] + (2.0f * (fTemp965 / fTemp791)));
				fRec234 = fTemp967;
			}
			if ((iSlow342 & iTemp72) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp72) | (iSlow326 & iTemp72))))))))) {
				fTemp968 = (fTemp961 - (fRec236[1] + (fTemp783 * fRec237[1])));
				fTemp969 = ((fTemp769 * fTemp968) / fTemp784);
				fTemp970 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec237[1] + fTemp969)));
				fTemp971 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp970)));
				fTemp972 = ((fTemp769 * fTemp970) * fTemp971);
				fRec235 = (fRec236[1] + fTemp972);
				fRec236[0] = (fRec236[1] + (2.0f * fTemp972));
				fTemp973 = (fTemp970 * fTemp971);
				fRec237[0] = (fTemp969 + fTemp973);
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fTemp974 = (((fTemp766 * (((fTemp768 * fRec230) + (fTemp788 * fRec234)) + (fTemp798 * fRec235))) / fTemp805) + (fTemp806 * fTemp961));
				fVec37[0] = fTemp974;
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fTemp975 = (fTemp974 - fVec37[1]);
				fRec239[0] = ((std::fabs(fTemp975) < 0.5f) ? (fConst0 * fTemp975) : fRec239[1]);
			}
			if (iSlow342) {
				fTemp976 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec239[0])))))));
				fTemp977 = (1.0f - fTemp976);
			}
			if (iSlow342 | iSlow328) {
				fTemp978 = std::floor(fTemp974);
				fTemp979 = (fTemp974 - fTemp978);
				fVec38[0] = fTemp979;
				iTemp980 = (fTemp979 < 0.5f);
				iVec39[0] = iTemp980;
			}
			if (iSlow342) {
				iTemp981 = ((iVec39[1] <= 0) & (iTemp980 > 0));
				fRec244[0] = ((fRec244[1] * float((1 - iTemp981))) + (4.65661287e-10f * (fTemp36 * float(iTemp981))));
				fTemp982 = (fTemp976 + 1.0f);
				fRec243[0] = (0.0f - (((fTemp977 * fRec243[1]) - (fRec244[0] + fRec244[1])) / fTemp982));
				fRec242[0] = (0.0f - (((fTemp977 * fRec242[1]) - (fRec243[0] + fRec243[1])) / fTemp982));
				fRec241[0] = (0.0f - (((fTemp977 * fRec241[1]) - (fRec242[0] + fRec242[1])) / fTemp982));
				fRec240[0] = (0.0f - (((fTemp977 * fRec240[1]) - (fRec241[0] + fRec241[1])) / fTemp982));
				fRec238[0] = (0.0f - (((fRec238[1] * fTemp977) - (fRec240[0] + fRec240[1])) / fTemp982));
				fTemp983 = (std::sin((6.28318548f * fTemp974)) * ((fTemp945 * (fRec238[0] + -1.0f)) + 1.0f));
				fTemp984 = (((fTemp954 + (fTemp955 * (fRec221[0] - fTemp954))) * fTemp957) + (fTemp956 * (fTemp983 + (fTemp955 * (fRec238[0] - fTemp983)))));
			}
			if (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | iSlow332)))) {
				fTemp985 = (fTemp943 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec222[0] - fConst7))))));
			}
			if (iSlow340 | (iSlow336 | (iSlow334 | iSlow332))) {
				fTemp986 = (1.0f - fTemp985);
			}
			if (iSlow340) {
				fTemp987 = ((0.75f * fTemp986) + (fTemp941 + (0.5f * fTemp985)));
				fTemp988 = std::floor(fTemp987);
			}
			if (iSlow340 | iSlow332) {
				fTemp989 = (0.5f * fTemp986);
			}
			if (iSlow340) {
				fTemp990 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp989));
				fTemp991 = (0.5f - fTemp990);
			}
			if (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | iSlow332)))) {
				fTemp992 = (fTemp943 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec239[0] - fConst7))))));
			}
			if (iSlow340 | (iSlow336 | (iSlow334 | iSlow332))) {
				fTemp993 = (1.0f - fTemp992);
			}
			if (iSlow340) {
				fTemp994 = ((0.75f * fTemp993) + (fTemp974 + (0.5f * fTemp992)));
				fTemp995 = std::floor(fTemp994);
			}
			if (iSlow340 | iSlow332) {
				fTemp996 = (0.5f * fTemp993);
			}
			if (iSlow340) {
				fTemp997 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp996));
				fTemp998 = (0.5f - fTemp997);
				fTemp999 = ((fTemp957 * std::cos((6.28318548f * ((fTemp987 + std::min<float>((((fTemp987 - fTemp988) * fTemp991) / fTemp990), ((fTemp991 * (fTemp988 + (1.0f - fTemp987))) / (1.0f - fTemp990)))) - fTemp988)))) + (fTemp956 * std::cos((6.28318548f * ((fTemp994 + std::min<float>((((fTemp994 - fTemp995) * fTemp998) / fTemp997), ((fTemp998 * (fTemp995 + (1.0f - fTemp994))) / (1.0f - fTemp997)))) - fTemp995)))));
			}
			if (iSlow338) {
				fTemp1000 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp985));
				fTemp1001 = (1.0f - fTemp1000);
				fTemp1002 = (0.25f * fTemp1001);
				fTemp1003 = (fTemp941 - (fTemp1002 + std::floor((fTemp941 - fTemp1002))));
				fTemp1004 = (2.0f * fTemp1003);
				fTemp1005 = std::floor((fTemp1004 + 1.0f));
				fTemp1006 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp992));
				fTemp1007 = (1.0f - fTemp1006);
				fTemp1008 = (0.25f * fTemp1007);
				fTemp1009 = (fTemp974 - (fTemp1008 + std::floor((fTemp974 - fTemp1008))));
				fTemp1010 = (2.0f * fTemp1009);
				fTemp1011 = std::floor((fTemp1010 + 1.0f));
				fTemp1012 = ((fTemp957 * std::cos((3.14159274f * ((float((fTemp1003 >= 0.5f)) + fTemp1004) + (1.0f - (fTemp1005 + std::min<float>((fTemp1004 + (1.0f - fTemp1005)), ((fTemp1000 * (fTemp1005 - fTemp1004)) / fTemp1001)))))))) + (fTemp956 * std::cos((3.14159274f * ((float((fTemp1009 >= 0.5f)) + fTemp1010) + (1.0f - (fTemp1011 + std::min<float>((fTemp1010 + (1.0f - fTemp1011)), ((fTemp1006 * (fTemp1011 - fTemp1010)) / fTemp1007)))))))));
			}
			if (iSlow336) {
				fTemp1013 = (0.25f * fTemp986);
				fTemp1014 = (fTemp1013 + std::floor((fTemp941 - fTemp1013)));
			}
			if (iSlow336 | (iSlow334 | (iSlow330 | iSlow326))) {
				fTemp1015 = (1.0f - fTemp941);
			}
			if (iSlow336) {
				fTemp1016 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp985));
				fTemp1017 = (0.25f * fTemp993);
				fTemp1018 = (fTemp1017 + std::floor((fTemp974 - fTemp1017)));
			}
			if (iSlow336 | (iSlow334 | (iSlow330 | iSlow326))) {
				fTemp1019 = (1.0f - fTemp974);
			}
			if (iSlow336) {
				fTemp1020 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp992));
				fTemp1021 = ((fTemp957 * std::cos((6.28318548f * (fTemp941 - (fTemp1014 + std::min<float>((fTemp941 - fTemp1014), (((fTemp1014 + fTemp1015) * fTemp1016) / (1.0f - fTemp1016)))))))) + (fTemp956 * std::cos((6.28318548f * (fTemp974 - (fTemp1018 + std::min<float>((fTemp974 - fTemp1018), (((fTemp1018 + fTemp1019) * fTemp1020) / (1.0f - fTemp1020)))))))));
			}
			if (iSlow334) {
				fTemp1022 = ((0.125f * fTemp986) + (0.25f * fTemp985));
				fTemp1023 = (fTemp1022 + std::floor((fTemp941 - fTemp1022)));
				fTemp1024 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp985));
				fTemp1025 = (0.49000001f * fTemp1024);
				fTemp1026 = ((0.125f * fTemp993) + (0.25f * fTemp992));
				fTemp1027 = (fTemp1026 + std::floor((fTemp974 - fTemp1026)));
				fTemp1028 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp992));
				fTemp1029 = (0.49000001f * fTemp1028);
				fTemp1030 = ((fTemp957 * std::cos((12.566371f * ((fTemp941 + std::min<float>((0.49000001f * (((fTemp941 - fTemp1023) * fTemp1024) / (0.5f - fTemp1025))), (0.49000001f * ((fTemp1024 * (fTemp1023 + fTemp1015)) / (fTemp1025 + 0.5f))))) - fTemp1023)))) + (fTemp956 * std::cos((12.566371f * ((fTemp974 + std::min<float>((0.49000001f * (((fTemp974 - fTemp1027) * fTemp1028) / (0.5f - fTemp1029))), (0.49000001f * ((fTemp1028 * (fTemp1027 + fTemp1019)) / (fTemp1029 + 0.5f))))) - fTemp1027)))));
			}
			if (iSlow332) {
				fTemp1031 = std::min<float>(0.975000024f, fTemp985);
				fTemp1032 = (0.25f * (1.0f - fTemp1031));
				fTemp1033 = (fTemp1032 + (0.5f * fTemp1031));
				fTemp1034 = std::floor((fTemp941 - fTemp1033));
				fTemp1035 = (fTemp941 - (fTemp1033 + fTemp1034));
				fTemp1036 = std::min<float>(0.975000024f, fTemp992);
				fTemp1037 = (0.25f * (1.0f - fTemp1036));
				fTemp1038 = (fTemp1037 + (0.5f * fTemp1036));
				fTemp1039 = std::floor((fTemp974 - fTemp1038));
				fTemp1040 = (fTemp974 - (fTemp1038 + fTemp1039));
				fTemp1041 = ((fTemp957 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp1035 < 0.5f) ? fTemp1035 : (0.5f * (((fTemp941 - ((fTemp1032 + fTemp1034) + (0.5f * (fTemp1031 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp989))) + 1.0f))))))) + (fTemp956 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp1040 < 0.5f) ? fTemp1040 : (0.5f * (((fTemp974 - ((fTemp1037 + fTemp1039) + (0.5f * (fTemp1036 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp996))) + 1.0f))))))));
			}
			if (iSlow330 | iSlow326) {
				fTemp1042 = (fTemp941 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec222[0] * fSlow655) * fTemp942))) / fRec222[0])));
				fTemp1043 = (fTemp974 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec239[0] * fSlow655) * fTemp942))) / fRec239[0])));
			}
			if (iSlow330) {
				fTemp1044 = ((fTemp957 * (((0.0f - fTemp1015) * (1.0f - std::cos((6.28318548f * (fTemp1042 + (1.0f - std::floor((fTemp1042 + 1.0f)))))))) + 1.0f)) + (fTemp956 * (((0.0f - fTemp1019) * (1.0f - std::cos((6.28318548f * (fTemp1043 + (1.0f - std::floor((fTemp1043 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow328) {
				fTemp1045 = (fTemp941 - (fTemp949 + fVec35[1]));
				fRec245[0] = ((std::fabs(fTemp1045) < 0.5f) ? (fConst0 * fTemp1045) : fRec245[1]);
				fTemp1046 = (fTemp950 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec245[0] * fSlow655) * fTemp942))) / fRec245[0])));
				fTemp1047 = (fTemp974 - (fTemp978 + fVec38[1]));
				fRec246[0] = ((std::fabs(fTemp1047) < 0.5f) ? (fConst0 * fTemp1047) : fRec246[1]);
				fTemp1048 = (fTemp979 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec246[0] * fSlow655) * fTemp942))) / fRec246[0])));
				fTemp1049 = ((fTemp957 * (((iTemp951 ? (2.0f * fTemp950) : (2.0f * (1.0f - fTemp950))) * (std::cos((6.28318548f * (fTemp1046 + (1.0f - std::floor((fTemp1046 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp956 * (((iTemp980 ? (2.0f * fTemp979) : (2.0f * (1.0f - fTemp979))) * (std::cos((6.28318548f * (fTemp1048 + (1.0f - std::floor((fTemp1048 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow326) {
				fTemp1050 = (((fTemp957 * std::min<float>(1.0f, (2.0f * fTemp1015))) * std::sin((6.28318548f * (fTemp1042 - std::floor(fTemp1042))))) + ((fTemp956 * std::min<float>(1.0f, (2.0f * fTemp1019))) * std::sin((6.28318548f * (fTemp1043 - std::floor(fTemp1043))))));
			}
			fRec172[0] = (((((((((fSlow341 * fTemp984) + (fSlow339 * fTemp999)) + (fSlow337 * fTemp1012)) + (fSlow335 * fTemp1021)) + (fSlow333 * fTemp1030)) + (fSlow331 * fTemp1041)) + (fSlow329 * fTemp1044)) + (fSlow327 * fTemp1049)) + (fSlow325 * fTemp1050));
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp1051 = (fRec174[1] * ((fTemp40 * (fTemp429 - fTemp430)) + (fTemp39 * (fTemp431 - fTemp432))));
				fTemp1052 = (fRec173[1] * ((fTemp40 * (fTemp434 - fTemp435)) + (fTemp39 * (fTemp436 - fTemp437))));
				fTemp1053 = (fRec172[1] * ((fTemp40 * (fTemp439 - fTemp440)) + (fTemp39 * (fTemp441 - fTemp442))));
				fTemp1054 = ((fTemp40 * (fTemp444 - fTemp445)) + (fTemp39 * (fTemp446 - fTemp447)));
				fTemp1055 = ((fTemp40 * (fTemp449 - fTemp450)) + (fTemp39 * (fTemp451 - fTemp452)));
				fTemp1056 = std::floor(fTemp1055);
				fTemp1057 = (fTemp1056 + float(((fTemp1055 < 0.0f) & (fTemp1055 != fTemp1056))));
				fTemp1058 = (fTemp101 + (0.00390625f * (fTemp1054 * std::pow(2.0f, (0.0f - fTemp1057)))));
				iTemp1059 = int(fTemp1057);
				fTemp1060 = (fRec171[1] * ((fTemp40 * (fTemp458 - fTemp459)) + (fTemp39 * (fTemp460 - fTemp461))));
				fTemp1061 = (fTemp1051 + (fTemp1052 + (fTemp1053 + (std::fmod((256.0f * ((fTemp1058 - (fTemp115 + std::floor((fTemp1058 - fTemp115)))) * (((float((iTemp1059 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp1059)))))) + float((iTemp1059 == 0))) + float(((iTemp1059 > 0) * int(std::pow(2.0f, float(iTemp1059)))))))), 1.0f) + fTemp1060))));
			}
			if ((iSlow322 & iTemp76) | ((iSlow320 & iTemp76) | ((iSlow318 & iTemp76) | ((iSlow316 & iTemp76) | ((iSlow314 & iTemp76) | ((iSlow312 & iTemp76) | ((iSlow310 & iTemp76) | ((iSlow308 & iTemp76) | (iSlow306 & iTemp76))))))))) {
				fTemp1062 = (fRec247[1] + (fTemp769 * (fTemp1061 - fRec248[1])));
				fTemp1063 = (fTemp1062 / fTemp784);
				fRec247[0] = ((2.0f * fTemp1063) - fRec247[1]);
				fTemp1064 = (fRec248[1] + ((fTemp769 * fTemp1062) / fTemp784));
				fRec248[0] = ((2.0f * fTemp1064) - fRec248[1]);
				fRec249 = fTemp1064;
			}
			if ((iSlow322 & iTemp74) | ((iSlow320 & iTemp74) | ((iSlow318 & iTemp74) | ((iSlow316 & iTemp74) | ((iSlow314 & iTemp74) | ((iSlow312 & iTemp74) | ((iSlow310 & iTemp74) | ((iSlow308 & iTemp74) | (iSlow306 & iTemp74))))))))) {
				fTemp1065 = (fTemp769 * (fTemp1061 - fRec252[1]));
				fTemp1066 = ((fTemp769 * ((((fRec252[1] + ((fTemp1065 + (0.215215757f * (fTemp832 * fRec250[1]))) / fTemp791)) + (fTemp793 * fRec251[1])) / fTemp794) - fRec250[1])) / fTemp791);
				fRec250[0] = (fRec250[1] + (2.0f * fTemp1066));
				fTemp1067 = (fRec250[1] + fTemp1066);
				fRec251[0] = (fRec251[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp1067)) - fRec251[1])) / fTemp791)));
				fRec252[0] = (fRec252[1] + (2.0f * (fTemp1065 / fTemp791)));
				fRec253 = fTemp1067;
			}
			if ((iSlow322 & iTemp72) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp72) | (iSlow306 & iTemp72))))))))) {
				fTemp1068 = (fTemp1061 - (fRec255[1] + (fTemp783 * fRec256[1])));
				fTemp1069 = ((fTemp769 * fTemp1068) / fTemp784);
				fTemp1070 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec256[1] + fTemp1069)));
				fTemp1071 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp1070)));
				fTemp1072 = ((fTemp769 * fTemp1070) * fTemp1071);
				fRec254 = (fRec255[1] + fTemp1072);
				fRec255[0] = (fRec255[1] + (2.0f * fTemp1072));
				fTemp1073 = (fTemp1070 * fTemp1071);
				fRec256[0] = (fTemp1069 + fTemp1073);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp1074 = (((fTemp766 * (((fTemp768 * fRec249) + (fTemp788 * fRec253)) + (fTemp798 * fRec254))) / fTemp805) + (fTemp806 * fTemp1061));
				fVec40[0] = fTemp1074;
				fTemp1075 = ((fTemp40 * (fTemp477 - fTemp478)) + (fTemp39 * (fTemp479 - fTemp480)));
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | iSlow312))))) {
				fTemp1076 = (fSlow768 * fTemp1075);
			}
			if (iSlow322) {
				fTemp1077 = (2.0f * fTemp1076);
				fTemp1078 = std::min<float>(1.0f, fTemp1077);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fTemp1079 = (fTemp1074 - fVec40[1]);
				fRec258[0] = ((std::fabs(fTemp1079) < 0.5f) ? (fConst0 * fTemp1079) : fRec258[1]);
			}
			if (iSlow322) {
				fTemp1080 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec258[0])))))));
				fTemp1081 = (1.0f - fTemp1080);
			}
			if (iSlow322 | iSlow308) {
				fTemp1082 = std::floor(fTemp1074);
				fTemp1083 = (fTemp1074 - fTemp1082);
				fVec41[0] = fTemp1083;
				iTemp1084 = (fTemp1083 < 0.5f);
				iVec42[0] = iTemp1084;
			}
			if (iSlow322) {
				iTemp1085 = ((iVec42[1] <= 0) & (iTemp1084 > 0));
				fRec263[0] = ((fRec263[1] * float((1 - iTemp1085))) + (4.65661287e-10f * (fTemp36 * float(iTemp1085))));
				fTemp1086 = (fTemp1080 + 1.0f);
				fRec262[0] = (0.0f - (((fTemp1081 * fRec262[1]) - (fRec263[0] + fRec263[1])) / fTemp1086));
				fRec261[0] = (0.0f - (((fTemp1081 * fRec261[1]) - (fRec262[0] + fRec262[1])) / fTemp1086));
				fRec260[0] = (0.0f - (((fTemp1081 * fRec260[1]) - (fRec261[0] + fRec261[1])) / fTemp1086));
				fRec259[0] = (0.0f - (((fTemp1081 * fRec259[1]) - (fRec260[0] + fRec260[1])) / fTemp1086));
				fRec257[0] = (0.0f - (((fRec257[1] * fTemp1081) - (fRec259[0] + fRec259[1])) / fTemp1086));
				fTemp1087 = (std::sin((6.28318548f * fTemp1074)) * ((fTemp1078 * (fRec257[0] + -1.0f)) + 1.0f));
				fTemp1088 = (std::max<float>(1.0f, fTemp1077) + -1.0f);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp1089 = std::fmod(std::fabs(fTemp1055), 1.0f);
				fTemp1090 = (1.0f - fTemp1089);
				fTemp1091 = (fTemp1056 + float((fTemp1055 > 0.0f)));
				fTemp1092 = (fTemp101 + (0.00390625f * (fTemp1054 * std::pow(2.0f, (0.0f - fTemp1091)))));
				iTemp1093 = int(fTemp1091);
				fTemp1094 = ((((fTemp1060 + fTemp1053) + fTemp1052) + fTemp1051) + std::fmod((256.0f * ((fTemp1092 - (fTemp115 + std::floor((fTemp1092 - fTemp115)))) * (((float((iTemp1093 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp1093)))))) + float((iTemp1093 == 0))) + float(((iTemp1093 > 0) * int(std::pow(2.0f, float(iTemp1093)))))))), 1.0f));
			}
			if ((iSlow322 & iTemp76) | ((iSlow320 & iTemp76) | ((iSlow318 & iTemp76) | ((iSlow316 & iTemp76) | ((iSlow314 & iTemp76) | ((iSlow312 & iTemp76) | ((iSlow310 & iTemp76) | ((iSlow308 & iTemp76) | (iSlow306 & iTemp76))))))))) {
				fTemp1095 = (fRec264[1] + (fTemp769 * (fTemp1094 - fRec265[1])));
				fTemp1096 = (fTemp1095 / fTemp784);
				fRec264[0] = ((2.0f * fTemp1096) - fRec264[1]);
				fTemp1097 = (fRec265[1] + ((fTemp769 * fTemp1095) / fTemp784));
				fRec265[0] = ((2.0f * fTemp1097) - fRec265[1]);
				fRec266 = fTemp1097;
			}
			if ((iSlow322 & iTemp74) | ((iSlow320 & iTemp74) | ((iSlow318 & iTemp74) | ((iSlow316 & iTemp74) | ((iSlow314 & iTemp74) | ((iSlow312 & iTemp74) | ((iSlow310 & iTemp74) | ((iSlow308 & iTemp74) | (iSlow306 & iTemp74))))))))) {
				fTemp1098 = (fTemp769 * (fTemp1094 - fRec269[1]));
				fTemp1099 = ((fTemp769 * ((((fRec269[1] + ((fTemp1098 + (0.215215757f * (fTemp832 * fRec267[1]))) / fTemp791)) + (fTemp793 * fRec268[1])) / fTemp794) - fRec267[1])) / fTemp791);
				fRec267[0] = (fRec267[1] + (2.0f * fTemp1099));
				fTemp1100 = (fRec267[1] + fTemp1099);
				fRec268[0] = (fRec268[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp1100)) - fRec268[1])) / fTemp791)));
				fRec269[0] = (fRec269[1] + (2.0f * (fTemp1098 / fTemp791)));
				fRec270 = fTemp1100;
			}
			if ((iSlow322 & iTemp72) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp72) | (iSlow306 & iTemp72))))))))) {
				fTemp1101 = (fTemp1094 - (fRec272[1] + (fTemp783 * fRec273[1])));
				fTemp1102 = ((fTemp769 * fTemp1101) / fTemp784);
				fTemp1103 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec273[1] + fTemp1102)));
				fTemp1104 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp1103)));
				fTemp1105 = ((fTemp769 * fTemp1103) * fTemp1104);
				fRec271 = (fRec272[1] + fTemp1105);
				fRec272[0] = (fRec272[1] + (2.0f * fTemp1105));
				fTemp1106 = (fTemp1103 * fTemp1104);
				fRec273[0] = (fTemp1102 + fTemp1106);
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fTemp1107 = (((fTemp766 * (((fTemp768 * fRec266) + (fTemp788 * fRec270)) + (fTemp798 * fRec271))) / fTemp805) + (fTemp806 * fTemp1094));
				fVec43[0] = fTemp1107;
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fTemp1108 = (fTemp1107 - fVec43[1]);
				fRec275[0] = ((std::fabs(fTemp1108) < 0.5f) ? (fConst0 * fTemp1108) : fRec275[1]);
			}
			if (iSlow322) {
				fTemp1109 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec275[0])))))));
				fTemp1110 = (1.0f - fTemp1109);
			}
			if (iSlow322 | iSlow308) {
				fTemp1111 = std::floor(fTemp1107);
				fTemp1112 = (fTemp1107 - fTemp1111);
				fVec44[0] = fTemp1112;
				iTemp1113 = (fTemp1112 < 0.5f);
				iVec45[0] = iTemp1113;
			}
			if (iSlow322) {
				iTemp1114 = ((iVec45[1] <= 0) & (iTemp1113 > 0));
				fRec280[0] = ((fRec280[1] * float((1 - iTemp1114))) + (4.65661287e-10f * (fTemp36 * float(iTemp1114))));
				fTemp1115 = (fTemp1109 + 1.0f);
				fRec279[0] = (0.0f - (((fTemp1110 * fRec279[1]) - (fRec280[0] + fRec280[1])) / fTemp1115));
				fRec278[0] = (0.0f - (((fTemp1110 * fRec278[1]) - (fRec279[0] + fRec279[1])) / fTemp1115));
				fRec277[0] = (0.0f - (((fTemp1110 * fRec277[1]) - (fRec278[0] + fRec278[1])) / fTemp1115));
				fRec276[0] = (0.0f - (((fTemp1110 * fRec276[1]) - (fRec277[0] + fRec277[1])) / fTemp1115));
				fRec274[0] = (0.0f - (((fRec274[1] * fTemp1110) - (fRec276[0] + fRec276[1])) / fTemp1115));
				fTemp1116 = (std::sin((6.28318548f * fTemp1107)) * ((fTemp1078 * (fRec274[0] + -1.0f)) + 1.0f));
				fTemp1117 = (((fTemp1087 + (fTemp1088 * (fRec257[0] - fTemp1087))) * fTemp1090) + (fTemp1089 * (fTemp1116 + (fTemp1088 * (fRec274[0] - fTemp1116)))));
			}
			if (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | iSlow312)))) {
				fTemp1118 = (fTemp1076 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec258[0] - fConst7))))));
			}
			if (iSlow320 | (iSlow316 | (iSlow314 | iSlow312))) {
				fTemp1119 = (1.0f - fTemp1118);
			}
			if (iSlow320) {
				fTemp1120 = ((0.75f * fTemp1119) + (fTemp1074 + (0.5f * fTemp1118)));
				fTemp1121 = std::floor(fTemp1120);
			}
			if (iSlow320 | iSlow312) {
				fTemp1122 = (0.5f * fTemp1119);
			}
			if (iSlow320) {
				fTemp1123 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp1122));
				fTemp1124 = (0.5f - fTemp1123);
			}
			if (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | iSlow312)))) {
				fTemp1125 = (fTemp1076 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec275[0] - fConst7))))));
			}
			if (iSlow320 | (iSlow316 | (iSlow314 | iSlow312))) {
				fTemp1126 = (1.0f - fTemp1125);
			}
			if (iSlow320) {
				fTemp1127 = ((0.75f * fTemp1126) + (fTemp1107 + (0.5f * fTemp1125)));
				fTemp1128 = std::floor(fTemp1127);
			}
			if (iSlow320 | iSlow312) {
				fTemp1129 = (0.5f * fTemp1126);
			}
			if (iSlow320) {
				fTemp1130 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp1129));
				fTemp1131 = (0.5f - fTemp1130);
				fTemp1132 = ((fTemp1090 * std::cos((6.28318548f * ((fTemp1120 + std::min<float>((((fTemp1120 - fTemp1121) * fTemp1124) / fTemp1123), ((fTemp1124 * (fTemp1121 + (1.0f - fTemp1120))) / (1.0f - fTemp1123)))) - fTemp1121)))) + (fTemp1089 * std::cos((6.28318548f * ((fTemp1127 + std::min<float>((((fTemp1127 - fTemp1128) * fTemp1131) / fTemp1130), ((fTemp1131 * (fTemp1128 + (1.0f - fTemp1127))) / (1.0f - fTemp1130)))) - fTemp1128)))));
			}
			if (iSlow318) {
				fTemp1133 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp1118));
				fTemp1134 = (1.0f - fTemp1133);
				fTemp1135 = (0.25f * fTemp1134);
				fTemp1136 = (fTemp1074 - (fTemp1135 + std::floor((fTemp1074 - fTemp1135))));
				fTemp1137 = (2.0f * fTemp1136);
				fTemp1138 = std::floor((fTemp1137 + 1.0f));
				fTemp1139 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp1125));
				fTemp1140 = (1.0f - fTemp1139);
				fTemp1141 = (0.25f * fTemp1140);
				fTemp1142 = (fTemp1107 - (fTemp1141 + std::floor((fTemp1107 - fTemp1141))));
				fTemp1143 = (2.0f * fTemp1142);
				fTemp1144 = std::floor((fTemp1143 + 1.0f));
				fTemp1145 = ((fTemp1090 * std::cos((3.14159274f * ((float((fTemp1136 >= 0.5f)) + fTemp1137) + (1.0f - (fTemp1138 + std::min<float>((fTemp1137 + (1.0f - fTemp1138)), ((fTemp1133 * (fTemp1138 - fTemp1137)) / fTemp1134)))))))) + (fTemp1089 * std::cos((3.14159274f * ((float((fTemp1142 >= 0.5f)) + fTemp1143) + (1.0f - (fTemp1144 + std::min<float>((fTemp1143 + (1.0f - fTemp1144)), ((fTemp1139 * (fTemp1144 - fTemp1143)) / fTemp1140)))))))));
			}
			if (iSlow316) {
				fTemp1146 = (0.25f * fTemp1119);
				fTemp1147 = (fTemp1146 + std::floor((fTemp1074 - fTemp1146)));
			}
			if (iSlow316 | (iSlow314 | (iSlow310 | iSlow306))) {
				fTemp1148 = (1.0f - fTemp1074);
			}
			if (iSlow316) {
				fTemp1149 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp1118));
				fTemp1150 = (0.25f * fTemp1126);
				fTemp1151 = (fTemp1150 + std::floor((fTemp1107 - fTemp1150)));
			}
			if (iSlow316 | (iSlow314 | (iSlow310 | iSlow306))) {
				fTemp1152 = (1.0f - fTemp1107);
			}
			if (iSlow316) {
				fTemp1153 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp1125));
				fTemp1154 = ((fTemp1090 * std::cos((6.28318548f * (fTemp1074 - (fTemp1147 + std::min<float>((fTemp1074 - fTemp1147), (((fTemp1147 + fTemp1148) * fTemp1149) / (1.0f - fTemp1149)))))))) + (fTemp1089 * std::cos((6.28318548f * (fTemp1107 - (fTemp1151 + std::min<float>((fTemp1107 - fTemp1151), (((fTemp1151 + fTemp1152) * fTemp1153) / (1.0f - fTemp1153)))))))));
			}
			if (iSlow314) {
				fTemp1155 = ((0.125f * fTemp1119) + (0.25f * fTemp1118));
				fTemp1156 = (fTemp1155 + std::floor((fTemp1074 - fTemp1155)));
				fTemp1157 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp1118));
				fTemp1158 = (0.49000001f * fTemp1157);
				fTemp1159 = ((0.125f * fTemp1126) + (0.25f * fTemp1125));
				fTemp1160 = (fTemp1159 + std::floor((fTemp1107 - fTemp1159)));
				fTemp1161 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp1125));
				fTemp1162 = (0.49000001f * fTemp1161);
				fTemp1163 = ((fTemp1090 * std::cos((12.566371f * ((fTemp1074 + std::min<float>((0.49000001f * (((fTemp1074 - fTemp1156) * fTemp1157) / (0.5f - fTemp1158))), (0.49000001f * ((fTemp1157 * (fTemp1156 + fTemp1148)) / (fTemp1158 + 0.5f))))) - fTemp1156)))) + (fTemp1089 * std::cos((12.566371f * ((fTemp1107 + std::min<float>((0.49000001f * (((fTemp1107 - fTemp1160) * fTemp1161) / (0.5f - fTemp1162))), (0.49000001f * ((fTemp1161 * (fTemp1160 + fTemp1152)) / (fTemp1162 + 0.5f))))) - fTemp1160)))));
			}
			if (iSlow312) {
				fTemp1164 = std::min<float>(0.975000024f, fTemp1118);
				fTemp1165 = (0.25f * (1.0f - fTemp1164));
				fTemp1166 = (fTemp1165 + (0.5f * fTemp1164));
				fTemp1167 = std::floor((fTemp1074 - fTemp1166));
				fTemp1168 = (fTemp1074 - (fTemp1166 + fTemp1167));
				fTemp1169 = std::min<float>(0.975000024f, fTemp1125);
				fTemp1170 = (0.25f * (1.0f - fTemp1169));
				fTemp1171 = (fTemp1170 + (0.5f * fTemp1169));
				fTemp1172 = std::floor((fTemp1107 - fTemp1171));
				fTemp1173 = (fTemp1107 - (fTemp1171 + fTemp1172));
				fTemp1174 = ((fTemp1090 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp1168 < 0.5f) ? fTemp1168 : (0.5f * (((fTemp1074 - ((fTemp1165 + fTemp1167) + (0.5f * (fTemp1164 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp1122))) + 1.0f))))))) + (fTemp1089 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp1173 < 0.5f) ? fTemp1173 : (0.5f * (((fTemp1107 - ((fTemp1170 + fTemp1172) + (0.5f * (fTemp1169 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp1129))) + 1.0f))))))));
			}
			if (iSlow310 | iSlow306) {
				fTemp1175 = (fTemp1074 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec258[0] * fSlow768) * fTemp1075))) / fRec258[0])));
				fTemp1176 = (fTemp1107 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec275[0] * fSlow768) * fTemp1075))) / fRec275[0])));
			}
			if (iSlow310) {
				fTemp1177 = ((fTemp1090 * (((0.0f - fTemp1148) * (1.0f - std::cos((6.28318548f * (fTemp1175 + (1.0f - std::floor((fTemp1175 + 1.0f)))))))) + 1.0f)) + (fTemp1089 * (((0.0f - fTemp1152) * (1.0f - std::cos((6.28318548f * (fTemp1176 + (1.0f - std::floor((fTemp1176 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow308) {
				fTemp1178 = (fTemp1074 - (fTemp1082 + fVec41[1]));
				fRec281[0] = ((std::fabs(fTemp1178) < 0.5f) ? (fConst0 * fTemp1178) : fRec281[1]);
				fTemp1179 = (fTemp1083 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec281[0] * fSlow768) * fTemp1075))) / fRec281[0])));
				fTemp1180 = (fTemp1107 - (fTemp1111 + fVec44[1]));
				fRec282[0] = ((std::fabs(fTemp1180) < 0.5f) ? (fConst0 * fTemp1180) : fRec282[1]);
				fTemp1181 = (fTemp1112 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec282[0] * fSlow768) * fTemp1075))) / fRec282[0])));
				fTemp1182 = ((fTemp1090 * (((iTemp1084 ? (2.0f * fTemp1083) : (2.0f * (1.0f - fTemp1083))) * (std::cos((6.28318548f * (fTemp1179 + (1.0f - std::floor((fTemp1179 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp1089 * (((iTemp1113 ? (2.0f * fTemp1112) : (2.0f * (1.0f - fTemp1112))) * (std::cos((6.28318548f * (fTemp1181 + (1.0f - std::floor((fTemp1181 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow306) {
				fTemp1183 = (((fTemp1090 * std::min<float>(1.0f, (2.0f * fTemp1148))) * std::sin((6.28318548f * (fTemp1175 - std::floor(fTemp1175))))) + ((fTemp1089 * std::min<float>(1.0f, (2.0f * fTemp1152))) * std::sin((6.28318548f * (fTemp1176 - std::floor(fTemp1176))))));
			}
			fRec173[0] = (((((((((fSlow321 * fTemp1117) + (fSlow319 * fTemp1132)) + (fSlow317 * fTemp1145)) + (fSlow315 * fTemp1154)) + (fSlow313 * fTemp1163)) + (fSlow311 * fTemp1174)) + (fSlow309 * fTemp1177)) + (fSlow307 * fTemp1182)) + (fSlow305 * fTemp1183));
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp1184 = (fRec174[1] * ((fTemp40 * (fTemp590 - fTemp591)) + (fTemp39 * (fTemp592 - fTemp593))));
				fTemp1185 = (fRec173[1] * ((fTemp40 * (fTemp595 - fTemp596)) + (fTemp39 * (fTemp597 - fTemp598))));
				fTemp1186 = (fRec172[1] * ((fTemp40 * (fTemp600 - fTemp601)) + (fTemp39 * (fTemp602 - fTemp603))));
				fTemp1187 = ((fTemp40 * (fTemp605 - fTemp606)) + (fTemp39 * (fTemp607 - fTemp608)));
				fTemp1188 = ((fTemp40 * (fTemp610 - fTemp611)) + (fTemp39 * (fTemp612 - fTemp613)));
				fTemp1189 = std::floor(fTemp1188);
				fTemp1190 = (fTemp1189 + float(((fTemp1188 < 0.0f) & (fTemp1188 != fTemp1189))));
				fTemp1191 = (fTemp101 + (0.00390625f * (fTemp1187 * std::pow(2.0f, (0.0f - fTemp1190)))));
				iTemp1192 = int(fTemp1190);
				fTemp1193 = (fRec171[1] * ((fTemp40 * (fTemp619 - fTemp620)) + (fTemp39 * (fTemp621 - fTemp622))));
				fTemp1194 = (fTemp1184 + (fTemp1185 + (fTemp1186 + (std::fmod((256.0f * ((fTemp1191 - (fTemp115 + std::floor((fTemp1191 - fTemp115)))) * (((float((iTemp1192 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp1192)))))) + float((iTemp1192 == 0))) + float(((iTemp1192 > 0) * int(std::pow(2.0f, float(iTemp1192)))))))), 1.0f) + fTemp1193))));
			}
			if ((iSlow302 & iTemp76) | ((iSlow300 & iTemp76) | ((iSlow298 & iTemp76) | ((iSlow296 & iTemp76) | ((iSlow294 & iTemp76) | ((iSlow292 & iTemp76) | ((iSlow290 & iTemp76) | ((iSlow288 & iTemp76) | (iSlow286 & iTemp76))))))))) {
				fTemp1195 = (fRec283[1] + (fTemp769 * (fTemp1194 - fRec284[1])));
				fTemp1196 = (fTemp1195 / fTemp784);
				fRec283[0] = ((2.0f * fTemp1196) - fRec283[1]);
				fTemp1197 = (fRec284[1] + ((fTemp769 * fTemp1195) / fTemp784));
				fRec284[0] = ((2.0f * fTemp1197) - fRec284[1]);
				fRec285 = fTemp1197;
			}
			if ((iSlow302 & iTemp74) | ((iSlow300 & iTemp74) | ((iSlow298 & iTemp74) | ((iSlow296 & iTemp74) | ((iSlow294 & iTemp74) | ((iSlow292 & iTemp74) | ((iSlow290 & iTemp74) | ((iSlow288 & iTemp74) | (iSlow286 & iTemp74))))))))) {
				fTemp1198 = (fTemp769 * (fTemp1194 - fRec288[1]));
				fTemp1199 = ((fTemp769 * ((((fRec288[1] + ((fTemp1198 + (0.215215757f * (fTemp832 * fRec286[1]))) / fTemp791)) + (fTemp793 * fRec287[1])) / fTemp794) - fRec286[1])) / fTemp791);
				fRec286[0] = (fRec286[1] + (2.0f * fTemp1199));
				fTemp1200 = (fRec286[1] + fTemp1199);
				fRec287[0] = (fRec287[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp1200)) - fRec287[1])) / fTemp791)));
				fRec288[0] = (fRec288[1] + (2.0f * (fTemp1198 / fTemp791)));
				fRec289 = fTemp1200;
			}
			if ((iSlow302 & iTemp72) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp72) | (iSlow286 & iTemp72))))))))) {
				fTemp1201 = (fTemp1194 - (fRec291[1] + (fTemp783 * fRec292[1])));
				fTemp1202 = ((fTemp769 * fTemp1201) / fTemp784);
				fTemp1203 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec292[1] + fTemp1202)));
				fTemp1204 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp1203)));
				fTemp1205 = ((fTemp769 * fTemp1203) * fTemp1204);
				fRec290 = (fRec291[1] + fTemp1205);
				fRec291[0] = (fRec291[1] + (2.0f * fTemp1205));
				fTemp1206 = (fTemp1203 * fTemp1204);
				fRec292[0] = (fTemp1202 + fTemp1206);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp1207 = (((fTemp766 * (((fTemp768 * fRec285) + (fTemp788 * fRec289)) + (fTemp798 * fRec290))) / fTemp805) + (fTemp806 * fTemp1194));
				fVec46[0] = fTemp1207;
				fTemp1208 = ((fTemp40 * (fTemp638 - fTemp639)) + (fTemp39 * (fTemp640 - fTemp641)));
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | iSlow292))))) {
				fTemp1209 = (fSlow881 * fTemp1208);
			}
			if (iSlow302) {
				fTemp1210 = (2.0f * fTemp1209);
				fTemp1211 = std::min<float>(1.0f, fTemp1210);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fTemp1212 = (fTemp1207 - fVec46[1]);
				fRec294[0] = ((std::fabs(fTemp1212) < 0.5f) ? (fConst0 * fTemp1212) : fRec294[1]);
			}
			if (iSlow302) {
				fTemp1213 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec294[0])))))));
				fTemp1214 = (1.0f - fTemp1213);
			}
			if (iSlow302 | iSlow288) {
				fTemp1215 = std::floor(fTemp1207);
				fTemp1216 = (fTemp1207 - fTemp1215);
				fVec47[0] = fTemp1216;
				iTemp1217 = (fTemp1216 < 0.5f);
				iVec48[0] = iTemp1217;
			}
			if (iSlow302) {
				iTemp1218 = ((iVec48[1] <= 0) & (iTemp1217 > 0));
				fRec299[0] = ((fRec299[1] * float((1 - iTemp1218))) + (4.65661287e-10f * (fTemp36 * float(iTemp1218))));
				fTemp1219 = (fTemp1213 + 1.0f);
				fRec298[0] = (0.0f - (((fTemp1214 * fRec298[1]) - (fRec299[0] + fRec299[1])) / fTemp1219));
				fRec297[0] = (0.0f - (((fTemp1214 * fRec297[1]) - (fRec298[0] + fRec298[1])) / fTemp1219));
				fRec296[0] = (0.0f - (((fTemp1214 * fRec296[1]) - (fRec297[0] + fRec297[1])) / fTemp1219));
				fRec295[0] = (0.0f - (((fTemp1214 * fRec295[1]) - (fRec296[0] + fRec296[1])) / fTemp1219));
				fRec293[0] = (0.0f - (((fRec293[1] * fTemp1214) - (fRec295[0] + fRec295[1])) / fTemp1219));
				fTemp1220 = (std::sin((6.28318548f * fTemp1207)) * ((fTemp1211 * (fRec293[0] + -1.0f)) + 1.0f));
				fTemp1221 = (std::max<float>(1.0f, fTemp1210) + -1.0f);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp1222 = std::fmod(std::fabs(fTemp1188), 1.0f);
				fTemp1223 = (1.0f - fTemp1222);
				fTemp1224 = (fTemp1189 + float((fTemp1188 > 0.0f)));
				fTemp1225 = (fTemp101 + (0.00390625f * (fTemp1187 * std::pow(2.0f, (0.0f - fTemp1224)))));
				iTemp1226 = int(fTemp1224);
				fTemp1227 = ((((fTemp1193 + fTemp1186) + fTemp1185) + fTemp1184) + std::fmod((256.0f * ((fTemp1225 - (fTemp115 + std::floor((fTemp1225 - fTemp115)))) * (((float((iTemp1226 < 0)) / float(int(std::pow(2.0f, float(std::abs(iTemp1226)))))) + float((iTemp1226 == 0))) + float(((iTemp1226 > 0) * int(std::pow(2.0f, float(iTemp1226)))))))), 1.0f));
			}
			if ((iSlow302 & iTemp76) | ((iSlow300 & iTemp76) | ((iSlow298 & iTemp76) | ((iSlow296 & iTemp76) | ((iSlow294 & iTemp76) | ((iSlow292 & iTemp76) | ((iSlow290 & iTemp76) | ((iSlow288 & iTemp76) | (iSlow286 & iTemp76))))))))) {
				fTemp1228 = (fRec300[1] + (fTemp769 * (fTemp1227 - fRec301[1])));
				fTemp1229 = (fTemp1228 / fTemp784);
				fRec300[0] = ((2.0f * fTemp1229) - fRec300[1]);
				fTemp1230 = (fRec301[1] + ((fTemp769 * fTemp1228) / fTemp784));
				fRec301[0] = ((2.0f * fTemp1230) - fRec301[1]);
				fRec302 = fTemp1230;
			}
			if ((iSlow302 & iTemp74) | ((iSlow300 & iTemp74) | ((iSlow298 & iTemp74) | ((iSlow296 & iTemp74) | ((iSlow294 & iTemp74) | ((iSlow292 & iTemp74) | ((iSlow290 & iTemp74) | ((iSlow288 & iTemp74) | (iSlow286 & iTemp74))))))))) {
				fTemp1231 = (fTemp769 * (fTemp1227 - fRec305[1]));
				fTemp1232 = ((fTemp769 * ((((fRec305[1] + ((fTemp1231 + (0.215215757f * (fTemp832 * fRec303[1]))) / fTemp791)) + (fTemp793 * fRec304[1])) / fTemp794) - fRec303[1])) / fTemp791);
				fRec303[0] = (fRec303[1] + (2.0f * fTemp1232));
				fTemp1233 = (fRec303[1] + fTemp1232);
				fRec304[0] = (fRec304[1] + (2.0f * ((fTemp769 * ((0.215215757f * (fTemp790 * fTemp1233)) - fRec304[1])) / fTemp791)));
				fRec305[0] = (fRec305[1] + (2.0f * (fTemp1231 / fTemp791)));
				fRec306 = fTemp1233;
			}
			if ((iSlow302 & iTemp72) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp72) | (iSlow286 & iTemp72))))))))) {
				fTemp1234 = (fTemp1227 - (fRec308[1] + (fTemp783 * fRec309[1])));
				fTemp1235 = ((fTemp769 * fTemp1234) / fTemp784);
				fTemp1236 = std::max<float>(-1.0f, std::min<float>(1.0f, (fRec309[1] + fTemp1235)));
				fTemp1237 = (1.0f - (0.333333343f * mydsp_faustpower2_f(fTemp1236)));
				fTemp1238 = ((fTemp769 * fTemp1236) * fTemp1237);
				fRec307 = (fRec308[1] + fTemp1238);
				fRec308[0] = (fRec308[1] + (2.0f * fTemp1238));
				fTemp1239 = (fTemp1236 * fTemp1237);
				fRec309[0] = (fTemp1235 + fTemp1239);
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fTemp1240 = (((fTemp766 * (((fTemp768 * fRec302) + (fTemp788 * fRec306)) + (fTemp798 * fRec307))) / fTemp805) + (fTemp806 * fTemp1227));
				fVec49[0] = fTemp1240;
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fTemp1241 = (fTemp1240 - fVec49[1]);
				fRec311[0] = ((std::fabs(fTemp1241) < 0.5f) ? (fConst0 * fTemp1241) : fRec311[1]);
			}
			if (iSlow302) {
				fTemp1242 = (1.0f / std::tan((fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec311[0])))))));
				fTemp1243 = (1.0f - fTemp1242);
			}
			if (iSlow302 | iSlow288) {
				fTemp1244 = std::floor(fTemp1240);
				fTemp1245 = (fTemp1240 - fTemp1244);
				fVec50[0] = fTemp1245;
				iTemp1246 = (fTemp1245 < 0.5f);
				iVec51[0] = iTemp1246;
			}
			if (iSlow302) {
				iTemp1247 = ((iVec51[1] <= 0) & (iTemp1246 > 0));
				fRec316[0] = ((fRec316[1] * float((1 - iTemp1247))) + (4.65661287e-10f * (fTemp36 * float(iTemp1247))));
				fTemp1248 = (fTemp1242 + 1.0f);
				fRec315[0] = (0.0f - (((fTemp1243 * fRec315[1]) - (fRec316[0] + fRec316[1])) / fTemp1248));
				fRec314[0] = (0.0f - (((fTemp1243 * fRec314[1]) - (fRec315[0] + fRec315[1])) / fTemp1248));
				fRec313[0] = (0.0f - (((fTemp1243 * fRec313[1]) - (fRec314[0] + fRec314[1])) / fTemp1248));
				fRec312[0] = (0.0f - (((fTemp1243 * fRec312[1]) - (fRec313[0] + fRec313[1])) / fTemp1248));
				fRec310[0] = (0.0f - (((fRec310[1] * fTemp1243) - (fRec312[0] + fRec312[1])) / fTemp1248));
				fTemp1249 = (std::sin((6.28318548f * fTemp1240)) * ((fTemp1211 * (fRec310[0] + -1.0f)) + 1.0f));
				fTemp1250 = (((fTemp1220 + (fTemp1221 * (fRec293[0] - fTemp1220))) * fTemp1223) + (fTemp1222 * (fTemp1249 + (fTemp1221 * (fRec310[0] - fTemp1249)))));
			}
			if (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | iSlow292)))) {
				fTemp1251 = (fTemp1209 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec294[0] - fConst7))))));
			}
			if (iSlow300 | (iSlow296 | (iSlow294 | iSlow292))) {
				fTemp1252 = (1.0f - fTemp1251);
			}
			if (iSlow300) {
				fTemp1253 = ((0.75f * fTemp1252) + (fTemp1207 + (0.5f * fTemp1251)));
				fTemp1254 = std::floor(fTemp1253);
			}
			if (iSlow300 | iSlow292) {
				fTemp1255 = (0.5f * fTemp1252);
			}
			if (iSlow300) {
				fTemp1256 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp1255));
				fTemp1257 = (0.5f - fTemp1256);
			}
			if (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | iSlow292)))) {
				fTemp1258 = (fTemp1209 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, (fConst6 * (fRec311[0] - fConst7))))));
			}
			if (iSlow300 | (iSlow296 | (iSlow294 | iSlow292))) {
				fTemp1259 = (1.0f - fTemp1258);
			}
			if (iSlow300) {
				fTemp1260 = ((0.75f * fTemp1259) + (fTemp1240 + (0.5f * fTemp1258)));
				fTemp1261 = std::floor(fTemp1260);
			}
			if (iSlow300 | iSlow292) {
				fTemp1262 = (0.5f * fTemp1259);
			}
			if (iSlow300) {
				fTemp1263 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTemp1262));
				fTemp1264 = (0.5f - fTemp1263);
				fTemp1265 = ((fTemp1223 * std::cos((6.28318548f * ((fTemp1253 + std::min<float>((((fTemp1253 - fTemp1254) * fTemp1257) / fTemp1256), ((fTemp1257 * (fTemp1254 + (1.0f - fTemp1253))) / (1.0f - fTemp1256)))) - fTemp1254)))) + (fTemp1222 * std::cos((6.28318548f * ((fTemp1260 + std::min<float>((((fTemp1260 - fTemp1261) * fTemp1264) / fTemp1263), ((fTemp1264 * (fTemp1261 + (1.0f - fTemp1260))) / (1.0f - fTemp1263)))) - fTemp1261)))));
			}
			if (iSlow298) {
				fTemp1266 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp1251));
				fTemp1267 = (1.0f - fTemp1266);
				fTemp1268 = (0.25f * fTemp1267);
				fTemp1269 = (fTemp1207 - (fTemp1268 + std::floor((fTemp1207 - fTemp1268))));
				fTemp1270 = (2.0f * fTemp1269);
				fTemp1271 = std::floor((fTemp1270 + 1.0f));
				fTemp1272 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTemp1258));
				fTemp1273 = (1.0f - fTemp1272);
				fTemp1274 = (0.25f * fTemp1273);
				fTemp1275 = (fTemp1240 - (fTemp1274 + std::floor((fTemp1240 - fTemp1274))));
				fTemp1276 = (2.0f * fTemp1275);
				fTemp1277 = std::floor((fTemp1276 + 1.0f));
				fTemp1278 = ((fTemp1223 * std::cos((3.14159274f * ((float((fTemp1269 >= 0.5f)) + fTemp1270) + (1.0f - (fTemp1271 + std::min<float>((fTemp1270 + (1.0f - fTemp1271)), ((fTemp1266 * (fTemp1271 - fTemp1270)) / fTemp1267)))))))) + (fTemp1222 * std::cos((3.14159274f * ((float((fTemp1275 >= 0.5f)) + fTemp1276) + (1.0f - (fTemp1277 + std::min<float>((fTemp1276 + (1.0f - fTemp1277)), ((fTemp1272 * (fTemp1277 - fTemp1276)) / fTemp1273)))))))));
			}
			if (iSlow296) {
				fTemp1279 = (0.25f * fTemp1252);
				fTemp1280 = (fTemp1279 + std::floor((fTemp1207 - fTemp1279)));
			}
			if (iSlow296 | (iSlow294 | (iSlow290 | iSlow286))) {
				fTemp1281 = (1.0f - fTemp1207);
			}
			if (iSlow296) {
				fTemp1282 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp1251));
				fTemp1283 = (0.25f * fTemp1259);
				fTemp1284 = (fTemp1283 + std::floor((fTemp1240 - fTemp1283)));
			}
			if (iSlow296 | (iSlow294 | (iSlow290 | iSlow286))) {
				fTemp1285 = (1.0f - fTemp1240);
			}
			if (iSlow296) {
				fTemp1286 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTemp1258));
				fTemp1287 = ((fTemp1223 * std::cos((6.28318548f * (fTemp1207 - (fTemp1280 + std::min<float>((fTemp1207 - fTemp1280), (((fTemp1280 + fTemp1281) * fTemp1282) / (1.0f - fTemp1282)))))))) + (fTemp1222 * std::cos((6.28318548f * (fTemp1240 - (fTemp1284 + std::min<float>((fTemp1240 - fTemp1284), (((fTemp1284 + fTemp1285) * fTemp1286) / (1.0f - fTemp1286)))))))));
			}
			if (iSlow294) {
				fTemp1288 = ((0.125f * fTemp1252) + (0.25f * fTemp1251));
				fTemp1289 = (fTemp1288 + std::floor((fTemp1207 - fTemp1288)));
				fTemp1290 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp1251));
				fTemp1291 = (0.49000001f * fTemp1290);
				fTemp1292 = ((0.125f * fTemp1259) + (0.25f * fTemp1258));
				fTemp1293 = (fTemp1292 + std::floor((fTemp1240 - fTemp1292)));
				fTemp1294 = std::min<float>(1.0f, std::max<float>(0.0f, fTemp1258));
				fTemp1295 = (0.49000001f * fTemp1294);
				fTemp1296 = ((fTemp1223 * std::cos((12.566371f * ((fTemp1207 + std::min<float>((0.49000001f * (((fTemp1207 - fTemp1289) * fTemp1290) / (0.5f - fTemp1291))), (0.49000001f * ((fTemp1290 * (fTemp1289 + fTemp1281)) / (fTemp1291 + 0.5f))))) - fTemp1289)))) + (fTemp1222 * std::cos((12.566371f * ((fTemp1240 + std::min<float>((0.49000001f * (((fTemp1240 - fTemp1293) * fTemp1294) / (0.5f - fTemp1295))), (0.49000001f * ((fTemp1294 * (fTemp1293 + fTemp1285)) / (fTemp1295 + 0.5f))))) - fTemp1293)))));
			}
			if (iSlow292) {
				fTemp1297 = std::min<float>(0.975000024f, fTemp1251);
				fTemp1298 = (0.25f * (1.0f - fTemp1297));
				fTemp1299 = (fTemp1298 + (0.5f * fTemp1297));
				fTemp1300 = std::floor((fTemp1207 - fTemp1299));
				fTemp1301 = (fTemp1207 - (fTemp1299 + fTemp1300));
				fTemp1302 = std::min<float>(0.975000024f, fTemp1258);
				fTemp1303 = (0.25f * (1.0f - fTemp1302));
				fTemp1304 = (fTemp1303 + (0.5f * fTemp1302));
				fTemp1305 = std::floor((fTemp1240 - fTemp1304));
				fTemp1306 = (fTemp1240 - (fTemp1304 + fTemp1305));
				fTemp1307 = ((fTemp1223 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp1301 < 0.5f) ? fTemp1301 : (0.5f * (((fTemp1207 - ((fTemp1298 + fTemp1300) + (0.5f * (fTemp1297 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp1255))) + 1.0f))))))) + (fTemp1222 * std::cos((6.28318548f * std::min<float>(1.0f, ((fTemp1306 < 0.5f) ? fTemp1306 : (0.5f * (((fTemp1240 - ((fTemp1303 + fTemp1305) + (0.5f * (fTemp1302 + 1.0f)))) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTemp1262))) + 1.0f))))))));
			}
			if (iSlow290 | iSlow286) {
				fTemp1308 = (fTemp1207 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec294[0] * fSlow881) * fTemp1208))) / fRec294[0])));
				fTemp1309 = (fTemp1240 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec311[0] * fSlow881) * fTemp1208))) / fRec311[0])));
			}
			if (iSlow290) {
				fTemp1310 = ((fTemp1223 * (((0.0f - fTemp1281) * (1.0f - std::cos((6.28318548f * (fTemp1308 + (1.0f - std::floor((fTemp1308 + 1.0f)))))))) + 1.0f)) + (fTemp1222 * (((0.0f - fTemp1285) * (1.0f - std::cos((6.28318548f * (fTemp1309 + (1.0f - std::floor((fTemp1309 + 1.0f)))))))) + 1.0f)));
			}
			if (iSlow288) {
				fTemp1311 = (fTemp1207 - (fTemp1215 + fVec47[1]));
				fRec317[0] = ((std::fabs(fTemp1311) < 0.5f) ? (fConst0 * fTemp1311) : fRec317[1]);
				fTemp1312 = (fTemp1216 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec317[0] * fSlow881) * fTemp1208))) / fRec317[0])));
				fTemp1313 = (fTemp1240 - (fTemp1244 + fVec50[1]));
				fRec318[0] = ((std::fabs(fTemp1313) < 0.5f) ? (fConst0 * fTemp1313) : fRec318[1]);
				fTemp1314 = (fTemp1245 * std::max<float>(1.0f, (std::min<float>(fConst8, std::max<float>(0.0f, ((fRec318[0] * fSlow881) * fTemp1208))) / fRec318[0])));
				fTemp1315 = ((fTemp1223 * (((iTemp1217 ? (2.0f * fTemp1216) : (2.0f * (1.0f - fTemp1216))) * (std::cos((6.28318548f * (fTemp1312 + (1.0f - std::floor((fTemp1312 + 1.0f)))))) + 1.0f)) + -1.0f)) + (fTemp1222 * (((iTemp1246 ? (2.0f * fTemp1245) : (2.0f * (1.0f - fTemp1245))) * (std::cos((6.28318548f * (fTemp1314 + (1.0f - std::floor((fTemp1314 + 1.0f)))))) + 1.0f)) + -1.0f)));
			}
			if (iSlow286) {
				fTemp1316 = (((fTemp1223 * std::min<float>(1.0f, (2.0f * fTemp1281))) * std::sin((6.28318548f * (fTemp1308 - std::floor(fTemp1308))))) + ((fTemp1222 * std::min<float>(1.0f, (2.0f * fTemp1285))) * std::sin((6.28318548f * (fTemp1309 - std::floor(fTemp1309))))));
			}
			fRec174[0] = (((((((((fSlow301 * fTemp1250) + (fSlow299 * fTemp1265)) + (fSlow297 * fTemp1278)) + (fSlow295 * fTemp1287)) + (fSlow293 * fTemp1296)) + (fSlow291 * fTemp1307)) + (fSlow289 * fTemp1310)) + (fSlow287 * fTemp1315)) + (fSlow285 * fTemp1316));
			float fTemp1317 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp751 - fTemp752)) + (fTemp39 * (fTemp753 - fTemp754)))));
			float fTemp1318 = (1.0f - fTemp1317);
			float fTemp1319 = std::min<float>(1.0f, std::max<float>(0.0f, ((fTemp40 * (fTemp757 - fTemp758)) + (fTemp39 * (fTemp759 - fTemp760)))));
			output1[i] = FAUSTFLOAT((fHbargraph0 * ((((fRec171[0] * fTemp1318) + (fRec172[0] * fTemp1317)) * (1.0f - fTemp1319)) + (fTemp1319 * ((fRec173[0] * fTemp1318) + (fRec174[0] * fTemp1317))))));
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
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | (iSlow344 | (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | (iSlow326 | (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | (iSlow306 | (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286))))))))))))))))))))))))))))))))))) {
				fRec27[1] = fRec27[0];
				fRec28[1] = fRec28[0];
				iVec3[1] = iVec3[0];
				fRec26[1] = fRec26[0];
				fRec29[1] = fRec29[0];
			}
			if ((iSlow14 & iTemp69) | ((iSlow358 & iTemp69) | ((iSlow356 & iTemp69) | ((iSlow354 & iTemp69) | ((iSlow352 & iTemp69) | ((iSlow350 & iTemp69) | ((iSlow348 & iTemp69) | ((iSlow346 & iTemp69) | (iSlow344 & iTemp69))))))))) {
				fRec23[1] = fRec23[0];
				fRec24[1] = fRec24[0];
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | (iSlow344 & iTemp78))))))))) {
				fRec30[1] = fRec30[0];
				fRec31[1] = fRec31[0];
				fRec32[1] = fRec32[0];
			}
			if ((iSlow14 & iTemp77) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp77) | (iSlow344 & iTemp77))))))))) {
				fRec35[1] = fRec35[0];
				fRec36[1] = fRec36[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fVec4[1] = fVec4[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fRec38[1] = fRec38[0];
			}
			if (iSlow14 | iSlow346) {
				fVec5[1] = fVec5[0];
				iVec6[1] = iVec6[0];
			}
			if (iSlow14) {
				fRec43[1] = fRec43[0];
				fRec42[1] = fRec42[0];
				fRec41[1] = fRec41[0];
				fRec40[1] = fRec40[0];
				fRec39[1] = fRec39[0];
				fRec37[1] = fRec37[0];
			}
			if ((iSlow14 & iTemp69) | ((iSlow358 & iTemp69) | ((iSlow356 & iTemp69) | ((iSlow354 & iTemp69) | ((iSlow352 & iTemp69) | ((iSlow350 & iTemp69) | ((iSlow348 & iTemp69) | ((iSlow346 & iTemp69) | (iSlow344 & iTemp69))))))))) {
				fRec44[1] = fRec44[0];
				fRec45[1] = fRec45[0];
			}
			if ((iSlow14 & iTemp78) | ((iSlow358 & iTemp78) | ((iSlow356 & iTemp78) | ((iSlow354 & iTemp78) | ((iSlow352 & iTemp78) | ((iSlow350 & iTemp78) | ((iSlow348 & iTemp78) | ((iSlow346 & iTemp78) | (iSlow344 & iTemp78))))))))) {
				fRec47[1] = fRec47[0];
				fRec48[1] = fRec48[0];
				fRec49[1] = fRec49[0];
			}
			if ((iSlow14 & iTemp77) | ((iSlow358 & iTemp77) | ((iSlow356 & iTemp77) | ((iSlow354 & iTemp77) | ((iSlow352 & iTemp77) | ((iSlow350 & iTemp77) | ((iSlow348 & iTemp77) | ((iSlow346 & iTemp77) | (iSlow344 & iTemp77))))))))) {
				fRec52[1] = fRec52[0];
				fRec53[1] = fRec53[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fVec7[1] = fVec7[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fRec55[1] = fRec55[0];
			}
			if (iSlow14 | iSlow346) {
				fVec8[1] = fVec8[0];
				iVec9[1] = iVec9[0];
			}
			if (iSlow14) {
				fRec60[1] = fRec60[0];
				fRec59[1] = fRec59[0];
				fRec58[1] = fRec58[0];
				fRec57[1] = fRec57[0];
				fRec56[1] = fRec56[0];
				fRec54[1] = fRec54[0];
			}
			if (iSlow346) {
				fRec61[1] = fRec61[0];
				fRec62[1] = fRec62[0];
			}
			fRec2[1] = fRec2[0];
			if ((iSlow342 & iTemp69) | ((iSlow340 & iTemp69) | ((iSlow338 & iTemp69) | ((iSlow336 & iTemp69) | ((iSlow334 & iTemp69) | ((iSlow332 & iTemp69) | ((iSlow330 & iTemp69) | ((iSlow328 & iTemp69) | (iSlow326 & iTemp69))))))))) {
				fRec63[1] = fRec63[0];
				fRec64[1] = fRec64[0];
			}
			if ((iSlow342 & iTemp78) | ((iSlow340 & iTemp78) | ((iSlow338 & iTemp78) | ((iSlow336 & iTemp78) | ((iSlow334 & iTemp78) | ((iSlow332 & iTemp78) | ((iSlow330 & iTemp78) | ((iSlow328 & iTemp78) | (iSlow326 & iTemp78))))))))) {
				fRec66[1] = fRec66[0];
				fRec67[1] = fRec67[0];
				fRec68[1] = fRec68[0];
			}
			if ((iSlow342 & iTemp77) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp77) | (iSlow326 & iTemp77))))))))) {
				fRec71[1] = fRec71[0];
				fRec72[1] = fRec72[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fVec10[1] = fVec10[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fRec74[1] = fRec74[0];
			}
			if (iSlow342 | iSlow328) {
				fVec11[1] = fVec11[0];
				iVec12[1] = iVec12[0];
			}
			if (iSlow342) {
				fRec79[1] = fRec79[0];
				fRec78[1] = fRec78[0];
				fRec77[1] = fRec77[0];
				fRec76[1] = fRec76[0];
				fRec75[1] = fRec75[0];
				fRec73[1] = fRec73[0];
			}
			if ((iSlow342 & iTemp69) | ((iSlow340 & iTemp69) | ((iSlow338 & iTemp69) | ((iSlow336 & iTemp69) | ((iSlow334 & iTemp69) | ((iSlow332 & iTemp69) | ((iSlow330 & iTemp69) | ((iSlow328 & iTemp69) | (iSlow326 & iTemp69))))))))) {
				fRec80[1] = fRec80[0];
				fRec81[1] = fRec81[0];
			}
			if ((iSlow342 & iTemp78) | ((iSlow340 & iTemp78) | ((iSlow338 & iTemp78) | ((iSlow336 & iTemp78) | ((iSlow334 & iTemp78) | ((iSlow332 & iTemp78) | ((iSlow330 & iTemp78) | ((iSlow328 & iTemp78) | (iSlow326 & iTemp78))))))))) {
				fRec83[1] = fRec83[0];
				fRec84[1] = fRec84[0];
				fRec85[1] = fRec85[0];
			}
			if ((iSlow342 & iTemp77) | ((iSlow340 & iTemp77) | ((iSlow338 & iTemp77) | ((iSlow336 & iTemp77) | ((iSlow334 & iTemp77) | ((iSlow332 & iTemp77) | ((iSlow330 & iTemp77) | ((iSlow328 & iTemp77) | (iSlow326 & iTemp77))))))))) {
				fRec88[1] = fRec88[0];
				fRec89[1] = fRec89[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fVec13[1] = fVec13[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fRec91[1] = fRec91[0];
			}
			if (iSlow342 | iSlow328) {
				fVec14[1] = fVec14[0];
				iVec15[1] = iVec15[0];
			}
			if (iSlow342) {
				fRec96[1] = fRec96[0];
				fRec95[1] = fRec95[0];
				fRec94[1] = fRec94[0];
				fRec93[1] = fRec93[0];
				fRec92[1] = fRec92[0];
				fRec90[1] = fRec90[0];
			}
			if (iSlow328) {
				fRec97[1] = fRec97[0];
				fRec98[1] = fRec98[0];
			}
			fRec3[1] = fRec3[0];
			if ((iSlow322 & iTemp69) | ((iSlow320 & iTemp69) | ((iSlow318 & iTemp69) | ((iSlow316 & iTemp69) | ((iSlow314 & iTemp69) | ((iSlow312 & iTemp69) | ((iSlow310 & iTemp69) | ((iSlow308 & iTemp69) | (iSlow306 & iTemp69))))))))) {
				fRec99[1] = fRec99[0];
				fRec100[1] = fRec100[0];
			}
			if ((iSlow322 & iTemp78) | ((iSlow320 & iTemp78) | ((iSlow318 & iTemp78) | ((iSlow316 & iTemp78) | ((iSlow314 & iTemp78) | ((iSlow312 & iTemp78) | ((iSlow310 & iTemp78) | ((iSlow308 & iTemp78) | (iSlow306 & iTemp78))))))))) {
				fRec102[1] = fRec102[0];
				fRec103[1] = fRec103[0];
				fRec104[1] = fRec104[0];
			}
			if ((iSlow322 & iTemp77) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp77) | (iSlow306 & iTemp77))))))))) {
				fRec107[1] = fRec107[0];
				fRec108[1] = fRec108[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fVec16[1] = fVec16[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fRec110[1] = fRec110[0];
			}
			if (iSlow322 | iSlow308) {
				fVec17[1] = fVec17[0];
				iVec18[1] = iVec18[0];
			}
			if (iSlow322) {
				fRec115[1] = fRec115[0];
				fRec114[1] = fRec114[0];
				fRec113[1] = fRec113[0];
				fRec112[1] = fRec112[0];
				fRec111[1] = fRec111[0];
				fRec109[1] = fRec109[0];
			}
			if ((iSlow322 & iTemp69) | ((iSlow320 & iTemp69) | ((iSlow318 & iTemp69) | ((iSlow316 & iTemp69) | ((iSlow314 & iTemp69) | ((iSlow312 & iTemp69) | ((iSlow310 & iTemp69) | ((iSlow308 & iTemp69) | (iSlow306 & iTemp69))))))))) {
				fRec116[1] = fRec116[0];
				fRec117[1] = fRec117[0];
			}
			if ((iSlow322 & iTemp78) | ((iSlow320 & iTemp78) | ((iSlow318 & iTemp78) | ((iSlow316 & iTemp78) | ((iSlow314 & iTemp78) | ((iSlow312 & iTemp78) | ((iSlow310 & iTemp78) | ((iSlow308 & iTemp78) | (iSlow306 & iTemp78))))))))) {
				fRec119[1] = fRec119[0];
				fRec120[1] = fRec120[0];
				fRec121[1] = fRec121[0];
			}
			if ((iSlow322 & iTemp77) | ((iSlow320 & iTemp77) | ((iSlow318 & iTemp77) | ((iSlow316 & iTemp77) | ((iSlow314 & iTemp77) | ((iSlow312 & iTemp77) | ((iSlow310 & iTemp77) | ((iSlow308 & iTemp77) | (iSlow306 & iTemp77))))))))) {
				fRec124[1] = fRec124[0];
				fRec125[1] = fRec125[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fVec19[1] = fVec19[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fRec127[1] = fRec127[0];
			}
			if (iSlow322 | iSlow308) {
				fVec20[1] = fVec20[0];
				iVec21[1] = iVec21[0];
			}
			if (iSlow322) {
				fRec132[1] = fRec132[0];
				fRec131[1] = fRec131[0];
				fRec130[1] = fRec130[0];
				fRec129[1] = fRec129[0];
				fRec128[1] = fRec128[0];
				fRec126[1] = fRec126[0];
			}
			if (iSlow308) {
				fRec133[1] = fRec133[0];
				fRec134[1] = fRec134[0];
			}
			fRec4[1] = fRec4[0];
			if ((iSlow302 & iTemp69) | ((iSlow300 & iTemp69) | ((iSlow298 & iTemp69) | ((iSlow296 & iTemp69) | ((iSlow294 & iTemp69) | ((iSlow292 & iTemp69) | ((iSlow290 & iTemp69) | ((iSlow288 & iTemp69) | (iSlow286 & iTemp69))))))))) {
				fRec135[1] = fRec135[0];
				fRec136[1] = fRec136[0];
			}
			if ((iSlow302 & iTemp78) | ((iSlow300 & iTemp78) | ((iSlow298 & iTemp78) | ((iSlow296 & iTemp78) | ((iSlow294 & iTemp78) | ((iSlow292 & iTemp78) | ((iSlow290 & iTemp78) | ((iSlow288 & iTemp78) | (iSlow286 & iTemp78))))))))) {
				fRec138[1] = fRec138[0];
				fRec139[1] = fRec139[0];
				fRec140[1] = fRec140[0];
			}
			if ((iSlow302 & iTemp77) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp77) | (iSlow286 & iTemp77))))))))) {
				fRec143[1] = fRec143[0];
				fRec144[1] = fRec144[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fVec22[1] = fVec22[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fRec146[1] = fRec146[0];
			}
			if (iSlow302 | iSlow288) {
				fVec23[1] = fVec23[0];
				iVec24[1] = iVec24[0];
			}
			if (iSlow302) {
				fRec151[1] = fRec151[0];
				fRec150[1] = fRec150[0];
				fRec149[1] = fRec149[0];
				fRec148[1] = fRec148[0];
				fRec147[1] = fRec147[0];
				fRec145[1] = fRec145[0];
			}
			if ((iSlow302 & iTemp69) | ((iSlow300 & iTemp69) | ((iSlow298 & iTemp69) | ((iSlow296 & iTemp69) | ((iSlow294 & iTemp69) | ((iSlow292 & iTemp69) | ((iSlow290 & iTemp69) | ((iSlow288 & iTemp69) | (iSlow286 & iTemp69))))))))) {
				fRec152[1] = fRec152[0];
				fRec153[1] = fRec153[0];
			}
			if ((iSlow302 & iTemp78) | ((iSlow300 & iTemp78) | ((iSlow298 & iTemp78) | ((iSlow296 & iTemp78) | ((iSlow294 & iTemp78) | ((iSlow292 & iTemp78) | ((iSlow290 & iTemp78) | ((iSlow288 & iTemp78) | (iSlow286 & iTemp78))))))))) {
				fRec155[1] = fRec155[0];
				fRec156[1] = fRec156[0];
				fRec157[1] = fRec157[0];
			}
			if ((iSlow302 & iTemp77) | ((iSlow300 & iTemp77) | ((iSlow298 & iTemp77) | ((iSlow296 & iTemp77) | ((iSlow294 & iTemp77) | ((iSlow292 & iTemp77) | ((iSlow290 & iTemp77) | ((iSlow288 & iTemp77) | (iSlow286 & iTemp77))))))))) {
				fRec160[1] = fRec160[0];
				fRec161[1] = fRec161[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fVec25[1] = fVec25[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fRec163[1] = fRec163[0];
			}
			if (iSlow302 | iSlow288) {
				fVec26[1] = fVec26[0];
				iVec27[1] = iVec27[0];
			}
			if (iSlow302) {
				fRec168[1] = fRec168[0];
				fRec167[1] = fRec167[0];
				fRec166[1] = fRec166[0];
				fRec165[1] = fRec165[0];
				fRec164[1] = fRec164[0];
				fRec162[1] = fRec162[0];
			}
			if (iSlow288) {
				fRec169[1] = fRec169[0];
				fRec170[1] = fRec170[0];
			}
			fRec5[1] = fRec5[0];
			if ((iSlow14 & iTemp76) | ((iSlow358 & iTemp76) | ((iSlow356 & iTemp76) | ((iSlow354 & iTemp76) | ((iSlow352 & iTemp76) | ((iSlow350 & iTemp76) | ((iSlow348 & iTemp76) | ((iSlow346 & iTemp76) | (iSlow344 & iTemp76))))))))) {
				fRec175[1] = fRec175[0];
				fRec176[1] = fRec176[0];
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | (iSlow344 & iTemp74))))))))) {
				fRec178[1] = fRec178[0];
				fRec179[1] = fRec179[0];
				fRec180[1] = fRec180[0];
			}
			if ((iSlow14 & iTemp72) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp72) | (iSlow344 & iTemp72))))))))) {
				fRec183[1] = fRec183[0];
				fRec184[1] = fRec184[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fVec28[1] = fVec28[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fRec186[1] = fRec186[0];
			}
			if (iSlow14 | iSlow346) {
				fVec29[1] = fVec29[0];
				iVec30[1] = iVec30[0];
			}
			if (iSlow14) {
				fRec191[1] = fRec191[0];
				fRec190[1] = fRec190[0];
				fRec189[1] = fRec189[0];
				fRec188[1] = fRec188[0];
				fRec187[1] = fRec187[0];
				fRec185[1] = fRec185[0];
			}
			if ((iSlow14 & iTemp76) | ((iSlow358 & iTemp76) | ((iSlow356 & iTemp76) | ((iSlow354 & iTemp76) | ((iSlow352 & iTemp76) | ((iSlow350 & iTemp76) | ((iSlow348 & iTemp76) | ((iSlow346 & iTemp76) | (iSlow344 & iTemp76))))))))) {
				fRec192[1] = fRec192[0];
				fRec193[1] = fRec193[0];
			}
			if ((iSlow14 & iTemp74) | ((iSlow358 & iTemp74) | ((iSlow356 & iTemp74) | ((iSlow354 & iTemp74) | ((iSlow352 & iTemp74) | ((iSlow350 & iTemp74) | ((iSlow348 & iTemp74) | ((iSlow346 & iTemp74) | (iSlow344 & iTemp74))))))))) {
				fRec195[1] = fRec195[0];
				fRec196[1] = fRec196[0];
				fRec197[1] = fRec197[0];
			}
			if ((iSlow14 & iTemp72) | ((iSlow358 & iTemp72) | ((iSlow356 & iTemp72) | ((iSlow354 & iTemp72) | ((iSlow352 & iTemp72) | ((iSlow350 & iTemp72) | ((iSlow348 & iTemp72) | ((iSlow346 & iTemp72) | (iSlow344 & iTemp72))))))))) {
				fRec200[1] = fRec200[0];
				fRec201[1] = fRec201[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | (iSlow346 | iSlow344)))))))) {
				fVec31[1] = fVec31[0];
			}
			if (iSlow14 | (iSlow358 | (iSlow356 | (iSlow354 | (iSlow352 | (iSlow350 | (iSlow348 | iSlow344))))))) {
				fRec203[1] = fRec203[0];
			}
			if (iSlow14 | iSlow346) {
				fVec32[1] = fVec32[0];
				iVec33[1] = iVec33[0];
			}
			if (iSlow14) {
				fRec208[1] = fRec208[0];
				fRec207[1] = fRec207[0];
				fRec206[1] = fRec206[0];
				fRec205[1] = fRec205[0];
				fRec204[1] = fRec204[0];
				fRec202[1] = fRec202[0];
			}
			if (iSlow346) {
				fRec209[1] = fRec209[0];
				fRec210[1] = fRec210[0];
			}
			fRec171[1] = fRec171[0];
			if ((iSlow342 & iTemp76) | ((iSlow340 & iTemp76) | ((iSlow338 & iTemp76) | ((iSlow336 & iTemp76) | ((iSlow334 & iTemp76) | ((iSlow332 & iTemp76) | ((iSlow330 & iTemp76) | ((iSlow328 & iTemp76) | (iSlow326 & iTemp76))))))))) {
				fRec211[1] = fRec211[0];
				fRec212[1] = fRec212[0];
			}
			if ((iSlow342 & iTemp74) | ((iSlow340 & iTemp74) | ((iSlow338 & iTemp74) | ((iSlow336 & iTemp74) | ((iSlow334 & iTemp74) | ((iSlow332 & iTemp74) | ((iSlow330 & iTemp74) | ((iSlow328 & iTemp74) | (iSlow326 & iTemp74))))))))) {
				fRec214[1] = fRec214[0];
				fRec215[1] = fRec215[0];
				fRec216[1] = fRec216[0];
			}
			if ((iSlow342 & iTemp72) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp72) | (iSlow326 & iTemp72))))))))) {
				fRec219[1] = fRec219[0];
				fRec220[1] = fRec220[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fVec34[1] = fVec34[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fRec222[1] = fRec222[0];
			}
			if (iSlow342 | iSlow328) {
				fVec35[1] = fVec35[0];
				iVec36[1] = iVec36[0];
			}
			if (iSlow342) {
				fRec227[1] = fRec227[0];
				fRec226[1] = fRec226[0];
				fRec225[1] = fRec225[0];
				fRec224[1] = fRec224[0];
				fRec223[1] = fRec223[0];
				fRec221[1] = fRec221[0];
			}
			if ((iSlow342 & iTemp76) | ((iSlow340 & iTemp76) | ((iSlow338 & iTemp76) | ((iSlow336 & iTemp76) | ((iSlow334 & iTemp76) | ((iSlow332 & iTemp76) | ((iSlow330 & iTemp76) | ((iSlow328 & iTemp76) | (iSlow326 & iTemp76))))))))) {
				fRec228[1] = fRec228[0];
				fRec229[1] = fRec229[0];
			}
			if ((iSlow342 & iTemp74) | ((iSlow340 & iTemp74) | ((iSlow338 & iTemp74) | ((iSlow336 & iTemp74) | ((iSlow334 & iTemp74) | ((iSlow332 & iTemp74) | ((iSlow330 & iTemp74) | ((iSlow328 & iTemp74) | (iSlow326 & iTemp74))))))))) {
				fRec231[1] = fRec231[0];
				fRec232[1] = fRec232[0];
				fRec233[1] = fRec233[0];
			}
			if ((iSlow342 & iTemp72) | ((iSlow340 & iTemp72) | ((iSlow338 & iTemp72) | ((iSlow336 & iTemp72) | ((iSlow334 & iTemp72) | ((iSlow332 & iTemp72) | ((iSlow330 & iTemp72) | ((iSlow328 & iTemp72) | (iSlow326 & iTemp72))))))))) {
				fRec236[1] = fRec236[0];
				fRec237[1] = fRec237[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | (iSlow328 | iSlow326)))))))) {
				fVec37[1] = fVec37[0];
			}
			if (iSlow342 | (iSlow340 | (iSlow338 | (iSlow336 | (iSlow334 | (iSlow332 | (iSlow330 | iSlow326))))))) {
				fRec239[1] = fRec239[0];
			}
			if (iSlow342 | iSlow328) {
				fVec38[1] = fVec38[0];
				iVec39[1] = iVec39[0];
			}
			if (iSlow342) {
				fRec244[1] = fRec244[0];
				fRec243[1] = fRec243[0];
				fRec242[1] = fRec242[0];
				fRec241[1] = fRec241[0];
				fRec240[1] = fRec240[0];
				fRec238[1] = fRec238[0];
			}
			if (iSlow328) {
				fRec245[1] = fRec245[0];
				fRec246[1] = fRec246[0];
			}
			fRec172[1] = fRec172[0];
			if ((iSlow322 & iTemp76) | ((iSlow320 & iTemp76) | ((iSlow318 & iTemp76) | ((iSlow316 & iTemp76) | ((iSlow314 & iTemp76) | ((iSlow312 & iTemp76) | ((iSlow310 & iTemp76) | ((iSlow308 & iTemp76) | (iSlow306 & iTemp76))))))))) {
				fRec247[1] = fRec247[0];
				fRec248[1] = fRec248[0];
			}
			if ((iSlow322 & iTemp74) | ((iSlow320 & iTemp74) | ((iSlow318 & iTemp74) | ((iSlow316 & iTemp74) | ((iSlow314 & iTemp74) | ((iSlow312 & iTemp74) | ((iSlow310 & iTemp74) | ((iSlow308 & iTemp74) | (iSlow306 & iTemp74))))))))) {
				fRec250[1] = fRec250[0];
				fRec251[1] = fRec251[0];
				fRec252[1] = fRec252[0];
			}
			if ((iSlow322 & iTemp72) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp72) | (iSlow306 & iTemp72))))))))) {
				fRec255[1] = fRec255[0];
				fRec256[1] = fRec256[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fVec40[1] = fVec40[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fRec258[1] = fRec258[0];
			}
			if (iSlow322 | iSlow308) {
				fVec41[1] = fVec41[0];
				iVec42[1] = iVec42[0];
			}
			if (iSlow322) {
				fRec263[1] = fRec263[0];
				fRec262[1] = fRec262[0];
				fRec261[1] = fRec261[0];
				fRec260[1] = fRec260[0];
				fRec259[1] = fRec259[0];
				fRec257[1] = fRec257[0];
			}
			if ((iSlow322 & iTemp76) | ((iSlow320 & iTemp76) | ((iSlow318 & iTemp76) | ((iSlow316 & iTemp76) | ((iSlow314 & iTemp76) | ((iSlow312 & iTemp76) | ((iSlow310 & iTemp76) | ((iSlow308 & iTemp76) | (iSlow306 & iTemp76))))))))) {
				fRec264[1] = fRec264[0];
				fRec265[1] = fRec265[0];
			}
			if ((iSlow322 & iTemp74) | ((iSlow320 & iTemp74) | ((iSlow318 & iTemp74) | ((iSlow316 & iTemp74) | ((iSlow314 & iTemp74) | ((iSlow312 & iTemp74) | ((iSlow310 & iTemp74) | ((iSlow308 & iTemp74) | (iSlow306 & iTemp74))))))))) {
				fRec267[1] = fRec267[0];
				fRec268[1] = fRec268[0];
				fRec269[1] = fRec269[0];
			}
			if ((iSlow322 & iTemp72) | ((iSlow320 & iTemp72) | ((iSlow318 & iTemp72) | ((iSlow316 & iTemp72) | ((iSlow314 & iTemp72) | ((iSlow312 & iTemp72) | ((iSlow310 & iTemp72) | ((iSlow308 & iTemp72) | (iSlow306 & iTemp72))))))))) {
				fRec272[1] = fRec272[0];
				fRec273[1] = fRec273[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | (iSlow308 | iSlow306)))))))) {
				fVec43[1] = fVec43[0];
			}
			if (iSlow322 | (iSlow320 | (iSlow318 | (iSlow316 | (iSlow314 | (iSlow312 | (iSlow310 | iSlow306))))))) {
				fRec275[1] = fRec275[0];
			}
			if (iSlow322 | iSlow308) {
				fVec44[1] = fVec44[0];
				iVec45[1] = iVec45[0];
			}
			if (iSlow322) {
				fRec280[1] = fRec280[0];
				fRec279[1] = fRec279[0];
				fRec278[1] = fRec278[0];
				fRec277[1] = fRec277[0];
				fRec276[1] = fRec276[0];
				fRec274[1] = fRec274[0];
			}
			if (iSlow308) {
				fRec281[1] = fRec281[0];
				fRec282[1] = fRec282[0];
			}
			fRec173[1] = fRec173[0];
			if ((iSlow302 & iTemp76) | ((iSlow300 & iTemp76) | ((iSlow298 & iTemp76) | ((iSlow296 & iTemp76) | ((iSlow294 & iTemp76) | ((iSlow292 & iTemp76) | ((iSlow290 & iTemp76) | ((iSlow288 & iTemp76) | (iSlow286 & iTemp76))))))))) {
				fRec283[1] = fRec283[0];
				fRec284[1] = fRec284[0];
			}
			if ((iSlow302 & iTemp74) | ((iSlow300 & iTemp74) | ((iSlow298 & iTemp74) | ((iSlow296 & iTemp74) | ((iSlow294 & iTemp74) | ((iSlow292 & iTemp74) | ((iSlow290 & iTemp74) | ((iSlow288 & iTemp74) | (iSlow286 & iTemp74))))))))) {
				fRec286[1] = fRec286[0];
				fRec287[1] = fRec287[0];
				fRec288[1] = fRec288[0];
			}
			if ((iSlow302 & iTemp72) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp72) | (iSlow286 & iTemp72))))))))) {
				fRec291[1] = fRec291[0];
				fRec292[1] = fRec292[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fVec46[1] = fVec46[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fRec294[1] = fRec294[0];
			}
			if (iSlow302 | iSlow288) {
				fVec47[1] = fVec47[0];
				iVec48[1] = iVec48[0];
			}
			if (iSlow302) {
				fRec299[1] = fRec299[0];
				fRec298[1] = fRec298[0];
				fRec297[1] = fRec297[0];
				fRec296[1] = fRec296[0];
				fRec295[1] = fRec295[0];
				fRec293[1] = fRec293[0];
			}
			if ((iSlow302 & iTemp76) | ((iSlow300 & iTemp76) | ((iSlow298 & iTemp76) | ((iSlow296 & iTemp76) | ((iSlow294 & iTemp76) | ((iSlow292 & iTemp76) | ((iSlow290 & iTemp76) | ((iSlow288 & iTemp76) | (iSlow286 & iTemp76))))))))) {
				fRec300[1] = fRec300[0];
				fRec301[1] = fRec301[0];
			}
			if ((iSlow302 & iTemp74) | ((iSlow300 & iTemp74) | ((iSlow298 & iTemp74) | ((iSlow296 & iTemp74) | ((iSlow294 & iTemp74) | ((iSlow292 & iTemp74) | ((iSlow290 & iTemp74) | ((iSlow288 & iTemp74) | (iSlow286 & iTemp74))))))))) {
				fRec303[1] = fRec303[0];
				fRec304[1] = fRec304[0];
				fRec305[1] = fRec305[0];
			}
			if ((iSlow302 & iTemp72) | ((iSlow300 & iTemp72) | ((iSlow298 & iTemp72) | ((iSlow296 & iTemp72) | ((iSlow294 & iTemp72) | ((iSlow292 & iTemp72) | ((iSlow290 & iTemp72) | ((iSlow288 & iTemp72) | (iSlow286 & iTemp72))))))))) {
				fRec308[1] = fRec308[0];
				fRec309[1] = fRec309[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | (iSlow288 | iSlow286)))))))) {
				fVec49[1] = fVec49[0];
			}
			if (iSlow302 | (iSlow300 | (iSlow298 | (iSlow296 | (iSlow294 | (iSlow292 | (iSlow290 | iSlow286))))))) {
				fRec311[1] = fRec311[0];
			}
			if (iSlow302 | iSlow288) {
				fVec50[1] = fVec50[0];
				iVec51[1] = iVec51[0];
			}
			if (iSlow302) {
				fRec316[1] = fRec316[0];
				fRec315[1] = fRec315[0];
				fRec314[1] = fRec314[0];
				fRec313[1] = fRec313[0];
				fRec312[1] = fRec312[0];
				fRec310[1] = fRec310[0];
			}
			if (iSlow288) {
				fRec317[1] = fRec317[0];
				fRec318[1] = fRec318[0];
			}
			fRec174[1] = fRec174[0];
		}
		fTempPerm0 = fTemp47;
		fTempPerm1 = fTemp48;
		fTempPerm2 = fTemp49;
		fTempPerm3 = fTemp50;
		fTempPerm4 = fTemp51;
		fTempPerm5 = fTemp52;
		fTempPerm6 = fTemp53;
		fTempPerm7 = fTemp54;
		fTempPerm8 = fTemp55;
		fTempPerm9 = fTemp56;
		fTempPerm10 = fTemp57;
		fTempPerm11 = fTemp58;
		fTempPerm12 = fTemp59;
		fTempPerm13 = fTemp60;
		fTempPerm14 = fTemp61;
		fTempPerm15 = fTemp62;
		fTempPerm16 = fTemp63;
		fTempPerm17 = fTemp64;
		fTempPerm18 = fTemp65;
		fTempPerm19 = fTemp66;
		fTempPerm20 = fTemp67;
		fTempPerm21 = fTemp68;
		iTempPerm22 = iTemp69;
		fTempPerm23 = fTemp71;
		iTempPerm24 = iTemp72;
		fTempPerm25 = fTemp73;
		iTempPerm26 = iTemp74;
		fTempPerm27 = fTemp75;
		iTempPerm28 = iTemp76;
		iTempPerm29 = iTemp77;
		iTempPerm30 = iTemp78;
		fTempPerm31 = fTemp70;
		fTempPerm32 = fTemp79;
		fTempPerm33 = fTemp80;
		fTempPerm34 = fTemp81;
		fTempPerm35 = fTemp82;
		fTempPerm36 = fTemp83;
		fTempPerm37 = fTemp84;
		fTempPerm38 = fTemp85;
		fTempPerm39 = fTemp86;
		fTempPerm40 = fTemp87;
		fTempPerm41 = fTemp88;
		fTempPerm42 = fTemp89;
		fTempPerm43 = fTemp90;
		fTempPerm44 = fTemp91;
		fTempPerm45 = fTemp92;
		fTempPerm46 = fTemp93;
		fTempPerm47 = fTemp94;
		fTempPerm48 = fTemp95;
		fTempPerm49 = fTemp96;
		fTempPerm50 = fTemp97;
		fTempPerm51 = fTemp98;
		fTempPerm52 = fTemp99;
		fTempPerm53 = fTemp100;
		fTempPerm54 = fTemp101;
		fTempPerm55 = fTemp102;
		fTempPerm56 = fTemp103;
		fTempPerm57 = fTemp104;
		fTempPerm58 = fTemp105;
		fTempPerm59 = fTemp106;
		fTempPerm60 = fTemp107;
		fTempPerm61 = fTemp108;
		fTempPerm62 = fTemp109;
		fTempPerm63 = fTemp110;
		fTempPerm64 = fTemp111;
		fTempPerm65 = fTemp112;
		fTempPerm66 = fTemp113;
		fTempPerm67 = fTemp114;
		fTempPerm68 = fTemp115;
		iTempPerm69 = iTemp116;
		fTempPerm70 = fTemp117;
		fTempPerm71 = fTemp118;
		fTempPerm72 = fTemp119;
		fTempPerm73 = fTemp120;
		fTempPerm74 = fTemp121;
		fTempPerm75 = fTemp122;
		fTempPerm76 = fTemp123;
		fTempPerm77 = fTemp124;
		fTempPerm78 = fTemp125;
		fTempPerm79 = fTemp126;
		fTempPerm80 = fTemp127;
		fTempPerm81 = fTemp128;
		fTempPerm82 = fTemp129;
		fTempPerm83 = fTemp130;
		fTempPerm84 = fTemp131;
		fTempPerm85 = fTemp132;
		fTempPerm86 = fTemp133;
		fTempPerm87 = fTemp134;
		fTempPerm88 = fTemp135;
		fTempPerm89 = fTemp136;
		fTempPerm90 = fTemp137;
		fTempPerm91 = fTemp138;
		fTempPerm92 = fTemp139;
		fTempPerm93 = fTemp140;
		fTempPerm94 = fTemp141;
		fTempPerm95 = fTemp142;
		fTempPerm96 = fTemp143;
		fTempPerm97 = fTemp144;
		fTempPerm98 = fTemp145;
		fTempPerm99 = fTemp146;
		fTempPerm100 = fTemp147;
		fTempPerm101 = fTemp148;
		fTempPerm102 = fTemp149;
		fTempPerm103 = fTemp150;
		fTempPerm104 = fTemp151;
		fTempPerm105 = fTemp152;
		fTempPerm106 = fTemp153;
		fTempPerm107 = fTemp154;
		fTempPerm108 = fTemp155;
		fTempPerm109 = fTemp156;
		fTempPerm110 = fTemp157;
		fTempPerm111 = fTemp158;
		fTempPerm112 = fTemp159;
		fTempPerm113 = fTemp160;
		fTempPerm114 = fTemp161;
		fTempPerm115 = fTemp162;
		fTempPerm116 = fTemp163;
		fTempPerm117 = fTemp164;
		fTempPerm118 = fTemp165;
		fTempPerm119 = fTemp166;
		iTempPerm120 = iTemp167;
		iTempPerm121 = iTemp168;
		fTempPerm122 = fTemp169;
		fTempPerm123 = fTemp170;
		fTempPerm124 = fTemp171;
		fTempPerm125 = fTemp172;
		fTempPerm126 = fTemp173;
		fTempPerm127 = fTemp174;
		fTempPerm128 = fTemp175;
		iTempPerm129 = iTemp176;
		fTempPerm130 = fTemp177;
		fTempPerm131 = fTemp178;
		fTempPerm132 = fTemp179;
		fTempPerm133 = fTemp180;
		fTempPerm134 = fTemp181;
		fTempPerm135 = fTemp182;
		fTempPerm136 = fTemp183;
		fTempPerm137 = fTemp184;
		fTempPerm138 = fTemp185;
		fTempPerm139 = fTemp186;
		fTempPerm140 = fTemp187;
		fTempPerm141 = fTemp188;
		fTempPerm142 = fTemp189;
		fTempPerm143 = fTemp190;
		fTempPerm144 = fTemp191;
		fTempPerm145 = fTemp192;
		fTempPerm146 = fTemp193;
		fTempPerm147 = fTemp194;
		fTempPerm148 = fTemp195;
		fTempPerm149 = fTemp196;
		iTempPerm150 = iTemp197;
		iTempPerm151 = iTemp198;
		fTempPerm152 = fTemp199;
		fTempPerm153 = fTemp200;
		fTempPerm154 = fTemp201;
		fTempPerm155 = fTemp202;
		fTempPerm156 = fTemp203;
		fTempPerm157 = fTemp204;
		fTempPerm158 = fTemp205;
		fTempPerm159 = fTemp206;
		fTempPerm160 = fTemp207;
		fTempPerm161 = fTemp208;
		fTempPerm162 = fTemp209;
		fTempPerm163 = fTemp210;
		fTempPerm164 = fTemp211;
		fTempPerm165 = fTemp212;
		fTempPerm166 = fTemp213;
		fTempPerm167 = fTemp214;
		fTempPerm168 = fTemp215;
		fTempPerm169 = fTemp216;
		fTempPerm170 = fTemp217;
		fTempPerm171 = fTemp218;
		fTempPerm172 = fTemp219;
		fTempPerm173 = fTemp220;
		fTempPerm174 = fTemp221;
		fTempPerm175 = fTemp222;
		fTempPerm176 = fTemp223;
		fTempPerm177 = fTemp224;
		fTempPerm178 = fTemp225;
		fTempPerm179 = fTemp226;
		fTempPerm180 = fTemp227;
		fTempPerm181 = fTemp228;
		fTempPerm182 = fTemp229;
		fTempPerm183 = fTemp230;
		fTempPerm184 = fTemp231;
		fTempPerm185 = fTemp232;
		fTempPerm186 = fTemp233;
		fTempPerm187 = fTemp234;
		fTempPerm188 = fTemp235;
		fTempPerm189 = fTemp236;
		fTempPerm190 = fTemp237;
		fTempPerm191 = fTemp238;
		fTempPerm192 = fTemp239;
		fTempPerm193 = fTemp240;
		fTempPerm194 = fTemp241;
		fTempPerm195 = fTemp242;
		fTempPerm196 = fTemp243;
		fTempPerm197 = fTemp244;
		fTempPerm198 = fTemp245;
		fTempPerm199 = fTemp246;
		fTempPerm200 = fTemp247;
		fTempPerm201 = fTemp248;
		fTempPerm202 = fTemp249;
		fTempPerm203 = fTemp250;
		fTempPerm204 = fTemp251;
		fTempPerm205 = fTemp252;
		fTempPerm206 = fTemp253;
		fTempPerm207 = fTemp254;
		fTempPerm208 = fTemp255;
		fTempPerm209 = fTemp256;
		fTempPerm210 = fTemp257;
		fTempPerm211 = fTemp258;
		fTempPerm212 = fTemp259;
		fTempPerm213 = fTemp260;
		fTempPerm214 = fTemp261;
		fTempPerm215 = fTemp262;
		fTempPerm216 = fTemp263;
		fTempPerm217 = fTemp264;
		fTempPerm218 = fTemp265;
		fTempPerm219 = fTemp266;
		fTempPerm220 = fTemp267;
		fTempPerm221 = fTemp268;
		fTempPerm222 = fTemp269;
		fTempPerm223 = fTemp270;
		fTempPerm224 = fTemp271;
		fTempPerm225 = fTemp272;
		fTempPerm226 = fTemp273;
		fTempPerm227 = fTemp274;
		fTempPerm228 = fTemp275;
		fTempPerm229 = fTemp276;
		fTempPerm230 = fTemp277;
		fTempPerm231 = fTemp278;
		fTempPerm232 = fTemp279;
		fTempPerm233 = fTemp280;
		fTempPerm234 = fTemp281;
		fTempPerm235 = fTemp282;
		fTempPerm236 = fTemp283;
		fTempPerm237 = fTemp284;
		fTempPerm238 = fTemp285;
		fTempPerm239 = fTemp286;
		fTempPerm240 = fTemp287;
		fTempPerm241 = fTemp288;
		fTempPerm242 = fTemp289;
		fTempPerm243 = fTemp290;
		fTempPerm244 = fTemp291;
		fTempPerm245 = fTemp292;
		fTempPerm246 = fTemp293;
		fTempPerm247 = fTemp294;
		fTempPerm248 = fTemp295;
		iTempPerm249 = iTemp296;
		fTempPerm250 = fTemp297;
		fTempPerm251 = fTemp298;
		fTempPerm252 = fTemp299;
		fTempPerm253 = fTemp300;
		fTempPerm254 = fTemp301;
		fTempPerm255 = fTemp302;
		fTempPerm256 = fTemp303;
		fTempPerm257 = fTemp304;
		fTempPerm258 = fTemp305;
		fTempPerm259 = fTemp306;
		fTempPerm260 = fTemp307;
		fTempPerm261 = fTemp308;
		fTempPerm262 = fTemp309;
		fTempPerm263 = fTemp310;
		fTempPerm264 = fTemp311;
		fTempPerm265 = fTemp312;
		fTempPerm266 = fTemp313;
		fTempPerm267 = fTemp314;
		fTempPerm268 = fTemp315;
		fTempPerm269 = fTemp316;
		fTempPerm270 = fTemp317;
		fTempPerm271 = fTemp318;
		fTempPerm272 = fTemp319;
		fTempPerm273 = fTemp320;
		fTempPerm274 = fTemp321;
		fTempPerm275 = fTemp322;
		fTempPerm276 = fTemp323;
		fTempPerm277 = fTemp324;
		fTempPerm278 = fTemp325;
		fTempPerm279 = fTemp326;
		fTempPerm280 = fTemp327;
		fTempPerm281 = fTemp328;
		iTempPerm282 = iTemp329;
		iTempPerm283 = iTemp330;
		fTempPerm284 = fTemp331;
		fTempPerm285 = fTemp332;
		fTempPerm286 = fTemp333;
		fTempPerm287 = fTemp334;
		fTempPerm288 = fTemp335;
		fTempPerm289 = fTemp336;
		fTempPerm290 = fTemp337;
		iTempPerm291 = iTemp338;
		fTempPerm292 = fTemp339;
		fTempPerm293 = fTemp340;
		fTempPerm294 = fTemp341;
		fTempPerm295 = fTemp342;
		fTempPerm296 = fTemp343;
		fTempPerm297 = fTemp344;
		fTempPerm298 = fTemp345;
		fTempPerm299 = fTemp346;
		fTempPerm300 = fTemp347;
		fTempPerm301 = fTemp348;
		fTempPerm302 = fTemp349;
		fTempPerm303 = fTemp350;
		fTempPerm304 = fTemp351;
		fTempPerm305 = fTemp352;
		fTempPerm306 = fTemp353;
		fTempPerm307 = fTemp354;
		fTempPerm308 = fTemp355;
		fTempPerm309 = fTemp356;
		fTempPerm310 = fTemp357;
		iTempPerm311 = iTemp358;
		iTempPerm312 = iTemp359;
		fTempPerm313 = fTemp360;
		fTempPerm314 = fTemp361;
		fTempPerm315 = fTemp362;
		fTempPerm316 = fTemp363;
		fTempPerm317 = fTemp364;
		fTempPerm318 = fTemp365;
		fTempPerm319 = fTemp366;
		fTempPerm320 = fTemp367;
		fTempPerm321 = fTemp368;
		fTempPerm322 = fTemp369;
		fTempPerm323 = fTemp370;
		fTempPerm324 = fTemp371;
		fTempPerm325 = fTemp372;
		fTempPerm326 = fTemp373;
		fTempPerm327 = fTemp374;
		fTempPerm328 = fTemp375;
		fTempPerm329 = fTemp376;
		fTempPerm330 = fTemp377;
		fTempPerm331 = fTemp378;
		fTempPerm332 = fTemp379;
		fTempPerm333 = fTemp380;
		fTempPerm334 = fTemp381;
		fTempPerm335 = fTemp382;
		fTempPerm336 = fTemp383;
		fTempPerm337 = fTemp384;
		fTempPerm338 = fTemp385;
		fTempPerm339 = fTemp386;
		fTempPerm340 = fTemp387;
		fTempPerm341 = fTemp388;
		fTempPerm342 = fTemp389;
		fTempPerm343 = fTemp390;
		fTempPerm344 = fTemp391;
		fTempPerm345 = fTemp392;
		fTempPerm346 = fTemp393;
		fTempPerm347 = fTemp394;
		fTempPerm348 = fTemp395;
		fTempPerm349 = fTemp396;
		fTempPerm350 = fTemp397;
		fTempPerm351 = fTemp398;
		fTempPerm352 = fTemp399;
		fTempPerm353 = fTemp400;
		fTempPerm354 = fTemp401;
		fTempPerm355 = fTemp402;
		fTempPerm356 = fTemp403;
		fTempPerm357 = fTemp404;
		fTempPerm358 = fTemp405;
		fTempPerm359 = fTemp406;
		fTempPerm360 = fTemp407;
		fTempPerm361 = fTemp408;
		fTempPerm362 = fTemp409;
		fTempPerm363 = fTemp410;
		fTempPerm364 = fTemp411;
		fTempPerm365 = fTemp412;
		fTempPerm366 = fTemp413;
		fTempPerm367 = fTemp414;
		fTempPerm368 = fTemp415;
		fTempPerm369 = fTemp416;
		fTempPerm370 = fTemp417;
		fTempPerm371 = fTemp418;
		fTempPerm372 = fTemp419;
		fTempPerm373 = fTemp420;
		fTempPerm374 = fTemp421;
		fTempPerm375 = fTemp422;
		fTempPerm376 = fTemp423;
		fTempPerm377 = fTemp424;
		fTempPerm378 = fTemp425;
		fTempPerm379 = fTemp426;
		fTempPerm380 = fTemp427;
		fTempPerm381 = fTemp428;
		fTempPerm382 = fTemp429;
		fTempPerm383 = fTemp430;
		fTempPerm384 = fTemp431;
		fTempPerm385 = fTemp432;
		fTempPerm386 = fTemp433;
		fTempPerm387 = fTemp434;
		fTempPerm388 = fTemp435;
		fTempPerm389 = fTemp436;
		fTempPerm390 = fTemp437;
		fTempPerm391 = fTemp438;
		fTempPerm392 = fTemp439;
		fTempPerm393 = fTemp440;
		fTempPerm394 = fTemp441;
		fTempPerm395 = fTemp442;
		fTempPerm396 = fTemp443;
		fTempPerm397 = fTemp444;
		fTempPerm398 = fTemp445;
		fTempPerm399 = fTemp446;
		fTempPerm400 = fTemp447;
		fTempPerm401 = fTemp448;
		fTempPerm402 = fTemp449;
		fTempPerm403 = fTemp450;
		fTempPerm404 = fTemp451;
		fTempPerm405 = fTemp452;
		fTempPerm406 = fTemp453;
		fTempPerm407 = fTemp454;
		fTempPerm408 = fTemp455;
		fTempPerm409 = fTemp456;
		iTempPerm410 = iTemp457;
		fTempPerm411 = fTemp458;
		fTempPerm412 = fTemp459;
		fTempPerm413 = fTemp460;
		fTempPerm414 = fTemp461;
		fTempPerm415 = fTemp462;
		fTempPerm416 = fTemp463;
		fTempPerm417 = fTemp464;
		fTempPerm418 = fTemp465;
		fTempPerm419 = fTemp466;
		fTempPerm420 = fTemp467;
		fTempPerm421 = fTemp468;
		fTempPerm422 = fTemp469;
		fTempPerm423 = fTemp470;
		fTempPerm424 = fTemp471;
		fTempPerm425 = fTemp472;
		fTempPerm426 = fTemp473;
		fTempPerm427 = fTemp474;
		fTempPerm428 = fTemp475;
		fTempPerm429 = fTemp476;
		fTempPerm430 = fTemp477;
		fTempPerm431 = fTemp478;
		fTempPerm432 = fTemp479;
		fTempPerm433 = fTemp480;
		fTempPerm434 = fTemp481;
		fTempPerm435 = fTemp482;
		fTempPerm436 = fTemp483;
		fTempPerm437 = fTemp484;
		fTempPerm438 = fTemp485;
		fTempPerm439 = fTemp486;
		fTempPerm440 = fTemp487;
		fTempPerm441 = fTemp488;
		fTempPerm442 = fTemp489;
		iTempPerm443 = iTemp490;
		iTempPerm444 = iTemp491;
		fTempPerm445 = fTemp492;
		fTempPerm446 = fTemp493;
		fTempPerm447 = fTemp494;
		fTempPerm448 = fTemp495;
		fTempPerm449 = fTemp496;
		fTempPerm450 = fTemp497;
		fTempPerm451 = fTemp498;
		iTempPerm452 = iTemp499;
		fTempPerm453 = fTemp500;
		fTempPerm454 = fTemp501;
		fTempPerm455 = fTemp502;
		fTempPerm456 = fTemp503;
		fTempPerm457 = fTemp504;
		fTempPerm458 = fTemp505;
		fTempPerm459 = fTemp506;
		fTempPerm460 = fTemp507;
		fTempPerm461 = fTemp508;
		fTempPerm462 = fTemp509;
		fTempPerm463 = fTemp510;
		fTempPerm464 = fTemp511;
		fTempPerm465 = fTemp512;
		fTempPerm466 = fTemp513;
		fTempPerm467 = fTemp514;
		fTempPerm468 = fTemp515;
		fTempPerm469 = fTemp516;
		fTempPerm470 = fTemp517;
		fTempPerm471 = fTemp518;
		iTempPerm472 = iTemp519;
		iTempPerm473 = iTemp520;
		fTempPerm474 = fTemp521;
		fTempPerm475 = fTemp522;
		fTempPerm476 = fTemp523;
		fTempPerm477 = fTemp524;
		fTempPerm478 = fTemp525;
		fTempPerm479 = fTemp526;
		fTempPerm480 = fTemp527;
		fTempPerm481 = fTemp528;
		fTempPerm482 = fTemp529;
		fTempPerm483 = fTemp530;
		fTempPerm484 = fTemp531;
		fTempPerm485 = fTemp532;
		fTempPerm486 = fTemp533;
		fTempPerm487 = fTemp534;
		fTempPerm488 = fTemp535;
		fTempPerm489 = fTemp536;
		fTempPerm490 = fTemp537;
		fTempPerm491 = fTemp538;
		fTempPerm492 = fTemp539;
		fTempPerm493 = fTemp540;
		fTempPerm494 = fTemp541;
		fTempPerm495 = fTemp542;
		fTempPerm496 = fTemp543;
		fTempPerm497 = fTemp544;
		fTempPerm498 = fTemp545;
		fTempPerm499 = fTemp546;
		fTempPerm500 = fTemp547;
		fTempPerm501 = fTemp548;
		fTempPerm502 = fTemp549;
		fTempPerm503 = fTemp550;
		fTempPerm504 = fTemp551;
		fTempPerm505 = fTemp552;
		fTempPerm506 = fTemp553;
		fTempPerm507 = fTemp554;
		fTempPerm508 = fTemp555;
		fTempPerm509 = fTemp556;
		fTempPerm510 = fTemp557;
		fTempPerm511 = fTemp558;
		fTempPerm512 = fTemp559;
		fTempPerm513 = fTemp560;
		fTempPerm514 = fTemp561;
		fTempPerm515 = fTemp562;
		fTempPerm516 = fTemp563;
		fTempPerm517 = fTemp564;
		fTempPerm518 = fTemp565;
		fTempPerm519 = fTemp566;
		fTempPerm520 = fTemp567;
		fTempPerm521 = fTemp568;
		fTempPerm522 = fTemp569;
		fTempPerm523 = fTemp570;
		fTempPerm524 = fTemp571;
		fTempPerm525 = fTemp572;
		fTempPerm526 = fTemp573;
		fTempPerm527 = fTemp574;
		fTempPerm528 = fTemp575;
		fTempPerm529 = fTemp576;
		fTempPerm530 = fTemp577;
		fTempPerm531 = fTemp578;
		fTempPerm532 = fTemp579;
		fTempPerm533 = fTemp580;
		fTempPerm534 = fTemp581;
		fTempPerm535 = fTemp582;
		fTempPerm536 = fTemp583;
		fTempPerm537 = fTemp584;
		fTempPerm538 = fTemp585;
		fTempPerm539 = fTemp586;
		fTempPerm540 = fTemp587;
		fTempPerm541 = fTemp588;
		fTempPerm542 = fTemp589;
		fTempPerm543 = fTemp590;
		fTempPerm544 = fTemp591;
		fTempPerm545 = fTemp592;
		fTempPerm546 = fTemp593;
		fTempPerm547 = fTemp594;
		fTempPerm548 = fTemp595;
		fTempPerm549 = fTemp596;
		fTempPerm550 = fTemp597;
		fTempPerm551 = fTemp598;
		fTempPerm552 = fTemp599;
		fTempPerm553 = fTemp600;
		fTempPerm554 = fTemp601;
		fTempPerm555 = fTemp602;
		fTempPerm556 = fTemp603;
		fTempPerm557 = fTemp604;
		fTempPerm558 = fTemp605;
		fTempPerm559 = fTemp606;
		fTempPerm560 = fTemp607;
		fTempPerm561 = fTemp608;
		fTempPerm562 = fTemp609;
		fTempPerm563 = fTemp610;
		fTempPerm564 = fTemp611;
		fTempPerm565 = fTemp612;
		fTempPerm566 = fTemp613;
		fTempPerm567 = fTemp614;
		fTempPerm568 = fTemp615;
		fTempPerm569 = fTemp616;
		fTempPerm570 = fTemp617;
		iTempPerm571 = iTemp618;
		fTempPerm572 = fTemp619;
		fTempPerm573 = fTemp620;
		fTempPerm574 = fTemp621;
		fTempPerm575 = fTemp622;
		fTempPerm576 = fTemp623;
		fTempPerm577 = fTemp624;
		fTempPerm578 = fTemp625;
		fTempPerm579 = fTemp626;
		fTempPerm580 = fTemp627;
		fTempPerm581 = fTemp628;
		fTempPerm582 = fTemp629;
		fTempPerm583 = fTemp630;
		fTempPerm584 = fTemp631;
		fTempPerm585 = fTemp632;
		fTempPerm586 = fTemp633;
		fTempPerm587 = fTemp634;
		fTempPerm588 = fTemp635;
		fTempPerm589 = fTemp636;
		fTempPerm590 = fTemp637;
		fTempPerm591 = fTemp638;
		fTempPerm592 = fTemp639;
		fTempPerm593 = fTemp640;
		fTempPerm594 = fTemp641;
		fTempPerm595 = fTemp642;
		fTempPerm596 = fTemp643;
		fTempPerm597 = fTemp644;
		fTempPerm598 = fTemp645;
		fTempPerm599 = fTemp646;
		fTempPerm600 = fTemp647;
		fTempPerm601 = fTemp648;
		fTempPerm602 = fTemp649;
		fTempPerm603 = fTemp650;
		iTempPerm604 = iTemp651;
		iTempPerm605 = iTemp652;
		fTempPerm606 = fTemp653;
		fTempPerm607 = fTemp654;
		fTempPerm608 = fTemp655;
		fTempPerm609 = fTemp656;
		fTempPerm610 = fTemp657;
		fTempPerm611 = fTemp658;
		fTempPerm612 = fTemp659;
		iTempPerm613 = iTemp660;
		fTempPerm614 = fTemp661;
		fTempPerm615 = fTemp662;
		fTempPerm616 = fTemp663;
		fTempPerm617 = fTemp664;
		fTempPerm618 = fTemp665;
		fTempPerm619 = fTemp666;
		fTempPerm620 = fTemp667;
		fTempPerm621 = fTemp668;
		fTempPerm622 = fTemp669;
		fTempPerm623 = fTemp670;
		fTempPerm624 = fTemp671;
		fTempPerm625 = fTemp672;
		fTempPerm626 = fTemp673;
		fTempPerm627 = fTemp674;
		fTempPerm628 = fTemp675;
		fTempPerm629 = fTemp676;
		fTempPerm630 = fTemp677;
		fTempPerm631 = fTemp678;
		fTempPerm632 = fTemp679;
		iTempPerm633 = iTemp680;
		iTempPerm634 = iTemp681;
		fTempPerm635 = fTemp682;
		fTempPerm636 = fTemp683;
		fTempPerm637 = fTemp684;
		fTempPerm638 = fTemp685;
		fTempPerm639 = fTemp686;
		fTempPerm640 = fTemp687;
		fTempPerm641 = fTemp688;
		fTempPerm642 = fTemp689;
		fTempPerm643 = fTemp690;
		fTempPerm644 = fTemp691;
		fTempPerm645 = fTemp692;
		fTempPerm646 = fTemp693;
		fTempPerm647 = fTemp694;
		fTempPerm648 = fTemp695;
		fTempPerm649 = fTemp696;
		fTempPerm650 = fTemp697;
		fTempPerm651 = fTemp698;
		fTempPerm652 = fTemp699;
		fTempPerm653 = fTemp700;
		fTempPerm654 = fTemp701;
		fTempPerm655 = fTemp702;
		fTempPerm656 = fTemp703;
		fTempPerm657 = fTemp704;
		fTempPerm658 = fTemp705;
		fTempPerm659 = fTemp706;
		fTempPerm660 = fTemp707;
		fTempPerm661 = fTemp708;
		fTempPerm662 = fTemp709;
		fTempPerm663 = fTemp710;
		fTempPerm664 = fTemp711;
		fTempPerm665 = fTemp712;
		fTempPerm666 = fTemp713;
		fTempPerm667 = fTemp714;
		fTempPerm668 = fTemp715;
		fTempPerm669 = fTemp716;
		fTempPerm670 = fTemp717;
		fTempPerm671 = fTemp718;
		fTempPerm672 = fTemp719;
		fTempPerm673 = fTemp720;
		fTempPerm674 = fTemp721;
		fTempPerm675 = fTemp722;
		fTempPerm676 = fTemp723;
		fTempPerm677 = fTemp724;
		fTempPerm678 = fTemp725;
		fTempPerm679 = fTemp726;
		fTempPerm680 = fTemp727;
		fTempPerm681 = fTemp728;
		fTempPerm682 = fTemp729;
		fTempPerm683 = fTemp730;
		fTempPerm684 = fTemp731;
		fTempPerm685 = fTemp732;
		fTempPerm686 = fTemp733;
		fTempPerm687 = fTemp734;
		fTempPerm688 = fTemp735;
		fTempPerm689 = fTemp736;
		fTempPerm690 = fTemp737;
		fTempPerm691 = fTemp738;
		fTempPerm692 = fTemp739;
		fTempPerm693 = fTemp740;
		fTempPerm694 = fTemp741;
		fTempPerm695 = fTemp742;
		fTempPerm696 = fTemp743;
		fTempPerm697 = fTemp744;
		fTempPerm698 = fTemp745;
		fTempPerm699 = fTemp746;
		fTempPerm700 = fTemp747;
		fTempPerm701 = fTemp748;
		fTempPerm702 = fTemp749;
		fTempPerm703 = fTemp750;
		fTempPerm704 = fTemp762;
		fTempPerm705 = fTemp763;
		fTempPerm706 = fTemp764;
		fTempPerm707 = fTemp765;
		fTempPerm708 = fTemp766;
		fTempPerm709 = fTemp767;
		fTempPerm710 = fTemp768;
		fTempPerm711 = fTemp769;
		fTempPerm712 = fTemp770;
		fTempPerm713 = fTemp771;
		fTempPerm714 = fTemp772;
		fTempPerm715 = fTemp773;
		fTempPerm716 = fTemp774;
		fTempPerm717 = fTemp775;
		fTempPerm718 = fTemp776;
		fTempPerm719 = fTemp777;
		iTempPerm720 = iTemp778;
		fTempPerm721 = fTemp779;
		fTempPerm722 = fTemp780;
		fTempPerm723 = fTemp781;
		fTempPerm724 = fTemp782;
		fTempPerm725 = fTemp783;
		fTempPerm726 = fTemp784;
		fTempPerm727 = fTemp785;
		fTempPerm728 = fTemp786;
		fTempPerm729 = fTemp787;
		fTempPerm730 = fTemp788;
		fTempPerm731 = fTemp789;
		fTempPerm732 = fTemp790;
		fTempPerm733 = fTemp791;
		fTempPerm734 = fTemp792;
		fTempPerm735 = fTemp793;
		fTempPerm736 = fTemp794;
		fTempPerm737 = fTemp795;
		fTempPerm738 = fTemp796;
		fTempPerm739 = fTemp797;
		fTempPerm740 = fTemp798;
		fTempPerm741 = fTemp799;
		fTempPerm742 = fTemp800;
		fTempPerm743 = fTemp801;
		fTempPerm744 = fTemp802;
		fTempPerm745 = fTemp803;
		fTempPerm746 = fTemp804;
		fTempPerm747 = fTemp805;
		fTempPerm748 = fTemp806;
		fTempPerm749 = fTemp807;
		fTempPerm750 = fTemp808;
		fTempPerm751 = fTemp809;
		fTempPerm752 = fTemp810;
		fTempPerm753 = fTemp811;
		fTempPerm754 = fTemp812;
		fTempPerm755 = fTemp813;
		fTempPerm756 = fTemp814;
		fTempPerm757 = fTemp815;
		fTempPerm758 = fTemp816;
		iTempPerm759 = iTemp817;
		iTempPerm760 = iTemp818;
		fTempPerm761 = fTemp819;
		fTempPerm762 = fTemp820;
		fTempPerm763 = fTemp821;
		fTempPerm764 = fTemp822;
		fTempPerm765 = fTemp823;
		fTempPerm766 = fTemp824;
		fTempPerm767 = fTemp825;
		iTempPerm768 = iTemp826;
		fTempPerm769 = fTemp827;
		fTempPerm770 = fTemp828;
		fTempPerm771 = fTemp829;
		fTempPerm772 = fTemp830;
		fTempPerm773 = fTemp831;
		fTempPerm774 = fTemp832;
		fTempPerm775 = fTemp833;
		fTempPerm776 = fTemp834;
		fTempPerm777 = fTemp835;
		fTempPerm778 = fTemp836;
		fTempPerm779 = fTemp837;
		fTempPerm780 = fTemp838;
		fTempPerm781 = fTemp839;
		fTempPerm782 = fTemp840;
		fTempPerm783 = fTemp841;
		fTempPerm784 = fTemp842;
		fTempPerm785 = fTemp843;
		fTempPerm786 = fTemp844;
		fTempPerm787 = fTemp845;
		fTempPerm788 = fTemp846;
		iTempPerm789 = iTemp847;
		iTempPerm790 = iTemp848;
		fTempPerm791 = fTemp849;
		fTempPerm792 = fTemp850;
		fTempPerm793 = fTemp851;
		fTempPerm794 = fTemp852;
		fTempPerm795 = fTemp853;
		fTempPerm796 = fTemp854;
		fTempPerm797 = fTemp855;
		fTempPerm798 = fTemp856;
		fTempPerm799 = fTemp857;
		fTempPerm800 = fTemp858;
		fTempPerm801 = fTemp859;
		fTempPerm802 = fTemp860;
		fTempPerm803 = fTemp861;
		fTempPerm804 = fTemp862;
		fTempPerm805 = fTemp863;
		fTempPerm806 = fTemp864;
		fTempPerm807 = fTemp865;
		fTempPerm808 = fTemp866;
		fTempPerm809 = fTemp867;
		fTempPerm810 = fTemp868;
		fTempPerm811 = fTemp869;
		fTempPerm812 = fTemp870;
		fTempPerm813 = fTemp871;
		fTempPerm814 = fTemp872;
		fTempPerm815 = fTemp873;
		fTempPerm816 = fTemp874;
		fTempPerm817 = fTemp875;
		fTempPerm818 = fTemp876;
		fTempPerm819 = fTemp877;
		fTempPerm820 = fTemp878;
		fTempPerm821 = fTemp879;
		fTempPerm822 = fTemp880;
		fTempPerm823 = fTemp881;
		fTempPerm824 = fTemp882;
		fTempPerm825 = fTemp883;
		fTempPerm826 = fTemp884;
		fTempPerm827 = fTemp885;
		fTempPerm828 = fTemp886;
		fTempPerm829 = fTemp887;
		fTempPerm830 = fTemp888;
		fTempPerm831 = fTemp889;
		fTempPerm832 = fTemp890;
		fTempPerm833 = fTemp891;
		fTempPerm834 = fTemp892;
		fTempPerm835 = fTemp893;
		fTempPerm836 = fTemp894;
		fTempPerm837 = fTemp895;
		fTempPerm838 = fTemp896;
		fTempPerm839 = fTemp897;
		fTempPerm840 = fTemp898;
		fTempPerm841 = fTemp899;
		fTempPerm842 = fTemp900;
		fTempPerm843 = fTemp901;
		fTempPerm844 = fTemp902;
		fTempPerm845 = fTemp903;
		fTempPerm846 = fTemp904;
		fTempPerm847 = fTemp905;
		fTempPerm848 = fTemp906;
		fTempPerm849 = fTemp907;
		fTempPerm850 = fTemp908;
		fTempPerm851 = fTemp909;
		fTempPerm852 = fTemp910;
		fTempPerm853 = fTemp911;
		fTempPerm854 = fTemp912;
		fTempPerm855 = fTemp913;
		fTempPerm856 = fTemp914;
		fTempPerm857 = fTemp915;
		fTempPerm858 = fTemp916;
		fTempPerm859 = fTemp917;
		fTempPerm860 = fTemp918;
		fTempPerm861 = fTemp919;
		fTempPerm862 = fTemp920;
		fTempPerm863 = fTemp921;
		fTempPerm864 = fTemp922;
		fTempPerm865 = fTemp923;
		fTempPerm866 = fTemp924;
		fTempPerm867 = fTemp925;
		iTempPerm868 = iTemp926;
		fTempPerm869 = fTemp927;
		fTempPerm870 = fTemp928;
		fTempPerm871 = fTemp929;
		fTempPerm872 = fTemp930;
		fTempPerm873 = fTemp931;
		fTempPerm874 = fTemp932;
		fTempPerm875 = fTemp933;
		fTempPerm876 = fTemp934;
		fTempPerm877 = fTemp935;
		fTempPerm878 = fTemp936;
		fTempPerm879 = fTemp937;
		fTempPerm880 = fTemp938;
		fTempPerm881 = fTemp939;
		fTempPerm882 = fTemp940;
		fTempPerm883 = fTemp941;
		fTempPerm884 = fTemp942;
		fTempPerm885 = fTemp943;
		fTempPerm886 = fTemp944;
		fTempPerm887 = fTemp945;
		fTempPerm888 = fTemp946;
		fTempPerm889 = fTemp947;
		fTempPerm890 = fTemp948;
		fTempPerm891 = fTemp949;
		fTempPerm892 = fTemp950;
		iTempPerm893 = iTemp951;
		iTempPerm894 = iTemp952;
		fTempPerm895 = fTemp953;
		fTempPerm896 = fTemp954;
		fTempPerm897 = fTemp955;
		fTempPerm898 = fTemp956;
		fTempPerm899 = fTemp957;
		fTempPerm900 = fTemp958;
		fTempPerm901 = fTemp959;
		iTempPerm902 = iTemp960;
		fTempPerm903 = fTemp961;
		fTempPerm904 = fTemp962;
		fTempPerm905 = fTemp963;
		fTempPerm906 = fTemp964;
		fTempPerm907 = fTemp965;
		fTempPerm908 = fTemp966;
		fTempPerm909 = fTemp967;
		fTempPerm910 = fTemp968;
		fTempPerm911 = fTemp969;
		fTempPerm912 = fTemp970;
		fTempPerm913 = fTemp971;
		fTempPerm914 = fTemp972;
		fTempPerm915 = fTemp973;
		fTempPerm916 = fTemp974;
		fTempPerm917 = fTemp975;
		fTempPerm918 = fTemp976;
		fTempPerm919 = fTemp977;
		fTempPerm920 = fTemp978;
		fTempPerm921 = fTemp979;
		iTempPerm922 = iTemp980;
		iTempPerm923 = iTemp981;
		fTempPerm924 = fTemp982;
		fTempPerm925 = fTemp983;
		fTempPerm926 = fTemp984;
		fTempPerm927 = fTemp985;
		fTempPerm928 = fTemp986;
		fTempPerm929 = fTemp987;
		fTempPerm930 = fTemp988;
		fTempPerm931 = fTemp989;
		fTempPerm932 = fTemp990;
		fTempPerm933 = fTemp991;
		fTempPerm934 = fTemp992;
		fTempPerm935 = fTemp993;
		fTempPerm936 = fTemp994;
		fTempPerm937 = fTemp995;
		fTempPerm938 = fTemp996;
		fTempPerm939 = fTemp997;
		fTempPerm940 = fTemp998;
		fTempPerm941 = fTemp999;
		fTempPerm942 = fTemp1000;
		fTempPerm943 = fTemp1001;
		fTempPerm944 = fTemp1002;
		fTempPerm945 = fTemp1003;
		fTempPerm946 = fTemp1004;
		fTempPerm947 = fTemp1005;
		fTempPerm948 = fTemp1006;
		fTempPerm949 = fTemp1007;
		fTempPerm950 = fTemp1008;
		fTempPerm951 = fTemp1009;
		fTempPerm952 = fTemp1010;
		fTempPerm953 = fTemp1011;
		fTempPerm954 = fTemp1012;
		fTempPerm955 = fTemp1013;
		fTempPerm956 = fTemp1014;
		fTempPerm957 = fTemp1015;
		fTempPerm958 = fTemp1016;
		fTempPerm959 = fTemp1017;
		fTempPerm960 = fTemp1018;
		fTempPerm961 = fTemp1019;
		fTempPerm962 = fTemp1020;
		fTempPerm963 = fTemp1021;
		fTempPerm964 = fTemp1022;
		fTempPerm965 = fTemp1023;
		fTempPerm966 = fTemp1024;
		fTempPerm967 = fTemp1025;
		fTempPerm968 = fTemp1026;
		fTempPerm969 = fTemp1027;
		fTempPerm970 = fTemp1028;
		fTempPerm971 = fTemp1029;
		fTempPerm972 = fTemp1030;
		fTempPerm973 = fTemp1031;
		fTempPerm974 = fTemp1032;
		fTempPerm975 = fTemp1033;
		fTempPerm976 = fTemp1034;
		fTempPerm977 = fTemp1035;
		fTempPerm978 = fTemp1036;
		fTempPerm979 = fTemp1037;
		fTempPerm980 = fTemp1038;
		fTempPerm981 = fTemp1039;
		fTempPerm982 = fTemp1040;
		fTempPerm983 = fTemp1041;
		fTempPerm984 = fTemp1042;
		fTempPerm985 = fTemp1043;
		fTempPerm986 = fTemp1044;
		fTempPerm987 = fTemp1045;
		fTempPerm988 = fTemp1046;
		fTempPerm989 = fTemp1047;
		fTempPerm990 = fTemp1048;
		fTempPerm991 = fTemp1049;
		fTempPerm992 = fTemp1050;
		fTempPerm993 = fTemp1051;
		fTempPerm994 = fTemp1052;
		fTempPerm995 = fTemp1053;
		fTempPerm996 = fTemp1054;
		fTempPerm997 = fTemp1055;
		fTempPerm998 = fTemp1056;
		fTempPerm999 = fTemp1057;
		fTempPerm1000 = fTemp1058;
		iTempPerm1001 = iTemp1059;
		fTempPerm1002 = fTemp1060;
		fTempPerm1003 = fTemp1061;
		fTempPerm1004 = fTemp1062;
		fTempPerm1005 = fTemp1063;
		fTempPerm1006 = fTemp1064;
		fTempPerm1007 = fTemp1065;
		fTempPerm1008 = fTemp1066;
		fTempPerm1009 = fTemp1067;
		fTempPerm1010 = fTemp1068;
		fTempPerm1011 = fTemp1069;
		fTempPerm1012 = fTemp1070;
		fTempPerm1013 = fTemp1071;
		fTempPerm1014 = fTemp1072;
		fTempPerm1015 = fTemp1073;
		fTempPerm1016 = fTemp1074;
		fTempPerm1017 = fTemp1075;
		fTempPerm1018 = fTemp1076;
		fTempPerm1019 = fTemp1077;
		fTempPerm1020 = fTemp1078;
		fTempPerm1021 = fTemp1079;
		fTempPerm1022 = fTemp1080;
		fTempPerm1023 = fTemp1081;
		fTempPerm1024 = fTemp1082;
		fTempPerm1025 = fTemp1083;
		iTempPerm1026 = iTemp1084;
		iTempPerm1027 = iTemp1085;
		fTempPerm1028 = fTemp1086;
		fTempPerm1029 = fTemp1087;
		fTempPerm1030 = fTemp1088;
		fTempPerm1031 = fTemp1089;
		fTempPerm1032 = fTemp1090;
		fTempPerm1033 = fTemp1091;
		fTempPerm1034 = fTemp1092;
		iTempPerm1035 = iTemp1093;
		fTempPerm1036 = fTemp1094;
		fTempPerm1037 = fTemp1095;
		fTempPerm1038 = fTemp1096;
		fTempPerm1039 = fTemp1097;
		fTempPerm1040 = fTemp1098;
		fTempPerm1041 = fTemp1099;
		fTempPerm1042 = fTemp1100;
		fTempPerm1043 = fTemp1101;
		fTempPerm1044 = fTemp1102;
		fTempPerm1045 = fTemp1103;
		fTempPerm1046 = fTemp1104;
		fTempPerm1047 = fTemp1105;
		fTempPerm1048 = fTemp1106;
		fTempPerm1049 = fTemp1107;
		fTempPerm1050 = fTemp1108;
		fTempPerm1051 = fTemp1109;
		fTempPerm1052 = fTemp1110;
		fTempPerm1053 = fTemp1111;
		fTempPerm1054 = fTemp1112;
		iTempPerm1055 = iTemp1113;
		iTempPerm1056 = iTemp1114;
		fTempPerm1057 = fTemp1115;
		fTempPerm1058 = fTemp1116;
		fTempPerm1059 = fTemp1117;
		fTempPerm1060 = fTemp1118;
		fTempPerm1061 = fTemp1119;
		fTempPerm1062 = fTemp1120;
		fTempPerm1063 = fTemp1121;
		fTempPerm1064 = fTemp1122;
		fTempPerm1065 = fTemp1123;
		fTempPerm1066 = fTemp1124;
		fTempPerm1067 = fTemp1125;
		fTempPerm1068 = fTemp1126;
		fTempPerm1069 = fTemp1127;
		fTempPerm1070 = fTemp1128;
		fTempPerm1071 = fTemp1129;
		fTempPerm1072 = fTemp1130;
		fTempPerm1073 = fTemp1131;
		fTempPerm1074 = fTemp1132;
		fTempPerm1075 = fTemp1133;
		fTempPerm1076 = fTemp1134;
		fTempPerm1077 = fTemp1135;
		fTempPerm1078 = fTemp1136;
		fTempPerm1079 = fTemp1137;
		fTempPerm1080 = fTemp1138;
		fTempPerm1081 = fTemp1139;
		fTempPerm1082 = fTemp1140;
		fTempPerm1083 = fTemp1141;
		fTempPerm1084 = fTemp1142;
		fTempPerm1085 = fTemp1143;
		fTempPerm1086 = fTemp1144;
		fTempPerm1087 = fTemp1145;
		fTempPerm1088 = fTemp1146;
		fTempPerm1089 = fTemp1147;
		fTempPerm1090 = fTemp1148;
		fTempPerm1091 = fTemp1149;
		fTempPerm1092 = fTemp1150;
		fTempPerm1093 = fTemp1151;
		fTempPerm1094 = fTemp1152;
		fTempPerm1095 = fTemp1153;
		fTempPerm1096 = fTemp1154;
		fTempPerm1097 = fTemp1155;
		fTempPerm1098 = fTemp1156;
		fTempPerm1099 = fTemp1157;
		fTempPerm1100 = fTemp1158;
		fTempPerm1101 = fTemp1159;
		fTempPerm1102 = fTemp1160;
		fTempPerm1103 = fTemp1161;
		fTempPerm1104 = fTemp1162;
		fTempPerm1105 = fTemp1163;
		fTempPerm1106 = fTemp1164;
		fTempPerm1107 = fTemp1165;
		fTempPerm1108 = fTemp1166;
		fTempPerm1109 = fTemp1167;
		fTempPerm1110 = fTemp1168;
		fTempPerm1111 = fTemp1169;
		fTempPerm1112 = fTemp1170;
		fTempPerm1113 = fTemp1171;
		fTempPerm1114 = fTemp1172;
		fTempPerm1115 = fTemp1173;
		fTempPerm1116 = fTemp1174;
		fTempPerm1117 = fTemp1175;
		fTempPerm1118 = fTemp1176;
		fTempPerm1119 = fTemp1177;
		fTempPerm1120 = fTemp1178;
		fTempPerm1121 = fTemp1179;
		fTempPerm1122 = fTemp1180;
		fTempPerm1123 = fTemp1181;
		fTempPerm1124 = fTemp1182;
		fTempPerm1125 = fTemp1183;
		fTempPerm1126 = fTemp1184;
		fTempPerm1127 = fTemp1185;
		fTempPerm1128 = fTemp1186;
		fTempPerm1129 = fTemp1187;
		fTempPerm1130 = fTemp1188;
		fTempPerm1131 = fTemp1189;
		fTempPerm1132 = fTemp1190;
		fTempPerm1133 = fTemp1191;
		iTempPerm1134 = iTemp1192;
		fTempPerm1135 = fTemp1193;
		fTempPerm1136 = fTemp1194;
		fTempPerm1137 = fTemp1195;
		fTempPerm1138 = fTemp1196;
		fTempPerm1139 = fTemp1197;
		fTempPerm1140 = fTemp1198;
		fTempPerm1141 = fTemp1199;
		fTempPerm1142 = fTemp1200;
		fTempPerm1143 = fTemp1201;
		fTempPerm1144 = fTemp1202;
		fTempPerm1145 = fTemp1203;
		fTempPerm1146 = fTemp1204;
		fTempPerm1147 = fTemp1205;
		fTempPerm1148 = fTemp1206;
		fTempPerm1149 = fTemp1207;
		fTempPerm1150 = fTemp1208;
		fTempPerm1151 = fTemp1209;
		fTempPerm1152 = fTemp1210;
		fTempPerm1153 = fTemp1211;
		fTempPerm1154 = fTemp1212;
		fTempPerm1155 = fTemp1213;
		fTempPerm1156 = fTemp1214;
		fTempPerm1157 = fTemp1215;
		fTempPerm1158 = fTemp1216;
		iTempPerm1159 = iTemp1217;
		iTempPerm1160 = iTemp1218;
		fTempPerm1161 = fTemp1219;
		fTempPerm1162 = fTemp1220;
		fTempPerm1163 = fTemp1221;
		fTempPerm1164 = fTemp1222;
		fTempPerm1165 = fTemp1223;
		fTempPerm1166 = fTemp1224;
		fTempPerm1167 = fTemp1225;
		iTempPerm1168 = iTemp1226;
		fTempPerm1169 = fTemp1227;
		fTempPerm1170 = fTemp1228;
		fTempPerm1171 = fTemp1229;
		fTempPerm1172 = fTemp1230;
		fTempPerm1173 = fTemp1231;
		fTempPerm1174 = fTemp1232;
		fTempPerm1175 = fTemp1233;
		fTempPerm1176 = fTemp1234;
		fTempPerm1177 = fTemp1235;
		fTempPerm1178 = fTemp1236;
		fTempPerm1179 = fTemp1237;
		fTempPerm1180 = fTemp1238;
		fTempPerm1181 = fTemp1239;
		fTempPerm1182 = fTemp1240;
		fTempPerm1183 = fTemp1241;
		fTempPerm1184 = fTemp1242;
		fTempPerm1185 = fTemp1243;
		fTempPerm1186 = fTemp1244;
		fTempPerm1187 = fTemp1245;
		iTempPerm1188 = iTemp1246;
		iTempPerm1189 = iTemp1247;
		fTempPerm1190 = fTemp1248;
		fTempPerm1191 = fTemp1249;
		fTempPerm1192 = fTemp1250;
		fTempPerm1193 = fTemp1251;
		fTempPerm1194 = fTemp1252;
		fTempPerm1195 = fTemp1253;
		fTempPerm1196 = fTemp1254;
		fTempPerm1197 = fTemp1255;
		fTempPerm1198 = fTemp1256;
		fTempPerm1199 = fTemp1257;
		fTempPerm1200 = fTemp1258;
		fTempPerm1201 = fTemp1259;
		fTempPerm1202 = fTemp1260;
		fTempPerm1203 = fTemp1261;
		fTempPerm1204 = fTemp1262;
		fTempPerm1205 = fTemp1263;
		fTempPerm1206 = fTemp1264;
		fTempPerm1207 = fTemp1265;
		fTempPerm1208 = fTemp1266;
		fTempPerm1209 = fTemp1267;
		fTempPerm1210 = fTemp1268;
		fTempPerm1211 = fTemp1269;
		fTempPerm1212 = fTemp1270;
		fTempPerm1213 = fTemp1271;
		fTempPerm1214 = fTemp1272;
		fTempPerm1215 = fTemp1273;
		fTempPerm1216 = fTemp1274;
		fTempPerm1217 = fTemp1275;
		fTempPerm1218 = fTemp1276;
		fTempPerm1219 = fTemp1277;
		fTempPerm1220 = fTemp1278;
		fTempPerm1221 = fTemp1279;
		fTempPerm1222 = fTemp1280;
		fTempPerm1223 = fTemp1281;
		fTempPerm1224 = fTemp1282;
		fTempPerm1225 = fTemp1283;
		fTempPerm1226 = fTemp1284;
		fTempPerm1227 = fTemp1285;
		fTempPerm1228 = fTemp1286;
		fTempPerm1229 = fTemp1287;
		fTempPerm1230 = fTemp1288;
		fTempPerm1231 = fTemp1289;
		fTempPerm1232 = fTemp1290;
		fTempPerm1233 = fTemp1291;
		fTempPerm1234 = fTemp1292;
		fTempPerm1235 = fTemp1293;
		fTempPerm1236 = fTemp1294;
		fTempPerm1237 = fTemp1295;
		fTempPerm1238 = fTemp1296;
		fTempPerm1239 = fTemp1297;
		fTempPerm1240 = fTemp1298;
		fTempPerm1241 = fTemp1299;
		fTempPerm1242 = fTemp1300;
		fTempPerm1243 = fTemp1301;
		fTempPerm1244 = fTemp1302;
		fTempPerm1245 = fTemp1303;
		fTempPerm1246 = fTemp1304;
		fTempPerm1247 = fTemp1305;
		fTempPerm1248 = fTemp1306;
		fTempPerm1249 = fTemp1307;
		fTempPerm1250 = fTemp1308;
		fTempPerm1251 = fTemp1309;
		fTempPerm1252 = fTemp1310;
		fTempPerm1253 = fTemp1311;
		fTempPerm1254 = fTemp1312;
		fTempPerm1255 = fTemp1313;
		fTempPerm1256 = fTemp1314;
		fTempPerm1257 = fTemp1315;
		fTempPerm1258 = fTemp1316;
	}

};

#endif
