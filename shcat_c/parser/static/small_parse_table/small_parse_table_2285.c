/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2285.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11425(t_small_parse_table_array *v)
{
	v->a[228500] = sym_variable_name;
	v->a[228501] = actions(10842);
	v->a[228502] = 1;
	v->a[228503] = aux_sym__simple_variable_name_token1;
	v->a[228504] = state(3391);
	v->a[228505] = 1;
	v->a[228506] = sym__arithmetic_binary_expression;
	v->a[228507] = state(3396);
	v->a[228508] = 1;
	v->a[228509] = sym__arithmetic_ternary_expression;
	v->a[228510] = state(3398);
	v->a[228511] = 1;
	v->a[228512] = sym__arithmetic_unary_expression;
	v->a[228513] = state(3400);
	v->a[228514] = 1;
	v->a[228515] = sym__arithmetic_postfix_expression;
	v->a[228516] = actions(9368);
	v->a[228517] = 2;
	v->a[228518] = anon_sym_PLUS_PLUS2;
	v->a[228519] = anon_sym_DASH_DASH2;
	small_parse_table_11426(v);
}

void	small_parse_table_11426(t_small_parse_table_array *v)
{
	v->a[228520] = actions(9370);
	v->a[228521] = 2;
	v->a[228522] = anon_sym_DASH2;
	v->a[228523] = anon_sym_PLUS2;
	v->a[228524] = state(3373);
	v->a[228525] = 9;
	v->a[228526] = sym_subscript;
	v->a[228527] = sym__arithmetic_expression;
	v->a[228528] = sym__arithmetic_literal;
	v->a[228529] = sym__arithmetic_parenthesized_expression;
	v->a[228530] = sym_string;
	v->a[228531] = sym_number;
	v->a[228532] = sym_simple_expansion;
	v->a[228533] = sym_expansion;
	v->a[228534] = sym_command_substitution;
	v->a[228535] = 21;
	v->a[228536] = actions(71);
	v->a[228537] = 1;
	v->a[228538] = sym_comment;
	v->a[228539] = actions(3064);
	small_parse_table_11427(v);
}

void	small_parse_table_11427(t_small_parse_table_array *v)
{
	v->a[228540] = 1;
	v->a[228541] = sym_variable_name;
	v->a[228542] = actions(9278);
	v->a[228543] = 1;
	v->a[228544] = anon_sym_LPAREN;
	v->a[228545] = actions(9280);
	v->a[228546] = 1;
	v->a[228547] = anon_sym_BANG;
	v->a[228548] = actions(9286);
	v->a[228549] = 1;
	v->a[228550] = anon_sym_TILDE;
	v->a[228551] = actions(9288);
	v->a[228552] = 1;
	v->a[228553] = anon_sym_DOLLAR;
	v->a[228554] = actions(9290);
	v->a[228555] = 1;
	v->a[228556] = anon_sym_DQUOTE;
	v->a[228557] = actions(9292);
	v->a[228558] = 1;
	v->a[228559] = aux_sym_number_token1;
	small_parse_table_11428(v);
}

void	small_parse_table_11428(t_small_parse_table_array *v)
{
	v->a[228560] = actions(9294);
	v->a[228561] = 1;
	v->a[228562] = aux_sym_number_token2;
	v->a[228563] = actions(9296);
	v->a[228564] = 1;
	v->a[228565] = anon_sym_DOLLAR_LBRACE;
	v->a[228566] = actions(9298);
	v->a[228567] = 1;
	v->a[228568] = anon_sym_DOLLAR_LPAREN;
	v->a[228569] = actions(9300);
	v->a[228570] = 1;
	v->a[228571] = anon_sym_BQUOTE;
	v->a[228572] = actions(9302);
	v->a[228573] = 1;
	v->a[228574] = anon_sym_DOLLAR_BQUOTE;
	v->a[228575] = actions(10844);
	v->a[228576] = 1;
	v->a[228577] = aux_sym__simple_variable_name_token1;
	v->a[228578] = state(2801);
	v->a[228579] = 1;
	small_parse_table_11429(v);
}

void	small_parse_table_11429(t_small_parse_table_array *v)
{
	v->a[228580] = sym__arithmetic_binary_expression;
	v->a[228581] = state(2803);
	v->a[228582] = 1;
	v->a[228583] = sym__arithmetic_ternary_expression;
	v->a[228584] = state(2809);
	v->a[228585] = 1;
	v->a[228586] = sym__arithmetic_unary_expression;
	v->a[228587] = state(2825);
	v->a[228588] = 1;
	v->a[228589] = sym__arithmetic_postfix_expression;
	v->a[228590] = actions(9282);
	v->a[228591] = 2;
	v->a[228592] = anon_sym_PLUS_PLUS2;
	v->a[228593] = anon_sym_DASH_DASH2;
	v->a[228594] = actions(9284);
	v->a[228595] = 2;
	v->a[228596] = anon_sym_DASH2;
	v->a[228597] = anon_sym_PLUS2;
	v->a[228598] = state(2937);
	v->a[228599] = 9;
	small_parse_table_11430(v);
}

/* EOF small_parse_table_2285.c */
