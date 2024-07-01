/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_734.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3670(t_small_parse_table_array *v)
{
	v->a[73400] = sym_heredoc_redirect;
	v->a[73401] = aux_sym_redirected_statement_repeat1;
	v->a[73402] = actions(2548);
	v->a[73403] = 6;
	v->a[73404] = anon_sym_LT;
	v->a[73405] = anon_sym_GT;
	v->a[73406] = anon_sym_GT_GT;
	v->a[73407] = anon_sym_LT_AMP;
	v->a[73408] = anon_sym_GT_AMP;
	v->a[73409] = anon_sym_GT_PIPE;
	v->a[73410] = 6;
	v->a[73411] = actions(3);
	v->a[73412] = 1;
	v->a[73413] = sym_comment;
	v->a[73414] = actions(2057);
	v->a[73415] = 1;
	v->a[73416] = aux_sym_concatenation_token1;
	v->a[73417] = actions(2557);
	v->a[73418] = 1;
	v->a[73419] = sym__concat;
	small_parse_table_3671(v);
}

void	small_parse_table_3671(t_small_parse_table_array *v)
{
	v->a[73420] = state(978);
	v->a[73421] = 1;
	v->a[73422] = aux_sym_concatenation_repeat1;
	v->a[73423] = actions(1085);
	v->a[73424] = 2;
	v->a[73425] = sym_file_descriptor;
	v->a[73426] = aux_sym_heredoc_redirect_token1;
	v->a[73427] = actions(1081);
	v->a[73428] = 13;
	v->a[73429] = anon_sym_PIPE;
	v->a[73430] = anon_sym_AMP_AMP;
	v->a[73431] = anon_sym_PIPE_PIPE;
	v->a[73432] = anon_sym_LT;
	v->a[73433] = anon_sym_GT;
	v->a[73434] = anon_sym_GT_GT;
	v->a[73435] = anon_sym_LT_AMP;
	v->a[73436] = anon_sym_GT_AMP;
	v->a[73437] = anon_sym_GT_PIPE;
	v->a[73438] = anon_sym_LT_AMP_DASH;
	v->a[73439] = anon_sym_GT_AMP_DASH;
	small_parse_table_3672(v);
}

void	small_parse_table_3672(t_small_parse_table_array *v)
{
	v->a[73440] = anon_sym_LT_LT;
	v->a[73441] = anon_sym_LT_LT_DASH;
	v->a[73442] = 4;
	v->a[73443] = actions(3);
	v->a[73444] = 1;
	v->a[73445] = sym_comment;
	v->a[73446] = actions(984);
	v->a[73447] = 2;
	v->a[73448] = sym_file_descriptor;
	v->a[73449] = aux_sym_heredoc_redirect_token1;
	v->a[73450] = state(1408);
	v->a[73451] = 3;
	v->a[73452] = sym_file_redirect;
	v->a[73453] = sym_heredoc_redirect;
	v->a[73454] = aux_sym_redirected_statement_repeat1;
	v->a[73455] = actions(935);
	v->a[73456] = 13;
	v->a[73457] = anon_sym_PIPE;
	v->a[73458] = anon_sym_AMP_AMP;
	v->a[73459] = anon_sym_PIPE_PIPE;
	small_parse_table_3673(v);
}

void	small_parse_table_3673(t_small_parse_table_array *v)
{
	v->a[73460] = anon_sym_LT;
	v->a[73461] = anon_sym_GT;
	v->a[73462] = anon_sym_GT_GT;
	v->a[73463] = anon_sym_LT_AMP;
	v->a[73464] = anon_sym_GT_AMP;
	v->a[73465] = anon_sym_GT_PIPE;
	v->a[73466] = anon_sym_LT_AMP_DASH;
	v->a[73467] = anon_sym_GT_AMP_DASH;
	v->a[73468] = anon_sym_LT_LT;
	v->a[73469] = anon_sym_LT_LT_DASH;
	v->a[73470] = 9;
	v->a[73471] = actions(3);
	v->a[73472] = 1;
	v->a[73473] = sym_comment;
	v->a[73474] = actions(682);
	v->a[73475] = 1;
	v->a[73476] = anon_sym_PIPE;
	v->a[73477] = actions(2546);
	v->a[73478] = 1;
	v->a[73479] = sym_file_descriptor;
	small_parse_table_3674(v);
}

void	small_parse_table_3674(t_small_parse_table_array *v)
{
	v->a[73480] = actions(2559);
	v->a[73481] = 1;
	v->a[73482] = aux_sym_heredoc_redirect_token1;
	v->a[73483] = actions(754);
	v->a[73484] = 2;
	v->a[73485] = anon_sym_LT_LT;
	v->a[73486] = anon_sym_LT_LT_DASH;
	v->a[73487] = actions(1496);
	v->a[73488] = 2;
	v->a[73489] = anon_sym_AMP_AMP;
	v->a[73490] = anon_sym_PIPE_PIPE;
	v->a[73491] = actions(2542);
	v->a[73492] = 2;
	v->a[73493] = anon_sym_LT_AMP_DASH;
	v->a[73494] = anon_sym_GT_AMP_DASH;
	v->a[73495] = state(1408);
	v->a[73496] = 3;
	v->a[73497] = sym_file_redirect;
	v->a[73498] = sym_heredoc_redirect;
	v->a[73499] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3675(v);
}

/* EOF small_parse_table_734.c */
