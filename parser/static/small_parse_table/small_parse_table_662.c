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
	v->a[66200] = anon_sym_LT_AMP_DASH;
	v->a[66201] = anon_sym_GT_AMP_DASH;
	v->a[66202] = anon_sym_LT_LT;
	v->a[66203] = anon_sym_LT_LT_DASH;
	v->a[66204] = anon_sym_AMP;
	v->a[66205] = anon_sym_SEMI;
	v->a[66206] = 5;
	v->a[66207] = actions(3);
	v->a[66208] = 1;
	v->a[66209] = sym_comment;
	v->a[66210] = actions(1002);
	v->a[66211] = 1;
	v->a[66212] = anon_sym_PIPE;
	v->a[66213] = actions(1071);
	v->a[66214] = 3;
	v->a[66215] = sym_file_descriptor;
	v->a[66216] = ts_builtin_sym_end;
	v->a[66217] = aux_sym_heredoc_redirect_token1;
	v->a[66218] = state(1043);
	v->a[66219] = 3;
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = sym_file_redirect;
	v->a[66221] = sym_heredoc_redirect;
	v->a[66222] = aux_sym_redirected_statement_repeat1;
	v->a[66223] = actions(1004);
	v->a[66224] = 17;
	v->a[66225] = anon_sym_SEMI_SEMI;
	v->a[66226] = anon_sym_AMP_AMP;
	v->a[66227] = anon_sym_PIPE_PIPE;
	v->a[66228] = anon_sym_LT;
	v->a[66229] = anon_sym_GT;
	v->a[66230] = anon_sym_GT_GT;
	v->a[66231] = anon_sym_AMP_GT;
	v->a[66232] = anon_sym_AMP_GT_GT;
	v->a[66233] = anon_sym_LT_AMP;
	v->a[66234] = anon_sym_GT_AMP;
	v->a[66235] = anon_sym_GT_PIPE;
	v->a[66236] = anon_sym_LT_AMP_DASH;
	v->a[66237] = anon_sym_GT_AMP_DASH;
	v->a[66238] = anon_sym_LT_LT;
	v->a[66239] = anon_sym_LT_LT_DASH;
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = anon_sym_AMP;
	v->a[66241] = anon_sym_SEMI;
	v->a[66242] = 5;
	v->a[66243] = actions(3);
	v->a[66244] = 1;
	v->a[66245] = sym_comment;
	v->a[66246] = actions(1002);
	v->a[66247] = 1;
	v->a[66248] = anon_sym_PIPE;
	v->a[66249] = actions(1071);
	v->a[66250] = 2;
	v->a[66251] = sym_file_descriptor;
	v->a[66252] = aux_sym_heredoc_redirect_token1;
	v->a[66253] = state(1035);
	v->a[66254] = 3;
	v->a[66255] = sym_file_redirect;
	v->a[66256] = sym_heredoc_redirect;
	v->a[66257] = aux_sym_redirected_statement_repeat1;
	v->a[66258] = actions(1004);
	v->a[66259] = 18;
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = anon_sym_esac;
	v->a[66261] = anon_sym_SEMI_SEMI;
	v->a[66262] = anon_sym_AMP_AMP;
	v->a[66263] = anon_sym_PIPE_PIPE;
	v->a[66264] = anon_sym_LT;
	v->a[66265] = anon_sym_GT;
	v->a[66266] = anon_sym_GT_GT;
	v->a[66267] = anon_sym_AMP_GT;
	v->a[66268] = anon_sym_AMP_GT_GT;
	v->a[66269] = anon_sym_LT_AMP;
	v->a[66270] = anon_sym_GT_AMP;
	v->a[66271] = anon_sym_GT_PIPE;
	v->a[66272] = anon_sym_LT_AMP_DASH;
	v->a[66273] = anon_sym_GT_AMP_DASH;
	v->a[66274] = anon_sym_LT_LT;
	v->a[66275] = anon_sym_LT_LT_DASH;
	v->a[66276] = anon_sym_AMP;
	v->a[66277] = anon_sym_SEMI;
	v->a[66278] = 3;
	v->a[66279] = actions(3);
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = 1;
	v->a[66281] = sym_comment;
	v->a[66282] = actions(1192);
	v->a[66283] = 3;
	v->a[66284] = sym_file_descriptor;
	v->a[66285] = sym__concat;
	v->a[66286] = sym_variable_name;
	v->a[66287] = actions(1190);
	v->a[66288] = 21;
	v->a[66289] = anon_sym_LT;
	v->a[66290] = anon_sym_GT;
	v->a[66291] = anon_sym_GT_GT;
	v->a[66292] = anon_sym_AMP_GT;
	v->a[66293] = anon_sym_AMP_GT_GT;
	v->a[66294] = anon_sym_LT_AMP;
	v->a[66295] = anon_sym_GT_AMP;
	v->a[66296] = anon_sym_GT_PIPE;
	v->a[66297] = anon_sym_LT_AMP_DASH;
	v->a[66298] = anon_sym_GT_AMP_DASH;
	v->a[66299] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
