/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2318.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11590(t_small_parse_table_array *v)
{
	v->a[231800] = actions(8200);
	v->a[231801] = 2;
	v->a[231802] = anon_sym_LT_LPAREN;
	v->a[231803] = anon_sym_GT_LPAREN;
	v->a[231804] = actions(10964);
	v->a[231805] = 2;
	v->a[231806] = sym_raw_string;
	v->a[231807] = sym_ansi_c_string;
	v->a[231808] = state(1344);
	v->a[231809] = 9;
	v->a[231810] = sym_arithmetic_expansion;
	v->a[231811] = sym_brace_expression;
	v->a[231812] = sym_string;
	v->a[231813] = sym_translated_string;
	v->a[231814] = sym_number;
	v->a[231815] = sym_simple_expansion;
	v->a[231816] = sym_expansion;
	v->a[231817] = sym_command_substitution;
	v->a[231818] = sym_process_substitution;
	v->a[231819] = 21;
	small_parse_table_11591(v);
}

void	small_parse_table_11591(t_small_parse_table_array *v)
{
	v->a[231820] = actions(71);
	v->a[231821] = 1;
	v->a[231822] = sym_comment;
	v->a[231823] = actions(3064);
	v->a[231824] = 1;
	v->a[231825] = sym_variable_name;
	v->a[231826] = actions(4046);
	v->a[231827] = 1;
	v->a[231828] = aux_sym__simple_variable_name_token1;
	v->a[231829] = actions(9278);
	v->a[231830] = 1;
	v->a[231831] = anon_sym_LPAREN;
	v->a[231832] = actions(9280);
	v->a[231833] = 1;
	v->a[231834] = anon_sym_BANG;
	v->a[231835] = actions(9286);
	v->a[231836] = 1;
	v->a[231837] = anon_sym_TILDE;
	v->a[231838] = actions(9288);
	v->a[231839] = 1;
	small_parse_table_11592(v);
}

void	small_parse_table_11592(t_small_parse_table_array *v)
{
	v->a[231840] = anon_sym_DOLLAR;
	v->a[231841] = actions(9290);
	v->a[231842] = 1;
	v->a[231843] = anon_sym_DQUOTE;
	v->a[231844] = actions(9292);
	v->a[231845] = 1;
	v->a[231846] = aux_sym_number_token1;
	v->a[231847] = actions(9294);
	v->a[231848] = 1;
	v->a[231849] = aux_sym_number_token2;
	v->a[231850] = actions(9296);
	v->a[231851] = 1;
	v->a[231852] = anon_sym_DOLLAR_LBRACE;
	v->a[231853] = actions(9298);
	v->a[231854] = 1;
	v->a[231855] = anon_sym_DOLLAR_LPAREN;
	v->a[231856] = actions(9300);
	v->a[231857] = 1;
	v->a[231858] = anon_sym_BQUOTE;
	v->a[231859] = actions(9302);
	small_parse_table_11593(v);
}

void	small_parse_table_11593(t_small_parse_table_array *v)
{
	v->a[231860] = 1;
	v->a[231861] = anon_sym_DOLLAR_BQUOTE;
	v->a[231862] = state(2801);
	v->a[231863] = 1;
	v->a[231864] = sym__arithmetic_binary_expression;
	v->a[231865] = state(2803);
	v->a[231866] = 1;
	v->a[231867] = sym__arithmetic_ternary_expression;
	v->a[231868] = state(2809);
	v->a[231869] = 1;
	v->a[231870] = sym__arithmetic_unary_expression;
	v->a[231871] = state(2825);
	v->a[231872] = 1;
	v->a[231873] = sym__arithmetic_postfix_expression;
	v->a[231874] = actions(9282);
	v->a[231875] = 2;
	v->a[231876] = anon_sym_PLUS_PLUS2;
	v->a[231877] = anon_sym_DASH_DASH2;
	v->a[231878] = actions(9284);
	v->a[231879] = 2;
	small_parse_table_11594(v);
}

void	small_parse_table_11594(t_small_parse_table_array *v)
{
	v->a[231880] = anon_sym_DASH2;
	v->a[231881] = anon_sym_PLUS2;
	v->a[231882] = state(2843);
	v->a[231883] = 9;
	v->a[231884] = sym_subscript;
	v->a[231885] = sym__arithmetic_expression;
	v->a[231886] = sym__arithmetic_literal;
	v->a[231887] = sym__arithmetic_parenthesized_expression;
	v->a[231888] = sym_string;
	v->a[231889] = sym_number;
	v->a[231890] = sym_simple_expansion;
	v->a[231891] = sym_expansion;
	v->a[231892] = sym_command_substitution;
	v->a[231893] = 20;
	v->a[231894] = actions(71);
	v->a[231895] = 1;
	v->a[231896] = sym_comment;
	v->a[231897] = actions(8178);
	v->a[231898] = 1;
	v->a[231899] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11595(v);
}

/* EOF small_parse_table_2318.c */
