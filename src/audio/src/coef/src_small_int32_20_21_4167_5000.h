/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2020 Intel Corporation. All rights reserved.
 *
 */

#include <stdint.h>

static const int32_t src_int32_20_21_4167_5000_fir[1120] = {
	125886,
	-321269,
	574508,
	-781908,
	773601,
	-347815,
	-661501,
	2294646,
	-4377725,
	6468754,
	-7871729,
	7741360,
	-5279754,
	-1700,
	8009461,
	-17856576,
	27787309,
	-35293075,
	37436971,
	-31353996,
	14843278,
	13069550,
	-51736860,
	98786784,
	-150418530,
	202236992,
	-251285082,
	305912317,
	1758726828,
	212671156,
	-216012726,
	189629029,
	-150069906,
	105178476,
	-61147635,
	22858953,
	6429449,
	-25277982,
	33983063,
	-34225844,
	28540252,
	-19722840,
	10305596,
	-2183233,
	-3560016,
	6628860,
	-7346339,
	6403310,
	-4600439,
	2640899,
	-1006784,
	-75399,
	597589,
	-691836,
	543269,
	-319883,
	115743,
	-316147,
	595926,
	-860646,
	941473,
	-623096,
	-292462,
	1894310,
	-4065488,
	6412952,
	-8260580,
	8732882,
	-6937369,
	2225697,
	5515713,
	-15617006,
	26496350,
	-35715778,
	40251006,
	-36955058,
	23141323,
	2834716,
	-41145087,
	90375370,
	-147934437,
	211471046,
	-283642917,
	403306539,
	1747806687,
	124398159,
	-178571693,
	173990164,
	-146973848,
	109481876,
	-69230078,
	32031720,
	-1942877,
	-18847996,
	29964898,
	-32545759,
	28751356,
	-21188417,
	12365492,
	-4279399,
	-1811396,
	5418756,
	-6697408,
	6220880,
	-4731876,
	2928158,
	-1322586,
	189133,
	417064,
	-592620,
	503290,
	-312400,
	102158,
	-304223,
	606588,
	-925991,
	1097601,
	-895995,
	93967,
	1445990,
	-3667253,
	6233855,
	-8502186,
	9581817,
	-8500080,
	4457758,
	2867502,
	-13039103,
	24681427,
	-35473835,
	42360176,
	-41966825,
	31165421,
	-7662539,
	-29544873,
	80051889,
	-142581840,
	217036224,
	-312350939,
	503968068,
	1726088979,
	41828492,
	-139707237,
	155704158,
	-141262323,
	111667834,
	-75864222,
	40431344,
	-10120158,
	-12189305,
	25467129,
	-30295246,
	28426907,
	-22233886,
	14155670,
	-6253091,
	-66956,
	4135718,
	-5939933,
	5927805,
	-4772038,
	3152759,
	-1603916,
	441082,
	235604,
	-486539,
	455774,
	-299331,
	85170,
	-285333,
	605739,
	-976064,
	1238476,
	-1161130,
	490881,
	956891,
	-3188291,
	5931725,
	-8588395,
	10268782,
	-9936190,
	6652333,
	111770,
	-10164918,
	22366752,
	-34559276,
	43711538,
	-46283864,
	38759476,
	-18230581,
	-17131341,
	67962048,
	-134376456,
	218692296,
	-336695652,
	606950905,
	1693817213,
	-34390690,
	-100153163,
	135187782,
	-133110425,
	111746227,
	-80959071,
	47918593,
	-17955350,
	-5429076,
	20581714,
	-27526503,
	27582993,
	-22847987,
	15648323,
	-8070241,
	1641027,
	2805218,
	-5090576,
	5532331,
	-4722632,
	3312320,
	-1846586,
	676144,
	56674,
	-375907,
	402015,
	-281277,
	64898,
	-259453,
	592822,
	-1009218,
	1360756,
	-1413086,
	890953,
	435213,
	-2635571,
	5509185,
	-8513827,
	10777033,
	-11215725,
	8767105,
	-2701563,
	-7042924,
	19586431,
	-32976658,
	44265418,
	-49811801,
	45772425,
	-28672543,
	-4119057,
	54287839,
	-123386655,
	216259743,
	-355996556,
	711260171,
	1651352559,
	-103706979,
	-60621401,
	112882753,
	-122732166,
	109764895,
	-84453653,
	54373713,
	-25310485,
	1306004,
	15406084,
	-24300350,
	26245026,
	-23027679,
	16821720,
	-9700394,
	3281649,
	1453036,
	-4167319,
	5044412,
	-4586999,
	3405748,
	-2047267,
	890482,
	-116443,
	-263029,
	343367,
	-258903,
	41550,
	-226709,
	567500,
	-1024070,
	1461342,
	-1646521,
	1286567,
	-109977,
	-2017663,
	4971231,
	-8276040,
	11092850,
	-12311029,
	10760391,
	-5520482,
	-3727221,
	16384008,
	-30743213,
	43996403,
	-52469293,
	52061156,
	-38789892,
	9261524,
	39245082,
	-109733703,
	209624906,
	-369617105,
	815864284,
	1599169017,
	-165668039,
	-21792170,
	89247475,
	-110375690,
	105807911,
	-86317499,
	59698245,
	-32059038,
	7892058,
	10041239,
	-20684948,
	24447093,
	-22778035,
	17660489,
	-11117198,
	4825926,
	104776,
	-3189094,
	4475475,
	-4370004,
	3433225,
	-2203524,
	1080782,
	-280696,
	-150158,
	281215,
	-232927,
	15420,
	-187381,
	529677,
	-1019549,
	1537448,
	-1856275,
	1669954,
	-668895,
	-1344625,
	4325195,
	-7875651,
	11205866,
	-13197354,
	12591945,
	-8291827,
	-276624,
	12811820,
	-27888762,
	42894088,
	-54189810,
	57493340,
	-48386092,
	22767978,
	23080292,
	-93591089,
	198744199,
	-376975272,
	919707785,
	1537847069,
	-219925467,
	15695133,
	64748753,
	-96318009,
	99993252,
	-86550573,
	63816410,
	-38088035,
	14210243,
	4589822,
	-16754400,
	22231160,
	-22111995,
	18155779,
	-12298813,
	6247292,
	-1214616,
	-2175404,
	3838174,
	-4077905,
	3396163,
	-2313838,
	1244300,
	-433319,
	-39449,
	216947,
	-204101,
	-13113,
	-141904,
	479506,
	-994926,
	1586666,
	-2037474,
	2033344,
	-1231213,
	-627841,
	3580661,
	-7316394,
	11109340,
	-13853382,
	14223755,
	-10962275,
	3246363,
	8930180,
	-24455386,
	40963550,
	-54923154,
	61950119,
	-57270305,
	36150132,
	6066922,
	-75182896,
	183647297,
	-377553538,
	1021724627,
	1468065936,
	-266237144,
	51250200,
	39853578,
	-80859370,
	92469905,
	-85182638,
	66676054,
	-43299878,
	20148859,
	-845814,
	-12587267,
	19646149,
	-21049971,
	18305291,
	-13228222,
	7522044,
	-2481295,
	-1145946,
	3146115,
	-3718194,
	3297148,
	-2377603,
	1378892,
	-571875,
	67077,
	151923,
	-173189,
	-43588,
	-90871,
	417402,
	-949846,
	1607029,
	-2185638,
	2369112,
	-1786239,
	120159,
	2749341,
	-6605122,
	10800367,
	-14261714,
	15620810,
	-13479348,
	6776653,
	4806382,
	-20496867,
	38225542,
	-54636713,
	65328587,
	-65261060,
	49154524,
	-11498983,
	-54781256,
	164439215,
	-370908161,
	1120851741,
	1390594526,
	-304468061,
	84339117,
	15021154,
	-64317346,
	83414496,
	-82272110,
	68249148,
	-47613852,
	25605269,
	-6165491,
	-8265033,
	16746898,
	-19619328,
	18113193,
	-13893449,
	8629722,
	-3672943,
	-120239,
	2413584,
	-3299428,
	3139852,
	-2395111,
	1483039,
	-694288,
	167568,
	87449,
	-140955,
	-75467,
	-35022,
	344043,
	-884345,
	1597067,
	-2296784,
	2669933,
	-2323119,
	885912,
	1844899,
	-5751754,
	10280019,
	-14409280,
	16751825,
	-15792425,
	10247759,
	513569,
	-16077886,
	34716397,
	-53316405,
	67544022,
	-72189824,
	61529016,
	-29303630,
	-32702884,
	141301234,
	-356677552,
	1216042693,
	1306281230,
	-334589636,
	114490621,
	-9304735,
	-47020773,
	73027484,
	-77904403,
	68531832,
	-50967293,
	30487632,
	-11273014,
	-3870541,
	13593029,
	-17853736,
	17589915,
	-14287680,
	9553418,
	-4769151,
	882741,
	1655256,
	-2831036,
	2928937,
	-2367514,
	1555852,
	-798871,
	260367,
	24757,
	-108144,
	-108144,
	24757,
	260367,
	-798871,
	1555852,
	-2367514,
	2928937,
	-2831036,
	1655256,
	882741,
	-4769151,
	9553418,
	-14287680,
	17589915,
	-17853736,
	13593029,
	-3870541,
	-11273014,
	30487632,
	-50967293,
	68531832,
	-77904403,
	73027484,
	-47020773,
	-9304735,
	114490621,
	-334589636,
	1306281230,
	1216042693,
	-356677552,
	141301234,
	-32702884,
	-29303630,
	61529016,
	-72189824,
	67544022,
	-53316405,
	34716397,
	-16077886,
	513569,
	10247759,
	-15792425,
	16751825,
	-14409280,
	10280019,
	-5751754,
	1844899,
	885912,
	-2323119,
	2669933,
	-2296784,
	1597067,
	-884345,
	344043,
	-35022,
	-75467,
	-140955,
	87449,
	167568,
	-694288,
	1483039,
	-2395111,
	3139852,
	-3299428,
	2413584,
	-120239,
	-3672943,
	8629722,
	-13893449,
	18113193,
	-19619328,
	16746898,
	-8265033,
	-6165491,
	25605269,
	-47613852,
	68249148,
	-82272110,
	83414496,
	-64317346,
	15021154,
	84339117,
	-304468061,
	1390594526,
	1120851741,
	-370908161,
	164439215,
	-54781256,
	-11498983,
	49154524,
	-65261060,
	65328587,
	-54636713,
	38225542,
	-20496867,
	4806382,
	6776653,
	-13479348,
	15620810,
	-14261714,
	10800367,
	-6605122,
	2749341,
	120159,
	-1786239,
	2369112,
	-2185638,
	1607029,
	-949846,
	417402,
	-90871,
	-43588,
	-173189,
	151923,
	67077,
	-571875,
	1378892,
	-2377603,
	3297148,
	-3718194,
	3146115,
	-1145946,
	-2481295,
	7522044,
	-13228222,
	18305291,
	-21049971,
	19646149,
	-12587267,
	-845814,
	20148859,
	-43299878,
	66676054,
	-85182638,
	92469905,
	-80859370,
	39853578,
	51250200,
	-266237144,
	1468065936,
	1021724627,
	-377553538,
	183647297,
	-75182896,
	6066922,
	36150132,
	-57270305,
	61950119,
	-54923154,
	40963550,
	-24455386,
	8930180,
	3246363,
	-10962275,
	14223755,
	-13853382,
	11109340,
	-7316394,
	3580661,
	-627841,
	-1231213,
	2033344,
	-2037474,
	1586666,
	-994926,
	479506,
	-141904,
	-13113,
	-204101,
	216947,
	-39449,
	-433319,
	1244300,
	-2313838,
	3396163,
	-4077905,
	3838174,
	-2175404,
	-1214616,
	6247292,
	-12298813,
	18155779,
	-22111995,
	22231160,
	-16754400,
	4589822,
	14210243,
	-38088035,
	63816410,
	-86550573,
	99993252,
	-96318009,
	64748753,
	15695133,
	-219925467,
	1537847069,
	919707785,
	-376975272,
	198744199,
	-93591089,
	23080292,
	22767978,
	-48386092,
	57493340,
	-54189810,
	42894088,
	-27888762,
	12811820,
	-276624,
	-8291827,
	12591945,
	-13197354,
	11205866,
	-7875651,
	4325195,
	-1344625,
	-668895,
	1669954,
	-1856275,
	1537448,
	-1019549,
	529677,
	-187381,
	15420,
	-232927,
	281215,
	-150158,
	-280696,
	1080782,
	-2203524,
	3433225,
	-4370004,
	4475475,
	-3189094,
	104776,
	4825926,
	-11117198,
	17660489,
	-22778035,
	24447093,
	-20684948,
	10041239,
	7892058,
	-32059038,
	59698245,
	-86317499,
	105807911,
	-110375690,
	89247475,
	-21792170,
	-165668039,
	1599169017,
	815864284,
	-369617105,
	209624906,
	-109733703,
	39245082,
	9261524,
	-38789892,
	52061156,
	-52469293,
	43996403,
	-30743213,
	16384008,
	-3727221,
	-5520482,
	10760391,
	-12311029,
	11092850,
	-8276040,
	4971231,
	-2017663,
	-109977,
	1286567,
	-1646521,
	1461342,
	-1024070,
	567500,
	-226709,
	41550,
	-258903,
	343367,
	-263029,
	-116443,
	890482,
	-2047267,
	3405748,
	-4586999,
	5044412,
	-4167319,
	1453036,
	3281649,
	-9700394,
	16821720,
	-23027679,
	26245026,
	-24300350,
	15406084,
	1306004,
	-25310485,
	54373713,
	-84453653,
	109764895,
	-122732166,
	112882753,
	-60621401,
	-103706979,
	1651352559,
	711260171,
	-355996556,
	216259743,
	-123386655,
	54287839,
	-4119057,
	-28672543,
	45772425,
	-49811801,
	44265418,
	-32976658,
	19586431,
	-7042924,
	-2701563,
	8767105,
	-11215725,
	10777033,
	-8513827,
	5509185,
	-2635571,
	435213,
	890953,
	-1413086,
	1360756,
	-1009218,
	592822,
	-259453,
	64898,
	-281277,
	402015,
	-375907,
	56674,
	676144,
	-1846586,
	3312320,
	-4722632,
	5532331,
	-5090576,
	2805218,
	1641027,
	-8070241,
	15648323,
	-22847987,
	27582993,
	-27526503,
	20581714,
	-5429076,
	-17955350,
	47918593,
	-80959071,
	111746227,
	-133110425,
	135187782,
	-100153163,
	-34390690,
	1693817213,
	606950905,
	-336695652,
	218692296,
	-134376456,
	67962048,
	-17131341,
	-18230581,
	38759476,
	-46283864,
	43711538,
	-34559276,
	22366752,
	-10164918,
	111770,
	6652333,
	-9936190,
	10268782,
	-8588395,
	5931725,
	-3188291,
	956891,
	490881,
	-1161130,
	1238476,
	-976064,
	605739,
	-285333,
	85170,
	-299331,
	455774,
	-486539,
	235604,
	441082,
	-1603916,
	3152759,
	-4772038,
	5927805,
	-5939933,
	4135718,
	-66956,
	-6253091,
	14155670,
	-22233886,
	28426907,
	-30295246,
	25467129,
	-12189305,
	-10120158,
	40431344,
	-75864222,
	111667834,
	-141262323,
	155704158,
	-139707237,
	41828492,
	1726088979,
	503968068,
	-312350939,
	217036224,
	-142581840,
	80051889,
	-29544873,
	-7662539,
	31165421,
	-41966825,
	42360176,
	-35473835,
	24681427,
	-13039103,
	2867502,
	4457758,
	-8500080,
	9581817,
	-8502186,
	6233855,
	-3667253,
	1445990,
	93967,
	-895995,
	1097601,
	-925991,
	606588,
	-304223,
	102158,
	-312400,
	503290,
	-592620,
	417064,
	189133,
	-1322586,
	2928158,
	-4731876,
	6220880,
	-6697408,
	5418756,
	-1811396,
	-4279399,
	12365492,
	-21188417,
	28751356,
	-32545759,
	29964898,
	-18847996,
	-1942877,
	32031720,
	-69230078,
	109481876,
	-146973848,
	173990164,
	-178571693,
	124398159,
	1747806687,
	403306539,
	-283642917,
	211471046,
	-147934437,
	90375370,
	-41145087,
	2834716,
	23141323,
	-36955058,
	40251006,
	-35715778,
	26496350,
	-15617006,
	5515713,
	2225697,
	-6937369,
	8732882,
	-8260580,
	6412952,
	-4065488,
	1894310,
	-292462,
	-623096,
	941473,
	-860646,
	595926,
	-316147,
	115743,
	-319883,
	543269,
	-691836,
	597589,
	-75399,
	-1006784,
	2640899,
	-4600439,
	6403310,
	-7346339,
	6628860,
	-3560016,
	-2183233,
	10305596,
	-19722840,
	28540252,
	-34225844,
	33983063,
	-25277982,
	6429449,
	22858953,
	-61147635,
	105178476,
	-150069906,
	189629029,
	-216012726,
	212671156,
	1758726828,
	305912317,
	-251285082,
	202236992,
	-150418530,
	98786784,
	-51736860,
	13069550,
	14843278,
	-31353996,
	37436971,
	-35293075,
	27787309,
	-17856576,
	8009461,
	-1700,
	-5279754,
	7741360,
	-7871729,
	6468754,
	-4377725,
	2294646,
	-661501,
	-347815,
	773601,
	-781908,
	574508,
	-321269,
	125886

};

static const struct src_stage src_int32_20_21_4167_5000 = {
	1, 1, 20, 56, 1120, 21, 20, 0, 0,
	src_int32_20_21_4167_5000_fir};