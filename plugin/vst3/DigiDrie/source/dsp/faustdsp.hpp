/* ------------------------------------------------------------
author: "Bart Brouns"
license: "AGPLv3"
name: "DigiFaustMidi"
Code generated with Faust 2.44.2 (https://faust.grame.fr)
Compilation options: -lang cpp -os0 -mapp -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#pragma once

#ifndef __mydsp_H__
  #define __mydsp_H__

  #ifndef FAUSTFLOAT
    #define FAUSTFLOAT float
  #endif

  #include <algorithm>
  #include <array>
  #include <cmath>
  #include <cstdint>
  #include <math.h>

static float ftbl0mydspSIG0[65536];
static float mydsp_faustpower2_f(float value) { return value * value; }

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
  float fTempPerm53;
  int iVec4[2];
  FAUSTFLOAT fCheckbox0;
  float fRec23[2];
  FAUSTFLOAT fVslider8;
  float fTempPerm54;
  float fRec26[2];
  float fTempPerm55;
  FAUSTFLOAT fHslider194;
  FAUSTFLOAT fHslider195;
  FAUSTFLOAT fHslider196;
  FAUSTFLOAT fHslider197;
  FAUSTFLOAT fHslider198;
  FAUSTFLOAT fHslider199;
  FAUSTFLOAT fHslider200;
  float fTempPerm56;
  FAUSTFLOAT fHslider201;
  FAUSTFLOAT fHslider202;
  float fTempPerm57;
  FAUSTFLOAT fHslider203;
  FAUSTFLOAT fHslider204;
  FAUSTFLOAT fHslider205;
  FAUSTFLOAT fHslider206;
  FAUSTFLOAT fHslider207;
  float fTempPerm58;
  FAUSTFLOAT fHslider208;
  FAUSTFLOAT fHslider209;
  float fTempPerm59;
  float fTempPerm60;
  FAUSTFLOAT fHslider210;
  FAUSTFLOAT fHslider211;
  FAUSTFLOAT fHslider212;
  FAUSTFLOAT fHslider213;
  FAUSTFLOAT fHslider214;
  FAUSTFLOAT fHslider215;
  FAUSTFLOAT fHslider216;
  float fTempPerm61;
  FAUSTFLOAT fHslider217;
  FAUSTFLOAT fHslider218;
  float fTempPerm62;
  FAUSTFLOAT fHslider219;
  FAUSTFLOAT fHslider220;
  FAUSTFLOAT fHslider221;
  FAUSTFLOAT fHslider222;
  FAUSTFLOAT fHslider223;
  float fTempPerm63;
  FAUSTFLOAT fHslider224;
  FAUSTFLOAT fHslider225;
  float fTempPerm64;
  float fTempPerm65;
  float fTempPerm66;
  float fTempPerm67;
  float fTempPerm68;
  float fTempPerm69;
  float fTempPerm70;
  float fTempPerm71;
  float fTempPerm72;
  float fTempPerm73;
  int iTempPerm74;
  float fTempPerm75;
  FAUSTFLOAT fHslider226;
  FAUSTFLOAT fHslider227;
  FAUSTFLOAT fHslider228;
  FAUSTFLOAT fHslider229;
  FAUSTFLOAT fHslider230;
  FAUSTFLOAT fHslider231;
  FAUSTFLOAT fHslider232;
  float fTempPerm76;
  FAUSTFLOAT fHslider233;
  FAUSTFLOAT fHslider234;
  float fTempPerm77;
  FAUSTFLOAT fHslider235;
  FAUSTFLOAT fHslider236;
  FAUSTFLOAT fHslider237;
  FAUSTFLOAT fHslider238;
  FAUSTFLOAT fHslider239;
  float fTempPerm78;
  FAUSTFLOAT fHslider240;
  FAUSTFLOAT fHslider241;
  float fTempPerm79;
  float fTempPerm80;
  float fTempPerm81;
  int iTempPerm82;
  float fTempPerm83;
  FAUSTFLOAT fHslider242;
  FAUSTFLOAT fHslider243;
  FAUSTFLOAT fHslider244;
  FAUSTFLOAT fHslider245;
  FAUSTFLOAT fHslider246;
  FAUSTFLOAT fHslider247;
  FAUSTFLOAT fHslider248;
  float fTempPerm84;
  FAUSTFLOAT fHslider249;
  FAUSTFLOAT fHslider250;
  float fTempPerm85;
  FAUSTFLOAT fHslider251;
  FAUSTFLOAT fHslider252;
  FAUSTFLOAT fHslider253;
  FAUSTFLOAT fHslider254;
  FAUSTFLOAT fHslider255;
  float fTempPerm86;
  FAUSTFLOAT fHslider256;
  FAUSTFLOAT fHslider257;
  float fTempPerm87;
  float fTempPerm88;
  float fTempPerm89;
  float fTempPerm90;
  float fTempPerm91;
  float fRec20[2];
  float fTempPerm92;
  float fRec21[2];
  float fTempPerm93;
  float fTempPerm94;
  float fTempPerm95;
  float fTempPerm96;
  float fTempPerm97;
  float fTempPerm98;
  float fTempPerm99;
  float fTempPerm100;
  float fTempPerm101;
  float fRec27[2];
  float fTempPerm102;
  float fRec28[2];
  float fRec29[2];
  float fTempPerm103;
  float fTempPerm104;
  float fTempPerm105;
  float fTempPerm106;
  float fTempPerm107;
  float fTempPerm108;
  float fTempPerm109;
  float fRec32[2];
  float fTempPerm110;
  float fRec33[2];
  float fTempPerm111;
  float fTempPerm112;
  float fTempPerm113;
  float fTempPerm114;
  float fVec5[2];
  FAUSTFLOAT fHslider258;
  FAUSTFLOAT fHslider259;
  FAUSTFLOAT fHslider260;
  FAUSTFLOAT fHslider261;
  FAUSTFLOAT fHslider262;
  FAUSTFLOAT fHslider263;
  FAUSTFLOAT fHslider264;
  float fTempPerm115;
  FAUSTFLOAT fHslider265;
  FAUSTFLOAT fHslider266;
  float fTempPerm116;
  FAUSTFLOAT fHslider267;
  FAUSTFLOAT fHslider268;
  FAUSTFLOAT fHslider269;
  FAUSTFLOAT fHslider270;
  FAUSTFLOAT fHslider271;
  float fTempPerm117;
  FAUSTFLOAT fHslider272;
  FAUSTFLOAT fHslider273;
  float fTempPerm118;
  float fTempPerm119;
  float fTempPerm120;
  float fTempPerm121;
  float fTempPerm122;
  float fTempPerm123;
  float fRec35[2];
  float fTempPerm124;
  float fTempPerm125;
  float fTempPerm126;
  float fTempPerm127;
  float fTempPerm128;
  float fVec6[2];
  int iTempPerm129;
  int iVec7[2];
  int iTempPerm130;
  float fRec40[2];
  float fTempPerm131;
  float fRec39[2];
  float fRec38[2];
  float fRec37[2];
  float fRec36[2];
  float fRec34[2];
  float fTempPerm132;
  float fTempPerm133;
  float fTempPerm134;
  float fTempPerm135;
  float fTempPerm136;
  float fTempPerm137;
  float fTempPerm138;
  float fTempPerm139;
  float fTempPerm140;
  int iTempPerm141;
  float fTempPerm142;
  float fTempPerm143;
  int iTempPerm144;
  float fTempPerm145;
  float fTempPerm146;
  float fRec41[2];
  float fTempPerm147;
  float fRec42[2];
  float fTempPerm148;
  float fTempPerm149;
  float fTempPerm150;
  float fRec44[2];
  float fTempPerm151;
  float fRec45[2];
  float fRec46[2];
  float fTempPerm152;
  float fTempPerm153;
  float fTempPerm154;
  float fTempPerm155;
  float fTempPerm156;
  float fRec49[2];
  float fTempPerm157;
  float fRec50[2];
  float fTempPerm158;
  float fTempPerm159;
  float fVec8[2];
  float fTempPerm160;
  float fRec52[2];
  float fTempPerm161;
  float fTempPerm162;
  float fTempPerm163;
  float fTempPerm164;
  float fTempPerm165;
  float fVec9[2];
  int iTempPerm166;
  int iVec10[2];
  int iTempPerm167;
  float fRec57[2];
  float fTempPerm168;
  float fRec56[2];
  float fRec55[2];
  float fRec54[2];
  float fRec53[2];
  float fRec51[2];
  float fTempPerm169;
  float fTempPerm170;
  float fConst6;
  float fConst7;
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
  float fTempPerm217;
  float fTempPerm218;
  float fTempPerm219;
  float fTempPerm220;
  float fTempPerm221;
  float fTempPerm222;
  float fTempPerm223;
  float fTempPerm224;
  float fTempPerm225;
  float fTempPerm226;
  float fTempPerm227;
  float fTempPerm228;
  float fTempPerm229;
  float fTempPerm230;
  float fTempPerm231;
  float fTempPerm232;
  float fTempPerm233;
  float fTempPerm234;
  float fTempPerm235;
  float fTempPerm236;
  float fTempPerm237;
  float fTempPerm238;
  float fTempPerm239;
  float fTempPerm240;
  float fTempPerm241;
  float fTempPerm242;
  float fTempPerm243;
  float fTempPerm244;
  float fTempPerm245;
  float fTempPerm246;
  float fTempPerm247;
  float fTempPerm248;
  float fTempPerm249;
  float fTempPerm250;
  float fTempPerm251;
  float fTempPerm252;
  float fTempPerm253;
  float fTempPerm254;
  float fTempPerm255;
  float fTempPerm256;
  float fConst8;
  float fTempPerm257;
  float fTempPerm258;
  float fTempPerm259;
  float fTempPerm260;
  float fTempPerm261;
  float fTempPerm262;
  float fTempPerm263;
  float fTempPerm264;
  float fTempPerm265;
  float fRec58[2];
  float fTempPerm266;
  float fTempPerm267;
  float fTempPerm268;
  float fTempPerm269;
  float fTempPerm270;
  float fRec59[2];
  float fTempPerm271;
  float fTempPerm272;
  float fTempPerm273;
  float fTempPerm274;
  float fTempPerm275;
  float fTempPerm276;
  float fTempPerm277;
  float fTempPerm278;
  float fRec2[2];
  FAUSTFLOAT fHslider274;
  FAUSTFLOAT fHslider275;
  FAUSTFLOAT fHslider276;
  FAUSTFLOAT fHslider277;
  FAUSTFLOAT fHslider278;
  FAUSTFLOAT fHslider279;
  FAUSTFLOAT fHslider280;
  float fTempPerm279;
  FAUSTFLOAT fHslider281;
  FAUSTFLOAT fHslider282;
  float fTempPerm280;
  FAUSTFLOAT fHslider283;
  FAUSTFLOAT fHslider284;
  FAUSTFLOAT fHslider285;
  FAUSTFLOAT fHslider286;
  FAUSTFLOAT fHslider287;
  float fTempPerm281;
  FAUSTFLOAT fHslider288;
  FAUSTFLOAT fHslider289;
  float fTempPerm282;
  float fTempPerm283;
  FAUSTFLOAT fHslider290;
  FAUSTFLOAT fHslider291;
  FAUSTFLOAT fHslider292;
  FAUSTFLOAT fHslider293;
  FAUSTFLOAT fHslider294;
  FAUSTFLOAT fHslider295;
  FAUSTFLOAT fHslider296;
  float fTempPerm284;
  FAUSTFLOAT fHslider297;
  FAUSTFLOAT fHslider298;
  float fTempPerm285;
  FAUSTFLOAT fHslider299;
  FAUSTFLOAT fHslider300;
  FAUSTFLOAT fHslider301;
  FAUSTFLOAT fHslider302;
  FAUSTFLOAT fHslider303;
  float fTempPerm286;
  FAUSTFLOAT fHslider304;
  FAUSTFLOAT fHslider305;
  float fTempPerm287;
  float fTempPerm288;
  FAUSTFLOAT fHslider306;
  FAUSTFLOAT fHslider307;
  FAUSTFLOAT fHslider308;
  FAUSTFLOAT fHslider309;
  FAUSTFLOAT fHslider310;
  FAUSTFLOAT fHslider311;
  FAUSTFLOAT fHslider312;
  float fTempPerm289;
  FAUSTFLOAT fHslider313;
  FAUSTFLOAT fHslider314;
  float fTempPerm290;
  FAUSTFLOAT fHslider315;
  FAUSTFLOAT fHslider316;
  FAUSTFLOAT fHslider317;
  FAUSTFLOAT fHslider318;
  FAUSTFLOAT fHslider319;
  float fTempPerm291;
  FAUSTFLOAT fHslider320;
  FAUSTFLOAT fHslider321;
  float fTempPerm292;
  float fTempPerm293;
  FAUSTFLOAT fHslider322;
  FAUSTFLOAT fHslider323;
  FAUSTFLOAT fHslider324;
  FAUSTFLOAT fHslider325;
  FAUSTFLOAT fHslider326;
  FAUSTFLOAT fHslider327;
  FAUSTFLOAT fHslider328;
  float fTempPerm294;
  FAUSTFLOAT fHslider329;
  FAUSTFLOAT fHslider330;
  float fTempPerm295;
  FAUSTFLOAT fHslider331;
  FAUSTFLOAT fHslider332;
  FAUSTFLOAT fHslider333;
  FAUSTFLOAT fHslider334;
  FAUSTFLOAT fHslider335;
  float fTempPerm296;
  FAUSTFLOAT fHslider336;
  FAUSTFLOAT fHslider337;
  float fTempPerm297;
  float fTempPerm298;
  FAUSTFLOAT fHslider338;
  FAUSTFLOAT fHslider339;
  FAUSTFLOAT fHslider340;
  FAUSTFLOAT fHslider341;
  FAUSTFLOAT fHslider342;
  FAUSTFLOAT fHslider343;
  FAUSTFLOAT fHslider344;
  float fTempPerm299;
  FAUSTFLOAT fHslider345;
  FAUSTFLOAT fHslider346;
  float fTempPerm300;
  FAUSTFLOAT fHslider347;
  FAUSTFLOAT fHslider348;
  FAUSTFLOAT fHslider349;
  FAUSTFLOAT fHslider350;
  FAUSTFLOAT fHslider351;
  float fTempPerm301;
  FAUSTFLOAT fHslider352;
  FAUSTFLOAT fHslider353;
  float fTempPerm302;
  float fTempPerm303;
  float fTempPerm304;
  float fTempPerm305;
  float fTempPerm306;
  float fTempPerm307;
  float fTempPerm308;
  float fTempPerm309;
  int iTempPerm310;
  float fTempPerm311;
  FAUSTFLOAT fHslider354;
  FAUSTFLOAT fHslider355;
  FAUSTFLOAT fHslider356;
  FAUSTFLOAT fHslider357;
  FAUSTFLOAT fHslider358;
  FAUSTFLOAT fHslider359;
  FAUSTFLOAT fHslider360;
  float fTempPerm312;
  FAUSTFLOAT fHslider361;
  FAUSTFLOAT fHslider362;
  float fTempPerm313;
  FAUSTFLOAT fHslider363;
  FAUSTFLOAT fHslider364;
  FAUSTFLOAT fHslider365;
  FAUSTFLOAT fHslider366;
  FAUSTFLOAT fHslider367;
  float fTempPerm314;
  FAUSTFLOAT fHslider368;
  FAUSTFLOAT fHslider369;
  float fTempPerm315;
  float fTempPerm316;
  float fTempPerm317;
  int iTempPerm318;
  float fTempPerm319;
  float fTempPerm320;
  float fRec60[2];
  float fTempPerm321;
  float fRec61[2];
  float fTempPerm322;
  float fTempPerm323;
  float fRec63[2];
  float fTempPerm324;
  float fRec64[2];
  float fRec65[2];
  float fTempPerm325;
  float fTempPerm326;
  float fTempPerm327;
  float fTempPerm328;
  float fTempPerm329;
  float fRec68[2];
  float fTempPerm330;
  float fRec69[2];
  float fTempPerm331;
  float fTempPerm332;
  float fVec11[2];
  FAUSTFLOAT fHslider370;
  FAUSTFLOAT fHslider371;
  FAUSTFLOAT fHslider372;
  FAUSTFLOAT fHslider373;
  FAUSTFLOAT fHslider374;
  FAUSTFLOAT fHslider375;
  FAUSTFLOAT fHslider376;
  float fTempPerm333;
  FAUSTFLOAT fHslider377;
  FAUSTFLOAT fHslider378;
  float fTempPerm334;
  FAUSTFLOAT fHslider379;
  FAUSTFLOAT fHslider380;
  FAUSTFLOAT fHslider381;
  FAUSTFLOAT fHslider382;
  FAUSTFLOAT fHslider383;
  float fTempPerm335;
  FAUSTFLOAT fHslider384;
  FAUSTFLOAT fHslider385;
  float fTempPerm336;
  float fTempPerm337;
  float fTempPerm338;
  float fTempPerm339;
  float fTempPerm340;
  float fTempPerm341;
  float fRec71[2];
  float fTempPerm342;
  float fTempPerm343;
  float fTempPerm344;
  float fTempPerm345;
  float fTempPerm346;
  float fVec12[2];
  int iTempPerm347;
  int iVec13[2];
  int iTempPerm348;
  float fRec76[2];
  float fTempPerm349;
  float fRec75[2];
  float fRec74[2];
  float fRec73[2];
  float fRec72[2];
  float fRec70[2];
  float fTempPerm350;
  float fTempPerm351;
  float fTempPerm352;
  float fTempPerm353;
  float fTempPerm354;
  float fTempPerm355;
  float fTempPerm356;
  float fTempPerm357;
  float fTempPerm358;
  int iTempPerm359;
  float fTempPerm360;
  float fTempPerm361;
  int iTempPerm362;
  float fTempPerm363;
  float fTempPerm364;
  float fRec77[2];
  float fTempPerm365;
  float fRec78[2];
  float fTempPerm366;
  float fTempPerm367;
  float fRec80[2];
  float fTempPerm368;
  float fRec81[2];
  float fRec82[2];
  float fTempPerm369;
  float fTempPerm370;
  float fTempPerm371;
  float fTempPerm372;
  float fTempPerm373;
  float fRec85[2];
  float fTempPerm374;
  float fRec86[2];
  float fTempPerm375;
  float fTempPerm376;
  float fVec14[2];
  float fTempPerm377;
  float fRec88[2];
  float fTempPerm378;
  float fTempPerm379;
  float fTempPerm380;
  float fTempPerm381;
  float fTempPerm382;
  float fVec15[2];
  int iTempPerm383;
  int iVec16[2];
  int iTempPerm384;
  float fRec93[2];
  float fTempPerm385;
  float fRec92[2];
  float fRec91[2];
  float fRec90[2];
  float fRec89[2];
  float fRec87[2];
  float fTempPerm386;
  float fTempPerm387;
  float fTempPerm388;
  float fTempPerm389;
  float fTempPerm390;
  float fTempPerm391;
  float fTempPerm392;
  float fTempPerm393;
  float fTempPerm394;
  float fTempPerm395;
  float fTempPerm396;
  float fTempPerm397;
  float fTempPerm398;
  float fTempPerm399;
  float fTempPerm400;
  float fTempPerm401;
  float fTempPerm402;
  float fTempPerm403;
  float fTempPerm404;
  float fTempPerm405;
  float fTempPerm406;
  float fTempPerm407;
  float fTempPerm408;
  float fTempPerm409;
  float fTempPerm410;
  float fTempPerm411;
  float fTempPerm412;
  float fTempPerm413;
  float fTempPerm414;
  float fTempPerm415;
  float fTempPerm416;
  float fTempPerm417;
  float fTempPerm418;
  float fTempPerm419;
  float fTempPerm420;
  float fTempPerm421;
  float fTempPerm422;
  float fTempPerm423;
  float fTempPerm424;
  float fTempPerm425;
  float fTempPerm426;
  float fTempPerm427;
  float fTempPerm428;
  float fTempPerm429;
  float fTempPerm430;
  float fTempPerm431;
  float fTempPerm432;
  float fTempPerm433;
  float fTempPerm434;
  float fTempPerm435;
  float fTempPerm436;
  float fTempPerm437;
  float fTempPerm438;
  float fTempPerm439;
  float fTempPerm440;
  float fTempPerm441;
  float fTempPerm442;
  float fTempPerm443;
  float fTempPerm444;
  float fTempPerm445;
  float fTempPerm446;
  float fTempPerm447;
  float fTempPerm448;
  float fTempPerm449;
  float fTempPerm450;
  float fTempPerm451;
  float fTempPerm452;
  float fTempPerm453;
  float fTempPerm454;
  float fTempPerm455;
  float fTempPerm456;
  float fTempPerm457;
  float fTempPerm458;
  float fTempPerm459;
  float fTempPerm460;
  float fTempPerm461;
  float fTempPerm462;
  float fTempPerm463;
  float fTempPerm464;
  float fTempPerm465;
  float fTempPerm466;
  float fTempPerm467;
  float fTempPerm468;
  float fTempPerm469;
  float fTempPerm470;
  float fTempPerm471;
  float fTempPerm472;
  float fTempPerm473;
  float fTempPerm474;
  float fTempPerm475;
  float fTempPerm476;
  float fTempPerm477;
  float fTempPerm478;
  float fTempPerm479;
  float fTempPerm480;
  float fTempPerm481;
  float fTempPerm482;
  float fRec94[2];
  float fTempPerm483;
  float fTempPerm484;
  float fTempPerm485;
  float fTempPerm486;
  float fTempPerm487;
  float fRec95[2];
  float fTempPerm488;
  float fTempPerm489;
  float fTempPerm490;
  float fTempPerm491;
  float fTempPerm492;
  float fTempPerm493;
  float fTempPerm494;
  float fTempPerm495;
  float fRec3[2];
  FAUSTFLOAT fHslider386;
  FAUSTFLOAT fHslider387;
  FAUSTFLOAT fHslider388;
  FAUSTFLOAT fHslider389;
  FAUSTFLOAT fHslider390;
  FAUSTFLOAT fHslider391;
  FAUSTFLOAT fHslider392;
  float fTempPerm496;
  FAUSTFLOAT fHslider393;
  FAUSTFLOAT fHslider394;
  float fTempPerm497;
  FAUSTFLOAT fHslider395;
  FAUSTFLOAT fHslider396;
  FAUSTFLOAT fHslider397;
  FAUSTFLOAT fHslider398;
  FAUSTFLOAT fHslider399;
  float fTempPerm498;
  FAUSTFLOAT fHslider400;
  FAUSTFLOAT fHslider401;
  float fTempPerm499;
  float fTempPerm500;
  FAUSTFLOAT fHslider402;
  FAUSTFLOAT fHslider403;
  FAUSTFLOAT fHslider404;
  FAUSTFLOAT fHslider405;
  FAUSTFLOAT fHslider406;
  FAUSTFLOAT fHslider407;
  FAUSTFLOAT fHslider408;
  float fTempPerm501;
  FAUSTFLOAT fHslider409;
  FAUSTFLOAT fHslider410;
  float fTempPerm502;
  FAUSTFLOAT fHslider411;
  FAUSTFLOAT fHslider412;
  FAUSTFLOAT fHslider413;
  FAUSTFLOAT fHslider414;
  FAUSTFLOAT fHslider415;
  float fTempPerm503;
  FAUSTFLOAT fHslider416;
  FAUSTFLOAT fHslider417;
  float fTempPerm504;
  float fTempPerm505;
  FAUSTFLOAT fHslider418;
  FAUSTFLOAT fHslider419;
  FAUSTFLOAT fHslider420;
  FAUSTFLOAT fHslider421;
  FAUSTFLOAT fHslider422;
  FAUSTFLOAT fHslider423;
  FAUSTFLOAT fHslider424;
  float fTempPerm506;
  FAUSTFLOAT fHslider425;
  FAUSTFLOAT fHslider426;
  float fTempPerm507;
  FAUSTFLOAT fHslider427;
  FAUSTFLOAT fHslider428;
  FAUSTFLOAT fHslider429;
  FAUSTFLOAT fHslider430;
  FAUSTFLOAT fHslider431;
  float fTempPerm508;
  FAUSTFLOAT fHslider432;
  FAUSTFLOAT fHslider433;
  float fTempPerm509;
  float fTempPerm510;
  FAUSTFLOAT fHslider434;
  FAUSTFLOAT fHslider435;
  FAUSTFLOAT fHslider436;
  FAUSTFLOAT fHslider437;
  FAUSTFLOAT fHslider438;
  FAUSTFLOAT fHslider439;
  FAUSTFLOAT fHslider440;
  float fTempPerm511;
  FAUSTFLOAT fHslider441;
  FAUSTFLOAT fHslider442;
  float fTempPerm512;
  FAUSTFLOAT fHslider443;
  FAUSTFLOAT fHslider444;
  FAUSTFLOAT fHslider445;
  FAUSTFLOAT fHslider446;
  FAUSTFLOAT fHslider447;
  float fTempPerm513;
  FAUSTFLOAT fHslider448;
  FAUSTFLOAT fHslider449;
  float fTempPerm514;
  float fTempPerm515;
  FAUSTFLOAT fHslider450;
  FAUSTFLOAT fHslider451;
  FAUSTFLOAT fHslider452;
  FAUSTFLOAT fHslider453;
  FAUSTFLOAT fHslider454;
  FAUSTFLOAT fHslider455;
  FAUSTFLOAT fHslider456;
  float fTempPerm516;
  FAUSTFLOAT fHslider457;
  FAUSTFLOAT fHslider458;
  float fTempPerm517;
  FAUSTFLOAT fHslider459;
  FAUSTFLOAT fHslider460;
  FAUSTFLOAT fHslider461;
  FAUSTFLOAT fHslider462;
  FAUSTFLOAT fHslider463;
  float fTempPerm518;
  FAUSTFLOAT fHslider464;
  FAUSTFLOAT fHslider465;
  float fTempPerm519;
  float fTempPerm520;
  float fTempPerm521;
  float fTempPerm522;
  float fTempPerm523;
  float fTempPerm524;
  float fTempPerm525;
  float fTempPerm526;
  int iTempPerm527;
  float fTempPerm528;
  FAUSTFLOAT fHslider466;
  FAUSTFLOAT fHslider467;
  FAUSTFLOAT fHslider468;
  FAUSTFLOAT fHslider469;
  FAUSTFLOAT fHslider470;
  FAUSTFLOAT fHslider471;
  FAUSTFLOAT fHslider472;
  float fTempPerm529;
  FAUSTFLOAT fHslider473;
  FAUSTFLOAT fHslider474;
  float fTempPerm530;
  FAUSTFLOAT fHslider475;
  FAUSTFLOAT fHslider476;
  FAUSTFLOAT fHslider477;
  FAUSTFLOAT fHslider478;
  FAUSTFLOAT fHslider479;
  float fTempPerm531;
  FAUSTFLOAT fHslider480;
  FAUSTFLOAT fHslider481;
  float fTempPerm532;
  float fTempPerm533;
  float fTempPerm534;
  int iTempPerm535;
  float fTempPerm536;
  float fTempPerm537;
  float fRec96[2];
  float fTempPerm538;
  float fRec97[2];
  float fTempPerm539;
  float fTempPerm540;
  float fRec99[2];
  float fTempPerm541;
  float fRec100[2];
  float fRec101[2];
  float fTempPerm542;
  float fTempPerm543;
  float fTempPerm544;
  float fTempPerm545;
  float fTempPerm546;
  float fRec104[2];
  float fTempPerm547;
  float fRec105[2];
  float fTempPerm548;
  float fTempPerm549;
  float fVec17[2];
  FAUSTFLOAT fHslider482;
  FAUSTFLOAT fHslider483;
  FAUSTFLOAT fHslider484;
  FAUSTFLOAT fHslider485;
  FAUSTFLOAT fHslider486;
  FAUSTFLOAT fHslider487;
  FAUSTFLOAT fHslider488;
  float fTempPerm550;
  FAUSTFLOAT fHslider489;
  FAUSTFLOAT fHslider490;
  float fTempPerm551;
  FAUSTFLOAT fHslider491;
  FAUSTFLOAT fHslider492;
  FAUSTFLOAT fHslider493;
  FAUSTFLOAT fHslider494;
  FAUSTFLOAT fHslider495;
  float fTempPerm552;
  FAUSTFLOAT fHslider496;
  FAUSTFLOAT fHslider497;
  float fTempPerm553;
  float fTempPerm554;
  float fTempPerm555;
  float fTempPerm556;
  float fTempPerm557;
  float fTempPerm558;
  float fRec107[2];
  float fTempPerm559;
  float fTempPerm560;
  float fTempPerm561;
  float fTempPerm562;
  float fTempPerm563;
  float fVec18[2];
  int iTempPerm564;
  int iVec19[2];
  int iTempPerm565;
  float fRec112[2];
  float fTempPerm566;
  float fRec111[2];
  float fRec110[2];
  float fRec109[2];
  float fRec108[2];
  float fRec106[2];
  float fTempPerm567;
  float fTempPerm568;
  float fTempPerm569;
  float fTempPerm570;
  float fTempPerm571;
  float fTempPerm572;
  float fTempPerm573;
  float fTempPerm574;
  float fTempPerm575;
  int iTempPerm576;
  float fTempPerm577;
  float fTempPerm578;
  int iTempPerm579;
  float fTempPerm580;
  float fTempPerm581;
  float fRec113[2];
  float fTempPerm582;
  float fRec114[2];
  float fTempPerm583;
  float fTempPerm584;
  float fRec116[2];
  float fTempPerm585;
  float fRec117[2];
  float fRec118[2];
  float fTempPerm586;
  float fTempPerm587;
  float fTempPerm588;
  float fTempPerm589;
  float fTempPerm590;
  float fRec121[2];
  float fTempPerm591;
  float fRec122[2];
  float fTempPerm592;
  float fTempPerm593;
  float fVec20[2];
  float fTempPerm594;
  float fRec124[2];
  float fTempPerm595;
  float fTempPerm596;
  float fTempPerm597;
  float fTempPerm598;
  float fTempPerm599;
  float fVec21[2];
  int iTempPerm600;
  int iVec22[2];
  int iTempPerm601;
  float fRec129[2];
  float fTempPerm602;
  float fRec128[2];
  float fRec127[2];
  float fRec126[2];
  float fRec125[2];
  float fRec123[2];
  float fTempPerm603;
  float fTempPerm604;
  float fTempPerm605;
  float fTempPerm606;
  float fTempPerm607;
  float fTempPerm608;
  float fTempPerm609;
  float fTempPerm610;
  float fTempPerm611;
  float fTempPerm612;
  float fTempPerm613;
  float fTempPerm614;
  float fTempPerm615;
  float fTempPerm616;
  float fTempPerm617;
  float fTempPerm618;
  float fTempPerm619;
  float fTempPerm620;
  float fTempPerm621;
  float fTempPerm622;
  float fTempPerm623;
  float fTempPerm624;
  float fTempPerm625;
  float fTempPerm626;
  float fTempPerm627;
  float fTempPerm628;
  float fTempPerm629;
  float fTempPerm630;
  float fTempPerm631;
  float fTempPerm632;
  float fTempPerm633;
  float fTempPerm634;
  float fTempPerm635;
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
  float fTempPerm699;
  float fRec130[2];
  float fTempPerm700;
  float fTempPerm701;
  float fTempPerm702;
  float fTempPerm703;
  float fTempPerm704;
  float fRec131[2];
  float fTempPerm705;
  float fTempPerm706;
  float fTempPerm707;
  float fTempPerm708;
  float fTempPerm709;
  float fTempPerm710;
  float fTempPerm711;
  float fTempPerm712;
  float fRec4[2];
  FAUSTFLOAT fHslider498;
  FAUSTFLOAT fHslider499;
  FAUSTFLOAT fHslider500;
  FAUSTFLOAT fHslider501;
  FAUSTFLOAT fHslider502;
  FAUSTFLOAT fHslider503;
  FAUSTFLOAT fHslider504;
  float fTempPerm713;
  FAUSTFLOAT fHslider505;
  FAUSTFLOAT fHslider506;
  float fTempPerm714;
  FAUSTFLOAT fHslider507;
  FAUSTFLOAT fHslider508;
  FAUSTFLOAT fHslider509;
  FAUSTFLOAT fHslider510;
  FAUSTFLOAT fHslider511;
  float fTempPerm715;
  FAUSTFLOAT fHslider512;
  FAUSTFLOAT fHslider513;
  float fTempPerm716;
  float fTempPerm717;
  FAUSTFLOAT fHslider514;
  FAUSTFLOAT fHslider515;
  FAUSTFLOAT fHslider516;
  FAUSTFLOAT fHslider517;
  FAUSTFLOAT fHslider518;
  FAUSTFLOAT fHslider519;
  FAUSTFLOAT fHslider520;
  float fTempPerm718;
  FAUSTFLOAT fHslider521;
  FAUSTFLOAT fHslider522;
  float fTempPerm719;
  FAUSTFLOAT fHslider523;
  FAUSTFLOAT fHslider524;
  FAUSTFLOAT fHslider525;
  FAUSTFLOAT fHslider526;
  FAUSTFLOAT fHslider527;
  float fTempPerm720;
  FAUSTFLOAT fHslider528;
  FAUSTFLOAT fHslider529;
  float fTempPerm721;
  float fTempPerm722;
  FAUSTFLOAT fHslider530;
  FAUSTFLOAT fHslider531;
  FAUSTFLOAT fHslider532;
  FAUSTFLOAT fHslider533;
  FAUSTFLOAT fHslider534;
  FAUSTFLOAT fHslider535;
  FAUSTFLOAT fHslider536;
  float fTempPerm723;
  FAUSTFLOAT fHslider537;
  FAUSTFLOAT fHslider538;
  float fTempPerm724;
  FAUSTFLOAT fHslider539;
  FAUSTFLOAT fHslider540;
  FAUSTFLOAT fHslider541;
  FAUSTFLOAT fHslider542;
  FAUSTFLOAT fHslider543;
  float fTempPerm725;
  FAUSTFLOAT fHslider544;
  FAUSTFLOAT fHslider545;
  float fTempPerm726;
  float fTempPerm727;
  FAUSTFLOAT fHslider546;
  FAUSTFLOAT fHslider547;
  FAUSTFLOAT fHslider548;
  FAUSTFLOAT fHslider549;
  FAUSTFLOAT fHslider550;
  FAUSTFLOAT fHslider551;
  FAUSTFLOAT fHslider552;
  float fTempPerm728;
  FAUSTFLOAT fHslider553;
  FAUSTFLOAT fHslider554;
  float fTempPerm729;
  FAUSTFLOAT fHslider555;
  FAUSTFLOAT fHslider556;
  FAUSTFLOAT fHslider557;
  FAUSTFLOAT fHslider558;
  FAUSTFLOAT fHslider559;
  float fTempPerm730;
  FAUSTFLOAT fHslider560;
  FAUSTFLOAT fHslider561;
  float fTempPerm731;
  float fTempPerm732;
  FAUSTFLOAT fHslider562;
  FAUSTFLOAT fHslider563;
  FAUSTFLOAT fHslider564;
  FAUSTFLOAT fHslider565;
  FAUSTFLOAT fHslider566;
  FAUSTFLOAT fHslider567;
  FAUSTFLOAT fHslider568;
  float fTempPerm733;
  FAUSTFLOAT fHslider569;
  FAUSTFLOAT fHslider570;
  float fTempPerm734;
  FAUSTFLOAT fHslider571;
  FAUSTFLOAT fHslider572;
  FAUSTFLOAT fHslider573;
  FAUSTFLOAT fHslider574;
  FAUSTFLOAT fHslider575;
  float fTempPerm735;
  FAUSTFLOAT fHslider576;
  FAUSTFLOAT fHslider577;
  float fTempPerm736;
  float fTempPerm737;
  float fTempPerm738;
  float fTempPerm739;
  float fTempPerm740;
  float fTempPerm741;
  float fTempPerm742;
  float fTempPerm743;
  int iTempPerm744;
  float fTempPerm745;
  FAUSTFLOAT fHslider578;
  FAUSTFLOAT fHslider579;
  FAUSTFLOAT fHslider580;
  FAUSTFLOAT fHslider581;
  FAUSTFLOAT fHslider582;
  FAUSTFLOAT fHslider583;
  FAUSTFLOAT fHslider584;
  float fTempPerm746;
  FAUSTFLOAT fHslider585;
  FAUSTFLOAT fHslider586;
  float fTempPerm747;
  FAUSTFLOAT fHslider587;
  FAUSTFLOAT fHslider588;
  FAUSTFLOAT fHslider589;
  FAUSTFLOAT fHslider590;
  FAUSTFLOAT fHslider591;
  float fTempPerm748;
  FAUSTFLOAT fHslider592;
  FAUSTFLOAT fHslider593;
  float fTempPerm749;
  float fTempPerm750;
  float fTempPerm751;
  int iTempPerm752;
  float fTempPerm753;
  float fTempPerm754;
  float fRec132[2];
  float fTempPerm755;
  float fRec133[2];
  float fTempPerm756;
  float fTempPerm757;
  float fRec135[2];
  float fTempPerm758;
  float fRec136[2];
  float fRec137[2];
  float fTempPerm759;
  float fTempPerm760;
  float fTempPerm761;
  float fTempPerm762;
  float fTempPerm763;
  float fRec140[2];
  float fTempPerm764;
  float fRec141[2];
  float fTempPerm765;
  float fTempPerm766;
  float fVec23[2];
  FAUSTFLOAT fHslider594;
  FAUSTFLOAT fHslider595;
  FAUSTFLOAT fHslider596;
  FAUSTFLOAT fHslider597;
  FAUSTFLOAT fHslider598;
  FAUSTFLOAT fHslider599;
  FAUSTFLOAT fHslider600;
  float fTempPerm767;
  FAUSTFLOAT fHslider601;
  FAUSTFLOAT fHslider602;
  float fTempPerm768;
  FAUSTFLOAT fHslider603;
  FAUSTFLOAT fHslider604;
  FAUSTFLOAT fHslider605;
  FAUSTFLOAT fHslider606;
  FAUSTFLOAT fHslider607;
  float fTempPerm769;
  FAUSTFLOAT fHslider608;
  FAUSTFLOAT fHslider609;
  float fTempPerm770;
  float fTempPerm771;
  float fTempPerm772;
  float fTempPerm773;
  float fTempPerm774;
  float fTempPerm775;
  float fRec143[2];
  float fTempPerm776;
  float fTempPerm777;
  float fTempPerm778;
  float fTempPerm779;
  float fTempPerm780;
  float fVec24[2];
  int iTempPerm781;
  int iVec25[2];
  int iTempPerm782;
  float fRec148[2];
  float fTempPerm783;
  float fRec147[2];
  float fRec146[2];
  float fRec145[2];
  float fRec144[2];
  float fRec142[2];
  float fTempPerm784;
  float fTempPerm785;
  float fTempPerm786;
  float fTempPerm787;
  float fTempPerm788;
  float fTempPerm789;
  float fTempPerm790;
  float fTempPerm791;
  float fTempPerm792;
  int iTempPerm793;
  float fTempPerm794;
  float fTempPerm795;
  int iTempPerm796;
  float fTempPerm797;
  float fTempPerm798;
  float fRec149[2];
  float fTempPerm799;
  float fRec150[2];
  float fTempPerm800;
  float fTempPerm801;
  float fRec152[2];
  float fTempPerm802;
  float fRec153[2];
  float fRec154[2];
  float fTempPerm803;
  float fTempPerm804;
  float fTempPerm805;
  float fTempPerm806;
  float fTempPerm807;
  float fRec157[2];
  float fTempPerm808;
  float fRec158[2];
  float fTempPerm809;
  float fTempPerm810;
  float fVec26[2];
  float fTempPerm811;
  float fRec160[2];
  float fTempPerm812;
  float fTempPerm813;
  float fTempPerm814;
  float fTempPerm815;
  float fTempPerm816;
  float fVec27[2];
  int iTempPerm817;
  int iVec28[2];
  int iTempPerm818;
  float fRec165[2];
  float fTempPerm819;
  float fRec164[2];
  float fRec163[2];
  float fRec162[2];
  float fRec161[2];
  float fRec159[2];
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
  float fTempPerm893;
  float fTempPerm894;
  float fTempPerm895;
  float fTempPerm896;
  float fTempPerm897;
  float fTempPerm898;
  float fTempPerm899;
  float fTempPerm900;
  float fTempPerm901;
  float fTempPerm902;
  float fTempPerm903;
  float fTempPerm904;
  float fTempPerm905;
  float fTempPerm906;
  float fTempPerm907;
  float fTempPerm908;
  float fTempPerm909;
  float fTempPerm910;
  float fTempPerm911;
  float fTempPerm912;
  float fTempPerm913;
  float fTempPerm914;
  float fTempPerm915;
  float fTempPerm916;
  float fRec166[2];
  float fTempPerm917;
  float fTempPerm918;
  float fTempPerm919;
  float fTempPerm920;
  float fTempPerm921;
  float fRec167[2];
  float fTempPerm922;
  float fTempPerm923;
  float fTempPerm924;
  float fTempPerm925;
  float fTempPerm926;
  float fTempPerm927;
  float fTempPerm928;
  float fTempPerm929;
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
  int iTempPerm949;
  float fTempPerm950;
  float fTempPerm951;
  float fTempPerm952;
  int iTempPerm953;
  float fTempPerm954;
  float fTempPerm955;
  float fTempPerm956;
  float fTempPerm957;
  float fTempPerm958;
  float fRec172[2];
  float fTempPerm959;
  float fRec173[2];
  float fTempPerm960;
  float fTempPerm961;
  float fTempPerm962;
  float fTempPerm963;
  float fTempPerm964;
  float fTempPerm965;
  float fTempPerm966;
  float fTempPerm967;
  float fTempPerm968;
  float fRec175[2];
  float fTempPerm969;
  float fRec176[2];
  float fRec177[2];
  float fTempPerm970;
  float fTempPerm971;
  float fTempPerm972;
  float fTempPerm973;
  float fTempPerm974;
  float fTempPerm975;
  float fTempPerm976;
  float fRec180[2];
  float fTempPerm977;
  float fRec181[2];
  float fTempPerm978;
  float fTempPerm979;
  float fTempPerm980;
  float fTempPerm981;
  float fVec29[2];
  float fTempPerm982;
  float fTempPerm983;
  float fTempPerm984;
  float fTempPerm985;
  float fTempPerm986;
  float fRec183[2];
  float fTempPerm987;
  float fTempPerm988;
  float fTempPerm989;
  float fTempPerm990;
  float fTempPerm991;
  float fVec30[2];
  int iTempPerm992;
  int iVec31[2];
  int iTempPerm993;
  float fRec188[2];
  float fTempPerm994;
  float fRec187[2];
  float fRec186[2];
  float fRec185[2];
  float fRec184[2];
  float fRec182[2];
  float fTempPerm995;
  float fTempPerm996;
  float fTempPerm997;
  float fTempPerm998;
  float fTempPerm999;
  float fTempPerm1000;
  float fTempPerm1001;
  float fTempPerm1002;
  float fTempPerm1003;
  int iTempPerm1004;
  float fTempPerm1005;
  float fTempPerm1006;
  int iTempPerm1007;
  float fTempPerm1008;
  float fTempPerm1009;
  float fRec189[2];
  float fTempPerm1010;
  float fRec190[2];
  float fTempPerm1011;
  float fTempPerm1012;
  float fTempPerm1013;
  float fRec192[2];
  float fTempPerm1014;
  float fRec193[2];
  float fRec194[2];
  float fTempPerm1015;
  float fTempPerm1016;
  float fTempPerm1017;
  float fTempPerm1018;
  float fTempPerm1019;
  float fRec197[2];
  float fTempPerm1020;
  float fRec198[2];
  float fTempPerm1021;
  float fTempPerm1022;
  float fVec32[2];
  float fTempPerm1023;
  float fRec200[2];
  float fTempPerm1024;
  float fTempPerm1025;
  float fTempPerm1026;
  float fTempPerm1027;
  float fTempPerm1028;
  float fVec33[2];
  int iTempPerm1029;
  int iVec34[2];
  int iTempPerm1030;
  float fRec205[2];
  float fTempPerm1031;
  float fRec204[2];
  float fRec203[2];
  float fRec202[2];
  float fRec201[2];
  float fRec199[2];
  float fTempPerm1032;
  float fTempPerm1033;
  float fTempPerm1034;
  float fTempPerm1035;
  float fTempPerm1036;
  float fTempPerm1037;
  float fTempPerm1038;
  float fTempPerm1039;
  float fTempPerm1040;
  float fTempPerm1041;
  float fTempPerm1042;
  float fTempPerm1043;
  float fTempPerm1044;
  float fTempPerm1045;
  float fTempPerm1046;
  float fTempPerm1047;
  float fTempPerm1048;
  float fTempPerm1049;
  float fTempPerm1050;
  float fTempPerm1051;
  float fTempPerm1052;
  float fTempPerm1053;
  float fTempPerm1054;
  float fTempPerm1055;
  float fTempPerm1056;
  float fTempPerm1057;
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
  float fTempPerm1121;
  float fTempPerm1122;
  float fTempPerm1123;
  float fTempPerm1124;
  float fTempPerm1125;
  float fTempPerm1126;
  float fTempPerm1127;
  float fTempPerm1128;
  float fRec206[2];
  float fTempPerm1129;
  float fTempPerm1130;
  float fTempPerm1131;
  float fTempPerm1132;
  float fTempPerm1133;
  float fRec207[2];
  float fTempPerm1134;
  float fTempPerm1135;
  float fTempPerm1136;
  float fTempPerm1137;
  float fTempPerm1138;
  float fTempPerm1139;
  float fTempPerm1140;
  float fTempPerm1141;
  float fRec168[2];
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
  int iTempPerm1153;
  float fTempPerm1154;
  float fTempPerm1155;
  float fTempPerm1156;
  int iTempPerm1157;
  float fTempPerm1158;
  float fTempPerm1159;
  float fRec208[2];
  float fTempPerm1160;
  float fRec209[2];
  float fTempPerm1161;
  float fTempPerm1162;
  float fRec211[2];
  float fTempPerm1163;
  float fRec212[2];
  float fRec213[2];
  float fTempPerm1164;
  float fTempPerm1165;
  float fTempPerm1166;
  float fTempPerm1167;
  float fTempPerm1168;
  float fRec216[2];
  float fTempPerm1169;
  float fRec217[2];
  float fTempPerm1170;
  float fTempPerm1171;
  float fVec35[2];
  float fTempPerm1172;
  float fTempPerm1173;
  float fTempPerm1174;
  float fTempPerm1175;
  float fTempPerm1176;
  float fRec219[2];
  float fTempPerm1177;
  float fTempPerm1178;
  float fTempPerm1179;
  float fTempPerm1180;
  float fTempPerm1181;
  float fVec36[2];
  int iTempPerm1182;
  int iVec37[2];
  int iTempPerm1183;
  float fRec224[2];
  float fTempPerm1184;
  float fRec223[2];
  float fRec222[2];
  float fRec221[2];
  float fRec220[2];
  float fRec218[2];
  float fTempPerm1185;
  float fTempPerm1186;
  float fTempPerm1187;
  float fTempPerm1188;
  float fTempPerm1189;
  float fTempPerm1190;
  float fTempPerm1191;
  float fTempPerm1192;
  float fTempPerm1193;
  int iTempPerm1194;
  float fTempPerm1195;
  float fTempPerm1196;
  int iTempPerm1197;
  float fTempPerm1198;
  float fTempPerm1199;
  float fRec225[2];
  float fTempPerm1200;
  float fRec226[2];
  float fTempPerm1201;
  float fTempPerm1202;
  float fRec228[2];
  float fTempPerm1203;
  float fRec229[2];
  float fRec230[2];
  float fTempPerm1204;
  float fTempPerm1205;
  float fTempPerm1206;
  float fTempPerm1207;
  float fTempPerm1208;
  float fRec233[2];
  float fTempPerm1209;
  float fRec234[2];
  float fTempPerm1210;
  float fTempPerm1211;
  float fVec38[2];
  float fTempPerm1212;
  float fRec236[2];
  float fTempPerm1213;
  float fTempPerm1214;
  float fTempPerm1215;
  float fTempPerm1216;
  float fTempPerm1217;
  float fVec39[2];
  int iTempPerm1218;
  int iVec40[2];
  int iTempPerm1219;
  float fRec241[2];
  float fTempPerm1220;
  float fRec240[2];
  float fRec239[2];
  float fRec238[2];
  float fRec237[2];
  float fRec235[2];
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
  float fTempPerm1316;
  float fTempPerm1317;
  float fRec242[2];
  float fTempPerm1318;
  float fTempPerm1319;
  float fTempPerm1320;
  float fTempPerm1321;
  float fTempPerm1322;
  float fRec243[2];
  float fTempPerm1323;
  float fTempPerm1324;
  float fTempPerm1325;
  float fTempPerm1326;
  float fTempPerm1327;
  float fTempPerm1328;
  float fTempPerm1329;
  float fTempPerm1330;
  float fRec169[2];
  float fTempPerm1331;
  float fTempPerm1332;
  float fTempPerm1333;
  float fTempPerm1334;
  float fTempPerm1335;
  float fTempPerm1336;
  float fTempPerm1337;
  float fTempPerm1338;
  float fTempPerm1339;
  float fTempPerm1340;
  float fTempPerm1341;
  int iTempPerm1342;
  float fTempPerm1343;
  float fTempPerm1344;
  float fTempPerm1345;
  int iTempPerm1346;
  float fTempPerm1347;
  float fTempPerm1348;
  float fRec244[2];
  float fTempPerm1349;
  float fRec245[2];
  float fTempPerm1350;
  float fTempPerm1351;
  float fRec247[2];
  float fTempPerm1352;
  float fRec248[2];
  float fRec249[2];
  float fTempPerm1353;
  float fTempPerm1354;
  float fTempPerm1355;
  float fTempPerm1356;
  float fTempPerm1357;
  float fRec252[2];
  float fTempPerm1358;
  float fRec253[2];
  float fTempPerm1359;
  float fTempPerm1360;
  float fVec41[2];
  float fTempPerm1361;
  float fTempPerm1362;
  float fTempPerm1363;
  float fTempPerm1364;
  float fTempPerm1365;
  float fRec255[2];
  float fTempPerm1366;
  float fTempPerm1367;
  float fTempPerm1368;
  float fTempPerm1369;
  float fTempPerm1370;
  float fVec42[2];
  int iTempPerm1371;
  int iVec43[2];
  int iTempPerm1372;
  float fRec260[2];
  float fTempPerm1373;
  float fRec259[2];
  float fRec258[2];
  float fRec257[2];
  float fRec256[2];
  float fRec254[2];
  float fTempPerm1374;
  float fTempPerm1375;
  float fTempPerm1376;
  float fTempPerm1377;
  float fTempPerm1378;
  float fTempPerm1379;
  float fTempPerm1380;
  float fTempPerm1381;
  float fTempPerm1382;
  int iTempPerm1383;
  float fTempPerm1384;
  float fTempPerm1385;
  int iTempPerm1386;
  float fTempPerm1387;
  float fTempPerm1388;
  float fRec261[2];
  float fTempPerm1389;
  float fRec262[2];
  float fTempPerm1390;
  float fTempPerm1391;
  float fRec264[2];
  float fTempPerm1392;
  float fRec265[2];
  float fRec266[2];
  float fTempPerm1393;
  float fTempPerm1394;
  float fTempPerm1395;
  float fTempPerm1396;
  float fTempPerm1397;
  float fRec269[2];
  float fTempPerm1398;
  float fRec270[2];
  float fTempPerm1399;
  float fTempPerm1400;
  float fVec44[2];
  float fTempPerm1401;
  float fRec272[2];
  float fTempPerm1402;
  float fTempPerm1403;
  float fTempPerm1404;
  float fTempPerm1405;
  float fTempPerm1406;
  float fVec45[2];
  int iTempPerm1407;
  int iVec46[2];
  int iTempPerm1408;
  float fRec277[2];
  float fTempPerm1409;
  float fRec276[2];
  float fRec275[2];
  float fRec274[2];
  float fRec273[2];
  float fRec271[2];
  float fTempPerm1410;
  float fTempPerm1411;
  float fTempPerm1412;
  float fTempPerm1413;
  float fTempPerm1414;
  float fTempPerm1415;
  float fTempPerm1416;
  float fTempPerm1417;
  float fTempPerm1418;
  float fTempPerm1419;
  float fTempPerm1420;
  float fTempPerm1421;
  float fTempPerm1422;
  float fTempPerm1423;
  float fTempPerm1424;
  float fTempPerm1425;
  float fTempPerm1426;
  float fTempPerm1427;
  float fTempPerm1428;
  float fTempPerm1429;
  float fTempPerm1430;
  float fTempPerm1431;
  float fTempPerm1432;
  float fTempPerm1433;
  float fTempPerm1434;
  float fTempPerm1435;
  float fTempPerm1436;
  float fTempPerm1437;
  float fTempPerm1438;
  float fTempPerm1439;
  float fTempPerm1440;
  float fTempPerm1441;
  float fTempPerm1442;
  float fTempPerm1443;
  float fTempPerm1444;
  float fTempPerm1445;
  float fTempPerm1446;
  float fTempPerm1447;
  float fTempPerm1448;
  float fTempPerm1449;
  float fTempPerm1450;
  float fTempPerm1451;
  float fTempPerm1452;
  float fTempPerm1453;
  float fTempPerm1454;
  float fTempPerm1455;
  float fTempPerm1456;
  float fTempPerm1457;
  float fTempPerm1458;
  float fTempPerm1459;
  float fTempPerm1460;
  float fTempPerm1461;
  float fTempPerm1462;
  float fTempPerm1463;
  float fTempPerm1464;
  float fTempPerm1465;
  float fTempPerm1466;
  float fTempPerm1467;
  float fTempPerm1468;
  float fTempPerm1469;
  float fTempPerm1470;
  float fTempPerm1471;
  float fTempPerm1472;
  float fTempPerm1473;
  float fTempPerm1474;
  float fTempPerm1475;
  float fTempPerm1476;
  float fTempPerm1477;
  float fTempPerm1478;
  float fTempPerm1479;
  float fTempPerm1480;
  float fTempPerm1481;
  float fTempPerm1482;
  float fTempPerm1483;
  float fTempPerm1484;
  float fTempPerm1485;
  float fTempPerm1486;
  float fTempPerm1487;
  float fTempPerm1488;
  float fTempPerm1489;
  float fTempPerm1490;
  float fTempPerm1491;
  float fTempPerm1492;
  float fTempPerm1493;
  float fTempPerm1494;
  float fTempPerm1495;
  float fTempPerm1496;
  float fTempPerm1497;
  float fTempPerm1498;
  float fTempPerm1499;
  float fTempPerm1500;
  float fTempPerm1501;
  float fTempPerm1502;
  float fTempPerm1503;
  float fTempPerm1504;
  float fTempPerm1505;
  float fTempPerm1506;
  float fRec278[2];
  float fTempPerm1507;
  float fTempPerm1508;
  float fTempPerm1509;
  float fTempPerm1510;
  float fTempPerm1511;
  float fRec279[2];
  float fTempPerm1512;
  float fTempPerm1513;
  float fTempPerm1514;
  float fTempPerm1515;
  float fTempPerm1516;
  float fTempPerm1517;
  float fTempPerm1518;
  float fTempPerm1519;
  float fRec170[2];
  float fTempPerm1520;
  float fTempPerm1521;
  float fTempPerm1522;
  float fTempPerm1523;
  float fTempPerm1524;
  float fTempPerm1525;
  float fTempPerm1526;
  float fTempPerm1527;
  float fTempPerm1528;
  float fTempPerm1529;
  float fTempPerm1530;
  int iTempPerm1531;
  float fTempPerm1532;
  float fTempPerm1533;
  float fTempPerm1534;
  int iTempPerm1535;
  float fTempPerm1536;
  float fTempPerm1537;
  float fRec280[2];
  float fTempPerm1538;
  float fRec281[2];
  float fTempPerm1539;
  float fTempPerm1540;
  float fRec283[2];
  float fTempPerm1541;
  float fRec284[2];
  float fRec285[2];
  float fTempPerm1542;
  float fTempPerm1543;
  float fTempPerm1544;
  float fTempPerm1545;
  float fTempPerm1546;
  float fRec288[2];
  float fTempPerm1547;
  float fRec289[2];
  float fTempPerm1548;
  float fTempPerm1549;
  float fVec47[2];
  float fTempPerm1550;
  float fTempPerm1551;
  float fTempPerm1552;
  float fTempPerm1553;
  float fTempPerm1554;
  float fRec291[2];
  float fTempPerm1555;
  float fTempPerm1556;
  float fTempPerm1557;
  float fTempPerm1558;
  float fTempPerm1559;
  float fVec48[2];
  int iTempPerm1560;
  int iVec49[2];
  int iTempPerm1561;
  float fRec296[2];
  float fTempPerm1562;
  float fRec295[2];
  float fRec294[2];
  float fRec293[2];
  float fRec292[2];
  float fRec290[2];
  float fTempPerm1563;
  float fTempPerm1564;
  float fTempPerm1565;
  float fTempPerm1566;
  float fTempPerm1567;
  float fTempPerm1568;
  float fTempPerm1569;
  float fTempPerm1570;
  float fTempPerm1571;
  int iTempPerm1572;
  float fTempPerm1573;
  float fTempPerm1574;
  int iTempPerm1575;
  float fTempPerm1576;
  float fTempPerm1577;
  float fRec297[2];
  float fTempPerm1578;
  float fRec298[2];
  float fTempPerm1579;
  float fTempPerm1580;
  float fRec300[2];
  float fTempPerm1581;
  float fRec301[2];
  float fRec302[2];
  float fTempPerm1582;
  float fTempPerm1583;
  float fTempPerm1584;
  float fTempPerm1585;
  float fTempPerm1586;
  float fRec305[2];
  float fTempPerm1587;
  float fRec306[2];
  float fTempPerm1588;
  float fTempPerm1589;
  float fVec50[2];
  float fTempPerm1590;
  float fRec308[2];
  float fTempPerm1591;
  float fTempPerm1592;
  float fTempPerm1593;
  float fTempPerm1594;
  float fTempPerm1595;
  float fVec51[2];
  int iTempPerm1596;
  int iVec52[2];
  int iTempPerm1597;
  float fRec313[2];
  float fTempPerm1598;
  float fRec312[2];
  float fRec311[2];
  float fRec310[2];
  float fRec309[2];
  float fRec307[2];
  float fTempPerm1599;
  float fTempPerm1600;
  float fTempPerm1601;
  float fTempPerm1602;
  float fTempPerm1603;
  float fTempPerm1604;
  float fTempPerm1605;
  float fTempPerm1606;
  float fTempPerm1607;
  float fTempPerm1608;
  float fTempPerm1609;
  float fTempPerm1610;
  float fTempPerm1611;
  float fTempPerm1612;
  float fTempPerm1613;
  float fTempPerm1614;
  float fTempPerm1615;
  float fTempPerm1616;
  float fTempPerm1617;
  float fTempPerm1618;
  float fTempPerm1619;
  float fTempPerm1620;
  float fTempPerm1621;
  float fTempPerm1622;
  float fTempPerm1623;
  float fTempPerm1624;
  float fTempPerm1625;
  float fTempPerm1626;
  float fTempPerm1627;
  float fTempPerm1628;
  float fTempPerm1629;
  float fTempPerm1630;
  float fTempPerm1631;
  float fTempPerm1632;
  float fTempPerm1633;
  float fTempPerm1634;
  float fTempPerm1635;
  float fTempPerm1636;
  float fTempPerm1637;
  float fTempPerm1638;
  float fTempPerm1639;
  float fTempPerm1640;
  float fTempPerm1641;
  float fTempPerm1642;
  float fTempPerm1643;
  float fTempPerm1644;
  float fTempPerm1645;
  float fTempPerm1646;
  float fTempPerm1647;
  float fTempPerm1648;
  float fTempPerm1649;
  float fTempPerm1650;
  float fTempPerm1651;
  float fTempPerm1652;
  float fTempPerm1653;
  float fTempPerm1654;
  float fTempPerm1655;
  float fTempPerm1656;
  float fTempPerm1657;
  float fTempPerm1658;
  float fTempPerm1659;
  float fTempPerm1660;
  float fTempPerm1661;
  float fTempPerm1662;
  float fTempPerm1663;
  float fTempPerm1664;
  float fTempPerm1665;
  float fTempPerm1666;
  float fTempPerm1667;
  float fTempPerm1668;
  float fTempPerm1669;
  float fTempPerm1670;
  float fTempPerm1671;
  float fTempPerm1672;
  float fTempPerm1673;
  float fTempPerm1674;
  float fTempPerm1675;
  float fTempPerm1676;
  float fTempPerm1677;
  float fTempPerm1678;
  float fTempPerm1679;
  float fTempPerm1680;
  float fTempPerm1681;
  float fTempPerm1682;
  float fTempPerm1683;
  float fTempPerm1684;
  float fTempPerm1685;
  float fTempPerm1686;
  float fTempPerm1687;
  float fTempPerm1688;
  float fTempPerm1689;
  float fTempPerm1690;
  float fTempPerm1691;
  float fTempPerm1692;
  float fTempPerm1693;
  float fTempPerm1694;
  float fTempPerm1695;
  float fRec314[2];
  float fTempPerm1696;
  float fTempPerm1697;
  float fTempPerm1698;
  float fTempPerm1699;
  float fTempPerm1700;
  float fRec315[2];
  float fTempPerm1701;
  float fTempPerm1702;
  float fTempPerm1703;
  float fTempPerm1704;
  float fTempPerm1705;
  float fTempPerm1706;
  float fTempPerm1707;
  float fTempPerm1708;
  float fRec171[2];
  int iVec3[2];
  int iRec10[2];

public:
  mydsp() {}

  int getNumInputs() { return 0; }
  int getNumOutputs() { return 2; }

  static void classInit(int sample_rate) {}

  void staticInit(int sample_rate)
  {
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

  void instanceConstants(int sample_rate)
  {
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

  void instanceResetUserInterface()
  {
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

  void instanceClear()
  {
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
    fTempPerm53 = 0.0f;
    for (int l22 = 0; l22 < 2; l22 = l22 + 1) {
      iVec4[l22] = 0;
    }
    for (int l23 = 0; l23 < 2; l23 = l23 + 1) {
      fRec23[l23] = 0.0f;
    }
    fTempPerm54 = 0.0f;
    for (int l24 = 0; l24 < 2; l24 = l24 + 1) {
      fRec26[l24] = 0.0f;
    }
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
    fTempPerm69 = 0.0f;
    fTempPerm70 = 0.0f;
    fTempPerm71 = 0.0f;
    fTempPerm72 = 0.0f;
    fTempPerm73 = 0.0f;
    iTempPerm74 = 0;
    fTempPerm75 = 0.0f;
    fTempPerm76 = 0.0f;
    fTempPerm77 = 0.0f;
    fTempPerm78 = 0.0f;
    fTempPerm79 = 0.0f;
    fTempPerm80 = 0.0f;
    fTempPerm81 = 0.0f;
    iTempPerm82 = 0;
    fTempPerm83 = 0.0f;
    fTempPerm84 = 0.0f;
    fTempPerm85 = 0.0f;
    fTempPerm86 = 0.0f;
    fTempPerm87 = 0.0f;
    fTempPerm88 = 0.0f;
    fTempPerm89 = 0.0f;
    fTempPerm90 = 0.0f;
    fTempPerm91 = 0.0f;
    for (int l25 = 0; l25 < 2; l25 = l25 + 1) {
      fRec20[l25] = 0.0f;
    }
    fTempPerm92 = 0.0f;
    for (int l26 = 0; l26 < 2; l26 = l26 + 1) {
      fRec21[l26] = 0.0f;
    }
    fTempPerm93 = 0.0f;
    fTempPerm94 = 0.0f;
    fTempPerm95 = 0.0f;
    fTempPerm96 = 0.0f;
    fTempPerm97 = 0.0f;
    fTempPerm98 = 0.0f;
    fTempPerm99 = 0.0f;
    fTempPerm100 = 0.0f;
    fTempPerm101 = 0.0f;
    for (int l27 = 0; l27 < 2; l27 = l27 + 1) {
      fRec27[l27] = 0.0f;
    }
    fTempPerm102 = 0.0f;
    for (int l28 = 0; l28 < 2; l28 = l28 + 1) {
      fRec28[l28] = 0.0f;
    }
    for (int l29 = 0; l29 < 2; l29 = l29 + 1) {
      fRec29[l29] = 0.0f;
    }
    fTempPerm103 = 0.0f;
    fTempPerm104 = 0.0f;
    fTempPerm105 = 0.0f;
    fTempPerm106 = 0.0f;
    fTempPerm107 = 0.0f;
    fTempPerm108 = 0.0f;
    fTempPerm109 = 0.0f;
    for (int l30 = 0; l30 < 2; l30 = l30 + 1) {
      fRec32[l30] = 0.0f;
    }
    fTempPerm110 = 0.0f;
    for (int l31 = 0; l31 < 2; l31 = l31 + 1) {
      fRec33[l31] = 0.0f;
    }
    fTempPerm111 = 0.0f;
    fTempPerm112 = 0.0f;
    fTempPerm113 = 0.0f;
    fTempPerm114 = 0.0f;
    for (int l32 = 0; l32 < 2; l32 = l32 + 1) {
      fVec5[l32] = 0.0f;
    }
    fTempPerm115 = 0.0f;
    fTempPerm116 = 0.0f;
    fTempPerm117 = 0.0f;
    fTempPerm118 = 0.0f;
    fTempPerm119 = 0.0f;
    fTempPerm120 = 0.0f;
    fTempPerm121 = 0.0f;
    fTempPerm122 = 0.0f;
    fTempPerm123 = 0.0f;
    for (int l33 = 0; l33 < 2; l33 = l33 + 1) {
      fRec35[l33] = 0.0f;
    }
    fTempPerm124 = 0.0f;
    fTempPerm125 = 0.0f;
    fTempPerm126 = 0.0f;
    fTempPerm127 = 0.0f;
    fTempPerm128 = 0.0f;
    for (int l34 = 0; l34 < 2; l34 = l34 + 1) {
      fVec6[l34] = 0.0f;
    }
    iTempPerm129 = 0;
    for (int l35 = 0; l35 < 2; l35 = l35 + 1) {
      iVec7[l35] = 0;
    }
    iTempPerm130 = 0;
    for (int l36 = 0; l36 < 2; l36 = l36 + 1) {
      fRec40[l36] = 0.0f;
    }
    fTempPerm131 = 0.0f;
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
    fTempPerm132 = 0.0f;
    fTempPerm133 = 0.0f;
    fTempPerm134 = 0.0f;
    fTempPerm135 = 0.0f;
    fTempPerm136 = 0.0f;
    fTempPerm137 = 0.0f;
    fTempPerm138 = 0.0f;
    fTempPerm139 = 0.0f;
    fTempPerm140 = 0.0f;
    iTempPerm141 = 0;
    fTempPerm142 = 0.0f;
    fTempPerm143 = 0.0f;
    iTempPerm144 = 0;
    fTempPerm145 = 0.0f;
    fTempPerm146 = 0.0f;
    for (int l42 = 0; l42 < 2; l42 = l42 + 1) {
      fRec41[l42] = 0.0f;
    }
    fTempPerm147 = 0.0f;
    for (int l43 = 0; l43 < 2; l43 = l43 + 1) {
      fRec42[l43] = 0.0f;
    }
    fTempPerm148 = 0.0f;
    fTempPerm149 = 0.0f;
    fTempPerm150 = 0.0f;
    for (int l44 = 0; l44 < 2; l44 = l44 + 1) {
      fRec44[l44] = 0.0f;
    }
    fTempPerm151 = 0.0f;
    for (int l45 = 0; l45 < 2; l45 = l45 + 1) {
      fRec45[l45] = 0.0f;
    }
    for (int l46 = 0; l46 < 2; l46 = l46 + 1) {
      fRec46[l46] = 0.0f;
    }
    fTempPerm152 = 0.0f;
    fTempPerm153 = 0.0f;
    fTempPerm154 = 0.0f;
    fTempPerm155 = 0.0f;
    fTempPerm156 = 0.0f;
    for (int l47 = 0; l47 < 2; l47 = l47 + 1) {
      fRec49[l47] = 0.0f;
    }
    fTempPerm157 = 0.0f;
    for (int l48 = 0; l48 < 2; l48 = l48 + 1) {
      fRec50[l48] = 0.0f;
    }
    fTempPerm158 = 0.0f;
    fTempPerm159 = 0.0f;
    for (int l49 = 0; l49 < 2; l49 = l49 + 1) {
      fVec8[l49] = 0.0f;
    }
    fTempPerm160 = 0.0f;
    for (int l50 = 0; l50 < 2; l50 = l50 + 1) {
      fRec52[l50] = 0.0f;
    }
    fTempPerm161 = 0.0f;
    fTempPerm162 = 0.0f;
    fTempPerm163 = 0.0f;
    fTempPerm164 = 0.0f;
    fTempPerm165 = 0.0f;
    for (int l51 = 0; l51 < 2; l51 = l51 + 1) {
      fVec9[l51] = 0.0f;
    }
    iTempPerm166 = 0;
    for (int l52 = 0; l52 < 2; l52 = l52 + 1) {
      iVec10[l52] = 0;
    }
    iTempPerm167 = 0;
    for (int l53 = 0; l53 < 2; l53 = l53 + 1) {
      fRec57[l53] = 0.0f;
    }
    fTempPerm168 = 0.0f;
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
    fTempPerm249 = 0.0f;
    fTempPerm250 = 0.0f;
    fTempPerm251 = 0.0f;
    fTempPerm252 = 0.0f;
    fTempPerm253 = 0.0f;
    fTempPerm254 = 0.0f;
    fTempPerm255 = 0.0f;
    fTempPerm256 = 0.0f;
    fTempPerm257 = 0.0f;
    fTempPerm258 = 0.0f;
    fTempPerm259 = 0.0f;
    fTempPerm260 = 0.0f;
    fTempPerm261 = 0.0f;
    fTempPerm262 = 0.0f;
    fTempPerm263 = 0.0f;
    fTempPerm264 = 0.0f;
    fTempPerm265 = 0.0f;
    for (int l59 = 0; l59 < 2; l59 = l59 + 1) {
      fRec58[l59] = 0.0f;
    }
    fTempPerm266 = 0.0f;
    fTempPerm267 = 0.0f;
    fTempPerm268 = 0.0f;
    fTempPerm269 = 0.0f;
    fTempPerm270 = 0.0f;
    for (int l60 = 0; l60 < 2; l60 = l60 + 1) {
      fRec59[l60] = 0.0f;
    }
    fTempPerm271 = 0.0f;
    fTempPerm272 = 0.0f;
    fTempPerm273 = 0.0f;
    fTempPerm274 = 0.0f;
    fTempPerm275 = 0.0f;
    fTempPerm276 = 0.0f;
    fTempPerm277 = 0.0f;
    fTempPerm278 = 0.0f;
    for (int l61 = 0; l61 < 2; l61 = l61 + 1) {
      fRec2[l61] = 0.0f;
    }
    fTempPerm279 = 0.0f;
    fTempPerm280 = 0.0f;
    fTempPerm281 = 0.0f;
    fTempPerm282 = 0.0f;
    fTempPerm283 = 0.0f;
    fTempPerm284 = 0.0f;
    fTempPerm285 = 0.0f;
    fTempPerm286 = 0.0f;
    fTempPerm287 = 0.0f;
    fTempPerm288 = 0.0f;
    fTempPerm289 = 0.0f;
    fTempPerm290 = 0.0f;
    fTempPerm291 = 0.0f;
    fTempPerm292 = 0.0f;
    fTempPerm293 = 0.0f;
    fTempPerm294 = 0.0f;
    fTempPerm295 = 0.0f;
    fTempPerm296 = 0.0f;
    fTempPerm297 = 0.0f;
    fTempPerm298 = 0.0f;
    fTempPerm299 = 0.0f;
    fTempPerm300 = 0.0f;
    fTempPerm301 = 0.0f;
    fTempPerm302 = 0.0f;
    fTempPerm303 = 0.0f;
    fTempPerm304 = 0.0f;
    fTempPerm305 = 0.0f;
    fTempPerm306 = 0.0f;
    fTempPerm307 = 0.0f;
    fTempPerm308 = 0.0f;
    fTempPerm309 = 0.0f;
    iTempPerm310 = 0;
    fTempPerm311 = 0.0f;
    fTempPerm312 = 0.0f;
    fTempPerm313 = 0.0f;
    fTempPerm314 = 0.0f;
    fTempPerm315 = 0.0f;
    fTempPerm316 = 0.0f;
    fTempPerm317 = 0.0f;
    iTempPerm318 = 0;
    fTempPerm319 = 0.0f;
    fTempPerm320 = 0.0f;
    for (int l62 = 0; l62 < 2; l62 = l62 + 1) {
      fRec60[l62] = 0.0f;
    }
    fTempPerm321 = 0.0f;
    for (int l63 = 0; l63 < 2; l63 = l63 + 1) {
      fRec61[l63] = 0.0f;
    }
    fTempPerm322 = 0.0f;
    fTempPerm323 = 0.0f;
    for (int l64 = 0; l64 < 2; l64 = l64 + 1) {
      fRec63[l64] = 0.0f;
    }
    fTempPerm324 = 0.0f;
    for (int l65 = 0; l65 < 2; l65 = l65 + 1) {
      fRec64[l65] = 0.0f;
    }
    for (int l66 = 0; l66 < 2; l66 = l66 + 1) {
      fRec65[l66] = 0.0f;
    }
    fTempPerm325 = 0.0f;
    fTempPerm326 = 0.0f;
    fTempPerm327 = 0.0f;
    fTempPerm328 = 0.0f;
    fTempPerm329 = 0.0f;
    for (int l67 = 0; l67 < 2; l67 = l67 + 1) {
      fRec68[l67] = 0.0f;
    }
    fTempPerm330 = 0.0f;
    for (int l68 = 0; l68 < 2; l68 = l68 + 1) {
      fRec69[l68] = 0.0f;
    }
    fTempPerm331 = 0.0f;
    fTempPerm332 = 0.0f;
    for (int l69 = 0; l69 < 2; l69 = l69 + 1) {
      fVec11[l69] = 0.0f;
    }
    fTempPerm333 = 0.0f;
    fTempPerm334 = 0.0f;
    fTempPerm335 = 0.0f;
    fTempPerm336 = 0.0f;
    fTempPerm337 = 0.0f;
    fTempPerm338 = 0.0f;
    fTempPerm339 = 0.0f;
    fTempPerm340 = 0.0f;
    fTempPerm341 = 0.0f;
    for (int l70 = 0; l70 < 2; l70 = l70 + 1) {
      fRec71[l70] = 0.0f;
    }
    fTempPerm342 = 0.0f;
    fTempPerm343 = 0.0f;
    fTempPerm344 = 0.0f;
    fTempPerm345 = 0.0f;
    fTempPerm346 = 0.0f;
    for (int l71 = 0; l71 < 2; l71 = l71 + 1) {
      fVec12[l71] = 0.0f;
    }
    iTempPerm347 = 0;
    for (int l72 = 0; l72 < 2; l72 = l72 + 1) {
      iVec13[l72] = 0;
    }
    iTempPerm348 = 0;
    for (int l73 = 0; l73 < 2; l73 = l73 + 1) {
      fRec76[l73] = 0.0f;
    }
    fTempPerm349 = 0.0f;
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
    fTempPerm350 = 0.0f;
    fTempPerm351 = 0.0f;
    fTempPerm352 = 0.0f;
    fTempPerm353 = 0.0f;
    fTempPerm354 = 0.0f;
    fTempPerm355 = 0.0f;
    fTempPerm356 = 0.0f;
    fTempPerm357 = 0.0f;
    fTempPerm358 = 0.0f;
    iTempPerm359 = 0;
    fTempPerm360 = 0.0f;
    fTempPerm361 = 0.0f;
    iTempPerm362 = 0;
    fTempPerm363 = 0.0f;
    fTempPerm364 = 0.0f;
    for (int l79 = 0; l79 < 2; l79 = l79 + 1) {
      fRec77[l79] = 0.0f;
    }
    fTempPerm365 = 0.0f;
    for (int l80 = 0; l80 < 2; l80 = l80 + 1) {
      fRec78[l80] = 0.0f;
    }
    fTempPerm366 = 0.0f;
    fTempPerm367 = 0.0f;
    for (int l81 = 0; l81 < 2; l81 = l81 + 1) {
      fRec80[l81] = 0.0f;
    }
    fTempPerm368 = 0.0f;
    for (int l82 = 0; l82 < 2; l82 = l82 + 1) {
      fRec81[l82] = 0.0f;
    }
    for (int l83 = 0; l83 < 2; l83 = l83 + 1) {
      fRec82[l83] = 0.0f;
    }
    fTempPerm369 = 0.0f;
    fTempPerm370 = 0.0f;
    fTempPerm371 = 0.0f;
    fTempPerm372 = 0.0f;
    fTempPerm373 = 0.0f;
    for (int l84 = 0; l84 < 2; l84 = l84 + 1) {
      fRec85[l84] = 0.0f;
    }
    fTempPerm374 = 0.0f;
    for (int l85 = 0; l85 < 2; l85 = l85 + 1) {
      fRec86[l85] = 0.0f;
    }
    fTempPerm375 = 0.0f;
    fTempPerm376 = 0.0f;
    for (int l86 = 0; l86 < 2; l86 = l86 + 1) {
      fVec14[l86] = 0.0f;
    }
    fTempPerm377 = 0.0f;
    for (int l87 = 0; l87 < 2; l87 = l87 + 1) {
      fRec88[l87] = 0.0f;
    }
    fTempPerm378 = 0.0f;
    fTempPerm379 = 0.0f;
    fTempPerm380 = 0.0f;
    fTempPerm381 = 0.0f;
    fTempPerm382 = 0.0f;
    for (int l88 = 0; l88 < 2; l88 = l88 + 1) {
      fVec15[l88] = 0.0f;
    }
    iTempPerm383 = 0;
    for (int l89 = 0; l89 < 2; l89 = l89 + 1) {
      iVec16[l89] = 0;
    }
    iTempPerm384 = 0;
    for (int l90 = 0; l90 < 2; l90 = l90 + 1) {
      fRec93[l90] = 0.0f;
    }
    fTempPerm385 = 0.0f;
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
    fTempPerm426 = 0.0f;
    fTempPerm427 = 0.0f;
    fTempPerm428 = 0.0f;
    fTempPerm429 = 0.0f;
    fTempPerm430 = 0.0f;
    fTempPerm431 = 0.0f;
    fTempPerm432 = 0.0f;
    fTempPerm433 = 0.0f;
    fTempPerm434 = 0.0f;
    fTempPerm435 = 0.0f;
    fTempPerm436 = 0.0f;
    fTempPerm437 = 0.0f;
    fTempPerm438 = 0.0f;
    fTempPerm439 = 0.0f;
    fTempPerm440 = 0.0f;
    fTempPerm441 = 0.0f;
    fTempPerm442 = 0.0f;
    fTempPerm443 = 0.0f;
    fTempPerm444 = 0.0f;
    fTempPerm445 = 0.0f;
    fTempPerm446 = 0.0f;
    fTempPerm447 = 0.0f;
    fTempPerm448 = 0.0f;
    fTempPerm449 = 0.0f;
    fTempPerm450 = 0.0f;
    fTempPerm451 = 0.0f;
    fTempPerm452 = 0.0f;
    fTempPerm453 = 0.0f;
    fTempPerm454 = 0.0f;
    fTempPerm455 = 0.0f;
    fTempPerm456 = 0.0f;
    fTempPerm457 = 0.0f;
    fTempPerm458 = 0.0f;
    fTempPerm459 = 0.0f;
    fTempPerm460 = 0.0f;
    fTempPerm461 = 0.0f;
    fTempPerm462 = 0.0f;
    fTempPerm463 = 0.0f;
    fTempPerm464 = 0.0f;
    fTempPerm465 = 0.0f;
    fTempPerm466 = 0.0f;
    fTempPerm467 = 0.0f;
    fTempPerm468 = 0.0f;
    fTempPerm469 = 0.0f;
    fTempPerm470 = 0.0f;
    fTempPerm471 = 0.0f;
    fTempPerm472 = 0.0f;
    fTempPerm473 = 0.0f;
    fTempPerm474 = 0.0f;
    fTempPerm475 = 0.0f;
    fTempPerm476 = 0.0f;
    fTempPerm477 = 0.0f;
    fTempPerm478 = 0.0f;
    fTempPerm479 = 0.0f;
    fTempPerm480 = 0.0f;
    fTempPerm481 = 0.0f;
    fTempPerm482 = 0.0f;
    for (int l96 = 0; l96 < 2; l96 = l96 + 1) {
      fRec94[l96] = 0.0f;
    }
    fTempPerm483 = 0.0f;
    fTempPerm484 = 0.0f;
    fTempPerm485 = 0.0f;
    fTempPerm486 = 0.0f;
    fTempPerm487 = 0.0f;
    for (int l97 = 0; l97 < 2; l97 = l97 + 1) {
      fRec95[l97] = 0.0f;
    }
    fTempPerm488 = 0.0f;
    fTempPerm489 = 0.0f;
    fTempPerm490 = 0.0f;
    fTempPerm491 = 0.0f;
    fTempPerm492 = 0.0f;
    fTempPerm493 = 0.0f;
    fTempPerm494 = 0.0f;
    fTempPerm495 = 0.0f;
    for (int l98 = 0; l98 < 2; l98 = l98 + 1) {
      fRec3[l98] = 0.0f;
    }
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
    iTempPerm527 = 0;
    fTempPerm528 = 0.0f;
    fTempPerm529 = 0.0f;
    fTempPerm530 = 0.0f;
    fTempPerm531 = 0.0f;
    fTempPerm532 = 0.0f;
    fTempPerm533 = 0.0f;
    fTempPerm534 = 0.0f;
    iTempPerm535 = 0;
    fTempPerm536 = 0.0f;
    fTempPerm537 = 0.0f;
    for (int l99 = 0; l99 < 2; l99 = l99 + 1) {
      fRec96[l99] = 0.0f;
    }
    fTempPerm538 = 0.0f;
    for (int l100 = 0; l100 < 2; l100 = l100 + 1) {
      fRec97[l100] = 0.0f;
    }
    fTempPerm539 = 0.0f;
    fTempPerm540 = 0.0f;
    for (int l101 = 0; l101 < 2; l101 = l101 + 1) {
      fRec99[l101] = 0.0f;
    }
    fTempPerm541 = 0.0f;
    for (int l102 = 0; l102 < 2; l102 = l102 + 1) {
      fRec100[l102] = 0.0f;
    }
    for (int l103 = 0; l103 < 2; l103 = l103 + 1) {
      fRec101[l103] = 0.0f;
    }
    fTempPerm542 = 0.0f;
    fTempPerm543 = 0.0f;
    fTempPerm544 = 0.0f;
    fTempPerm545 = 0.0f;
    fTempPerm546 = 0.0f;
    for (int l104 = 0; l104 < 2; l104 = l104 + 1) {
      fRec104[l104] = 0.0f;
    }
    fTempPerm547 = 0.0f;
    for (int l105 = 0; l105 < 2; l105 = l105 + 1) {
      fRec105[l105] = 0.0f;
    }
    fTempPerm548 = 0.0f;
    fTempPerm549 = 0.0f;
    for (int l106 = 0; l106 < 2; l106 = l106 + 1) {
      fVec17[l106] = 0.0f;
    }
    fTempPerm550 = 0.0f;
    fTempPerm551 = 0.0f;
    fTempPerm552 = 0.0f;
    fTempPerm553 = 0.0f;
    fTempPerm554 = 0.0f;
    fTempPerm555 = 0.0f;
    fTempPerm556 = 0.0f;
    fTempPerm557 = 0.0f;
    fTempPerm558 = 0.0f;
    for (int l107 = 0; l107 < 2; l107 = l107 + 1) {
      fRec107[l107] = 0.0f;
    }
    fTempPerm559 = 0.0f;
    fTempPerm560 = 0.0f;
    fTempPerm561 = 0.0f;
    fTempPerm562 = 0.0f;
    fTempPerm563 = 0.0f;
    for (int l108 = 0; l108 < 2; l108 = l108 + 1) {
      fVec18[l108] = 0.0f;
    }
    iTempPerm564 = 0;
    for (int l109 = 0; l109 < 2; l109 = l109 + 1) {
      iVec19[l109] = 0;
    }
    iTempPerm565 = 0;
    for (int l110 = 0; l110 < 2; l110 = l110 + 1) {
      fRec112[l110] = 0.0f;
    }
    fTempPerm566 = 0.0f;
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
    fTempPerm567 = 0.0f;
    fTempPerm568 = 0.0f;
    fTempPerm569 = 0.0f;
    fTempPerm570 = 0.0f;
    fTempPerm571 = 0.0f;
    fTempPerm572 = 0.0f;
    fTempPerm573 = 0.0f;
    fTempPerm574 = 0.0f;
    fTempPerm575 = 0.0f;
    iTempPerm576 = 0;
    fTempPerm577 = 0.0f;
    fTempPerm578 = 0.0f;
    iTempPerm579 = 0;
    fTempPerm580 = 0.0f;
    fTempPerm581 = 0.0f;
    for (int l116 = 0; l116 < 2; l116 = l116 + 1) {
      fRec113[l116] = 0.0f;
    }
    fTempPerm582 = 0.0f;
    for (int l117 = 0; l117 < 2; l117 = l117 + 1) {
      fRec114[l117] = 0.0f;
    }
    fTempPerm583 = 0.0f;
    fTempPerm584 = 0.0f;
    for (int l118 = 0; l118 < 2; l118 = l118 + 1) {
      fRec116[l118] = 0.0f;
    }
    fTempPerm585 = 0.0f;
    for (int l119 = 0; l119 < 2; l119 = l119 + 1) {
      fRec117[l119] = 0.0f;
    }
    for (int l120 = 0; l120 < 2; l120 = l120 + 1) {
      fRec118[l120] = 0.0f;
    }
    fTempPerm586 = 0.0f;
    fTempPerm587 = 0.0f;
    fTempPerm588 = 0.0f;
    fTempPerm589 = 0.0f;
    fTempPerm590 = 0.0f;
    for (int l121 = 0; l121 < 2; l121 = l121 + 1) {
      fRec121[l121] = 0.0f;
    }
    fTempPerm591 = 0.0f;
    for (int l122 = 0; l122 < 2; l122 = l122 + 1) {
      fRec122[l122] = 0.0f;
    }
    fTempPerm592 = 0.0f;
    fTempPerm593 = 0.0f;
    for (int l123 = 0; l123 < 2; l123 = l123 + 1) {
      fVec20[l123] = 0.0f;
    }
    fTempPerm594 = 0.0f;
    for (int l124 = 0; l124 < 2; l124 = l124 + 1) {
      fRec124[l124] = 0.0f;
    }
    fTempPerm595 = 0.0f;
    fTempPerm596 = 0.0f;
    fTempPerm597 = 0.0f;
    fTempPerm598 = 0.0f;
    fTempPerm599 = 0.0f;
    for (int l125 = 0; l125 < 2; l125 = l125 + 1) {
      fVec21[l125] = 0.0f;
    }
    iTempPerm600 = 0;
    for (int l126 = 0; l126 < 2; l126 = l126 + 1) {
      iVec22[l126] = 0;
    }
    iTempPerm601 = 0;
    for (int l127 = 0; l127 < 2; l127 = l127 + 1) {
      fRec129[l127] = 0.0f;
    }
    fTempPerm602 = 0.0f;
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
    fTempPerm603 = 0.0f;
    fTempPerm604 = 0.0f;
    fTempPerm605 = 0.0f;
    fTempPerm606 = 0.0f;
    fTempPerm607 = 0.0f;
    fTempPerm608 = 0.0f;
    fTempPerm609 = 0.0f;
    fTempPerm610 = 0.0f;
    fTempPerm611 = 0.0f;
    fTempPerm612 = 0.0f;
    fTempPerm613 = 0.0f;
    fTempPerm614 = 0.0f;
    fTempPerm615 = 0.0f;
    fTempPerm616 = 0.0f;
    fTempPerm617 = 0.0f;
    fTempPerm618 = 0.0f;
    fTempPerm619 = 0.0f;
    fTempPerm620 = 0.0f;
    fTempPerm621 = 0.0f;
    fTempPerm622 = 0.0f;
    fTempPerm623 = 0.0f;
    fTempPerm624 = 0.0f;
    fTempPerm625 = 0.0f;
    fTempPerm626 = 0.0f;
    fTempPerm627 = 0.0f;
    fTempPerm628 = 0.0f;
    fTempPerm629 = 0.0f;
    fTempPerm630 = 0.0f;
    fTempPerm631 = 0.0f;
    fTempPerm632 = 0.0f;
    fTempPerm633 = 0.0f;
    fTempPerm634 = 0.0f;
    fTempPerm635 = 0.0f;
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
    fTempPerm699 = 0.0f;
    for (int l133 = 0; l133 < 2; l133 = l133 + 1) {
      fRec130[l133] = 0.0f;
    }
    fTempPerm700 = 0.0f;
    fTempPerm701 = 0.0f;
    fTempPerm702 = 0.0f;
    fTempPerm703 = 0.0f;
    fTempPerm704 = 0.0f;
    for (int l134 = 0; l134 < 2; l134 = l134 + 1) {
      fRec131[l134] = 0.0f;
    }
    fTempPerm705 = 0.0f;
    fTempPerm706 = 0.0f;
    fTempPerm707 = 0.0f;
    fTempPerm708 = 0.0f;
    fTempPerm709 = 0.0f;
    fTempPerm710 = 0.0f;
    fTempPerm711 = 0.0f;
    fTempPerm712 = 0.0f;
    for (int l135 = 0; l135 < 2; l135 = l135 + 1) {
      fRec4[l135] = 0.0f;
    }
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
    fTempPerm729 = 0.0f;
    fTempPerm730 = 0.0f;
    fTempPerm731 = 0.0f;
    fTempPerm732 = 0.0f;
    fTempPerm733 = 0.0f;
    fTempPerm734 = 0.0f;
    fTempPerm735 = 0.0f;
    fTempPerm736 = 0.0f;
    fTempPerm737 = 0.0f;
    fTempPerm738 = 0.0f;
    fTempPerm739 = 0.0f;
    fTempPerm740 = 0.0f;
    fTempPerm741 = 0.0f;
    fTempPerm742 = 0.0f;
    fTempPerm743 = 0.0f;
    iTempPerm744 = 0;
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
    for (int l136 = 0; l136 < 2; l136 = l136 + 1) {
      fRec132[l136] = 0.0f;
    }
    fTempPerm755 = 0.0f;
    for (int l137 = 0; l137 < 2; l137 = l137 + 1) {
      fRec133[l137] = 0.0f;
    }
    fTempPerm756 = 0.0f;
    fTempPerm757 = 0.0f;
    for (int l138 = 0; l138 < 2; l138 = l138 + 1) {
      fRec135[l138] = 0.0f;
    }
    fTempPerm758 = 0.0f;
    for (int l139 = 0; l139 < 2; l139 = l139 + 1) {
      fRec136[l139] = 0.0f;
    }
    for (int l140 = 0; l140 < 2; l140 = l140 + 1) {
      fRec137[l140] = 0.0f;
    }
    fTempPerm759 = 0.0f;
    fTempPerm760 = 0.0f;
    fTempPerm761 = 0.0f;
    fTempPerm762 = 0.0f;
    fTempPerm763 = 0.0f;
    for (int l141 = 0; l141 < 2; l141 = l141 + 1) {
      fRec140[l141] = 0.0f;
    }
    fTempPerm764 = 0.0f;
    for (int l142 = 0; l142 < 2; l142 = l142 + 1) {
      fRec141[l142] = 0.0f;
    }
    fTempPerm765 = 0.0f;
    fTempPerm766 = 0.0f;
    for (int l143 = 0; l143 < 2; l143 = l143 + 1) {
      fVec23[l143] = 0.0f;
    }
    fTempPerm767 = 0.0f;
    fTempPerm768 = 0.0f;
    fTempPerm769 = 0.0f;
    fTempPerm770 = 0.0f;
    fTempPerm771 = 0.0f;
    fTempPerm772 = 0.0f;
    fTempPerm773 = 0.0f;
    fTempPerm774 = 0.0f;
    fTempPerm775 = 0.0f;
    for (int l144 = 0; l144 < 2; l144 = l144 + 1) {
      fRec143[l144] = 0.0f;
    }
    fTempPerm776 = 0.0f;
    fTempPerm777 = 0.0f;
    fTempPerm778 = 0.0f;
    fTempPerm779 = 0.0f;
    fTempPerm780 = 0.0f;
    for (int l145 = 0; l145 < 2; l145 = l145 + 1) {
      fVec24[l145] = 0.0f;
    }
    iTempPerm781 = 0;
    for (int l146 = 0; l146 < 2; l146 = l146 + 1) {
      iVec25[l146] = 0;
    }
    iTempPerm782 = 0;
    for (int l147 = 0; l147 < 2; l147 = l147 + 1) {
      fRec148[l147] = 0.0f;
    }
    fTempPerm783 = 0.0f;
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
    fTempPerm784 = 0.0f;
    fTempPerm785 = 0.0f;
    fTempPerm786 = 0.0f;
    fTempPerm787 = 0.0f;
    fTempPerm788 = 0.0f;
    fTempPerm789 = 0.0f;
    fTempPerm790 = 0.0f;
    fTempPerm791 = 0.0f;
    fTempPerm792 = 0.0f;
    iTempPerm793 = 0;
    fTempPerm794 = 0.0f;
    fTempPerm795 = 0.0f;
    iTempPerm796 = 0;
    fTempPerm797 = 0.0f;
    fTempPerm798 = 0.0f;
    for (int l153 = 0; l153 < 2; l153 = l153 + 1) {
      fRec149[l153] = 0.0f;
    }
    fTempPerm799 = 0.0f;
    for (int l154 = 0; l154 < 2; l154 = l154 + 1) {
      fRec150[l154] = 0.0f;
    }
    fTempPerm800 = 0.0f;
    fTempPerm801 = 0.0f;
    for (int l155 = 0; l155 < 2; l155 = l155 + 1) {
      fRec152[l155] = 0.0f;
    }
    fTempPerm802 = 0.0f;
    for (int l156 = 0; l156 < 2; l156 = l156 + 1) {
      fRec153[l156] = 0.0f;
    }
    for (int l157 = 0; l157 < 2; l157 = l157 + 1) {
      fRec154[l157] = 0.0f;
    }
    fTempPerm803 = 0.0f;
    fTempPerm804 = 0.0f;
    fTempPerm805 = 0.0f;
    fTempPerm806 = 0.0f;
    fTempPerm807 = 0.0f;
    for (int l158 = 0; l158 < 2; l158 = l158 + 1) {
      fRec157[l158] = 0.0f;
    }
    fTempPerm808 = 0.0f;
    for (int l159 = 0; l159 < 2; l159 = l159 + 1) {
      fRec158[l159] = 0.0f;
    }
    fTempPerm809 = 0.0f;
    fTempPerm810 = 0.0f;
    for (int l160 = 0; l160 < 2; l160 = l160 + 1) {
      fVec26[l160] = 0.0f;
    }
    fTempPerm811 = 0.0f;
    for (int l161 = 0; l161 < 2; l161 = l161 + 1) {
      fRec160[l161] = 0.0f;
    }
    fTempPerm812 = 0.0f;
    fTempPerm813 = 0.0f;
    fTempPerm814 = 0.0f;
    fTempPerm815 = 0.0f;
    fTempPerm816 = 0.0f;
    for (int l162 = 0; l162 < 2; l162 = l162 + 1) {
      fVec27[l162] = 0.0f;
    }
    iTempPerm817 = 0;
    for (int l163 = 0; l163 < 2; l163 = l163 + 1) {
      iVec28[l163] = 0;
    }
    iTempPerm818 = 0;
    for (int l164 = 0; l164 < 2; l164 = l164 + 1) {
      fRec165[l164] = 0.0f;
    }
    fTempPerm819 = 0.0f;
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
    fTempPerm893 = 0.0f;
    fTempPerm894 = 0.0f;
    fTempPerm895 = 0.0f;
    fTempPerm896 = 0.0f;
    fTempPerm897 = 0.0f;
    fTempPerm898 = 0.0f;
    fTempPerm899 = 0.0f;
    fTempPerm900 = 0.0f;
    fTempPerm901 = 0.0f;
    fTempPerm902 = 0.0f;
    fTempPerm903 = 0.0f;
    fTempPerm904 = 0.0f;
    fTempPerm905 = 0.0f;
    fTempPerm906 = 0.0f;
    fTempPerm907 = 0.0f;
    fTempPerm908 = 0.0f;
    fTempPerm909 = 0.0f;
    fTempPerm910 = 0.0f;
    fTempPerm911 = 0.0f;
    fTempPerm912 = 0.0f;
    fTempPerm913 = 0.0f;
    fTempPerm914 = 0.0f;
    fTempPerm915 = 0.0f;
    fTempPerm916 = 0.0f;
    for (int l170 = 0; l170 < 2; l170 = l170 + 1) {
      fRec166[l170] = 0.0f;
    }
    fTempPerm917 = 0.0f;
    fTempPerm918 = 0.0f;
    fTempPerm919 = 0.0f;
    fTempPerm920 = 0.0f;
    fTempPerm921 = 0.0f;
    for (int l171 = 0; l171 < 2; l171 = l171 + 1) {
      fRec167[l171] = 0.0f;
    }
    fTempPerm922 = 0.0f;
    fTempPerm923 = 0.0f;
    fTempPerm924 = 0.0f;
    fTempPerm925 = 0.0f;
    fTempPerm926 = 0.0f;
    fTempPerm927 = 0.0f;
    fTempPerm928 = 0.0f;
    fTempPerm929 = 0.0f;
    for (int l172 = 0; l172 < 2; l172 = l172 + 1) {
      fRec5[l172] = 0.0f;
    }
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
    iTempPerm949 = 0;
    fTempPerm950 = 0.0f;
    fTempPerm951 = 0.0f;
    fTempPerm952 = 0.0f;
    iTempPerm953 = 0;
    fTempPerm954 = 0.0f;
    fTempPerm955 = 0.0f;
    fTempPerm956 = 0.0f;
    fTempPerm957 = 0.0f;
    fTempPerm958 = 0.0f;
    for (int l173 = 0; l173 < 2; l173 = l173 + 1) {
      fRec172[l173] = 0.0f;
    }
    fTempPerm959 = 0.0f;
    for (int l174 = 0; l174 < 2; l174 = l174 + 1) {
      fRec173[l174] = 0.0f;
    }
    fTempPerm960 = 0.0f;
    fTempPerm961 = 0.0f;
    fTempPerm962 = 0.0f;
    fTempPerm963 = 0.0f;
    fTempPerm964 = 0.0f;
    fTempPerm965 = 0.0f;
    fTempPerm966 = 0.0f;
    fTempPerm967 = 0.0f;
    fTempPerm968 = 0.0f;
    for (int l175 = 0; l175 < 2; l175 = l175 + 1) {
      fRec175[l175] = 0.0f;
    }
    fTempPerm969 = 0.0f;
    for (int l176 = 0; l176 < 2; l176 = l176 + 1) {
      fRec176[l176] = 0.0f;
    }
    for (int l177 = 0; l177 < 2; l177 = l177 + 1) {
      fRec177[l177] = 0.0f;
    }
    fTempPerm970 = 0.0f;
    fTempPerm971 = 0.0f;
    fTempPerm972 = 0.0f;
    fTempPerm973 = 0.0f;
    fTempPerm974 = 0.0f;
    fTempPerm975 = 0.0f;
    fTempPerm976 = 0.0f;
    for (int l178 = 0; l178 < 2; l178 = l178 + 1) {
      fRec180[l178] = 0.0f;
    }
    fTempPerm977 = 0.0f;
    for (int l179 = 0; l179 < 2; l179 = l179 + 1) {
      fRec181[l179] = 0.0f;
    }
    fTempPerm978 = 0.0f;
    fTempPerm979 = 0.0f;
    fTempPerm980 = 0.0f;
    fTempPerm981 = 0.0f;
    for (int l180 = 0; l180 < 2; l180 = l180 + 1) {
      fVec29[l180] = 0.0f;
    }
    fTempPerm982 = 0.0f;
    fTempPerm983 = 0.0f;
    fTempPerm984 = 0.0f;
    fTempPerm985 = 0.0f;
    fTempPerm986 = 0.0f;
    for (int l181 = 0; l181 < 2; l181 = l181 + 1) {
      fRec183[l181] = 0.0f;
    }
    fTempPerm987 = 0.0f;
    fTempPerm988 = 0.0f;
    fTempPerm989 = 0.0f;
    fTempPerm990 = 0.0f;
    fTempPerm991 = 0.0f;
    for (int l182 = 0; l182 < 2; l182 = l182 + 1) {
      fVec30[l182] = 0.0f;
    }
    iTempPerm992 = 0;
    for (int l183 = 0; l183 < 2; l183 = l183 + 1) {
      iVec31[l183] = 0;
    }
    iTempPerm993 = 0;
    for (int l184 = 0; l184 < 2; l184 = l184 + 1) {
      fRec188[l184] = 0.0f;
    }
    fTempPerm994 = 0.0f;
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
    fTempPerm995 = 0.0f;
    fTempPerm996 = 0.0f;
    fTempPerm997 = 0.0f;
    fTempPerm998 = 0.0f;
    fTempPerm999 = 0.0f;
    fTempPerm1000 = 0.0f;
    fTempPerm1001 = 0.0f;
    fTempPerm1002 = 0.0f;
    fTempPerm1003 = 0.0f;
    iTempPerm1004 = 0;
    fTempPerm1005 = 0.0f;
    fTempPerm1006 = 0.0f;
    iTempPerm1007 = 0;
    fTempPerm1008 = 0.0f;
    fTempPerm1009 = 0.0f;
    for (int l190 = 0; l190 < 2; l190 = l190 + 1) {
      fRec189[l190] = 0.0f;
    }
    fTempPerm1010 = 0.0f;
    for (int l191 = 0; l191 < 2; l191 = l191 + 1) {
      fRec190[l191] = 0.0f;
    }
    fTempPerm1011 = 0.0f;
    fTempPerm1012 = 0.0f;
    fTempPerm1013 = 0.0f;
    for (int l192 = 0; l192 < 2; l192 = l192 + 1) {
      fRec192[l192] = 0.0f;
    }
    fTempPerm1014 = 0.0f;
    for (int l193 = 0; l193 < 2; l193 = l193 + 1) {
      fRec193[l193] = 0.0f;
    }
    for (int l194 = 0; l194 < 2; l194 = l194 + 1) {
      fRec194[l194] = 0.0f;
    }
    fTempPerm1015 = 0.0f;
    fTempPerm1016 = 0.0f;
    fTempPerm1017 = 0.0f;
    fTempPerm1018 = 0.0f;
    fTempPerm1019 = 0.0f;
    for (int l195 = 0; l195 < 2; l195 = l195 + 1) {
      fRec197[l195] = 0.0f;
    }
    fTempPerm1020 = 0.0f;
    for (int l196 = 0; l196 < 2; l196 = l196 + 1) {
      fRec198[l196] = 0.0f;
    }
    fTempPerm1021 = 0.0f;
    fTempPerm1022 = 0.0f;
    for (int l197 = 0; l197 < 2; l197 = l197 + 1) {
      fVec32[l197] = 0.0f;
    }
    fTempPerm1023 = 0.0f;
    for (int l198 = 0; l198 < 2; l198 = l198 + 1) {
      fRec200[l198] = 0.0f;
    }
    fTempPerm1024 = 0.0f;
    fTempPerm1025 = 0.0f;
    fTempPerm1026 = 0.0f;
    fTempPerm1027 = 0.0f;
    fTempPerm1028 = 0.0f;
    for (int l199 = 0; l199 < 2; l199 = l199 + 1) {
      fVec33[l199] = 0.0f;
    }
    iTempPerm1029 = 0;
    for (int l200 = 0; l200 < 2; l200 = l200 + 1) {
      iVec34[l200] = 0;
    }
    iTempPerm1030 = 0;
    for (int l201 = 0; l201 < 2; l201 = l201 + 1) {
      fRec205[l201] = 0.0f;
    }
    fTempPerm1031 = 0.0f;
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
    fTempPerm1032 = 0.0f;
    fTempPerm1033 = 0.0f;
    fTempPerm1034 = 0.0f;
    fTempPerm1035 = 0.0f;
    fTempPerm1036 = 0.0f;
    fTempPerm1037 = 0.0f;
    fTempPerm1038 = 0.0f;
    fTempPerm1039 = 0.0f;
    fTempPerm1040 = 0.0f;
    fTempPerm1041 = 0.0f;
    fTempPerm1042 = 0.0f;
    fTempPerm1043 = 0.0f;
    fTempPerm1044 = 0.0f;
    fTempPerm1045 = 0.0f;
    fTempPerm1046 = 0.0f;
    fTempPerm1047 = 0.0f;
    fTempPerm1048 = 0.0f;
    fTempPerm1049 = 0.0f;
    fTempPerm1050 = 0.0f;
    fTempPerm1051 = 0.0f;
    fTempPerm1052 = 0.0f;
    fTempPerm1053 = 0.0f;
    fTempPerm1054 = 0.0f;
    fTempPerm1055 = 0.0f;
    fTempPerm1056 = 0.0f;
    fTempPerm1057 = 0.0f;
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
    fTempPerm1121 = 0.0f;
    fTempPerm1122 = 0.0f;
    fTempPerm1123 = 0.0f;
    fTempPerm1124 = 0.0f;
    fTempPerm1125 = 0.0f;
    fTempPerm1126 = 0.0f;
    fTempPerm1127 = 0.0f;
    fTempPerm1128 = 0.0f;
    for (int l207 = 0; l207 < 2; l207 = l207 + 1) {
      fRec206[l207] = 0.0f;
    }
    fTempPerm1129 = 0.0f;
    fTempPerm1130 = 0.0f;
    fTempPerm1131 = 0.0f;
    fTempPerm1132 = 0.0f;
    fTempPerm1133 = 0.0f;
    for (int l208 = 0; l208 < 2; l208 = l208 + 1) {
      fRec207[l208] = 0.0f;
    }
    fTempPerm1134 = 0.0f;
    fTempPerm1135 = 0.0f;
    fTempPerm1136 = 0.0f;
    fTempPerm1137 = 0.0f;
    fTempPerm1138 = 0.0f;
    fTempPerm1139 = 0.0f;
    fTempPerm1140 = 0.0f;
    fTempPerm1141 = 0.0f;
    for (int l209 = 0; l209 < 2; l209 = l209 + 1) {
      fRec168[l209] = 0.0f;
    }
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
    iTempPerm1153 = 0;
    fTempPerm1154 = 0.0f;
    fTempPerm1155 = 0.0f;
    fTempPerm1156 = 0.0f;
    iTempPerm1157 = 0;
    fTempPerm1158 = 0.0f;
    fTempPerm1159 = 0.0f;
    for (int l210 = 0; l210 < 2; l210 = l210 + 1) {
      fRec208[l210] = 0.0f;
    }
    fTempPerm1160 = 0.0f;
    for (int l211 = 0; l211 < 2; l211 = l211 + 1) {
      fRec209[l211] = 0.0f;
    }
    fTempPerm1161 = 0.0f;
    fTempPerm1162 = 0.0f;
    for (int l212 = 0; l212 < 2; l212 = l212 + 1) {
      fRec211[l212] = 0.0f;
    }
    fTempPerm1163 = 0.0f;
    for (int l213 = 0; l213 < 2; l213 = l213 + 1) {
      fRec212[l213] = 0.0f;
    }
    for (int l214 = 0; l214 < 2; l214 = l214 + 1) {
      fRec213[l214] = 0.0f;
    }
    fTempPerm1164 = 0.0f;
    fTempPerm1165 = 0.0f;
    fTempPerm1166 = 0.0f;
    fTempPerm1167 = 0.0f;
    fTempPerm1168 = 0.0f;
    for (int l215 = 0; l215 < 2; l215 = l215 + 1) {
      fRec216[l215] = 0.0f;
    }
    fTempPerm1169 = 0.0f;
    for (int l216 = 0; l216 < 2; l216 = l216 + 1) {
      fRec217[l216] = 0.0f;
    }
    fTempPerm1170 = 0.0f;
    fTempPerm1171 = 0.0f;
    for (int l217 = 0; l217 < 2; l217 = l217 + 1) {
      fVec35[l217] = 0.0f;
    }
    fTempPerm1172 = 0.0f;
    fTempPerm1173 = 0.0f;
    fTempPerm1174 = 0.0f;
    fTempPerm1175 = 0.0f;
    fTempPerm1176 = 0.0f;
    for (int l218 = 0; l218 < 2; l218 = l218 + 1) {
      fRec219[l218] = 0.0f;
    }
    fTempPerm1177 = 0.0f;
    fTempPerm1178 = 0.0f;
    fTempPerm1179 = 0.0f;
    fTempPerm1180 = 0.0f;
    fTempPerm1181 = 0.0f;
    for (int l219 = 0; l219 < 2; l219 = l219 + 1) {
      fVec36[l219] = 0.0f;
    }
    iTempPerm1182 = 0;
    for (int l220 = 0; l220 < 2; l220 = l220 + 1) {
      iVec37[l220] = 0;
    }
    iTempPerm1183 = 0;
    for (int l221 = 0; l221 < 2; l221 = l221 + 1) {
      fRec224[l221] = 0.0f;
    }
    fTempPerm1184 = 0.0f;
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
    fTempPerm1185 = 0.0f;
    fTempPerm1186 = 0.0f;
    fTempPerm1187 = 0.0f;
    fTempPerm1188 = 0.0f;
    fTempPerm1189 = 0.0f;
    fTempPerm1190 = 0.0f;
    fTempPerm1191 = 0.0f;
    fTempPerm1192 = 0.0f;
    fTempPerm1193 = 0.0f;
    iTempPerm1194 = 0;
    fTempPerm1195 = 0.0f;
    fTempPerm1196 = 0.0f;
    iTempPerm1197 = 0;
    fTempPerm1198 = 0.0f;
    fTempPerm1199 = 0.0f;
    for (int l227 = 0; l227 < 2; l227 = l227 + 1) {
      fRec225[l227] = 0.0f;
    }
    fTempPerm1200 = 0.0f;
    for (int l228 = 0; l228 < 2; l228 = l228 + 1) {
      fRec226[l228] = 0.0f;
    }
    fTempPerm1201 = 0.0f;
    fTempPerm1202 = 0.0f;
    for (int l229 = 0; l229 < 2; l229 = l229 + 1) {
      fRec228[l229] = 0.0f;
    }
    fTempPerm1203 = 0.0f;
    for (int l230 = 0; l230 < 2; l230 = l230 + 1) {
      fRec229[l230] = 0.0f;
    }
    for (int l231 = 0; l231 < 2; l231 = l231 + 1) {
      fRec230[l231] = 0.0f;
    }
    fTempPerm1204 = 0.0f;
    fTempPerm1205 = 0.0f;
    fTempPerm1206 = 0.0f;
    fTempPerm1207 = 0.0f;
    fTempPerm1208 = 0.0f;
    for (int l232 = 0; l232 < 2; l232 = l232 + 1) {
      fRec233[l232] = 0.0f;
    }
    fTempPerm1209 = 0.0f;
    for (int l233 = 0; l233 < 2; l233 = l233 + 1) {
      fRec234[l233] = 0.0f;
    }
    fTempPerm1210 = 0.0f;
    fTempPerm1211 = 0.0f;
    for (int l234 = 0; l234 < 2; l234 = l234 + 1) {
      fVec38[l234] = 0.0f;
    }
    fTempPerm1212 = 0.0f;
    for (int l235 = 0; l235 < 2; l235 = l235 + 1) {
      fRec236[l235] = 0.0f;
    }
    fTempPerm1213 = 0.0f;
    fTempPerm1214 = 0.0f;
    fTempPerm1215 = 0.0f;
    fTempPerm1216 = 0.0f;
    fTempPerm1217 = 0.0f;
    for (int l236 = 0; l236 < 2; l236 = l236 + 1) {
      fVec39[l236] = 0.0f;
    }
    iTempPerm1218 = 0;
    for (int l237 = 0; l237 < 2; l237 = l237 + 1) {
      iVec40[l237] = 0;
    }
    iTempPerm1219 = 0;
    for (int l238 = 0; l238 < 2; l238 = l238 + 1) {
      fRec241[l238] = 0.0f;
    }
    fTempPerm1220 = 0.0f;
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
    fTempPerm1316 = 0.0f;
    fTempPerm1317 = 0.0f;
    for (int l244 = 0; l244 < 2; l244 = l244 + 1) {
      fRec242[l244] = 0.0f;
    }
    fTempPerm1318 = 0.0f;
    fTempPerm1319 = 0.0f;
    fTempPerm1320 = 0.0f;
    fTempPerm1321 = 0.0f;
    fTempPerm1322 = 0.0f;
    for (int l245 = 0; l245 < 2; l245 = l245 + 1) {
      fRec243[l245] = 0.0f;
    }
    fTempPerm1323 = 0.0f;
    fTempPerm1324 = 0.0f;
    fTempPerm1325 = 0.0f;
    fTempPerm1326 = 0.0f;
    fTempPerm1327 = 0.0f;
    fTempPerm1328 = 0.0f;
    fTempPerm1329 = 0.0f;
    fTempPerm1330 = 0.0f;
    for (int l246 = 0; l246 < 2; l246 = l246 + 1) {
      fRec169[l246] = 0.0f;
    }
    fTempPerm1331 = 0.0f;
    fTempPerm1332 = 0.0f;
    fTempPerm1333 = 0.0f;
    fTempPerm1334 = 0.0f;
    fTempPerm1335 = 0.0f;
    fTempPerm1336 = 0.0f;
    fTempPerm1337 = 0.0f;
    fTempPerm1338 = 0.0f;
    fTempPerm1339 = 0.0f;
    fTempPerm1340 = 0.0f;
    fTempPerm1341 = 0.0f;
    iTempPerm1342 = 0;
    fTempPerm1343 = 0.0f;
    fTempPerm1344 = 0.0f;
    fTempPerm1345 = 0.0f;
    iTempPerm1346 = 0;
    fTempPerm1347 = 0.0f;
    fTempPerm1348 = 0.0f;
    for (int l247 = 0; l247 < 2; l247 = l247 + 1) {
      fRec244[l247] = 0.0f;
    }
    fTempPerm1349 = 0.0f;
    for (int l248 = 0; l248 < 2; l248 = l248 + 1) {
      fRec245[l248] = 0.0f;
    }
    fTempPerm1350 = 0.0f;
    fTempPerm1351 = 0.0f;
    for (int l249 = 0; l249 < 2; l249 = l249 + 1) {
      fRec247[l249] = 0.0f;
    }
    fTempPerm1352 = 0.0f;
    for (int l250 = 0; l250 < 2; l250 = l250 + 1) {
      fRec248[l250] = 0.0f;
    }
    for (int l251 = 0; l251 < 2; l251 = l251 + 1) {
      fRec249[l251] = 0.0f;
    }
    fTempPerm1353 = 0.0f;
    fTempPerm1354 = 0.0f;
    fTempPerm1355 = 0.0f;
    fTempPerm1356 = 0.0f;
    fTempPerm1357 = 0.0f;
    for (int l252 = 0; l252 < 2; l252 = l252 + 1) {
      fRec252[l252] = 0.0f;
    }
    fTempPerm1358 = 0.0f;
    for (int l253 = 0; l253 < 2; l253 = l253 + 1) {
      fRec253[l253] = 0.0f;
    }
    fTempPerm1359 = 0.0f;
    fTempPerm1360 = 0.0f;
    for (int l254 = 0; l254 < 2; l254 = l254 + 1) {
      fVec41[l254] = 0.0f;
    }
    fTempPerm1361 = 0.0f;
    fTempPerm1362 = 0.0f;
    fTempPerm1363 = 0.0f;
    fTempPerm1364 = 0.0f;
    fTempPerm1365 = 0.0f;
    for (int l255 = 0; l255 < 2; l255 = l255 + 1) {
      fRec255[l255] = 0.0f;
    }
    fTempPerm1366 = 0.0f;
    fTempPerm1367 = 0.0f;
    fTempPerm1368 = 0.0f;
    fTempPerm1369 = 0.0f;
    fTempPerm1370 = 0.0f;
    for (int l256 = 0; l256 < 2; l256 = l256 + 1) {
      fVec42[l256] = 0.0f;
    }
    iTempPerm1371 = 0;
    for (int l257 = 0; l257 < 2; l257 = l257 + 1) {
      iVec43[l257] = 0;
    }
    iTempPerm1372 = 0;
    for (int l258 = 0; l258 < 2; l258 = l258 + 1) {
      fRec260[l258] = 0.0f;
    }
    fTempPerm1373 = 0.0f;
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
    fTempPerm1374 = 0.0f;
    fTempPerm1375 = 0.0f;
    fTempPerm1376 = 0.0f;
    fTempPerm1377 = 0.0f;
    fTempPerm1378 = 0.0f;
    fTempPerm1379 = 0.0f;
    fTempPerm1380 = 0.0f;
    fTempPerm1381 = 0.0f;
    fTempPerm1382 = 0.0f;
    iTempPerm1383 = 0;
    fTempPerm1384 = 0.0f;
    fTempPerm1385 = 0.0f;
    iTempPerm1386 = 0;
    fTempPerm1387 = 0.0f;
    fTempPerm1388 = 0.0f;
    for (int l264 = 0; l264 < 2; l264 = l264 + 1) {
      fRec261[l264] = 0.0f;
    }
    fTempPerm1389 = 0.0f;
    for (int l265 = 0; l265 < 2; l265 = l265 + 1) {
      fRec262[l265] = 0.0f;
    }
    fTempPerm1390 = 0.0f;
    fTempPerm1391 = 0.0f;
    for (int l266 = 0; l266 < 2; l266 = l266 + 1) {
      fRec264[l266] = 0.0f;
    }
    fTempPerm1392 = 0.0f;
    for (int l267 = 0; l267 < 2; l267 = l267 + 1) {
      fRec265[l267] = 0.0f;
    }
    for (int l268 = 0; l268 < 2; l268 = l268 + 1) {
      fRec266[l268] = 0.0f;
    }
    fTempPerm1393 = 0.0f;
    fTempPerm1394 = 0.0f;
    fTempPerm1395 = 0.0f;
    fTempPerm1396 = 0.0f;
    fTempPerm1397 = 0.0f;
    for (int l269 = 0; l269 < 2; l269 = l269 + 1) {
      fRec269[l269] = 0.0f;
    }
    fTempPerm1398 = 0.0f;
    for (int l270 = 0; l270 < 2; l270 = l270 + 1) {
      fRec270[l270] = 0.0f;
    }
    fTempPerm1399 = 0.0f;
    fTempPerm1400 = 0.0f;
    for (int l271 = 0; l271 < 2; l271 = l271 + 1) {
      fVec44[l271] = 0.0f;
    }
    fTempPerm1401 = 0.0f;
    for (int l272 = 0; l272 < 2; l272 = l272 + 1) {
      fRec272[l272] = 0.0f;
    }
    fTempPerm1402 = 0.0f;
    fTempPerm1403 = 0.0f;
    fTempPerm1404 = 0.0f;
    fTempPerm1405 = 0.0f;
    fTempPerm1406 = 0.0f;
    for (int l273 = 0; l273 < 2; l273 = l273 + 1) {
      fVec45[l273] = 0.0f;
    }
    iTempPerm1407 = 0;
    for (int l274 = 0; l274 < 2; l274 = l274 + 1) {
      iVec46[l274] = 0;
    }
    iTempPerm1408 = 0;
    for (int l275 = 0; l275 < 2; l275 = l275 + 1) {
      fRec277[l275] = 0.0f;
    }
    fTempPerm1409 = 0.0f;
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
    fTempPerm1410 = 0.0f;
    fTempPerm1411 = 0.0f;
    fTempPerm1412 = 0.0f;
    fTempPerm1413 = 0.0f;
    fTempPerm1414 = 0.0f;
    fTempPerm1415 = 0.0f;
    fTempPerm1416 = 0.0f;
    fTempPerm1417 = 0.0f;
    fTempPerm1418 = 0.0f;
    fTempPerm1419 = 0.0f;
    fTempPerm1420 = 0.0f;
    fTempPerm1421 = 0.0f;
    fTempPerm1422 = 0.0f;
    fTempPerm1423 = 0.0f;
    fTempPerm1424 = 0.0f;
    fTempPerm1425 = 0.0f;
    fTempPerm1426 = 0.0f;
    fTempPerm1427 = 0.0f;
    fTempPerm1428 = 0.0f;
    fTempPerm1429 = 0.0f;
    fTempPerm1430 = 0.0f;
    fTempPerm1431 = 0.0f;
    fTempPerm1432 = 0.0f;
    fTempPerm1433 = 0.0f;
    fTempPerm1434 = 0.0f;
    fTempPerm1435 = 0.0f;
    fTempPerm1436 = 0.0f;
    fTempPerm1437 = 0.0f;
    fTempPerm1438 = 0.0f;
    fTempPerm1439 = 0.0f;
    fTempPerm1440 = 0.0f;
    fTempPerm1441 = 0.0f;
    fTempPerm1442 = 0.0f;
    fTempPerm1443 = 0.0f;
    fTempPerm1444 = 0.0f;
    fTempPerm1445 = 0.0f;
    fTempPerm1446 = 0.0f;
    fTempPerm1447 = 0.0f;
    fTempPerm1448 = 0.0f;
    fTempPerm1449 = 0.0f;
    fTempPerm1450 = 0.0f;
    fTempPerm1451 = 0.0f;
    fTempPerm1452 = 0.0f;
    fTempPerm1453 = 0.0f;
    fTempPerm1454 = 0.0f;
    fTempPerm1455 = 0.0f;
    fTempPerm1456 = 0.0f;
    fTempPerm1457 = 0.0f;
    fTempPerm1458 = 0.0f;
    fTempPerm1459 = 0.0f;
    fTempPerm1460 = 0.0f;
    fTempPerm1461 = 0.0f;
    fTempPerm1462 = 0.0f;
    fTempPerm1463 = 0.0f;
    fTempPerm1464 = 0.0f;
    fTempPerm1465 = 0.0f;
    fTempPerm1466 = 0.0f;
    fTempPerm1467 = 0.0f;
    fTempPerm1468 = 0.0f;
    fTempPerm1469 = 0.0f;
    fTempPerm1470 = 0.0f;
    fTempPerm1471 = 0.0f;
    fTempPerm1472 = 0.0f;
    fTempPerm1473 = 0.0f;
    fTempPerm1474 = 0.0f;
    fTempPerm1475 = 0.0f;
    fTempPerm1476 = 0.0f;
    fTempPerm1477 = 0.0f;
    fTempPerm1478 = 0.0f;
    fTempPerm1479 = 0.0f;
    fTempPerm1480 = 0.0f;
    fTempPerm1481 = 0.0f;
    fTempPerm1482 = 0.0f;
    fTempPerm1483 = 0.0f;
    fTempPerm1484 = 0.0f;
    fTempPerm1485 = 0.0f;
    fTempPerm1486 = 0.0f;
    fTempPerm1487 = 0.0f;
    fTempPerm1488 = 0.0f;
    fTempPerm1489 = 0.0f;
    fTempPerm1490 = 0.0f;
    fTempPerm1491 = 0.0f;
    fTempPerm1492 = 0.0f;
    fTempPerm1493 = 0.0f;
    fTempPerm1494 = 0.0f;
    fTempPerm1495 = 0.0f;
    fTempPerm1496 = 0.0f;
    fTempPerm1497 = 0.0f;
    fTempPerm1498 = 0.0f;
    fTempPerm1499 = 0.0f;
    fTempPerm1500 = 0.0f;
    fTempPerm1501 = 0.0f;
    fTempPerm1502 = 0.0f;
    fTempPerm1503 = 0.0f;
    fTempPerm1504 = 0.0f;
    fTempPerm1505 = 0.0f;
    fTempPerm1506 = 0.0f;
    for (int l281 = 0; l281 < 2; l281 = l281 + 1) {
      fRec278[l281] = 0.0f;
    }
    fTempPerm1507 = 0.0f;
    fTempPerm1508 = 0.0f;
    fTempPerm1509 = 0.0f;
    fTempPerm1510 = 0.0f;
    fTempPerm1511 = 0.0f;
    for (int l282 = 0; l282 < 2; l282 = l282 + 1) {
      fRec279[l282] = 0.0f;
    }
    fTempPerm1512 = 0.0f;
    fTempPerm1513 = 0.0f;
    fTempPerm1514 = 0.0f;
    fTempPerm1515 = 0.0f;
    fTempPerm1516 = 0.0f;
    fTempPerm1517 = 0.0f;
    fTempPerm1518 = 0.0f;
    fTempPerm1519 = 0.0f;
    for (int l283 = 0; l283 < 2; l283 = l283 + 1) {
      fRec170[l283] = 0.0f;
    }
    fTempPerm1520 = 0.0f;
    fTempPerm1521 = 0.0f;
    fTempPerm1522 = 0.0f;
    fTempPerm1523 = 0.0f;
    fTempPerm1524 = 0.0f;
    fTempPerm1525 = 0.0f;
    fTempPerm1526 = 0.0f;
    fTempPerm1527 = 0.0f;
    fTempPerm1528 = 0.0f;
    fTempPerm1529 = 0.0f;
    fTempPerm1530 = 0.0f;
    iTempPerm1531 = 0;
    fTempPerm1532 = 0.0f;
    fTempPerm1533 = 0.0f;
    fTempPerm1534 = 0.0f;
    iTempPerm1535 = 0;
    fTempPerm1536 = 0.0f;
    fTempPerm1537 = 0.0f;
    for (int l284 = 0; l284 < 2; l284 = l284 + 1) {
      fRec280[l284] = 0.0f;
    }
    fTempPerm1538 = 0.0f;
    for (int l285 = 0; l285 < 2; l285 = l285 + 1) {
      fRec281[l285] = 0.0f;
    }
    fTempPerm1539 = 0.0f;
    fTempPerm1540 = 0.0f;
    for (int l286 = 0; l286 < 2; l286 = l286 + 1) {
      fRec283[l286] = 0.0f;
    }
    fTempPerm1541 = 0.0f;
    for (int l287 = 0; l287 < 2; l287 = l287 + 1) {
      fRec284[l287] = 0.0f;
    }
    for (int l288 = 0; l288 < 2; l288 = l288 + 1) {
      fRec285[l288] = 0.0f;
    }
    fTempPerm1542 = 0.0f;
    fTempPerm1543 = 0.0f;
    fTempPerm1544 = 0.0f;
    fTempPerm1545 = 0.0f;
    fTempPerm1546 = 0.0f;
    for (int l289 = 0; l289 < 2; l289 = l289 + 1) {
      fRec288[l289] = 0.0f;
    }
    fTempPerm1547 = 0.0f;
    for (int l290 = 0; l290 < 2; l290 = l290 + 1) {
      fRec289[l290] = 0.0f;
    }
    fTempPerm1548 = 0.0f;
    fTempPerm1549 = 0.0f;
    for (int l291 = 0; l291 < 2; l291 = l291 + 1) {
      fVec47[l291] = 0.0f;
    }
    fTempPerm1550 = 0.0f;
    fTempPerm1551 = 0.0f;
    fTempPerm1552 = 0.0f;
    fTempPerm1553 = 0.0f;
    fTempPerm1554 = 0.0f;
    for (int l292 = 0; l292 < 2; l292 = l292 + 1) {
      fRec291[l292] = 0.0f;
    }
    fTempPerm1555 = 0.0f;
    fTempPerm1556 = 0.0f;
    fTempPerm1557 = 0.0f;
    fTempPerm1558 = 0.0f;
    fTempPerm1559 = 0.0f;
    for (int l293 = 0; l293 < 2; l293 = l293 + 1) {
      fVec48[l293] = 0.0f;
    }
    iTempPerm1560 = 0;
    for (int l294 = 0; l294 < 2; l294 = l294 + 1) {
      iVec49[l294] = 0;
    }
    iTempPerm1561 = 0;
    for (int l295 = 0; l295 < 2; l295 = l295 + 1) {
      fRec296[l295] = 0.0f;
    }
    fTempPerm1562 = 0.0f;
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
    fTempPerm1563 = 0.0f;
    fTempPerm1564 = 0.0f;
    fTempPerm1565 = 0.0f;
    fTempPerm1566 = 0.0f;
    fTempPerm1567 = 0.0f;
    fTempPerm1568 = 0.0f;
    fTempPerm1569 = 0.0f;
    fTempPerm1570 = 0.0f;
    fTempPerm1571 = 0.0f;
    iTempPerm1572 = 0;
    fTempPerm1573 = 0.0f;
    fTempPerm1574 = 0.0f;
    iTempPerm1575 = 0;
    fTempPerm1576 = 0.0f;
    fTempPerm1577 = 0.0f;
    for (int l301 = 0; l301 < 2; l301 = l301 + 1) {
      fRec297[l301] = 0.0f;
    }
    fTempPerm1578 = 0.0f;
    for (int l302 = 0; l302 < 2; l302 = l302 + 1) {
      fRec298[l302] = 0.0f;
    }
    fTempPerm1579 = 0.0f;
    fTempPerm1580 = 0.0f;
    for (int l303 = 0; l303 < 2; l303 = l303 + 1) {
      fRec300[l303] = 0.0f;
    }
    fTempPerm1581 = 0.0f;
    for (int l304 = 0; l304 < 2; l304 = l304 + 1) {
      fRec301[l304] = 0.0f;
    }
    for (int l305 = 0; l305 < 2; l305 = l305 + 1) {
      fRec302[l305] = 0.0f;
    }
    fTempPerm1582 = 0.0f;
    fTempPerm1583 = 0.0f;
    fTempPerm1584 = 0.0f;
    fTempPerm1585 = 0.0f;
    fTempPerm1586 = 0.0f;
    for (int l306 = 0; l306 < 2; l306 = l306 + 1) {
      fRec305[l306] = 0.0f;
    }
    fTempPerm1587 = 0.0f;
    for (int l307 = 0; l307 < 2; l307 = l307 + 1) {
      fRec306[l307] = 0.0f;
    }
    fTempPerm1588 = 0.0f;
    fTempPerm1589 = 0.0f;
    for (int l308 = 0; l308 < 2; l308 = l308 + 1) {
      fVec50[l308] = 0.0f;
    }
    fTempPerm1590 = 0.0f;
    for (int l309 = 0; l309 < 2; l309 = l309 + 1) {
      fRec308[l309] = 0.0f;
    }
    fTempPerm1591 = 0.0f;
    fTempPerm1592 = 0.0f;
    fTempPerm1593 = 0.0f;
    fTempPerm1594 = 0.0f;
    fTempPerm1595 = 0.0f;
    for (int l310 = 0; l310 < 2; l310 = l310 + 1) {
      fVec51[l310] = 0.0f;
    }
    iTempPerm1596 = 0;
    for (int l311 = 0; l311 < 2; l311 = l311 + 1) {
      iVec52[l311] = 0;
    }
    iTempPerm1597 = 0;
    for (int l312 = 0; l312 < 2; l312 = l312 + 1) {
      fRec313[l312] = 0.0f;
    }
    fTempPerm1598 = 0.0f;
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
    fTempPerm1599 = 0.0f;
    fTempPerm1600 = 0.0f;
    fTempPerm1601 = 0.0f;
    fTempPerm1602 = 0.0f;
    fTempPerm1603 = 0.0f;
    fTempPerm1604 = 0.0f;
    fTempPerm1605 = 0.0f;
    fTempPerm1606 = 0.0f;
    fTempPerm1607 = 0.0f;
    fTempPerm1608 = 0.0f;
    fTempPerm1609 = 0.0f;
    fTempPerm1610 = 0.0f;
    fTempPerm1611 = 0.0f;
    fTempPerm1612 = 0.0f;
    fTempPerm1613 = 0.0f;
    fTempPerm1614 = 0.0f;
    fTempPerm1615 = 0.0f;
    fTempPerm1616 = 0.0f;
    fTempPerm1617 = 0.0f;
    fTempPerm1618 = 0.0f;
    fTempPerm1619 = 0.0f;
    fTempPerm1620 = 0.0f;
    fTempPerm1621 = 0.0f;
    fTempPerm1622 = 0.0f;
    fTempPerm1623 = 0.0f;
    fTempPerm1624 = 0.0f;
    fTempPerm1625 = 0.0f;
    fTempPerm1626 = 0.0f;
    fTempPerm1627 = 0.0f;
    fTempPerm1628 = 0.0f;
    fTempPerm1629 = 0.0f;
    fTempPerm1630 = 0.0f;
    fTempPerm1631 = 0.0f;
    fTempPerm1632 = 0.0f;
    fTempPerm1633 = 0.0f;
    fTempPerm1634 = 0.0f;
    fTempPerm1635 = 0.0f;
    fTempPerm1636 = 0.0f;
    fTempPerm1637 = 0.0f;
    fTempPerm1638 = 0.0f;
    fTempPerm1639 = 0.0f;
    fTempPerm1640 = 0.0f;
    fTempPerm1641 = 0.0f;
    fTempPerm1642 = 0.0f;
    fTempPerm1643 = 0.0f;
    fTempPerm1644 = 0.0f;
    fTempPerm1645 = 0.0f;
    fTempPerm1646 = 0.0f;
    fTempPerm1647 = 0.0f;
    fTempPerm1648 = 0.0f;
    fTempPerm1649 = 0.0f;
    fTempPerm1650 = 0.0f;
    fTempPerm1651 = 0.0f;
    fTempPerm1652 = 0.0f;
    fTempPerm1653 = 0.0f;
    fTempPerm1654 = 0.0f;
    fTempPerm1655 = 0.0f;
    fTempPerm1656 = 0.0f;
    fTempPerm1657 = 0.0f;
    fTempPerm1658 = 0.0f;
    fTempPerm1659 = 0.0f;
    fTempPerm1660 = 0.0f;
    fTempPerm1661 = 0.0f;
    fTempPerm1662 = 0.0f;
    fTempPerm1663 = 0.0f;
    fTempPerm1664 = 0.0f;
    fTempPerm1665 = 0.0f;
    fTempPerm1666 = 0.0f;
    fTempPerm1667 = 0.0f;
    fTempPerm1668 = 0.0f;
    fTempPerm1669 = 0.0f;
    fTempPerm1670 = 0.0f;
    fTempPerm1671 = 0.0f;
    fTempPerm1672 = 0.0f;
    fTempPerm1673 = 0.0f;
    fTempPerm1674 = 0.0f;
    fTempPerm1675 = 0.0f;
    fTempPerm1676 = 0.0f;
    fTempPerm1677 = 0.0f;
    fTempPerm1678 = 0.0f;
    fTempPerm1679 = 0.0f;
    fTempPerm1680 = 0.0f;
    fTempPerm1681 = 0.0f;
    fTempPerm1682 = 0.0f;
    fTempPerm1683 = 0.0f;
    fTempPerm1684 = 0.0f;
    fTempPerm1685 = 0.0f;
    fTempPerm1686 = 0.0f;
    fTempPerm1687 = 0.0f;
    fTempPerm1688 = 0.0f;
    fTempPerm1689 = 0.0f;
    fTempPerm1690 = 0.0f;
    fTempPerm1691 = 0.0f;
    fTempPerm1692 = 0.0f;
    fTempPerm1693 = 0.0f;
    fTempPerm1694 = 0.0f;
    fTempPerm1695 = 0.0f;
    for (int l318 = 0; l318 < 2; l318 = l318 + 1) {
      fRec314[l318] = 0.0f;
    }
    fTempPerm1696 = 0.0f;
    fTempPerm1697 = 0.0f;
    fTempPerm1698 = 0.0f;
    fTempPerm1699 = 0.0f;
    fTempPerm1700 = 0.0f;
    for (int l319 = 0; l319 < 2; l319 = l319 + 1) {
      fRec315[l319] = 0.0f;
    }
    fTempPerm1701 = 0.0f;
    fTempPerm1702 = 0.0f;
    fTempPerm1703 = 0.0f;
    fTempPerm1704 = 0.0f;
    fTempPerm1705 = 0.0f;
    fTempPerm1706 = 0.0f;
    fTempPerm1707 = 0.0f;
    fTempPerm1708 = 0.0f;
    for (int l320 = 0; l320 < 2; l320 = l320 + 1) {
      fRec171[l320] = 0.0f;
    }
  }

  void init(int sample_rate) { instanceInit(sample_rate); }

  void instanceInit(int sample_rate)
  {
    staticInit(sample_rate);
    instanceConstants(sample_rate);
    instanceResetUserInterface();
    instanceClear();
  }

  mydsp *clone() { return new mydsp(); }

  int getSampleRate() { return fSampleRate; }

  void control(int *RESTRICT iControl, float *RESTRICT fControl)
  {
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
    fControl[57] = fControl[17] + fControl[20] + fControl[23] + fControl[26]
      + fControl[29] + fControl[32] + fControl[35] + fControl[38] + fControl[41]
      + fControl[44] + fControl[47] + fControl[50] + fControl[53] + fControl[56];
    fControl[58] = std::min<float>(1.0f, fControl[57]);
    fControl[59] = fControl[58] / std::max<float>(1.84317514e-35f, fControl[57]);
    fControl[60] = std::max<float>(1.31655367e-36f, fControl[17]);
    float fElse6 = 0.0f - fControl[60];
    fControl[61] = ((fControl[16] < 0.0f) ? fElse6 : fControl[60]);
    iControl[4] = fControl[15] < 0.0f;
    fControl[62] = float(fHslider22) * fControl[1] + 1.0f;
    fControl[63] = float(fHslider23);
    fControl[64] = float(fHslider24);
    iControl[5] = int(fConst0 * fControl[64]);
    fControl[65] = float(fHslider25);
    fControl[66] = float(fHslider26) * fControl[7];
    fControl[67] = std::max<float>(1.31655367e-36f, fControl[20]);
    float fElse14 = 0.0f - fControl[67];
    fControl[68] = ((fControl[19] < 0.0f) ? fElse14 : fControl[67]);
    iControl[6] = fControl[18] < 0.0f;
    fControl[69] = float(fHslider27) * fControl[1] + 1.0f;
    fControl[70] = float(fHslider28);
    fControl[71] = float(fHslider29);
    iControl[7] = int(fConst0 * fControl[71]);
    fControl[72] = float(fHslider30);
    fControl[73] = float(fHslider31) * fControl[7];
    fControl[74] = std::max<float>(1.31655367e-36f, fControl[23]);
    float fElse22 = 0.0f - fControl[74];
    fControl[75] = ((fControl[22] < 0.0f) ? fElse22 : fControl[74]);
    iControl[8] = fControl[21] < 0.0f;
    fControl[76] = float(fHslider32) * fControl[1] + 1.0f;
    fControl[77] = float(fHslider33);
    fControl[78] = float(fHslider34);
    iControl[9] = int(fConst0 * fControl[78]);
    fControl[79] = float(fHslider35);
    fControl[80] = float(fHslider36) * fControl[7];
    fControl[81] = std::max<float>(1.31655367e-36f, fControl[26]);
    float fElse30 = 0.0f - fControl[81];
    fControl[82] = ((fControl[25] < 0.0f) ? fElse30 : fControl[81]);
    iControl[10] = fControl[24] < 0.0f;
    fControl[83] = float(fHslider37) * fControl[1] + 1.0f;
    fControl[84] = float(fHslider38);
    fControl[85] = float(fHslider39);
    iControl[11] = int(fConst0 * fControl[85]);
    fControl[86] = float(fHslider40);
    fControl[87] = float(fHslider41) * fControl[7];
    fControl[88] = std::max<float>(1.31655367e-36f, fControl[29]);
    float fElse38 = 0.0f - fControl[88];
    fControl[89] = ((fControl[28] < 0.0f) ? fElse38 : fControl[88]);
    iControl[12] = fControl[27] < 0.0f;
    fControl[90] = fConst1 * float(fHslider42);
    fControl[91] = std::max<float>(1.31655367e-36f, fControl[32]);
    float fElse42 = 0.0f - fControl[91];
    fControl[92] = ((fControl[31] < 0.0f) ? fElse42 : fControl[91]);
    iControl[13] = fControl[30] < 0.0f;
    fControl[93] = fConst1 * float(fHslider43);
    fControl[94] = std::max<float>(1.31655367e-36f, fControl[35]);
    float fElse46 = 0.0f - fControl[94];
    fControl[95] = ((fControl[34] < 0.0f) ? fElse46 : fControl[94]);
    iControl[14] = fControl[33] < 0.0f;
    fControl[96] = fConst1 * float(fHslider44);
    fControl[97] = std::max<float>(1.31655367e-36f, fControl[38]);
    float fElse50 = 0.0f - fControl[97];
    fControl[98] = ((fControl[37] < 0.0f) ? fElse50 : fControl[97]);
    iControl[15] = fControl[36] < 0.0f;
    fControl[99] = fConst1 * float(fHslider45);
    fControl[100] = std::max<float>(1.31655367e-36f, fControl[41]);
    float fElse54 = 0.0f - fControl[100];
    fControl[101] = 0.00787401572f * float(fVslider1);
    fControl[102] = 1.0f - fControl[101];
    fControl[103] = ((fControl[40] < 0.0f) ? fElse54 : fControl[100])
      * ((fControl[39] < 0.0f) ? fControl[102] : fControl[101]);
    fControl[104] = std::max<float>(1.31655367e-36f, fControl[44]);
    float fElse56 = 0.0f - fControl[104];
    fControl[105] = ((fControl[43] < 0.0f) ? fElse56 : fControl[104])
      * float(((fControl[42] < 0.0f) ? 1 : 0));
    fControl[106] = std::max<float>(1.31655367e-36f, fControl[47]);
    float fElse58 = 0.0f - fControl[106];
    fControl[107] = 1.0f - fControl[0];
    fControl[108] = ((fControl[46] < 0.0f) ? fElse58 : fControl[106])
      * ((fControl[45] < 0.0f) ? fControl[107] : fControl[0]);
    fControl[109] = std::max<float>(1.31655367e-36f, fControl[50]);
    float fElse60 = 0.0f - fControl[109];
    fControl[110] = 0.00787401572f * float(fVslider2);
    fControl[111] = 1.0f - fControl[110];
    fControl[112] = ((fControl[49] < 0.0f) ? fElse60 : fControl[109])
      * ((fControl[48] < 0.0f) ? fControl[111] : fControl[110]);
    fControl[113] = std::max<float>(1.31655367e-36f, fControl[53]);
    float fElse62 = 0.0f - fControl[113];
    fControl[114] = float(fVslider3);
    fControl[115] = 0.000122070312f * fControl[114];
    fControl[116] = 1.0f - fControl[115];
    fControl[117] = ((fControl[52] < 0.0f) ? fElse62 : fControl[113])
      * ((fControl[51] < 0.0f) ? fControl[116] : fControl[115]);
    fControl[118] = std::max<float>(1.31655367e-36f, fControl[56]);
    float fElse64 = 0.0f - fControl[118];
    fControl[119] = ((fControl[55] < 0.0f) ? fElse64 : fControl[118]);
    iControl[16] = fControl[54] < 0.0f;
    fControl[120] = 1.0f - fControl[58];
    fControl[121] = float(fHslider46);
    fControl[122] = float(fHslider47);
    iControl[17] = std::fabs(fControl[122]) < 1.1920929e-07f;
    float fThen68 = std::exp(0.0f - fConst1 / ((iControl[17]) ? 1.0f : fControl[122]));
    fControl[123] = ((iControl[17]) ? 0.0f : fThen68);
    fControl[124] = float(fHslider48);
    iControl[18] = std::fabs(fControl[124]) < 1.1920929e-07f;
    float fThen70 = std::exp(0.0f - fConst1 / ((iControl[18]) ? 1.0f : fControl[124]));
    fControl[125] = ((iControl[18]) ? 0.0f : fThen70);
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
    fControl[172] = fControl[132] + fControl[135] + fControl[138] + fControl[141]
      + fControl[144] + fControl[147] + fControl[150] + fControl[153] + fControl[156]
      + fControl[159] + fControl[162] + fControl[165] + fControl[168] + fControl[171];
    fControl[173] = std::min<float>(1.0f, fControl[172]);
    fControl[174] = fControl[173] / std::max<float>(1.84317514e-35f, fControl[172]);
    fControl[175] = std::max<float>(1.31655367e-36f, fControl[132]);
    float fElse72 = 0.0f - fControl[175];
    fControl[176] = ((fControl[131] < 0.0f) ? fElse72 : fControl[175]);
    iControl[19] = fControl[130] < 0.0f;
    fControl[177] = std::max<float>(1.31655367e-36f, fControl[135]);
    float fElse74 = 0.0f - fControl[177];
    fControl[178] = ((fControl[134] < 0.0f) ? fElse74 : fControl[177]);
    iControl[20] = fControl[133] < 0.0f;
    fControl[179] = std::max<float>(1.31655367e-36f, fControl[138]);
    float fElse76 = 0.0f - fControl[179];
    fControl[180] = ((fControl[137] < 0.0f) ? fElse76 : fControl[179]);
    iControl[21] = fControl[136] < 0.0f;
    fControl[181] = std::max<float>(1.31655367e-36f, fControl[141]);
    float fElse78 = 0.0f - fControl[181];
    fControl[182] = ((fControl[140] < 0.0f) ? fElse78 : fControl[181]);
    iControl[22] = fControl[139] < 0.0f;
    fControl[183] = std::max<float>(1.31655367e-36f, fControl[144]);
    float fElse80 = 0.0f - fControl[183];
    fControl[184] = ((fControl[143] < 0.0f) ? fElse80 : fControl[183]);
    iControl[23] = fControl[142] < 0.0f;
    fControl[185] = std::max<float>(1.31655367e-36f, fControl[147]);
    float fElse82 = 0.0f - fControl[185];
    fControl[186] = ((fControl[146] < 0.0f) ? fElse82 : fControl[185]);
    iControl[24] = fControl[145] < 0.0f;
    fControl[187] = std::max<float>(1.31655367e-36f, fControl[150]);
    float fElse84 = 0.0f - fControl[187];
    fControl[188] = ((fControl[149] < 0.0f) ? fElse84 : fControl[187]);
    iControl[25] = fControl[148] < 0.0f;
    fControl[189] = std::max<float>(1.31655367e-36f, fControl[153]);
    float fElse86 = 0.0f - fControl[189];
    fControl[190] = ((fControl[152] < 0.0f) ? fElse86 : fControl[189]);
    iControl[26] = fControl[151] < 0.0f;
    fControl[191] = std::max<float>(1.31655367e-36f, fControl[156]);
    float fElse88 = 0.0f - fControl[191];
    fControl[192] = ((fControl[155] < 0.0f) ? fElse88 : fControl[191])
      * ((fControl[154] < 0.0f) ? fControl[102] : fControl[101]);
    fControl[193] = std::max<float>(1.31655367e-36f, fControl[159]);
    float fElse90 = 0.0f - fControl[193];
    fControl[194] = ((fControl[158] < 0.0f) ? fElse90 : fControl[193])
      * float(((fControl[157] < 0.0f) ? 1 : 0));
    fControl[195] = std::max<float>(1.31655367e-36f, fControl[162]);
    float fElse92 = 0.0f - fControl[195];
    fControl[196] = ((fControl[161] < 0.0f) ? fElse92 : fControl[195])
      * ((fControl[160] < 0.0f) ? fControl[107] : fControl[0]);
    fControl[197] = std::max<float>(1.31655367e-36f, fControl[165]);
    float fElse94 = 0.0f - fControl[197];
    fControl[198] = ((fControl[164] < 0.0f) ? fElse94 : fControl[197])
      * ((fControl[163] < 0.0f) ? fControl[111] : fControl[110]);
    fControl[199] = std::max<float>(1.31655367e-36f, fControl[168]);
    float fElse96 = 0.0f - fControl[199];
    fControl[200] = ((fControl[167] < 0.0f) ? fElse96 : fControl[199])
      * ((fControl[166] < 0.0f) ? fControl[116] : fControl[115]);
    fControl[201] = std::max<float>(1.31655367e-36f, fControl[171]);
    float fElse98 = 0.0f - fControl[201];
    fControl[202] = ((fControl[170] < 0.0f) ? fElse98 : fControl[201]);
    iControl[27] = fControl[169] < 0.0f;
    fControl[203] = 1.0f - fControl[173];
    fControl[204] = float(fHslider66);
    fControl[205] = float(fHslider67);
    iControl[28] = std::fabs(fControl[205]) < 1.1920929e-07f;
    float fThen101 = std::exp(0.0f - fConst1 / ((iControl[28]) ? 1.0f : fControl[205]));
    fControl[206] = ((iControl[28]) ? 0.0f : fThen101);
    fControl[207] = float(fHslider68);
    iControl[29] = std::fabs(fControl[207]) < 1.1920929e-07f;
    float fThen103 = std::exp(0.0f - fConst1 / ((iControl[29]) ? 1.0f : fControl[207]));
    fControl[208] = ((iControl[29]) ? 0.0f : fThen103);
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
    fControl[251] = fControl[211] + fControl[214] + fControl[217] + fControl[220]
      + fControl[223] + fControl[226] + fControl[229] + fControl[232] + fControl[235]
      + fControl[238] + fControl[241] + fControl[244] + fControl[247] + fControl[250];
    fControl[252] = std::min<float>(1.0f, fControl[251]);
    fControl[253] = fControl[252] / std::max<float>(1.84317514e-35f, fControl[251]);
    fControl[254] = std::max<float>(1.31655367e-36f, fControl[211]);
    float fElse105 = 0.0f - fControl[254];
    fControl[255] = ((fControl[210] < 0.0f) ? fElse105 : fControl[254]);
    iControl[30] = fControl[209] < 0.0f;
    fControl[256] = std::max<float>(1.31655367e-36f, fControl[214]);
    float fElse107 = 0.0f - fControl[256];
    fControl[257] = ((fControl[213] < 0.0f) ? fElse107 : fControl[256]);
    iControl[31] = fControl[212] < 0.0f;
    fControl[258] = std::max<float>(1.31655367e-36f, fControl[217]);
    float fElse109 = 0.0f - fControl[258];
    fControl[259] = ((fControl[216] < 0.0f) ? fElse109 : fControl[258]);
    iControl[32] = fControl[215] < 0.0f;
    fControl[260] = std::max<float>(1.31655367e-36f, fControl[220]);
    float fElse111 = 0.0f - fControl[260];
    fControl[261] = ((fControl[219] < 0.0f) ? fElse111 : fControl[260]);
    iControl[33] = fControl[218] < 0.0f;
    fControl[262] = std::max<float>(1.31655367e-36f, fControl[223]);
    float fElse113 = 0.0f - fControl[262];
    fControl[263] = ((fControl[222] < 0.0f) ? fElse113 : fControl[262]);
    iControl[34] = fControl[221] < 0.0f;
    fControl[264] = std::max<float>(1.31655367e-36f, fControl[226]);
    float fElse115 = 0.0f - fControl[264];
    fControl[265] = ((fControl[225] < 0.0f) ? fElse115 : fControl[264]);
    iControl[35] = fControl[224] < 0.0f;
    fControl[266] = std::max<float>(1.31655367e-36f, fControl[229]);
    float fElse117 = 0.0f - fControl[266];
    fControl[267] = ((fControl[228] < 0.0f) ? fElse117 : fControl[266]);
    iControl[36] = fControl[227] < 0.0f;
    fControl[268] = std::max<float>(1.31655367e-36f, fControl[232]);
    float fElse119 = 0.0f - fControl[268];
    fControl[269] = ((fControl[231] < 0.0f) ? fElse119 : fControl[268]);
    iControl[37] = fControl[230] < 0.0f;
    fControl[270] = std::max<float>(1.31655367e-36f, fControl[235]);
    float fElse121 = 0.0f - fControl[270];
    fControl[271] = ((fControl[234] < 0.0f) ? fElse121 : fControl[270])
      * ((fControl[233] < 0.0f) ? fControl[102] : fControl[101]);
    fControl[272] = std::max<float>(1.31655367e-36f, fControl[238]);
    float fElse123 = 0.0f - fControl[272];
    fControl[273] = ((fControl[237] < 0.0f) ? fElse123 : fControl[272])
      * float(((fControl[236] < 0.0f) ? 1 : 0));
    fControl[274] = std::max<float>(1.31655367e-36f, fControl[241]);
    float fElse125 = 0.0f - fControl[274];
    fControl[275] = ((fControl[240] < 0.0f) ? fElse125 : fControl[274])
      * ((fControl[239] < 0.0f) ? fControl[107] : fControl[0]);
    fControl[276] = std::max<float>(1.31655367e-36f, fControl[244]);
    float fElse127 = 0.0f - fControl[276];
    fControl[277] = ((fControl[243] < 0.0f) ? fElse127 : fControl[276])
      * ((fControl[242] < 0.0f) ? fControl[111] : fControl[110]);
    fControl[278] = std::max<float>(1.31655367e-36f, fControl[247]);
    float fElse129 = 0.0f - fControl[278];
    fControl[279] = ((fControl[246] < 0.0f) ? fElse129 : fControl[278])
      * ((fControl[245] < 0.0f) ? fControl[116] : fControl[115]);
    fControl[280] = std::max<float>(1.31655367e-36f, fControl[250]);
    float fElse131 = 0.0f - fControl[280];
    fControl[281] = ((fControl[249] < 0.0f) ? fElse131 : fControl[280]);
    iControl[38] = fControl[248] < 0.0f;
    fControl[282] = 1.0f - fControl[252];
    fControl[283] = float(fHslider83);
    fControl[284] = float(fHslider84);
    iControl[39] = std::fabs(fControl[284]) < 1.1920929e-07f;
    float fThen134 = std::exp(0.0f - fConst1 / ((iControl[39]) ? 1.0f : fControl[284]));
    fControl[285] = ((iControl[39]) ? 0.0f : fThen134);
    fControl[286] = float(fHslider85);
    iControl[40] = std::fabs(fControl[286]) < 1.1920929e-07f;
    float fThen136 = std::exp(0.0f - fConst1 / ((iControl[40]) ? 1.0f : fControl[286]));
    fControl[287] = ((iControl[40]) ? 0.0f : fThen136);
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
    float fThen140 = std::exp(0.0f - fConst1 / ((iControl[79]) ? 1.0f : fControl[466]));
    fControl[467] = ((iControl[79]) ? 0.0f : fThen140);
    fControl[468] = fControl[465] * (1.0f - fControl[467]);
    iControl[80] = int(fControl[3]);
    float fThen143 = 0.0f - float(fEntry1);
    float fElse143 = float(fEntry2);
    fControl[469] = std::pow(
      2.0f,
      1.01725263e-05f * fControl[114] * ((fControl[115] > 0.0f) ? fElse143 : fThen143));
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
    fControl[825] = float(fHslider476) - fControl[813];
    fControl[826] = float(fHslider477) - fControl[824];
    fControl[827] = fControl[825] - fControl[826];
    fControl[828] = float(fHslider478);
    fControl[829] = fControl[825] - float(fHslider479) - fControl[828];
    fControl[830] = float(fHslider480);
    fControl[831] = fControl[826] - float(fHslider481) - fControl[830];
    fControl[832] = fControl[825] + fControl[817];
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
    fControl[1056] = fControl[817] - fControl[825];
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

  void compute(
    float *RESTRICT inputs,
    float *RESTRICT outputs,
    int *RESTRICT iControl,
    float *RESTRICT fControl)
  {
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
    fRec0[0] = fControl[2] * (1.0f - fTemp5) * ((iControl[1]) ? fElse5 : 0.0f)
      + fTemp5 * fRec0[1];
    fHbargraph0 = FAUSTFLOAT(fRec0[0]);
    float fTemp6 = fHbargraph0;
    int iTemp7 = (iRec1[0] < iControl[5]) | iTemp1;
    float fElse8 = ((iTemp7) ? fControl[64] : fControl[65]);
    float fTemp8 = 0.144717798f * ((iControl[1]) ? fElse8 : fControl[63]);
    int iTemp9 = std::fabs(fTemp8) < 1.1920929e-07f;
    float fThen10 = std::exp(0.0f - fConst1 / ((iTemp9) ? 1.0f : fTemp8));
    float fTemp10 = ((iTemp9) ? 0.0f : fThen10);
    float fElse12 = ((iTemp7) ? fControl[7] : fControl[66]);
    fRec6[0] = fControl[62] * (1.0f - fTemp10) * ((iControl[1]) ? fElse12 : 0.0f)
      + fTemp10 * fRec6[1];
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
    fRec7[0] = fControl[69] * (1.0f - fTemp16) * ((iControl[1]) ? fElse20 : 0.0f)
      + fTemp16 * fRec7[1];
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
    fRec8[0] = fControl[76] * (1.0f - fTemp22) * ((iControl[1]) ? fElse28 : 0.0f)
      + fTemp22 * fRec8[1];
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
    fRec9[0] = fControl[83] * (1.0f - fTemp28) * ((iControl[1]) ? fElse36 : 0.0f)
      + fTemp28 * fRec9[1];
    fHbargraph4 = FAUSTFLOAT(fRec9[0]);
    float fTemp29 = fHbargraph4;
    float fTemp30 = 1.0f - fTemp29;
    float fTemp31 = fControl[90] + fRec11[1];
    float fTemp32 = float(int(fTemp31));
    float fThen39 = fTemp32 + -1.0f;
    float fThen40 = ((fTemp31 >= 0.0f) ? fTemp32 : fThen39);
    fRec11[0] = fControl[90] + fRec11[1] - ((fTemp31 == fTemp32) ? fTemp31 : fThen40);
    fHbargraph5 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec11[0])]);
    float fTemp33 = 0.5f * (fHbargraph5 + 1.0f);
    float fTemp34 = 1.0f - fTemp33;
    float fTemp35 = fControl[93] + fRec12[1];
    float fTemp36 = float(int(fTemp35));
    float fThen43 = fTemp36 + -1.0f;
    float fThen44 = ((fTemp35 >= 0.0f) ? fTemp36 : fThen43);
    fRec12[0] = fControl[93] + fRec12[1] - ((fTemp35 == fTemp36) ? fTemp35 : fThen44);
    fHbargraph6 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec12[0])]);
    float fTemp37 = 0.5f * (fHbargraph6 + 1.0f);
    float fTemp38 = 1.0f - fTemp37;
    float fTemp39 = fControl[96] + fRec13[1];
    float fTemp40 = float(int(fTemp39));
    float fThen47 = fTemp40 + -1.0f;
    float fThen48 = ((fTemp39 >= 0.0f) ? fTemp40 : fThen47);
    fRec13[0] = fControl[96] + fRec13[1] - ((fTemp39 == fTemp40) ? fTemp39 : fThen48);
    fHbargraph7 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec13[0])]);
    float fTemp41 = 0.5f * (fHbargraph7 + 1.0f);
    float fTemp42 = 1.0f - fTemp41;
    float fTemp43 = fControl[99] + fRec14[1];
    float fTemp44 = float(int(fTemp43));
    float fThen51 = fTemp44 + -1.0f;
    float fThen52 = ((fTemp43 >= 0.0f) ? fTemp44 : fThen51);
    fRec14[0] = fControl[99] + fRec14[1] - ((fTemp43 == fTemp44) ? fTemp43 : fThen52);
    fHbargraph8 = FAUSTFLOAT(ftbl0mydspSIG0[int(65536.0f * fRec14[0])]);
    float fTemp45 = 0.5f * (fHbargraph8 + 1.0f);
    float fTemp46 = 1.0f - fTemp45;
    float fTemp47 = fControl[3] - fVec0[1];
    int iTemp48 = int(fTemp47 * float(fTemp47 > 0.0f));
    iRec16[0] = 1103515245 * iRec16[1] + 12345;
    float fTemp49 = float(iRec16[0]);
    float fElse65 = 4.65661287e-10f * fTemp49;
    fRec15[0] = ((iTemp48) ? fElse65 : fRec15[1]);
    float fTemp50 = 1.0f - fRec15[0];
    float fTemp51 = ((fControl[121] > fRec17[1]) ? fControl[125] : fControl[123]);
    fRec17[0] = fControl[121] * (1.0f - fTemp51) + fRec17[1] * fTemp51;
    fHbargraph9 = FAUSTFLOAT(
      fControl[59]
        * (fControl[61] * ((iControl[4]) ? fTemp12 : fTemp11) + fControl[68] * ((iControl[6]) ? fTemp18 : fTemp17) + fControl[75] * ((iControl[8]) ? fTemp24 : fTemp23) + fControl[82] * ((iControl[10]) ? fTemp30 : fTemp29) + fControl[89] * ((iControl[12]) ? fTemp34 : fTemp33) + fControl[92] * ((iControl[13]) ? fTemp38 : fTemp37) + fControl[95] * ((iControl[14]) ? fTemp42 : fTemp41) + fControl[98] * ((iControl[15]) ? fTemp46 : fTemp45) + fControl[103] + fControl[105] + fControl[108] + fControl[112] + fControl[117] + fControl[119] * ((iControl[16]) ? fTemp50 : fRec15[0]))
      + fControl[120] * fRec17[0]);
    float fTemp52 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph9));
    float fTemp53 = ((fControl[204] > fRec18[1]) ? fControl[208] : fControl[206]);
    fRec18[0] = fControl[204] * (1.0f - fTemp53) + fRec18[1] * fTemp53;
    fHbargraph10 = FAUSTFLOAT(
      fControl[174]
        * (fControl[176] * ((iControl[19]) ? fTemp12 : fTemp11) + fControl[178] * ((iControl[20]) ? fTemp18 : fTemp17) + fControl[180] * ((iControl[21]) ? fTemp24 : fTemp23) + fControl[182] * ((iControl[22]) ? fTemp30 : fTemp29) + fControl[184] * ((iControl[23]) ? fTemp34 : fTemp33) + fControl[186] * ((iControl[24]) ? fTemp38 : fTemp37) + fControl[188] * ((iControl[25]) ? fTemp42 : fTemp41) + fControl[190] * ((iControl[26]) ? fTemp46 : fTemp45) + fControl[192] + fControl[194] + fControl[196] + fControl[198] + fControl[200] + fControl[202] * ((iControl[27]) ? fTemp50 : fRec15[0]))
      + fControl[203] * fRec18[0]);
    float fTemp54 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph10));
    float fTemp55 = ((fControl[283] > fRec19[1]) ? fControl[287] : fControl[285]);
    fRec19[0] = fControl[283] * (1.0f - fTemp55) + fRec19[1] * fTemp55;
    fHbargraph11 = FAUSTFLOAT(
      fControl[253]
        * (fControl[255] * ((iControl[30]) ? fTemp12 : fTemp11) + fControl[257] * ((iControl[31]) ? fTemp18 : fTemp17) + fControl[259] * ((iControl[32]) ? fTemp24 : fTemp23) + fControl[261] * ((iControl[33]) ? fTemp30 : fTemp29) + fControl[263] * ((iControl[34]) ? fTemp34 : fTemp33) + fControl[265] * ((iControl[35]) ? fTemp38 : fTemp37) + fControl[267] * ((iControl[36]) ? fTemp42 : fTemp41) + fControl[269] * ((iControl[37]) ? fTemp46 : fTemp45) + fControl[271] + fControl[273] + fControl[275] + fControl[277] + fControl[279] + fControl[281] * ((iControl[38]) ? fTemp50 : fRec15[0]))
      + fControl[282] * fRec19[0]);
    float fTemp56 = std::min<float>(1.0f, std::max<float>(0.0f, fHbargraph11));
    if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
    {
      fTempPerm0 = fControl[288] - (fControl[13] + fControl[289] * fTemp54);
      fTempPerm1 = fControl[126]
        - (fControl[13] + fControl[129] * fTemp54
           + fTemp56
             * (fTempPerm0 - fControl[331] - (fControl[126] + fControl[332] * fTemp54)));
      fTempPerm2 = fControl[337] - (fControl[12] + fControl[338] * fTemp54);
      fTempPerm3 = fControl[333]
        - (fControl[12] + fControl[336] * fTemp54
           + fTemp56
             * (fTempPerm2 - fControl[339] - (fControl[333] + fControl[340] * fTemp54)));
      fTempPerm4 = fControl[14] + fTemp52 * (fTempPerm1 + fTempPerm3)
        + fControl[341] * fTemp54 + fTemp56 * (fTempPerm0 + fTempPerm2);
      fTempPerm5 = std::fabs(fTempPerm4);
      fTempPerm6 = fControl[349] - (fControl[343] + fControl[350] * fTemp54);
      fTempPerm7 = fControl[345]
        - (fControl[343] + fControl[348] * fTemp54
           + fTemp56
             * (fTempPerm6 - fControl[351] - (fControl[345] + fControl[352] * fTemp54)));
      fTempPerm8 = fControl[357] - (fControl[342] + fControl[358] * fTemp54);
      fTempPerm9 = fControl[353]
        - (fControl[342] + fControl[356] * fTemp54
           + fTemp56
             * (fTempPerm8 - fControl[359] - (fControl[353] + fControl[360] * fTemp54)));
      fTempPerm10 = fControl[344] + fTemp52 * (fTempPerm7 + fTempPerm9)
        + fControl[361] * fTemp54 + fTemp56 * (fTempPerm6 + fTempPerm8);
      fTempPerm11 = std::fabs(fTempPerm10);
      fTempPerm12 = fControl[369] - (fControl[363] + fControl[370] * fTemp54);
      fTempPerm13 = fControl[365]
        - (fControl[363] + fControl[368] * fTemp54
           + fTemp56
             * (fTempPerm12 - fControl[371] - (fControl[365] + fControl[372] * fTemp54)));
      fTempPerm14 = fControl[377] - (fControl[362] + fControl[378] * fTemp54);
      fTempPerm15 = fControl[373]
        - (fControl[362] + fControl[376] * fTemp54
           + fTemp56
             * (fTempPerm14 - fControl[379] - (fControl[373] + fControl[380] * fTemp54)));
      fTempPerm16 = fControl[364] + fTemp52 * (fTempPerm13 + fTempPerm15)
        + fControl[381] * fTemp54 + fTemp56 * (fTempPerm12 + fTempPerm14);
      fTempPerm17 = std::fabs(fTempPerm16);
      fTempPerm18 = fTempPerm5 + fTempPerm11 + fTempPerm17;
      fTempPerm19 = std::min<float>(1.0f, fTempPerm18);
      fTempPerm20 = std::max<float>(2.82118644e-37f, fTempPerm5);
    }
    float fElse138 = 0.0f - fTempPerm20;
    if ((iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
    {
      fTempPerm21 = ((fTempPerm4 < 0.0f) ? fElse138 : fTempPerm20);
      iTempPerm22 = float(fTempPerm4 != 0.0f) != 0.0f;
      fTempPerm23 = fControl[363]
        + (fTemp52 * (fTempPerm13 - fTempPerm15) + fControl[391] * fTemp54
           + fTemp56 * (fTempPerm12 - fTempPerm14))
        - fControl[362];
      iTempPerm24 = float(fTempPerm23 != 0.0f) != 0.0f;
      fTempPerm25 = fControl[343]
        + (fTemp52 * (fTempPerm7 - fTempPerm9) + fControl[392] * fTemp54
           + fTemp56 * (fTempPerm6 - fTempPerm8))
        - fControl[342];
      iTempPerm26 = float(fTempPerm25 != 0.0f) != 0.0f;
      fTempPerm27 = fControl[13]
        + (fTemp52 * (fTempPerm1 - fTempPerm3) + fControl[393] * fTemp54
           + fTemp56 * (fTempPerm0 - fTempPerm2))
        - fControl[12];
      iTempPerm28 = float(fTempPerm27 != 0.0f) != 0.0f;
      iTempPerm29 = float(fTempPerm16 != 0.0f) != 0.0f;
      iTempPerm30 = float(fTempPerm10 != 0.0f) != 0.0f;
    }
                if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | ((iControl[41] & iTempPerm29) | ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm31 = fControl[389] - (fControl[383] + fControl[390] * fTemp54);
                  fTempPerm32 = fControl[385]
                    - (fControl[383] + fControl[388] * fTemp54
                       + fTemp56
                         * (fTempPerm31 - fControl[394] - (fControl[385] + fControl[395] * fTemp54)));
                  fTempPerm33 = fControl[400] - (fControl[382] + fControl[401] * fTemp54);
                  fTempPerm34 = fControl[396]
                    - (fControl[382] + fControl[399] * fTemp54
                       + fTemp56
                         * (fTempPerm33 - fControl[402] - (fControl[396] + fControl[403] * fTemp54)));
                }
                if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | (iControl[41] & iTempPerm29)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm35 = std::tan(
                    fConst2
                    * std::min<float>(
                      fConst4,
                      std::max<float>(
                        0.0f,
                        440.0f
                          * std::pow(
                            2.0f,
                            0.0833333358f
                              * (127.0f * std::min<float>(1.0f, std::max<float>(0.0f, fControl[384] + fTemp52 * (fTempPerm32 + fTempPerm34) + fControl[404] * fTemp54 + fTemp56 * (fTempPerm31 + fTempPerm33))) + -49.0f)))));
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm36 = fControl[412] - (fControl[406] + fControl[413] * fTemp54);
                  fTempPerm37 = fControl[408]
                    - (fControl[406] + fControl[411] * fTemp54
                       + fTemp56
                         * (fTempPerm36 - fControl[414] - (fControl[408] + fControl[415] * fTemp54)));
                  fTempPerm38 = fControl[420] - (fControl[405] + fControl[421] * fTemp54);
                  fTempPerm39 = fControl[416]
                    - (fControl[405] + fControl[419] * fTemp54
                       + fTemp56
                         * (fTempPerm38 - fControl[422] - (fControl[416] + fControl[423] * fTemp54)));
                  fTempPerm40 = fRec5[1]
                    * (fControl[407] + fTemp52 * (fTempPerm37 + fTempPerm39)
                       + fControl[424] * fTemp54 + fTemp56 * (fTempPerm36 + fTempPerm38));
                  fTempPerm41 = fControl[432] - (fControl[426] + fControl[433] * fTemp54);
                  fTempPerm42 = fControl[428]
                    - (fControl[426] + fControl[431] * fTemp54
                       + fTemp56
                         * (fTempPerm41 - fControl[434] - (fControl[428] + fControl[435] * fTemp54)));
                  fTempPerm43 = fControl[440] - (fControl[425] + fControl[441] * fTemp54);
                  fTempPerm44 = fControl[436]
                    - (fControl[425] + fControl[439] * fTemp54
                       + fTemp56
                         * (fTempPerm43 - fControl[442] - (fControl[436] + fControl[443] * fTemp54)));
                  fTempPerm45 = fRec4[1]
                    * (fControl[427] + fTemp52 * (fTempPerm42 + fTempPerm44)
                       + fControl[444] * fTemp54 + fTemp56 * (fTempPerm41 + fTempPerm43));
                  fTempPerm46 = fControl[452] - (fControl[446] + fControl[453] * fTemp54);
                  fTempPerm47 = fControl[448]
                    - (fControl[446] + fControl[451] * fTemp54
                       + fTemp56
                         * (fTempPerm46 - fControl[454] - (fControl[448] + fControl[455] * fTemp54)));
                  fTempPerm48 = fControl[460] - (fControl[445] + fControl[461] * fTemp54);
                  fTempPerm49 = fControl[456]
                    - (fControl[445] + fControl[459] * fTemp54
                       + fTemp56
                         * (fTempPerm48 - fControl[462] - (fControl[456] + fControl[463] * fTemp54)));
                  fTempPerm50 = fRec3[1]
                    * (fControl[447] + fTemp52 * (fTempPerm47 + fTempPerm49)
                       + fControl[464] * fTemp54 + fTemp56 * (fTempPerm46 + fTempPerm48));
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fRec24[0] = fControl[468] + fControl[467] * fRec24[1];
                  fTempPerm51 = fControl[467] * float(int(fVec0[1]) & iControl[80]);
                  fRec25[0]
                    = fControl[465] * (1.0f - fTempPerm51) + fTempPerm51 * fRec25[1];
                }
                float fThen142 = ((iControl[78]) ? fRec25[0] : fRec24[0]);
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm52 = fRec23[1]
                    + fConst5 * ((iControl[77]) ? fControl[465] : fThen142)
                      * fControl[469];
                  fTempPerm53 = float(int(fTempPerm52));
                }
                float fThen144 = fTempPerm53 + -1.0f;
                float fThen145 = ((fTempPerm52 >= 0.0f) ? fTempPerm53 : fThen144);
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  iVec4[0] = fTemp6 < 0.100000001f;
                  fRec23[0] = (fTempPerm52
                               - ((fTempPerm52 == fTempPerm53) ? fTempPerm52 : fThen145))
                    * float(float((iVec4[1] & iTemp48) & iControl[81]) == 0.0f);
                  fTempPerm54 = float(1 - iVec2[1] < 1);
                  fRec26[0] = fControl[470] * (1.0f - 0.999000013f * fTempPerm54)
                    + 0.999000013f * fTempPerm54 * fRec26[1];
                  fTempPerm55 = fRec23[0] + fRec26[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm56 = fControl[478] - (fControl[472] + fControl[479] * fTemp54);
                  fTempPerm57 = fControl[474]
                    - (fControl[472] + fControl[477] * fTemp54
                       + fTemp56
                         * (fTempPerm56 - fControl[480] - (fControl[474] + fControl[481] * fTemp54)));
                  fTempPerm58 = fControl[486] - (fControl[471] + fControl[487] * fTemp54);
                  fTempPerm59 = fControl[482]
                    - (fControl[471] + fControl[485] * fTemp54
                       + fTemp56
                         * (fTempPerm58 - fControl[488] - (fControl[482] + fControl[489] * fTemp54)));
                  fTempPerm60 = fControl[473] + fTemp52 * (fTempPerm57 + fTempPerm59)
                    + fControl[490] * fTemp54 + fTemp56 * (fTempPerm56 + fTempPerm58);
                  fTempPerm61 = fControl[498] - (fControl[492] + fControl[499] * fTemp54);
                  fTempPerm62 = fControl[494]
                    - (fControl[492] + fControl[497] * fTemp54
                       + fTemp56
                         * (fTempPerm61 - fControl[500] - (fControl[494] + fControl[501] * fTemp54)));
                  fTempPerm63 = fControl[506] - (fControl[491] + fControl[507] * fTemp54);
                  fTempPerm64 = fControl[502]
                    - (fControl[491] + fControl[505] * fTemp54
                       + fTemp56
                         * (fTempPerm63 - fControl[508] - (fControl[502] + fControl[509] * fTemp54)));
                  fTempPerm65 = fControl[493] + fTemp52 * (fTempPerm62 + fTempPerm64)
                    + fControl[510] * fTemp54 + fTemp56 * (fTempPerm61 + fTempPerm63);
                  fTempPerm66 = float(int(fTempPerm65));
                }
                float fThen146 = fTempPerm66 + -1.0f;
                float fThen147 = ((fTempPerm65 >= 0.0f) ? fTempPerm66 : fThen146);
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm67 = ((fTempPerm65 == fTempPerm66) ? fTempPerm65 : fThen147);
                  fTempPerm68 = fTempPerm67
                    + float((fTempPerm65 < 0.0f) & (fTempPerm65 != fTempPerm67));
                  fTempPerm69 = fTempPerm55
                    + 0.00390625f * fTempPerm60 * std::pow(2.0f, 0.0f - fTempPerm68);
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm70 = float(int(fTempPerm55));
                }
                float fThen148 = fTempPerm70 + -1.0f;
                float fThen149 = ((fTempPerm55 >= 0.0f) ? fTempPerm70 : fThen148);
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm71 = ((fTempPerm55 == fTempPerm70) ? fTempPerm55 : fThen149);
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm72 = fTempPerm69 - fTempPerm71;
                  fTempPerm73 = float(int(fTempPerm72));
                }
                float fThen150 = fTempPerm73 + -1.0f;
                float fThen151 = ((fTempPerm72 >= 0.0f) ? fTempPerm73 : fThen150);
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  iTempPerm74 = int(fTempPerm68);
                  fTempPerm75 = 256.0f
                    * (fTempPerm69
                       - (fTempPerm71 + ((fTempPerm72 == fTempPerm73) ? fTempPerm72 : fThen151)))
                    * (float(iTempPerm74 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm74)))))
                       + float(iTempPerm74 == 0)
                       + float(
                         (iTempPerm74 > 0) * int(std::pow(2.0f, float(iTempPerm74)))));
                  fTempPerm76 = fControl[518] - (fControl[512] + fControl[519] * fTemp54);
                  fTempPerm77 = fControl[514]
                    - (fControl[512] + fControl[517] * fTemp54
                       + fTemp56
                         * (fTempPerm76 - fControl[520] - (fControl[514] + fControl[521] * fTemp54)));
                  fTempPerm78 = fControl[526] - (fControl[511] + fControl[527] * fTemp54);
                  fTempPerm79 = fControl[522]
                    - (fControl[511] + fControl[525] * fTemp54
                       + fTemp56
                         * (fTempPerm78 - fControl[528] - (fControl[522] + fControl[529] * fTemp54)));
                  fTempPerm80 = fRec2[1]
                    * (fControl[513] + fTemp52 * (fTempPerm77 + fTempPerm79)
                       + fControl[530] * fTemp54 + fTemp56 * (fTempPerm76 + fTempPerm78));
                  fTempPerm81
                    = fTempPerm40 + fTempPerm45 + fTempPerm50 + fTempPerm75 + fTempPerm80;
                  iTempPerm82 = int(fTempPerm75);
                }
                if (((iControl[3] & iTempPerm22)
                     | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))))
                {
                  fTempPerm83 = fRec20[1]
                    + fTempPerm35 * (fTempPerm81 - (float(iTempPerm82) + fRec21[1]));
                }
                if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | ((iControl[41] & iTempPerm29) | ((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm84 = fControl[538] - (fControl[532] + fControl[539] * fTemp54);
                  fTempPerm85 = fControl[534]
                    - (fControl[532] + fControl[537] * fTemp54
                       + fTemp56
                         * (fTempPerm84 - fControl[540] - (fControl[534] + fControl[541] * fTemp54)));
                  fTempPerm86 = fControl[546] - (fControl[531] + fControl[547] * fTemp54);
                  fTempPerm87 = fControl[542]
                    - (fControl[531] + fControl[545] * fTemp54
                       + fTemp56
                         * (fTempPerm86 - fControl[548] - (fControl[542] + fControl[549] * fTemp54)));
                }
                if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm30) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm30) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm30) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm30) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm30) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm30) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm30) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm30) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm30) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm30) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm30) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm30) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm30) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm30) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm30) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm30) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm30) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm30) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm30) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm30) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm30) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm30) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm30) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm30) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm30) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm30) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm30) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm30) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm30) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm30) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm30) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm30) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm30) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm30) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm30) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | ((iControl[41] & iTempPerm30) | (iControl[41] & iTempPerm29)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm88 = std::min<float>(
                    10.0f,
                    std::max<float>(
                      0.00999999978f,
                      fControl[533] + fTemp52 * (fTempPerm85 + fTempPerm87)
                        + fControl[550] * fTemp54
                        + fTemp56 * (fTempPerm84 + fTempPerm86)));
                }
                if (((iControl[3] & iTempPerm22) | ((iControl[3] & iTempPerm29) | ((iControl[75] & iTempPerm22) | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm22) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm22) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm22) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm22) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm22) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm22) | ((iControl[69] & iTempPerm29) | ((iControl[68] & iTempPerm22) | ((iControl[68] & iTempPerm29) | ((iControl[67] & iTempPerm22) | ((iControl[67] & iTempPerm29) | ((iControl[66] & iTempPerm22) | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm22) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm22) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm22) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm22) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm22) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm22) | ((iControl[60] & iTempPerm29) | ((iControl[59] & iTempPerm22) | ((iControl[59] & iTempPerm29) | ((iControl[58] & iTempPerm22) | ((iControl[58] & iTempPerm29) | ((iControl[57] & iTempPerm22) | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm22) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm22) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm22) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm22) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm22) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm22) | ((iControl[51] & iTempPerm29) | ((iControl[50] & iTempPerm22) | ((iControl[50] & iTempPerm29) | ((iControl[49] & iTempPerm22) | ((iControl[49] & iTempPerm29) | ((iControl[48] & iTempPerm22) | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm22) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm22) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm22) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm22) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm22) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm22) | ((iControl[42] & iTempPerm29) | ((iControl[41] & iTempPerm22) | (iControl[41] & iTempPerm29)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm89 = fTempPerm35 + 1.0f / fTempPerm88;
                  fTempPerm90 = fTempPerm35 * fTempPerm89 + 1.0f;
                }
                if (((iControl[3] & iTempPerm22)
                     | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))))
                {
                  fTempPerm91 = fTempPerm83 / fTempPerm90;
                  fRec20[0] = 2.0f * fTempPerm91 - fRec20[1];
                  fTempPerm92 = fRec21[1] + (fTempPerm35 * fTempPerm83) / fTempPerm90;
                  fRec21[0] = 2.0f * fTempPerm92 - fRec21[1];
                  fRec22 = fTempPerm92;
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm93 = std::max<float>(2.82118644e-37f, fTempPerm11);
                }
                float fElse152 = 0.0f - fTempPerm93;
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm94 = ((fTempPerm10 < 0.0f) ? fElse152 : fTempPerm93);
                }
                if (((iControl[3] & iTempPerm30)
                     | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))))
                {
                  fTempPerm95
                    = fTempPerm35 * (fTempPerm81 - (float(iTempPerm82) + fRec29[1]));
                }
                if (
                  ((iControl[3] & iTempPerm30)
                   | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | ((iControl[68] & iTempPerm30) | ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | ((iControl[59] & iTempPerm30) | ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | ((iControl[50] & iTempPerm30) | ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm96 = fTempPerm88 + -0.707000017f;
                  fTempPerm97 = fTempPerm35 + 1.0f;
                  fTempPerm98 = 1.0f - fTempPerm35 / fTempPerm97;
                  fTempPerm99 = 0.0f - 1.0f / fTempPerm97;
                  fTempPerm100 = 1.0f
                    - 0.215215757f * (fTempPerm35 * fTempPerm96 * fTempPerm98)
                      / fTempPerm97;
                }
                if (((iControl[3] & iTempPerm30)
                     | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))))
                {
                  fTempPerm101
                    = (fTempPerm35
                       * ((fRec29[1] + (fTempPerm95 + 0.215215757f * fRec27[1] * fTempPerm96 * fTempPerm98) / fTempPerm97 + fRec28[1] * fTempPerm99) / fTempPerm100 - fRec27[1]))
                    / fTempPerm97;
                  fRec27[0] = fRec27[1] + 2.0f * fTempPerm101;
                  fTempPerm102 = fRec27[1] + fTempPerm101;
                  fRec28[0] = fRec28[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm102 - fRec28[1]))
                      / fTempPerm97;
                  fRec29[0] = fRec29[1] + 2.0f * fTempPerm95 / fTempPerm97;
                  fRec30 = fTempPerm102;
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm103 = std::max<float>(2.82118644e-37f, fTempPerm17);
                }
                float fElse153 = 0.0f - fTempPerm103;
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm104 = ((fTempPerm16 < 0.0f) ? fElse153 : fTempPerm103);
                }
                if (((iControl[3] & iTempPerm29)
                     | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))))
                {
                  fTempPerm105 = fTempPerm81
                    - (float(iTempPerm82) + fRec32[1] + fTempPerm89 * fRec33[1]);
                  fTempPerm106 = (fTempPerm35 * fTempPerm105) / fTempPerm90;
                  fTempPerm107 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec33[1] + fTempPerm106));
                  fTempPerm108 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm107);
                  fTempPerm109 = fTempPerm35 * fTempPerm107 * fTempPerm108;
                  fRec31 = fRec32[1] + fTempPerm109;
                  fRec32[0] = fRec32[1] + 2.0f * fTempPerm109;
                  fTempPerm110 = fTempPerm107 * fTempPerm108;
                  fRec33[0] = fTempPerm106 + fTempPerm110;
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm111 = std::max<float>(8.46355933e-37f, fTempPerm18);
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm112 = fTempPerm81 - float(iTempPerm82);
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm113 = 1.0f - fTempPerm19;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm114
                    = (fTempPerm19
                       * (fTempPerm21 * fRec22 + fTempPerm94 * fRec30 + fTempPerm104 * fRec31))
                      / fTempPerm111
                    + fTempPerm112 * fTempPerm113;
                  fVec5[0] = fTempPerm114;
                  fTempPerm115
                    = fControl[559] - (fControl[553] + fControl[560] * fTemp54);
                  fTempPerm116 = fControl[555]
                    - (fControl[553] + fControl[558] * fTemp54
                       + fTemp56
                         * (fTempPerm115 - fControl[561] - (fControl[555] + fControl[562] * fTemp54)));
                  fTempPerm117
                    = fControl[567] - (fControl[552] + fControl[568] * fTemp54);
                  fTempPerm118 = fControl[563]
                    - (fControl[552] + fControl[566] * fTemp54
                       + fTemp56
                         * (fTempPerm117 - fControl[569] - (fControl[563] + fControl[570] * fTemp54)));
                  fTempPerm119 = fControl[554] + fTemp52 * (fTempPerm116 + fTempPerm118)
                    + fControl[571] * fTemp54 + fTemp56 * (fTempPerm115 + fTempPerm117);
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))))
                {
                  fTempPerm120 = fControl[551] * fTempPerm119;
                }
                if ((iControl[3])) {
                  fTempPerm121 = 2.0f * fTempPerm120;
                  fTempPerm122 = std::min<float>(1.0f, fTempPerm121);
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fTempPerm123 = fTempPerm114 - fVec5[1];
                }
                float fElse155 = fConst0 * fTempPerm123;
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fRec35[0] = ((std::fabs(fTempPerm123) < 0.5f) ? fElse155 : fRec35[1]);
                }
                if ((iControl[3])) {
                  fTempPerm124 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec35[0])))));
                  fTempPerm125 = 1.0f - fTempPerm124;
                }
                if ((iControl[3] | iControl[69])) {
                  fTempPerm126 = float(int(fTempPerm114));
                }
                float fThen156 = fTempPerm126 + -1.0f;
                float fThen157 = ((fTempPerm114 >= 0.0f) ? fTempPerm126 : fThen156);
                if ((iControl[3] | iControl[69])) {
                  fTempPerm127
                    = ((fTempPerm114 == fTempPerm126) ? fTempPerm114 : fThen157);
                  fTempPerm128 = fTempPerm114 - fTempPerm127;
                  fVec6[0] = fTempPerm128;
                  iTempPerm129 = fTempPerm128 < 0.5f;
                  iVec7[0] = iTempPerm129;
                }
                if ((iControl[3])) {
                  iTempPerm130 = (iVec7[1] <= 0) & (iTempPerm129 > 0);
                  fRec40[0] = fRec40[1] * float(1 - iTempPerm130)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm130);
                  fTempPerm131 = fTempPerm124 + 1.0f;
                  fRec39[0] = 0.0f
                    - (fTempPerm125 * fRec39[1] - (fRec40[0] + fRec40[1])) / fTempPerm131;
                  fRec38[0] = 0.0f
                    - (fTempPerm125 * fRec38[1] - (fRec39[0] + fRec39[1])) / fTempPerm131;
                  fRec37[0] = 0.0f
                    - (fTempPerm125 * fRec37[1] - (fRec38[0] + fRec38[1])) / fTempPerm131;
                  fRec36[0] = 0.0f
                    - (fTempPerm125 * fRec36[1] - (fRec37[0] + fRec37[1])) / fTempPerm131;
                  fRec34[0] = 0.0f
                    - (fRec34[1] * fTempPerm125 - (fRec36[0] + fRec36[1])) / fTempPerm131;
                  fTempPerm132 = std::sin(6.28318548f * fTempPerm114)
                    * (fTempPerm122 * (fRec34[0] + -1.0f) + 1.0f);
                  fTempPerm133 = std::max<float>(1.0f, fTempPerm121) + -1.0f;
                  fTempPerm134 = fRec34[0] - fTempPerm132;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm135 = std::fabs(fTempPerm65);
                  fTempPerm136 = fTempPerm135 - float(int(fTempPerm135));
                  fTempPerm137 = fTempPerm67 + float(fTempPerm65 > 0.0f);
                  fTempPerm138 = fTempPerm55
                    + 0.00390625f * fTempPerm60 * std::pow(2.0f, 0.0f - fTempPerm137);
                  fTempPerm139 = fTempPerm138 - fTempPerm71;
                  fTempPerm140 = float(int(fTempPerm139));
                }
                float fThen158 = fTempPerm140 + -1.0f;
                float fThen159 = ((fTempPerm139 >= 0.0f) ? fTempPerm140 : fThen158);
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  iTempPerm141 = int(fTempPerm137);
                  fTempPerm142 = 256.0f
                    * (fTempPerm138
                       - (fTempPerm71 + ((fTempPerm139 == fTempPerm140) ? fTempPerm139 : fThen159)))
                    * (float(iTempPerm141 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm141)))))
                       + float(iTempPerm141 == 0)
                       + float(
                         (iTempPerm141 > 0) * int(std::pow(2.0f, float(iTempPerm141)))));
                  fTempPerm143 = fTempPerm80 + fTempPerm50 + fTempPerm45 + fTempPerm40
                    + fTempPerm142;
                  iTempPerm144 = int(fTempPerm142);
                }
                if (((iControl[3] & iTempPerm22)
                     | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))))
                {
                  fTempPerm145 = fRec41[1]
                    + fTempPerm35 * (fTempPerm143 - (float(iTempPerm144) + fRec42[1]));
                  fTempPerm146 = fTempPerm145 / fTempPerm90;
                  fRec41[0] = 2.0f * fTempPerm146 - fRec41[1];
                  fTempPerm147 = fRec42[1] + (fTempPerm35 * fTempPerm145) / fTempPerm90;
                  fRec42[0] = 2.0f * fTempPerm147 - fRec42[1];
                  fRec43 = fTempPerm147;
                }
                if (((iControl[3] & iTempPerm30)
                     | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))))
                {
                  fTempPerm148
                    = fTempPerm35 * (fTempPerm143 - (float(iTempPerm144) + fRec46[1]));
                }
                if (
                  ((iControl[3] & iTempPerm30)
                   | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | ((iControl[68] & iTempPerm30) | ((iControl[67] & iTempPerm30) | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | ((iControl[59] & iTempPerm30) | ((iControl[58] & iTempPerm30) | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | ((iControl[50] & iTempPerm30) | ((iControl[49] & iTempPerm30) | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30)))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm149 = fTempPerm96 * fTempPerm98;
                }
                if (((iControl[3] & iTempPerm30)
                     | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))))
                {
                  fTempPerm150
                    = (fTempPerm35
                       * ((fRec46[1] + (fTempPerm148 + 0.215215757f * fTempPerm149 * fRec44[1]) / fTempPerm97 + fTempPerm99 * fRec45[1]) / fTempPerm100 - fRec44[1]))
                    / fTempPerm97;
                  fRec44[0] = fRec44[1] + 2.0f * fTempPerm150;
                  fTempPerm151 = fRec44[1] + fTempPerm150;
                  fRec45[0] = fRec45[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm151 - fRec45[1]))
                      / fTempPerm97;
                  fRec46[0] = fRec46[1] + 2.0f * fTempPerm148 / fTempPerm97;
                  fRec47 = fTempPerm151;
                }
                if (((iControl[3] & iTempPerm29)
                     | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))))
                {
                  fTempPerm152 = fTempPerm143
                    - (float(iTempPerm144) + fRec49[1] + fTempPerm89 * fRec50[1]);
                  fTempPerm153 = (fTempPerm35 * fTempPerm152) / fTempPerm90;
                  fTempPerm154 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec50[1] + fTempPerm153));
                  fTempPerm155 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm154);
                  fTempPerm156 = fTempPerm35 * fTempPerm154 * fTempPerm155;
                  fRec48 = fRec49[1] + fTempPerm156;
                  fRec49[0] = fRec49[1] + 2.0f * fTempPerm156;
                  fTempPerm157 = fTempPerm154 * fTempPerm155;
                  fRec50[0] = fTempPerm153 + fTempPerm157;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm158 = fTempPerm143 - float(iTempPerm144);
                  fTempPerm159
                    = (fTempPerm19
                       * (fTempPerm21 * fRec43 + fTempPerm94 * fRec47 + fTempPerm104 * fRec48))
                      / fTempPerm111
                    + fTempPerm113 * fTempPerm158;
                  fVec8[0] = fTempPerm159;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fTempPerm160 = fTempPerm159 - fVec8[1];
                }
                float fElse160 = fConst0 * fTempPerm160;
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fRec52[0] = ((std::fabs(fTempPerm160) < 0.5f) ? fElse160 : fRec52[1]);
                }
                if ((iControl[3])) {
                  fTempPerm161 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec52[0])))));
                  fTempPerm162 = 1.0f - fTempPerm161;
                }
                if ((iControl[3] | iControl[69])) {
                  fTempPerm163 = float(int(fTempPerm159));
                }
                float fThen161 = fTempPerm163 + -1.0f;
                float fThen162 = ((fTempPerm159 >= 0.0f) ? fTempPerm163 : fThen161);
                if ((iControl[3] | iControl[69])) {
                  fTempPerm164
                    = ((fTempPerm159 == fTempPerm163) ? fTempPerm159 : fThen162);
                  fTempPerm165 = fTempPerm159 - fTempPerm164;
                  fVec9[0] = fTempPerm165;
                  iTempPerm166 = fTempPerm165 < 0.5f;
                  iVec10[0] = iTempPerm166;
                }
                if ((iControl[3])) {
                  iTempPerm167 = (iVec10[1] <= 0) & (iTempPerm166 > 0);
                  fRec57[0] = fRec57[1] * float(1 - iTempPerm167)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm167);
                  fTempPerm168 = fTempPerm161 + 1.0f;
                  fRec56[0] = 0.0f
                    - (fTempPerm162 * fRec56[1] - (fRec57[0] + fRec57[1])) / fTempPerm168;
                  fRec55[0] = 0.0f
                    - (fTempPerm162 * fRec55[1] - (fRec56[0] + fRec56[1])) / fTempPerm168;
                  fRec54[0] = 0.0f
                    - (fTempPerm162 * fRec54[1] - (fRec55[0] + fRec55[1])) / fTempPerm168;
                  fRec53[0] = 0.0f
                    - (fTempPerm162 * fRec53[1] - (fRec54[0] + fRec54[1])) / fTempPerm168;
                  fRec51[0] = 0.0f
                    - (fRec51[1] * fTempPerm162 - (fRec53[0] + fRec53[1])) / fTempPerm168;
                  fTempPerm169 = std::sin(6.28318548f * fTempPerm159)
                    * (fTempPerm122 * (fRec51[0] + -1.0f) + 1.0f);
                  fTempPerm170 = fTempPerm132 + fTempPerm133 * fTempPerm134
                    + fTempPerm136
                      * (fTempPerm169 - (fTempPerm132 + fTempPerm133 * (fTempPerm134 - fRec51[0] - fTempPerm169)));
                }
                if ((iControl[75]
                     | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
                  fTempPerm171 = fTempPerm120
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec35[0] - fConst7))));
                }
                if ((iControl[75])) {
                  fTempPerm172 = 0.25f * fTempPerm171;
                  fTempPerm173 = fTempPerm114 + 0.75f - fTempPerm172;
                  fTempPerm174 = float(int(fTempPerm173));
                }
                float fThen163 = fTempPerm174 + -1.0f;
                float fThen164 = ((fTempPerm173 >= 0.0f) ? fTempPerm174 : fThen163);
                if ((iControl[75])) {
                  fTempPerm175
                    = ((fTempPerm173 == fTempPerm174) ? fTempPerm173 : fThen164);
                  fTempPerm176 = 0.75f - (fTempPerm172 + fTempPerm175);
                }
                if ((iControl[75] | (iControl[73] | iControl[71]))) {
                  fTempPerm177 = 1.0f - fTempPerm171;
                }
                if ((iControl[75] | iControl[71])) {
                  fTempPerm178 = 0.5f * fTempPerm177;
                }
                if ((iControl[75])) {
                  fTempPerm179 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm178));
                  fTempPerm180 = 0.5f - fTempPerm179;
                }
                if ((iControl[75] | iControl[72])) {
                  fTempPerm181 = fTempPerm171 + 1.0f;
                }
                if ((iControl[75])) {
                  fTempPerm182 = std::cos(
                    6.28318548f
                    * (fTempPerm114 + std::min<float>(((fTempPerm114 + fTempPerm176) * fTempPerm180) / fTempPerm179, (fTempPerm180 * ((fTempPerm175 + 0.25f * fTempPerm181) - fTempPerm114)) / (1.0f - fTempPerm179)) + fTempPerm176));
                }
                if ((iControl[75]
                     | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
                  fTempPerm183 = fTempPerm120
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec52[0] - fConst7))));
                }
                if ((iControl[75])) {
                  fTempPerm184 = 0.25f * fTempPerm183;
                  fTempPerm185 = fTempPerm159 + 0.75f - fTempPerm184;
                  fTempPerm186 = float(int(fTempPerm185));
                }
                float fThen165 = fTempPerm186 + -1.0f;
                float fThen166 = ((fTempPerm185 >= 0.0f) ? fTempPerm186 : fThen165);
                if ((iControl[75])) {
                  fTempPerm187
                    = ((fTempPerm185 == fTempPerm186) ? fTempPerm185 : fThen166);
                  fTempPerm188 = 0.75f - (fTempPerm184 + fTempPerm187);
                }
                if ((iControl[75] | (iControl[73] | iControl[71]))) {
                  fTempPerm189 = 1.0f - fTempPerm183;
                }
                if ((iControl[75] | iControl[71])) {
                  fTempPerm190 = 0.5f * fTempPerm189;
                }
                if ((iControl[75])) {
                  fTempPerm191 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm190));
                  fTempPerm192 = 0.5f - fTempPerm191;
                }
                if ((iControl[75] | iControl[72])) {
                  fTempPerm193 = fTempPerm183 + 1.0f;
                }
                if ((iControl[75])) {
                  fTempPerm194 = fTempPerm182
                    + fTempPerm136
                      * (std::cos(6.28318548f * (fTempPerm159 + std::min<float>(((fTempPerm159 + fTempPerm188) * fTempPerm192) / fTempPerm191, (fTempPerm192 * ((fTempPerm187 + 0.25f * fTempPerm193) - fTempPerm159)) / (1.0f - fTempPerm191)) + fTempPerm188)) - fTempPerm182);
                }
                if ((iControl[74])) {
                  fTempPerm195 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm171));
                  fTempPerm196 = 1.0f - fTempPerm195;
                  fTempPerm197 = 0.25f * fTempPerm196;
                  fTempPerm198 = fTempPerm114 - fTempPerm197;
                  fTempPerm199 = float(int(fTempPerm198));
                }
                float fThen167 = fTempPerm199 + -1.0f;
                float fThen168 = ((fTempPerm198 >= 0.0f) ? fTempPerm199 : fThen167);
                if ((iControl[74])) {
                  fTempPerm200 = fTempPerm114
                    - (fTempPerm197
                       + ((fTempPerm198 == fTempPerm199) ? fTempPerm198 : fThen168));
                  fTempPerm201 = 2.0f * fTempPerm200;
                  fTempPerm202 = fTempPerm201 + 1.0f;
                  fTempPerm203 = float(int(fTempPerm202));
                }
                float fThen169 = fTempPerm203 + -1.0f;
                float fThen170 = ((fTempPerm202 >= 0.0f) ? fTempPerm203 : fThen169);
                if ((iControl[74])) {
                  fTempPerm204
                    = ((fTempPerm202 == fTempPerm203) ? fTempPerm202 : fThen170);
                  fTempPerm205 = std::cos(
                    3.14159274f
                    * (float(fTempPerm200 >= 0.5f) + fTempPerm201 + 1.0f - (fTempPerm204 + std::min<float>(fTempPerm201 + 1.0f - fTempPerm204, (fTempPerm195 * (fTempPerm204 - fTempPerm201)) / fTempPerm196))));
                  fTempPerm206 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm183));
                  fTempPerm207 = 1.0f - fTempPerm206;
                  fTempPerm208 = 0.25f * fTempPerm207;
                  fTempPerm209 = fTempPerm159 - fTempPerm208;
                  fTempPerm210 = float(int(fTempPerm209));
                }
                float fThen171 = fTempPerm210 + -1.0f;
                float fThen172 = ((fTempPerm209 >= 0.0f) ? fTempPerm210 : fThen171);
                if ((iControl[74])) {
                  fTempPerm211 = fTempPerm159
                    - (fTempPerm208
                       + ((fTempPerm209 == fTempPerm210) ? fTempPerm209 : fThen172));
                  fTempPerm212 = 2.0f * fTempPerm211;
                  fTempPerm213 = fTempPerm212 + 1.0f;
                  fTempPerm214 = float(int(fTempPerm213));
                }
                float fThen173 = fTempPerm214 + -1.0f;
                float fThen174 = ((fTempPerm213 >= 0.0f) ? fTempPerm214 : fThen173);
                if ((iControl[74])) {
                  fTempPerm215
                    = ((fTempPerm213 == fTempPerm214) ? fTempPerm213 : fThen174);
                  fTempPerm216 = fTempPerm205
                    + fTempPerm136
                      * (std::cos(3.14159274f * (float(fTempPerm211 >= 0.5f) + fTempPerm212 + 1.0f - (fTempPerm215 + std::min<float>(fTempPerm212 + 1.0f - fTempPerm215, (fTempPerm206 * (fTempPerm215 - fTempPerm212)) / fTempPerm207)))) - fTempPerm205);
                }
                if ((iControl[73])) {
                  fTempPerm217 = 0.25f * fTempPerm177;
                  fTempPerm218 = fTempPerm114 - fTempPerm217;
                  fTempPerm219 = float(int(fTempPerm218));
                }
                float fThen175 = fTempPerm219 + -1.0f;
                float fThen176 = ((fTempPerm218 >= 0.0f) ? fTempPerm219 : fThen175);
                if ((iControl[73])) {
                  fTempPerm220 = fTempPerm217
                    + ((fTempPerm218 == fTempPerm219) ? fTempPerm218 : fThen176);
                }
                if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
                  fTempPerm221 = 1.0f - fTempPerm114;
                }
                if ((iControl[73])) {
                  fTempPerm222
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm171));
                  fTempPerm223 = std::cos(
                    6.28318548f
                    * (fTempPerm114 - (fTempPerm220 + std::min<float>(fTempPerm114 - fTempPerm220, ((fTempPerm220 + fTempPerm221) * fTempPerm222) / (1.0f - fTempPerm222)))));
                  fTempPerm224 = 0.25f * fTempPerm189;
                  fTempPerm225 = fTempPerm159 - fTempPerm224;
                  fTempPerm226 = float(int(fTempPerm225));
                }
                float fThen177 = fTempPerm226 + -1.0f;
                float fThen178 = ((fTempPerm225 >= 0.0f) ? fTempPerm226 : fThen177);
                if ((iControl[73])) {
                  fTempPerm227 = fTempPerm224
                    + ((fTempPerm225 == fTempPerm226) ? fTempPerm225 : fThen178);
                }
                if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
                  fTempPerm228 = 1.0f - fTempPerm159;
                }
                if ((iControl[73])) {
                  fTempPerm229
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm183));
                  fTempPerm230 = fTempPerm223
                    + fTempPerm136
                      * (std::cos(6.28318548f * (fTempPerm159 - (fTempPerm227 + std::min<float>(fTempPerm159 - fTempPerm227, ((fTempPerm227 + fTempPerm228) * fTempPerm229) / (1.0f - fTempPerm229))))) - fTempPerm223);
                }
                if ((iControl[72])) {
                  fTempPerm231 = 0.125f * fTempPerm181;
                  fTempPerm232 = fTempPerm114 - fTempPerm231;
                  fTempPerm233 = float(int(fTempPerm232));
                }
                float fThen179 = fTempPerm233 + -1.0f;
                float fThen180 = ((fTempPerm232 >= 0.0f) ? fTempPerm233 : fThen179);
                if ((iControl[72])) {
                  fTempPerm234 = fTempPerm231
                    + ((fTempPerm232 == fTempPerm233) ? fTempPerm232 : fThen180);
                  fTempPerm235
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm171));
                  fTempPerm236 = 0.49000001f * fTempPerm235;
                  fTempPerm237 = std::cos(
                    12.566371f
                    * ((fTempPerm114 + std::min<float>(0.49000001f * ((fTempPerm114 - fTempPerm234) * fTempPerm235) / (0.5f - fTempPerm236), 0.49000001f * (fTempPerm235 * (fTempPerm234 + fTempPerm221)) / (fTempPerm236 + 0.5f))) - fTempPerm234));
                  fTempPerm238 = 0.125f * fTempPerm193;
                  fTempPerm239 = fTempPerm159 - fTempPerm238;
                  fTempPerm240 = float(int(fTempPerm239));
                }
                float fThen181 = fTempPerm240 + -1.0f;
                float fThen182 = ((fTempPerm239 >= 0.0f) ? fTempPerm240 : fThen181);
                if ((iControl[72])) {
                  fTempPerm241 = fTempPerm238
                    + ((fTempPerm239 == fTempPerm240) ? fTempPerm239 : fThen182);
                  fTempPerm242
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm183));
                  fTempPerm243 = 0.49000001f * fTempPerm242;
                  fTempPerm244 = fTempPerm237 + fTempPerm136 * (std::cos(12.566371f * ((fTempPerm159 + std::min<float>(0.49000001f * ((fTempPerm159 - fTempPerm241) * fTempPerm242) / (0.5f - fTempPerm243), 0.49000001f * (fTempPerm242 * (fTempPerm241 + fTempPerm228)) / (fTempPerm243 + 0.5f))) - fTempPerm241)) - fTempPerm237);
                }
                if ((iControl[71])) {
                  fTempPerm245
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm171) + 1.0f);
                  fTempPerm246 = fTempPerm114 - fTempPerm245;
                  fTempPerm247 = float(int(fTempPerm246));
                }
                float fThen183 = fTempPerm247 + -1.0f;
                float fThen184 = ((fTempPerm246 >= 0.0f) ? fTempPerm247 : fThen183);
                if ((iControl[71])) {
                  fTempPerm248 = fTempPerm245
                    + ((fTempPerm246 == fTempPerm247) ? fTempPerm246 : fThen184);
                  fTempPerm249 = fTempPerm114 - fTempPerm248;
                }
                float fThen185 = 0.5f
                  * ((fTempPerm114 + -0.5f - fTempPerm248)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm178))
                     + 1.0f);
                if ((iControl[71])) {
                  fTempPerm250 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm249 < 0.5f) ? fTempPerm249 : fThen185)));
                  fTempPerm251
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm183) + 1.0f);
                  fTempPerm252 = fTempPerm159 - fTempPerm251;
                  fTempPerm253 = float(int(fTempPerm252));
                }
                float fThen186 = fTempPerm253 + -1.0f;
                float fThen187 = ((fTempPerm252 >= 0.0f) ? fTempPerm253 : fThen186);
                if ((iControl[71])) {
                  fTempPerm254 = fTempPerm251
                    + ((fTempPerm252 == fTempPerm253) ? fTempPerm252 : fThen187);
                  fTempPerm255 = fTempPerm159 - fTempPerm254;
                }
                float fThen188 = 0.5f
                  * ((fTempPerm159 + -0.5f - fTempPerm254)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm190))
                     + 1.0f);
                if ((iControl[71])) {
                  fTempPerm256 = fTempPerm250
                    + fTempPerm136
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm255 < 0.5f) ? fTempPerm255 : fThen188))) - fTempPerm250);
                }
                if ((iControl[70] | iControl[68])) {
                  fTempPerm257
                    = fTempPerm114
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec35[0] * fControl[551] * fTempPerm119))
                          / fRec35[0]);
                }
                if ((iControl[70])) {
                  fTempPerm258 = fTempPerm257 + 1.0f;
                  fTempPerm259 = float(int(fTempPerm258));
                }
                float fThen189 = fTempPerm259 + -1.0f;
                float fThen190 = ((fTempPerm258 >= 0.0f) ? fTempPerm259 : fThen189);
                if ((iControl[70])) {
                  fTempPerm260 = (0.0f - fTempPerm221)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm257 + 1.0f - ((fTempPerm258 == fTempPerm259) ? fTempPerm258 : fThen190))));
                }
                if ((iControl[70] | iControl[68])) {
                  fTempPerm261
                    = fTempPerm159
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec52[0] * fControl[551] * fTempPerm119))
                          / fRec52[0]);
                }
                if ((iControl[70])) {
                  fTempPerm262 = fTempPerm261 + 1.0f;
                  fTempPerm263 = float(int(fTempPerm262));
                }
                float fThen191 = fTempPerm263 + -1.0f;
                float fThen192 = ((fTempPerm262 >= 0.0f) ? fTempPerm263 : fThen191);
                if ((iControl[70])) {
                  fTempPerm264 = fTempPerm260
                    + fTempPerm136
                      * ((0.0f - fTempPerm228) * (1.0f - std::cos(6.28318548f * (fTempPerm261 + 1.0f - ((fTempPerm262 == fTempPerm263) ? fTempPerm262 : fThen192)))) - fTempPerm260)
                    + 1.0f;
                }
                float fThen193 = 2.0f * (1.0f - fTempPerm128);
                float fElse193 = 2.0f * fTempPerm128;
                if ((iControl[69])) {
                  fTempPerm265 = fTempPerm114 - (fTempPerm127 + fVec6[1]);
                }
                float fElse194 = fConst0 * fTempPerm265;
                if ((iControl[69])) {
                  fRec58[0] = ((std::fabs(fTempPerm265) < 0.5f) ? fElse194 : fRec58[1]);
                  fTempPerm266
                    = fTempPerm128
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec58[0] * fControl[551] * fTempPerm119))
                          / fRec58[0]);
                  fTempPerm267 = fTempPerm266 + 1.0f;
                  fTempPerm268 = float(int(fTempPerm267));
                }
                float fThen195 = fTempPerm268 + -1.0f;
                float fThen196 = ((fTempPerm267 >= 0.0f) ? fTempPerm268 : fThen195);
                if ((iControl[69])) {
                  fTempPerm269 = ((iTempPerm129) ? fElse193 : fThen193)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm266 + 1.0f - ((fTempPerm267 == fTempPerm268) ? fTempPerm267 : fThen196)))
                       + 1.0f);
                }
                float fThen197 = 2.0f * (1.0f - fTempPerm165);
                float fElse197 = 2.0f * fTempPerm165;
                if ((iControl[69])) {
                  fTempPerm270 = fTempPerm159 - (fTempPerm164 + fVec9[1]);
                }
                float fElse198 = fConst0 * fTempPerm270;
                if ((iControl[69])) {
                  fRec59[0] = ((std::fabs(fTempPerm270) < 0.5f) ? fElse198 : fRec59[1]);
                  fTempPerm271
                    = fTempPerm165
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec59[0] * fControl[551] * fTempPerm119))
                          / fRec59[0]);
                  fTempPerm272 = fTempPerm271 + 1.0f;
                  fTempPerm273 = float(int(fTempPerm272));
                }
                float fThen199 = fTempPerm273 + -1.0f;
                float fThen200 = ((fTempPerm272 >= 0.0f) ? fTempPerm273 : fThen199);
                if ((iControl[69])) {
                  fTempPerm274 = fTempPerm269
                    + fTempPerm136
                      * (((iTempPerm166) ? fElse197 : fThen197) * (std::cos(6.28318548f * (fTempPerm271 + 1.0f - ((fTempPerm272 == fTempPerm273) ? fTempPerm272 : fThen200))) + 1.0f) - fTempPerm269)
                    + -1.0f;
                }
                if ((iControl[68])) {
                  fTempPerm275 = float(int(fTempPerm257));
                }
                float fThen201 = fTempPerm275 + -1.0f;
                float fThen202 = ((fTempPerm257 >= 0.0f) ? fTempPerm275 : fThen201);
                if ((iControl[68])) {
                  fTempPerm276
                    = std::min<float>(1.0f, 2.0f * fTempPerm221)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm257 - ((fTempPerm257 == fTempPerm275) ? fTempPerm257 : fThen202)));
                  fTempPerm277 = float(int(fTempPerm261));
                }
                float fThen203 = fTempPerm277 + -1.0f;
                float fThen204 = ((fTempPerm261 >= 0.0f) ? fTempPerm277 : fThen203);
                if ((iControl[68])) {
                  fTempPerm278 = fTempPerm276
                    + fTempPerm136
                      * (std::min<float>(1.0f, 2.0f * fTempPerm228) * std::sin(6.28318548f * (fTempPerm261 - ((fTempPerm261 == fTempPerm277) ? fTempPerm261 : fThen204))) - fTempPerm276);
                }
                fRec2[0] = fControl[11] * fTempPerm170 + fControl[330] * fTempPerm194
                  + fControl[329] * fTempPerm216 + fControl[328] * fTempPerm230
                  + fControl[327] * fTempPerm244 + fControl[326] * fTempPerm256
                  + fControl[325] * fTempPerm264 + fControl[324] * fTempPerm274
                  + fControl[323] * fTempPerm278;
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm279
                    = fControl[579] - (fControl[573] + fControl[580] * fTemp54);
                  fTempPerm280 = fControl[575]
                    - (fControl[573] + fControl[578] * fTemp54
                       + fTemp56
                         * (fTempPerm279 - fControl[581] - (fControl[575] + fControl[582] * fTemp54)));
                  fTempPerm281
                    = fControl[587] - (fControl[572] + fControl[588] * fTemp54);
                  fTempPerm282 = fControl[583]
                    - (fControl[572] + fControl[586] * fTemp54
                       + fTemp56
                         * (fTempPerm281 - fControl[589] - (fControl[583] + fControl[590] * fTemp54)));
                  fTempPerm283 = fRec5[1]
                    * (fControl[574] + fTemp52 * (fTempPerm280 + fTempPerm282)
                       + fControl[591] * fTemp54
                       + fTemp56 * (fTempPerm279 + fTempPerm281));
                  fTempPerm284
                    = fControl[599] - (fControl[593] + fControl[600] * fTemp54);
                  fTempPerm285 = fControl[595]
                    - (fControl[593] + fControl[598] * fTemp54
                       + fTemp56
                         * (fTempPerm284 - fControl[601] - (fControl[595] + fControl[602] * fTemp54)));
                  fTempPerm286
                    = fControl[607] - (fControl[592] + fControl[608] * fTemp54);
                  fTempPerm287 = fControl[603]
                    - (fControl[592] + fControl[606] * fTemp54
                       + fTemp56
                         * (fTempPerm286 - fControl[609] - (fControl[603] + fControl[610] * fTemp54)));
                  fTempPerm288 = fRec4[1]
                    * (fControl[594] + fTemp52 * (fTempPerm285 + fTempPerm287)
                       + fControl[611] * fTemp54
                       + fTemp56 * (fTempPerm284 + fTempPerm286));
                  fTempPerm289
                    = fControl[619] - (fControl[613] + fControl[620] * fTemp54);
                  fTempPerm290 = fControl[615]
                    - (fControl[613] + fControl[618] * fTemp54
                       + fTemp56
                         * (fTempPerm289 - fControl[621] - (fControl[615] + fControl[622] * fTemp54)));
                  fTempPerm291
                    = fControl[627] - (fControl[612] + fControl[628] * fTemp54);
                  fTempPerm292 = fControl[623]
                    - (fControl[612] + fControl[626] * fTemp54
                       + fTemp56
                         * (fTempPerm291 - fControl[629] - (fControl[623] + fControl[630] * fTemp54)));
                  fTempPerm293 = fRec3[1]
                    * (fControl[614] + fTemp52 * (fTempPerm290 + fTempPerm292)
                       + fControl[631] * fTemp54
                       + fTemp56 * (fTempPerm289 + fTempPerm291));
                  fTempPerm294
                    = fControl[639] - (fControl[633] + fControl[640] * fTemp54);
                  fTempPerm295 = fControl[635]
                    - (fControl[633] + fControl[638] * fTemp54
                       + fTemp56
                         * (fTempPerm294 - fControl[641] - (fControl[635] + fControl[642] * fTemp54)));
                  fTempPerm296
                    = fControl[647] - (fControl[632] + fControl[648] * fTemp54);
                  fTempPerm297 = fControl[643]
                    - (fControl[632] + fControl[646] * fTemp54
                       + fTemp56
                         * (fTempPerm296 - fControl[649] - (fControl[643] + fControl[650] * fTemp54)));
                  fTempPerm298 = fControl[634] + fTemp52 * (fTempPerm295 + fTempPerm297)
                    + fControl[651] * fTemp54 + fTemp56 * (fTempPerm294 + fTempPerm296);
                  fTempPerm299
                    = fControl[659] - (fControl[653] + fControl[660] * fTemp54);
                  fTempPerm300 = fControl[655]
                    - (fControl[653] + fControl[658] * fTemp54
                       + fTemp56
                         * (fTempPerm299 - fControl[661] - (fControl[655] + fControl[662] * fTemp54)));
                  fTempPerm301
                    = fControl[667] - (fControl[652] + fControl[668] * fTemp54);
                  fTempPerm302 = fControl[663]
                    - (fControl[652] + fControl[666] * fTemp54
                       + fTemp56
                         * (fTempPerm301 - fControl[669] - (fControl[663] + fControl[670] * fTemp54)));
                  fTempPerm303 = fControl[654] + fTemp52 * (fTempPerm300 + fTempPerm302)
                    + fControl[671] * fTemp54 + fTemp56 * (fTempPerm299 + fTempPerm301);
                  fTempPerm304 = float(int(fTempPerm303));
                }
                float fThen205 = fTempPerm304 + -1.0f;
                float fThen206 = ((fTempPerm303 >= 0.0f) ? fTempPerm304 : fThen205);
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm305
                    = ((fTempPerm303 == fTempPerm304) ? fTempPerm303 : fThen206);
                  fTempPerm306 = fTempPerm305
                    + float((fTempPerm303 < 0.0f) & (fTempPerm303 != fTempPerm305));
                  fTempPerm307 = fTempPerm55
                    + 0.00390625f * fTempPerm298 * std::pow(2.0f, 0.0f - fTempPerm306);
                  fTempPerm308 = fTempPerm307 - fTempPerm71;
                  fTempPerm309 = float(int(fTempPerm308));
                }
                float fThen207 = fTempPerm309 + -1.0f;
                float fThen208 = ((fTempPerm308 >= 0.0f) ? fTempPerm309 : fThen207);
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  iTempPerm310 = int(fTempPerm306);
                  fTempPerm311 = 256.0f
                    * (fTempPerm307
                       - (fTempPerm71 + ((fTempPerm308 == fTempPerm309) ? fTempPerm308 : fThen208)))
                    * (float(iTempPerm310 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm310)))))
                       + float(iTempPerm310 == 0)
                       + float(
                         (iTempPerm310 > 0) * int(std::pow(2.0f, float(iTempPerm310)))));
                  fTempPerm312
                    = fControl[679] - (fControl[673] + fControl[680] * fTemp54);
                  fTempPerm313 = fControl[675]
                    - (fControl[673] + fControl[678] * fTemp54
                       + fTemp56
                         * (fTempPerm312 - fControl[681] - (fControl[675] + fControl[682] * fTemp54)));
                  fTempPerm314
                    = fControl[687] - (fControl[672] + fControl[688] * fTemp54);
                  fTempPerm315 = fControl[683]
                    - (fControl[672] + fControl[686] * fTemp54
                       + fTemp56
                         * (fTempPerm314 - fControl[689] - (fControl[683] + fControl[690] * fTemp54)));
                  fTempPerm316 = fRec2[1]
                    * (fControl[674] + fTemp52 * (fTempPerm313 + fTempPerm315)
                       + fControl[691] * fTemp54
                       + fTemp56 * (fTempPerm312 + fTempPerm314));
                  fTempPerm317 = fTempPerm283 + fTempPerm288 + fTempPerm293 + fTempPerm311
                    + fTempPerm316;
                  iTempPerm318 = int(fTempPerm311);
                }
                if (((iControl[67] & iTempPerm22)
                     | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))))
                {
                  fTempPerm319 = fRec60[1]
                    + fTempPerm35 * (fTempPerm317 - (float(iTempPerm318) + fRec61[1]));
                  fTempPerm320 = fTempPerm319 / fTempPerm90;
                  fRec60[0] = 2.0f * fTempPerm320 - fRec60[1];
                  fTempPerm321 = fRec61[1] + (fTempPerm35 * fTempPerm319) / fTempPerm90;
                  fRec61[0] = 2.0f * fTempPerm321 - fRec61[1];
                  fRec62 = fTempPerm321;
                }
                if (((iControl[67] & iTempPerm30)
                     | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))))
                {
                  fTempPerm322
                    = fTempPerm35 * (fTempPerm317 - (float(iTempPerm318) + fRec65[1]));
                  fTempPerm323
                    = (fTempPerm35
                       * ((fRec65[1] + (fTempPerm322 + 0.215215757f * fTempPerm149 * fRec63[1]) / fTempPerm97 + fTempPerm99 * fRec64[1]) / fTempPerm100 - fRec63[1]))
                    / fTempPerm97;
                  fRec63[0] = fRec63[1] + 2.0f * fTempPerm323;
                  fTempPerm324 = fRec63[1] + fTempPerm323;
                  fRec64[0] = fRec64[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm324 - fRec64[1]))
                      / fTempPerm97;
                  fRec65[0] = fRec65[1] + 2.0f * fTempPerm322 / fTempPerm97;
                  fRec66 = fTempPerm324;
                }
                if (((iControl[67] & iTempPerm29)
                     | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))))
                {
                  fTempPerm325 = fTempPerm317
                    - (float(iTempPerm318) + fRec68[1] + fTempPerm89 * fRec69[1]);
                  fTempPerm326 = (fTempPerm35 * fTempPerm325) / fTempPerm90;
                  fTempPerm327 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec69[1] + fTempPerm326));
                  fTempPerm328 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm327);
                  fTempPerm329 = fTempPerm35 * fTempPerm327 * fTempPerm328;
                  fRec67 = fRec68[1] + fTempPerm329;
                  fRec68[0] = fRec68[1] + 2.0f * fTempPerm329;
                  fTempPerm330 = fTempPerm327 * fTempPerm328;
                  fRec69[0] = fTempPerm326 + fTempPerm330;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm331 = fTempPerm317 - float(iTempPerm318);
                  fTempPerm332
                    = (fTempPerm19
                       * (fTempPerm21 * fRec62 + fTempPerm94 * fRec66 + fTempPerm104 * fRec67))
                      / fTempPerm111
                    + fTempPerm113 * fTempPerm331;
                  fVec11[0] = fTempPerm332;
                  fTempPerm333
                    = fControl[700] - (fControl[694] + fControl[701] * fTemp54);
                  fTempPerm334 = fControl[696]
                    - (fControl[694] + fControl[699] * fTemp54
                       + fTemp56
                         * (fTempPerm333 - fControl[702] - (fControl[696] + fControl[703] * fTemp54)));
                  fTempPerm335
                    = fControl[708] - (fControl[693] + fControl[709] * fTemp54);
                  fTempPerm336 = fControl[704]
                    - (fControl[693] + fControl[707] * fTemp54
                       + fTemp56
                         * (fTempPerm335 - fControl[710] - (fControl[704] + fControl[711] * fTemp54)));
                  fTempPerm337 = fControl[695] + fTemp52 * (fTempPerm334 + fTempPerm336)
                    + fControl[712] * fTemp54 + fTemp56 * (fTempPerm333 + fTempPerm335);
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))))
                {
                  fTempPerm338 = fControl[692] * fTempPerm337;
                }
                if ((iControl[67])) {
                  fTempPerm339 = 2.0f * fTempPerm338;
                  fTempPerm340 = std::min<float>(1.0f, fTempPerm339);
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fTempPerm341 = fTempPerm332 - fVec11[1];
                }
                float fElse210 = fConst0 * fTempPerm341;
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fRec71[0] = ((std::fabs(fTempPerm341) < 0.5f) ? fElse210 : fRec71[1]);
                }
                if ((iControl[67])) {
                  fTempPerm342 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec71[0])))));
                  fTempPerm343 = 1.0f - fTempPerm342;
                }
                if ((iControl[67] | iControl[60])) {
                  fTempPerm344 = float(int(fTempPerm332));
                }
                float fThen211 = fTempPerm344 + -1.0f;
                float fThen212 = ((fTempPerm332 >= 0.0f) ? fTempPerm344 : fThen211);
                if ((iControl[67] | iControl[60])) {
                  fTempPerm345
                    = ((fTempPerm332 == fTempPerm344) ? fTempPerm332 : fThen212);
                  fTempPerm346 = fTempPerm332 - fTempPerm345;
                  fVec12[0] = fTempPerm346;
                  iTempPerm347 = fTempPerm346 < 0.5f;
                  iVec13[0] = iTempPerm347;
                }
                if ((iControl[67])) {
                  iTempPerm348 = (iVec13[1] <= 0) & (iTempPerm347 > 0);
                  fRec76[0] = fRec76[1] * float(1 - iTempPerm348)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm348);
                  fTempPerm349 = fTempPerm342 + 1.0f;
                  fRec75[0] = 0.0f
                    - (fTempPerm343 * fRec75[1] - (fRec76[0] + fRec76[1])) / fTempPerm349;
                  fRec74[0] = 0.0f
                    - (fTempPerm343 * fRec74[1] - (fRec75[0] + fRec75[1])) / fTempPerm349;
                  fRec73[0] = 0.0f
                    - (fTempPerm343 * fRec73[1] - (fRec74[0] + fRec74[1])) / fTempPerm349;
                  fRec72[0] = 0.0f
                    - (fTempPerm343 * fRec72[1] - (fRec73[0] + fRec73[1])) / fTempPerm349;
                  fRec70[0] = 0.0f
                    - (fRec70[1] * fTempPerm343 - (fRec72[0] + fRec72[1])) / fTempPerm349;
                  fTempPerm350 = std::sin(6.28318548f * fTempPerm332)
                    * (fTempPerm340 * (fRec70[0] + -1.0f) + 1.0f);
                  fTempPerm351 = std::max<float>(1.0f, fTempPerm339) + -1.0f;
                  fTempPerm352 = fRec70[0] - fTempPerm350;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm353 = std::fabs(fTempPerm303);
                  fTempPerm354 = fTempPerm353 - float(int(fTempPerm353));
                  fTempPerm355 = fTempPerm305 + float(fTempPerm303 > 0.0f);
                  fTempPerm356 = fTempPerm55
                    + 0.00390625f * fTempPerm298 * std::pow(2.0f, 0.0f - fTempPerm355);
                  fTempPerm357 = fTempPerm356 - fTempPerm71;
                  fTempPerm358 = float(int(fTempPerm357));
                }
                float fThen213 = fTempPerm358 + -1.0f;
                float fThen214 = ((fTempPerm357 >= 0.0f) ? fTempPerm358 : fThen213);
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  iTempPerm359 = int(fTempPerm355);
                  fTempPerm360 = 256.0f
                    * (fTempPerm356
                       - (fTempPerm71 + ((fTempPerm357 == fTempPerm358) ? fTempPerm357 : fThen214)))
                    * (float(iTempPerm359 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm359)))))
                       + float(iTempPerm359 == 0)
                       + float(
                         (iTempPerm359 > 0) * int(std::pow(2.0f, float(iTempPerm359)))));
                  fTempPerm361 = fTempPerm316 + fTempPerm293 + fTempPerm288 + fTempPerm283
                    + fTempPerm360;
                  iTempPerm362 = int(fTempPerm360);
                }
                if (((iControl[67] & iTempPerm22)
                     | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))))
                {
                  fTempPerm363 = fRec77[1]
                    + fTempPerm35 * (fTempPerm361 - (float(iTempPerm362) + fRec78[1]));
                  fTempPerm364 = fTempPerm363 / fTempPerm90;
                  fRec77[0] = 2.0f * fTempPerm364 - fRec77[1];
                  fTempPerm365 = fRec78[1] + (fTempPerm35 * fTempPerm363) / fTempPerm90;
                  fRec78[0] = 2.0f * fTempPerm365 - fRec78[1];
                  fRec79 = fTempPerm365;
                }
                if (((iControl[67] & iTempPerm30)
                     | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))))
                {
                  fTempPerm366
                    = fTempPerm35 * (fTempPerm361 - (float(iTempPerm362) + fRec82[1]));
                  fTempPerm367
                    = (fTempPerm35
                       * ((fRec82[1] + (fTempPerm366 + 0.215215757f * fTempPerm149 * fRec80[1]) / fTempPerm97 + fTempPerm99 * fRec81[1]) / fTempPerm100 - fRec80[1]))
                    / fTempPerm97;
                  fRec80[0] = fRec80[1] + 2.0f * fTempPerm367;
                  fTempPerm368 = fRec80[1] + fTempPerm367;
                  fRec81[0] = fRec81[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm368 - fRec81[1]))
                      / fTempPerm97;
                  fRec82[0] = fRec82[1] + 2.0f * fTempPerm366 / fTempPerm97;
                  fRec83 = fTempPerm368;
                }
                if (((iControl[67] & iTempPerm29)
                     | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))))
                {
                  fTempPerm369 = fTempPerm361
                    - (float(iTempPerm362) + fRec85[1] + fTempPerm89 * fRec86[1]);
                  fTempPerm370 = (fTempPerm35 * fTempPerm369) / fTempPerm90;
                  fTempPerm371 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec86[1] + fTempPerm370));
                  fTempPerm372 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm371);
                  fTempPerm373 = fTempPerm35 * fTempPerm371 * fTempPerm372;
                  fRec84 = fRec85[1] + fTempPerm373;
                  fRec85[0] = fRec85[1] + 2.0f * fTempPerm373;
                  fTempPerm374 = fTempPerm371 * fTempPerm372;
                  fRec86[0] = fTempPerm370 + fTempPerm374;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm375 = fTempPerm361 - float(iTempPerm362);
                  fTempPerm376
                    = (fTempPerm19
                       * (fTempPerm21 * fRec79 + fTempPerm94 * fRec83 + fTempPerm104 * fRec84))
                      / fTempPerm111
                    + fTempPerm113 * fTempPerm375;
                  fVec14[0] = fTempPerm376;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fTempPerm377 = fTempPerm376 - fVec14[1];
                }
                float fElse215 = fConst0 * fTempPerm377;
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fRec88[0] = ((std::fabs(fTempPerm377) < 0.5f) ? fElse215 : fRec88[1]);
                }
                if ((iControl[67])) {
                  fTempPerm378 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec88[0])))));
                  fTempPerm379 = 1.0f - fTempPerm378;
                }
                if ((iControl[67] | iControl[60])) {
                  fTempPerm380 = float(int(fTempPerm376));
                }
                float fThen216 = fTempPerm380 + -1.0f;
                float fThen217 = ((fTempPerm376 >= 0.0f) ? fTempPerm380 : fThen216);
                if ((iControl[67] | iControl[60])) {
                  fTempPerm381
                    = ((fTempPerm376 == fTempPerm380) ? fTempPerm376 : fThen217);
                  fTempPerm382 = fTempPerm376 - fTempPerm381;
                  fVec15[0] = fTempPerm382;
                  iTempPerm383 = fTempPerm382 < 0.5f;
                  iVec16[0] = iTempPerm383;
                }
                if ((iControl[67])) {
                  iTempPerm384 = (iVec16[1] <= 0) & (iTempPerm383 > 0);
                  fRec93[0] = fRec93[1] * float(1 - iTempPerm384)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm384);
                  fTempPerm385 = fTempPerm378 + 1.0f;
                  fRec92[0] = 0.0f
                    - (fTempPerm379 * fRec92[1] - (fRec93[0] + fRec93[1])) / fTempPerm385;
                  fRec91[0] = 0.0f
                    - (fTempPerm379 * fRec91[1] - (fRec92[0] + fRec92[1])) / fTempPerm385;
                  fRec90[0] = 0.0f
                    - (fTempPerm379 * fRec90[1] - (fRec91[0] + fRec91[1])) / fTempPerm385;
                  fRec89[0] = 0.0f
                    - (fTempPerm379 * fRec89[1] - (fRec90[0] + fRec90[1])) / fTempPerm385;
                  fRec87[0] = 0.0f
                    - (fRec87[1] * fTempPerm379 - (fRec89[0] + fRec89[1])) / fTempPerm385;
                  fTempPerm386 = std::sin(6.28318548f * fTempPerm376)
                    * (fTempPerm340 * (fRec87[0] + -1.0f) + 1.0f);
                  fTempPerm387 = fTempPerm350 + fTempPerm351 * fTempPerm352
                    + fTempPerm354
                      * (fTempPerm386 - (fTempPerm350 + fTempPerm351 * (fTempPerm352 - fRec87[0] - fTempPerm386)));
                }
                if ((iControl[66]
                     | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
                  fTempPerm388 = fTempPerm338
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec71[0] - fConst7))));
                }
                if ((iControl[66])) {
                  fTempPerm389 = 0.25f * fTempPerm388;
                  fTempPerm390 = fTempPerm332 + 0.75f - fTempPerm389;
                  fTempPerm391 = float(int(fTempPerm390));
                }
                float fThen218 = fTempPerm391 + -1.0f;
                float fThen219 = ((fTempPerm390 >= 0.0f) ? fTempPerm391 : fThen218);
                if ((iControl[66])) {
                  fTempPerm392
                    = ((fTempPerm390 == fTempPerm391) ? fTempPerm390 : fThen219);
                  fTempPerm393 = 0.75f - (fTempPerm389 + fTempPerm392);
                }
                if ((iControl[66] | (iControl[64] | iControl[62]))) {
                  fTempPerm394 = 1.0f - fTempPerm388;
                }
                if ((iControl[66] | iControl[62])) {
                  fTempPerm395 = 0.5f * fTempPerm394;
                }
                if ((iControl[66])) {
                  fTempPerm396 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm395));
                  fTempPerm397 = 0.5f - fTempPerm396;
                }
                if ((iControl[66] | iControl[63])) {
                  fTempPerm398 = fTempPerm388 + 1.0f;
                }
                if ((iControl[66])) {
                  fTempPerm399 = std::cos(
                    6.28318548f
                    * (fTempPerm332 + std::min<float>(((fTempPerm332 + fTempPerm393) * fTempPerm397) / fTempPerm396, (fTempPerm397 * ((fTempPerm392 + 0.25f * fTempPerm398) - fTempPerm332)) / (1.0f - fTempPerm396)) + fTempPerm393));
                }
                if ((iControl[66]
                     | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
                  fTempPerm400 = fTempPerm338
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec88[0] - fConst7))));
                }
                if ((iControl[66])) {
                  fTempPerm401 = 0.25f * fTempPerm400;
                  fTempPerm402 = fTempPerm376 + 0.75f - fTempPerm401;
                  fTempPerm403 = float(int(fTempPerm402));
                }
                float fThen220 = fTempPerm403 + -1.0f;
                float fThen221 = ((fTempPerm402 >= 0.0f) ? fTempPerm403 : fThen220);
                if ((iControl[66])) {
                  fTempPerm404
                    = ((fTempPerm402 == fTempPerm403) ? fTempPerm402 : fThen221);
                  fTempPerm405 = 0.75f - (fTempPerm401 + fTempPerm404);
                }
                if ((iControl[66] | (iControl[64] | iControl[62]))) {
                  fTempPerm406 = 1.0f - fTempPerm400;
                }
                if ((iControl[66] | iControl[62])) {
                  fTempPerm407 = 0.5f * fTempPerm406;
                }
                if ((iControl[66])) {
                  fTempPerm408 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm407));
                  fTempPerm409 = 0.5f - fTempPerm408;
                }
                if ((iControl[66] | iControl[63])) {
                  fTempPerm410 = fTempPerm400 + 1.0f;
                }
                if ((iControl[66])) {
                  fTempPerm411 = fTempPerm399
                    + fTempPerm354
                      * (std::cos(6.28318548f * (fTempPerm376 + std::min<float>(((fTempPerm376 + fTempPerm405) * fTempPerm409) / fTempPerm408, (fTempPerm409 * ((fTempPerm404 + 0.25f * fTempPerm410) - fTempPerm376)) / (1.0f - fTempPerm408)) + fTempPerm405)) - fTempPerm399);
                }
                if ((iControl[65])) {
                  fTempPerm412 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm388));
                  fTempPerm413 = 1.0f - fTempPerm412;
                  fTempPerm414 = 0.25f * fTempPerm413;
                  fTempPerm415 = fTempPerm332 - fTempPerm414;
                  fTempPerm416 = float(int(fTempPerm415));
                }
                float fThen222 = fTempPerm416 + -1.0f;
                float fThen223 = ((fTempPerm415 >= 0.0f) ? fTempPerm416 : fThen222);
                if ((iControl[65])) {
                  fTempPerm417 = fTempPerm332
                    - (fTempPerm414
                       + ((fTempPerm415 == fTempPerm416) ? fTempPerm415 : fThen223));
                  fTempPerm418 = 2.0f * fTempPerm417;
                  fTempPerm419 = fTempPerm418 + 1.0f;
                  fTempPerm420 = float(int(fTempPerm419));
                }
                float fThen224 = fTempPerm420 + -1.0f;
                float fThen225 = ((fTempPerm419 >= 0.0f) ? fTempPerm420 : fThen224);
                if ((iControl[65])) {
                  fTempPerm421
                    = ((fTempPerm419 == fTempPerm420) ? fTempPerm419 : fThen225);
                  fTempPerm422 = std::cos(
                    3.14159274f
                    * (float(fTempPerm417 >= 0.5f) + fTempPerm418 + 1.0f - (fTempPerm421 + std::min<float>(fTempPerm418 + 1.0f - fTempPerm421, (fTempPerm412 * (fTempPerm421 - fTempPerm418)) / fTempPerm413))));
                  fTempPerm423 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm400));
                  fTempPerm424 = 1.0f - fTempPerm423;
                  fTempPerm425 = 0.25f * fTempPerm424;
                  fTempPerm426 = fTempPerm376 - fTempPerm425;
                  fTempPerm427 = float(int(fTempPerm426));
                }
                float fThen226 = fTempPerm427 + -1.0f;
                float fThen227 = ((fTempPerm426 >= 0.0f) ? fTempPerm427 : fThen226);
                if ((iControl[65])) {
                  fTempPerm428 = fTempPerm376
                    - (fTempPerm425
                       + ((fTempPerm426 == fTempPerm427) ? fTempPerm426 : fThen227));
                  fTempPerm429 = 2.0f * fTempPerm428;
                  fTempPerm430 = fTempPerm429 + 1.0f;
                  fTempPerm431 = float(int(fTempPerm430));
                }
                float fThen228 = fTempPerm431 + -1.0f;
                float fThen229 = ((fTempPerm430 >= 0.0f) ? fTempPerm431 : fThen228);
                if ((iControl[65])) {
                  fTempPerm432
                    = ((fTempPerm430 == fTempPerm431) ? fTempPerm430 : fThen229);
                  fTempPerm433 = fTempPerm422
                    + fTempPerm354
                      * (std::cos(3.14159274f * (float(fTempPerm428 >= 0.5f) + fTempPerm429 + 1.0f - (fTempPerm432 + std::min<float>(fTempPerm429 + 1.0f - fTempPerm432, (fTempPerm423 * (fTempPerm432 - fTempPerm429)) / fTempPerm424)))) - fTempPerm422);
                }
                if ((iControl[64])) {
                  fTempPerm434 = 0.25f * fTempPerm394;
                  fTempPerm435 = fTempPerm332 - fTempPerm434;
                  fTempPerm436 = float(int(fTempPerm435));
                }
                float fThen230 = fTempPerm436 + -1.0f;
                float fThen231 = ((fTempPerm435 >= 0.0f) ? fTempPerm436 : fThen230);
                if ((iControl[64])) {
                  fTempPerm437 = fTempPerm434
                    + ((fTempPerm435 == fTempPerm436) ? fTempPerm435 : fThen231);
                }
                if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
                  fTempPerm438 = 1.0f - fTempPerm332;
                }
                if ((iControl[64])) {
                  fTempPerm439
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm388));
                  fTempPerm440 = std::cos(
                    6.28318548f
                    * (fTempPerm332 - (fTempPerm437 + std::min<float>(fTempPerm332 - fTempPerm437, ((fTempPerm437 + fTempPerm438) * fTempPerm439) / (1.0f - fTempPerm439)))));
                  fTempPerm441 = 0.25f * fTempPerm406;
                  fTempPerm442 = fTempPerm376 - fTempPerm441;
                  fTempPerm443 = float(int(fTempPerm442));
                }
                float fThen232 = fTempPerm443 + -1.0f;
                float fThen233 = ((fTempPerm442 >= 0.0f) ? fTempPerm443 : fThen232);
                if ((iControl[64])) {
                  fTempPerm444 = fTempPerm441
                    + ((fTempPerm442 == fTempPerm443) ? fTempPerm442 : fThen233);
                }
                if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
                  fTempPerm445 = 1.0f - fTempPerm376;
                }
                if ((iControl[64])) {
                  fTempPerm446
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm400));
                  fTempPerm447 = fTempPerm440
                    + fTempPerm354
                      * (std::cos(6.28318548f * (fTempPerm376 - (fTempPerm444 + std::min<float>(fTempPerm376 - fTempPerm444, ((fTempPerm444 + fTempPerm445) * fTempPerm446) / (1.0f - fTempPerm446))))) - fTempPerm440);
                }
                if ((iControl[63])) {
                  fTempPerm448 = 0.125f * fTempPerm398;
                  fTempPerm449 = fTempPerm332 - fTempPerm448;
                  fTempPerm450 = float(int(fTempPerm449));
                }
                float fThen234 = fTempPerm450 + -1.0f;
                float fThen235 = ((fTempPerm449 >= 0.0f) ? fTempPerm450 : fThen234);
                if ((iControl[63])) {
                  fTempPerm451 = fTempPerm448
                    + ((fTempPerm449 == fTempPerm450) ? fTempPerm449 : fThen235);
                  fTempPerm452
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm388));
                  fTempPerm453 = 0.49000001f * fTempPerm452;
                  fTempPerm454 = std::cos(
                    12.566371f
                    * ((fTempPerm332 + std::min<float>(0.49000001f * ((fTempPerm332 - fTempPerm451) * fTempPerm452) / (0.5f - fTempPerm453), 0.49000001f * (fTempPerm452 * (fTempPerm451 + fTempPerm438)) / (fTempPerm453 + 0.5f))) - fTempPerm451));
                  fTempPerm455 = 0.125f * fTempPerm410;
                  fTempPerm456 = fTempPerm376 - fTempPerm455;
                  fTempPerm457 = float(int(fTempPerm456));
                }
                float fThen236 = fTempPerm457 + -1.0f;
                float fThen237 = ((fTempPerm456 >= 0.0f) ? fTempPerm457 : fThen236);
                if ((iControl[63])) {
                  fTempPerm458 = fTempPerm455
                    + ((fTempPerm456 == fTempPerm457) ? fTempPerm456 : fThen237);
                  fTempPerm459
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm400));
                  fTempPerm460 = 0.49000001f * fTempPerm459;
                  fTempPerm461 = fTempPerm454 + fTempPerm354 * (std::cos(12.566371f * ((fTempPerm376 + std::min<float>(0.49000001f * ((fTempPerm376 - fTempPerm458) * fTempPerm459) / (0.5f - fTempPerm460), 0.49000001f * (fTempPerm459 * (fTempPerm458 + fTempPerm445)) / (fTempPerm460 + 0.5f))) - fTempPerm458)) - fTempPerm454);
                }
                if ((iControl[62])) {
                  fTempPerm462
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm388) + 1.0f);
                  fTempPerm463 = fTempPerm332 - fTempPerm462;
                  fTempPerm464 = float(int(fTempPerm463));
                }
                float fThen238 = fTempPerm464 + -1.0f;
                float fThen239 = ((fTempPerm463 >= 0.0f) ? fTempPerm464 : fThen238);
                if ((iControl[62])) {
                  fTempPerm465 = fTempPerm462
                    + ((fTempPerm463 == fTempPerm464) ? fTempPerm463 : fThen239);
                  fTempPerm466 = fTempPerm332 - fTempPerm465;
                }
                float fThen240 = 0.5f
                  * ((fTempPerm332 + -0.5f - fTempPerm465)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm395))
                     + 1.0f);
                if ((iControl[62])) {
                  fTempPerm467 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm466 < 0.5f) ? fTempPerm466 : fThen240)));
                  fTempPerm468
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm400) + 1.0f);
                  fTempPerm469 = fTempPerm376 - fTempPerm468;
                  fTempPerm470 = float(int(fTempPerm469));
                }
                float fThen241 = fTempPerm470 + -1.0f;
                float fThen242 = ((fTempPerm469 >= 0.0f) ? fTempPerm470 : fThen241);
                if ((iControl[62])) {
                  fTempPerm471 = fTempPerm468
                    + ((fTempPerm469 == fTempPerm470) ? fTempPerm469 : fThen242);
                  fTempPerm472 = fTempPerm376 - fTempPerm471;
                }
                float fThen243 = 0.5f
                  * ((fTempPerm376 + -0.5f - fTempPerm471)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm407))
                     + 1.0f);
                if ((iControl[62])) {
                  fTempPerm473 = fTempPerm467
                    + fTempPerm354
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm472 < 0.5f) ? fTempPerm472 : fThen243))) - fTempPerm467);
                }
                if ((iControl[61] | iControl[59])) {
                  fTempPerm474
                    = fTempPerm332
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec71[0] * fControl[692] * fTempPerm337))
                          / fRec71[0]);
                }
                if ((iControl[61])) {
                  fTempPerm475 = fTempPerm474 + 1.0f;
                  fTempPerm476 = float(int(fTempPerm475));
                }
                float fThen244 = fTempPerm476 + -1.0f;
                float fThen245 = ((fTempPerm475 >= 0.0f) ? fTempPerm476 : fThen244);
                if ((iControl[61])) {
                  fTempPerm477 = (0.0f - fTempPerm438)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm474 + 1.0f - ((fTempPerm475 == fTempPerm476) ? fTempPerm475 : fThen245))));
                }
                if ((iControl[61] | iControl[59])) {
                  fTempPerm478
                    = fTempPerm376
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec88[0] * fControl[692] * fTempPerm337))
                          / fRec88[0]);
                }
                if ((iControl[61])) {
                  fTempPerm479 = fTempPerm478 + 1.0f;
                  fTempPerm480 = float(int(fTempPerm479));
                }
                float fThen246 = fTempPerm480 + -1.0f;
                float fThen247 = ((fTempPerm479 >= 0.0f) ? fTempPerm480 : fThen246);
                if ((iControl[61])) {
                  fTempPerm481 = fTempPerm477
                    + fTempPerm354
                      * ((0.0f - fTempPerm445) * (1.0f - std::cos(6.28318548f * (fTempPerm478 + 1.0f - ((fTempPerm479 == fTempPerm480) ? fTempPerm479 : fThen247)))) - fTempPerm477)
                    + 1.0f;
                }
                float fThen248 = 2.0f * (1.0f - fTempPerm346);
                float fElse248 = 2.0f * fTempPerm346;
                if ((iControl[60])) {
                  fTempPerm482 = fTempPerm332 - (fTempPerm345 + fVec12[1]);
                }
                float fElse249 = fConst0 * fTempPerm482;
                if ((iControl[60])) {
                  fRec94[0] = ((std::fabs(fTempPerm482) < 0.5f) ? fElse249 : fRec94[1]);
                  fTempPerm483
                    = fTempPerm346
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec94[0] * fControl[692] * fTempPerm337))
                          / fRec94[0]);
                  fTempPerm484 = fTempPerm483 + 1.0f;
                  fTempPerm485 = float(int(fTempPerm484));
                }
                float fThen250 = fTempPerm485 + -1.0f;
                float fThen251 = ((fTempPerm484 >= 0.0f) ? fTempPerm485 : fThen250);
                if ((iControl[60])) {
                  fTempPerm486 = ((iTempPerm347) ? fElse248 : fThen248)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm483 + 1.0f - ((fTempPerm484 == fTempPerm485) ? fTempPerm484 : fThen251)))
                       + 1.0f);
                }
                float fThen252 = 2.0f * (1.0f - fTempPerm382);
                float fElse252 = 2.0f * fTempPerm382;
                if ((iControl[60])) {
                  fTempPerm487 = fTempPerm376 - (fTempPerm381 + fVec15[1]);
                }
                float fElse253 = fConst0 * fTempPerm487;
                if ((iControl[60])) {
                  fRec95[0] = ((std::fabs(fTempPerm487) < 0.5f) ? fElse253 : fRec95[1]);
                  fTempPerm488
                    = fTempPerm382
                    * std::max<float>(
                        1.0f,
                        std::min<float>(
                          fConst8,
                          std::max<float>(0.0f, fRec95[0] * fControl[692] * fTempPerm337))
                          / fRec95[0]);
                  fTempPerm489 = fTempPerm488 + 1.0f;
                  fTempPerm490 = float(int(fTempPerm489));
                }
                float fThen254 = fTempPerm490 + -1.0f;
                float fThen255 = ((fTempPerm489 >= 0.0f) ? fTempPerm490 : fThen254);
                if ((iControl[60])) {
                  fTempPerm491 = fTempPerm486
                    + fTempPerm354
                      * (((iTempPerm383) ? fElse252 : fThen252) * (std::cos(6.28318548f * (fTempPerm488 + 1.0f - ((fTempPerm489 == fTempPerm490) ? fTempPerm489 : fThen255))) + 1.0f) - fTempPerm486)
                    + -1.0f;
                }
                if ((iControl[59])) {
                  fTempPerm492 = float(int(fTempPerm474));
                }
                float fThen256 = fTempPerm492 + -1.0f;
                float fThen257 = ((fTempPerm474 >= 0.0f) ? fTempPerm492 : fThen256);
                if ((iControl[59])) {
                  fTempPerm493
                    = std::min<float>(1.0f, 2.0f * fTempPerm438)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm474 - ((fTempPerm474 == fTempPerm492) ? fTempPerm474 : fThen257)));
                  fTempPerm494 = float(int(fTempPerm478));
                }
                float fThen258 = fTempPerm494 + -1.0f;
                float fThen259 = ((fTempPerm478 >= 0.0f) ? fTempPerm494 : fThen258);
                if ((iControl[59])) {
                  fTempPerm495 = fTempPerm493
                    + fTempPerm354
                      * (std::min<float>(1.0f, 2.0f * fTempPerm445) * std::sin(6.28318548f * (fTempPerm478 - ((fTempPerm478 == fTempPerm494) ? fTempPerm478 : fThen259))) - fTempPerm493);
                }
                fRec3[0] = fControl[322] * fTempPerm387 + fControl[321] * fTempPerm411
                  + fControl[320] * fTempPerm433 + fControl[319] * fTempPerm447
                  + fControl[318] * fTempPerm461 + fControl[317] * fTempPerm473
                  + fControl[316] * fTempPerm481 + fControl[315] * fTempPerm491
                  + fControl[314] * fTempPerm495;
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm496
                    = fControl[720] - (fControl[714] + fControl[721] * fTemp54);
                  fTempPerm497 = fControl[716]
                    - (fControl[714] + fControl[719] * fTemp54
                       + fTemp56
                         * (fTempPerm496 - fControl[722] - (fControl[716] + fControl[723] * fTemp54)));
                  fTempPerm498
                    = fControl[728] - (fControl[713] + fControl[729] * fTemp54);
                  fTempPerm499 = fControl[724]
                    - (fControl[713] + fControl[727] * fTemp54
                       + fTemp56
                         * (fTempPerm498 - fControl[730] - (fControl[724] + fControl[731] * fTemp54)));
                  fTempPerm500 = fRec5[1]
                    * (fControl[715] + fTemp52 * (fTempPerm497 + fTempPerm499)
                       + fControl[732] * fTemp54
                       + fTemp56 * (fTempPerm496 + fTempPerm498));
                  fTempPerm501
                    = fControl[740] - (fControl[734] + fControl[741] * fTemp54);
                  fTempPerm502 = fControl[736]
                    - (fControl[734] + fControl[739] * fTemp54
                       + fTemp56
                         * (fTempPerm501 - fControl[742] - (fControl[736] + fControl[743] * fTemp54)));
                  fTempPerm503
                    = fControl[748] - (fControl[733] + fControl[749] * fTemp54);
                  fTempPerm504 = fControl[744]
                    - (fControl[733] + fControl[747] * fTemp54
                       + fTemp56
                         * (fTempPerm503 - fControl[750] - (fControl[744] + fControl[751] * fTemp54)));
                  fTempPerm505 = fRec4[1]
                    * (fControl[735] + fTemp52 * (fTempPerm502 + fTempPerm504)
                       + fControl[752] * fTemp54
                       + fTemp56 * (fTempPerm501 + fTempPerm503));
                  fTempPerm506
                    = fControl[760] - (fControl[754] + fControl[761] * fTemp54);
                  fTempPerm507 = fControl[756]
                    - (fControl[754] + fControl[759] * fTemp54
                       + fTemp56
                         * (fTempPerm506 - fControl[762] - (fControl[756] + fControl[763] * fTemp54)));
                  fTempPerm508
                    = fControl[768] - (fControl[753] + fControl[769] * fTemp54);
                  fTempPerm509 = fControl[764]
                    - (fControl[753] + fControl[767] * fTemp54
                       + fTemp56
                         * (fTempPerm508 - fControl[770] - (fControl[764] + fControl[771] * fTemp54)));
                  fTempPerm510 = fRec3[1]
                    * (fControl[755] + fTemp52 * (fTempPerm507 + fTempPerm509)
                       + fControl[772] * fTemp54
                       + fTemp56 * (fTempPerm506 + fTempPerm508));
                  fTempPerm511
                    = fControl[780] - (fControl[774] + fControl[781] * fTemp54);
                  fTempPerm512 = fControl[776]
                    - (fControl[774] + fControl[779] * fTemp54
                       + fTemp56
                         * (fTempPerm511 - fControl[782] - (fControl[776] + fControl[783] * fTemp54)));
                  fTempPerm513
                    = fControl[788] - (fControl[773] + fControl[789] * fTemp54);
                  fTempPerm514 = fControl[784]
                    - (fControl[773] + fControl[787] * fTemp54
                       + fTemp56
                         * (fTempPerm513 - fControl[790] - (fControl[784] + fControl[791] * fTemp54)));
                  fTempPerm515 = fControl[775] + fTemp52 * (fTempPerm512 + fTempPerm514)
                    + fControl[792] * fTemp54 + fTemp56 * (fTempPerm511 + fTempPerm513);
                  fTempPerm516
                    = fControl[800] - (fControl[794] + fControl[801] * fTemp54);
                  fTempPerm517 = fControl[796]
                    - (fControl[794] + fControl[799] * fTemp54
                       + fTemp56
                         * (fTempPerm516 - fControl[802] - (fControl[796] + fControl[803] * fTemp54)));
                  fTempPerm518
                    = fControl[808] - (fControl[793] + fControl[809] * fTemp54);
                  fTempPerm519 = fControl[804]
                    - (fControl[793] + fControl[807] * fTemp54
                       + fTemp56
                         * (fTempPerm518 - fControl[810] - (fControl[804] + fControl[811] * fTemp54)));
                  fTempPerm520 = fControl[795] + fTemp52 * (fTempPerm517 + fTempPerm519)
                    + fControl[812] * fTemp54 + fTemp56 * (fTempPerm516 + fTempPerm518);
                  fTempPerm521 = float(int(fTempPerm520));
                }
                float fThen260 = fTempPerm521 + -1.0f;
                float fThen261 = ((fTempPerm520 >= 0.0f) ? fTempPerm521 : fThen260);
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm522
                    = ((fTempPerm520 == fTempPerm521) ? fTempPerm520 : fThen261);
                  fTempPerm523 = fTempPerm522
                    + float((fTempPerm520 < 0.0f) & (fTempPerm520 != fTempPerm522));
                  fTempPerm524 = fTempPerm55
                    + 0.00390625f * fTempPerm515 * std::pow(2.0f, 0.0f - fTempPerm523);
                  fTempPerm525 = fTempPerm524 - fTempPerm71;
                  fTempPerm526 = float(int(fTempPerm525));
                }
                float fThen262 = fTempPerm526 + -1.0f;
                float fThen263 = ((fTempPerm525 >= 0.0f) ? fTempPerm526 : fThen262);
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  iTempPerm527 = int(fTempPerm523);
                  fTempPerm528 = 256.0f
                    * (fTempPerm524
                       - (fTempPerm71 + ((fTempPerm525 == fTempPerm526) ? fTempPerm525 : fThen263)))
                    * (float(iTempPerm527 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm527)))))
                       + float(iTempPerm527 == 0)
                       + float(
                         (iTempPerm527 > 0) * int(std::pow(2.0f, float(iTempPerm527)))));
                  fTempPerm529
                    = fControl[820] - (fControl[814] + fControl[821] * fTemp54);
                  fTempPerm530 = fControl[816]
                    - (fControl[814] + fControl[819] * fTemp54
                       + fTemp56
                         * (fTempPerm529 - fControl[822] - (fControl[816] + fControl[823] * fTemp54)));
                  fTempPerm531
                    = fControl[828] - (fControl[813] + fControl[829] * fTemp54);
                  fTempPerm532 = fControl[824]
                    - (fControl[813] + fControl[827] * fTemp54
                       + fTemp56
                         * (fTempPerm531 - fControl[830] - (fControl[824] + fControl[831] * fTemp54)));
                  fTempPerm533 = fRec2[1]
                    * (fControl[815] + fTemp52 * (fTempPerm530 + fTempPerm532)
                       + fControl[832] * fTemp54
                       + fTemp56 * (fTempPerm529 + fTempPerm531));
                  fTempPerm534 = fTempPerm500 + fTempPerm505 + fTempPerm510 + fTempPerm528
                    + fTempPerm533;
                  iTempPerm535 = int(fTempPerm528);
                }
                if (((iControl[58] & iTempPerm22)
                     | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))))
                {
                  fTempPerm536 = fRec96[1]
                    + fTempPerm35 * (fTempPerm534 - (float(iTempPerm535) + fRec97[1]));
                  fTempPerm537 = fTempPerm536 / fTempPerm90;
                  fRec96[0] = 2.0f * fTempPerm537 - fRec96[1];
                  fTempPerm538 = fRec97[1] + (fTempPerm35 * fTempPerm536) / fTempPerm90;
                  fRec97[0] = 2.0f * fTempPerm538 - fRec97[1];
                  fRec98 = fTempPerm538;
                }
                if (((iControl[58] & iTempPerm30)
                     | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))))
                {
                  fTempPerm539
                    = fTempPerm35 * (fTempPerm534 - (float(iTempPerm535) + fRec101[1]));
                  fTempPerm540
                    = (fTempPerm35
                       * ((fRec101[1] + (fTempPerm539 + 0.215215757f * fTempPerm149 * fRec99[1]) / fTempPerm97 + fTempPerm99 * fRec100[1]) / fTempPerm100 - fRec99[1]))
                    / fTempPerm97;
                  fRec99[0] = fRec99[1] + 2.0f * fTempPerm540;
                  fTempPerm541 = fRec99[1] + fTempPerm540;
                  fRec100[0] = fRec100[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm541 - fRec100[1]))
                      / fTempPerm97;
                  fRec101[0] = fRec101[1] + 2.0f * fTempPerm539 / fTempPerm97;
                  fRec102 = fTempPerm541;
                }
                if (((iControl[58] & iTempPerm29)
                     | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))))
                {
                  fTempPerm542 = fTempPerm534
                    - (float(iTempPerm535) + fRec104[1] + fTempPerm89 * fRec105[1]);
                  fTempPerm543 = (fTempPerm35 * fTempPerm542) / fTempPerm90;
                  fTempPerm544 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec105[1] + fTempPerm543));
                  fTempPerm545 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm544);
                  fTempPerm546 = fTempPerm35 * fTempPerm544 * fTempPerm545;
                  fRec103 = fRec104[1] + fTempPerm546;
                  fRec104[0] = fRec104[1] + 2.0f * fTempPerm546;
                  fTempPerm547 = fTempPerm544 * fTempPerm545;
                  fRec105[0] = fTempPerm543 + fTempPerm547;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm548 = fTempPerm534 - float(iTempPerm535);
                  fTempPerm549
                    = (fTempPerm19
                       * (fTempPerm21 * fRec98 + fTempPerm94 * fRec102 + fTempPerm104 * fRec103))
                      / fTempPerm111
                    + fTempPerm113 * fTempPerm548;
                  fVec17[0] = fTempPerm549;
                  fTempPerm550
                    = fControl[841] - (fControl[835] + fControl[842] * fTemp54);
                  fTempPerm551 = fControl[837]
                    - (fControl[835] + fControl[840] * fTemp54
                       + fTemp56
                         * (fTempPerm550 - fControl[843] - (fControl[837] + fControl[844] * fTemp54)));
                  fTempPerm552
                    = fControl[849] - (fControl[834] + fControl[850] * fTemp54);
                  fTempPerm553 = fControl[845]
                    - (fControl[834] + fControl[848] * fTemp54
                       + fTemp56
                         * (fTempPerm552 - fControl[851] - (fControl[845] + fControl[852] * fTemp54)));
                  fTempPerm554 = fControl[836] + fTemp52 * (fTempPerm551 + fTempPerm553)
                    + fControl[853] * fTemp54 + fTemp56 * (fTempPerm550 + fTempPerm552);
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))))
                {
                  fTempPerm555 = fControl[833] * fTempPerm554;
                }
                if ((iControl[58])) {
                  fTempPerm556 = 2.0f * fTempPerm555;
                  fTempPerm557 = std::min<float>(1.0f, fTempPerm556);
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fTempPerm558 = fTempPerm549 - fVec17[1];
                }
                float fElse265 = fConst0 * fTempPerm558;
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fRec107[0] = ((std::fabs(fTempPerm558) < 0.5f) ? fElse265 : fRec107[1]);
                }
                if ((iControl[58])) {
                  fTempPerm559 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec107[0])))));
                  fTempPerm560 = 1.0f - fTempPerm559;
                }
                if ((iControl[58] | iControl[51])) {
                  fTempPerm561 = float(int(fTempPerm549));
                }
                float fThen266 = fTempPerm561 + -1.0f;
                float fThen267 = ((fTempPerm549 >= 0.0f) ? fTempPerm561 : fThen266);
                if ((iControl[58] | iControl[51])) {
                  fTempPerm562
                    = ((fTempPerm549 == fTempPerm561) ? fTempPerm549 : fThen267);
                  fTempPerm563 = fTempPerm549 - fTempPerm562;
                  fVec18[0] = fTempPerm563;
                  iTempPerm564 = fTempPerm563 < 0.5f;
                  iVec19[0] = iTempPerm564;
                }
                if ((iControl[58])) {
                  iTempPerm565 = (iVec19[1] <= 0) & (iTempPerm564 > 0);
                  fRec112[0] = fRec112[1] * float(1 - iTempPerm565)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm565);
                  fTempPerm566 = fTempPerm559 + 1.0f;
                  fRec111[0] = 0.0f
                    - (fTempPerm560 * fRec111[1] - (fRec112[0] + fRec112[1]))
                      / fTempPerm566;
                  fRec110[0] = 0.0f
                    - (fTempPerm560 * fRec110[1] - (fRec111[0] + fRec111[1]))
                      / fTempPerm566;
                  fRec109[0] = 0.0f
                    - (fTempPerm560 * fRec109[1] - (fRec110[0] + fRec110[1]))
                      / fTempPerm566;
                  fRec108[0] = 0.0f
                    - (fTempPerm560 * fRec108[1] - (fRec109[0] + fRec109[1]))
                      / fTempPerm566;
                  fRec106[0] = 0.0f
                    - (fRec106[1] * fTempPerm560 - (fRec108[0] + fRec108[1]))
                      / fTempPerm566;
                  fTempPerm567 = std::sin(6.28318548f * fTempPerm549)
                    * (fTempPerm557 * (fRec106[0] + -1.0f) + 1.0f);
                  fTempPerm568 = std::max<float>(1.0f, fTempPerm556) + -1.0f;
                  fTempPerm569 = fRec106[0] - fTempPerm567;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm570 = std::fabs(fTempPerm520);
                  fTempPerm571 = fTempPerm570 - float(int(fTempPerm570));
                  fTempPerm572 = fTempPerm522 + float(fTempPerm520 > 0.0f);
                  fTempPerm573 = fTempPerm55
                    + 0.00390625f * fTempPerm515 * std::pow(2.0f, 0.0f - fTempPerm572);
                  fTempPerm574 = fTempPerm573 - fTempPerm71;
                  fTempPerm575 = float(int(fTempPerm574));
                }
                float fThen268 = fTempPerm575 + -1.0f;
                float fThen269 = ((fTempPerm574 >= 0.0f) ? fTempPerm575 : fThen268);
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  iTempPerm576 = int(fTempPerm572);
                  fTempPerm577 = 256.0f
                    * (fTempPerm573
                       - (fTempPerm71 + ((fTempPerm574 == fTempPerm575) ? fTempPerm574 : fThen269)))
                    * (float(iTempPerm576 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm576)))))
                       + float(iTempPerm576 == 0)
                       + float(
                         (iTempPerm576 > 0) * int(std::pow(2.0f, float(iTempPerm576)))));
                  fTempPerm578 = fTempPerm533 + fTempPerm510 + fTempPerm505 + fTempPerm500
                    + fTempPerm577;
                  iTempPerm579 = int(fTempPerm577);
                }
                if (((iControl[58] & iTempPerm22)
                     | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))))
                {
                  fTempPerm580 = fRec113[1]
                    + fTempPerm35 * (fTempPerm578 - (float(iTempPerm579) + fRec114[1]));
                  fTempPerm581 = fTempPerm580 / fTempPerm90;
                  fRec113[0] = 2.0f * fTempPerm581 - fRec113[1];
                  fTempPerm582 = fRec114[1] + (fTempPerm35 * fTempPerm580) / fTempPerm90;
                  fRec114[0] = 2.0f * fTempPerm582 - fRec114[1];
                  fRec115 = fTempPerm582;
                }
                if (((iControl[58] & iTempPerm30)
                     | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))))
                {
                  fTempPerm583
                    = fTempPerm35 * (fTempPerm578 - (float(iTempPerm579) + fRec118[1]));
                  fTempPerm584
                    = (fTempPerm35
                       * ((fRec118[1] + (fTempPerm583 + 0.215215757f * fTempPerm149 * fRec116[1]) / fTempPerm97 + fTempPerm99 * fRec117[1]) / fTempPerm100 - fRec116[1]))
                    / fTempPerm97;
                  fRec116[0] = fRec116[1] + 2.0f * fTempPerm584;
                  fTempPerm585 = fRec116[1] + fTempPerm584;
                  fRec117[0] = fRec117[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm585 - fRec117[1]))
                      / fTempPerm97;
                  fRec118[0] = fRec118[1] + 2.0f * fTempPerm583 / fTempPerm97;
                  fRec119 = fTempPerm585;
                }
                if (((iControl[58] & iTempPerm29)
                     | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))))
                {
                  fTempPerm586 = fTempPerm578
                    - (float(iTempPerm579) + fRec121[1] + fTempPerm89 * fRec122[1]);
                  fTempPerm587 = (fTempPerm35 * fTempPerm586) / fTempPerm90;
                  fTempPerm588 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec122[1] + fTempPerm587));
                  fTempPerm589 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm588);
                  fTempPerm590 = fTempPerm35 * fTempPerm588 * fTempPerm589;
                  fRec120 = fRec121[1] + fTempPerm590;
                  fRec121[0] = fRec121[1] + 2.0f * fTempPerm590;
                  fTempPerm591 = fTempPerm588 * fTempPerm589;
                  fRec122[0] = fTempPerm587 + fTempPerm591;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm592 = fTempPerm578 - float(iTempPerm579);
                  fTempPerm593
                    = (fTempPerm19
                       * (fTempPerm21 * fRec115 + fTempPerm94 * fRec119 + fTempPerm104 * fRec120))
                      / fTempPerm111
                    + fTempPerm113 * fTempPerm592;
                  fVec20[0] = fTempPerm593;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fTempPerm594 = fTempPerm593 - fVec20[1];
                }
                float fElse270 = fConst0 * fTempPerm594;
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fRec124[0] = ((std::fabs(fTempPerm594) < 0.5f) ? fElse270 : fRec124[1]);
                }
                if ((iControl[58])) {
                  fTempPerm595 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec124[0])))));
                  fTempPerm596 = 1.0f - fTempPerm595;
                }
                if ((iControl[58] | iControl[51])) {
                  fTempPerm597 = float(int(fTempPerm593));
                }
                float fThen271 = fTempPerm597 + -1.0f;
                float fThen272 = ((fTempPerm593 >= 0.0f) ? fTempPerm597 : fThen271);
                if ((iControl[58] | iControl[51])) {
                  fTempPerm598
                    = ((fTempPerm593 == fTempPerm597) ? fTempPerm593 : fThen272);
                  fTempPerm599 = fTempPerm593 - fTempPerm598;
                  fVec21[0] = fTempPerm599;
                  iTempPerm600 = fTempPerm599 < 0.5f;
                  iVec22[0] = iTempPerm600;
                }
                if ((iControl[58])) {
                  iTempPerm601 = (iVec22[1] <= 0) & (iTempPerm600 > 0);
                  fRec129[0] = fRec129[1] * float(1 - iTempPerm601)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm601);
                  fTempPerm602 = fTempPerm595 + 1.0f;
                  fRec128[0] = 0.0f
                    - (fTempPerm596 * fRec128[1] - (fRec129[0] + fRec129[1]))
                      / fTempPerm602;
                  fRec127[0] = 0.0f
                    - (fTempPerm596 * fRec127[1] - (fRec128[0] + fRec128[1]))
                      / fTempPerm602;
                  fRec126[0] = 0.0f
                    - (fTempPerm596 * fRec126[1] - (fRec127[0] + fRec127[1]))
                      / fTempPerm602;
                  fRec125[0] = 0.0f
                    - (fTempPerm596 * fRec125[1] - (fRec126[0] + fRec126[1]))
                      / fTempPerm602;
                  fRec123[0] = 0.0f
                    - (fRec123[1] * fTempPerm596 - (fRec125[0] + fRec125[1]))
                      / fTempPerm602;
                  fTempPerm603 = std::sin(6.28318548f * fTempPerm593)
                    * (fTempPerm557 * (fRec123[0] + -1.0f) + 1.0f);
                  fTempPerm604 = fTempPerm567 + fTempPerm568 * fTempPerm569
                    + fTempPerm571
                      * (fTempPerm603 - (fTempPerm567 + fTempPerm568 * (fTempPerm569 - fRec123[0] - fTempPerm603)));
                }
                if ((iControl[57]
                     | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
                  fTempPerm605 = fTempPerm555
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec107[0] - fConst7))));
                }
                if ((iControl[57])) {
                  fTempPerm606 = 0.25f * fTempPerm605;
                  fTempPerm607 = fTempPerm549 + 0.75f - fTempPerm606;
                  fTempPerm608 = float(int(fTempPerm607));
                }
                float fThen273 = fTempPerm608 + -1.0f;
                float fThen274 = ((fTempPerm607 >= 0.0f) ? fTempPerm608 : fThen273);
                if ((iControl[57])) {
                  fTempPerm609
                    = ((fTempPerm607 == fTempPerm608) ? fTempPerm607 : fThen274);
                  fTempPerm610 = 0.75f - (fTempPerm606 + fTempPerm609);
                }
                if ((iControl[57] | (iControl[55] | iControl[53]))) {
                  fTempPerm611 = 1.0f - fTempPerm605;
                }
                if ((iControl[57] | iControl[53])) {
                  fTempPerm612 = 0.5f * fTempPerm611;
                }
                if ((iControl[57])) {
                  fTempPerm613 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm612));
                  fTempPerm614 = 0.5f - fTempPerm613;
                }
                if ((iControl[57] | iControl[54])) {
                  fTempPerm615 = fTempPerm605 + 1.0f;
                }
                if ((iControl[57])) {
                  fTempPerm616 = std::cos(
                    6.28318548f
                    * (fTempPerm549 + std::min<float>(((fTempPerm549 + fTempPerm610) * fTempPerm614) / fTempPerm613, (fTempPerm614 * ((fTempPerm609 + 0.25f * fTempPerm615) - fTempPerm549)) / (1.0f - fTempPerm613)) + fTempPerm610));
                }
                if ((iControl[57]
                     | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
                  fTempPerm617 = fTempPerm555
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec124[0] - fConst7))));
                }
                if ((iControl[57])) {
                  fTempPerm618 = 0.25f * fTempPerm617;
                  fTempPerm619 = fTempPerm593 + 0.75f - fTempPerm618;
                  fTempPerm620 = float(int(fTempPerm619));
                }
                float fThen275 = fTempPerm620 + -1.0f;
                float fThen276 = ((fTempPerm619 >= 0.0f) ? fTempPerm620 : fThen275);
                if ((iControl[57])) {
                  fTempPerm621
                    = ((fTempPerm619 == fTempPerm620) ? fTempPerm619 : fThen276);
                  fTempPerm622 = 0.75f - (fTempPerm618 + fTempPerm621);
                }
                if ((iControl[57] | (iControl[55] | iControl[53]))) {
                  fTempPerm623 = 1.0f - fTempPerm617;
                }
                if ((iControl[57] | iControl[53])) {
                  fTempPerm624 = 0.5f * fTempPerm623;
                }
                if ((iControl[57])) {
                  fTempPerm625 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm624));
                  fTempPerm626 = 0.5f - fTempPerm625;
                }
                if ((iControl[57] | iControl[54])) {
                  fTempPerm627 = fTempPerm617 + 1.0f;
                }
                if ((iControl[57])) {
                  fTempPerm628 = fTempPerm616
                    + fTempPerm571
                      * (std::cos(6.28318548f * (fTempPerm593 + std::min<float>(((fTempPerm593 + fTempPerm622) * fTempPerm626) / fTempPerm625, (fTempPerm626 * ((fTempPerm621 + 0.25f * fTempPerm627) - fTempPerm593)) / (1.0f - fTempPerm625)) + fTempPerm622)) - fTempPerm616);
                }
                if ((iControl[56])) {
                  fTempPerm629 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm605));
                  fTempPerm630 = 1.0f - fTempPerm629;
                  fTempPerm631 = 0.25f * fTempPerm630;
                  fTempPerm632 = fTempPerm549 - fTempPerm631;
                  fTempPerm633 = float(int(fTempPerm632));
                }
                float fThen277 = fTempPerm633 + -1.0f;
                float fThen278 = ((fTempPerm632 >= 0.0f) ? fTempPerm633 : fThen277);
                if ((iControl[56])) {
                  fTempPerm634 = fTempPerm549
                    - (fTempPerm631
                       + ((fTempPerm632 == fTempPerm633) ? fTempPerm632 : fThen278));
                  fTempPerm635 = 2.0f * fTempPerm634;
                  fTempPerm636 = fTempPerm635 + 1.0f;
                  fTempPerm637 = float(int(fTempPerm636));
                }
                float fThen279 = fTempPerm637 + -1.0f;
                float fThen280 = ((fTempPerm636 >= 0.0f) ? fTempPerm637 : fThen279);
                if ((iControl[56])) {
                  fTempPerm638
                    = ((fTempPerm636 == fTempPerm637) ? fTempPerm636 : fThen280);
                  fTempPerm639 = std::cos(
                    3.14159274f
                    * (float(fTempPerm634 >= 0.5f) + fTempPerm635 + 1.0f - (fTempPerm638 + std::min<float>(fTempPerm635 + 1.0f - fTempPerm638, (fTempPerm629 * (fTempPerm638 - fTempPerm635)) / fTempPerm630))));
                  fTempPerm640 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm617));
                  fTempPerm641 = 1.0f - fTempPerm640;
                  fTempPerm642 = 0.25f * fTempPerm641;
                  fTempPerm643 = fTempPerm593 - fTempPerm642;
                  fTempPerm644 = float(int(fTempPerm643));
                }
                float fThen281 = fTempPerm644 + -1.0f;
                float fThen282 = ((fTempPerm643 >= 0.0f) ? fTempPerm644 : fThen281);
                if ((iControl[56])) {
                  fTempPerm645 = fTempPerm593
                    - (fTempPerm642
                       + ((fTempPerm643 == fTempPerm644) ? fTempPerm643 : fThen282));
                  fTempPerm646 = 2.0f * fTempPerm645;
                  fTempPerm647 = fTempPerm646 + 1.0f;
                  fTempPerm648 = float(int(fTempPerm647));
                }
                float fThen283 = fTempPerm648 + -1.0f;
                float fThen284 = ((fTempPerm647 >= 0.0f) ? fTempPerm648 : fThen283);
                if ((iControl[56])) {
                  fTempPerm649
                    = ((fTempPerm647 == fTempPerm648) ? fTempPerm647 : fThen284);
                  fTempPerm650 = fTempPerm639
                    + fTempPerm571
                      * (std::cos(3.14159274f * (float(fTempPerm645 >= 0.5f) + fTempPerm646 + 1.0f - (fTempPerm649 + std::min<float>(fTempPerm646 + 1.0f - fTempPerm649, (fTempPerm640 * (fTempPerm649 - fTempPerm646)) / fTempPerm641)))) - fTempPerm639);
                }
                if ((iControl[55])) {
                  fTempPerm651 = 0.25f * fTempPerm611;
                  fTempPerm652 = fTempPerm549 - fTempPerm651;
                  fTempPerm653 = float(int(fTempPerm652));
                }
                float fThen285 = fTempPerm653 + -1.0f;
                float fThen286 = ((fTempPerm652 >= 0.0f) ? fTempPerm653 : fThen285);
                if ((iControl[55])) {
                  fTempPerm654 = fTempPerm651
                    + ((fTempPerm652 == fTempPerm653) ? fTempPerm652 : fThen286);
                }
                if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
                  fTempPerm655 = 1.0f - fTempPerm549;
                }
                if ((iControl[55])) {
                  fTempPerm656
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm605));
                  fTempPerm657 = std::cos(
                    6.28318548f
                    * (fTempPerm549 - (fTempPerm654 + std::min<float>(fTempPerm549 - fTempPerm654, ((fTempPerm654 + fTempPerm655) * fTempPerm656) / (1.0f - fTempPerm656)))));
                  fTempPerm658 = 0.25f * fTempPerm623;
                  fTempPerm659 = fTempPerm593 - fTempPerm658;
                  fTempPerm660 = float(int(fTempPerm659));
                }
                float fThen287 = fTempPerm660 + -1.0f;
                float fThen288 = ((fTempPerm659 >= 0.0f) ? fTempPerm660 : fThen287);
                if ((iControl[55])) {
                  fTempPerm661 = fTempPerm658
                    + ((fTempPerm659 == fTempPerm660) ? fTempPerm659 : fThen288);
                }
                if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
                  fTempPerm662 = 1.0f - fTempPerm593;
                }
                if ((iControl[55])) {
                  fTempPerm663
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm617));
                  fTempPerm664 = fTempPerm657
                    + fTempPerm571
                      * (std::cos(6.28318548f * (fTempPerm593 - (fTempPerm661 + std::min<float>(fTempPerm593 - fTempPerm661, ((fTempPerm661 + fTempPerm662) * fTempPerm663) / (1.0f - fTempPerm663))))) - fTempPerm657);
                }
                if ((iControl[54])) {
                  fTempPerm665 = 0.125f * fTempPerm615;
                  fTempPerm666 = fTempPerm549 - fTempPerm665;
                  fTempPerm667 = float(int(fTempPerm666));
                }
                float fThen289 = fTempPerm667 + -1.0f;
                float fThen290 = ((fTempPerm666 >= 0.0f) ? fTempPerm667 : fThen289);
                if ((iControl[54])) {
                  fTempPerm668 = fTempPerm665
                    + ((fTempPerm666 == fTempPerm667) ? fTempPerm666 : fThen290);
                  fTempPerm669
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm605));
                  fTempPerm670 = 0.49000001f * fTempPerm669;
                  fTempPerm671 = std::cos(
                    12.566371f
                    * ((fTempPerm549 + std::min<float>(0.49000001f * ((fTempPerm549 - fTempPerm668) * fTempPerm669) / (0.5f - fTempPerm670), 0.49000001f * (fTempPerm669 * (fTempPerm668 + fTempPerm655)) / (fTempPerm670 + 0.5f))) - fTempPerm668));
                  fTempPerm672 = 0.125f * fTempPerm627;
                  fTempPerm673 = fTempPerm593 - fTempPerm672;
                  fTempPerm674 = float(int(fTempPerm673));
                }
                float fThen291 = fTempPerm674 + -1.0f;
                float fThen292 = ((fTempPerm673 >= 0.0f) ? fTempPerm674 : fThen291);
                if ((iControl[54])) {
                  fTempPerm675 = fTempPerm672
                    + ((fTempPerm673 == fTempPerm674) ? fTempPerm673 : fThen292);
                  fTempPerm676
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm617));
                  fTempPerm677 = 0.49000001f * fTempPerm676;
                  fTempPerm678 = fTempPerm671 + fTempPerm571 * (std::cos(12.566371f * ((fTempPerm593 + std::min<float>(0.49000001f * ((fTempPerm593 - fTempPerm675) * fTempPerm676) / (0.5f - fTempPerm677), 0.49000001f * (fTempPerm676 * (fTempPerm675 + fTempPerm662)) / (fTempPerm677 + 0.5f))) - fTempPerm675)) - fTempPerm671);
                }
                if ((iControl[53])) {
                  fTempPerm679
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm605) + 1.0f);
                  fTempPerm680 = fTempPerm549 - fTempPerm679;
                  fTempPerm681 = float(int(fTempPerm680));
                }
                float fThen293 = fTempPerm681 + -1.0f;
                float fThen294 = ((fTempPerm680 >= 0.0f) ? fTempPerm681 : fThen293);
                if ((iControl[53])) {
                  fTempPerm682 = fTempPerm679
                    + ((fTempPerm680 == fTempPerm681) ? fTempPerm680 : fThen294);
                  fTempPerm683 = fTempPerm549 - fTempPerm682;
                }
                float fThen295 = 0.5f
                  * ((fTempPerm549 + -0.5f - fTempPerm682)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm612))
                     + 1.0f);
                if ((iControl[53])) {
                  fTempPerm684 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm683 < 0.5f) ? fTempPerm683 : fThen295)));
                  fTempPerm685
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm617) + 1.0f);
                  fTempPerm686 = fTempPerm593 - fTempPerm685;
                  fTempPerm687 = float(int(fTempPerm686));
                }
                float fThen296 = fTempPerm687 + -1.0f;
                float fThen297 = ((fTempPerm686 >= 0.0f) ? fTempPerm687 : fThen296);
                if ((iControl[53])) {
                  fTempPerm688 = fTempPerm685
                    + ((fTempPerm686 == fTempPerm687) ? fTempPerm686 : fThen297);
                  fTempPerm689 = fTempPerm593 - fTempPerm688;
                }
                float fThen298 = 0.5f
                  * ((fTempPerm593 + -0.5f - fTempPerm688)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm624))
                     + 1.0f);
                if ((iControl[53])) {
                  fTempPerm690 = fTempPerm684
                    + fTempPerm571
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm689 < 0.5f) ? fTempPerm689 : fThen298))) - fTempPerm684);
                }
                if ((iControl[52] | iControl[50])) {
                  fTempPerm691 = fTempPerm549
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec107[0] * fControl[833] * fTempPerm554))
                                     / fRec107[0]);
                }
                if ((iControl[52])) {
                  fTempPerm692 = fTempPerm691 + 1.0f;
                  fTempPerm693 = float(int(fTempPerm692));
                }
                float fThen299 = fTempPerm693 + -1.0f;
                float fThen300 = ((fTempPerm692 >= 0.0f) ? fTempPerm693 : fThen299);
                if ((iControl[52])) {
                  fTempPerm694 = (0.0f - fTempPerm655)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm691 + 1.0f - ((fTempPerm692 == fTempPerm693) ? fTempPerm692 : fThen300))));
                }
                if ((iControl[52] | iControl[50])) {
                  fTempPerm695 = fTempPerm593
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec124[0] * fControl[833] * fTempPerm554))
                                     / fRec124[0]);
                }
                if ((iControl[52])) {
                  fTempPerm696 = fTempPerm695 + 1.0f;
                  fTempPerm697 = float(int(fTempPerm696));
                }
                float fThen301 = fTempPerm697 + -1.0f;
                float fThen302 = ((fTempPerm696 >= 0.0f) ? fTempPerm697 : fThen301);
                if ((iControl[52])) {
                  fTempPerm698 = fTempPerm694
                    + fTempPerm571
                      * ((0.0f - fTempPerm662) * (1.0f - std::cos(6.28318548f * (fTempPerm695 + 1.0f - ((fTempPerm696 == fTempPerm697) ? fTempPerm696 : fThen302)))) - fTempPerm694)
                    + 1.0f;
                }
                float fThen303 = 2.0f * (1.0f - fTempPerm563);
                float fElse303 = 2.0f * fTempPerm563;
                if ((iControl[51])) {
                  fTempPerm699 = fTempPerm549 - (fTempPerm562 + fVec18[1]);
                }
                float fElse304 = fConst0 * fTempPerm699;
                if ((iControl[51])) {
                  fRec130[0] = ((std::fabs(fTempPerm699) < 0.5f) ? fElse304 : fRec130[1]);
                  fTempPerm700 = fTempPerm563
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec130[0] * fControl[833] * fTempPerm554))
                                     / fRec130[0]);
                  fTempPerm701 = fTempPerm700 + 1.0f;
                  fTempPerm702 = float(int(fTempPerm701));
                }
                float fThen305 = fTempPerm702 + -1.0f;
                float fThen306 = ((fTempPerm701 >= 0.0f) ? fTempPerm702 : fThen305);
                if ((iControl[51])) {
                  fTempPerm703 = ((iTempPerm564) ? fElse303 : fThen303)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm700 + 1.0f - ((fTempPerm701 == fTempPerm702) ? fTempPerm701 : fThen306)))
                       + 1.0f);
                }
                float fThen307 = 2.0f * (1.0f - fTempPerm599);
                float fElse307 = 2.0f * fTempPerm599;
                if ((iControl[51])) {
                  fTempPerm704 = fTempPerm593 - (fTempPerm598 + fVec21[1]);
                }
                float fElse308 = fConst0 * fTempPerm704;
                if ((iControl[51])) {
                  fRec131[0] = ((std::fabs(fTempPerm704) < 0.5f) ? fElse308 : fRec131[1]);
                  fTempPerm705 = fTempPerm599
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec131[0] * fControl[833] * fTempPerm554))
                                     / fRec131[0]);
                  fTempPerm706 = fTempPerm705 + 1.0f;
                  fTempPerm707 = float(int(fTempPerm706));
                }
                float fThen309 = fTempPerm707 + -1.0f;
                float fThen310 = ((fTempPerm706 >= 0.0f) ? fTempPerm707 : fThen309);
                if ((iControl[51])) {
                  fTempPerm708 = fTempPerm703
                    + fTempPerm571
                      * (((iTempPerm600) ? fElse307 : fThen307) * (std::cos(6.28318548f * (fTempPerm705 + 1.0f - ((fTempPerm706 == fTempPerm707) ? fTempPerm706 : fThen310))) + 1.0f) - fTempPerm703)
                    + -1.0f;
                }
                if ((iControl[50])) {
                  fTempPerm709 = float(int(fTempPerm691));
                }
                float fThen311 = fTempPerm709 + -1.0f;
                float fThen312 = ((fTempPerm691 >= 0.0f) ? fTempPerm709 : fThen311);
                if ((iControl[50])) {
                  fTempPerm710
                    = std::min<float>(1.0f, 2.0f * fTempPerm655)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm691 - ((fTempPerm691 == fTempPerm709) ? fTempPerm691 : fThen312)));
                  fTempPerm711 = float(int(fTempPerm695));
                }
                float fThen313 = fTempPerm711 + -1.0f;
                float fThen314 = ((fTempPerm695 >= 0.0f) ? fTempPerm711 : fThen313);
                if ((iControl[50])) {
                  fTempPerm712 = fTempPerm710
                    + fTempPerm571
                      * (std::min<float>(1.0f, 2.0f * fTempPerm662) * std::sin(6.28318548f * (fTempPerm695 - ((fTempPerm695 == fTempPerm711) ? fTempPerm695 : fThen314))) - fTempPerm710);
                }
                fRec4[0] = fControl[311] * fTempPerm604 + fControl[310] * fTempPerm628
                  + fControl[309] * fTempPerm650 + fControl[308] * fTempPerm664
                  + fControl[307] * fTempPerm678 + fControl[306] * fTempPerm690
                  + fControl[305] * fTempPerm698 + fControl[304] * fTempPerm708
                  + fControl[303] * fTempPerm712;
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm713
                    = fControl[861] - (fControl[855] + fControl[862] * fTemp54);
                  fTempPerm714 = fControl[857]
                    - (fControl[855] + fControl[860] * fTemp54
                       + fTemp56
                         * (fTempPerm713 - fControl[863] - (fControl[857] + fControl[864] * fTemp54)));
                  fTempPerm715
                    = fControl[869] - (fControl[854] + fControl[870] * fTemp54);
                  fTempPerm716 = fControl[865]
                    - (fControl[854] + fControl[868] * fTemp54
                       + fTemp56
                         * (fTempPerm715 - fControl[871] - (fControl[865] + fControl[872] * fTemp54)));
                  fTempPerm717 = fRec5[1]
                    * (fControl[856] + fTemp52 * (fTempPerm714 + fTempPerm716)
                       + fControl[873] * fTemp54
                       + fTemp56 * (fTempPerm713 + fTempPerm715));
                  fTempPerm718
                    = fControl[881] - (fControl[875] + fControl[882] * fTemp54);
                  fTempPerm719 = fControl[877]
                    - (fControl[875] + fControl[880] * fTemp54
                       + fTemp56
                         * (fTempPerm718 - fControl[883] - (fControl[877] + fControl[884] * fTemp54)));
                  fTempPerm720
                    = fControl[889] - (fControl[874] + fControl[890] * fTemp54);
                  fTempPerm721 = fControl[885]
                    - (fControl[874] + fControl[888] * fTemp54
                       + fTemp56
                         * (fTempPerm720 - fControl[891] - (fControl[885] + fControl[892] * fTemp54)));
                  fTempPerm722 = fRec4[1]
                    * (fControl[876] + fTemp52 * (fTempPerm719 + fTempPerm721)
                       + fControl[893] * fTemp54
                       + fTemp56 * (fTempPerm718 + fTempPerm720));
                  fTempPerm723
                    = fControl[901] - (fControl[895] + fControl[902] * fTemp54);
                  fTempPerm724 = fControl[897]
                    - (fControl[895] + fControl[900] * fTemp54
                       + fTemp56
                         * (fTempPerm723 - fControl[903] - (fControl[897] + fControl[904] * fTemp54)));
                  fTempPerm725
                    = fControl[909] - (fControl[894] + fControl[910] * fTemp54);
                  fTempPerm726 = fControl[905]
                    - (fControl[894] + fControl[908] * fTemp54
                       + fTemp56
                         * (fTempPerm725 - fControl[911] - (fControl[905] + fControl[912] * fTemp54)));
                  fTempPerm727 = fRec3[1]
                    * (fControl[896] + fTemp52 * (fTempPerm724 + fTempPerm726)
                       + fControl[913] * fTemp54
                       + fTemp56 * (fTempPerm723 + fTempPerm725));
                  fTempPerm728
                    = fControl[921] - (fControl[915] + fControl[922] * fTemp54);
                  fTempPerm729 = fControl[917]
                    - (fControl[915] + fControl[920] * fTemp54
                       + fTemp56
                         * (fTempPerm728 - fControl[923] - (fControl[917] + fControl[924] * fTemp54)));
                  fTempPerm730
                    = fControl[929] - (fControl[914] + fControl[930] * fTemp54);
                  fTempPerm731 = fControl[925]
                    - (fControl[914] + fControl[928] * fTemp54
                       + fTemp56
                         * (fTempPerm730 - fControl[931] - (fControl[925] + fControl[932] * fTemp54)));
                  fTempPerm732 = fControl[916] + fTemp52 * (fTempPerm729 + fTempPerm731)
                    + fControl[933] * fTemp54 + fTemp56 * (fTempPerm728 + fTempPerm730);
                  fTempPerm733
                    = fControl[941] - (fControl[935] + fControl[942] * fTemp54);
                  fTempPerm734 = fControl[937]
                    - (fControl[935] + fControl[940] * fTemp54
                       + fTemp56
                         * (fTempPerm733 - fControl[943] - (fControl[937] + fControl[944] * fTemp54)));
                  fTempPerm735
                    = fControl[949] - (fControl[934] + fControl[950] * fTemp54);
                  fTempPerm736 = fControl[945]
                    - (fControl[934] + fControl[948] * fTemp54
                       + fTemp56
                         * (fTempPerm735 - fControl[951] - (fControl[945] + fControl[952] * fTemp54)));
                  fTempPerm737 = fControl[936] + fTemp52 * (fTempPerm734 + fTempPerm736)
                    + fControl[953] * fTemp54 + fTemp56 * (fTempPerm733 + fTempPerm735);
                  fTempPerm738 = float(int(fTempPerm737));
                }
                float fThen315 = fTempPerm738 + -1.0f;
                float fThen316 = ((fTempPerm737 >= 0.0f) ? fTempPerm738 : fThen315);
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm739
                    = ((fTempPerm737 == fTempPerm738) ? fTempPerm737 : fThen316);
                  fTempPerm740 = fTempPerm739
                    + float((fTempPerm737 < 0.0f) & (fTempPerm737 != fTempPerm739));
                  fTempPerm741 = fTempPerm55
                    + 0.00390625f * fTempPerm732 * std::pow(2.0f, 0.0f - fTempPerm740);
                  fTempPerm742 = fTempPerm741 - fTempPerm71;
                  fTempPerm743 = float(int(fTempPerm742));
                }
                float fThen317 = fTempPerm743 + -1.0f;
                float fThen318 = ((fTempPerm742 >= 0.0f) ? fTempPerm743 : fThen317);
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  iTempPerm744 = int(fTempPerm740);
                  fTempPerm745 = 256.0f
                    * (fTempPerm741
                       - (fTempPerm71 + ((fTempPerm742 == fTempPerm743) ? fTempPerm742 : fThen318)))
                    * (float(iTempPerm744 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm744)))))
                       + float(iTempPerm744 == 0)
                       + float(
                         (iTempPerm744 > 0) * int(std::pow(2.0f, float(iTempPerm744)))));
                  fTempPerm746
                    = fControl[961] - (fControl[955] + fControl[962] * fTemp54);
                  fTempPerm747 = fControl[957]
                    - (fControl[955] + fControl[960] * fTemp54
                       + fTemp56
                         * (fTempPerm746 - fControl[963] - (fControl[957] + fControl[964] * fTemp54)));
                  fTempPerm748
                    = fControl[969] - (fControl[954] + fControl[970] * fTemp54);
                  fTempPerm749 = fControl[965]
                    - (fControl[954] + fControl[968] * fTemp54
                       + fTemp56
                         * (fTempPerm748 - fControl[971] - (fControl[965] + fControl[972] * fTemp54)));
                  fTempPerm750 = fRec2[1]
                    * (fControl[956] + fTemp52 * (fTempPerm747 + fTempPerm749)
                       + fControl[973] * fTemp54
                       + fTemp56 * (fTempPerm746 + fTempPerm748));
                  fTempPerm751 = fTempPerm717 + fTempPerm722 + fTempPerm727 + fTempPerm745
                    + fTempPerm750;
                  iTempPerm752 = int(fTempPerm745);
                }
                if (((iControl[49] & iTempPerm22)
                     | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))))
                {
                  fTempPerm753 = fRec132[1]
                    + fTempPerm35 * (fTempPerm751 - (float(iTempPerm752) + fRec133[1]));
                  fTempPerm754 = fTempPerm753 / fTempPerm90;
                  fRec132[0] = 2.0f * fTempPerm754 - fRec132[1];
                  fTempPerm755 = fRec133[1] + (fTempPerm35 * fTempPerm753) / fTempPerm90;
                  fRec133[0] = 2.0f * fTempPerm755 - fRec133[1];
                  fRec134 = fTempPerm755;
                }
                if (((iControl[49] & iTempPerm30)
                     | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))))
                {
                  fTempPerm756
                    = fTempPerm35 * (fTempPerm751 - (float(iTempPerm752) + fRec137[1]));
                  fTempPerm757
                    = (fTempPerm35
                       * (((fTempPerm756 + 0.215215757f * fTempPerm149 * fRec135[1]) / fTempPerm97 + fRec137[1] + fTempPerm99 * fRec136[1]) / fTempPerm100 - fRec135[1]))
                    / fTempPerm97;
                  fRec135[0] = fRec135[1] + 2.0f * fTempPerm757;
                  fTempPerm758 = fRec135[1] + fTempPerm757;
                  fRec136[0] = fRec136[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm758 - fRec136[1]))
                      / fTempPerm97;
                  fRec137[0] = fRec137[1] + 2.0f * fTempPerm756 / fTempPerm97;
                  fRec138 = fTempPerm758;
                }
                if (((iControl[49] & iTempPerm29)
                     | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))))
                {
                  fTempPerm759 = fTempPerm751
                    - (float(iTempPerm752) + fRec140[1] + fTempPerm89 * fRec141[1]);
                  fTempPerm760 = (fTempPerm35 * fTempPerm759) / fTempPerm90;
                  fTempPerm761 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec141[1] + fTempPerm760));
                  fTempPerm762 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm761);
                  fTempPerm763 = fTempPerm35 * fTempPerm761 * fTempPerm762;
                  fRec139 = fRec140[1] + fTempPerm763;
                  fRec140[0] = fRec140[1] + 2.0f * fTempPerm763;
                  fTempPerm764 = fTempPerm761 * fTempPerm762;
                  fRec141[0] = fTempPerm760 + fTempPerm764;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm765 = fTempPerm751 - float(iTempPerm752);
                  fTempPerm766
                    = (fTempPerm19
                       * (fTempPerm21 * fRec134 + fTempPerm94 * fRec138 + fTempPerm104 * fRec139))
                      / fTempPerm111
                    + fTempPerm113 * fTempPerm765;
                  fVec23[0] = fTempPerm766;
                  fTempPerm767
                    = fControl[982] - (fControl[976] + fControl[983] * fTemp54);
                  fTempPerm768 = fControl[978]
                    - (fControl[976] + fControl[981] * fTemp54
                       + fTemp56
                         * (fTempPerm767 - fControl[984] - (fControl[978] + fControl[985] * fTemp54)));
                  fTempPerm769
                    = fControl[990] - (fControl[975] + fControl[991] * fTemp54);
                  fTempPerm770 = fControl[986]
                    - (fControl[975] + fControl[989] * fTemp54
                       + fTemp56
                         * (fTempPerm769 - fControl[992] - (fControl[986] + fControl[993] * fTemp54)));
                  fTempPerm771 = fControl[977] + fTemp52 * (fTempPerm768 + fTempPerm770)
                    + fControl[994] * fTemp54 + fTemp56 * (fTempPerm767 + fTempPerm769);
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))))
                {
                  fTempPerm772 = fControl[974] * fTempPerm771;
                }
                if ((iControl[49])) {
                  fTempPerm773 = 2.0f * fTempPerm772;
                  fTempPerm774 = std::min<float>(1.0f, fTempPerm773);
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fTempPerm775 = fTempPerm766 - fVec23[1];
                }
                float fElse320 = fConst0 * fTempPerm775;
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fRec143[0] = ((std::fabs(fTempPerm775) < 0.5f) ? fElse320 : fRec143[1]);
                }
                if ((iControl[49])) {
                  fTempPerm776 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec143[0])))));
                  fTempPerm777 = 1.0f - fTempPerm776;
                }
                if ((iControl[49] | iControl[42])) {
                  fTempPerm778 = float(int(fTempPerm766));
                }
                float fThen321 = fTempPerm778 + -1.0f;
                float fThen322 = ((fTempPerm766 >= 0.0f) ? fTempPerm778 : fThen321);
                if ((iControl[49] | iControl[42])) {
                  fTempPerm779
                    = ((fTempPerm766 == fTempPerm778) ? fTempPerm766 : fThen322);
                  fTempPerm780 = fTempPerm766 - fTempPerm779;
                  fVec24[0] = fTempPerm780;
                  iTempPerm781 = fTempPerm780 < 0.5f;
                  iVec25[0] = iTempPerm781;
                }
                if ((iControl[49])) {
                  iTempPerm782 = (iVec25[1] <= 0) & (iTempPerm781 > 0);
                  fRec148[0] = fRec148[1] * float(1 - iTempPerm782)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm782);
                  fTempPerm783 = fTempPerm776 + 1.0f;
                  fRec147[0] = 0.0f
                    - (fTempPerm777 * fRec147[1] - (fRec148[0] + fRec148[1]))
                      / fTempPerm783;
                  fRec146[0] = 0.0f
                    - (fTempPerm777 * fRec146[1] - (fRec147[0] + fRec147[1]))
                      / fTempPerm783;
                  fRec145[0] = 0.0f
                    - (fTempPerm777 * fRec145[1] - (fRec146[0] + fRec146[1]))
                      / fTempPerm783;
                  fRec144[0] = 0.0f
                    - (fTempPerm777 * fRec144[1] - (fRec145[0] + fRec145[1]))
                      / fTempPerm783;
                  fRec142[0] = 0.0f
                    - (fRec142[1] * fTempPerm777 - (fRec144[0] + fRec144[1]))
                      / fTempPerm783;
                  fTempPerm784 = std::sin(6.28318548f * fTempPerm766)
                    * (fTempPerm774 * (fRec142[0] + -1.0f) + 1.0f);
                  fTempPerm785 = std::max<float>(1.0f, fTempPerm773) + -1.0f;
                  fTempPerm786 = fRec142[0] - fTempPerm784;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm787 = std::fabs(fTempPerm737);
                  fTempPerm788 = fTempPerm787 - float(int(fTempPerm787));
                  fTempPerm789 = fTempPerm739 + float(fTempPerm737 > 0.0f);
                  fTempPerm790 = fTempPerm55
                    + 0.00390625f * fTempPerm732 * std::pow(2.0f, 0.0f - fTempPerm789);
                  fTempPerm791 = fTempPerm790 - fTempPerm71;
                  fTempPerm792 = float(int(fTempPerm791));
                }
                float fThen323 = fTempPerm792 + -1.0f;
                float fThen324 = ((fTempPerm791 >= 0.0f) ? fTempPerm792 : fThen323);
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  iTempPerm793 = int(fTempPerm789);
                  fTempPerm794 = 256.0f
                    * (fTempPerm790
                       - (fTempPerm71 + ((fTempPerm791 == fTempPerm792) ? fTempPerm791 : fThen324)))
                    * (float(iTempPerm793 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm793)))))
                       + float(iTempPerm793 == 0)
                       + float(
                         (iTempPerm793 > 0) * int(std::pow(2.0f, float(iTempPerm793)))));
                  fTempPerm795 = fTempPerm750 + fTempPerm727 + fTempPerm722 + fTempPerm717
                    + fTempPerm794;
                  iTempPerm796 = int(fTempPerm794);
                }
                if (((iControl[49] & iTempPerm22)
                     | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))))
                {
                  fTempPerm797 = fRec149[1]
                    + fTempPerm35 * (fTempPerm795 - (float(iTempPerm796) + fRec150[1]));
                  fTempPerm798 = fTempPerm797 / fTempPerm90;
                  fRec149[0] = 2.0f * fTempPerm798 - fRec149[1];
                  fTempPerm799 = fRec150[1] + (fTempPerm35 * fTempPerm797) / fTempPerm90;
                  fRec150[0] = 2.0f * fTempPerm799 - fRec150[1];
                  fRec151 = fTempPerm799;
                }
                if (((iControl[49] & iTempPerm30)
                     | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))))
                {
                  fTempPerm800
                    = fTempPerm35 * (fTempPerm795 - (float(iTempPerm796) + fRec154[1]));
                  fTempPerm801
                    = (fTempPerm35
                       * ((fRec154[1] + (fTempPerm800 + 0.215215757f * fTempPerm149 * fRec152[1]) / fTempPerm97 + fTempPerm99 * fRec153[1]) / fTempPerm100 - fRec152[1]))
                    / fTempPerm97;
                  fRec152[0] = fRec152[1] + 2.0f * fTempPerm801;
                  fTempPerm802 = fRec152[1] + fTempPerm801;
                  fRec153[0] = fRec153[1]
                    + 2.0f
                      * (fTempPerm35 * (0.215215757f * fTempPerm96 * fTempPerm802 - fRec153[1]))
                      / fTempPerm97;
                  fRec154[0] = fRec154[1] + 2.0f * fTempPerm800 / fTempPerm97;
                  fRec155 = fTempPerm802;
                }
                if (((iControl[49] & iTempPerm29)
                     | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))))
                {
                  fTempPerm803 = fTempPerm795
                    - (float(iTempPerm796) + fRec157[1] + fTempPerm89 * fRec158[1]);
                  fTempPerm804 = (fTempPerm35 * fTempPerm803) / fTempPerm90;
                  fTempPerm805 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec158[1] + fTempPerm804));
                  fTempPerm806 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm805);
                  fTempPerm807 = fTempPerm35 * fTempPerm805 * fTempPerm806;
                  fRec156 = fRec157[1] + fTempPerm807;
                  fRec157[0] = fRec157[1] + 2.0f * fTempPerm807;
                  fTempPerm808 = fTempPerm805 * fTempPerm806;
                  fRec158[0] = fTempPerm804 + fTempPerm808;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm809 = fTempPerm795 - float(iTempPerm796);
                  fTempPerm810
                    = (fTempPerm19
                       * (fTempPerm21 * fRec151 + fTempPerm94 * fRec155 + fTempPerm104 * fRec156))
                      / fTempPerm111
                    + fTempPerm113 * fTempPerm809;
                  fVec26[0] = fTempPerm810;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fTempPerm811 = fTempPerm810 - fVec26[1];
                }
                float fElse325 = fConst0 * fTempPerm811;
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fRec160[0] = ((std::fabs(fTempPerm811) < 0.5f) ? fElse325 : fRec160[1]);
                }
                if ((iControl[49])) {
                  fTempPerm812 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec160[0])))));
                  fTempPerm813 = 1.0f - fTempPerm812;
                }
                if ((iControl[49] | iControl[42])) {
                  fTempPerm814 = float(int(fTempPerm810));
                }
                float fThen326 = fTempPerm814 + -1.0f;
                float fThen327 = ((fTempPerm810 >= 0.0f) ? fTempPerm814 : fThen326);
                if ((iControl[49] | iControl[42])) {
                  fTempPerm815
                    = ((fTempPerm810 == fTempPerm814) ? fTempPerm810 : fThen327);
                  fTempPerm816 = fTempPerm810 - fTempPerm815;
                  fVec27[0] = fTempPerm816;
                  iTempPerm817 = fTempPerm816 < 0.5f;
                  iVec28[0] = iTempPerm817;
                }
                if ((iControl[49])) {
                  iTempPerm818 = (iVec28[1] <= 0) & (iTempPerm817 > 0);
                  fRec165[0] = fRec165[1] * float(1 - iTempPerm818)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm818);
                  fTempPerm819 = fTempPerm812 + 1.0f;
                  fRec164[0] = 0.0f
                    - (fTempPerm813 * fRec164[1] - (fRec165[0] + fRec165[1]))
                      / fTempPerm819;
                  fRec163[0] = 0.0f
                    - (fTempPerm813 * fRec163[1] - (fRec164[0] + fRec164[1]))
                      / fTempPerm819;
                  fRec162[0] = 0.0f
                    - (fTempPerm813 * fRec162[1] - (fRec163[0] + fRec163[1]))
                      / fTempPerm819;
                  fRec161[0] = 0.0f
                    - (fTempPerm813 * fRec161[1] - (fRec162[0] + fRec162[1]))
                      / fTempPerm819;
                  fRec159[0] = 0.0f
                    - (fRec159[1] * fTempPerm813 - (fRec161[0] + fRec161[1]))
                      / fTempPerm819;
                  fTempPerm820 = std::sin(6.28318548f * fTempPerm810)
                    * (fTempPerm774 * (fRec159[0] + -1.0f) + 1.0f);
                  fTempPerm821 = fTempPerm784 + fTempPerm785 * fTempPerm786
                    + fTempPerm788
                      * (fTempPerm820 - (fTempPerm784 + fTempPerm785 * (fTempPerm786 - fRec159[0] - fTempPerm820)));
                }
                if ((iControl[48]
                     | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
                  fTempPerm822 = fTempPerm772
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec143[0] - fConst7))));
                }
                if ((iControl[48])) {
                  fTempPerm823 = 0.25f * fTempPerm822;
                  fTempPerm824 = fTempPerm766 + 0.75f - fTempPerm823;
                  fTempPerm825 = float(int(fTempPerm824));
                }
                float fThen328 = fTempPerm825 + -1.0f;
                float fThen329 = ((fTempPerm824 >= 0.0f) ? fTempPerm825 : fThen328);
                if ((iControl[48])) {
                  fTempPerm826
                    = ((fTempPerm824 == fTempPerm825) ? fTempPerm824 : fThen329);
                  fTempPerm827 = 0.75f - (fTempPerm823 + fTempPerm826);
                }
                if ((iControl[48] | (iControl[46] | iControl[44]))) {
                  fTempPerm828 = 1.0f - fTempPerm822;
                }
                if ((iControl[48] | iControl[44])) {
                  fTempPerm829 = 0.5f * fTempPerm828;
                }
                if ((iControl[48])) {
                  fTempPerm830 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm829));
                  fTempPerm831 = 0.5f - fTempPerm830;
                }
                if ((iControl[48] | iControl[45])) {
                  fTempPerm832 = fTempPerm822 + 1.0f;
                }
                if ((iControl[48])) {
                  fTempPerm833 = std::cos(
                    6.28318548f
                    * (fTempPerm766 + std::min<float>(((fTempPerm766 + fTempPerm827) * fTempPerm831) / fTempPerm830, (fTempPerm831 * ((fTempPerm826 + 0.25f * fTempPerm832) - fTempPerm766)) / (1.0f - fTempPerm830)) + fTempPerm827));
                }
                if ((iControl[48]
                     | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
                  fTempPerm834 = fTempPerm772
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec160[0] - fConst7))));
                }
                if ((iControl[48])) {
                  fTempPerm835 = 0.25f * fTempPerm834;
                  fTempPerm836 = fTempPerm810 + 0.75f - fTempPerm835;
                  fTempPerm837 = float(int(fTempPerm836));
                }
                float fThen330 = fTempPerm837 + -1.0f;
                float fThen331 = ((fTempPerm836 >= 0.0f) ? fTempPerm837 : fThen330);
                if ((iControl[48])) {
                  fTempPerm838
                    = ((fTempPerm836 == fTempPerm837) ? fTempPerm836 : fThen331);
                  fTempPerm839 = 0.75f - (fTempPerm835 + fTempPerm838);
                }
                if ((iControl[48] | (iControl[46] | iControl[44]))) {
                  fTempPerm840 = 1.0f - fTempPerm834;
                }
                if ((iControl[48] | iControl[44])) {
                  fTempPerm841 = 0.5f * fTempPerm840;
                }
                if ((iControl[48])) {
                  fTempPerm842 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm841));
                  fTempPerm843 = 0.5f - fTempPerm842;
                }
                if ((iControl[48] | iControl[45])) {
                  fTempPerm844 = fTempPerm834 + 1.0f;
                }
                if ((iControl[48])) {
                  fTempPerm845 = fTempPerm833
                    + fTempPerm788
                      * (std::cos(6.28318548f * (fTempPerm810 + std::min<float>(((fTempPerm810 + fTempPerm839) * fTempPerm843) / fTempPerm842, (fTempPerm843 * ((fTempPerm838 + 0.25f * fTempPerm844) - fTempPerm810)) / (1.0f - fTempPerm842)) + fTempPerm839)) - fTempPerm833);
                }
                if ((iControl[47])) {
                  fTempPerm846 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm822));
                  fTempPerm847 = 1.0f - fTempPerm846;
                  fTempPerm848 = 0.25f * fTempPerm847;
                  fTempPerm849 = fTempPerm766 - fTempPerm848;
                  fTempPerm850 = float(int(fTempPerm849));
                }
                float fThen332 = fTempPerm850 + -1.0f;
                float fThen333 = ((fTempPerm849 >= 0.0f) ? fTempPerm850 : fThen332);
                if ((iControl[47])) {
                  fTempPerm851 = fTempPerm766
                    - (fTempPerm848
                       + ((fTempPerm849 == fTempPerm850) ? fTempPerm849 : fThen333));
                  fTempPerm852 = 2.0f * fTempPerm851;
                  fTempPerm853 = fTempPerm852 + 1.0f;
                  fTempPerm854 = float(int(fTempPerm853));
                }
                float fThen334 = fTempPerm854 + -1.0f;
                float fThen335 = ((fTempPerm853 >= 0.0f) ? fTempPerm854 : fThen334);
                if ((iControl[47])) {
                  fTempPerm855
                    = ((fTempPerm853 == fTempPerm854) ? fTempPerm853 : fThen335);
                  fTempPerm856 = std::cos(
                    3.14159274f
                    * (float(fTempPerm851 >= 0.5f) + fTempPerm852 + 1.0f - (fTempPerm855 + std::min<float>(fTempPerm852 + 1.0f - fTempPerm855, (fTempPerm846 * (fTempPerm855 - fTempPerm852)) / fTempPerm847))));
                  fTempPerm857 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm834));
                  fTempPerm858 = 1.0f - fTempPerm857;
                  fTempPerm859 = 0.25f * fTempPerm858;
                  fTempPerm860 = fTempPerm810 - fTempPerm859;
                  fTempPerm861 = float(int(fTempPerm860));
                }
                float fThen336 = fTempPerm861 + -1.0f;
                float fThen337 = ((fTempPerm860 >= 0.0f) ? fTempPerm861 : fThen336);
                if ((iControl[47])) {
                  fTempPerm862 = fTempPerm810
                    - (fTempPerm859
                       + ((fTempPerm860 == fTempPerm861) ? fTempPerm860 : fThen337));
                  fTempPerm863 = 2.0f * fTempPerm862;
                  fTempPerm864 = fTempPerm863 + 1.0f;
                  fTempPerm865 = float(int(fTempPerm864));
                }
                float fThen338 = fTempPerm865 + -1.0f;
                float fThen339 = ((fTempPerm864 >= 0.0f) ? fTempPerm865 : fThen338);
                if ((iControl[47])) {
                  fTempPerm866
                    = ((fTempPerm864 == fTempPerm865) ? fTempPerm864 : fThen339);
                  fTempPerm867 = fTempPerm856
                    + fTempPerm788
                      * (std::cos(3.14159274f * (float(fTempPerm862 >= 0.5f) + fTempPerm863 + 1.0f - (fTempPerm866 + std::min<float>(fTempPerm863 + 1.0f - fTempPerm866, (fTempPerm857 * (fTempPerm866 - fTempPerm863)) / fTempPerm858)))) - fTempPerm856);
                }
                if ((iControl[46])) {
                  fTempPerm868 = 0.25f * fTempPerm828;
                  fTempPerm869 = fTempPerm766 - fTempPerm868;
                  fTempPerm870 = float(int(fTempPerm869));
                }
                float fThen340 = fTempPerm870 + -1.0f;
                float fThen341 = ((fTempPerm869 >= 0.0f) ? fTempPerm870 : fThen340);
                if ((iControl[46])) {
                  fTempPerm871 = fTempPerm868
                    + ((fTempPerm869 == fTempPerm870) ? fTempPerm869 : fThen341);
                }
                if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
                  fTempPerm872 = 1.0f - fTempPerm766;
                }
                if ((iControl[46])) {
                  fTempPerm873
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm822));
                  fTempPerm874 = std::cos(
                    6.28318548f
                    * (fTempPerm766 - (fTempPerm871 + std::min<float>(fTempPerm766 - fTempPerm871, ((fTempPerm871 + fTempPerm872) * fTempPerm873) / (1.0f - fTempPerm873)))));
                  fTempPerm875 = 0.25f * fTempPerm840;
                  fTempPerm876 = fTempPerm810 - fTempPerm875;
                  fTempPerm877 = float(int(fTempPerm876));
                }
                float fThen342 = fTempPerm877 + -1.0f;
                float fThen343 = ((fTempPerm876 >= 0.0f) ? fTempPerm877 : fThen342);
                if ((iControl[46])) {
                  fTempPerm878 = fTempPerm875
                    + ((fTempPerm876 == fTempPerm877) ? fTempPerm876 : fThen343);
                }
                if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
                  fTempPerm879 = 1.0f - fTempPerm810;
                }
                if ((iControl[46])) {
                  fTempPerm880
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm834));
                  fTempPerm881 = fTempPerm874
                    + fTempPerm788
                      * (std::cos(6.28318548f * (fTempPerm810 - (fTempPerm878 + std::min<float>(fTempPerm810 - fTempPerm878, ((fTempPerm878 + fTempPerm879) * fTempPerm880) / (1.0f - fTempPerm880))))) - fTempPerm874);
                }
                if ((iControl[45])) {
                  fTempPerm882 = 0.125f * fTempPerm832;
                  fTempPerm883 = fTempPerm766 - fTempPerm882;
                  fTempPerm884 = float(int(fTempPerm883));
                }
                float fThen344 = fTempPerm884 + -1.0f;
                float fThen345 = ((fTempPerm883 >= 0.0f) ? fTempPerm884 : fThen344);
                if ((iControl[45])) {
                  fTempPerm885 = fTempPerm882
                    + ((fTempPerm883 == fTempPerm884) ? fTempPerm883 : fThen345);
                  fTempPerm886
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm822));
                  fTempPerm887 = 0.49000001f * fTempPerm886;
                  fTempPerm888 = std::cos(
                    12.566371f
                    * ((fTempPerm766 + std::min<float>(0.49000001f * ((fTempPerm766 - fTempPerm885) * fTempPerm886) / (0.5f - fTempPerm887), 0.49000001f * (fTempPerm886 * (fTempPerm885 + fTempPerm872)) / (fTempPerm887 + 0.5f))) - fTempPerm885));
                  fTempPerm889 = 0.125f * fTempPerm844;
                  fTempPerm890 = fTempPerm810 - fTempPerm889;
                  fTempPerm891 = float(int(fTempPerm890));
                }
                float fThen346 = fTempPerm891 + -1.0f;
                float fThen347 = ((fTempPerm890 >= 0.0f) ? fTempPerm891 : fThen346);
                if ((iControl[45])) {
                  fTempPerm892 = fTempPerm889
                    + ((fTempPerm890 == fTempPerm891) ? fTempPerm890 : fThen347);
                  fTempPerm893
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm834));
                  fTempPerm894 = 0.49000001f * fTempPerm893;
                  fTempPerm895 = fTempPerm888 + fTempPerm788 * (std::cos(12.566371f * ((fTempPerm810 + std::min<float>(0.49000001f * ((fTempPerm810 - fTempPerm892) * fTempPerm893) / (0.5f - fTempPerm894), 0.49000001f * (fTempPerm893 * (fTempPerm892 + fTempPerm879)) / (fTempPerm894 + 0.5f))) - fTempPerm892)) - fTempPerm888);
                }
                if ((iControl[44])) {
                  fTempPerm896
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm822) + 1.0f);
                  fTempPerm897 = fTempPerm766 - fTempPerm896;
                  fTempPerm898 = float(int(fTempPerm897));
                }
                float fThen348 = fTempPerm898 + -1.0f;
                float fThen349 = ((fTempPerm897 >= 0.0f) ? fTempPerm898 : fThen348);
                if ((iControl[44])) {
                  fTempPerm899 = fTempPerm896
                    + ((fTempPerm897 == fTempPerm898) ? fTempPerm897 : fThen349);
                  fTempPerm900 = fTempPerm766 - fTempPerm899;
                }
                float fThen350 = 0.5f
                  * ((fTempPerm766 + -0.5f - fTempPerm899)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm829))
                     + 1.0f);
                if ((iControl[44])) {
                  fTempPerm901 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm900 < 0.5f) ? fTempPerm900 : fThen350)));
                  fTempPerm902
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm834) + 1.0f);
                  fTempPerm903 = fTempPerm810 - fTempPerm902;
                  fTempPerm904 = float(int(fTempPerm903));
                }
                float fThen351 = fTempPerm904 + -1.0f;
                float fThen352 = ((fTempPerm903 >= 0.0f) ? fTempPerm904 : fThen351);
                if ((iControl[44])) {
                  fTempPerm905 = fTempPerm902
                    + ((fTempPerm903 == fTempPerm904) ? fTempPerm903 : fThen352);
                  fTempPerm906 = fTempPerm810 - fTempPerm905;
                }
                float fThen353 = 0.5f
                  * ((fTempPerm810 + -0.5f - fTempPerm905)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm841))
                     + 1.0f);
                if ((iControl[44])) {
                  fTempPerm907 = fTempPerm901
                    + fTempPerm788
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm906 < 0.5f) ? fTempPerm906 : fThen353))) - fTempPerm901);
                }
                if ((iControl[43] | iControl[41])) {
                  fTempPerm908 = fTempPerm766
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec143[0] * fControl[974] * fTempPerm771))
                                     / fRec143[0]);
                }
                if ((iControl[43])) {
                  fTempPerm909 = fTempPerm908 + 1.0f;
                  fTempPerm910 = float(int(fTempPerm909));
                }
                float fThen354 = fTempPerm910 + -1.0f;
                float fThen355 = ((fTempPerm909 >= 0.0f) ? fTempPerm910 : fThen354);
                if ((iControl[43])) {
                  fTempPerm911 = (0.0f - fTempPerm872)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm908 + 1.0f - ((fTempPerm909 == fTempPerm910) ? fTempPerm909 : fThen355))));
                }
                if ((iControl[43] | iControl[41])) {
                  fTempPerm912 = fTempPerm810
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec160[0] * fControl[974] * fTempPerm771))
                                     / fRec160[0]);
                }
                if ((iControl[43])) {
                  fTempPerm913 = fTempPerm912 + 1.0f;
                  fTempPerm914 = float(int(fTempPerm913));
                }
                float fThen356 = fTempPerm914 + -1.0f;
                float fThen357 = ((fTempPerm913 >= 0.0f) ? fTempPerm914 : fThen356);
                if ((iControl[43])) {
                  fTempPerm915 = fTempPerm911
                    + fTempPerm788
                      * ((0.0f - fTempPerm879) * (1.0f - std::cos(6.28318548f * (fTempPerm912 + 1.0f - ((fTempPerm913 == fTempPerm914) ? fTempPerm913 : fThen357)))) - fTempPerm911)
                    + 1.0f;
                }
                float fThen358 = 2.0f * (1.0f - fTempPerm780);
                float fElse358 = 2.0f * fTempPerm780;
                if ((iControl[42])) {
                  fTempPerm916 = fTempPerm766 - (fTempPerm779 + fVec24[1]);
                }
                float fElse359 = fConst0 * fTempPerm916;
                if ((iControl[42])) {
                  fRec166[0] = ((std::fabs(fTempPerm916) < 0.5f) ? fElse359 : fRec166[1]);
                  fTempPerm917 = fTempPerm780
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec166[0] * fControl[974] * fTempPerm771))
                                     / fRec166[0]);
                  fTempPerm918 = fTempPerm917 + 1.0f;
                  fTempPerm919 = float(int(fTempPerm918));
                }
                float fThen360 = fTempPerm919 + -1.0f;
                float fThen361 = ((fTempPerm918 >= 0.0f) ? fTempPerm919 : fThen360);
                if ((iControl[42])) {
                  fTempPerm920 = ((iTempPerm781) ? fElse358 : fThen358)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm917 + 1.0f - ((fTempPerm918 == fTempPerm919) ? fTempPerm918 : fThen361)))
                       + 1.0f);
                }
                float fThen362 = 2.0f * (1.0f - fTempPerm816);
                float fElse362 = 2.0f * fTempPerm816;
                if ((iControl[42])) {
                  fTempPerm921 = fTempPerm810 - (fTempPerm815 + fVec27[1]);
                }
                float fElse363 = fConst0 * fTempPerm921;
                if ((iControl[42])) {
                  fRec167[0] = ((std::fabs(fTempPerm921) < 0.5f) ? fElse363 : fRec167[1]);
                  fTempPerm922 = fTempPerm816
                    * std::max<float>(
                                   1.0f,
                                   std::min<float>(
                                     fConst8,
                                     std::max<float>(
                                       0.0f, fRec167[0] * fControl[974] * fTempPerm771))
                                     / fRec167[0]);
                  fTempPerm923 = fTempPerm922 + 1.0f;
                  fTempPerm924 = float(int(fTempPerm923));
                }
                float fThen364 = fTempPerm924 + -1.0f;
                float fThen365 = ((fTempPerm923 >= 0.0f) ? fTempPerm924 : fThen364);
                if ((iControl[42])) {
                  fTempPerm925 = fTempPerm920
                    + fTempPerm788
                      * (((iTempPerm817) ? fElse362 : fThen362) * (std::cos(6.28318548f * (fTempPerm922 + 1.0f - ((fTempPerm923 == fTempPerm924) ? fTempPerm923 : fThen365))) + 1.0f) - fTempPerm920)
                    + -1.0f;
                }
                if ((iControl[41])) {
                  fTempPerm926 = float(int(fTempPerm908));
                }
                float fThen366 = fTempPerm926 + -1.0f;
                float fThen367 = ((fTempPerm908 >= 0.0f) ? fTempPerm926 : fThen366);
                if ((iControl[41])) {
                  fTempPerm927
                    = std::min<float>(1.0f, 2.0f * fTempPerm872)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm908 - ((fTempPerm908 == fTempPerm926) ? fTempPerm908 : fThen367)));
                  fTempPerm928 = float(int(fTempPerm912));
                }
                float fThen368 = fTempPerm928 + -1.0f;
                float fThen369 = ((fTempPerm912 >= 0.0f) ? fTempPerm928 : fThen368);
                if ((iControl[41])) {
                  fTempPerm929 = fTempPerm927
                    + fTempPerm788
                      * (std::min<float>(1.0f, 2.0f * fTempPerm879) * std::sin(6.28318548f * (fTempPerm912 - ((fTempPerm912 == fTempPerm928) ? fTempPerm912 : fThen369))) - fTempPerm927);
                }
                fRec5[0] = fControl[300] * fTempPerm821 + fControl[299] * fTempPerm845
                  + fControl[298] * fTempPerm867 + fControl[297] * fTempPerm881
                  + fControl[296] * fTempPerm895 + fControl[295] * fTempPerm907
                  + fControl[294] * fTempPerm915 + fControl[293] * fTempPerm925
                  + fControl[292] * fTempPerm929;
                float fTemp987 = fRec3[0] - fRec2[0];
                float fTemp988
                  = fControl[1002] - (fControl[996] + fControl[1003] * fTemp54);
                float fTemp989 = fControl[998]
                  - (fControl[996] + fControl[1001] * fTemp54
                     + fTemp56
                       * (fTemp988 - fControl[1004] - (fControl[998] + fControl[1005] * fTemp54)));
                float fTemp990
                  = fControl[1010] - (fControl[995] + fControl[1011] * fTemp54);
                float fTemp991 = fControl[1006]
                  - (fControl[995] + fControl[1009] * fTemp54
                     + fTemp56
                       * (fTemp990 - fControl[1012] - (fControl[1006] + fControl[1013] * fTemp54)));
                float fTemp992 = std::min<float>(
                  1.0f,
                  std::max<float>(
                    0.0f,
                    fControl[997] + fTemp52 * (fTemp989 + fTemp991)
                      + fControl[1014] * fTemp54 + fTemp56 * (fTemp988 + fTemp990)));
                float fTemp993
                  = fControl[1022] - (fControl[1016] + fControl[1023] * fTemp54);
                float fTemp994 = fControl[1018]
                  - (fControl[1016] + fControl[1021] * fTemp54
                     + fTemp56
                       * (fTemp993 - fControl[1024] - (fControl[1018] + fControl[1025] * fTemp54)));
                float fTemp995
                  = fControl[1030] - (fControl[1015] + fControl[1031] * fTemp54);
                float fTemp996 = fControl[1026]
                  - (fControl[1015] + fControl[1029] * fTemp54
                     + fTemp56
                       * (fTemp995 - fControl[1032] - (fControl[1026] + fControl[1033] * fTemp54)));
                outputs[0]
                  = FAUSTFLOAT(
                    fTemp6 * (fRec2[0] + fTemp987 * fTemp992 + std::min<float>(1.0f, std::max<float>(0.0f, fControl[1017] + fTemp52 * (fTemp994 + fTemp996) + fControl[1034] * fTemp54 + fTemp56 * (fTemp993 + fTemp995))) * (fRec4[0] - (fRec2[0] + fTemp992 * (fTemp987 - fRec5[0] - fRec4[0])))));
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm930 = std::fabs(fTempPerm27);
                  fTempPerm931 = std::fabs(fTempPerm25);
                  fTempPerm932 = std::fabs(fTempPerm23);
                  fTempPerm933 = fTempPerm930 + fTempPerm931 + fTempPerm932;
                  fTempPerm934 = std::min<float>(1.0f, fTempPerm933);
                  fTempPerm935 = std::max<float>(2.82118644e-37f, fTempPerm930);
                }
                float fElse370 = 0.0f - fTempPerm935;
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm936 = ((fTempPerm27 < 0.0f) ? fElse370 : fTempPerm935);
                }
                if (((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm937 = std::tan(
                    fConst2
                    * std::min<float>(
                      fConst4,
                      std::max<float>(
                        0.0f,
                        440.0f
                          * std::pow(
                            2.0f,
                            0.0833333358f
                              * (127.0f * std::min<float>(1.0f, std::max<float>(0.0f, fControl[383] + (fTemp52 * (fTempPerm32 - fTempPerm34) + fControl[1035] * fTemp54 + fTemp56 * (fTempPerm31 - fTempPerm33)) - fControl[382])) + -49.0f)))));
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm938 = fRec171[1]
                    * (fControl[406]
                       + (fTemp52 * (fTempPerm37 - fTempPerm39) + fControl[1036] * fTemp54 + fTemp56 * (fTempPerm36 - fTempPerm38))
                       - fControl[405]);
                  fTempPerm939 = fRec170[1]
                    * (fControl[426]
                       + (fTemp52 * (fTempPerm42 - fTempPerm44) + fControl[1037] * fTemp54 + fTemp56 * (fTempPerm41 - fTempPerm43))
                       - fControl[425]);
                  fTempPerm940 = fRec169[1]
                    * (fControl[446]
                       + (fTemp52 * (fTempPerm47 - fTempPerm49) + fControl[1038] * fTemp54 + fTemp56 * (fTempPerm46 - fTempPerm48))
                       - fControl[445]);
                  fTempPerm941 = fControl[472]
                    + (fTemp52 * (fTempPerm57 - fTempPerm59) + fControl[1039] * fTemp54
                       + fTemp56 * (fTempPerm56 - fTempPerm58))
                    - fControl[471];
                  fTempPerm942 = fControl[492]
                    + (fTemp52 * (fTempPerm62 - fTempPerm64) + fControl[1040] * fTemp54
                       + fTemp56 * (fTempPerm61 - fTempPerm63))
                    - fControl[491];
                  fTempPerm943 = float(int(fTempPerm942));
                }
                float fThen371 = fTempPerm943 + -1.0f;
                float fThen372 = ((fTempPerm942 >= 0.0f) ? fTempPerm943 : fThen371);
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm944
                    = ((fTempPerm942 == fTempPerm943) ? fTempPerm942 : fThen372);
                  fTempPerm945 = fTempPerm944
                    + float((fTempPerm942 < 0.0f) & (fTempPerm942 != fTempPerm944));
                  fTempPerm946 = fTempPerm55
                    + 0.00390625f * fTempPerm941 * std::pow(2.0f, 0.0f - fTempPerm945);
                  fTempPerm947 = fTempPerm946 - fTempPerm71;
                  fTempPerm948 = float(int(fTempPerm947));
                }
                float fThen373 = fTempPerm948 + -1.0f;
                float fThen374 = ((fTempPerm947 >= 0.0f) ? fTempPerm948 : fThen373);
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  iTempPerm949 = int(fTempPerm945);
                  fTempPerm950 = 256.0f
                    * (fTempPerm946
                       - (fTempPerm71 + ((fTempPerm947 == fTempPerm948) ? fTempPerm947 : fThen374)))
                    * (float(iTempPerm949 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm949)))))
                       + float(iTempPerm949 == 0)
                       + float(
                         (iTempPerm949 > 0) * int(std::pow(2.0f, float(iTempPerm949)))));
                  fTempPerm951 = fRec168[1]
                    * (fControl[512]
                       + (fTemp52 * (fTempPerm77 - fTempPerm79) + fControl[1041] * fTemp54 + fTemp56 * (fTempPerm76 - fTempPerm78))
                       - fControl[511]);
                  fTempPerm952 = fTempPerm938 + fTempPerm939 + fTempPerm940 + fTempPerm950
                    + fTempPerm951;
                  iTempPerm953 = int(fTempPerm950);
                }
                if (((iControl[3] & iTempPerm28)
                     | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))))
                {
                  fTempPerm954 = fRec172[1]
                    + fTempPerm937 * (fTempPerm952 - (float(iTempPerm953) + fRec173[1]));
                }
                if (((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm26) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm26) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm26) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm26) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm26) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm26) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm26) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm26) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm26) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm26) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm26) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm26) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm26) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm26) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm26) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm26) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm26) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm26) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm26) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm26) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm26) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm26) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm26) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm26) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm26) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm26) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm26) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm26) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm26) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm26) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm26) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm26) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm26) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm26) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm26) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | ((iControl[41] & iTempPerm26) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm955 = std::min<float>(
                    10.0f,
                    std::max<float>(
                      0.00999999978f,
                      fControl[532]
                        + (fTemp52 * (fTempPerm85 - fTempPerm87) + fControl[1042] * fTemp54 + fTemp56 * (fTempPerm84 - fTempPerm86))
                        - fControl[531]));
                }
                if (((iControl[3] & iTempPerm28) | ((iControl[3] & iTempPerm24) | ((iControl[75] & iTempPerm28) | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm28) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm28) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm28) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm28) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm28) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm28) | ((iControl[69] & iTempPerm24) | ((iControl[68] & iTempPerm28) | ((iControl[68] & iTempPerm24) | ((iControl[67] & iTempPerm28) | ((iControl[67] & iTempPerm24) | ((iControl[66] & iTempPerm28) | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm28) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm28) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm28) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm28) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm28) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm28) | ((iControl[60] & iTempPerm24) | ((iControl[59] & iTempPerm28) | ((iControl[59] & iTempPerm24) | ((iControl[58] & iTempPerm28) | ((iControl[58] & iTempPerm24) | ((iControl[57] & iTempPerm28) | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm28) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm28) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm28) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm28) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm28) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm28) | ((iControl[51] & iTempPerm24) | ((iControl[50] & iTempPerm28) | ((iControl[50] & iTempPerm24) | ((iControl[49] & iTempPerm28) | ((iControl[49] & iTempPerm24) | ((iControl[48] & iTempPerm28) | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm28) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm28) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm28) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm28) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm28) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm28) | ((iControl[42] & iTempPerm24) | ((iControl[41] & iTempPerm28) | (iControl[41] & iTempPerm24)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm956 = fTempPerm937 + 1.0f / fTempPerm955;
                  fTempPerm957 = fTempPerm937 * fTempPerm956 + 1.0f;
                }
                if (((iControl[3] & iTempPerm28)
                     | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))))
                {
                  fTempPerm958 = fTempPerm954 / fTempPerm957;
                  fRec172[0] = 2.0f * fTempPerm958 - fRec172[1];
                  fTempPerm959
                    = fRec173[1] + (fTempPerm937 * fTempPerm954) / fTempPerm957;
                  fRec173[0] = 2.0f * fTempPerm959 - fRec173[1];
                  fRec174 = fTempPerm959;
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm960 = std::max<float>(2.82118644e-37f, fTempPerm931);
                }
                float fElse375 = 0.0f - fTempPerm960;
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm961 = ((fTempPerm25 < 0.0f) ? fElse375 : fTempPerm960);
                }
                if (((iControl[3] & iTempPerm26)
                     | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))))
                {
                  fTempPerm962
                    = fTempPerm937 * (fTempPerm952 - (float(iTempPerm953) + fRec177[1]));
                }
                if (
                  ((iControl[3] & iTempPerm26)
                   | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | ((iControl[68] & iTempPerm26) | ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | ((iControl[59] & iTempPerm26) | ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | ((iControl[50] & iTempPerm26) | ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm963 = fTempPerm955 + -0.707000017f;
                  fTempPerm964 = fTempPerm937 + 1.0f;
                  fTempPerm965 = 1.0f - fTempPerm937 / fTempPerm964;
                  fTempPerm966 = 0.0f - 1.0f / fTempPerm964;
                  fTempPerm967 = 1.0f
                    - 0.215215757f * (fTempPerm937 * fTempPerm963 * fTempPerm965)
                      / fTempPerm964;
                }
                if (((iControl[3] & iTempPerm26)
                     | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))))
                {
                  fTempPerm968
                    = (fTempPerm937
                       * ((fRec177[1] + (fTempPerm962 + 0.215215757f * fRec175[1] * fTempPerm963 * fTempPerm965) / fTempPerm964 + fRec176[1] * fTempPerm966) / fTempPerm967 - fRec175[1]))
                    / fTempPerm964;
                  fRec175[0] = fRec175[1] + 2.0f * fTempPerm968;
                  fTempPerm969 = fRec175[1] + fTempPerm968;
                  fRec176[0] = fRec176[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm969 - fRec176[1]))
                      / fTempPerm964;
                  fRec177[0] = fRec177[1] + 2.0f * fTempPerm962 / fTempPerm964;
                  fRec178 = fTempPerm969;
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm970 = std::max<float>(2.82118644e-37f, fTempPerm932);
                }
                float fElse376 = 0.0f - fTempPerm970;
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm971 = ((fTempPerm23 < 0.0f) ? fElse376 : fTempPerm970);
                }
                if (((iControl[3] & iTempPerm24)
                     | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))))
                {
                  fTempPerm972 = fTempPerm952
                    - (float(iTempPerm953) + fRec180[1] + fTempPerm956 * fRec181[1]);
                  fTempPerm973 = (fTempPerm937 * fTempPerm972) / fTempPerm957;
                  fTempPerm974 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec181[1] + fTempPerm973));
                  fTempPerm975 = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm974);
                  fTempPerm976 = fTempPerm937 * fTempPerm974 * fTempPerm975;
                  fRec179 = fRec180[1] + fTempPerm976;
                  fRec180[0] = fRec180[1] + 2.0f * fTempPerm976;
                  fTempPerm977 = fTempPerm974 * fTempPerm975;
                  fRec181[0] = fTempPerm973 + fTempPerm977;
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm978 = std::max<float>(8.46355933e-37f, fTempPerm933);
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm979 = fTempPerm952 - float(iTempPerm953);
                }
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm980 = 1.0f - fTempPerm934;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm981
                    = (fTempPerm934
                       * (fTempPerm936 * fRec174 + fTempPerm961 * fRec178 + fTempPerm971 * fRec179))
                      / fTempPerm978
                    + fTempPerm979 * fTempPerm980;
                  fVec29[0] = fTempPerm981;
                  fTempPerm982 = fControl[553]
                    + (fTemp52 * (fTempPerm116 - fTempPerm118) + fControl[1043] * fTemp54
                       + fTemp56 * (fTempPerm115 - fTempPerm117))
                    - fControl[552];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))))
                {
                  fTempPerm983 = fControl[551] * fTempPerm982;
                }
                if ((iControl[3])) {
                  fTempPerm984 = 2.0f * fTempPerm983;
                  fTempPerm985 = std::min<float>(1.0f, fTempPerm984);
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fTempPerm986 = fTempPerm981 - fVec29[1];
                }
                float fElse377 = fConst0 * fTempPerm986;
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fRec183[0] = ((std::fabs(fTempPerm986) < 0.5f) ? fElse377 : fRec183[1]);
                }
                if ((iControl[3])) {
                  fTempPerm987 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec183[0])))));
                  fTempPerm988 = 1.0f - fTempPerm987;
                }
                if ((iControl[3] | iControl[69])) {
                  fTempPerm989 = float(int(fTempPerm981));
                }
                float fThen378 = fTempPerm989 + -1.0f;
                float fThen379 = ((fTempPerm981 >= 0.0f) ? fTempPerm989 : fThen378);
                if ((iControl[3] | iControl[69])) {
                  fTempPerm990
                    = ((fTempPerm981 == fTempPerm989) ? fTempPerm981 : fThen379);
                  fTempPerm991 = fTempPerm981 - fTempPerm990;
                  fVec30[0] = fTempPerm991;
                  iTempPerm992 = fTempPerm991 < 0.5f;
                  iVec31[0] = iTempPerm992;
                }
                if ((iControl[3])) {
                  iTempPerm993 = (iVec31[1] <= 0) & (iTempPerm992 > 0);
                  fRec188[0] = fRec188[1] * float(1 - iTempPerm993)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm993);
                  fTempPerm994 = fTempPerm987 + 1.0f;
                  fRec187[0] = 0.0f
                    - (fTempPerm988 * fRec187[1] - (fRec188[0] + fRec188[1]))
                      / fTempPerm994;
                  fRec186[0] = 0.0f
                    - (fTempPerm988 * fRec186[1] - (fRec187[0] + fRec187[1]))
                      / fTempPerm994;
                  fRec185[0] = 0.0f
                    - (fTempPerm988 * fRec185[1] - (fRec186[0] + fRec186[1]))
                      / fTempPerm994;
                  fRec184[0] = 0.0f
                    - (fTempPerm988 * fRec184[1] - (fRec185[0] + fRec185[1]))
                      / fTempPerm994;
                  fRec182[0] = 0.0f
                    - (fRec182[1] * fTempPerm988 - (fRec184[0] + fRec184[1]))
                      / fTempPerm994;
                  fTempPerm995 = std::sin(6.28318548f * fTempPerm981)
                    * (fTempPerm985 * (fRec182[0] + -1.0f) + 1.0f);
                  fTempPerm996 = std::max<float>(1.0f, fTempPerm984) + -1.0f;
                  fTempPerm997 = fRec182[0] - fTempPerm995;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm998 = std::fabs(fTempPerm942);
                  fTempPerm999 = fTempPerm998 - float(int(fTempPerm998));
                  fTempPerm1000 = fTempPerm944 + float(fTempPerm942 > 0.0f);
                  fTempPerm1001 = fTempPerm55
                    + 0.00390625f * fTempPerm941 * std::pow(2.0f, 0.0f - fTempPerm1000);
                  fTempPerm1002 = fTempPerm1001 - fTempPerm71;
                  fTempPerm1003 = float(int(fTempPerm1002));
                }
                float fThen380 = fTempPerm1003 + -1.0f;
                float fThen381 = ((fTempPerm1002 >= 0.0f) ? fTempPerm1003 : fThen380);
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  iTempPerm1004 = int(fTempPerm1000);
                  fTempPerm1005 = 256.0f
                    * (fTempPerm1001
                       - (fTempPerm71 + ((fTempPerm1002 == fTempPerm1003) ? fTempPerm1002 : fThen381)))
                    * (float(iTempPerm1004 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm1004)))))
                       + float(iTempPerm1004 == 0)
                       + float(
                         (iTempPerm1004 > 0)
                         * int(std::pow(2.0f, float(iTempPerm1004)))));
                  fTempPerm1006 = fTempPerm951 + fTempPerm940 + fTempPerm939
                    + fTempPerm938 + fTempPerm1005;
                  iTempPerm1007 = int(fTempPerm1005);
                }
                if (((iControl[3] & iTempPerm28)
                     | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))))
                {
                  fTempPerm1008 = fRec189[1]
                    + fTempPerm937
                      * (fTempPerm1006 - (float(iTempPerm1007) + fRec190[1]));
                  fTempPerm1009 = fTempPerm1008 / fTempPerm957;
                  fRec189[0] = 2.0f * fTempPerm1009 - fRec189[1];
                  fTempPerm1010
                    = fRec190[1] + (fTempPerm937 * fTempPerm1008) / fTempPerm957;
                  fRec190[0] = 2.0f * fTempPerm1010 - fRec190[1];
                  fRec191 = fTempPerm1010;
                }
                if (((iControl[3] & iTempPerm26)
                     | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))))
                {
                  fTempPerm1011 = fTempPerm937
                    * (fTempPerm1006 - (float(iTempPerm1007) + fRec194[1]));
                }
                if (
                  ((iControl[3] & iTempPerm26)
                   | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | ((iControl[68] & iTempPerm26) | ((iControl[67] & iTempPerm26) | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | ((iControl[59] & iTempPerm26) | ((iControl[58] & iTempPerm26) | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | ((iControl[50] & iTempPerm26) | ((iControl[49] & iTempPerm26) | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26)))))))))))))))))))))))))))))))))))))
                {
                  fTempPerm1012 = fTempPerm963 * fTempPerm965;
                }
                if (((iControl[3] & iTempPerm26)
                     | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))))
                {
                  fTempPerm1013
                    = (fTempPerm937
                       * ((fRec194[1] + (fTempPerm1011 + 0.215215757f * fTempPerm1012 * fRec192[1]) / fTempPerm964 + fTempPerm966 * fRec193[1]) / fTempPerm967 - fRec192[1]))
                    / fTempPerm964;
                  fRec192[0] = fRec192[1] + 2.0f * fTempPerm1013;
                  fTempPerm1014 = fRec192[1] + fTempPerm1013;
                  fRec193[0] = fRec193[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm1014 - fRec193[1]))
                      / fTempPerm964;
                  fRec194[0] = fRec194[1] + 2.0f * fTempPerm1011 / fTempPerm964;
                  fRec195 = fTempPerm1014;
                }
                if (((iControl[3] & iTempPerm24)
                     | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))))
                {
                  fTempPerm1015 = fTempPerm1006
                    - (float(iTempPerm1007) + fRec197[1] + fTempPerm956 * fRec198[1]);
                  fTempPerm1016 = (fTempPerm937 * fTempPerm1015) / fTempPerm957;
                  fTempPerm1017 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec198[1] + fTempPerm1016));
                  fTempPerm1018
                    = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1017);
                  fTempPerm1019 = fTempPerm937 * fTempPerm1017 * fTempPerm1018;
                  fRec196 = fRec197[1] + fTempPerm1019;
                  fRec197[0] = fRec197[1] + 2.0f * fTempPerm1019;
                  fTempPerm1020 = fTempPerm1017 * fTempPerm1018;
                  fRec198[0] = fTempPerm1016 + fTempPerm1020;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fTempPerm1021 = fTempPerm1006 - float(iTempPerm1007);
                  fTempPerm1022
                    = (fTempPerm934
                       * (fTempPerm936 * fRec191 + fTempPerm961 * fRec195 + fTempPerm971 * fRec196))
                      / fTempPerm978
                    + fTempPerm980 * fTempPerm1021;
                  fVec32[0] = fTempPerm1022;
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fTempPerm1023 = fTempPerm1022 - fVec32[1];
                }
                float fElse382 = fConst0 * fTempPerm1023;
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
                  fRec200[0]
                    = ((std::fabs(fTempPerm1023) < 0.5f) ? fElse382 : fRec200[1]);
                }
                if ((iControl[3])) {
                  fTempPerm1024 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec200[0])))));
                  fTempPerm1025 = 1.0f - fTempPerm1024;
                }
                if ((iControl[3] | iControl[69])) {
                  fTempPerm1026 = float(int(fTempPerm1022));
                }
                float fThen383 = fTempPerm1026 + -1.0f;
                float fThen384 = ((fTempPerm1022 >= 0.0f) ? fTempPerm1026 : fThen383);
                if ((iControl[3] | iControl[69])) {
                  fTempPerm1027
                    = ((fTempPerm1022 == fTempPerm1026) ? fTempPerm1022 : fThen384);
                  fTempPerm1028 = fTempPerm1022 - fTempPerm1027;
                  fVec33[0] = fTempPerm1028;
                  iTempPerm1029 = fTempPerm1028 < 0.5f;
                  iVec34[0] = iTempPerm1029;
                }
                if ((iControl[3])) {
                  iTempPerm1030 = (iVec34[1] <= 0) & (iTempPerm1029 > 0);
                  fRec205[0] = fRec205[1] * float(1 - iTempPerm1030)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm1030);
                  fTempPerm1031 = fTempPerm1024 + 1.0f;
                  fRec204[0] = 0.0f
                    - (fTempPerm1025 * fRec204[1] - (fRec205[0] + fRec205[1]))
                      / fTempPerm1031;
                  fRec203[0] = 0.0f
                    - (fTempPerm1025 * fRec203[1] - (fRec204[0] + fRec204[1]))
                      / fTempPerm1031;
                  fRec202[0] = 0.0f
                    - (fTempPerm1025 * fRec202[1] - (fRec203[0] + fRec203[1]))
                      / fTempPerm1031;
                  fRec201[0] = 0.0f
                    - (fTempPerm1025 * fRec201[1] - (fRec202[0] + fRec202[1]))
                      / fTempPerm1031;
                  fRec199[0] = 0.0f
                    - (fRec199[1] * fTempPerm1025 - (fRec201[0] + fRec201[1]))
                      / fTempPerm1031;
                  fTempPerm1032 = std::sin(6.28318548f * fTempPerm1022)
                    * (fTempPerm985 * (fRec199[0] + -1.0f) + 1.0f);
                  fTempPerm1033 = fTempPerm995 + fTempPerm996 * fTempPerm997
                    + fTempPerm999
                      * (fTempPerm1032 - (fTempPerm995 + fTempPerm996 * (fTempPerm997 - fRec199[0] - fTempPerm1032)));
                }
                if ((iControl[75]
                     | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
                  fTempPerm1034 = fTempPerm983
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec183[0] - fConst7))));
                }
                if ((iControl[75])) {
                  fTempPerm1035 = 0.25f * fTempPerm1034;
                  fTempPerm1036 = fTempPerm981 + 0.75f - fTempPerm1035;
                  fTempPerm1037 = float(int(fTempPerm1036));
                }
                float fThen385 = fTempPerm1037 + -1.0f;
                float fThen386 = ((fTempPerm1036 >= 0.0f) ? fTempPerm1037 : fThen385);
                if ((iControl[75])) {
                  fTempPerm1038
                    = ((fTempPerm1036 == fTempPerm1037) ? fTempPerm1036 : fThen386);
                  fTempPerm1039 = 0.75f - (fTempPerm1035 + fTempPerm1038);
                }
                if ((iControl[75] | (iControl[73] | iControl[71]))) {
                  fTempPerm1040 = 1.0f - fTempPerm1034;
                }
                if ((iControl[75] | iControl[71])) {
                  fTempPerm1041 = 0.5f * fTempPerm1040;
                }
                if ((iControl[75])) {
                  fTempPerm1042 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1041));
                  fTempPerm1043 = 0.5f - fTempPerm1042;
                }
                if ((iControl[75] | iControl[72])) {
                  fTempPerm1044 = fTempPerm1034 + 1.0f;
                }
                if ((iControl[75])) {
                  fTempPerm1045 = std::cos(
                    6.28318548f
                    * (fTempPerm981 + std::min<float>(((fTempPerm981 + fTempPerm1039) * fTempPerm1043) / fTempPerm1042, (fTempPerm1043 * ((fTempPerm1038 + 0.25f * fTempPerm1044) - fTempPerm981)) / (1.0f - fTempPerm1042)) + fTempPerm1039));
                }
                if ((iControl[75]
                     | (iControl[74] | (iControl[73] | (iControl[72] | iControl[71]))))) {
                  fTempPerm1046 = fTempPerm983
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec200[0] - fConst7))));
                }
                if ((iControl[75])) {
                  fTempPerm1047 = 0.25f * fTempPerm1046;
                  fTempPerm1048 = fTempPerm1022 + 0.75f - fTempPerm1047;
                  fTempPerm1049 = float(int(fTempPerm1048));
                }
                float fThen387 = fTempPerm1049 + -1.0f;
                float fThen388 = ((fTempPerm1048 >= 0.0f) ? fTempPerm1049 : fThen387);
                if ((iControl[75])) {
                  fTempPerm1050
                    = ((fTempPerm1048 == fTempPerm1049) ? fTempPerm1048 : fThen388);
                  fTempPerm1051 = 0.75f - (fTempPerm1047 + fTempPerm1050);
                }
                if ((iControl[75] | (iControl[73] | iControl[71]))) {
                  fTempPerm1052 = 1.0f - fTempPerm1046;
                }
                if ((iControl[75] | iControl[71])) {
                  fTempPerm1053 = 0.5f * fTempPerm1052;
                }
                if ((iControl[75])) {
                  fTempPerm1054 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1053));
                  fTempPerm1055 = 0.5f - fTempPerm1054;
                }
                if ((iControl[75] | iControl[72])) {
                  fTempPerm1056 = fTempPerm1046 + 1.0f;
                }
                if ((iControl[75])) {
                  fTempPerm1057
                    = fTempPerm1045 + fTempPerm999 * (std::cos(6.28318548f * (fTempPerm1022 + std::min<float>(((fTempPerm1022 + fTempPerm1051) * fTempPerm1055) / fTempPerm1054, (fTempPerm1055 * ((fTempPerm1050 + 0.25f * fTempPerm1056) - fTempPerm1022)) / (1.0f - fTempPerm1054)) + fTempPerm1051)) - fTempPerm1045);
                }
                if ((iControl[74])) {
                  fTempPerm1058 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1034));
                  fTempPerm1059 = 1.0f - fTempPerm1058;
                  fTempPerm1060 = 0.25f * fTempPerm1059;
                  fTempPerm1061 = fTempPerm981 - fTempPerm1060;
                  fTempPerm1062 = float(int(fTempPerm1061));
                }
                float fThen389 = fTempPerm1062 + -1.0f;
                float fThen390 = ((fTempPerm1061 >= 0.0f) ? fTempPerm1062 : fThen389);
                if ((iControl[74])) {
                  fTempPerm1063 = fTempPerm981
                    - (fTempPerm1060
                       + ((fTempPerm1061 == fTempPerm1062) ? fTempPerm1061 : fThen390));
                  fTempPerm1064 = 2.0f * fTempPerm1063;
                  fTempPerm1065 = fTempPerm1064 + 1.0f;
                  fTempPerm1066 = float(int(fTempPerm1065));
                }
                float fThen391 = fTempPerm1066 + -1.0f;
                float fThen392 = ((fTempPerm1065 >= 0.0f) ? fTempPerm1066 : fThen391);
                if ((iControl[74])) {
                  fTempPerm1067
                    = ((fTempPerm1065 == fTempPerm1066) ? fTempPerm1065 : fThen392);
                  fTempPerm1068 = std::cos(
                    3.14159274f
                    * (float(fTempPerm1063 >= 0.5f) + fTempPerm1064 + 1.0f - (fTempPerm1067 + std::min<float>(fTempPerm1064 + 1.0f - fTempPerm1067, (fTempPerm1058 * (fTempPerm1067 - fTempPerm1064)) / fTempPerm1059))));
                  fTempPerm1069 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1046));
                  fTempPerm1070 = 1.0f - fTempPerm1069;
                  fTempPerm1071 = 0.25f * fTempPerm1070;
                  fTempPerm1072 = fTempPerm1022 - fTempPerm1071;
                  fTempPerm1073 = float(int(fTempPerm1072));
                }
                float fThen393 = fTempPerm1073 + -1.0f;
                float fThen394 = ((fTempPerm1072 >= 0.0f) ? fTempPerm1073 : fThen393);
                if ((iControl[74])) {
                  fTempPerm1074 = fTempPerm1022
                    - (fTempPerm1071
                       + ((fTempPerm1072 == fTempPerm1073) ? fTempPerm1072 : fThen394));
                  fTempPerm1075 = 2.0f * fTempPerm1074;
                  fTempPerm1076 = fTempPerm1075 + 1.0f;
                  fTempPerm1077 = float(int(fTempPerm1076));
                }
                float fThen395 = fTempPerm1077 + -1.0f;
                float fThen396 = ((fTempPerm1076 >= 0.0f) ? fTempPerm1077 : fThen395);
                if ((iControl[74])) {
                  fTempPerm1078
                    = ((fTempPerm1076 == fTempPerm1077) ? fTempPerm1076 : fThen396);
                  fTempPerm1079 = fTempPerm1068
                    + fTempPerm999
                      * (std::cos(3.14159274f * (float(fTempPerm1074 >= 0.5f) + fTempPerm1075 + 1.0f - (fTempPerm1078 + std::min<float>(fTempPerm1075 + 1.0f - fTempPerm1078, (fTempPerm1069 * (fTempPerm1078 - fTempPerm1075)) / fTempPerm1070)))) - fTempPerm1068);
                }
                if ((iControl[73])) {
                  fTempPerm1080 = 0.25f * fTempPerm1040;
                  fTempPerm1081 = fTempPerm981 - fTempPerm1080;
                  fTempPerm1082 = float(int(fTempPerm1081));
                }
                float fThen397 = fTempPerm1082 + -1.0f;
                float fThen398 = ((fTempPerm1081 >= 0.0f) ? fTempPerm1082 : fThen397);
                if ((iControl[73])) {
                  fTempPerm1083 = fTempPerm1080
                    + ((fTempPerm1081 == fTempPerm1082) ? fTempPerm1081 : fThen398);
                }
                if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
                  fTempPerm1084 = 1.0f - fTempPerm981;
                }
                if ((iControl[73])) {
                  fTempPerm1085
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1034));
                  fTempPerm1086 = std::cos(
                    6.28318548f
                    * (fTempPerm981 - (fTempPerm1083 + std::min<float>(fTempPerm981 - fTempPerm1083, ((fTempPerm1083 + fTempPerm1084) * fTempPerm1085) / (1.0f - fTempPerm1085)))));
                  fTempPerm1087 = 0.25f * fTempPerm1052;
                  fTempPerm1088 = fTempPerm1022 - fTempPerm1087;
                  fTempPerm1089 = float(int(fTempPerm1088));
                }
                float fThen399 = fTempPerm1089 + -1.0f;
                float fThen400 = ((fTempPerm1088 >= 0.0f) ? fTempPerm1089 : fThen399);
                if ((iControl[73])) {
                  fTempPerm1090 = fTempPerm1087
                    + ((fTempPerm1088 == fTempPerm1089) ? fTempPerm1088 : fThen400);
                }
                if ((iControl[73] | (iControl[72] | (iControl[70] | iControl[68])))) {
                  fTempPerm1091 = 1.0f - fTempPerm1022;
                }
                if ((iControl[73])) {
                  fTempPerm1092
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1046));
                  fTempPerm1093 = fTempPerm1086
                    + fTempPerm999
                      * (std::cos(6.28318548f * (fTempPerm1022 - (fTempPerm1090 + std::min<float>(fTempPerm1022 - fTempPerm1090, ((fTempPerm1090 + fTempPerm1091) * fTempPerm1092) / (1.0f - fTempPerm1092))))) - fTempPerm1086);
                }
                if ((iControl[72])) {
                  fTempPerm1094 = 0.125f * fTempPerm1044;
                  fTempPerm1095 = fTempPerm981 - fTempPerm1094;
                  fTempPerm1096 = float(int(fTempPerm1095));
                }
                float fThen401 = fTempPerm1096 + -1.0f;
                float fThen402 = ((fTempPerm1095 >= 0.0f) ? fTempPerm1096 : fThen401);
                if ((iControl[72])) {
                  fTempPerm1097 = fTempPerm1094
                    + ((fTempPerm1095 == fTempPerm1096) ? fTempPerm1095 : fThen402);
                  fTempPerm1098
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1034));
                  fTempPerm1099 = 0.49000001f * fTempPerm1098;
                  fTempPerm1100 = std::cos(
                    12.566371f
                    * ((fTempPerm981 + std::min<float>(0.49000001f * ((fTempPerm981 - fTempPerm1097) * fTempPerm1098) / (0.5f - fTempPerm1099), 0.49000001f * (fTempPerm1098 * (fTempPerm1097 + fTempPerm1084)) / (fTempPerm1099 + 0.5f))) - fTempPerm1097));
                  fTempPerm1101 = 0.125f * fTempPerm1056;
                  fTempPerm1102 = fTempPerm1022 - fTempPerm1101;
                  fTempPerm1103 = float(int(fTempPerm1102));
                }
                float fThen403 = fTempPerm1103 + -1.0f;
                float fThen404 = ((fTempPerm1102 >= 0.0f) ? fTempPerm1103 : fThen403);
                if ((iControl[72])) {
                  fTempPerm1104 = fTempPerm1101
                    + ((fTempPerm1102 == fTempPerm1103) ? fTempPerm1102 : fThen404);
                  fTempPerm1105
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1046));
                  fTempPerm1106 = 0.49000001f * fTempPerm1105;
                  fTempPerm1107
                    = fTempPerm1100 + fTempPerm999 * (std::cos(12.566371f * ((fTempPerm1022 + std::min<float>(0.49000001f * ((fTempPerm1022 - fTempPerm1104) * fTempPerm1105) / (0.5f - fTempPerm1106), 0.49000001f * (fTempPerm1105 * (fTempPerm1104 + fTempPerm1091)) / (fTempPerm1106 + 0.5f))) - fTempPerm1104)) - fTempPerm1100);
                }
                if ((iControl[71])) {
                  fTempPerm1108
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1034) + 1.0f);
                  fTempPerm1109 = fTempPerm981 - fTempPerm1108;
                  fTempPerm1110 = float(int(fTempPerm1109));
                }
                float fThen405 = fTempPerm1110 + -1.0f;
                float fThen406 = ((fTempPerm1109 >= 0.0f) ? fTempPerm1110 : fThen405);
                if ((iControl[71])) {
                  fTempPerm1111 = fTempPerm1108
                    + ((fTempPerm1109 == fTempPerm1110) ? fTempPerm1109 : fThen406);
                  fTempPerm1112 = fTempPerm981 - fTempPerm1111;
                }
                float fThen407 = 0.5f
                  * ((fTempPerm981 + -0.5f - fTempPerm1111)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1041))
                     + 1.0f);
                if ((iControl[71])) {
                  fTempPerm1113 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm1112 < 0.5f) ? fTempPerm1112 : fThen407)));
                  fTempPerm1114
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1046) + 1.0f);
                  fTempPerm1115 = fTempPerm1022 - fTempPerm1114;
                  fTempPerm1116 = float(int(fTempPerm1115));
                }
                float fThen408 = fTempPerm1116 + -1.0f;
                float fThen409 = ((fTempPerm1115 >= 0.0f) ? fTempPerm1116 : fThen408);
                if ((iControl[71])) {
                  fTempPerm1117 = fTempPerm1114
                    + ((fTempPerm1115 == fTempPerm1116) ? fTempPerm1115 : fThen409);
                  fTempPerm1118 = fTempPerm1022 - fTempPerm1117;
                }
                float fThen410 = 0.5f
                  * ((fTempPerm1022 + -0.5f - fTempPerm1117)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1053))
                     + 1.0f);
                if ((iControl[71])) {
                  fTempPerm1119 = fTempPerm1113
                    + fTempPerm999
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1118 < 0.5f) ? fTempPerm1118 : fThen410))) - fTempPerm1113);
                }
                if ((iControl[70] | iControl[68])) {
                  fTempPerm1120 = fTempPerm981
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec183[0] * fControl[551] * fTempPerm982))
                                      / fRec183[0]);
                }
                if ((iControl[70])) {
                  fTempPerm1121 = fTempPerm1120 + 1.0f;
                  fTempPerm1122 = float(int(fTempPerm1121));
                }
                float fThen411 = fTempPerm1122 + -1.0f;
                float fThen412 = ((fTempPerm1121 >= 0.0f) ? fTempPerm1122 : fThen411);
                if ((iControl[70])) {
                  fTempPerm1123 = (0.0f - fTempPerm1084)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm1120 + 1.0f - ((fTempPerm1121 == fTempPerm1122) ? fTempPerm1121 : fThen412))));
                }
                if ((iControl[70] | iControl[68])) {
                  fTempPerm1124 = fTempPerm1022
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec200[0] * fControl[551] * fTempPerm982))
                                      / fRec200[0]);
                }
                if ((iControl[70])) {
                  fTempPerm1125 = fTempPerm1124 + 1.0f;
                  fTempPerm1126 = float(int(fTempPerm1125));
                }
                float fThen413 = fTempPerm1126 + -1.0f;
                float fThen414 = ((fTempPerm1125 >= 0.0f) ? fTempPerm1126 : fThen413);
                if ((iControl[70])) {
                  fTempPerm1127 = fTempPerm1123
                    + fTempPerm999
                      * ((0.0f - fTempPerm1091) * (1.0f - std::cos(6.28318548f * (fTempPerm1124 + 1.0f - ((fTempPerm1125 == fTempPerm1126) ? fTempPerm1125 : fThen414)))) - fTempPerm1123)
                    + 1.0f;
                }
                float fThen415 = 2.0f * (1.0f - fTempPerm991);
                float fElse415 = 2.0f * fTempPerm991;
                if ((iControl[69])) {
                  fTempPerm1128 = fTempPerm981 - (fTempPerm990 + fVec30[1]);
                }
                float fElse416 = fConst0 * fTempPerm1128;
                if ((iControl[69])) {
                  fRec206[0]
                    = ((std::fabs(fTempPerm1128) < 0.5f) ? fElse416 : fRec206[1]);
                  fTempPerm1129 = fTempPerm991
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec206[0] * fControl[551] * fTempPerm982))
                                      / fRec206[0]);
                  fTempPerm1130 = fTempPerm1129 + 1.0f;
                  fTempPerm1131 = float(int(fTempPerm1130));
                }
                float fThen417 = fTempPerm1131 + -1.0f;
                float fThen418 = ((fTempPerm1130 >= 0.0f) ? fTempPerm1131 : fThen417);
                if ((iControl[69])) {
                  fTempPerm1132 = ((iTempPerm992) ? fElse415 : fThen415)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm1129 + 1.0f - ((fTempPerm1130 == fTempPerm1131) ? fTempPerm1130 : fThen418)))
                       + 1.0f);
                }
                float fThen419 = 2.0f * (1.0f - fTempPerm1028);
                float fElse419 = 2.0f * fTempPerm1028;
                if ((iControl[69])) {
                  fTempPerm1133 = fTempPerm1022 - (fTempPerm1027 + fVec33[1]);
                }
                float fElse420 = fConst0 * fTempPerm1133;
                if ((iControl[69])) {
                  fRec207[0]
                    = ((std::fabs(fTempPerm1133) < 0.5f) ? fElse420 : fRec207[1]);
                  fTempPerm1134 = fTempPerm1028
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec207[0] * fControl[551] * fTempPerm982))
                                      / fRec207[0]);
                  fTempPerm1135 = fTempPerm1134 + 1.0f;
                  fTempPerm1136 = float(int(fTempPerm1135));
                }
                float fThen421 = fTempPerm1136 + -1.0f;
                float fThen422 = ((fTempPerm1135 >= 0.0f) ? fTempPerm1136 : fThen421);
                if ((iControl[69])) {
                  fTempPerm1137 = fTempPerm1132
                    + fTempPerm999
                      * (((iTempPerm1029) ? fElse419 : fThen419) * (std::cos(6.28318548f * (fTempPerm1134 + 1.0f - ((fTempPerm1135 == fTempPerm1136) ? fTempPerm1135 : fThen422))) + 1.0f) - fTempPerm1132)
                    + -1.0f;
                }
                if ((iControl[68])) {
                  fTempPerm1138 = float(int(fTempPerm1120));
                }
                float fThen423 = fTempPerm1138 + -1.0f;
                float fThen424 = ((fTempPerm1120 >= 0.0f) ? fTempPerm1138 : fThen423);
                if ((iControl[68])) {
                  fTempPerm1139
                    = std::min<float>(1.0f, 2.0f * fTempPerm1084)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm1120 - ((fTempPerm1120 == fTempPerm1138) ? fTempPerm1120 : fThen424)));
                  fTempPerm1140 = float(int(fTempPerm1124));
                }
                float fThen425 = fTempPerm1140 + -1.0f;
                float fThen426 = ((fTempPerm1124 >= 0.0f) ? fTempPerm1140 : fThen425);
                if ((iControl[68])) {
                  fTempPerm1141 = fTempPerm1139
                    + fTempPerm999
                      * (std::min<float>(1.0f, 2.0f * fTempPerm1091) * std::sin(6.28318548f * (fTempPerm1124 - ((fTempPerm1124 == fTempPerm1140) ? fTempPerm1124 : fThen426))) - fTempPerm1139);
                }
                fRec168[0] = fControl[11] * fTempPerm1033 + fControl[330] * fTempPerm1057
                  + fControl[329] * fTempPerm1079 + fControl[328] * fTempPerm1093
                  + fControl[327] * fTempPerm1107 + fControl[326] * fTempPerm1119
                  + fControl[325] * fTempPerm1127 + fControl[324] * fTempPerm1137
                  + fControl[323] * fTempPerm1141;
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm1142 = fRec171[1]
                    * (fControl[573]
                       + (fTemp52 * (fTempPerm280 - fTempPerm282) + fControl[1044] * fTemp54 + fTemp56 * (fTempPerm279 - fTempPerm281))
                       - fControl[572]);
                  fTempPerm1143 = fRec170[1]
                    * (fControl[593]
                       + (fTemp52 * (fTempPerm285 - fTempPerm287) + fControl[1045] * fTemp54 + fTemp56 * (fTempPerm284 - fTempPerm286))
                       - fControl[592]);
                  fTempPerm1144 = fRec169[1]
                    * (fControl[613]
                       + (fTemp52 * (fTempPerm290 - fTempPerm292) + fControl[1046] * fTemp54 + fTemp56 * (fTempPerm289 - fTempPerm291))
                       - fControl[612]);
                  fTempPerm1145 = fControl[633]
                    + (fTemp52 * (fTempPerm295 - fTempPerm297) + fControl[1047] * fTemp54
                       + fTemp56 * (fTempPerm294 - fTempPerm296))
                    - fControl[632];
                  fTempPerm1146 = fControl[653]
                    + (fTemp52 * (fTempPerm300 - fTempPerm302) + fControl[1048] * fTemp54
                       + fTemp56 * (fTempPerm299 - fTempPerm301))
                    - fControl[652];
                  fTempPerm1147 = float(int(fTempPerm1146));
                }
                float fThen427 = fTempPerm1147 + -1.0f;
                float fThen428 = ((fTempPerm1146 >= 0.0f) ? fTempPerm1147 : fThen427);
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm1148
                    = ((fTempPerm1146 == fTempPerm1147) ? fTempPerm1146 : fThen428);
                  fTempPerm1149 = fTempPerm1148
                    + float((fTempPerm1146 < 0.0f) & (fTempPerm1146 != fTempPerm1148));
                  fTempPerm1150 = fTempPerm55
                    + 0.00390625f * fTempPerm1145 * std::pow(2.0f, 0.0f - fTempPerm1149);
                  fTempPerm1151 = fTempPerm1150 - fTempPerm71;
                  fTempPerm1152 = float(int(fTempPerm1151));
                }
                float fThen429 = fTempPerm1152 + -1.0f;
                float fThen430 = ((fTempPerm1151 >= 0.0f) ? fTempPerm1152 : fThen429);
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  iTempPerm1153 = int(fTempPerm1149);
                  fTempPerm1154 = 256.0f
                    * (fTempPerm1150
                       - (fTempPerm71 + ((fTempPerm1151 == fTempPerm1152) ? fTempPerm1151 : fThen430)))
                    * (float(iTempPerm1153 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm1153)))))
                       + float(iTempPerm1153 == 0)
                       + float(
                         (iTempPerm1153 > 0)
                         * int(std::pow(2.0f, float(iTempPerm1153)))));
                  fTempPerm1155 = fRec168[1]
                    * (fControl[673]
                       + (fTemp52 * (fTempPerm313 - fTempPerm315) + fControl[1049] * fTemp54 + fTemp56 * (fTempPerm312 - fTempPerm314))
                       - fControl[672]);
                  fTempPerm1156 = fTempPerm1142 + fTempPerm1143 + fTempPerm1144
                    + fTempPerm1154 + fTempPerm1155;
                  iTempPerm1157 = int(fTempPerm1154);
                }
                if (((iControl[67] & iTempPerm28)
                     | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))))
                {
                  fTempPerm1158 = fRec208[1]
                    + fTempPerm937
                      * (fTempPerm1156 - (float(iTempPerm1157) + fRec209[1]));
                  fTempPerm1159 = fTempPerm1158 / fTempPerm957;
                  fRec208[0] = 2.0f * fTempPerm1159 - fRec208[1];
                  fTempPerm1160
                    = fRec209[1] + (fTempPerm937 * fTempPerm1158) / fTempPerm957;
                  fRec209[0] = 2.0f * fTempPerm1160 - fRec209[1];
                  fRec210 = fTempPerm1160;
                }
                if (((iControl[67] & iTempPerm26)
                     | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))))
                {
                  fTempPerm1161 = fTempPerm937
                    * (fTempPerm1156 - (float(iTempPerm1157) + fRec213[1]));
                  fTempPerm1162
                    = (fTempPerm937
                       * ((fRec213[1] + (fTempPerm1161 + 0.215215757f * fTempPerm1012 * fRec211[1]) / fTempPerm964 + fTempPerm966 * fRec212[1]) / fTempPerm967 - fRec211[1]))
                    / fTempPerm964;
                  fRec211[0] = fRec211[1] + 2.0f * fTempPerm1162;
                  fTempPerm1163 = fRec211[1] + fTempPerm1162;
                  fRec212[0] = fRec212[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm1163 - fRec212[1]))
                      / fTempPerm964;
                  fRec213[0] = fRec213[1] + 2.0f * fTempPerm1161 / fTempPerm964;
                  fRec214 = fTempPerm1163;
                }
                if (((iControl[67] & iTempPerm24)
                     | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))))
                {
                  fTempPerm1164 = fTempPerm1156
                    - (float(iTempPerm1157) + fRec216[1] + fTempPerm956 * fRec217[1]);
                  fTempPerm1165 = (fTempPerm937 * fTempPerm1164) / fTempPerm957;
                  fTempPerm1166 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec217[1] + fTempPerm1165));
                  fTempPerm1167
                    = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1166);
                  fTempPerm1168 = fTempPerm937 * fTempPerm1166 * fTempPerm1167;
                  fRec215 = fRec216[1] + fTempPerm1168;
                  fRec216[0] = fRec216[1] + 2.0f * fTempPerm1168;
                  fTempPerm1169 = fTempPerm1166 * fTempPerm1167;
                  fRec217[0] = fTempPerm1165 + fTempPerm1169;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm1170 = fTempPerm1156 - float(iTempPerm1157);
                  fTempPerm1171
                    = (fTempPerm934
                       * (fTempPerm936 * fRec210 + fTempPerm961 * fRec214 + fTempPerm971 * fRec215))
                      / fTempPerm978
                    + fTempPerm980 * fTempPerm1170;
                  fVec35[0] = fTempPerm1171;
                  fTempPerm1172 = fControl[694]
                    + (fTemp52 * (fTempPerm334 - fTempPerm336) + fControl[1050] * fTemp54
                       + fTemp56 * (fTempPerm333 - fTempPerm335))
                    - fControl[693];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))))
                {
                  fTempPerm1173 = fControl[692] * fTempPerm1172;
                }
                if ((iControl[67])) {
                  fTempPerm1174 = 2.0f * fTempPerm1173;
                  fTempPerm1175 = std::min<float>(1.0f, fTempPerm1174);
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fTempPerm1176 = fTempPerm1171 - fVec35[1];
                }
                float fElse431 = fConst0 * fTempPerm1176;
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fRec219[0]
                    = ((std::fabs(fTempPerm1176) < 0.5f) ? fElse431 : fRec219[1]);
                }
                if ((iControl[67])) {
                  fTempPerm1177 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec219[0])))));
                  fTempPerm1178 = 1.0f - fTempPerm1177;
                }
                if ((iControl[67] | iControl[60])) {
                  fTempPerm1179 = float(int(fTempPerm1171));
                }
                float fThen432 = fTempPerm1179 + -1.0f;
                float fThen433 = ((fTempPerm1171 >= 0.0f) ? fTempPerm1179 : fThen432);
                if ((iControl[67] | iControl[60])) {
                  fTempPerm1180
                    = ((fTempPerm1171 == fTempPerm1179) ? fTempPerm1171 : fThen433);
                  fTempPerm1181 = fTempPerm1171 - fTempPerm1180;
                  fVec36[0] = fTempPerm1181;
                  iTempPerm1182 = fTempPerm1181 < 0.5f;
                  iVec37[0] = iTempPerm1182;
                }
                if ((iControl[67])) {
                  iTempPerm1183 = (iVec37[1] <= 0) & (iTempPerm1182 > 0);
                  fRec224[0] = fRec224[1] * float(1 - iTempPerm1183)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm1183);
                  fTempPerm1184 = fTempPerm1177 + 1.0f;
                  fRec223[0] = 0.0f
                    - (fTempPerm1178 * fRec223[1] - (fRec224[0] + fRec224[1]))
                      / fTempPerm1184;
                  fRec222[0] = 0.0f
                    - (fTempPerm1178 * fRec222[1] - (fRec223[0] + fRec223[1]))
                      / fTempPerm1184;
                  fRec221[0] = 0.0f
                    - (fTempPerm1178 * fRec221[1] - (fRec222[0] + fRec222[1]))
                      / fTempPerm1184;
                  fRec220[0] = 0.0f
                    - (fTempPerm1178 * fRec220[1] - (fRec221[0] + fRec221[1]))
                      / fTempPerm1184;
                  fRec218[0] = 0.0f
                    - (fRec218[1] * fTempPerm1178 - (fRec220[0] + fRec220[1]))
                      / fTempPerm1184;
                  fTempPerm1185 = std::sin(6.28318548f * fTempPerm1171)
                    * (fTempPerm1175 * (fRec218[0] + -1.0f) + 1.0f);
                  fTempPerm1186 = std::max<float>(1.0f, fTempPerm1174) + -1.0f;
                  fTempPerm1187 = fRec218[0] - fTempPerm1185;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm1188 = std::fabs(fTempPerm1146);
                  fTempPerm1189 = fTempPerm1188 - float(int(fTempPerm1188));
                  fTempPerm1190 = fTempPerm1148 + float(fTempPerm1146 > 0.0f);
                  fTempPerm1191 = fTempPerm55
                    + 0.00390625f * fTempPerm1145 * std::pow(2.0f, 0.0f - fTempPerm1190);
                  fTempPerm1192 = fTempPerm1191 - fTempPerm71;
                  fTempPerm1193 = float(int(fTempPerm1192));
                }
                float fThen434 = fTempPerm1193 + -1.0f;
                float fThen435 = ((fTempPerm1192 >= 0.0f) ? fTempPerm1193 : fThen434);
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  iTempPerm1194 = int(fTempPerm1190);
                  fTempPerm1195 = 256.0f
                    * (fTempPerm1191
                       - (fTempPerm71 + ((fTempPerm1192 == fTempPerm1193) ? fTempPerm1192 : fThen435)))
                    * (float(iTempPerm1194 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm1194)))))
                       + float(iTempPerm1194 == 0)
                       + float(
                         (iTempPerm1194 > 0)
                         * int(std::pow(2.0f, float(iTempPerm1194)))));
                  fTempPerm1196 = fTempPerm1155 + fTempPerm1144 + fTempPerm1143
                    + fTempPerm1142 + fTempPerm1195;
                  iTempPerm1197 = int(fTempPerm1195);
                }
                if (((iControl[67] & iTempPerm28)
                     | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))))
                {
                  fTempPerm1198 = fRec225[1]
                    + fTempPerm937
                      * (fTempPerm1196 - (float(iTempPerm1197) + fRec226[1]));
                  fTempPerm1199 = fTempPerm1198 / fTempPerm957;
                  fRec225[0] = 2.0f * fTempPerm1199 - fRec225[1];
                  fTempPerm1200
                    = fRec226[1] + (fTempPerm937 * fTempPerm1198) / fTempPerm957;
                  fRec226[0] = 2.0f * fTempPerm1200 - fRec226[1];
                  fRec227 = fTempPerm1200;
                }
                if (((iControl[67] & iTempPerm26)
                     | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))))
                {
                  fTempPerm1201 = fTempPerm937
                    * (fTempPerm1196 - (float(iTempPerm1197) + fRec230[1]));
                  fTempPerm1202
                    = (fTempPerm937
                       * ((fRec230[1] + (fTempPerm1201 + 0.215215757f * fTempPerm1012 * fRec228[1]) / fTempPerm964 + fTempPerm966 * fRec229[1]) / fTempPerm967 - fRec228[1]))
                    / fTempPerm964;
                  fRec228[0] = fRec228[1] + 2.0f * fTempPerm1202;
                  fTempPerm1203 = fRec228[1] + fTempPerm1202;
                  fRec229[0] = fRec229[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm1203 - fRec229[1]))
                      / fTempPerm964;
                  fRec230[0] = fRec230[1] + 2.0f * fTempPerm1201 / fTempPerm964;
                  fRec231 = fTempPerm1203;
                }
                if (((iControl[67] & iTempPerm24)
                     | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))))
                {
                  fTempPerm1204 = fTempPerm1196
                    - (float(iTempPerm1197) + fRec233[1] + fTempPerm956 * fRec234[1]);
                  fTempPerm1205 = (fTempPerm937 * fTempPerm1204) / fTempPerm957;
                  fTempPerm1206 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec234[1] + fTempPerm1205));
                  fTempPerm1207
                    = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1206);
                  fTempPerm1208 = fTempPerm937 * fTempPerm1206 * fTempPerm1207;
                  fRec232 = fRec233[1] + fTempPerm1208;
                  fRec233[0] = fRec233[1] + 2.0f * fTempPerm1208;
                  fTempPerm1209 = fTempPerm1206 * fTempPerm1207;
                  fRec234[0] = fTempPerm1205 + fTempPerm1209;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fTempPerm1210 = fTempPerm1196 - float(iTempPerm1197);
                  fTempPerm1211
                    = (fTempPerm934
                       * (fTempPerm936 * fRec227 + fTempPerm961 * fRec231 + fTempPerm971 * fRec232))
                      / fTempPerm978
                    + fTempPerm980 * fTempPerm1210;
                  fVec38[0] = fTempPerm1211;
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fTempPerm1212 = fTempPerm1211 - fVec38[1];
                }
                float fElse436 = fConst0 * fTempPerm1212;
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
                  fRec236[0]
                    = ((std::fabs(fTempPerm1212) < 0.5f) ? fElse436 : fRec236[1]);
                }
                if ((iControl[67])) {
                  fTempPerm1213 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec236[0])))));
                  fTempPerm1214 = 1.0f - fTempPerm1213;
                }
                if ((iControl[67] | iControl[60])) {
                  fTempPerm1215 = float(int(fTempPerm1211));
                }
                float fThen437 = fTempPerm1215 + -1.0f;
                float fThen438 = ((fTempPerm1211 >= 0.0f) ? fTempPerm1215 : fThen437);
                if ((iControl[67] | iControl[60])) {
                  fTempPerm1216
                    = ((fTempPerm1211 == fTempPerm1215) ? fTempPerm1211 : fThen438);
                  fTempPerm1217 = fTempPerm1211 - fTempPerm1216;
                  fVec39[0] = fTempPerm1217;
                  iTempPerm1218 = fTempPerm1217 < 0.5f;
                  iVec40[0] = iTempPerm1218;
                }
                if ((iControl[67])) {
                  iTempPerm1219 = (iVec40[1] <= 0) & (iTempPerm1218 > 0);
                  fRec241[0] = fRec241[1] * float(1 - iTempPerm1219)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm1219);
                  fTempPerm1220 = fTempPerm1213 + 1.0f;
                  fRec240[0] = 0.0f
                    - (fTempPerm1214 * fRec240[1] - (fRec241[0] + fRec241[1]))
                      / fTempPerm1220;
                  fRec239[0] = 0.0f
                    - (fTempPerm1214 * fRec239[1] - (fRec240[0] + fRec240[1]))
                      / fTempPerm1220;
                  fRec238[0] = 0.0f
                    - (fTempPerm1214 * fRec238[1] - (fRec239[0] + fRec239[1]))
                      / fTempPerm1220;
                  fRec237[0] = 0.0f
                    - (fTempPerm1214 * fRec237[1] - (fRec238[0] + fRec238[1]))
                      / fTempPerm1220;
                  fRec235[0] = 0.0f
                    - (fRec235[1] * fTempPerm1214 - (fRec237[0] + fRec237[1]))
                      / fTempPerm1220;
                  fTempPerm1221 = std::sin(6.28318548f * fTempPerm1211)
                    * (fTempPerm1175 * (fRec235[0] + -1.0f) + 1.0f);
                  fTempPerm1222 = fTempPerm1185 + fTempPerm1186 * fTempPerm1187
                    + fTempPerm1189
                      * (fTempPerm1221 - (fTempPerm1185 + fTempPerm1186 * (fTempPerm1187 - fRec235[0] - fTempPerm1221)));
                }
                if ((iControl[66]
                     | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
                  fTempPerm1223 = fTempPerm1173
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec219[0] - fConst7))));
                }
                if ((iControl[66])) {
                  fTempPerm1224 = 0.25f * fTempPerm1223;
                  fTempPerm1225 = fTempPerm1171 + 0.75f - fTempPerm1224;
                  fTempPerm1226 = float(int(fTempPerm1225));
                }
                float fThen439 = fTempPerm1226 + -1.0f;
                float fThen440 = ((fTempPerm1225 >= 0.0f) ? fTempPerm1226 : fThen439);
                if ((iControl[66])) {
                  fTempPerm1227
                    = ((fTempPerm1225 == fTempPerm1226) ? fTempPerm1225 : fThen440);
                  fTempPerm1228 = 0.75f - (fTempPerm1224 + fTempPerm1227);
                }
                if ((iControl[66] | (iControl[64] | iControl[62]))) {
                  fTempPerm1229 = 1.0f - fTempPerm1223;
                }
                if ((iControl[66] | iControl[62])) {
                  fTempPerm1230 = 0.5f * fTempPerm1229;
                }
                if ((iControl[66])) {
                  fTempPerm1231 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1230));
                  fTempPerm1232 = 0.5f - fTempPerm1231;
                }
                if ((iControl[66] | iControl[63])) {
                  fTempPerm1233 = fTempPerm1223 + 1.0f;
                }
                if ((iControl[66])) {
                  fTempPerm1234 = std::cos(
                    6.28318548f
                    * (fTempPerm1171 + std::min<float>(((fTempPerm1171 + fTempPerm1228) * fTempPerm1232) / fTempPerm1231, (fTempPerm1232 * ((fTempPerm1227 + 0.25f * fTempPerm1233) - fTempPerm1171)) / (1.0f - fTempPerm1231)) + fTempPerm1228));
                }
                if ((iControl[66]
                     | (iControl[65] | (iControl[64] | (iControl[63] | iControl[62]))))) {
                  fTempPerm1235 = fTempPerm1173
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec236[0] - fConst7))));
                }
                if ((iControl[66])) {
                  fTempPerm1236 = 0.25f * fTempPerm1235;
                  fTempPerm1237 = fTempPerm1211 + 0.75f - fTempPerm1236;
                  fTempPerm1238 = float(int(fTempPerm1237));
                }
                float fThen441 = fTempPerm1238 + -1.0f;
                float fThen442 = ((fTempPerm1237 >= 0.0f) ? fTempPerm1238 : fThen441);
                if ((iControl[66])) {
                  fTempPerm1239
                    = ((fTempPerm1237 == fTempPerm1238) ? fTempPerm1237 : fThen442);
                  fTempPerm1240 = 0.75f - (fTempPerm1236 + fTempPerm1239);
                }
                if ((iControl[66] | (iControl[64] | iControl[62]))) {
                  fTempPerm1241 = 1.0f - fTempPerm1235;
                }
                if ((iControl[66] | iControl[62])) {
                  fTempPerm1242 = 0.5f * fTempPerm1241;
                }
                if ((iControl[66])) {
                  fTempPerm1243 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1242));
                  fTempPerm1244 = 0.5f - fTempPerm1243;
                }
                if ((iControl[66] | iControl[63])) {
                  fTempPerm1245 = fTempPerm1235 + 1.0f;
                }
                if ((iControl[66])) {
                  fTempPerm1246
                    = fTempPerm1234 + fTempPerm1189 * (std::cos(6.28318548f * (fTempPerm1211 + std::min<float>(((fTempPerm1211 + fTempPerm1240) * fTempPerm1244) / fTempPerm1243, (fTempPerm1244 * ((fTempPerm1239 + 0.25f * fTempPerm1245) - fTempPerm1211)) / (1.0f - fTempPerm1243)) + fTempPerm1240)) - fTempPerm1234);
                }
                if ((iControl[65])) {
                  fTempPerm1247 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1223));
                  fTempPerm1248 = 1.0f - fTempPerm1247;
                  fTempPerm1249 = 0.25f * fTempPerm1248;
                  fTempPerm1250 = fTempPerm1171 - fTempPerm1249;
                  fTempPerm1251 = float(int(fTempPerm1250));
                }
                float fThen443 = fTempPerm1251 + -1.0f;
                float fThen444 = ((fTempPerm1250 >= 0.0f) ? fTempPerm1251 : fThen443);
                if ((iControl[65])) {
                  fTempPerm1252 = fTempPerm1171
                    - (fTempPerm1249
                       + ((fTempPerm1250 == fTempPerm1251) ? fTempPerm1250 : fThen444));
                  fTempPerm1253 = 2.0f * fTempPerm1252;
                  fTempPerm1254 = fTempPerm1253 + 1.0f;
                  fTempPerm1255 = float(int(fTempPerm1254));
                }
                float fThen445 = fTempPerm1255 + -1.0f;
                float fThen446 = ((fTempPerm1254 >= 0.0f) ? fTempPerm1255 : fThen445);
                if ((iControl[65])) {
                  fTempPerm1256
                    = ((fTempPerm1254 == fTempPerm1255) ? fTempPerm1254 : fThen446);
                  fTempPerm1257 = std::cos(
                    3.14159274f
                    * (float(fTempPerm1252 >= 0.5f) + fTempPerm1253 + 1.0f - (fTempPerm1256 + std::min<float>(fTempPerm1253 + 1.0f - fTempPerm1256, (fTempPerm1247 * (fTempPerm1256 - fTempPerm1253)) / fTempPerm1248))));
                  fTempPerm1258 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1235));
                  fTempPerm1259 = 1.0f - fTempPerm1258;
                  fTempPerm1260 = 0.25f * fTempPerm1259;
                  fTempPerm1261 = fTempPerm1211 - fTempPerm1260;
                  fTempPerm1262 = float(int(fTempPerm1261));
                }
                float fThen447 = fTempPerm1262 + -1.0f;
                float fThen448 = ((fTempPerm1261 >= 0.0f) ? fTempPerm1262 : fThen447);
                if ((iControl[65])) {
                  fTempPerm1263 = fTempPerm1211
                    - (fTempPerm1260
                       + ((fTempPerm1261 == fTempPerm1262) ? fTempPerm1261 : fThen448));
                  fTempPerm1264 = 2.0f * fTempPerm1263;
                  fTempPerm1265 = fTempPerm1264 + 1.0f;
                  fTempPerm1266 = float(int(fTempPerm1265));
                }
                float fThen449 = fTempPerm1266 + -1.0f;
                float fThen450 = ((fTempPerm1265 >= 0.0f) ? fTempPerm1266 : fThen449);
                if ((iControl[65])) {
                  fTempPerm1267
                    = ((fTempPerm1265 == fTempPerm1266) ? fTempPerm1265 : fThen450);
                  fTempPerm1268 = fTempPerm1257
                    + fTempPerm1189
                      * (std::cos(3.14159274f * (float(fTempPerm1263 >= 0.5f) + fTempPerm1264 + 1.0f - (fTempPerm1267 + std::min<float>(fTempPerm1264 + 1.0f - fTempPerm1267, (fTempPerm1258 * (fTempPerm1267 - fTempPerm1264)) / fTempPerm1259)))) - fTempPerm1257);
                }
                if ((iControl[64])) {
                  fTempPerm1269 = 0.25f * fTempPerm1229;
                  fTempPerm1270 = fTempPerm1171 - fTempPerm1269;
                  fTempPerm1271 = float(int(fTempPerm1270));
                }
                float fThen451 = fTempPerm1271 + -1.0f;
                float fThen452 = ((fTempPerm1270 >= 0.0f) ? fTempPerm1271 : fThen451);
                if ((iControl[64])) {
                  fTempPerm1272 = fTempPerm1269
                    + ((fTempPerm1270 == fTempPerm1271) ? fTempPerm1270 : fThen452);
                }
                if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
                  fTempPerm1273 = 1.0f - fTempPerm1171;
                }
                if ((iControl[64])) {
                  fTempPerm1274
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1223));
                  fTempPerm1275 = std::cos(
                    6.28318548f
                    * (fTempPerm1171 - (fTempPerm1272 + std::min<float>(fTempPerm1171 - fTempPerm1272, ((fTempPerm1272 + fTempPerm1273) * fTempPerm1274) / (1.0f - fTempPerm1274)))));
                  fTempPerm1276 = 0.25f * fTempPerm1241;
                  fTempPerm1277 = fTempPerm1211 - fTempPerm1276;
                  fTempPerm1278 = float(int(fTempPerm1277));
                }
                float fThen453 = fTempPerm1278 + -1.0f;
                float fThen454 = ((fTempPerm1277 >= 0.0f) ? fTempPerm1278 : fThen453);
                if ((iControl[64])) {
                  fTempPerm1279 = fTempPerm1276
                    + ((fTempPerm1277 == fTempPerm1278) ? fTempPerm1277 : fThen454);
                }
                if ((iControl[64] | (iControl[63] | (iControl[61] | iControl[59])))) {
                  fTempPerm1280 = 1.0f - fTempPerm1211;
                }
                if ((iControl[64])) {
                  fTempPerm1281
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1235));
                  fTempPerm1282 = fTempPerm1275
                    + fTempPerm1189
                      * (std::cos(6.28318548f * (fTempPerm1211 - (fTempPerm1279 + std::min<float>(fTempPerm1211 - fTempPerm1279, ((fTempPerm1279 + fTempPerm1280) * fTempPerm1281) / (1.0f - fTempPerm1281))))) - fTempPerm1275);
                }
                if ((iControl[63])) {
                  fTempPerm1283 = 0.125f * fTempPerm1233;
                  fTempPerm1284 = fTempPerm1171 - fTempPerm1283;
                  fTempPerm1285 = float(int(fTempPerm1284));
                }
                float fThen455 = fTempPerm1285 + -1.0f;
                float fThen456 = ((fTempPerm1284 >= 0.0f) ? fTempPerm1285 : fThen455);
                if ((iControl[63])) {
                  fTempPerm1286 = fTempPerm1283
                    + ((fTempPerm1284 == fTempPerm1285) ? fTempPerm1284 : fThen456);
                  fTempPerm1287
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1223));
                  fTempPerm1288 = 0.49000001f * fTempPerm1287;
                  fTempPerm1289 = std::cos(
                    12.566371f
                    * ((fTempPerm1171 + std::min<float>(0.49000001f * ((fTempPerm1171 - fTempPerm1286) * fTempPerm1287) / (0.5f - fTempPerm1288), 0.49000001f * (fTempPerm1287 * (fTempPerm1286 + fTempPerm1273)) / (fTempPerm1288 + 0.5f))) - fTempPerm1286));
                  fTempPerm1290 = 0.125f * fTempPerm1245;
                  fTempPerm1291 = fTempPerm1211 - fTempPerm1290;
                  fTempPerm1292 = float(int(fTempPerm1291));
                }
                float fThen457 = fTempPerm1292 + -1.0f;
                float fThen458 = ((fTempPerm1291 >= 0.0f) ? fTempPerm1292 : fThen457);
                if ((iControl[63])) {
                  fTempPerm1293 = fTempPerm1290
                    + ((fTempPerm1291 == fTempPerm1292) ? fTempPerm1291 : fThen458);
                  fTempPerm1294
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1235));
                  fTempPerm1295 = 0.49000001f * fTempPerm1294;
                  fTempPerm1296
                    = fTempPerm1289 + fTempPerm1189 * (std::cos(12.566371f * ((fTempPerm1211 + std::min<float>(0.49000001f * ((fTempPerm1211 - fTempPerm1293) * fTempPerm1294) / (0.5f - fTempPerm1295), 0.49000001f * (fTempPerm1294 * (fTempPerm1293 + fTempPerm1280)) / (fTempPerm1295 + 0.5f))) - fTempPerm1293)) - fTempPerm1289);
                }
                if ((iControl[62])) {
                  fTempPerm1297
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1223) + 1.0f);
                  fTempPerm1298 = fTempPerm1171 - fTempPerm1297;
                  fTempPerm1299 = float(int(fTempPerm1298));
                }
                float fThen459 = fTempPerm1299 + -1.0f;
                float fThen460 = ((fTempPerm1298 >= 0.0f) ? fTempPerm1299 : fThen459);
                if ((iControl[62])) {
                  fTempPerm1300 = fTempPerm1297
                    + ((fTempPerm1298 == fTempPerm1299) ? fTempPerm1298 : fThen460);
                  fTempPerm1301 = fTempPerm1171 - fTempPerm1300;
                }
                float fThen461 = 0.5f
                  * ((fTempPerm1171 + -0.5f - fTempPerm1300)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1230))
                     + 1.0f);
                if ((iControl[62])) {
                  fTempPerm1302 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm1301 < 0.5f) ? fTempPerm1301 : fThen461)));
                  fTempPerm1303
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1235) + 1.0f);
                  fTempPerm1304 = fTempPerm1211 - fTempPerm1303;
                  fTempPerm1305 = float(int(fTempPerm1304));
                }
                float fThen462 = fTempPerm1305 + -1.0f;
                float fThen463 = ((fTempPerm1304 >= 0.0f) ? fTempPerm1305 : fThen462);
                if ((iControl[62])) {
                  fTempPerm1306 = fTempPerm1303
                    + ((fTempPerm1304 == fTempPerm1305) ? fTempPerm1304 : fThen463);
                  fTempPerm1307 = fTempPerm1211 - fTempPerm1306;
                }
                float fThen464 = 0.5f
                  * ((fTempPerm1211 + -0.5f - fTempPerm1306)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1242))
                     + 1.0f);
                if ((iControl[62])) {
                  fTempPerm1308 = fTempPerm1302
                    + fTempPerm1189
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1307 < 0.5f) ? fTempPerm1307 : fThen464))) - fTempPerm1302);
                }
                if ((iControl[61] | iControl[59])) {
                  fTempPerm1309 = fTempPerm1171
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec219[0] * fControl[692] * fTempPerm1172))
                                      / fRec219[0]);
                }
                if ((iControl[61])) {
                  fTempPerm1310 = fTempPerm1309 + 1.0f;
                  fTempPerm1311 = float(int(fTempPerm1310));
                }
                float fThen465 = fTempPerm1311 + -1.0f;
                float fThen466 = ((fTempPerm1310 >= 0.0f) ? fTempPerm1311 : fThen465);
                if ((iControl[61])) {
                  fTempPerm1312 = (0.0f - fTempPerm1273)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm1309 + 1.0f - ((fTempPerm1310 == fTempPerm1311) ? fTempPerm1310 : fThen466))));
                }
                if ((iControl[61] | iControl[59])) {
                  fTempPerm1313 = fTempPerm1211
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec236[0] * fControl[692] * fTempPerm1172))
                                      / fRec236[0]);
                }
                if ((iControl[61])) {
                  fTempPerm1314 = fTempPerm1313 + 1.0f;
                  fTempPerm1315 = float(int(fTempPerm1314));
                }
                float fThen467 = fTempPerm1315 + -1.0f;
                float fThen468 = ((fTempPerm1314 >= 0.0f) ? fTempPerm1315 : fThen467);
                if ((iControl[61])) {
                  fTempPerm1316 = fTempPerm1312
                    + fTempPerm1189
                      * ((0.0f - fTempPerm1280) * (1.0f - std::cos(6.28318548f * (fTempPerm1313 + 1.0f - ((fTempPerm1314 == fTempPerm1315) ? fTempPerm1314 : fThen468)))) - fTempPerm1312)
                    + 1.0f;
                }
                float fThen469 = 2.0f * (1.0f - fTempPerm1181);
                float fElse469 = 2.0f * fTempPerm1181;
                if ((iControl[60])) {
                  fTempPerm1317 = fTempPerm1171 - (fTempPerm1180 + fVec36[1]);
                }
                float fElse470 = fConst0 * fTempPerm1317;
                if ((iControl[60])) {
                  fRec242[0]
                    = ((std::fabs(fTempPerm1317) < 0.5f) ? fElse470 : fRec242[1]);
                  fTempPerm1318 = fTempPerm1181
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec242[0] * fControl[692] * fTempPerm1172))
                                      / fRec242[0]);
                  fTempPerm1319 = fTempPerm1318 + 1.0f;
                  fTempPerm1320 = float(int(fTempPerm1319));
                }
                float fThen471 = fTempPerm1320 + -1.0f;
                float fThen472 = ((fTempPerm1319 >= 0.0f) ? fTempPerm1320 : fThen471);
                if ((iControl[60])) {
                  fTempPerm1321 = ((iTempPerm1182) ? fElse469 : fThen469)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm1318 + 1.0f - ((fTempPerm1319 == fTempPerm1320) ? fTempPerm1319 : fThen472)))
                       + 1.0f);
                }
                float fThen473 = 2.0f * (1.0f - fTempPerm1217);
                float fElse473 = 2.0f * fTempPerm1217;
                if ((iControl[60])) {
                  fTempPerm1322 = fTempPerm1211 - (fTempPerm1216 + fVec39[1]);
                }
                float fElse474 = fConst0 * fTempPerm1322;
                if ((iControl[60])) {
                  fRec243[0]
                    = ((std::fabs(fTempPerm1322) < 0.5f) ? fElse474 : fRec243[1]);
                  fTempPerm1323 = fTempPerm1217
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec243[0] * fControl[692] * fTempPerm1172))
                                      / fRec243[0]);
                  fTempPerm1324 = fTempPerm1323 + 1.0f;
                  fTempPerm1325 = float(int(fTempPerm1324));
                }
                float fThen475 = fTempPerm1325 + -1.0f;
                float fThen476 = ((fTempPerm1324 >= 0.0f) ? fTempPerm1325 : fThen475);
                if ((iControl[60])) {
                  fTempPerm1326 = fTempPerm1321
                    + fTempPerm1189
                      * (((iTempPerm1218) ? fElse473 : fThen473) * (std::cos(6.28318548f * (fTempPerm1323 + 1.0f - ((fTempPerm1324 == fTempPerm1325) ? fTempPerm1324 : fThen476))) + 1.0f) - fTempPerm1321)
                    + -1.0f;
                }
                if ((iControl[59])) {
                  fTempPerm1327 = float(int(fTempPerm1309));
                }
                float fThen477 = fTempPerm1327 + -1.0f;
                float fThen478 = ((fTempPerm1309 >= 0.0f) ? fTempPerm1327 : fThen477);
                if ((iControl[59])) {
                  fTempPerm1328
                    = std::min<float>(1.0f, 2.0f * fTempPerm1273)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm1309 - ((fTempPerm1309 == fTempPerm1327) ? fTempPerm1309 : fThen478)));
                  fTempPerm1329 = float(int(fTempPerm1313));
                }
                float fThen479 = fTempPerm1329 + -1.0f;
                float fThen480 = ((fTempPerm1313 >= 0.0f) ? fTempPerm1329 : fThen479);
                if ((iControl[59])) {
                  fTempPerm1330 = fTempPerm1328
                    + fTempPerm1189
                      * (std::min<float>(1.0f, 2.0f * fTempPerm1280) * std::sin(6.28318548f * (fTempPerm1313 - ((fTempPerm1313 == fTempPerm1329) ? fTempPerm1313 : fThen480))) - fTempPerm1328);
                }
                fRec169[0] = fControl[322] * fTempPerm1222 + fControl[321] * fTempPerm1246
                  + fControl[320] * fTempPerm1268 + fControl[319] * fTempPerm1282
                  + fControl[318] * fTempPerm1296 + fControl[317] * fTempPerm1308
                  + fControl[316] * fTempPerm1316 + fControl[315] * fTempPerm1326
                  + fControl[314] * fTempPerm1330;
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm1331 = fRec171[1]
                    * (fControl[714]
                       + (fTemp52 * (fTempPerm497 - fTempPerm499) + fControl[1051] * fTemp54 + fTemp56 * (fTempPerm496 - fTempPerm498))
                       - fControl[713]);
                  fTempPerm1332 = fRec170[1]
                    * (fControl[734]
                       + (fTemp52 * (fTempPerm502 - fTempPerm504) + fControl[1052] * fTemp54 + fTemp56 * (fTempPerm501 - fTempPerm503))
                       - fControl[733]);
                  fTempPerm1333 = fRec169[1]
                    * (fControl[754]
                       + (fTemp52 * (fTempPerm507 - fTempPerm509) + fControl[1053] * fTemp54 + fTemp56 * (fTempPerm506 - fTempPerm508))
                       - fControl[753]);
                  fTempPerm1334 = fControl[774]
                    + (fTemp52 * (fTempPerm512 - fTempPerm514) + fControl[1054] * fTemp54
                       + fTemp56 * (fTempPerm511 - fTempPerm513))
                    - fControl[773];
                  fTempPerm1335 = fControl[794]
                    + (fTemp52 * (fTempPerm517 - fTempPerm519) + fControl[1055] * fTemp54
                       + fTemp56 * (fTempPerm516 - fTempPerm518))
                    - fControl[793];
                  fTempPerm1336 = float(int(fTempPerm1335));
                }
                float fThen481 = fTempPerm1336 + -1.0f;
                float fThen482 = ((fTempPerm1335 >= 0.0f) ? fTempPerm1336 : fThen481);
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm1337
                    = ((fTempPerm1335 == fTempPerm1336) ? fTempPerm1335 : fThen482);
                  fTempPerm1338 = fTempPerm1337
                    + float((fTempPerm1335 < 0.0f) & (fTempPerm1335 != fTempPerm1337));
                  fTempPerm1339 = fTempPerm55
                    + 0.00390625f * fTempPerm1334 * std::pow(2.0f, 0.0f - fTempPerm1338);
                  fTempPerm1340 = fTempPerm1339 - fTempPerm71;
                  fTempPerm1341 = float(int(fTempPerm1340));
                }
                float fThen483 = fTempPerm1341 + -1.0f;
                float fThen484 = ((fTempPerm1340 >= 0.0f) ? fTempPerm1341 : fThen483);
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  iTempPerm1342 = int(fTempPerm1338);
                  fTempPerm1343 = 256.0f
                    * (fTempPerm1339
                       - (fTempPerm71 + ((fTempPerm1340 == fTempPerm1341) ? fTempPerm1340 : fThen484)))
                    * (float(iTempPerm1342 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm1342)))))
                       + float(iTempPerm1342 == 0)
                       + float(
                         (iTempPerm1342 > 0)
                         * int(std::pow(2.0f, float(iTempPerm1342)))));
                  fTempPerm1344 = fRec168[1]
                    * (fControl[814]
                       + (fTemp52 * (fTempPerm530 - fTempPerm532) + fControl[1056] * fTemp54 + fTemp56 * (fTempPerm529 - fTempPerm531))
                       - fControl[813]);
                  fTempPerm1345 = fTempPerm1331 + fTempPerm1332 + fTempPerm1333
                    + fTempPerm1343 + fTempPerm1344;
                  iTempPerm1346 = int(fTempPerm1343);
                }
                if (((iControl[58] & iTempPerm28)
                     | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))))
                {
                  fTempPerm1347 = fRec244[1]
                    + fTempPerm937
                      * (fTempPerm1345 - (float(iTempPerm1346) + fRec245[1]));
                  fTempPerm1348 = fTempPerm1347 / fTempPerm957;
                  fRec244[0] = 2.0f * fTempPerm1348 - fRec244[1];
                  fTempPerm1349
                    = fRec245[1] + (fTempPerm937 * fTempPerm1347) / fTempPerm957;
                  fRec245[0] = 2.0f * fTempPerm1349 - fRec245[1];
                  fRec246 = fTempPerm1349;
                }
                if (((iControl[58] & iTempPerm26)
                     | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))))
                {
                  fTempPerm1350 = fTempPerm937
                    * (fTempPerm1345 - (float(iTempPerm1346) + fRec249[1]));
                  fTempPerm1351
                    = (fTempPerm937
                       * ((fRec249[1] + (fTempPerm1350 + 0.215215757f * fTempPerm1012 * fRec247[1]) / fTempPerm964 + fTempPerm966 * fRec248[1]) / fTempPerm967 - fRec247[1]))
                    / fTempPerm964;
                  fRec247[0] = fRec247[1] + 2.0f * fTempPerm1351;
                  fTempPerm1352 = fRec247[1] + fTempPerm1351;
                  fRec248[0] = fRec248[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm1352 - fRec248[1]))
                      / fTempPerm964;
                  fRec249[0] = fRec249[1] + 2.0f * fTempPerm1350 / fTempPerm964;
                  fRec250 = fTempPerm1352;
                }
                if (((iControl[58] & iTempPerm24)
                     | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))))
                {
                  fTempPerm1353 = fTempPerm1345
                    - (float(iTempPerm1346) + fRec252[1] + fTempPerm956 * fRec253[1]);
                  fTempPerm1354 = (fTempPerm937 * fTempPerm1353) / fTempPerm957;
                  fTempPerm1355 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec253[1] + fTempPerm1354));
                  fTempPerm1356
                    = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1355);
                  fTempPerm1357 = fTempPerm937 * fTempPerm1355 * fTempPerm1356;
                  fRec251 = fRec252[1] + fTempPerm1357;
                  fRec252[0] = fRec252[1] + 2.0f * fTempPerm1357;
                  fTempPerm1358 = fTempPerm1355 * fTempPerm1356;
                  fRec253[0] = fTempPerm1354 + fTempPerm1358;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm1359 = fTempPerm1345 - float(iTempPerm1346);
                  fTempPerm1360
                    = (fTempPerm934
                       * (fTempPerm936 * fRec246 + fTempPerm961 * fRec250 + fTempPerm971 * fRec251))
                      / fTempPerm978
                    + fTempPerm980 * fTempPerm1359;
                  fVec41[0] = fTempPerm1360;
                  fTempPerm1361 = fControl[835]
                    + (fTemp52 * (fTempPerm551 - fTempPerm553) + fControl[1057] * fTemp54
                       + fTemp56 * (fTempPerm550 - fTempPerm552))
                    - fControl[834];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))))
                {
                  fTempPerm1362 = fControl[833] * fTempPerm1361;
                }
                if ((iControl[58])) {
                  fTempPerm1363 = 2.0f * fTempPerm1362;
                  fTempPerm1364 = std::min<float>(1.0f, fTempPerm1363);
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fTempPerm1365 = fTempPerm1360 - fVec41[1];
                }
                float fElse485 = fConst0 * fTempPerm1365;
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fRec255[0]
                    = ((std::fabs(fTempPerm1365) < 0.5f) ? fElse485 : fRec255[1]);
                }
                if ((iControl[58])) {
                  fTempPerm1366 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec255[0])))));
                  fTempPerm1367 = 1.0f - fTempPerm1366;
                }
                if ((iControl[58] | iControl[51])) {
                  fTempPerm1368 = float(int(fTempPerm1360));
                }
                float fThen486 = fTempPerm1368 + -1.0f;
                float fThen487 = ((fTempPerm1360 >= 0.0f) ? fTempPerm1368 : fThen486);
                if ((iControl[58] | iControl[51])) {
                  fTempPerm1369
                    = ((fTempPerm1360 == fTempPerm1368) ? fTempPerm1360 : fThen487);
                  fTempPerm1370 = fTempPerm1360 - fTempPerm1369;
                  fVec42[0] = fTempPerm1370;
                  iTempPerm1371 = fTempPerm1370 < 0.5f;
                  iVec43[0] = iTempPerm1371;
                }
                if ((iControl[58])) {
                  iTempPerm1372 = (iVec43[1] <= 0) & (iTempPerm1371 > 0);
                  fRec260[0] = fRec260[1] * float(1 - iTempPerm1372)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm1372);
                  fTempPerm1373 = fTempPerm1366 + 1.0f;
                  fRec259[0] = 0.0f
                    - (fTempPerm1367 * fRec259[1] - (fRec260[0] + fRec260[1]))
                      / fTempPerm1373;
                  fRec258[0] = 0.0f
                    - (fTempPerm1367 * fRec258[1] - (fRec259[0] + fRec259[1]))
                      / fTempPerm1373;
                  fRec257[0] = 0.0f
                    - (fTempPerm1367 * fRec257[1] - (fRec258[0] + fRec258[1]))
                      / fTempPerm1373;
                  fRec256[0] = 0.0f
                    - (fTempPerm1367 * fRec256[1] - (fRec257[0] + fRec257[1]))
                      / fTempPerm1373;
                  fRec254[0] = 0.0f
                    - (fRec254[1] * fTempPerm1367 - (fRec256[0] + fRec256[1]))
                      / fTempPerm1373;
                  fTempPerm1374 = std::sin(6.28318548f * fTempPerm1360)
                    * (fTempPerm1364 * (fRec254[0] + -1.0f) + 1.0f);
                  fTempPerm1375 = std::max<float>(1.0f, fTempPerm1363) + -1.0f;
                  fTempPerm1376 = fRec254[0] - fTempPerm1374;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm1377 = std::fabs(fTempPerm1335);
                  fTempPerm1378 = fTempPerm1377 - float(int(fTempPerm1377));
                  fTempPerm1379 = fTempPerm1337 + float(fTempPerm1335 > 0.0f);
                  fTempPerm1380 = fTempPerm55
                    + 0.00390625f * fTempPerm1334 * std::pow(2.0f, 0.0f - fTempPerm1379);
                  fTempPerm1381 = fTempPerm1380 - fTempPerm71;
                  fTempPerm1382 = float(int(fTempPerm1381));
                }
                float fThen488 = fTempPerm1382 + -1.0f;
                float fThen489 = ((fTempPerm1381 >= 0.0f) ? fTempPerm1382 : fThen488);
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  iTempPerm1383 = int(fTempPerm1379);
                  fTempPerm1384 = 256.0f
                    * (fTempPerm1380
                       - (fTempPerm71 + ((fTempPerm1381 == fTempPerm1382) ? fTempPerm1381 : fThen489)))
                    * (float(iTempPerm1383 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm1383)))))
                       + float(iTempPerm1383 == 0)
                       + float(
                         (iTempPerm1383 > 0)
                         * int(std::pow(2.0f, float(iTempPerm1383)))));
                  fTempPerm1385 = fTempPerm1344 + fTempPerm1333 + fTempPerm1332
                    + fTempPerm1331 + fTempPerm1384;
                  iTempPerm1386 = int(fTempPerm1384);
                }
                if (((iControl[58] & iTempPerm28)
                     | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))))
                {
                  fTempPerm1387 = fRec261[1]
                    + fTempPerm937
                      * (fTempPerm1385 - (float(iTempPerm1386) + fRec262[1]));
                  fTempPerm1388 = fTempPerm1387 / fTempPerm957;
                  fRec261[0] = 2.0f * fTempPerm1388 - fRec261[1];
                  fTempPerm1389
                    = fRec262[1] + (fTempPerm937 * fTempPerm1387) / fTempPerm957;
                  fRec262[0] = 2.0f * fTempPerm1389 - fRec262[1];
                  fRec263 = fTempPerm1389;
                }
                if (((iControl[58] & iTempPerm26)
                     | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))))
                {
                  fTempPerm1390 = fTempPerm937
                    * (fTempPerm1385 - (float(iTempPerm1386) + fRec266[1]));
                  fTempPerm1391
                    = (fTempPerm937
                       * ((fRec266[1] + (fTempPerm1390 + 0.215215757f * fTempPerm1012 * fRec264[1]) / fTempPerm964 + fTempPerm966 * fRec265[1]) / fTempPerm967 - fRec264[1]))
                    / fTempPerm964;
                  fRec264[0] = fRec264[1] + 2.0f * fTempPerm1391;
                  fTempPerm1392 = fRec264[1] + fTempPerm1391;
                  fRec265[0] = fRec265[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm1392 - fRec265[1]))
                      / fTempPerm964;
                  fRec266[0] = fRec266[1] + 2.0f * fTempPerm1390 / fTempPerm964;
                  fRec267 = fTempPerm1392;
                }
                if (((iControl[58] & iTempPerm24)
                     | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))))
                {
                  fTempPerm1393 = fTempPerm1385
                    - (float(iTempPerm1386) + fRec269[1] + fTempPerm956 * fRec270[1]);
                  fTempPerm1394 = (fTempPerm937 * fTempPerm1393) / fTempPerm957;
                  fTempPerm1395 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec270[1] + fTempPerm1394));
                  fTempPerm1396
                    = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1395);
                  fTempPerm1397 = fTempPerm937 * fTempPerm1395 * fTempPerm1396;
                  fRec268 = fRec269[1] + fTempPerm1397;
                  fRec269[0] = fRec269[1] + 2.0f * fTempPerm1397;
                  fTempPerm1398 = fTempPerm1395 * fTempPerm1396;
                  fRec270[0] = fTempPerm1394 + fTempPerm1398;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fTempPerm1399 = fTempPerm1385 - float(iTempPerm1386);
                  fTempPerm1400
                    = (fTempPerm934
                       * (fTempPerm936 * fRec263 + fTempPerm961 * fRec267 + fTempPerm971 * fRec268))
                      / fTempPerm978
                    + fTempPerm980 * fTempPerm1399;
                  fVec44[0] = fTempPerm1400;
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fTempPerm1401 = fTempPerm1400 - fVec44[1];
                }
                float fElse490 = fConst0 * fTempPerm1401;
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
                  fRec272[0]
                    = ((std::fabs(fTempPerm1401) < 0.5f) ? fElse490 : fRec272[1]);
                }
                if ((iControl[58])) {
                  fTempPerm1402 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec272[0])))));
                  fTempPerm1403 = 1.0f - fTempPerm1402;
                }
                if ((iControl[58] | iControl[51])) {
                  fTempPerm1404 = float(int(fTempPerm1400));
                }
                float fThen491 = fTempPerm1404 + -1.0f;
                float fThen492 = ((fTempPerm1400 >= 0.0f) ? fTempPerm1404 : fThen491);
                if ((iControl[58] | iControl[51])) {
                  fTempPerm1405
                    = ((fTempPerm1400 == fTempPerm1404) ? fTempPerm1400 : fThen492);
                  fTempPerm1406 = fTempPerm1400 - fTempPerm1405;
                  fVec45[0] = fTempPerm1406;
                  iTempPerm1407 = fTempPerm1406 < 0.5f;
                  iVec46[0] = iTempPerm1407;
                }
                if ((iControl[58])) {
                  iTempPerm1408 = (iVec46[1] <= 0) & (iTempPerm1407 > 0);
                  fRec277[0] = fRec277[1] * float(1 - iTempPerm1408)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm1408);
                  fTempPerm1409 = fTempPerm1402 + 1.0f;
                  fRec276[0] = 0.0f
                    - (fTempPerm1403 * fRec276[1] - (fRec277[0] + fRec277[1]))
                      / fTempPerm1409;
                  fRec275[0] = 0.0f
                    - (fTempPerm1403 * fRec275[1] - (fRec276[0] + fRec276[1]))
                      / fTempPerm1409;
                  fRec274[0] = 0.0f
                    - (fTempPerm1403 * fRec274[1] - (fRec275[0] + fRec275[1]))
                      / fTempPerm1409;
                  fRec273[0] = 0.0f
                    - (fTempPerm1403 * fRec273[1] - (fRec274[0] + fRec274[1]))
                      / fTempPerm1409;
                  fRec271[0] = 0.0f
                    - (fRec271[1] * fTempPerm1403 - (fRec273[0] + fRec273[1]))
                      / fTempPerm1409;
                  fTempPerm1410 = std::sin(6.28318548f * fTempPerm1400)
                    * (fTempPerm1364 * (fRec271[0] + -1.0f) + 1.0f);
                  fTempPerm1411 = fTempPerm1374 + fTempPerm1375 * fTempPerm1376
                    + fTempPerm1378
                      * (fTempPerm1410 - (fTempPerm1374 + fTempPerm1375 * (fTempPerm1376 - fRec271[0] - fTempPerm1410)));
                }
                if ((iControl[57]
                     | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
                  fTempPerm1412 = fTempPerm1362
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec255[0] - fConst7))));
                }
                if ((iControl[57])) {
                  fTempPerm1413 = 0.25f * fTempPerm1412;
                  fTempPerm1414 = fTempPerm1360 + 0.75f - fTempPerm1413;
                  fTempPerm1415 = float(int(fTempPerm1414));
                }
                float fThen493 = fTempPerm1415 + -1.0f;
                float fThen494 = ((fTempPerm1414 >= 0.0f) ? fTempPerm1415 : fThen493);
                if ((iControl[57])) {
                  fTempPerm1416
                    = ((fTempPerm1414 == fTempPerm1415) ? fTempPerm1414 : fThen494);
                  fTempPerm1417 = 0.75f - (fTempPerm1413 + fTempPerm1416);
                }
                if ((iControl[57] | (iControl[55] | iControl[53]))) {
                  fTempPerm1418 = 1.0f - fTempPerm1412;
                }
                if ((iControl[57] | iControl[53])) {
                  fTempPerm1419 = 0.5f * fTempPerm1418;
                }
                if ((iControl[57])) {
                  fTempPerm1420 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1419));
                  fTempPerm1421 = 0.5f - fTempPerm1420;
                }
                if ((iControl[57] | iControl[54])) {
                  fTempPerm1422 = fTempPerm1412 + 1.0f;
                }
                if ((iControl[57])) {
                  fTempPerm1423 = std::cos(
                    6.28318548f
                    * (fTempPerm1360 + std::min<float>(((fTempPerm1360 + fTempPerm1417) * fTempPerm1421) / fTempPerm1420, (fTempPerm1421 * ((fTempPerm1416 + 0.25f * fTempPerm1422) - fTempPerm1360)) / (1.0f - fTempPerm1420)) + fTempPerm1417));
                }
                if ((iControl[57]
                     | (iControl[56] | (iControl[55] | (iControl[54] | iControl[53]))))) {
                  fTempPerm1424 = fTempPerm1362
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec272[0] - fConst7))));
                }
                if ((iControl[57])) {
                  fTempPerm1425 = 0.25f * fTempPerm1424;
                  fTempPerm1426 = fTempPerm1400 + 0.75f - fTempPerm1425;
                  fTempPerm1427 = float(int(fTempPerm1426));
                }
                float fThen495 = fTempPerm1427 + -1.0f;
                float fThen496 = ((fTempPerm1426 >= 0.0f) ? fTempPerm1427 : fThen495);
                if ((iControl[57])) {
                  fTempPerm1428
                    = ((fTempPerm1426 == fTempPerm1427) ? fTempPerm1426 : fThen496);
                  fTempPerm1429 = 0.75f - (fTempPerm1425 + fTempPerm1428);
                }
                if ((iControl[57] | (iControl[55] | iControl[53]))) {
                  fTempPerm1430 = 1.0f - fTempPerm1424;
                }
                if ((iControl[57] | iControl[53])) {
                  fTempPerm1431 = 0.5f * fTempPerm1430;
                }
                if ((iControl[57])) {
                  fTempPerm1432 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1431));
                  fTempPerm1433 = 0.5f - fTempPerm1432;
                }
                if ((iControl[57] | iControl[54])) {
                  fTempPerm1434 = fTempPerm1424 + 1.0f;
                }
                if ((iControl[57])) {
                  fTempPerm1435
                    = fTempPerm1423 + fTempPerm1378 * (std::cos(6.28318548f * (fTempPerm1400 + std::min<float>(((fTempPerm1400 + fTempPerm1429) * fTempPerm1433) / fTempPerm1432, (fTempPerm1433 * ((fTempPerm1428 + 0.25f * fTempPerm1434) - fTempPerm1400)) / (1.0f - fTempPerm1432)) + fTempPerm1429)) - fTempPerm1423);
                }
                if ((iControl[56])) {
                  fTempPerm1436 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1412));
                  fTempPerm1437 = 1.0f - fTempPerm1436;
                  fTempPerm1438 = 0.25f * fTempPerm1437;
                  fTempPerm1439 = fTempPerm1360 - fTempPerm1438;
                  fTempPerm1440 = float(int(fTempPerm1439));
                }
                float fThen497 = fTempPerm1440 + -1.0f;
                float fThen498 = ((fTempPerm1439 >= 0.0f) ? fTempPerm1440 : fThen497);
                if ((iControl[56])) {
                  fTempPerm1441 = fTempPerm1360
                    - (fTempPerm1438
                       + ((fTempPerm1439 == fTempPerm1440) ? fTempPerm1439 : fThen498));
                  fTempPerm1442 = 2.0f * fTempPerm1441;
                  fTempPerm1443 = fTempPerm1442 + 1.0f;
                  fTempPerm1444 = float(int(fTempPerm1443));
                }
                float fThen499 = fTempPerm1444 + -1.0f;
                float fThen500 = ((fTempPerm1443 >= 0.0f) ? fTempPerm1444 : fThen499);
                if ((iControl[56])) {
                  fTempPerm1445
                    = ((fTempPerm1443 == fTempPerm1444) ? fTempPerm1443 : fThen500);
                  fTempPerm1446 = std::cos(
                    3.14159274f
                    * (float(fTempPerm1441 >= 0.5f) + fTempPerm1442 + 1.0f - (fTempPerm1445 + std::min<float>(fTempPerm1442 + 1.0f - fTempPerm1445, (fTempPerm1436 * (fTempPerm1445 - fTempPerm1442)) / fTempPerm1437))));
                  fTempPerm1447 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1424));
                  fTempPerm1448 = 1.0f - fTempPerm1447;
                  fTempPerm1449 = 0.25f * fTempPerm1448;
                  fTempPerm1450 = fTempPerm1400 - fTempPerm1449;
                  fTempPerm1451 = float(int(fTempPerm1450));
                }
                float fThen501 = fTempPerm1451 + -1.0f;
                float fThen502 = ((fTempPerm1450 >= 0.0f) ? fTempPerm1451 : fThen501);
                if ((iControl[56])) {
                  fTempPerm1452 = fTempPerm1400
                    - (fTempPerm1449
                       + ((fTempPerm1450 == fTempPerm1451) ? fTempPerm1450 : fThen502));
                  fTempPerm1453 = 2.0f * fTempPerm1452;
                  fTempPerm1454 = fTempPerm1453 + 1.0f;
                  fTempPerm1455 = float(int(fTempPerm1454));
                }
                float fThen503 = fTempPerm1455 + -1.0f;
                float fThen504 = ((fTempPerm1454 >= 0.0f) ? fTempPerm1455 : fThen503);
                if ((iControl[56])) {
                  fTempPerm1456
                    = ((fTempPerm1454 == fTempPerm1455) ? fTempPerm1454 : fThen504);
                  fTempPerm1457 = fTempPerm1446
                    + fTempPerm1378
                      * (std::cos(3.14159274f * (float(fTempPerm1452 >= 0.5f) + fTempPerm1453 + 1.0f - (fTempPerm1456 + std::min<float>(fTempPerm1453 + 1.0f - fTempPerm1456, (fTempPerm1447 * (fTempPerm1456 - fTempPerm1453)) / fTempPerm1448)))) - fTempPerm1446);
                }
                if ((iControl[55])) {
                  fTempPerm1458 = 0.25f * fTempPerm1418;
                  fTempPerm1459 = fTempPerm1360 - fTempPerm1458;
                  fTempPerm1460 = float(int(fTempPerm1459));
                }
                float fThen505 = fTempPerm1460 + -1.0f;
                float fThen506 = ((fTempPerm1459 >= 0.0f) ? fTempPerm1460 : fThen505);
                if ((iControl[55])) {
                  fTempPerm1461 = fTempPerm1458
                    + ((fTempPerm1459 == fTempPerm1460) ? fTempPerm1459 : fThen506);
                }
                if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
                  fTempPerm1462 = 1.0f - fTempPerm1360;
                }
                if ((iControl[55])) {
                  fTempPerm1463
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1412));
                  fTempPerm1464 = std::cos(
                    6.28318548f
                    * (fTempPerm1360 - (fTempPerm1461 + std::min<float>(fTempPerm1360 - fTempPerm1461, ((fTempPerm1461 + fTempPerm1462) * fTempPerm1463) / (1.0f - fTempPerm1463)))));
                  fTempPerm1465 = 0.25f * fTempPerm1430;
                  fTempPerm1466 = fTempPerm1400 - fTempPerm1465;
                  fTempPerm1467 = float(int(fTempPerm1466));
                }
                float fThen507 = fTempPerm1467 + -1.0f;
                float fThen508 = ((fTempPerm1466 >= 0.0f) ? fTempPerm1467 : fThen507);
                if ((iControl[55])) {
                  fTempPerm1468 = fTempPerm1465
                    + ((fTempPerm1466 == fTempPerm1467) ? fTempPerm1466 : fThen508);
                }
                if ((iControl[55] | (iControl[54] | (iControl[52] | iControl[50])))) {
                  fTempPerm1469 = 1.0f - fTempPerm1400;
                }
                if ((iControl[55])) {
                  fTempPerm1470
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1424));
                  fTempPerm1471 = fTempPerm1464
                    + fTempPerm1378
                      * (std::cos(6.28318548f * (fTempPerm1400 - (fTempPerm1468 + std::min<float>(fTempPerm1400 - fTempPerm1468, ((fTempPerm1468 + fTempPerm1469) * fTempPerm1470) / (1.0f - fTempPerm1470))))) - fTempPerm1464);
                }
                if ((iControl[54])) {
                  fTempPerm1472 = 0.125f * fTempPerm1422;
                  fTempPerm1473 = fTempPerm1360 - fTempPerm1472;
                  fTempPerm1474 = float(int(fTempPerm1473));
                }
                float fThen509 = fTempPerm1474 + -1.0f;
                float fThen510 = ((fTempPerm1473 >= 0.0f) ? fTempPerm1474 : fThen509);
                if ((iControl[54])) {
                  fTempPerm1475 = fTempPerm1472
                    + ((fTempPerm1473 == fTempPerm1474) ? fTempPerm1473 : fThen510);
                  fTempPerm1476
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1412));
                  fTempPerm1477 = 0.49000001f * fTempPerm1476;
                  fTempPerm1478 = std::cos(
                    12.566371f
                    * ((fTempPerm1360 + std::min<float>(0.49000001f * ((fTempPerm1360 - fTempPerm1475) * fTempPerm1476) / (0.5f - fTempPerm1477), 0.49000001f * (fTempPerm1476 * (fTempPerm1475 + fTempPerm1462)) / (fTempPerm1477 + 0.5f))) - fTempPerm1475));
                  fTempPerm1479 = 0.125f * fTempPerm1434;
                  fTempPerm1480 = fTempPerm1400 - fTempPerm1479;
                  fTempPerm1481 = float(int(fTempPerm1480));
                }
                float fThen511 = fTempPerm1481 + -1.0f;
                float fThen512 = ((fTempPerm1480 >= 0.0f) ? fTempPerm1481 : fThen511);
                if ((iControl[54])) {
                  fTempPerm1482 = fTempPerm1479
                    + ((fTempPerm1480 == fTempPerm1481) ? fTempPerm1480 : fThen512);
                  fTempPerm1483
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1424));
                  fTempPerm1484 = 0.49000001f * fTempPerm1483;
                  fTempPerm1485
                    = fTempPerm1478 + fTempPerm1378 * (std::cos(12.566371f * ((fTempPerm1400 + std::min<float>(0.49000001f * ((fTempPerm1400 - fTempPerm1482) * fTempPerm1483) / (0.5f - fTempPerm1484), 0.49000001f * (fTempPerm1483 * (fTempPerm1482 + fTempPerm1469)) / (fTempPerm1484 + 0.5f))) - fTempPerm1482)) - fTempPerm1478);
                }
                if ((iControl[53])) {
                  fTempPerm1486
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1412) + 1.0f);
                  fTempPerm1487 = fTempPerm1360 - fTempPerm1486;
                  fTempPerm1488 = float(int(fTempPerm1487));
                }
                float fThen513 = fTempPerm1488 + -1.0f;
                float fThen514 = ((fTempPerm1487 >= 0.0f) ? fTempPerm1488 : fThen513);
                if ((iControl[53])) {
                  fTempPerm1489 = fTempPerm1486
                    + ((fTempPerm1487 == fTempPerm1488) ? fTempPerm1487 : fThen514);
                  fTempPerm1490 = fTempPerm1360 - fTempPerm1489;
                }
                float fThen515 = 0.5f
                  * ((fTempPerm1360 + -0.5f - fTempPerm1489)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1419))
                     + 1.0f);
                if ((iControl[53])) {
                  fTempPerm1491 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm1490 < 0.5f) ? fTempPerm1490 : fThen515)));
                  fTempPerm1492
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1424) + 1.0f);
                  fTempPerm1493 = fTempPerm1400 - fTempPerm1492;
                  fTempPerm1494 = float(int(fTempPerm1493));
                }
                float fThen516 = fTempPerm1494 + -1.0f;
                float fThen517 = ((fTempPerm1493 >= 0.0f) ? fTempPerm1494 : fThen516);
                if ((iControl[53])) {
                  fTempPerm1495 = fTempPerm1492
                    + ((fTempPerm1493 == fTempPerm1494) ? fTempPerm1493 : fThen517);
                  fTempPerm1496 = fTempPerm1400 - fTempPerm1495;
                }
                float fThen518 = 0.5f
                  * ((fTempPerm1400 + -0.5f - fTempPerm1495)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1431))
                     + 1.0f);
                if ((iControl[53])) {
                  fTempPerm1497 = fTempPerm1491
                    + fTempPerm1378
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1496 < 0.5f) ? fTempPerm1496 : fThen518))) - fTempPerm1491);
                }
                if ((iControl[52] | iControl[50])) {
                  fTempPerm1498 = fTempPerm1360
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec255[0] * fControl[833] * fTempPerm1361))
                                      / fRec255[0]);
                }
                if ((iControl[52])) {
                  fTempPerm1499 = fTempPerm1498 + 1.0f;
                  fTempPerm1500 = float(int(fTempPerm1499));
                }
                float fThen519 = fTempPerm1500 + -1.0f;
                float fThen520 = ((fTempPerm1499 >= 0.0f) ? fTempPerm1500 : fThen519);
                if ((iControl[52])) {
                  fTempPerm1501 = (0.0f - fTempPerm1462)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm1498 + 1.0f - ((fTempPerm1499 == fTempPerm1500) ? fTempPerm1499 : fThen520))));
                }
                if ((iControl[52] | iControl[50])) {
                  fTempPerm1502 = fTempPerm1400
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec272[0] * fControl[833] * fTempPerm1361))
                                      / fRec272[0]);
                }
                if ((iControl[52])) {
                  fTempPerm1503 = fTempPerm1502 + 1.0f;
                  fTempPerm1504 = float(int(fTempPerm1503));
                }
                float fThen521 = fTempPerm1504 + -1.0f;
                float fThen522 = ((fTempPerm1503 >= 0.0f) ? fTempPerm1504 : fThen521);
                if ((iControl[52])) {
                  fTempPerm1505 = fTempPerm1501
                    + fTempPerm1378
                      * ((0.0f - fTempPerm1469) * (1.0f - std::cos(6.28318548f * (fTempPerm1502 + 1.0f - ((fTempPerm1503 == fTempPerm1504) ? fTempPerm1503 : fThen522)))) - fTempPerm1501)
                    + 1.0f;
                }
                float fThen523 = 2.0f * (1.0f - fTempPerm1370);
                float fElse523 = 2.0f * fTempPerm1370;
                if ((iControl[51])) {
                  fTempPerm1506 = fTempPerm1360 - (fTempPerm1369 + fVec42[1]);
                }
                float fElse524 = fConst0 * fTempPerm1506;
                if ((iControl[51])) {
                  fRec278[0]
                    = ((std::fabs(fTempPerm1506) < 0.5f) ? fElse524 : fRec278[1]);
                  fTempPerm1507 = fTempPerm1370
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec278[0] * fControl[833] * fTempPerm1361))
                                      / fRec278[0]);
                  fTempPerm1508 = fTempPerm1507 + 1.0f;
                  fTempPerm1509 = float(int(fTempPerm1508));
                }
                float fThen525 = fTempPerm1509 + -1.0f;
                float fThen526 = ((fTempPerm1508 >= 0.0f) ? fTempPerm1509 : fThen525);
                if ((iControl[51])) {
                  fTempPerm1510 = ((iTempPerm1371) ? fElse523 : fThen523)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm1507 + 1.0f - ((fTempPerm1508 == fTempPerm1509) ? fTempPerm1508 : fThen526)))
                       + 1.0f);
                }
                float fThen527 = 2.0f * (1.0f - fTempPerm1406);
                float fElse527 = 2.0f * fTempPerm1406;
                if ((iControl[51])) {
                  fTempPerm1511 = fTempPerm1400 - (fTempPerm1405 + fVec45[1]);
                }
                float fElse528 = fConst0 * fTempPerm1511;
                if ((iControl[51])) {
                  fRec279[0]
                    = ((std::fabs(fTempPerm1511) < 0.5f) ? fElse528 : fRec279[1]);
                  fTempPerm1512 = fTempPerm1406
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec279[0] * fControl[833] * fTempPerm1361))
                                      / fRec279[0]);
                  fTempPerm1513 = fTempPerm1512 + 1.0f;
                  fTempPerm1514 = float(int(fTempPerm1513));
                }
                float fThen529 = fTempPerm1514 + -1.0f;
                float fThen530 = ((fTempPerm1513 >= 0.0f) ? fTempPerm1514 : fThen529);
                if ((iControl[51])) {
                  fTempPerm1515 = fTempPerm1510
                    + fTempPerm1378
                      * (((iTempPerm1407) ? fElse527 : fThen527) * (std::cos(6.28318548f * (fTempPerm1512 + 1.0f - ((fTempPerm1513 == fTempPerm1514) ? fTempPerm1513 : fThen530))) + 1.0f) - fTempPerm1510)
                    + -1.0f;
                }
                if ((iControl[50])) {
                  fTempPerm1516 = float(int(fTempPerm1498));
                }
                float fThen531 = fTempPerm1516 + -1.0f;
                float fThen532 = ((fTempPerm1498 >= 0.0f) ? fTempPerm1516 : fThen531);
                if ((iControl[50])) {
                  fTempPerm1517
                    = std::min<float>(1.0f, 2.0f * fTempPerm1462)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm1498 - ((fTempPerm1498 == fTempPerm1516) ? fTempPerm1498 : fThen532)));
                  fTempPerm1518 = float(int(fTempPerm1502));
                }
                float fThen533 = fTempPerm1518 + -1.0f;
                float fThen534 = ((fTempPerm1502 >= 0.0f) ? fTempPerm1518 : fThen533);
                if ((iControl[50])) {
                  fTempPerm1519 = fTempPerm1517
                    + fTempPerm1378
                      * (std::min<float>(1.0f, 2.0f * fTempPerm1469) * std::sin(6.28318548f * (fTempPerm1502 - ((fTempPerm1502 == fTempPerm1518) ? fTempPerm1502 : fThen534))) - fTempPerm1517);
                }
                fRec170[0] = fControl[311] * fTempPerm1411 + fControl[310] * fTempPerm1435
                  + fControl[309] * fTempPerm1457 + fControl[308] * fTempPerm1471
                  + fControl[307] * fTempPerm1485 + fControl[306] * fTempPerm1497
                  + fControl[305] * fTempPerm1505 + fControl[304] * fTempPerm1515
                  + fControl[303] * fTempPerm1519;
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm1520 = fRec171[1]
                    * (fControl[855]
                       + (fTemp52 * (fTempPerm714 - fTempPerm716) + fControl[1058] * fTemp54 + fTemp56 * (fTempPerm713 - fTempPerm715))
                       - fControl[854]);
                  fTempPerm1521 = fRec170[1]
                    * (fControl[875]
                       + (fTemp52 * (fTempPerm719 - fTempPerm721) + fControl[1059] * fTemp54 + fTemp56 * (fTempPerm718 - fTempPerm720))
                       - fControl[874]);
                  fTempPerm1522 = fRec169[1]
                    * (fControl[895]
                       + (fTemp52 * (fTempPerm724 - fTempPerm726) + fControl[1060] * fTemp54 + fTemp56 * (fTempPerm723 - fTempPerm725))
                       - fControl[894]);
                  fTempPerm1523 = fControl[915]
                    + (fTemp52 * (fTempPerm729 - fTempPerm731) + fControl[1061] * fTemp54
                       + fTemp56 * (fTempPerm728 - fTempPerm730))
                    - fControl[914];
                  fTempPerm1524 = fControl[935]
                    + (fTemp52 * (fTempPerm734 - fTempPerm736) + fControl[1062] * fTemp54
                       + fTemp56 * (fTempPerm733 - fTempPerm735))
                    - fControl[934];
                  fTempPerm1525 = float(int(fTempPerm1524));
                }
                float fThen535 = fTempPerm1525 + -1.0f;
                float fThen536 = ((fTempPerm1524 >= 0.0f) ? fTempPerm1525 : fThen535);
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm1526
                    = ((fTempPerm1524 == fTempPerm1525) ? fTempPerm1524 : fThen536);
                  fTempPerm1527 = fTempPerm1526
                    + float((fTempPerm1524 < 0.0f) & (fTempPerm1524 != fTempPerm1526));
                  fTempPerm1528 = fTempPerm55
                    + 0.00390625f * fTempPerm1523 * std::pow(2.0f, 0.0f - fTempPerm1527);
                  fTempPerm1529 = fTempPerm1528 - fTempPerm71;
                  fTempPerm1530 = float(int(fTempPerm1529));
                }
                float fThen537 = fTempPerm1530 + -1.0f;
                float fThen538 = ((fTempPerm1529 >= 0.0f) ? fTempPerm1530 : fThen537);
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  iTempPerm1531 = int(fTempPerm1527);
                  fTempPerm1532 = 256.0f
                    * (fTempPerm1528
                       - (fTempPerm71 + ((fTempPerm1529 == fTempPerm1530) ? fTempPerm1529 : fThen538)))
                    * (float(iTempPerm1531 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm1531)))))
                       + float(iTempPerm1531 == 0)
                       + float(
                         (iTempPerm1531 > 0)
                         * int(std::pow(2.0f, float(iTempPerm1531)))));
                  fTempPerm1533 = fRec168[1]
                    * (fControl[955]
                       + (fTemp52 * (fTempPerm747 - fTempPerm749) + fControl[1063] * fTemp54 + fTemp56 * (fTempPerm746 - fTempPerm748))
                       - fControl[954]);
                  fTempPerm1534 = fTempPerm1520 + fTempPerm1521 + fTempPerm1522
                    + fTempPerm1532 + fTempPerm1533;
                  iTempPerm1535 = int(fTempPerm1532);
                }
                if (((iControl[49] & iTempPerm28)
                     | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))))
                {
                  fTempPerm1536 = fRec280[1]
                    + fTempPerm937
                      * (fTempPerm1534 - (float(iTempPerm1535) + fRec281[1]));
                  fTempPerm1537 = fTempPerm1536 / fTempPerm957;
                  fRec280[0] = 2.0f * fTempPerm1537 - fRec280[1];
                  fTempPerm1538
                    = fRec281[1] + (fTempPerm937 * fTempPerm1536) / fTempPerm957;
                  fRec281[0] = 2.0f * fTempPerm1538 - fRec281[1];
                  fRec282 = fTempPerm1538;
                }
                if (((iControl[49] & iTempPerm26)
                     | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))))
                {
                  fTempPerm1539 = fTempPerm937
                    * (fTempPerm1534 - (float(iTempPerm1535) + fRec285[1]));
                  fTempPerm1540
                    = (fTempPerm937
                       * ((fRec285[1] + (fTempPerm1539 + 0.215215757f * fTempPerm1012 * fRec283[1]) / fTempPerm964 + fTempPerm966 * fRec284[1]) / fTempPerm967 - fRec283[1]))
                    / fTempPerm964;
                  fRec283[0] = fRec283[1] + 2.0f * fTempPerm1540;
                  fTempPerm1541 = fRec283[1] + fTempPerm1540;
                  fRec284[0] = fRec284[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm1541 - fRec284[1]))
                      / fTempPerm964;
                  fRec285[0] = fRec285[1] + 2.0f * fTempPerm1539 / fTempPerm964;
                  fRec286 = fTempPerm1541;
                }
                if (((iControl[49] & iTempPerm24)
                     | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))))
                {
                  fTempPerm1542 = fTempPerm1534
                    - (float(iTempPerm1535) + fRec288[1] + fTempPerm956 * fRec289[1]);
                  fTempPerm1543 = (fTempPerm937 * fTempPerm1542) / fTempPerm957;
                  fTempPerm1544 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec289[1] + fTempPerm1543));
                  fTempPerm1545
                    = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1544);
                  fTempPerm1546 = fTempPerm937 * fTempPerm1544 * fTempPerm1545;
                  fRec287 = fRec288[1] + fTempPerm1546;
                  fRec288[0] = fRec288[1] + 2.0f * fTempPerm1546;
                  fTempPerm1547 = fTempPerm1544 * fTempPerm1545;
                  fRec289[0] = fTempPerm1543 + fTempPerm1547;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm1548 = fTempPerm1534 - float(iTempPerm1535);
                  fTempPerm1549
                    = (fTempPerm934
                       * (fTempPerm936 * fRec282 + fTempPerm961 * fRec286 + fTempPerm971 * fRec287))
                      / fTempPerm978
                    + fTempPerm980 * fTempPerm1548;
                  fVec47[0] = fTempPerm1549;
                  fTempPerm1550 = fControl[976]
                    + (fTemp52 * (fTempPerm768 - fTempPerm770) + fControl[1064] * fTemp54
                       + fTemp56 * (fTempPerm767 - fTempPerm769))
                    - fControl[975];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))))
                {
                  fTempPerm1551 = fControl[974] * fTempPerm1550;
                }
                if ((iControl[49])) {
                  fTempPerm1552 = 2.0f * fTempPerm1551;
                  fTempPerm1553 = std::min<float>(1.0f, fTempPerm1552);
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fTempPerm1554 = fTempPerm1549 - fVec47[1];
                }
                float fElse539 = fConst0 * fTempPerm1554;
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fRec291[0]
                    = ((std::fabs(fTempPerm1554) < 0.5f) ? fElse539 : fRec291[1]);
                }
                if ((iControl[49])) {
                  fTempPerm1555 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec291[0])))));
                  fTempPerm1556 = 1.0f - fTempPerm1555;
                }
                if ((iControl[49] | iControl[42])) {
                  fTempPerm1557 = float(int(fTempPerm1549));
                }
                float fThen540 = fTempPerm1557 + -1.0f;
                float fThen541 = ((fTempPerm1549 >= 0.0f) ? fTempPerm1557 : fThen540);
                if ((iControl[49] | iControl[42])) {
                  fTempPerm1558
                    = ((fTempPerm1549 == fTempPerm1557) ? fTempPerm1549 : fThen541);
                  fTempPerm1559 = fTempPerm1549 - fTempPerm1558;
                  fVec48[0] = fTempPerm1559;
                  iTempPerm1560 = fTempPerm1559 < 0.5f;
                  iVec49[0] = iTempPerm1560;
                }
                if ((iControl[49])) {
                  iTempPerm1561 = (iVec49[1] <= 0) & (iTempPerm1560 > 0);
                  fRec296[0] = fRec296[1] * float(1 - iTempPerm1561)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm1561);
                  fTempPerm1562 = fTempPerm1555 + 1.0f;
                  fRec295[0] = 0.0f
                    - (fTempPerm1556 * fRec295[1] - (fRec296[0] + fRec296[1]))
                      / fTempPerm1562;
                  fRec294[0] = 0.0f
                    - (fTempPerm1556 * fRec294[1] - (fRec295[0] + fRec295[1]))
                      / fTempPerm1562;
                  fRec293[0] = 0.0f
                    - (fTempPerm1556 * fRec293[1] - (fRec294[0] + fRec294[1]))
                      / fTempPerm1562;
                  fRec292[0] = 0.0f
                    - (fTempPerm1556 * fRec292[1] - (fRec293[0] + fRec293[1]))
                      / fTempPerm1562;
                  fRec290[0] = 0.0f
                    - (fRec290[1] * fTempPerm1556 - (fRec292[0] + fRec292[1]))
                      / fTempPerm1562;
                  fTempPerm1563 = std::sin(6.28318548f * fTempPerm1549)
                    * (fTempPerm1553 * (fRec290[0] + -1.0f) + 1.0f);
                  fTempPerm1564 = std::max<float>(1.0f, fTempPerm1552) + -1.0f;
                  fTempPerm1565 = fRec290[0] - fTempPerm1563;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm1566 = std::fabs(fTempPerm1524);
                  fTempPerm1567 = fTempPerm1566 - float(int(fTempPerm1566));
                  fTempPerm1568 = fTempPerm1526 + float(fTempPerm1524 > 0.0f);
                  fTempPerm1569 = fTempPerm55
                    + 0.00390625f * fTempPerm1523 * std::pow(2.0f, 0.0f - fTempPerm1568);
                  fTempPerm1570 = fTempPerm1569 - fTempPerm71;
                  fTempPerm1571 = float(int(fTempPerm1570));
                }
                float fThen542 = fTempPerm1571 + -1.0f;
                float fThen543 = ((fTempPerm1570 >= 0.0f) ? fTempPerm1571 : fThen542);
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  iTempPerm1572 = int(fTempPerm1568);
                  fTempPerm1573 = 256.0f
                    * (fTempPerm1569
                       - (fTempPerm71 + ((fTempPerm1570 == fTempPerm1571) ? fTempPerm1570 : fThen543)))
                    * (float(iTempPerm1572 < 0)
                         / float(int(std::pow(2.0f, float(std::abs(iTempPerm1572)))))
                       + float(iTempPerm1572 == 0)
                       + float(
                         (iTempPerm1572 > 0)
                         * int(std::pow(2.0f, float(iTempPerm1572)))));
                  fTempPerm1574 = fTempPerm1533 + fTempPerm1522 + fTempPerm1521
                    + fTempPerm1520 + fTempPerm1573;
                  iTempPerm1575 = int(fTempPerm1573);
                }
                if (((iControl[49] & iTempPerm28)
                     | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))))
                {
                  fTempPerm1576 = fRec297[1]
                    + fTempPerm937
                      * (fTempPerm1574 - (float(iTempPerm1575) + fRec298[1]));
                  fTempPerm1577 = fTempPerm1576 / fTempPerm957;
                  fRec297[0] = 2.0f * fTempPerm1577 - fRec297[1];
                  fTempPerm1578
                    = fRec298[1] + (fTempPerm937 * fTempPerm1576) / fTempPerm957;
                  fRec298[0] = 2.0f * fTempPerm1578 - fRec298[1];
                  fRec299 = fTempPerm1578;
                }
                if (((iControl[49] & iTempPerm26)
                     | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))))
                {
                  fTempPerm1579 = fTempPerm937
                    * (fTempPerm1574 - (float(iTempPerm1575) + fRec302[1]));
                  fTempPerm1580
                    = (fTempPerm937
                       * ((fRec302[1] + (fTempPerm1579 + 0.215215757f * fTempPerm1012 * fRec300[1]) / fTempPerm964 + fTempPerm966 * fRec301[1]) / fTempPerm967 - fRec300[1]))
                    / fTempPerm964;
                  fRec300[0] = fRec300[1] + 2.0f * fTempPerm1580;
                  fTempPerm1581 = fRec300[1] + fTempPerm1580;
                  fRec301[0] = fRec301[1]
                    + 2.0f
                      * (fTempPerm937 * (0.215215757f * fTempPerm963 * fTempPerm1581 - fRec301[1]))
                      / fTempPerm964;
                  fRec302[0] = fRec302[1] + 2.0f * fTempPerm1579 / fTempPerm964;
                  fRec303 = fTempPerm1581;
                }
                if (((iControl[49] & iTempPerm24)
                     | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))))
                {
                  fTempPerm1582 = fTempPerm1574
                    - (float(iTempPerm1575) + fRec305[1] + fTempPerm956 * fRec306[1]);
                  fTempPerm1583 = (fTempPerm937 * fTempPerm1582) / fTempPerm957;
                  fTempPerm1584 = std::max<float>(
                    -1.0f, std::min<float>(1.0f, fRec306[1] + fTempPerm1583));
                  fTempPerm1585
                    = 1.0f - 0.333333343f * mydsp_faustpower2_f(fTempPerm1584);
                  fTempPerm1586 = fTempPerm937 * fTempPerm1584 * fTempPerm1585;
                  fRec304 = fRec305[1] + fTempPerm1586;
                  fRec305[0] = fRec305[1] + 2.0f * fTempPerm1586;
                  fTempPerm1587 = fTempPerm1584 * fTempPerm1585;
                  fRec306[0] = fTempPerm1583 + fTempPerm1587;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fTempPerm1588 = fTempPerm1574 - float(iTempPerm1575);
                  fTempPerm1589
                    = (fTempPerm934
                       * (fTempPerm936 * fRec299 + fTempPerm961 * fRec303 + fTempPerm971 * fRec304))
                      / fTempPerm978
                    + fTempPerm980 * fTempPerm1588;
                  fVec50[0] = fTempPerm1589;
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fTempPerm1590 = fTempPerm1589 - fVec50[1];
                }
                float fElse544 = fConst0 * fTempPerm1590;
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
                  fRec308[0]
                    = ((std::fabs(fTempPerm1590) < 0.5f) ? fElse544 : fRec308[1]);
                }
                if ((iControl[49])) {
                  fTempPerm1591 = 1.0f
                    / std::tan(fConst2
                               * std::min<float>(
                                 fConst3, float(std::max<int>(20, int(fRec308[0])))));
                  fTempPerm1592 = 1.0f - fTempPerm1591;
                }
                if ((iControl[49] | iControl[42])) {
                  fTempPerm1593 = float(int(fTempPerm1589));
                }
                float fThen545 = fTempPerm1593 + -1.0f;
                float fThen546 = ((fTempPerm1589 >= 0.0f) ? fTempPerm1593 : fThen545);
                if ((iControl[49] | iControl[42])) {
                  fTempPerm1594
                    = ((fTempPerm1589 == fTempPerm1593) ? fTempPerm1589 : fThen546);
                  fTempPerm1595 = fTempPerm1589 - fTempPerm1594;
                  fVec51[0] = fTempPerm1595;
                  iTempPerm1596 = fTempPerm1595 < 0.5f;
                  iVec52[0] = iTempPerm1596;
                }
                if ((iControl[49])) {
                  iTempPerm1597 = (iVec52[1] <= 0) & (iTempPerm1596 > 0);
                  fRec313[0] = fRec313[1] * float(1 - iTempPerm1597)
                    + 4.65661287e-10f * fTemp49 * float(iTempPerm1597);
                  fTempPerm1598 = fTempPerm1591 + 1.0f;
                  fRec312[0] = 0.0f
                    - (fTempPerm1592 * fRec312[1] - (fRec313[0] + fRec313[1]))
                      / fTempPerm1598;
                  fRec311[0] = 0.0f
                    - (fTempPerm1592 * fRec311[1] - (fRec312[0] + fRec312[1]))
                      / fTempPerm1598;
                  fRec310[0] = 0.0f
                    - (fTempPerm1592 * fRec310[1] - (fRec311[0] + fRec311[1]))
                      / fTempPerm1598;
                  fRec309[0] = 0.0f
                    - (fTempPerm1592 * fRec309[1] - (fRec310[0] + fRec310[1]))
                      / fTempPerm1598;
                  fRec307[0] = 0.0f
                    - (fRec307[1] * fTempPerm1592 - (fRec309[0] + fRec309[1]))
                      / fTempPerm1598;
                  fTempPerm1599 = std::sin(6.28318548f * fTempPerm1589)
                    * (fTempPerm1553 * (fRec307[0] + -1.0f) + 1.0f);
                  fTempPerm1600 = fTempPerm1563 + fTempPerm1564 * fTempPerm1565
                    + fTempPerm1567
                      * (fTempPerm1599 - (fTempPerm1563 + fTempPerm1564 * (fTempPerm1565 - fRec307[0] - fTempPerm1599)));
                }
                if ((iControl[48]
                     | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
                  fTempPerm1601 = fTempPerm1551
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec291[0] - fConst7))));
                }
                if ((iControl[48])) {
                  fTempPerm1602 = 0.25f * fTempPerm1601;
                  fTempPerm1603 = fTempPerm1549 + 0.75f - fTempPerm1602;
                  fTempPerm1604 = float(int(fTempPerm1603));
                }
                float fThen547 = fTempPerm1604 + -1.0f;
                float fThen548 = ((fTempPerm1603 >= 0.0f) ? fTempPerm1604 : fThen547);
                if ((iControl[48])) {
                  fTempPerm1605
                    = ((fTempPerm1603 == fTempPerm1604) ? fTempPerm1603 : fThen548);
                  fTempPerm1606 = 0.75f - (fTempPerm1602 + fTempPerm1605);
                }
                if ((iControl[48] | (iControl[46] | iControl[44]))) {
                  fTempPerm1607 = 1.0f - fTempPerm1601;
                }
                if ((iControl[48] | iControl[44])) {
                  fTempPerm1608 = 0.5f * fTempPerm1607;
                }
                if ((iControl[48])) {
                  fTempPerm1609 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1608));
                  fTempPerm1610 = 0.5f - fTempPerm1609;
                }
                if ((iControl[48] | iControl[45])) {
                  fTempPerm1611 = fTempPerm1601 + 1.0f;
                }
                if ((iControl[48])) {
                  fTempPerm1612 = std::cos(
                    6.28318548f
                    * (fTempPerm1549 + std::min<float>(((fTempPerm1549 + fTempPerm1606) * fTempPerm1610) / fTempPerm1609, (fTempPerm1610 * ((fTempPerm1605 + 0.25f * fTempPerm1611) - fTempPerm1549)) / (1.0f - fTempPerm1609)) + fTempPerm1606));
                }
                if ((iControl[48]
                     | (iControl[47] | (iControl[46] | (iControl[45] | iControl[44]))))) {
                  fTempPerm1613 = fTempPerm1551
                    * (1.0f
                       - std::min<float>(
                         1.0f, std::max<float>(0.0f, fConst6 * (fRec308[0] - fConst7))));
                }
                if ((iControl[48])) {
                  fTempPerm1614 = 0.25f * fTempPerm1613;
                  fTempPerm1615 = fTempPerm1589 + 0.75f - fTempPerm1614;
                  fTempPerm1616 = float(int(fTempPerm1615));
                }
                float fThen549 = fTempPerm1616 + -1.0f;
                float fThen550 = ((fTempPerm1615 >= 0.0f) ? fTempPerm1616 : fThen549);
                if ((iControl[48])) {
                  fTempPerm1617
                    = ((fTempPerm1615 == fTempPerm1616) ? fTempPerm1615 : fThen550);
                  fTempPerm1618 = 0.75f - (fTempPerm1614 + fTempPerm1617);
                }
                if ((iControl[48] | (iControl[46] | iControl[44]))) {
                  fTempPerm1619 = 1.0f - fTempPerm1613;
                }
                if ((iControl[48] | iControl[44])) {
                  fTempPerm1620 = 0.5f * fTempPerm1619;
                }
                if ((iControl[48])) {
                  fTempPerm1621 = std::min<float>(
                    0.5f, std::max<float>(0.00999999978f, fTempPerm1620));
                  fTempPerm1622 = 0.5f - fTempPerm1621;
                }
                if ((iControl[48] | iControl[45])) {
                  fTempPerm1623 = fTempPerm1613 + 1.0f;
                }
                if ((iControl[48])) {
                  fTempPerm1624
                    = fTempPerm1612 + fTempPerm1567 * (std::cos(6.28318548f * (fTempPerm1589 + std::min<float>(((fTempPerm1589 + fTempPerm1618) * fTempPerm1622) / fTempPerm1621, (fTempPerm1622 * ((fTempPerm1617 + 0.25f * fTempPerm1623) - fTempPerm1589)) / (1.0f - fTempPerm1621)) + fTempPerm1618)) - fTempPerm1612);
                }
                if ((iControl[47])) {
                  fTempPerm1625 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1601));
                  fTempPerm1626 = 1.0f - fTempPerm1625;
                  fTempPerm1627 = 0.25f * fTempPerm1626;
                  fTempPerm1628 = fTempPerm1549 - fTempPerm1627;
                  fTempPerm1629 = float(int(fTempPerm1628));
                }
                float fThen551 = fTempPerm1629 + -1.0f;
                float fThen552 = ((fTempPerm1628 >= 0.0f) ? fTempPerm1629 : fThen551);
                if ((iControl[47])) {
                  fTempPerm1630 = fTempPerm1549
                    - (fTempPerm1627
                       + ((fTempPerm1628 == fTempPerm1629) ? fTempPerm1628 : fThen552));
                  fTempPerm1631 = 2.0f * fTempPerm1630;
                  fTempPerm1632 = fTempPerm1631 + 1.0f;
                  fTempPerm1633 = float(int(fTempPerm1632));
                }
                float fThen553 = fTempPerm1633 + -1.0f;
                float fThen554 = ((fTempPerm1632 >= 0.0f) ? fTempPerm1633 : fThen553);
                if ((iControl[47])) {
                  fTempPerm1634
                    = ((fTempPerm1632 == fTempPerm1633) ? fTempPerm1632 : fThen554);
                  fTempPerm1635 = std::cos(
                    3.14159274f
                    * (float(fTempPerm1630 >= 0.5f) + fTempPerm1631 + 1.0f - (fTempPerm1634 + std::min<float>(fTempPerm1631 + 1.0f - fTempPerm1634, (fTempPerm1625 * (fTempPerm1634 - fTempPerm1631)) / fTempPerm1626))));
                  fTempPerm1636 = std::min<float>(
                    1.0f, std::max<float>(1.17549435e-38f, fTempPerm1613));
                  fTempPerm1637 = 1.0f - fTempPerm1636;
                  fTempPerm1638 = 0.25f * fTempPerm1637;
                  fTempPerm1639 = fTempPerm1589 - fTempPerm1638;
                  fTempPerm1640 = float(int(fTempPerm1639));
                }
                float fThen555 = fTempPerm1640 + -1.0f;
                float fThen556 = ((fTempPerm1639 >= 0.0f) ? fTempPerm1640 : fThen555);
                if ((iControl[47])) {
                  fTempPerm1641 = fTempPerm1589
                    - (fTempPerm1638
                       + ((fTempPerm1639 == fTempPerm1640) ? fTempPerm1639 : fThen556));
                  fTempPerm1642 = 2.0f * fTempPerm1641;
                  fTempPerm1643 = fTempPerm1642 + 1.0f;
                  fTempPerm1644 = float(int(fTempPerm1643));
                }
                float fThen557 = fTempPerm1644 + -1.0f;
                float fThen558 = ((fTempPerm1643 >= 0.0f) ? fTempPerm1644 : fThen557);
                if ((iControl[47])) {
                  fTempPerm1645
                    = ((fTempPerm1643 == fTempPerm1644) ? fTempPerm1643 : fThen558);
                  fTempPerm1646 = fTempPerm1635
                    + fTempPerm1567
                      * (std::cos(3.14159274f * (float(fTempPerm1641 >= 0.5f) + fTempPerm1642 + 1.0f - (fTempPerm1645 + std::min<float>(fTempPerm1642 + 1.0f - fTempPerm1645, (fTempPerm1636 * (fTempPerm1645 - fTempPerm1642)) / fTempPerm1637)))) - fTempPerm1635);
                }
                if ((iControl[46])) {
                  fTempPerm1647 = 0.25f * fTempPerm1607;
                  fTempPerm1648 = fTempPerm1549 - fTempPerm1647;
                  fTempPerm1649 = float(int(fTempPerm1648));
                }
                float fThen559 = fTempPerm1649 + -1.0f;
                float fThen560 = ((fTempPerm1648 >= 0.0f) ? fTempPerm1649 : fThen559);
                if ((iControl[46])) {
                  fTempPerm1650 = fTempPerm1647
                    + ((fTempPerm1648 == fTempPerm1649) ? fTempPerm1648 : fThen560);
                }
                if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
                  fTempPerm1651 = 1.0f - fTempPerm1549;
                }
                if ((iControl[46])) {
                  fTempPerm1652
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1601));
                  fTempPerm1653 = std::cos(
                    6.28318548f
                    * (fTempPerm1549 - (fTempPerm1650 + std::min<float>(fTempPerm1549 - fTempPerm1650, ((fTempPerm1650 + fTempPerm1651) * fTempPerm1652) / (1.0f - fTempPerm1652)))));
                  fTempPerm1654 = 0.25f * fTempPerm1619;
                  fTempPerm1655 = fTempPerm1589 - fTempPerm1654;
                  fTempPerm1656 = float(int(fTempPerm1655));
                }
                float fThen561 = fTempPerm1656 + -1.0f;
                float fThen562 = ((fTempPerm1655 >= 0.0f) ? fTempPerm1656 : fThen561);
                if ((iControl[46])) {
                  fTempPerm1657 = fTempPerm1654
                    + ((fTempPerm1655 == fTempPerm1656) ? fTempPerm1655 : fThen562);
                }
                if ((iControl[46] | (iControl[45] | (iControl[43] | iControl[41])))) {
                  fTempPerm1658 = 1.0f - fTempPerm1589;
                }
                if ((iControl[46])) {
                  fTempPerm1659
                    = std::max<float>(0.0f, std::min<float>(0.99000001f, fTempPerm1613));
                  fTempPerm1660 = fTempPerm1653
                    + fTempPerm1567
                      * (std::cos(6.28318548f * (fTempPerm1589 - (fTempPerm1657 + std::min<float>(fTempPerm1589 - fTempPerm1657, ((fTempPerm1657 + fTempPerm1658) * fTempPerm1659) / (1.0f - fTempPerm1659))))) - fTempPerm1653);
                }
                if ((iControl[45])) {
                  fTempPerm1661 = 0.125f * fTempPerm1611;
                  fTempPerm1662 = fTempPerm1549 - fTempPerm1661;
                  fTempPerm1663 = float(int(fTempPerm1662));
                }
                float fThen563 = fTempPerm1663 + -1.0f;
                float fThen564 = ((fTempPerm1662 >= 0.0f) ? fTempPerm1663 : fThen563);
                if ((iControl[45])) {
                  fTempPerm1664 = fTempPerm1661
                    + ((fTempPerm1662 == fTempPerm1663) ? fTempPerm1662 : fThen564);
                  fTempPerm1665
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1601));
                  fTempPerm1666 = 0.49000001f * fTempPerm1665;
                  fTempPerm1667 = std::cos(
                    12.566371f
                    * ((fTempPerm1549 + std::min<float>(0.49000001f * ((fTempPerm1549 - fTempPerm1664) * fTempPerm1665) / (0.5f - fTempPerm1666), 0.49000001f * (fTempPerm1665 * (fTempPerm1664 + fTempPerm1651)) / (fTempPerm1666 + 0.5f))) - fTempPerm1664));
                  fTempPerm1668 = 0.125f * fTempPerm1623;
                  fTempPerm1669 = fTempPerm1589 - fTempPerm1668;
                  fTempPerm1670 = float(int(fTempPerm1669));
                }
                float fThen565 = fTempPerm1670 + -1.0f;
                float fThen566 = ((fTempPerm1669 >= 0.0f) ? fTempPerm1670 : fThen565);
                if ((iControl[45])) {
                  fTempPerm1671 = fTempPerm1668
                    + ((fTempPerm1669 == fTempPerm1670) ? fTempPerm1669 : fThen566);
                  fTempPerm1672
                    = std::min<float>(1.0f, std::max<float>(0.0f, fTempPerm1613));
                  fTempPerm1673 = 0.49000001f * fTempPerm1672;
                  fTempPerm1674
                    = fTempPerm1667 + fTempPerm1567 * (std::cos(12.566371f * ((fTempPerm1589 + std::min<float>(0.49000001f * ((fTempPerm1589 - fTempPerm1671) * fTempPerm1672) / (0.5f - fTempPerm1673), 0.49000001f * (fTempPerm1672 * (fTempPerm1671 + fTempPerm1658)) / (fTempPerm1673 + 0.5f))) - fTempPerm1671)) - fTempPerm1667);
                }
                if ((iControl[44])) {
                  fTempPerm1675
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1601) + 1.0f);
                  fTempPerm1676 = fTempPerm1549 - fTempPerm1675;
                  fTempPerm1677 = float(int(fTempPerm1676));
                }
                float fThen567 = fTempPerm1677 + -1.0f;
                float fThen568 = ((fTempPerm1676 >= 0.0f) ? fTempPerm1677 : fThen567);
                if ((iControl[44])) {
                  fTempPerm1678 = fTempPerm1675
                    + ((fTempPerm1676 == fTempPerm1677) ? fTempPerm1676 : fThen568);
                  fTempPerm1679 = fTempPerm1549 - fTempPerm1678;
                }
                float fThen569 = 0.5f
                  * ((fTempPerm1549 + -0.5f - fTempPerm1678)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1608))
                     + 1.0f);
                if ((iControl[44])) {
                  fTempPerm1680 = std::cos(
                    6.28318548f
                    * std::min<float>(
                      1.0f, ((fTempPerm1679 < 0.5f) ? fTempPerm1679 : fThen569)));
                  fTempPerm1681
                    = 0.25f * (std::min<float>(0.975000024f, fTempPerm1613) + 1.0f);
                  fTempPerm1682 = fTempPerm1589 - fTempPerm1681;
                  fTempPerm1683 = float(int(fTempPerm1682));
                }
                float fThen570 = fTempPerm1683 + -1.0f;
                float fThen571 = ((fTempPerm1682 >= 0.0f) ? fTempPerm1683 : fThen570);
                if ((iControl[44])) {
                  fTempPerm1684 = fTempPerm1681
                    + ((fTempPerm1682 == fTempPerm1683) ? fTempPerm1682 : fThen571);
                  fTempPerm1685 = fTempPerm1589 - fTempPerm1684;
                }
                float fThen572 = 0.5f
                  * ((fTempPerm1589 + -0.5f - fTempPerm1684)
                       / std::max<float>(
                         0.00999999978f, std::min<float>(0.5f, fTempPerm1620))
                     + 1.0f);
                if ((iControl[44])) {
                  fTempPerm1686 = fTempPerm1680
                    + fTempPerm1567
                      * (std::cos(6.28318548f * std::min<float>(1.0f, ((fTempPerm1685 < 0.5f) ? fTempPerm1685 : fThen572))) - fTempPerm1680);
                }
                if ((iControl[43] | iControl[41])) {
                  fTempPerm1687 = fTempPerm1549
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec291[0] * fControl[974] * fTempPerm1550))
                                      / fRec291[0]);
                }
                if ((iControl[43])) {
                  fTempPerm1688 = fTempPerm1687 + 1.0f;
                  fTempPerm1689 = float(int(fTempPerm1688));
                }
                float fThen573 = fTempPerm1689 + -1.0f;
                float fThen574 = ((fTempPerm1688 >= 0.0f) ? fTempPerm1689 : fThen573);
                if ((iControl[43])) {
                  fTempPerm1690 = (0.0f - fTempPerm1651)
                    * (1.0f
                       - std::cos(
                         6.28318548f
                         * (fTempPerm1687 + 1.0f - ((fTempPerm1688 == fTempPerm1689) ? fTempPerm1688 : fThen574))));
                }
                if ((iControl[43] | iControl[41])) {
                  fTempPerm1691 = fTempPerm1589
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec308[0] * fControl[974] * fTempPerm1550))
                                      / fRec308[0]);
                }
                if ((iControl[43])) {
                  fTempPerm1692 = fTempPerm1691 + 1.0f;
                  fTempPerm1693 = float(int(fTempPerm1692));
                }
                float fThen575 = fTempPerm1693 + -1.0f;
                float fThen576 = ((fTempPerm1692 >= 0.0f) ? fTempPerm1693 : fThen575);
                if ((iControl[43])) {
                  fTempPerm1694 = fTempPerm1690
                    + fTempPerm1567
                      * ((0.0f - fTempPerm1658) * (1.0f - std::cos(6.28318548f * (fTempPerm1691 + 1.0f - ((fTempPerm1692 == fTempPerm1693) ? fTempPerm1692 : fThen576)))) - fTempPerm1690)
                    + 1.0f;
                }
                float fThen577 = 2.0f * (1.0f - fTempPerm1559);
                float fElse577 = 2.0f * fTempPerm1559;
                if ((iControl[42])) {
                  fTempPerm1695 = fTempPerm1549 - (fTempPerm1558 + fVec48[1]);
                }
                float fElse578 = fConst0 * fTempPerm1695;
                if ((iControl[42])) {
                  fRec314[0]
                    = ((std::fabs(fTempPerm1695) < 0.5f) ? fElse578 : fRec314[1]);
                  fTempPerm1696 = fTempPerm1559
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec314[0] * fControl[974] * fTempPerm1550))
                                      / fRec314[0]);
                  fTempPerm1697 = fTempPerm1696 + 1.0f;
                  fTempPerm1698 = float(int(fTempPerm1697));
                }
                float fThen579 = fTempPerm1698 + -1.0f;
                float fThen580 = ((fTempPerm1697 >= 0.0f) ? fTempPerm1698 : fThen579);
                if ((iControl[42])) {
                  fTempPerm1699 = ((iTempPerm1560) ? fElse577 : fThen577)
                    * (std::cos(
                         6.28318548f
                         * (fTempPerm1696 + 1.0f - ((fTempPerm1697 == fTempPerm1698) ? fTempPerm1697 : fThen580)))
                       + 1.0f);
                }
                float fThen581 = 2.0f * (1.0f - fTempPerm1595);
                float fElse581 = 2.0f * fTempPerm1595;
                if ((iControl[42])) {
                  fTempPerm1700 = fTempPerm1589 - (fTempPerm1594 + fVec51[1]);
                }
                float fElse582 = fConst0 * fTempPerm1700;
                if ((iControl[42])) {
                  fRec315[0]
                    = ((std::fabs(fTempPerm1700) < 0.5f) ? fElse582 : fRec315[1]);
                  fTempPerm1701 = fTempPerm1595
                    * std::max<float>(
                                    1.0f,
                                    std::min<float>(
                                      fConst8,
                                      std::max<float>(
                                        0.0f, fRec315[0] * fControl[974] * fTempPerm1550))
                                      / fRec315[0]);
                  fTempPerm1702 = fTempPerm1701 + 1.0f;
                  fTempPerm1703 = float(int(fTempPerm1702));
                }
                float fThen583 = fTempPerm1703 + -1.0f;
                float fThen584 = ((fTempPerm1702 >= 0.0f) ? fTempPerm1703 : fThen583);
                if ((iControl[42])) {
                  fTempPerm1704 = fTempPerm1699
                    + fTempPerm1567
                      * (((iTempPerm1596) ? fElse581 : fThen581) * (std::cos(6.28318548f * (fTempPerm1701 + 1.0f - ((fTempPerm1702 == fTempPerm1703) ? fTempPerm1702 : fThen584))) + 1.0f) - fTempPerm1699)
                    + -1.0f;
                }
                if ((iControl[41])) {
                  fTempPerm1705 = float(int(fTempPerm1687));
                }
                float fThen585 = fTempPerm1705 + -1.0f;
                float fThen586 = ((fTempPerm1687 >= 0.0f) ? fTempPerm1705 : fThen585);
                if ((iControl[41])) {
                  fTempPerm1706
                    = std::min<float>(1.0f, 2.0f * fTempPerm1651)
                    * std::sin(
                        6.28318548f
                        * (fTempPerm1687 - ((fTempPerm1687 == fTempPerm1705) ? fTempPerm1687 : fThen586)));
                  fTempPerm1707 = float(int(fTempPerm1691));
                }
                float fThen587 = fTempPerm1707 + -1.0f;
                float fThen588 = ((fTempPerm1691 >= 0.0f) ? fTempPerm1707 : fThen587);
                if ((iControl[41])) {
                  fTempPerm1708 = fTempPerm1706
                    + fTempPerm1567
                      * (std::min<float>(1.0f, 2.0f * fTempPerm1658) * std::sin(6.28318548f * (fTempPerm1691 - ((fTempPerm1691 == fTempPerm1707) ? fTempPerm1691 : fThen588))) - fTempPerm1706);
                }
                fRec171[0] = fControl[300] * fTempPerm1600 + fControl[299] * fTempPerm1624
                  + fControl[298] * fTempPerm1646 + fControl[297] * fTempPerm1660
                  + fControl[296] * fTempPerm1674 + fControl[295] * fTempPerm1686
                  + fControl[294] * fTempPerm1694 + fControl[293] * fTempPerm1704
                  + fControl[292] * fTempPerm1708;
                float fTemp1776 = fRec169[0] - fRec168[0];
                float fTemp1777 = std::min<float>(
                  1.0f,
                  std::max<float>(
                    0.0f,
                    fControl[996]
                      + (fTemp52 * (fTemp989 - fTemp991) + fControl[1065] * fTemp54 + fTemp56 * (fTemp988 - fTemp990))
                      - fControl[995]));
                outputs[1] = FAUSTFLOAT(fTemp6 * (fRec168[0] + fTemp1776 * fTemp1777 + std::min<float>(1.0f, std::max<float>(0.0f, fControl[1016] + (fTemp52 * (fTemp994 - fTemp996) + fControl[1066] * fTemp54 + fTemp56 * (fTemp993 - fTemp995)) - fControl[1015])) * (fRec170[0] - (fRec168[0] + fTemp1777 * (fTemp1776 - fRec171[0] - fRec170[0])))));
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
                if (
                  (
                    iControl[3] | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | (iControl[68] | (iControl[67] | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | (iControl[59] | (iControl[58] | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | (iControl[50] | (iControl[49] | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41]))))))))))))))))))))))))))))))))))))
                {
                  fRec24[1] = fRec24[0];
                  fRec25[1] = fRec25[0];
                  iVec4[1] = iVec4[0];
                  fRec23[1] = fRec23[0];
                  fRec26[1] = fRec26[0];
                }
                if (((iControl[3] & iTempPerm22)
                     | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))))
                {
                  fRec20[1] = fRec20[0];
                  fRec21[1] = fRec21[0];
                }
                if (((iControl[3] & iTempPerm30)
                     | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))))
                {
                  fRec27[1] = fRec27[0];
                  fRec28[1] = fRec28[0];
                  fRec29[1] = fRec29[0];
                }
                if (((iControl[3] & iTempPerm29)
                     | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))))
                {
                  fRec32[1] = fRec32[0];
                  fRec33[1] = fRec33[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fVec5[1] = fVec5[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
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
                if (((iControl[3] & iTempPerm22)
                     | ((iControl[75] & iTempPerm22) | ((iControl[74] & iTempPerm22) | ((iControl[73] & iTempPerm22) | ((iControl[72] & iTempPerm22) | ((iControl[71] & iTempPerm22) | ((iControl[70] & iTempPerm22) | ((iControl[69] & iTempPerm22) | (iControl[68] & iTempPerm22))))))))))
                {
                  fRec41[1] = fRec41[0];
                  fRec42[1] = fRec42[0];
                }
                if (((iControl[3] & iTempPerm30)
                     | ((iControl[75] & iTempPerm30) | ((iControl[74] & iTempPerm30) | ((iControl[73] & iTempPerm30) | ((iControl[72] & iTempPerm30) | ((iControl[71] & iTempPerm30) | ((iControl[70] & iTempPerm30) | ((iControl[69] & iTempPerm30) | (iControl[68] & iTempPerm30))))))))))
                {
                  fRec44[1] = fRec44[0];
                  fRec45[1] = fRec45[0];
                  fRec46[1] = fRec46[0];
                }
                if (((iControl[3] & iTempPerm29)
                     | ((iControl[75] & iTempPerm29) | ((iControl[74] & iTempPerm29) | ((iControl[73] & iTempPerm29) | ((iControl[72] & iTempPerm29) | ((iControl[71] & iTempPerm29) | ((iControl[70] & iTempPerm29) | ((iControl[69] & iTempPerm29) | (iControl[68] & iTempPerm29))))))))))
                {
                  fRec49[1] = fRec49[0];
                  fRec50[1] = fRec50[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fVec8[1] = fVec8[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
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
                if (((iControl[67] & iTempPerm22)
                     | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))))
                {
                  fRec60[1] = fRec60[0];
                  fRec61[1] = fRec61[0];
                }
                if (((iControl[67] & iTempPerm30)
                     | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))))
                {
                  fRec63[1] = fRec63[0];
                  fRec64[1] = fRec64[0];
                  fRec65[1] = fRec65[0];
                }
                if (((iControl[67] & iTempPerm29)
                     | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))))
                {
                  fRec68[1] = fRec68[0];
                  fRec69[1] = fRec69[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fVec11[1] = fVec11[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
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
                if (((iControl[67] & iTempPerm22)
                     | ((iControl[66] & iTempPerm22) | ((iControl[65] & iTempPerm22) | ((iControl[64] & iTempPerm22) | ((iControl[63] & iTempPerm22) | ((iControl[62] & iTempPerm22) | ((iControl[61] & iTempPerm22) | ((iControl[60] & iTempPerm22) | (iControl[59] & iTempPerm22))))))))))
                {
                  fRec77[1] = fRec77[0];
                  fRec78[1] = fRec78[0];
                }
                if (((iControl[67] & iTempPerm30)
                     | ((iControl[66] & iTempPerm30) | ((iControl[65] & iTempPerm30) | ((iControl[64] & iTempPerm30) | ((iControl[63] & iTempPerm30) | ((iControl[62] & iTempPerm30) | ((iControl[61] & iTempPerm30) | ((iControl[60] & iTempPerm30) | (iControl[59] & iTempPerm30))))))))))
                {
                  fRec80[1] = fRec80[0];
                  fRec81[1] = fRec81[0];
                  fRec82[1] = fRec82[0];
                }
                if (((iControl[67] & iTempPerm29)
                     | ((iControl[66] & iTempPerm29) | ((iControl[65] & iTempPerm29) | ((iControl[64] & iTempPerm29) | ((iControl[63] & iTempPerm29) | ((iControl[62] & iTempPerm29) | ((iControl[61] & iTempPerm29) | ((iControl[60] & iTempPerm29) | (iControl[59] & iTempPerm29))))))))))
                {
                  fRec85[1] = fRec85[0];
                  fRec86[1] = fRec86[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fVec14[1] = fVec14[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
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
                if (((iControl[58] & iTempPerm22)
                     | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))))
                {
                  fRec96[1] = fRec96[0];
                  fRec97[1] = fRec97[0];
                }
                if (((iControl[58] & iTempPerm30)
                     | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))))
                {
                  fRec99[1] = fRec99[0];
                  fRec100[1] = fRec100[0];
                  fRec101[1] = fRec101[0];
                }
                if (((iControl[58] & iTempPerm29)
                     | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))))
                {
                  fRec104[1] = fRec104[0];
                  fRec105[1] = fRec105[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fVec17[1] = fVec17[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
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
                if (((iControl[58] & iTempPerm22)
                     | ((iControl[57] & iTempPerm22) | ((iControl[56] & iTempPerm22) | ((iControl[55] & iTempPerm22) | ((iControl[54] & iTempPerm22) | ((iControl[53] & iTempPerm22) | ((iControl[52] & iTempPerm22) | ((iControl[51] & iTempPerm22) | (iControl[50] & iTempPerm22))))))))))
                {
                  fRec113[1] = fRec113[0];
                  fRec114[1] = fRec114[0];
                }
                if (((iControl[58] & iTempPerm30)
                     | ((iControl[57] & iTempPerm30) | ((iControl[56] & iTempPerm30) | ((iControl[55] & iTempPerm30) | ((iControl[54] & iTempPerm30) | ((iControl[53] & iTempPerm30) | ((iControl[52] & iTempPerm30) | ((iControl[51] & iTempPerm30) | (iControl[50] & iTempPerm30))))))))))
                {
                  fRec116[1] = fRec116[0];
                  fRec117[1] = fRec117[0];
                  fRec118[1] = fRec118[0];
                }
                if (((iControl[58] & iTempPerm29)
                     | ((iControl[57] & iTempPerm29) | ((iControl[56] & iTempPerm29) | ((iControl[55] & iTempPerm29) | ((iControl[54] & iTempPerm29) | ((iControl[53] & iTempPerm29) | ((iControl[52] & iTempPerm29) | ((iControl[51] & iTempPerm29) | (iControl[50] & iTempPerm29))))))))))
                {
                  fRec121[1] = fRec121[0];
                  fRec122[1] = fRec122[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fVec20[1] = fVec20[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
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
                if (((iControl[49] & iTempPerm22)
                     | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))))
                {
                  fRec132[1] = fRec132[0];
                  fRec133[1] = fRec133[0];
                }
                if (((iControl[49] & iTempPerm30)
                     | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))))
                {
                  fRec135[1] = fRec135[0];
                  fRec136[1] = fRec136[0];
                  fRec137[1] = fRec137[0];
                }
                if (((iControl[49] & iTempPerm29)
                     | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))))
                {
                  fRec140[1] = fRec140[0];
                  fRec141[1] = fRec141[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fVec23[1] = fVec23[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
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
                if (((iControl[49] & iTempPerm22)
                     | ((iControl[48] & iTempPerm22) | ((iControl[47] & iTempPerm22) | ((iControl[46] & iTempPerm22) | ((iControl[45] & iTempPerm22) | ((iControl[44] & iTempPerm22) | ((iControl[43] & iTempPerm22) | ((iControl[42] & iTempPerm22) | (iControl[41] & iTempPerm22))))))))))
                {
                  fRec149[1] = fRec149[0];
                  fRec150[1] = fRec150[0];
                }
                if (((iControl[49] & iTempPerm30)
                     | ((iControl[48] & iTempPerm30) | ((iControl[47] & iTempPerm30) | ((iControl[46] & iTempPerm30) | ((iControl[45] & iTempPerm30) | ((iControl[44] & iTempPerm30) | ((iControl[43] & iTempPerm30) | ((iControl[42] & iTempPerm30) | (iControl[41] & iTempPerm30))))))))))
                {
                  fRec152[1] = fRec152[0];
                  fRec153[1] = fRec153[0];
                  fRec154[1] = fRec154[0];
                }
                if (((iControl[49] & iTempPerm29)
                     | ((iControl[48] & iTempPerm29) | ((iControl[47] & iTempPerm29) | ((iControl[46] & iTempPerm29) | ((iControl[45] & iTempPerm29) | ((iControl[44] & iTempPerm29) | ((iControl[43] & iTempPerm29) | ((iControl[42] & iTempPerm29) | (iControl[41] & iTempPerm29))))))))))
                {
                  fRec157[1] = fRec157[0];
                  fRec158[1] = fRec158[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fVec26[1] = fVec26[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
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
                if (((iControl[3] & iTempPerm28)
                     | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))))
                {
                  fRec172[1] = fRec172[0];
                  fRec173[1] = fRec173[0];
                }
                if (((iControl[3] & iTempPerm26)
                     | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))))
                {
                  fRec175[1] = fRec175[0];
                  fRec176[1] = fRec176[0];
                  fRec177[1] = fRec177[0];
                }
                if (((iControl[3] & iTempPerm24)
                     | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))))
                {
                  fRec180[1] = fRec180[0];
                  fRec181[1] = fRec181[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fVec29[1] = fVec29[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
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
                if (((iControl[3] & iTempPerm28)
                     | ((iControl[75] & iTempPerm28) | ((iControl[74] & iTempPerm28) | ((iControl[73] & iTempPerm28) | ((iControl[72] & iTempPerm28) | ((iControl[71] & iTempPerm28) | ((iControl[70] & iTempPerm28) | ((iControl[69] & iTempPerm28) | (iControl[68] & iTempPerm28))))))))))
                {
                  fRec189[1] = fRec189[0];
                  fRec190[1] = fRec190[0];
                }
                if (((iControl[3] & iTempPerm26)
                     | ((iControl[75] & iTempPerm26) | ((iControl[74] & iTempPerm26) | ((iControl[73] & iTempPerm26) | ((iControl[72] & iTempPerm26) | ((iControl[71] & iTempPerm26) | ((iControl[70] & iTempPerm26) | ((iControl[69] & iTempPerm26) | (iControl[68] & iTempPerm26))))))))))
                {
                  fRec192[1] = fRec192[0];
                  fRec193[1] = fRec193[0];
                  fRec194[1] = fRec194[0];
                }
                if (((iControl[3] & iTempPerm24)
                     | ((iControl[75] & iTempPerm24) | ((iControl[74] & iTempPerm24) | ((iControl[73] & iTempPerm24) | ((iControl[72] & iTempPerm24) | ((iControl[71] & iTempPerm24) | ((iControl[70] & iTempPerm24) | ((iControl[69] & iTempPerm24) | (iControl[68] & iTempPerm24))))))))))
                {
                  fRec197[1] = fRec197[0];
                  fRec198[1] = fRec198[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | (iControl[69] | iControl[68])))))))))
                {
                  fVec32[1] = fVec32[0];
                }
                if (
                  (iControl[3]
                   | (iControl[75] | (iControl[74] | (iControl[73] | (iControl[72] | (iControl[71] | (iControl[70] | iControl[68]))))))))
                {
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
                if (((iControl[67] & iTempPerm28)
                     | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))))
                {
                  fRec208[1] = fRec208[0];
                  fRec209[1] = fRec209[0];
                }
                if (((iControl[67] & iTempPerm26)
                     | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))))
                {
                  fRec211[1] = fRec211[0];
                  fRec212[1] = fRec212[0];
                  fRec213[1] = fRec213[0];
                }
                if (((iControl[67] & iTempPerm24)
                     | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))))
                {
                  fRec216[1] = fRec216[0];
                  fRec217[1] = fRec217[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fVec35[1] = fVec35[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
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
                if (((iControl[67] & iTempPerm28)
                     | ((iControl[66] & iTempPerm28) | ((iControl[65] & iTempPerm28) | ((iControl[64] & iTempPerm28) | ((iControl[63] & iTempPerm28) | ((iControl[62] & iTempPerm28) | ((iControl[61] & iTempPerm28) | ((iControl[60] & iTempPerm28) | (iControl[59] & iTempPerm28))))))))))
                {
                  fRec225[1] = fRec225[0];
                  fRec226[1] = fRec226[0];
                }
                if (((iControl[67] & iTempPerm26)
                     | ((iControl[66] & iTempPerm26) | ((iControl[65] & iTempPerm26) | ((iControl[64] & iTempPerm26) | ((iControl[63] & iTempPerm26) | ((iControl[62] & iTempPerm26) | ((iControl[61] & iTempPerm26) | ((iControl[60] & iTempPerm26) | (iControl[59] & iTempPerm26))))))))))
                {
                  fRec228[1] = fRec228[0];
                  fRec229[1] = fRec229[0];
                  fRec230[1] = fRec230[0];
                }
                if (((iControl[67] & iTempPerm24)
                     | ((iControl[66] & iTempPerm24) | ((iControl[65] & iTempPerm24) | ((iControl[64] & iTempPerm24) | ((iControl[63] & iTempPerm24) | ((iControl[62] & iTempPerm24) | ((iControl[61] & iTempPerm24) | ((iControl[60] & iTempPerm24) | (iControl[59] & iTempPerm24))))))))))
                {
                  fRec233[1] = fRec233[0];
                  fRec234[1] = fRec234[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | (iControl[60] | iControl[59])))))))))
                {
                  fVec38[1] = fVec38[0];
                }
                if (
                  (iControl[67]
                   | (iControl[66] | (iControl[65] | (iControl[64] | (iControl[63] | (iControl[62] | (iControl[61] | iControl[59]))))))))
                {
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
                if (((iControl[58] & iTempPerm28)
                     | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))))
                {
                  fRec244[1] = fRec244[0];
                  fRec245[1] = fRec245[0];
                }
                if (((iControl[58] & iTempPerm26)
                     | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))))
                {
                  fRec247[1] = fRec247[0];
                  fRec248[1] = fRec248[0];
                  fRec249[1] = fRec249[0];
                }
                if (((iControl[58] & iTempPerm24)
                     | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))))
                {
                  fRec252[1] = fRec252[0];
                  fRec253[1] = fRec253[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fVec41[1] = fVec41[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
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
                if (((iControl[58] & iTempPerm28)
                     | ((iControl[57] & iTempPerm28) | ((iControl[56] & iTempPerm28) | ((iControl[55] & iTempPerm28) | ((iControl[54] & iTempPerm28) | ((iControl[53] & iTempPerm28) | ((iControl[52] & iTempPerm28) | ((iControl[51] & iTempPerm28) | (iControl[50] & iTempPerm28))))))))))
                {
                  fRec261[1] = fRec261[0];
                  fRec262[1] = fRec262[0];
                }
                if (((iControl[58] & iTempPerm26)
                     | ((iControl[57] & iTempPerm26) | ((iControl[56] & iTempPerm26) | ((iControl[55] & iTempPerm26) | ((iControl[54] & iTempPerm26) | ((iControl[53] & iTempPerm26) | ((iControl[52] & iTempPerm26) | ((iControl[51] & iTempPerm26) | (iControl[50] & iTempPerm26))))))))))
                {
                  fRec264[1] = fRec264[0];
                  fRec265[1] = fRec265[0];
                  fRec266[1] = fRec266[0];
                }
                if (((iControl[58] & iTempPerm24)
                     | ((iControl[57] & iTempPerm24) | ((iControl[56] & iTempPerm24) | ((iControl[55] & iTempPerm24) | ((iControl[54] & iTempPerm24) | ((iControl[53] & iTempPerm24) | ((iControl[52] & iTempPerm24) | ((iControl[51] & iTempPerm24) | (iControl[50] & iTempPerm24))))))))))
                {
                  fRec269[1] = fRec269[0];
                  fRec270[1] = fRec270[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | (iControl[51] | iControl[50])))))))))
                {
                  fVec44[1] = fVec44[0];
                }
                if (
                  (iControl[58]
                   | (iControl[57] | (iControl[56] | (iControl[55] | (iControl[54] | (iControl[53] | (iControl[52] | iControl[50]))))))))
                {
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
                if (((iControl[49] & iTempPerm28)
                     | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))))
                {
                  fRec280[1] = fRec280[0];
                  fRec281[1] = fRec281[0];
                }
                if (((iControl[49] & iTempPerm26)
                     | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))))
                {
                  fRec283[1] = fRec283[0];
                  fRec284[1] = fRec284[0];
                  fRec285[1] = fRec285[0];
                }
                if (((iControl[49] & iTempPerm24)
                     | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))))
                {
                  fRec288[1] = fRec288[0];
                  fRec289[1] = fRec289[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fVec47[1] = fVec47[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
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
                if (((iControl[49] & iTempPerm28)
                     | ((iControl[48] & iTempPerm28) | ((iControl[47] & iTempPerm28) | ((iControl[46] & iTempPerm28) | ((iControl[45] & iTempPerm28) | ((iControl[44] & iTempPerm28) | ((iControl[43] & iTempPerm28) | ((iControl[42] & iTempPerm28) | (iControl[41] & iTempPerm28))))))))))
                {
                  fRec297[1] = fRec297[0];
                  fRec298[1] = fRec298[0];
                }
                if (((iControl[49] & iTempPerm26)
                     | ((iControl[48] & iTempPerm26) | ((iControl[47] & iTempPerm26) | ((iControl[46] & iTempPerm26) | ((iControl[45] & iTempPerm26) | ((iControl[44] & iTempPerm26) | ((iControl[43] & iTempPerm26) | ((iControl[42] & iTempPerm26) | (iControl[41] & iTempPerm26))))))))))
                {
                  fRec300[1] = fRec300[0];
                  fRec301[1] = fRec301[0];
                  fRec302[1] = fRec302[0];
                }
                if (((iControl[49] & iTempPerm24)
                     | ((iControl[48] & iTempPerm24) | ((iControl[47] & iTempPerm24) | ((iControl[46] & iTempPerm24) | ((iControl[45] & iTempPerm24) | ((iControl[44] & iTempPerm24) | ((iControl[43] & iTempPerm24) | ((iControl[42] & iTempPerm24) | (iControl[41] & iTempPerm24))))))))))
                {
                  fRec305[1] = fRec305[0];
                  fRec306[1] = fRec306[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | (iControl[42] | iControl[41])))))))))
                {
                  fVec50[1] = fVec50[0];
                }
                if (
                  (iControl[49]
                   | (iControl[48] | (iControl[47] | (iControl[46] | (iControl[45] | (iControl[44] | (iControl[43] | iControl[41]))))))))
                {
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
