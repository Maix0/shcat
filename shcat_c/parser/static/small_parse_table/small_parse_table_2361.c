/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2361.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11805(t_small_parse_table_array *v)
{
	v->a[236100] = anon_sym_PLUS_PLUS2;
	v->a[236101] = anon_sym_DASH_DASH2;
	v->a[236102] = actions(9284);
	v->a[236103] = 2;
	v->a[236104] = anon_sym_DASH2;
	v->a[236105] = anon_sym_PLUS2;
	v->a[236106] = state(2784);
	v->a[236107] = 9;
	v->a[236108] = sym_subscript;
	v->a[236109] = sym__arithmetic_expression;
	v->a[236110] = sym__arithmetic_literal;
	v->a[236111] = sym__arithmetic_parenthesized_expression;
	v->a[236112] = sym_string;
	v->a[236113] = sym_number;
	v->a[236114] = sym_simple_expansion;
	v->a[236115] = sym_expansion;
	v->a[236116] = sym_command_substitution;
	v->a[236117] = 20;
	v->a[236118] = actions(71);
	v->a[236119] = 1;
	small_parse_table_11806(v);
}

void	small_parse_table_11806(t_small_parse_table_array *v)
{
	v->a[236120] = sym_comment;
	v->a[236121] = actions(3787);
	v->a[236122] = 1;
	v->a[236123] = anon_sym_DOLLAR;
	v->a[236124] = actions(3793);
	v->a[236125] = 1;
	v->a[236126] = aux_sym_number_token1;
	v->a[236127] = actions(3795);
	v->a[236128] = 1;
	v->a[236129] = aux_sym_number_token2;
	v->a[236130] = actions(3799);
	v->a[236131] = 1;
	v->a[236132] = anon_sym_DOLLAR_LPAREN;
	v->a[236133] = actions(3809);
	v->a[236134] = 1;
	v->a[236135] = sym__brace_start;
	v->a[236136] = actions(9636);
	v->a[236137] = 1;
	v->a[236138] = anon_sym_DOLLAR_LBRACK;
	v->a[236139] = actions(9640);
	small_parse_table_11807(v);
}

void	small_parse_table_11807(t_small_parse_table_array *v)
{
	v->a[236140] = 1;
	v->a[236141] = anon_sym_DQUOTE;
	v->a[236142] = actions(9644);
	v->a[236143] = 1;
	v->a[236144] = anon_sym_DOLLAR_LBRACE;
	v->a[236145] = actions(9646);
	v->a[236146] = 1;
	v->a[236147] = anon_sym_BQUOTE;
	v->a[236148] = actions(9648);
	v->a[236149] = 1;
	v->a[236150] = anon_sym_DOLLAR_BQUOTE;
	v->a[236151] = actions(11120);
	v->a[236152] = 1;
	v->a[236153] = sym_word;
	v->a[236154] = actions(11122);
	v->a[236155] = 1;
	v->a[236156] = sym__special_character;
	v->a[236157] = actions(11126);
	v->a[236158] = 1;
	v->a[236159] = sym_test_operator;
	small_parse_table_11808(v);
}

void	small_parse_table_11808(t_small_parse_table_array *v)
{
	v->a[236160] = state(4294);
	v->a[236161] = 1;
	v->a[236162] = aux_sym__literal_repeat1;
	v->a[236163] = state(4861);
	v->a[236164] = 1;
	v->a[236165] = sym_concatenation;
	v->a[236166] = actions(9634);
	v->a[236167] = 2;
	v->a[236168] = anon_sym_LPAREN_LPAREN;
	v->a[236169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236170] = actions(9650);
	v->a[236171] = 2;
	v->a[236172] = anon_sym_LT_LPAREN;
	v->a[236173] = anon_sym_GT_LPAREN;
	v->a[236174] = actions(11124);
	v->a[236175] = 2;
	v->a[236176] = sym_raw_string;
	v->a[236177] = sym_ansi_c_string;
	v->a[236178] = state(4463);
	v->a[236179] = 9;
	small_parse_table_11809(v);
}

void	small_parse_table_11809(t_small_parse_table_array *v)
{
	v->a[236180] = sym_arithmetic_expansion;
	v->a[236181] = sym_brace_expression;
	v->a[236182] = sym_string;
	v->a[236183] = sym_translated_string;
	v->a[236184] = sym_number;
	v->a[236185] = sym_simple_expansion;
	v->a[236186] = sym_expansion;
	v->a[236187] = sym_command_substitution;
	v->a[236188] = sym_process_substitution;
	v->a[236189] = 18;
	v->a[236190] = actions(3);
	v->a[236191] = 1;
	v->a[236192] = sym_comment;
	v->a[236193] = actions(3793);
	v->a[236194] = 1;
	v->a[236195] = aux_sym_number_token1;
	v->a[236196] = actions(3795);
	v->a[236197] = 1;
	v->a[236198] = aux_sym_number_token2;
	v->a[236199] = actions(3799);
	small_parse_table_11810(v);
}

/* EOF small_parse_table_2361.c */
