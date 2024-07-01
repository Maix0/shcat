/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_554.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2770(t_small_parse_table_array *v)
{
	v->a[55400] = 1;
	v->a[55401] = sym_file_descriptor;
	v->a[55402] = state(799);
	v->a[55403] = 1;
	v->a[55404] = sym_terminator;
	v->a[55405] = actions(744);
	v->a[55406] = 2;
	v->a[55407] = anon_sym_LT_LT;
	v->a[55408] = anon_sym_LT_LT_DASH;
	v->a[55409] = actions(990);
	v->a[55410] = 2;
	v->a[55411] = anon_sym_AMP_AMP;
	v->a[55412] = anon_sym_PIPE_PIPE;
	v->a[55413] = actions(740);
	v->a[55414] = 3;
	v->a[55415] = anon_sym_SEMI_SEMI;
	v->a[55416] = anon_sym_AMP;
	v->a[55417] = anon_sym_SEMI;
	v->a[55418] = state(1059);
	v->a[55419] = 3;
	small_parse_table_2771(v);
}

void	small_parse_table_2771(t_small_parse_table_array *v)
{
	v->a[55420] = sym_file_redirect;
	v->a[55421] = sym_heredoc_redirect;
	v->a[55422] = aux_sym_redirected_statement_repeat1;
	v->a[55423] = actions(1863);
	v->a[55424] = 7;
	v->a[55425] = anon_sym_LT;
	v->a[55426] = anon_sym_GT;
	v->a[55427] = anon_sym_GT_GT;
	v->a[55428] = anon_sym_LT_AMP;
	v->a[55429] = anon_sym_GT_AMP;
	v->a[55430] = anon_sym_GT_PIPE;
	v->a[55431] = anon_sym_LT_GT;
	v->a[55432] = 11;
	v->a[55433] = actions(3);
	v->a[55434] = 1;
	v->a[55435] = sym_comment;
	v->a[55436] = actions(736);
	v->a[55437] = 1;
	v->a[55438] = anon_sym_PIPE;
	v->a[55439] = actions(842);
	small_parse_table_2772(v);
}

void	small_parse_table_2772(t_small_parse_table_array *v)
{
	v->a[55440] = 1;
	v->a[55441] = anon_sym_BQUOTE;
	v->a[55442] = actions(1865);
	v->a[55443] = 1;
	v->a[55444] = aux_sym_heredoc_redirect_token1;
	v->a[55445] = actions(1867);
	v->a[55446] = 1;
	v->a[55447] = sym_file_descriptor;
	v->a[55448] = state(801);
	v->a[55449] = 1;
	v->a[55450] = sym_terminator;
	v->a[55451] = actions(744);
	v->a[55452] = 2;
	v->a[55453] = anon_sym_LT_LT;
	v->a[55454] = anon_sym_LT_LT_DASH;
	v->a[55455] = actions(990);
	v->a[55456] = 2;
	v->a[55457] = anon_sym_AMP_AMP;
	v->a[55458] = anon_sym_PIPE_PIPE;
	v->a[55459] = actions(740);
	small_parse_table_2773(v);
}

void	small_parse_table_2773(t_small_parse_table_array *v)
{
	v->a[55460] = 3;
	v->a[55461] = anon_sym_SEMI_SEMI;
	v->a[55462] = anon_sym_AMP;
	v->a[55463] = anon_sym_SEMI;
	v->a[55464] = state(1059);
	v->a[55465] = 3;
	v->a[55466] = sym_file_redirect;
	v->a[55467] = sym_heredoc_redirect;
	v->a[55468] = aux_sym_redirected_statement_repeat1;
	v->a[55469] = actions(1863);
	v->a[55470] = 7;
	v->a[55471] = anon_sym_LT;
	v->a[55472] = anon_sym_GT;
	v->a[55473] = anon_sym_GT_GT;
	v->a[55474] = anon_sym_LT_AMP;
	v->a[55475] = anon_sym_GT_AMP;
	v->a[55476] = anon_sym_GT_PIPE;
	v->a[55477] = anon_sym_LT_GT;
	v->a[55478] = 11;
	v->a[55479] = actions(3);
	small_parse_table_2774(v);
}

void	small_parse_table_2774(t_small_parse_table_array *v)
{
	v->a[55480] = 1;
	v->a[55481] = sym_comment;
	v->a[55482] = actions(736);
	v->a[55483] = 1;
	v->a[55484] = anon_sym_PIPE;
	v->a[55485] = actions(842);
	v->a[55486] = 1;
	v->a[55487] = anon_sym_BQUOTE;
	v->a[55488] = actions(1865);
	v->a[55489] = 1;
	v->a[55490] = aux_sym_heredoc_redirect_token1;
	v->a[55491] = actions(1867);
	v->a[55492] = 1;
	v->a[55493] = sym_file_descriptor;
	v->a[55494] = state(802);
	v->a[55495] = 1;
	v->a[55496] = sym_terminator;
	v->a[55497] = actions(744);
	v->a[55498] = 2;
	v->a[55499] = anon_sym_LT_LT;
	small_parse_table_2775(v);
}

/* EOF small_parse_table_554.c */
