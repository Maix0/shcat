/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2313.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11565(t_small_parse_table_array *v)
{
	v->a[231300] = sym__arithmetic_unary_expression;
	v->a[231301] = state(2825);
	v->a[231302] = 1;
	v->a[231303] = sym__arithmetic_postfix_expression;
	v->a[231304] = actions(9282);
	v->a[231305] = 2;
	v->a[231306] = anon_sym_PLUS_PLUS2;
	v->a[231307] = anon_sym_DASH_DASH2;
	v->a[231308] = actions(9284);
	v->a[231309] = 2;
	v->a[231310] = anon_sym_DASH2;
	v->a[231311] = anon_sym_PLUS2;
	v->a[231312] = state(2848);
	v->a[231313] = 9;
	v->a[231314] = sym_subscript;
	v->a[231315] = sym__arithmetic_expression;
	v->a[231316] = sym__arithmetic_literal;
	v->a[231317] = sym__arithmetic_parenthesized_expression;
	v->a[231318] = sym_string;
	v->a[231319] = sym_number;
	small_parse_table_11566(v);
}

void	small_parse_table_11566(t_small_parse_table_array *v)
{
	v->a[231320] = sym_simple_expansion;
	v->a[231321] = sym_expansion;
	v->a[231322] = sym_command_substitution;
	v->a[231323] = 21;
	v->a[231324] = actions(71);
	v->a[231325] = 1;
	v->a[231326] = sym_comment;
	v->a[231327] = actions(3064);
	v->a[231328] = 1;
	v->a[231329] = sym_variable_name;
	v->a[231330] = actions(9278);
	v->a[231331] = 1;
	v->a[231332] = anon_sym_LPAREN;
	v->a[231333] = actions(9280);
	v->a[231334] = 1;
	v->a[231335] = anon_sym_BANG;
	v->a[231336] = actions(9286);
	v->a[231337] = 1;
	v->a[231338] = anon_sym_TILDE;
	v->a[231339] = actions(9288);
	small_parse_table_11567(v);
}

void	small_parse_table_11567(t_small_parse_table_array *v)
{
	v->a[231340] = 1;
	v->a[231341] = anon_sym_DOLLAR;
	v->a[231342] = actions(9290);
	v->a[231343] = 1;
	v->a[231344] = anon_sym_DQUOTE;
	v->a[231345] = actions(9292);
	v->a[231346] = 1;
	v->a[231347] = aux_sym_number_token1;
	v->a[231348] = actions(9294);
	v->a[231349] = 1;
	v->a[231350] = aux_sym_number_token2;
	v->a[231351] = actions(9296);
	v->a[231352] = 1;
	v->a[231353] = anon_sym_DOLLAR_LBRACE;
	v->a[231354] = actions(9298);
	v->a[231355] = 1;
	v->a[231356] = anon_sym_DOLLAR_LPAREN;
	v->a[231357] = actions(9300);
	v->a[231358] = 1;
	v->a[231359] = anon_sym_BQUOTE;
	small_parse_table_11568(v);
}

void	small_parse_table_11568(t_small_parse_table_array *v)
{
	v->a[231360] = actions(9302);
	v->a[231361] = 1;
	v->a[231362] = anon_sym_DOLLAR_BQUOTE;
	v->a[231363] = actions(10924);
	v->a[231364] = 1;
	v->a[231365] = aux_sym__simple_variable_name_token1;
	v->a[231366] = state(2801);
	v->a[231367] = 1;
	v->a[231368] = sym__arithmetic_binary_expression;
	v->a[231369] = state(2803);
	v->a[231370] = 1;
	v->a[231371] = sym__arithmetic_ternary_expression;
	v->a[231372] = state(2809);
	v->a[231373] = 1;
	v->a[231374] = sym__arithmetic_unary_expression;
	v->a[231375] = state(2825);
	v->a[231376] = 1;
	v->a[231377] = sym__arithmetic_postfix_expression;
	v->a[231378] = actions(9282);
	v->a[231379] = 2;
	small_parse_table_11569(v);
}

void	small_parse_table_11569(t_small_parse_table_array *v)
{
	v->a[231380] = anon_sym_PLUS_PLUS2;
	v->a[231381] = anon_sym_DASH_DASH2;
	v->a[231382] = actions(9284);
	v->a[231383] = 2;
	v->a[231384] = anon_sym_DASH2;
	v->a[231385] = anon_sym_PLUS2;
	v->a[231386] = state(2779);
	v->a[231387] = 9;
	v->a[231388] = sym_subscript;
	v->a[231389] = sym__arithmetic_expression;
	v->a[231390] = sym__arithmetic_literal;
	v->a[231391] = sym__arithmetic_parenthesized_expression;
	v->a[231392] = sym_string;
	v->a[231393] = sym_number;
	v->a[231394] = sym_simple_expansion;
	v->a[231395] = sym_expansion;
	v->a[231396] = sym_command_substitution;
	v->a[231397] = 18;
	v->a[231398] = actions(3);
	v->a[231399] = 1;
	small_parse_table_11570(v);
}

/* EOF small_parse_table_2313.c */
