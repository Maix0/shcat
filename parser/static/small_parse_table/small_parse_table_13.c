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
	v->a[1300] = 1;
	v->a[1301] = sym_comment;
	v->a[1302] = actions(9);
	v->a[1303] = 1;
	v->a[1304] = anon_sym_for;
	v->a[1305] = actions(13);
	v->a[1306] = 1;
	v->a[1307] = anon_sym_if;
	v->a[1308] = actions(15);
	v->a[1309] = 1;
	v->a[1310] = anon_sym_case;
	v->a[1311] = actions(17);
	v->a[1312] = 1;
	v->a[1313] = anon_sym_LPAREN;
	v->a[1314] = actions(19);
	v->a[1315] = 1;
	v->a[1316] = anon_sym_LBRACE;
	v->a[1317] = actions(45);
	v->a[1318] = 1;
	v->a[1319] = sym_word;
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = actions(53);
	v->a[1321] = 1;
	v->a[1322] = anon_sym_BANG;
	v->a[1323] = actions(59);
	v->a[1324] = 1;
	v->a[1325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1326] = actions(61);
	v->a[1327] = 1;
	v->a[1328] = anon_sym_DOLLAR;
	v->a[1329] = actions(63);
	v->a[1330] = 1;
	v->a[1331] = anon_sym_DQUOTE;
	v->a[1332] = actions(67);
	v->a[1333] = 1;
	v->a[1334] = anon_sym_DOLLAR_LBRACE;
	v->a[1335] = actions(69);
	v->a[1336] = 1;
	v->a[1337] = anon_sym_DOLLAR_LPAREN;
	v->a[1338] = actions(71);
	v->a[1339] = 1;
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = anon_sym_BQUOTE;
	v->a[1341] = actions(73);
	v->a[1342] = 1;
	v->a[1343] = sym_file_descriptor;
	v->a[1344] = actions(75);
	v->a[1345] = 1;
	v->a[1346] = sym_variable_name;
	v->a[1347] = actions(150);
	v->a[1348] = 1;
	v->a[1349] = anon_sym_LF;
	v->a[1350] = state(17);
	v->a[1351] = 1;
	v->a[1352] = aux_sym__case_item_last_repeat2;
	v->a[1353] = state(135);
	v->a[1354] = 1;
	v->a[1355] = aux_sym__statements_repeat1;
	v->a[1356] = state(189);
	v->a[1357] = 1;
	v->a[1358] = sym_command_name;
	v->a[1359] = state(303);
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = 1;
	v->a[1361] = sym_variable_assignment;
	v->a[1362] = state(650);
	v->a[1363] = 1;
	v->a[1364] = sym_concatenation;
	v->a[1365] = state(712);
	v->a[1366] = 1;
	v->a[1367] = sym_file_redirect;
	v->a[1368] = state(713);
	v->a[1369] = 1;
	v->a[1370] = aux_sym_command_repeat1;
	v->a[1371] = state(1227);
	v->a[1372] = 1;
	v->a[1373] = sym_pipeline;
	v->a[1374] = state(1333);
	v->a[1375] = 1;
	v->a[1376] = aux_sym_redirected_statement_repeat2;
	v->a[1377] = state(2103);
	v->a[1378] = 1;
	v->a[1379] = sym__statement_not_pipeline;
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = state(2183);
	v->a[1381] = 1;
	v->a[1382] = sym__statements;
	v->a[1383] = actions(11);
	v->a[1384] = 2;
	v->a[1385] = anon_sym_while;
	v->a[1386] = anon_sym_until;
	v->a[1387] = actions(57);
	v->a[1388] = 2;
	v->a[1389] = anon_sym_LT_AMP_DASH;
	v->a[1390] = anon_sym_GT_AMP_DASH;
	v->a[1391] = actions(65);
	v->a[1392] = 2;
	v->a[1393] = sym_raw_string;
	v->a[1394] = sym_number;
	v->a[1395] = state(443);
	v->a[1396] = 5;
	v->a[1397] = sym_arithmetic_expansion;
	v->a[1398] = sym_string;
	v->a[1399] = sym_simple_expansion;
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
