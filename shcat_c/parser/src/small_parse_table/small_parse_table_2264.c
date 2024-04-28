/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2264.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11320(t_small_parse_table_array *v)
{
	v->a[226400] = actions(10102);
	v->a[226401] = 1;
	v->a[226402] = sym__comment_word;
	v->a[226403] = actions(9238);
	v->a[226404] = 2;
	v->a[226405] = anon_sym_LPAREN_LPAREN;
	v->a[226406] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226407] = actions(9254);
	v->a[226408] = 2;
	v->a[226409] = anon_sym_LT_LPAREN;
	v->a[226410] = anon_sym_GT_LPAREN;
	v->a[226411] = actions(10098);
	v->a[226412] = 2;
	v->a[226413] = sym_test_operator;
	v->a[226414] = sym__special_character;
	v->a[226415] = actions(10100);
	v->a[226416] = 3;
	v->a[226417] = sym__bare_dollar;
	v->a[226418] = sym_raw_string;
	v->a[226419] = sym_ansi_c_string;
	small_parse_table_11321(v);
}

void	small_parse_table_11321(t_small_parse_table_array *v)
{
	v->a[226420] = state(1293);
	v->a[226421] = 9;
	v->a[226422] = sym_arithmetic_expansion;
	v->a[226423] = sym_brace_expression;
	v->a[226424] = sym_string;
	v->a[226425] = sym_translated_string;
	v->a[226426] = sym_number;
	v->a[226427] = sym_simple_expansion;
	v->a[226428] = sym_expansion;
	v->a[226429] = sym_command_substitution;
	v->a[226430] = sym_process_substitution;
	v->a[226431] = 21;
	v->a[226432] = actions(71);
	v->a[226433] = 1;
	v->a[226434] = sym_comment;
	v->a[226435] = actions(3602);
	v->a[226436] = 1;
	v->a[226437] = sym_variable_name;
	v->a[226438] = actions(9898);
	v->a[226439] = 1;
	small_parse_table_11322(v);
}

void	small_parse_table_11322(t_small_parse_table_array *v)
{
	v->a[226440] = anon_sym_LPAREN;
	v->a[226441] = actions(9900);
	v->a[226442] = 1;
	v->a[226443] = anon_sym_BANG;
	v->a[226444] = actions(9906);
	v->a[226445] = 1;
	v->a[226446] = anon_sym_TILDE;
	v->a[226447] = actions(9908);
	v->a[226448] = 1;
	v->a[226449] = anon_sym_DOLLAR;
	v->a[226450] = actions(9910);
	v->a[226451] = 1;
	v->a[226452] = anon_sym_DQUOTE;
	v->a[226453] = actions(9912);
	v->a[226454] = 1;
	v->a[226455] = aux_sym_number_token1;
	v->a[226456] = actions(9914);
	v->a[226457] = 1;
	v->a[226458] = aux_sym_number_token2;
	v->a[226459] = actions(9916);
	small_parse_table_11323(v);
}

void	small_parse_table_11323(t_small_parse_table_array *v)
{
	v->a[226460] = 1;
	v->a[226461] = anon_sym_DOLLAR_LBRACE;
	v->a[226462] = actions(9918);
	v->a[226463] = 1;
	v->a[226464] = anon_sym_DOLLAR_LPAREN;
	v->a[226465] = actions(9920);
	v->a[226466] = 1;
	v->a[226467] = anon_sym_BQUOTE;
	v->a[226468] = actions(9922);
	v->a[226469] = 1;
	v->a[226470] = anon_sym_DOLLAR_BQUOTE;
	v->a[226471] = actions(10758);
	v->a[226472] = 1;
	v->a[226473] = aux_sym__simple_variable_name_token1;
	v->a[226474] = state(3359);
	v->a[226475] = 1;
	v->a[226476] = sym__arithmetic_postfix_expression;
	v->a[226477] = state(3361);
	v->a[226478] = 1;
	v->a[226479] = sym__arithmetic_unary_expression;
	small_parse_table_11324(v);
}

void	small_parse_table_11324(t_small_parse_table_array *v)
{
	v->a[226480] = state(3367);
	v->a[226481] = 1;
	v->a[226482] = sym__arithmetic_ternary_expression;
	v->a[226483] = state(3375);
	v->a[226484] = 1;
	v->a[226485] = sym__arithmetic_binary_expression;
	v->a[226486] = actions(9902);
	v->a[226487] = 2;
	v->a[226488] = anon_sym_PLUS_PLUS2;
	v->a[226489] = anon_sym_DASH_DASH2;
	v->a[226490] = actions(9904);
	v->a[226491] = 2;
	v->a[226492] = anon_sym_DASH2;
	v->a[226493] = anon_sym_PLUS2;
	v->a[226494] = state(3247);
	v->a[226495] = 9;
	v->a[226496] = sym_subscript;
	v->a[226497] = sym__arithmetic_expression;
	v->a[226498] = sym__arithmetic_literal;
	v->a[226499] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11325(v);
}

/* EOF small_parse_table_2264.c */
