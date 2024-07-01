/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_514.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2570(t_small_parse_table_array *v)
{
	v->a[51400] = 1;
	v->a[51401] = sym_comment;
	v->a[51402] = actions(1575);
	v->a[51403] = 1;
	v->a[51404] = anon_sym_BQUOTE;
	v->a[51405] = actions(1577);
	v->a[51406] = 2;
	v->a[51407] = sym_file_descriptor;
	v->a[51408] = sym_variable_name;
	v->a[51409] = actions(1573);
	v->a[51410] = 24;
	v->a[51411] = anon_sym_for;
	v->a[51412] = anon_sym_while;
	v->a[51413] = anon_sym_until;
	v->a[51414] = anon_sym_if;
	v->a[51415] = anon_sym_case;
	v->a[51416] = anon_sym_LPAREN;
	v->a[51417] = anon_sym_LBRACE;
	v->a[51418] = anon_sym_BANG;
	v->a[51419] = anon_sym_LT;
	small_parse_table_2571(v);
}

void	small_parse_table_2571(t_small_parse_table_array *v)
{
	v->a[51420] = anon_sym_GT;
	v->a[51421] = anon_sym_GT_GT;
	v->a[51422] = anon_sym_LT_AMP;
	v->a[51423] = anon_sym_GT_AMP;
	v->a[51424] = anon_sym_GT_PIPE;
	v->a[51425] = anon_sym_LT_AMP_DASH;
	v->a[51426] = anon_sym_GT_AMP_DASH;
	v->a[51427] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51428] = anon_sym_DOLLAR;
	v->a[51429] = anon_sym_DQUOTE;
	v->a[51430] = sym_raw_string;
	v->a[51431] = sym_number;
	v->a[51432] = anon_sym_DOLLAR_LBRACE;
	v->a[51433] = anon_sym_DOLLAR_LPAREN;
	v->a[51434] = sym_word;
	v->a[51435] = 16;
	v->a[51436] = actions(870);
	v->a[51437] = 1;
	v->a[51438] = sym_comment;
	v->a[51439] = actions(1744);
	small_parse_table_2572(v);
}

void	small_parse_table_2572(t_small_parse_table_array *v)
{
	v->a[51440] = 1;
	v->a[51441] = anon_sym_LPAREN;
	v->a[51442] = actions(1746);
	v->a[51443] = 1;
	v->a[51444] = anon_sym_BANG;
	v->a[51445] = actions(1754);
	v->a[51446] = 1;
	v->a[51447] = anon_sym_TILDE;
	v->a[51448] = actions(1756);
	v->a[51449] = 1;
	v->a[51450] = anon_sym_DOLLAR;
	v->a[51451] = actions(1758);
	v->a[51452] = 1;
	v->a[51453] = anon_sym_DQUOTE;
	v->a[51454] = actions(1762);
	v->a[51455] = 1;
	v->a[51456] = anon_sym_DOLLAR_LBRACE;
	v->a[51457] = actions(1764);
	v->a[51458] = 1;
	v->a[51459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2573(v);
}

void	small_parse_table_2573(t_small_parse_table_array *v)
{
	v->a[51460] = actions(1766);
	v->a[51461] = 1;
	v->a[51462] = anon_sym_BQUOTE;
	v->a[51463] = actions(1768);
	v->a[51464] = 1;
	v->a[51465] = sym_variable_name;
	v->a[51466] = actions(1818);
	v->a[51467] = 1;
	v->a[51468] = anon_sym_RPAREN_RPAREN;
	v->a[51469] = actions(1750);
	v->a[51470] = 2;
	v->a[51471] = anon_sym_PLUS_PLUS;
	v->a[51472] = anon_sym_DASH_DASH;
	v->a[51473] = actions(1752);
	v->a[51474] = 2;
	v->a[51475] = anon_sym_DASH2;
	v->a[51476] = anon_sym_PLUS2;
	v->a[51477] = actions(1760);
	v->a[51478] = 2;
	v->a[51479] = sym_number;
	small_parse_table_2574(v);
}

void	small_parse_table_2574(t_small_parse_table_array *v)
{
	v->a[51480] = aux_sym__simple_variable_name_token1;
	v->a[51481] = state(271);
	v->a[51482] = 3;
	v->a[51483] = sym_string;
	v->a[51484] = sym_simple_expansion;
	v->a[51485] = sym_expansion;
	v->a[51486] = state(325);
	v->a[51487] = 8;
	v->a[51488] = sym__arithmetic_expression;
	v->a[51489] = sym_arithmetic_literal;
	v->a[51490] = sym_arithmetic_binary_expression;
	v->a[51491] = sym_arithmetic_ternary_expression;
	v->a[51492] = sym_arithmetic_unary_expression;
	v->a[51493] = sym_arithmetic_postfix_expression;
	v->a[51494] = sym_arithmetic_parenthesized_expression;
	v->a[51495] = sym_command_substitution;
	v->a[51496] = 3;
	v->a[51497] = actions(3);
	v->a[51498] = 1;
	v->a[51499] = sym_comment;
	small_parse_table_2575(v);
}

/* EOF small_parse_table_514.c */
