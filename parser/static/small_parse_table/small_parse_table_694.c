/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_694.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3470(t_small_parse_table_array *v)
{
	v->a[69400] = sym_heredoc_redirect;
	v->a[69401] = aux_sym_redirected_statement_repeat1;
	v->a[69402] = actions(2158);
	v->a[69403] = 8;
	v->a[69404] = anon_sym_LT;
	v->a[69405] = anon_sym_GT;
	v->a[69406] = anon_sym_GT_GT;
	v->a[69407] = anon_sym_AMP_GT;
	v->a[69408] = anon_sym_AMP_GT_GT;
	v->a[69409] = anon_sym_LT_AMP;
	v->a[69410] = anon_sym_GT_AMP;
	v->a[69411] = anon_sym_GT_PIPE;
	v->a[69412] = 13;
	v->a[69413] = actions(3);
	v->a[69414] = 1;
	v->a[69415] = sym_comment;
	v->a[69416] = actions(807);
	v->a[69417] = 1;
	v->a[69418] = anon_sym_PIPE;
	v->a[69419] = actions(840);
	small_parse_table_3471(v);
}

void	small_parse_table_3471(t_small_parse_table_array *v)
{
	v->a[69420] = 1;
	v->a[69421] = anon_sym_BQUOTE;
	v->a[69422] = actions(2164);
	v->a[69423] = 1;
	v->a[69424] = sym_file_descriptor;
	v->a[69425] = actions(2240);
	v->a[69426] = 1;
	v->a[69427] = anon_sym_SEMI_SEMI;
	v->a[69428] = actions(2242);
	v->a[69429] = 1;
	v->a[69430] = aux_sym_heredoc_redirect_token1;
	v->a[69431] = actions(2244);
	v->a[69432] = 1;
	v->a[69433] = anon_sym_AMP;
	v->a[69434] = actions(2246);
	v->a[69435] = 1;
	v->a[69436] = anon_sym_SEMI;
	v->a[69437] = actions(861);
	v->a[69438] = 2;
	v->a[69439] = anon_sym_LT_LT;
	small_parse_table_3472(v);
}

void	small_parse_table_3472(t_small_parse_table_array *v)
{
	v->a[69440] = anon_sym_LT_LT_DASH;
	v->a[69441] = actions(1032);
	v->a[69442] = 2;
	v->a[69443] = anon_sym_AMP_AMP;
	v->a[69444] = anon_sym_PIPE_PIPE;
	v->a[69445] = actions(2160);
	v->a[69446] = 2;
	v->a[69447] = anon_sym_LT_AMP_DASH;
	v->a[69448] = anon_sym_GT_AMP_DASH;
	v->a[69449] = state(1297);
	v->a[69450] = 3;
	v->a[69451] = sym_file_redirect;
	v->a[69452] = sym_heredoc_redirect;
	v->a[69453] = aux_sym_redirected_statement_repeat1;
	v->a[69454] = actions(2158);
	v->a[69455] = 8;
	v->a[69456] = anon_sym_LT;
	v->a[69457] = anon_sym_GT;
	v->a[69458] = anon_sym_GT_GT;
	v->a[69459] = anon_sym_AMP_GT;
	small_parse_table_3473(v);
}

void	small_parse_table_3473(t_small_parse_table_array *v)
{
	v->a[69460] = anon_sym_AMP_GT_GT;
	v->a[69461] = anon_sym_LT_AMP;
	v->a[69462] = anon_sym_GT_AMP;
	v->a[69463] = anon_sym_GT_PIPE;
	v->a[69464] = 6;
	v->a[69465] = actions(3);
	v->a[69466] = 1;
	v->a[69467] = sym_comment;
	v->a[69468] = actions(2128);
	v->a[69469] = 1;
	v->a[69470] = aux_sym_concatenation_token1;
	v->a[69471] = actions(2130);
	v->a[69472] = 1;
	v->a[69473] = sym__concat;
	v->a[69474] = state(1280);
	v->a[69475] = 1;
	v->a[69476] = aux_sym_concatenation_repeat1;
	v->a[69477] = actions(1175);
	v->a[69478] = 2;
	v->a[69479] = sym_file_descriptor;
	small_parse_table_3474(v);
}

void	small_parse_table_3474(t_small_parse_table_array *v)
{
	v->a[69480] = sym_variable_name;
	v->a[69481] = actions(1173);
	v->a[69482] = 19;
	v->a[69483] = anon_sym_LT;
	v->a[69484] = anon_sym_GT;
	v->a[69485] = anon_sym_GT_GT;
	v->a[69486] = anon_sym_AMP_GT;
	v->a[69487] = anon_sym_AMP_GT_GT;
	v->a[69488] = anon_sym_LT_AMP;
	v->a[69489] = anon_sym_GT_AMP;
	v->a[69490] = anon_sym_GT_PIPE;
	v->a[69491] = anon_sym_LT_AMP_DASH;
	v->a[69492] = anon_sym_GT_AMP_DASH;
	v->a[69493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69494] = anon_sym_DOLLAR;
	v->a[69495] = anon_sym_DQUOTE;
	v->a[69496] = sym_raw_string;
	v->a[69497] = sym_number;
	v->a[69498] = anon_sym_DOLLAR_LBRACE;
	v->a[69499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3475(v);
}

/* EOF small_parse_table_694.c */
