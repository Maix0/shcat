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
	v->a[50400] = actions(1760);
	v->a[50401] = 1;
	v->a[50402] = anon_sym_BQUOTE;
	v->a[50403] = actions(1762);
	v->a[50404] = 1;
	v->a[50405] = sym_variable_name;
	v->a[50406] = actions(1744);
	v->a[50407] = 2;
	v->a[50408] = anon_sym_PLUS_PLUS;
	v->a[50409] = anon_sym_DASH_DASH;
	v->a[50410] = actions(1746);
	v->a[50411] = 2;
	v->a[50412] = anon_sym_DASH2;
	v->a[50413] = anon_sym_PLUS2;
	v->a[50414] = actions(1754);
	v->a[50415] = 2;
	v->a[50416] = sym_number;
	v->a[50417] = aux_sym__simple_variable_name_token1;
	v->a[50418] = state(260);
	v->a[50419] = 3;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = sym_string;
	v->a[50421] = sym_simple_expansion;
	v->a[50422] = sym_expansion;
	v->a[50423] = state(315);
	v->a[50424] = 8;
	v->a[50425] = sym__arithmetic_expression;
	v->a[50426] = sym_arithmetic_literal;
	v->a[50427] = sym_arithmetic_binary_expression;
	v->a[50428] = sym_arithmetic_ternary_expression;
	v->a[50429] = sym_arithmetic_unary_expression;
	v->a[50430] = sym_arithmetic_postfix_expression;
	v->a[50431] = sym_arithmetic_parenthesized_expression;
	v->a[50432] = sym_command_substitution;
	v->a[50433] = 15;
	v->a[50434] = actions(664);
	v->a[50435] = 1;
	v->a[50436] = sym_comment;
	v->a[50437] = actions(1740);
	v->a[50438] = 1;
	v->a[50439] = anon_sym_LPAREN;
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = actions(1742);
	v->a[50441] = 1;
	v->a[50442] = anon_sym_BANG;
	v->a[50443] = actions(1748);
	v->a[50444] = 1;
	v->a[50445] = anon_sym_TILDE;
	v->a[50446] = actions(1750);
	v->a[50447] = 1;
	v->a[50448] = anon_sym_DOLLAR;
	v->a[50449] = actions(1752);
	v->a[50450] = 1;
	v->a[50451] = anon_sym_DQUOTE;
	v->a[50452] = actions(1756);
	v->a[50453] = 1;
	v->a[50454] = anon_sym_DOLLAR_LBRACE;
	v->a[50455] = actions(1758);
	v->a[50456] = 1;
	v->a[50457] = anon_sym_DOLLAR_LPAREN;
	v->a[50458] = actions(1760);
	v->a[50459] = 1;
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = anon_sym_BQUOTE;
	v->a[50461] = actions(1762);
	v->a[50462] = 1;
	v->a[50463] = sym_variable_name;
	v->a[50464] = actions(1744);
	v->a[50465] = 2;
	v->a[50466] = anon_sym_PLUS_PLUS;
	v->a[50467] = anon_sym_DASH_DASH;
	v->a[50468] = actions(1746);
	v->a[50469] = 2;
	v->a[50470] = anon_sym_DASH2;
	v->a[50471] = anon_sym_PLUS2;
	v->a[50472] = actions(1754);
	v->a[50473] = 2;
	v->a[50474] = sym_number;
	v->a[50475] = aux_sym__simple_variable_name_token1;
	v->a[50476] = state(260);
	v->a[50477] = 3;
	v->a[50478] = sym_string;
	v->a[50479] = sym_simple_expansion;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = sym_expansion;
	v->a[50481] = state(316);
	v->a[50482] = 8;
	v->a[50483] = sym__arithmetic_expression;
	v->a[50484] = sym_arithmetic_literal;
	v->a[50485] = sym_arithmetic_binary_expression;
	v->a[50486] = sym_arithmetic_ternary_expression;
	v->a[50487] = sym_arithmetic_unary_expression;
	v->a[50488] = sym_arithmetic_postfix_expression;
	v->a[50489] = sym_arithmetic_parenthesized_expression;
	v->a[50490] = sym_command_substitution;
	v->a[50491] = 15;
	v->a[50492] = actions(664);
	v->a[50493] = 1;
	v->a[50494] = sym_comment;
	v->a[50495] = actions(1740);
	v->a[50496] = 1;
	v->a[50497] = anon_sym_LPAREN;
	v->a[50498] = actions(1742);
	v->a[50499] = 1;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
