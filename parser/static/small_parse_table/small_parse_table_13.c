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
	v->a[1301] = aux_sym__literal_repeat1;
	v->a[1302] = actions(727);
	v->a[1303] = 2;
	v->a[1304] = sym_file_descriptor;
	v->a[1305] = aux_sym_heredoc_redirect_token1;
	v->a[1306] = actions(887);
	v->a[1307] = 2;
	v->a[1308] = sym_raw_string;
	v->a[1309] = sym_word;
	v->a[1310] = state(266);
	v->a[1311] = 3;
	v->a[1312] = sym_variable_assignment;
	v->a[1313] = sym_concatenation;
	v->a[1314] = aux_sym_declaration_command_repeat1;
	v->a[1315] = state(605);
	v->a[1316] = 7;
	v->a[1317] = sym_arithmetic_expansion;
	v->a[1318] = sym_brace_expression;
	v->a[1319] = sym_string;
	small_parse_table_66(v);
}

void	small_parse_table_66(t_small_parse_table_array *v)
{
	v->a[1320] = sym_number;
	v->a[1321] = sym_simple_expansion;
	v->a[1322] = sym_expansion;
	v->a[1323] = sym_command_substitution;
	v->a[1324] = actions(725);
	v->a[1325] = 21;
	v->a[1326] = anon_sym_PIPE;
	v->a[1327] = anon_sym_SEMI_SEMI;
	v->a[1328] = anon_sym_SEMI_AMP;
	v->a[1329] = anon_sym_SEMI_SEMI_AMP;
	v->a[1330] = anon_sym_PIPE_AMP;
	v->a[1331] = anon_sym_AMP_AMP;
	v->a[1332] = anon_sym_PIPE_PIPE;
	v->a[1333] = anon_sym_LT;
	v->a[1334] = anon_sym_GT;
	v->a[1335] = anon_sym_GT_GT;
	v->a[1336] = anon_sym_AMP_GT;
	v->a[1337] = anon_sym_AMP_GT_GT;
	v->a[1338] = anon_sym_LT_AMP;
	v->a[1339] = anon_sym_GT_AMP;
	small_parse_table_67(v);
}

void	small_parse_table_67(t_small_parse_table_array *v)
{
	v->a[1340] = anon_sym_GT_PIPE;
	v->a[1341] = anon_sym_LT_AMP_DASH;
	v->a[1342] = anon_sym_GT_AMP_DASH;
	v->a[1343] = anon_sym_LT_LT;
	v->a[1344] = anon_sym_LT_LT_DASH;
	v->a[1345] = anon_sym_AMP;
	v->a[1346] = anon_sym_SEMI;
	v->a[1347] = 6;
	v->a[1348] = actions(3);
	v->a[1349] = 1;
	v->a[1350] = sym_comment;
	v->a[1351] = actions(953);
	v->a[1352] = 1;
	v->a[1353] = sym_variable_name;
	v->a[1354] = actions(951);
	v->a[1355] = 2;
	v->a[1356] = aux_sym__simple_variable_name_token1;
	v->a[1357] = aux_sym__multiline_variable_name_token1;
	v->a[1358] = actions(828);
	v->a[1359] = 3;
	small_parse_table_68(v);
}

void	small_parse_table_68(t_small_parse_table_array *v)
{
	v->a[1360] = sym_file_descriptor;
	v->a[1361] = sym_test_operator;
	v->a[1362] = sym__brace_start;
	v->a[1363] = actions(949);
	v->a[1364] = 9;
	v->a[1365] = anon_sym_BANG;
	v->a[1366] = anon_sym_DASH;
	v->a[1367] = anon_sym_STAR;
	v->a[1368] = anon_sym_QMARK;
	v->a[1369] = anon_sym_DOLLAR;
	v->a[1370] = anon_sym_POUND;
	v->a[1371] = anon_sym_AT;
	v->a[1372] = anon_sym_0;
	v->a[1373] = anon_sym__;
	v->a[1374] = actions(826);
	v->a[1375] = 34;
	v->a[1376] = anon_sym_esac;
	v->a[1377] = anon_sym_PIPE;
	v->a[1378] = anon_sym_SEMI_SEMI;
	v->a[1379] = anon_sym_SEMI_AMP;
	small_parse_table_69(v);
}

void	small_parse_table_69(t_small_parse_table_array *v)
{
	v->a[1380] = anon_sym_SEMI_SEMI_AMP;
	v->a[1381] = anon_sym_PIPE_AMP;
	v->a[1382] = anon_sym_AMP_AMP;
	v->a[1383] = anon_sym_PIPE_PIPE;
	v->a[1384] = anon_sym_LT;
	v->a[1385] = anon_sym_GT;
	v->a[1386] = anon_sym_GT_GT;
	v->a[1387] = anon_sym_AMP_GT;
	v->a[1388] = anon_sym_AMP_GT_GT;
	v->a[1389] = anon_sym_LT_AMP;
	v->a[1390] = anon_sym_GT_AMP;
	v->a[1391] = anon_sym_GT_PIPE;
	v->a[1392] = anon_sym_LT_AMP_DASH;
	v->a[1393] = anon_sym_GT_AMP_DASH;
	v->a[1394] = anon_sym_LT_LT;
	v->a[1395] = anon_sym_LT_LT_DASH;
	v->a[1396] = aux_sym_heredoc_redirect_token1;
	v->a[1397] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1398] = anon_sym_AMP;
	v->a[1399] = sym__special_character;
	small_parse_table_70(v);
}

/* EOF small_parse_table_13.c */
