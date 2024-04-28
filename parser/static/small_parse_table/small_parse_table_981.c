/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_981.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4905(t_small_parse_table_array *v)
{
	v->a[98100] = anon_sym_PLUS_PLUS2;
	v->a[98101] = anon_sym_DASH_DASH2;
	v->a[98102] = actions(185);
	v->a[98103] = 2;
	v->a[98104] = anon_sym_DASH2;
	v->a[98105] = anon_sym_PLUS2;
	v->a[98106] = actions(352);
	v->a[98107] = 2;
	v->a[98108] = anon_sym_LPAREN_LPAREN;
	v->a[98109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98110] = actions(373);
	v->a[98111] = 2;
	v->a[98112] = sym_raw_string;
	v->a[98113] = sym_ansi_c_string;
	v->a[98114] = actions(387);
	v->a[98115] = 2;
	v->a[98116] = anon_sym_LT_LPAREN;
	v->a[98117] = anon_sym_GT_LPAREN;
	v->a[98118] = state(3071);
	v->a[98119] = 6;
	small_parse_table_4906(v);
}

void	small_parse_table_4906(t_small_parse_table_array *v)
{
	v->a[98120] = sym_binary_expression;
	v->a[98121] = sym_ternary_expression;
	v->a[98122] = sym_unary_expression;
	v->a[98123] = sym_postfix_expression;
	v->a[98124] = sym_parenthesized_expression;
	v->a[98125] = sym_concatenation;
	v->a[98126] = state(2521);
	v->a[98127] = 9;
	v->a[98128] = sym_arithmetic_expansion;
	v->a[98129] = sym_brace_expression;
	v->a[98130] = sym_string;
	v->a[98131] = sym_translated_string;
	v->a[98132] = sym_number;
	v->a[98133] = sym_simple_expansion;
	v->a[98134] = sym_expansion;
	v->a[98135] = sym_command_substitution;
	v->a[98136] = sym_process_substitution;
	v->a[98137] = 26;
	v->a[98138] = actions(71);
	v->a[98139] = 1;
	small_parse_table_4907(v);
}

void	small_parse_table_4907(t_small_parse_table_array *v)
{
	v->a[98140] = sym_comment;
	v->a[98141] = actions(187);
	v->a[98142] = 1;
	v->a[98143] = anon_sym_TILDE;
	v->a[98144] = actions(350);
	v->a[98145] = 1;
	v->a[98146] = sym_word;
	v->a[98147] = actions(359);
	v->a[98148] = 1;
	v->a[98149] = anon_sym_LPAREN;
	v->a[98150] = actions(361);
	v->a[98151] = 1;
	v->a[98152] = anon_sym_BANG;
	v->a[98153] = actions(363);
	v->a[98154] = 1;
	v->a[98155] = anon_sym_DOLLAR_LBRACK;
	v->a[98156] = actions(367);
	v->a[98157] = 1;
	v->a[98158] = anon_sym_DOLLAR;
	v->a[98159] = actions(371);
	small_parse_table_4908(v);
}

void	small_parse_table_4908(t_small_parse_table_array *v)
{
	v->a[98160] = 1;
	v->a[98161] = anon_sym_DQUOTE;
	v->a[98162] = actions(375);
	v->a[98163] = 1;
	v->a[98164] = aux_sym_number_token1;
	v->a[98165] = actions(377);
	v->a[98166] = 1;
	v->a[98167] = aux_sym_number_token2;
	v->a[98168] = actions(379);
	v->a[98169] = 1;
	v->a[98170] = anon_sym_DOLLAR_LBRACE;
	v->a[98171] = actions(381);
	v->a[98172] = 1;
	v->a[98173] = anon_sym_DOLLAR_LPAREN;
	v->a[98174] = actions(385);
	v->a[98175] = 1;
	v->a[98176] = anon_sym_DOLLAR_BQUOTE;
	v->a[98177] = actions(389);
	v->a[98178] = 1;
	v->a[98179] = sym_test_operator;
	small_parse_table_4909(v);
}

void	small_parse_table_4909(t_small_parse_table_array *v)
{
	v->a[98180] = actions(391);
	v->a[98181] = 1;
	v->a[98182] = sym__brace_start;
	v->a[98183] = actions(5807);
	v->a[98184] = 1;
	v->a[98185] = sym__special_character;
	v->a[98186] = actions(5809);
	v->a[98187] = 1;
	v->a[98188] = anon_sym_BQUOTE;
	v->a[98189] = state(2641);
	v->a[98190] = 1;
	v->a[98191] = aux_sym__literal_repeat1;
	v->a[98192] = state(2966);
	v->a[98193] = 1;
	v->a[98194] = sym__expression;
	v->a[98195] = actions(183);
	v->a[98196] = 2;
	v->a[98197] = anon_sym_PLUS_PLUS2;
	v->a[98198] = anon_sym_DASH_DASH2;
	v->a[98199] = actions(185);
	small_parse_table_4910(v);
}

/* EOF small_parse_table_981.c */
