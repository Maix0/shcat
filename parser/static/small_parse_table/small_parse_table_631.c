/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_631.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3155(t_small_parse_table_array *v)
{
	v->a[63100] = 5;
	v->a[63101] = sym_file_descriptor;
	v->a[63102] = sym_variable_name;
	v->a[63103] = sym_test_operator;
	v->a[63104] = sym__brace_start;
	v->a[63105] = aux_sym_heredoc_redirect_token1;
	v->a[63106] = actions(1180);
	v->a[63107] = 28;
	v->a[63108] = anon_sym_PIPE;
	v->a[63109] = anon_sym_PIPE_AMP;
	v->a[63110] = anon_sym_AMP_AMP;
	v->a[63111] = anon_sym_PIPE_PIPE;
	v->a[63112] = anon_sym_LT;
	v->a[63113] = anon_sym_GT;
	v->a[63114] = anon_sym_GT_GT;
	v->a[63115] = anon_sym_AMP_GT;
	v->a[63116] = anon_sym_AMP_GT_GT;
	v->a[63117] = anon_sym_LT_AMP;
	v->a[63118] = anon_sym_GT_AMP;
	v->a[63119] = anon_sym_GT_PIPE;
	small_parse_table_3156(v);
}

void	small_parse_table_3156(t_small_parse_table_array *v)
{
	v->a[63120] = anon_sym_LT_AMP_DASH;
	v->a[63121] = anon_sym_GT_AMP_DASH;
	v->a[63122] = anon_sym_LT_LT;
	v->a[63123] = anon_sym_LT_LT_DASH;
	v->a[63124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63125] = anon_sym_DOLLAR;
	v->a[63126] = sym__special_character;
	v->a[63127] = anon_sym_DQUOTE;
	v->a[63128] = sym_raw_string;
	v->a[63129] = aux_sym_number_token1;
	v->a[63130] = aux_sym_number_token2;
	v->a[63131] = anon_sym_DOLLAR_LBRACE;
	v->a[63132] = anon_sym_DOLLAR_LPAREN;
	v->a[63133] = anon_sym_BQUOTE;
	v->a[63134] = anon_sym_DOLLAR_BQUOTE;
	v->a[63135] = sym_word;
	v->a[63136] = 6;
	v->a[63137] = actions(57);
	v->a[63138] = 1;
	v->a[63139] = sym_comment;
	small_parse_table_3157(v);
}

void	small_parse_table_3157(t_small_parse_table_array *v)
{
	v->a[63140] = state(1920);
	v->a[63141] = 1;
	v->a[63142] = aux_sym__literal_repeat1;
	v->a[63143] = state(1368);
	v->a[63144] = 2;
	v->a[63145] = sym_concatenation;
	v->a[63146] = aux_sym_for_statement_repeat1;
	v->a[63147] = state(1800);
	v->a[63148] = 7;
	v->a[63149] = sym_arithmetic_expansion;
	v->a[63150] = sym_brace_expression;
	v->a[63151] = sym_string;
	v->a[63152] = sym_number;
	v->a[63153] = sym_simple_expansion;
	v->a[63154] = sym_expansion;
	v->a[63155] = sym_command_substitution;
	v->a[63156] = actions(1180);
	v->a[63157] = 10;
	v->a[63158] = anon_sym_LT;
	v->a[63159] = anon_sym_GT;
	small_parse_table_3158(v);
}

void	small_parse_table_3158(t_small_parse_table_array *v)
{
	v->a[63160] = anon_sym_AMP_GT;
	v->a[63161] = anon_sym_LT_AMP;
	v->a[63162] = anon_sym_GT_AMP;
	v->a[63163] = anon_sym_DOLLAR;
	v->a[63164] = aux_sym_number_token1;
	v->a[63165] = aux_sym_number_token2;
	v->a[63166] = anon_sym_DOLLAR_LPAREN;
	v->a[63167] = sym_word;
	v->a[63168] = actions(1182);
	v->a[63169] = 16;
	v->a[63170] = sym_file_descriptor;
	v->a[63171] = sym_variable_name;
	v->a[63172] = sym_test_operator;
	v->a[63173] = sym__brace_start;
	v->a[63174] = anon_sym_GT_GT;
	v->a[63175] = anon_sym_AMP_GT_GT;
	v->a[63176] = anon_sym_GT_PIPE;
	v->a[63177] = anon_sym_LT_AMP_DASH;
	v->a[63178] = anon_sym_GT_AMP_DASH;
	v->a[63179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3159(v);
}

void	small_parse_table_3159(t_small_parse_table_array *v)
{
	v->a[63180] = sym__special_character;
	v->a[63181] = anon_sym_DQUOTE;
	v->a[63182] = sym_raw_string;
	v->a[63183] = anon_sym_DOLLAR_LBRACE;
	v->a[63184] = anon_sym_BQUOTE;
	v->a[63185] = anon_sym_DOLLAR_BQUOTE;
	v->a[63186] = 6;
	v->a[63187] = actions(3);
	v->a[63188] = 1;
	v->a[63189] = sym_comment;
	v->a[63190] = actions(3442);
	v->a[63191] = 1;
	v->a[63192] = aux_sym_concatenation_token1;
	v->a[63193] = actions(4069);
	v->a[63194] = 1;
	v->a[63195] = sym__concat;
	v->a[63196] = state(858);
	v->a[63197] = 1;
	v->a[63198] = aux_sym_concatenation_repeat1;
	v->a[63199] = actions(2696);
	small_parse_table_3160(v);
}

/* EOF small_parse_table_631.c */
