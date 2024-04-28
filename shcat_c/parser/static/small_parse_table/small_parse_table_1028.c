/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1028.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5140(t_small_parse_table_array *v)
{
	v->a[102800] = aux_sym_number_token2;
	v->a[102801] = actions(1157);
	v->a[102802] = 1;
	v->a[102803] = anon_sym_DOLLAR_LBRACE;
	v->a[102804] = actions(1159);
	v->a[102805] = 1;
	v->a[102806] = anon_sym_DOLLAR_LPAREN;
	v->a[102807] = actions(1163);
	v->a[102808] = 1;
	v->a[102809] = anon_sym_DOLLAR_BQUOTE;
	v->a[102810] = actions(1169);
	v->a[102811] = 1;
	v->a[102812] = sym__brace_start;
	v->a[102813] = actions(1171);
	v->a[102814] = 1;
	v->a[102815] = sym_word;
	v->a[102816] = actions(1173);
	v->a[102817] = 1;
	v->a[102818] = anon_sym_BANG;
	v->a[102819] = actions(1179);
	small_parse_table_5141(v);
}

void	small_parse_table_5141(t_small_parse_table_array *v)
{
	v->a[102820] = 1;
	v->a[102821] = anon_sym_TILDE;
	v->a[102822] = actions(1181);
	v->a[102823] = 1;
	v->a[102824] = sym__special_character;
	v->a[102825] = actions(1185);
	v->a[102826] = 1;
	v->a[102827] = sym_test_operator;
	v->a[102828] = actions(3060);
	v->a[102829] = 1;
	v->a[102830] = anon_sym_BQUOTE;
	v->a[102831] = state(2484);
	v->a[102832] = 1;
	v->a[102833] = aux_sym__literal_repeat1;
	v->a[102834] = state(2943);
	v->a[102835] = 1;
	v->a[102836] = sym__expression;
	v->a[102837] = actions(1129);
	v->a[102838] = 2;
	v->a[102839] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5142(v);
}

void	small_parse_table_5142(t_small_parse_table_array *v)
{
	v->a[102840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102841] = actions(1165);
	v->a[102842] = 2;
	v->a[102843] = anon_sym_LT_LPAREN;
	v->a[102844] = anon_sym_GT_LPAREN;
	v->a[102845] = actions(1175);
	v->a[102846] = 2;
	v->a[102847] = anon_sym_PLUS_PLUS2;
	v->a[102848] = anon_sym_DASH_DASH2;
	v->a[102849] = actions(1177);
	v->a[102850] = 2;
	v->a[102851] = anon_sym_DASH2;
	v->a[102852] = anon_sym_PLUS2;
	v->a[102853] = actions(1183);
	v->a[102854] = 2;
	v->a[102855] = sym_raw_string;
	v->a[102856] = sym_ansi_c_string;
	v->a[102857] = state(2594);
	v->a[102858] = 6;
	v->a[102859] = sym_binary_expression;
	small_parse_table_5143(v);
}

void	small_parse_table_5143(t_small_parse_table_array *v)
{
	v->a[102860] = sym_ternary_expression;
	v->a[102861] = sym_unary_expression;
	v->a[102862] = sym_postfix_expression;
	v->a[102863] = sym_parenthesized_expression;
	v->a[102864] = sym_concatenation;
	v->a[102865] = state(2456);
	v->a[102866] = 9;
	v->a[102867] = sym_arithmetic_expansion;
	v->a[102868] = sym_brace_expression;
	v->a[102869] = sym_string;
	v->a[102870] = sym_translated_string;
	v->a[102871] = sym_number;
	v->a[102872] = sym_simple_expansion;
	v->a[102873] = sym_expansion;
	v->a[102874] = sym_command_substitution;
	v->a[102875] = sym_process_substitution;
	v->a[102876] = 26;
	v->a[102877] = actions(71);
	v->a[102878] = 1;
	v->a[102879] = sym_comment;
	small_parse_table_5144(v);
}

void	small_parse_table_5144(t_small_parse_table_array *v)
{
	v->a[102880] = actions(1131);
	v->a[102881] = 1;
	v->a[102882] = anon_sym_LPAREN;
	v->a[102883] = actions(1141);
	v->a[102884] = 1;
	v->a[102885] = anon_sym_DOLLAR_LBRACK;
	v->a[102886] = actions(1145);
	v->a[102887] = 1;
	v->a[102888] = anon_sym_DOLLAR;
	v->a[102889] = actions(1149);
	v->a[102890] = 1;
	v->a[102891] = anon_sym_DQUOTE;
	v->a[102892] = actions(1153);
	v->a[102893] = 1;
	v->a[102894] = aux_sym_number_token1;
	v->a[102895] = actions(1155);
	v->a[102896] = 1;
	v->a[102897] = aux_sym_number_token2;
	v->a[102898] = actions(1157);
	v->a[102899] = 1;
	small_parse_table_5145(v);
}

/* EOF small_parse_table_1028.c */
