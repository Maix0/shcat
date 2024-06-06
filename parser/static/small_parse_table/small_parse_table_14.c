/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_14.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_70(t_small_parse_table_array *v)
{
	v->a[1400] = anon_sym_DQUOTE;
	v->a[1401] = sym_raw_string;
	v->a[1402] = aux_sym_number_token1;
	v->a[1403] = aux_sym_number_token2;
	v->a[1404] = anon_sym_DOLLAR_LBRACE;
	v->a[1405] = anon_sym_DOLLAR_LPAREN;
	v->a[1406] = anon_sym_BQUOTE;
	v->a[1407] = anon_sym_DOLLAR_BQUOTE;
	v->a[1408] = sym_word;
	v->a[1409] = anon_sym_SEMI;
	v->a[1410] = 6;
	v->a[1411] = actions(3);
	v->a[1412] = 1;
	v->a[1413] = sym_comment;
	v->a[1414] = actions(959);
	v->a[1415] = 1;
	v->a[1416] = sym_variable_name;
	v->a[1417] = actions(957);
	v->a[1418] = 2;
	v->a[1419] = aux_sym__simple_variable_name_token1;
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = aux_sym__multiline_variable_name_token1;
	v->a[1421] = actions(816);
	v->a[1422] = 3;
	v->a[1423] = sym_file_descriptor;
	v->a[1424] = sym_test_operator;
	v->a[1425] = sym__brace_start;
	v->a[1426] = actions(955);
	v->a[1427] = 9;
	v->a[1428] = anon_sym_BANG;
	v->a[1429] = anon_sym_DASH;
	v->a[1430] = anon_sym_STAR;
	v->a[1431] = anon_sym_QMARK;
	v->a[1432] = anon_sym_DOLLAR;
	v->a[1433] = anon_sym_POUND;
	v->a[1434] = anon_sym_AT;
	v->a[1435] = anon_sym_0;
	v->a[1436] = anon_sym__;
	v->a[1437] = actions(810);
	v->a[1438] = 34;
	v->a[1439] = anon_sym_esac;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = anon_sym_PIPE;
	v->a[1441] = anon_sym_SEMI_SEMI;
	v->a[1442] = anon_sym_SEMI_AMP;
	v->a[1443] = anon_sym_SEMI_SEMI_AMP;
	v->a[1444] = anon_sym_PIPE_AMP;
	v->a[1445] = anon_sym_AMP_AMP;
	v->a[1446] = anon_sym_PIPE_PIPE;
	v->a[1447] = anon_sym_LT;
	v->a[1448] = anon_sym_GT;
	v->a[1449] = anon_sym_GT_GT;
	v->a[1450] = anon_sym_AMP_GT;
	v->a[1451] = anon_sym_AMP_GT_GT;
	v->a[1452] = anon_sym_LT_AMP;
	v->a[1453] = anon_sym_GT_AMP;
	v->a[1454] = anon_sym_GT_PIPE;
	v->a[1455] = anon_sym_LT_AMP_DASH;
	v->a[1456] = anon_sym_GT_AMP_DASH;
	v->a[1457] = anon_sym_LT_LT;
	v->a[1458] = anon_sym_LT_LT_DASH;
	v->a[1459] = aux_sym_heredoc_redirect_token1;
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1461] = anon_sym_AMP;
	v->a[1462] = sym__special_character;
	v->a[1463] = anon_sym_DQUOTE;
	v->a[1464] = sym_raw_string;
	v->a[1465] = aux_sym_number_token1;
	v->a[1466] = aux_sym_number_token2;
	v->a[1467] = anon_sym_DOLLAR_LBRACE;
	v->a[1468] = anon_sym_DOLLAR_LPAREN;
	v->a[1469] = anon_sym_BQUOTE;
	v->a[1470] = anon_sym_DOLLAR_BQUOTE;
	v->a[1471] = sym_word;
	v->a[1472] = anon_sym_SEMI;
	v->a[1473] = 20;
	v->a[1474] = actions(3);
	v->a[1475] = 1;
	v->a[1476] = sym_comment;
	v->a[1477] = actions(968);
	v->a[1478] = 1;
	v->a[1479] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = actions(971);
	v->a[1481] = 1;
	v->a[1482] = anon_sym_DOLLAR;
	v->a[1483] = actions(974);
	v->a[1484] = 1;
	v->a[1485] = sym__special_character;
	v->a[1486] = actions(977);
	v->a[1487] = 1;
	v->a[1488] = anon_sym_DQUOTE;
	v->a[1489] = actions(980);
	v->a[1490] = 1;
	v->a[1491] = aux_sym_number_token1;
	v->a[1492] = actions(983);
	v->a[1493] = 1;
	v->a[1494] = aux_sym_number_token2;
	v->a[1495] = actions(986);
	v->a[1496] = 1;
	v->a[1497] = anon_sym_DOLLAR_LBRACE;
	v->a[1498] = actions(989);
	v->a[1499] = 1;
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
