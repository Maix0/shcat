/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_504.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2520(t_small_parse_table_array *v)
{
	v->a[50400] = 8;
	v->a[50401] = sym__arithmetic_expression;
	v->a[50402] = sym_arithmetic_literal;
	v->a[50403] = sym_arithmetic_binary_expression;
	v->a[50404] = sym_arithmetic_ternary_expression;
	v->a[50405] = sym_arithmetic_unary_expression;
	v->a[50406] = sym_arithmetic_postfix_expression;
	v->a[50407] = sym_arithmetic_parenthesized_expression;
	v->a[50408] = sym_command_substitution;
	v->a[50409] = 15;
	v->a[50410] = actions(501);
	v->a[50411] = 1;
	v->a[50412] = sym_comment;
	v->a[50413] = actions(1692);
	v->a[50414] = 1;
	v->a[50415] = anon_sym_LPAREN;
	v->a[50416] = actions(1694);
	v->a[50417] = 1;
	v->a[50418] = anon_sym_BANG;
	v->a[50419] = actions(1700);
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = 1;
	v->a[50421] = anon_sym_TILDE;
	v->a[50422] = actions(1702);
	v->a[50423] = 1;
	v->a[50424] = anon_sym_DOLLAR;
	v->a[50425] = actions(1704);
	v->a[50426] = 1;
	v->a[50427] = anon_sym_DQUOTE;
	v->a[50428] = actions(1708);
	v->a[50429] = 1;
	v->a[50430] = anon_sym_DOLLAR_LBRACE;
	v->a[50431] = actions(1710);
	v->a[50432] = 1;
	v->a[50433] = anon_sym_DOLLAR_LPAREN;
	v->a[50434] = actions(1712);
	v->a[50435] = 1;
	v->a[50436] = anon_sym_BQUOTE;
	v->a[50437] = actions(1714);
	v->a[50438] = 1;
	v->a[50439] = sym_variable_name;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = actions(1696);
	v->a[50441] = 2;
	v->a[50442] = anon_sym_PLUS_PLUS;
	v->a[50443] = anon_sym_DASH_DASH;
	v->a[50444] = actions(1698);
	v->a[50445] = 2;
	v->a[50446] = anon_sym_DASH2;
	v->a[50447] = anon_sym_PLUS2;
	v->a[50448] = actions(1706);
	v->a[50449] = 2;
	v->a[50450] = sym_number;
	v->a[50451] = aux_sym__simple_variable_name_token1;
	v->a[50452] = state(238);
	v->a[50453] = 3;
	v->a[50454] = sym_string;
	v->a[50455] = sym_simple_expansion;
	v->a[50456] = sym_expansion;
	v->a[50457] = state(265);
	v->a[50458] = 8;
	v->a[50459] = sym__arithmetic_expression;
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = sym_arithmetic_literal;
	v->a[50461] = sym_arithmetic_binary_expression;
	v->a[50462] = sym_arithmetic_ternary_expression;
	v->a[50463] = sym_arithmetic_unary_expression;
	v->a[50464] = sym_arithmetic_postfix_expression;
	v->a[50465] = sym_arithmetic_parenthesized_expression;
	v->a[50466] = sym_command_substitution;
	v->a[50467] = 15;
	v->a[50468] = actions(501);
	v->a[50469] = 1;
	v->a[50470] = sym_comment;
	v->a[50471] = actions(1692);
	v->a[50472] = 1;
	v->a[50473] = anon_sym_LPAREN;
	v->a[50474] = actions(1694);
	v->a[50475] = 1;
	v->a[50476] = anon_sym_BANG;
	v->a[50477] = actions(1700);
	v->a[50478] = 1;
	v->a[50479] = anon_sym_TILDE;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = actions(1702);
	v->a[50481] = 1;
	v->a[50482] = anon_sym_DOLLAR;
	v->a[50483] = actions(1704);
	v->a[50484] = 1;
	v->a[50485] = anon_sym_DQUOTE;
	v->a[50486] = actions(1708);
	v->a[50487] = 1;
	v->a[50488] = anon_sym_DOLLAR_LBRACE;
	v->a[50489] = actions(1710);
	v->a[50490] = 1;
	v->a[50491] = anon_sym_DOLLAR_LPAREN;
	v->a[50492] = actions(1712);
	v->a[50493] = 1;
	v->a[50494] = anon_sym_BQUOTE;
	v->a[50495] = actions(1714);
	v->a[50496] = 1;
	v->a[50497] = sym_variable_name;
	v->a[50498] = actions(1696);
	v->a[50499] = 2;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
