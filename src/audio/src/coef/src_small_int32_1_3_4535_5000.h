/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2020 Intel Corporation. All rights reserved.
 *
 */

#include <stdint.h>

static const int32_t src_int32_1_3_4535_5000_fir[268] = {
	53316,
	-3193,
	-78263,
	-94410,
	-13727,
	106779,
	149415,
	46802,
	-131686,
	-218458,
	-100816,
	147424,
	300219,
	180355,
	-147088,
	-391581,
	-289345,
	122605,
	487327,
	430508,
	-65033,
	-579922,
	-604793,
	-34996,
	659410,
	810772,
	186690,
	-713463,
	-1044078,
	-398384,
	727597,
	1296900,
	676729,
	-685589,
	-1557594,
	-1025798,
	570086,
	1810448,
	1446165,
	-363427,
	-2035646,
	-1934003,
	48640,
	2209466,
	2480247,
	389390,
	-2304734,
	-3069891,
	-962640,
	2291555,
	3681471,
	1678584,
	-2138313,
	-4286781,
	-2538830,
	1812940,
	4850877,
	3537793,
	-1284409,
	-5332393,
	-4661504,
	524411,
	5684187,
	5886597,
	490834,
	-5854327,
	-7179537,
	-1778714,
	5787376,
	8496154,
	3348379,
	-5425956,
	-9781482,
	-5198989,
	4712513,
	10969935,
	7318144,
	-3591187,
	-11985773,
	-9680539,
	2009704,
	12743797,
	12246904,
	78881,
	-13150167,
	-14963245,
	-2714719,
	13103138,
	17760339,
	5930190,
	-12493462,
	-20553411,
	-9749650,
	11204030,
	23241795,
	14190202,
	-9108138,
	-25708241,
	-19263960,
	6065370,
	27817290,
	24982482,
	-1913444,
	-29411709,
	-31364570,
	-3546973,
	30305092,
	38449669,
	10580094,
	-30267040,
	-46321273,
	-19567058,
	28993377,
	55149987,
	31107760,
	-26044259,
	-65279105,
	-46235163,
	20706690,
	77413504,
	66916127,
	-11654755,
	-93099762,
	-97410434,
	-4038926,
	116216226,
	148889159,
	34635074,
	-159328672,
	-262519729,
	-116659642,
	295782476,
	809543553,
	1163409661,
	1163409661,
	809543553,
	295782476,
	-116659642,
	-262519729,
	-159328672,
	34635074,
	148889159,
	116216226,
	-4038926,
	-97410434,
	-93099762,
	-11654755,
	66916127,
	77413504,
	20706690,
	-46235163,
	-65279105,
	-26044259,
	31107760,
	55149987,
	28993377,
	-19567058,
	-46321273,
	-30267040,
	10580094,
	38449669,
	30305092,
	-3546973,
	-31364570,
	-29411709,
	-1913444,
	24982482,
	27817290,
	6065370,
	-19263960,
	-25708241,
	-9108138,
	14190202,
	23241795,
	11204030,
	-9749650,
	-20553411,
	-12493462,
	5930190,
	17760339,
	13103138,
	-2714719,
	-14963245,
	-13150167,
	78881,
	12246904,
	12743797,
	2009704,
	-9680539,
	-11985773,
	-3591187,
	7318144,
	10969935,
	4712513,
	-5198989,
	-9781482,
	-5425956,
	3348379,
	8496154,
	5787376,
	-1778714,
	-7179537,
	-5854327,
	490834,
	5886597,
	5684187,
	524411,
	-4661504,
	-5332393,
	-1284409,
	3537793,
	4850877,
	1812940,
	-2538830,
	-4286781,
	-2138313,
	1678584,
	3681471,
	2291555,
	-962640,
	-3069891,
	-2304734,
	389390,
	2480247,
	2209466,
	48640,
	-1934003,
	-2035646,
	-363427,
	1446165,
	1810448,
	570086,
	-1025798,
	-1557594,
	-685589,
	676729,
	1296900,
	727597,
	-398384,
	-1044078,
	-713463,
	186690,
	810772,
	659410,
	-34996,
	-604793,
	-579922,
	-65033,
	430508,
	487327,
	122605,
	-289345,
	-391581,
	-147088,
	180355,
	300219,
	147424,
	-100816,
	-218458,
	-131686,
	46802,
	149415,
	106779,
	-13727,
	-94410,
	-78263,
	-3193,
	53316

};

static const struct src_stage src_int32_1_3_4535_5000 = {
	1, 0, 1, 268, 268, 3, 1, 0, 1,
	src_int32_1_3_4535_5000_fir};