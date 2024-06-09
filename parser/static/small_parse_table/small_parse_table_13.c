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
	v->a[1300] = actions(81);
	v->a[1301] = 1;
	v->a[1302] = sym_file_descriptor;
	v->a[1303] = actions(83);
	v->a[1304] = 1;
	v->a[1305] = sym_variable_name;
	v->a[1306] = actions(141);
	v->a[1307] = 1;
	v->a[1308] = anon_sym_LF;
	v->a[1309] = state(131);
	v->a[1310] = 1;
	v->a[1311] = aux_sym__statements_repeat1;
	v->a[1312] = state(190);
	v->a[1313] = 1;
	v->a[1314] = sym_command_name;
	v->a[1315] = state(314);
	v->a[1316] = 1;
	v->a[1317] = sym_variable_assignment;
	v->a[1318] = state(582);
	v->a[1319] = 1;
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = sym_concatenation;
	v->a[1321] = state(587);
	v->a[1322] = 1;
	v->a[1323] = aux_sym_command_repeat1;
	v->a[1324] = state(689);
	v->a[1325] = 1;
	v->a[1326] = aux_sym__case_item_last_repeat2;
	v->a[1327] = state(718);
	v->a[1328] = 1;
	v->a[1329] = sym_file_redirect;
	v->a[1330] = state(1211);
	v->a[1331] = 1;
	v->a[1332] = sym_pipeline;
	v->a[1333] = state(1213);
	v->a[1334] = 1;
	v->a[1335] = aux_sym_redirected_statement_repeat2;
	v->a[1336] = state(2035);
	v->a[1337] = 1;
	v->a[1338] = sym__statement_not_pipeline;
	v->a[1339] = state(2070);
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = 1;
	v->a[1341] = sym__statements;
	v->a[1342] = actions(11);
	v->a[1343] = 2;
	v->a[1344] = anon_sym_while;
	v->a[1345] = anon_sym_until;
	v->a[1346] = actions(61);
	v->a[1347] = 2;
	v->a[1348] = anon_sym_LT_AMP_DASH;
	v->a[1349] = anon_sym_GT_AMP_DASH;
	v->a[1350] = state(397);
	v->a[1351] = 6;
	v->a[1352] = sym_arithmetic_expansion;
	v->a[1353] = sym_string;
	v->a[1354] = sym_number;
	v->a[1355] = sym_simple_expansion;
	v->a[1356] = sym_expansion;
	v->a[1357] = sym_command_substitution;
	v->a[1358] = actions(59);
	v->a[1359] = 8;
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = anon_sym_LT;
	v->a[1361] = anon_sym_GT;
	v->a[1362] = anon_sym_GT_GT;
	v->a[1363] = anon_sym_AMP_GT;
	v->a[1364] = anon_sym_AMP_GT_GT;
	v->a[1365] = anon_sym_LT_AMP;
	v->a[1366] = anon_sym_GT_AMP;
	v->a[1367] = anon_sym_GT_PIPE;
	v->a[1368] = state(1140);
	v->a[1369] = 12;
	v->a[1370] = sym_redirected_statement;
	v->a[1371] = sym_for_statement;
	v->a[1372] = sym_while_statement;
	v->a[1373] = sym_if_statement;
	v->a[1374] = sym_case_statement;
	v->a[1375] = sym_function_definition;
	v->a[1376] = sym_compound_statement;
	v->a[1377] = sym_subshell;
	v->a[1378] = sym_list;
	v->a[1379] = sym_negated_command;
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = sym_command;
	v->a[1381] = sym_variable_assignments;
	v->a[1382] = 36;
	v->a[1383] = actions(3);
	v->a[1384] = 1;
	v->a[1385] = sym_comment;
	v->a[1386] = actions(95);
	v->a[1387] = 1;
	v->a[1388] = sym_word;
	v->a[1389] = actions(97);
	v->a[1390] = 1;
	v->a[1391] = anon_sym_for;
	v->a[1392] = actions(101);
	v->a[1393] = 1;
	v->a[1394] = anon_sym_if;
	v->a[1395] = actions(103);
	v->a[1396] = 1;
	v->a[1397] = anon_sym_case;
	v->a[1398] = actions(105);
	v->a[1399] = 1;
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
