#pragma once

#include <behaviors.dtsi>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/pointing.h>
#include <zmk-helpers/key-labels/kyria.h> 

#ifndef KEYMAP_DRAWER
#include "keys_sv.h"
#endif

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LT5 LM0 LM1 LM2 LM3 LM4 LM5 LB0 LB1 LB2 LB3 LB4 LB5
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RT5 RM0 RM1 RM2 RM3 RM4 RM5 RB0 RB1 RB2 RB3 RB4 RB5
#define EXTRAS LF1 LF0 RF0 RF1
#define THUMBS LH4 LH3 LH2 LH1 LH0 RH0 RH1 RH2 RH3 RH4

#define HM_TAPPING_TERM 200      // for non homerow tap
#define HM_TAPPING_TERM_FAST 140 // double tap for key repeating
#define HM_PRIOR_IDLE 220        // 150 is about 80 wpm

#define SMART_SYM(layer) &sym_smart layer layer

#define XXXXX &none
#define ___   &trans

