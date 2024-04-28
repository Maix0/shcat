/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_461.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2305(t_small_parse_table_array *v)
{
	v->a[46100] = sym_command_substitution;
	v->a[46101] = sym_process_substitution;
	v->a[46102] = actions(2500);
	v->a[46103] = 11;
	v->a[46104] = sym_file_descriptor;
	v->a[46105] = anon_sym_PIPE_PIPE;
	v->a[46106] = anon_sym_AMP_AMP;
	v->a[46107] = anon_sym_GT_GT;
	v->a[46108] = anon_sym_PIPE_AMP;
	v->a[46109] = anon_sym_AMP_GT_GT;
	v->a[46110] = anon_sym_GT_PIPE;
	v->a[46111] = anon_sym_LT_AMP_DASH;
	v->a[46112] = anon_sym_GT_AMP_DASH;
	v->a[46113] = anon_sym_LT_LT_DASH;
	v->a[46114] = anon_sym_LT_LT_LT;
	v->a[46115] = 3;
	v->a[46116] = actions(3);
	v->a[46117] = 1;
	v->a[46118] = sym_comment;
	v->a[46119] = actions(1310);
	small_parse_table_2306(v);
}

void	small_parse_table_2306(t_small_parse_table_array *v)
{
	v->a[46120] = 6;
	v->a[46121] = sym_file_descriptor;
	v->a[46122] = sym__concat;
	v->a[46123] = sym_test_operator;
	v->a[46124] = sym__bare_dollar;
	v->a[46125] = sym__brace_start;
	v->a[46126] = aux_sym_heredoc_redirect_token1;
	v->a[46127] = actions(1308);
	v->a[46128] = 42;
	v->a[46129] = anon_sym_LPAREN_LPAREN;
	v->a[46130] = anon_sym_SEMI;
	v->a[46131] = anon_sym_PIPE_PIPE;
	v->a[46132] = anon_sym_AMP_AMP;
	v->a[46133] = anon_sym_PIPE;
	v->a[46134] = anon_sym_AMP;
	v->a[46135] = anon_sym_EQ_EQ;
	v->a[46136] = anon_sym_LT;
	v->a[46137] = anon_sym_GT;
	v->a[46138] = anon_sym_LT_LT;
	v->a[46139] = anon_sym_GT_GT;
	small_parse_table_2307(v);
}

void	small_parse_table_2307(t_small_parse_table_array *v)
{
	v->a[46140] = anon_sym_SEMI_SEMI;
	v->a[46141] = anon_sym_SEMI_AMP;
	v->a[46142] = anon_sym_SEMI_SEMI_AMP;
	v->a[46143] = anon_sym_PIPE_AMP;
	v->a[46144] = anon_sym_EQ_TILDE;
	v->a[46145] = anon_sym_AMP_GT;
	v->a[46146] = anon_sym_AMP_GT_GT;
	v->a[46147] = anon_sym_LT_AMP;
	v->a[46148] = anon_sym_GT_AMP;
	v->a[46149] = anon_sym_GT_PIPE;
	v->a[46150] = anon_sym_LT_AMP_DASH;
	v->a[46151] = anon_sym_GT_AMP_DASH;
	v->a[46152] = anon_sym_LT_LT_DASH;
	v->a[46153] = anon_sym_LT_LT_LT;
	v->a[46154] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46155] = anon_sym_DOLLAR_LBRACK;
	v->a[46156] = aux_sym_concatenation_token1;
	v->a[46157] = anon_sym_DOLLAR;
	v->a[46158] = sym__special_character;
	v->a[46159] = anon_sym_DQUOTE;
	small_parse_table_2308(v);
}

void	small_parse_table_2308(t_small_parse_table_array *v)
{
	v->a[46160] = sym_raw_string;
	v->a[46161] = sym_ansi_c_string;
	v->a[46162] = aux_sym_number_token1;
	v->a[46163] = aux_sym_number_token2;
	v->a[46164] = anon_sym_DOLLAR_LBRACE;
	v->a[46165] = anon_sym_DOLLAR_LPAREN;
	v->a[46166] = anon_sym_BQUOTE;
	v->a[46167] = anon_sym_DOLLAR_BQUOTE;
	v->a[46168] = anon_sym_LT_LPAREN;
	v->a[46169] = anon_sym_GT_LPAREN;
	v->a[46170] = sym_word;
	v->a[46171] = 3;
	v->a[46172] = actions(3);
	v->a[46173] = 1;
	v->a[46174] = sym_comment;
	v->a[46175] = actions(1318);
	v->a[46176] = 7;
	v->a[46177] = sym_file_descriptor;
	v->a[46178] = sym__concat;
	v->a[46179] = sym_test_operator;
	small_parse_table_2309(v);
}

void	small_parse_table_2309(t_small_parse_table_array *v)
{
	v->a[46180] = sym__bare_dollar;
	v->a[46181] = sym__brace_start;
	v->a[46182] = ts_builtin_sym_end;
	v->a[46183] = aux_sym_heredoc_redirect_token1;
	v->a[46184] = actions(1316);
	v->a[46185] = 41;
	v->a[46186] = anon_sym_LPAREN_LPAREN;
	v->a[46187] = anon_sym_SEMI;
	v->a[46188] = anon_sym_PIPE_PIPE;
	v->a[46189] = anon_sym_AMP_AMP;
	v->a[46190] = anon_sym_PIPE;
	v->a[46191] = anon_sym_AMP;
	v->a[46192] = anon_sym_EQ_EQ;
	v->a[46193] = anon_sym_LT;
	v->a[46194] = anon_sym_GT;
	v->a[46195] = anon_sym_LT_LT;
	v->a[46196] = anon_sym_GT_GT;
	v->a[46197] = anon_sym_LPAREN;
	v->a[46198] = anon_sym_SEMI_SEMI;
	v->a[46199] = anon_sym_PIPE_AMP;
	small_parse_table_2310(v);
}

/* EOF small_parse_table_461.c */
