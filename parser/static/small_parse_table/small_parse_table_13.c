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
	v->a[1300] = state(255);
	v->a[1301] = 1;
	v->a[1302] = sym_variable_assignment;
	v->a[1303] = state(491);
	v->a[1304] = 1;
	v->a[1305] = aux_sym_command_repeat1;
	v->a[1306] = state(599);
	v->a[1307] = 1;
	v->a[1308] = sym_concatenation;
	v->a[1309] = state(615);
	v->a[1310] = 1;
	v->a[1311] = sym_file_redirect;
	v->a[1312] = state(941);
	v->a[1313] = 1;
	v->a[1314] = sym_pipeline;
	v->a[1315] = state(1015);
	v->a[1316] = 1;
	v->a[1317] = aux_sym_redirected_statement_repeat2;
	v->a[1318] = state(1610);
	v->a[1319] = 1;
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = sym__statement_not_pipeline;
	v->a[1321] = state(1622);
	v->a[1322] = 1;
	v->a[1323] = sym__statements;
	v->a[1324] = actions(83);
	v->a[1325] = 2;
	v->a[1326] = anon_sym_while;
	v->a[1327] = anon_sym_until;
	v->a[1328] = actions(105);
	v->a[1329] = 2;
	v->a[1330] = sym_raw_string;
	v->a[1331] = sym_number;
	v->a[1332] = state(341);
	v->a[1333] = 5;
	v->a[1334] = sym_arithmetic_expansion;
	v->a[1335] = sym_string;
	v->a[1336] = sym_simple_expansion;
	v->a[1337] = sym_expansion;
	v->a[1338] = sym_command_substitution;
	v->a[1339] = actions(97);
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = 7;
	v->a[1341] = anon_sym_LT;
	v->a[1342] = anon_sym_GT;
	v->a[1343] = anon_sym_GT_GT;
	v->a[1344] = anon_sym_LT_AMP;
	v->a[1345] = anon_sym_GT_AMP;
	v->a[1346] = anon_sym_GT_PIPE;
	v->a[1347] = anon_sym_LT_GT;
	v->a[1348] = state(819);
	v->a[1349] = 12;
	v->a[1350] = sym_redirected_statement;
	v->a[1351] = sym_for_statement;
	v->a[1352] = sym_while_statement;
	v->a[1353] = sym_if_statement;
	v->a[1354] = sym_case_statement;
	v->a[1355] = sym_function_definition;
	v->a[1356] = sym_compound_statement;
	v->a[1357] = sym_subshell;
	v->a[1358] = sym_list;
	v->a[1359] = sym_negated_command;
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = sym_command;
	v->a[1361] = sym__variable_assignments;
	v->a[1362] = 32;
	v->a[1363] = actions(3);
	v->a[1364] = 1;
	v->a[1365] = sym_comment;
	v->a[1366] = actions(9);
	v->a[1367] = 1;
	v->a[1368] = anon_sym_for;
	v->a[1369] = actions(13);
	v->a[1370] = 1;
	v->a[1371] = anon_sym_if;
	v->a[1372] = actions(15);
	v->a[1373] = 1;
	v->a[1374] = anon_sym_case;
	v->a[1375] = actions(17);
	v->a[1376] = 1;
	v->a[1377] = anon_sym_LPAREN;
	v->a[1378] = actions(19);
	v->a[1379] = 1;
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = anon_sym_LBRACE;
	v->a[1381] = actions(41);
	v->a[1382] = 1;
	v->a[1383] = sym_word;
	v->a[1384] = actions(49);
	v->a[1385] = 1;
	v->a[1386] = anon_sym_BANG;
	v->a[1387] = actions(53);
	v->a[1388] = 1;
	v->a[1389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1390] = actions(55);
	v->a[1391] = 1;
	v->a[1392] = anon_sym_DOLLAR;
	v->a[1393] = actions(57);
	v->a[1394] = 1;
	v->a[1395] = anon_sym_DQUOTE;
	v->a[1396] = actions(61);
	v->a[1397] = 1;
	v->a[1398] = anon_sym_DOLLAR_LBRACE;
	v->a[1399] = actions(63);
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
