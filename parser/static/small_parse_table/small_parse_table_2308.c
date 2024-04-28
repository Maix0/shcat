/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2308.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11540(t_small_parse_table_array *v)
{
	v->a[230800] = 2;
	v->a[230801] = anon_sym_LT_LPAREN;
	v->a[230802] = anon_sym_GT_LPAREN;
	v->a[230803] = actions(10302);
	v->a[230804] = 2;
	v->a[230805] = sym_test_operator;
	v->a[230806] = sym__special_character;
	v->a[230807] = actions(10304);
	v->a[230808] = 3;
	v->a[230809] = sym__bare_dollar;
	v->a[230810] = sym_raw_string;
	v->a[230811] = sym_ansi_c_string;
	v->a[230812] = state(5680);
	v->a[230813] = 9;
	v->a[230814] = sym_arithmetic_expansion;
	v->a[230815] = sym_brace_expression;
	v->a[230816] = sym_string;
	v->a[230817] = sym_translated_string;
	v->a[230818] = sym_number;
	v->a[230819] = sym_simple_expansion;
	small_parse_table_11541(v);
}

void	small_parse_table_11541(t_small_parse_table_array *v)
{
	v->a[230820] = sym_expansion;
	v->a[230821] = sym_command_substitution;
	v->a[230822] = sym_process_substitution;
	v->a[230823] = 21;
	v->a[230824] = actions(71);
	v->a[230825] = 1;
	v->a[230826] = sym_comment;
	v->a[230827] = actions(3064);
	v->a[230828] = 1;
	v->a[230829] = sym_variable_name;
	v->a[230830] = actions(3586);
	v->a[230831] = 1;
	v->a[230832] = aux_sym__simple_variable_name_token1;
	v->a[230833] = actions(9278);
	v->a[230834] = 1;
	v->a[230835] = anon_sym_LPAREN;
	v->a[230836] = actions(9280);
	v->a[230837] = 1;
	v->a[230838] = anon_sym_BANG;
	v->a[230839] = actions(9286);
	small_parse_table_11542(v);
}

void	small_parse_table_11542(t_small_parse_table_array *v)
{
	v->a[230840] = 1;
	v->a[230841] = anon_sym_TILDE;
	v->a[230842] = actions(9288);
	v->a[230843] = 1;
	v->a[230844] = anon_sym_DOLLAR;
	v->a[230845] = actions(9290);
	v->a[230846] = 1;
	v->a[230847] = anon_sym_DQUOTE;
	v->a[230848] = actions(9292);
	v->a[230849] = 1;
	v->a[230850] = aux_sym_number_token1;
	v->a[230851] = actions(9294);
	v->a[230852] = 1;
	v->a[230853] = aux_sym_number_token2;
	v->a[230854] = actions(9296);
	v->a[230855] = 1;
	v->a[230856] = anon_sym_DOLLAR_LBRACE;
	v->a[230857] = actions(9298);
	v->a[230858] = 1;
	v->a[230859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11543(v);
}

void	small_parse_table_11543(t_small_parse_table_array *v)
{
	v->a[230860] = actions(9300);
	v->a[230861] = 1;
	v->a[230862] = anon_sym_BQUOTE;
	v->a[230863] = actions(9302);
	v->a[230864] = 1;
	v->a[230865] = anon_sym_DOLLAR_BQUOTE;
	v->a[230866] = state(2801);
	v->a[230867] = 1;
	v->a[230868] = sym__arithmetic_binary_expression;
	v->a[230869] = state(2803);
	v->a[230870] = 1;
	v->a[230871] = sym__arithmetic_ternary_expression;
	v->a[230872] = state(2809);
	v->a[230873] = 1;
	v->a[230874] = sym__arithmetic_unary_expression;
	v->a[230875] = state(2825);
	v->a[230876] = 1;
	v->a[230877] = sym__arithmetic_postfix_expression;
	v->a[230878] = actions(9282);
	v->a[230879] = 2;
	small_parse_table_11544(v);
}

void	small_parse_table_11544(t_small_parse_table_array *v)
{
	v->a[230880] = anon_sym_PLUS_PLUS2;
	v->a[230881] = anon_sym_DASH_DASH2;
	v->a[230882] = actions(9284);
	v->a[230883] = 2;
	v->a[230884] = anon_sym_DASH2;
	v->a[230885] = anon_sym_PLUS2;
	v->a[230886] = state(2840);
	v->a[230887] = 9;
	v->a[230888] = sym_subscript;
	v->a[230889] = sym__arithmetic_expression;
	v->a[230890] = sym__arithmetic_literal;
	v->a[230891] = sym__arithmetic_parenthesized_expression;
	v->a[230892] = sym_string;
	v->a[230893] = sym_number;
	v->a[230894] = sym_simple_expansion;
	v->a[230895] = sym_expansion;
	v->a[230896] = sym_command_substitution;
	v->a[230897] = 18;
	v->a[230898] = actions(3);
	v->a[230899] = 1;
	small_parse_table_11545(v);
}

/* EOF small_parse_table_2308.c */
