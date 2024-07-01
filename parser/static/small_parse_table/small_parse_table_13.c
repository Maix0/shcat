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
	v->a[1300] = actions(57);
	v->a[1301] = 1;
	v->a[1302] = anon_sym_DOLLAR;
	v->a[1303] = actions(59);
	v->a[1304] = 1;
	v->a[1305] = anon_sym_DQUOTE;
	v->a[1306] = actions(63);
	v->a[1307] = 1;
	v->a[1308] = anon_sym_DOLLAR_LBRACE;
	v->a[1309] = actions(65);
	v->a[1310] = 1;
	v->a[1311] = anon_sym_DOLLAR_LPAREN;
	v->a[1312] = actions(67);
	v->a[1313] = 1;
	v->a[1314] = anon_sym_BQUOTE;
	v->a[1315] = actions(69);
	v->a[1316] = 1;
	v->a[1317] = sym_file_descriptor;
	v->a[1318] = actions(71);
	v->a[1319] = 1;
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = sym_variable_name;
	v->a[1321] = actions(85);
	v->a[1322] = 1;
	v->a[1323] = anon_sym_LF;
	v->a[1324] = state(128);
	v->a[1325] = 1;
	v->a[1326] = aux_sym__statements_repeat1;
	v->a[1327] = state(183);
	v->a[1328] = 1;
	v->a[1329] = sym_command_name;
	v->a[1330] = state(271);
	v->a[1331] = 1;
	v->a[1332] = sym_variable_assignment;
	v->a[1333] = state(603);
	v->a[1334] = 1;
	v->a[1335] = sym_concatenation;
	v->a[1336] = state(639);
	v->a[1337] = 1;
	v->a[1338] = aux_sym_command_repeat1;
	v->a[1339] = state(644);
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = 1;
	v->a[1341] = sym_file_redirect;
	v->a[1342] = state(657);
	v->a[1343] = 1;
	v->a[1344] = aux_sym__case_item_last_repeat2;
	v->a[1345] = state(1171);
	v->a[1346] = 1;
	v->a[1347] = sym_pipeline;
	v->a[1348] = state(1196);
	v->a[1349] = 1;
	v->a[1350] = aux_sym_redirected_statement_repeat2;
	v->a[1351] = state(1910);
	v->a[1352] = 1;
	v->a[1353] = sym__statement_not_pipeline;
	v->a[1354] = state(2012);
	v->a[1355] = 1;
	v->a[1356] = sym__statements;
	v->a[1357] = actions(11);
	v->a[1358] = 2;
	v->a[1359] = anon_sym_while;
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = anon_sym_until;
	v->a[1361] = actions(61);
	v->a[1362] = 2;
	v->a[1363] = sym_raw_string;
	v->a[1364] = sym_number;
	v->a[1365] = state(436);
	v->a[1366] = 5;
	v->a[1367] = sym_arithmetic_expansion;
	v->a[1368] = sym_string;
	v->a[1369] = sym_simple_expansion;
	v->a[1370] = sym_expansion;
	v->a[1371] = sym_command_substitution;
	v->a[1372] = actions(53);
	v->a[1373] = 7;
	v->a[1374] = anon_sym_LT;
	v->a[1375] = anon_sym_GT;
	v->a[1376] = anon_sym_GT_GT;
	v->a[1377] = anon_sym_LT_AMP;
	v->a[1378] = anon_sym_GT_AMP;
	v->a[1379] = anon_sym_GT_PIPE;
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = anon_sym_LT_GT;
	v->a[1381] = state(1046);
	v->a[1382] = 12;
	v->a[1383] = sym_redirected_statement;
	v->a[1384] = sym_for_statement;
	v->a[1385] = sym_while_statement;
	v->a[1386] = sym_if_statement;
	v->a[1387] = sym_case_statement;
	v->a[1388] = sym_function_definition;
	v->a[1389] = sym_compound_statement;
	v->a[1390] = sym_subshell;
	v->a[1391] = sym_list;
	v->a[1392] = sym_negated_command;
	v->a[1393] = sym_command;
	v->a[1394] = sym__variable_assignments;
	v->a[1395] = 33;
	v->a[1396] = actions(3);
	v->a[1397] = 1;
	v->a[1398] = sym_comment;
	v->a[1399] = actions(9);
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
