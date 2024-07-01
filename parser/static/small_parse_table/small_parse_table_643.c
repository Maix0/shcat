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
	v->a[64300] = sym_terminator;
	v->a[64301] = actions(680);
	v->a[64302] = 2;
	v->a[64303] = anon_sym_esac;
	v->a[64304] = anon_sym_SEMI_SEMI;
	v->a[64305] = actions(684);
	v->a[64306] = 2;
	v->a[64307] = anon_sym_AMP_AMP;
	v->a[64308] = anon_sym_PIPE_PIPE;
	v->a[64309] = actions(686);
	v->a[64310] = 2;
	v->a[64311] = anon_sym_LT_LT;
	v->a[64312] = anon_sym_LT_LT_DASH;
	v->a[64313] = actions(688);
	v->a[64314] = 2;
	v->a[64315] = anon_sym_AMP;
	v->a[64316] = anon_sym_SEMI;
	v->a[64317] = actions(2015);
	v->a[64318] = 2;
	v->a[64319] = anon_sym_LT_AMP_DASH;
	small_parse_table_3216(v);
}

void	small_parse_table_3216(t_small_parse_table_array *v)
{
	v->a[64320] = anon_sym_GT_AMP_DASH;
	v->a[64321] = state(1176);
	v->a[64322] = 3;
	v->a[64323] = sym_file_redirect;
	v->a[64324] = sym_heredoc_redirect;
	v->a[64325] = aux_sym_redirected_statement_repeat1;
	v->a[64326] = actions(2013);
	v->a[64327] = 6;
	v->a[64328] = anon_sym_LT;
	v->a[64329] = anon_sym_GT;
	v->a[64330] = anon_sym_GT_GT;
	v->a[64331] = anon_sym_LT_AMP;
	v->a[64332] = anon_sym_GT_AMP;
	v->a[64333] = anon_sym_GT_PIPE;
	v->a[64334] = 12;
	v->a[64335] = actions(3);
	v->a[64336] = 1;
	v->a[64337] = sym_comment;
	v->a[64338] = actions(682);
	v->a[64339] = 1;
	small_parse_table_3217(v);
}

void	small_parse_table_3217(t_small_parse_table_array *v)
{
	v->a[64340] = anon_sym_PIPE;
	v->a[64341] = actions(695);
	v->a[64342] = 1;
	v->a[64343] = anon_sym_SEMI_SEMI;
	v->a[64344] = actions(2009);
	v->a[64345] = 1;
	v->a[64346] = aux_sym_heredoc_redirect_token1;
	v->a[64347] = actions(2065);
	v->a[64348] = 1;
	v->a[64349] = sym_file_descriptor;
	v->a[64350] = state(740);
	v->a[64351] = 1;
	v->a[64352] = sym_terminator;
	v->a[64353] = actions(750);
	v->a[64354] = 2;
	v->a[64355] = anon_sym_AMP;
	v->a[64356] = anon_sym_SEMI;
	v->a[64357] = actions(754);
	v->a[64358] = 2;
	v->a[64359] = anon_sym_LT_LT;
	small_parse_table_3218(v);
}

void	small_parse_table_3218(t_small_parse_table_array *v)
{
	v->a[64360] = anon_sym_LT_LT_DASH;
	v->a[64361] = actions(924);
	v->a[64362] = 2;
	v->a[64363] = anon_sym_AMP_AMP;
	v->a[64364] = anon_sym_PIPE_PIPE;
	v->a[64365] = actions(2063);
	v->a[64366] = 2;
	v->a[64367] = anon_sym_LT_AMP_DASH;
	v->a[64368] = anon_sym_GT_AMP_DASH;
	v->a[64369] = state(1268);
	v->a[64370] = 3;
	v->a[64371] = sym_file_redirect;
	v->a[64372] = sym_heredoc_redirect;
	v->a[64373] = aux_sym_redirected_statement_repeat1;
	v->a[64374] = actions(2061);
	v->a[64375] = 6;
	v->a[64376] = anon_sym_LT;
	v->a[64377] = anon_sym_GT;
	v->a[64378] = anon_sym_GT_GT;
	v->a[64379] = anon_sym_LT_AMP;
	small_parse_table_3219(v);
}

void	small_parse_table_3219(t_small_parse_table_array *v)
{
	v->a[64380] = anon_sym_GT_AMP;
	v->a[64381] = anon_sym_GT_PIPE;
	v->a[64382] = 12;
	v->a[64383] = actions(3);
	v->a[64384] = 1;
	v->a[64385] = sym_comment;
	v->a[64386] = actions(682);
	v->a[64387] = 1;
	v->a[64388] = anon_sym_PIPE;
	v->a[64389] = actions(695);
	v->a[64390] = 1;
	v->a[64391] = anon_sym_SEMI_SEMI;
	v->a[64392] = actions(2009);
	v->a[64393] = 1;
	v->a[64394] = aux_sym_heredoc_redirect_token1;
	v->a[64395] = actions(2065);
	v->a[64396] = 1;
	v->a[64397] = sym_file_descriptor;
	v->a[64398] = state(741);
	v->a[64399] = 1;
	small_parse_table_3220(v);
}

/* EOF small_parse_table_643.c */
