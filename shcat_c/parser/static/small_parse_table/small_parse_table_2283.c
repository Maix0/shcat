/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2283.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11415(t_small_parse_table_array *v)
{
	v->a[228300] = anon_sym_DASH2;
	v->a[228301] = anon_sym_PLUS2;
	v->a[228302] = state(3266);
	v->a[228303] = 9;
	v->a[228304] = sym_subscript;
	v->a[228305] = sym__arithmetic_expression;
	v->a[228306] = sym__arithmetic_literal;
	v->a[228307] = sym__arithmetic_parenthesized_expression;
	v->a[228308] = sym_string;
	v->a[228309] = sym_number;
	v->a[228310] = sym_simple_expansion;
	v->a[228311] = sym_expansion;
	v->a[228312] = sym_command_substitution;
	v->a[228313] = 21;
	v->a[228314] = actions(71);
	v->a[228315] = 1;
	v->a[228316] = sym_comment;
	v->a[228317] = actions(3064);
	v->a[228318] = 1;
	v->a[228319] = sym_variable_name;
	small_parse_table_11416(v);
}

void	small_parse_table_11416(t_small_parse_table_array *v)
{
	v->a[228320] = actions(9278);
	v->a[228321] = 1;
	v->a[228322] = anon_sym_LPAREN;
	v->a[228323] = actions(9280);
	v->a[228324] = 1;
	v->a[228325] = anon_sym_BANG;
	v->a[228326] = actions(9286);
	v->a[228327] = 1;
	v->a[228328] = anon_sym_TILDE;
	v->a[228329] = actions(9288);
	v->a[228330] = 1;
	v->a[228331] = anon_sym_DOLLAR;
	v->a[228332] = actions(9290);
	v->a[228333] = 1;
	v->a[228334] = anon_sym_DQUOTE;
	v->a[228335] = actions(9292);
	v->a[228336] = 1;
	v->a[228337] = aux_sym_number_token1;
	v->a[228338] = actions(9294);
	v->a[228339] = 1;
	small_parse_table_11417(v);
}

void	small_parse_table_11417(t_small_parse_table_array *v)
{
	v->a[228340] = aux_sym_number_token2;
	v->a[228341] = actions(9296);
	v->a[228342] = 1;
	v->a[228343] = anon_sym_DOLLAR_LBRACE;
	v->a[228344] = actions(9298);
	v->a[228345] = 1;
	v->a[228346] = anon_sym_DOLLAR_LPAREN;
	v->a[228347] = actions(9300);
	v->a[228348] = 1;
	v->a[228349] = anon_sym_BQUOTE;
	v->a[228350] = actions(9302);
	v->a[228351] = 1;
	v->a[228352] = anon_sym_DOLLAR_BQUOTE;
	v->a[228353] = actions(10838);
	v->a[228354] = 1;
	v->a[228355] = aux_sym__simple_variable_name_token1;
	v->a[228356] = state(2801);
	v->a[228357] = 1;
	v->a[228358] = sym__arithmetic_binary_expression;
	v->a[228359] = state(2803);
	small_parse_table_11418(v);
}

void	small_parse_table_11418(t_small_parse_table_array *v)
{
	v->a[228360] = 1;
	v->a[228361] = sym__arithmetic_ternary_expression;
	v->a[228362] = state(2809);
	v->a[228363] = 1;
	v->a[228364] = sym__arithmetic_unary_expression;
	v->a[228365] = state(2825);
	v->a[228366] = 1;
	v->a[228367] = sym__arithmetic_postfix_expression;
	v->a[228368] = actions(9282);
	v->a[228369] = 2;
	v->a[228370] = anon_sym_PLUS_PLUS2;
	v->a[228371] = anon_sym_DASH_DASH2;
	v->a[228372] = actions(9284);
	v->a[228373] = 2;
	v->a[228374] = anon_sym_DASH2;
	v->a[228375] = anon_sym_PLUS2;
	v->a[228376] = state(2775);
	v->a[228377] = 9;
	v->a[228378] = sym_subscript;
	v->a[228379] = sym__arithmetic_expression;
	small_parse_table_11419(v);
}

void	small_parse_table_11419(t_small_parse_table_array *v)
{
	v->a[228380] = sym__arithmetic_literal;
	v->a[228381] = sym__arithmetic_parenthesized_expression;
	v->a[228382] = sym_string;
	v->a[228383] = sym_number;
	v->a[228384] = sym_simple_expansion;
	v->a[228385] = sym_expansion;
	v->a[228386] = sym_command_substitution;
	v->a[228387] = 21;
	v->a[228388] = actions(71);
	v->a[228389] = 1;
	v->a[228390] = sym_comment;
	v->a[228391] = actions(3064);
	v->a[228392] = 1;
	v->a[228393] = sym_variable_name;
	v->a[228394] = actions(9278);
	v->a[228395] = 1;
	v->a[228396] = anon_sym_LPAREN;
	v->a[228397] = actions(9280);
	v->a[228398] = 1;
	v->a[228399] = anon_sym_BANG;
	small_parse_table_11420(v);
}

/* EOF small_parse_table_2283.c */
