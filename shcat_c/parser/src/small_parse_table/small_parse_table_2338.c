/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2338.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11690(t_small_parse_table_array *v)
{
	v->a[233800] = anon_sym_DOLLAR_BQUOTE;
	v->a[233801] = actions(11040);
	v->a[233802] = 1;
	v->a[233803] = aux_sym__simple_variable_name_token1;
	v->a[233804] = state(2801);
	v->a[233805] = 1;
	v->a[233806] = sym__arithmetic_binary_expression;
	v->a[233807] = state(2803);
	v->a[233808] = 1;
	v->a[233809] = sym__arithmetic_ternary_expression;
	v->a[233810] = state(2809);
	v->a[233811] = 1;
	v->a[233812] = sym__arithmetic_unary_expression;
	v->a[233813] = state(2825);
	v->a[233814] = 1;
	v->a[233815] = sym__arithmetic_postfix_expression;
	v->a[233816] = actions(9282);
	v->a[233817] = 2;
	v->a[233818] = anon_sym_PLUS_PLUS2;
	v->a[233819] = anon_sym_DASH_DASH2;
	small_parse_table_11691(v);
}

void	small_parse_table_11691(t_small_parse_table_array *v)
{
	v->a[233820] = actions(9284);
	v->a[233821] = 2;
	v->a[233822] = anon_sym_DASH2;
	v->a[233823] = anon_sym_PLUS2;
	v->a[233824] = state(2845);
	v->a[233825] = 9;
	v->a[233826] = sym_subscript;
	v->a[233827] = sym__arithmetic_expression;
	v->a[233828] = sym__arithmetic_literal;
	v->a[233829] = sym__arithmetic_parenthesized_expression;
	v->a[233830] = sym_string;
	v->a[233831] = sym_number;
	v->a[233832] = sym_simple_expansion;
	v->a[233833] = sym_expansion;
	v->a[233834] = sym_command_substitution;
	v->a[233835] = 20;
	v->a[233836] = actions(71);
	v->a[233837] = 1;
	v->a[233838] = sym_comment;
	v->a[233839] = actions(1551);
	small_parse_table_11692(v);
}

void	small_parse_table_11692(t_small_parse_table_array *v)
{
	v->a[233840] = 1;
	v->a[233841] = anon_sym_DOLLAR;
	v->a[233842] = actions(1557);
	v->a[233843] = 1;
	v->a[233844] = aux_sym_number_token1;
	v->a[233845] = actions(1559);
	v->a[233846] = 1;
	v->a[233847] = aux_sym_number_token2;
	v->a[233848] = actions(1563);
	v->a[233849] = 1;
	v->a[233850] = anon_sym_DOLLAR_LPAREN;
	v->a[233851] = actions(1575);
	v->a[233852] = 1;
	v->a[233853] = sym__brace_start;
	v->a[233854] = actions(9198);
	v->a[233855] = 1;
	v->a[233856] = anon_sym_DOLLAR_LBRACK;
	v->a[233857] = actions(9202);
	v->a[233858] = 1;
	v->a[233859] = anon_sym_DQUOTE;
	small_parse_table_11693(v);
}

void	small_parse_table_11693(t_small_parse_table_array *v)
{
	v->a[233860] = actions(9206);
	v->a[233861] = 1;
	v->a[233862] = anon_sym_DOLLAR_LBRACE;
	v->a[233863] = actions(9208);
	v->a[233864] = 1;
	v->a[233865] = anon_sym_BQUOTE;
	v->a[233866] = actions(9210);
	v->a[233867] = 1;
	v->a[233868] = anon_sym_DOLLAR_BQUOTE;
	v->a[233869] = actions(9262);
	v->a[233870] = 1;
	v->a[233871] = sym__special_character;
	v->a[233872] = actions(11042);
	v->a[233873] = 1;
	v->a[233874] = sym_word;
	v->a[233875] = actions(11046);
	v->a[233876] = 1;
	v->a[233877] = sym_test_operator;
	v->a[233878] = state(1436);
	v->a[233879] = 1;
	small_parse_table_11694(v);
}

void	small_parse_table_11694(t_small_parse_table_array *v)
{
	v->a[233880] = aux_sym__literal_repeat1;
	v->a[233881] = state(1543);
	v->a[233882] = 1;
	v->a[233883] = sym_concatenation;
	v->a[233884] = actions(9196);
	v->a[233885] = 2;
	v->a[233886] = anon_sym_LPAREN_LPAREN;
	v->a[233887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[233888] = actions(9212);
	v->a[233889] = 2;
	v->a[233890] = anon_sym_LT_LPAREN;
	v->a[233891] = anon_sym_GT_LPAREN;
	v->a[233892] = actions(11044);
	v->a[233893] = 2;
	v->a[233894] = sym_raw_string;
	v->a[233895] = sym_ansi_c_string;
	v->a[233896] = state(1752);
	v->a[233897] = 9;
	v->a[233898] = sym_arithmetic_expansion;
	v->a[233899] = sym_brace_expression;
	small_parse_table_11695(v);
}

/* EOF small_parse_table_2338.c */
