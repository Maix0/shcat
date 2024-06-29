/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_584.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2920(t_small_parse_table_array *v)
{
	v->a[58400] = 1;
	v->a[58401] = sym_variable_name;
	v->a[58402] = actions(1592);
	v->a[58403] = 1;
	v->a[58404] = sym_file_descriptor;
	v->a[58405] = actions(762);
	v->a[58406] = 9;
	v->a[58407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58408] = anon_sym_DOLLAR;
	v->a[58409] = anon_sym_DQUOTE;
	v->a[58410] = sym_raw_string;
	v->a[58411] = sym_number;
	v->a[58412] = anon_sym_DOLLAR_LBRACE;
	v->a[58413] = anon_sym_DOLLAR_LPAREN;
	v->a[58414] = anon_sym_BQUOTE;
	v->a[58415] = sym_word;
	v->a[58416] = actions(1594);
	v->a[58417] = 15;
	v->a[58418] = anon_sym_PIPE;
	v->a[58419] = anon_sym_AMP_AMP;
	small_parse_table_2921(v);
}

void	small_parse_table_2921(t_small_parse_table_array *v)
{
	v->a[58420] = anon_sym_PIPE_PIPE;
	v->a[58421] = anon_sym_LT;
	v->a[58422] = anon_sym_GT;
	v->a[58423] = anon_sym_GT_GT;
	v->a[58424] = anon_sym_AMP_GT;
	v->a[58425] = anon_sym_AMP_GT_GT;
	v->a[58426] = anon_sym_LT_AMP;
	v->a[58427] = anon_sym_GT_AMP;
	v->a[58428] = anon_sym_GT_PIPE;
	v->a[58429] = anon_sym_LT_AMP_DASH;
	v->a[58430] = anon_sym_GT_AMP_DASH;
	v->a[58431] = anon_sym_LT_LT;
	v->a[58432] = anon_sym_LT_LT_DASH;
	v->a[58433] = 15;
	v->a[58434] = actions(1074);
	v->a[58435] = 1;
	v->a[58436] = sym_comment;
	v->a[58437] = actions(1951);
	v->a[58438] = 1;
	v->a[58439] = anon_sym_LPAREN;
	small_parse_table_2922(v);
}

void	small_parse_table_2922(t_small_parse_table_array *v)
{
	v->a[58440] = actions(1953);
	v->a[58441] = 1;
	v->a[58442] = anon_sym_BANG;
	v->a[58443] = actions(1959);
	v->a[58444] = 1;
	v->a[58445] = anon_sym_TILDE;
	v->a[58446] = actions(1961);
	v->a[58447] = 1;
	v->a[58448] = anon_sym_DOLLAR;
	v->a[58449] = actions(1963);
	v->a[58450] = 1;
	v->a[58451] = anon_sym_DQUOTE;
	v->a[58452] = actions(1967);
	v->a[58453] = 1;
	v->a[58454] = anon_sym_DOLLAR_LBRACE;
	v->a[58455] = actions(1969);
	v->a[58456] = 1;
	v->a[58457] = anon_sym_DOLLAR_LPAREN;
	v->a[58458] = actions(1971);
	v->a[58459] = 1;
	small_parse_table_2923(v);
}

void	small_parse_table_2923(t_small_parse_table_array *v)
{
	v->a[58460] = anon_sym_BQUOTE;
	v->a[58461] = actions(1973);
	v->a[58462] = 1;
	v->a[58463] = sym_variable_name;
	v->a[58464] = actions(1955);
	v->a[58465] = 2;
	v->a[58466] = anon_sym_PLUS_PLUS;
	v->a[58467] = anon_sym_DASH_DASH;
	v->a[58468] = actions(1957);
	v->a[58469] = 2;
	v->a[58470] = anon_sym_DASH2;
	v->a[58471] = anon_sym_PLUS2;
	v->a[58472] = actions(1965);
	v->a[58473] = 2;
	v->a[58474] = sym_number;
	v->a[58475] = aux_sym__simple_variable_name_token1;
	v->a[58476] = state(462);
	v->a[58477] = 3;
	v->a[58478] = sym_string;
	v->a[58479] = sym_simple_expansion;
	small_parse_table_2924(v);
}

void	small_parse_table_2924(t_small_parse_table_array *v)
{
	v->a[58480] = sym_expansion;
	v->a[58481] = state(576);
	v->a[58482] = 8;
	v->a[58483] = sym__arithmetic_expression;
	v->a[58484] = sym_arithmetic_literal;
	v->a[58485] = sym_arithmetic_binary_expression;
	v->a[58486] = sym_arithmetic_ternary_expression;
	v->a[58487] = sym_arithmetic_unary_expression;
	v->a[58488] = sym_arithmetic_postfix_expression;
	v->a[58489] = sym_arithmetic_parenthesized_expression;
	v->a[58490] = sym_command_substitution;
	v->a[58491] = 15;
	v->a[58492] = actions(1074);
	v->a[58493] = 1;
	v->a[58494] = sym_comment;
	v->a[58495] = actions(1951);
	v->a[58496] = 1;
	v->a[58497] = anon_sym_LPAREN;
	v->a[58498] = actions(1953);
	v->a[58499] = 1;
	small_parse_table_2925(v);
}

/* EOF small_parse_table_584.c */
