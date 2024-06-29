/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_643.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3215(t_small_parse_table_array *v)
{
	v->a[64300] = actions(766);
	v->a[64301] = 1;
	v->a[64302] = anon_sym_PIPE;
	v->a[64303] = actions(840);
	v->a[64304] = 1;
	v->a[64305] = ts_builtin_sym_end;
	v->a[64306] = actions(2017);
	v->a[64307] = 1;
	v->a[64308] = aux_sym_heredoc_redirect_token1;
	v->a[64309] = actions(2019);
	v->a[64310] = 1;
	v->a[64311] = sym_file_descriptor;
	v->a[64312] = state(791);
	v->a[64313] = 1;
	v->a[64314] = sym_terminator;
	v->a[64315] = actions(804);
	v->a[64316] = 2;
	v->a[64317] = anon_sym_LT_LT;
	v->a[64318] = anon_sym_LT_LT_DASH;
	v->a[64319] = actions(835);
	small_parse_table_3216(v);
}

void	small_parse_table_3216(t_small_parse_table_array *v)
{
	v->a[64320] = 2;
	v->a[64321] = anon_sym_AMP_AMP;
	v->a[64322] = anon_sym_PIPE_PIPE;
	v->a[64323] = actions(2015);
	v->a[64324] = 2;
	v->a[64325] = anon_sym_LT_AMP_DASH;
	v->a[64326] = anon_sym_GT_AMP_DASH;
	v->a[64327] = actions(833);
	v->a[64328] = 3;
	v->a[64329] = anon_sym_SEMI_SEMI;
	v->a[64330] = anon_sym_AMP;
	v->a[64331] = anon_sym_SEMI;
	v->a[64332] = state(1133);
	v->a[64333] = 3;
	v->a[64334] = sym_file_redirect;
	v->a[64335] = sym_heredoc_redirect;
	v->a[64336] = aux_sym_redirected_statement_repeat1;
	v->a[64337] = actions(2013);
	v->a[64338] = 8;
	v->a[64339] = anon_sym_LT;
	small_parse_table_3217(v);
}

void	small_parse_table_3217(t_small_parse_table_array *v)
{
	v->a[64340] = anon_sym_GT;
	v->a[64341] = anon_sym_GT_GT;
	v->a[64342] = anon_sym_AMP_GT;
	v->a[64343] = anon_sym_AMP_GT_GT;
	v->a[64344] = anon_sym_LT_AMP;
	v->a[64345] = anon_sym_GT_AMP;
	v->a[64346] = anon_sym_GT_PIPE;
	v->a[64347] = 3;
	v->a[64348] = actions(3);
	v->a[64349] = 1;
	v->a[64350] = sym_comment;
	v->a[64351] = actions(1088);
	v->a[64352] = 4;
	v->a[64353] = sym_file_descriptor;
	v->a[64354] = sym__concat;
	v->a[64355] = ts_builtin_sym_end;
	v->a[64356] = aux_sym_heredoc_redirect_token1;
	v->a[64357] = actions(1086);
	v->a[64358] = 21;
	v->a[64359] = anon_sym_PIPE;
	small_parse_table_3218(v);
}

void	small_parse_table_3218(t_small_parse_table_array *v)
{
	v->a[64360] = anon_sym_RPAREN;
	v->a[64361] = anon_sym_SEMI_SEMI;
	v->a[64362] = anon_sym_AMP_AMP;
	v->a[64363] = anon_sym_PIPE_PIPE;
	v->a[64364] = anon_sym_LT;
	v->a[64365] = anon_sym_GT;
	v->a[64366] = anon_sym_GT_GT;
	v->a[64367] = anon_sym_AMP_GT;
	v->a[64368] = anon_sym_AMP_GT_GT;
	v->a[64369] = anon_sym_LT_AMP;
	v->a[64370] = anon_sym_GT_AMP;
	v->a[64371] = anon_sym_GT_PIPE;
	v->a[64372] = anon_sym_LT_AMP_DASH;
	v->a[64373] = anon_sym_GT_AMP_DASH;
	v->a[64374] = anon_sym_LT_LT;
	v->a[64375] = anon_sym_LT_LT_DASH;
	v->a[64376] = anon_sym_AMP;
	v->a[64377] = aux_sym_concatenation_token1;
	v->a[64378] = anon_sym_BQUOTE;
	v->a[64379] = anon_sym_SEMI;
	small_parse_table_3219(v);
}

void	small_parse_table_3219(t_small_parse_table_array *v)
{
	v->a[64380] = 12;
	v->a[64381] = actions(3);
	v->a[64382] = 1;
	v->a[64383] = sym_comment;
	v->a[64384] = actions(766);
	v->a[64385] = 1;
	v->a[64386] = anon_sym_PIPE;
	v->a[64387] = actions(2003);
	v->a[64388] = 1;
	v->a[64389] = aux_sym_heredoc_redirect_token1;
	v->a[64390] = actions(2005);
	v->a[64391] = 1;
	v->a[64392] = sym_file_descriptor;
	v->a[64393] = state(688);
	v->a[64394] = 1;
	v->a[64395] = sym_terminator;
	v->a[64396] = actions(768);
	v->a[64397] = 2;
	v->a[64398] = anon_sym_AMP_AMP;
	v->a[64399] = anon_sym_PIPE_PIPE;
	small_parse_table_3220(v);
}

/* EOF small_parse_table_643.c */
