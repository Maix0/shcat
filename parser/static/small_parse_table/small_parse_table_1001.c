/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1001.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5005(t_small_parse_table_array *v)
{
	v->a[100100] = actions(5649);
	v->a[100101] = 1;
	v->a[100102] = sym__special_character;
	v->a[100103] = actions(5651);
	v->a[100104] = 1;
	v->a[100105] = anon_sym_DQUOTE;
	v->a[100106] = actions(5655);
	v->a[100107] = 1;
	v->a[100108] = aux_sym_number_token1;
	v->a[100109] = actions(5657);
	v->a[100110] = 1;
	v->a[100111] = aux_sym_number_token2;
	v->a[100112] = actions(5659);
	v->a[100113] = 1;
	v->a[100114] = anon_sym_DOLLAR_LBRACE;
	v->a[100115] = actions(5661);
	v->a[100116] = 1;
	v->a[100117] = anon_sym_DOLLAR_LPAREN;
	v->a[100118] = actions(5663);
	v->a[100119] = 1;
	small_parse_table_5006(v);
}

void	small_parse_table_5006(t_small_parse_table_array *v)
{
	v->a[100120] = anon_sym_BQUOTE;
	v->a[100121] = actions(5665);
	v->a[100122] = 1;
	v->a[100123] = anon_sym_DOLLAR_BQUOTE;
	v->a[100124] = actions(5667);
	v->a[100125] = 1;
	v->a[100126] = sym__comment_word;
	v->a[100127] = actions(5669);
	v->a[100128] = 1;
	v->a[100129] = sym__empty_value;
	v->a[100130] = actions(5671);
	v->a[100131] = 1;
	v->a[100132] = sym__brace_start;
	v->a[100133] = state(2662);
	v->a[100134] = 1;
	v->a[100135] = aux_sym__literal_repeat1;
	v->a[100136] = state(2710);
	v->a[100137] = 1;
	v->a[100138] = sym_concatenation;
	v->a[100139] = actions(5653);
	small_parse_table_5007(v);
}

void	small_parse_table_5007(t_small_parse_table_array *v)
{
	v->a[100140] = 2;
	v->a[100141] = sym_test_operator;
	v->a[100142] = sym_raw_string;
	v->a[100143] = state(2598);
	v->a[100144] = 7;
	v->a[100145] = sym_arithmetic_expansion;
	v->a[100146] = sym_brace_expression;
	v->a[100147] = sym_string;
	v->a[100148] = sym_number;
	v->a[100149] = sym_simple_expansion;
	v->a[100150] = sym_expansion;
	v->a[100151] = sym_command_substitution;
	v->a[100152] = 5;
	v->a[100153] = actions(3);
	v->a[100154] = 1;
	v->a[100155] = sym_comment;
	v->a[100156] = actions(5673);
	v->a[100157] = 1;
	v->a[100158] = sym__special_character;
	v->a[100159] = state(2084);
	small_parse_table_5008(v);
}

void	small_parse_table_5008(t_small_parse_table_array *v)
{
	v->a[100160] = 1;
	v->a[100161] = aux_sym__literal_repeat1;
	v->a[100162] = actions(3197);
	v->a[100163] = 2;
	v->a[100164] = sym_file_descriptor;
	v->a[100165] = aux_sym_heredoc_redirect_token1;
	v->a[100166] = actions(3195);
	v->a[100167] = 21;
	v->a[100168] = anon_sym_PIPE;
	v->a[100169] = anon_sym_SEMI_SEMI;
	v->a[100170] = anon_sym_SEMI_AMP;
	v->a[100171] = anon_sym_SEMI_SEMI_AMP;
	v->a[100172] = anon_sym_PIPE_AMP;
	v->a[100173] = anon_sym_AMP_AMP;
	v->a[100174] = anon_sym_PIPE_PIPE;
	v->a[100175] = anon_sym_LT;
	v->a[100176] = anon_sym_GT;
	v->a[100177] = anon_sym_GT_GT;
	v->a[100178] = anon_sym_AMP_GT;
	v->a[100179] = anon_sym_AMP_GT_GT;
	small_parse_table_5009(v);
}

void	small_parse_table_5009(t_small_parse_table_array *v)
{
	v->a[100180] = anon_sym_LT_AMP;
	v->a[100181] = anon_sym_GT_AMP;
	v->a[100182] = anon_sym_GT_PIPE;
	v->a[100183] = anon_sym_LT_AMP_DASH;
	v->a[100184] = anon_sym_GT_AMP_DASH;
	v->a[100185] = anon_sym_LT_LT;
	v->a[100186] = anon_sym_LT_LT_DASH;
	v->a[100187] = anon_sym_AMP;
	v->a[100188] = anon_sym_SEMI;
	v->a[100189] = 3;
	v->a[100190] = actions(3);
	v->a[100191] = 1;
	v->a[100192] = sym_comment;
	v->a[100193] = actions(2654);
	v->a[100194] = 3;
	v->a[100195] = sym_file_descriptor;
	v->a[100196] = sym__concat;
	v->a[100197] = aux_sym_heredoc_redirect_token1;
	v->a[100198] = actions(2652);
	v->a[100199] = 22;
	small_parse_table_5010(v);
}

/* EOF small_parse_table_1001.c */
