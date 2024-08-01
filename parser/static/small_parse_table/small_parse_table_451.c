/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_451.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2255(t_small_parse_table_array *v)
{
	v->a[45100] = anon_sym_PIPE_PIPE;
	v->a[45101] = actions(1924);
	v->a[45102] = 3;
	v->a[45103] = anon_sym_LT;
	v->a[45104] = anon_sym_GT;
	v->a[45105] = anon_sym_GT_GT;
	v->a[45106] = state(1040);
	v->a[45107] = 3;
	v->a[45108] = sym_file_redirect;
	v->a[45109] = sym_heredoc_redirect;
	v->a[45110] = aux_sym_redirected_statement_repeat1;
	v->a[45111] = 5;
	v->a[45112] = actions(3);
	v->a[45113] = 1;
	v->a[45114] = sym_comment;
	v->a[45115] = actions(1976);
	v->a[45116] = 1;
	v->a[45117] = anon_sym_PIPE;
	v->a[45118] = state(1385);
	v->a[45119] = 1;
	small_parse_table_2256(v);
}

void	small_parse_table_2256(t_small_parse_table_array *v)
{
	v->a[45120] = aux_sym_pipeline_repeat1;
	v->a[45121] = actions(1974);
	v->a[45122] = 2;
	v->a[45123] = ts_builtin_sym_end;
	v->a[45124] = aux_sym_heredoc_redirect_token1;
	v->a[45125] = actions(1979);
	v->a[45126] = 10;
	v->a[45127] = anon_sym_RPAREN;
	v->a[45128] = anon_sym_SEMI_SEMI;
	v->a[45129] = anon_sym_AMP_AMP;
	v->a[45130] = anon_sym_PIPE_PIPE;
	v->a[45131] = anon_sym_LT;
	v->a[45132] = anon_sym_GT;
	v->a[45133] = anon_sym_GT_GT;
	v->a[45134] = anon_sym_LT_LT;
	v->a[45135] = anon_sym_BQUOTE;
	v->a[45136] = anon_sym_SEMI;
	v->a[45137] = 10;
	v->a[45138] = actions(3);
	v->a[45139] = 1;
	small_parse_table_2257(v);
}

void	small_parse_table_2257(t_small_parse_table_array *v)
{
	v->a[45140] = sym_comment;
	v->a[45141] = actions(580);
	v->a[45142] = 1;
	v->a[45143] = anon_sym_PIPE;
	v->a[45144] = actions(591);
	v->a[45145] = 1;
	v->a[45146] = anon_sym_SEMI_SEMI;
	v->a[45147] = actions(593);
	v->a[45148] = 1;
	v->a[45149] = anon_sym_SEMI;
	v->a[45150] = actions(597);
	v->a[45151] = 1;
	v->a[45152] = anon_sym_LT_LT;
	v->a[45153] = actions(1870);
	v->a[45154] = 1;
	v->a[45155] = aux_sym_heredoc_redirect_token1;
	v->a[45156] = state(357);
	v->a[45157] = 1;
	v->a[45158] = sym_terminator;
	v->a[45159] = actions(769);
	small_parse_table_2258(v);
}

void	small_parse_table_2258(t_small_parse_table_array *v)
{
	v->a[45160] = 2;
	v->a[45161] = anon_sym_AMP_AMP;
	v->a[45162] = anon_sym_PIPE_PIPE;
	v->a[45163] = actions(1924);
	v->a[45164] = 3;
	v->a[45165] = anon_sym_LT;
	v->a[45166] = anon_sym_GT;
	v->a[45167] = anon_sym_GT_GT;
	v->a[45168] = state(1040);
	v->a[45169] = 3;
	v->a[45170] = sym_file_redirect;
	v->a[45171] = sym_heredoc_redirect;
	v->a[45172] = aux_sym_redirected_statement_repeat1;
	v->a[45173] = 9;
	v->a[45174] = actions(3);
	v->a[45175] = 1;
	v->a[45176] = sym_comment;
	v->a[45177] = actions(580);
	v->a[45178] = 1;
	v->a[45179] = anon_sym_PIPE;
	small_parse_table_2259(v);
}

void	small_parse_table_2259(t_small_parse_table_array *v)
{
	v->a[45180] = actions(597);
	v->a[45181] = 1;
	v->a[45182] = anon_sym_LT_LT;
	v->a[45183] = actions(1981);
	v->a[45184] = 1;
	v->a[45185] = aux_sym_heredoc_redirect_token1;
	v->a[45186] = state(438);
	v->a[45187] = 1;
	v->a[45188] = sym_terminator;
	v->a[45189] = actions(767);
	v->a[45190] = 2;
	v->a[45191] = anon_sym_SEMI_SEMI;
	v->a[45192] = anon_sym_SEMI;
	v->a[45193] = actions(769);
	v->a[45194] = 2;
	v->a[45195] = anon_sym_AMP_AMP;
	v->a[45196] = anon_sym_PIPE_PIPE;
	v->a[45197] = actions(1924);
	v->a[45198] = 3;
	v->a[45199] = anon_sym_LT;
	small_parse_table_2260(v);
}

/* EOF small_parse_table_451.c */
