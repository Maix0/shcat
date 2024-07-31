/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_483.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2415(t_small_parse_table_array *v)
{
	v->a[48300] = actions(858);
	v->a[48301] = 2;
	v->a[48302] = anon_sym_SEMI_SEMI;
	v->a[48303] = anon_sym_SEMI;
	v->a[48304] = actions(860);
	v->a[48305] = 2;
	v->a[48306] = anon_sym_AMP_AMP;
	v->a[48307] = anon_sym_PIPE_PIPE;
	v->a[48308] = state(918);
	v->a[48309] = 3;
	v->a[48310] = sym_file_redirect;
	v->a[48311] = sym_heredoc_redirect;
	v->a[48312] = aux_sym_redirected_statement_repeat1;
	v->a[48313] = actions(1597);
	v->a[48314] = 7;
	v->a[48315] = anon_sym_LT;
	v->a[48316] = anon_sym_GT;
	v->a[48317] = anon_sym_GT_GT;
	v->a[48318] = anon_sym_LT_AMP;
	v->a[48319] = anon_sym_GT_AMP;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = anon_sym_GT_PIPE;
	v->a[48321] = anon_sym_LT_GT;
	v->a[48322] = 9;
	v->a[48323] = actions(3);
	v->a[48324] = 1;
	v->a[48325] = sym_comment;
	v->a[48326] = actions(842);
	v->a[48327] = 1;
	v->a[48328] = anon_sym_BQUOTE;
	v->a[48329] = actions(1591);
	v->a[48330] = 1;
	v->a[48331] = aux_sym_heredoc_redirect_token1;
	v->a[48332] = state(654);
	v->a[48333] = 1;
	v->a[48334] = sym_terminator;
	v->a[48335] = actions(850);
	v->a[48336] = 2;
	v->a[48337] = anon_sym_LT_LT;
	v->a[48338] = anon_sym_LT_LT_DASH;
	v->a[48339] = actions(858);
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = 2;
	v->a[48341] = anon_sym_SEMI_SEMI;
	v->a[48342] = anon_sym_SEMI;
	v->a[48343] = actions(909);
	v->a[48344] = 2;
	v->a[48345] = anon_sym_AMP_AMP;
	v->a[48346] = anon_sym_PIPE_PIPE;
	v->a[48347] = state(970);
	v->a[48348] = 3;
	v->a[48349] = sym_file_redirect;
	v->a[48350] = sym_heredoc_redirect;
	v->a[48351] = aux_sym_redirected_statement_repeat1;
	v->a[48352] = actions(1589);
	v->a[48353] = 7;
	v->a[48354] = anon_sym_LT;
	v->a[48355] = anon_sym_GT;
	v->a[48356] = anon_sym_GT_GT;
	v->a[48357] = anon_sym_LT_AMP;
	v->a[48358] = anon_sym_GT_AMP;
	v->a[48359] = anon_sym_GT_PIPE;
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = anon_sym_LT_GT;
	v->a[48361] = 10;
	v->a[48362] = actions(3);
	v->a[48363] = 1;
	v->a[48364] = sym_comment;
	v->a[48365] = actions(746);
	v->a[48366] = 1;
	v->a[48367] = anon_sym_PIPE;
	v->a[48368] = actions(842);
	v->a[48369] = 1;
	v->a[48370] = anon_sym_SEMI_SEMI;
	v->a[48371] = actions(858);
	v->a[48372] = 1;
	v->a[48373] = anon_sym_SEMI;
	v->a[48374] = actions(1591);
	v->a[48375] = 1;
	v->a[48376] = aux_sym_heredoc_redirect_token1;
	v->a[48377] = state(531);
	v->a[48378] = 1;
	v->a[48379] = sym_terminator;
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = actions(850);
	v->a[48381] = 2;
	v->a[48382] = anon_sym_LT_LT;
	v->a[48383] = anon_sym_LT_LT_DASH;
	v->a[48384] = actions(898);
	v->a[48385] = 2;
	v->a[48386] = anon_sym_AMP_AMP;
	v->a[48387] = anon_sym_PIPE_PIPE;
	v->a[48388] = state(984);
	v->a[48389] = 3;
	v->a[48390] = sym_file_redirect;
	v->a[48391] = sym_heredoc_redirect;
	v->a[48392] = aux_sym_redirected_statement_repeat1;
	v->a[48393] = actions(1676);
	v->a[48394] = 7;
	v->a[48395] = anon_sym_LT;
	v->a[48396] = anon_sym_GT;
	v->a[48397] = anon_sym_GT_GT;
	v->a[48398] = anon_sym_LT_AMP;
	v->a[48399] = anon_sym_GT_AMP;
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
