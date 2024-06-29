/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_662.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3310(t_small_parse_table_array *v)
{
	v->a[66200] = anon_sym_PIPE_PIPE;
	v->a[66201] = anon_sym_LT;
	v->a[66202] = anon_sym_GT;
	v->a[66203] = anon_sym_GT_GT;
	v->a[66204] = anon_sym_AMP_GT;
	v->a[66205] = anon_sym_AMP_GT_GT;
	v->a[66206] = anon_sym_LT_AMP;
	v->a[66207] = anon_sym_GT_AMP;
	v->a[66208] = anon_sym_GT_PIPE;
	v->a[66209] = anon_sym_LT_AMP_DASH;
	v->a[66210] = anon_sym_GT_AMP_DASH;
	v->a[66211] = anon_sym_LT_LT;
	v->a[66212] = anon_sym_LT_LT_DASH;
	v->a[66213] = anon_sym_AMP;
	v->a[66214] = aux_sym_concatenation_token1;
	v->a[66215] = anon_sym_SEMI;
	v->a[66216] = 8;
	v->a[66217] = actions(3);
	v->a[66218] = 1;
	v->a[66219] = sym_comment;
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = actions(2019);
	v->a[66221] = 1;
	v->a[66222] = sym_file_descriptor;
	v->a[66223] = actions(804);
	v->a[66224] = 2;
	v->a[66225] = anon_sym_LT_LT;
	v->a[66226] = anon_sym_LT_LT_DASH;
	v->a[66227] = actions(2015);
	v->a[66228] = 2;
	v->a[66229] = anon_sym_LT_AMP_DASH;
	v->a[66230] = anon_sym_GT_AMP_DASH;
	v->a[66231] = actions(2121);
	v->a[66232] = 2;
	v->a[66233] = ts_builtin_sym_end;
	v->a[66234] = aux_sym_heredoc_redirect_token1;
	v->a[66235] = state(1164);
	v->a[66236] = 3;
	v->a[66237] = sym_file_redirect;
	v->a[66238] = sym_heredoc_redirect;
	v->a[66239] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = actions(2119);
	v->a[66241] = 6;
	v->a[66242] = anon_sym_PIPE;
	v->a[66243] = anon_sym_SEMI_SEMI;
	v->a[66244] = anon_sym_AMP_AMP;
	v->a[66245] = anon_sym_PIPE_PIPE;
	v->a[66246] = anon_sym_AMP;
	v->a[66247] = anon_sym_SEMI;
	v->a[66248] = actions(2013);
	v->a[66249] = 8;
	v->a[66250] = anon_sym_LT;
	v->a[66251] = anon_sym_GT;
	v->a[66252] = anon_sym_GT_GT;
	v->a[66253] = anon_sym_AMP_GT;
	v->a[66254] = anon_sym_AMP_GT_GT;
	v->a[66255] = anon_sym_LT_AMP;
	v->a[66256] = anon_sym_GT_AMP;
	v->a[66257] = anon_sym_GT_PIPE;
	v->a[66258] = 6;
	v->a[66259] = actions(3);
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = 1;
	v->a[66261] = sym_comment;
	v->a[66262] = actions(2101);
	v->a[66263] = 1;
	v->a[66264] = aux_sym_concatenation_token1;
	v->a[66265] = actions(2103);
	v->a[66266] = 1;
	v->a[66267] = sym__concat;
	v->a[66268] = state(1129);
	v->a[66269] = 1;
	v->a[66270] = aux_sym_concatenation_repeat1;
	v->a[66271] = actions(538);
	v->a[66272] = 3;
	v->a[66273] = sym_file_descriptor;
	v->a[66274] = ts_builtin_sym_end;
	v->a[66275] = aux_sym_heredoc_redirect_token1;
	v->a[66276] = actions(540);
	v->a[66277] = 18;
	v->a[66278] = anon_sym_PIPE;
	v->a[66279] = anon_sym_SEMI_SEMI;
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = anon_sym_AMP_AMP;
	v->a[66281] = anon_sym_PIPE_PIPE;
	v->a[66282] = anon_sym_LT;
	v->a[66283] = anon_sym_GT;
	v->a[66284] = anon_sym_GT_GT;
	v->a[66285] = anon_sym_AMP_GT;
	v->a[66286] = anon_sym_AMP_GT_GT;
	v->a[66287] = anon_sym_LT_AMP;
	v->a[66288] = anon_sym_GT_AMP;
	v->a[66289] = anon_sym_GT_PIPE;
	v->a[66290] = anon_sym_LT_AMP_DASH;
	v->a[66291] = anon_sym_GT_AMP_DASH;
	v->a[66292] = anon_sym_LT_LT;
	v->a[66293] = anon_sym_LT_LT_DASH;
	v->a[66294] = anon_sym_AMP;
	v->a[66295] = anon_sym_SEMI;
	v->a[66296] = 11;
	v->a[66297] = actions(3);
	v->a[66298] = 1;
	v->a[66299] = sym_comment;
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
