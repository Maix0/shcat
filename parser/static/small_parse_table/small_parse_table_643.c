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
	v->a[64300] = anon_sym_PIPE;
	v->a[64301] = anon_sym_SEMI_SEMI;
	v->a[64302] = anon_sym_AMP_AMP;
	v->a[64303] = anon_sym_PIPE_PIPE;
	v->a[64304] = anon_sym_LT;
	v->a[64305] = anon_sym_GT;
	v->a[64306] = anon_sym_GT_GT;
	v->a[64307] = anon_sym_AMP_GT;
	v->a[64308] = anon_sym_AMP_GT_GT;
	v->a[64309] = anon_sym_LT_AMP;
	v->a[64310] = anon_sym_GT_AMP;
	v->a[64311] = anon_sym_GT_PIPE;
	v->a[64312] = anon_sym_LT_AMP_DASH;
	v->a[64313] = anon_sym_GT_AMP_DASH;
	v->a[64314] = anon_sym_LT_LT;
	v->a[64315] = anon_sym_LT_LT_DASH;
	v->a[64316] = anon_sym_AMP;
	v->a[64317] = anon_sym_SEMI;
	v->a[64318] = 8;
	v->a[64319] = actions(3);
	small_parse_table_3216(v);
}

void	small_parse_table_3216(t_small_parse_table_array *v)
{
	v->a[64320] = 1;
	v->a[64321] = sym_comment;
	v->a[64322] = actions(2277);
	v->a[64323] = 1;
	v->a[64324] = sym_file_descriptor;
	v->a[64325] = actions(1062);
	v->a[64326] = 2;
	v->a[64327] = anon_sym_LT_LT;
	v->a[64328] = anon_sym_LT_LT_DASH;
	v->a[64329] = actions(2273);
	v->a[64330] = 2;
	v->a[64331] = anon_sym_LT_AMP_DASH;
	v->a[64332] = anon_sym_GT_AMP_DASH;
	v->a[64333] = actions(2308);
	v->a[64334] = 2;
	v->a[64335] = ts_builtin_sym_end;
	v->a[64336] = aux_sym_heredoc_redirect_token1;
	v->a[64337] = state(1080);
	v->a[64338] = 3;
	v->a[64339] = sym_file_redirect;
	small_parse_table_3217(v);
}

void	small_parse_table_3217(t_small_parse_table_array *v)
{
	v->a[64340] = sym_heredoc_redirect;
	v->a[64341] = aux_sym_redirected_statement_repeat1;
	v->a[64342] = actions(2302);
	v->a[64343] = 6;
	v->a[64344] = anon_sym_PIPE;
	v->a[64345] = anon_sym_SEMI_SEMI;
	v->a[64346] = anon_sym_AMP_AMP;
	v->a[64347] = anon_sym_PIPE_PIPE;
	v->a[64348] = anon_sym_AMP;
	v->a[64349] = anon_sym_SEMI;
	v->a[64350] = actions(2271);
	v->a[64351] = 8;
	v->a[64352] = anon_sym_LT;
	v->a[64353] = anon_sym_GT;
	v->a[64354] = anon_sym_GT_GT;
	v->a[64355] = anon_sym_AMP_GT;
	v->a[64356] = anon_sym_AMP_GT_GT;
	v->a[64357] = anon_sym_LT_AMP;
	v->a[64358] = anon_sym_GT_AMP;
	v->a[64359] = anon_sym_GT_PIPE;
	small_parse_table_3218(v);
}

void	small_parse_table_3218(t_small_parse_table_array *v)
{
	v->a[64360] = 5;
	v->a[64361] = actions(3);
	v->a[64362] = 1;
	v->a[64363] = sym_comment;
	v->a[64364] = actions(2318);
	v->a[64365] = 1;
	v->a[64366] = sym_variable_name;
	v->a[64367] = state(1074);
	v->a[64368] = 2;
	v->a[64369] = sym_variable_assignment;
	v->a[64370] = aux_sym_variable_assignments_repeat1;
	v->a[64371] = actions(2267);
	v->a[64372] = 3;
	v->a[64373] = sym_file_descriptor;
	v->a[64374] = ts_builtin_sym_end;
	v->a[64375] = aux_sym_heredoc_redirect_token1;
	v->a[64376] = actions(2265);
	v->a[64377] = 18;
	v->a[64378] = anon_sym_PIPE;
	v->a[64379] = anon_sym_SEMI_SEMI;
	small_parse_table_3219(v);
}

void	small_parse_table_3219(t_small_parse_table_array *v)
{
	v->a[64380] = anon_sym_AMP_AMP;
	v->a[64381] = anon_sym_PIPE_PIPE;
	v->a[64382] = anon_sym_LT;
	v->a[64383] = anon_sym_GT;
	v->a[64384] = anon_sym_GT_GT;
	v->a[64385] = anon_sym_AMP_GT;
	v->a[64386] = anon_sym_AMP_GT_GT;
	v->a[64387] = anon_sym_LT_AMP;
	v->a[64388] = anon_sym_GT_AMP;
	v->a[64389] = anon_sym_GT_PIPE;
	v->a[64390] = anon_sym_LT_AMP_DASH;
	v->a[64391] = anon_sym_GT_AMP_DASH;
	v->a[64392] = anon_sym_LT_LT;
	v->a[64393] = anon_sym_LT_LT_DASH;
	v->a[64394] = anon_sym_AMP;
	v->a[64395] = anon_sym_SEMI;
	v->a[64396] = 18;
	v->a[64397] = actions(3);
	v->a[64398] = 1;
	v->a[64399] = sym_comment;
	small_parse_table_3220(v);
}

/* EOF small_parse_table_643.c */
