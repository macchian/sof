/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2022 Intel Corporation. All rights reserved.
 *
 */

/** \cond GENERATED_BY_TOOLS_TUNE_SRC */

#include <stdint.h>

static const int32_t src_int32_8_21_4535_5000_fir[1984] = {
	-4705,
	81658,
	87540,
	-28233,
	-146587,
	-102848,
	94954,
	223275,
	88276,
	-200557,
	-297721,
	-26453,
	343432,
	348822,
	-98288,
	-512640,
	-349730,
	295914,
	686152,
	270825,
	-566342,
	-830576,
	-84268,
	895412,
	902858,
	-230191,
	-1251997,
	-854261,
	678791,
	1587074,
	636625,
	-1247593,
	-1835470,
	-210511,
	1897669,
	1920752,
	-445526,
	-2562750,
	-1763349,
	1325669,
	3150360,
	1291522,
	-2388975,
	-3547153,
	-454294,
	3554409,
	3628743,
	-765030,
	-4700185,
	-3273710,
	2336492,
	5668523,
	2380851,
	-4174207,
	-6276415,
	-888111,
	6132075,
	6332305,
	-1208886,
	-8006107,
	-5657815,
	3841116,
	9544408,
	4112871,
	-6855702,
	-10465107,
	-1621865,
	10012940,
	10481609,
	-1801941,
	-12992466,
	-9333561,
	6036806,
	15409348,
	6821096,
	-10840496,
	-16839869,
	-2839217,
	15848146,
	16855585,
	-2591131,
	-20581299,
	-15063167,
	9298628,
	24468169,
	11146563,
	-16946541,
	-26873655,
	-4907467,
	25028641,
	27135911,
	-3700180,
	-32875824,
	-24604413,
	14545533,
	39670614,
	18672130,
	-27309081,
	-44462731,
	-8791091,
	41485372,
	46172252,
	-5545817,
	-56399651,
	-43553272,
	24889047,
	71234502,
	35058023,
	-50055816,
	-85056214,
	-18446567,
	82694519,
	96813687,
	-10340489,
	-126873020,
	-105219459,
	60971656,
	194734355,
	108077111,
	-166438970,
	-337823125,
	-97105500,
	565430224,
	1278815852,
	1558747996,
	1204676795,
	469472916,
	-154121315,
	-334397260,
	-130208035,
	132776897,
	187566243,
	37188941,
	-117740536,
	-117567740,
	6955898,
	102473868,
	72592953,
	-31096227,
	-86267719,
	-40073396,
	43937593,
	69462298,
	15667820,
	-49254537,
	-52697465,
	2474951,
	49204930,
	36677276,
	-15341149,
	-45319086,
	-22055854,
	23628422,
	38838887,
	9368924,
	-27970986,
	-30832366,
	1007541,
	29021850,
	22221657,
	-8877061,
	-27468453,
	-13778212,
	14223385,
	24015448,
	6109528,
	-17194876,
	-19352450,
	350732,
	18075870,
	14117707,
	-5343615,
	-17249095,
	-8864885,
	8774799,
	15153586,
	4037701,
	-10694081,
	-12242559,
	44924,
	11266516,
	8945211,
	-3192265,
	-10738331,
	-5635639,
	5334338,
	9401087,
	2610982,
	-6505339,
	-7557523,
	-79720,
	6820586,
	5492000,
	-1840088,
	-6449957,
	-3447696,
	3113851,
	5590868,
	1611756,
	-3776751,
	-4443493,
	-108624,
	3915734,
	3190357,
	-999102,
	-3649722,
	-1981639,
	1703653,
	3110409,
	926758,
	-2040731,
	-2425583,
	-91991,
	2075827,
	1706314,
	-496719,
	-1890155,
	-1038700,
	847077,
	1567858,
	480228,
	-991392,
	-1185707,
	-60245,
	976710,
	805997,
	-216365,
	-855457,
	-472824,
	363400,
	677642,
	211485,
	-406636,
	-485242,
	-30392,
	377239,
	309004,
	-75305,
	-306140,
	-167541,
	119260,
	219877,
	68302,
	-119426,
	-138141,
	-9854,
	94139,
	72962,
	6392,
	88995,
	78792,
	-46735,
	-152243,
	-83526,
	120492,
	222099,
	54512,
	-230339,
	-282861,
	24258,
	371611,
	312449,
	-165793,
	-530057,
	-284277,
	376101,
	680656,
	170690,
	-650094,
	-788045,
	52176,
	968085,
	808994,
	-398543,
	-1293699,
	-697095,
	866852,
	1573960,
	409528,
	-1434289,
	-1742156,
	84611,
	2053044,
	1723809,
	-795313,
	-2649354,
	-1445650,
	1703200,
	3126231,
	847032,
	-2753012,
	-3370406,
	107273,
	3850487,
	3263533,
	-1414390,
	-4863878,
	-2697114,
	3022561,
	5631016,
	1589964,
	-4824155,
	-5972212,
	93532,
	6654230,
	5708595,
	-2326540,
	-8296014,
	-4684717,
	5006692,
	9494023,
	2793494,
	-7949112,
	-9974728,
	-972,
	10887521,
	9473731,
	-3631955,
	-13484702,
	-7767536,
	7933810,
	15352688,
	4707157,
	-12615337,
	-16081957,
	-250342,
	17272757,
	15277789,
	-5511013,
	-21402285,
	-12600944,
	12331375,
	24425410,
	7809014,
	-19802325,
	-25722953,
	-794445,
	27354536,
	24674261,
	-8384709,
	-34269980,
	-20696202,
	19484554,
	39700656,
	13274612,
	-32067581,
	-42685970,
	-1977864,
	45507029,
	42153839,
	-13563520,
	-58999496,
	-36875983,
	33741236,
	71574948,
	25311822,
	-59186091,
	-82076952,
	-5170671,
	91307971,
	89036036,
	-27843935,
	-133811262,
	-90160591,
	84275390,
	198137273,
	80053826,
	-201098458,
	-334379689,
	-32940436,
	662354072,
	1345773156,
	1548183654,
	1124237846,
	375501026,
	-203638483,
	-324582476,
	-93158102,
	153819623,
	176906451,
	13407223,
	-127549239,
	-106140280,
	23706745,
	105950111,
	61235168,
	-42878701,
	-85719114,
	-29453593,
	51786439,
	66316322,
	6268523,
	-53879178,
	-47982902,
	10337161,
	51203743,
	31189788,
	-21499213,
	-45249041,
	-16419878,
	28048630,
	37231577,
	4062006,
	-30734015,
	-28188129,
	5643058,
	30300236,
	18995534,
	-12624505,
	-27501247,
	-10364724,
	16980000,
	23081608,
	2830226,
	-18956400,
	-17744856,
	3254824,
	18917677,
	12119646,
	-7713736,
	-17304998,
	-6730591,
	10530407,
	14593872,
	1978038,
	-11823739,
	-11252911,
	1871072,
	11814967,
	7708042,
	-4680930,
	-10791250,
	-4315023,
	6434255,
	9069135,
	1341925,
	-7211559,
	-6961167,
	1037960,
	7165137,
	4748357,
	-2743475,
	-6490897,
	-2660265,
	3774830,
	5401053,
	863517,
	-4196982,
	-4100196,
	541440,
	4119720,
	2766607,
	-1516343,
	-3677047,
	-1539852,
	2075531,
	3008098,
	514854,
	-2272765,
	-2241382,
	258074,
	2186531,
	1483415,
	-768354,
	-1905721,
	-812205,
	1036892,
	1517246,
	275371,
	-1106058,
	-1096613,
	107820,
	1029424,
	701972,
	-341518,
	-862530,
	-371636,
	446695,
	655594,
	124620,
	-454028,
	-448648,
	36504,
	397315,
	269184,
	-121350,
	-308121,
	-132056,
	146912,
	212114,
	41118,
	-133008,
	-127179,
	8025,
	98536,
	63148,
	17900,
	94751,
	67996,
	-64966,
	-154888,
	-61774,
	144338,
	216231,
	18595,
	-256168,
	-261693,
	75817,
	392790,
	268679,
	-231490,
	-536896,
	-211442,
	450286,
	660963,
	64913,
	-722145,
	-728387,
	190231,
	1022192,
	696681,
	-561794,
	-1309508,
	-522780,
	1040350,
	1528232,
	170184,
	-1594577,
	-1611506,
	382714,
	2168677,
	1488401,
	-1134100,
	-2682855,
	-1093566,
	2051278,
	3037597,
	378854,
	-3065667,
	-3122084,
	674298,
	4071598,
	2826557,
	-2043290,
	-4930007,
	-2057845,
	3655404,
	5477671,
	756684,
	-5383277,
	-5541994,
	1085082,
	7046359,
	4960636,
	-3409653,
	-8419462,
	-3604529,
	6083103,
	9248771,
	1402119,
	-8892072,
	-9274822,
	1637794,
	11548941,
	8261082,
	-5407491,
	-13706421,
	-6025842,
	9688814,
	14981441,
	2474520,
	-14150982,
	-14987176,
	2370958,
	18359188,
	13370978,
	-8348981,
	-21794321,
	-9855054,
	15144115,
	23882779,
	4276176,
	-22283842,
	-24033873,
	3379503,
	29146546,
	21680849,
	-12950056,
	-34979024,
	-16320026,
	24082320,
	38918970,
	7540863,
	-36228109,
	-40013642,
	4962710,
	48649842,
	37218555,
	-21414375,
	-60428207,
	-29344609,
	42038021,
	70453830,
	14883401,
	-67263013,
	-77357958,
	8473162,
	98226662,
	79251504,
	-45203686,
	-138178493,
	-72793896,
	106614198,
	197564492,
	49117307,
	-233425589,
	-323670750,
	37914734,
	759191516,
	1404746936,
	1527184009,
	1038448307,
	284485726,
	-245419954,
	-308933738,
	-56021421,
	170951491,
	163084521,
	-9908237,
	-134528200,
	-92870683,
	39592117,
	107220424,
	48873256,
	-53574812,
	-83452948,
	-18420233,
	58463725,
	61881153,
	-3117160,
	-57349639,
	-42365002,
	17884556,
	52141981,
	25142256,
	-27145962,
	-44265340,
	-10519501,
	31849823,
	34890124,
	-1266540,
	-32844471,
	-25003228,
	10113477,
	30951846,
	15420017,
	-16076411,
	-26977359,
	-6777706,
	19364029,
	21690593,
	-471998,
	-20315970,
	-15794993,
	6062777,
	19367917,
	9897187,
	-9903018,
	-17010141,
	-4482473,
	12054467,
	13744737,
	-99850,
	-12702121,
	-10046112,
	3639758,
	12118407,
	6328318,
	-6058613,
	-10625213,
	-2921705,
	7391705,
	8557388,
	60081,
	-7763788,
	-6230813,
	2121657,
	7360662,
	3917428,
	-3580558,
	-6400002,
	-1828602,
	4351290,
	5104317,
	107222,
	-4526945,
	-3678358,
	1172082,
	4237664,
	2292539,
	-1995914,
	-3629604,
	-1073042,
	2400188,
	2846389,
	98490,
	-2455416,
	-2014577,
	597628,
	2251301,
	1233979,
	-1020142,
	-1882481,
	-572988,
	1202568,
	1436796,
	68479,
	-1196329,
	-986928,
	270629,
	1060324,
	585725,
	-457323,
	-852007,
	-264987,
	519209,
	620747,
	37139,
	-491158,
	-403816,
	101063,
	408845,
	224921,
	-163722,
	-303796,
	-94897,
	170762,
	200279,
	13978,
	-143416,
	-114017,
	25052,
	100731,
	52471,
	29585,
	98729,
	55301,
	-82524,
	-154356,
	-37974,
	165931,
	205651,
	-18780,
	-277390,
	-234490,
	127168,
	406347,
	218243,
	-293968,
	-532768,
	-132571,
	516796,
	627177,
	-44432,
	-780760,
	-652494,
	327073,
	1056257,
	567892,
	-716479,
	-1298628,
	-334609,
	1195453,
	1450275,
	-76680,
	-1724717,
	-1445604,
	677709,
	2241561,
	1218775,
	-1454751,
	-2661766,
	-713829,
	2362323,
	2885352,
	-103730,
	-3319801,
	-2806300,
	1235215,
	4212195,
	2325829,
	-2638556,
	-4895950,
	-1368211,
	4221368,
	5210180,
	-102430,
	-5838997,
	-4993046,
	2066339,
	7298877,
	4102284,
	-4435631,
	-8371994,
	-2438142,
	7047290,
	8811466,
	-33577,
	-9663598,
	-8377397,
	3261089,
	11981331,
	6866249,
	-7091625,
	-13650173,
	-4142229,
	11264400,
	14299853,
	167594,
	-15413493,
	-13574360,
	4971419,
	19081658,
	11170675,
	-11046147,
	-21744868,
	-6878635,
	17677018,
	22846056,
	618181,
	-24336355,
	-21835127,
	7529732,
	30362199,
	18210971,
	-17301599,
	-34980726,
	-11559947,
	28240928,
	37331955,
	1583990,
	-39698360,
	-36489160,
	11890482,
	50838115,
	31454866,
	-28935739,
	-60639854,
	-21100266,
	49601479,
	67870571,
	3974096,
	-74103220,
	-70963024,
	22214139,
	103273839,
	67613553,
	-62063377,
	-139816674,
	-53401794,
	127505274,
	192874564,
	15750072,
	-262663155,
	-305392737,
	114895441,
	854869851,
	1455027056,
	1496005264,
	948311365,
	197337702,
	-279341880,
	-288070054,
	-19498930,
	184000082,
	146478248,
	-32315147,
	-138617977,
	-78067946,
	54316412,
	106306795,
	35774160,
	-62991072,
	-79545204,
	-7201616,
	63854298,
	56265864,
	-12300665,
	-59612631,
	-35969430,
	24969306,
	52014614,
	18663777,
	-32173857,
	-42398979,
	-4476988,
	34962524,
	31870303,
	-6508829,
	-34267049,
	-21348025,
	14330263,
	30970331,
	11571164,
	-19166151,
	-25913308,
	-3091538,
	21331180,
	19875340,
	-3730101,
	-21250280,
	-13545881,
	8718780,
	19421561,
	7497643,
	-11869045,
	-16374159,
	-2167224,
	13318566,
	12626421,
	-2153712,
	-13314118,
	-8648911,
	5315795,
	12173338,
	4835517,
	-7298635,
	-10245988,
	-1484697,
	8188893,
	7878229,
	-1208453,
	-8152601,
	-5382792,
	3149823,
	7404949,
	3017071,
	-4335180,
	-6180705,
	-970086,
	4832597,
	4708000,
	-641712,
	-4761108,
	-3187535,
	1770781,
	4268312,
	1778426,
	-2428609,
	-3509377,
	-591009,
	2671712,
	2629402,
	-313835,
	-2585706,
	-1750397,
	919952,
	2269529,
	963473,
	-1247297,
	-1821532,
	-326103,
	1341148,
	1328644,
	-136218,
	-1260803,
	-859246,
	424978,
	1069191,
	459846,
	-561613,
	-824450,
	-155154,
	579695,
	574080,
	-49167,
	-517502,
	-351849,
	162028,
	411806,
	177229,
	-201654,
	-293427,
	-56871,
	190434,
	184740,
	-12561,
	-150544,
	-99006,
	40905,
	100765,
	41196,
	41196,
	100765,
	40905,
	-99006,
	-150544,
	-12561,
	184740,
	190434,
	-56871,
	-293427,
	-201654,
	177229,
	411806,
	162028,
	-351849,
	-517502,
	-49167,
	574080,
	579695,
	-155154,
	-824450,
	-561613,
	459846,
	1069191,
	424978,
	-859246,
	-1260803,
	-136218,
	1328644,
	1341148,
	-326103,
	-1821532,
	-1247297,
	963473,
	2269529,
	919952,
	-1750397,
	-2585706,
	-313835,
	2629402,
	2671712,
	-591009,
	-3509377,
	-2428609,
	1778426,
	4268312,
	1770781,
	-3187535,
	-4761108,
	-641712,
	4708000,
	4832597,
	-970086,
	-6180705,
	-4335180,
	3017071,
	7404949,
	3149823,
	-5382792,
	-8152601,
	-1208453,
	7878229,
	8188893,
	-1484697,
	-10245988,
	-7298635,
	4835517,
	12173338,
	5315795,
	-8648911,
	-13314118,
	-2153712,
	12626421,
	13318566,
	-2167224,
	-16374159,
	-11869045,
	7497643,
	19421561,
	8718780,
	-13545881,
	-21250280,
	-3730101,
	19875340,
	21331180,
	-3091538,
	-25913308,
	-19166151,
	11571164,
	30970331,
	14330263,
	-21348025,
	-34267049,
	-6508829,
	31870303,
	34962524,
	-4476988,
	-42398979,
	-32173857,
	18663777,
	52014614,
	24969306,
	-35969430,
	-59612631,
	-12300665,
	56265864,
	63854298,
	-7201616,
	-79545204,
	-62991072,
	35774160,
	106306795,
	54316412,
	-78067946,
	-138617977,
	-32315147,
	146478248,
	184000082,
	-19498930,
	-288070054,
	-279341880,
	197337702,
	948311365,
	1496005264,
	1455027056,
	854869851,
	114895441,
	-305392737,
	-262663155,
	15750072,
	192874564,
	127505274,
	-53401794,
	-139816674,
	-62063377,
	67613553,
	103273839,
	22214139,
	-70963024,
	-74103220,
	3974096,
	67870571,
	49601479,
	-21100266,
	-60639854,
	-28935739,
	31454866,
	50838115,
	11890482,
	-36489160,
	-39698360,
	1583990,
	37331955,
	28240928,
	-11559947,
	-34980726,
	-17301599,
	18210971,
	30362199,
	7529732,
	-21835127,
	-24336355,
	618181,
	22846056,
	17677018,
	-6878635,
	-21744868,
	-11046147,
	11170675,
	19081658,
	4971419,
	-13574360,
	-15413493,
	167594,
	14299853,
	11264400,
	-4142229,
	-13650173,
	-7091625,
	6866249,
	11981331,
	3261089,
	-8377397,
	-9663598,
	-33577,
	8811466,
	7047290,
	-2438142,
	-8371994,
	-4435631,
	4102284,
	7298877,
	2066339,
	-4993046,
	-5838997,
	-102430,
	5210180,
	4221368,
	-1368211,
	-4895950,
	-2638556,
	2325829,
	4212195,
	1235215,
	-2806300,
	-3319801,
	-103730,
	2885352,
	2362323,
	-713829,
	-2661766,
	-1454751,
	1218775,
	2241561,
	677709,
	-1445604,
	-1724717,
	-76680,
	1450275,
	1195453,
	-334609,
	-1298628,
	-716479,
	567892,
	1056257,
	327073,
	-652494,
	-780760,
	-44432,
	627177,
	516796,
	-132571,
	-532768,
	-293968,
	218243,
	406347,
	127168,
	-234490,
	-277390,
	-18780,
	205651,
	165931,
	-37974,
	-154356,
	-82524,
	55301,
	98729,
	29585,
	52471,
	100731,
	25052,
	-114017,
	-143416,
	13978,
	200279,
	170762,
	-94897,
	-303796,
	-163722,
	224921,
	408845,
	101063,
	-403816,
	-491158,
	37139,
	620747,
	519209,
	-264987,
	-852007,
	-457323,
	585725,
	1060324,
	270629,
	-986928,
	-1196329,
	68479,
	1436796,
	1202568,
	-572988,
	-1882481,
	-1020142,
	1233979,
	2251301,
	597628,
	-2014577,
	-2455416,
	98490,
	2846389,
	2400188,
	-1073042,
	-3629604,
	-1995914,
	2292539,
	4237664,
	1172082,
	-3678358,
	-4526945,
	107222,
	5104317,
	4351290,
	-1828602,
	-6400002,
	-3580558,
	3917428,
	7360662,
	2121657,
	-6230813,
	-7763788,
	60081,
	8557388,
	7391705,
	-2921705,
	-10625213,
	-6058613,
	6328318,
	12118407,
	3639758,
	-10046112,
	-12702121,
	-99850,
	13744737,
	12054467,
	-4482473,
	-17010141,
	-9903018,
	9897187,
	19367917,
	6062777,
	-15794993,
	-20315970,
	-471998,
	21690593,
	19364029,
	-6777706,
	-26977359,
	-16076411,
	15420017,
	30951846,
	10113477,
	-25003228,
	-32844471,
	-1266540,
	34890124,
	31849823,
	-10519501,
	-44265340,
	-27145962,
	25142256,
	52141981,
	17884556,
	-42365002,
	-57349639,
	-3117160,
	61881153,
	58463725,
	-18420233,
	-83452948,
	-53574812,
	48873256,
	107220424,
	39592117,
	-92870683,
	-134528200,
	-9908237,
	163084521,
	170951491,
	-56021421,
	-308933738,
	-245419954,
	284485726,
	1038448307,
	1527184009,
	1404746936,
	759191516,
	37914734,
	-323670750,
	-233425589,
	49117307,
	197564492,
	106614198,
	-72793896,
	-138178493,
	-45203686,
	79251504,
	98226662,
	8473162,
	-77357958,
	-67263013,
	14883401,
	70453830,
	42038021,
	-29344609,
	-60428207,
	-21414375,
	37218555,
	48649842,
	4962710,
	-40013642,
	-36228109,
	7540863,
	38918970,
	24082320,
	-16320026,
	-34979024,
	-12950056,
	21680849,
	29146546,
	3379503,
	-24033873,
	-22283842,
	4276176,
	23882779,
	15144115,
	-9855054,
	-21794321,
	-8348981,
	13370978,
	18359188,
	2370958,
	-14987176,
	-14150982,
	2474520,
	14981441,
	9688814,
	-6025842,
	-13706421,
	-5407491,
	8261082,
	11548941,
	1637794,
	-9274822,
	-8892072,
	1402119,
	9248771,
	6083103,
	-3604529,
	-8419462,
	-3409653,
	4960636,
	7046359,
	1085082,
	-5541994,
	-5383277,
	756684,
	5477671,
	3655404,
	-2057845,
	-4930007,
	-2043290,
	2826557,
	4071598,
	674298,
	-3122084,
	-3065667,
	378854,
	3037597,
	2051278,
	-1093566,
	-2682855,
	-1134100,
	1488401,
	2168677,
	382714,
	-1611506,
	-1594577,
	170184,
	1528232,
	1040350,
	-522780,
	-1309508,
	-561794,
	696681,
	1022192,
	190231,
	-728387,
	-722145,
	64913,
	660963,
	450286,
	-211442,
	-536896,
	-231490,
	268679,
	392790,
	75817,
	-261693,
	-256168,
	18595,
	216231,
	144338,
	-61774,
	-154888,
	-64966,
	67996,
	94751,
	17900,
	63148,
	98536,
	8025,
	-127179,
	-133008,
	41118,
	212114,
	146912,
	-132056,
	-308121,
	-121350,
	269184,
	397315,
	36504,
	-448648,
	-454028,
	124620,
	655594,
	446695,
	-371636,
	-862530,
	-341518,
	701972,
	1029424,
	107820,
	-1096613,
	-1106058,
	275371,
	1517246,
	1036892,
	-812205,
	-1905721,
	-768354,
	1483415,
	2186531,
	258074,
	-2241382,
	-2272765,
	514854,
	3008098,
	2075531,
	-1539852,
	-3677047,
	-1516343,
	2766607,
	4119720,
	541440,
	-4100196,
	-4196982,
	863517,
	5401053,
	3774830,
	-2660265,
	-6490897,
	-2743475,
	4748357,
	7165137,
	1037960,
	-6961167,
	-7211559,
	1341925,
	9069135,
	6434255,
	-4315023,
	-10791250,
	-4680930,
	7708042,
	11814967,
	1871072,
	-11252911,
	-11823739,
	1978038,
	14593872,
	10530407,
	-6730591,
	-17304998,
	-7713736,
	12119646,
	18917677,
	3254824,
	-17744856,
	-18956400,
	2830226,
	23081608,
	16980000,
	-10364724,
	-27501247,
	-12624505,
	18995534,
	30300236,
	5643058,
	-28188129,
	-30734015,
	4062006,
	37231577,
	28048630,
	-16419878,
	-45249041,
	-21499213,
	31189788,
	51203743,
	10337161,
	-47982902,
	-53879178,
	6268523,
	66316322,
	51786439,
	-29453593,
	-85719114,
	-42878701,
	61235168,
	105950111,
	23706745,
	-106140280,
	-127549239,
	13407223,
	176906451,
	153819623,
	-93158102,
	-324582476,
	-203638483,
	375501026,
	1124237846,
	1548183654,
	1345773156,
	662354072,
	-32940436,
	-334379689,
	-201098458,
	80053826,
	198137273,
	84275390,
	-90160591,
	-133811262,
	-27843935,
	89036036,
	91307971,
	-5170671,
	-82076952,
	-59186091,
	25311822,
	71574948,
	33741236,
	-36875983,
	-58999496,
	-13563520,
	42153839,
	45507029,
	-1977864,
	-42685970,
	-32067581,
	13274612,
	39700656,
	19484554,
	-20696202,
	-34269980,
	-8384709,
	24674261,
	27354536,
	-794445,
	-25722953,
	-19802325,
	7809014,
	24425410,
	12331375,
	-12600944,
	-21402285,
	-5511013,
	15277789,
	17272757,
	-250342,
	-16081957,
	-12615337,
	4707157,
	15352688,
	7933810,
	-7767536,
	-13484702,
	-3631955,
	9473731,
	10887521,
	-972,
	-9974728,
	-7949112,
	2793494,
	9494023,
	5006692,
	-4684717,
	-8296014,
	-2326540,
	5708595,
	6654230,
	93532,
	-5972212,
	-4824155,
	1589964,
	5631016,
	3022561,
	-2697114,
	-4863878,
	-1414390,
	3263533,
	3850487,
	107273,
	-3370406,
	-2753012,
	847032,
	3126231,
	1703200,
	-1445650,
	-2649354,
	-795313,
	1723809,
	2053044,
	84611,
	-1742156,
	-1434289,
	409528,
	1573960,
	866852,
	-697095,
	-1293699,
	-398543,
	808994,
	968085,
	52176,
	-788045,
	-650094,
	170690,
	680656,
	376101,
	-284277,
	-530057,
	-165793,
	312449,
	371611,
	24258,
	-282861,
	-230339,
	54512,
	222099,
	120492,
	-83526,
	-152243,
	-46735,
	78792,
	88995,
	6392,
	72962,
	94139,
	-9854,
	-138141,
	-119426,
	68302,
	219877,
	119260,
	-167541,
	-306140,
	-75305,
	309004,
	377239,
	-30392,
	-485242,
	-406636,
	211485,
	677642,
	363400,
	-472824,
	-855457,
	-216365,
	805997,
	976710,
	-60245,
	-1185707,
	-991392,
	480228,
	1567858,
	847077,
	-1038700,
	-1890155,
	-496719,
	1706314,
	2075827,
	-91991,
	-2425583,
	-2040731,
	926758,
	3110409,
	1703653,
	-1981639,
	-3649722,
	-999102,
	3190357,
	3915734,
	-108624,
	-4443493,
	-3776751,
	1611756,
	5590868,
	3113851,
	-3447696,
	-6449957,
	-1840088,
	5492000,
	6820586,
	-79720,
	-7557523,
	-6505339,
	2610982,
	9401087,
	5334338,
	-5635639,
	-10738331,
	-3192265,
	8945211,
	11266516,
	44924,
	-12242559,
	-10694081,
	4037701,
	15153586,
	8774799,
	-8864885,
	-17249095,
	-5343615,
	14117707,
	18075870,
	350732,
	-19352450,
	-17194876,
	6109528,
	24015448,
	14223385,
	-13778212,
	-27468453,
	-8877061,
	22221657,
	29021850,
	1007541,
	-30832366,
	-27970986,
	9368924,
	38838887,
	23628422,
	-22055854,
	-45319086,
	-15341149,
	36677276,
	49204930,
	2474951,
	-52697465,
	-49254537,
	15667820,
	69462298,
	43937593,
	-40073396,
	-86267719,
	-31096227,
	72592953,
	102473868,
	6955898,
	-117567740,
	-117740536,
	37188941,
	187566243,
	132776897,
	-130208035,
	-334397260,
	-154121315,
	469472916,
	1204676795,
	1558747996,
	1278815852,
	565430224,
	-97105500,
	-337823125,
	-166438970,
	108077111,
	194734355,
	60971656,
	-105219459,
	-126873020,
	-10340489,
	96813687,
	82694519,
	-18446567,
	-85056214,
	-50055816,
	35058023,
	71234502,
	24889047,
	-43553272,
	-56399651,
	-5545817,
	46172252,
	41485372,
	-8791091,
	-44462731,
	-27309081,
	18672130,
	39670614,
	14545533,
	-24604413,
	-32875824,
	-3700180,
	27135911,
	25028641,
	-4907467,
	-26873655,
	-16946541,
	11146563,
	24468169,
	9298628,
	-15063167,
	-20581299,
	-2591131,
	16855585,
	15848146,
	-2839217,
	-16839869,
	-10840496,
	6821096,
	15409348,
	6036806,
	-9333561,
	-12992466,
	-1801941,
	10481609,
	10012940,
	-1621865,
	-10465107,
	-6855702,
	4112871,
	9544408,
	3841116,
	-5657815,
	-8006107,
	-1208886,
	6332305,
	6132075,
	-888111,
	-6276415,
	-4174207,
	2380851,
	5668523,
	2336492,
	-3273710,
	-4700185,
	-765030,
	3628743,
	3554409,
	-454294,
	-3547153,
	-2388975,
	1291522,
	3150360,
	1325669,
	-1763349,
	-2562750,
	-445526,
	1920752,
	1897669,
	-210511,
	-1835470,
	-1247593,
	636625,
	1587074,
	678791,
	-854261,
	-1251997,
	-230191,
	902858,
	895412,
	-84268,
	-830576,
	-566342,
	270825,
	686152,
	295914,
	-349730,
	-512640,
	-98288,
	348822,
	343432,
	-26453,
	-297721,
	-200557,
	88276,
	223275,
	94954,
	-102848,
	-146587,
	-28233,
	87540,
	81658,
	-4705

};

static const struct src_stage src_int32_8_21_4535_5000 = {
	13, 5, 8, 248, 1984, 21, 8, 0, 1,
	src_int32_8_21_4535_5000_fir};
/** \endcond */