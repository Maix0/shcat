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
	v->a[1300] = sym_string;
	v->a[1301] = sym_simple_expansion;
	v->a[1302] = sym_expansion;
	v->a[1303] = sym_command_substitution;
	v->a[1304] = state(867);
	v->a[1305] = 12;
	v->a[1306] = sym_redirected_statement;
	v->a[1307] = sym_for_statement;
	v->a[1308] = sym_while_statement;
	v->a[1309] = sym_if_statement;
	v->a[1310] = sym_case_statement;
	v->a[1311] = sym_function_definition;
	v->a[1312] = sym_compound_statement;
	v->a[1313] = sym_subshell;
	v->a[1314] = sym_list;
	v->a[1315] = sym_negated_command;
	v->a[1316] = sym_command;
	v->a[1317] = sym__variable_assignments;
	v->a[1318] = 32;
	v->a[1319] = actions(3);
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = 1;
	v->a[1321] = sym_comment;
	v->a[1322] = actions(9);
	v->a[1323] = 1;
	v->a[1324] = anon_sym_for;
	v->a[1325] = actions(13);
	v->a[1326] = 1;
	v->a[1327] = anon_sym_if;
	v->a[1328] = actions(15);
	v->a[1329] = 1;
	v->a[1330] = anon_sym_case;
	v->a[1331] = actions(17);
	v->a[1332] = 1;
	v->a[1333] = anon_sym_LPAREN;
	v->a[1334] = actions(19);
	v->a[1335] = 1;
	v->a[1336] = anon_sym_LBRACE;
	v->a[1337] = actions(41);
	v->a[1338] = 1;
	v->a[1339] = sym_word;
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = actions(49);
	v->a[1341] = 1;
	v->a[1342] = anon_sym_BANG;
	v->a[1343] = actions(53);
	v->a[1344] = 1;
	v->a[1345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1346] = actions(55);
	v->a[1347] = 1;
	v->a[1348] = anon_sym_DOLLAR;
	v->a[1349] = actions(57);
	v->a[1350] = 1;
	v->a[1351] = anon_sym_DQUOTE;
	v->a[1352] = actions(61);
	v->a[1353] = 1;
	v->a[1354] = anon_sym_DOLLAR_LBRACE;
	v->a[1355] = actions(63);
	v->a[1356] = 1;
	v->a[1357] = anon_sym_DOLLAR_LPAREN;
	v->a[1358] = actions(65);
	v->a[1359] = 1;
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = anon_sym_BQUOTE;
	v->a[1361] = actions(67);
	v->a[1362] = 1;
	v->a[1363] = sym_variable_name;
	v->a[1364] = actions(115);
	v->a[1365] = 1;
	v->a[1366] = anon_sym_LF;
	v->a[1367] = state(118);
	v->a[1368] = 1;
	v->a[1369] = aux_sym__statements_repeat1;
	v->a[1370] = state(185);
	v->a[1371] = 1;
	v->a[1372] = sym_command_name;
	v->a[1373] = state(216);
	v->a[1374] = 1;
	v->a[1375] = sym_variable_assignment;
	v->a[1376] = state(326);
	v->a[1377] = 1;
	v->a[1378] = aux_sym__case_item_last_repeat2;
	v->a[1379] = state(411);
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = 1;
	v->a[1381] = aux_sym_command_repeat1;
	v->a[1382] = state(551);
	v->a[1383] = 1;
	v->a[1384] = sym_file_redirect;
	v->a[1385] = state(555);
	v->a[1386] = 1;
	v->a[1387] = sym_concatenation;
	v->a[1388] = state(991);
	v->a[1389] = 1;
	v->a[1390] = sym_pipeline;
	v->a[1391] = state(1126);
	v->a[1392] = 1;
	v->a[1393] = aux_sym_redirected_statement_repeat2;
	v->a[1394] = state(1561);
	v->a[1395] = 1;
	v->a[1396] = sym__statement_not_pipeline;
	v->a[1397] = state(1717);
	v->a[1398] = 1;
	v->a[1399] = sym__statements;
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
