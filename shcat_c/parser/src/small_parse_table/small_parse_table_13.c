/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_13.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_65(t_small_parse_table_array *v)
{
	v->a[1300] = anon_sym_EQ_EQ;
	v->a[1301] = anon_sym_LT;
	v->a[1302] = anon_sym_GT;
	v->a[1303] = anon_sym_LT_LT;
	v->a[1304] = anon_sym_GT_GT;
	v->a[1305] = anon_sym_LPAREN;
	v->a[1306] = anon_sym_esac;
	v->a[1307] = anon_sym_SEMI_SEMI;
	v->a[1308] = anon_sym_SEMI_AMP;
	v->a[1309] = anon_sym_SEMI_SEMI_AMP;
	v->a[1310] = anon_sym_PIPE_AMP;
	v->a[1311] = anon_sym_EQ_TILDE;
	v->a[1312] = anon_sym_AMP_GT;
	v->a[1313] = anon_sym_AMP_GT_GT;
	v->a[1314] = anon_sym_LT_AMP;
	v->a[1315] = anon_sym_GT_AMP;
	v->a[1316] = anon_sym_GT_PIPE;
	v->a[1317] = anon_sym_LT_AMP_DASH;
	v->a[1318] = anon_sym_GT_AMP_DASH;
	v->a[1319] = anon_sym_LT_LT_DASH;
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = aux_sym_heredoc_redirect_token1;
	v->a[1321] = anon_sym_LT_LT_LT;
	v->a[1322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1323] = anon_sym_DOLLAR_LBRACK;
	v->a[1324] = sym__special_character;
	v->a[1325] = sym_raw_string;
	v->a[1326] = sym_ansi_c_string;
	v->a[1327] = aux_sym_number_token1;
	v->a[1328] = aux_sym_number_token2;
	v->a[1329] = anon_sym_DOLLAR_LBRACE;
	v->a[1330] = anon_sym_DOLLAR_LPAREN;
	v->a[1331] = anon_sym_BQUOTE;
	v->a[1332] = anon_sym_DOLLAR_BQUOTE;
	v->a[1333] = anon_sym_LT_LPAREN;
	v->a[1334] = anon_sym_GT_LPAREN;
	v->a[1335] = sym_word;
	v->a[1336] = 26;
	v->a[1337] = actions(3);
	v->a[1338] = 1;
	v->a[1339] = sym_comment;
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = actions(1410);
	v->a[1341] = 1;
	v->a[1342] = anon_sym_LT_LT_LT;
	v->a[1343] = actions(1412);
	v->a[1344] = 1;
	v->a[1345] = anon_sym_DOLLAR_LBRACK;
	v->a[1346] = actions(1414);
	v->a[1347] = 1;
	v->a[1348] = anon_sym_DOLLAR;
	v->a[1349] = actions(1416);
	v->a[1350] = 1;
	v->a[1351] = sym__special_character;
	v->a[1352] = actions(1418);
	v->a[1353] = 1;
	v->a[1354] = anon_sym_DQUOTE;
	v->a[1355] = actions(1420);
	v->a[1356] = 1;
	v->a[1357] = aux_sym_number_token1;
	v->a[1358] = actions(1422);
	v->a[1359] = 1;
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = aux_sym_number_token2;
	v->a[1361] = actions(1424);
	v->a[1362] = 1;
	v->a[1363] = anon_sym_DOLLAR_LBRACE;
	v->a[1364] = actions(1426);
	v->a[1365] = 1;
	v->a[1366] = anon_sym_DOLLAR_LPAREN;
	v->a[1367] = actions(1428);
	v->a[1368] = 1;
	v->a[1369] = anon_sym_BQUOTE;
	v->a[1370] = actions(1430);
	v->a[1371] = 1;
	v->a[1372] = anon_sym_DOLLAR_BQUOTE;
	v->a[1373] = actions(1434);
	v->a[1374] = 1;
	v->a[1375] = sym_test_operator;
	v->a[1376] = actions(1436);
	v->a[1377] = 1;
	v->a[1378] = sym__bare_dollar;
	v->a[1379] = actions(1438);
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = 1;
	v->a[1381] = sym__brace_start;
	v->a[1382] = state(532);
	v->a[1383] = 1;
	v->a[1384] = aux_sym_command_repeat2;
	v->a[1385] = state(1045);
	v->a[1386] = 1;
	v->a[1387] = aux_sym__literal_repeat1;
	v->a[1388] = state(1181);
	v->a[1389] = 1;
	v->a[1390] = sym_herestring_redirect;
	v->a[1391] = state(1182);
	v->a[1392] = 1;
	v->a[1393] = sym_concatenation;
	v->a[1394] = actions(1402);
	v->a[1395] = 2;
	v->a[1396] = anon_sym_LPAREN_LPAREN;
	v->a[1397] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1398] = actions(1406);
	v->a[1399] = 2;
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
