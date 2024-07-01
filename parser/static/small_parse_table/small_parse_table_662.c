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
	v->a[66200] = state(1130);
	v->a[66201] = 1;
	v->a[66202] = aux_sym_concatenation_repeat1;
	v->a[66203] = actions(602);
	v->a[66204] = 2;
	v->a[66205] = sym_file_descriptor;
	v->a[66206] = aux_sym_heredoc_redirect_token1;
	v->a[66207] = actions(604);
	v->a[66208] = 17;
	v->a[66209] = anon_sym_esac;
	v->a[66210] = anon_sym_PIPE;
	v->a[66211] = anon_sym_SEMI_SEMI;
	v->a[66212] = anon_sym_AMP_AMP;
	v->a[66213] = anon_sym_PIPE_PIPE;
	v->a[66214] = anon_sym_LT;
	v->a[66215] = anon_sym_GT;
	v->a[66216] = anon_sym_GT_GT;
	v->a[66217] = anon_sym_LT_AMP;
	v->a[66218] = anon_sym_GT_AMP;
	v->a[66219] = anon_sym_GT_PIPE;
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = anon_sym_LT_AMP_DASH;
	v->a[66221] = anon_sym_GT_AMP_DASH;
	v->a[66222] = anon_sym_LT_LT;
	v->a[66223] = anon_sym_LT_LT_DASH;
	v->a[66224] = anon_sym_AMP;
	v->a[66225] = anon_sym_SEMI;
	v->a[66226] = 12;
	v->a[66227] = actions(3);
	v->a[66228] = 1;
	v->a[66229] = sym_comment;
	v->a[66230] = actions(680);
	v->a[66231] = 1;
	v->a[66232] = anon_sym_SEMI_SEMI;
	v->a[66233] = actions(682);
	v->a[66234] = 1;
	v->a[66235] = anon_sym_PIPE;
	v->a[66236] = actions(2009);
	v->a[66237] = 1;
	v->a[66238] = aux_sym_heredoc_redirect_token1;
	v->a[66239] = actions(2065);
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = 1;
	v->a[66241] = sym_file_descriptor;
	v->a[66242] = state(716);
	v->a[66243] = 1;
	v->a[66244] = sym_terminator;
	v->a[66245] = actions(750);
	v->a[66246] = 2;
	v->a[66247] = anon_sym_AMP;
	v->a[66248] = anon_sym_SEMI;
	v->a[66249] = actions(754);
	v->a[66250] = 2;
	v->a[66251] = anon_sym_LT_LT;
	v->a[66252] = anon_sym_LT_LT_DASH;
	v->a[66253] = actions(924);
	v->a[66254] = 2;
	v->a[66255] = anon_sym_AMP_AMP;
	v->a[66256] = anon_sym_PIPE_PIPE;
	v->a[66257] = actions(2063);
	v->a[66258] = 2;
	v->a[66259] = anon_sym_LT_AMP_DASH;
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = anon_sym_GT_AMP_DASH;
	v->a[66261] = state(1268);
	v->a[66262] = 3;
	v->a[66263] = sym_file_redirect;
	v->a[66264] = sym_heredoc_redirect;
	v->a[66265] = aux_sym_redirected_statement_repeat1;
	v->a[66266] = actions(2061);
	v->a[66267] = 6;
	v->a[66268] = anon_sym_LT;
	v->a[66269] = anon_sym_GT;
	v->a[66270] = anon_sym_GT_GT;
	v->a[66271] = anon_sym_LT_AMP;
	v->a[66272] = anon_sym_GT_AMP;
	v->a[66273] = anon_sym_GT_PIPE;
	v->a[66274] = 6;
	v->a[66275] = actions(3);
	v->a[66276] = 1;
	v->a[66277] = sym_comment;
	v->a[66278] = actions(2021);
	v->a[66279] = 1;
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = aux_sym_concatenation_token1;
	v->a[66281] = actions(2203);
	v->a[66282] = 1;
	v->a[66283] = sym__concat;
	v->a[66284] = state(973);
	v->a[66285] = 1;
	v->a[66286] = aux_sym_concatenation_repeat1;
	v->a[66287] = actions(1085);
	v->a[66288] = 3;
	v->a[66289] = sym_file_descriptor;
	v->a[66290] = sym_variable_name;
	v->a[66291] = aux_sym_heredoc_redirect_token1;
	v->a[66292] = actions(1081);
	v->a[66293] = 16;
	v->a[66294] = anon_sym_PIPE;
	v->a[66295] = anon_sym_SEMI_SEMI;
	v->a[66296] = anon_sym_AMP_AMP;
	v->a[66297] = anon_sym_PIPE_PIPE;
	v->a[66298] = anon_sym_LT;
	v->a[66299] = anon_sym_GT;
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
