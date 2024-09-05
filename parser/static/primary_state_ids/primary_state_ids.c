/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primary_state_ids.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_primary_state_ids.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_primary_state_ids_array	g_t_primary_state_ids_array = {.a = {
[0] = 0,
[1] = 1,
[2] = 2,
[3] = 3,
[4] = 2,
[5] = 2,
[6] = 3,
[7] = 3,
[8] = 8,
[9] = 9,
[10] = 10,
[11] = 11,
[12] = 12,
[13] = 13,
[14] = 14,
[15] = 15,
[16] = 16,
[17] = 17,
[18] = 18,
[19] = 19,
[20] = 20,
[21] = 21,
[22] = 22,
[23] = 23,
[24] = 24,
[25] = 25,
[26] = 26,
[27] = 27,
[28] = 28,
[29] = 29,
[30] = 30,
[31] = 31,
[32] = 32,
[33] = 33,
[34] = 34,
[35] = 35,
[36] = 35,
[37] = 35,
[38] = 19,
[39] = 39,
[40] = 40,
[41] = 41,
[42] = 19,
[43] = 40,
[44] = 44,
[45] = 41,
[46] = 40,
[47] = 40,
[48] = 41,
[49] = 40,
[50] = 50,
[51] = 19,
[52] = 41,
[53] = 41,
[54] = 41,
[55] = 41,
[56] = 56,
[57] = 40,
[58] = 58,
[59] = 40,
[60] = 40,
[61] = 50,
[62] = 41,
[63] = 41,
[64] = 56,
[65] = 40,
[66] = 40,
[67] = 41,
[68] = 40,
[69] = 40,
[70] = 56,
[71] = 58,
[72] = 50,
[73] = 41,
[74] = 41,
[75] = 40,
[76] = 41,
[77] = 40,
[78] = 41,
[79] = 41,
[80] = 40,
[81] = 39,
[82] = 40,
[83] = 41,
[84] = 84,
[85] = 85,
[86] = 41,
[87] = 40,
[88] = 88,
[89] = 40,
[90] = 41,
[91] = 40,
[92] = 84,
[93] = 41,
[94] = 41,
[95] = 40,
[96] = 40,
[97] = 41,
[98] = 40,
[99] = 39,
[100] = 84,
[101] = 41,
[102] = 58,
[103] = 19,
[104] = 104,
[105] = 105,
[106] = 105,
[107] = 107,
[108] = 108,
[109] = 109,
[110] = 108,
[111] = 111,
[112] = 104,
[113] = 105,
[114] = 104,
[115] = 108,
[116] = 104,
[117] = 111,
[118] = 104,
[119] = 111,
[120] = 120,
[121] = 120,
[122] = 120,
[123] = 123,
[124] = 123,
[125] = 123,
[126] = 120,
[127] = 120,
[128] = 123,
[129] = 129,
[130] = 130,
[131] = 123,
[132] = 123,
[133] = 123,
[134] = 120,
[135] = 120,
[136] = 136,
[137] = 136,
[138] = 136,
[139] = 136,
[140] = 136,
[141] = 136,
[142] = 136,
[143] = 143,
[144] = 143,
[145] = 143,
[146] = 143,
[147] = 143,
[148] = 143,
[149] = 143,
[150] = 143,
[151] = 143,
[152] = 143,
[153] = 143,
[154] = 143,
[155] = 155,
[156] = 143,
[157] = 157,
[158] = 158,
[159] = 159,
[160] = 160,
[161] = 157,
[162] = 162,
[163] = 163,
[164] = 155,
[165] = 160,
[166] = 158,
[167] = 163,
[168] = 159,
[169] = 159,
[170] = 158,
[171] = 157,
[172] = 162,
[173] = 162,
[174] = 163,
[175] = 155,
[176] = 160,
[177] = 177,
[178] = 178,
[179] = 158,
[180] = 155,
[181] = 160,
[182] = 159,
[183] = 143,
[184] = 184,
[185] = 158,
[186] = 177,
[187] = 160,
[188] = 155,
[189] = 163,
[190] = 159,
[191] = 178,
[192] = 177,
[193] = 184,
[194] = 143,
[195] = 159,
[196] = 157,
[197] = 178,
[198] = 143,
[199] = 157,
[200] = 162,
[201] = 160,
[202] = 159,
[203] = 160,
[204] = 184,
[205] = 162,
[206] = 206,
[207] = 159,
[208] = 177,
[209] = 209,
[210] = 206,
[211] = 206,
[212] = 206,
[213] = 213,
[214] = 143,
[215] = 178,
[216] = 177,
[217] = 213,
[218] = 218,
[219] = 143,
[220] = 209,
[221] = 218,
[222] = 222,
[223] = 206,
[224] = 159,
[225] = 160,
[226] = 218,
[227] = 222,
[228] = 206,
[229] = 206,
[230] = 230,
[231] = 209,
[232] = 213,
[233] = 233,
[234] = 222,
[235] = 233,
[236] = 233,
[237] = 209,
[238] = 209,
[239] = 178,
[240] = 240,
[241] = 163,
[242] = 160,
[243] = 240,
[244] = 233,
[245] = 240,
[246] = 222,
[247] = 233,
[248] = 143,
[249] = 159,
[250] = 250,
[251] = 155,
[252] = 158,
[253] = 162,
[254] = 222,
[255] = 157,
[256] = 160,
[257] = 240,
[258] = 258,
[259] = 159,
[260] = 160,
[261] = 261,
[262] = 157,
[263] = 155,
[264] = 250,
[265] = 265,
[266] = 266,
[267] = 266,
[268] = 268,
[269] = 163,
[270] = 270,
[271] = 270,
[272] = 240,
[273] = 261,
[274] = 158,
[275] = 265,
[276] = 276,
[277] = 276,
[278] = 162,
[279] = 270,
[280] = 276,
[281] = 281,
[282] = 258,
[283] = 266,
[284] = 266,
[285] = 159,
[286] = 265,
[287] = 270,
[288] = 266,
[289] = 261,
[290] = 270,
[291] = 266,
[292] = 258,
[293] = 270,
[294] = 294,
[295] = 295,
[296] = 296,
[297] = 297,
[298] = 298,
[299] = 299,
[300] = 300,
[301] = 301,
[302] = 302,
[303] = 303,
[304] = 304,
[305] = 305,
[306] = 306,
[307] = 307,
[308] = 308,
[309] = 222,
[310] = 250,
[311] = 299,
[312] = 301,
[313] = 160,
[314] = 307,
[315] = 304,
[316] = 304,
[317] = 301,
[318] = 296,
[319] = 307,
[320] = 299,
[321] = 321,
[322] = 322,
[323] = 323,
[324] = 324,
[325] = 308,
[326] = 326,
[327] = 308,
[328] = 298,
[329] = 329,
[330] = 330,
[331] = 266,
[332] = 332,
[333] = 333,
[334] = 322,
[335] = 321,
[336] = 336,
[337] = 270,
[338] = 296,
[339] = 339,
[340] = 340,
[341] = 301,
[342] = 304,
[343] = 270,
[344] = 307,
[345] = 323,
[346] = 324,
[347] = 329,
[348] = 348,
[349] = 322,
[350] = 321,
[351] = 339,
[352] = 339,
[353] = 299,
[354] = 333,
[355] = 339,
[356] = 356,
[357] = 357,
[358] = 323,
[359] = 324,
[360] = 266,
[361] = 356,
[362] = 258,
[363] = 329,
[364] = 364,
[365] = 333,
[366] = 159,
[367] = 348,
[368] = 307,
[369] = 340,
[370] = 324,
[371] = 323,
[372] = 336,
[373] = 357,
[374] = 266,
[375] = 339,
[376] = 332,
[377] = 330,
[378] = 304,
[379] = 295,
[380] = 297,
[381] = 381,
[382] = 300,
[383] = 302,
[384] = 303,
[385] = 298,
[386] = 305,
[387] = 298,
[388] = 306,
[389] = 333,
[390] = 329,
[391] = 339,
[392] = 296,
[393] = 296,
[394] = 307,
[395] = 304,
[396] = 301,
[397] = 270,
[398] = 298,
[399] = 296,
[400] = 299,
[401] = 276,
[402] = 258,
[403] = 299,
[404] = 321,
[405] = 301,
[406] = 308,
[407] = 322,
[408] = 298,
[409] = 258,
[410] = 321,
[411] = 298,
[412] = 308,
[413] = 333,
[414] = 321,
[415] = 258,
[416] = 281,
[417] = 322,
[418] = 329,
[419] = 323,
[420] = 324,
[421] = 329,
[422] = 266,
[423] = 333,
[424] = 265,
[425] = 308,
[426] = 266,
[427] = 233,
[428] = 381,
[429] = 323,
[430] = 324,
[431] = 261,
[432] = 322,
[433] = 339,
[434] = 333,
[435] = 222,
[436] = 296,
[437] = 333,
[438] = 281,
[439] = 233,
[440] = 143,
[441] = 306,
[442] = 321,
[443] = 322,
[444] = 305,
[445] = 329,
[446] = 303,
[447] = 324,
[448] = 323,
[449] = 302,
[450] = 300,
[451] = 329,
[452] = 308,
[453] = 143,
[454] = 250,
[455] = 455,
[456] = 307,
[457] = 266,
[458] = 304,
[459] = 250,
[460] = 143,
[461] = 381,
[462] = 301,
[463] = 250,
[464] = 297,
[465] = 295,
[466] = 330,
[467] = 332,
[468] = 336,
[469] = 281,
[470] = 143,
[471] = 340,
[472] = 296,
[473] = 250,
[474] = 299,
[475] = 299,
[476] = 324,
[477] = 322,
[478] = 478,
[479] = 478,
[480] = 281,
[481] = 307,
[482] = 333,
[483] = 321,
[484] = 484,
[485] = 484,
[486] = 240,
[487] = 143,
[488] = 323,
[489] = 339,
[490] = 308,
[491] = 299,
[492] = 321,
[493] = 258,
[494] = 324,
[495] = 323,
[496] = 322,
[497] = 304,
[498] = 301,
[499] = 329,
[500] = 160,
[501] = 308,
[502] = 296,
[503] = 301,
[504] = 304,
[505] = 348,
[506] = 357,
[507] = 478,
[508] = 484,
[509] = 159,
[510] = 356,
[511] = 307,
[512] = 143,
[513] = 339,
[514] = 514,
[515] = 515,
[516] = 515,
[517] = 515,
[518] = 514,
[519] = 515,
[520] = 520,
[521] = 515,
[522] = 522,
[523] = 523,
[524] = 524,
[525] = 276,
[526] = 515,
[527] = 527,
[528] = 528,
[529] = 522,
[530] = 258,
[531] = 515,
[532] = 515,
[533] = 524,
[534] = 515,
[535] = 520,
[536] = 515,
[537] = 528,
[538] = 524,
[539] = 265,
[540] = 515,
[541] = 541,
[542] = 240,
[543] = 357,
[544] = 356,
[545] = 527,
[546] = 546,
[547] = 348,
[548] = 340,
[549] = 546,
[550] = 336,
[551] = 541,
[552] = 332,
[553] = 330,
[554] = 295,
[555] = 546,
[556] = 541,
[557] = 527,
[558] = 515,
[559] = 381,
[560] = 520,
[561] = 515,
[562] = 515,
[563] = 143,
[564] = 523,
[565] = 515,
[566] = 515,
[567] = 522,
[568] = 515,
[569] = 266,
[570] = 523,
[571] = 528,
[572] = 297,
[573] = 573,
[574] = 261,
[575] = 515,
[576] = 514,
[577] = 515,
[578] = 515,
[579] = 266,
[580] = 515,
[581] = 515,
[582] = 306,
[583] = 305,
[584] = 303,
[585] = 302,
[586] = 300,
[587] = 143,
[588] = 266,
[589] = 258,
[590] = 159,
[591] = 591,
[592] = 265,
[593] = 258,
[594] = 591,
[595] = 160,
[596] = 270,
[597] = 597,
[598] = 266,
[599] = 541,
[600] = 261,
[601] = 270,
[602] = 527,
[603] = 591,
[604] = 266,
[605] = 270,
[606] = 276,
[607] = 258,
[608] = 308,
[609] = 299,
[610] = 610,
[611] = 611,
[612] = 612,
[613] = 304,
[614] = 610,
[615] = 610,
[616] = 616,
[617] = 321,
[618] = 266,
[619] = 619,
[620] = 620,
[621] = 610,
[622] = 308,
[623] = 308,
[624] = 324,
[625] = 322,
[626] = 323,
[627] = 329,
[628] = 610,
[629] = 629,
[630] = 270,
[631] = 296,
[632] = 301,
[633] = 610,
[634] = 304,
[635] = 307,
[636] = 339,
[637] = 610,
[638] = 610,
[639] = 610,
[640] = 323,
[641] = 610,
[642] = 299,
[643] = 333,
[644] = 324,
[645] = 610,
[646] = 610,
[647] = 329,
[648] = 296,
[649] = 610,
[650] = 160,
[651] = 610,
[652] = 333,
[653] = 322,
[654] = 333,
[655] = 321,
[656] = 324,
[657] = 323,
[658] = 610,
[659] = 296,
[660] = 339,
[661] = 612,
[662] = 339,
[663] = 301,
[664] = 610,
[665] = 610,
[666] = 321,
[667] = 322,
[668] = 610,
[669] = 299,
[670] = 610,
[671] = 620,
[672] = 611,
[673] = 610,
[674] = 629,
[675] = 307,
[676] = 301,
[677] = 304,
[678] = 307,
[679] = 619,
[680] = 616,
[681] = 329,
[682] = 143,
[683] = 321,
[684] = 258,
[685] = 143,
[686] = 299,
[687] = 339,
[688] = 308,
[689] = 301,
[690] = 266,
[691] = 304,
[692] = 307,
[693] = 323,
[694] = 333,
[695] = 324,
[696] = 329,
[697] = 322,
[698] = 296,
[699] = 699,
[700] = 699,
[701] = 527,
[702] = 702,
[703] = 702,
[704] = 702,
[705] = 702,
[706] = 702,
[707] = 541,
[708] = 702,
[709] = 702,
[710] = 699,
[711] = 702,
[712] = 712,
[713] = 702,
[714] = 712,
[715] = 712,
[716] = 702,
[717] = 712,
[718] = 702,
[719] = 712,
[720] = 699,
[721] = 712,
[722] = 712,
[723] = 699,
[724] = 702,
[725] = 712,
[726] = 699,
[727] = 702,
[728] = 699,
[729] = 702,
[730] = 699,
[731] = 712,
[732] = 699,
[733] = 733,
[734] = 699,
[735] = 699,
[736] = 699,
[737] = 699,
[738] = 702,
[739] = 699,
[740] = 699,
[741] = 699,
[742] = 742,
[743] = 699,
[744] = 699,
[745] = 712,
[746] = 712,
[747] = 702,
[748] = 712,
[749] = 702,
[750] = 750,
[751] = 699,
[752] = 702,
[753] = 753,
[754] = 702,
[755] = 753,
[756] = 753,
[757] = 702,
[758] = 702,
[759] = 702,
[760] = 702,
[761] = 702,
[762] = 520,
[763] = 702,
[764] = 702,
[765] = 702,
[766] = 270,
[767] = 767,
[768] = 702,
[769] = 712,
[770] = 702,
[771] = 702,
[772] = 546,
[773] = 712,
[774] = 702,
[775] = 523,
[776] = 776,
[777] = 308,
[778] = 299,
[779] = 265,
[780] = 780,
[781] = 301,
[782] = 258,
[783] = 304,
[784] = 307,
[785] = 776,
[786] = 776,
[787] = 270,
[788] = 323,
[789] = 324,
[790] = 776,
[791] = 791,
[792] = 792,
[793] = 329,
[794] = 791,
[795] = 296,
[796] = 339,
[797] = 776,
[798] = 776,
[799] = 776,
[800] = 333,
[801] = 776,
[802] = 776,
[803] = 791,
[804] = 776,
[805] = 776,
[806] = 776,
[807] = 776,
[808] = 322,
[809] = 776,
[810] = 776,
[811] = 321,
[812] = 266,
[813] = 813,
[814] = 814,
[815] = 308,
[816] = 322,
[817] = 321,
[818] = 818,
[819] = 819,
[820] = 820,
[821] = 818,
[822] = 301,
[823] = 304,
[824] = 307,
[825] = 339,
[826] = 826,
[827] = 299,
[828] = 828,
[829] = 323,
[830] = 324,
[831] = 818,
[832] = 266,
[833] = 333,
[834] = 329,
[835] = 835,
[836] = 265,
[837] = 837,
[838] = 813,
[839] = 818,
[840] = 840,
[841] = 841,
[842] = 842,
[843] = 843,
[844] = 296,
[845] = 845,
[846] = 846,
[847] = 265,
[848] = 843,
[849] = 813,
[850] = 837,
[851] = 814,
[852] = 265,
[853] = 820,
[854] = 845,
[855] = 828,
[856] = 842,
[857] = 258,
[858] = 826,
[859] = 819,
[860] = 841,
[861] = 818,
[862] = 840,
[863] = 835,
[864] = 864,
[865] = 265,
[866] = 866,
[867] = 820,
[868] = 835,
[869] = 840,
[870] = 266,
[871] = 841,
[872] = 842,
[873] = 846,
[874] = 845,
[875] = 843,
[876] = 813,
[877] = 820,
[878] = 819,
[879] = 837,
[880] = 818,
[881] = 826,
[882] = 828,
[883] = 826,
[884] = 846,
[885] = 819,
[886] = 266,
[887] = 143,
[888] = 818,
[889] = 814,
[890] = 828,
[891] = 266,
[892] = 270,
[893] = 893,
[894] = 814,
[895] = 266,
[896] = 837,
[897] = 843,
[898] = 845,
[899] = 899,
[900] = 835,
[901] = 842,
[902] = 841,
[903] = 840,
[904] = 904,
[905] = 905,
[906] = 301,
[907] = 308,
[908] = 304,
[909] = 299,
[910] = 307,
[911] = 265,
[912] = 912,
[913] = 913,
[914] = 323,
[915] = 266,
[916] = 916,
[917] = 917,
[918] = 918,
[919] = 919,
[920] = 905,
[921] = 324,
[922] = 916,
[923] = 329,
[924] = 924,
[925] = 916,
[926] = 322,
[927] = 917,
[928] = 321,
[929] = 918,
[930] = 339,
[931] = 919,
[932] = 333,
[933] = 296,
[934] = 934,
[935] = 919,
[936] = 918,
[937] = 913,
[938] = 819,
[939] = 826,
[940] = 904,
[941] = 828,
[942] = 917,
[943] = 814,
[944] = 837,
[945] = 813,
[946] = 843,
[947] = 845,
[948] = 842,
[949] = 905,
[950] = 520,
[951] = 841,
[952] = 840,
[953] = 953,
[954] = 835,
[955] = 905,
[956] = 917,
[957] = 918,
[958] = 905,
[959] = 904,
[960] = 913,
[961] = 919,
[962] = 904,
[963] = 924,
[964] = 934,
[965] = 934,
[966] = 966,
[967] = 924,
[968] = 934,
[969] = 913,
[970] = 924,
[971] = 916,
[972] = 820,
[973] = 143,
[974] = 974,
[975] = 975,
[976] = 975,
[977] = 977,
[978] = 978,
[979] = 979,
[980] = 980,
[981] = 975,
[982] = 982,
[983] = 983,
[984] = 984,
[985] = 985,
[986] = 986,
[987] = 987,
[988] = 987,
[989] = 989,
[990] = 990,
[991] = 913,
[992] = 992,
[993] = 934,
[994] = 975,
[995] = 924,
[996] = 996,
[997] = 997,
[998] = 987,
[999] = 990,
[1000] = 1000,
[1001] = 974,
[1002] = 1002,
[1003] = 975,
[1004] = 996,
[1005] = 520,
[1006] = 990,
[1007] = 1007,
[1008] = 1008,
[1009] = 1009,
[1010] = 1000,
[1011] = 1011,
[1012] = 1000,
[1013] = 975,
[1014] = 987,
[1015] = 1000,
[1016] = 987,
[1017] = 996,
[1018] = 1018,
[1019] = 990,
[1020] = 1020,
[1021] = 987,
[1022] = 1022,
[1023] = 1023,
[1024] = 1024,
[1025] = 1025,
[1026] = 975,
[1027] = 266,
[1028] = 1028,
[1029] = 1029,
[1030] = 987,
[1031] = 975,
[1032] = 1032,
[1033] = 919,
[1034] = 987,
[1035] = 918,
[1036] = 975,
[1037] = 917,
[1038] = 996,
[1039] = 1039,
[1040] = 916,
[1041] = 975,
[1042] = 987,
[1043] = 1043,
[1044] = 975,
[1045] = 975,
[1046] = 987,
[1047] = 987,
[1048] = 975,
[1049] = 987,
[1050] = 1050,
[1051] = 975,
[1052] = 975,
[1053] = 987,
[1054] = 987,
[1055] = 987,
[1056] = 987,
[1057] = 975,
[1058] = 975,
[1059] = 974,
[1060] = 987,
[1061] = 1061,
[1062] = 1062,
[1063] = 1063,
[1064] = 904,
[1065] = 1065,
[1066] = 1066,
[1067] = 1067,
[1068] = 1068,
[1069] = 1069,
[1070] = 974,
[1071] = 975,
[1072] = 975,
[1073] = 987,
[1074] = 987,
[1075] = 975,
[1076] = 1076,
[1077] = 987,
[1078] = 987,
[1079] = 1079,
[1080] = 975,
[1081] = 987,
[1082] = 1082,
[1083] = 1083,
[1084] = 1084,
[1085] = 974,
[1086] = 975,
[1087] = 987,
[1088] = 975,
[1089] = 1089,
[1090] = 1090,
[1091] = 1090,
[1092] = 1092,
[1093] = 1093,
[1094] = 1090,
[1095] = 1093,
[1096] = 1096,
[1097] = 1096,
[1098] = 1093,
[1099] = 1090,
[1100] = 1093,
[1101] = 1096,
[1102] = 1090,
[1103] = 1096,
[1104] = 1093,
[1105] = 1090,
[1106] = 1090,
[1107] = 1093,
[1108] = 1108,
[1109] = 996,
[1110] = 1090,
[1111] = 1093,
[1112] = 1096,
[1113] = 1113,
[1114] = 1096,
[1115] = 1093,
[1116] = 1093,
[1117] = 1090,
[1118] = 1096,
[1119] = 1119,
[1120] = 1090,
[1121] = 1093,
[1122] = 1096,
[1123] = 1096,
[1124] = 1093,
[1125] = 1093,
[1126] = 990,
[1127] = 1090,
[1128] = 1128,
[1129] = 1090,
[1130] = 1090,
[1131] = 1096,
[1132] = 1096,
[1133] = 1093,
[1134] = 1134,
[1135] = 1090,
[1136] = 1096,
[1137] = 1137,
[1138] = 1096,
[1139] = 1090,
[1140] = 1090,
[1141] = 1093,
[1142] = 1142,
[1143] = 1143,
[1144] = 1096,
[1145] = 1096,
[1146] = 1090,
[1147] = 1093,
[1148] = 1000,
[1149] = 1093,
[1150] = 1096,
[1151] = 1090,
[1152] = 1090,
[1153] = 1093,
[1154] = 1137,
[1155] = 1108,
[1156] = 1096,
[1157] = 1157,
[1158] = 1090,
[1159] = 1093,
[1160] = 1160,
[1161] = 1108,
[1162] = 1096,
[1163] = 1108,
[1164] = 953,
[1165] = 1137,
[1166] = 1096,
[1167] = 1090,
[1168] = 1093,
[1169] = 1169,
[1170] = 1096,
[1171] = 265,
[1172] = 1090,
[1173] = 1093,
[1174] = 250,
[1175] = 266,
[1176] = 1176,
[1177] = 1096,
[1178] = 1137,
[1179] = 1179,
[1180] = 1180,
[1181] = 1096,
[1182] = 1096,
[1183] = 1093,
[1184] = 1184,
[1185] = 1093,
[1186] = 1090,
[1187] = 1090,
[1188] = 520,
[1189] = 1093,
[1190] = 984,
[1191] = 1191,
[1192] = 1191,
[1193] = 1191,
[1194] = 1194,
[1195] = 1195,
[1196] = 1191,
[1197] = 1197,
[1198] = 1191,
[1199] = 1191,
[1200] = 1191,
[1201] = 1201,
[1202] = 1191,
[1203] = 1203,
[1204] = 1204,
[1205] = 1205,
[1206] = 1191,
[1207] = 1207,
[1208] = 1208,
[1209] = 1191,
[1210] = 1210,
[1211] = 1211,
[1212] = 1212,
[1213] = 1191,
[1214] = 1191,
[1215] = 1108,
[1216] = 980,
[1217] = 1191,
[1218] = 1191,
[1219] = 1191,
[1220] = 1137,
[1221] = 1221,
[1222] = 1222,
[1223] = 270,
[1224] = 266,
[1225] = 916,
[1226] = 917,
[1227] = 1191,
[1228] = 918,
[1229] = 919,
[1230] = 1039,
[1231] = 1065,
[1232] = 1232,
[1233] = 978,
[1234] = 979,
[1235] = 1191,
[1236] = 934,
[1237] = 983,
[1238] = 1191,
[1239] = 985,
[1240] = 986,
[1241] = 1008,
[1242] = 1020,
[1243] = 1022,
[1244] = 1024,
[1245] = 1028,
[1246] = 1029,
[1247] = 1043,
[1248] = 1089,
[1249] = 1191,
[1250] = 1082,
[1251] = 1068,
[1252] = 1050,
[1253] = 1025,
[1254] = 992,
[1255] = 1032,
[1256] = 1066,
[1257] = 989,
[1258] = 977,
[1259] = 1191,
[1260] = 1002,
[1261] = 1007,
[1262] = 1009,
[1263] = 1018,
[1264] = 1062,
[1265] = 997,
[1266] = 1067,
[1267] = 1084,
[1268] = 1079,
[1269] = 1191,
[1270] = 1069,
[1271] = 1063,
[1272] = 1061,
[1273] = 1076,
[1274] = 1023,
[1275] = 1191,
[1276] = 265,
[1277] = 924,
[1278] = 1278,
[1279] = 1279,
[1280] = 296,
[1281] = 919,
[1282] = 934,
[1283] = 1283,
[1284] = 1284,
[1285] = 308,
[1286] = 339,
[1287] = 917,
[1288] = 296,
[1289] = 322,
[1290] = 333,
[1291] = 339,
[1292] = 321,
[1293] = 299,
[1294] = 321,
[1295] = 322,
[1296] = 1296,
[1297] = 333,
[1298] = 329,
[1299] = 329,
[1300] = 924,
[1301] = 324,
[1302] = 324,
[1303] = 323,
[1304] = 323,
[1305] = 1305,
[1306] = 307,
[1307] = 304,
[1308] = 918,
[1309] = 990,
[1310] = 1310,
[1311] = 996,
[1312] = 1312,
[1313] = 1000,
[1314] = 1314,
[1315] = 1315,
[1316] = 1316,
[1317] = 1317,
[1318] = 1318,
[1319] = 916,
[1320] = 301,
[1321] = 296,
[1322] = 1315,
[1323] = 1323,
[1324] = 1324,
[1325] = 1323,
[1326] = 1324,
[1327] = 1279,
[1328] = 1328,
[1329] = 1328,
[1330] = 1316,
[1331] = 1323,
[1332] = 1318,
[1333] = 996,
[1334] = 1323,
[1335] = 1324,
[1336] = 1323,
[1337] = 1000,
[1338] = 1338,
[1339] = 1323,
[1340] = 1312,
[1341] = 1323,
[1342] = 1323,
[1343] = 990,
[1344] = 1323,
[1345] = 1345,
[1346] = 1345,
[1347] = 1108,
[1348] = 1323,
[1349] = 1324,
[1350] = 333,
[1351] = 1324,
[1352] = 1137,
[1353] = 1323,
[1354] = 1323,
[1355] = 329,
[1356] = 1323,
[1357] = 1324,
[1358] = 324,
[1359] = 1323,
[1360] = 1360,
[1361] = 1305,
[1362] = 1323,
[1363] = 323,
[1364] = 1324,
[1365] = 1323,
[1366] = 1323,
[1367] = 1323,
[1368] = 1323,
[1369] = 339,
[1370] = 1360,
[1371] = 1360,
[1372] = 1323,
[1373] = 1314,
[1374] = 321,
[1375] = 322,
[1376] = 996,
[1377] = 520,
[1378] = 333,
[1379] = 308,
[1380] = 1380,
[1381] = 1381,
[1382] = 1382,
[1383] = 953,
[1384] = 1381,
[1385] = 1108,
[1386] = 296,
[1387] = 301,
[1388] = 1388,
[1389] = 1389,
[1390] = 307,
[1391] = 1381,
[1392] = 304,
[1393] = 1137,
[1394] = 1394,
[1395] = 324,
[1396] = 323,
[1397] = 977,
[1398] = 986,
[1399] = 1020,
[1400] = 985,
[1401] = 984,
[1402] = 983,
[1403] = 1022,
[1404] = 1008,
[1405] = 1024,
[1406] = 1023,
[1407] = 270,
[1408] = 1076,
[1409] = 1028,
[1410] = 1043,
[1411] = 1089,
[1412] = 1082,
[1413] = 1068,
[1414] = 1050,
[1415] = 1025,
[1416] = 992,
[1417] = 1032,
[1418] = 1066,
[1419] = 989,
[1420] = 1002,
[1421] = 1007,
[1422] = 978,
[1423] = 979,
[1424] = 1009,
[1425] = 1018,
[1426] = 1062,
[1427] = 997,
[1428] = 1067,
[1429] = 1429,
[1430] = 1084,
[1431] = 1039,
[1432] = 1065,
[1433] = 1079,
[1434] = 1069,
[1435] = 1063,
[1436] = 1061,
[1437] = 266,
[1438] = 980,
[1439] = 1029,
[1440] = 1440,
[1441] = 324,
[1442] = 301,
[1443] = 296,
[1444] = 333,
[1445] = 323,
[1446] = 308,
[1447] = 324,
[1448] = 322,
[1449] = 321,
[1450] = 299,
[1451] = 304,
[1452] = 301,
[1453] = 329,
[1454] = 1454,
[1455] = 1455,
[1456] = 1454,
[1457] = 1457,
[1458] = 296,
[1459] = 304,
[1460] = 1460,
[1461] = 339,
[1462] = 1462,
[1463] = 1463,
[1464] = 1457,
[1465] = 323,
[1466] = 307,
[1467] = 1457,
[1468] = 1468,
[1469] = 321,
[1470] = 322,
[1471] = 329,
[1472] = 307,
[1473] = 333,
[1474] = 339,
[1475] = 1454,
[1476] = 1476,
[1477] = 1477,
[1478] = 307,
[1479] = 329,
[1480] = 322,
[1481] = 321,
[1482] = 301,
[1483] = 1483,
[1484] = 339,
[1485] = 1483,
[1486] = 270,
[1487] = 323,
[1488] = 324,
[1489] = 1489,
[1490] = 333,
[1491] = 1491,
[1492] = 266,
[1493] = 296,
[1494] = 1489,
[1495] = 1476,
[1496] = 1496,
[1497] = 1496,
[1498] = 1477,
[1499] = 304,
[1500] = 1500,
[1501] = 1477,
[1502] = 1476,
[1503] = 1503,
[1504] = 1483,
[1505] = 1505,
[1506] = 1500,
[1507] = 1496,
[1508] = 1508,
[1509] = 1491,
[1510] = 1489,
[1511] = 1508,
[1512] = 1508,
[1513] = 1500,
[1514] = 1491,
[1515] = 1515,
[1516] = 1516,
[1517] = 1517,
[1518] = 1518,
[1519] = 299,
[1520] = 308,
[1521] = 1521,
[1522] = 1522,
[1523] = 1523,
[1524] = 321,
[1525] = 296,
[1526] = 339,
[1527] = 1527,
[1528] = 333,
[1529] = 329,
[1530] = 1530,
[1531] = 1531,
[1532] = 1532,
[1533] = 1533,
[1534] = 307,
[1535] = 304,
[1536] = 301,
[1537] = 1537,
[1538] = 1538,
[1539] = 1539,
[1540] = 1540,
[1541] = 1541,
[1542] = 1542,
[1543] = 1543,
[1544] = 1544,
[1545] = 1545,
[1546] = 1546,
[1547] = 1547,
[1548] = 1548,
[1549] = 322,
[1550] = 1550,
[1551] = 1551,
[1552] = 1552,
[1553] = 1553,
[1554] = 1554,
[1555] = 1555,
[1556] = 1553,
[1557] = 1557,
[1558] = 1557,
[1559] = 1557,
[1560] = 1557,
[1561] = 1557,
[1562] = 1553,
[1563] = 250,
[1564] = 1557,
[1565] = 1554,
[1566] = 1557,
[1567] = 1567,
[1568] = 1568,
[1569] = 1569,
[1570] = 1570,
[1571] = 1554,
[1572] = 1572,
[1573] = 1573,
[1574] = 1574,
[1575] = 1575,
[1576] = 1576,
[1577] = 1577,
[1578] = 1578,
[1579] = 1579,
[1580] = 1580,
[1581] = 1578,
[1582] = 1578,
[1583] = 1583,
[1584] = 1584,
[1585] = 1585,
[1586] = 1580,
[1587] = 1587,
[1588] = 1588,
[1589] = 1589,
[1590] = 1590,
[1591] = 1591,
[1592] = 1592,
[1593] = 1593,
[1594] = 1594,
[1595] = 1595,
[1596] = 1593,
[1597] = 1578,
[1598] = 1598,
[1599] = 1579,
[1600] = 1595,
[1601] = 1595,
[1602] = 1580,
[1603] = 1578,
[1604] = 1604,
[1605] = 1605,
[1606] = 1606,
[1607] = 1607,
[1608] = 1598,
[1609] = 1609,
[1610] = 1598,
[1611] = 1611,
[1612] = 1612,
[1613] = 1578,
[1614] = 1614,
[1615] = 1580,
[1616] = 1595,
[1617] = 1617,
[1618] = 1618,
[1619] = 1595,
[1620] = 1620,
[1621] = 1621,
[1622] = 1598,
[1623] = 1623,
[1624] = 1606,
[1625] = 1584,
[1626] = 1598,
[1627] = 1627,
[1628] = 1580,
[1629] = 1578,
[1630] = 1598,
[1631] = 1618,
[1632] = 1585,
[1633] = 1593,
[1634] = 1634,
[1635] = 1635,
[1636] = 1609,
[1637] = 1637,
[1638] = 1638,
[1639] = 1617,
[1640] = 1634,
[1641] = 1580,
[1642] = 1595,
[1643] = 1604,
[1644] = 1579,
[1645] = 1645,
[1646] = 1595,
[1647] = 1620,
[1648] = 1580,
[1649] = 1649,
[1650] = 1650,
[1651] = 1651,
[1652] = 1621,
[1653] = 1653,
[1654] = 1654,
[1655] = 1655,
[1656] = 1598,
[1657] = 1627,
[1658] = 1645,
[1659] = 1659,
[1660] = 1651,
[1661] = 1659,
[1662] = 1662,
[1663] = 1663,
[1664] = 1662,
[1665] = 1598,
[1666] = 1595,
[1667] = 1585,
[1668] = 1578,
[1669] = 1595,
[1670] = 1595,
[1671] = 1578,
[1672] = 1580,
[1673] = 1578,
[1674] = 1674,
[1675] = 1580,
[1676] = 1595,
[1677] = 1677,
[1678] = 1580,
[1679] = 1595,
[1680] = 1578,
[1681] = 1580,
[1682] = 1595,
[1683] = 1578,
[1684] = 1584,
[1685] = 1580,
[1686] = 1595,
[1687] = 1578,
[1688] = 1580,
[1689] = 1595,
[1690] = 1677,
[1691] = 1578,
[1692] = 1692,
[1693] = 1580,
[1694] = 1583,
[1695] = 1595,
[1696] = 1578,
[1697] = 1580,
[1698] = 1595,
[1699] = 1663,
[1700] = 1595,
[1701] = 1580,
[1702] = 1578,
[1703] = 1583,
[1704] = 1663,
[1705] = 1598,
[1706] = 1598,
[1707] = 1674,
[1708] = 1583,
[1709] = 1578,
[1710] = 1677,
[1711] = 1645,
[1712] = 1651,
[1713] = 1713,
[1714] = 1580,
[1715] = 1595,
[1716] = 1692,
[1717] = 1717,
[1718] = 1604,
[1719] = 1692,
[1720] = 1609,
[1721] = 1618,
[1722] = 1722,
[1723] = 1578,
[1724] = 1578,
[1725] = 1580,
[1726] = 1595,
[1727] = 1580,
[1728] = 1595,
[1729] = 1606,
[1730] = 1730,
[1731] = 1731,
[1732] = 1617,
[1733] = 1578,
[1734] = 1583,
[1735] = 1580,
[1736] = 1598,
[1737] = 1598,
[1738] = 1583,
[1739] = 1578,
[1740] = 1595,
[1741] = 1598,
[1742] = 1620,
[1743] = 1674,
[1744] = 1598,
[1745] = 1580,
[1746] = 1595,
[1747] = 1583,
[1748] = 1578,
[1749] = 1621,
[1750] = 1580,
[1751] = 1595,
[1752] = 1627,
[1753] = 1634,
[1754] = 1754,
[1755] = 1659,
[1756] = 1662,
}};

const t_primary_state_ids_array	*create_primary_state_ids(void)
{
	return (&g_t_primary_state_ids_array);
}