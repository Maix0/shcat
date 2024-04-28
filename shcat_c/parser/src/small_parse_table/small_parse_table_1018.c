/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1018.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5090(t_small_parse_table_array *v)
{
	v->a[101800] = sym__special_character;
	v->a[101801] = state(2472);
	v->a[101802] = 1;
	v->a[101803] = aux_sym__literal_repeat1;
	v->a[101804] = state(2829);
	v->a[101805] = 1;
	v->a[101806] = sym__expression;
	v->a[101807] = actions(352);
	v->a[101808] = 2;
	v->a[101809] = anon_sym_LPAREN_LPAREN;
	v->a[101810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101811] = actions(387);
	v->a[101812] = 2;
	v->a[101813] = anon_sym_LT_LPAREN;
	v->a[101814] = anon_sym_GT_LPAREN;
	v->a[101815] = actions(1099);
	v->a[101816] = 2;
	v->a[101817] = anon_sym_PLUS_PLUS2;
	v->a[101818] = anon_sym_DASH_DASH2;
	v->a[101819] = actions(1101);
	small_parse_table_5091(v);
}

void	small_parse_table_5091(t_small_parse_table_array *v)
{
	v->a[101820] = 2;
	v->a[101821] = anon_sym_DASH2;
	v->a[101822] = anon_sym_PLUS2;
	v->a[101823] = actions(1109);
	v->a[101824] = 2;
	v->a[101825] = sym_raw_string;
	v->a[101826] = sym_ansi_c_string;
	v->a[101827] = state(2863);
	v->a[101828] = 6;
	v->a[101829] = sym_binary_expression;
	v->a[101830] = sym_ternary_expression;
	v->a[101831] = sym_unary_expression;
	v->a[101832] = sym_postfix_expression;
	v->a[101833] = sym_parenthesized_expression;
	v->a[101834] = sym_concatenation;
	v->a[101835] = state(2451);
	v->a[101836] = 9;
	v->a[101837] = sym_arithmetic_expansion;
	v->a[101838] = sym_brace_expression;
	v->a[101839] = sym_string;
	small_parse_table_5092(v);
}

void	small_parse_table_5092(t_small_parse_table_array *v)
{
	v->a[101840] = sym_translated_string;
	v->a[101841] = sym_number;
	v->a[101842] = sym_simple_expansion;
	v->a[101843] = sym_expansion;
	v->a[101844] = sym_command_substitution;
	v->a[101845] = sym_process_substitution;
	v->a[101846] = 26;
	v->a[101847] = actions(71);
	v->a[101848] = 1;
	v->a[101849] = sym_comment;
	v->a[101850] = actions(363);
	v->a[101851] = 1;
	v->a[101852] = anon_sym_DOLLAR_LBRACK;
	v->a[101853] = actions(367);
	v->a[101854] = 1;
	v->a[101855] = anon_sym_DOLLAR;
	v->a[101856] = actions(371);
	v->a[101857] = 1;
	v->a[101858] = anon_sym_DQUOTE;
	v->a[101859] = actions(375);
	small_parse_table_5093(v);
}

void	small_parse_table_5093(t_small_parse_table_array *v)
{
	v->a[101860] = 1;
	v->a[101861] = aux_sym_number_token1;
	v->a[101862] = actions(377);
	v->a[101863] = 1;
	v->a[101864] = aux_sym_number_token2;
	v->a[101865] = actions(379);
	v->a[101866] = 1;
	v->a[101867] = anon_sym_DOLLAR_LBRACE;
	v->a[101868] = actions(381);
	v->a[101869] = 1;
	v->a[101870] = anon_sym_DOLLAR_LPAREN;
	v->a[101871] = actions(385);
	v->a[101872] = 1;
	v->a[101873] = anon_sym_DOLLAR_BQUOTE;
	v->a[101874] = actions(391);
	v->a[101875] = 1;
	v->a[101876] = sym__brace_start;
	v->a[101877] = actions(1091);
	v->a[101878] = 1;
	v->a[101879] = sym_word;
	small_parse_table_5094(v);
}

void	small_parse_table_5094(t_small_parse_table_array *v)
{
	v->a[101880] = actions(1093);
	v->a[101881] = 1;
	v->a[101882] = anon_sym_LPAREN;
	v->a[101883] = actions(1095);
	v->a[101884] = 1;
	v->a[101885] = anon_sym_BANG;
	v->a[101886] = actions(1103);
	v->a[101887] = 1;
	v->a[101888] = anon_sym_TILDE;
	v->a[101889] = actions(1113);
	v->a[101890] = 1;
	v->a[101891] = sym_test_operator;
	v->a[101892] = actions(5809);
	v->a[101893] = 1;
	v->a[101894] = anon_sym_BQUOTE;
	v->a[101895] = actions(5916);
	v->a[101896] = 1;
	v->a[101897] = sym__special_character;
	v->a[101898] = state(2472);
	v->a[101899] = 1;
	small_parse_table_5095(v);
}

/* EOF small_parse_table_1018.c */
