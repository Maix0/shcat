/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_948.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4740(t_small_parse_table_array *v)
{
	v->a[94800] = anon_sym_LPAREN_LPAREN;
	v->a[94801] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94802] = actions(1135);
	v->a[94803] = 2;
	v->a[94804] = anon_sym_PLUS_PLUS2;
	v->a[94805] = anon_sym_DASH_DASH2;
	v->a[94806] = actions(1137);
	v->a[94807] = 2;
	v->a[94808] = anon_sym_DASH2;
	v->a[94809] = anon_sym_PLUS2;
	v->a[94810] = actions(1151);
	v->a[94811] = 2;
	v->a[94812] = sym_raw_string;
	v->a[94813] = sym_ansi_c_string;
	v->a[94814] = actions(1165);
	v->a[94815] = 2;
	v->a[94816] = anon_sym_LT_LPAREN;
	v->a[94817] = anon_sym_GT_LPAREN;
	v->a[94818] = state(2594);
	v->a[94819] = 6;
	small_parse_table_4741(v);
}

void	small_parse_table_4741(t_small_parse_table_array *v)
{
	v->a[94820] = sym_binary_expression;
	v->a[94821] = sym_ternary_expression;
	v->a[94822] = sym_unary_expression;
	v->a[94823] = sym_postfix_expression;
	v->a[94824] = sym_parenthesized_expression;
	v->a[94825] = sym_concatenation;
	v->a[94826] = state(2573);
	v->a[94827] = 9;
	v->a[94828] = sym_arithmetic_expansion;
	v->a[94829] = sym_brace_expression;
	v->a[94830] = sym_string;
	v->a[94831] = sym_translated_string;
	v->a[94832] = sym_number;
	v->a[94833] = sym_simple_expansion;
	v->a[94834] = sym_expansion;
	v->a[94835] = sym_command_substitution;
	v->a[94836] = sym_process_substitution;
	v->a[94837] = 26;
	v->a[94838] = actions(71);
	v->a[94839] = 1;
	small_parse_table_4742(v);
}

void	small_parse_table_4742(t_small_parse_table_array *v)
{
	v->a[94840] = sym_comment;
	v->a[94841] = actions(1127);
	v->a[94842] = 1;
	v->a[94843] = sym_word;
	v->a[94844] = actions(1131);
	v->a[94845] = 1;
	v->a[94846] = anon_sym_LPAREN;
	v->a[94847] = actions(1133);
	v->a[94848] = 1;
	v->a[94849] = anon_sym_BANG;
	v->a[94850] = actions(1139);
	v->a[94851] = 1;
	v->a[94852] = anon_sym_TILDE;
	v->a[94853] = actions(1141);
	v->a[94854] = 1;
	v->a[94855] = anon_sym_DOLLAR_LBRACK;
	v->a[94856] = actions(1145);
	v->a[94857] = 1;
	v->a[94858] = anon_sym_DOLLAR;
	v->a[94859] = actions(1147);
	small_parse_table_4743(v);
}

void	small_parse_table_4743(t_small_parse_table_array *v)
{
	v->a[94860] = 1;
	v->a[94861] = sym__special_character;
	v->a[94862] = actions(1149);
	v->a[94863] = 1;
	v->a[94864] = anon_sym_DQUOTE;
	v->a[94865] = actions(1153);
	v->a[94866] = 1;
	v->a[94867] = aux_sym_number_token1;
	v->a[94868] = actions(1155);
	v->a[94869] = 1;
	v->a[94870] = aux_sym_number_token2;
	v->a[94871] = actions(1157);
	v->a[94872] = 1;
	v->a[94873] = anon_sym_DOLLAR_LBRACE;
	v->a[94874] = actions(1159);
	v->a[94875] = 1;
	v->a[94876] = anon_sym_DOLLAR_LPAREN;
	v->a[94877] = actions(1163);
	v->a[94878] = 1;
	v->a[94879] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4744(v);
}

void	small_parse_table_4744(t_small_parse_table_array *v)
{
	v->a[94880] = actions(1167);
	v->a[94881] = 1;
	v->a[94882] = sym_test_operator;
	v->a[94883] = actions(1169);
	v->a[94884] = 1;
	v->a[94885] = sym__brace_start;
	v->a[94886] = actions(3060);
	v->a[94887] = 1;
	v->a[94888] = anon_sym_BQUOTE;
	v->a[94889] = state(2484);
	v->a[94890] = 1;
	v->a[94891] = aux_sym__literal_repeat1;
	v->a[94892] = state(2973);
	v->a[94893] = 1;
	v->a[94894] = sym__expression;
	v->a[94895] = actions(1129);
	v->a[94896] = 2;
	v->a[94897] = anon_sym_LPAREN_LPAREN;
	v->a[94898] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94899] = actions(1135);
	small_parse_table_4745(v);
}

/* EOF small_parse_table_948.c */
