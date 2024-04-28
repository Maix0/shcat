/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2065.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10325(t_small_parse_table_array *v)
{
	v->a[206500] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[206501] = actions(9212);
	v->a[206502] = 2;
	v->a[206503] = anon_sym_LT_LPAREN;
	v->a[206504] = anon_sym_GT_LPAREN;
	v->a[206505] = actions(9272);
	v->a[206506] = 2;
	v->a[206507] = sym_test_operator;
	v->a[206508] = sym__special_character;
	v->a[206509] = actions(9274);
	v->a[206510] = 3;
	v->a[206511] = sym__bare_dollar;
	v->a[206512] = sym_raw_string;
	v->a[206513] = sym_ansi_c_string;
	v->a[206514] = state(1189);
	v->a[206515] = 9;
	v->a[206516] = sym_arithmetic_expansion;
	v->a[206517] = sym_brace_expression;
	v->a[206518] = sym_string;
	v->a[206519] = sym_translated_string;
	small_parse_table_10326(v);
}

void	small_parse_table_10326(t_small_parse_table_array *v)
{
	v->a[206520] = sym_number;
	v->a[206521] = sym_simple_expansion;
	v->a[206522] = sym_expansion;
	v->a[206523] = sym_command_substitution;
	v->a[206524] = sym_process_substitution;
	v->a[206525] = 21;
	v->a[206526] = actions(71);
	v->a[206527] = 1;
	v->a[206528] = sym_comment;
	v->a[206529] = actions(9364);
	v->a[206530] = 1;
	v->a[206531] = anon_sym_LPAREN;
	v->a[206532] = actions(9366);
	v->a[206533] = 1;
	v->a[206534] = anon_sym_BANG;
	v->a[206535] = actions(9372);
	v->a[206536] = 1;
	v->a[206537] = anon_sym_TILDE;
	v->a[206538] = actions(9374);
	v->a[206539] = 1;
	small_parse_table_10327(v);
}

void	small_parse_table_10327(t_small_parse_table_array *v)
{
	v->a[206540] = anon_sym_DOLLAR;
	v->a[206541] = actions(9376);
	v->a[206542] = 1;
	v->a[206543] = anon_sym_DQUOTE;
	v->a[206544] = actions(9378);
	v->a[206545] = 1;
	v->a[206546] = aux_sym_number_token1;
	v->a[206547] = actions(9380);
	v->a[206548] = 1;
	v->a[206549] = aux_sym_number_token2;
	v->a[206550] = actions(9382);
	v->a[206551] = 1;
	v->a[206552] = anon_sym_DOLLAR_LBRACE;
	v->a[206553] = actions(9384);
	v->a[206554] = 1;
	v->a[206555] = anon_sym_DOLLAR_LPAREN;
	v->a[206556] = actions(9386);
	v->a[206557] = 1;
	v->a[206558] = anon_sym_BQUOTE;
	v->a[206559] = actions(9388);
	small_parse_table_10328(v);
}

void	small_parse_table_10328(t_small_parse_table_array *v)
{
	v->a[206560] = 1;
	v->a[206561] = anon_sym_DOLLAR_BQUOTE;
	v->a[206562] = actions(9392);
	v->a[206563] = 1;
	v->a[206564] = sym_variable_name;
	v->a[206565] = actions(9598);
	v->a[206566] = 1;
	v->a[206567] = aux_sym__simple_variable_name_token1;
	v->a[206568] = state(3391);
	v->a[206569] = 1;
	v->a[206570] = sym__arithmetic_binary_expression;
	v->a[206571] = state(3396);
	v->a[206572] = 1;
	v->a[206573] = sym__arithmetic_ternary_expression;
	v->a[206574] = state(3398);
	v->a[206575] = 1;
	v->a[206576] = sym__arithmetic_unary_expression;
	v->a[206577] = state(3400);
	v->a[206578] = 1;
	v->a[206579] = sym__arithmetic_postfix_expression;
	small_parse_table_10329(v);
}

void	small_parse_table_10329(t_small_parse_table_array *v)
{
	v->a[206580] = actions(9368);
	v->a[206581] = 2;
	v->a[206582] = anon_sym_PLUS_PLUS2;
	v->a[206583] = anon_sym_DASH_DASH2;
	v->a[206584] = actions(9370);
	v->a[206585] = 2;
	v->a[206586] = anon_sym_DASH2;
	v->a[206587] = anon_sym_PLUS2;
	v->a[206588] = state(3342);
	v->a[206589] = 9;
	v->a[206590] = sym_subscript;
	v->a[206591] = sym__arithmetic_expression;
	v->a[206592] = sym__arithmetic_literal;
	v->a[206593] = sym__arithmetic_parenthesized_expression;
	v->a[206594] = sym_string;
	v->a[206595] = sym_number;
	v->a[206596] = sym_simple_expansion;
	v->a[206597] = sym_expansion;
	v->a[206598] = sym_command_substitution;
	v->a[206599] = 18;
	small_parse_table_10330(v);
}

/* EOF small_parse_table_2065.c */
