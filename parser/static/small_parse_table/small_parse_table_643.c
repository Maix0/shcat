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
	v->a[64300] = sym_number;
	v->a[64301] = sym__comment_word;
	v->a[64302] = sym_word;
	v->a[64303] = state(398);
	v->a[64304] = 5;
	v->a[64305] = sym_arithmetic_expansion;
	v->a[64306] = sym_string;
	v->a[64307] = sym_simple_expansion;
	v->a[64308] = sym_expansion;
	v->a[64309] = sym_command_substitution;
	v->a[64310] = 5;
	v->a[64311] = actions(3);
	v->a[64312] = 1;
	v->a[64313] = sym_comment;
	v->a[64314] = actions(2421);
	v->a[64315] = 1;
	v->a[64316] = anon_sym_PIPE;
	v->a[64317] = state(1266);
	v->a[64318] = 1;
	v->a[64319] = aux_sym_pipeline_repeat1;
	small_parse_table_3216(v);
}

void	small_parse_table_3216(t_small_parse_table_array *v)
{
	v->a[64320] = actions(2306);
	v->a[64321] = 2;
	v->a[64322] = sym_file_descriptor;
	v->a[64323] = aux_sym_heredoc_redirect_token1;
	v->a[64324] = actions(2310);
	v->a[64325] = 13;
	v->a[64326] = anon_sym_SEMI_SEMI;
	v->a[64327] = anon_sym_AMP_AMP;
	v->a[64328] = anon_sym_PIPE_PIPE;
	v->a[64329] = anon_sym_LT;
	v->a[64330] = anon_sym_GT;
	v->a[64331] = anon_sym_GT_GT;
	v->a[64332] = anon_sym_LT_AMP;
	v->a[64333] = anon_sym_GT_AMP;
	v->a[64334] = anon_sym_GT_PIPE;
	v->a[64335] = anon_sym_LT_GT;
	v->a[64336] = anon_sym_LT_LT;
	v->a[64337] = anon_sym_LT_LT_DASH;
	v->a[64338] = anon_sym_SEMI;
	v->a[64339] = 12;
	small_parse_table_3217(v);
}

void	small_parse_table_3217(t_small_parse_table_array *v)
{
	v->a[64340] = actions(3);
	v->a[64341] = 1;
	v->a[64342] = sym_comment;
	v->a[64343] = actions(1012);
	v->a[64344] = 1;
	v->a[64345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64346] = actions(1014);
	v->a[64347] = 1;
	v->a[64348] = anon_sym_DOLLAR;
	v->a[64349] = actions(1016);
	v->a[64350] = 1;
	v->a[64351] = anon_sym_DQUOTE;
	v->a[64352] = actions(1018);
	v->a[64353] = 1;
	v->a[64354] = anon_sym_DOLLAR_LBRACE;
	v->a[64355] = actions(1020);
	v->a[64356] = 1;
	v->a[64357] = anon_sym_DOLLAR_LPAREN;
	v->a[64358] = actions(1022);
	v->a[64359] = 1;
	small_parse_table_3218(v);
}

void	small_parse_table_3218(t_small_parse_table_array *v)
{
	v->a[64360] = anon_sym_BQUOTE;
	v->a[64361] = actions(2423);
	v->a[64362] = 1;
	v->a[64363] = aux_sym_heredoc_redirect_token1;
	v->a[64364] = state(1250);
	v->a[64365] = 1;
	v->a[64366] = aux_sym__heredoc_command;
	v->a[64367] = state(1722);
	v->a[64368] = 1;
	v->a[64369] = sym_concatenation;
	v->a[64370] = actions(1002);
	v->a[64371] = 3;
	v->a[64372] = sym_raw_string;
	v->a[64373] = sym_number;
	v->a[64374] = sym_word;
	v->a[64375] = state(1516);
	v->a[64376] = 5;
	v->a[64377] = sym_arithmetic_expansion;
	v->a[64378] = sym_string;
	v->a[64379] = sym_simple_expansion;
	small_parse_table_3219(v);
}

void	small_parse_table_3219(t_small_parse_table_array *v)
{
	v->a[64380] = sym_expansion;
	v->a[64381] = sym_command_substitution;
	v->a[64382] = 8;
	v->a[64383] = actions(3);
	v->a[64384] = 1;
	v->a[64385] = sym_comment;
	v->a[64386] = actions(782);
	v->a[64387] = 1;
	v->a[64388] = anon_sym_PIPE;
	v->a[64389] = actions(2427);
	v->a[64390] = 1;
	v->a[64391] = aux_sym_heredoc_redirect_token1;
	v->a[64392] = actions(2429);
	v->a[64393] = 1;
	v->a[64394] = sym_file_descriptor;
	v->a[64395] = actions(790);
	v->a[64396] = 2;
	v->a[64397] = anon_sym_LT_LT;
	v->a[64398] = anon_sym_LT_LT_DASH;
	v->a[64399] = actions(1328);
	small_parse_table_3220(v);
}

/* EOF small_parse_table_643.c */
