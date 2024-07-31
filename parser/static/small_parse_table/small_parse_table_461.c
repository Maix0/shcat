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
	v->a[46100] = sym_file_redirect;
	v->a[46101] = sym_heredoc_redirect;
	v->a[46102] = aux_sym_redirected_statement_repeat1;
	v->a[46103] = actions(1603);
	v->a[46104] = 7;
	v->a[46105] = anon_sym_LT;
	v->a[46106] = anon_sym_GT;
	v->a[46107] = anon_sym_GT_GT;
	v->a[46108] = anon_sym_LT_AMP;
	v->a[46109] = anon_sym_GT_AMP;
	v->a[46110] = anon_sym_GT_PIPE;
	v->a[46111] = anon_sym_LT_GT;
	v->a[46112] = 6;
	v->a[46113] = actions(3);
	v->a[46114] = 1;
	v->a[46115] = sym_comment;
	v->a[46116] = actions(1633);
	v->a[46117] = 1;
	v->a[46118] = aux_sym_concatenation_token1;
	v->a[46119] = actions(1635);
	small_parse_table_2306(v);
}

void	small_parse_table_2306(t_small_parse_table_array *v)
{
	v->a[46120] = 1;
	v->a[46121] = sym__concat;
	v->a[46122] = state(828);
	v->a[46123] = 1;
	v->a[46124] = aux_sym_concatenation_repeat1;
	v->a[46125] = actions(1001);
	v->a[46126] = 2;
	v->a[46127] = sym_variable_name;
	v->a[46128] = aux_sym_heredoc_redirect_token1;
	v->a[46129] = actions(997);
	v->a[46130] = 15;
	v->a[46131] = anon_sym_esac;
	v->a[46132] = anon_sym_PIPE;
	v->a[46133] = anon_sym_SEMI_SEMI;
	v->a[46134] = anon_sym_AMP_AMP;
	v->a[46135] = anon_sym_PIPE_PIPE;
	v->a[46136] = anon_sym_LT;
	v->a[46137] = anon_sym_GT;
	v->a[46138] = anon_sym_GT_GT;
	v->a[46139] = anon_sym_LT_AMP;
	small_parse_table_2307(v);
}

void	small_parse_table_2307(t_small_parse_table_array *v)
{
	v->a[46140] = anon_sym_GT_AMP;
	v->a[46141] = anon_sym_GT_PIPE;
	v->a[46142] = anon_sym_LT_GT;
	v->a[46143] = anon_sym_LT_LT;
	v->a[46144] = anon_sym_LT_LT_DASH;
	v->a[46145] = anon_sym_SEMI;
	v->a[46146] = 10;
	v->a[46147] = actions(3);
	v->a[46148] = 1;
	v->a[46149] = sym_comment;
	v->a[46150] = actions(746);
	v->a[46151] = 1;
	v->a[46152] = anon_sym_PIPE;
	v->a[46153] = actions(842);
	v->a[46154] = 1;
	v->a[46155] = anon_sym_BQUOTE;
	v->a[46156] = actions(1591);
	v->a[46157] = 1;
	v->a[46158] = aux_sym_heredoc_redirect_token1;
	v->a[46159] = state(647);
	small_parse_table_2308(v);
}

void	small_parse_table_2308(t_small_parse_table_array *v)
{
	v->a[46160] = 1;
	v->a[46161] = sym_terminator;
	v->a[46162] = actions(850);
	v->a[46163] = 2;
	v->a[46164] = anon_sym_LT_LT;
	v->a[46165] = anon_sym_LT_LT_DASH;
	v->a[46166] = actions(858);
	v->a[46167] = 2;
	v->a[46168] = anon_sym_SEMI_SEMI;
	v->a[46169] = anon_sym_SEMI;
	v->a[46170] = actions(909);
	v->a[46171] = 2;
	v->a[46172] = anon_sym_AMP_AMP;
	v->a[46173] = anon_sym_PIPE_PIPE;
	v->a[46174] = state(970);
	v->a[46175] = 3;
	v->a[46176] = sym_file_redirect;
	v->a[46177] = sym_heredoc_redirect;
	v->a[46178] = aux_sym_redirected_statement_repeat1;
	v->a[46179] = actions(1589);
	small_parse_table_2309(v);
}

void	small_parse_table_2309(t_small_parse_table_array *v)
{
	v->a[46180] = 7;
	v->a[46181] = anon_sym_LT;
	v->a[46182] = anon_sym_GT;
	v->a[46183] = anon_sym_GT_GT;
	v->a[46184] = anon_sym_LT_AMP;
	v->a[46185] = anon_sym_GT_AMP;
	v->a[46186] = anon_sym_GT_PIPE;
	v->a[46187] = anon_sym_LT_GT;
	v->a[46188] = 10;
	v->a[46189] = actions(3);
	v->a[46190] = 1;
	v->a[46191] = sym_comment;
	v->a[46192] = actions(746);
	v->a[46193] = 1;
	v->a[46194] = anon_sym_PIPE;
	v->a[46195] = actions(842);
	v->a[46196] = 1;
	v->a[46197] = anon_sym_BQUOTE;
	v->a[46198] = actions(1591);
	v->a[46199] = 1;
	small_parse_table_2310(v);
}

/* EOF small_parse_table_461.c */
