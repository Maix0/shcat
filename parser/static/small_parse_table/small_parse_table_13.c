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
	v->a[1300] = anon_sym_LT;
	v->a[1301] = anon_sym_GT;
	v->a[1302] = anon_sym_GT_GT;
	v->a[1303] = anon_sym_AMP_GT;
	v->a[1304] = anon_sym_AMP_GT_GT;
	v->a[1305] = anon_sym_LT_AMP;
	v->a[1306] = anon_sym_GT_AMP;
	v->a[1307] = anon_sym_GT_PIPE;
	v->a[1308] = state(1296);
	v->a[1309] = 12;
	v->a[1310] = sym_redirected_statement;
	v->a[1311] = sym_for_statement;
	v->a[1312] = sym_while_statement;
	v->a[1313] = sym_if_statement;
	v->a[1314] = sym_case_statement;
	v->a[1315] = sym_function_definition;
	v->a[1316] = sym_compound_statement;
	v->a[1317] = sym_subshell;
	v->a[1318] = sym_list;
	v->a[1319] = sym_negated_command;
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = sym_command;
	v->a[1321] = sym__variable_assignments;
	v->a[1322] = 34;
	v->a[1323] = actions(3);
	v->a[1324] = 1;
	v->a[1325] = sym_comment;
	v->a[1326] = actions(89);
	v->a[1327] = 1;
	v->a[1328] = sym_word;
	v->a[1329] = actions(91);
	v->a[1330] = 1;
	v->a[1331] = anon_sym_for;
	v->a[1332] = actions(95);
	v->a[1333] = 1;
	v->a[1334] = anon_sym_if;
	v->a[1335] = actions(97);
	v->a[1336] = 1;
	v->a[1337] = anon_sym_case;
	v->a[1338] = actions(99);
	v->a[1339] = 1;
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = anon_sym_LPAREN;
	v->a[1341] = actions(101);
	v->a[1342] = 1;
	v->a[1343] = anon_sym_LBRACE;
	v->a[1344] = actions(103);
	v->a[1345] = 1;
	v->a[1346] = anon_sym_BANG;
	v->a[1347] = actions(109);
	v->a[1348] = 1;
	v->a[1349] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1350] = actions(111);
	v->a[1351] = 1;
	v->a[1352] = anon_sym_DOLLAR;
	v->a[1353] = actions(113);
	v->a[1354] = 1;
	v->a[1355] = anon_sym_DQUOTE;
	v->a[1356] = actions(117);
	v->a[1357] = 1;
	v->a[1358] = anon_sym_DOLLAR_LBRACE;
	v->a[1359] = actions(119);
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = 1;
	v->a[1361] = anon_sym_DOLLAR_LPAREN;
	v->a[1362] = actions(121);
	v->a[1363] = 1;
	v->a[1364] = anon_sym_BQUOTE;
	v->a[1365] = actions(123);
	v->a[1366] = 1;
	v->a[1367] = sym_file_descriptor;
	v->a[1368] = actions(125);
	v->a[1369] = 1;
	v->a[1370] = sym_variable_name;
	v->a[1371] = actions(129);
	v->a[1372] = 1;
	v->a[1373] = anon_sym_LF;
	v->a[1374] = state(17);
	v->a[1375] = 1;
	v->a[1376] = aux_sym__case_item_last_repeat2;
	v->a[1377] = state(129);
	v->a[1378] = 1;
	v->a[1379] = aux_sym__statements_repeat1;
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = state(182);
	v->a[1381] = 1;
	v->a[1382] = sym_command_name;
	v->a[1383] = state(271);
	v->a[1384] = 1;
	v->a[1385] = sym_variable_assignment;
	v->a[1386] = state(621);
	v->a[1387] = 1;
	v->a[1388] = sym_concatenation;
	v->a[1389] = state(692);
	v->a[1390] = 1;
	v->a[1391] = sym_file_redirect;
	v->a[1392] = state(810);
	v->a[1393] = 1;
	v->a[1394] = aux_sym_command_repeat1;
	v->a[1395] = state(1321);
	v->a[1396] = 1;
	v->a[1397] = sym_pipeline;
	v->a[1398] = state(1432);
	v->a[1399] = 1;
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
