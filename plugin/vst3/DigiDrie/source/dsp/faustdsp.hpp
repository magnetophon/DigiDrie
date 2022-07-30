/* ------------------------------------------------------------
author: "Bart Brouns"
license: "AGPLv3"
name: "DigiFaustMidi"
Code generated with Faust 2.44.2 (https://faust.grame.fr)
Compilation options: -lang cpp -os0 -es 1 -mcd 16 -single -ftz 0
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
#include <cstdint>
#include <math.h>

static float ftbl0mydspSIG0[65536];
static float mydsp_faustpower2_f(float value) {
	return value * value;
}

#ifndef FAUSTCLASS
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

#define FAUST_INT_CONTROLS 82
#define FAUST_REAL_CONTROLS 1067

class mydsp {
 public:
	std::array<int, FAUST_INT_CONTROLS> ictrl{};
	std::array<FAUSTFLOAT, FAUST_REAL_CONTROLS> rctrl{};


 public:

	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fButton0;
	float fVec0[2];
	int iVec1[2];
	FAUSTFLOAT fHslider2;
	int iVec2[2];
	int iRec1[2];
	int fSampleRate;
	float fConst0;
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fConst1;
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
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	float fRec6[2];
	FAUSTFLOAT fHbargraph1;
	FAUSTFLOAT fHslider27;
	FAUSTFLOAT fHslider28;
	FAUSTFLOAT fHslider29;
	FAUSTFLOAT fHslider30;
	FAUSTFLOAT fHslider31;
	float fRec7[2];
	FAUSTFLOAT fHbargraph2;
	FAUSTFLOAT fHslider32;
	FAUSTFLOAT fHslider33;
	FAUSTFLOAT fHslider34;
	FAUSTFLOAT fHslider35;
	FAUSTFLOAT fHslider36;
	float fRec8[2];
	FAUSTFLOAT fHbargraph3;
	FAUSTFLOAT fHslider37;
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	FAUSTFLOAT fHslider40;
	FAUSTFLOAT fHslider41;
	float fRec9[2];
	FAUSTFLOAT fHbargraph4;
	FAUSTFLOAT fHslider42;
	float fRec11[2];
	FAUSTFLOAT fHbargraph5;
	FAUSTFLOAT fHslider43;
	float fRec12[2];
	FAUSTFLOAT fHbargraph6;
	FAUSTFLOAT fHslider44;
	float fRec13[2];
	FAUSTFLOAT fHbargraph7;
	FAUSTFLOAT fHslider45;
	float fRec14[2];
	FAUSTFLOAT fHbargraph8;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT fVslider3;
	int iRec16[2];
	float fRec15[2];
	FAUSTFLOAT fHslider46;
	FAUSTFLOAT fHslider47;
	FAUSTFLOAT fHslider48;
	float fRec17[2];
	FAUSTFLOAT fHbargraph9;
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
	FAUSTFLOAT fHslider65;
	FAUSTFLOAT fHslider66;
	FAUSTFLOAT fHslider67;
	FAUSTFLOAT fHslider68;
	float fRec18[2];
	FAUSTFLOAT fHbargraph10;
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
	FAUSTFLOAT fHslider83;
	FAUSTFLOAT fHslider84;
	FAUSTFLOAT fHslider85;
	float fRec19[2];
	FAUSTFLOAT fHbargraph11;
	FAUSTFLOAT fHslider86;
	FAUSTFLOAT fHslider87;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT fVslider6;
	float fTempPerm0;
	FAUSTFLOAT fHslider88;
	FAUSTFLOAT fHslider89;
	float fTempPerm1;
	FAUSTFLOAT fHslider90;
	FAUSTFLOAT fHslider91;
	FAUSTFLOAT fHslider92;
	FAUSTFLOAT fHslider93;
	FAUSTFLOAT fHslider94;
	float fTempPerm2;
	FAUSTFLOAT fHslider95;
	FAUSTFLOAT fHslider96;
	float fTempPerm3;
	float fTempPerm4;
	float fTempPerm5;
	FAUSTFLOAT fHslider97;
	FAUSTFLOAT fHslider98;
	FAUSTFLOAT fHslider99;
	FAUSTFLOAT fHslider100;
	FAUSTFLOAT fHslider101;
	FAUSTFLOAT fHslider102;
	FAUSTFLOAT fHslider103;
	float fTempPerm6;
	FAUSTFLOAT fHslider104;
	FAUSTFLOAT fHslider105;
	float fTempPerm7;
	FAUSTFLOAT fHslider106;
	FAUSTFLOAT fHslider107;
	FAUSTFLOAT fHslider108;
	FAUSTFLOAT fHslider109;
	FAUSTFLOAT fHslider110;
	float fTempPerm8;
	FAUSTFLOAT fHslider111;
	FAUSTFLOAT fHslider112;
	float fTempPerm9;
	float fTempPerm10;
	float fTempPerm11;
	FAUSTFLOAT fHslider113;
	FAUSTFLOAT fHslider114;
	FAUSTFLOAT fHslider115;
	FAUSTFLOAT fHslider116;
	FAUSTFLOAT fHslider117;
	FAUSTFLOAT fHslider118;
	FAUSTFLOAT fHslider119;
	float fTempPerm12;
	FAUSTFLOAT fHslider120;
	FAUSTFLOAT fHslider121;
	float fTempPerm13;
	FAUSTFLOAT fHslider122;
	FAUSTFLOAT fHslider123;
	FAUSTFLOAT fHslider124;
	FAUSTFLOAT fHslider125;
	FAUSTFLOAT fHslider126;
	float fTempPerm14;
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
	FAUSTFLOAT fHslider133;
	FAUSTFLOAT fHslider134;
	FAUSTFLOAT fHslider135;
	float fTempPerm23;
	int iTempPerm24;
	float fTempPerm25;
	int iTempPerm26;
	float fTempPerm27;
	int iTempPerm28;
	int iTempPerm29;
	int iTempPerm30;
	float fTempPerm31;
	FAUSTFLOAT fHslider136;
	FAUSTFLOAT fHslider137;
	float fTempPerm32;
	FAUSTFLOAT fHslider138;
	FAUSTFLOAT fHslider139;
	FAUSTFLOAT fHslider140;
	FAUSTFLOAT fHslider141;
	FAUSTFLOAT fHslider142;
	float fTempPerm33;
	FAUSTFLOAT fHslider143;
	FAUSTFLOAT fHslider144;
	float fTempPerm34;
	float fTempPerm35;
	FAUSTFLOAT fHslider145;
	FAUSTFLOAT fHslider146;
	FAUSTFLOAT fHslider147;
	FAUSTFLOAT fHslider148;
	FAUSTFLOAT fHslider149;
	FAUSTFLOAT fHslider150;
	FAUSTFLOAT fHslider151;
	float fTempPerm36;
	FAUSTFLOAT fHslider152;
	FAUSTFLOAT fHslider153;
	float fTempPerm37;
	FAUSTFLOAT fHslider154;
	FAUSTFLOAT fHslider155;
	FAUSTFLOAT fHslider156;
	FAUSTFLOAT fHslider157;
	FAUSTFLOAT fHslider158;
	float fTempPerm38;
	FAUSTFLOAT fHslider159;
	FAUSTFLOAT fHslider160;
	float fTempPerm39;
	float fTempPerm40;
	FAUSTFLOAT fHslider161;
	FAUSTFLOAT fHslider162;
	FAUSTFLOAT fHslider163;
	FAUSTFLOAT fHslider164;
	FAUSTFLOAT fHslider165;
	FAUSTFLOAT fHslider166;
	FAUSTFLOAT fHslider167;
	float fTempPerm41;
	FAUSTFLOAT fHslider168;
	FAUSTFLOAT fHslider169;
	float fTempPerm42;
	FAUSTFLOAT fHslider170;
	FAUSTFLOAT fHslider171;
	FAUSTFLOAT fHslider172;
	FAUSTFLOAT fHslider173;
	FAUSTFLOAT fHslider174;
	float fTempPerm43;
	FAUSTFLOAT fHslider175;
	FAUSTFLOAT fHslider176;
	float fTempPerm44;
	float fTempPerm45;
	FAUSTFLOAT fHslider177;
	FAUSTFLOAT fHslider178;
	FAUSTFLOAT fHslider179;
	FAUSTFLOAT fHslider180;
	FAUSTFLOAT fHslider181;
	FAUSTFLOAT fHslider182;
	FAUSTFLOAT fHslider183;
	float fTempPerm46;
	FAUSTFLOAT fHslider184;
	FAUSTFLOAT fHslider185;
	float fTempPerm47;
	FAUSTFLOAT fHslider186;
	FAUSTFLOAT fHslider187;
	FAUSTFLOAT fHslider188;
	FAUSTFLOAT fHslider189;
	FAUSTFLOAT fHslider190;
	float fTempPerm48;
	FAUSTFLOAT fHslider191;
	FAUSTFLOAT fHslider192;
	float fTempPerm49;
	float fTempPerm50;
	float fConst5;
	FAUSTFLOAT fEntry0;
	FAUSTFLOAT fHslider193;
	FAUSTFLOAT fVslider7;
	float fRec24[2];
	float fTempPerm51;
	float fRec25[2];
	FAUSTFLOAT fEntry1;
	FAUSTFLOAT fEntry2;
	float fTempPerm52;
	int iVec4[2];
	FAUSTFLOAT fCheckbox0;
	float fRec23[2];
	FAUSTFLOAT fVslider8;
	float fTempPerm53;
	float fRec26[2];
	float fTempPerm54;
	FAUSTFLOAT fHslider194;
	FAUSTFLOAT fHslider195;
	FAUSTFLOAT fHslider196;
	FAUSTFLOAT fHslider197;
	FAUSTFLOAT fHslider198;
	FAUSTFLOAT fHslider199;
	FAUSTFLOAT fHslider200;
	float fTempPerm55;
	FAUSTFLOAT fHslider201;
	FAUSTFLOAT fHslider202;
	float fTempPerm56;
	FAUSTFLOAT fHslider203;
	FAUSTFLOAT fHslider204;
	FAUSTFLOAT fHslider205;
	FAUSTFLOAT fHslider206;
	FAUSTFLOAT fHslider207;
	float fTempPerm57;
	FAUSTFLOAT fHslider208;
	FAUSTFLOAT fHslider209;
	float fTempPerm58;
	float fTempPerm59;
	FAUSTFLOAT fHslider210;
	FAUSTFLOAT fHslider211;
	FAUSTFLOAT fHslider212;
	FAUSTFLOAT fHslider213;
	FAUSTFLOAT fHslider214;
	FAUSTFLOAT fHslider215;
	FAUSTFLOAT fHslider216;
	float fTempPerm60;
	FAUSTFLOAT fHslider217;
	FAUSTFLOAT fHslider218;
	float fTempPerm61;
	FAUSTFLOAT fHslider219;
	FAUSTFLOAT fHslider220;
	FAUSTFLOAT fHslider221;
	FAUSTFLOAT fHslider222;
	FAUSTFLOAT fHslider223;
	float fTempPerm62;
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
	FAUSTFLOAT fHslider230;
	FAUSTFLOAT fHslider231;
	FAUSTFLOAT fHslider232;
	float fTempPerm70;
	FAUSTFLOAT fHslider233;
	FAUSTFLOAT fHslider234;
	float fTempPerm71;
	FAUSTFLOAT fHslider235;
	FAUSTFLOAT fHslider236;
	FAUSTFLOAT fHslider237;
	FAUSTFLOAT fHslider238;
	FAUSTFLOAT fHslider239;
	float fTempPerm72;
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
	FAUSTFLOAT fHslider246;
	FAUSTFLOAT fHslider247;
	FAUSTFLOAT fHslider248;
	float fTempPerm77;
	FAUSTFLOAT fHslider249;
	FAUSTFLOAT fHslider250;
	float fTempPerm78;
	FAUSTFLOAT fHslider251;
	FAUSTFLOAT fHslider252;
	FAUSTFLOAT fHslider253;
	FAUSTFLOAT fHslider254;
	FAUSTFLOAT fHslider255;
	float fTempPerm79;
	FAUSTFLOAT fHslider256;
	FAUSTFLOAT fHslider257;
	float fTempPerm80;
	float fTempPerm81;
	float fTempPerm82;
	float fTempPerm83;
	float fTempPerm84;
	float fRec20[2];
	float fTempPerm85;
	float fRec21[2];
	float fTempPerm86;
	float fTempPerm87;
	float fTempPerm88;
	float fTempPerm89;
	float fTempPerm90;
	float fTempPerm91;
	float fTempPerm92;
	float fTempPerm93;
	float fTempPerm94;
	float fRec27[2];
	float fTempPerm95;
	float fRec28[2];
	float fRec29[2];
	float fTempPerm96;
	float fTempPerm97;
	float fTempPerm98;
	float fTempPerm99;
	float fTempPerm100;
	float fTempPerm101;
	float fTempPerm102;
	float fRec32[2];
	float fTempPerm103;
	float fRec33[2];
	float fTempPerm104;
	float fTempPerm105;
	float fTempPerm106;
	float fVec5[2];
	FAUSTFLOAT fHslider258;
	FAUSTFLOAT fHslider259;
	FAUSTFLOAT fHslider260;
	FAUSTFLOAT fHslider261;
	FAUSTFLOAT fHslider262;
	FAUSTFLOAT fHslider263;
	FAUSTFLOAT fHslider264;
	float fTempPerm107;
	FAUSTFLOAT fHslider265;
	FAUSTFLOAT fHslider266;
	float fTempPerm108;
	FAUSTFLOAT fHslider267;
	FAUSTFLOAT fHslider268;
	FAUSTFLOAT fHslider269;
	FAUSTFLOAT fHslider270;
	FAUSTFLOAT fHslider271;
	float fTempPerm109;
	FAUSTFLOAT fHslider272;
	FAUSTFLOAT fHslider273;
	float fTempPerm110;
	float fTempPerm111;
	float fTempPerm112;
	float fTempPerm113;
	float fTempPerm114;
	float fTempPerm115;
	float fRec35[2];
	float fTempPerm116;
	float fTempPerm117;
	float fTempPerm118;
	float fTempPerm119;
	float fVec6[2];
	int iTempPerm120;
	int iVec7[2];
	int iTempPerm121;
	float fRec40[2];
	float fTempPerm122;
	float fRec39[2];
	float fRec38[2];
	float fRec37[2];
	float fRec36[2];
	float fRec34[2];
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
	float fRec41[2];
	float fTempPerm133;
	float fRec42[2];
	float fTempPerm134;
	float fTempPerm135;
	float fTempPerm136;
	float fRec44[2];
	float fTempPerm137;
	float fRec45[2];
	float fRec46[2];
	float fTempPerm138;
	float fTempPerm139;
	float fTempPerm140;
	float fTempPerm141;
	float fTempPerm142;
	float fRec49[2];
	float fTempPerm143;
	float fRec50[2];
	float fTempPerm144;
	float fVec8[2];
	float fTempPerm145;
	float fRec52[2];
	float fTempPerm146;
	float fTempPerm147;
	float fTempPerm148;
	float fTempPerm149;
	float fVec9[2];
	int iTempPerm150;
	int iVec10[2];
	int iTempPerm151;
	float fRec57[2];
	float fTempPerm152;
	float fRec56[2];
	float fRec55[2];
	float fRec54[2];
	float fRec53[2];
	float fRec51[2];
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
	float fTempPerm212;
	float fTempPerm213;
	float fTempPerm214;
	float fTempPerm215;
	float fTempPerm216;
	float fConst8;
	float fTempPerm217;
	float fTempPerm218;
	float fTempPerm219;
	float fTempPerm220;
	float fTempPerm221;
	float fRec58[2];
	float fTempPerm222;
	float fTempPerm223;
	float fTempPerm224;
	float fRec59[2];
	float fTempPerm225;
	float fTempPerm226;
	float fTempPerm227;
	float fTempPerm228;
	float fRec2[2];
	FAUSTFLOAT fHslider274;
	FAUSTFLOAT fHslider275;
	FAUSTFLOAT fHslider276;
	FAUSTFLOAT fHslider277;
	FAUSTFLOAT fHslider278;
	FAUSTFLOAT fHslider279;
	FAUSTFLOAT fHslider280;
	float fTempPerm229;
	FAUSTFLOAT fHslider281;
	FAUSTFLOAT fHslider282;
	float fTempPerm230;
	FAUSTFLOAT fHslider283;
	FAUSTFLOAT fHslider284;
	FAUSTFLOAT fHslider285;
	FAUSTFLOAT fHslider286;
	FAUSTFLOAT fHslider287;
	float fTempPerm231;
	FAUSTFLOAT fHslider288;
	FAUSTFLOAT fHslider289;
	float fTempPerm232;
	float fTempPerm233;
	FAUSTFLOAT fHslider290;
	FAUSTFLOAT fHslider291;
	FAUSTFLOAT fHslider292;
	FAUSTFLOAT fHslider293;
	FAUSTFLOAT fHslider294;
	FAUSTFLOAT fHslider295;
	FAUSTFLOAT fHslider296;
	float fTempPerm234;
	FAUSTFLOAT fHslider297;
	FAUSTFLOAT fHslider298;
	float fTempPerm235;
	FAUSTFLOAT fHslider299;
	FAUSTFLOAT fHslider300;
	FAUSTFLOAT fHslider301;
	FAUSTFLOAT fHslider302;
	FAUSTFLOAT fHslider303;
	float fTempPerm236;
	FAUSTFLOAT fHslider304;
	FAUSTFLOAT fHslider305;
	float fTempPerm237;
	float fTempPerm238;
	FAUSTFLOAT fHslider306;
	FAUSTFLOAT fHslider307;
	FAUSTFLOAT fHslider308;
	FAUSTFLOAT fHslider309;
	FAUSTFLOAT fHslider310;
	FAUSTFLOAT fHslider311;
	FAUSTFLOAT fHslider312;
	float fTempPerm239;
	FAUSTFLOAT fHslider313;
	FAUSTFLOAT fHslider314;
	float fTempPerm240;
	FAUSTFLOAT fHslider315;
	FAUSTFLOAT fHslider316;
	FAUSTFLOAT fHslider317;
	FAUSTFLOAT fHslider318;
	FAUSTFLOAT fHslider319;
	float fTempPerm241;
	FAUSTFLOAT fHslider320;
	FAUSTFLOAT fHslider321;
	float fTempPerm242;
	float fTempPerm243;
	FAUSTFLOAT fHslider322;
	FAUSTFLOAT fHslider323;
	FAUSTFLOAT fHslider324;
	FAUSTFLOAT fHslider325;
	FAUSTFLOAT fHslider326;
	FAUSTFLOAT fHslider327;
	FAUSTFLOAT fHslider328;
	float fTempPerm244;
	FAUSTFLOAT fHslider329;
	FAUSTFLOAT fHslider330;
	float fTempPerm245;
	FAUSTFLOAT fHslider331;
	FAUSTFLOAT fHslider332;
	FAUSTFLOAT fHslider333;
	FAUSTFLOAT fHslider334;
	FAUSTFLOAT fHslider335;
	float fTempPerm246;
	FAUSTFLOAT fHslider336;
	FAUSTFLOAT fHslider337;
	float fTempPerm247;
	float fTempPerm248;
	FAUSTFLOAT fHslider338;
	FAUSTFLOAT fHslider339;
	FAUSTFLOAT fHslider340;
	FAUSTFLOAT fHslider341;
	FAUSTFLOAT fHslider342;
	FAUSTFLOAT fHslider343;
	FAUSTFLOAT fHslider344;
	float fTempPerm249;
	FAUSTFLOAT fHslider345;
	FAUSTFLOAT fHslider346;
	float fTempPerm250;
	FAUSTFLOAT fHslider347;
	FAUSTFLOAT fHslider348;
	FAUSTFLOAT fHslider349;
	FAUSTFLOAT fHslider350;
	FAUSTFLOAT fHslider351;
	float fTempPerm251;
	FAUSTFLOAT fHslider352;
	FAUSTFLOAT fHslider353;
	float fTempPerm252;
	float fTempPerm253;
	float fTempPerm254;
	float fTempPerm255;
	float fTempPerm256;
	int iTempPerm257;
	FAUSTFLOAT fHslider354;
	FAUSTFLOAT fHslider355;
	FAUSTFLOAT fHslider356;
	FAUSTFLOAT fHslider357;
	FAUSTFLOAT fHslider358;
	FAUSTFLOAT fHslider359;
	FAUSTFLOAT fHslider360;
	float fTempPerm258;
	FAUSTFLOAT fHslider361;
	FAUSTFLOAT fHslider362;
	float fTempPerm259;
	FAUSTFLOAT fHslider363;
	FAUSTFLOAT fHslider364;
	FAUSTFLOAT fHslider365;
	FAUSTFLOAT fHslider366;
	FAUSTFLOAT fHslider367;
	float fTempPerm260;
	FAUSTFLOAT fHslider368;
	FAUSTFLOAT fHslider369;
	float fTempPerm261;
	float fTempPerm262;
	float fTempPerm263;
	float fTempPerm264;
	float fTempPerm265;
	float fRec60[2];
	float fTempPerm266;
	float fRec61[2];
	float fTempPerm267;
	float fTempPerm268;
	float fRec63[2];
	float fTempPerm269;
	float fRec64[2];
	float fRec65[2];
	float fTempPerm270;
	float fTempPerm271;
	float fTempPerm272;
	float fTempPerm273;
	float fTempPerm274;
	float fRec68[2];
	float fTempPerm275;
	float fRec69[2];
	float fTempPerm276;
	float fVec11[2];
	FAUSTFLOAT fHslider370;
	FAUSTFLOAT fHslider371;
	FAUSTFLOAT fHslider372;
	FAUSTFLOAT fHslider373;
	FAUSTFLOAT fHslider374;
	FAUSTFLOAT fHslider375;
	FAUSTFLOAT fHslider376;
	float fTempPerm277;
	FAUSTFLOAT fHslider377;
	FAUSTFLOAT fHslider378;
	float fTempPerm278;
	FAUSTFLOAT fHslider379;
	FAUSTFLOAT fHslider380;
	FAUSTFLOAT fHslider381;
	FAUSTFLOAT fHslider382;
	FAUSTFLOAT fHslider383;
	float fTempPerm279;
	FAUSTFLOAT fHslider384;
	FAUSTFLOAT fHslider385;
	float fTempPerm280;
	float fTempPerm281;
	float fTempPerm282;
	float fTempPerm283;
	float fTempPerm284;
	float fTempPerm285;
	float fRec71[2];
	float fTempPerm286;
	float fTempPerm287;
	float fTempPerm288;
	float fTempPerm289;
	float fVec12[2];
	int iTempPerm290;
	int iVec13[2];
	int iTempPerm291;
	float fRec76[2];
	float fTempPerm292;
	float fRec75[2];
	float fRec74[2];
	float fRec73[2];
	float fRec72[2];
	float fRec70[2];
	float fTempPerm293;
	float fTempPerm294;
	float fTempPerm295;
	float fTempPerm296;
	float fTempPerm297;
	float fTempPerm298;
	int iTempPerm299;
	float fTempPerm300;
	float fTempPerm301;
	float fTempPerm302;
	float fRec77[2];
	float fTempPerm303;
	float fRec78[2];
	float fTempPerm304;
	float fTempPerm305;
	float fRec80[2];
	float fTempPerm306;
	float fRec81[2];
	float fRec82[2];
	float fTempPerm307;
	float fTempPerm308;
	float fTempPerm309;
	float fTempPerm310;
	float fTempPerm311;
	float fRec85[2];
	float fTempPerm312;
	float fRec86[2];
	float fTempPerm313;
	float fVec14[2];
	float fTempPerm314;
	float fRec88[2];
	float fTempPerm315;
	float fTempPerm316;
	float fTempPerm317;
	float fTempPerm318;
	float fVec15[2];
	int iTempPerm319;
	int iVec16[2];
	int iTempPerm320;
	float fRec93[2];
	float fTempPerm321;
	float fRec92[2];
	float fRec91[2];
	float fRec90[2];
	float fRec89[2];
	float fRec87[2];
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
	float fTempPerm377;
	float fTempPerm378;
	float fTempPerm379;
	float fTempPerm380;
	float fTempPerm381;
	float fTempPerm382;
	float fTempPerm383;
	float fTempPerm384;
	float fTempPerm385;
	float fTempPerm386;
	float fTempPerm387;
	float fTempPerm388;
	float fTempPerm389;
	float fTempPerm390;
	float fRec94[2];
	float fTempPerm391;
	float fTempPerm392;
	float fTempPerm393;
	float fRec95[2];
	float fTempPerm394;
	float fTempPerm395;
	float fTempPerm396;
	float fTempPerm397;
	float fRec3[2];
	FAUSTFLOAT fHslider386;
	FAUSTFLOAT fHslider387;
	FAUSTFLOAT fHslider388;
	FAUSTFLOAT fHslider389;
	FAUSTFLOAT fHslider390;
	FAUSTFLOAT fHslider391;
	FAUSTFLOAT fHslider392;
	float fTempPerm398;
	FAUSTFLOAT fHslider393;
	FAUSTFLOAT fHslider394;
	float fTempPerm399;
	FAUSTFLOAT fHslider395;
	FAUSTFLOAT fHslider396;
	FAUSTFLOAT fHslider397;
	FAUSTFLOAT fHslider398;
	FAUSTFLOAT fHslider399;
	float fTempPerm400;
	FAUSTFLOAT fHslider400;
	FAUSTFLOAT fHslider401;
	float fTempPerm401;
	float fTempPerm402;
	FAUSTFLOAT fHslider402;
	FAUSTFLOAT fHslider403;
	FAUSTFLOAT fHslider404;
	FAUSTFLOAT fHslider405;
	FAUSTFLOAT fHslider406;
	FAUSTFLOAT fHslider407;
	FAUSTFLOAT fHslider408;
	float fTempPerm403;
	FAUSTFLOAT fHslider409;
	FAUSTFLOAT fHslider410;
	float fTempPerm404;
	FAUSTFLOAT fHslider411;
	FAUSTFLOAT fHslider412;
	FAUSTFLOAT fHslider413;
	FAUSTFLOAT fHslider414;
	FAUSTFLOAT fHslider415;
	float fTempPerm405;
	FAUSTFLOAT fHslider416;
	FAUSTFLOAT fHslider417;
	float fTempPerm406;
	float fTempPerm407;
	FAUSTFLOAT fHslider418;
	FAUSTFLOAT fHslider419;
	FAUSTFLOAT fHslider420;
	FAUSTFLOAT fHslider421;
	FAUSTFLOAT fHslider422;
	FAUSTFLOAT fHslider423;
	FAUSTFLOAT fHslider424;
	float fTempPerm408;
	FAUSTFLOAT fHslider425;
	FAUSTFLOAT fHslider426;
	float fTempPerm409;
	FAUSTFLOAT fHslider427;
	FAUSTFLOAT fHslider428;
	FAUSTFLOAT fHslider429;
	FAUSTFLOAT fHslider430;
	FAUSTFLOAT fHslider431;
	float fTempPerm410;
	FAUSTFLOAT fHslider432;
	FAUSTFLOAT fHslider433;
	float fTempPerm411;
	float fTempPerm412;
	FAUSTFLOAT fHslider434;
	FAUSTFLOAT fHslider435;
	FAUSTFLOAT fHslider436;
	FAUSTFLOAT fHslider437;
	FAUSTFLOAT fHslider438;
	FAUSTFLOAT fHslider439;
	FAUSTFLOAT fHslider440;
	float fTempPerm413;
	FAUSTFLOAT fHslider441;
	FAUSTFLOAT fHslider442;
	float fTempPerm414;
	FAUSTFLOAT fHslider443;
	FAUSTFLOAT fHslider444;
	FAUSTFLOAT fHslider445;
	FAUSTFLOAT fHslider446;
	FAUSTFLOAT fHslider447;
	float fTempPerm415;
	FAUSTFLOAT fHslider448;
	FAUSTFLOAT fHslider449;
	float fTempPerm416;
	float fTempPerm417;
	FAUSTFLOAT fHslider450;
	FAUSTFLOAT fHslider451;
	FAUSTFLOAT fHslider452;
	FAUSTFLOAT fHslider453;
	FAUSTFLOAT fHslider454;
	FAUSTFLOAT fHslider455;
	FAUSTFLOAT fHslider456;
	float fTempPerm418;
	FAUSTFLOAT fHslider457;
	FAUSTFLOAT fHslider458;
	float fTempPerm419;
	FAUSTFLOAT fHslider459;
	FAUSTFLOAT fHslider460;
	FAUSTFLOAT fHslider461;
	FAUSTFLOAT fHslider462;
	FAUSTFLOAT fHslider463;
	float fTempPerm420;
	FAUSTFLOAT fHslider464;
	FAUSTFLOAT fHslider465;
	float fTempPerm421;
	float fTempPerm422;
	float fTempPerm423;
	float fTempPerm424;
	float fTempPerm425;
	int iTempPerm426;
	FAUSTFLOAT fHslider466;
	FAUSTFLOAT fHslider467;
	FAUSTFLOAT fHslider468;
	FAUSTFLOAT fHslider469;
	FAUSTFLOAT fHslider470;
	FAUSTFLOAT fHslider471;
	FAUSTFLOAT fHslider472;
	float fTempPerm427;
	FAUSTFLOAT fHslider473;
	FAUSTFLOAT fHslider474;
	float fTempPerm428;
	FAUSTFLOAT fHslider475;
	FAUSTFLOAT fHslider476;
	FAUSTFLOAT fHslider477;
	FAUSTFLOAT fHslider478;
	float fTempPerm429;
	FAUSTFLOAT fHslider479;
	FAUSTFLOAT fHslider480;
	FAUSTFLOAT fHslider481;
	float fTempPerm430;
	float fTempPerm431;
	float fTempPerm432;
	float fTempPerm433;
	float fTempPerm434;
	float fRec96[2];
	float fTempPerm435;
	float fRec97[2];
	float fTempPerm436;
	float fTempPerm437;
	float fRec99[2];
	float fTempPerm438;
	float fRec100[2];
	float fRec101[2];
	float fTempPerm439;
	float fTempPerm440;
	float fTempPerm441;
	float fTempPerm442;
	float fTempPerm443;
	float fRec104[2];
	float fTempPerm444;
	float fRec105[2];
	float fTempPerm445;
	float fVec17[2];
	FAUSTFLOAT fHslider482;
	FAUSTFLOAT fHslider483;
	FAUSTFLOAT fHslider484;
	FAUSTFLOAT fHslider485;
	FAUSTFLOAT fHslider486;
	FAUSTFLOAT fHslider487;
	FAUSTFLOAT fHslider488;
	float fTempPerm446;
	FAUSTFLOAT fHslider489;
	FAUSTFLOAT fHslider490;
	float fTempPerm447;
	FAUSTFLOAT fHslider491;
	FAUSTFLOAT fHslider492;
	FAUSTFLOAT fHslider493;
	FAUSTFLOAT fHslider494;
	FAUSTFLOAT fHslider495;
	float fTempPerm448;
	FAUSTFLOAT fHslider496;
	FAUSTFLOAT fHslider497;
	float fTempPerm449;
	float fTempPerm450;
	float fTempPerm451;
	float fTempPerm452;
	float fTempPerm453;
	float fTempPerm454;
	float fRec107[2];
	float fTempPerm455;
	float fTempPerm456;
	float fTempPerm457;
	float fTempPerm458;
	float fVec18[2];
	int iTempPerm459;
	int iVec19[2];
	int iTempPerm460;
	float fRec112[2];
	float fTempPerm461;
	float fRec111[2];
	float fRec110[2];
	float fRec109[2];
	float fRec108[2];
	float fRec106[2];
	float fTempPerm462;
	float fTempPerm463;
	float fTempPerm464;
	float fTempPerm465;
	float fTempPerm466;
	float fTempPerm467;
	int iTempPerm468;
	float fTempPerm469;
	float fTempPerm470;
	float fTempPerm471;
	float fRec113[2];
	float fTempPerm472;
	float fRec114[2];
	float fTempPerm473;
	float fTempPerm474;
	float fRec116[2];
	float fTempPerm475;
	float fRec117[2];
	float fRec118[2];
	float fTempPerm476;
	float fTempPerm477;
	float fTempPerm478;
	float fTempPerm479;
	float fTempPerm480;
	float fRec121[2];
	float fTempPerm481;
	float fRec122[2];
	float fTempPerm482;
	float fVec20[2];
	float fTempPerm483;
	float fRec124[2];
	float fTempPerm484;
	float fTempPerm485;
	float fTempPerm486;
	float fTempPerm487;
	float fVec21[2];
	int iTempPerm488;
	int iVec22[2];
	int iTempPerm489;
	float fRec129[2];
	float fTempPerm490;
	float fRec128[2];
	float fRec127[2];
	float fRec126[2];
	float fRec125[2];
	float fRec123[2];
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
	float fTempPerm538;
	float fTempPerm539;
	float fTempPerm540;
	float fTempPerm541;
	float fTempPerm542;
	float fTempPerm543;
	float fTempPerm544;
	float fTempPerm545;
	float fTempPerm546;
	float fTempPerm547;
	float fTempPerm548;
	float fTempPerm549;
	float fTempPerm550;
	float fTempPerm551;
	float fTempPerm552;
	float fTempPerm553;
	float fTempPerm554;
	float fTempPerm555;
	float fTempPerm556;
	float fTempPerm557;
	float fTempPerm558;
	float fTempPerm559;
	float fRec130[2];
	float fTempPerm560;
	float fTempPerm561;
	float fTempPerm562;
	float fRec131[2];
	float fTempPerm563;
	float fTempPerm564;
	float fTempPerm565;
	float fTempPerm566;
	float fRec4[2];
	FAUSTFLOAT fHslider498;
	FAUSTFLOAT fHslider499;
	FAUSTFLOAT fHslider500;
	FAUSTFLOAT fHslider501;
	FAUSTFLOAT fHslider502;
	FAUSTFLOAT fHslider503;
	FAUSTFLOAT fHslider504;
	float fTempPerm567;
	FAUSTFLOAT fHslider505;
	FAUSTFLOAT fHslider506;
	float fTempPerm568;
	FAUSTFLOAT fHslider507;
	FAUSTFLOAT fHslider508;
	FAUSTFLOAT fHslider509;
	FAUSTFLOAT fHslider510;
	FAUSTFLOAT fHslider511;
	float fTempPerm569;
	FAUSTFLOAT fHslider512;
	FAUSTFLOAT fHslider513;
	float fTempPerm570;
	float fTempPerm571;
	FAUSTFLOAT fHslider514;
	FAUSTFLOAT fHslider515;
	FAUSTFLOAT fHslider516;
	FAUSTFLOAT fHslider517;
	FAUSTFLOAT fHslider518;
	FAUSTFLOAT fHslider519;
	FAUSTFLOAT fHslider520;
	float fTempPerm572;
	FAUSTFLOAT fHslider521;
	FAUSTFLOAT fHslider522;
	float fTempPerm573;
	FAUSTFLOAT fHslider523;
	FAUSTFLOAT fHslider524;
	FAUSTFLOAT fHslider525;
	FAUSTFLOAT fHslider526;
	FAUSTFLOAT fHslider527;
	float fTempPerm574;
	FAUSTFLOAT fHslider528;
	FAUSTFLOAT fHslider529;
	float fTempPerm575;
	float fTempPerm576;
	FAUSTFLOAT fHslider530;
	FAUSTFLOAT fHslider531;
	FAUSTFLOAT fHslider532;
	FAUSTFLOAT fHslider533;
	FAUSTFLOAT fHslider534;
	FAUSTFLOAT fHslider535;
	FAUSTFLOAT fHslider536;
	float fTempPerm577;
	FAUSTFLOAT fHslider537;
	FAUSTFLOAT fHslider538;
	float fTempPerm578;
	FAUSTFLOAT fHslider539;
	FAUSTFLOAT fHslider540;
	FAUSTFLOAT fHslider541;
	FAUSTFLOAT fHslider542;
	FAUSTFLOAT fHslider543;
	float fTempPerm579;
	FAUSTFLOAT fHslider544;
	FAUSTFLOAT fHslider545;
	float fTempPerm580;
	float fTempPerm581;
	FAUSTFLOAT fHslider546;
	FAUSTFLOAT fHslider547;
	FAUSTFLOAT fHslider548;
	FAUSTFLOAT fHslider549;
	FAUSTFLOAT fHslider550;
	FAUSTFLOAT fHslider551;
	FAUSTFLOAT fHslider552;
	float fTempPerm582;
	FAUSTFLOAT fHslider553;
	FAUSTFLOAT fHslider554;
	float fTempPerm583;
	FAUSTFLOAT fHslider555;
	FAUSTFLOAT fHslider556;
	FAUSTFLOAT fHslider557;
	FAUSTFLOAT fHslider558;
	FAUSTFLOAT fHslider559;
	float fTempPerm584;
	FAUSTFLOAT fHslider560;
	FAUSTFLOAT fHslider561;
	float fTempPerm585;
	float fTempPerm586;
	FAUSTFLOAT fHslider562;
	FAUSTFLOAT fHslider563;
	FAUSTFLOAT fHslider564;
	FAUSTFLOAT fHslider565;
	FAUSTFLOAT fHslider566;
	FAUSTFLOAT fHslider567;
	FAUSTFLOAT fHslider568;
	float fTempPerm587;
	FAUSTFLOAT fHslider569;
	FAUSTFLOAT fHslider570;
	float fTempPerm588;
	FAUSTFLOAT fHslider571;
	FAUSTFLOAT fHslider572;
	FAUSTFLOAT fHslider573;
	FAUSTFLOAT fHslider574;
	FAUSTFLOAT fHslider575;
	float fTempPerm589;
	FAUSTFLOAT fHslider576;
	FAUSTFLOAT fHslider577;
	float fTempPerm590;
	float fTempPerm591;
	float fTempPerm592;
	float fTempPerm593;
	float fTempPerm594;
	int iTempPerm595;
	FAUSTFLOAT fHslider578;
	FAUSTFLOAT fHslider579;
	FAUSTFLOAT fHslider580;
	FAUSTFLOAT fHslider581;
	FAUSTFLOAT fHslider582;
	FAUSTFLOAT fHslider583;
	FAUSTFLOAT fHslider584;
	float fTempPerm596;
	FAUSTFLOAT fHslider585;
	FAUSTFLOAT fHslider586;
	float fTempPerm597;
	FAUSTFLOAT fHslider587;
	FAUSTFLOAT fHslider588;
	FAUSTFLOAT fHslider589;
	FAUSTFLOAT fHslider590;
	FAUSTFLOAT fHslider591;
	float fTempPerm598;
	FAUSTFLOAT fHslider592;
	FAUSTFLOAT fHslider593;
	float fTempPerm599;
	float fTempPerm600;
	float fTempPerm601;
	float fTempPerm602;
	float fTempPerm603;
	float fRec132[2];
	float fTempPerm604;
	float fRec133[2];
	float fTempPerm605;
	float fTempPerm606;
	float fRec135[2];
	float fTempPerm607;
	float fRec136[2];
	float fRec137[2];
	float fTempPerm608;
	float fTempPerm609;
	float fTempPerm610;
	float fTempPerm611;
	float fTempPerm612;
	float fRec140[2];
	float fTempPerm613;
	float fRec141[2];
	float fTempPerm614;
	float fVec23[2];
	FAUSTFLOAT fHslider594;
	FAUSTFLOAT fHslider595;
	FAUSTFLOAT fHslider596;
	FAUSTFLOAT fHslider597;
	FAUSTFLOAT fHslider598;
	FAUSTFLOAT fHslider599;
	FAUSTFLOAT fHslider600;
	float fTempPerm615;
	FAUSTFLOAT fHslider601;
	FAUSTFLOAT fHslider602;
	float fTempPerm616;
	FAUSTFLOAT fHslider603;
	FAUSTFLOAT fHslider604;
	FAUSTFLOAT fHslider605;
	FAUSTFLOAT fHslider606;
	FAUSTFLOAT fHslider607;
	float fTempPerm617;
	FAUSTFLOAT fHslider608;
	FAUSTFLOAT fHslider609;
	float fTempPerm618;
	float fTempPerm619;
	float fTempPerm620;
	float fTempPerm621;
	float fTempPerm622;
	float fTempPerm623;
	float fRec143[2];
	float fTempPerm624;
	float fTempPerm625;
	float fTempPerm626;
	float fTempPerm627;
	float fVec24[2];
	int iTempPerm628;
	int iVec25[2];
	int iTempPerm629;
	float fRec148[2];
	float fTempPerm630;
	float fRec147[2];
	float fRec146[2];
	float fRec145[2];
	float fRec144[2];
	float fRec142[2];
	float fTempPerm631;
	float fTempPerm632;
	float fTempPerm633;
	float fTempPerm634;
	float fTempPerm635;
	float fTempPerm636;
	int iTempPerm637;
	float fTempPerm638;
	float fTempPerm639;
	float fTempPerm640;
	float fRec149[2];
	float fTempPerm641;
	float fRec150[2];
	float fTempPerm642;
	float fTempPerm643;
	float fRec152[2];
	float fTempPerm644;
	float fRec153[2];
	float fRec154[2];
	float fTempPerm645;
	float fTempPerm646;
	float fTempPerm647;
	float fTempPerm648;
	float fTempPerm649;
	float fRec157[2];
	float fTempPerm650;
	float fRec158[2];
	float fTempPerm651;
	float fVec26[2];
	float fTempPerm652;
	float fRec160[2];
	float fTempPerm653;
	float fTempPerm654;
	float fTempPerm655;
	float fTempPerm656;
	float fVec27[2];
	int iTempPerm657;
	int iVec28[2];
	int iTempPerm658;
	float fRec165[2];
	float fTempPerm659;
	float fRec164[2];
	float fRec163[2];
	float fRec162[2];
	float fRec161[2];
	float fRec159[2];
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
	float fTempPerm699;
	float fTempPerm700;
	float fTempPerm701;
	float fTempPerm702;
	float fTempPerm703;
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
	float fTempPerm720;
	float fTempPerm721;
	float fTempPerm722;
	float fTempPerm723;
	float fTempPerm724;
	float fTempPerm725;
	float fTempPerm726;
	float fTempPerm727;
	float fTempPerm728;
	float fRec166[2];
	float fTempPerm729;
	float fTempPerm730;
	float fTempPerm731;
	float fRec167[2];
	float fTempPerm732;
	float fTempPerm733;
	float fTempPerm734;
	float fTempPerm735;
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
	float fTempPerm736;
	float fTempPerm737;
	float fTempPerm738;
	float fTempPerm739;
	float fTempPerm740;
	float fTempPerm741;
	float fTempPerm742;
	float fTempPerm743;
	float fTempPerm744;
	float fTempPerm745;
	float fTempPerm746;
	float fTempPerm747;
	float fTempPerm748;
	float fTempPerm749;
	float fTempPerm750;
	float fTempPerm751;
	int iTempPerm752;
	float fTempPerm753;
	float fTempPerm754;
	float fTempPerm755;
	float fTempPerm756;
	float fTempPerm757;
	float fTempPerm758;
	float fTempPerm759;
	float fRec172[2];
	float fTempPerm760;
	float fRec173[2];
	float fTempPerm761;
	float fTempPerm762;
	float fTempPerm763;
	float fTempPerm764;
	float fTempPerm765;
	float fTempPerm766;
	float fTempPerm767;
	float fTempPerm768;
	float fTempPerm769;
	float fRec175[2];
	float fTempPerm770;
	float fRec176[2];
	float fRec177[2];
	float fTempPerm771;
	float fTempPerm772;
	float fTempPerm773;
	float fTempPerm774;
	float fTempPerm775;
	float fTempPerm776;
	float fTempPerm777;
	float fRec180[2];
	float fTempPerm778;
	float fRec181[2];
	float fTempPerm779;
	float fTempPerm780;
	float fTempPerm781;
	float fVec29[2];
	float fTempPerm782;
	float fTempPerm783;
	float fTempPerm784;
	float fTempPerm785;
	float fTempPerm786;
	float fRec183[2];
	float fTempPerm787;
	float fTempPerm788;
	float fTempPerm789;
	float fTempPerm790;
	float fVec30[2];
	int iTempPerm791;
	int iVec31[2];
	int iTempPerm792;
	float fRec188[2];
	float fTempPerm793;
	float fRec187[2];
	float fRec186[2];
	float fRec185[2];
	float fRec184[2];
	float fRec182[2];
	float fTempPerm794;
	float fTempPerm795;
	float fTempPerm796;
	float fTempPerm797;
	float fTempPerm798;
	float fTempPerm799;
	int iTempPerm800;
	float fTempPerm801;
	float fTempPerm802;
	float fTempPerm803;
	float fRec189[2];
	float fTempPerm804;
	float fRec190[2];
	float fTempPerm805;
	float fTempPerm806;
	float fTempPerm807;
	float fRec192[2];
	float fTempPerm808;
	float fRec193[2];
	float fRec194[2];
	float fTempPerm809;
	float fTempPerm810;
	float fTempPerm811;
	float fTempPerm812;
	float fTempPerm813;
	float fRec197[2];
	float fTempPerm814;
	float fRec198[2];
	float fTempPerm815;
	float fVec32[2];
	float fTempPerm816;
	float fRec200[2];
	float fTempPerm817;
	float fTempPerm818;
	float fTempPerm819;
	float fTempPerm820;
	float fVec33[2];
	int iTempPerm821;
	int iVec34[2];
	int iTempPerm822;
	float fRec205[2];
	float fTempPerm823;
	float fRec204[2];
	float fRec203[2];
	float fRec202[2];
	float fRec201[2];
	float fRec199[2];
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
	float fTempPerm855;
	float fTempPerm856;
	float fTempPerm857;
	float fTempPerm858;
	float fTempPerm859;
	float fTempPerm860;
	float fTempPerm861;
	float fTempPerm862;
	float fTempPerm863;
	float fTempPerm864;
	float fTempPerm865;
	float fTempPerm866;
	float fTempPerm867;
	float fTempPerm868;
	float fTempPerm869;
	float fTempPerm870;
	float fTempPerm871;
	float fTempPerm872;
	float fTempPerm873;
	float fTempPerm874;
	float fTempPerm875;
	float fTempPerm876;
	float fTempPerm877;
	float fTempPerm878;
	float fTempPerm879;
	float fTempPerm880;
	float fTempPerm881;
	float fTempPerm882;
	float fTempPerm883;
	float fTempPerm884;
	float fTempPerm885;
	float fTempPerm886;
	float fTempPerm887;
	float fTempPerm888;
	float fTempPerm889;
	float fTempPerm890;
	float fTempPerm891;
	float fTempPerm892;
	float fRec206[2];
	float fTempPerm893;
	float fTempPerm894;
	float fTempPerm895;
	float fRec207[2];
	float fTempPerm896;
	float fTempPerm897;
	float fTempPerm898;
	float fTempPerm899;
	float fRec168[2];
	float fTempPerm900;
	float fTempPerm901;
	float fTempPerm902;
	float fTempPerm903;
	float fTempPerm904;
	float fTempPerm905;
	float fTempPerm906;
	float fTempPerm907;
	int iTempPerm908;
	float fTempPerm909;
	float fTempPerm910;
	float fTempPerm911;
	float fTempPerm912;
	float fRec208[2];
	float fTempPerm913;
	float fRec209[2];
	float fTempPerm914;
	float fTempPerm915;
	float fRec211[2];
	float fTempPerm916;
	float fRec212[2];
	float fRec213[2];
	float fTempPerm917;
	float fTempPerm918;
	float fTempPerm919;
	float fTempPerm920;
	float fTempPerm921;
	float fRec216[2];
	float fTempPerm922;
	float fRec217[2];
	float fTempPerm923;
	float fVec35[2];
	float fTempPerm924;
	float fTempPerm925;
	float fTempPerm926;
	float fTempPerm927;
	float fTempPerm928;
	float fRec219[2];
	float fTempPerm929;
	float fTempPerm930;
	float fTempPerm931;
	float fTempPerm932;
	float fVec36[2];
	int iTempPerm933;
	int iVec37[2];
	int iTempPerm934;
	float fRec224[2];
	float fTempPerm935;
	float fRec223[2];
	float fRec222[2];
	float fRec221[2];
	float fRec220[2];
	float fRec218[2];
	float fTempPerm936;
	float fTempPerm937;
	float fTempPerm938;
	float fTempPerm939;
	float fTempPerm940;
	float fTempPerm941;
	int iTempPerm942;
	float fTempPerm943;
	float fTempPerm944;
	float fTempPerm945;
	float fRec225[2];
	float fTempPerm946;
	float fRec226[2];
	float fTempPerm947;
	float fTempPerm948;
	float fRec228[2];
	float fTempPerm949;
	float fRec229[2];
	float fRec230[2];
	float fTempPerm950;
	float fTempPerm951;
	float fTempPerm952;
	float fTempPerm953;
	float fTempPerm954;
	float fRec233[2];
	float fTempPerm955;
	float fRec234[2];
	float fTempPerm956;
	float fVec38[2];
	float fTempPerm957;
	float fRec236[2];
	float fTempPerm958;
	float fTempPerm959;
	float fTempPerm960;
	float fTempPerm961;
	float fVec39[2];
	int iTempPerm962;
	int iVec40[2];
	int iTempPerm963;
	float fRec241[2];
	float fTempPerm964;
	float fRec240[2];
	float fRec239[2];
	float fRec238[2];
	float fRec237[2];
	float fRec235[2];
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
	float fTempPerm988;
	float fTempPerm989;
	float fTempPerm990;
	float fTempPerm991;
	float fTempPerm992;
	float fTempPerm993;
	float fTempPerm994;
	float fTempPerm995;
	float fTempPerm996;
	float fTempPerm997;
	float fTempPerm998;
	float fTempPerm999;
	float fTempPerm1000;
	float fTempPerm1001;
	float fTempPerm1002;
	float fTempPerm1003;
	float fTempPerm1004;
	float fTempPerm1005;
	float fTempPerm1006;
	float fTempPerm1007;
	float fTempPerm1008;
	float fTempPerm1009;
	float fTempPerm1010;
	float fTempPerm1011;
	float fTempPerm1012;
	float fTempPerm1013;
	float fTempPerm1014;
	float fTempPerm1015;
	float fTempPerm1016;
	float fTempPerm1017;
	float fTempPerm1018;
	float fTempPerm1019;
	float fTempPerm1020;
	float fTempPerm1021;
	float fTempPerm1022;
	float fTempPerm1023;
	float fTempPerm1024;
	float fTempPerm1025;
	float fTempPerm1026;
	float fTempPerm1027;
	float fTempPerm1028;
	float fTempPerm1029;
	float fTempPerm1030;
	float fTempPerm1031;
	float fTempPerm1032;
	float fTempPerm1033;
	float fRec242[2];
	float fTempPerm1034;
	float fTempPerm1035;
	float fTempPerm1036;
	float fRec243[2];
	float fTempPerm1037;
	float fTempPerm1038;
	float fTempPerm1039;
	float fTempPerm1040;
	float fRec169[2];
	float fTempPerm1041;
	float fTempPerm1042;
	float fTempPerm1043;
	float fTempPerm1044;
	float fTempPerm1045;
	float fTempPerm1046;
	float fTempPerm1047;
	float fTempPerm1048;
	int iTempPerm1049;
	float fTempPerm1050;
	float fTempPerm1051;
	float fTempPerm1052;
	float fTempPerm1053;
	float fRec244[2];
	float fTempPerm1054;
	float fRec245[2];
	float fTempPerm1055;
	float fTempPerm1056;
	float fRec247[2];
	float fTempPerm1057;
	float fRec248[2];
	float fRec249[2];
	float fTempPerm1058;
	float fTempPerm1059;
	float fTempPerm1060;
	float fTempPerm1061;
	float fTempPerm1062;
	float fRec252[2];
	float fTempPerm1063;
	float fRec253[2];
	float fTempPerm1064;
	float fVec41[2];
	float fTempPerm1065;
	float fTempPerm1066;
	float fTempPerm1067;
	float fTempPerm1068;
	float fTempPerm1069;
	float fRec255[2];
	float fTempPerm1070;
	float fTempPerm1071;
	float fTempPerm1072;
	float fTempPerm1073;
	float fVec42[2];
	int iTempPerm1074;
	int iVec43[2];
	int iTempPerm1075;
	float fRec260[2];
	float fTempPerm1076;
	float fRec259[2];
	float fRec258[2];
	float fRec257[2];
	float fRec256[2];
	float fRec254[2];
	float fTempPerm1077;
	float fTempPerm1078;
	float fTempPerm1079;
	float fTempPerm1080;
	float fTempPerm1081;
	float fTempPerm1082;
	int iTempPerm1083;
	float fTempPerm1084;
	float fTempPerm1085;
	float fTempPerm1086;
	float fRec261[2];
	float fTempPerm1087;
	float fRec262[2];
	float fTempPerm1088;
	float fTempPerm1089;
	float fRec264[2];
	float fTempPerm1090;
	float fRec265[2];
	float fRec266[2];
	float fTempPerm1091;
	float fTempPerm1092;
	float fTempPerm1093;
	float fTempPerm1094;
	float fTempPerm1095;
	float fRec269[2];
	float fTempPerm1096;
	float fRec270[2];
	float fTempPerm1097;
	float fVec44[2];
	float fTempPerm1098;
	float fRec272[2];
	float fTempPerm1099;
	float fTempPerm1100;
	float fTempPerm1101;
	float fTempPerm1102;
	float fVec45[2];
	int iTempPerm1103;
	int iVec46[2];
	int iTempPerm1104;
	float fRec277[2];
	float fTempPerm1105;
	float fRec276[2];
	float fRec275[2];
	float fRec274[2];
	float fRec273[2];
	float fRec271[2];
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
	float fTempPerm1121;
	float fTempPerm1122;
	float fTempPerm1123;
	float fTempPerm1124;
	float fTempPerm1125;
	float fTempPerm1126;
	float fTempPerm1127;
	float fTempPerm1128;
	float fTempPerm1129;
	float fTempPerm1130;
	float fTempPerm1131;
	float fTempPerm1132;
	float fTempPerm1133;
	float fTempPerm1134;
	float fTempPerm1135;
	float fTempPerm1136;
	float fTempPerm1137;
	float fTempPerm1138;
	float fTempPerm1139;
	float fTempPerm1140;
	float fTempPerm1141;
	float fTempPerm1142;
	float fTempPerm1143;
	float fTempPerm1144;
	float fTempPerm1145;
	float fTempPerm1146;
	float fTempPerm1147;
	float fTempPerm1148;
	float fTempPerm1149;
	float fTempPerm1150;
	float fTempPerm1151;
	float fTempPerm1152;
	float fTempPerm1153;
	float fTempPerm1154;
	float fTempPerm1155;
	float fTempPerm1156;
	float fTempPerm1157;
	float fTempPerm1158;
	float fTempPerm1159;
	float fTempPerm1160;
	float fTempPerm1161;
	float fTempPerm1162;
	float fTempPerm1163;
	float fTempPerm1164;
	float fTempPerm1165;
	float fTempPerm1166;
	float fTempPerm1167;
	float fTempPerm1168;
	float fTempPerm1169;
	float fTempPerm1170;
	float fTempPerm1171;
	float fTempPerm1172;
	float fTempPerm1173;
	float fTempPerm1174;
	float fRec278[2];
	float fTempPerm1175;
	float fTempPerm1176;
	float fTempPerm1177;
	float fRec279[2];
	float fTempPerm1178;
	float fTempPerm1179;
	float fTempPerm1180;
	float fTempPerm1181;
	float fRec170[2];
	float fTempPerm1182;
	float fTempPerm1183;
	float fTempPerm1184;
	float fTempPerm1185;
	float fTempPerm1186;
	float fTempPerm1187;
	float fTempPerm1188;
	float fTempPerm1189;
	int iTempPerm1190;
	float fTempPerm1191;
	float fTempPerm1192;
	float fTempPerm1193;
	float fTempPerm1194;
	float fRec280[2];
	float fTempPerm1195;
	float fRec281[2];
	float fTempPerm1196;
	float fTempPerm1197;
	float fRec283[2];
	float fTempPerm1198;
	float fRec284[2];
	float fRec285[2];
	float fTempPerm1199;
	float fTempPerm1200;
	float fTempPerm1201;
	float fTempPerm1202;
	float fTempPerm1203;
	float fRec288[2];
	float fTempPerm1204;
	float fRec289[2];
	float fTempPerm1205;
	float fVec47[2];
	float fTempPerm1206;
	float fTempPerm1207;
	float fTempPerm1208;
	float fTempPerm1209;
	float fTempPerm1210;
	float fRec291[2];
	float fTempPerm1211;
	float fTempPerm1212;
	float fTempPerm1213;
	float fTempPerm1214;
	float fVec48[2];
	int iTempPerm1215;
	int iVec49[2];
	int iTempPerm1216;
	float fRec296[2];
	float fTempPerm1217;
	float fRec295[2];
	float fRec294[2];
	float fRec293[2];
	float fRec292[2];
	float fRec290[2];
	float fTempPerm1218;
	float fTempPerm1219;
	float fTempPerm1220;
	float fTempPerm1221;
	float fTempPerm1222;
	float fTempPerm1223;
	int iTempPerm1224;
	float fTempPerm1225;
	float fTempPerm1226;
	float fTempPerm1227;
	float fRec297[2];
	float fTempPerm1228;
	float fRec298[2];
	float fTempPerm1229;
	float fTempPerm1230;
	float fRec300[2];
	float fTempPerm1231;
	float fRec301[2];
	float fRec302[2];
	float fTempPerm1232;
	float fTempPerm1233;
	float fTempPerm1234;
	float fTempPerm1235;
	float fTempPerm1236;
	float fRec305[2];
	float fTempPerm1237;
	float fRec306[2];
	float fTempPerm1238;
	float fVec50[2];
	float fTempPerm1239;
	float fRec308[2];
	float fTempPerm1240;
	float fTempPerm1241;
	float fTempPerm1242;
	float fTempPerm1243;
	float fVec51[2];
	int iTempPerm1244;
	int iVec52[2];
	int iTempPerm1245;
	float fRec313[2];
	float fTempPerm1246;
	float fRec312[2];
	float fRec311[2];
	float fRec310[2];
	float fRec309[2];
	float fRec307[2];
	float fTempPerm1247;
	float fTempPerm1248;
	float fTempPerm1249;
	float fTempPerm1250;
	float fTempPerm1251;
	float fTempPerm1252;
	float fTempPerm1253;
	float fTempPerm1254;
	float fTempPerm1255;
	float fTempPerm1256;
	float fTempPerm1257;
	float fTempPerm1258;
	float fTempPerm1259;
	float fTempPerm1260;
	float fTempPerm1261;
	float fTempPerm1262;
	float fTempPerm1263;
	float fTempPerm1264;
	float fTempPerm1265;
	float fTempPerm1266;
	float fTempPerm1267;
	float fTempPerm1268;
	float fTempPerm1269;
	float fTempPerm1270;
	float fTempPerm1271;
	float fTempPerm1272;
	float fTempPerm1273;
	float fTempPerm1274;
	float fTempPerm1275;
	float fTempPerm1276;
	float fTempPerm1277;
	float fTempPerm1278;
	float fTempPerm1279;
	float fTempPerm1280;
	float fTempPerm1281;
	float fTempPerm1282;
	float fTempPerm1283;
	float fTempPerm1284;
	float fTempPerm1285;
	float fTempPerm1286;
	float fTempPerm1287;
	float fTempPerm1288;
	float fTempPerm1289;
	float fTempPerm1290;
	float fTempPerm1291;
	float fTempPerm1292;
	float fTempPerm1293;
	float fTempPerm1294;
	float fTempPerm1295;
	float fTempPerm1296;
	float fTempPerm1297;
	float fTempPerm1298;
	float fTempPerm1299;
	float fTempPerm1300;
	float fTempPerm1301;
	float fTempPerm1302;
	float fTempPerm1303;
	float fTempPerm1304;
	float fTempPerm1305;
	float fTempPerm1306;
	float fTempPerm1307;
	float fTempPerm1308;
	float fTempPerm1309;
	float fTempPerm1310;
	float fTempPerm1311;
	float fTempPerm1312;
	float fTempPerm1313;
	float fTempPerm1314;
	float fTempPerm1315;
	float fRec314[2];
	float fTempPerm1316;
	float fTempPerm1317;
	float fTempPerm1318;
	float fRec315[2];
	float fTempPerm1319;
	float fTempPerm1320;
	float fTempPerm1321;
	float fTempPerm1322;
	float fRec171[2];
	int iVec3[2];
	int iRec10[2];

 public:
	mydsp() {}

	int getNumInputs() {
		return 0;
	}
	int getNumOutputs() {
		return 2;
	}

	static void classInit(int sample_rate) {}

	void staticInit(int sample_rate) {
		for (int l9_re0 = 0; l9_re0 < 2; l9_re0 = l9_re0 + 1) {
			iVec3[l9_re0] = 0;
		}
		for (int l10_re0 = 0; l10_re0 < 2; l10_re0 = l10_re0 + 1) {
			iRec10[l10_re0] = 0;
		}
		for (int i1_re0 = 0; i1_re0 < 65536; i1_re0 = i1_re0 + 1) {
			iVec3[0] = 1;
			iRec10[0] = (iVec3[1] + iRec10[1]) % 65536;
			ftbl0mydspSIG0[i1_re0] = std::sin(9.58738019e-05f * float(iRec10[0]));
			iVec3[1] = iVec3[0];
			iRec10[1] = iRec10[0];
		}
	}

	void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(192000.0f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 1.0f / fConst0;
		fConst2 = 3.14159274f / fConst0;
		fConst3 = 0.5f * fConst0;
		fConst4 = fConst3 + -10.0f;
		fConst5 = 0.00390625f / fConst0;
		fConst6 = 8.0f / fConst0;
		fConst7 = 0.00390625f * fConst0;
		fConst8 = 0.25f * fConst0;
	}

	void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(0.0f);
		fHslider1 = FAUSTFLOAT(0.5f);
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(0.10000000000000001f);
		fHslider3 = FAUSTFLOAT(0.01f);
		fHslider4 = FAUSTFLOAT(0.10000000000000001f);
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
		fHslider20 = FAUSTFLOAT(0.0f);
		fHslider21 = FAUSTFLOAT(0.0f);
		fHslider22 = FAUSTFLOAT(0.0f);
		fHslider23 = FAUSTFLOAT(0.10000000000000001f);
		fHslider24 = FAUSTFLOAT(0.01f);
		fHslider25 = FAUSTFLOAT(0.10000000000000001f);
		fHslider26 = FAUSTFLOAT(0.75f);
		fHslider27 = FAUSTFLOAT(0.0f);
		fHslider28 = FAUSTFLOAT(0.10000000000000001f);
		fHslider29 = FAUSTFLOAT(0.01f);
		fHslider30 = FAUSTFLOAT(0.10000000000000001f);
		fHslider31 = FAUSTFLOAT(0.75f);
		fHslider32 = FAUSTFLOAT(0.0f);
		fHslider33 = FAUSTFLOAT(0.10000000000000001f);
		fHslider34 = FAUSTFLOAT(0.01f);
		fHslider35 = FAUSTFLOAT(0.10000000000000001f);
		fHslider36 = FAUSTFLOAT(0.75f);
		fHslider37 = FAUSTFLOAT(0.0f);
		fHslider38 = FAUSTFLOAT(0.10000000000000001f);
		fHslider39 = FAUSTFLOAT(0.01f);
		fHslider40 = FAUSTFLOAT(0.10000000000000001f);
		fHslider41 = FAUSTFLOAT(0.75f);
		fHslider42 = FAUSTFLOAT(1.0f);
		fHslider43 = FAUSTFLOAT(1.0f);
		fHslider44 = FAUSTFLOAT(1.0f);
		fHslider45 = FAUSTFLOAT(1.0f);
		fVslider1 = FAUSTFLOAT(0.0f);
		fVslider2 = FAUSTFLOAT(0.0f);
		fVslider3 = FAUSTFLOAT(0.0f);
		fHslider46 = FAUSTFLOAT(0.0f);
		fHslider47 = FAUSTFLOAT(0.10000000000000001f);
		fHslider48 = FAUSTFLOAT(0.10000000000000001f);
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
		fHslider63 = FAUSTFLOAT(0.0f);
		fHslider64 = FAUSTFLOAT(0.0f);
		fHslider65 = FAUSTFLOAT(0.0f);
		fHslider66 = FAUSTFLOAT(0.0f);
		fHslider67 = FAUSTFLOAT(0.10000000000000001f);
		fHslider68 = FAUSTFLOAT(0.10000000000000001f);
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
		fHslider81 = FAUSTFLOAT(0.0f);
		fHslider82 = FAUSTFLOAT(0.0f);
		fHslider83 = FAUSTFLOAT(0.0f);
		fHslider84 = FAUSTFLOAT(0.10000000000000001f);
		fHslider85 = FAUSTFLOAT(0.10000000000000001f);
		fHslider86 = FAUSTFLOAT(0.0f);
		fHslider87 = FAUSTFLOAT(0.0f);
		fVslider4 = FAUSTFLOAT(2.0f);
		fVslider5 = FAUSTFLOAT(2.0f);
		fVslider6 = FAUSTFLOAT(2.0f);
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
		fHslider193 = FAUSTFLOAT(440.0f);
		fVslider7 = FAUSTFLOAT(0.0f);
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
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			fVec0[l0] = 0.0f;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			iVec1[l1] = 0;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			iVec2[l2] = 0;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			iRec1[l3] = 0;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fRec0[l4] = 0.0f;
		}
		for (int l5 = 0; l5 < 2; l5 = l5 + 1) {
			fRec6[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec7[l6] = 0.0f;
		}
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			fRec8[l7] = 0.0f;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			fRec9[l8] = 0.0f;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec11[l11] = 0.0f;
		}
		for (int l12 = 0; l12 < 2; l12 = l12 + 1) {
			fRec12[l12] = 0.0f;
		}
		for (int l13 = 0; l13 < 2; l13 = l13 + 1) {
			fRec13[l13] = 0.0f;
		}
		for (int l14 = 0; l14 < 2; l14 = l14 + 1) {
			fRec14[l14] = 0.0f;
		}
		for (int l15 = 0; l15 < 2; l15 = l15 + 1) {
			iRec16[l15] = 0;
		}
		for (int l16 = 0; l16 < 2; l16 = l16 + 1) {
			fRec15[l16] = 0.0f;
		}
		for (int l17 = 0; l17 < 2; l17 = l17 + 1) {
			fRec17[l17] = 0.0f;
		}
		for (int l18 = 0; l18 < 2; l18 = l18 + 1) {
			fRec18[l18] = 0.0f;
		}
		for (int l19 = 0; l19 < 2; l19 = l19 + 1) {
			fRec19[l19] = 0.0f;
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
		for (int l20 = 0; l20 < 2; l20 = l20 + 1) {
			fRec24[l20] = 0.0f;
		}
		fTempPerm51 = 0.0f;
		for (int l21 = 0; l21 < 2; l21 = l21 + 1) {
			fRec25[l21] = 0.0f;
		}
		fTempPerm52 = 0.0f;
		for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
			iVec4[l22] = 0;
		}
		for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
			fRec23[l23] = 0.0f;
		}
		fTempPerm53 = 0.0f;
		for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
			fRec26[l24] = 0.0f;
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
		for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
			fRec20[l25] = 0.0f;
		}
		fTempPerm85 = 0.0f;
		for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
			fRec21[l26] = 0.0f;
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
		for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
			fRec27[l27] = 0.0f;
		}
		fTempPerm95 = 0.0f;
		for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
			fRec28[l28] = 0.0f;
		}
		for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
			fRec29[l29] = 0.0f;
		}
		fTempPerm96 = 0.0f;
		fTempPerm97 = 0.0f;
		fTempPerm98 = 0.0f;
		fTempPerm99 = 0.0f;
		fTempPerm100 = 0.0f;
		fTempPerm101 = 0.0f;
		fTempPerm102 = 0.0f;
		for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
			fRec32[l30] = 0.0f;
		}
		fTempPerm103 = 0.0f;
		for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
			fRec33[l31] = 0.0f;
		}
		fTempPerm104 = 0.0f;
		fTempPerm105 = 0.0f;
		fTempPerm106 = 0.0f;
		for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
			fVec5[l32] = 0.0f;
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
		for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
			fRec35[l33] = 0.0f;
		}
		fTempPerm116 = 0.0f;
		fTempPerm117 = 0.0f;
		fTempPerm118 = 0.0f;
		fTempPerm119 = 0.0f;
		for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
			fVec6[l34] = 0.0f;
		}
		iTempPerm120 = 0;
		for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
			iVec7[l35] = 0;
		}
		iTempPerm121 = 0;
		for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
			fRec40[l36] = 0.0f;
		}
		fTempPerm122 = 0.0f;
		for (int l37 = 0; l37 < 2; l37 = l37 + 1) {
			fRec39[l37] = 0.0f;
		}
		for (int l38 = 0; l38 < 2; l38 = l38 + 1) {
			fRec38[l38] = 0.0f;
		}
		for (int l39 = 0; l39 < 2; l39 = l39 + 1) {
			fRec37[l39] = 0.0f;
		}
		for (int l40 = 0; l40 < 2; l40 = l40 + 1) {
			fRec36[l40] = 0.0f;
		}
		for (int l41 = 0; l41 < 2; l41 = l41 + 1) {
			fRec34[l41] = 0.0f;
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
		for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
			fRec41[l42] = 0.0f;
		}
		fTempPerm133 = 0.0f;
		for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
			fRec42[l43] = 0.0f;
		}
		fTempPerm134 = 0.0f;
		fTempPerm135 = 0.0f;
		fTempPerm136 = 0.0f;
		for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
			fRec44[l44] = 0.0f;
		}
		fTempPerm137 = 0.0f;
		for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
			fRec45[l45] = 0.0f;
		}
		for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
			fRec46[l46] = 0.0f;
		}
		fTempPerm138 = 0.0f;
		fTempPerm139 = 0.0f;
		fTempPerm140 = 0.0f;
		fTempPerm141 = 0.0f;
		fTempPerm142 = 0.0f;
		for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
			fRec49[l47] = 0.0f;
		}
		fTempPerm143 = 0.0f;
		for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
			fRec50[l48] = 0.0f;
		}
		fTempPerm144 = 0.0f;
		for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
			fVec8[l49] = 0.0f;
		}
		fTempPerm145 = 0.0f;
		for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
			fRec52[l50] = 0.0f;
		}
		fTempPerm146 = 0.0f;
		fTempPerm147 = 0.0f;
		fTempPerm148 = 0.0f;
		fTempPerm149 = 0.0f;
		for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
			fVec9[l51] = 0.0f;
		}
		iTempPerm150 = 0;
		for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
			iVec10[l52] = 0;
		}
		iTempPerm151 = 0;
		for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
			fRec57[l53] = 0.0f;
		}
		fTempPerm152 = 0.0f;
		for (int l54 = 0; l54 < 2; l54 = l54 + 1) {
			fRec56[l54] = 0.0f;
		}
		for (int l55 = 0; l55 < 2; l55 = l55 + 1) {
			fRec55[l55] = 0.0f;
		}
		for (int l56 = 0; l56 < 2; l56 = l56 + 1) {
			fRec54[l56] = 0.0f;
		}
		for (int l57 = 0; l57 < 2; l57 = l57 + 1) {
			fRec53[l57] = 0.0f;
		}
		for (int l58 = 0; l58 < 2; l58 = l58 + 1) {
			fRec51[l58] = 0.0f;
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
		fTempPerm216 = 0.0f;
		fTempPerm217 = 0.0f;
		fTempPerm218 = 0.0f;
		fTempPerm219 = 0.0f;
		fTempPerm220 = 0.0f;
		fTempPerm221 = 0.0f;
		for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
			fRec58[l59] = 0.0f;
		}
		fTempPerm222 = 0.0f;
		fTempPerm223 = 0.0f;
		fTempPerm224 = 0.0f;
		for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
			fRec59[l60] = 0.0f;
		}
		fTempPerm225 = 0.0f;
		fTempPerm226 = 0.0f;
		fTempPerm227 = 0.0f;
		fTempPerm228 = 0.0f;
		for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
			fRec2[l61] = 0.0f;
		}
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
		fTempPerm249 = 0.0f;
		fTempPerm250 = 0.0f;
		fTempPerm251 = 0.0f;
		fTempPerm252 = 0.0f;
		fTempPerm253 = 0.0f;
		fTempPerm254 = 0.0f;
		fTempPerm255 = 0.0f;
		fTempPerm256 = 0.0f;
		iTempPerm257 = 0;
		fTempPerm258 = 0.0f;
		fTempPerm259 = 0.0f;
		fTempPerm260 = 0.0f;
		fTempPerm261 = 0.0f;
		fTempPerm262 = 0.0f;
		fTempPerm263 = 0.0f;
		fTempPerm264 = 0.0f;
		fTempPerm265 = 0.0f;
		for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
			fRec60[l62] = 0.0f;
		}
		fTempPerm266 = 0.0f;
		for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
			fRec61[l63] = 0.0f;
		}
		fTempPerm267 = 0.0f;
		fTempPerm268 = 0.0f;
		for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
			fRec63[l64] = 0.0f;
		}
		fTempPerm269 = 0.0f;
		for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
			fRec64[l65] = 0.0f;
		}
		for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
			fRec65[l66] = 0.0f;
		}
		fTempPerm270 = 0.0f;
		fTempPerm271 = 0.0f;
		fTempPerm272 = 0.0f;
		fTempPerm273 = 0.0f;
		fTempPerm274 = 0.0f;
		for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
			fRec68[l67] = 0.0f;
		}
		fTempPerm275 = 0.0f;
		for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
			fRec69[l68] = 0.0f;
		}
		fTempPerm276 = 0.0f;
		for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
			fVec11[l69] = 0.0f;
		}
		fTempPerm277 = 0.0f;
		fTempPerm278 = 0.0f;
		fTempPerm279 = 0.0f;
		fTempPerm280 = 0.0f;
		fTempPerm281 = 0.0f;
		fTempPerm282 = 0.0f;
		fTempPerm283 = 0.0f;
		fTempPerm284 = 0.0f;
		fTempPerm285 = 0.0f;
		for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
			fRec71[l70] = 0.0f;
		}
		fTempPerm286 = 0.0f;
		fTempPerm287 = 0.0f;
		fTempPerm288 = 0.0f;
		fTempPerm289 = 0.0f;
		for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
			fVec12[l71] = 0.0f;
		}
		iTempPerm290 = 0;
		for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
			iVec13[l72] = 0;
		}
		iTempPerm291 = 0;
		for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
			fRec76[l73] = 0.0f;
		}
		fTempPerm292 = 0.0f;
		for (int l74 = 0; l74 < 2; l74 = l74 + 1) {
			fRec75[l74] = 0.0f;
		}
		for (int l75 = 0; l75 < 2; l75 = l75 + 1) {
			fRec74[l75] = 0.0f;
		}
		for (int l76 = 0; l76 < 2; l76 = l76 + 1) {
			fRec73[l76] = 0.0f;
		}
		for (int l77 = 0; l77 < 2; l77 = l77 + 1) {
			fRec72[l77] = 0.0f;
		}
		for (int l78 = 0; l78 < 2; l78 = l78 + 1) {
			fRec70[l78] = 0.0f;
		}
		fTempPerm293 = 0.0f;
		fTempPerm294 = 0.0f;
		fTempPerm295 = 0.0f;
		fTempPerm296 = 0.0f;
		fTempPerm297 = 0.0f;
		fTempPerm298 = 0.0f;
		iTempPerm299 = 0;
		fTempPerm300 = 0.0f;
		fTempPerm301 = 0.0f;
		fTempPerm302 = 0.0f;
		for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
			fRec77[l79] = 0.0f;
		}
		fTempPerm303 = 0.0f;
		for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
			fRec78[l80] = 0.0f;
		}
		fTempPerm304 = 0.0f;
		fTempPerm305 = 0.0f;
		for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
			fRec80[l81] = 0.0f;
		}
		fTempPerm306 = 0.0f;
		for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
			fRec81[l82] = 0.0f;
		}
		for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
			fRec82[l83] = 0.0f;
		}
		fTempPerm307 = 0.0f;
		fTempPerm308 = 0.0f;
		fTempPerm309 = 0.0f;
		fTempPerm310 = 0.0f;
		fTempPerm311 = 0.0f;
		for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
			fRec85[l84] = 0.0f;
		}
		fTempPerm312 = 0.0f;
		for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
			fRec86[l85] = 0.0f;
		}
		fTempPerm313 = 0.0f;
		for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
			fVec14[l86] = 0.0f;
		}
		fTempPerm314 = 0.0f;
		for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
			fRec88[l87] = 0.0f;
		}
		fTempPerm315 = 0.0f;
		fTempPerm316 = 0.0f;
		fTempPerm317 = 0.0f;
		fTempPerm318 = 0.0f;
		for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
			fVec15[l88] = 0.0f;
		}
		iTempPerm319 = 0;
		for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
			iVec16[l89] = 0;
		}
		iTempPerm320 = 0;
		for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
			fRec93[l90] = 0.0f;
		}
		fTempPerm321 = 0.0f;
		for (int l91 = 0; l91 < 2; l91 = l91 + 1) {
			fRec92[l91] = 0.0f;
		}
		for (int l92 = 0; l92 < 2; l92 = l92 + 1) {
			fRec91[l92] = 0.0f;
		}
		for (int l93 = 0; l93 < 2; l93 = l93 + 1) {
			fRec90[l93] = 0.0f;
		}
		for (int l94 = 0; l94 < 2; l94 = l94 + 1) {
			fRec89[l94] = 0.0f;
		}
		for (int l95 = 0; l95 < 2; l95 = l95 + 1) {
			fRec87[l95] = 0.0f;
		}
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
		fTempPerm377 = 0.0f;
		fTempPerm378 = 0.0f;
		fTempPerm379 = 0.0f;
		fTempPerm380 = 0.0f;
		fTempPerm381 = 0.0f;
		fTempPerm382 = 0.0f;
		fTempPerm383 = 0.0f;
		fTempPerm384 = 0.0f;
		fTempPerm385 = 0.0f;
		fTempPerm386 = 0.0f;
		fTempPerm387 = 0.0f;
		fTempPerm388 = 0.0f;
		fTempPerm389 = 0.0f;
		fTempPerm390 = 0.0f;
		for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
			fRec94[l96] = 0.0f;
		}
		fTempPerm391 = 0.0f;
		fTempPerm392 = 0.0f;
		fTempPerm393 = 0.0f;
		for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
			fRec95[l97] = 0.0f;
		}
		fTempPerm394 = 0.0f;
		fTempPerm395 = 0.0f;
		fTempPerm396 = 0.0f;
		fTempPerm397 = 0.0f;
		for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
			fRec3[l98] = 0.0f;
		}
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
		fTempPerm410 = 0.0f;
		fTempPerm411 = 0.0f;
		fTempPerm412 = 0.0f;
		fTempPerm413 = 0.0f;
		fTempPerm414 = 0.0f;
		fTempPerm415 = 0.0f;
		fTempPerm416 = 0.0f;
		fTempPerm417 = 0.0f;
		fTempPerm418 = 0.0f;
		fTempPerm419 = 0.0f;
		fTempPerm420 = 0.0f;
		fTempPerm421 = 0.0f;
		fTempPerm422 = 0.0f;
		fTempPerm423 = 0.0f;
		fTempPerm424 = 0.0f;
		fTempPerm425 = 0.0f;
		iTempPerm426 = 0;
		fTempPerm427 = 0.0f;
		fTempPerm428 = 0.0f;
		fTempPerm429 = 0.0f;
		fTempPerm430 = 0.0f;
		fTempPerm431 = 0.0f;
		fTempPerm432 = 0.0f;
		fTempPerm433 = 0.0f;
		fTempPerm434 = 0.0f;
		for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
			fRec96[l99] = 0.0f;
		}
		fTempPerm435 = 0.0f;
		for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
			fRec97[l100] = 0.0f;
		}
		fTempPerm436 = 0.0f;
		fTempPerm437 = 0.0f;
		for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
			fRec99[l101] = 0.0f;
		}
		fTempPerm438 = 0.0f;
		for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
			fRec100[l102] = 0.0f;
		}
		for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
			fRec101[l103] = 0.0f;
		}
		fTempPerm439 = 0.0f;
		fTempPerm440 = 0.0f;
		fTempPerm441 = 0.0f;
		fTempPerm442 = 0.0f;
		fTempPerm443 = 0.0f;
		for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
			fRec104[l104] = 0.0f;
		}
		fTempPerm444 = 0.0f;
		for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
			fRec105[l105] = 0.0f;
		}
		fTempPerm445 = 0.0f;
		for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
			fVec17[l106] = 0.0f;
		}
		fTempPerm446 = 0.0f;
		fTempPerm447 = 0.0f;
		fTempPerm448 = 0.0f;
		fTempPerm449 = 0.0f;
		fTempPerm450 = 0.0f;
		fTempPerm451 = 0.0f;
		fTempPerm452 = 0.0f;
		fTempPerm453 = 0.0f;
		fTempPerm454 = 0.0f;
		for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
			fRec107[l107] = 0.0f;
		}
		fTempPerm455 = 0.0f;
		fTempPerm456 = 0.0f;
		fTempPerm457 = 0.0f;
		fTempPerm458 = 0.0f;
		for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
			fVec18[l108] = 0.0f;
		}
		iTempPerm459 = 0;
		for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
			iVec19[l109] = 0;
		}
		iTempPerm460 = 0;
		for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
			fRec112[l110] = 0.0f;
		}
		fTempPerm461 = 0.0f;
		for (int l111 = 0; l111 < 2; l111 = l111 + 1) {
			fRec111[l111] = 0.0f;
		}
		for (int l112 = 0; l112 < 2; l112 = l112 + 1) {
			fRec110[l112] = 0.0f;
		}
		for (int l113 = 0; l113 < 2; l113 = l113 + 1) {
			fRec109[l113] = 0.0f;
		}
		for (int l114 = 0; l114 < 2; l114 = l114 + 1) {
			fRec108[l114] = 0.0f;
		}
		for (int l115 = 0; l115 < 2; l115 = l115 + 1) {
			fRec106[l115] = 0.0f;
		}
		fTempPerm462 = 0.0f;
		fTempPerm463 = 0.0f;
		fTempPerm464 = 0.0f;
		fTempPerm465 = 0.0f;
		fTempPerm466 = 0.0f;
		fTempPerm467 = 0.0f;
		iTempPerm468 = 0;
		fTempPerm469 = 0.0f;
		fTempPerm470 = 0.0f;
		fTempPerm471 = 0.0f;
		for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
			fRec113[l116] = 0.0f;
		}
		fTempPerm472 = 0.0f;
		for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
			fRec114[l117] = 0.0f;
		}
		fTempPerm473 = 0.0f;
		fTempPerm474 = 0.0f;
		for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
			fRec116[l118] = 0.0f;
		}
		fTempPerm475 = 0.0f;
		for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
			fRec117[l119] = 0.0f;
		}
		for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
			fRec118[l120] = 0.0f;
		}
		fTempPerm476 = 0.0f;
		fTempPerm477 = 0.0f;
		fTempPerm478 = 0.0f;
		fTempPerm479 = 0.0f;
		fTempPerm480 = 0.0f;
		for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
			fRec121[l121] = 0.0f;
		}
		fTempPerm481 = 0.0f;
		for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
			fRec122[l122] = 0.0f;
		}
		fTempPerm482 = 0.0f;
		for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
			fVec20[l123] = 0.0f;
		}
		fTempPerm483 = 0.0f;
		for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
			fRec124[l124] = 0.0f;
		}
		fTempPerm484 = 0.0f;
		fTempPerm485 = 0.0f;
		fTempPerm486 = 0.0f;
		fTempPerm487 = 0.0f;
		for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
			fVec21[l125] = 0.0f;
		}
		iTempPerm488 = 0;
		for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
			iVec22[l126] = 0;
		}
		iTempPerm489 = 0;
		for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
			fRec129[l127] = 0.0f;
		}
		fTempPerm490 = 0.0f;
		for (int l128 = 0; l128 < 2; l128 = l128 + 1) {
			fRec128[l128] = 0.0f;
		}
		for (int l129 = 0; l129 < 2; l129 = l129 + 1) {
			fRec127[l129] = 0.0f;
		}
		for (int l130 = 0; l130 < 2; l130 = l130 + 1) {
			fRec126[l130] = 0.0f;
		}
		for (int l131 = 0; l131 < 2; l131 = l131 + 1) {
			fRec125[l131] = 0.0f;
		}
		for (int l132 = 0; l132 < 2; l132 = l132 + 1) {
			fRec123[l132] = 0.0f;
		}
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
		fTempPerm538 = 0.0f;
		fTempPerm539 = 0.0f;
		fTempPerm540 = 0.0f;
		fTempPerm541 = 0.0f;
		fTempPerm542 = 0.0f;
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
		for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
			fRec130[l133] = 0.0f;
		}
		fTempPerm560 = 0.0f;
		fTempPerm561 = 0.0f;
		fTempPerm562 = 0.0f;
		for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
			fRec131[l134] = 0.0f;
		}
		fTempPerm563 = 0.0f;
		fTempPerm564 = 0.0f;
		fTempPerm565 = 0.0f;
		fTempPerm566 = 0.0f;
		for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
			fRec4[l135] = 0.0f;
		}
		fTempPerm567 = 0.0f;
		fTempPerm568 = 0.0f;
		fTempPerm569 = 0.0f;
		fTempPerm570 = 0.0f;
		fTempPerm571 = 0.0f;
		fTempPerm572 = 0.0f;
		fTempPerm573 = 0.0f;
		fTempPerm574 = 0.0f;
		fTempPerm575 = 0.0f;
		fTempPerm576 = 0.0f;
		fTempPerm577 = 0.0f;
		fTempPerm578 = 0.0f;
		fTempPerm579 = 0.0f;
		fTempPerm580 = 0.0f;
		fTempPerm581 = 0.0f;
		fTempPerm582 = 0.0f;
		fTempPerm583 = 0.0f;
		fTempPerm584 = 0.0f;
		fTempPerm585 = 0.0f;
		fTempPerm586 = 0.0f;
		fTempPerm587 = 0.0f;
		fTempPerm588 = 0.0f;
		fTempPerm589 = 0.0f;
		fTempPerm590 = 0.0f;
		fTempPerm591 = 0.0f;
		fTempPerm592 = 0.0f;
		fTempPerm593 = 0.0f;
		fTempPerm594 = 0.0f;
		iTempPerm595 = 0;
		fTempPerm596 = 0.0f;
		fTempPerm597 = 0.0f;
		fTempPerm598 = 0.0f;
		fTempPerm599 = 0.0f;
		fTempPerm600 = 0.0f;
		fTempPerm601 = 0.0f;
		fTempPerm602 = 0.0f;
		fTempPerm603 = 0.0f;
		for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
			fRec132[l136] = 0.0f;
		}
		fTempPerm604 = 0.0f;
		for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
			fRec133[l137] = 0.0f;
		}
		fTempPerm605 = 0.0f;
		fTempPerm606 = 0.0f;
		for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
			fRec135[l138] = 0.0f;
		}
		fTempPerm607 = 0.0f;
		for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
			fRec136[l139] = 0.0f;
		}
		for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
			fRec137[l140] = 0.0f;
		}
		fTempPerm608 = 0.0f;
		fTempPerm609 = 0.0f;
		fTempPerm610 = 0.0f;
		fTempPerm611 = 0.0f;
		fTempPerm612 = 0.0f;
		for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
			fRec140[l141] = 0.0f;
		}
		fTempPerm613 = 0.0f;
		for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
			fRec141[l142] = 0.0f;
		}
		fTempPerm614 = 0.0f;
		for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
			fVec23[l143] = 0.0f;
		}
		fTempPerm615 = 0.0f;
		fTempPerm616 = 0.0f;
		fTempPerm617 = 0.0f;
		fTempPerm618 = 0.0f;
		fTempPerm619 = 0.0f;
		fTempPerm620 = 0.0f;
		fTempPerm621 = 0.0f;
		fTempPerm622 = 0.0f;
		fTempPerm623 = 0.0f;
		for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
			fRec143[l144] = 0.0f;
		}
		fTempPerm624 = 0.0f;
		fTempPerm625 = 0.0f;
		fTempPerm626 = 0.0f;
		fTempPerm627 = 0.0f;
		for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
			fVec24[l145] = 0.0f;
		}
		iTempPerm628 = 0;
		for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
			iVec25[l146] = 0;
		}
		iTempPerm629 = 0;
		for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
			fRec148[l147] = 0.0f;
		}
		fTempPerm630 = 0.0f;
		for (int l148 = 0; l148 < 2; l148 = l148 + 1) {
			fRec147[l148] = 0.0f;
		}
		for (int l149 = 0; l149 < 2; l149 = l149 + 1) {
			fRec146[l149] = 0.0f;
		}
		for (int l150 = 0; l150 < 2; l150 = l150 + 1) {
			fRec145[l150] = 0.0f;
		}
		for (int l151 = 0; l151 < 2; l151 = l151 + 1) {
			fRec144[l151] = 0.0f;
		}
		for (int l152 = 0; l152 < 2; l152 = l152 + 1) {
			fRec142[l152] = 0.0f;
		}
		fTempPerm631 = 0.0f;
		fTempPerm632 = 0.0f;
		fTempPerm633 = 0.0f;
		fTempPerm634 = 0.0f;
		fTempPerm635 = 0.0f;
		fTempPerm636 = 0.0f;
		iTempPerm637 = 0;
		fTempPerm638 = 0.0f;
		fTempPerm639 = 0.0f;
		fTempPerm640 = 0.0f;
		for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
			fRec149[l153] = 0.0f;
		}
		fTempPerm641 = 0.0f;
		for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
			fRec150[l154] = 0.0f;
		}
		fTempPerm642 = 0.0f;
		fTempPerm643 = 0.0f;
		for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
			fRec152[l155] = 0.0f;
		}
		fTempPerm644 = 0.0f;
		for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
			fRec153[l156] = 0.0f;
		}
		for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
			fRec154[l157] = 0.0f;
		}
		fTempPerm645 = 0.0f;
		fTempPerm646 = 0.0f;
		fTempPerm647 = 0.0f;
		fTempPerm648 = 0.0f;
		fTempPerm649 = 0.0f;
		for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
			fRec157[l158] = 0.0f;
		}
		fTempPerm650 = 0.0f;
		for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
			fRec158[l159] = 0.0f;
		}
		fTempPerm651 = 0.0f;
		for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
			fVec26[l160] = 0.0f;
		}
		fTempPerm652 = 0.0f;
		for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
			fRec160[l161] = 0.0f;
		}
		fTempPerm653 = 0.0f;
		fTempPerm654 = 0.0f;
		fTempPerm655 = 0.0f;
		fTempPerm656 = 0.0f;
		for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
			fVec27[l162] = 0.0f;
		}
		iTempPerm657 = 0;
		for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
			iVec28[l163] = 0;
		}
		iTempPerm658 = 0;
		for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
			fRec165[l164] = 0.0f;
		}
		fTempPerm659 = 0.0f;
		for (int l165 = 0; l165 < 2; l165 = l165 + 1) {
			fRec164[l165] = 0.0f;
		}
		for (int l166 = 0; l166 < 2; l166 = l166 + 1) {
			fRec163[l166] = 0.0f;
		}
		for (int l167 = 0; l167 < 2; l167 = l167 + 1) {
			fRec162[l167] = 0.0f;
		}
		for (int l168 = 0; l168 < 2; l168 = l168 + 1) {
			fRec161[l168] = 0.0f;
		}
		for (int l169 = 0; l169 < 2; l169 = l169 + 1) {
			fRec159[l169] = 0.0f;
		}
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
		fTempPerm699 = 0.0f;
		fTempPerm700 = 0.0f;
		fTempPerm701 = 0.0f;
		fTempPerm702 = 0.0f;
		fTempPerm703 = 0.0f;
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
		fTempPerm720 = 0.0f;
		fTempPerm721 = 0.0f;
		fTempPerm722 = 0.0f;
		fTempPerm723 = 0.0f;
		fTempPerm724 = 0.0f;
		fTempPerm725 = 0.0f;
		fTempPerm726 = 0.0f;
		fTempPerm727 = 0.0f;
		fTempPerm728 = 0.0f;
		for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
			fRec166[l170] = 0.0f;
		}
		fTempPerm729 = 0.0f;
		fTempPerm730 = 0.0f;
		fTempPerm731 = 0.0f;
		for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
			fRec167[l171] = 0.0f;
		}
		fTempPerm732 = 0.0f;
		fTempPerm733 = 0.0f;
		fTempPerm734 = 0.0f;
		fTempPerm735 = 0.0f;
		for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
			fRec5[l172] = 0.0f;
		}
		fTempPerm736 = 0.0f;
		fTempPerm737 = 0.0f;
		fTempPerm738 = 0.0f;
		fTempPerm739 = 0.0f;
		fTempPerm740 = 0.0f;
		fTempPerm741 = 0.0f;
		fTempPerm742 = 0.0f;
		fTempPerm743 = 0.0f;
		fTempPerm744 = 0.0f;
		fTempPerm745 = 0.0f;
		fTempPerm746 = 0.0f;
		fTempPerm747 = 0.0f;
		fTempPerm748 = 0.0f;
		fTempPerm749 = 0.0f;
		fTempPerm750 = 0.0f;
		fTempPerm751 = 0.0f;
		iTempPerm752 = 0;
		fTempPerm753 = 0.0f;
		fTempPerm754 = 0.0f;
		fTempPerm755 = 0.0f;
		fTempPerm756 = 0.0f;
		fTempPerm757 = 0.0f;
		fTempPerm758 = 0.0f;
		fTempPerm759 = 0.0f;
		for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
			fRec172[l173] = 0.0f;
		}
		fTempPerm760 = 0.0f;
		for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
			fRec173[l174] = 0.0f;
		}
		fTempPerm761 = 0.0f;
		fTempPerm762 = 0.0f;
		fTempPerm763 = 0.0f;
		fTempPerm764 = 0.0f;
		fTempPerm765 = 0.0f;
		fTempPerm766 = 0.0f;
		fTempPerm767 = 0.0f;
		fTempPerm768 = 0.0f;
		fTempPerm769 = 0.0f;
		for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
			fRec175[l175] = 0.0f;
		}
		fTempPerm770 = 0.0f;
		for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
			fRec176[l176] = 0.0f;
		}
		for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
			fRec177[l177] = 0.0f;
		}
		fTempPerm771 = 0.0f;
		fTempPerm772 = 0.0f;
		fTempPerm773 = 0.0f;
		fTempPerm774 = 0.0f;
		fTempPerm775 = 0.0f;
		fTempPerm776 = 0.0f;
		fTempPerm777 = 0.0f;
		for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
			fRec180[l178] = 0.0f;
		}
		fTempPerm778 = 0.0f;
		for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
			fRec181[l179] = 0.0f;
		}
		fTempPerm779 = 0.0f;
		fTempPerm780 = 0.0f;
		fTempPerm781 = 0.0f;
		for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
			fVec29[l180] = 0.0f;
		}
		fTempPerm782 = 0.0f;
		fTempPerm783 = 0.0f;
		fTempPerm784 = 0.0f;
		fTempPerm785 = 0.0f;
		fTempPerm786 = 0.0f;
		for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
			fRec183[l181] = 0.0f;
		}
		fTempPerm787 = 0.0f;
		fTempPerm788 = 0.0f;
		fTempPerm789 = 0.0f;
		fTempPerm790 = 0.0f;
		for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
			fVec30[l182] = 0.0f;
		}
		iTempPerm791 = 0;
		for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
			iVec31[l183] = 0;
		}
		iTempPerm792 = 0;
		for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
			fRec188[l184] = 0.0f;
		}
		fTempPerm793 = 0.0f;
		for (int l185 = 0; l185 < 2; l185 = l185 + 1) {
			fRec187[l185] = 0.0f;
		}
		for (int l186 = 0; l186 < 2; l186 = l186 + 1) {
			fRec186[l186] = 0.0f;
		}
		for (int l187 = 0; l187 < 2; l187 = l187 + 1) {
			fRec185[l187] = 0.0f;
		}
		for (int l188 = 0; l188 < 2; l188 = l188 + 1) {
			fRec184[l188] = 0.0f;
		}
		for (int l189 = 0; l189 < 2; l189 = l189 + 1) {
			fRec182[l189] = 0.0f;
		}
		fTempPerm794 = 0.0f;
		fTempPerm795 = 0.0f;
		fTempPerm796 = 0.0f;
		fTempPerm797 = 0.0f;
		fTempPerm798 = 0.0f;
		fTempPerm799 = 0.0f;
		iTempPerm800 = 0;
		fTempPerm801 = 0.0f;
		fTempPerm802 = 0.0f;
		fTempPerm803 = 0.0f;
		for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
			fRec189[l190] = 0.0f;
		}
		fTempPerm804 = 0.0f;
		for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
			fRec190[l191] = 0.0f;
		}
		fTempPerm805 = 0.0f;
		fTempPerm806 = 0.0f;
		fTempPerm807 = 0.0f;
		for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
			fRec192[l192] = 0.0f;
		}
		fTempPerm808 = 0.0f;
		for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
			fRec193[l193] = 0.0f;
		}
		for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
			fRec194[l194] = 0.0f;
		}
		fTempPerm809 = 0.0f;
		fTempPerm810 = 0.0f;
		fTempPerm811 = 0.0f;
		fTempPerm812 = 0.0f;
		fTempPerm813 = 0.0f;
		for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
			fRec197[l195] = 0.0f;
		}
		fTempPerm814 = 0.0f;
		for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
			fRec198[l196] = 0.0f;
		}
		fTempPerm815 = 0.0f;
		for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
			fVec32[l197] = 0.0f;
		}
		fTempPerm816 = 0.0f;
		for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
			fRec200[l198] = 0.0f;
		}
		fTempPerm817 = 0.0f;
		fTempPerm818 = 0.0f;
		fTempPerm819 = 0.0f;
		fTempPerm820 = 0.0f;
		for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
			fVec33[l199] = 0.0f;
		}
		iTempPerm821 = 0;
		for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
			iVec34[l200] = 0;
		}
		iTempPerm822 = 0;
		for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
			fRec205[l201] = 0.0f;
		}
		fTempPerm823 = 0.0f;
		for (int l202 = 0; l202 < 2; l202 = l202 + 1) {
			fRec204[l202] = 0.0f;
		}
		for (int l203 = 0; l203 < 2; l203 = l203 + 1) {
			fRec203[l203] = 0.0f;
		}
		for (int l204 = 0; l204 < 2; l204 = l204 + 1) {
			fRec202[l204] = 0.0f;
		}
		for (int l205 = 0; l205 < 2; l205 = l205 + 1) {
			fRec201[l205] = 0.0f;
		}
		for (int l206 = 0; l206 < 2; l206 = l206 + 1) {
			fRec199[l206] = 0.0f;
		}
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
		fTempPerm855 = 0.0f;
		fTempPerm856 = 0.0f;
		fTempPerm857 = 0.0f;
		fTempPerm858 = 0.0f;
		fTempPerm859 = 0.0f;
		fTempPerm860 = 0.0f;
		fTempPerm861 = 0.0f;
		fTempPerm862 = 0.0f;
		fTempPerm863 = 0.0f;
		fTempPerm864 = 0.0f;
		fTempPerm865 = 0.0f;
		fTempPerm866 = 0.0f;
		fTempPerm867 = 0.0f;
		fTempPerm868 = 0.0f;
		fTempPerm869 = 0.0f;
		fTempPerm870 = 0.0f;
		fTempPerm871 = 0.0f;
		fTempPerm872 = 0.0f;
		fTempPerm873 = 0.0f;
		fTempPerm874 = 0.0f;
		fTempPerm875 = 0.0f;
		fTempPerm876 = 0.0f;
		fTempPerm877 = 0.0f;
		fTempPerm878 = 0.0f;
		fTempPerm879 = 0.0f;
		fTempPerm880 = 0.0f;
		fTempPerm881 = 0.0f;
		fTempPerm882 = 0.0f;
		fTempPerm883 = 0.0f;
		fTempPerm884 = 0.0f;
		fTempPerm885 = 0.0f;
		fTempPerm886 = 0.0f;
		fTempPerm887 = 0.0f;
		fTempPerm888 = 0.0f;
		fTempPerm889 = 0.0f;
		fTempPerm890 = 0.0f;
		fTempPerm891 = 0.0f;
		fTempPerm892 = 0.0f;
		for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
			fRec206[l207] = 0.0f;
		}
		fTempPerm893 = 0.0f;
		fTempPerm894 = 0.0f;
		fTempPerm895 = 0.0f;
		for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
			fRec207[l208] = 0.0f;
		}
		fTempPerm896 = 0.0f;
		fTempPerm897 = 0.0f;
		fTempPerm898 = 0.0f;
		fTempPerm899 = 0.0f;
		for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
			fRec168[l209] = 0.0f;
		}
		fTempPerm900 = 0.0f;
		fTempPerm901 = 0.0f;
		fTempPerm902 = 0.0f;
		fTempPerm903 = 0.0f;
		fTempPerm904 = 0.0f;
		fTempPerm905 = 0.0f;
		fTempPerm906 = 0.0f;
		fTempPerm907 = 0.0f;
		iTempPerm908 = 0;
		fTempPerm909 = 0.0f;
		fTempPerm910 = 0.0f;
		fTempPerm911 = 0.0f;
		fTempPerm912 = 0.0f;
		for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
			fRec208[l210] = 0.0f;
		}
		fTempPerm913 = 0.0f;
		for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
			fRec209[l211] = 0.0f;
		}
		fTempPerm914 = 0.0f;
		fTempPerm915 = 0.0f;
		for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
			fRec211[l212] = 0.0f;
		}
		fTempPerm916 = 0.0f;
		for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
			fRec212[l213] = 0.0f;
		}
		for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
			fRec213[l214] = 0.0f;
		}
		fTempPerm917 = 0.0f;
		fTempPerm918 = 0.0f;
		fTempPerm919 = 0.0f;
		fTempPerm920 = 0.0f;
		fTempPerm921 = 0.0f;
		for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
			fRec216[l215] = 0.0f;
		}
		fTempPerm922 = 0.0f;
		for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
			fRec217[l216] = 0.0f;
		}
		fTempPerm923 = 0.0f;
		for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
			fVec35[l217] = 0.0f;
		}
		fTempPerm924 = 0.0f;
		fTempPerm925 = 0.0f;
		fTempPerm926 = 0.0f;
		fTempPerm927 = 0.0f;
		fTempPerm928 = 0.0f;
		for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
			fRec219[l218] = 0.0f;
		}
		fTempPerm929 = 0.0f;
		fTempPerm930 = 0.0f;
		fTempPerm931 = 0.0f;
		fTempPerm932 = 0.0f;
		for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
			fVec36[l219] = 0.0f;
		}
		iTempPerm933 = 0;
		for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
			iVec37[l220] = 0;
		}
		iTempPerm934 = 0;
		for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
			fRec224[l221] = 0.0f;
		}
		fTempPerm935 = 0.0f;
		for (int l222 = 0; l222 < 2; l222 = l222 + 1) {
			fRec223[l222] = 0.0f;
		}
		for (int l223 = 0; l223 < 2; l223 = l223 + 1) {
			fRec222[l223] = 0.0f;
		}
		for (int l224 = 0; l224 < 2; l224 = l224 + 1) {
			fRec221[l224] = 0.0f;
		}
		for (int l225 = 0; l225 < 2; l225 = l225 + 1) {
			fRec220[l225] = 0.0f;
		}
		for (int l226 = 0; l226 < 2; l226 = l226 + 1) {
			fRec218[l226] = 0.0f;
		}
		fTempPerm936 = 0.0f;
		fTempPerm937 = 0.0f;
		fTempPerm938 = 0.0f;
		fTempPerm939 = 0.0f;
		fTempPerm940 = 0.0f;
		fTempPerm941 = 0.0f;
		iTempPerm942 = 0;
		fTempPerm943 = 0.0f;
		fTempPerm944 = 0.0f;
		fTempPerm945 = 0.0f;
		for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
			fRec225[l227] = 0.0f;
		}
		fTempPerm946 = 0.0f;
		for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
			fRec226[l228] = 0.0f;
		}
		fTempPerm947 = 0.0f;
		fTempPerm948 = 0.0f;
		for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
			fRec228[l229] = 0.0f;
		}
		fTempPerm949 = 0.0f;
		for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
			fRec229[l230] = 0.0f;
		}
		for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
			fRec230[l231] = 0.0f;
		}
		fTempPerm950 = 0.0f;
		fTempPerm951 = 0.0f;
		fTempPerm952 = 0.0f;
		fTempPerm953 = 0.0f;
		fTempPerm954 = 0.0f;
		for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
			fRec233[l232] = 0.0f;
		}
		fTempPerm955 = 0.0f;
		for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
			fRec234[l233] = 0.0f;
		}
		fTempPerm956 = 0.0f;
		for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
			fVec38[l234] = 0.0f;
		}
		fTempPerm957 = 0.0f;
		for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
			fRec236[l235] = 0.0f;
		}
		fTempPerm958 = 0.0f;
		fTempPerm959 = 0.0f;
		fTempPerm960 = 0.0f;
		fTempPerm961 = 0.0f;
		for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
			fVec39[l236] = 0.0f;
		}
		iTempPerm962 = 0;
		for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
			iVec40[l237] = 0;
		}
		iTempPerm963 = 0;
		for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
			fRec241[l238] = 0.0f;
		}
		fTempPerm964 = 0.0f;
		for (int l239 = 0; l239 < 2; l239 = l239 + 1) {
			fRec240[l239] = 0.0f;
		}
		for (int l240 = 0; l240 < 2; l240 = l240 + 1) {
			fRec239[l240] = 0.0f;
		}
		for (int l241 = 0; l241 < 2; l241 = l241 + 1) {
			fRec238[l241] = 0.0f;
		}
		for (int l242 = 0; l242 < 2; l242 = l242 + 1) {
			fRec237[l242] = 0.0f;
		}
		for (int l243 = 0; l243 < 2; l243 = l243 + 1) {
			fRec235[l243] = 0.0f;
		}
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
		fTempPerm988 = 0.0f;
		fTempPerm989 = 0.0f;
		fTempPerm990 = 0.0f;
		fTempPerm991 = 0.0f;
		fTempPerm992 = 0.0f;
		fTempPerm993 = 0.0f;
		fTempPerm994 = 0.0f;
		fTempPerm995 = 0.0f;
		fTempPerm996 = 0.0f;
		fTempPerm997 = 0.0f;
		fTempPerm998 = 0.0f;
		fTempPerm999 = 0.0f;
		fTempPerm1000 = 0.0f;
		fTempPerm1001 = 0.0f;
		fTempPerm1002 = 0.0f;
		fTempPerm1003 = 0.0f;
		fTempPerm1004 = 0.0f;
		fTempPerm1005 = 0.0f;
		fTempPerm1006 = 0.0f;
		fTempPerm1007 = 0.0f;
		fTempPerm1008 = 0.0f;
		fTempPerm1009 = 0.0f;
		fTempPerm1010 = 0.0f;
		fTempPerm1011 = 0.0f;
		fTempPerm1012 = 0.0f;
		fTempPerm1013 = 0.0f;
		fTempPerm1014 = 0.0f;
		fTempPerm1015 = 0.0f;
		fTempPerm1016 = 0.0f;
		fTempPerm1017 = 0.0f;
		fTempPerm1018 = 0.0f;
		fTempPerm1019 = 0.0f;
		fTempPerm1020 = 0.0f;
		fTempPerm1021 = 0.0f;
		fTempPerm1022 = 0.0f;
		fTempPerm1023 = 0.0f;
		fTempPerm1024 = 0.0f;
		fTempPerm1025 = 0.0f;
		fTempPerm1026 = 0.0f;
		fTempPerm1027 = 0.0f;
		fTempPerm1028 = 0.0f;
		fTempPerm1029 = 0.0f;
		fTempPerm1030 = 0.0f;
		fTempPerm1031 = 0.0f;
		fTempPerm1032 = 0.0f;
		fTempPerm1033 = 0.0f;
		for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
			fRec242[l244] = 0.0f;
		}
		fTempPerm1034 = 0.0f;
		fTempPerm1035 = 0.0f;
		fTempPerm1036 = 0.0f;
		for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
			fRec243[l245] = 0.0f;
		}
		fTempPerm1037 = 0.0f;
		fTempPerm1038 = 0.0f;
		fTempPerm1039 = 0.0f;
		fTempPerm1040 = 0.0f;
		for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
			fRec169[l246] = 0.0f;
		}
		fTempPerm1041 = 0.0f;
		fTempPerm1042 = 0.0f;
		fTempPerm1043 = 0.0f;
		fTempPerm1044 = 0.0f;
		fTempPerm1045 = 0.0f;
		fTempPerm1046 = 0.0f;
		fTempPerm1047 = 0.0f;
		fTempPerm1048 = 0.0f;
		iTempPerm1049 = 0;
		fTempPerm1050 = 0.0f;
		fTempPerm1051 = 0.0f;
		fTempPerm1052 = 0.0f;
		fTempPerm1053 = 0.0f;
		for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
			fRec244[l247] = 0.0f;
		}
		fTempPerm1054 = 0.0f;
		for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
			fRec245[l248] = 0.0f;
		}
		fTempPerm1055 = 0.0f;
		fTempPerm1056 = 0.0f;
		for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
			fRec247[l249] = 0.0f;
		}
		fTempPerm1057 = 0.0f;
		for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
			fRec248[l250] = 0.0f;
		}
		for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
			fRec249[l251] = 0.0f;
		}
		fTempPerm1058 = 0.0f;
		fTempPerm1059 = 0.0f;
		fTempPerm1060 = 0.0f;
		fTempPerm1061 = 0.0f;
		fTempPerm1062 = 0.0f;
		for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
			fRec252[l252] = 0.0f;
		}
		fTempPerm1063 = 0.0f;
		for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
			fRec253[l253] = 0.0f;
		}
		fTempPerm1064 = 0.0f;
		for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
			fVec41[l254] = 0.0f;
		}
		fTempPerm1065 = 0.0f;
		fTempPerm1066 = 0.0f;
		fTempPerm1067 = 0.0f;
		fTempPerm1068 = 0.0f;
		fTempPerm1069 = 0.0f;
		for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
			fRec255[l255] = 0.0f;
		}
		fTempPerm1070 = 0.0f;
		fTempPerm1071 = 0.0f;
		fTempPerm1072 = 0.0f;
		fTempPerm1073 = 0.0f;
		for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
			fVec42[l256] = 0.0f;
		}
		iTempPerm1074 = 0;
		for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
			iVec43[l257] = 0;
		}
		iTempPerm1075 = 0;
		for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
			fRec260[l258] = 0.0f;
		}
		fTempPerm1076 = 0.0f;
		for (int l259 = 0; l259 < 2; l259 = l259 + 1) {
			fRec259[l259] = 0.0f;
		}
		for (int l260 = 0; l260 < 2; l260 = l260 + 1) {
			fRec258[l260] = 0.0f;
		}
		for (int l261 = 0; l261 < 2; l261 = l261 + 1) {
			fRec257[l261] = 0.0f;
		}
		for (int l262 = 0; l262 < 2; l262 = l262 + 1) {
			fRec256[l262] = 0.0f;
		}
		for (int l263 = 0; l263 < 2; l263 = l263 + 1) {
			fRec254[l263] = 0.0f;
		}
		fTempPerm1077 = 0.0f;
		fTempPerm1078 = 0.0f;
		fTempPerm1079 = 0.0f;
		fTempPerm1080 = 0.0f;
		fTempPerm1081 = 0.0f;
		fTempPerm1082 = 0.0f;
		iTempPerm1083 = 0;
		fTempPerm1084 = 0.0f;
		fTempPerm1085 = 0.0f;
		fTempPerm1086 = 0.0f;
		for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
			fRec261[l264] = 0.0f;
		}
		fTempPerm1087 = 0.0f;
		for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
			fRec262[l265] = 0.0f;
		}
		fTempPerm1088 = 0.0f;
		fTempPerm1089 = 0.0f;
		for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
			fRec264[l266] = 0.0f;
		}
		fTempPerm1090 = 0.0f;
		for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
			fRec265[l267] = 0.0f;
		}
		for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
			fRec266[l268] = 0.0f;
		}
		fTempPerm1091 = 0.0f;
		fTempPerm1092 = 0.0f;
		fTempPerm1093 = 0.0f;
		fTempPerm1094 = 0.0f;
		fTempPerm1095 = 0.0f;
		for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
			fRec269[l269] = 0.0f;
		}
		fTempPerm1096 = 0.0f;
		for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
			fRec270[l270] = 0.0f;
		}
		fTempPerm1097 = 0.0f;
		for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
			fVec44[l271] = 0.0f;
		}
		fTempPerm1098 = 0.0f;
		for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
			fRec272[l272] = 0.0f;
		}
		fTempPerm1099 = 0.0f;
		fTempPerm1100 = 0.0f;
		fTempPerm1101 = 0.0f;
		fTempPerm1102 = 0.0f;
		for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
			fVec45[l273] = 0.0f;
		}
		iTempPerm1103 = 0;
		for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
			iVec46[l274] = 0;
		}
		iTempPerm1104 = 0;
		for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
			fRec277[l275] = 0.0f;
		}
		fTempPerm1105 = 0.0f;
		for (int l276 = 0; l276 < 2; l276 = l276 + 1) {
			fRec276[l276] = 0.0f;
		}
		for (int l277 = 0; l277 < 2; l277 = l277 + 1) {
			fRec275[l277] = 0.0f;
		}
		for (int l278 = 0; l278 < 2; l278 = l278 + 1) {
			fRec274[l278] = 0.0f;
		}
		for (int l279 = 0; l279 < 2; l279 = l279 + 1) {
			fRec273[l279] = 0.0f;
		}
		for (int l280 = 0; l280 < 2; l280 = l280 + 1) {
			fRec271[l280] = 0.0f;
		}
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
		fTempPerm1121 = 0.0f;
		fTempPerm1122 = 0.0f;
		fTempPerm1123 = 0.0f;
		fTempPerm1124 = 0.0f;
		fTempPerm1125 = 0.0f;
		fTempPerm1126 = 0.0f;
		fTempPerm1127 = 0.0f;
		fTempPerm1128 = 0.0f;
		fTempPerm1129 = 0.0f;
		fTempPerm1130 = 0.0f;
		fTempPerm1131 = 0.0f;
		fTempPerm1132 = 0.0f;
		fTempPerm1133 = 0.0f;
		fTempPerm1134 = 0.0f;
		fTempPerm1135 = 0.0f;
		fTempPerm1136 = 0.0f;
		fTempPerm1137 = 0.0f;
		fTempPerm1138 = 0.0f;
		fTempPerm1139 = 0.0f;
		fTempPerm1140 = 0.0f;
		fTempPerm1141 = 0.0f;
		fTempPerm1142 = 0.0f;
		fTempPerm1143 = 0.0f;
		fTempPerm1144 = 0.0f;
		fTempPerm1145 = 0.0f;
		fTempPerm1146 = 0.0f;
		fTempPerm1147 = 0.0f;
		fTempPerm1148 = 0.0f;
		fTempPerm1149 = 0.0f;
		fTempPerm1150 = 0.0f;
		fTempPerm1151 = 0.0f;
		fTempPerm1152 = 0.0f;
		fTempPerm1153 = 0.0f;
		fTempPerm1154 = 0.0f;
		fTempPerm1155 = 0.0f;
		fTempPerm1156 = 0.0f;
		fTempPerm1157 = 0.0f;
		fTempPerm1158 = 0.0f;
		fTempPerm1159 = 0.0f;
		fTempPerm1160 = 0.0f;
		fTempPerm1161 = 0.0f;
		fTempPerm1162 = 0.0f;
		fTempPerm1163 = 0.0f;
		fTempPerm1164 = 0.0f;
		fTempPerm1165 = 0.0f;
		fTempPerm1166 = 0.0f;
		fTempPerm1167 = 0.0f;
		fTempPerm1168 = 0.0f;
		fTempPerm1169 = 0.0f;
		fTempPerm1170 = 0.0f;
		fTempPerm1171 = 0.0f;
		fTempPerm1172 = 0.0f;
		fTempPerm1173 = 0.0f;
		fTempPerm1174 = 0.0f;
		for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
			fRec278[l281] = 0.0f;
		}
		fTempPerm1175 = 0.0f;
		fTempPerm1176 = 0.0f;
		fTempPerm1177 = 0.0f;
		for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
			fRec279[l282] = 0.0f;
		}
		fTempPerm1178 = 0.0f;
		fTempPerm1179 = 0.0f;
		fTempPerm1180 = 0.0f;
		fTempPerm1181 = 0.0f;
		for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
			fRec170[l283] = 0.0f;
		}
		fTempPerm1182 = 0.0f;
		fTempPerm1183 = 0.0f;
		fTempPerm1184 = 0.0f;
		fTempPerm1185 = 0.0f;
		fTempPerm1186 = 0.0f;
		fTempPerm1187 = 0.0f;
		fTempPerm1188 = 0.0f;
		fTempPerm1189 = 0.0f;
		iTempPerm1190 = 0;
		fTempPerm1191 = 0.0f;
		fTempPerm1192 = 0.0f;
		fTempPerm1193 = 0.0f;
		fTempPerm1194 = 0.0f;
		for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
			fRec280[l284] = 0.0f;
		}
		fTempPerm1195 = 0.0f;
		for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
			fRec281[l285] = 0.0f;
		}
		fTempPerm1196 = 0.0f;
		fTempPerm1197 = 0.0f;
		for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
			fRec283[l286] = 0.0f;
		}
		fTempPerm1198 = 0.0f;
		for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
			fRec284[l287] = 0.0f;
		}
		for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
			fRec285[l288] = 0.0f;
		}
		fTempPerm1199 = 0.0f;
		fTempPerm1200 = 0.0f;
		fTempPerm1201 = 0.0f;
		fTempPerm1202 = 0.0f;
		fTempPerm1203 = 0.0f;
		for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
			fRec288[l289] = 0.0f;
		}
		fTempPerm1204 = 0.0f;
		for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
			fRec289[l290] = 0.0f;
		}
		fTempPerm1205 = 0.0f;
		for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
			fVec47[l291] = 0.0f;
		}
		fTempPerm1206 = 0.0f;
		fTempPerm1207 = 0.0f;
		fTempPerm1208 = 0.0f;
		fTempPerm1209 = 0.0f;
		fTempPerm1210 = 0.0f;
		for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
			fRec291[l292] = 0.0f;
		}
		fTempPerm1211 = 0.0f;
		fTempPerm1212 = 0.0f;
		fTempPerm1213 = 0.0f;
		fTempPerm1214 = 0.0f;
		for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
			fVec48[l293] = 0.0f;
		}
		iTempPerm1215 = 0;
		for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
			iVec49[l294] = 0;
		}
		iTempPerm1216 = 0;
		for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
			fRec296[l295] = 0.0f;
		}
		fTempPerm1217 = 0.0f;
		for (int l296 = 0; l296 < 2; l296 = l296 + 1) {
			fRec295[l296] = 0.0f;
		}
		for (int l297 = 0; l297 < 2; l297 = l297 + 1) {
			fRec294[l297] = 0.0f;
		}
		for (int l298 = 0; l298 < 2; l298 = l298 + 1) {
			fRec293[l298] = 0.0f;
		}
		for (int l299 = 0; l299 < 2; l299 = l299 + 1) {
			fRec292[l299] = 0.0f;
		}
		for (int l300 = 0; l300 < 2; l300 = l300 + 1) {
			fRec290[l300] = 0.0f;
		}
		fTempPerm1218 = 0.0f;
		fTempPerm1219 = 0.0f;
		fTempPerm1220 = 0.0f;
		fTempPerm1221 = 0.0f;
		fTempPerm1222 = 0.0f;
		fTempPerm1223 = 0.0f;
		iTempPerm1224 = 0;
		fTempPerm1225 = 0.0f;
		fTempPerm1226 = 0.0f;
		fTempPerm1227 = 0.0f;
		for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
			fRec297[l301] = 0.0f;
		}
		fTempPerm1228 = 0.0f;
		for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
			fRec298[l302] = 0.0f;
		}
		fTempPerm1229 = 0.0f;
		fTempPerm1230 = 0.0f;
		for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
			fRec300[l303] = 0.0f;
		}
		fTempPerm1231 = 0.0f;
		for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
			fRec301[l304] = 0.0f;
		}
		for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
			fRec302[l305] = 0.0f;
		}
		fTempPerm1232 = 0.0f;
		fTempPerm1233 = 0.0f;
		fTempPerm1234 = 0.0f;
		fTempPerm1235 = 0.0f;
		fTempPerm1236 = 0.0f;
		for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
			fRec305[l306] = 0.0f;
		}
		fTempPerm1237 = 0.0f;
		for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
			fRec306[l307] = 0.0f;
		}
		fTempPerm1238 = 0.0f;
		for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
			fVec50[l308] = 0.0f;
		}
		fTempPerm1239 = 0.0f;
		for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
			fRec308[l309] = 0.0f;
		}
		fTempPerm1240 = 0.0f;
		fTempPerm1241 = 0.0f;
		fTempPerm1242 = 0.0f;
		fTempPerm1243 = 0.0f;
		for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
			fVec51[l310] = 0.0f;
		}
		iTempPerm1244 = 0;
		for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
			iVec52[l311] = 0;
		}
		iTempPerm1245 = 0;
		for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
			fRec313[l312] = 0.0f;
		}
		fTempPerm1246 = 0.0f;
		for (int l313 = 0; l313 < 2; l313 = l313 + 1) {
			fRec312[l313] = 0.0f;
		}
		for (int l314 = 0; l314 < 2; l314 = l314 + 1) {
			fRec311[l314] = 0.0f;
		}
		for (int l315 = 0; l315 < 2; l315 = l315 + 1) {
			fRec310[l315] = 0.0f;
		}
		for (int l316 = 0; l316 < 2; l316 = l316 + 1) {
			fRec309[l316] = 0.0f;
		}
		for (int l317 = 0; l317 < 2; l317 = l317 + 1) {
			fRec307[l317] = 0.0f;
		}
		fTempPerm1247 = 0.0f;
		fTempPerm1248 = 0.0f;
		fTempPerm1249 = 0.0f;
		fTempPerm1250 = 0.0f;
		fTempPerm1251 = 0.0f;
		fTempPerm1252 = 0.0f;
		fTempPerm1253 = 0.0f;
		fTempPerm1254 = 0.0f;
		fTempPerm1255 = 0.0f;
		fTempPerm1256 = 0.0f;
		fTempPerm1257 = 0.0f;
		fTempPerm1258 = 0.0f;
		fTempPerm1259 = 0.0f;
		fTempPerm1260 = 0.0f;
		fTempPerm1261 = 0.0f;
		fTempPerm1262 = 0.0f;
		fTempPerm1263 = 0.0f;
		fTempPerm1264 = 0.0f;
		fTempPerm1265 = 0.0f;
		fTempPerm1266 = 0.0f;
		fTempPerm1267 = 0.0f;
		fTempPerm1268 = 0.0f;
		fTempPerm1269 = 0.0f;
		fTempPerm1270 = 0.0f;
		fTempPerm1271 = 0.0f;
		fTempPerm1272 = 0.0f;
		fTempPerm1273 = 0.0f;
		fTempPerm1274 = 0.0f;
		fTempPerm1275 = 0.0f;
		fTempPerm1276 = 0.0f;
		fTempPerm1277 = 0.0f;
		fTempPerm1278 = 0.0f;
		fTempPerm1279 = 0.0f;
		fTempPerm1280 = 0.0f;
		fTempPerm1281 = 0.0f;
		fTempPerm1282 = 0.0f;
		fTempPerm1283 = 0.0f;
		fTempPerm1284 = 0.0f;
		fTempPerm1285 = 0.0f;
		fTempPerm1286 = 0.0f;
		fTempPerm1287 = 0.0f;
		fTempPerm1288 = 0.0f;
		fTempPerm1289 = 0.0f;
		fTempPerm1290 = 0.0f;
		fTempPerm1291 = 0.0f;
		fTempPerm1292 = 0.0f;
		fTempPerm1293 = 0.0f;
		fTempPerm1294 = 0.0f;
		fTempPerm1295 = 0.0f;
		fTempPerm1296 = 0.0f;
		fTempPerm1297 = 0.0f;
		fTempPerm1298 = 0.0f;
		fTempPerm1299 = 0.0f;
		fTempPerm1300 = 0.0f;
		fTempPerm1301 = 0.0f;
		fTempPerm1302 = 0.0f;
		fTempPerm1303 = 0.0f;
		fTempPerm1304 = 0.0f;
		fTempPerm1305 = 0.0f;
		fTempPerm1306 = 0.0f;
		fTempPerm1307 = 0.0f;
		fTempPerm1308 = 0.0f;
		fTempPerm1309 = 0.0f;
		fTempPerm1310 = 0.0f;
		fTempPerm1311 = 0.0f;
		fTempPerm1312 = 0.0f;
		fTempPerm1313 = 0.0f;
		fTempPerm1314 = 0.0f;
		fTempPerm1315 = 0.0f;
		for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
			fRec314[l318] = 0.0f;
		}
		fTempPerm1316 = 0.0f;
		fTempPerm1317 = 0.0f;
		fTempPerm1318 = 0.0f;
		for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
			fRec315[l319] = 0.0f;
		}
		fTempPerm1319 = 0.0f;
		fTempPerm1320 = 0.0f;
		fTempPerm1321 = 0.0f;
		fTempPerm1322 = 0.0f;
		for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
			fRec171[l320] = 0.0f;
		}
	}

	void init(int sample_rate) {
		instanceInit(sample_rate);
	}

	void instanceInit(int sample_rate) {
		staticInit(sample_rate);
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


	void control(int* RESTRICT iControl, float* RESTRICT fControl) {
		fControl[0] = float(fHslider1);
		fControl[1] = fControl[0] + -1.0f;
		fControl[2] = float(fHslider0) * fControl[1] + 1.0f;
		fControl[3] = float(fButton0);
		iControl[0] = fControl[3] > 0.0f;
		iControl[1] = iControl[0];
		fControl[4] = float(fHslider2);
		fControl[5] = float(fHslider3);
		iControl[2] = int(fConst0 * fControl[5]);
		fControl[6] = float(fHslider4);
		fControl[7] = float(iControl[0]);
		fControl[8] = float(fHslider5) * fControl[7];
		fControl[9] = float(fVslider0);
		fControl[10] = std::min<float>(8.0f, fControl[9]);
		fControl[11] = float(0.0f == fControl[10]);
		iControl[3] = fControl[11] != 0.0f;
		fControl[12] = float(fHslider6);
		fControl[13] = float(fHslider7);
		fControl[14] = fControl[12] + fControl[13];
		fControl[15] = float(fHslider8);
		fControl[16] = std::fabs(fControl[15]);
		fControl[17] = std::fabs(fControl[16]);
		fControl[18] = float(fHslider9);
		fControl[19] = std::fabs(fControl[18]);
		fControl[20] = std::fabs(fControl[19]);
		fControl[21] = float(fHslider10);
		fControl[22] = std::fabs(fControl[21]);
		fControl[23] = std::fabs(fControl[22]);
		fControl[24] = float(fHslider11);
		fControl[25] = std::fabs(fControl[24]);
		fControl[26] = std::fabs(fControl[25]);
		fControl[27] = float(fHslider12);
		fControl[28] = std::fabs(fControl[27]);
		fControl[29] = std::fabs(fControl[28]);
		fControl[30] = float(fHslider13);
		fControl[31] = std::fabs(fControl[30]);
		fControl[32] = std::fabs(fControl[31]);
		fControl[33] = float(fHslider14);
		fControl[34] = std::fabs(fControl[33]);
		fControl[35] = std::fabs(fControl[34]);
		fControl[36] = float(fHslider15);
		fControl[37] = std::fabs(fControl[36]);
		fControl[38] = std::fabs(fControl[37]);
		fControl[39] = float(fHslider16);
		fControl[40] = std::fabs(fControl[39]);
		fControl[41] = std::fabs(fControl[40]);
		fControl[42] = float(fHslider17);
		fControl[43] = std::fabs(fControl[42]);
		fControl[44] = std::fabs(fControl[43]);
		fControl[45] = float(fHslider18);
		fControl[46] = std::fabs(fControl[45]);
		fControl[47] = std::fabs(fControl[46]);
		fControl[48] = float(fHslider19);
		fControl[49] = std::fabs(fControl[48]);
		fControl[50] = std::fabs(fControl[49]);
		fControl[51] = float(fHslider20);
		fControl[52] = std::fabs(fControl[51]);
		fControl[53] = std::fabs(fControl[52]);
		fControl[54] = float(fHslider21);
		fControl[55] = std::fabs(fControl[54]);
		fControl[56] = std::fabs(fControl[55]);
		fControl[57] = fControl[17] + fControl[20] + fControl[23] + fControl[26] + fControl[29] + fControl[32] + fControl[35] + fControl[38] + fControl[41] + fControl[44] + fControl[47] + fControl[50] + fControl[53] + fControl[56];
		fControl[58] = std::min<float>(1.0f, fControl[57]);
		fControl[59] = fControl[58] / std::max<float>(1.84317514e-35f, fControl[57]);
		fControl[60] = std::max<float>(1.31655367e-36f, fControl[23]);
		float fElse6 = 0.0f - fControl[60];
		fControl[61] = ((fControl[22] < 0.0f) ? fElse6 : fControl[60]);
		iControl[4] = fControl[21] < 0.0f;
		fControl[62] = float(fHslider22) * fControl[1] + 1.0f;
		fControl[63] = float(fHslider23);
		fControl[64] = float(fHslider24);
		iControl[5] = int(fConst0 * fControl[64]);
		fControl[65] = float(fHslider25);
		fControl[66] = float(fHslider26) * fControl[7];
		fControl[67] = std::max<float>(1.31655367e-36f, fControl[26]);
		float fElse14 = 0.0f - fControl[67];
		fControl[68] = ((fControl[25] < 0.0f) ? fElse14 : fControl[67]);
		iControl[6] = fControl[24] < 0.0f;
		fControl[69] = float(fHslider27) * fControl[1] + 1.0f;
		fControl[70] = float(fHslider28);
		fControl[71] = float(fHslider29);
		iControl[7] = int(fConst0 * fControl[71]);
		fControl[72] = float(fHslider30);
		fControl[73] = float(fHslider31) * fControl[7];
		fControl[74] = std::max<float>(1.31655367e-36f, fControl[29]);
		float fElse22 = 0.0f - fControl[74];
		fControl[75] = ((fControl[28] < 0.0f) ? fElse22 : fControl[74]);
		iControl[8] = fControl[27] < 0.0f;
		fControl[76] = float(fHslider32) * fControl[1] + 1.0f;
		fControl[77] = float(fHslider33);
		fControl[78] = float(fHslider34);
		iControl[9] = int(fConst0 * fControl[78]);
		fControl[79] = float(fHslider35);
		fControl[80] = float(fHslider36) * fControl[7];
		fControl[81] = std::max<float>(1.31655367e-36f, fControl[32]);
		float fElse30 = 0.0f - fControl[81];
		fControl[82] = ((fControl[31] < 0.0f) ? fElse30 : fControl[81]);
		iControl[10] = fControl[30] < 0.0f;
		fControl[83] = float(fHslider37) * fControl[1] + 1.0f;
		fControl[84] = float(fHslider38);
		fControl[85] = float(fHslider39);
		iControl[11] = int(fConst0 * fControl[85]);
		fControl[86] = float(fHslider40);
		fControl[87] = float(fHslider41) * fControl[7];
		fControl[88] = std::max<float>(1.31655367e-36f, fControl[35]);
		float fElse38 = 0.0f - fControl[88];
		fControl[89] = ((fControl[34] < 0.0f) ? fElse38 : fControl[88]);
		iControl[12] = fControl[33] < 0.0f;
		fControl[90] = fConst1 * float(fHslider42);
		fControl[91] = std::max<float>(1.31655367e-36f, fControl[38]);
		float fElse40 = 0.0f - fControl[91];
		fControl[92] = ((fControl[37] < 0.0f) ? fElse40 : fControl[91]);
		iControl[13] = fControl[36] < 0.0f;
		fControl[93] = fConst1 * float(fHslider43);
		fControl[94] = std::max<float>(1.31655367e-36f, fControl[41]);
		float fElse42 = 0.0f - fControl[94];
		fControl[95] = ((fControl[40] < 0.0f) ? fElse42 : fControl[94]);
		iControl[14] = fControl[39] < 0.0f;
		fControl[96] = fConst1 * float(fHslider44);
		fControl[97] = std::max<float>(1.31655367e-36f, fControl[44]);
		float fElse44 = 0.0f - fControl[97];
		fControl[98] = ((fControl[43] < 0.0f) ? fElse44 : fControl[97]);
		iControl[15] = fControl[42] < 0.0f;
		fControl[99] = fConst1 * float(fHslider45);
		fControl[100] = std::max<float>(1.31655367e-36f, fControl[47]);
		float fElse46 = 0.0f - fControl[100];
		fControl[101] = 0.00787401572f * float(fVslider1);
		fControl[102] = 1.0f - fControl[101];
		fControl[103] = ((fControl[46] < 0.0f) ? fElse46 : fControl[100]) * ((fControl[45] < 0.0f) ? fControl[102] : fControl[101]);
		fControl[104] = std::max<float>(1.31655367e-36f, fControl[50]);
		float fElse48 = 0.0f - fControl[104];
		fControl[105] = ((fControl[49] < 0.0f) ? fElse48 : fControl[104]) * float(((fControl[48] < 0.0f) ? 1 : 0));
		fControl[106] = std::max<float>(1.31655367e-36f, fControl[20]);
		float fElse50 = 0.0f - fControl[106];
		fControl[107] = 1.0f - fControl[0];
		fControl[108] = ((fControl[19] < 0.0f) ? fElse50 : fControl[106]) * ((fControl[18] < 0.0f) ? fControl[107] : fControl[0]);
		fControl[109] = std::max<float>(1.31655367e-36f, fControl[53]);
		float fElse52 = 0.0f - fControl[109];
		fControl[110] = 0.00787401572f * float(fVslider2);
		fControl[111] = 1.0f - fControl[110];
		fControl[112] = ((fControl[52] < 0.0f) ? fElse52 : fControl[109]) * ((fControl[51] < 0.0f) ? fControl[111] : fControl[110]);
		fControl[113] = std::max<float>(1.31655367e-36f, fControl[17]);
		float fElse54 = 0.0f - fControl[113];
		fControl[114] = float(fVslider3);
		fControl[115] = 0.000122070312f * fControl[114];
		fControl[116] = 1.0f - fControl[115];
		fControl[117] = ((fControl[16] < 0.0f) ? fElse54 : fControl[113]) * ((fControl[15] < 0.0f) ? fControl[116] : fControl[115]);
		fControl[118] = std::max<float>(1.31655367e-36f, fControl[56]);
		float fElse56 = 0.0f - fControl[118];
		fControl[119] = ((fControl[55] < 0.0f) ? fElse56 : fControl[118]);
		iControl[16] = fControl[54] < 0.0f;
		fControl[120] = 1.0f - fControl[58];
		fControl[121] = float(fHslider46);
		fControl[122] = float(fHslider47);
		iControl[17] = std::fabs(fControl[122]) < 1.1920929e-07f;
		float fThen60 = std::exp(0.0f - fConst1 / ((iControl[17]) ? 1.0f : fControl[122]));
		fControl[123] = ((iControl[17]) ? 0.0f : fThen60);
		fControl[124] = float(fHslider48);
		iControl[18] = std::fabs(fControl[124]) < 1.1920929e-07f;
		float fThen62 = std::exp(0.0f - fConst1 / ((iControl[18]) ? 1.0f : fControl[124]));
		fControl[125] = ((iControl[18]) ? 0.0f : fThen62);
		fControl[126] = float(fHslider49);
		fControl[127] = float(fHslider50) - fControl[13];
		fControl[128] = float(fHslider51) - fControl[126];
		fControl[129] = fControl[127] - fControl[128];
		fControl[130] = float(fHslider52);
		fControl[131] = std::fabs(fControl[130]);
		fControl[132] = std::fabs(fControl[131]);
		fControl[133] = float(fHslider53);
		fControl[134] = std::fabs(fControl[133]);
		fControl[135] = std::fabs(fControl[134]);
		fControl[136] = float(fHslider54);
		fControl[137] = std::fabs(fControl[136]);
		fControl[138] = std::fabs(fControl[137]);
		fControl[139] = float(fHslider55);
		fControl[140] = std::fabs(fControl[139]);
		fControl[141] = std::fabs(fControl[140]);
		fControl[142] = float(fHslider56);
		fControl[143] = std::fabs(fControl[142]);
		fControl[144] = std::fabs(fControl[143]);
		fControl[145] = float(fHslider57);
		fControl[146] = std::fabs(fControl[145]);
		fControl[147] = std::fabs(fControl[146]);
		fControl[148] = float(fHslider58);
		fControl[149] = std::fabs(fControl[148]);
		fControl[150] = std::fabs(fControl[149]);
		fControl[151] = float(fHslider59);
		fControl[152] = std::fabs(fControl[151]);
		fControl[153] = std::fabs(fControl[152]);
		fControl[154] = float(fHslider60);
		fControl[155] = std::fabs(fControl[154]);
		fControl[156] = std::fabs(fControl[155]);
		fControl[157] = float(fHslider61);
		fControl[158] = std::fabs(fControl[157]);
		fControl[159] = std::fabs(fControl[158]);
		fControl[160] = float(fHslider62);
		fControl[161] = std::fabs(fControl[160]);
		fControl[162] = std::fabs(fControl[161]);
		fControl[163] = float(fHslider63);
		fControl[164] = std::fabs(fControl[163]);
		fControl[165] = std::fabs(fControl[164]);
		fControl[166] = float(fHslider64);
		fControl[167] = std::fabs(fControl[166]);
		fControl[168] = std::fabs(fControl[167]);
		fControl[169] = float(fHslider65);
		fControl[170] = std::fabs(fControl[169]);
		fControl[171] = std::fabs(fControl[170]);
		fControl[172] = fControl[132] + fControl[135] + fControl[138] + fControl[141] + fControl[144] + fControl[147] + fControl[150] + fControl[153] + fControl[156] + fControl[159] + fControl[162] + fControl[165] + fControl[168] + fControl[171];
		fControl[173] = std::min<float>(1.0f, fControl[172]);
		fControl[174] = fControl[173] / std::max<float>(1.84317514e-35f, fControl[172]);
		fControl[175] = std::max<float>(1.31655367e-36f, fControl[132]);
		float fElse64 = 0.0f - fControl[175];
		fControl[176] = ((fControl[131] < 0.0f) ? fElse64 : fControl[175]);
		iControl[19] = fControl[130] < 0.0f;
		fControl[177] = std::max<float>(1.31655367e-36f, fControl[135]);
		float fElse66 = 0.0f - fControl[177];
		fControl[178] = ((fControl[134] < 0.0f) ? fElse66 : fControl[177]);
		iControl[20] = fControl[133] < 0.0f;
		fControl[179] = std::max<float>(1.31655367e-36f, fControl[138]);
		float fElse68 = 0.0f - fControl[179];
		fControl[180] = ((fControl[137] < 0.0f) ? fElse68 : fControl[179]);
		iControl[21] = fControl[136] < 0.0f;
		fControl[181] = std::max<float>(1.31655367e-36f, fControl[141]);
		float fElse70 = 0.0f - fControl[181];
		fControl[182] = ((fControl[140] < 0.0f) ? fElse70 : fControl[181]);
		iControl[22] = fControl[139] < 0.0f;
		fControl[183] = std::max<float>(1.31655367e-36f, fControl[144]);
		float fElse72 = 0.0f - fControl[183];
		fControl[184] = ((fControl[143] < 0.0f) ? fElse72 : fControl[183]);
		iControl[23] = fControl[142] < 0.0f;
		fControl[185] = std::max<float>(1.31655367e-36f, fControl[147]);
		float fElse74 = 0.0f - fControl[185];
		fControl[186] = ((fControl[146] < 0.0f) ? fElse74 : fControl[185]);
		iControl[24] = fControl[145] < 0.0f;
		fControl[187] = std::max<float>(1.31655367e-36f, fControl[150]);
		float fElse76 = 0.0f - fControl[187];
		fControl[188] = ((fControl[149] < 0.0f) ? fElse76 : fControl[187]);
		iControl[25] = fControl[148] < 0.0f;
		fControl[189] = std::max<float>(1.31655367e-36f, fControl[153]);
		float fElse78 = 0.0f - fControl[189];
		fControl[190] = ((fControl[152] < 0.0f) ? fElse78 : fControl[189]);
		iControl[26] = fControl[151] < 0.0f;
		fControl[191] = std::max<float>(1.31655367e-36f, fControl[156]);
		float fElse80 = 0.0f - fControl[191];
		fControl[192] = ((fControl[155] < 0.0f) ? fElse80 : fControl[191]) * ((fControl[154] < 0.0f) ? fControl[102] : fControl[101]);
		fControl[193] = std::max<float>(1.31655367e-36f, fControl[159]);
		float fElse82 = 0.0f - fControl[193];
		fControl[194] = ((fControl[158] < 0.0f) ? fElse82 : fControl[193]) * float(((fControl[157] < 0.0f) ? 1 : 0));
		fControl[195] = std::max<float>(1.31655367e-36f, fControl[162]);
		float fElse84 = 0.0f - fControl[195];
		fControl[196] = ((fControl[161] < 0.0f) ? fElse84 : fControl[195]) * ((fControl[160] < 0.0f) ? fControl[107] : fControl[0]);
		fControl[197] = std::max<float>(1.31655367e-36f, fControl[165]);
		float fElse86 = 0.0f - fControl[197];
		fControl[198] = ((fControl[164] < 0.0f) ? fElse86 : fControl[197]) * ((fControl[163] < 0.0f) ? fControl[111] : fControl[110]);
		fControl[199] = std::max<float>(1.31655367e-36f, fControl[168]);
		float fElse88 = 0.0f - fControl[199];
		fControl[200] = ((fControl[167] < 0.0f) ? fElse88 : fControl[199]) * ((fControl[166] < 0.0f) ? fControl[116] : fControl[115]);
		fControl[201] = std::max<float>(1.31655367e-36f, fControl[171]);
		float fElse90 = 0.0f - fControl[201];
		fControl[202] = ((fControl[170] < 0.0f) ? fElse90 : fControl[201]);
		iControl[27] = fControl[169] < 0.0f;
		fControl[203] = 1.0f - fControl[173];
		fControl[204] = float(fHslider66);
		fControl[205] = float(fHslider67);
		iControl[28] = std::fabs(fControl[205]) < 1.1920929e-07f;
		float fThen93 = std::exp(0.0f - fConst1 / ((iControl[28]) ? 1.0f : fControl[205]));
		fControl[206] = ((iControl[28]) ? 0.0f : fThen93);
		fControl[207] = float(fHslider68);
		iControl[29] = std::fabs(fControl[207]) < 1.1920929e-07f;
		float fThen95 = std::exp(0.0f - fConst1 / ((iControl[29]) ? 1.0f : fControl[207]));
		fControl[208] = ((iControl[29]) ? 0.0f : fThen95);
		fControl[209] = float(fHslider69);
		fControl[210] = std::fabs(fControl[209]);
		fControl[211] = std::fabs(fControl[210]);
		fControl[212] = float(fHslider70);
		fControl[213] = std::fabs(fControl[212]);
		fControl[214] = std::fabs(fControl[213]);
		fControl[215] = float(fHslider71);
		fControl[216] = std::fabs(fControl[215]);
		fControl[217] = std::fabs(fControl[216]);
		fControl[218] = float(fHslider72);
		fControl[219] = std::fabs(fControl[218]);
		fControl[220] = std::fabs(fControl[219]);
		fControl[221] = float(fHslider73);
		fControl[222] = std::fabs(fControl[221]);
		fControl[223] = std::fabs(fControl[222]);
		fControl[224] = float(fHslider74);
		fControl[225] = std::fabs(fControl[224]);
		fControl[226] = std::fabs(fControl[225]);
		fControl[227] = float(fHslider75);
		fControl[228] = std::fabs(fControl[227]);
		fControl[229] = std::fabs(fControl[228]);
		fControl[230] = float(fHslider76);
		fControl[231] = std::fabs(fControl[230]);
		fControl[232] = std::fabs(fControl[231]);
		fControl[233] = float(fHslider77);
		fControl[234] = std::fabs(fControl[233]);
		fControl[235] = std::fabs(fControl[234]);
		fControl[236] = float(fHslider78);
		fControl[237] = std::fabs(fControl[236]);
		fControl[238] = std::fabs(fControl[237]);
		fControl[239] = float(fHslider79);
		fControl[240] = std::fabs(fControl[239]);
		fControl[241] = std::fabs(fControl[240]);
		fControl[242] = float(fHslider80);
		fControl[243] = std::fabs(fControl[242]);
		fControl[244] = std::fabs(fControl[243]);
		fControl[245] = float(fHslider81);
		fControl[246] = std::fabs(fControl[245]);
		fControl[247] = std::fabs(fControl[246]);
		fControl[248] = float(fHslider82);
		fControl[249] = std::fabs(fControl[248]);
		fControl[250] = std::fabs(fControl[249]);
		fControl[251] = fControl[211] + fControl[214] + fControl[217] + fControl[220] + fControl[223] + fControl[226] + fControl[229] + fControl[232] + fControl[235] + fControl[238] + fControl[241] + fControl[244] + fControl[247] + fControl[250];
		fControl[252] = std::min<float>(1.0f, fControl[251]);
		fControl[253] = fControl[252] / std::max<float>(1.84317514e-35f, fControl[251]);
		fControl[254] = std::max<float>(1.31655367e-36f, fControl[211]);
		float fElse97 = 0.0f - fControl[254];
		fControl[255] = ((fControl[210] < 0.0f) ? fElse97 : fControl[254]);
		iControl[30] = fControl[209] < 0.0f;
		fControl[256] = std::max<float>(1.31655367e-36f, fControl[214]);
		float fElse99 = 0.0f - fControl[256];
		fControl[257] = ((fControl[213] < 0.0f) ? fElse99 : fControl[256]);
		iControl[31] = fControl[212] < 0.0f;
		fControl[258] = std::max<float>(1.31655367e-36f, fControl[217]);
		float fElse101 = 0.0f - fControl[258];
		fControl[259] = ((fControl[216] < 0.0f) ? fElse101 : fControl[258]);
		iControl[32] = fControl[215] < 0.0f;
		fControl[260] = std::max<float>(1.31655367e-36f, fControl[220]);
		float fElse103 = 0.0f - fControl[260];
		fControl[261] = ((fControl[219] < 0.0f) ? fElse103 : fControl[260]);
		iControl[33] = fControl[218] < 0.0f;
		fControl[262] = std::max<float>(1.31655367e-36f, fControl[223]);
		float fElse105 = 0.0f - fControl[262];
		fControl[263] = ((fControl[222] < 0.0f) ? fElse105 : fControl[262]);
		iControl[34] = fControl[221] < 0.0f;
		fControl[264] = std::max<float>(1.31655367e-36f, fControl[226]);
		float fElse107 = 0.0f - fControl[264];
		fControl[265] = ((fControl[225] < 0.0f) ? fElse107 : fControl[264]);
		iControl[35] = fControl[224] < 0.0f;
		fControl[266] = std::max<float>(1.31655367e-36f, fControl[229]);
		float fElse109 = 0.0f - fControl[266];
		fControl[267] = ((fControl[228] < 0.0f) ? fElse109 : fControl[266]);
		iControl[36] = fControl[227] < 0.0f;
		fControl[268] = std::max<float>(1.31655367e-36f, fControl[232]);
		float fElse111 = 0.0f - fControl[268];
		fControl[269] = ((fControl[231] < 0.0f) ? fElse111 : fControl[268]);
		iControl[37] = fControl[230] < 0.0f;
		fControl[270] = std::max<float>(1.31655367e-36f, fControl[235]);
		float fElse113 = 0.0f - fControl[270];
		fControl[271] = ((fControl[234] < 0.0f) ? fElse113 : fControl[270]) * ((fControl[233] < 0.0f) ? fControl[102] : fControl[101]);
		fControl[272] = std::max<float>(1.31655367e-36f, fControl[238]);
		float fElse115 = 0.0f - fControl[272];
		fControl[273] = ((fControl[237] < 0.0f) ? fElse115 : fControl[272]) * float(((fControl[236] < 0.0f) ? 1 : 0));
		fControl[274] = std::max<float>(1.31655367e-36f, fControl[241]);
		float fElse117 = 0.0f - fControl[274];
		fControl[275] = ((fControl[240] < 0.0f) ? fElse117 : fControl[274]) * ((fControl[239] < 0.0f) ? fControl[107] : fControl[0]);
		fControl[276] = std::max<float>(1.31655367e-36f, fControl[244]);
		float fElse119 = 0.0f - fControl[276];
		fControl[277] = ((fControl[243] < 0.0f) ? fElse119 : fControl[276]) * ((fControl[242] < 0.0f) ? fControl[111] : fControl[110]);
		fControl[278] = std::max<float>(1.31655367e-36f, fControl[247]);
		float fElse121 = 0.0f - fControl[278];
		fControl[279] = ((fControl[246] < 0.0f) ? fElse121 : fControl[278]) * ((fControl[245] < 0.0f) ? fControl[116] : fControl[115]);
		fControl[280] = std::max<float>(1.31655367e-36f, fControl[250]);
		float fElse123 = 0.0f - fControl[280];
		fControl[281] = ((fControl[249] < 0.0f) ? fElse123 : fControl[280]);
		iControl[38] = fControl[248] < 0.0f;
		fControl[282] = 1.0f - fControl[252];
		fControl[283] = float(fHslider83);
		fControl[284] = float(fHslider84);
		iControl[39] = std::fabs(fControl[284]) < 1.1920929e-07f;
		float fThen126 = std::exp(0.0f - fConst1 / ((iControl[39]) ? 1.0f : fControl[284]));
		fControl[285] = ((iControl[39]) ? 0.0f : fThen126);
		fControl[286] = float(fHslider85);
		iControl[40] = std::fabs(fControl[286]) < 1.1920929e-07f;
		float fThen128 = std::exp(0.0f - fConst1 / ((iControl[40]) ? 1.0f : fControl[286]));
		fControl[287] = ((iControl[40]) ? 0.0f : fThen128);
		fControl[288] = float(fHslider86);
		fControl[289] = fControl[127] - float(fHslider87) - fControl[288];
		fControl[290] = float(fVslider4);
		fControl[291] = std::min<float>(8.0f, fControl[290]);
		fControl[292] = float(8.0f == fControl[291]);
		iControl[41] = fControl[292] != 0.0f;
		fControl[293] = float(7.0f == fControl[291]);
		iControl[42] = fControl[293] != 0.0f;
		fControl[294] = float(6.0f == fControl[291]);
		iControl[43] = fControl[294] != 0.0f;
		fControl[295] = float(5.0f == fControl[291]);
		iControl[44] = fControl[295] != 0.0f;
		fControl[296] = float(4.0f == fControl[291]);
		iControl[45] = fControl[296] != 0.0f;
		fControl[297] = float(3.0f == fControl[291]);
		iControl[46] = fControl[297] != 0.0f;
		fControl[298] = float(2.0f == fControl[291]);
		iControl[47] = fControl[298] != 0.0f;
		fControl[299] = float(1.0f == fControl[291]);
		iControl[48] = fControl[299] != 0.0f;
		fControl[300] = float(0.0f == fControl[291]);
		iControl[49] = fControl[300] != 0.0f;
		fControl[301] = float(fVslider5);
		fControl[302] = std::min<float>(8.0f, fControl[301]);
		fControl[303] = float(8.0f == fControl[302]);
		iControl[50] = fControl[303] != 0.0f;
		fControl[304] = float(7.0f == fControl[302]);
		iControl[51] = fControl[304] != 0.0f;
		fControl[305] = float(6.0f == fControl[302]);
		iControl[52] = fControl[305] != 0.0f;
		fControl[306] = float(5.0f == fControl[302]);
		iControl[53] = fControl[306] != 0.0f;
		fControl[307] = float(4.0f == fControl[302]);
		iControl[54] = fControl[307] != 0.0f;
		fControl[308] = float(3.0f == fControl[302]);
		iControl[55] = fControl[308] != 0.0f;
		fControl[309] = float(2.0f == fControl[302]);
		iControl[56] = fControl[309] != 0.0f;
		fControl[310] = float(1.0f == fControl[302]);
		iControl[57] = fControl[310] != 0.0f;
		fControl[311] = float(0.0f == fControl[302]);
		iControl[58] = fControl[311] != 0.0f;
		fControl[312] = float(fVslider6);
		fControl[313] = std::min<float>(8.0f, fControl[312]);
		fControl[314] = float(8.0f == fControl[313]);
		iControl[59] = fControl[314] != 0.0f;
		fControl[315] = float(7.0f == fControl[313]);
		iControl[60] = fControl[315] != 0.0f;
		fControl[316] = float(6.0f == fControl[313]);
		iControl[61] = fControl[316] != 0.0f;
		fControl[317] = float(5.0f == fControl[313]);
		iControl[62] = fControl[317] != 0.0f;
		fControl[318] = float(4.0f == fControl[313]);
		iControl[63] = fControl[318] != 0.0f;
		fControl[319] = float(3.0f == fControl[313]);
		iControl[64] = fControl[319] != 0.0f;
		fControl[320] = float(2.0f == fControl[313]);
		iControl[65] = fControl[320] != 0.0f;
		fControl[321] = float(1.0f == fControl[313]);
		iControl[66] = fControl[321] != 0.0f;
		fControl[322] = float(0.0f == fControl[313]);
		iControl[67] = fControl[322] != 0.0f;
		fControl[323] = float(8.0f == fControl[10]);
		iControl[68] = fControl[323] != 0.0f;
		fControl[324] = float(7.0f == fControl[10]);
		iControl[69] = fControl[324] != 0.0f;
		fControl[325] = float(6.0f == fControl[10]);
		iControl[70] = fControl[325] != 0.0f;
		fControl[326] = float(5.0f == fControl[10]);
		iControl[71] = fControl[326] != 0.0f;
		fControl[327] = float(4.0f == fControl[10]);
		iControl[72] = fControl[327] != 0.0f;
		fControl[328] = float(3.0f == fControl[10]);
		iControl[73] = fControl[328] != 0.0f;
		fControl[329] = float(2.0f == fControl[10]);
		iControl[74] = fControl[329] != 0.0f;
		fControl[330] = float(1.0f == fControl[10]);
		iControl[75] = fControl[330] != 0.0f;
		fControl[331] = float(fHslider88);
		fControl[332] = fControl[128] - float(fHslider89) - fControl[331];
		fControl[333] = float(fHslider90);
		fControl[334] = float(fHslider91) - fControl[12];
		fControl[335] = float(fHslider92) - fControl[333];
		fControl[336] = fControl[334] - fControl[335];
		fControl[337] = float(fHslider93);
		fControl[338] = fControl[334] - float(fHslider94) - fControl[337];
		fControl[339] = float(fHslider95);
		fControl[340] = fControl[335] - float(fHslider96) - fControl[339];
		fControl[341] = fControl[334] + fControl[127];
		fControl[342] = float(fHslider97);
		fControl[343] = float(fHslider98);
		fControl[344] = fControl[342] + fControl[343];
		fControl[345] = float(fHslider99);
		fControl[346] = float(fHslider100) - fControl[343];
		fControl[347] = float(fHslider101) - fControl[345];
		fControl[348] = fControl[346] - fControl[347];
		fControl[349] = float(fHslider102);
		fControl[350] = fControl[346] - float(fHslider103) - fControl[349];
		fControl[351] = float(fHslider104);
		fControl[352] = fControl[347] - float(fHslider105) - fControl[351];
		fControl[353] = float(fHslider106);
		fControl[354] = float(fHslider107) - fControl[342];
		fControl[355] = float(fHslider108) - fControl[353];
		fControl[356] = fControl[354] - fControl[355];
		fControl[357] = float(fHslider109);
		fControl[358] = fControl[354] - float(fHslider110) - fControl[357];
		fControl[359] = float(fHslider111);
		fControl[360] = fControl[355] - float(fHslider112) - fControl[359];
		fControl[361] = fControl[354] + fControl[346];
		fControl[362] = float(fHslider113);
		fControl[363] = float(fHslider114);
		fControl[364] = fControl[362] + fControl[363];
		fControl[365] = float(fHslider115);
		fControl[366] = float(fHslider116) - fControl[363];
		fControl[367] = float(fHslider117) - fControl[365];
		fControl[368] = fControl[366] - fControl[367];
		fControl[369] = float(fHslider118);
		fControl[370] = fControl[366] - float(fHslider119) - fControl[369];
		fControl[371] = float(fHslider120);
		fControl[372] = fControl[367] - float(fHslider121) - fControl[371];
		fControl[373] = float(fHslider122);
		fControl[374] = float(fHslider123) - fControl[362];
		fControl[375] = float(fHslider124) - fControl[373];
		fControl[376] = fControl[374] - fControl[375];
		fControl[377] = float(fHslider125);
		fControl[378] = fControl[374] - float(fHslider126) - fControl[377];
		fControl[379] = float(fHslider127);
		fControl[380] = fControl[375] - float(fHslider128) - fControl[379];
		fControl[381] = fControl[374] + fControl[366];
		fControl[382] = float(fHslider129);
		fControl[383] = float(fHslider130);
		fControl[384] = fControl[382] + fControl[383];
		fControl[385] = float(fHslider131);
		fControl[386] = float(fHslider132) - fControl[383];
		fControl[387] = float(fHslider133) - fControl[385];
		fControl[388] = fControl[386] - fControl[387];
		fControl[389] = float(fHslider134);
		fControl[390] = fControl[386] - float(fHslider135) - fControl[389];
		fControl[391] = fControl[366] - fControl[374];
		fControl[392] = fControl[346] - fControl[354];
		fControl[393] = fControl[127] - fControl[334];
		fControl[394] = float(fHslider136);
		fControl[395] = fControl[387] - float(fHslider137) - fControl[394];
		fControl[396] = float(fHslider138);
		fControl[397] = float(fHslider139) - fControl[382];
		fControl[398] = float(fHslider140) - fControl[396];
		fControl[399] = fControl[397] - fControl[398];
		fControl[400] = float(fHslider141);
		fControl[401] = fControl[397] - float(fHslider142) - fControl[400];
		fControl[402] = float(fHslider143);
		fControl[403] = fControl[398] - float(fHslider144) - fControl[402];
		fControl[404] = fControl[397] + fControl[386];
		fControl[405] = float(fHslider145);
		fControl[406] = float(fHslider146);
		fControl[407] = fControl[405] + fControl[406];
		fControl[408] = float(fHslider147);
		fControl[409] = float(fHslider148) - fControl[406];
		fControl[410] = float(fHslider149) - fControl[408];
		fControl[411] = fControl[409] - fControl[410];
		fControl[412] = float(fHslider150);
		fControl[413] = fControl[409] - float(fHslider151) - fControl[412];
		fControl[414] = float(fHslider152);
		fControl[415] = fControl[410] - float(fHslider153) - fControl[414];
		fControl[416] = float(fHslider154);
		fControl[417] = float(fHslider155) - fControl[405];
		fControl[418] = float(fHslider156) - fControl[416];
		fControl[419] = fControl[417] - fControl[418];
		fControl[420] = float(fHslider157);
		fControl[421] = fControl[417] - float(fHslider158) - fControl[420];
		fControl[422] = float(fHslider159);
		fControl[423] = fControl[418] - float(fHslider160) - fControl[422];
		fControl[424] = fControl[417] + fControl[409];
		fControl[425] = float(fHslider161);
		fControl[426] = float(fHslider162);
		fControl[427] = fControl[425] + fControl[426];
		fControl[428] = float(fHslider163);
		fControl[429] = float(fHslider164) - fControl[426];
		fControl[430] = float(fHslider165) - fControl[428];
		fControl[431] = fControl[429] - fControl[430];
		fControl[432] = float(fHslider166);
		fControl[433] = fControl[429] - float(fHslider167) - fControl[432];
		fControl[434] = float(fHslider168);
		fControl[435] = fControl[430] - float(fHslider169) - fControl[434];
		fControl[436] = float(fHslider170);
		fControl[437] = float(fHslider171) - fControl[425];
		fControl[438] = float(fHslider172) - fControl[436];
		fControl[439] = fControl[437] - fControl[438];
		fControl[440] = float(fHslider173);
		fControl[441] = fControl[437] - float(fHslider174) - fControl[440];
		fControl[442] = float(fHslider175);
		fControl[443] = fControl[438] - float(fHslider176) - fControl[442];
		fControl[444] = fControl[437] + fControl[429];
		fControl[445] = float(fHslider177);
		fControl[446] = float(fHslider178);
		fControl[447] = fControl[445] + fControl[446];
		fControl[448] = float(fHslider179);
		fControl[449] = float(fHslider180) - fControl[446];
		fControl[450] = float(fHslider181) - fControl[448];
		fControl[451] = fControl[449] - fControl[450];
		fControl[452] = float(fHslider182);
		fControl[453] = fControl[449] - float(fHslider183) - fControl[452];
		fControl[454] = float(fHslider184);
		fControl[455] = fControl[450] - float(fHslider185) - fControl[454];
		fControl[456] = float(fHslider186);
		fControl[457] = float(fHslider187) - fControl[445];
		fControl[458] = float(fHslider188) - fControl[456];
		fControl[459] = fControl[457] - fControl[458];
		fControl[460] = float(fHslider189);
		fControl[461] = fControl[457] - float(fHslider190) - fControl[460];
		fControl[462] = float(fHslider191);
		fControl[463] = fControl[458] - float(fHslider192) - fControl[462];
		fControl[464] = fControl[457] + fControl[449];
		iControl[76] = int(float(fEntry0));
		iControl[77] = iControl[76] == 0;
		iControl[78] = iControl[76] == 1;
		fControl[465] = 4.0f * float(fHslider193);
		fControl[466] = float(fVslider7);
		iControl[79] = std::fabs(fControl[466]) < 1.1920929e-07f;
		float fThen132 = std::exp(0.0f - fConst1 / ((iControl[79]) ? 1.0f : fControl[466]));
		fControl[467] = ((iControl[79]) ? 0.0f : fThen132);
		fControl[468] = fControl[465] * (1.0f - fControl[467]);
		iControl[80] = int(fControl[3]);
		float fThen135 = 0.0f - float(fEntry1);
		float fElse135 = float(fEntry2);
		fControl[469] = std::pow(2.0f, 1.01725263e-05f * fControl[114] * ((fControl[115] > 0.0f) ? fElse135 : fThen135));
		iControl[81] = float(fCheckbox0) != 1.0f;
		fControl[470] = float(fVslider8);
		fControl[471] = float(fHslider194);
		fControl[472] = float(fHslider195);
		fControl[473] = fControl[471] + fControl[472];
		fControl[474] = float(fHslider196);
		fControl[475] = float(fHslider197) - fControl[472];
		fControl[476] = float(fHslider198) - fControl[474];
		fControl[477] = fControl[475] - fControl[476];
		fControl[478] = float(fHslider199);
		fControl[479] = fControl[475] - float(fHslider200) - fControl[478];
		fControl[480] = float(fHslider201);
		fControl[481] = fControl[476] - float(fHslider202) - fControl[480];
		fControl[482] = float(fHslider203);
		fControl[483] = float(fHslider204) - fControl[471];
		fControl[484] = float(fHslider205) - fControl[482];
		fControl[485] = fControl[483] - fControl[484];
		fControl[486] = float(fHslider206);
		fControl[487] = fControl[483] - float(fHslider207) - fControl[486];
		fControl[488] = float(fHslider208);
		fControl[489] = fControl[484] - float(fHslider209) - fControl[488];
		fControl[490] = fControl[483] + fControl[475];
		fControl[491] = float(fHslider210);
		fControl[492] = float(fHslider211);
		fControl[493] = fControl[491] + fControl[492];
		fControl[494] = float(fHslider212);
		fControl[495] = float(fHslider213) - fControl[492];
		fControl[496] = float(fHslider214) - fControl[494];
		fControl[497] = fControl[495] - fControl[496];
		fControl[498] = float(fHslider215);
		fControl[499] = fControl[495] - float(fHslider216) - fControl[498];
		fControl[500] = float(fHslider217);
		fControl[501] = fControl[496] - float(fHslider218) - fControl[500];
		fControl[502] = float(fHslider219);
		fControl[503] = float(fHslider220) - fControl[491];
		fControl[504] = float(fHslider221) - fControl[502];
		fControl[505] = fControl[503] - fControl[504];
		fControl[506] = float(fHslider222);
		fControl[507] = fControl[503] - float(fHslider223) - fControl[506];
		fControl[508] = float(fHslider224);
		fControl[509] = fControl[504] - float(fHslider225) - fControl[508];
		fControl[510] = fControl[503] + fControl[495];
		fControl[511] = float(fHslider226);
		fControl[512] = float(fHslider227);
		fControl[513] = fControl[511] + fControl[512];
		fControl[514] = float(fHslider228);
		fControl[515] = float(fHslider229) - fControl[512];
		fControl[516] = float(fHslider230) - fControl[514];
		fControl[517] = fControl[515] - fControl[516];
		fControl[518] = float(fHslider231);
		fControl[519] = fControl[515] - float(fHslider232) - fControl[518];
		fControl[520] = float(fHslider233);
		fControl[521] = fControl[516] - float(fHslider234) - fControl[520];
		fControl[522] = float(fHslider235);
		fControl[523] = float(fHslider236) - fControl[511];
		fControl[524] = float(fHslider237) - fControl[522];
		fControl[525] = fControl[523] - fControl[524];
		fControl[526] = float(fHslider238);
		fControl[527] = fControl[523] - float(fHslider239) - fControl[526];
		fControl[528] = float(fHslider240);
		fControl[529] = fControl[524] - float(fHslider241) - fControl[528];
		fControl[530] = fControl[523] + fControl[515];
		fControl[531] = float(fHslider242);
		fControl[532] = float(fHslider243);
		fControl[533] = fControl[531] + fControl[532];
		fControl[534] = float(fHslider244);
		fControl[535] = float(fHslider245) - fControl[532];
		fControl[536] = float(fHslider246) - fControl[534];
		fControl[537] = fControl[535] - fControl[536];
		fControl[538] = float(fHslider247);
		fControl[539] = fControl[535] - float(fHslider248) - fControl[538];
		fControl[540] = float(fHslider249);
		fControl[541] = fControl[536] - float(fHslider250) - fControl[540];
		fControl[542] = float(fHslider251);
		fControl[543] = float(fHslider252) - fControl[531];
		fControl[544] = float(fHslider253) - fControl[542];
		fControl[545] = fControl[543] - fControl[544];
		fControl[546] = float(fHslider254);
		fControl[547] = fControl[543] - float(fHslider255) - fControl[546];
		fControl[548] = float(fHslider256);
		fControl[549] = fControl[544] - float(fHslider257) - fControl[548];
		fControl[550] = fControl[543] + fControl[535];
		fControl[551] = float(((fControl[9] > 5.0f) ? 64 : 1));
		fControl[552] = float(fHslider258);
		fControl[553] = float(fHslider259);
		fControl[554] = fControl[552] + fControl[553];
		fControl[555] = float(fHslider260);
		fControl[556] = float(fHslider261) - fControl[553];
		fControl[557] = float(fHslider262) - fControl[555];
		fControl[558] = fControl[556] - fControl[557];
		fControl[559] = float(fHslider263);
		fControl[560] = fControl[556] - float(fHslider264) - fControl[559];
		fControl[561] = float(fHslider265);
		fControl[562] = fControl[557] - float(fHslider266) - fControl[561];
		fControl[563] = float(fHslider267);
		fControl[564] = float(fHslider268) - fControl[552];
		fControl[565] = float(fHslider269) - fControl[563];
		fControl[566] = fControl[564] - fControl[565];
		fControl[567] = float(fHslider270);
		fControl[568] = fControl[564] - float(fHslider271) - fControl[567];
		fControl[569] = float(fHslider272);
		fControl[570] = fControl[565] - float(fHslider273) - fControl[569];
		fControl[571] = fControl[564] + fControl[556];
		fControl[572] = float(fHslider274);
		fControl[573] = float(fHslider275);
		fControl[574] = fControl[572] + fControl[573];
		fControl[575] = float(fHslider276);
		fControl[576] = float(fHslider277) - fControl[573];
		fControl[577] = float(fHslider278) - fControl[575];
		fControl[578] = fControl[576] - fControl[577];
		fControl[579] = float(fHslider279);
		fControl[580] = fControl[576] - float(fHslider280) - fControl[579];
		fControl[581] = float(fHslider281);
		fControl[582] = fControl[577] - float(fHslider282) - fControl[581];
		fControl[583] = float(fHslider283);
		fControl[584] = float(fHslider284) - fControl[572];
		fControl[585] = float(fHslider285) - fControl[583];
		fControl[586] = fControl[584] - fControl[585];
		fControl[587] = float(fHslider286);
		fControl[588] = fControl[584] - float(fHslider287) - fControl[587];
		fControl[589] = float(fHslider288);
		fControl[590] = fControl[585] - float(fHslider289) - fControl[589];
		fControl[591] = fControl[584] + fControl[576];
		fControl[592] = float(fHslider290);
		fControl[593] = float(fHslider291);
		fControl[594] = fControl[592] + fControl[593];
		fControl[595] = float(fHslider292);
		fControl[596] = float(fHslider293) - fControl[593];
		fControl[597] = float(fHslider294) - fControl[595];
		fControl[598] = fControl[596] - fControl[597];
		fControl[599] = float(fHslider295);
		fControl[600] = fControl[596] - float(fHslider296) - fControl[599];
		fControl[601] = float(fHslider297);
		fControl[602] = fControl[597] - float(fHslider298) - fControl[601];
		fControl[603] = float(fHslider299);
		fControl[604] = float(fHslider300) - fControl[592];
		fControl[605] = float(fHslider301) - fControl[603];
		fControl[606] = fControl[604] - fControl[605];
		fControl[607] = float(fHslider302);
		fControl[608] = fControl[604] - float(fHslider303) - fControl[607];
		fControl[609] = float(fHslider304);
		fControl[610] = fControl[605] - float(fHslider305) - fControl[609];
		fControl[611] = fControl[604] + fControl[596];
		fControl[612] = float(fHslider306);
		fControl[613] = float(fHslider307);
		fControl[614] = fControl[612] + fControl[613];
		fControl[615] = float(fHslider308);
		fControl[616] = float(fHslider309) - fControl[613];
		fControl[617] = float(fHslider310) - fControl[615];
		fControl[618] = fControl[616] - fControl[617];
		fControl[619] = float(fHslider311);
		fControl[620] = fControl[616] - float(fHslider312) - fControl[619];
		fControl[621] = float(fHslider313);
		fControl[622] = fControl[617] - float(fHslider314) - fControl[621];
		fControl[623] = float(fHslider315);
		fControl[624] = float(fHslider316) - fControl[612];
		fControl[625] = float(fHslider317) - fControl[623];
		fControl[626] = fControl[624] - fControl[625];
		fControl[627] = float(fHslider318);
		fControl[628] = fControl[624] - float(fHslider319) - fControl[627];
		fControl[629] = float(fHslider320);
		fControl[630] = fControl[625] - float(fHslider321) - fControl[629];
		fControl[631] = fControl[624] + fControl[616];
		fControl[632] = float(fHslider322);
		fControl[633] = float(fHslider323);
		fControl[634] = fControl[632] + fControl[633];
		fControl[635] = float(fHslider324);
		fControl[636] = float(fHslider325) - fControl[633];
		fControl[637] = float(fHslider326) - fControl[635];
		fControl[638] = fControl[636] - fControl[637];
		fControl[639] = float(fHslider327);
		fControl[640] = fControl[636] - float(fHslider328) - fControl[639];
		fControl[641] = float(fHslider329);
		fControl[642] = fControl[637] - float(fHslider330) - fControl[641];
		fControl[643] = float(fHslider331);
		fControl[644] = float(fHslider332) - fControl[632];
		fControl[645] = float(fHslider333) - fControl[643];
		fControl[646] = fControl[644] - fControl[645];
		fControl[647] = float(fHslider334);
		fControl[648] = fControl[644] - float(fHslider335) - fControl[647];
		fControl[649] = float(fHslider336);
		fControl[650] = fControl[645] - float(fHslider337) - fControl[649];
		fControl[651] = fControl[644] + fControl[636];
		fControl[652] = float(fHslider338);
		fControl[653] = float(fHslider339);
		fControl[654] = fControl[652] + fControl[653];
		fControl[655] = float(fHslider340);
		fControl[656] = float(fHslider341) - fControl[653];
		fControl[657] = float(fHslider342) - fControl[655];
		fControl[658] = fControl[656] - fControl[657];
		fControl[659] = float(fHslider343);
		fControl[660] = fControl[656] - float(fHslider344) - fControl[659];
		fControl[661] = float(fHslider345);
		fControl[662] = fControl[657] - float(fHslider346) - fControl[661];
		fControl[663] = float(fHslider347);
		fControl[664] = float(fHslider348) - fControl[652];
		fControl[665] = float(fHslider349) - fControl[663];
		fControl[666] = fControl[664] - fControl[665];
		fControl[667] = float(fHslider350);
		fControl[668] = fControl[664] - float(fHslider351) - fControl[667];
		fControl[669] = float(fHslider352);
		fControl[670] = fControl[665] - float(fHslider353) - fControl[669];
		fControl[671] = fControl[664] + fControl[656];
		fControl[672] = float(fHslider354);
		fControl[673] = float(fHslider355);
		fControl[674] = fControl[672] + fControl[673];
		fControl[675] = float(fHslider356);
		fControl[676] = float(fHslider357) - fControl[673];
		fControl[677] = float(fHslider358) - fControl[675];
		fControl[678] = fControl[676] - fControl[677];
		fControl[679] = float(fHslider359);
		fControl[680] = fControl[676] - float(fHslider360) - fControl[679];
		fControl[681] = float(fHslider361);
		fControl[682] = fControl[677] - float(fHslider362) - fControl[681];
		fControl[683] = float(fHslider363);
		fControl[684] = float(fHslider364) - fControl[672];
		fControl[685] = float(fHslider365) - fControl[683];
		fControl[686] = fControl[684] - fControl[685];
		fControl[687] = float(fHslider366);
		fControl[688] = fControl[684] - float(fHslider367) - fControl[687];
		fControl[689] = float(fHslider368);
		fControl[690] = fControl[685] - float(fHslider369) - fControl[689];
		fControl[691] = fControl[684] + fControl[676];
		fControl[692] = float(((fControl[312] > 5.0f) ? 64 : 1));
		fControl[693] = float(fHslider370);
		fControl[694] = float(fHslider371);
		fControl[695] = fControl[693] + fControl[694];
		fControl[696] = float(fHslider372);
		fControl[697] = float(fHslider373) - fControl[694];
		fControl[698] = float(fHslider374) - fControl[696];
		fControl[699] = fControl[697] - fControl[698];
		fControl[700] = float(fHslider375);
		fControl[701] = fControl[697] - float(fHslider376) - fControl[700];
		fControl[702] = float(fHslider377);
		fControl[703] = fControl[698] - float(fHslider378) - fControl[702];
		fControl[704] = float(fHslider379);
		fControl[705] = float(fHslider380) - fControl[693];
		fControl[706] = float(fHslider381) - fControl[704];
		fControl[707] = fControl[705] - fControl[706];
		fControl[708] = float(fHslider382);
		fControl[709] = fControl[705] - float(fHslider383) - fControl[708];
		fControl[710] = float(fHslider384);
		fControl[711] = fControl[706] - float(fHslider385) - fControl[710];
		fControl[712] = fControl[705] + fControl[697];
		fControl[713] = float(fHslider386);
		fControl[714] = float(fHslider387);
		fControl[715] = fControl[713] + fControl[714];
		fControl[716] = float(fHslider388);
		fControl[717] = float(fHslider389) - fControl[714];
		fControl[718] = float(fHslider390) - fControl[716];
		fControl[719] = fControl[717] - fControl[718];
		fControl[720] = float(fHslider391);
		fControl[721] = fControl[717] - float(fHslider392) - fControl[720];
		fControl[722] = float(fHslider393);
		fControl[723] = fControl[718] - float(fHslider394) - fControl[722];
		fControl[724] = float(fHslider395);
		fControl[725] = float(fHslider396) - fControl[713];
		fControl[726] = float(fHslider397) - fControl[724];
		fControl[727] = fControl[725] - fControl[726];
		fControl[728] = float(fHslider398);
		fControl[729] = fControl[725] - float(fHslider399) - fControl[728];
		fControl[730] = float(fHslider400);
		fControl[731] = fControl[726] - float(fHslider401) - fControl[730];
		fControl[732] = fControl[725] + fControl[717];
		fControl[733] = float(fHslider402);
		fControl[734] = float(fHslider403);
		fControl[735] = fControl[733] + fControl[734];
		fControl[736] = float(fHslider404);
		fControl[737] = float(fHslider405) - fControl[734];
		fControl[738] = float(fHslider406) - fControl[736];
		fControl[739] = fControl[737] - fControl[738];
		fControl[740] = float(fHslider407);
		fControl[741] = fControl[737] - float(fHslider408) - fControl[740];
		fControl[742] = float(fHslider409);
		fControl[743] = fControl[738] - float(fHslider410) - fControl[742];
		fControl[744] = float(fHslider411);
		fControl[745] = float(fHslider412) - fControl[733];
		fControl[746] = float(fHslider413) - fControl[744];
		fControl[747] = fControl[745] - fControl[746];
		fControl[748] = float(fHslider414);
		fControl[749] = fControl[745] - float(fHslider415) - fControl[748];
		fControl[750] = float(fHslider416);
		fControl[751] = fControl[746] - float(fHslider417) - fControl[750];
		fControl[752] = fControl[745] + fControl[737];
		fControl[753] = float(fHslider418);
		fControl[754] = float(fHslider419);
		fControl[755] = fControl[753] + fControl[754];
		fControl[756] = float(fHslider420);
		fControl[757] = float(fHslider421) - fControl[754];
		fControl[758] = float(fHslider422) - fControl[756];
		fControl[759] = fControl[757] - fControl[758];
		fControl[760] = float(fHslider423);
		fControl[761] = fControl[757] - float(fHslider424) - fControl[760];
		fControl[762] = float(fHslider425);
		fControl[763] = fControl[758] - float(fHslider426) - fControl[762];
		fControl[764] = float(fHslider427);
		fControl[765] = float(fHslider428) - fControl[753];
		fControl[766] = float(fHslider429) - fControl[764];
		fControl[767] = fControl[765] - fControl[766];
		fControl[768] = float(fHslider430);
		fControl[769] = fControl[765] - float(fHslider431) - fControl[768];
		fControl[770] = float(fHslider432);
		fControl[771] = fControl[766] - float(fHslider433) - fControl[770];
		fControl[772] = fControl[765] + fControl[757];
		fControl[773] = float(fHslider434);
		fControl[774] = float(fHslider435);
		fControl[775] = fControl[773] + fControl[774];
		fControl[776] = float(fHslider436);
		fControl[777] = float(fHslider437) - fControl[774];
		fControl[778] = float(fHslider438) - fControl[776];
		fControl[779] = fControl[777] - fControl[778];
		fControl[780] = float(fHslider439);
		fControl[781] = fControl[777] - float(fHslider440) - fControl[780];
		fControl[782] = float(fHslider441);
		fControl[783] = fControl[778] - float(fHslider442) - fControl[782];
		fControl[784] = float(fHslider443);
		fControl[785] = float(fHslider444) - fControl[773];
		fControl[786] = float(fHslider445) - fControl[784];
		fControl[787] = fControl[785] - fControl[786];
		fControl[788] = float(fHslider446);
		fControl[789] = fControl[785] - float(fHslider447) - fControl[788];
		fControl[790] = float(fHslider448);
		fControl[791] = fControl[786] - float(fHslider449) - fControl[790];
		fControl[792] = fControl[785] + fControl[777];
		fControl[793] = float(fHslider450);
		fControl[794] = float(fHslider451);
		fControl[795] = fControl[793] + fControl[794];
		fControl[796] = float(fHslider452);
		fControl[797] = float(fHslider453) - fControl[794];
		fControl[798] = float(fHslider454) - fControl[796];
		fControl[799] = fControl[797] - fControl[798];
		fControl[800] = float(fHslider455);
		fControl[801] = fControl[797] - float(fHslider456) - fControl[800];
		fControl[802] = float(fHslider457);
		fControl[803] = fControl[798] - float(fHslider458) - fControl[802];
		fControl[804] = float(fHslider459);
		fControl[805] = float(fHslider460) - fControl[793];
		fControl[806] = float(fHslider461) - fControl[804];
		fControl[807] = fControl[805] - fControl[806];
		fControl[808] = float(fHslider462);
		fControl[809] = fControl[805] - float(fHslider463) - fControl[808];
		fControl[810] = float(fHslider464);
		fControl[811] = fControl[806] - float(fHslider465) - fControl[810];
		fControl[812] = fControl[805] + fControl[797];
		fControl[813] = float(fHslider466);
		fControl[814] = float(fHslider467);
		fControl[815] = fControl[813] + fControl[814];
		fControl[816] = float(fHslider468);
		fControl[817] = float(fHslider469) - fControl[814];
		fControl[818] = float(fHslider470) - fControl[816];
		fControl[819] = fControl[817] - fControl[818];
		fControl[820] = float(fHslider471);
		fControl[821] = fControl[817] - float(fHslider472) - fControl[820];
		fControl[822] = float(fHslider473);
		fControl[823] = fControl[818] - float(fHslider474) - fControl[822];
		fControl[824] = float(fHslider475);
		fControl[825] = float(fHslider476);
		fControl[826] = float(fHslider477) - fControl[813];
		fControl[827] = fControl[826] - float(fHslider478) - fControl[825];
		fControl[828] = float(fHslider479);
		fControl[829] = float(fHslider480) - fControl[824];
		fControl[830] = fControl[829] - float(fHslider481) - fControl[828];
		fControl[831] = fControl[826] - fControl[829];
		fControl[832] = fControl[826] + fControl[817];
		fControl[833] = float(((fControl[301] > 5.0f) ? 64 : 1));
		fControl[834] = float(fHslider482);
		fControl[835] = float(fHslider483);
		fControl[836] = fControl[834] + fControl[835];
		fControl[837] = float(fHslider484);
		fControl[838] = float(fHslider485) - fControl[835];
		fControl[839] = float(fHslider486) - fControl[837];
		fControl[840] = fControl[838] - fControl[839];
		fControl[841] = float(fHslider487);
		fControl[842] = fControl[838] - float(fHslider488) - fControl[841];
		fControl[843] = float(fHslider489);
		fControl[844] = fControl[839] - float(fHslider490) - fControl[843];
		fControl[845] = float(fHslider491);
		fControl[846] = float(fHslider492) - fControl[834];
		fControl[847] = float(fHslider493) - fControl[845];
		fControl[848] = fControl[846] - fControl[847];
		fControl[849] = float(fHslider494);
		fControl[850] = fControl[846] - float(fHslider495) - fControl[849];
		fControl[851] = float(fHslider496);
		fControl[852] = fControl[847] - float(fHslider497) - fControl[851];
		fControl[853] = fControl[846] + fControl[838];
		fControl[854] = float(fHslider498);
		fControl[855] = float(fHslider499);
		fControl[856] = fControl[854] + fControl[855];
		fControl[857] = float(fHslider500);
		fControl[858] = float(fHslider501) - fControl[855];
		fControl[859] = float(fHslider502) - fControl[857];
		fControl[860] = fControl[858] - fControl[859];
		fControl[861] = float(fHslider503);
		fControl[862] = fControl[858] - float(fHslider504) - fControl[861];
		fControl[863] = float(fHslider505);
		fControl[864] = fControl[859] - float(fHslider506) - fControl[863];
		fControl[865] = float(fHslider507);
		fControl[866] = float(fHslider508) - fControl[854];
		fControl[867] = float(fHslider509) - fControl[865];
		fControl[868] = fControl[866] - fControl[867];
		fControl[869] = float(fHslider510);
		fControl[870] = fControl[866] - float(fHslider511) - fControl[869];
		fControl[871] = float(fHslider512);
		fControl[872] = fControl[867] - float(fHslider513) - fControl[871];
		fControl[873] = fControl[866] + fControl[858];
		fControl[874] = float(fHslider514);
		fControl[875] = float(fHslider515);
		fControl[876] = fControl[874] + fControl[875];
		fControl[877] = float(fHslider516);
		fControl[878] = float(fHslider517) - fControl[875];
		fControl[879] = float(fHslider518) - fControl[877];
		fControl[880] = fControl[878] - fControl[879];
		fControl[881] = float(fHslider519);
		fControl[882] = fControl[878] - float(fHslider520) - fControl[881];
		fControl[883] = float(fHslider521);
		fControl[884] = fControl[879] - float(fHslider522) - fControl[883];
		fControl[885] = float(fHslider523);
		fControl[886] = float(fHslider524) - fControl[874];
		fControl[887] = float(fHslider525) - fControl[885];
		fControl[888] = fControl[886] - fControl[887];
		fControl[889] = float(fHslider526);
		fControl[890] = fControl[886] - float(fHslider527) - fControl[889];
		fControl[891] = float(fHslider528);
		fControl[892] = fControl[887] - float(fHslider529) - fControl[891];
		fControl[893] = fControl[886] + fControl[878];
		fControl[894] = float(fHslider530);
		fControl[895] = float(fHslider531);
		fControl[896] = fControl[894] + fControl[895];
		fControl[897] = float(fHslider532);
		fControl[898] = float(fHslider533) - fControl[895];
		fControl[899] = float(fHslider534) - fControl[897];
		fControl[900] = fControl[898] - fControl[899];
		fControl[901] = float(fHslider535);
		fControl[902] = fControl[898] - float(fHslider536) - fControl[901];
		fControl[903] = float(fHslider537);
		fControl[904] = fControl[899] - float(fHslider538) - fControl[903];
		fControl[905] = float(fHslider539);
		fControl[906] = float(fHslider540) - fControl[894];
		fControl[907] = float(fHslider541) - fControl[905];
		fControl[908] = fControl[906] - fControl[907];
		fControl[909] = float(fHslider542);
		fControl[910] = fControl[906] - float(fHslider543) - fControl[909];
		fControl[911] = float(fHslider544);
		fControl[912] = fControl[907] - float(fHslider545) - fControl[911];
		fControl[913] = fControl[906] + fControl[898];
		fControl[914] = float(fHslider546);
		fControl[915] = float(fHslider547);
		fControl[916] = fControl[914] + fControl[915];
		fControl[917] = float(fHslider548);
		fControl[918] = float(fHslider549) - fControl[915];
		fControl[919] = float(fHslider550) - fControl[917];
		fControl[920] = fControl[918] - fControl[919];
		fControl[921] = float(fHslider551);
		fControl[922] = fControl[918] - float(fHslider552) - fControl[921];
		fControl[923] = float(fHslider553);
		fControl[924] = fControl[919] - float(fHslider554) - fControl[923];
		fControl[925] = float(fHslider555);
		fControl[926] = float(fHslider556) - fControl[914];
		fControl[927] = float(fHslider557) - fControl[925];
		fControl[928] = fControl[926] - fControl[927];
		fControl[929] = float(fHslider558);
		fControl[930] = fControl[926] - float(fHslider559) - fControl[929];
		fControl[931] = float(fHslider560);
		fControl[932] = fControl[927] - float(fHslider561) - fControl[931];
		fControl[933] = fControl[926] + fControl[918];
		fControl[934] = float(fHslider562);
		fControl[935] = float(fHslider563);
		fControl[936] = fControl[934] + fControl[935];
		fControl[937] = float(fHslider564);
		fControl[938] = float(fHslider565) - fControl[935];
		fControl[939] = float(fHslider566) - fControl[937];
		fControl[940] = fControl[938] - fControl[939];
		fControl[941] = float(fHslider567);
		fControl[942] = fControl[938] - float(fHslider568) - fControl[941];
		fControl[943] = float(fHslider569);
		fControl[944] = fControl[939] - float(fHslider570) - fControl[943];
		fControl[945] = float(fHslider571);
		fControl[946] = float(fHslider572) - fControl[934];
		fControl[947] = float(fHslider573) - fControl[945];
		fControl[948] = fControl[946] - fControl[947];
		fControl[949] = float(fHslider574);
		fControl[950] = fControl[946] - float(fHslider575) - fControl[949];
		fControl[951] = float(fHslider576);
		fControl[952] = fControl[947] - float(fHslider577) - fControl[951];
		fControl[953] = fControl[946] + fControl[938];
		fControl[954] = float(fHslider578);
		fControl[955] = float(fHslider579);
		fControl[956] = fControl[954] + fControl[955];
		fControl[957] = float(fHslider580);
		fControl[958] = float(fHslider581) - fControl[955];
		fControl[959] = float(fHslider582) - fControl[957];
		fControl[960] = fControl[958] - fControl[959];
		fControl[961] = float(fHslider583);
		fControl[962] = fControl[958] - float(fHslider584) - fControl[961];
		fControl[963] = float(fHslider585);
		fControl[964] = fControl[959] - float(fHslider586) - fControl[963];
		fControl[965] = float(fHslider587);
		fControl[966] = float(fHslider588) - fControl[954];
		fControl[967] = float(fHslider589) - fControl[965];
		fControl[968] = fControl[966] - fControl[967];
		fControl[969] = float(fHslider590);
		fControl[970] = fControl[966] - float(fHslider591) - fControl[969];
		fControl[971] = float(fHslider592);
		fControl[972] = fControl[967] - float(fHslider593) - fControl[971];
		fControl[973] = fControl[966] + fControl[958];
		fControl[974] = float(((fControl[290] > 5.0f) ? 64 : 1));
		fControl[975] = float(fHslider594);
		fControl[976] = float(fHslider595);
		fControl[977] = fControl[975] + fControl[976];
		fControl[978] = float(fHslider596);
		fControl[979] = float(fHslider597) - fControl[976];
		fControl[980] = float(fHslider598) - fControl[978];
		fControl[981] = fControl[979] - fControl[980];
		fControl[982] = float(fHslider599);
		fControl[983] = fControl[979] - float(fHslider600) - fControl[982];
		fControl[984] = float(fHslider601);
		fControl[985] = fControl[980] - float(fHslider602) - fControl[984];
		fControl[986] = float(fHslider603);
		fControl[987] = float(fHslider604) - fControl[975];
		fControl[988] = float(fHslider605) - fControl[986];
		fControl[989] = fControl[987] - fControl[988];
		fControl[990] = float(fHslider606);
		fControl[991] = fControl[987] - float(fHslider607) - fControl[990];
		fControl[992] = float(fHslider608);
		fControl[993] = fControl[988] - float(fHslider609) - fControl[992];
		fControl[994] = fControl[987] + fControl[979];
		fControl[995] = float(fHslider610);
		fControl[996] = float(fHslider611);
		fControl[997] = fControl[995] + fControl[996];
		fControl[998] = float(fHslider612);
		fControl[999] = float(fHslider613) - fControl[996];
		fControl[1000] = float(fHslider614) - fControl[998];
		fControl[1001] = fControl[999] - fControl[1000];
		fControl[1002] = float(fHslider615);
		fControl[1003] = fControl[999] - float(fHslider616) - fControl[1002];
		fControl[1004] = float(fHslider617);
		fControl[1005] = fControl[1000] - float(fHslider618) - fControl[1004];
		fControl[1006] = float(fHslider619);
		fControl[1007] = float(fHslider620) - fControl[995];
		fControl[1008] = float(fHslider621) - fControl[1006];
		fControl[1009] = fControl[1007] - fControl[1008];
		fControl[1010] = float(fHslider622);
		fControl[1011] = fControl[1007] - float(fHslider623) - fControl[1010];
		fControl[1012] = float(fHslider624);
		fControl[1013] = fControl[1008] - float(fHslider625) - fControl[1012];
		fControl[1014] = fControl[1007] + fControl[999];
		fControl[1015] = float(fHslider626);
		fControl[1016] = float(fHslider627);
		fControl[1017] = fControl[1015] + fControl[1016];
		fControl[1018] = float(fHslider628);
		fControl[1019] = float(fHslider629) - fControl[1016];
		fControl[1020] = float(fHslider630) - fControl[1018];
		fControl[1021] = fControl[1019] - fControl[1020];
		fControl[1022] = float(fHslider631);
		fControl[1023] = fControl[1019] - float(fHslider632) - fControl[1022];
		fControl[1024] = float(fHslider633);
		fControl[1025] = fControl[1020] - float(fHslider634) - fControl[1024];
		fControl[1026] = float(fHslider635);
		fControl[1027] = float(fHslider636) - fControl[1015];
		fControl[1028] = float(fHslider637) - fControl[1026];
		fControl[1029] = fControl[1027] - fControl[1028];
		fControl[1030] = float(fHslider638);
		fControl[1031] = fControl[1027] - float(fHslider639) - fControl[1030];
		fControl[1032] = float(fHslider640);
		fControl[1033] = fControl[1028] - float(fHslider641) - fControl[1032];
		fControl[1034] = fControl[1027] + fControl[1019];
		fControl[1035] = fControl[386] - fControl[397];
		fControl[1036] = fControl[409] - fControl[417];
		fControl[1037] = fControl[429] - fControl[437];
		fControl[1038] = fControl[449] - fControl[457];
		fControl[1039] = fControl[475] - fControl[483];
		fControl[1040] = fControl[495] - fControl[503];
		fControl[1041] = fControl[515] - fControl[523];
		fControl[1042] = fControl[535] - fControl[543];
		fControl[1043] = fControl[556] - fControl[564];
		fControl[1044] = fControl[576] - fControl[584];
		fControl[1045] = fControl[596] - fControl[604];
		fControl[1046] = fControl[616] - fControl[624];
		fControl[1047] = fControl[636] - fControl[644];
		fControl[1048] = fControl[656] - fControl[664];
		fControl[1049] = fControl[676] - fControl[684];
		fControl[1050] = fControl[697] - fControl[705];
		fControl[1051] = fControl[717] - fControl[725];
		fControl[1052] = fControl[737] - fControl[745];
		fControl[1053] = fControl[757] - fControl[765];
		fControl[1054] = fControl[777] - fControl[785];
		fControl[1055] = fControl[797] - fControl[805];
		fControl[1056] = fControl[817] - fControl[826];
		fControl[1057] = fControl[838] - fControl[846];
		fControl[1058] = fControl[858] - fControl[866];
		fControl[1059] = fControl[878] - fControl[886];
		fControl[1060] = fControl[898] - fControl[906];
		fControl[1061] = fControl[918] - fControl[926];
		fControl[1062] = fControl[938] - fControl[946];
		fControl[1063] = fControl[958] - fControl[966];
		fControl[1064] = fControl[979] - fControl[987];
		fControl[1065] = fControl[999] - fControl[1007];
		fControl[1066] = fControl[1019] - fControl[1027];
	}

	int getNumIntControls() { return 82; }
	int getNumRealControls() { return 1067; }

	void compute(float* RESTRICT inputs, float* RESTRICT outputs, int* RESTRICT iControl, float* RESTRICT fControl) {
		float fRec22 = 0.0f;
		float fRec30 = 0.0f;
		float fRec31 = 0.0f;
		float fRec43 = 0.0f;
		float fRec47 = 0.0f;
		float fRec48 = 0.0f;
		float fRec62 = 0.0f;
		float fRec66 = 0.0f;
		float fRec67 = 0.0f;
		float fRec79 = 0.0f;
		float fRec83 = 0.0f;
		float fRec84 = 0.0f;
		float fRec98 = 0.0f;
		float fRec102 = 0.0f;
		float fRec103 = 0.0f;
		float fRec115 = 0.0f;
		float fRec119 = 0.0f;
		float fRec120 = 0.0f;
		float fRec134 = 0.0f;
		float fRec138 = 0.0f;
		float fRec139 = 0.0f;
		float fRec151 = 0.0f;
		float fRec155 = 0.0f;
		float fRec156 = 0.0f;
		float fRec174 = 0.0f;
		float fRec178 = 0.0f;
		float fRec179 = 0.0f;
		float fRec191 = 0.0f;
		float fRec195 = 0.0f;
		float fRec196 = 0.0f;
		float fRec210 = 0.0f;
		float fRec214 = 0.0f;
		float fRec215 = 0.0f;
		float fRec227 = 0.0f;
		float fRec231 = 0.0f;
		float fRec232 = 0.0f;
		float fRec246 = 0.0f;
		float fRec250 = 0.0f;
		float fRec251 = 0.0f;
		float fRec263 = 0.0f;
		float fRec267 = 0.0f;
		float fRec268 = 0.0f;
		float fRec282 = 0.0f;
		float fRec286 = 0.0f;
		float fRec287 = 0.0f;
		float fRec299 = 0.0f;
		float fRec303 = 0.0f;
		float fRec304 = 0.0f;
		fVec0[0] = fControl[3];
		iVec1[0] = iControl[0];
		iVec2[0] = 1;
		iRec1[0] = iControl[0] * (iRec1[1] + 1);
		int iTemp0 = iControl[0] - iVec1[1];
		int iTemp1 = iTemp0 * (iTemp0 > 0);
		int iTemp2 = (iRec1[0] < iControl[2]) | iTemp1;
		float fElse1 = ((iTemp2) ? fControl[5] : fControl[6]);
		float fTemp3 = 0.144717798f * ((iControl[1]) ? fElse1 : fControl[4]);
		int iTemp4 = std::fabs(fTemp3) < 1.1920929e-07f;
		float fThen3 = std::exp(0.0f - fConst1 / ((iTemp4) ? 1.0f : fTemp3));
		float fTemp5 = ((iTemp4) ? 0.0f : fThen3);
		float fElse5 = ((iTemp2) ? fControl[7] : fControl[8]);
		fRec0[0] = fControl[2] * (1.0f - fTemp5) * ((iControl[1]) ? fElse5 : 0.0f) + fTemp5 * fRec0[1];
		fHbargraph0 = FAUSTFLOAT(fRec0[0]);
		float fTemp6 = fHbargraph0;
		int iTemp7 = (iRec1[0] < iControl[5]) | iTemp1;
		float fElse8 = ((iTemp7) ? fControl[64] : fControl[65]);
		float fTemp8 = 0.144717798f * ((iControl[1]) ? fElse8 : fControl[63]);
		int iTemp9 = std::fabs(fTemp8) < 1.1920929e-07f;
		float fThen10 = std::exp(0.0f - fConst1 / ((iTemp9) ? 1.0f : fTemp8));
		float fTemp10 = ((iTemp9) ? 0.0f : fThen10);
		float fElse12 = ((iTemp7) ? fControl[7] : fControl[66]);
		fRec6[0] = fControl[62] * (1.0f - fTemp10) * ((iControl[1]) ? fElse12 : 0.0f) + fTemp10 * fRec6[1];
		fHbargraph1 = FAUSTFLOAT(fRec6[0]);
		float fTemp11 = fHbargraph1;
		float fTemp12 = 1.0f - fTemp11;
		int iTemp13 = (iRec1[0] < iControl[7]) | iTemp1;
		float fElse16 = ((iTemp13) ? fControl[71] : fControl[72]);
		float fTemp14 = 0.144717798f * ((iControl[1]) ? fElse16 : fControl[70]);
		int iTemp15 = std::fabs(fTemp14) < 1.1920929e-07f;
		float fThen18 = std::exp(0.0f - fConst1 / ((iTemp15) ? 1.0f : fTemp14));
		float fTemp16 = ((iTemp15) ? 0.0f : fThen18);
		float fElse20 = ((iTemp13) ? fControl[7] : fControl[73]);
		fRec7[0] = fControl[69] * (1.0f - fTemp16) * ((iControl[1]) ? fElse20 : 0.0f) + fTemp16 * fRec7[1];
		fHbargraph2 = FAUSTFLOAT(fRec7[0]);
		float fTemp17 = fHbargraph2;
		float fTemp18 = 1.0f - fTemp17;
		int iTemp19 = (iRec1[0] < iControl[9]) | iTemp1;
		float fElse24 = ((iTemp19) ? fControl[78] : fControl[79]);
		float fTemp20 = 0.144717798f * ((iControl[1]) ? fElse24 : fControl[77]);
		int iTemp21 = std::fabs(fTemp20) < 1.1920929e-07f;
		float fThen26 = std::exp(0.0f - fConst1 / ((iTemp21) ? 1.0f : fTemp20));
		float fTemp22 = ((iTemp21) ? 0.0f : fThen26);
		float fElse28 = ((iTemp19) ? fControl[7] : fControl[80]);
		fRec8[0] = fControl[76] * (1.0f - fTemp22) * ((iControl[1]) ? fElse28 : 0.0f) + fTemp22 * fRec8[1];
		fHbargraph3 = FAUSTFLOAT(fRec8[0]);
		float fTemp23 = fHbargraph3;
		float fTemp24 = 1.0f - fTemp23;
		int iTemp25 = (iRec1[0] < iControl[11]) | iTemp1;
		float fElse32 = ((iTemp25) ? fControl[85] : fControl[86]);
		float fTemp26 = 0.144717798f * ((iControl[1]) ? fElse32 : fControl[84]);
		int iTemp27 = std::fabs(fTemp26) < 1.1920929e-07f;
		float fThen34 = std::exp(0.0f - fConst1 / ((iTemp27) ? 1.0f : fTemp26));
		float fTemp28 = ((iTemp27) ? 0.0f : fThen34);
		float fElse36 = ((iTemp25) ? fControl[7] : fControl[87]);
		fRec9[0] = fControl[83] * (1.0f - fTemp28) * ((iControl[1]) ? fElse36 : 0.0f) + fTemp28 * fRec9[1];
		fHbargraph4 = FAUSTFLOAT(fRec9[0]);
		float fTemp29 = fHbargraph4;
		float fTemp30 = 1.0f - fTemp29;
		fRec11[0] = fControl[90] + fRec11[1] - std::floor(fControl[90] + fRec11[1]);
		fHbargraph5 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec11[0])]);
		float fTemp31 = 0.5f * (fHbargraph5 + 1.0f);
		float fTemp32 = 1.0f - fTemp31;
		fRec12[0] = fControl[93] + fRec12[1] - std::floor(fControl[93] + fRec12[1]);
		fHbargraph6 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec12[0])]);
		float fTemp33 = 0.5f * (fHbargraph6 + 1.0f);
		float fTemp34 = 1.0f - fTemp33;
		fRec13[0] = fControl[96] + fRec13[1] - std::floor(fControl[96] + fRec13[1]);
		fHbargraph7 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec13[0])]);
		float fTemp35 = 0.5f * (fHbargraph7 + 1.0f);
		float fTemp36 = 1.0f - fTemp35;
		fRec14[0] = fControl[99] + fRec14[1] - std::floor(fControl[99] + fRec14[1]);
		fHbargraph8 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec14[0])]);
		float fTemp37 = 0.5f * (fHbargraph8 + 1.0f);
		float fTemp38 = 1.0f - fTemp37;
		float fTemp39 = fControl[3] - fVec0[1];
		int iTemp40 = int(fTemp39 * float(fTemp39 > 0.0f));
		iRec16[0] = 1103515245 * iRec16[1] + 12345;
		float fTemp41 = float(iRec16[0]);
		float fElse57 = 4.65661287e-10f * fTemp41;
		fRec15[0] = ((iTemp40) ? fElse57 : fRec15[1]);
		float fTemp42 = 1.0f - fRec15[0];
		float fTemp43 = ((fControl[121] > fRec17[1]) ? fControl[125] : fControl[123]);
		fRec17[0] = fControl[121] * (1.0f - fTemp43) + fRec17[1] * fTemp43;
		fHbargraph9 = FAUSTFLOAT(fControl[59] * (fControl[61] * ((iControl[4]) ? fTemp12 : fTemp11) + fControl[68] * ((iControl[6]) ? fTemp18 : fTemp17) + fControl[75] * ((iControl[8]) ? fTemp24 : fTemp23) + fControl[82] * ((iControl[10]) ? fTemp30 : fTemp29) + fControl[89] * ((iControl[12]) ? fTemp32 : fTemp31) + fControl[92] * ((iControl[13]) ? fTemp34 : fTemp33) + fControl[95] * ((iControl[14]) ? fTemp36 : fTemp35) + fControl[98] * ((iControl[15]) ? fTemp38 : fTemp37) + fControl[103] + fControl[105] + fControl[108] + fControl[112] + fControl[117] + fControl[119] * ((iControl[16]) ? fTemp42 : fRec15[0])) + fControl[120] * fRec17[0]);
		float fTemp44 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph9));
		float fTemp45 = ((fControl[204] > fRec18[1]) ? fControl[208] : fControl[206]);
		fRec18[0] = fControl[204] * (1.0f - fTemp45) + fRec18[1] * fTemp45;
		fHbargraph10 = FAUSTFLOAT(fControl[174] * (fControl[176] * ((iControl[19]) ? fTemp12 : fTemp11) + fControl[178] * ((iControl[20]) ? fTemp18 : fTemp17) + fControl[180] * ((iControl[21]) ? fTemp24 : fTemp23) + fControl[182] * ((iControl[22]) ? fTemp30 : fTemp29) + fControl[184] * ((iControl[23]) ? fTemp32 : fTemp31) + fControl[186] * ((iControl[24]) ? fTemp34 : fTemp33) + fControl[188] * ((iControl[25]) ? fTemp36 : fTemp35) + fControl[190] * ((iControl[26]) ? fTemp38 : fTemp37) + fControl[192] + fControl[194] + fControl[196] + fControl[198] + fControl[200] + fControl[202] * ((iControl[27]) ? fTemp42 : fRec15[0])) + fControl[203] * fRec18[0]);
		float fTemp46 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph10));
		float fTemp47 = ((fControl[283] > fRec19[1]) ? fControl[287] : fControl[285]);
		fRec19[0] = fControl[283] * (1.0f - fTemp47) + fRec19[1] * fTemp47;
		fHbargraph11 = FAUSTFLOAT(fControl[253] * (fControl[255] * ((iControl[30]) ? fTemp12 : fTemp11) + fControl[257] * ((iControl[31]) ? fTemp18 : fTemp17) + fControl[259] * ((iControl[32]) ? fTemp24 : fTemp23) + fControl[261] * ((iControl[33]) ? fTemp30 : fTemp29) + fControl[263] * ((iControl[34]) ? fTemp32 : fTemp31) + fControl[265] * ((iControl[35]) ? fTemp34 : fTemp33) + fControl[267] * ((iControl[36]) ? fTemp36 : fTemp35) + fControl[269] * ((iControl[37]) ? fTemp38 : fTemp37) + fControl[271] + fControl[273] + fControl[275] + fControl[277] + fControl[279] + fControl[281] * ((iControl[38]) ? fTemp42 : fRec15[0])) + fControl[282] * fRec19[0]);
		float fTemp48 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph11));
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm0 = fControl[288] - (fControl[13] + fControl[289] * fTemp46);
			fTempPerm1 = fControl[126] - (fControl[13] + fControl[129] * fTemp46 + fTemp48 * (fTempPerm0 - fControl[331] - (fControl[126] + fControl[332] * fTemp46)));
			fTempPerm2 = fControl[337] - (fControl[12] + fControl[338] * fTemp46);
			fTempPerm3 = fControl[333] - (fControl[12] + fControl[336] * fTemp46 + fTemp48 * (fTempPerm2 - fControl[339] - (fControl[333] + fControl[340] * fTemp46)));
			fTempPerm4 = fControl[14] + fTemp44 * (fTempPerm1 + fTempPerm3) + fControl[341] * fTemp46 + fTemp48 * (fTempPerm0 + fTempPerm2);
			fTempPerm5 = std::fabs(fTempPerm4);
			fTempPerm6 = fControl[349] - (fControl[343] + fControl[350] * fTemp46);
			fTempPerm7 = fControl[345] - (fControl[343] + fControl[348] * fTemp46 + fTemp48 * (fTempPerm6 - fControl[351] - (fControl[345] + fControl[352] * fTemp46)));
			fTempPerm8 = fControl[357] - (fControl[342] + fControl[358] * fTemp46);
			fTempPerm9 = fControl[353] - (fControl[342] + fControl[356] * fTemp46 + fTemp48 * (fTempPerm8 - fControl[359] - (fControl[353] + fControl[360] * fTemp46)));
			fTempPerm10 = fControl[344] + fTemp44 * (fTempPerm7 + fTempPerm9) + fControl[361] * fTemp46 + fTemp48 * (fTempPerm6 + fTempPerm8);
			fTempPerm11 = std::fabs(fTempPerm10);
			fTempPerm12 = fControl[369] - (fControl[363] + fControl[370] * fTemp46);
			fTempPerm13 = fControl[365] - (fControl[363] + fControl[368] * fTemp46 + fTemp48 * (fTempPerm12 - fControl[371] - (fControl[365] + fControl[372] * fTemp46)));
			fTempPerm14 = fControl[377] - (fControl[362] + fControl[378] * fTemp46);
			fTempPerm15 = fControl[373] - (fControl[362] + fControl[376] * fTemp46 + fTemp48 * (fTempPerm14 - fControl[379] - (fControl[373] + fControl[380] * fTemp46)));
			fTempPerm16 = fControl[364] + fTemp44 * (fTempPerm13 + fTempPerm15) + fControl[381] * fTemp46 + fTemp48 * (fTempPerm12 + fTempPerm14);
			fTempPerm17 = std::fabs(fTempPerm16);
			fTempPerm18 = fTempPerm5 + fTempPerm11 + fTempPerm17;
			fTempPerm19 = std::min<float>(1.0f, fTempPerm18);
			fTempPerm20 = std::max<float>(2.82118644e-37f, fTempPerm5);
		}
		float fElse130 = 0.0f - fTempPerm20;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm21 = ((fTempPerm4 < 0.0f) ? fElse130 : fTempPerm20);
			iTempPerm22 = float(fTempPerm4 != 0.0f) != 0.0f;
			fTempPerm23 = fControl[363] + (fTemp44 * (fTempPerm13 - fTempPerm15) + fControl[391] * fTemp46 + fTemp48 * (fTempPerm12 - fTempPerm14)) - fControl[362];
			iTempPerm24 = float(fTempPerm23 != 0.0f) != 0.0f;
			fTempPerm25 = fControl[343] + (fTemp44 * (fTempPerm7 - fTempPerm9) + fControl[392] * fTemp46 + fTemp48 * (fTempPerm6 - fTempPerm8)) - fControl[342];
			iTempPerm26 = float(fTempPerm25 != 0.0f) != 0.0f;
			fTempPerm27 = fControl[13] + (fTemp44 * (fTempPerm1 - fTempPerm3) + fControl[393] * fTemp46 + fTemp48 * (fTempPerm0 - fTempPerm2)) - fControl[12];
			iTempPerm28 = float(fTempPerm27 != 0.0f) != 0.0f;
			iTempPerm29 = float(fTempPerm16 != 0.0f) != 0.0f;
			iTempPerm30 = float(fTempPerm10 != 0.0f) != 0.0f;
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | ((iControl[41] & iTempPerm29) | ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm31 = fControl[389] - (fControl[383] + fControl[390] * fTemp46);
			fTempPerm32 = fControl[385] - (fControl[383] + fControl[388] * fTemp46 + fTemp48 * (fTempPerm31 - fControl[394] - (fControl[385] + fControl[395] * fTemp46)));
			fTempPerm33 = fControl[400] - (fControl[382] + fControl[401] * fTemp46);
			fTempPerm34 = fControl[396] - (fControl[382] + fControl[399] * fTemp46 + fTemp48 * (fTempPerm33 - fControl[402] - (fControl[396] + fControl[403] * fTemp46)));
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | (iControl[41] & iTempPerm29))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm35 = std::tan(fConst2 * std::min<float>(fConst4, std::max<float>(0.0f, 440.0f * std::pow(2.0f, 0.0833333358f * (127.0f * std::min<float>(1.0f, std::max<float>(0.0f, fControl[384] + fTemp44 * (fTempPerm32 + fTempPerm34) + fControl[404] * fTemp46 + fTemp48 * (fTempPerm31 + fTempPerm33))) + -49.0f)))));
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm36 = fControl[412] - (fControl[406] + fControl[413] * fTemp46);
			fTempPerm37 = fControl[408] - (fControl[406] + fControl[411] * fTemp46 + fTemp48 * (fTempPerm36 - fControl[414] - (fControl[408] + fControl[415] * fTemp46)));
			fTempPerm38 = fControl[420] - (fControl[405] + fControl[421] * fTemp46);
			fTempPerm39 = fControl[416] - (fControl[405] + fControl[419] * fTemp46 + fTemp48 * (fTempPerm38 - fControl[422] - (fControl[416] + fControl[423] * fTemp46)));
			fTempPerm40 = fRec5[1] * (fControl[407] + fTemp44 * (fTempPerm37 + fTempPerm39) + fControl[424] * fTemp46 + fTemp48 * (fTempPerm36 + fTempPerm38));
			fTempPerm41 = fControl[432] - (fControl[426] + fControl[433] * fTemp46);
			fTempPerm42 = fControl[428] - (fControl[426] + fControl[431] * fTemp46 + fTemp48 * (fTempPerm41 - fControl[434] - (fControl[428] + fControl[435] * fTemp46)));
			fTempPerm43 = fControl[440] - (fControl[425] + fControl[441] * fTemp46);
			fTempPerm44 = fControl[436] - (fControl[425] + fControl[439] * fTemp46 + fTemp48 * (fTempPerm43 - fControl[442] - (fControl[436] + fControl[443] * fTemp46)));
			fTempPerm45 = fRec4[1] * (fControl[427] + fTemp44 * (fTempPerm42 + fTempPerm44) + fControl[444] * fTemp46 + fTemp48 * (fTempPerm41 + fTempPerm43));
			fTempPerm46 = fControl[452] - (fControl[446] + fControl[453] * fTemp46);
			fTempPerm47 = fControl[448] - (fControl[446] + fControl[451] * fTemp46 + fTemp48 * (fTempPerm46 - fControl[454] - (fControl[448] + fControl[455] * fTemp46)));
			fTempPerm48 = fControl[460] - (fControl[445] + fControl[461] * fTemp46);
			fTempPerm49 = fControl[456] - (fControl[445] + fControl[459] * fTemp46 + fTemp48 * (fTempPerm48 - fControl[462] - (fControl[456] + fControl[463] * fTemp46)));
			fTempPerm50 = fRec3[1] * (fControl[447] + fTemp44 * (fTempPerm47 + fTempPerm49) + fControl[464] * fTemp46 + fTemp48 * (fTempPerm46 + fTempPerm48));
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fRec24[0] = fControl[468] + fControl[467] * fRec24[1];
			fTempPerm51 = fControl[467] * float(int(fVec0[1]) & iControl[80]);
			fRec25[0] = fControl[465] * (1.0f - fTempPerm51) + fTempPerm51 * fRec25[1];
		}
		float fThen134 = ((iControl[78]) ? fRec25[0] : fRec24[0]);
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm52 = fRec23[1] + fConst5 * ((iControl[77]) ? fControl[465] : fThen134) * fControl[469];
			iVec4[0] = fTemp6 < 0.100000001f;
			fRec23[0] = (fTempPerm52 - std::floor(fTempPerm52)) * float(float((iVec4[1] & iTemp40) & iControl[81]) == 0.0f);
			fTempPerm53 = float(1 - iVec2[1] < 1);
			fRec26[0] = fControl[470] * (1.0f - 0.999000013f * fTempPerm53) + 0.999000013f * fTempPerm53 * fRec26[1];
			fTempPerm54 = fRec23[0] + fRec26[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm55 = fControl[478] - (fControl[472] + fControl[479] * fTemp46);
			fTempPerm56 = fControl[474] - (fControl[472] + fControl[477] * fTemp46 + fTemp48 * (fTempPerm55 - fControl[480] - (fControl[474] + fControl[481] * fTemp46)));
			fTempPerm57 = fControl[486] - (fControl[471] + fControl[487] * fTemp46);
			fTempPerm58 = fControl[482] - (fControl[471] + fControl[485] * fTemp46 + fTemp48 * (fTempPerm57 - fControl[488] - (fControl[482] + fControl[489] * fTemp46)));
			fTempPerm59 = fControl[473] + fTemp44 * (fTempPerm56 + fTempPerm58) + fControl[490] * fTemp46 + fTemp48 * (fTempPerm55 + fTempPerm57);
			fTempPerm60 = fControl[498] - (fControl[492] + fControl[499] * fTemp46);
			fTempPerm61 = fControl[494] - (fControl[492] + fControl[497] * fTemp46 + fTemp48 * (fTempPerm60 - fControl[500] - (fControl[494] + fControl[501] * fTemp46)));
			fTempPerm62 = fControl[506] - (fControl[491] + fControl[507] * fTemp46);
			fTempPerm63 = fControl[502] - (fControl[491] + fControl[505] * fTemp46 + fTemp48 * (fTempPerm62 - fControl[508] - (fControl[502] + fControl[509] * fTemp46)));
			fTempPerm64 = fControl[493] + fTemp44 * (fTempPerm61 + fTempPerm63) + fControl[510] * fTemp46 + fTemp48 * (fTempPerm60 + fTempPerm62);
			fTempPerm65 = std::floor(fTempPerm64);
			fTempPerm66 = fTempPerm65 + float((fTempPerm64 < 0.0f) & (fTempPerm64 != fTempPerm65));
			fTempPerm67 = fTempPerm54 + 0.00390625f * fTempPerm59 * std::pow(2.0f, 0.0f - fTempPerm66);
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm68 = std::floor(fTempPerm54);
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			iTempPerm69 = int(fTempPerm66);
			fTempPerm70 = fControl[518] - (fControl[512] + fControl[519] * fTemp46);
			fTempPerm71 = fControl[514] - (fControl[512] + fControl[517] * fTemp46 + fTemp48 * (fTempPerm70 - fControl[520] - (fControl[514] + fControl[521] * fTemp46)));
			fTempPerm72 = fControl[526] - (fControl[511] + fControl[527] * fTemp46);
			fTempPerm73 = fControl[522] - (fControl[511] + fControl[525] * fTemp46 + fTemp48 * (fTempPerm72 - fControl[528] - (fControl[522] + fControl[529] * fTemp46)));
			fTempPerm74 = fRec2[1] * (fControl[513] + fTemp44 * (fTempPerm71 + fTempPerm73) + fControl[530] * fTemp46 + fTemp48 * (fTempPerm70 + fTempPerm72));
			fTempPerm75 = fTempPerm40 + fTempPerm45 + fTempPerm50 + std::fmod(256.0f * (fTempPerm67 - (fTempPerm68 + std::floor(fTempPerm67 - fTempPerm68))) * (float(iTempPerm69 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm69))))) + float(iTempPerm69 == 0) + float((iTempPerm69 > 0) * int(std::pow(2.0f, float(iTempPerm69))))), 1.0f) + fTempPerm74;
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22)))))))))) {
			fTempPerm76 = fRec20[1] + fTempPerm35 * (fTempPerm75 - fRec21[1]);
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | ((iControl[41] & iTempPerm29) | ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm77 = fControl[538] - (fControl[532] + fControl[539] * fTemp46);
			fTempPerm78 = fControl[534] - (fControl[532] + fControl[537] * fTemp46 + fTemp48 * (fTempPerm77 - fControl[540] - (fControl[534] + fControl[541] * fTemp46)));
			fTempPerm79 = fControl[546] - (fControl[531] + fControl[547] * fTemp46);
			fTempPerm80 = fControl[542] - (fControl[531] + fControl[545] * fTemp46 + fTemp48 * (fTempPerm79 - fControl[548] - (fControl[542] + fControl[549] * fTemp46)));
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | (iControl[41] & iTempPerm29))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm81 = std::min<float>(10.0f, std::max<float>(0.00999999978f, fControl[533] + fTemp44 * (fTempPerm78 + fTempPerm80) + fControl[550] * fTemp46 + fTemp48 * (fTempPerm77 + fTempPerm79)));
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | (iControl[41] & iTempPerm29))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm82 = fTempPerm35 + 1.0f / fTempPerm81;
			fTempPerm83 = fTempPerm35 * fTempPerm82 + 1.0f;
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22)))))))))) {
			fTempPerm84 = fTempPerm76 / fTempPerm83;
			fRec20[0] = 2.0f * fTempPerm84 - fRec20[1];
			fTempPerm85 = fRec21[1] + (fTempPerm35 * fTempPerm76) / fTempPerm83;
			fRec21[0] = 2.0f * fTempPerm85 - fRec21[1];
			fRec22 = fTempPerm85;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm86 = std::max<float>(2.82118644e-37f, fTempPerm11);
		}
		float fElse136 = 0.0f - fTempPerm86;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm87 = ((fTempPerm10 < 0.0f) ? fElse136 : fTempPerm86);
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30)))))))))) {
			fTempPerm88 = fTempPerm35 * (fTempPerm75 - fRec29[1]);
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | ((iControl[68] & iTempPerm30) | ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | ((iControl[59] & iTempPerm30) | ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | ((iControl[50] & iTempPerm30) | ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))))))))))))))))))))))))))))))) {
			fTempPerm89 = fTempPerm81 + -0.707000017f;
			fTempPerm90 = fTempPerm35 + 1.0f;
			fTempPerm91 = 1.0f - fTempPerm35 / fTempPerm90;
			fTempPerm92 = 0.0f - 1.0f / fTempPerm90;
			fTempPerm93 = 1.0f - 0.215215757f * (fTempPerm35 * fTempPerm89 * fTempPerm91) / fTempPerm90;
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30)))))))))) {
			fTempPerm94 = (fTempPerm35 * ((fRec29[1] + (fTempPerm88 + 0.215215757f * fRec27[1] * fTempPerm89 * fTempPerm91) / fTempPerm90 + fRec28[1] * fTempPerm92) / fTempPerm93 - fRec27[1])) / fTempPerm90;
			fRec27[0] = fRec27[1] + 2.0f * fTempPerm94;
			fTempPerm95 = fRec27[1] + fTempPerm94;
			fRec28[0] = fRec28[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm95 - fRec28[1])) / fTempPerm90;
			fRec29[0] = fRec29[1] + 2.0f * fTempPerm88 / fTempPerm90;
			fRec30 = fTempPerm95;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm96 = std::max<float>(2.82118644e-37f, fTempPerm17);
		}
		float fElse137 = 0.0f - fTempPerm96;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm97 = ((fTempPerm16 < 0.0f) ? fElse137 : fTempPerm96);
		}
		if (((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29)))))))))) {
			fTempPerm98 = fTempPerm75 - (fRec32[1] + fTempPerm82 * fRec33[1]);
			fTempPerm99 = (fTempPerm35 * fTempPerm98) / fTempPerm83;
			fTempPerm100 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec33[1] + fTempPerm99));
			fTempPerm101 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm100);
			fTempPerm102 = fTempPerm35 * fTempPerm100 * fTempPerm101;
			fRec31 = fRec32[1] + fTempPerm102;
			fRec32[0] = fRec32[1] + 2.0f * fTempPerm102;
			fTempPerm103 = fTempPerm100 * fTempPerm101;
			fRec33[0] = fTempPerm99 + fTempPerm103;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm104 = std::max<float>(8.46355933e-37f, fTempPerm18);
			fTempPerm105 = 1.0f - fTempPerm19;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm106 = (fTempPerm19 * (fTempPerm21 * fRec22 + fTempPerm87 * fRec30 + fTempPerm97 * fRec31)) / fTempPerm104 + fTempPerm75 * fTempPerm105;
			fVec5[0] = fTempPerm106;
			fTempPerm107 = fControl[559] - (fControl[553] + fControl[560] * fTemp46);
			fTempPerm108 = fControl[555] - (fControl[553] + fControl[558] * fTemp46 + fTemp48 * (fTempPerm107 - fControl[561] - (fControl[555] + fControl[562] * fTemp46)));
			fTempPerm109 = fControl[567] - (fControl[552] + fControl[568] * fTemp46);
			fTempPerm110 = fControl[563] - (fControl[552] + fControl[566] * fTemp46 + fTemp48 * (fTempPerm109 - fControl[569] - (fControl[563] + fControl[570] * fTemp46)));
			fTempPerm111 = fControl[554] + fTemp44 * (fTempPerm108 + fTempPerm110) + fControl[571] * fTemp46 + fTemp48 * (fTempPerm107 + fTempPerm109);
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71])))))) {
			fTempPerm112 = fControl[551] * fTempPerm111;
		}
		if ((iControl[3])) {
			fTempPerm113 = 2.0f * fTempPerm112;
			fTempPerm114 = std::min<float>(1.0f, fTempPerm113);
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fTempPerm115 = fTempPerm106 - fVec5[1];
		}
		float fElse139 = fConst0 * fTempPerm115;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec35[0] = ((std::fabs(fTempPerm115) < 0.5f) ? fElse139 : fRec35[1]);
		}
		if ((iControl[3])) {
			fTempPerm116 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec35[0])))));
			fTempPerm117 = 1.0f - fTempPerm116;
		}
		if ((iControl[3] | iControl[69])) {
			fTempPerm118 = std::floor(fTempPerm106);
			fTempPerm119 = fTempPerm106 - fTempPerm118;
			fVec6[0] = fTempPerm119;
			iTempPerm120 = fTempPerm119 < 0.5f;
			iVec7[0] = iTempPerm120;
		}
		if ((iControl[3])) {
			iTempPerm121 = (iVec7[1] <= 0) & (iTempPerm120 > 0);
			fRec40[0] = fRec40[1] * float(1 - iTempPerm121) + 4.65661287e-10f * fTemp41 * float(iTempPerm121);
			fTempPerm122 = fTempPerm116 + 1.0f;
			fRec39[0] = 0.0f - (fTempPerm117 * fRec39[1] - (fRec40[0] + fRec40[1])) / fTempPerm122;
			fRec38[0] = 0.0f - (fTempPerm117 * fRec38[1] - (fRec39[0] + fRec39[1])) / fTempPerm122;
			fRec37[0] = 0.0f - (fTempPerm117 * fRec37[1] - (fRec38[0] + fRec38[1])) / fTempPerm122;
			fRec36[0] = 0.0f - (fTempPerm117 * fRec36[1] - (fRec37[0] + fRec37[1])) / fTempPerm122;
			fRec34[0] = 0.0f - (fRec34[1] * fTempPerm117 - (fRec36[0] + fRec36[1])) / fTempPerm122;
			fTempPerm123 = std::sin(6.28318548f * fTempPerm106) * (fTempPerm114 * (fRec34[0] + -1.0f) + 1.0f);
			fTempPerm124 = std::max<float>(1.0f, fTempPerm113) + -1.0f;
			fTempPerm125 = fRec34[0] - fTempPerm123;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm126 = std::fmod(std::fabs(fTempPerm64), 1.0f);
			fTempPerm127 = fTempPerm65 + float(fTempPerm64 > 0.0f);
			fTempPerm128 = fTempPerm54 + 0.00390625f * fTempPerm59 * std::pow(2.0f, 0.0f - fTempPerm127);
			iTempPerm129 = int(fTempPerm127);
			fTempPerm130 = fTempPerm74 + fTempPerm50 + fTempPerm45 + fTempPerm40 + std::fmod(256.0f * (fTempPerm128 - (fTempPerm68 + std::floor(fTempPerm128 - fTempPerm68))) * (float(iTempPerm129 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm129))))) + float(iTempPerm129 == 0) + float((iTempPerm129 > 0) * int(std::pow(2.0f, float(iTempPerm129))))), 1.0f);
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22)))))))))) {
			fTempPerm131 = fRec41[1] + fTempPerm35 * (fTempPerm130 - fRec42[1]);
			fTempPerm132 = fTempPerm131 / fTempPerm83;
			fRec41[0] = 2.0f * fTempPerm132 - fRec41[1];
			fTempPerm133 = fRec42[1] + (fTempPerm35 * fTempPerm131) / fTempPerm83;
			fRec42[0] = 2.0f * fTempPerm133 - fRec42[1];
			fRec43 = fTempPerm133;
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30)))))))))) {
			fTempPerm134 = fTempPerm35 * (fTempPerm130 - fRec46[1]);
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | ((iControl[68] & iTempPerm30) | ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | ((iControl[59] & iTempPerm30) | ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | ((iControl[50] & iTempPerm30) | ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))))))))))))))))))))))))))))))) {
			fTempPerm135 = fTempPerm89 * fTempPerm91;
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30)))))))))) {
			fTempPerm136 = (fTempPerm35 * ((fRec46[1] + (fTempPerm134 + 0.215215757f * fTempPerm135 * fRec44[1]) / fTempPerm90 + fTempPerm92 * fRec45[1]) / fTempPerm93 - fRec44[1])) / fTempPerm90;
			fRec44[0] = fRec44[1] + 2.0f * fTempPerm136;
			fTempPerm137 = fRec44[1] + fTempPerm136;
			fRec45[0] = fRec45[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm137 - fRec45[1])) / fTempPerm90;
			fRec46[0] = fRec46[1] + 2.0f * fTempPerm134 / fTempPerm90;
			fRec47 = fTempPerm137;
		}
		if (((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29)))))))))) {
			fTempPerm138 = fTempPerm130 - (fRec49[1] + fTempPerm82 * fRec50[1]);
			fTempPerm139 = (fTempPerm35 * fTempPerm138) / fTempPerm83;
			fTempPerm140 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec50[1] + fTempPerm139));
			fTempPerm141 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm140);
			fTempPerm142 = fTempPerm35 * fTempPerm140 * fTempPerm141;
			fRec48 = fRec49[1] + fTempPerm142;
			fRec49[0] = fRec49[1] + 2.0f * fTempPerm142;
			fTempPerm143 = fTempPerm140 * fTempPerm141;
			fRec50[0] = fTempPerm139 + fTempPerm143;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm144 = (fTempPerm19 * (fTempPerm21 * fRec43 + fTempPerm87 * fRec47 + fTempPerm97 * fRec48)) / fTempPerm104 + fTempPerm105 * fTempPerm130;
			fVec8[0] = fTempPerm144;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fTempPerm145 = fTempPerm144 - fVec8[1];
		}
		float fElse140 = fConst0 * fTempPerm145;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec52[0] = ((std::fabs(fTempPerm145) < 0.5f) ? fElse140 : fRec52[1]);
		}
		if ((iControl[3])) {
			fTempPerm146 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec52[0])))));
			fTempPerm147 = 1.0f - fTempPerm146;
		}
		if ((iControl[3] | iControl[69])) {
			fTempPerm148 = std::floor(fTempPerm144);
			fTempPerm149 = fTempPerm144 - fTempPerm148;
			fVec9[0] = fTempPerm149;
			iTempPerm150 = fTempPerm149 < 0.5f;
			iVec10[0] = iTempPerm150;
		}
		if ((iControl[3])) {
			iTempPerm151 = (iVec10[1] <= 0) & (iTempPerm150 > 0);
			fRec57[0] = fRec57[1] * float(1 - iTempPerm151) + 4.65661287e-10f * fTemp41 * float(iTempPerm151);
			fTempPerm152 = fTempPerm146 + 1.0f;
			fRec56[0] = 0.0f - (fTempPerm147 * fRec56[1] - (fRec57[0] + fRec57[1])) / fTempPerm152;
			fRec55[0] = 0.0f - (fTempPerm147 * fRec55[1] - (fRec56[0] + fRec56[1])) / fTempPerm152;
			fRec54[0] = 0.0f - (fTempPerm147 * fRec54[1] - (fRec55[0] + fRec55[1])) / fTempPerm152;
			fRec53[0] = 0.0f - (fTempPerm147 * fRec53[1] - (fRec54[0] + fRec54[1])) / fTempPerm152;
			fRec51[0] = 0.0f - (fRec51[1] * fTempPerm147 - (fRec53[0] + fRec53[1])) / fTempPerm152;
			fTempPerm153 = std::sin(6.28318548f * fTempPerm144) * (fTempPerm114 * (fRec51[0] + -1.0f) + 1.0f);
			fTempPerm154 = fTempPerm123 + fTempPerm124 * fTempPerm125 + fTempPerm126 * (fTempPerm153 - (fTempPerm123 + fTempPerm124 * (fTempPerm125 - fRec51[0] - fTempPerm153)));
		}
		if ((iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
			fTempPerm155 = fTempPerm112 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec35[0] - fConst7))));
		}
		if ((iControl[75])) {
			fTempPerm156 = 0.25f * fTempPerm155;
			fTempPerm157 = std::floor(fTempPerm106 + 0.75f - fTempPerm156);
			fTempPerm158 = 0.75f - (fTempPerm156 + fTempPerm157);
		}
		if ((iControl[75] | (iControl[73] | iControl[71]))) {
			fTempPerm159 = 1.0f - fTempPerm155;
		}
		if ((iControl[75] | iControl[71])) {
			fTempPerm160 = 0.5f * fTempPerm159;
		}
		if ((iControl[75])) {
			fTempPerm161 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm160));
			fTempPerm162 = 0.5f - fTempPerm161;
		}
		if ((iControl[75] | iControl[72])) {
			fTempPerm163 = fTempPerm155 + 1.0f;
		}
		if ((iControl[75])) {
			fTempPerm164 = std::cos(6.28318548f * (fTempPerm106 + std::min<float>(((fTempPerm106 + fTempPerm158) * fTempPerm162) / fTempPerm161, (fTempPerm162 * ((fTempPerm157 + 0.25f * fTempPerm163) - fTempPerm106)) / (1.0f - fTempPerm161)) + fTempPerm158));
		}
		if ((iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
			fTempPerm165 = fTempPerm112 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec52[0] - fConst7))));
		}
		if ((iControl[75])) {
			fTempPerm166 = 0.25f * fTempPerm165;
			fTempPerm167 = std::floor(fTempPerm144 + 0.75f - fTempPerm166);
			fTempPerm168 = 0.75f - (fTempPerm166 + fTempPerm167);
		}
		if ((iControl[75] | (iControl[73] | iControl[71]))) {
			fTempPerm169 = 1.0f - fTempPerm165;
		}
		if ((iControl[75] | iControl[71])) {
			fTempPerm170 = 0.5f * fTempPerm169;
		}
		if ((iControl[75])) {
			fTempPerm171 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm170));
			fTempPerm172 = 0.5f - fTempPerm171;
		}
		if ((iControl[75] | iControl[72])) {
			fTempPerm173 = fTempPerm165 + 1.0f;
		}
		if ((iControl[75])) {
			fTempPerm174 = fTempPerm164 + fTempPerm126 * (std::cos(6.28318548f * (fTempPerm144 + std::min<float>(((fTempPerm144 + fTempPerm168) * fTempPerm172) / fTempPerm171, (fTempPerm172 * ((fTempPerm167 + 0.25f * fTempPerm173) - fTempPerm144)) / (1.0f - fTempPerm171)) + fTempPerm168)) - fTempPerm164);
		}
		if ((iControl[74])) {
			fTempPerm175 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm155));
			fTempPerm176 = 1.0f - fTempPerm175;
			fTempPerm177 = 0.25f * fTempPerm176;
			fTempPerm178 = fTempPerm106 - (fTempPerm177 + std::floor(fTempPerm106 - fTempPerm177));
			fTempPerm179 = 2.0f * fTempPerm178;
			fTempPerm180 = std::floor(fTempPerm179 + 1.0f);
			fTempPerm181 = std::cos(3.14159274f * (float(fTempPerm178 >= 0.5f) + fTempPerm179 + 1.0f - (fTempPerm180 + std::min<float>(fTempPerm179 + 1.0f - fTempPerm180, (fTempPerm175 * (fTempPerm180 - fTempPerm179)) / fTempPerm176))));
			fTempPerm182 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm165));
			fTempPerm183 = 1.0f - fTempPerm182;
			fTempPerm184 = 0.25f * fTempPerm183;
			fTempPerm185 = fTempPerm144 - (fTempPerm184 + std::floor(fTempPerm144 - fTempPerm184));
			fTempPerm186 = 2.0f * fTempPerm185;
			fTempPerm187 = std::floor(fTempPerm186 + 1.0f);
			fTempPerm188 = fTempPerm181 + fTempPerm126 * (std::cos(3.14159274f * (float(fTempPerm185 >= 0.5f) + fTempPerm186 + 1.0f - (fTempPerm187 + std::min<float>(fTempPerm186 + 1.0f - fTempPerm187, (fTempPerm182 * (fTempPerm187 - fTempPerm186)) / fTempPerm183)))) - fTempPerm181);
		}
		if ((iControl[73])) {
			fTempPerm189 = 0.25f * fTempPerm159;
			fTempPerm190 = fTempPerm189 + std::floor(fTempPerm106 - fTempPerm189);
		}
		if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
			fTempPerm191 = 1.0f - fTempPerm106;
		}
		if ((iControl[73])) {
			fTempPerm192 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm155));
			fTempPerm193 = std::cos(6.28318548f * (fTempPerm106 - (fTempPerm190 + std::min<float>(fTempPerm106 - fTempPerm190, ((fTempPerm190 + fTempPerm191) * fTempPerm192) / (1.0f - fTempPerm192)))));
			fTempPerm194 = 0.25f * fTempPerm169;
			fTempPerm195 = fTempPerm194 + std::floor(fTempPerm144 - fTempPerm194);
		}
		if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
			fTempPerm196 = 1.0f - fTempPerm144;
		}
		if ((iControl[73])) {
			fTempPerm197 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm165));
			fTempPerm198 = fTempPerm193 + fTempPerm126 * (std::cos(6.28318548f * (fTempPerm144 - (fTempPerm195 + std::min<float>(fTempPerm144 - fTempPerm195, ((fTempPerm195 + fTempPerm196) * fTempPerm197) / (1.0f - fTempPerm197))))) - fTempPerm193);
		}
		if ((iControl[72])) {
			fTempPerm199 = 0.125f * fTempPerm163;
			fTempPerm200 = fTempPerm199 + std::floor(fTempPerm106 - fTempPerm199);
			fTempPerm201 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm155));
			fTempPerm202 = 0.49000001f * fTempPerm201;
			fTempPerm203 = std::cos(12.566371f * ((fTempPerm106 + std::min<float>(0.49000001f * ((fTempPerm106 - fTempPerm200) * fTempPerm201) / (0.5f - fTempPerm202), 0.49000001f * (fTempPerm201 * (fTempPerm200 + fTempPerm191)) / (fTempPerm202 + 0.5f))) - fTempPerm200));
			fTempPerm204 = 0.125f * fTempPerm173;
			fTempPerm205 = fTempPerm204 + std::floor(fTempPerm144 - fTempPerm204);
			fTempPerm206 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm165));
			fTempPerm207 = 0.49000001f * fTempPerm206;
			fTempPerm208 = fTempPerm203 + fTempPerm126 * (std::cos(12.566371f * ((fTempPerm144 + std::min<float>(0.49000001f * ((fTempPerm144 - fTempPerm205) * fTempPerm206) / (0.5f - fTempPerm207), 0.49000001f * (fTempPerm206 * (fTempPerm205 + fTempPerm196)) / (fTempPerm207 + 0.5f))) - fTempPerm205)) - fTempPerm203);
		}
		if ((iControl[71])) {
			fTempPerm209 = 0.25f * (std::min<float>(0.975000024f, fTempPerm155) + 1.0f);
			fTempPerm210 = fTempPerm209 + std::floor(fTempPerm106 - fTempPerm209);
			fTempPerm211 = fTempPerm106 - fTempPerm210;
		}
		float fThen141 = 0.5f * ((fTempPerm106 + -0.5f - fTempPerm210) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm160)) + 1.0f);
		if ((iControl[71])) {
			fTempPerm212 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm211 < 0.5f) ? fTempPerm211 : fThen141)));
			fTempPerm213 = 0.25f * (std::min<float>(0.975000024f, fTempPerm165) + 1.0f);
			fTempPerm214 = fTempPerm213 + std::floor(fTempPerm144 - fTempPerm213);
			fTempPerm215 = fTempPerm144 - fTempPerm214;
		}
		float fThen142 = 0.5f * ((fTempPerm144 + -0.5f - fTempPerm214) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm170)) + 1.0f);
		if ((iControl[71])) {
			fTempPerm216 = fTempPerm212 + fTempPerm126 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm215 < 0.5f) ? fTempPerm215 : fThen142))) - fTempPerm212);
		}
		if ((iControl[70] | iControl[68])) {
			fTempPerm217 = fTempPerm106 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec35[0] * fControl[551] * fTempPerm111)) / fRec35[0]);
		}
		if ((iControl[70])) {
			fTempPerm218 = (0.0f - fTempPerm191) * (1.0f - std::cos(6.28318548f * (fTempPerm217 + 1.0f - std::floor(fTempPerm217 + 1.0f))));
		}
		if ((iControl[70] | iControl[68])) {
			fTempPerm219 = fTempPerm144 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec52[0] * fControl[551] * fTempPerm111)) / fRec52[0]);
		}
		if ((iControl[70])) {
			fTempPerm220 = fTempPerm218 + fTempPerm126 * ((0.0f - fTempPerm196) * (1.0f - std::cos(6.28318548f * (fTempPerm219 + 1.0f - std::floor(fTempPerm219 + 1.0f)))) - fTempPerm218) + 1.0f;
		}
		float fThen143 = 2.0f * (1.0f - fTempPerm119);
		float fElse143 = 2.0f * fTempPerm119;
		if ((iControl[69])) {
			fTempPerm221 = fTempPerm106 - (fTempPerm118 + fVec6[1]);
		}
		float fElse144 = fConst0 * fTempPerm221;
		if ((iControl[69])) {
			fRec58[0] = ((std::fabs(fTempPerm221) < 0.5f) ? fElse144 : fRec58[1]);
			fTempPerm222 = fTempPerm119 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec58[0] * fControl[551] * fTempPerm111)) / fRec58[0]);
			fTempPerm223 = ((iTempPerm120) ? fElse143 : fThen143) * (std::cos(6.28318548f * (fTempPerm222 + 1.0f - std::floor(fTempPerm222 + 1.0f))) + 1.0f);
		}
		float fThen145 = 2.0f * (1.0f - fTempPerm149);
		float fElse145 = 2.0f * fTempPerm149;
		if ((iControl[69])) {
			fTempPerm224 = fTempPerm144 - (fTempPerm148 + fVec9[1]);
		}
		float fElse146 = fConst0 * fTempPerm224;
		if ((iControl[69])) {
			fRec59[0] = ((std::fabs(fTempPerm224) < 0.5f) ? fElse146 : fRec59[1]);
			fTempPerm225 = fTempPerm149 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec59[0] * fControl[551] * fTempPerm111)) / fRec59[0]);
			fTempPerm226 = fTempPerm223 + fTempPerm126 * (((iTempPerm150) ? fElse145 : fThen145) * (std::cos(6.28318548f * (fTempPerm225 + 1.0f - std::floor(fTempPerm225 + 1.0f))) + 1.0f) - fTempPerm223) + -1.0f;
		}
		if ((iControl[68])) {
			fTempPerm227 = std::min<float>(1.0f, 2.0f * fTempPerm191) * std::sin(6.28318548f * (fTempPerm217 - std::floor(fTempPerm217)));
			fTempPerm228 = fTempPerm227 + fTempPerm126 * (std::min<float>(1.0f, 2.0f * fTempPerm196) * std::sin(6.28318548f * (fTempPerm219 - std::floor(fTempPerm219))) - fTempPerm227);
		}
		fRec2[0] = fControl[11] * fTempPerm154 + fControl[330] * fTempPerm174 + fControl[329] * fTempPerm188 + fControl[328] * fTempPerm198 + fControl[327] * fTempPerm208 + fControl[326] * fTempPerm216 + fControl[325] * fTempPerm220 + fControl[324] * fTempPerm226 + fControl[323] * fTempPerm228;
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm229 = fControl[579] - (fControl[573] + fControl[580] * fTemp46);
			fTempPerm230 = fControl[575] - (fControl[573] + fControl[578] * fTemp46 + fTemp48 * (fTempPerm229 - fControl[581] - (fControl[575] + fControl[582] * fTemp46)));
			fTempPerm231 = fControl[587] - (fControl[572] + fControl[588] * fTemp46);
			fTempPerm232 = fControl[583] - (fControl[572] + fControl[586] * fTemp46 + fTemp48 * (fTempPerm231 - fControl[589] - (fControl[583] + fControl[590] * fTemp46)));
			fTempPerm233 = fRec5[1] * (fControl[574] + fTemp44 * (fTempPerm230 + fTempPerm232) + fControl[591] * fTemp46 + fTemp48 * (fTempPerm229 + fTempPerm231));
			fTempPerm234 = fControl[599] - (fControl[593] + fControl[600] * fTemp46);
			fTempPerm235 = fControl[595] - (fControl[593] + fControl[598] * fTemp46 + fTemp48 * (fTempPerm234 - fControl[601] - (fControl[595] + fControl[602] * fTemp46)));
			fTempPerm236 = fControl[607] - (fControl[592] + fControl[608] * fTemp46);
			fTempPerm237 = fControl[603] - (fControl[592] + fControl[606] * fTemp46 + fTemp48 * (fTempPerm236 - fControl[609] - (fControl[603] + fControl[610] * fTemp46)));
			fTempPerm238 = fRec4[1] * (fControl[594] + fTemp44 * (fTempPerm235 + fTempPerm237) + fControl[611] * fTemp46 + fTemp48 * (fTempPerm234 + fTempPerm236));
			fTempPerm239 = fControl[619] - (fControl[613] + fControl[620] * fTemp46);
			fTempPerm240 = fControl[615] - (fControl[613] + fControl[618] * fTemp46 + fTemp48 * (fTempPerm239 - fControl[621] - (fControl[615] + fControl[622] * fTemp46)));
			fTempPerm241 = fControl[627] - (fControl[612] + fControl[628] * fTemp46);
			fTempPerm242 = fControl[623] - (fControl[612] + fControl[626] * fTemp46 + fTemp48 * (fTempPerm241 - fControl[629] - (fControl[623] + fControl[630] * fTemp46)));
			fTempPerm243 = fRec3[1] * (fControl[614] + fTemp44 * (fTempPerm240 + fTempPerm242) + fControl[631] * fTemp46 + fTemp48 * (fTempPerm239 + fTempPerm241));
			fTempPerm244 = fControl[639] - (fControl[633] + fControl[640] * fTemp46);
			fTempPerm245 = fControl[635] - (fControl[633] + fControl[638] * fTemp46 + fTemp48 * (fTempPerm244 - fControl[641] - (fControl[635] + fControl[642] * fTemp46)));
			fTempPerm246 = fControl[647] - (fControl[632] + fControl[648] * fTemp46);
			fTempPerm247 = fControl[643] - (fControl[632] + fControl[646] * fTemp46 + fTemp48 * (fTempPerm246 - fControl[649] - (fControl[643] + fControl[650] * fTemp46)));
			fTempPerm248 = fControl[634] + fTemp44 * (fTempPerm245 + fTempPerm247) + fControl[651] * fTemp46 + fTemp48 * (fTempPerm244 + fTempPerm246);
			fTempPerm249 = fControl[659] - (fControl[653] + fControl[660] * fTemp46);
			fTempPerm250 = fControl[655] - (fControl[653] + fControl[658] * fTemp46 + fTemp48 * (fTempPerm249 - fControl[661] - (fControl[655] + fControl[662] * fTemp46)));
			fTempPerm251 = fControl[667] - (fControl[652] + fControl[668] * fTemp46);
			fTempPerm252 = fControl[663] - (fControl[652] + fControl[666] * fTemp46 + fTemp48 * (fTempPerm251 - fControl[669] - (fControl[663] + fControl[670] * fTemp46)));
			fTempPerm253 = fControl[654] + fTemp44 * (fTempPerm250 + fTempPerm252) + fControl[671] * fTemp46 + fTemp48 * (fTempPerm249 + fTempPerm251);
			fTempPerm254 = std::floor(fTempPerm253);
			fTempPerm255 = fTempPerm254 + float((fTempPerm253 < 0.0f) & (fTempPerm253 != fTempPerm254));
			fTempPerm256 = fTempPerm54 + 0.00390625f * fTempPerm248 * std::pow(2.0f, 0.0f - fTempPerm255);
			iTempPerm257 = int(fTempPerm255);
			fTempPerm258 = fControl[679] - (fControl[673] + fControl[680] * fTemp46);
			fTempPerm259 = fControl[675] - (fControl[673] + fControl[678] * fTemp46 + fTemp48 * (fTempPerm258 - fControl[681] - (fControl[675] + fControl[682] * fTemp46)));
			fTempPerm260 = fControl[687] - (fControl[672] + fControl[688] * fTemp46);
			fTempPerm261 = fControl[683] - (fControl[672] + fControl[686] * fTemp46 + fTemp48 * (fTempPerm260 - fControl[689] - (fControl[683] + fControl[690] * fTemp46)));
			fTempPerm262 = fRec2[1] * (fControl[674] + fTemp44 * (fTempPerm259 + fTempPerm261) + fControl[691] * fTemp46 + fTemp48 * (fTempPerm258 + fTempPerm260));
			fTempPerm263 = fTempPerm233 + fTempPerm238 + fTempPerm243 + std::fmod(256.0f * (fTempPerm256 - (fTempPerm68 + std::floor(fTempPerm256 - fTempPerm68))) * (float(iTempPerm257 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm257))))) + float(iTempPerm257 == 0) + float((iTempPerm257 > 0) * int(std::pow(2.0f, float(iTempPerm257))))), 1.0f) + fTempPerm262;
		}
		if (((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22)))))))))) {
			fTempPerm264 = fRec60[1] + fTempPerm35 * (fTempPerm263 - fRec61[1]);
			fTempPerm265 = fTempPerm264 / fTempPerm83;
			fRec60[0] = 2.0f * fTempPerm265 - fRec60[1];
			fTempPerm266 = fRec61[1] + (fTempPerm35 * fTempPerm264) / fTempPerm83;
			fRec61[0] = 2.0f * fTempPerm266 - fRec61[1];
			fRec62 = fTempPerm266;
		}
		if (((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30)))))))))) {
			fTempPerm267 = fTempPerm35 * (fTempPerm263 - fRec65[1]);
			fTempPerm268 = (fTempPerm35 * ((fRec65[1] + (fTempPerm267 + 0.215215757f * fTempPerm135 * fRec63[1]) / fTempPerm90 + fTempPerm92 * fRec64[1]) / fTempPerm93 - fRec63[1])) / fTempPerm90;
			fRec63[0] = fRec63[1] + 2.0f * fTempPerm268;
			fTempPerm269 = fRec63[1] + fTempPerm268;
			fRec64[0] = fRec64[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm269 - fRec64[1])) / fTempPerm90;
			fRec65[0] = fRec65[1] + 2.0f * fTempPerm267 / fTempPerm90;
			fRec66 = fTempPerm269;
		}
		if (((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29)))))))))) {
			fTempPerm270 = fTempPerm263 - (fRec68[1] + fTempPerm82 * fRec69[1]);
			fTempPerm271 = (fTempPerm35 * fTempPerm270) / fTempPerm83;
			fTempPerm272 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec69[1] + fTempPerm271));
			fTempPerm273 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm272);
			fTempPerm274 = fTempPerm35 * fTempPerm272 * fTempPerm273;
			fRec67 = fRec68[1] + fTempPerm274;
			fRec68[0] = fRec68[1] + 2.0f * fTempPerm274;
			fTempPerm275 = fTempPerm272 * fTempPerm273;
			fRec69[0] = fTempPerm271 + fTempPerm275;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm276 = (fTempPerm19 * (fTempPerm21 * fRec62 + fTempPerm87 * fRec66 + fTempPerm97 * fRec67)) / fTempPerm104 + fTempPerm105 * fTempPerm263;
			fVec11[0] = fTempPerm276;
			fTempPerm277 = fControl[700] - (fControl[694] + fControl[701] * fTemp46);
			fTempPerm278 = fControl[696] - (fControl[694] + fControl[699] * fTemp46 + fTemp48 * (fTempPerm277 - fControl[702] - (fControl[696] + fControl[703] * fTemp46)));
			fTempPerm279 = fControl[708] - (fControl[693] + fControl[709] * fTemp46);
			fTempPerm280 = fControl[704] - (fControl[693] + fControl[707] * fTemp46 + fTemp48 * (fTempPerm279 - fControl[710] - (fControl[704] + fControl[711] * fTemp46)));
			fTempPerm281 = fControl[695] + fTemp44 * (fTempPerm278 + fTempPerm280) + fControl[712] * fTemp46 + fTemp48 * (fTempPerm277 + fTempPerm279);
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62])))))) {
			fTempPerm282 = fControl[692] * fTempPerm281;
		}
		if ((iControl[67])) {
			fTempPerm283 = 2.0f * fTempPerm282;
			fTempPerm284 = std::min<float>(1.0f, fTempPerm283);
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fTempPerm285 = fTempPerm276 - fVec11[1];
		}
		float fElse148 = fConst0 * fTempPerm285;
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec71[0] = ((std::fabs(fTempPerm285) < 0.5f) ? fElse148 : fRec71[1]);
		}
		if ((iControl[67])) {
			fTempPerm286 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec71[0])))));
			fTempPerm287 = 1.0f - fTempPerm286;
		}
		if ((iControl[67] | iControl[60])) {
			fTempPerm288 = std::floor(fTempPerm276);
			fTempPerm289 = fTempPerm276 - fTempPerm288;
			fVec12[0] = fTempPerm289;
			iTempPerm290 = fTempPerm289 < 0.5f;
			iVec13[0] = iTempPerm290;
		}
		if ((iControl[67])) {
			iTempPerm291 = (iVec13[1] <= 0) & (iTempPerm290 > 0);
			fRec76[0] = fRec76[1] * float(1 - iTempPerm291) + 4.65661287e-10f * fTemp41 * float(iTempPerm291);
			fTempPerm292 = fTempPerm286 + 1.0f;
			fRec75[0] = 0.0f - (fTempPerm287 * fRec75[1] - (fRec76[0] + fRec76[1])) / fTempPerm292;
			fRec74[0] = 0.0f - (fTempPerm287 * fRec74[1] - (fRec75[0] + fRec75[1])) / fTempPerm292;
			fRec73[0] = 0.0f - (fTempPerm287 * fRec73[1] - (fRec74[0] + fRec74[1])) / fTempPerm292;
			fRec72[0] = 0.0f - (fTempPerm287 * fRec72[1] - (fRec73[0] + fRec73[1])) / fTempPerm292;
			fRec70[0] = 0.0f - (fRec70[1] * fTempPerm287 - (fRec72[0] + fRec72[1])) / fTempPerm292;
			fTempPerm293 = std::sin(6.28318548f * fTempPerm276) * (fTempPerm284 * (fRec70[0] + -1.0f) + 1.0f);
			fTempPerm294 = std::max<float>(1.0f, fTempPerm283) + -1.0f;
			fTempPerm295 = fRec70[0] - fTempPerm293;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm296 = std::fmod(std::fabs(fTempPerm253), 1.0f);
			fTempPerm297 = fTempPerm254 + float(fTempPerm253 > 0.0f);
			fTempPerm298 = fTempPerm54 + 0.00390625f * fTempPerm248 * std::pow(2.0f, 0.0f - fTempPerm297);
			iTempPerm299 = int(fTempPerm297);
			fTempPerm300 = fTempPerm262 + fTempPerm243 + fTempPerm238 + fTempPerm233 + std::fmod(256.0f * (fTempPerm298 - (fTempPerm68 + std::floor(fTempPerm298 - fTempPerm68))) * (float(iTempPerm299 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm299))))) + float(iTempPerm299 == 0) + float((iTempPerm299 > 0) * int(std::pow(2.0f, float(iTempPerm299))))), 1.0f);
		}
		if (((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22)))))))))) {
			fTempPerm301 = fRec77[1] + fTempPerm35 * (fTempPerm300 - fRec78[1]);
			fTempPerm302 = fTempPerm301 / fTempPerm83;
			fRec77[0] = 2.0f * fTempPerm302 - fRec77[1];
			fTempPerm303 = fRec78[1] + (fTempPerm35 * fTempPerm301) / fTempPerm83;
			fRec78[0] = 2.0f * fTempPerm303 - fRec78[1];
			fRec79 = fTempPerm303;
		}
		if (((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30)))))))))) {
			fTempPerm304 = fTempPerm35 * (fTempPerm300 - fRec82[1]);
			fTempPerm305 = (fTempPerm35 * ((fRec82[1] + (fTempPerm304 + 0.215215757f * fTempPerm135 * fRec80[1]) / fTempPerm90 + fTempPerm92 * fRec81[1]) / fTempPerm93 - fRec80[1])) / fTempPerm90;
			fRec80[0] = fRec80[1] + 2.0f * fTempPerm305;
			fTempPerm306 = fRec80[1] + fTempPerm305;
			fRec81[0] = fRec81[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm306 - fRec81[1])) / fTempPerm90;
			fRec82[0] = fRec82[1] + 2.0f * fTempPerm304 / fTempPerm90;
			fRec83 = fTempPerm306;
		}
		if (((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29)))))))))) {
			fTempPerm307 = fTempPerm300 - (fRec85[1] + fTempPerm82 * fRec86[1]);
			fTempPerm308 = (fTempPerm35 * fTempPerm307) / fTempPerm83;
			fTempPerm309 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec86[1] + fTempPerm308));
			fTempPerm310 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm309);
			fTempPerm311 = fTempPerm35 * fTempPerm309 * fTempPerm310;
			fRec84 = fRec85[1] + fTempPerm311;
			fRec85[0] = fRec85[1] + 2.0f * fTempPerm311;
			fTempPerm312 = fTempPerm309 * fTempPerm310;
			fRec86[0] = fTempPerm308 + fTempPerm312;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm313 = (fTempPerm19 * (fTempPerm21 * fRec79 + fTempPerm87 * fRec83 + fTempPerm97 * fRec84)) / fTempPerm104 + fTempPerm105 * fTempPerm300;
			fVec14[0] = fTempPerm313;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fTempPerm314 = fTempPerm313 - fVec14[1];
		}
		float fElse149 = fConst0 * fTempPerm314;
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec88[0] = ((std::fabs(fTempPerm314) < 0.5f) ? fElse149 : fRec88[1]);
		}
		if ((iControl[67])) {
			fTempPerm315 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec88[0])))));
			fTempPerm316 = 1.0f - fTempPerm315;
		}
		if ((iControl[67] | iControl[60])) {
			fTempPerm317 = std::floor(fTempPerm313);
			fTempPerm318 = fTempPerm313 - fTempPerm317;
			fVec15[0] = fTempPerm318;
			iTempPerm319 = fTempPerm318 < 0.5f;
			iVec16[0] = iTempPerm319;
		}
		if ((iControl[67])) {
			iTempPerm320 = (iVec16[1] <= 0) & (iTempPerm319 > 0);
			fRec93[0] = fRec93[1] * float(1 - iTempPerm320) + 4.65661287e-10f * fTemp41 * float(iTempPerm320);
			fTempPerm321 = fTempPerm315 + 1.0f;
			fRec92[0] = 0.0f - (fTempPerm316 * fRec92[1] - (fRec93[0] + fRec93[1])) / fTempPerm321;
			fRec91[0] = 0.0f - (fTempPerm316 * fRec91[1] - (fRec92[0] + fRec92[1])) / fTempPerm321;
			fRec90[0] = 0.0f - (fTempPerm316 * fRec90[1] - (fRec91[0] + fRec91[1])) / fTempPerm321;
			fRec89[0] = 0.0f - (fTempPerm316 * fRec89[1] - (fRec90[0] + fRec90[1])) / fTempPerm321;
			fRec87[0] = 0.0f - (fRec87[1] * fTempPerm316 - (fRec89[0] + fRec89[1])) / fTempPerm321;
			fTempPerm322 = std::sin(6.28318548f * fTempPerm313) * (fTempPerm284 * (fRec87[0] + -1.0f) + 1.0f);
			fTempPerm323 = fTempPerm293 + fTempPerm294 * fTempPerm295 + fTempPerm296 * (fTempPerm322 - (fTempPerm293 + fTempPerm294 * (fTempPerm295 - fRec87[0] - fTempPerm322)));
		}
		if ((iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
			fTempPerm324 = fTempPerm282 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec71[0] - fConst7))));
		}
		if ((iControl[66])) {
			fTempPerm325 = 0.25f * fTempPerm324;
			fTempPerm326 = std::floor(fTempPerm276 + 0.75f - fTempPerm325);
			fTempPerm327 = 0.75f - (fTempPerm325 + fTempPerm326);
		}
		if ((iControl[66] | (iControl[64] | iControl[62]))) {
			fTempPerm328 = 1.0f - fTempPerm324;
		}
		if ((iControl[66] | iControl[62])) {
			fTempPerm329 = 0.5f * fTempPerm328;
		}
		if ((iControl[66])) {
			fTempPerm330 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm329));
			fTempPerm331 = 0.5f - fTempPerm330;
		}
		if ((iControl[66] | iControl[63])) {
			fTempPerm332 = fTempPerm324 + 1.0f;
		}
		if ((iControl[66])) {
			fTempPerm333 = std::cos(6.28318548f * (fTempPerm276 + std::min<float>(((fTempPerm276 + fTempPerm327) * fTempPerm331) / fTempPerm330, (fTempPerm331 * ((fTempPerm326 + 0.25f * fTempPerm332) - fTempPerm276)) / (1.0f - fTempPerm330)) + fTempPerm327));
		}
		if ((iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
			fTempPerm334 = fTempPerm282 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec88[0] - fConst7))));
		}
		if ((iControl[66])) {
			fTempPerm335 = 0.25f * fTempPerm334;
			fTempPerm336 = std::floor(fTempPerm313 + 0.75f - fTempPerm335);
			fTempPerm337 = 0.75f - (fTempPerm335 + fTempPerm336);
		}
		if ((iControl[66] | (iControl[64] | iControl[62]))) {
			fTempPerm338 = 1.0f - fTempPerm334;
		}
		if ((iControl[66] | iControl[62])) {
			fTempPerm339 = 0.5f * fTempPerm338;
		}
		if ((iControl[66])) {
			fTempPerm340 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm339));
			fTempPerm341 = 0.5f - fTempPerm340;
		}
		if ((iControl[66] | iControl[63])) {
			fTempPerm342 = fTempPerm334 + 1.0f;
		}
		if ((iControl[66])) {
			fTempPerm343 = fTempPerm333 + fTempPerm296 * (std::cos(6.28318548f * (fTempPerm313 + std::min<float>(((fTempPerm313 + fTempPerm337) * fTempPerm341) / fTempPerm340, (fTempPerm341 * ((fTempPerm336 + 0.25f * fTempPerm342) - fTempPerm313)) / (1.0f - fTempPerm340)) + fTempPerm337)) - fTempPerm333);
		}
		if ((iControl[65])) {
			fTempPerm344 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm324));
			fTempPerm345 = 1.0f - fTempPerm344;
			fTempPerm346 = 0.25f * fTempPerm345;
			fTempPerm347 = fTempPerm276 - (fTempPerm346 + std::floor(fTempPerm276 - fTempPerm346));
			fTempPerm348 = 2.0f * fTempPerm347;
			fTempPerm349 = std::floor(fTempPerm348 + 1.0f);
			fTempPerm350 = std::cos(3.14159274f * (float(fTempPerm347 >= 0.5f) + fTempPerm348 + 1.0f - (fTempPerm349 + std::min<float>(fTempPerm348 + 1.0f - fTempPerm349, (fTempPerm344 * (fTempPerm349 - fTempPerm348)) / fTempPerm345))));
			fTempPerm351 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm334));
			fTempPerm352 = 1.0f - fTempPerm351;
			fTempPerm353 = 0.25f * fTempPerm352;
			fTempPerm354 = fTempPerm313 - (fTempPerm353 + std::floor(fTempPerm313 - fTempPerm353));
			fTempPerm355 = 2.0f * fTempPerm354;
			fTempPerm356 = std::floor(fTempPerm355 + 1.0f);
			fTempPerm357 = fTempPerm350 + fTempPerm296 * (std::cos(3.14159274f * (float(fTempPerm354 >= 0.5f) + fTempPerm355 + 1.0f - (fTempPerm356 + std::min<float>(fTempPerm355 + 1.0f - fTempPerm356, (fTempPerm351 * (fTempPerm356 - fTempPerm355)) / fTempPerm352)))) - fTempPerm350);
		}
		if ((iControl[64])) {
			fTempPerm358 = 0.25f * fTempPerm328;
			fTempPerm359 = fTempPerm358 + std::floor(fTempPerm276 - fTempPerm358);
		}
		if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
			fTempPerm360 = 1.0f - fTempPerm276;
		}
		if ((iControl[64])) {
			fTempPerm361 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm324));
			fTempPerm362 = std::cos(6.28318548f * (fTempPerm276 - (fTempPerm359 + std::min<float>(fTempPerm276 - fTempPerm359, ((fTempPerm359 + fTempPerm360) * fTempPerm361) / (1.0f - fTempPerm361)))));
			fTempPerm363 = 0.25f * fTempPerm338;
			fTempPerm364 = fTempPerm363 + std::floor(fTempPerm313 - fTempPerm363);
		}
		if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
			fTempPerm365 = 1.0f - fTempPerm313;
		}
		if ((iControl[64])) {
			fTempPerm366 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm334));
			fTempPerm367 = fTempPerm362 + fTempPerm296 * (std::cos(6.28318548f * (fTempPerm313 - (fTempPerm364 + std::min<float>(fTempPerm313 - fTempPerm364, ((fTempPerm364 + fTempPerm365) * fTempPerm366) / (1.0f - fTempPerm366))))) - fTempPerm362);
		}
		if ((iControl[63])) {
			fTempPerm368 = 0.125f * fTempPerm332;
			fTempPerm369 = fTempPerm368 + std::floor(fTempPerm276 - fTempPerm368);
			fTempPerm370 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm324));
			fTempPerm371 = 0.49000001f * fTempPerm370;
			fTempPerm372 = std::cos(12.566371f * ((fTempPerm276 + std::min<float>(0.49000001f * ((fTempPerm276 - fTempPerm369) * fTempPerm370) / (0.5f - fTempPerm371), 0.49000001f * (fTempPerm370 * (fTempPerm369 + fTempPerm360)) / (fTempPerm371 + 0.5f))) - fTempPerm369));
			fTempPerm373 = 0.125f * fTempPerm342;
			fTempPerm374 = fTempPerm373 + std::floor(fTempPerm313 - fTempPerm373);
			fTempPerm375 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm334));
			fTempPerm376 = 0.49000001f * fTempPerm375;
			fTempPerm377 = fTempPerm372 + fTempPerm296 * (std::cos(12.566371f * ((fTempPerm313 + std::min<float>(0.49000001f * ((fTempPerm313 - fTempPerm374) * fTempPerm375) / (0.5f - fTempPerm376), 0.49000001f * (fTempPerm375 * (fTempPerm374 + fTempPerm365)) / (fTempPerm376 + 0.5f))) - fTempPerm374)) - fTempPerm372);
		}
		if ((iControl[62])) {
			fTempPerm378 = 0.25f * (std::min<float>(0.975000024f, fTempPerm324) + 1.0f);
			fTempPerm379 = fTempPerm378 + std::floor(fTempPerm276 - fTempPerm378);
			fTempPerm380 = fTempPerm276 - fTempPerm379;
		}
		float fThen150 = 0.5f * ((fTempPerm276 + -0.5f - fTempPerm379) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm329)) + 1.0f);
		if ((iControl[62])) {
			fTempPerm381 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm380 < 0.5f) ? fTempPerm380 : fThen150)));
			fTempPerm382 = 0.25f * (std::min<float>(0.975000024f, fTempPerm334) + 1.0f);
			fTempPerm383 = fTempPerm382 + std::floor(fTempPerm313 - fTempPerm382);
			fTempPerm384 = fTempPerm313 - fTempPerm383;
		}
		float fThen151 = 0.5f * ((fTempPerm313 + -0.5f - fTempPerm383) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm339)) + 1.0f);
		if ((iControl[62])) {
			fTempPerm385 = fTempPerm381 + fTempPerm296 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm384 < 0.5f) ? fTempPerm384 : fThen151))) - fTempPerm381);
		}
		if ((iControl[61] | iControl[59])) {
			fTempPerm386 = fTempPerm276 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec71[0] * fControl[692] * fTempPerm281)) / fRec71[0]);
		}
		if ((iControl[61])) {
			fTempPerm387 = (0.0f - fTempPerm360) * (1.0f - std::cos(6.28318548f * (fTempPerm386 + 1.0f - std::floor(fTempPerm386 + 1.0f))));
		}
		if ((iControl[61] | iControl[59])) {
			fTempPerm388 = fTempPerm313 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec88[0] * fControl[692] * fTempPerm281)) / fRec88[0]);
		}
		if ((iControl[61])) {
			fTempPerm389 = fTempPerm387 + fTempPerm296 * ((0.0f - fTempPerm365) * (1.0f - std::cos(6.28318548f * (fTempPerm388 + 1.0f - std::floor(fTempPerm388 + 1.0f)))) - fTempPerm387) + 1.0f;
		}
		float fThen152 = 2.0f * (1.0f - fTempPerm289);
		float fElse152 = 2.0f * fTempPerm289;
		if ((iControl[60])) {
			fTempPerm390 = fTempPerm276 - (fTempPerm288 + fVec12[1]);
		}
		float fElse153 = fConst0 * fTempPerm390;
		if ((iControl[60])) {
			fRec94[0] = ((std::fabs(fTempPerm390) < 0.5f) ? fElse153 : fRec94[1]);
			fTempPerm391 = fTempPerm289 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec94[0] * fControl[692] * fTempPerm281)) / fRec94[0]);
			fTempPerm392 = ((iTempPerm290) ? fElse152 : fThen152) * (std::cos(6.28318548f * (fTempPerm391 + 1.0f - std::floor(fTempPerm391 + 1.0f))) + 1.0f);
		}
		float fThen154 = 2.0f * (1.0f - fTempPerm318);
		float fElse154 = 2.0f * fTempPerm318;
		if ((iControl[60])) {
			fTempPerm393 = fTempPerm313 - (fTempPerm317 + fVec15[1]);
		}
		float fElse155 = fConst0 * fTempPerm393;
		if ((iControl[60])) {
			fRec95[0] = ((std::fabs(fTempPerm393) < 0.5f) ? fElse155 : fRec95[1]);
			fTempPerm394 = fTempPerm318 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec95[0] * fControl[692] * fTempPerm281)) / fRec95[0]);
			fTempPerm395 = fTempPerm392 + fTempPerm296 * (((iTempPerm319) ? fElse154 : fThen154) * (std::cos(6.28318548f * (fTempPerm394 + 1.0f - std::floor(fTempPerm394 + 1.0f))) + 1.0f) - fTempPerm392) + -1.0f;
		}
		if ((iControl[59])) {
			fTempPerm396 = std::min<float>(1.0f, 2.0f * fTempPerm360) * std::sin(6.28318548f * (fTempPerm386 - std::floor(fTempPerm386)));
			fTempPerm397 = fTempPerm396 + fTempPerm296 * (std::min<float>(1.0f, 2.0f * fTempPerm365) * std::sin(6.28318548f * (fTempPerm388 - std::floor(fTempPerm388))) - fTempPerm396);
		}
		fRec3[0] = fControl[322] * fTempPerm323 + fControl[321] * fTempPerm343 + fControl[320] * fTempPerm357 + fControl[319] * fTempPerm367 + fControl[318] * fTempPerm377 + fControl[317] * fTempPerm385 + fControl[316] * fTempPerm389 + fControl[315] * fTempPerm395 + fControl[314] * fTempPerm397;
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm398 = fControl[720] - (fControl[714] + fControl[721] * fTemp46);
			fTempPerm399 = fControl[716] - (fControl[714] + fControl[719] * fTemp46 + fTemp48 * (fTempPerm398 - fControl[722] - (fControl[716] + fControl[723] * fTemp46)));
			fTempPerm400 = fControl[728] - (fControl[713] + fControl[729] * fTemp46);
			fTempPerm401 = fControl[724] - (fControl[713] + fControl[727] * fTemp46 + fTemp48 * (fTempPerm400 - fControl[730] - (fControl[724] + fControl[731] * fTemp46)));
			fTempPerm402 = fRec5[1] * (fControl[715] + fTemp44 * (fTempPerm399 + fTempPerm401) + fControl[732] * fTemp46 + fTemp48 * (fTempPerm398 + fTempPerm400));
			fTempPerm403 = fControl[740] - (fControl[734] + fControl[741] * fTemp46);
			fTempPerm404 = fControl[736] - (fControl[734] + fControl[739] * fTemp46 + fTemp48 * (fTempPerm403 - fControl[742] - (fControl[736] + fControl[743] * fTemp46)));
			fTempPerm405 = fControl[748] - (fControl[733] + fControl[749] * fTemp46);
			fTempPerm406 = fControl[744] - (fControl[733] + fControl[747] * fTemp46 + fTemp48 * (fTempPerm405 - fControl[750] - (fControl[744] + fControl[751] * fTemp46)));
			fTempPerm407 = fRec4[1] * (fControl[735] + fTemp44 * (fTempPerm404 + fTempPerm406) + fControl[752] * fTemp46 + fTemp48 * (fTempPerm403 + fTempPerm405));
			fTempPerm408 = fControl[760] - (fControl[754] + fControl[761] * fTemp46);
			fTempPerm409 = fControl[756] - (fControl[754] + fControl[759] * fTemp46 + fTemp48 * (fTempPerm408 - fControl[762] - (fControl[756] + fControl[763] * fTemp46)));
			fTempPerm410 = fControl[768] - (fControl[753] + fControl[769] * fTemp46);
			fTempPerm411 = fControl[764] - (fControl[753] + fControl[767] * fTemp46 + fTemp48 * (fTempPerm410 - fControl[770] - (fControl[764] + fControl[771] * fTemp46)));
			fTempPerm412 = fRec3[1] * (fControl[755] + fTemp44 * (fTempPerm409 + fTempPerm411) + fControl[772] * fTemp46 + fTemp48 * (fTempPerm408 + fTempPerm410));
			fTempPerm413 = fControl[780] - (fControl[774] + fControl[781] * fTemp46);
			fTempPerm414 = fControl[776] - (fControl[774] + fControl[779] * fTemp46 + fTemp48 * (fTempPerm413 - fControl[782] - (fControl[776] + fControl[783] * fTemp46)));
			fTempPerm415 = fControl[788] - (fControl[773] + fControl[789] * fTemp46);
			fTempPerm416 = fControl[784] - (fControl[773] + fControl[787] * fTemp46 + fTemp48 * (fTempPerm415 - fControl[790] - (fControl[784] + fControl[791] * fTemp46)));
			fTempPerm417 = fControl[775] + fTemp44 * (fTempPerm414 + fTempPerm416) + fControl[792] * fTemp46 + fTemp48 * (fTempPerm413 + fTempPerm415);
			fTempPerm418 = fControl[800] - (fControl[794] + fControl[801] * fTemp46);
			fTempPerm419 = fControl[796] - (fControl[794] + fControl[799] * fTemp46 + fTemp48 * (fTempPerm418 - fControl[802] - (fControl[796] + fControl[803] * fTemp46)));
			fTempPerm420 = fControl[808] - (fControl[793] + fControl[809] * fTemp46);
			fTempPerm421 = fControl[804] - (fControl[793] + fControl[807] * fTemp46 + fTemp48 * (fTempPerm420 - fControl[810] - (fControl[804] + fControl[811] * fTemp46)));
			fTempPerm422 = fControl[795] + fTemp44 * (fTempPerm419 + fTempPerm421) + fControl[812] * fTemp46 + fTemp48 * (fTempPerm418 + fTempPerm420);
			fTempPerm423 = std::floor(fTempPerm422);
			fTempPerm424 = fTempPerm423 + float((fTempPerm422 < 0.0f) & (fTempPerm422 != fTempPerm423));
			fTempPerm425 = fTempPerm54 + 0.00390625f * fTempPerm417 * std::pow(2.0f, 0.0f - fTempPerm424);
			iTempPerm426 = int(fTempPerm424);
			fTempPerm427 = fControl[820] - (fControl[814] + fControl[821] * fTemp46);
			fTempPerm428 = fControl[816] - (fControl[814] + fControl[819] * fTemp46 + fTemp48 * (fTempPerm427 - fControl[822] - (fControl[816] + fControl[823] * fTemp46)));
			fTempPerm429 = fControl[825] - (fControl[813] + fControl[827] * fTemp46);
			fTempPerm430 = fControl[824] - (fControl[813] + fTemp48 * (fTempPerm429 - fControl[828] - (fControl[824] + fControl[830] * fTemp46)) + fControl[831] * fTemp46);
			fTempPerm431 = fRec2[1] * (fControl[815] + fTemp44 * (fTempPerm428 + fTempPerm430) + fTemp48 * (fTempPerm427 + fTempPerm429) + fControl[832] * fTemp46);
			fTempPerm432 = fTempPerm402 + fTempPerm407 + fTempPerm412 + std::fmod(256.0f * (fTempPerm425 - (fTempPerm68 + std::floor(fTempPerm425 - fTempPerm68))) * (float(iTempPerm426 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm426))))) + float(iTempPerm426 == 0) + float((iTempPerm426 > 0) * int(std::pow(2.0f, float(iTempPerm426))))), 1.0f) + fTempPerm431;
		}
		if (((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22)))))))))) {
			fTempPerm433 = fRec96[1] + fTempPerm35 * (fTempPerm432 - fRec97[1]);
			fTempPerm434 = fTempPerm433 / fTempPerm83;
			fRec96[0] = 2.0f * fTempPerm434 - fRec96[1];
			fTempPerm435 = fRec97[1] + (fTempPerm35 * fTempPerm433) / fTempPerm83;
			fRec97[0] = 2.0f * fTempPerm435 - fRec97[1];
			fRec98 = fTempPerm435;
		}
		if (((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30)))))))))) {
			fTempPerm436 = fTempPerm35 * (fTempPerm432 - fRec101[1]);
			fTempPerm437 = (fTempPerm35 * ((fRec101[1] + (fTempPerm436 + 0.215215757f * fTempPerm135 * fRec99[1]) / fTempPerm90 + fTempPerm92 * fRec100[1]) / fTempPerm93 - fRec99[1])) / fTempPerm90;
			fRec99[0] = fRec99[1] + 2.0f * fTempPerm437;
			fTempPerm438 = fRec99[1] + fTempPerm437;
			fRec100[0] = fRec100[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm438 - fRec100[1])) / fTempPerm90;
			fRec101[0] = fRec101[1] + 2.0f * fTempPerm436 / fTempPerm90;
			fRec102 = fTempPerm438;
		}
		if (((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29)))))))))) {
			fTempPerm439 = fTempPerm432 - (fRec104[1] + fTempPerm82 * fRec105[1]);
			fTempPerm440 = (fTempPerm35 * fTempPerm439) / fTempPerm83;
			fTempPerm441 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec105[1] + fTempPerm440));
			fTempPerm442 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm441);
			fTempPerm443 = fTempPerm35 * fTempPerm441 * fTempPerm442;
			fRec103 = fRec104[1] + fTempPerm443;
			fRec104[0] = fRec104[1] + 2.0f * fTempPerm443;
			fTempPerm444 = fTempPerm441 * fTempPerm442;
			fRec105[0] = fTempPerm440 + fTempPerm444;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm445 = (fTempPerm19 * (fTempPerm21 * fRec98 + fTempPerm87 * fRec102 + fTempPerm97 * fRec103)) / fTempPerm104 + fTempPerm105 * fTempPerm432;
			fVec17[0] = fTempPerm445;
			fTempPerm446 = fControl[841] - (fControl[835] + fControl[842] * fTemp46);
			fTempPerm447 = fControl[837] - (fControl[835] + fControl[840] * fTemp46 + fTemp48 * (fTempPerm446 - fControl[843] - (fControl[837] + fControl[844] * fTemp46)));
			fTempPerm448 = fControl[849] - (fControl[834] + fControl[850] * fTemp46);
			fTempPerm449 = fControl[845] - (fControl[834] + fControl[848] * fTemp46 + fTemp48 * (fTempPerm448 - fControl[851] - (fControl[845] + fControl[852] * fTemp46)));
			fTempPerm450 = fControl[836] + fTemp44 * (fTempPerm447 + fTempPerm449) + fControl[853] * fTemp46 + fTemp48 * (fTempPerm446 + fTempPerm448);
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53])))))) {
			fTempPerm451 = fControl[833] * fTempPerm450;
		}
		if ((iControl[58])) {
			fTempPerm452 = 2.0f * fTempPerm451;
			fTempPerm453 = std::min<float>(1.0f, fTempPerm452);
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fTempPerm454 = fTempPerm445 - fVec17[1];
		}
		float fElse157 = fConst0 * fTempPerm454;
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec107[0] = ((std::fabs(fTempPerm454) < 0.5f) ? fElse157 : fRec107[1]);
		}
		if ((iControl[58])) {
			fTempPerm455 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec107[0])))));
			fTempPerm456 = 1.0f - fTempPerm455;
		}
		if ((iControl[58] | iControl[51])) {
			fTempPerm457 = std::floor(fTempPerm445);
			fTempPerm458 = fTempPerm445 - fTempPerm457;
			fVec18[0] = fTempPerm458;
			iTempPerm459 = fTempPerm458 < 0.5f;
			iVec19[0] = iTempPerm459;
		}
		if ((iControl[58])) {
			iTempPerm460 = (iVec19[1] <= 0) & (iTempPerm459 > 0);
			fRec112[0] = fRec112[1] * float(1 - iTempPerm460) + 4.65661287e-10f * fTemp41 * float(iTempPerm460);
			fTempPerm461 = fTempPerm455 + 1.0f;
			fRec111[0] = 0.0f - (fTempPerm456 * fRec111[1] - (fRec112[0] + fRec112[1])) / fTempPerm461;
			fRec110[0] = 0.0f - (fTempPerm456 * fRec110[1] - (fRec111[0] + fRec111[1])) / fTempPerm461;
			fRec109[0] = 0.0f - (fTempPerm456 * fRec109[1] - (fRec110[0] + fRec110[1])) / fTempPerm461;
			fRec108[0] = 0.0f - (fTempPerm456 * fRec108[1] - (fRec109[0] + fRec109[1])) / fTempPerm461;
			fRec106[0] = 0.0f - (fRec106[1] * fTempPerm456 - (fRec108[0] + fRec108[1])) / fTempPerm461;
			fTempPerm462 = std::sin(6.28318548f * fTempPerm445) * (fTempPerm453 * (fRec106[0] + -1.0f) + 1.0f);
			fTempPerm463 = std::max<float>(1.0f, fTempPerm452) + -1.0f;
			fTempPerm464 = fRec106[0] - fTempPerm462;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm465 = std::fmod(std::fabs(fTempPerm422), 1.0f);
			fTempPerm466 = fTempPerm423 + float(fTempPerm422 > 0.0f);
			fTempPerm467 = fTempPerm54 + 0.00390625f * fTempPerm417 * std::pow(2.0f, 0.0f - fTempPerm466);
			iTempPerm468 = int(fTempPerm466);
			fTempPerm469 = fTempPerm431 + fTempPerm412 + fTempPerm407 + fTempPerm402 + std::fmod(256.0f * (fTempPerm467 - (fTempPerm68 + std::floor(fTempPerm467 - fTempPerm68))) * (float(iTempPerm468 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm468))))) + float(iTempPerm468 == 0) + float((iTempPerm468 > 0) * int(std::pow(2.0f, float(iTempPerm468))))), 1.0f);
		}
		if (((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22)))))))))) {
			fTempPerm470 = fRec113[1] + fTempPerm35 * (fTempPerm469 - fRec114[1]);
			fTempPerm471 = fTempPerm470 / fTempPerm83;
			fRec113[0] = 2.0f * fTempPerm471 - fRec113[1];
			fTempPerm472 = fRec114[1] + (fTempPerm35 * fTempPerm470) / fTempPerm83;
			fRec114[0] = 2.0f * fTempPerm472 - fRec114[1];
			fRec115 = fTempPerm472;
		}
		if (((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30)))))))))) {
			fTempPerm473 = fTempPerm35 * (fTempPerm469 - fRec118[1]);
			fTempPerm474 = (fTempPerm35 * ((fRec118[1] + (fTempPerm473 + 0.215215757f * fTempPerm135 * fRec116[1]) / fTempPerm90 + fTempPerm92 * fRec117[1]) / fTempPerm93 - fRec116[1])) / fTempPerm90;
			fRec116[0] = fRec116[1] + 2.0f * fTempPerm474;
			fTempPerm475 = fRec116[1] + fTempPerm474;
			fRec117[0] = fRec117[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm475 - fRec117[1])) / fTempPerm90;
			fRec118[0] = fRec118[1] + 2.0f * fTempPerm473 / fTempPerm90;
			fRec119 = fTempPerm475;
		}
		if (((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29)))))))))) {
			fTempPerm476 = fTempPerm469 - (fRec121[1] + fTempPerm82 * fRec122[1]);
			fTempPerm477 = (fTempPerm35 * fTempPerm476) / fTempPerm83;
			fTempPerm478 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec122[1] + fTempPerm477));
			fTempPerm479 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm478);
			fTempPerm480 = fTempPerm35 * fTempPerm478 * fTempPerm479;
			fRec120 = fRec121[1] + fTempPerm480;
			fRec121[0] = fRec121[1] + 2.0f * fTempPerm480;
			fTempPerm481 = fTempPerm478 * fTempPerm479;
			fRec122[0] = fTempPerm477 + fTempPerm481;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm482 = (fTempPerm19 * (fTempPerm21 * fRec115 + fTempPerm87 * fRec119 + fTempPerm97 * fRec120)) / fTempPerm104 + fTempPerm105 * fTempPerm469;
			fVec20[0] = fTempPerm482;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fTempPerm483 = fTempPerm482 - fVec20[1];
		}
		float fElse158 = fConst0 * fTempPerm483;
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec124[0] = ((std::fabs(fTempPerm483) < 0.5f) ? fElse158 : fRec124[1]);
		}
		if ((iControl[58])) {
			fTempPerm484 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec124[0])))));
			fTempPerm485 = 1.0f - fTempPerm484;
		}
		if ((iControl[58] | iControl[51])) {
			fTempPerm486 = std::floor(fTempPerm482);
			fTempPerm487 = fTempPerm482 - fTempPerm486;
			fVec21[0] = fTempPerm487;
			iTempPerm488 = fTempPerm487 < 0.5f;
			iVec22[0] = iTempPerm488;
		}
		if ((iControl[58])) {
			iTempPerm489 = (iVec22[1] <= 0) & (iTempPerm488 > 0);
			fRec129[0] = fRec129[1] * float(1 - iTempPerm489) + 4.65661287e-10f * fTemp41 * float(iTempPerm489);
			fTempPerm490 = fTempPerm484 + 1.0f;
			fRec128[0] = 0.0f - (fTempPerm485 * fRec128[1] - (fRec129[0] + fRec129[1])) / fTempPerm490;
			fRec127[0] = 0.0f - (fTempPerm485 * fRec127[1] - (fRec128[0] + fRec128[1])) / fTempPerm490;
			fRec126[0] = 0.0f - (fTempPerm485 * fRec126[1] - (fRec127[0] + fRec127[1])) / fTempPerm490;
			fRec125[0] = 0.0f - (fTempPerm485 * fRec125[1] - (fRec126[0] + fRec126[1])) / fTempPerm490;
			fRec123[0] = 0.0f - (fRec123[1] * fTempPerm485 - (fRec125[0] + fRec125[1])) / fTempPerm490;
			fTempPerm491 = std::sin(6.28318548f * fTempPerm482) * (fTempPerm453 * (fRec123[0] + -1.0f) + 1.0f);
			fTempPerm492 = fTempPerm462 + fTempPerm463 * fTempPerm464 + fTempPerm465 * (fTempPerm491 - (fTempPerm462 + fTempPerm463 * (fTempPerm464 - fRec123[0] - fTempPerm491)));
		}
		if ((iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
			fTempPerm493 = fTempPerm451 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec107[0] - fConst7))));
		}
		if ((iControl[57])) {
			fTempPerm494 = 0.25f * fTempPerm493;
			fTempPerm495 = std::floor(fTempPerm445 + 0.75f - fTempPerm494);
			fTempPerm496 = 0.75f - (fTempPerm494 + fTempPerm495);
		}
		if ((iControl[57] | (iControl[55] | iControl[53]))) {
			fTempPerm497 = 1.0f - fTempPerm493;
		}
		if ((iControl[57] | iControl[53])) {
			fTempPerm498 = 0.5f * fTempPerm497;
		}
		if ((iControl[57])) {
			fTempPerm499 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm498));
			fTempPerm500 = 0.5f - fTempPerm499;
		}
		if ((iControl[57] | iControl[54])) {
			fTempPerm501 = fTempPerm493 + 1.0f;
		}
		if ((iControl[57])) {
			fTempPerm502 = std::cos(6.28318548f * (fTempPerm445 + std::min<float>(((fTempPerm445 + fTempPerm496) * fTempPerm500) / fTempPerm499, (fTempPerm500 * ((fTempPerm495 + 0.25f * fTempPerm501) - fTempPerm445)) / (1.0f - fTempPerm499)) + fTempPerm496));
		}
		if ((iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
			fTempPerm503 = fTempPerm451 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec124[0] - fConst7))));
		}
		if ((iControl[57])) {
			fTempPerm504 = 0.25f * fTempPerm503;
			fTempPerm505 = std::floor(fTempPerm482 + 0.75f - fTempPerm504);
			fTempPerm506 = 0.75f - (fTempPerm504 + fTempPerm505);
		}
		if ((iControl[57] | (iControl[55] | iControl[53]))) {
			fTempPerm507 = 1.0f - fTempPerm503;
		}
		if ((iControl[57] | iControl[53])) {
			fTempPerm508 = 0.5f * fTempPerm507;
		}
		if ((iControl[57])) {
			fTempPerm509 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm508));
			fTempPerm510 = 0.5f - fTempPerm509;
		}
		if ((iControl[57] | iControl[54])) {
			fTempPerm511 = fTempPerm503 + 1.0f;
		}
		if ((iControl[57])) {
			fTempPerm512 = fTempPerm502 + fTempPerm465 * (std::cos(6.28318548f * (fTempPerm482 + std::min<float>(((fTempPerm482 + fTempPerm506) * fTempPerm510) / fTempPerm509, (fTempPerm510 * ((fTempPerm505 + 0.25f * fTempPerm511) - fTempPerm482)) / (1.0f - fTempPerm509)) + fTempPerm506)) - fTempPerm502);
		}
		if ((iControl[56])) {
			fTempPerm513 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm493));
			fTempPerm514 = 1.0f - fTempPerm513;
			fTempPerm515 = 0.25f * fTempPerm514;
			fTempPerm516 = fTempPerm445 - (fTempPerm515 + std::floor(fTempPerm445 - fTempPerm515));
			fTempPerm517 = 2.0f * fTempPerm516;
			fTempPerm518 = std::floor(fTempPerm517 + 1.0f);
			fTempPerm519 = std::cos(3.14159274f * (float(fTempPerm516 >= 0.5f) + fTempPerm517 + 1.0f - (fTempPerm518 + std::min<float>(fTempPerm517 + 1.0f - fTempPerm518, (fTempPerm513 * (fTempPerm518 - fTempPerm517)) / fTempPerm514))));
			fTempPerm520 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm503));
			fTempPerm521 = 1.0f - fTempPerm520;
			fTempPerm522 = 0.25f * fTempPerm521;
			fTempPerm523 = fTempPerm482 - (fTempPerm522 + std::floor(fTempPerm482 - fTempPerm522));
			fTempPerm524 = 2.0f * fTempPerm523;
			fTempPerm525 = std::floor(fTempPerm524 + 1.0f);
			fTempPerm526 = fTempPerm519 + fTempPerm465 * (std::cos(3.14159274f * (float(fTempPerm523 >= 0.5f) + fTempPerm524 + 1.0f - (fTempPerm525 + std::min<float>(fTempPerm524 + 1.0f - fTempPerm525, (fTempPerm520 * (fTempPerm525 - fTempPerm524)) / fTempPerm521)))) - fTempPerm519);
		}
		if ((iControl[55])) {
			fTempPerm527 = 0.25f * fTempPerm497;
			fTempPerm528 = fTempPerm527 + std::floor(fTempPerm445 - fTempPerm527);
		}
		if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
			fTempPerm529 = 1.0f - fTempPerm445;
		}
		if ((iControl[55])) {
			fTempPerm530 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm493));
			fTempPerm531 = std::cos(6.28318548f * (fTempPerm445 - (fTempPerm528 + std::min<float>(fTempPerm445 - fTempPerm528, ((fTempPerm528 + fTempPerm529) * fTempPerm530) / (1.0f - fTempPerm530)))));
			fTempPerm532 = 0.25f * fTempPerm507;
			fTempPerm533 = fTempPerm532 + std::floor(fTempPerm482 - fTempPerm532);
		}
		if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
			fTempPerm534 = 1.0f - fTempPerm482;
		}
		if ((iControl[55])) {
			fTempPerm535 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm503));
			fTempPerm536 = fTempPerm531 + fTempPerm465 * (std::cos(6.28318548f * (fTempPerm482 - (fTempPerm533 + std::min<float>(fTempPerm482 - fTempPerm533, ((fTempPerm533 + fTempPerm534) * fTempPerm535) / (1.0f - fTempPerm535))))) - fTempPerm531);
		}
		if ((iControl[54])) {
			fTempPerm537 = 0.125f * fTempPerm501;
			fTempPerm538 = fTempPerm537 + std::floor(fTempPerm445 - fTempPerm537);
			fTempPerm539 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm493));
			fTempPerm540 = 0.49000001f * fTempPerm539;
			fTempPerm541 = std::cos(12.566371f * ((fTempPerm445 + std::min<float>(0.49000001f * ((fTempPerm445 - fTempPerm538) * fTempPerm539) / (0.5f - fTempPerm540), 0.49000001f * (fTempPerm539 * (fTempPerm538 + fTempPerm529)) / (fTempPerm540 + 0.5f))) - fTempPerm538));
			fTempPerm542 = 0.125f * fTempPerm511;
			fTempPerm543 = fTempPerm542 + std::floor(fTempPerm482 - fTempPerm542);
			fTempPerm544 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm503));
			fTempPerm545 = 0.49000001f * fTempPerm544;
			fTempPerm546 = fTempPerm541 + fTempPerm465 * (std::cos(12.566371f * ((fTempPerm482 + std::min<float>(0.49000001f * ((fTempPerm482 - fTempPerm543) * fTempPerm544) / (0.5f - fTempPerm545), 0.49000001f * (fTempPerm544 * (fTempPerm543 + fTempPerm534)) / (fTempPerm545 + 0.5f))) - fTempPerm543)) - fTempPerm541);
		}
		if ((iControl[53])) {
			fTempPerm547 = 0.25f * (std::min<float>(0.975000024f, fTempPerm493) + 1.0f);
			fTempPerm548 = fTempPerm547 + std::floor(fTempPerm445 - fTempPerm547);
			fTempPerm549 = fTempPerm445 - fTempPerm548;
		}
		float fThen159 = 0.5f * ((fTempPerm445 + -0.5f - fTempPerm548) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm498)) + 1.0f);
		if ((iControl[53])) {
			fTempPerm550 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm549 < 0.5f) ? fTempPerm549 : fThen159)));
			fTempPerm551 = 0.25f * (std::min<float>(0.975000024f, fTempPerm503) + 1.0f);
			fTempPerm552 = fTempPerm551 + std::floor(fTempPerm482 - fTempPerm551);
			fTempPerm553 = fTempPerm482 - fTempPerm552;
		}
		float fThen160 = 0.5f * ((fTempPerm482 + -0.5f - fTempPerm552) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm508)) + 1.0f);
		if ((iControl[53])) {
			fTempPerm554 = fTempPerm550 + fTempPerm465 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm553 < 0.5f) ? fTempPerm553 : fThen160))) - fTempPerm550);
		}
		if ((iControl[52] | iControl[50])) {
			fTempPerm555 = fTempPerm445 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec107[0] * fControl[833] * fTempPerm450)) / fRec107[0]);
		}
		if ((iControl[52])) {
			fTempPerm556 = (0.0f - fTempPerm529) * (1.0f - std::cos(6.28318548f * (fTempPerm555 + 1.0f - std::floor(fTempPerm555 + 1.0f))));
		}
		if ((iControl[52] | iControl[50])) {
			fTempPerm557 = fTempPerm482 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec124[0] * fControl[833] * fTempPerm450)) / fRec124[0]);
		}
		if ((iControl[52])) {
			fTempPerm558 = fTempPerm556 + fTempPerm465 * ((0.0f - fTempPerm534) * (1.0f - std::cos(6.28318548f * (fTempPerm557 + 1.0f - std::floor(fTempPerm557 + 1.0f)))) - fTempPerm556) + 1.0f;
		}
		float fThen161 = 2.0f * (1.0f - fTempPerm458);
		float fElse161 = 2.0f * fTempPerm458;
		if ((iControl[51])) {
			fTempPerm559 = fTempPerm445 - (fTempPerm457 + fVec18[1]);
		}
		float fElse162 = fConst0 * fTempPerm559;
		if ((iControl[51])) {
			fRec130[0] = ((std::fabs(fTempPerm559) < 0.5f) ? fElse162 : fRec130[1]);
			fTempPerm560 = fTempPerm458 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec130[0] * fControl[833] * fTempPerm450)) / fRec130[0]);
			fTempPerm561 = ((iTempPerm459) ? fElse161 : fThen161) * (std::cos(6.28318548f * (fTempPerm560 + 1.0f - std::floor(fTempPerm560 + 1.0f))) + 1.0f);
		}
		float fThen163 = 2.0f * (1.0f - fTempPerm487);
		float fElse163 = 2.0f * fTempPerm487;
		if ((iControl[51])) {
			fTempPerm562 = fTempPerm482 - (fTempPerm486 + fVec21[1]);
		}
		float fElse164 = fConst0 * fTempPerm562;
		if ((iControl[51])) {
			fRec131[0] = ((std::fabs(fTempPerm562) < 0.5f) ? fElse164 : fRec131[1]);
			fTempPerm563 = fTempPerm487 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec131[0] * fControl[833] * fTempPerm450)) / fRec131[0]);
			fTempPerm564 = fTempPerm561 + fTempPerm465 * (((iTempPerm488) ? fElse163 : fThen163) * (std::cos(6.28318548f * (fTempPerm563 + 1.0f - std::floor(fTempPerm563 + 1.0f))) + 1.0f) - fTempPerm561) + -1.0f;
		}
		if ((iControl[50])) {
			fTempPerm565 = std::min<float>(1.0f, 2.0f * fTempPerm529) * std::sin(6.28318548f * (fTempPerm555 - std::floor(fTempPerm555)));
			fTempPerm566 = fTempPerm565 + fTempPerm465 * (std::min<float>(1.0f, 2.0f * fTempPerm534) * std::sin(6.28318548f * (fTempPerm557 - std::floor(fTempPerm557))) - fTempPerm565);
		}
		fRec4[0] = fControl[311] * fTempPerm492 + fControl[310] * fTempPerm512 + fControl[309] * fTempPerm526 + fControl[308] * fTempPerm536 + fControl[307] * fTempPerm546 + fControl[306] * fTempPerm554 + fControl[305] * fTempPerm558 + fControl[304] * fTempPerm564 + fControl[303] * fTempPerm566;
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm567 = fControl[861] - (fControl[855] + fControl[862] * fTemp46);
			fTempPerm568 = fControl[857] - (fControl[855] + fControl[860] * fTemp46 + fTemp48 * (fTempPerm567 - fControl[863] - (fControl[857] + fControl[864] * fTemp46)));
			fTempPerm569 = fControl[869] - (fControl[854] + fControl[870] * fTemp46);
			fTempPerm570 = fControl[865] - (fControl[854] + fControl[868] * fTemp46 + fTemp48 * (fTempPerm569 - fControl[871] - (fControl[865] + fControl[872] * fTemp46)));
			fTempPerm571 = fRec5[1] * (fControl[856] + fTemp44 * (fTempPerm568 + fTempPerm570) + fControl[873] * fTemp46 + fTemp48 * (fTempPerm567 + fTempPerm569));
			fTempPerm572 = fControl[881] - (fControl[875] + fControl[882] * fTemp46);
			fTempPerm573 = fControl[877] - (fControl[875] + fControl[880] * fTemp46 + fTemp48 * (fTempPerm572 - fControl[883] - (fControl[877] + fControl[884] * fTemp46)));
			fTempPerm574 = fControl[889] - (fControl[874] + fControl[890] * fTemp46);
			fTempPerm575 = fControl[885] - (fControl[874] + fControl[888] * fTemp46 + fTemp48 * (fTempPerm574 - fControl[891] - (fControl[885] + fControl[892] * fTemp46)));
			fTempPerm576 = fRec4[1] * (fControl[876] + fTemp44 * (fTempPerm573 + fTempPerm575) + fControl[893] * fTemp46 + fTemp48 * (fTempPerm572 + fTempPerm574));
			fTempPerm577 = fControl[901] - (fControl[895] + fControl[902] * fTemp46);
			fTempPerm578 = fControl[897] - (fControl[895] + fControl[900] * fTemp46 + fTemp48 * (fTempPerm577 - fControl[903] - (fControl[897] + fControl[904] * fTemp46)));
			fTempPerm579 = fControl[909] - (fControl[894] + fControl[910] * fTemp46);
			fTempPerm580 = fControl[905] - (fControl[894] + fControl[908] * fTemp46 + fTemp48 * (fTempPerm579 - fControl[911] - (fControl[905] + fControl[912] * fTemp46)));
			fTempPerm581 = fRec3[1] * (fControl[896] + fTemp44 * (fTempPerm578 + fTempPerm580) + fControl[913] * fTemp46 + fTemp48 * (fTempPerm577 + fTempPerm579));
			fTempPerm582 = fControl[921] - (fControl[915] + fControl[922] * fTemp46);
			fTempPerm583 = fControl[917] - (fControl[915] + fControl[920] * fTemp46 + fTemp48 * (fTempPerm582 - fControl[923] - (fControl[917] + fControl[924] * fTemp46)));
			fTempPerm584 = fControl[929] - (fControl[914] + fControl[930] * fTemp46);
			fTempPerm585 = fControl[925] - (fControl[914] + fControl[928] * fTemp46 + fTemp48 * (fTempPerm584 - fControl[931] - (fControl[925] + fControl[932] * fTemp46)));
			fTempPerm586 = fControl[916] + fTemp44 * (fTempPerm583 + fTempPerm585) + fControl[933] * fTemp46 + fTemp48 * (fTempPerm582 + fTempPerm584);
			fTempPerm587 = fControl[941] - (fControl[935] + fControl[942] * fTemp46);
			fTempPerm588 = fControl[937] - (fControl[935] + fControl[940] * fTemp46 + fTemp48 * (fTempPerm587 - fControl[943] - (fControl[937] + fControl[944] * fTemp46)));
			fTempPerm589 = fControl[949] - (fControl[934] + fControl[950] * fTemp46);
			fTempPerm590 = fControl[945] - (fControl[934] + fControl[948] * fTemp46 + fTemp48 * (fTempPerm589 - fControl[951] - (fControl[945] + fControl[952] * fTemp46)));
			fTempPerm591 = fControl[936] + fTemp44 * (fTempPerm588 + fTempPerm590) + fControl[953] * fTemp46 + fTemp48 * (fTempPerm587 + fTempPerm589);
			fTempPerm592 = std::floor(fTempPerm591);
			fTempPerm593 = fTempPerm592 + float((fTempPerm591 < 0.0f) & (fTempPerm591 != fTempPerm592));
			fTempPerm594 = fTempPerm54 + 0.00390625f * fTempPerm586 * std::pow(2.0f, 0.0f - fTempPerm593);
			iTempPerm595 = int(fTempPerm593);
			fTempPerm596 = fControl[961] - (fControl[955] + fControl[962] * fTemp46);
			fTempPerm597 = fControl[957] - (fControl[955] + fControl[960] * fTemp46 + fTemp48 * (fTempPerm596 - fControl[963] - (fControl[957] + fControl[964] * fTemp46)));
			fTempPerm598 = fControl[969] - (fControl[954] + fControl[970] * fTemp46);
			fTempPerm599 = fControl[965] - (fControl[954] + fControl[968] * fTemp46 + fTemp48 * (fTempPerm598 - fControl[971] - (fControl[965] + fControl[972] * fTemp46)));
			fTempPerm600 = fRec2[1] * (fControl[956] + fTemp44 * (fTempPerm597 + fTempPerm599) + fControl[973] * fTemp46 + fTemp48 * (fTempPerm596 + fTempPerm598));
			fTempPerm601 = fTempPerm571 + fTempPerm576 + fTempPerm581 + std::fmod(256.0f * (fTempPerm594 - (fTempPerm68 + std::floor(fTempPerm594 - fTempPerm68))) * (float(iTempPerm595 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm595))))) + float(iTempPerm595 == 0) + float((iTempPerm595 > 0) * int(std::pow(2.0f, float(iTempPerm595))))), 1.0f) + fTempPerm600;
		}
		if (((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22)))))))))) {
			fTempPerm602 = fRec132[1] + fTempPerm35 * (fTempPerm601 - fRec133[1]);
			fTempPerm603 = fTempPerm602 / fTempPerm83;
			fRec132[0] = 2.0f * fTempPerm603 - fRec132[1];
			fTempPerm604 = fRec133[1] + (fTempPerm35 * fTempPerm602) / fTempPerm83;
			fRec133[0] = 2.0f * fTempPerm604 - fRec133[1];
			fRec134 = fTempPerm604;
		}
		if (((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))) {
			fTempPerm605 = fTempPerm35 * (fTempPerm601 - fRec137[1]);
			fTempPerm606 = (fTempPerm35 * ((fRec137[1] + (fTempPerm605 + 0.215215757f * fTempPerm135 * fRec135[1]) / fTempPerm90 + fTempPerm92 * fRec136[1]) / fTempPerm93 - fRec135[1])) / fTempPerm90;
			fRec135[0] = fRec135[1] + 2.0f * fTempPerm606;
			fTempPerm607 = fRec135[1] + fTempPerm606;
			fRec136[0] = fRec136[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm607 - fRec136[1])) / fTempPerm90;
			fRec137[0] = fRec137[1] + 2.0f * fTempPerm605 / fTempPerm90;
			fRec138 = fTempPerm607;
		}
		if (((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29)))))))))) {
			fTempPerm608 = fTempPerm601 - (fRec140[1] + fTempPerm82 * fRec141[1]);
			fTempPerm609 = (fTempPerm35 * fTempPerm608) / fTempPerm83;
			fTempPerm610 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec141[1] + fTempPerm609));
			fTempPerm611 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm610);
			fTempPerm612 = fTempPerm35 * fTempPerm610 * fTempPerm611;
			fRec139 = fRec140[1] + fTempPerm612;
			fRec140[0] = fRec140[1] + 2.0f * fTempPerm612;
			fTempPerm613 = fTempPerm610 * fTempPerm611;
			fRec141[0] = fTempPerm609 + fTempPerm613;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm614 = (fTempPerm19 * (fTempPerm21 * fRec134 + fTempPerm87 * fRec138 + fTempPerm97 * fRec139)) / fTempPerm104 + fTempPerm105 * fTempPerm601;
			fVec23[0] = fTempPerm614;
			fTempPerm615 = fControl[982] - (fControl[976] + fControl[983] * fTemp46);
			fTempPerm616 = fControl[978] - (fControl[976] + fControl[981] * fTemp46 + fTemp48 * (fTempPerm615 - fControl[984] - (fControl[978] + fControl[985] * fTemp46)));
			fTempPerm617 = fControl[990] - (fControl[975] + fControl[991] * fTemp46);
			fTempPerm618 = fControl[986] - (fControl[975] + fControl[989] * fTemp46 + fTemp48 * (fTempPerm617 - fControl[992] - (fControl[986] + fControl[993] * fTemp46)));
			fTempPerm619 = fControl[977] + fTemp44 * (fTempPerm616 + fTempPerm618) + fControl[994] * fTemp46 + fTemp48 * (fTempPerm615 + fTempPerm617);
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44])))))) {
			fTempPerm620 = fControl[974] * fTempPerm619;
		}
		if ((iControl[49])) {
			fTempPerm621 = 2.0f * fTempPerm620;
			fTempPerm622 = std::min<float>(1.0f, fTempPerm621);
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fTempPerm623 = fTempPerm614 - fVec23[1];
		}
		float fElse166 = fConst0 * fTempPerm623;
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec143[0] = ((std::fabs(fTempPerm623) < 0.5f) ? fElse166 : fRec143[1]);
		}
		if ((iControl[49])) {
			fTempPerm624 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec143[0])))));
			fTempPerm625 = 1.0f - fTempPerm624;
		}
		if ((iControl[49] | iControl[42])) {
			fTempPerm626 = std::floor(fTempPerm614);
			fTempPerm627 = fTempPerm614 - fTempPerm626;
			fVec24[0] = fTempPerm627;
			iTempPerm628 = fTempPerm627 < 0.5f;
			iVec25[0] = iTempPerm628;
		}
		if ((iControl[49])) {
			iTempPerm629 = (iVec25[1] <= 0) & (iTempPerm628 > 0);
			fRec148[0] = fRec148[1] * float(1 - iTempPerm629) + 4.65661287e-10f * fTemp41 * float(iTempPerm629);
			fTempPerm630 = fTempPerm624 + 1.0f;
			fRec147[0] = 0.0f - (fTempPerm625 * fRec147[1] - (fRec148[0] + fRec148[1])) / fTempPerm630;
			fRec146[0] = 0.0f - (fTempPerm625 * fRec146[1] - (fRec147[0] + fRec147[1])) / fTempPerm630;
			fRec145[0] = 0.0f - (fTempPerm625 * fRec145[1] - (fRec146[0] + fRec146[1])) / fTempPerm630;
			fRec144[0] = 0.0f - (fTempPerm625 * fRec144[1] - (fRec145[0] + fRec145[1])) / fTempPerm630;
			fRec142[0] = 0.0f - (fRec142[1] * fTempPerm625 - (fRec144[0] + fRec144[1])) / fTempPerm630;
			fTempPerm631 = std::sin(6.28318548f * fTempPerm614) * (fTempPerm622 * (fRec142[0] + -1.0f) + 1.0f);
			fTempPerm632 = std::max<float>(1.0f, fTempPerm621) + -1.0f;
			fTempPerm633 = fRec142[0] - fTempPerm631;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm634 = std::fmod(std::fabs(fTempPerm591), 1.0f);
			fTempPerm635 = fTempPerm592 + float(fTempPerm591 > 0.0f);
			fTempPerm636 = fTempPerm54 + 0.00390625f * fTempPerm586 * std::pow(2.0f, 0.0f - fTempPerm635);
			iTempPerm637 = int(fTempPerm635);
			fTempPerm638 = fTempPerm600 + fTempPerm581 + fTempPerm576 + fTempPerm571 + std::fmod(256.0f * (fTempPerm636 - (fTempPerm68 + std::floor(fTempPerm636 - fTempPerm68))) * (float(iTempPerm637 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm637))))) + float(iTempPerm637 == 0) + float((iTempPerm637 > 0) * int(std::pow(2.0f, float(iTempPerm637))))), 1.0f);
		}
		if (((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22)))))))))) {
			fTempPerm639 = fRec149[1] + fTempPerm35 * (fTempPerm638 - fRec150[1]);
			fTempPerm640 = fTempPerm639 / fTempPerm83;
			fRec149[0] = 2.0f * fTempPerm640 - fRec149[1];
			fTempPerm641 = fRec150[1] + (fTempPerm35 * fTempPerm639) / fTempPerm83;
			fRec150[0] = 2.0f * fTempPerm641 - fRec150[1];
			fRec151 = fTempPerm641;
		}
		if (((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))) {
			fTempPerm642 = fTempPerm35 * (fTempPerm638 - fRec154[1]);
			fTempPerm643 = (fTempPerm35 * ((fRec154[1] + (fTempPerm642 + 0.215215757f * fTempPerm135 * fRec152[1]) / fTempPerm90 + fTempPerm92 * fRec153[1]) / fTempPerm93 - fRec152[1])) / fTempPerm90;
			fRec152[0] = fRec152[1] + 2.0f * fTempPerm643;
			fTempPerm644 = fRec152[1] + fTempPerm643;
			fRec153[0] = fRec153[1] + 2.0f * (fTempPerm35 * (0.215215757f * fTempPerm89 * fTempPerm644 - fRec153[1])) / fTempPerm90;
			fRec154[0] = fRec154[1] + 2.0f * fTempPerm642 / fTempPerm90;
			fRec155 = fTempPerm644;
		}
		if (((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29)))))))))) {
			fTempPerm645 = fTempPerm638 - (fRec157[1] + fTempPerm82 * fRec158[1]);
			fTempPerm646 = (fTempPerm35 * fTempPerm645) / fTempPerm83;
			fTempPerm647 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec158[1] + fTempPerm646));
			fTempPerm648 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm647);
			fTempPerm649 = fTempPerm35 * fTempPerm647 * fTempPerm648;
			fRec156 = fRec157[1] + fTempPerm649;
			fRec157[0] = fRec157[1] + 2.0f * fTempPerm649;
			fTempPerm650 = fTempPerm647 * fTempPerm648;
			fRec158[0] = fTempPerm646 + fTempPerm650;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm651 = (fTempPerm19 * (fTempPerm21 * fRec151 + fTempPerm87 * fRec155 + fTempPerm97 * fRec156)) / fTempPerm104 + fTempPerm105 * fTempPerm638;
			fVec26[0] = fTempPerm651;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fTempPerm652 = fTempPerm651 - fVec26[1];
		}
		float fElse167 = fConst0 * fTempPerm652;
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec160[0] = ((std::fabs(fTempPerm652) < 0.5f) ? fElse167 : fRec160[1]);
		}
		if ((iControl[49])) {
			fTempPerm653 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec160[0])))));
			fTempPerm654 = 1.0f - fTempPerm653;
		}
		if ((iControl[49] | iControl[42])) {
			fTempPerm655 = std::floor(fTempPerm651);
			fTempPerm656 = fTempPerm651 - fTempPerm655;
			fVec27[0] = fTempPerm656;
			iTempPerm657 = fTempPerm656 < 0.5f;
			iVec28[0] = iTempPerm657;
		}
		if ((iControl[49])) {
			iTempPerm658 = (iVec28[1] <= 0) & (iTempPerm657 > 0);
			fRec165[0] = fRec165[1] * float(1 - iTempPerm658) + 4.65661287e-10f * fTemp41 * float(iTempPerm658);
			fTempPerm659 = fTempPerm653 + 1.0f;
			fRec164[0] = 0.0f - (fTempPerm654 * fRec164[1] - (fRec165[0] + fRec165[1])) / fTempPerm659;
			fRec163[0] = 0.0f - (fTempPerm654 * fRec163[1] - (fRec164[0] + fRec164[1])) / fTempPerm659;
			fRec162[0] = 0.0f - (fTempPerm654 * fRec162[1] - (fRec163[0] + fRec163[1])) / fTempPerm659;
			fRec161[0] = 0.0f - (fTempPerm654 * fRec161[1] - (fRec162[0] + fRec162[1])) / fTempPerm659;
			fRec159[0] = 0.0f - (fRec159[1] * fTempPerm654 - (fRec161[0] + fRec161[1])) / fTempPerm659;
			fTempPerm660 = std::sin(6.28318548f * fTempPerm651) * (fTempPerm622 * (fRec159[0] + -1.0f) + 1.0f);
			fTempPerm661 = fTempPerm631 + fTempPerm632 * fTempPerm633 + fTempPerm634 * (fTempPerm660 - (fTempPerm631 + fTempPerm632 * (fTempPerm633 - fRec159[0] - fTempPerm660)));
		}
		if ((iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
			fTempPerm662 = fTempPerm620 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec143[0] - fConst7))));
		}
		if ((iControl[48])) {
			fTempPerm663 = 0.25f * fTempPerm662;
			fTempPerm664 = std::floor(fTempPerm614 + 0.75f - fTempPerm663);
			fTempPerm665 = 0.75f - (fTempPerm663 + fTempPerm664);
		}
		if ((iControl[48] | (iControl[46] | iControl[44]))) {
			fTempPerm666 = 1.0f - fTempPerm662;
		}
		if ((iControl[48] | iControl[44])) {
			fTempPerm667 = 0.5f * fTempPerm666;
		}
		if ((iControl[48])) {
			fTempPerm668 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm667));
			fTempPerm669 = 0.5f - fTempPerm668;
		}
		if ((iControl[48] | iControl[45])) {
			fTempPerm670 = fTempPerm662 + 1.0f;
		}
		if ((iControl[48])) {
			fTempPerm671 = std::cos(6.28318548f * (fTempPerm614 + std::min<float>(((fTempPerm614 + fTempPerm665) * fTempPerm669) / fTempPerm668, (fTempPerm669 * ((fTempPerm664 + 0.25f * fTempPerm670) - fTempPerm614)) / (1.0f - fTempPerm668)) + fTempPerm665));
		}
		if ((iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
			fTempPerm672 = fTempPerm620 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec160[0] - fConst7))));
		}
		if ((iControl[48])) {
			fTempPerm673 = 0.25f * fTempPerm672;
			fTempPerm674 = std::floor(fTempPerm651 + 0.75f - fTempPerm673);
			fTempPerm675 = 0.75f - (fTempPerm673 + fTempPerm674);
		}
		if ((iControl[48] | (iControl[46] | iControl[44]))) {
			fTempPerm676 = 1.0f - fTempPerm672;
		}
		if ((iControl[48] | iControl[44])) {
			fTempPerm677 = 0.5f * fTempPerm676;
		}
		if ((iControl[48])) {
			fTempPerm678 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm677));
			fTempPerm679 = 0.5f - fTempPerm678;
		}
		if ((iControl[48] | iControl[45])) {
			fTempPerm680 = fTempPerm672 + 1.0f;
		}
		if ((iControl[48])) {
			fTempPerm681 = fTempPerm671 + fTempPerm634 * (std::cos(6.28318548f * (fTempPerm651 + std::min<float>(((fTempPerm651 + fTempPerm675) * fTempPerm679) / fTempPerm678, (fTempPerm679 * ((fTempPerm674 + 0.25f * fTempPerm680) - fTempPerm651)) / (1.0f - fTempPerm678)) + fTempPerm675)) - fTempPerm671);
		}
		if ((iControl[47])) {
			fTempPerm682 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm662));
			fTempPerm683 = 1.0f - fTempPerm682;
			fTempPerm684 = 0.25f * fTempPerm683;
			fTempPerm685 = fTempPerm614 - (fTempPerm684 + std::floor(fTempPerm614 - fTempPerm684));
			fTempPerm686 = 2.0f * fTempPerm685;
			fTempPerm687 = std::floor(fTempPerm686 + 1.0f);
			fTempPerm688 = std::cos(3.14159274f * (float(fTempPerm685 >= 0.5f) + fTempPerm686 + 1.0f - (fTempPerm687 + std::min<float>(fTempPerm686 + 1.0f - fTempPerm687, (fTempPerm682 * (fTempPerm687 - fTempPerm686)) / fTempPerm683))));
			fTempPerm689 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm672));
			fTempPerm690 = 1.0f - fTempPerm689;
			fTempPerm691 = 0.25f * fTempPerm690;
			fTempPerm692 = fTempPerm651 - (fTempPerm691 + std::floor(fTempPerm651 - fTempPerm691));
			fTempPerm693 = 2.0f * fTempPerm692;
			fTempPerm694 = std::floor(fTempPerm693 + 1.0f);
			fTempPerm695 = fTempPerm688 + fTempPerm634 * (std::cos(3.14159274f * (float(fTempPerm692 >= 0.5f) + fTempPerm693 + 1.0f - (fTempPerm694 + std::min<float>(fTempPerm693 + 1.0f - fTempPerm694, (fTempPerm689 * (fTempPerm694 - fTempPerm693)) / fTempPerm690)))) - fTempPerm688);
		}
		if ((iControl[46])) {
			fTempPerm696 = 0.25f * fTempPerm666;
			fTempPerm697 = fTempPerm696 + std::floor(fTempPerm614 - fTempPerm696);
		}
		if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
			fTempPerm698 = 1.0f - fTempPerm614;
		}
		if ((iControl[46])) {
			fTempPerm699 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm662));
			fTempPerm700 = std::cos(6.28318548f * (fTempPerm614 - (fTempPerm697 + std::min<float>(fTempPerm614 - fTempPerm697, ((fTempPerm697 + fTempPerm698) * fTempPerm699) / (1.0f - fTempPerm699)))));
			fTempPerm701 = 0.25f * fTempPerm676;
			fTempPerm702 = fTempPerm701 + std::floor(fTempPerm651 - fTempPerm701);
		}
		if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
			fTempPerm703 = 1.0f - fTempPerm651;
		}
		if ((iControl[46])) {
			fTempPerm704 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm672));
			fTempPerm705 = fTempPerm700 + fTempPerm634 * (std::cos(6.28318548f * (fTempPerm651 - (fTempPerm702 + std::min<float>(fTempPerm651 - fTempPerm702, ((fTempPerm702 + fTempPerm703) * fTempPerm704) / (1.0f - fTempPerm704))))) - fTempPerm700);
		}
		if ((iControl[45])) {
			fTempPerm706 = 0.125f * fTempPerm670;
			fTempPerm707 = fTempPerm706 + std::floor(fTempPerm614 - fTempPerm706);
			fTempPerm708 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm662));
			fTempPerm709 = 0.49000001f * fTempPerm708;
			fTempPerm710 = std::cos(12.566371f * ((fTempPerm614 + std::min<float>(0.49000001f * ((fTempPerm614 - fTempPerm707) * fTempPerm708) / (0.5f - fTempPerm709), 0.49000001f * (fTempPerm708 * (fTempPerm707 + fTempPerm698)) / (fTempPerm709 + 0.5f))) - fTempPerm707));
			fTempPerm711 = 0.125f * fTempPerm680;
			fTempPerm712 = fTempPerm711 + std::floor(fTempPerm651 - fTempPerm711);
			fTempPerm713 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm672));
			fTempPerm714 = 0.49000001f * fTempPerm713;
			fTempPerm715 = fTempPerm710 + fTempPerm634 * (std::cos(12.566371f * ((fTempPerm651 + std::min<float>(0.49000001f * ((fTempPerm651 - fTempPerm712) * fTempPerm713) / (0.5f - fTempPerm714), 0.49000001f * (fTempPerm713 * (fTempPerm712 + fTempPerm703)) / (fTempPerm714 + 0.5f))) - fTempPerm712)) - fTempPerm710);
		}
		if ((iControl[44])) {
			fTempPerm716 = 0.25f * (std::min<float>(0.975000024f, fTempPerm662) + 1.0f);
			fTempPerm717 = fTempPerm716 + std::floor(fTempPerm614 - fTempPerm716);
			fTempPerm718 = fTempPerm614 - fTempPerm717;
		}
		float fThen168 = 0.5f * ((fTempPerm614 + -0.5f - fTempPerm717) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm667)) + 1.0f);
		if ((iControl[44])) {
			fTempPerm719 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm718 < 0.5f) ? fTempPerm718 : fThen168)));
			fTempPerm720 = 0.25f * (std::min<float>(0.975000024f, fTempPerm672) + 1.0f);
			fTempPerm721 = fTempPerm720 + std::floor(fTempPerm651 - fTempPerm720);
			fTempPerm722 = fTempPerm651 - fTempPerm721;
		}
		float fThen169 = 0.5f * ((fTempPerm651 + -0.5f - fTempPerm721) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm677)) + 1.0f);
		if ((iControl[44])) {
			fTempPerm723 = fTempPerm719 + fTempPerm634 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm722 < 0.5f) ? fTempPerm722 : fThen169))) - fTempPerm719);
		}
		if ((iControl[43] | iControl[41])) {
			fTempPerm724 = fTempPerm614 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec143[0] * fControl[974] * fTempPerm619)) / fRec143[0]);
		}
		if ((iControl[43])) {
			fTempPerm725 = (0.0f - fTempPerm698) * (1.0f - std::cos(6.28318548f * (fTempPerm724 + 1.0f - std::floor(fTempPerm724 + 1.0f))));
		}
		if ((iControl[43] | iControl[41])) {
			fTempPerm726 = fTempPerm651 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec160[0] * fControl[974] * fTempPerm619)) / fRec160[0]);
		}
		if ((iControl[43])) {
			fTempPerm727 = fTempPerm725 + fTempPerm634 * ((0.0f - fTempPerm703) * (1.0f - std::cos(6.28318548f * (fTempPerm726 + 1.0f - std::floor(fTempPerm726 + 1.0f)))) - fTempPerm725) + 1.0f;
		}
		float fThen170 = 2.0f * (1.0f - fTempPerm627);
		float fElse170 = 2.0f * fTempPerm627;
		if ((iControl[42])) {
			fTempPerm728 = fTempPerm614 - (fTempPerm626 + fVec24[1]);
		}
		float fElse171 = fConst0 * fTempPerm728;
		if ((iControl[42])) {
			fRec166[0] = ((std::fabs(fTempPerm728) < 0.5f) ? fElse171 : fRec166[1]);
			fTempPerm729 = fTempPerm627 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec166[0] * fControl[974] * fTempPerm619)) / fRec166[0]);
			fTempPerm730 = ((iTempPerm628) ? fElse170 : fThen170) * (std::cos(6.28318548f * (fTempPerm729 + 1.0f - std::floor(fTempPerm729 + 1.0f))) + 1.0f);
		}
		float fThen172 = 2.0f * (1.0f - fTempPerm656);
		float fElse172 = 2.0f * fTempPerm656;
		if ((iControl[42])) {
			fTempPerm731 = fTempPerm651 - (fTempPerm655 + fVec27[1]);
		}
		float fElse173 = fConst0 * fTempPerm731;
		if ((iControl[42])) {
			fRec167[0] = ((std::fabs(fTempPerm731) < 0.5f) ? fElse173 : fRec167[1]);
			fTempPerm732 = fTempPerm656 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec167[0] * fControl[974] * fTempPerm619)) / fRec167[0]);
			fTempPerm733 = fTempPerm730 + fTempPerm634 * (((iTempPerm657) ? fElse172 : fThen172) * (std::cos(6.28318548f * (fTempPerm732 + 1.0f - std::floor(fTempPerm732 + 1.0f))) + 1.0f) - fTempPerm730) + -1.0f;
		}
		if ((iControl[41])) {
			fTempPerm734 = std::min<float>(1.0f, 2.0f * fTempPerm698) * std::sin(6.28318548f * (fTempPerm724 - std::floor(fTempPerm724)));
			fTempPerm735 = fTempPerm734 + fTempPerm634 * (std::min<float>(1.0f, 2.0f * fTempPerm703) * std::sin(6.28318548f * (fTempPerm726 - std::floor(fTempPerm726))) - fTempPerm734);
		}
		fRec5[0] = fControl[300] * fTempPerm661 + fControl[299] * fTempPerm681 + fControl[298] * fTempPerm695 + fControl[297] * fTempPerm705 + fControl[296] * fTempPerm715 + fControl[295] * fTempPerm723 + fControl[294] * fTempPerm727 + fControl[293] * fTempPerm733 + fControl[292] * fTempPerm735;
		float fTemp785 = fRec3[0] - fRec2[0];
		float fTemp786 = fControl[1002] - (fControl[996] + fControl[1003] * fTemp46);
		float fTemp787 = fControl[998] - (fControl[996] + fControl[1001] * fTemp46 + fTemp48 * (fTemp786 - fControl[1004] - (fControl[998] + fControl[1005] * fTemp46)));
		float fTemp788 = fControl[1010] - (fControl[995] + fControl[1011] * fTemp46);
		float fTemp789 = fControl[1006] - (fControl[995] + fControl[1009] * fTemp46 + fTemp48 * (fTemp788 - fControl[1012] - (fControl[1006] + fControl[1013] * fTemp46)));
		float fTemp790 = std::min<float>(1.0f, std::max<float>(0.0f, fControl[997] + fTemp44 * (fTemp787 + fTemp789) + fControl[1014] * fTemp46 + fTemp48 * (fTemp786 + fTemp788)));
		float fTemp791 = fControl[1022] - (fControl[1016] + fControl[1023] * fTemp46);
		float fTemp792 = fControl[1018] - (fControl[1016] + fControl[1021] * fTemp46 + fTemp48 * (fTemp791 - fControl[1024] - (fControl[1018] + fControl[1025] * fTemp46)));
		float fTemp793 = fControl[1030] - (fControl[1015] + fControl[1031] * fTemp46);
		float fTemp794 = fControl[1026] - (fControl[1015] + fControl[1029] * fTemp46 + fTemp48 * (fTemp793 - fControl[1032] - (fControl[1026] + fControl[1033] * fTemp46)));
		outputs[0] = FAUSTFLOAT(fTemp6 * (fRec2[0] + fTemp785 * fTemp790 + std::min<float>(1.0f, std::max<float>(0.0f, fControl[1017] + fTemp44 * (fTemp792 + fTemp794) + fControl[1034] * fTemp46 + fTemp48 * (fTemp791 + fTemp793))) * (fRec4[0] - (fRec2[0] + fTemp790 * (fTemp785 - fRec5[0] - fRec4[0])))));
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm736 = std::fabs(fTempPerm27);
			fTempPerm737 = std::fabs(fTempPerm25);
			fTempPerm738 = std::fabs(fTempPerm23);
			fTempPerm739 = fTempPerm736 + fTempPerm737 + fTempPerm738;
			fTempPerm740 = std::min<float>(1.0f, fTempPerm739);
			fTempPerm741 = std::max<float>(2.82118644e-37f, fTempPerm736);
		}
		float fElse174 = 0.0f - fTempPerm741;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm742 = ((fTempPerm27 < 0.0f) ? fElse174 : fTempPerm741);
		}
		if (((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm743 = std::tan(fConst2 * std::min<float>(fConst4, std::max<float>(0.0f, 440.0f * std::pow(2.0f, 0.0833333358f * (127.0f * std::min<float>(1.0f, std::max<float>(0.0f, fControl[383] + (fTemp44 * (fTempPerm32 - fTempPerm34) + fControl[1035] * fTemp46 + fTemp48 * (fTempPerm31 - fTempPerm33)) - fControl[382])) + -49.0f)))));
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm744 = fRec171[1] * (fControl[406] + (fTemp44 * (fTempPerm37 - fTempPerm39) + fControl[1036] * fTemp46 + fTemp48 * (fTempPerm36 - fTempPerm38)) - fControl[405]);
			fTempPerm745 = fRec170[1] * (fControl[426] + (fTemp44 * (fTempPerm42 - fTempPerm44) + fControl[1037] * fTemp46 + fTemp48 * (fTempPerm41 - fTempPerm43)) - fControl[425]);
			fTempPerm746 = fRec169[1] * (fControl[446] + (fTemp44 * (fTempPerm47 - fTempPerm49) + fControl[1038] * fTemp46 + fTemp48 * (fTempPerm46 - fTempPerm48)) - fControl[445]);
			fTempPerm747 = fControl[472] + (fTemp44 * (fTempPerm56 - fTempPerm58) + fControl[1039] * fTemp46 + fTemp48 * (fTempPerm55 - fTempPerm57)) - fControl[471];
			fTempPerm748 = fControl[492] + (fTemp44 * (fTempPerm61 - fTempPerm63) + fControl[1040] * fTemp46 + fTemp48 * (fTempPerm60 - fTempPerm62)) - fControl[491];
			fTempPerm749 = std::floor(fTempPerm748);
			fTempPerm750 = fTempPerm749 + float((fTempPerm748 < 0.0f) & (fTempPerm748 != fTempPerm749));
			fTempPerm751 = fTempPerm54 + 0.00390625f * fTempPerm747 * std::pow(2.0f, 0.0f - fTempPerm750);
			iTempPerm752 = int(fTempPerm750);
			fTempPerm753 = fRec168[1] * (fControl[512] + (fTemp44 * (fTempPerm71 - fTempPerm73) + fControl[1041] * fTemp46 + fTemp48 * (fTempPerm70 - fTempPerm72)) - fControl[511]);
			fTempPerm754 = fTempPerm744 + fTempPerm745 + fTempPerm746 + std::fmod(256.0f * (fTempPerm751 - (fTempPerm68 + std::floor(fTempPerm751 - fTempPerm68))) * (float(iTempPerm752 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm752))))) + float(iTempPerm752 == 0) + float((iTempPerm752 > 0) * int(std::pow(2.0f, float(iTempPerm752))))), 1.0f) + fTempPerm753;
		}
		if (((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28)))))))))) {
			fTempPerm755 = fRec172[1] + fTempPerm743 * (fTempPerm754 - fRec173[1]);
		}
		if (((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm756 = std::min<float>(10.0f, std::max<float>(0.00999999978f, fControl[532] + (fTemp44 * (fTempPerm78 - fTempPerm80) + fControl[1042] * fTemp46 + fTemp48 * (fTempPerm77 - fTempPerm79)) - fControl[531]));
		}
		if (((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | (iControl[41] & iTempPerm24))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) {
			fTempPerm757 = fTempPerm743 + 1.0f / fTempPerm756;
			fTempPerm758 = fTempPerm743 * fTempPerm757 + 1.0f;
		}
		if (((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28)))))))))) {
			fTempPerm759 = fTempPerm755 / fTempPerm758;
			fRec172[0] = 2.0f * fTempPerm759 - fRec172[1];
			fTempPerm760 = fRec173[1] + (fTempPerm743 * fTempPerm755) / fTempPerm758;
			fRec173[0] = 2.0f * fTempPerm760 - fRec173[1];
			fRec174 = fTempPerm760;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm761 = std::max<float>(2.82118644e-37f, fTempPerm737);
		}
		float fElse175 = 0.0f - fTempPerm761;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm762 = ((fTempPerm25 < 0.0f) ? fElse175 : fTempPerm761);
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26)))))))))) {
			fTempPerm763 = fTempPerm743 * (fTempPerm754 - fRec177[1]);
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | ((iControl[68] & iTempPerm26) | ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | ((iControl[59] & iTempPerm26) | ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | ((iControl[50] & iTempPerm26) | ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))))))))))))))))))))))))))))))) {
			fTempPerm764 = fTempPerm756 + -0.707000017f;
			fTempPerm765 = fTempPerm743 + 1.0f;
			fTempPerm766 = 1.0f - fTempPerm743 / fTempPerm765;
			fTempPerm767 = 0.0f - 1.0f / fTempPerm765;
			fTempPerm768 = 1.0f - 0.215215757f * (fTempPerm743 * fTempPerm764 * fTempPerm766) / fTempPerm765;
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26)))))))))) {
			fTempPerm769 = (fTempPerm743 * ((fRec177[1] + (fTempPerm763 + 0.215215757f * fRec175[1] * fTempPerm764 * fTempPerm766) / fTempPerm765 + fRec176[1] * fTempPerm767) / fTempPerm768 - fRec175[1])) / fTempPerm765;
			fRec175[0] = fRec175[1] + 2.0f * fTempPerm769;
			fTempPerm770 = fRec175[1] + fTempPerm769;
			fRec176[0] = fRec176[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm770 - fRec176[1])) / fTempPerm765;
			fRec177[0] = fRec177[1] + 2.0f * fTempPerm763 / fTempPerm765;
			fRec178 = fTempPerm770;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm771 = std::max<float>(2.82118644e-37f, fTempPerm738);
		}
		float fElse176 = 0.0f - fTempPerm771;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm772 = ((fTempPerm23 < 0.0f) ? fElse176 : fTempPerm771);
		}
		if (((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24)))))))))) {
			fTempPerm773 = fTempPerm754 - (fRec180[1] + fTempPerm757 * fRec181[1]);
			fTempPerm774 = (fTempPerm743 * fTempPerm773) / fTempPerm758;
			fTempPerm775 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec181[1] + fTempPerm774));
			fTempPerm776 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm775);
			fTempPerm777 = fTempPerm743 * fTempPerm775 * fTempPerm776;
			fRec179 = fRec180[1] + fTempPerm777;
			fRec180[0] = fRec180[1] + 2.0f * fTempPerm777;
			fTempPerm778 = fTempPerm775 * fTempPerm776;
			fRec181[0] = fTempPerm774 + fTempPerm778;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fTempPerm779 = std::max<float>(8.46355933e-37f, fTempPerm739);
			fTempPerm780 = 1.0f - fTempPerm740;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm781 = (fTempPerm740 * (fTempPerm742 * fRec174 + fTempPerm762 * fRec178 + fTempPerm772 * fRec179)) / fTempPerm779 + fTempPerm754 * fTempPerm780;
			fVec29[0] = fTempPerm781;
			fTempPerm782 = fControl[553] + (fTemp44 * (fTempPerm108 - fTempPerm110) + fControl[1043] * fTemp46 + fTemp48 * (fTempPerm107 - fTempPerm109)) - fControl[552];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71])))))) {
			fTempPerm783 = fControl[551] * fTempPerm782;
		}
		if ((iControl[3])) {
			fTempPerm784 = 2.0f * fTempPerm783;
			fTempPerm785 = std::min<float>(1.0f, fTempPerm784);
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fTempPerm786 = fTempPerm781 - fVec29[1];
		}
		float fElse177 = fConst0 * fTempPerm786;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec183[0] = ((std::fabs(fTempPerm786) < 0.5f) ? fElse177 : fRec183[1]);
		}
		if ((iControl[3])) {
			fTempPerm787 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec183[0])))));
			fTempPerm788 = 1.0f - fTempPerm787;
		}
		if ((iControl[3] | iControl[69])) {
			fTempPerm789 = std::floor(fTempPerm781);
			fTempPerm790 = fTempPerm781 - fTempPerm789;
			fVec30[0] = fTempPerm790;
			iTempPerm791 = fTempPerm790 < 0.5f;
			iVec31[0] = iTempPerm791;
		}
		if ((iControl[3])) {
			iTempPerm792 = (iVec31[1] <= 0) & (iTempPerm791 > 0);
			fRec188[0] = fRec188[1] * float(1 - iTempPerm792) + 4.65661287e-10f * fTemp41 * float(iTempPerm792);
			fTempPerm793 = fTempPerm787 + 1.0f;
			fRec187[0] = 0.0f - (fTempPerm788 * fRec187[1] - (fRec188[0] + fRec188[1])) / fTempPerm793;
			fRec186[0] = 0.0f - (fTempPerm788 * fRec186[1] - (fRec187[0] + fRec187[1])) / fTempPerm793;
			fRec185[0] = 0.0f - (fTempPerm788 * fRec185[1] - (fRec186[0] + fRec186[1])) / fTempPerm793;
			fRec184[0] = 0.0f - (fTempPerm788 * fRec184[1] - (fRec185[0] + fRec185[1])) / fTempPerm793;
			fRec182[0] = 0.0f - (fRec182[1] * fTempPerm788 - (fRec184[0] + fRec184[1])) / fTempPerm793;
			fTempPerm794 = std::sin(6.28318548f * fTempPerm781) * (fTempPerm785 * (fRec182[0] + -1.0f) + 1.0f);
			fTempPerm795 = std::max<float>(1.0f, fTempPerm784) + -1.0f;
			fTempPerm796 = fRec182[0] - fTempPerm794;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm797 = std::fmod(std::fabs(fTempPerm748), 1.0f);
			fTempPerm798 = fTempPerm749 + float(fTempPerm748 > 0.0f);
			fTempPerm799 = fTempPerm54 + 0.00390625f * fTempPerm747 * std::pow(2.0f, 0.0f - fTempPerm798);
			iTempPerm800 = int(fTempPerm798);
			fTempPerm801 = fTempPerm753 + fTempPerm746 + fTempPerm745 + fTempPerm744 + std::fmod(256.0f * (fTempPerm799 - (fTempPerm68 + std::floor(fTempPerm799 - fTempPerm68))) * (float(iTempPerm800 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm800))))) + float(iTempPerm800 == 0) + float((iTempPerm800 > 0) * int(std::pow(2.0f, float(iTempPerm800))))), 1.0f);
		}
		if (((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28)))))))))) {
			fTempPerm802 = fRec189[1] + fTempPerm743 * (fTempPerm801 - fRec190[1]);
			fTempPerm803 = fTempPerm802 / fTempPerm758;
			fRec189[0] = 2.0f * fTempPerm803 - fRec189[1];
			fTempPerm804 = fRec190[1] + (fTempPerm743 * fTempPerm802) / fTempPerm758;
			fRec190[0] = 2.0f * fTempPerm804 - fRec190[1];
			fRec191 = fTempPerm804;
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26)))))))))) {
			fTempPerm805 = fTempPerm743 * (fTempPerm801 - fRec194[1]);
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | ((iControl[68] & iTempPerm26) | ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | ((iControl[59] & iTempPerm26) | ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | ((iControl[50] & iTempPerm26) | ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))))))))))))))))))))))))))))))) {
			fTempPerm806 = fTempPerm764 * fTempPerm766;
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26)))))))))) {
			fTempPerm807 = (fTempPerm743 * ((fRec194[1] + (fTempPerm805 + 0.215215757f * fTempPerm806 * fRec192[1]) / fTempPerm765 + fTempPerm767 * fRec193[1]) / fTempPerm768 - fRec192[1])) / fTempPerm765;
			fRec192[0] = fRec192[1] + 2.0f * fTempPerm807;
			fTempPerm808 = fRec192[1] + fTempPerm807;
			fRec193[0] = fRec193[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm808 - fRec193[1])) / fTempPerm765;
			fRec194[0] = fRec194[1] + 2.0f * fTempPerm805 / fTempPerm765;
			fRec195 = fTempPerm808;
		}
		if (((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24)))))))))) {
			fTempPerm809 = fTempPerm801 - (fRec197[1] + fTempPerm757 * fRec198[1]);
			fTempPerm810 = (fTempPerm743 * fTempPerm809) / fTempPerm758;
			fTempPerm811 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec198[1] + fTempPerm810));
			fTempPerm812 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm811);
			fTempPerm813 = fTempPerm743 * fTempPerm811 * fTempPerm812;
			fRec196 = fRec197[1] + fTempPerm813;
			fRec197[0] = fRec197[1] + 2.0f * fTempPerm813;
			fTempPerm814 = fTempPerm811 * fTempPerm812;
			fRec198[0] = fTempPerm810 + fTempPerm814;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fTempPerm815 = (fTempPerm740 * (fTempPerm742 * fRec191 + fTempPerm762 * fRec195 + fTempPerm772 * fRec196)) / fTempPerm779 + fTempPerm780 * fTempPerm801;
			fVec32[0] = fTempPerm815;
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fTempPerm816 = fTempPerm815 - fVec32[1];
		}
		float fElse178 = fConst0 * fTempPerm816;
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec200[0] = ((std::fabs(fTempPerm816) < 0.5f) ? fElse178 : fRec200[1]);
		}
		if ((iControl[3])) {
			fTempPerm817 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec200[0])))));
			fTempPerm818 = 1.0f - fTempPerm817;
		}
		if ((iControl[3] | iControl[69])) {
			fTempPerm819 = std::floor(fTempPerm815);
			fTempPerm820 = fTempPerm815 - fTempPerm819;
			fVec33[0] = fTempPerm820;
			iTempPerm821 = fTempPerm820 < 0.5f;
			iVec34[0] = iTempPerm821;
		}
		if ((iControl[3])) {
			iTempPerm822 = (iVec34[1] <= 0) & (iTempPerm821 > 0);
			fRec205[0] = fRec205[1] * float(1 - iTempPerm822) + 4.65661287e-10f * fTemp41 * float(iTempPerm822);
			fTempPerm823 = fTempPerm817 + 1.0f;
			fRec204[0] = 0.0f - (fTempPerm818 * fRec204[1] - (fRec205[0] + fRec205[1])) / fTempPerm823;
			fRec203[0] = 0.0f - (fTempPerm818 * fRec203[1] - (fRec204[0] + fRec204[1])) / fTempPerm823;
			fRec202[0] = 0.0f - (fTempPerm818 * fRec202[1] - (fRec203[0] + fRec203[1])) / fTempPerm823;
			fRec201[0] = 0.0f - (fTempPerm818 * fRec201[1] - (fRec202[0] + fRec202[1])) / fTempPerm823;
			fRec199[0] = 0.0f - (fRec199[1] * fTempPerm818 - (fRec201[0] + fRec201[1])) / fTempPerm823;
			fTempPerm824 = std::sin(6.28318548f * fTempPerm815) * (fTempPerm785 * (fRec199[0] + -1.0f) + 1.0f);
			fTempPerm825 = fTempPerm794 + fTempPerm795 * fTempPerm796 + fTempPerm797 * (fTempPerm824 - (fTempPerm794 + fTempPerm795 * (fTempPerm796 - fRec199[0] - fTempPerm824)));
		}
		if ((iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
			fTempPerm826 = fTempPerm783 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec183[0] - fConst7))));
		}
		if ((iControl[75])) {
			fTempPerm827 = 0.25f * fTempPerm826;
			fTempPerm828 = std::floor(fTempPerm781 + 0.75f - fTempPerm827);
			fTempPerm829 = 0.75f - (fTempPerm827 + fTempPerm828);
		}
		if ((iControl[75] | (iControl[73] | iControl[71]))) {
			fTempPerm830 = 1.0f - fTempPerm826;
		}
		if ((iControl[75] | iControl[71])) {
			fTempPerm831 = 0.5f * fTempPerm830;
		}
		if ((iControl[75])) {
			fTempPerm832 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm831));
			fTempPerm833 = 0.5f - fTempPerm832;
		}
		if ((iControl[75] | iControl[72])) {
			fTempPerm834 = fTempPerm826 + 1.0f;
		}
		if ((iControl[75])) {
			fTempPerm835 = std::cos(6.28318548f * (fTempPerm781 + std::min<float>(((fTempPerm781 + fTempPerm829) * fTempPerm833) / fTempPerm832, (fTempPerm833 * ((fTempPerm828 + 0.25f * fTempPerm834) - fTempPerm781)) / (1.0f - fTempPerm832)) + fTempPerm829));
		}
		if ((iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
			fTempPerm836 = fTempPerm783 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec200[0] - fConst7))));
		}
		if ((iControl[75])) {
			fTempPerm837 = 0.25f * fTempPerm836;
			fTempPerm838 = std::floor(fTempPerm815 + 0.75f - fTempPerm837);
			fTempPerm839 = 0.75f - (fTempPerm837 + fTempPerm838);
		}
		if ((iControl[75] | (iControl[73] | iControl[71]))) {
			fTempPerm840 = 1.0f - fTempPerm836;
		}
		if ((iControl[75] | iControl[71])) {
			fTempPerm841 = 0.5f * fTempPerm840;
		}
		if ((iControl[75])) {
			fTempPerm842 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm841));
			fTempPerm843 = 0.5f - fTempPerm842;
		}
		if ((iControl[75] | iControl[72])) {
			fTempPerm844 = fTempPerm836 + 1.0f;
		}
		if ((iControl[75])) {
			fTempPerm845 = fTempPerm835 + fTempPerm797 * (std::cos(6.28318548f * (fTempPerm815 + std::min<float>(((fTempPerm815 + fTempPerm839) * fTempPerm843) / fTempPerm842, (fTempPerm843 * ((fTempPerm838 + 0.25f * fTempPerm844) - fTempPerm815)) / (1.0f - fTempPerm842)) + fTempPerm839)) - fTempPerm835);
		}
		if ((iControl[74])) {
			fTempPerm846 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm826));
			fTempPerm847 = 1.0f - fTempPerm846;
			fTempPerm848 = 0.25f * fTempPerm847;
			fTempPerm849 = fTempPerm781 - (fTempPerm848 + std::floor(fTempPerm781 - fTempPerm848));
			fTempPerm850 = 2.0f * fTempPerm849;
			fTempPerm851 = std::floor(fTempPerm850 + 1.0f);
			fTempPerm852 = std::cos(3.14159274f * (float(fTempPerm849 >= 0.5f) + fTempPerm850 + 1.0f - (fTempPerm851 + std::min<float>(fTempPerm850 + 1.0f - fTempPerm851, (fTempPerm846 * (fTempPerm851 - fTempPerm850)) / fTempPerm847))));
			fTempPerm853 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm836));
			fTempPerm854 = 1.0f - fTempPerm853;
			fTempPerm855 = 0.25f * fTempPerm854;
			fTempPerm856 = fTempPerm815 - (fTempPerm855 + std::floor(fTempPerm815 - fTempPerm855));
			fTempPerm857 = 2.0f * fTempPerm856;
			fTempPerm858 = std::floor(fTempPerm857 + 1.0f);
			fTempPerm859 = fTempPerm852 + fTempPerm797 * (std::cos(3.14159274f * (float(fTempPerm856 >= 0.5f) + fTempPerm857 + 1.0f - (fTempPerm858 + std::min<float>(fTempPerm857 + 1.0f - fTempPerm858, (fTempPerm853 * (fTempPerm858 - fTempPerm857)) / fTempPerm854)))) - fTempPerm852);
		}
		if ((iControl[73])) {
			fTempPerm860 = 0.25f * fTempPerm830;
			fTempPerm861 = fTempPerm860 + std::floor(fTempPerm781 - fTempPerm860);
		}
		if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
			fTempPerm862 = 1.0f - fTempPerm781;
		}
		if ((iControl[73])) {
			fTempPerm863 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm826));
			fTempPerm864 = std::cos(6.28318548f * (fTempPerm781 - (fTempPerm861 + std::min<float>(fTempPerm781 - fTempPerm861, ((fTempPerm861 + fTempPerm862) * fTempPerm863) / (1.0f - fTempPerm863)))));
			fTempPerm865 = 0.25f * fTempPerm840;
			fTempPerm866 = fTempPerm865 + std::floor(fTempPerm815 - fTempPerm865);
		}
		if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
			fTempPerm867 = 1.0f - fTempPerm815;
		}
		if ((iControl[73])) {
			fTempPerm868 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm836));
			fTempPerm869 = fTempPerm864 + fTempPerm797 * (std::cos(6.28318548f * (fTempPerm815 - (fTempPerm866 + std::min<float>(fTempPerm815 - fTempPerm866, ((fTempPerm866 + fTempPerm867) * fTempPerm868) / (1.0f - fTempPerm868))))) - fTempPerm864);
		}
		if ((iControl[72])) {
			fTempPerm870 = 0.125f * fTempPerm834;
			fTempPerm871 = fTempPerm870 + std::floor(fTempPerm781 - fTempPerm870);
			fTempPerm872 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm826));
			fTempPerm873 = 0.49000001f * fTempPerm872;
			fTempPerm874 = std::cos(12.566371f * ((fTempPerm781 + std::min<float>(0.49000001f * ((fTempPerm781 - fTempPerm871) * fTempPerm872) / (0.5f - fTempPerm873), 0.49000001f * (fTempPerm872 * (fTempPerm871 + fTempPerm862)) / (fTempPerm873 + 0.5f))) - fTempPerm871));
			fTempPerm875 = 0.125f * fTempPerm844;
			fTempPerm876 = fTempPerm875 + std::floor(fTempPerm815 - fTempPerm875);
			fTempPerm877 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm836));
			fTempPerm878 = 0.49000001f * fTempPerm877;
			fTempPerm879 = fTempPerm874 + fTempPerm797 * (std::cos(12.566371f * ((fTempPerm815 + std::min<float>(0.49000001f * ((fTempPerm815 - fTempPerm876) * fTempPerm877) / (0.5f - fTempPerm878), 0.49000001f * (fTempPerm877 * (fTempPerm876 + fTempPerm867)) / (fTempPerm878 + 0.5f))) - fTempPerm876)) - fTempPerm874);
		}
		if ((iControl[71])) {
			fTempPerm880 = 0.25f * (std::min<float>(0.975000024f, fTempPerm826) + 1.0f);
			fTempPerm881 = fTempPerm880 + std::floor(fTempPerm781 - fTempPerm880);
			fTempPerm882 = fTempPerm781 - fTempPerm881;
		}
		float fThen179 = 0.5f * ((fTempPerm781 + -0.5f - fTempPerm881) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm831)) + 1.0f);
		if ((iControl[71])) {
			fTempPerm883 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm882 < 0.5f) ? fTempPerm882 : fThen179)));
			fTempPerm884 = 0.25f * (std::min<float>(0.975000024f, fTempPerm836) + 1.0f);
			fTempPerm885 = fTempPerm884 + std::floor(fTempPerm815 - fTempPerm884);
			fTempPerm886 = fTempPerm815 - fTempPerm885;
		}
		float fThen180 = 0.5f * ((fTempPerm815 + -0.5f - fTempPerm885) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm841)) + 1.0f);
		if ((iControl[71])) {
			fTempPerm887 = fTempPerm883 + fTempPerm797 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm886 < 0.5f) ? fTempPerm886 : fThen180))) - fTempPerm883);
		}
		if ((iControl[70] | iControl[68])) {
			fTempPerm888 = fTempPerm781 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec183[0] * fControl[551] * fTempPerm782)) / fRec183[0]);
		}
		if ((iControl[70])) {
			fTempPerm889 = (0.0f - fTempPerm862) * (1.0f - std::cos(6.28318548f * (fTempPerm888 + 1.0f - std::floor(fTempPerm888 + 1.0f))));
		}
		if ((iControl[70] | iControl[68])) {
			fTempPerm890 = fTempPerm815 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec200[0] * fControl[551] * fTempPerm782)) / fRec200[0]);
		}
		if ((iControl[70])) {
			fTempPerm891 = fTempPerm889 + fTempPerm797 * ((0.0f - fTempPerm867) * (1.0f - std::cos(6.28318548f * (fTempPerm890 + 1.0f - std::floor(fTempPerm890 + 1.0f)))) - fTempPerm889) + 1.0f;
		}
		float fThen181 = 2.0f * (1.0f - fTempPerm790);
		float fElse181 = 2.0f * fTempPerm790;
		if ((iControl[69])) {
			fTempPerm892 = fTempPerm781 - (fTempPerm789 + fVec30[1]);
		}
		float fElse182 = fConst0 * fTempPerm892;
		if ((iControl[69])) {
			fRec206[0] = ((std::fabs(fTempPerm892) < 0.5f) ? fElse182 : fRec206[1]);
			fTempPerm893 = fTempPerm790 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec206[0] * fControl[551] * fTempPerm782)) / fRec206[0]);
			fTempPerm894 = ((iTempPerm791) ? fElse181 : fThen181) * (std::cos(6.28318548f * (fTempPerm893 + 1.0f - std::floor(fTempPerm893 + 1.0f))) + 1.0f);
		}
		float fThen183 = 2.0f * (1.0f - fTempPerm820);
		float fElse183 = 2.0f * fTempPerm820;
		if ((iControl[69])) {
			fTempPerm895 = fTempPerm815 - (fTempPerm819 + fVec33[1]);
		}
		float fElse184 = fConst0 * fTempPerm895;
		if ((iControl[69])) {
			fRec207[0] = ((std::fabs(fTempPerm895) < 0.5f) ? fElse184 : fRec207[1]);
			fTempPerm896 = fTempPerm820 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec207[0] * fControl[551] * fTempPerm782)) / fRec207[0]);
			fTempPerm897 = fTempPerm894 + fTempPerm797 * (((iTempPerm821) ? fElse183 : fThen183) * (std::cos(6.28318548f * (fTempPerm896 + 1.0f - std::floor(fTempPerm896 + 1.0f))) + 1.0f) - fTempPerm894) + -1.0f;
		}
		if ((iControl[68])) {
			fTempPerm898 = std::min<float>(1.0f, 2.0f * fTempPerm862) * std::sin(6.28318548f * (fTempPerm888 - std::floor(fTempPerm888)));
			fTempPerm899 = fTempPerm898 + fTempPerm797 * (std::min<float>(1.0f, 2.0f * fTempPerm867) * std::sin(6.28318548f * (fTempPerm890 - std::floor(fTempPerm890))) - fTempPerm898);
		}
		fRec168[0] = fControl[11] * fTempPerm825 + fControl[330] * fTempPerm845 + fControl[329] * fTempPerm859 + fControl[328] * fTempPerm869 + fControl[327] * fTempPerm879 + fControl[326] * fTempPerm887 + fControl[325] * fTempPerm891 + fControl[324] * fTempPerm897 + fControl[323] * fTempPerm899;
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm900 = fRec171[1] * (fControl[573] + (fTemp44 * (fTempPerm230 - fTempPerm232) + fControl[1044] * fTemp46 + fTemp48 * (fTempPerm229 - fTempPerm231)) - fControl[572]);
			fTempPerm901 = fRec170[1] * (fControl[593] + (fTemp44 * (fTempPerm235 - fTempPerm237) + fControl[1045] * fTemp46 + fTemp48 * (fTempPerm234 - fTempPerm236)) - fControl[592]);
			fTempPerm902 = fRec169[1] * (fControl[613] + (fTemp44 * (fTempPerm240 - fTempPerm242) + fControl[1046] * fTemp46 + fTemp48 * (fTempPerm239 - fTempPerm241)) - fControl[612]);
			fTempPerm903 = fControl[633] + (fTemp44 * (fTempPerm245 - fTempPerm247) + fControl[1047] * fTemp46 + fTemp48 * (fTempPerm244 - fTempPerm246)) - fControl[632];
			fTempPerm904 = fControl[653] + (fTemp44 * (fTempPerm250 - fTempPerm252) + fControl[1048] * fTemp46 + fTemp48 * (fTempPerm249 - fTempPerm251)) - fControl[652];
			fTempPerm905 = std::floor(fTempPerm904);
			fTempPerm906 = fTempPerm905 + float((fTempPerm904 < 0.0f) & (fTempPerm904 != fTempPerm905));
			fTempPerm907 = fTempPerm54 + 0.00390625f * fTempPerm903 * std::pow(2.0f, 0.0f - fTempPerm906);
			iTempPerm908 = int(fTempPerm906);
			fTempPerm909 = fRec168[1] * (fControl[673] + (fTemp44 * (fTempPerm259 - fTempPerm261) + fControl[1049] * fTemp46 + fTemp48 * (fTempPerm258 - fTempPerm260)) - fControl[672]);
			fTempPerm910 = fTempPerm900 + fTempPerm901 + fTempPerm902 + std::fmod(256.0f * (fTempPerm907 - (fTempPerm68 + std::floor(fTempPerm907 - fTempPerm68))) * (float(iTempPerm908 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm908))))) + float(iTempPerm908 == 0) + float((iTempPerm908 > 0) * int(std::pow(2.0f, float(iTempPerm908))))), 1.0f) + fTempPerm909;
		}
		if (((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28)))))))))) {
			fTempPerm911 = fRec208[1] + fTempPerm743 * (fTempPerm910 - fRec209[1]);
			fTempPerm912 = fTempPerm911 / fTempPerm758;
			fRec208[0] = 2.0f * fTempPerm912 - fRec208[1];
			fTempPerm913 = fRec209[1] + (fTempPerm743 * fTempPerm911) / fTempPerm758;
			fRec209[0] = 2.0f * fTempPerm913 - fRec209[1];
			fRec210 = fTempPerm913;
		}
		if (((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26)))))))))) {
			fTempPerm914 = fTempPerm743 * (fTempPerm910 - fRec213[1]);
			fTempPerm915 = (fTempPerm743 * ((fRec213[1] + (fTempPerm914 + 0.215215757f * fTempPerm806 * fRec211[1]) / fTempPerm765 + fTempPerm767 * fRec212[1]) / fTempPerm768 - fRec211[1])) / fTempPerm765;
			fRec211[0] = fRec211[1] + 2.0f * fTempPerm915;
			fTempPerm916 = fRec211[1] + fTempPerm915;
			fRec212[0] = fRec212[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm916 - fRec212[1])) / fTempPerm765;
			fRec213[0] = fRec213[1] + 2.0f * fTempPerm914 / fTempPerm765;
			fRec214 = fTempPerm916;
		}
		if (((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24)))))))))) {
			fTempPerm917 = fTempPerm910 - (fRec216[1] + fTempPerm757 * fRec217[1]);
			fTempPerm918 = (fTempPerm743 * fTempPerm917) / fTempPerm758;
			fTempPerm919 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec217[1] + fTempPerm918));
			fTempPerm920 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm919);
			fTempPerm921 = fTempPerm743 * fTempPerm919 * fTempPerm920;
			fRec215 = fRec216[1] + fTempPerm921;
			fRec216[0] = fRec216[1] + 2.0f * fTempPerm921;
			fTempPerm922 = fTempPerm919 * fTempPerm920;
			fRec217[0] = fTempPerm918 + fTempPerm922;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm923 = (fTempPerm740 * (fTempPerm742 * fRec210 + fTempPerm762 * fRec214 + fTempPerm772 * fRec215)) / fTempPerm779 + fTempPerm780 * fTempPerm910;
			fVec35[0] = fTempPerm923;
			fTempPerm924 = fControl[694] + (fTemp44 * (fTempPerm278 - fTempPerm280) + fControl[1050] * fTemp46 + fTemp48 * (fTempPerm277 - fTempPerm279)) - fControl[693];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62])))))) {
			fTempPerm925 = fControl[692] * fTempPerm924;
		}
		if ((iControl[67])) {
			fTempPerm926 = 2.0f * fTempPerm925;
			fTempPerm927 = std::min<float>(1.0f, fTempPerm926);
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fTempPerm928 = fTempPerm923 - fVec35[1];
		}
		float fElse185 = fConst0 * fTempPerm928;
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec219[0] = ((std::fabs(fTempPerm928) < 0.5f) ? fElse185 : fRec219[1]);
		}
		if ((iControl[67])) {
			fTempPerm929 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec219[0])))));
			fTempPerm930 = 1.0f - fTempPerm929;
		}
		if ((iControl[67] | iControl[60])) {
			fTempPerm931 = std::floor(fTempPerm923);
			fTempPerm932 = fTempPerm923 - fTempPerm931;
			fVec36[0] = fTempPerm932;
			iTempPerm933 = fTempPerm932 < 0.5f;
			iVec37[0] = iTempPerm933;
		}
		if ((iControl[67])) {
			iTempPerm934 = (iVec37[1] <= 0) & (iTempPerm933 > 0);
			fRec224[0] = fRec224[1] * float(1 - iTempPerm934) + 4.65661287e-10f * fTemp41 * float(iTempPerm934);
			fTempPerm935 = fTempPerm929 + 1.0f;
			fRec223[0] = 0.0f - (fTempPerm930 * fRec223[1] - (fRec224[0] + fRec224[1])) / fTempPerm935;
			fRec222[0] = 0.0f - (fTempPerm930 * fRec222[1] - (fRec223[0] + fRec223[1])) / fTempPerm935;
			fRec221[0] = 0.0f - (fTempPerm930 * fRec221[1] - (fRec222[0] + fRec222[1])) / fTempPerm935;
			fRec220[0] = 0.0f - (fTempPerm930 * fRec220[1] - (fRec221[0] + fRec221[1])) / fTempPerm935;
			fRec218[0] = 0.0f - (fRec218[1] * fTempPerm930 - (fRec220[0] + fRec220[1])) / fTempPerm935;
			fTempPerm936 = std::sin(6.28318548f * fTempPerm923) * (fTempPerm927 * (fRec218[0] + -1.0f) + 1.0f);
			fTempPerm937 = std::max<float>(1.0f, fTempPerm926) + -1.0f;
			fTempPerm938 = fRec218[0] - fTempPerm936;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm939 = std::fmod(std::fabs(fTempPerm904), 1.0f);
			fTempPerm940 = fTempPerm905 + float(fTempPerm904 > 0.0f);
			fTempPerm941 = fTempPerm54 + 0.00390625f * fTempPerm903 * std::pow(2.0f, 0.0f - fTempPerm940);
			iTempPerm942 = int(fTempPerm940);
			fTempPerm943 = fTempPerm909 + fTempPerm902 + fTempPerm901 + fTempPerm900 + std::fmod(256.0f * (fTempPerm941 - (fTempPerm68 + std::floor(fTempPerm941 - fTempPerm68))) * (float(iTempPerm942 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm942))))) + float(iTempPerm942 == 0) + float((iTempPerm942 > 0) * int(std::pow(2.0f, float(iTempPerm942))))), 1.0f);
		}
		if (((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28)))))))))) {
			fTempPerm944 = fRec225[1] + fTempPerm743 * (fTempPerm943 - fRec226[1]);
			fTempPerm945 = fTempPerm944 / fTempPerm758;
			fRec225[0] = 2.0f * fTempPerm945 - fRec225[1];
			fTempPerm946 = fRec226[1] + (fTempPerm743 * fTempPerm944) / fTempPerm758;
			fRec226[0] = 2.0f * fTempPerm946 - fRec226[1];
			fRec227 = fTempPerm946;
		}
		if (((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26)))))))))) {
			fTempPerm947 = fTempPerm743 * (fTempPerm943 - fRec230[1]);
			fTempPerm948 = (fTempPerm743 * ((fRec230[1] + (fTempPerm947 + 0.215215757f * fTempPerm806 * fRec228[1]) / fTempPerm765 + fTempPerm767 * fRec229[1]) / fTempPerm768 - fRec228[1])) / fTempPerm765;
			fRec228[0] = fRec228[1] + 2.0f * fTempPerm948;
			fTempPerm949 = fRec228[1] + fTempPerm948;
			fRec229[0] = fRec229[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm949 - fRec229[1])) / fTempPerm765;
			fRec230[0] = fRec230[1] + 2.0f * fTempPerm947 / fTempPerm765;
			fRec231 = fTempPerm949;
		}
		if (((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24)))))))))) {
			fTempPerm950 = fTempPerm943 - (fRec233[1] + fTempPerm757 * fRec234[1]);
			fTempPerm951 = (fTempPerm743 * fTempPerm950) / fTempPerm758;
			fTempPerm952 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec234[1] + fTempPerm951));
			fTempPerm953 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm952);
			fTempPerm954 = fTempPerm743 * fTempPerm952 * fTempPerm953;
			fRec232 = fRec233[1] + fTempPerm954;
			fRec233[0] = fRec233[1] + 2.0f * fTempPerm954;
			fTempPerm955 = fTempPerm952 * fTempPerm953;
			fRec234[0] = fTempPerm951 + fTempPerm955;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fTempPerm956 = (fTempPerm740 * (fTempPerm742 * fRec227 + fTempPerm762 * fRec231 + fTempPerm772 * fRec232)) / fTempPerm779 + fTempPerm780 * fTempPerm943;
			fVec38[0] = fTempPerm956;
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fTempPerm957 = fTempPerm956 - fVec38[1];
		}
		float fElse186 = fConst0 * fTempPerm957;
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec236[0] = ((std::fabs(fTempPerm957) < 0.5f) ? fElse186 : fRec236[1]);
		}
		if ((iControl[67])) {
			fTempPerm958 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec236[0])))));
			fTempPerm959 = 1.0f - fTempPerm958;
		}
		if ((iControl[67] | iControl[60])) {
			fTempPerm960 = std::floor(fTempPerm956);
			fTempPerm961 = fTempPerm956 - fTempPerm960;
			fVec39[0] = fTempPerm961;
			iTempPerm962 = fTempPerm961 < 0.5f;
			iVec40[0] = iTempPerm962;
		}
		if ((iControl[67])) {
			iTempPerm963 = (iVec40[1] <= 0) & (iTempPerm962 > 0);
			fRec241[0] = fRec241[1] * float(1 - iTempPerm963) + 4.65661287e-10f * fTemp41 * float(iTempPerm963);
			fTempPerm964 = fTempPerm958 + 1.0f;
			fRec240[0] = 0.0f - (fTempPerm959 * fRec240[1] - (fRec241[0] + fRec241[1])) / fTempPerm964;
			fRec239[0] = 0.0f - (fTempPerm959 * fRec239[1] - (fRec240[0] + fRec240[1])) / fTempPerm964;
			fRec238[0] = 0.0f - (fTempPerm959 * fRec238[1] - (fRec239[0] + fRec239[1])) / fTempPerm964;
			fRec237[0] = 0.0f - (fTempPerm959 * fRec237[1] - (fRec238[0] + fRec238[1])) / fTempPerm964;
			fRec235[0] = 0.0f - (fRec235[1] * fTempPerm959 - (fRec237[0] + fRec237[1])) / fTempPerm964;
			fTempPerm965 = std::sin(6.28318548f * fTempPerm956) * (fTempPerm927 * (fRec235[0] + -1.0f) + 1.0f);
			fTempPerm966 = fTempPerm936 + fTempPerm937 * fTempPerm938 + fTempPerm939 * (fTempPerm965 - (fTempPerm936 + fTempPerm937 * (fTempPerm938 - fRec235[0] - fTempPerm965)));
		}
		if ((iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
			fTempPerm967 = fTempPerm925 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec219[0] - fConst7))));
		}
		if ((iControl[66])) {
			fTempPerm968 = 0.25f * fTempPerm967;
			fTempPerm969 = std::floor(fTempPerm923 + 0.75f - fTempPerm968);
			fTempPerm970 = 0.75f - (fTempPerm968 + fTempPerm969);
		}
		if ((iControl[66] | (iControl[64] | iControl[62]))) {
			fTempPerm971 = 1.0f - fTempPerm967;
		}
		if ((iControl[66] | iControl[62])) {
			fTempPerm972 = 0.5f * fTempPerm971;
		}
		if ((iControl[66])) {
			fTempPerm973 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm972));
			fTempPerm974 = 0.5f - fTempPerm973;
		}
		if ((iControl[66] | iControl[63])) {
			fTempPerm975 = fTempPerm967 + 1.0f;
		}
		if ((iControl[66])) {
			fTempPerm976 = std::cos(6.28318548f * (fTempPerm923 + std::min<float>(((fTempPerm923 + fTempPerm970) * fTempPerm974) / fTempPerm973, (fTempPerm974 * ((fTempPerm969 + 0.25f * fTempPerm975) - fTempPerm923)) / (1.0f - fTempPerm973)) + fTempPerm970));
		}
		if ((iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
			fTempPerm977 = fTempPerm925 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec236[0] - fConst7))));
		}
		if ((iControl[66])) {
			fTempPerm978 = 0.25f * fTempPerm977;
			fTempPerm979 = std::floor(fTempPerm956 + 0.75f - fTempPerm978);
			fTempPerm980 = 0.75f - (fTempPerm978 + fTempPerm979);
		}
		if ((iControl[66] | (iControl[64] | iControl[62]))) {
			fTempPerm981 = 1.0f - fTempPerm977;
		}
		if ((iControl[66] | iControl[62])) {
			fTempPerm982 = 0.5f * fTempPerm981;
		}
		if ((iControl[66])) {
			fTempPerm983 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm982));
			fTempPerm984 = 0.5f - fTempPerm983;
		}
		if ((iControl[66] | iControl[63])) {
			fTempPerm985 = fTempPerm977 + 1.0f;
		}
		if ((iControl[66])) {
			fTempPerm986 = fTempPerm976 + fTempPerm939 * (std::cos(6.28318548f * (fTempPerm956 + std::min<float>(((fTempPerm956 + fTempPerm980) * fTempPerm984) / fTempPerm983, (fTempPerm984 * ((fTempPerm979 + 0.25f * fTempPerm985) - fTempPerm956)) / (1.0f - fTempPerm983)) + fTempPerm980)) - fTempPerm976);
		}
		if ((iControl[65])) {
			fTempPerm987 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm967));
			fTempPerm988 = 1.0f - fTempPerm987;
			fTempPerm989 = 0.25f * fTempPerm988;
			fTempPerm990 = fTempPerm923 - (fTempPerm989 + std::floor(fTempPerm923 - fTempPerm989));
			fTempPerm991 = 2.0f * fTempPerm990;
			fTempPerm992 = std::floor(fTempPerm991 + 1.0f);
			fTempPerm993 = std::cos(3.14159274f * (float(fTempPerm990 >= 0.5f) + fTempPerm991 + 1.0f - (fTempPerm992 + std::min<float>(fTempPerm991 + 1.0f - fTempPerm992, (fTempPerm987 * (fTempPerm992 - fTempPerm991)) / fTempPerm988))));
			fTempPerm994 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm977));
			fTempPerm995 = 1.0f - fTempPerm994;
			fTempPerm996 = 0.25f * fTempPerm995;
			fTempPerm997 = fTempPerm956 - (fTempPerm996 + std::floor(fTempPerm956 - fTempPerm996));
			fTempPerm998 = 2.0f * fTempPerm997;
			fTempPerm999 = std::floor(fTempPerm998 + 1.0f);
			fTempPerm1000 = fTempPerm993 + fTempPerm939 * (std::cos(3.14159274f * (float(fTempPerm997 >= 0.5f) + fTempPerm998 + 1.0f - (fTempPerm999 + std::min<float>(fTempPerm998 + 1.0f - fTempPerm999, (fTempPerm994 * (fTempPerm999 - fTempPerm998)) / fTempPerm995)))) - fTempPerm993);
		}
		if ((iControl[64])) {
			fTempPerm1001 = 0.25f * fTempPerm971;
			fTempPerm1002 = fTempPerm1001 + std::floor(fTempPerm923 - fTempPerm1001);
		}
		if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
			fTempPerm1003 = 1.0f - fTempPerm923;
		}
		if ((iControl[64])) {
			fTempPerm1004 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm967));
			fTempPerm1005 = std::cos(6.28318548f * (fTempPerm923 - (fTempPerm1002 + std::min<float>(fTempPerm923 - fTempPerm1002, ((fTempPerm1002 + fTempPerm1003) * fTempPerm1004) / (1.0f - fTempPerm1004)))));
			fTempPerm1006 = 0.25f * fTempPerm981;
			fTempPerm1007 = fTempPerm1006 + std::floor(fTempPerm956 - fTempPerm1006);
		}
		if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
			fTempPerm1008 = 1.0f - fTempPerm956;
		}
		if ((iControl[64])) {
			fTempPerm1009 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm977));
			fTempPerm1010 = fTempPerm1005 + fTempPerm939 * (std::cos(6.28318548f * (fTempPerm956 - (fTempPerm1007 + std::min<float>(fTempPerm956 - fTempPerm1007, ((fTempPerm1007 + fTempPerm1008) * fTempPerm1009) / (1.0f - fTempPerm1009))))) - fTempPerm1005);
		}
		if ((iControl[63])) {
			fTempPerm1011 = 0.125f * fTempPerm975;
			fTempPerm1012 = fTempPerm1011 + std::floor(fTempPerm923 - fTempPerm1011);
			fTempPerm1013 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm967));
			fTempPerm1014 = 0.49000001f * fTempPerm1013;
			fTempPerm1015 = std::cos(12.566371f * ((fTempPerm923 + std::min<float>(0.49000001f * ((fTempPerm923 - fTempPerm1012) * fTempPerm1013) / (0.5f - fTempPerm1014), 0.49000001f * (fTempPerm1013 * (fTempPerm1012 + fTempPerm1003)) / (fTempPerm1014 + 0.5f))) - fTempPerm1012));
			fTempPerm1016 = 0.125f * fTempPerm985;
			fTempPerm1017 = fTempPerm1016 + std::floor(fTempPerm956 - fTempPerm1016);
			fTempPerm1018 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm977));
			fTempPerm1019 = 0.49000001f * fTempPerm1018;
			fTempPerm1020 = fTempPerm1015 + fTempPerm939 * (std::cos(12.566371f * ((fTempPerm956 + std::min<float>(0.49000001f * ((fTempPerm956 - fTempPerm1017) * fTempPerm1018) / (0.5f - fTempPerm1019), 0.49000001f * (fTempPerm1018 * (fTempPerm1017 + fTempPerm1008)) / (fTempPerm1019 + 0.5f))) - fTempPerm1017)) - fTempPerm1015);
		}
		if ((iControl[62])) {
			fTempPerm1021 = 0.25f * (std::min<float>(0.975000024f, fTempPerm967) + 1.0f);
			fTempPerm1022 = fTempPerm1021 + std::floor(fTempPerm923 - fTempPerm1021);
			fTempPerm1023 = fTempPerm923 - fTempPerm1022;
		}
		float fThen187 = 0.5f * ((fTempPerm923 + -0.5f - fTempPerm1022) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm972)) + 1.0f);
		if ((iControl[62])) {
			fTempPerm1024 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1023 < 0.5f) ? fTempPerm1023 : fThen187)));
			fTempPerm1025 = 0.25f * (std::min<float>(0.975000024f, fTempPerm977) + 1.0f);
			fTempPerm1026 = fTempPerm1025 + std::floor(fTempPerm956 - fTempPerm1025);
			fTempPerm1027 = fTempPerm956 - fTempPerm1026;
		}
		float fThen188 = 0.5f * ((fTempPerm956 + -0.5f - fTempPerm1026) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm982)) + 1.0f);
		if ((iControl[62])) {
			fTempPerm1028 = fTempPerm1024 + fTempPerm939 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1027 < 0.5f) ? fTempPerm1027 : fThen188))) - fTempPerm1024);
		}
		if ((iControl[61] | iControl[59])) {
			fTempPerm1029 = fTempPerm923 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec219[0] * fControl[692] * fTempPerm924)) / fRec219[0]);
		}
		if ((iControl[61])) {
			fTempPerm1030 = (0.0f - fTempPerm1003) * (1.0f - std::cos(6.28318548f * (fTempPerm1029 + 1.0f - std::floor(fTempPerm1029 + 1.0f))));
		}
		if ((iControl[61] | iControl[59])) {
			fTempPerm1031 = fTempPerm956 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec236[0] * fControl[692] * fTempPerm924)) / fRec236[0]);
		}
		if ((iControl[61])) {
			fTempPerm1032 = fTempPerm1030 + fTempPerm939 * ((0.0f - fTempPerm1008) * (1.0f - std::cos(6.28318548f * (fTempPerm1031 + 1.0f - std::floor(fTempPerm1031 + 1.0f)))) - fTempPerm1030) + 1.0f;
		}
		float fThen189 = 2.0f * (1.0f - fTempPerm932);
		float fElse189 = 2.0f * fTempPerm932;
		if ((iControl[60])) {
			fTempPerm1033 = fTempPerm923 - (fTempPerm931 + fVec36[1]);
		}
		float fElse190 = fConst0 * fTempPerm1033;
		if ((iControl[60])) {
			fRec242[0] = ((std::fabs(fTempPerm1033) < 0.5f) ? fElse190 : fRec242[1]);
			fTempPerm1034 = fTempPerm932 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec242[0] * fControl[692] * fTempPerm924)) / fRec242[0]);
			fTempPerm1035 = ((iTempPerm933) ? fElse189 : fThen189) * (std::cos(6.28318548f * (fTempPerm1034 + 1.0f - std::floor(fTempPerm1034 + 1.0f))) + 1.0f);
		}
		float fThen191 = 2.0f * (1.0f - fTempPerm961);
		float fElse191 = 2.0f * fTempPerm961;
		if ((iControl[60])) {
			fTempPerm1036 = fTempPerm956 - (fTempPerm960 + fVec39[1]);
		}
		float fElse192 = fConst0 * fTempPerm1036;
		if ((iControl[60])) {
			fRec243[0] = ((std::fabs(fTempPerm1036) < 0.5f) ? fElse192 : fRec243[1]);
			fTempPerm1037 = fTempPerm961 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec243[0] * fControl[692] * fTempPerm924)) / fRec243[0]);
			fTempPerm1038 = fTempPerm1035 + fTempPerm939 * (((iTempPerm962) ? fElse191 : fThen191) * (std::cos(6.28318548f * (fTempPerm1037 + 1.0f - std::floor(fTempPerm1037 + 1.0f))) + 1.0f) - fTempPerm1035) + -1.0f;
		}
		if ((iControl[59])) {
			fTempPerm1039 = std::min<float>(1.0f, 2.0f * fTempPerm1003) * std::sin(6.28318548f * (fTempPerm1029 - std::floor(fTempPerm1029)));
			fTempPerm1040 = fTempPerm1039 + fTempPerm939 * (std::min<float>(1.0f, 2.0f * fTempPerm1008) * std::sin(6.28318548f * (fTempPerm1031 - std::floor(fTempPerm1031))) - fTempPerm1039);
		}
		fRec169[0] = fControl[322] * fTempPerm966 + fControl[321] * fTempPerm986 + fControl[320] * fTempPerm1000 + fControl[319] * fTempPerm1010 + fControl[318] * fTempPerm1020 + fControl[317] * fTempPerm1028 + fControl[316] * fTempPerm1032 + fControl[315] * fTempPerm1038 + fControl[314] * fTempPerm1040;
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm1041 = fRec171[1] * (fControl[714] + (fTemp44 * (fTempPerm399 - fTempPerm401) + fControl[1051] * fTemp46 + fTemp48 * (fTempPerm398 - fTempPerm400)) - fControl[713]);
			fTempPerm1042 = fRec170[1] * (fControl[734] + (fTemp44 * (fTempPerm404 - fTempPerm406) + fControl[1052] * fTemp46 + fTemp48 * (fTempPerm403 - fTempPerm405)) - fControl[733]);
			fTempPerm1043 = fRec169[1] * (fControl[754] + (fTemp44 * (fTempPerm409 - fTempPerm411) + fControl[1053] * fTemp46 + fTemp48 * (fTempPerm408 - fTempPerm410)) - fControl[753]);
			fTempPerm1044 = fControl[774] + (fTemp44 * (fTempPerm414 - fTempPerm416) + fControl[1054] * fTemp46 + fTemp48 * (fTempPerm413 - fTempPerm415)) - fControl[773];
			fTempPerm1045 = fControl[794] + (fTemp44 * (fTempPerm419 - fTempPerm421) + fControl[1055] * fTemp46 + fTemp48 * (fTempPerm418 - fTempPerm420)) - fControl[793];
			fTempPerm1046 = std::floor(fTempPerm1045);
			fTempPerm1047 = fTempPerm1046 + float((fTempPerm1045 < 0.0f) & (fTempPerm1045 != fTempPerm1046));
			fTempPerm1048 = fTempPerm54 + 0.00390625f * fTempPerm1044 * std::pow(2.0f, 0.0f - fTempPerm1047);
			iTempPerm1049 = int(fTempPerm1047);
			fTempPerm1050 = fRec168[1] * (fControl[814] + (fControl[1056] * fTemp46 + fTemp44 * (fTempPerm428 - fTempPerm430)) - fTemp48 * (fTempPerm429 - fTempPerm427) - fControl[813]);
			fTempPerm1051 = fTempPerm1041 + fTempPerm1042 + fTempPerm1043 + std::fmod(256.0f * (fTempPerm1048 - (fTempPerm68 + std::floor(fTempPerm1048 - fTempPerm68))) * (float(iTempPerm1049 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1049))))) + float(iTempPerm1049 == 0) + float((iTempPerm1049 > 0) * int(std::pow(2.0f, float(iTempPerm1049))))), 1.0f) + fTempPerm1050;
		}
		if (((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28)))))))))) {
			fTempPerm1052 = fRec244[1] + fTempPerm743 * (fTempPerm1051 - fRec245[1]);
			fTempPerm1053 = fTempPerm1052 / fTempPerm758;
			fRec244[0] = 2.0f * fTempPerm1053 - fRec244[1];
			fTempPerm1054 = fRec245[1] + (fTempPerm743 * fTempPerm1052) / fTempPerm758;
			fRec245[0] = 2.0f * fTempPerm1054 - fRec245[1];
			fRec246 = fTempPerm1054;
		}
		if (((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26)))))))))) {
			fTempPerm1055 = fTempPerm743 * (fTempPerm1051 - fRec249[1]);
			fTempPerm1056 = (fTempPerm743 * ((fRec249[1] + (fTempPerm1055 + 0.215215757f * fTempPerm806 * fRec247[1]) / fTempPerm765 + fTempPerm767 * fRec248[1]) / fTempPerm768 - fRec247[1])) / fTempPerm765;
			fRec247[0] = fRec247[1] + 2.0f * fTempPerm1056;
			fTempPerm1057 = fRec247[1] + fTempPerm1056;
			fRec248[0] = fRec248[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm1057 - fRec248[1])) / fTempPerm765;
			fRec249[0] = fRec249[1] + 2.0f * fTempPerm1055 / fTempPerm765;
			fRec250 = fTempPerm1057;
		}
		if (((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24)))))))))) {
			fTempPerm1058 = fTempPerm1051 - (fRec252[1] + fTempPerm757 * fRec253[1]);
			fTempPerm1059 = (fTempPerm743 * fTempPerm1058) / fTempPerm758;
			fTempPerm1060 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec253[1] + fTempPerm1059));
			fTempPerm1061 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1060);
			fTempPerm1062 = fTempPerm743 * fTempPerm1060 * fTempPerm1061;
			fRec251 = fRec252[1] + fTempPerm1062;
			fRec252[0] = fRec252[1] + 2.0f * fTempPerm1062;
			fTempPerm1063 = fTempPerm1060 * fTempPerm1061;
			fRec253[0] = fTempPerm1059 + fTempPerm1063;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm1064 = (fTempPerm740 * (fTempPerm742 * fRec246 + fTempPerm762 * fRec250 + fTempPerm772 * fRec251)) / fTempPerm779 + fTempPerm780 * fTempPerm1051;
			fVec41[0] = fTempPerm1064;
			fTempPerm1065 = fControl[835] + (fTemp44 * (fTempPerm447 - fTempPerm449) + fControl[1057] * fTemp46 + fTemp48 * (fTempPerm446 - fTempPerm448)) - fControl[834];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53])))))) {
			fTempPerm1066 = fControl[833] * fTempPerm1065;
		}
		if ((iControl[58])) {
			fTempPerm1067 = 2.0f * fTempPerm1066;
			fTempPerm1068 = std::min<float>(1.0f, fTempPerm1067);
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fTempPerm1069 = fTempPerm1064 - fVec41[1];
		}
		float fElse193 = fConst0 * fTempPerm1069;
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec255[0] = ((std::fabs(fTempPerm1069) < 0.5f) ? fElse193 : fRec255[1]);
		}
		if ((iControl[58])) {
			fTempPerm1070 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec255[0])))));
			fTempPerm1071 = 1.0f - fTempPerm1070;
		}
		if ((iControl[58] | iControl[51])) {
			fTempPerm1072 = std::floor(fTempPerm1064);
			fTempPerm1073 = fTempPerm1064 - fTempPerm1072;
			fVec42[0] = fTempPerm1073;
			iTempPerm1074 = fTempPerm1073 < 0.5f;
			iVec43[0] = iTempPerm1074;
		}
		if ((iControl[58])) {
			iTempPerm1075 = (iVec43[1] <= 0) & (iTempPerm1074 > 0);
			fRec260[0] = fRec260[1] * float(1 - iTempPerm1075) + 4.65661287e-10f * fTemp41 * float(iTempPerm1075);
			fTempPerm1076 = fTempPerm1070 + 1.0f;
			fRec259[0] = 0.0f - (fTempPerm1071 * fRec259[1] - (fRec260[0] + fRec260[1])) / fTempPerm1076;
			fRec258[0] = 0.0f - (fTempPerm1071 * fRec258[1] - (fRec259[0] + fRec259[1])) / fTempPerm1076;
			fRec257[0] = 0.0f - (fTempPerm1071 * fRec257[1] - (fRec258[0] + fRec258[1])) / fTempPerm1076;
			fRec256[0] = 0.0f - (fTempPerm1071 * fRec256[1] - (fRec257[0] + fRec257[1])) / fTempPerm1076;
			fRec254[0] = 0.0f - (fRec254[1] * fTempPerm1071 - (fRec256[0] + fRec256[1])) / fTempPerm1076;
			fTempPerm1077 = std::sin(6.28318548f * fTempPerm1064) * (fTempPerm1068 * (fRec254[0] + -1.0f) + 1.0f);
			fTempPerm1078 = std::max<float>(1.0f, fTempPerm1067) + -1.0f;
			fTempPerm1079 = fRec254[0] - fTempPerm1077;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm1080 = std::fmod(std::fabs(fTempPerm1045), 1.0f);
			fTempPerm1081 = fTempPerm1046 + float(fTempPerm1045 > 0.0f);
			fTempPerm1082 = fTempPerm54 + 0.00390625f * fTempPerm1044 * std::pow(2.0f, 0.0f - fTempPerm1081);
			iTempPerm1083 = int(fTempPerm1081);
			fTempPerm1084 = fTempPerm1050 + fTempPerm1043 + fTempPerm1042 + fTempPerm1041 + std::fmod(256.0f * (fTempPerm1082 - (fTempPerm68 + std::floor(fTempPerm1082 - fTempPerm68))) * (float(iTempPerm1083 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1083))))) + float(iTempPerm1083 == 0) + float((iTempPerm1083 > 0) * int(std::pow(2.0f, float(iTempPerm1083))))), 1.0f);
		}
		if (((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28)))))))))) {
			fTempPerm1085 = fRec261[1] + fTempPerm743 * (fTempPerm1084 - fRec262[1]);
			fTempPerm1086 = fTempPerm1085 / fTempPerm758;
			fRec261[0] = 2.0f * fTempPerm1086 - fRec261[1];
			fTempPerm1087 = fRec262[1] + (fTempPerm743 * fTempPerm1085) / fTempPerm758;
			fRec262[0] = 2.0f * fTempPerm1087 - fRec262[1];
			fRec263 = fTempPerm1087;
		}
		if (((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26)))))))))) {
			fTempPerm1088 = fTempPerm743 * (fTempPerm1084 - fRec266[1]);
			fTempPerm1089 = (fTempPerm743 * ((fRec266[1] + (fTempPerm1088 + 0.215215757f * fTempPerm806 * fRec264[1]) / fTempPerm765 + fTempPerm767 * fRec265[1]) / fTempPerm768 - fRec264[1])) / fTempPerm765;
			fRec264[0] = fRec264[1] + 2.0f * fTempPerm1089;
			fTempPerm1090 = fRec264[1] + fTempPerm1089;
			fRec265[0] = fRec265[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm1090 - fRec265[1])) / fTempPerm765;
			fRec266[0] = fRec266[1] + 2.0f * fTempPerm1088 / fTempPerm765;
			fRec267 = fTempPerm1090;
		}
		if (((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24)))))))))) {
			fTempPerm1091 = fTempPerm1084 - (fRec269[1] + fTempPerm757 * fRec270[1]);
			fTempPerm1092 = (fTempPerm743 * fTempPerm1091) / fTempPerm758;
			fTempPerm1093 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec270[1] + fTempPerm1092));
			fTempPerm1094 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1093);
			fTempPerm1095 = fTempPerm743 * fTempPerm1093 * fTempPerm1094;
			fRec268 = fRec269[1] + fTempPerm1095;
			fRec269[0] = fRec269[1] + 2.0f * fTempPerm1095;
			fTempPerm1096 = fTempPerm1093 * fTempPerm1094;
			fRec270[0] = fTempPerm1092 + fTempPerm1096;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fTempPerm1097 = (fTempPerm740 * (fTempPerm742 * fRec263 + fTempPerm762 * fRec267 + fTempPerm772 * fRec268)) / fTempPerm779 + fTempPerm780 * fTempPerm1084;
			fVec44[0] = fTempPerm1097;
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fTempPerm1098 = fTempPerm1097 - fVec44[1];
		}
		float fElse194 = fConst0 * fTempPerm1098;
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec272[0] = ((std::fabs(fTempPerm1098) < 0.5f) ? fElse194 : fRec272[1]);
		}
		if ((iControl[58])) {
			fTempPerm1099 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec272[0])))));
			fTempPerm1100 = 1.0f - fTempPerm1099;
		}
		if ((iControl[58] | iControl[51])) {
			fTempPerm1101 = std::floor(fTempPerm1097);
			fTempPerm1102 = fTempPerm1097 - fTempPerm1101;
			fVec45[0] = fTempPerm1102;
			iTempPerm1103 = fTempPerm1102 < 0.5f;
			iVec46[0] = iTempPerm1103;
		}
		if ((iControl[58])) {
			iTempPerm1104 = (iVec46[1] <= 0) & (iTempPerm1103 > 0);
			fRec277[0] = fRec277[1] * float(1 - iTempPerm1104) + 4.65661287e-10f * fTemp41 * float(iTempPerm1104);
			fTempPerm1105 = fTempPerm1099 + 1.0f;
			fRec276[0] = 0.0f - (fTempPerm1100 * fRec276[1] - (fRec277[0] + fRec277[1])) / fTempPerm1105;
			fRec275[0] = 0.0f - (fTempPerm1100 * fRec275[1] - (fRec276[0] + fRec276[1])) / fTempPerm1105;
			fRec274[0] = 0.0f - (fTempPerm1100 * fRec274[1] - (fRec275[0] + fRec275[1])) / fTempPerm1105;
			fRec273[0] = 0.0f - (fTempPerm1100 * fRec273[1] - (fRec274[0] + fRec274[1])) / fTempPerm1105;
			fRec271[0] = 0.0f - (fRec271[1] * fTempPerm1100 - (fRec273[0] + fRec273[1])) / fTempPerm1105;
			fTempPerm1106 = std::sin(6.28318548f * fTempPerm1097) * (fTempPerm1068 * (fRec271[0] + -1.0f) + 1.0f);
			fTempPerm1107 = fTempPerm1077 + fTempPerm1078 * fTempPerm1079 + fTempPerm1080 * (fTempPerm1106 - (fTempPerm1077 + fTempPerm1078 * (fTempPerm1079 - fRec271[0] - fTempPerm1106)));
		}
		if ((iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
			fTempPerm1108 = fTempPerm1066 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec255[0] - fConst7))));
		}
		if ((iControl[57])) {
			fTempPerm1109 = 0.25f * fTempPerm1108;
			fTempPerm1110 = std::floor(fTempPerm1064 + 0.75f - fTempPerm1109);
			fTempPerm1111 = 0.75f - (fTempPerm1109 + fTempPerm1110);
		}
		if ((iControl[57] | (iControl[55] | iControl[53]))) {
			fTempPerm1112 = 1.0f - fTempPerm1108;
		}
		if ((iControl[57] | iControl[53])) {
			fTempPerm1113 = 0.5f * fTempPerm1112;
		}
		if ((iControl[57])) {
			fTempPerm1114 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1113));
			fTempPerm1115 = 0.5f - fTempPerm1114;
		}
		if ((iControl[57] | iControl[54])) {
			fTempPerm1116 = fTempPerm1108 + 1.0f;
		}
		if ((iControl[57])) {
			fTempPerm1117 = std::cos(6.28318548f * (fTempPerm1064 + std::min<float>(((fTempPerm1064 + fTempPerm1111) * fTempPerm1115) / fTempPerm1114, (fTempPerm1115 * ((fTempPerm1110 + 0.25f * fTempPerm1116) - fTempPerm1064)) / (1.0f - fTempPerm1114)) + fTempPerm1111));
		}
		if ((iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
			fTempPerm1118 = fTempPerm1066 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec272[0] - fConst7))));
		}
		if ((iControl[57])) {
			fTempPerm1119 = 0.25f * fTempPerm1118;
			fTempPerm1120 = std::floor(fTempPerm1097 + 0.75f - fTempPerm1119);
			fTempPerm1121 = 0.75f - (fTempPerm1119 + fTempPerm1120);
		}
		if ((iControl[57] | (iControl[55] | iControl[53]))) {
			fTempPerm1122 = 1.0f - fTempPerm1118;
		}
		if ((iControl[57] | iControl[53])) {
			fTempPerm1123 = 0.5f * fTempPerm1122;
		}
		if ((iControl[57])) {
			fTempPerm1124 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1123));
			fTempPerm1125 = 0.5f - fTempPerm1124;
		}
		if ((iControl[57] | iControl[54])) {
			fTempPerm1126 = fTempPerm1118 + 1.0f;
		}
		if ((iControl[57])) {
			fTempPerm1127 = fTempPerm1117 + fTempPerm1080 * (std::cos(6.28318548f * (fTempPerm1097 + std::min<float>(((fTempPerm1097 + fTempPerm1121) * fTempPerm1125) / fTempPerm1124, (fTempPerm1125 * ((fTempPerm1120 + 0.25f * fTempPerm1126) - fTempPerm1097)) / (1.0f - fTempPerm1124)) + fTempPerm1121)) - fTempPerm1117);
		}
		if ((iControl[56])) {
			fTempPerm1128 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1108));
			fTempPerm1129 = 1.0f - fTempPerm1128;
			fTempPerm1130 = 0.25f * fTempPerm1129;
			fTempPerm1131 = fTempPerm1064 - (fTempPerm1130 + std::floor(fTempPerm1064 - fTempPerm1130));
			fTempPerm1132 = 2.0f * fTempPerm1131;
			fTempPerm1133 = std::floor(fTempPerm1132 + 1.0f);
			fTempPerm1134 = std::cos(3.14159274f * (float(fTempPerm1131 >= 0.5f) + fTempPerm1132 + 1.0f - (fTempPerm1133 + std::min<float>(fTempPerm1132 + 1.0f - fTempPerm1133, (fTempPerm1128 * (fTempPerm1133 - fTempPerm1132)) / fTempPerm1129))));
			fTempPerm1135 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1118));
			fTempPerm1136 = 1.0f - fTempPerm1135;
			fTempPerm1137 = 0.25f * fTempPerm1136;
			fTempPerm1138 = fTempPerm1097 - (fTempPerm1137 + std::floor(fTempPerm1097 - fTempPerm1137));
			fTempPerm1139 = 2.0f * fTempPerm1138;
			fTempPerm1140 = std::floor(fTempPerm1139 + 1.0f);
			fTempPerm1141 = fTempPerm1134 + fTempPerm1080 * (std::cos(3.14159274f * (float(fTempPerm1138 >= 0.5f) + fTempPerm1139 + 1.0f - (fTempPerm1140 + std::min<float>(fTempPerm1139 + 1.0f - fTempPerm1140, (fTempPerm1135 * (fTempPerm1140 - fTempPerm1139)) / fTempPerm1136)))) - fTempPerm1134);
		}
		if ((iControl[55])) {
			fTempPerm1142 = 0.25f * fTempPerm1112;
			fTempPerm1143 = fTempPerm1142 + std::floor(fTempPerm1064 - fTempPerm1142);
		}
		if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
			fTempPerm1144 = 1.0f - fTempPerm1064;
		}
		if ((iControl[55])) {
			fTempPerm1145 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1108));
			fTempPerm1146 = std::cos(6.28318548f * (fTempPerm1064 - (fTempPerm1143 + std::min<float>(fTempPerm1064 - fTempPerm1143, ((fTempPerm1143 + fTempPerm1144) * fTempPerm1145) / (1.0f - fTempPerm1145)))));
			fTempPerm1147 = 0.25f * fTempPerm1122;
			fTempPerm1148 = fTempPerm1147 + std::floor(fTempPerm1097 - fTempPerm1147);
		}
		if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
			fTempPerm1149 = 1.0f - fTempPerm1097;
		}
		if ((iControl[55])) {
			fTempPerm1150 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1118));
			fTempPerm1151 = fTempPerm1146 + fTempPerm1080 * (std::cos(6.28318548f * (fTempPerm1097 - (fTempPerm1148 + std::min<float>(fTempPerm1097 - fTempPerm1148, ((fTempPerm1148 + fTempPerm1149) * fTempPerm1150) / (1.0f - fTempPerm1150))))) - fTempPerm1146);
		}
		if ((iControl[54])) {
			fTempPerm1152 = 0.125f * fTempPerm1116;
			fTempPerm1153 = fTempPerm1152 + std::floor(fTempPerm1064 - fTempPerm1152);
			fTempPerm1154 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1108));
			fTempPerm1155 = 0.49000001f * fTempPerm1154;
			fTempPerm1156 = std::cos(12.566371f * ((fTempPerm1064 + std::min<float>(0.49000001f * ((fTempPerm1064 - fTempPerm1153) * fTempPerm1154) / (0.5f - fTempPerm1155), 0.49000001f * (fTempPerm1154 * (fTempPerm1153 + fTempPerm1144)) / (fTempPerm1155 + 0.5f))) - fTempPerm1153));
			fTempPerm1157 = 0.125f * fTempPerm1126;
			fTempPerm1158 = fTempPerm1157 + std::floor(fTempPerm1097 - fTempPerm1157);
			fTempPerm1159 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1118));
			fTempPerm1160 = 0.49000001f * fTempPerm1159;
			fTempPerm1161 = fTempPerm1156 + fTempPerm1080 * (std::cos(12.566371f * ((fTempPerm1097 + std::min<float>(0.49000001f * ((fTempPerm1097 - fTempPerm1158) * fTempPerm1159) / (0.5f - fTempPerm1160), 0.49000001f * (fTempPerm1159 * (fTempPerm1158 + fTempPerm1149)) / (fTempPerm1160 + 0.5f))) - fTempPerm1158)) - fTempPerm1156);
		}
		if ((iControl[53])) {
			fTempPerm1162 = 0.25f * (std::min<float>(0.975000024f, fTempPerm1108) + 1.0f);
			fTempPerm1163 = fTempPerm1162 + std::floor(fTempPerm1064 - fTempPerm1162);
			fTempPerm1164 = fTempPerm1064 - fTempPerm1163;
		}
		float fThen195 = 0.5f * ((fTempPerm1064 + -0.5f - fTempPerm1163) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1113)) + 1.0f);
		if ((iControl[53])) {
			fTempPerm1165 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1164 < 0.5f) ? fTempPerm1164 : fThen195)));
			fTempPerm1166 = 0.25f * (std::min<float>(0.975000024f, fTempPerm1118) + 1.0f);
			fTempPerm1167 = fTempPerm1166 + std::floor(fTempPerm1097 - fTempPerm1166);
			fTempPerm1168 = fTempPerm1097 - fTempPerm1167;
		}
		float fThen196 = 0.5f * ((fTempPerm1097 + -0.5f - fTempPerm1167) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1123)) + 1.0f);
		if ((iControl[53])) {
			fTempPerm1169 = fTempPerm1165 + fTempPerm1080 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1168 < 0.5f) ? fTempPerm1168 : fThen196))) - fTempPerm1165);
		}
		if ((iControl[52] | iControl[50])) {
			fTempPerm1170 = fTempPerm1064 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec255[0] * fControl[833] * fTempPerm1065)) / fRec255[0]);
		}
		if ((iControl[52])) {
			fTempPerm1171 = (0.0f - fTempPerm1144) * (1.0f - std::cos(6.28318548f * (fTempPerm1170 + 1.0f - std::floor(fTempPerm1170 + 1.0f))));
		}
		if ((iControl[52] | iControl[50])) {
			fTempPerm1172 = fTempPerm1097 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec272[0] * fControl[833] * fTempPerm1065)) / fRec272[0]);
		}
		if ((iControl[52])) {
			fTempPerm1173 = fTempPerm1171 + fTempPerm1080 * ((0.0f - fTempPerm1149) * (1.0f - std::cos(6.28318548f * (fTempPerm1172 + 1.0f - std::floor(fTempPerm1172 + 1.0f)))) - fTempPerm1171) + 1.0f;
		}
		float fThen197 = 2.0f * (1.0f - fTempPerm1073);
		float fElse197 = 2.0f * fTempPerm1073;
		if ((iControl[51])) {
			fTempPerm1174 = fTempPerm1064 - (fTempPerm1072 + fVec42[1]);
		}
		float fElse198 = fConst0 * fTempPerm1174;
		if ((iControl[51])) {
			fRec278[0] = ((std::fabs(fTempPerm1174) < 0.5f) ? fElse198 : fRec278[1]);
			fTempPerm1175 = fTempPerm1073 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec278[0] * fControl[833] * fTempPerm1065)) / fRec278[0]);
			fTempPerm1176 = ((iTempPerm1074) ? fElse197 : fThen197) * (std::cos(6.28318548f * (fTempPerm1175 + 1.0f - std::floor(fTempPerm1175 + 1.0f))) + 1.0f);
		}
		float fThen199 = 2.0f * (1.0f - fTempPerm1102);
		float fElse199 = 2.0f * fTempPerm1102;
		if ((iControl[51])) {
			fTempPerm1177 = fTempPerm1097 - (fTempPerm1101 + fVec45[1]);
		}
		float fElse200 = fConst0 * fTempPerm1177;
		if ((iControl[51])) {
			fRec279[0] = ((std::fabs(fTempPerm1177) < 0.5f) ? fElse200 : fRec279[1]);
			fTempPerm1178 = fTempPerm1102 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec279[0] * fControl[833] * fTempPerm1065)) / fRec279[0]);
			fTempPerm1179 = fTempPerm1176 + fTempPerm1080 * (((iTempPerm1103) ? fElse199 : fThen199) * (std::cos(6.28318548f * (fTempPerm1178 + 1.0f - std::floor(fTempPerm1178 + 1.0f))) + 1.0f) - fTempPerm1176) + -1.0f;
		}
		if ((iControl[50])) {
			fTempPerm1180 = std::min<float>(1.0f, 2.0f * fTempPerm1144) * std::sin(6.28318548f * (fTempPerm1170 - std::floor(fTempPerm1170)));
			fTempPerm1181 = fTempPerm1180 + fTempPerm1080 * (std::min<float>(1.0f, 2.0f * fTempPerm1149) * std::sin(6.28318548f * (fTempPerm1172 - std::floor(fTempPerm1172))) - fTempPerm1180);
		}
		fRec170[0] = fControl[311] * fTempPerm1107 + fControl[310] * fTempPerm1127 + fControl[309] * fTempPerm1141 + fControl[308] * fTempPerm1151 + fControl[307] * fTempPerm1161 + fControl[306] * fTempPerm1169 + fControl[305] * fTempPerm1173 + fControl[304] * fTempPerm1179 + fControl[303] * fTempPerm1181;
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm1182 = fRec171[1] * (fControl[855] + (fTemp44 * (fTempPerm568 - fTempPerm570) + fControl[1058] * fTemp46 + fTemp48 * (fTempPerm567 - fTempPerm569)) - fControl[854]);
			fTempPerm1183 = fRec170[1] * (fControl[875] + (fTemp44 * (fTempPerm573 - fTempPerm575) + fControl[1059] * fTemp46 + fTemp48 * (fTempPerm572 - fTempPerm574)) - fControl[874]);
			fTempPerm1184 = fRec169[1] * (fControl[895] + (fTemp44 * (fTempPerm578 - fTempPerm580) + fControl[1060] * fTemp46 + fTemp48 * (fTempPerm577 - fTempPerm579)) - fControl[894]);
			fTempPerm1185 = fControl[915] + (fTemp44 * (fTempPerm583 - fTempPerm585) + fControl[1061] * fTemp46 + fTemp48 * (fTempPerm582 - fTempPerm584)) - fControl[914];
			fTempPerm1186 = fControl[935] + (fTemp44 * (fTempPerm588 - fTempPerm590) + fControl[1062] * fTemp46 + fTemp48 * (fTempPerm587 - fTempPerm589)) - fControl[934];
			fTempPerm1187 = std::floor(fTempPerm1186);
			fTempPerm1188 = fTempPerm1187 + float((fTempPerm1186 < 0.0f) & (fTempPerm1186 != fTempPerm1187));
			fTempPerm1189 = fTempPerm54 + 0.00390625f * fTempPerm1185 * std::pow(2.0f, 0.0f - fTempPerm1188);
			iTempPerm1190 = int(fTempPerm1188);
			fTempPerm1191 = fRec168[1] * (fControl[955] + (fTemp44 * (fTempPerm597 - fTempPerm599) + fControl[1063] * fTemp46 + fTemp48 * (fTempPerm596 - fTempPerm598)) - fControl[954]);
			fTempPerm1192 = fTempPerm1182 + fTempPerm1183 + fTempPerm1184 + std::fmod(256.0f * (fTempPerm1189 - (fTempPerm68 + std::floor(fTempPerm1189 - fTempPerm68))) * (float(iTempPerm1190 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1190))))) + float(iTempPerm1190 == 0) + float((iTempPerm1190 > 0) * int(std::pow(2.0f, float(iTempPerm1190))))), 1.0f) + fTempPerm1191;
		}
		if (((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28)))))))))) {
			fTempPerm1193 = fRec280[1] + fTempPerm743 * (fTempPerm1192 - fRec281[1]);
			fTempPerm1194 = fTempPerm1193 / fTempPerm758;
			fRec280[0] = 2.0f * fTempPerm1194 - fRec280[1];
			fTempPerm1195 = fRec281[1] + (fTempPerm743 * fTempPerm1193) / fTempPerm758;
			fRec281[0] = 2.0f * fTempPerm1195 - fRec281[1];
			fRec282 = fTempPerm1195;
		}
		if (((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))) {
			fTempPerm1196 = fTempPerm743 * (fTempPerm1192 - fRec285[1]);
			fTempPerm1197 = (fTempPerm743 * ((fRec285[1] + (fTempPerm1196 + 0.215215757f * fTempPerm806 * fRec283[1]) / fTempPerm765 + fTempPerm767 * fRec284[1]) / fTempPerm768 - fRec283[1])) / fTempPerm765;
			fRec283[0] = fRec283[1] + 2.0f * fTempPerm1197;
			fTempPerm1198 = fRec283[1] + fTempPerm1197;
			fRec284[0] = fRec284[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm1198 - fRec284[1])) / fTempPerm765;
			fRec285[0] = fRec285[1] + 2.0f * fTempPerm1196 / fTempPerm765;
			fRec286 = fTempPerm1198;
		}
		if (((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24)))))))))) {
			fTempPerm1199 = fTempPerm1192 - (fRec288[1] + fTempPerm757 * fRec289[1]);
			fTempPerm1200 = (fTempPerm743 * fTempPerm1199) / fTempPerm758;
			fTempPerm1201 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec289[1] + fTempPerm1200));
			fTempPerm1202 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1201);
			fTempPerm1203 = fTempPerm743 * fTempPerm1201 * fTempPerm1202;
			fRec287 = fRec288[1] + fTempPerm1203;
			fRec288[0] = fRec288[1] + 2.0f * fTempPerm1203;
			fTempPerm1204 = fTempPerm1201 * fTempPerm1202;
			fRec289[0] = fTempPerm1200 + fTempPerm1204;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm1205 = (fTempPerm740 * (fTempPerm742 * fRec282 + fTempPerm762 * fRec286 + fTempPerm772 * fRec287)) / fTempPerm779 + fTempPerm780 * fTempPerm1192;
			fVec47[0] = fTempPerm1205;
			fTempPerm1206 = fControl[976] + (fTemp44 * (fTempPerm616 - fTempPerm618) + fControl[1064] * fTemp46 + fTemp48 * (fTempPerm615 - fTempPerm617)) - fControl[975];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44])))))) {
			fTempPerm1207 = fControl[974] * fTempPerm1206;
		}
		if ((iControl[49])) {
			fTempPerm1208 = 2.0f * fTempPerm1207;
			fTempPerm1209 = std::min<float>(1.0f, fTempPerm1208);
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fTempPerm1210 = fTempPerm1205 - fVec47[1];
		}
		float fElse201 = fConst0 * fTempPerm1210;
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec291[0] = ((std::fabs(fTempPerm1210) < 0.5f) ? fElse201 : fRec291[1]);
		}
		if ((iControl[49])) {
			fTempPerm1211 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec291[0])))));
			fTempPerm1212 = 1.0f - fTempPerm1211;
		}
		if ((iControl[49] | iControl[42])) {
			fTempPerm1213 = std::floor(fTempPerm1205);
			fTempPerm1214 = fTempPerm1205 - fTempPerm1213;
			fVec48[0] = fTempPerm1214;
			iTempPerm1215 = fTempPerm1214 < 0.5f;
			iVec49[0] = iTempPerm1215;
		}
		if ((iControl[49])) {
			iTempPerm1216 = (iVec49[1] <= 0) & (iTempPerm1215 > 0);
			fRec296[0] = fRec296[1] * float(1 - iTempPerm1216) + 4.65661287e-10f * fTemp41 * float(iTempPerm1216);
			fTempPerm1217 = fTempPerm1211 + 1.0f;
			fRec295[0] = 0.0f - (fTempPerm1212 * fRec295[1] - (fRec296[0] + fRec296[1])) / fTempPerm1217;
			fRec294[0] = 0.0f - (fTempPerm1212 * fRec294[1] - (fRec295[0] + fRec295[1])) / fTempPerm1217;
			fRec293[0] = 0.0f - (fTempPerm1212 * fRec293[1] - (fRec294[0] + fRec294[1])) / fTempPerm1217;
			fRec292[0] = 0.0f - (fTempPerm1212 * fRec292[1] - (fRec293[0] + fRec293[1])) / fTempPerm1217;
			fRec290[0] = 0.0f - (fRec290[1] * fTempPerm1212 - (fRec292[0] + fRec292[1])) / fTempPerm1217;
			fTempPerm1218 = std::sin(6.28318548f * fTempPerm1205) * (fTempPerm1209 * (fRec290[0] + -1.0f) + 1.0f);
			fTempPerm1219 = std::max<float>(1.0f, fTempPerm1208) + -1.0f;
			fTempPerm1220 = fRec290[0] - fTempPerm1218;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm1221 = std::fmod(std::fabs(fTempPerm1186), 1.0f);
			fTempPerm1222 = fTempPerm1187 + float(fTempPerm1186 > 0.0f);
			fTempPerm1223 = fTempPerm54 + 0.00390625f * fTempPerm1185 * std::pow(2.0f, 0.0f - fTempPerm1222);
			iTempPerm1224 = int(fTempPerm1222);
			fTempPerm1225 = fTempPerm1191 + fTempPerm1184 + fTempPerm1183 + fTempPerm1182 + std::fmod(256.0f * (fTempPerm1223 - (fTempPerm68 + std::floor(fTempPerm1223 - fTempPerm68))) * (float(iTempPerm1224 < 0) / float(int(std::pow(2.0f, float(std::abs(iTempPerm1224))))) + float(iTempPerm1224 == 0) + float((iTempPerm1224 > 0) * int(std::pow(2.0f, float(iTempPerm1224))))), 1.0f);
		}
		if (((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28)))))))))) {
			fTempPerm1226 = fRec297[1] + fTempPerm743 * (fTempPerm1225 - fRec298[1]);
			fTempPerm1227 = fTempPerm1226 / fTempPerm758;
			fRec297[0] = 2.0f * fTempPerm1227 - fRec297[1];
			fTempPerm1228 = fRec298[1] + (fTempPerm743 * fTempPerm1226) / fTempPerm758;
			fRec298[0] = 2.0f * fTempPerm1228 - fRec298[1];
			fRec299 = fTempPerm1228;
		}
		if (((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))) {
			fTempPerm1229 = fTempPerm743 * (fTempPerm1225 - fRec302[1]);
			fTempPerm1230 = (fTempPerm743 * ((fRec302[1] + (fTempPerm1229 + 0.215215757f * fTempPerm806 * fRec300[1]) / fTempPerm765 + fTempPerm767 * fRec301[1]) / fTempPerm768 - fRec300[1])) / fTempPerm765;
			fRec300[0] = fRec300[1] + 2.0f * fTempPerm1230;
			fTempPerm1231 = fRec300[1] + fTempPerm1230;
			fRec301[0] = fRec301[1] + 2.0f * (fTempPerm743 * (0.215215757f * fTempPerm764 * fTempPerm1231 - fRec301[1])) / fTempPerm765;
			fRec302[0] = fRec302[1] + 2.0f * fTempPerm1229 / fTempPerm765;
			fRec303 = fTempPerm1231;
		}
		if (((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24)))))))))) {
			fTempPerm1232 = fTempPerm1225 - (fRec305[1] + fTempPerm757 * fRec306[1]);
			fTempPerm1233 = (fTempPerm743 * fTempPerm1232) / fTempPerm758;
			fTempPerm1234 = std::max<float>(-1.0f, std::min<float>(1.0f, fRec306[1] + fTempPerm1233));
			fTempPerm1235 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1234);
			fTempPerm1236 = fTempPerm743 * fTempPerm1234 * fTempPerm1235;
			fRec304 = fRec305[1] + fTempPerm1236;
			fRec305[0] = fRec305[1] + 2.0f * fTempPerm1236;
			fTempPerm1237 = fTempPerm1234 * fTempPerm1235;
			fRec306[0] = fTempPerm1233 + fTempPerm1237;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fTempPerm1238 = (fTempPerm740 * (fTempPerm742 * fRec299 + fTempPerm762 * fRec303 + fTempPerm772 * fRec304)) / fTempPerm779 + fTempPerm780 * fTempPerm1225;
			fVec50[0] = fTempPerm1238;
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fTempPerm1239 = fTempPerm1238 - fVec50[1];
		}
		float fElse202 = fConst0 * fTempPerm1239;
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec308[0] = ((std::fabs(fTempPerm1239) < 0.5f) ? fElse202 : fRec308[1]);
		}
		if ((iControl[49])) {
			fTempPerm1240 = 1.0f / std::tan(fConst2 * std::min<float>(fConst3, float(std::max<int>(20, int(fRec308[0])))));
			fTempPerm1241 = 1.0f - fTempPerm1240;
		}
		if ((iControl[49] | iControl[42])) {
			fTempPerm1242 = std::floor(fTempPerm1238);
			fTempPerm1243 = fTempPerm1238 - fTempPerm1242;
			fVec51[0] = fTempPerm1243;
			iTempPerm1244 = fTempPerm1243 < 0.5f;
			iVec52[0] = iTempPerm1244;
		}
		if ((iControl[49])) {
			iTempPerm1245 = (iVec52[1] <= 0) & (iTempPerm1244 > 0);
			fRec313[0] = fRec313[1] * float(1 - iTempPerm1245) + 4.65661287e-10f * fTemp41 * float(iTempPerm1245);
			fTempPerm1246 = fTempPerm1240 + 1.0f;
			fRec312[0] = 0.0f - (fTempPerm1241 * fRec312[1] - (fRec313[0] + fRec313[1])) / fTempPerm1246;
			fRec311[0] = 0.0f - (fTempPerm1241 * fRec311[1] - (fRec312[0] + fRec312[1])) / fTempPerm1246;
			fRec310[0] = 0.0f - (fTempPerm1241 * fRec310[1] - (fRec311[0] + fRec311[1])) / fTempPerm1246;
			fRec309[0] = 0.0f - (fTempPerm1241 * fRec309[1] - (fRec310[0] + fRec310[1])) / fTempPerm1246;
			fRec307[0] = 0.0f - (fRec307[1] * fTempPerm1241 - (fRec309[0] + fRec309[1])) / fTempPerm1246;
			fTempPerm1247 = std::sin(6.28318548f * fTempPerm1238) * (fTempPerm1209 * (fRec307[0] + -1.0f) + 1.0f);
			fTempPerm1248 = fTempPerm1218 + fTempPerm1219 * fTempPerm1220 + fTempPerm1221 * (fTempPerm1247 - (fTempPerm1218 + fTempPerm1219 * (fTempPerm1220 - fRec307[0] - fTempPerm1247)));
		}
		if ((iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
			fTempPerm1249 = fTempPerm1207 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec291[0] - fConst7))));
		}
		if ((iControl[48])) {
			fTempPerm1250 = 0.25f * fTempPerm1249;
			fTempPerm1251 = std::floor(fTempPerm1205 + 0.75f - fTempPerm1250);
			fTempPerm1252 = 0.75f - (fTempPerm1250 + fTempPerm1251);
		}
		if ((iControl[48] | (iControl[46] | iControl[44]))) {
			fTempPerm1253 = 1.0f - fTempPerm1249;
		}
		if ((iControl[48] | iControl[44])) {
			fTempPerm1254 = 0.5f * fTempPerm1253;
		}
		if ((iControl[48])) {
			fTempPerm1255 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1254));
			fTempPerm1256 = 0.5f - fTempPerm1255;
		}
		if ((iControl[48] | iControl[45])) {
			fTempPerm1257 = fTempPerm1249 + 1.0f;
		}
		if ((iControl[48])) {
			fTempPerm1258 = std::cos(6.28318548f * (fTempPerm1205 + std::min<float>(((fTempPerm1205 + fTempPerm1252) * fTempPerm1256) / fTempPerm1255, (fTempPerm1256 * ((fTempPerm1251 + 0.25f * fTempPerm1257) - fTempPerm1205)) / (1.0f - fTempPerm1255)) + fTempPerm1252));
		}
		if ((iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
			fTempPerm1259 = fTempPerm1207 * (1.0f - std::min<float>(1.0f, std::max<float>(0.0f, fConst6 * (fRec308[0] - fConst7))));
		}
		if ((iControl[48])) {
			fTempPerm1260 = 0.25f * fTempPerm1259;
			fTempPerm1261 = std::floor(fTempPerm1238 + 0.75f - fTempPerm1260);
			fTempPerm1262 = 0.75f - (fTempPerm1260 + fTempPerm1261);
		}
		if ((iControl[48] | (iControl[46] | iControl[44]))) {
			fTempPerm1263 = 1.0f - fTempPerm1259;
		}
		if ((iControl[48] | iControl[44])) {
			fTempPerm1264 = 0.5f * fTempPerm1263;
		}
		if ((iControl[48])) {
			fTempPerm1265 = std::min<float>(0.5f, std::max<float>(0.00999999978f, fTempPerm1264));
			fTempPerm1266 = 0.5f - fTempPerm1265;
		}
		if ((iControl[48] | iControl[45])) {
			fTempPerm1267 = fTempPerm1259 + 1.0f;
		}
		if ((iControl[48])) {
			fTempPerm1268 = fTempPerm1258 + fTempPerm1221 * (std::cos(6.28318548f * (fTempPerm1238 + std::min<float>(((fTempPerm1238 + fTempPerm1262) * fTempPerm1266) / fTempPerm1265, (fTempPerm1266 * ((fTempPerm1261 + 0.25f * fTempPerm1267) - fTempPerm1238)) / (1.0f - fTempPerm1265)) + fTempPerm1262)) - fTempPerm1258);
		}
		if ((iControl[47])) {
			fTempPerm1269 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1249));
			fTempPerm1270 = 1.0f - fTempPerm1269;
			fTempPerm1271 = 0.25f * fTempPerm1270;
			fTempPerm1272 = fTempPerm1205 - (fTempPerm1271 + std::floor(fTempPerm1205 - fTempPerm1271));
			fTempPerm1273 = 2.0f * fTempPerm1272;
			fTempPerm1274 = std::floor(fTempPerm1273 + 1.0f);
			fTempPerm1275 = std::cos(3.14159274f * (float(fTempPerm1272 >= 0.5f) + fTempPerm1273 + 1.0f - (fTempPerm1274 + std::min<float>(fTempPerm1273 + 1.0f - fTempPerm1274, (fTempPerm1269 * (fTempPerm1274 - fTempPerm1273)) / fTempPerm1270))));
			fTempPerm1276 = std::min<float>(1.0f, std::max<float>(1.17549435e-38f, fTempPerm1259));
			fTempPerm1277 = 1.0f - fTempPerm1276;
			fTempPerm1278 = 0.25f * fTempPerm1277;
			fTempPerm1279 = fTempPerm1238 - (fTempPerm1278 + std::floor(fTempPerm1238 - fTempPerm1278));
			fTempPerm1280 = 2.0f * fTempPerm1279;
			fTempPerm1281 = std::floor(fTempPerm1280 + 1.0f);
			fTempPerm1282 = fTempPerm1275 + fTempPerm1221 * (std::cos(3.14159274f * (float(fTempPerm1279 >= 0.5f) + fTempPerm1280 + 1.0f - (fTempPerm1281 + std::min<float>(fTempPerm1280 + 1.0f - fTempPerm1281, (fTempPerm1276 * (fTempPerm1281 - fTempPerm1280)) / fTempPerm1277)))) - fTempPerm1275);
		}
		if ((iControl[46])) {
			fTempPerm1283 = 0.25f * fTempPerm1253;
			fTempPerm1284 = fTempPerm1283 + std::floor(fTempPerm1205 - fTempPerm1283);
		}
		if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
			fTempPerm1285 = 1.0f - fTempPerm1205;
		}
		if ((iControl[46])) {
			fTempPerm1286 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1249));
			fTempPerm1287 = std::cos(6.28318548f * (fTempPerm1205 - (fTempPerm1284 + std::min<float>(fTempPerm1205 - fTempPerm1284, ((fTempPerm1284 + fTempPerm1285) * fTempPerm1286) / (1.0f - fTempPerm1286)))));
			fTempPerm1288 = 0.25f * fTempPerm1263;
			fTempPerm1289 = fTempPerm1288 + std::floor(fTempPerm1238 - fTempPerm1288);
		}
		if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
			fTempPerm1290 = 1.0f - fTempPerm1238;
		}
		if ((iControl[46])) {
			fTempPerm1291 = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1259));
			fTempPerm1292 = fTempPerm1287 + fTempPerm1221 * (std::cos(6.28318548f * (fTempPerm1238 - (fTempPerm1289 + std::min<float>(fTempPerm1238 - fTempPerm1289, ((fTempPerm1289 + fTempPerm1290) * fTempPerm1291) / (1.0f - fTempPerm1291))))) - fTempPerm1287);
		}
		if ((iControl[45])) {
			fTempPerm1293 = 0.125f * fTempPerm1257;
			fTempPerm1294 = fTempPerm1293 + std::floor(fTempPerm1205 - fTempPerm1293);
			fTempPerm1295 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1249));
			fTempPerm1296 = 0.49000001f * fTempPerm1295;
			fTempPerm1297 = std::cos(12.566371f * ((fTempPerm1205 + std::min<float>(0.49000001f * ((fTempPerm1205 - fTempPerm1294) * fTempPerm1295) / (0.5f - fTempPerm1296), 0.49000001f * (fTempPerm1295 * (fTempPerm1294 + fTempPerm1285)) / (fTempPerm1296 + 0.5f))) - fTempPerm1294));
			fTempPerm1298 = 0.125f * fTempPerm1267;
			fTempPerm1299 = fTempPerm1298 + std::floor(fTempPerm1238 - fTempPerm1298);
			fTempPerm1300 = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1259));
			fTempPerm1301 = 0.49000001f * fTempPerm1300;
			fTempPerm1302 = fTempPerm1297 + fTempPerm1221 * (std::cos(12.566371f * ((fTempPerm1238 + std::min<float>(0.49000001f * ((fTempPerm1238 - fTempPerm1299) * fTempPerm1300) / (0.5f - fTempPerm1301), 0.49000001f * (fTempPerm1300 * (fTempPerm1299 + fTempPerm1290)) / (fTempPerm1301 + 0.5f))) - fTempPerm1299)) - fTempPerm1297);
		}
		if ((iControl[44])) {
			fTempPerm1303 = 0.25f * (std::min<float>(0.975000024f, fTempPerm1249) + 1.0f);
			fTempPerm1304 = fTempPerm1303 + std::floor(fTempPerm1205 - fTempPerm1303);
			fTempPerm1305 = fTempPerm1205 - fTempPerm1304;
		}
		float fThen203 = 0.5f * ((fTempPerm1205 + -0.5f - fTempPerm1304) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1254)) + 1.0f);
		if ((iControl[44])) {
			fTempPerm1306 = std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1305 < 0.5f) ? fTempPerm1305 : fThen203)));
			fTempPerm1307 = 0.25f * (std::min<float>(0.975000024f, fTempPerm1259) + 1.0f);
			fTempPerm1308 = fTempPerm1307 + std::floor(fTempPerm1238 - fTempPerm1307);
			fTempPerm1309 = fTempPerm1238 - fTempPerm1308;
		}
		float fThen204 = 0.5f * ((fTempPerm1238 + -0.5f - fTempPerm1308) / std::max<float>(0.00999999978f, std::min<float>(0.5f, fTempPerm1264)) + 1.0f);
		if ((iControl[44])) {
			fTempPerm1310 = fTempPerm1306 + fTempPerm1221 * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1309 < 0.5f) ? fTempPerm1309 : fThen204))) - fTempPerm1306);
		}
		if ((iControl[43] | iControl[41])) {
			fTempPerm1311 = fTempPerm1205 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec291[0] * fControl[974] * fTempPerm1206)) / fRec291[0]);
		}
		if ((iControl[43])) {
			fTempPerm1312 = (0.0f - fTempPerm1285) * (1.0f - std::cos(6.28318548f * (fTempPerm1311 + 1.0f - std::floor(fTempPerm1311 + 1.0f))));
		}
		if ((iControl[43] | iControl[41])) {
			fTempPerm1313 = fTempPerm1238 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec308[0] * fControl[974] * fTempPerm1206)) / fRec308[0]);
		}
		if ((iControl[43])) {
			fTempPerm1314 = fTempPerm1312 + fTempPerm1221 * ((0.0f - fTempPerm1290) * (1.0f - std::cos(6.28318548f * (fTempPerm1313 + 1.0f - std::floor(fTempPerm1313 + 1.0f)))) - fTempPerm1312) + 1.0f;
		}
		float fThen205 = 2.0f * (1.0f - fTempPerm1214);
		float fElse205 = 2.0f * fTempPerm1214;
		if ((iControl[42])) {
			fTempPerm1315 = fTempPerm1205 - (fTempPerm1213 + fVec48[1]);
		}
		float fElse206 = fConst0 * fTempPerm1315;
		if ((iControl[42])) {
			fRec314[0] = ((std::fabs(fTempPerm1315) < 0.5f) ? fElse206 : fRec314[1]);
			fTempPerm1316 = fTempPerm1214 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec314[0] * fControl[974] * fTempPerm1206)) / fRec314[0]);
			fTempPerm1317 = ((iTempPerm1215) ? fElse205 : fThen205) * (std::cos(6.28318548f * (fTempPerm1316 + 1.0f - std::floor(fTempPerm1316 + 1.0f))) + 1.0f);
		}
		float fThen207 = 2.0f * (1.0f - fTempPerm1243);
		float fElse207 = 2.0f * fTempPerm1243;
		if ((iControl[42])) {
			fTempPerm1318 = fTempPerm1238 - (fTempPerm1242 + fVec51[1]);
		}
		float fElse208 = fConst0 * fTempPerm1318;
		if ((iControl[42])) {
			fRec315[0] = ((std::fabs(fTempPerm1318) < 0.5f) ? fElse208 : fRec315[1]);
			fTempPerm1319 = fTempPerm1243 * std::max<float>(1.0f, std::min<float>(fConst8, std::max<float>(0.0f, fRec315[0] * fControl[974] * fTempPerm1206)) / fRec315[0]);
			fTempPerm1320 = fTempPerm1317 + fTempPerm1221 * (((iTempPerm1244) ? fElse207 : fThen207) * (std::cos(6.28318548f * (fTempPerm1319 + 1.0f - std::floor(fTempPerm1319 + 1.0f))) + 1.0f) - fTempPerm1317) + -1.0f;
		}
		if ((iControl[41])) {
			fTempPerm1321 = std::min<float>(1.0f, 2.0f * fTempPerm1285) * std::sin(6.28318548f * (fTempPerm1311 - std::floor(fTempPerm1311)));
			fTempPerm1322 = fTempPerm1321 + fTempPerm1221 * (std::min<float>(1.0f, 2.0f * fTempPerm1290) * std::sin(6.28318548f * (fTempPerm1313 - std::floor(fTempPerm1313))) - fTempPerm1321);
		}
		fRec171[0] = fControl[300] * fTempPerm1248 + fControl[299] * fTempPerm1268 + fControl[298] * fTempPerm1282 + fControl[297] * fTempPerm1292 + fControl[296] * fTempPerm1302 + fControl[295] * fTempPerm1310 + fControl[294] * fTempPerm1314 + fControl[293] * fTempPerm1320 + fControl[292] * fTempPerm1322;
		float fTemp1382 = fRec169[0] - fRec168[0];
		float fTemp1383 = std::min<float>(1.0f, std::max<float>(0.0f, fControl[996] + (fTemp44 * (fTemp787 - fTemp789) + fControl[1065] * fTemp46 + fTemp48 * (fTemp786 - fTemp788)) - fControl[995]));
		outputs[1] = FAUSTFLOAT(fTemp6 * (fRec168[0] + fTemp1382 * fTemp1383 + std::min<float>(1.0f, std::max<float>(0.0f, fControl[1016] + (fTemp44 * (fTemp792 - fTemp794) + fControl[1066] * fTemp46 + fTemp48 * (fTemp791 - fTemp793)) - fControl[1015])) * (fRec170[0] - (fRec168[0] + fTemp1383 * (fTemp1382 - fRec171[0] - fRec170[0])))));
		fVec0[1] = fVec0[0];
		iVec1[1] = iVec1[0];
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
		fRec17[1] = fRec17[0];
		fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))))))))))))))))))))))))))))) {
			fRec24[1] = fRec24[0];
			fRec25[1] = fRec25[0];
			iVec4[1] = iVec4[0];
			fRec23[1] = fRec23[0];
			fRec26[1] = fRec26[0];
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22)))))))))) {
			fRec20[1] = fRec20[0];
			fRec21[1] = fRec21[0];
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30)))))))))) {
			fRec27[1] = fRec27[0];
			fRec28[1] = fRec28[0];
			fRec29[1] = fRec29[0];
		}
		if (((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29)))))))))) {
			fRec32[1] = fRec32[0];
			fRec33[1] = fRec33[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fVec5[1] = fVec5[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec35[1] = fRec35[0];
		}
		if ((iControl[3] | iControl[69])) {
			fVec6[1] = fVec6[0];
			iVec7[1] = iVec7[0];
		}
		if ((iControl[3])) {
			fRec40[1] = fRec40[0];
			fRec39[1] = fRec39[0];
			fRec38[1] = fRec38[0];
			fRec37[1] = fRec37[0];
			fRec36[1] = fRec36[0];
			fRec34[1] = fRec34[0];
		}
		if (((iControl[3] & iTempPerm22) | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22)))))))))) {
			fRec41[1] = fRec41[0];
			fRec42[1] = fRec42[0];
		}
		if (((iControl[3] & iTempPerm30) | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30)))))))))) {
			fRec44[1] = fRec44[0];
			fRec45[1] = fRec45[0];
			fRec46[1] = fRec46[0];
		}
		if (((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29)))))))))) {
			fRec49[1] = fRec49[0];
			fRec50[1] = fRec50[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fVec8[1] = fVec8[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec52[1] = fRec52[0];
		}
		if ((iControl[3] | iControl[69])) {
			fVec9[1] = fVec9[0];
			iVec10[1] = iVec10[0];
		}
		if ((iControl[3])) {
			fRec57[1] = fRec57[0];
			fRec56[1] = fRec56[0];
			fRec55[1] = fRec55[0];
			fRec54[1] = fRec54[0];
			fRec53[1] = fRec53[0];
			fRec51[1] = fRec51[0];
		}
		if ((iControl[69])) {
			fRec58[1] = fRec58[0];
			fRec59[1] = fRec59[0];
		}
		fRec2[1] = fRec2[0];
		if (((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22)))))))))) {
			fRec60[1] = fRec60[0];
			fRec61[1] = fRec61[0];
		}
		if (((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30)))))))))) {
			fRec63[1] = fRec63[0];
			fRec64[1] = fRec64[0];
			fRec65[1] = fRec65[0];
		}
		if (((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29)))))))))) {
			fRec68[1] = fRec68[0];
			fRec69[1] = fRec69[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fVec11[1] = fVec11[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec71[1] = fRec71[0];
		}
		if ((iControl[67] | iControl[60])) {
			fVec12[1] = fVec12[0];
			iVec13[1] = iVec13[0];
		}
		if ((iControl[67])) {
			fRec76[1] = fRec76[0];
			fRec75[1] = fRec75[0];
			fRec74[1] = fRec74[0];
			fRec73[1] = fRec73[0];
			fRec72[1] = fRec72[0];
			fRec70[1] = fRec70[0];
		}
		if (((iControl[67] & iTempPerm22) | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22)))))))))) {
			fRec77[1] = fRec77[0];
			fRec78[1] = fRec78[0];
		}
		if (((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30)))))))))) {
			fRec80[1] = fRec80[0];
			fRec81[1] = fRec81[0];
			fRec82[1] = fRec82[0];
		}
		if (((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29)))))))))) {
			fRec85[1] = fRec85[0];
			fRec86[1] = fRec86[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fVec14[1] = fVec14[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec88[1] = fRec88[0];
		}
		if ((iControl[67] | iControl[60])) {
			fVec15[1] = fVec15[0];
			iVec16[1] = iVec16[0];
		}
		if ((iControl[67])) {
			fRec93[1] = fRec93[0];
			fRec92[1] = fRec92[0];
			fRec91[1] = fRec91[0];
			fRec90[1] = fRec90[0];
			fRec89[1] = fRec89[0];
			fRec87[1] = fRec87[0];
		}
		if ((iControl[60])) {
			fRec94[1] = fRec94[0];
			fRec95[1] = fRec95[0];
		}
		fRec3[1] = fRec3[0];
		if (((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22)))))))))) {
			fRec96[1] = fRec96[0];
			fRec97[1] = fRec97[0];
		}
		if (((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30)))))))))) {
			fRec99[1] = fRec99[0];
			fRec100[1] = fRec100[0];
			fRec101[1] = fRec101[0];
		}
		if (((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29)))))))))) {
			fRec104[1] = fRec104[0];
			fRec105[1] = fRec105[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fVec17[1] = fVec17[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec107[1] = fRec107[0];
		}
		if ((iControl[58] | iControl[51])) {
			fVec18[1] = fVec18[0];
			iVec19[1] = iVec19[0];
		}
		if ((iControl[58])) {
			fRec112[1] = fRec112[0];
			fRec111[1] = fRec111[0];
			fRec110[1] = fRec110[0];
			fRec109[1] = fRec109[0];
			fRec108[1] = fRec108[0];
			fRec106[1] = fRec106[0];
		}
		if (((iControl[58] & iTempPerm22) | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22)))))))))) {
			fRec113[1] = fRec113[0];
			fRec114[1] = fRec114[0];
		}
		if (((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30)))))))))) {
			fRec116[1] = fRec116[0];
			fRec117[1] = fRec117[0];
			fRec118[1] = fRec118[0];
		}
		if (((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29)))))))))) {
			fRec121[1] = fRec121[0];
			fRec122[1] = fRec122[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fVec20[1] = fVec20[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec124[1] = fRec124[0];
		}
		if ((iControl[58] | iControl[51])) {
			fVec21[1] = fVec21[0];
			iVec22[1] = iVec22[0];
		}
		if ((iControl[58])) {
			fRec129[1] = fRec129[0];
			fRec128[1] = fRec128[0];
			fRec127[1] = fRec127[0];
			fRec126[1] = fRec126[0];
			fRec125[1] = fRec125[0];
			fRec123[1] = fRec123[0];
		}
		if ((iControl[51])) {
			fRec130[1] = fRec130[0];
			fRec131[1] = fRec131[0];
		}
		fRec4[1] = fRec4[0];
		if (((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22)))))))))) {
			fRec132[1] = fRec132[0];
			fRec133[1] = fRec133[0];
		}
		if (((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))) {
			fRec135[1] = fRec135[0];
			fRec136[1] = fRec136[0];
			fRec137[1] = fRec137[0];
		}
		if (((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29)))))))))) {
			fRec140[1] = fRec140[0];
			fRec141[1] = fRec141[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fVec23[1] = fVec23[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec143[1] = fRec143[0];
		}
		if ((iControl[49] | iControl[42])) {
			fVec24[1] = fVec24[0];
			iVec25[1] = iVec25[0];
		}
		if ((iControl[49])) {
			fRec148[1] = fRec148[0];
			fRec147[1] = fRec147[0];
			fRec146[1] = fRec146[0];
			fRec145[1] = fRec145[0];
			fRec144[1] = fRec144[0];
			fRec142[1] = fRec142[0];
		}
		if (((iControl[49] & iTempPerm22) | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22)))))))))) {
			fRec149[1] = fRec149[0];
			fRec150[1] = fRec150[0];
		}
		if (((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))) {
			fRec152[1] = fRec152[0];
			fRec153[1] = fRec153[0];
			fRec154[1] = fRec154[0];
		}
		if (((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29)))))))))) {
			fRec157[1] = fRec157[0];
			fRec158[1] = fRec158[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fVec26[1] = fVec26[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec160[1] = fRec160[0];
		}
		if ((iControl[49] | iControl[42])) {
			fVec27[1] = fVec27[0];
			iVec28[1] = iVec28[0];
		}
		if ((iControl[49])) {
			fRec165[1] = fRec165[0];
			fRec164[1] = fRec164[0];
			fRec163[1] = fRec163[0];
			fRec162[1] = fRec162[0];
			fRec161[1] = fRec161[0];
			fRec159[1] = fRec159[0];
		}
		if ((iControl[42])) {
			fRec166[1] = fRec166[0];
			fRec167[1] = fRec167[0];
		}
		fRec5[1] = fRec5[0];
		if (((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28)))))))))) {
			fRec172[1] = fRec172[0];
			fRec173[1] = fRec173[0];
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26)))))))))) {
			fRec175[1] = fRec175[0];
			fRec176[1] = fRec176[0];
			fRec177[1] = fRec177[0];
		}
		if (((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24)))))))))) {
			fRec180[1] = fRec180[0];
			fRec181[1] = fRec181[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fVec29[1] = fVec29[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec183[1] = fRec183[0];
		}
		if ((iControl[3] | iControl[69])) {
			fVec30[1] = fVec30[0];
			iVec31[1] = iVec31[0];
		}
		if ((iControl[3])) {
			fRec188[1] = fRec188[0];
			fRec187[1] = fRec187[0];
			fRec186[1] = fRec186[0];
			fRec185[1] = fRec185[0];
			fRec184[1] = fRec184[0];
			fRec182[1] = fRec182[0];
		}
		if (((iControl[3] & iTempPerm28) | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28)))))))))) {
			fRec189[1] = fRec189[0];
			fRec190[1] = fRec190[0];
		}
		if (((iControl[3] & iTempPerm26) | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26)))))))))) {
			fRec192[1] = fRec192[0];
			fRec193[1] = fRec193[0];
			fRec194[1] = fRec194[0];
		}
		if (((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24)))))))))) {
			fRec197[1] = fRec197[0];
			fRec198[1] = fRec198[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68]))))))))) {
			fVec32[1] = fVec32[0];
		}
		if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68])))))))) {
			fRec200[1] = fRec200[0];
		}
		if ((iControl[3] | iControl[69])) {
			fVec33[1] = fVec33[0];
			iVec34[1] = iVec34[0];
		}
		if ((iControl[3])) {
			fRec205[1] = fRec205[0];
			fRec204[1] = fRec204[0];
			fRec203[1] = fRec203[0];
			fRec202[1] = fRec202[0];
			fRec201[1] = fRec201[0];
			fRec199[1] = fRec199[0];
		}
		if ((iControl[69])) {
			fRec206[1] = fRec206[0];
			fRec207[1] = fRec207[0];
		}
		fRec168[1] = fRec168[0];
		if (((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28)))))))))) {
			fRec208[1] = fRec208[0];
			fRec209[1] = fRec209[0];
		}
		if (((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26)))))))))) {
			fRec211[1] = fRec211[0];
			fRec212[1] = fRec212[0];
			fRec213[1] = fRec213[0];
		}
		if (((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24)))))))))) {
			fRec216[1] = fRec216[0];
			fRec217[1] = fRec217[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fVec35[1] = fVec35[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec219[1] = fRec219[0];
		}
		if ((iControl[67] | iControl[60])) {
			fVec36[1] = fVec36[0];
			iVec37[1] = iVec37[0];
		}
		if ((iControl[67])) {
			fRec224[1] = fRec224[0];
			fRec223[1] = fRec223[0];
			fRec222[1] = fRec222[0];
			fRec221[1] = fRec221[0];
			fRec220[1] = fRec220[0];
			fRec218[1] = fRec218[0];
		}
		if (((iControl[67] & iTempPerm28) | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28)))))))))) {
			fRec225[1] = fRec225[0];
			fRec226[1] = fRec226[0];
		}
		if (((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26)))))))))) {
			fRec228[1] = fRec228[0];
			fRec229[1] = fRec229[0];
			fRec230[1] = fRec230[0];
		}
		if (((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24)))))))))) {
			fRec233[1] = fRec233[0];
			fRec234[1] = fRec234[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59]))))))))) {
			fVec38[1] = fVec38[0];
		}
		if ((iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59])))))))) {
			fRec236[1] = fRec236[0];
		}
		if ((iControl[67] | iControl[60])) {
			fVec39[1] = fVec39[0];
			iVec40[1] = iVec40[0];
		}
		if ((iControl[67])) {
			fRec241[1] = fRec241[0];
			fRec240[1] = fRec240[0];
			fRec239[1] = fRec239[0];
			fRec238[1] = fRec238[0];
			fRec237[1] = fRec237[0];
			fRec235[1] = fRec235[0];
		}
		if ((iControl[60])) {
			fRec242[1] = fRec242[0];
			fRec243[1] = fRec243[0];
		}
		fRec169[1] = fRec169[0];
		if (((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28)))))))))) {
			fRec244[1] = fRec244[0];
			fRec245[1] = fRec245[0];
		}
		if (((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26)))))))))) {
			fRec247[1] = fRec247[0];
			fRec248[1] = fRec248[0];
			fRec249[1] = fRec249[0];
		}
		if (((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24)))))))))) {
			fRec252[1] = fRec252[0];
			fRec253[1] = fRec253[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fVec41[1] = fVec41[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec255[1] = fRec255[0];
		}
		if ((iControl[58] | iControl[51])) {
			fVec42[1] = fVec42[0];
			iVec43[1] = iVec43[0];
		}
		if ((iControl[58])) {
			fRec260[1] = fRec260[0];
			fRec259[1] = fRec259[0];
			fRec258[1] = fRec258[0];
			fRec257[1] = fRec257[0];
			fRec256[1] = fRec256[0];
			fRec254[1] = fRec254[0];
		}
		if (((iControl[58] & iTempPerm28) | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28)))))))))) {
			fRec261[1] = fRec261[0];
			fRec262[1] = fRec262[0];
		}
		if (((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26)))))))))) {
			fRec264[1] = fRec264[0];
			fRec265[1] = fRec265[0];
			fRec266[1] = fRec266[0];
		}
		if (((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24)))))))))) {
			fRec269[1] = fRec269[0];
			fRec270[1] = fRec270[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50]))))))))) {
			fVec44[1] = fVec44[0];
		}
		if ((iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50])))))))) {
			fRec272[1] = fRec272[0];
		}
		if ((iControl[58] | iControl[51])) {
			fVec45[1] = fVec45[0];
			iVec46[1] = iVec46[0];
		}
		if ((iControl[58])) {
			fRec277[1] = fRec277[0];
			fRec276[1] = fRec276[0];
			fRec275[1] = fRec275[0];
			fRec274[1] = fRec274[0];
			fRec273[1] = fRec273[0];
			fRec271[1] = fRec271[0];
		}
		if ((iControl[51])) {
			fRec278[1] = fRec278[0];
			fRec279[1] = fRec279[0];
		}
		fRec170[1] = fRec170[0];
		if (((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28)))))))))) {
			fRec280[1] = fRec280[0];
			fRec281[1] = fRec281[0];
		}
		if (((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))) {
			fRec283[1] = fRec283[0];
			fRec284[1] = fRec284[0];
			fRec285[1] = fRec285[0];
		}
		if (((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24)))))))))) {
			fRec288[1] = fRec288[0];
			fRec289[1] = fRec289[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fVec47[1] = fVec47[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec291[1] = fRec291[0];
		}
		if ((iControl[49] | iControl[42])) {
			fVec48[1] = fVec48[0];
			iVec49[1] = iVec49[0];
		}
		if ((iControl[49])) {
			fRec296[1] = fRec296[0];
			fRec295[1] = fRec295[0];
			fRec294[1] = fRec294[0];
			fRec293[1] = fRec293[0];
			fRec292[1] = fRec292[0];
			fRec290[1] = fRec290[0];
		}
		if (((iControl[49] & iTempPerm28) | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28)))))))))) {
			fRec297[1] = fRec297[0];
			fRec298[1] = fRec298[0];
		}
		if (((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))) {
			fRec300[1] = fRec300[0];
			fRec301[1] = fRec301[0];
			fRec302[1] = fRec302[0];
		}
		if (((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24)))))))))) {
			fRec305[1] = fRec305[0];
			fRec306[1] = fRec306[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))) {
			fVec50[1] = fVec50[0];
		}
		if ((iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41])))))))) {
			fRec308[1] = fRec308[0];
		}
		if ((iControl[49] | iControl[42])) {
			fVec51[1] = fVec51[0];
			iVec52[1] = iVec52[0];
		}
		if ((iControl[49])) {
			fRec313[1] = fRec313[0];
			fRec312[1] = fRec312[0];
			fRec311[1] = fRec311[0];
			fRec310[1] = fRec310[0];
			fRec309[1] = fRec309[0];
			fRec307[1] = fRec307[0];
		}
		if ((iControl[42])) {
			fRec314[1] = fRec314[0];
			fRec315[1] = fRec315[0];
		}
		fRec171[1] = fRec171[0];
	}

};

#endif
