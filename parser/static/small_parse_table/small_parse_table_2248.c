/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2248.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11240(t_small_parse_table_array *v)
{
	v->a[224800] = anon_sym_GT_LPAREN;
	v->a[224801] = actions(9724);
	v->a[224802] = 2;
	v->a[224803] = sym_test_operator;
	v->a[224804] = sym__special_character;
	v->a[224805] = actions(9726);
	v->a[224806] = 3;
	v->a[224807] = sym__bare_dollar;
	v->a[224808] = sym_raw_string;
	v->a[224809] = sym_ansi_c_string;
	v->a[224810] = state(1590);
	v->a[224811] = 9;
	v->a[224812] = sym_arithmetic_expansion;
	v->a[224813] = sym_brace_expression;
	v->a[224814] = sym_string;
	v->a[224815] = sym_translated_string;
	v->a[224816] = sym_number;
	v->a[224817] = sym_simple_expansion;
	v->a[224818] = sym_expansion;
	v->a[224819] = sym_command_substitution;
	small_parse_table_11241(v);
}

void	small_parse_table_11241(t_small_parse_table_array *v)
{
	v->a[224820] = sym_process_substitution;
	v->a[224821] = 21;
	v->a[224822] = actions(71);
	v->a[224823] = 1;
	v->a[224824] = sym_comment;
	v->a[224825] = actions(3064);
	v->a[224826] = 1;
	v->a[224827] = sym_variable_name;
	v->a[224828] = actions(9278);
	v->a[224829] = 1;
	v->a[224830] = anon_sym_LPAREN;
	v->a[224831] = actions(9280);
	v->a[224832] = 1;
	v->a[224833] = anon_sym_BANG;
	v->a[224834] = actions(9286);
	v->a[224835] = 1;
	v->a[224836] = anon_sym_TILDE;
	v->a[224837] = actions(9288);
	v->a[224838] = 1;
	v->a[224839] = anon_sym_DOLLAR;
	small_parse_table_11242(v);
}

void	small_parse_table_11242(t_small_parse_table_array *v)
{
	v->a[224840] = actions(9290);
	v->a[224841] = 1;
	v->a[224842] = anon_sym_DQUOTE;
	v->a[224843] = actions(9292);
	v->a[224844] = 1;
	v->a[224845] = aux_sym_number_token1;
	v->a[224846] = actions(9294);
	v->a[224847] = 1;
	v->a[224848] = aux_sym_number_token2;
	v->a[224849] = actions(9296);
	v->a[224850] = 1;
	v->a[224851] = anon_sym_DOLLAR_LBRACE;
	v->a[224852] = actions(9298);
	v->a[224853] = 1;
	v->a[224854] = anon_sym_DOLLAR_LPAREN;
	v->a[224855] = actions(9300);
	v->a[224856] = 1;
	v->a[224857] = anon_sym_BQUOTE;
	v->a[224858] = actions(9302);
	v->a[224859] = 1;
	small_parse_table_11243(v);
}

void	small_parse_table_11243(t_small_parse_table_array *v)
{
	v->a[224860] = anon_sym_DOLLAR_BQUOTE;
	v->a[224861] = actions(10696);
	v->a[224862] = 1;
	v->a[224863] = aux_sym__simple_variable_name_token1;
	v->a[224864] = state(2801);
	v->a[224865] = 1;
	v->a[224866] = sym__arithmetic_binary_expression;
	v->a[224867] = state(2803);
	v->a[224868] = 1;
	v->a[224869] = sym__arithmetic_ternary_expression;
	v->a[224870] = state(2809);
	v->a[224871] = 1;
	v->a[224872] = sym__arithmetic_unary_expression;
	v->a[224873] = state(2825);
	v->a[224874] = 1;
	v->a[224875] = sym__arithmetic_postfix_expression;
	v->a[224876] = actions(9282);
	v->a[224877] = 2;
	v->a[224878] = anon_sym_PLUS_PLUS2;
	v->a[224879] = anon_sym_DASH_DASH2;
	small_parse_table_11244(v);
}

void	small_parse_table_11244(t_small_parse_table_array *v)
{
	v->a[224880] = actions(9284);
	v->a[224881] = 2;
	v->a[224882] = anon_sym_DASH2;
	v->a[224883] = anon_sym_PLUS2;
	v->a[224884] = state(2771);
	v->a[224885] = 9;
	v->a[224886] = sym_subscript;
	v->a[224887] = sym__arithmetic_expression;
	v->a[224888] = sym__arithmetic_literal;
	v->a[224889] = sym__arithmetic_parenthesized_expression;
	v->a[224890] = sym_string;
	v->a[224891] = sym_number;
	v->a[224892] = sym_simple_expansion;
	v->a[224893] = sym_expansion;
	v->a[224894] = sym_command_substitution;
	v->a[224895] = 18;
	v->a[224896] = actions(3);
	v->a[224897] = 1;
	v->a[224898] = sym_comment;
	v->a[224899] = actions(8372);
	small_parse_table_11245(v);
}

/* EOF small_parse_table_2248.c */
