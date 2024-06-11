/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_713.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3565(t_small_parse_table_array *v)
{
	v->a[71300] = 1;
	v->a[71301] = ts_builtin_sym_end;
	v->a[71302] = actions(2075);
	v->a[71303] = 1;
	v->a[71304] = sym_file_descriptor;
	v->a[71305] = actions(2480);
	v->a[71306] = 1;
	v->a[71307] = anon_sym_SEMI_SEMI;
	v->a[71308] = actions(2482);
	v->a[71309] = 1;
	v->a[71310] = aux_sym_heredoc_redirect_token1;
	v->a[71311] = actions(2484);
	v->a[71312] = 1;
	v->a[71313] = anon_sym_AMP;
	v->a[71314] = actions(2486);
	v->a[71315] = 1;
	v->a[71316] = anon_sym_SEMI;
	v->a[71317] = actions(861);
	v->a[71318] = 2;
	v->a[71319] = anon_sym_LT_LT;
	small_parse_table_3566(v);
}

void	small_parse_table_3566(t_small_parse_table_array *v)
{
	v->a[71320] = anon_sym_LT_LT_DASH;
	v->a[71321] = actions(934);
	v->a[71322] = 2;
	v->a[71323] = anon_sym_AMP_AMP;
	v->a[71324] = anon_sym_PIPE_PIPE;
	v->a[71325] = actions(2067);
	v->a[71326] = 2;
	v->a[71327] = anon_sym_LT_AMP_DASH;
	v->a[71328] = anon_sym_GT_AMP_DASH;
	v->a[71329] = state(1289);
	v->a[71330] = 3;
	v->a[71331] = sym_file_redirect;
	v->a[71332] = sym_heredoc_redirect;
	v->a[71333] = aux_sym_redirected_statement_repeat1;
	v->a[71334] = actions(2065);
	v->a[71335] = 8;
	v->a[71336] = anon_sym_LT;
	v->a[71337] = anon_sym_GT;
	v->a[71338] = anon_sym_GT_GT;
	v->a[71339] = anon_sym_AMP_GT;
	small_parse_table_3567(v);
}

void	small_parse_table_3567(t_small_parse_table_array *v)
{
	v->a[71340] = anon_sym_AMP_GT_GT;
	v->a[71341] = anon_sym_LT_AMP;
	v->a[71342] = anon_sym_GT_AMP;
	v->a[71343] = anon_sym_GT_PIPE;
	v->a[71344] = 13;
	v->a[71345] = actions(3);
	v->a[71346] = 1;
	v->a[71347] = sym_comment;
	v->a[71348] = actions(807);
	v->a[71349] = 1;
	v->a[71350] = anon_sym_PIPE;
	v->a[71351] = actions(951);
	v->a[71352] = 1;
	v->a[71353] = ts_builtin_sym_end;
	v->a[71354] = actions(2075);
	v->a[71355] = 1;
	v->a[71356] = sym_file_descriptor;
	v->a[71357] = actions(2488);
	v->a[71358] = 1;
	v->a[71359] = anon_sym_SEMI_SEMI;
	small_parse_table_3568(v);
}

void	small_parse_table_3568(t_small_parse_table_array *v)
{
	v->a[71360] = actions(2490);
	v->a[71361] = 1;
	v->a[71362] = aux_sym_heredoc_redirect_token1;
	v->a[71363] = actions(2492);
	v->a[71364] = 1;
	v->a[71365] = anon_sym_AMP;
	v->a[71366] = actions(2494);
	v->a[71367] = 1;
	v->a[71368] = anon_sym_SEMI;
	v->a[71369] = actions(861);
	v->a[71370] = 2;
	v->a[71371] = anon_sym_LT_LT;
	v->a[71372] = anon_sym_LT_LT_DASH;
	v->a[71373] = actions(934);
	v->a[71374] = 2;
	v->a[71375] = anon_sym_AMP_AMP;
	v->a[71376] = anon_sym_PIPE_PIPE;
	v->a[71377] = actions(2067);
	v->a[71378] = 2;
	v->a[71379] = anon_sym_LT_AMP_DASH;
	small_parse_table_3569(v);
}

void	small_parse_table_3569(t_small_parse_table_array *v)
{
	v->a[71380] = anon_sym_GT_AMP_DASH;
	v->a[71381] = state(1289);
	v->a[71382] = 3;
	v->a[71383] = sym_file_redirect;
	v->a[71384] = sym_heredoc_redirect;
	v->a[71385] = aux_sym_redirected_statement_repeat1;
	v->a[71386] = actions(2065);
	v->a[71387] = 8;
	v->a[71388] = anon_sym_LT;
	v->a[71389] = anon_sym_GT;
	v->a[71390] = anon_sym_GT_GT;
	v->a[71391] = anon_sym_AMP_GT;
	v->a[71392] = anon_sym_AMP_GT_GT;
	v->a[71393] = anon_sym_LT_AMP;
	v->a[71394] = anon_sym_GT_AMP;
	v->a[71395] = anon_sym_GT_PIPE;
	v->a[71396] = 13;
	v->a[71397] = actions(3);
	v->a[71398] = 1;
	v->a[71399] = sym_comment;
	small_parse_table_3570(v);
}

/* EOF small_parse_table_713.c */
