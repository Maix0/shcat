/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_443.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2215(t_small_parse_table_array *v)
{
	v->a[44300] = actions(1594);
	v->a[44301] = 1;
	v->a[44302] = anon_sym_DOLLAR_LPAREN;
	v->a[44303] = actions(1596);
	v->a[44304] = 1;
	v->a[44305] = anon_sym_BQUOTE;
	v->a[44306] = actions(1598);
	v->a[44307] = 1;
	v->a[44308] = sym_variable_name;
	v->a[44309] = actions(1580);
	v->a[44310] = 2;
	v->a[44311] = anon_sym_PLUS_PLUS;
	v->a[44312] = anon_sym_DASH_DASH;
	v->a[44313] = actions(1582);
	v->a[44314] = 2;
	v->a[44315] = anon_sym_DASH2;
	v->a[44316] = anon_sym_PLUS2;
	v->a[44317] = actions(1590);
	v->a[44318] = 2;
	v->a[44319] = sym_number;
	small_parse_table_2216(v);
}

void	small_parse_table_2216(t_small_parse_table_array *v)
{
	v->a[44320] = aux_sym__simple_variable_name_token1;
	v->a[44321] = state(238);
	v->a[44322] = 3;
	v->a[44323] = sym_string;
	v->a[44324] = sym_simple_expansion;
	v->a[44325] = sym_expansion;
	v->a[44326] = state(320);
	v->a[44327] = 8;
	v->a[44328] = sym__arithmetic_expression;
	v->a[44329] = sym_arithmetic_literal;
	v->a[44330] = sym_arithmetic_binary_expression;
	v->a[44331] = sym_arithmetic_ternary_expression;
	v->a[44332] = sym_arithmetic_unary_expression;
	v->a[44333] = sym_arithmetic_postfix_expression;
	v->a[44334] = sym_arithmetic_parenthesized_expression;
	v->a[44335] = sym_command_substitution;
	v->a[44336] = 16;
	v->a[44337] = actions(680);
	v->a[44338] = 1;
	v->a[44339] = sym_comment;
	small_parse_table_2217(v);
}

void	small_parse_table_2217(t_small_parse_table_array *v)
{
	v->a[44340] = actions(1574);
	v->a[44341] = 1;
	v->a[44342] = anon_sym_LPAREN;
	v->a[44343] = actions(1576);
	v->a[44344] = 1;
	v->a[44345] = anon_sym_BANG;
	v->a[44346] = actions(1584);
	v->a[44347] = 1;
	v->a[44348] = anon_sym_TILDE;
	v->a[44349] = actions(1586);
	v->a[44350] = 1;
	v->a[44351] = anon_sym_DOLLAR;
	v->a[44352] = actions(1588);
	v->a[44353] = 1;
	v->a[44354] = anon_sym_DQUOTE;
	v->a[44355] = actions(1592);
	v->a[44356] = 1;
	v->a[44357] = anon_sym_DOLLAR_LBRACE;
	v->a[44358] = actions(1594);
	v->a[44359] = 1;
	small_parse_table_2218(v);
}

void	small_parse_table_2218(t_small_parse_table_array *v)
{
	v->a[44360] = anon_sym_DOLLAR_LPAREN;
	v->a[44361] = actions(1596);
	v->a[44362] = 1;
	v->a[44363] = anon_sym_BQUOTE;
	v->a[44364] = actions(1598);
	v->a[44365] = 1;
	v->a[44366] = sym_variable_name;
	v->a[44367] = actions(1600);
	v->a[44368] = 1;
	v->a[44369] = anon_sym_RPAREN_RPAREN;
	v->a[44370] = actions(1580);
	v->a[44371] = 2;
	v->a[44372] = anon_sym_PLUS_PLUS;
	v->a[44373] = anon_sym_DASH_DASH;
	v->a[44374] = actions(1582);
	v->a[44375] = 2;
	v->a[44376] = anon_sym_DASH2;
	v->a[44377] = anon_sym_PLUS2;
	v->a[44378] = actions(1590);
	v->a[44379] = 2;
	small_parse_table_2219(v);
}

void	small_parse_table_2219(t_small_parse_table_array *v)
{
	v->a[44380] = sym_number;
	v->a[44381] = aux_sym__simple_variable_name_token1;
	v->a[44382] = state(238);
	v->a[44383] = 3;
	v->a[44384] = sym_string;
	v->a[44385] = sym_simple_expansion;
	v->a[44386] = sym_expansion;
	v->a[44387] = state(324);
	v->a[44388] = 8;
	v->a[44389] = sym__arithmetic_expression;
	v->a[44390] = sym_arithmetic_literal;
	v->a[44391] = sym_arithmetic_binary_expression;
	v->a[44392] = sym_arithmetic_ternary_expression;
	v->a[44393] = sym_arithmetic_unary_expression;
	v->a[44394] = sym_arithmetic_postfix_expression;
	v->a[44395] = sym_arithmetic_parenthesized_expression;
	v->a[44396] = sym_command_substitution;
	v->a[44397] = 16;
	v->a[44398] = actions(680);
	v->a[44399] = 1;
	small_parse_table_2220(v);
}

/* EOF small_parse_table_443.c */
