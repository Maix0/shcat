/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_604.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3020(t_small_parse_table_array *v)
{
	v->a[60400] = 1;
	v->a[60401] = sym_terminator;
	v->a[60402] = actions(754);
	v->a[60403] = 2;
	v->a[60404] = anon_sym_LT_LT;
	v->a[60405] = anon_sym_LT_LT_DASH;
	v->a[60406] = actions(783);
	v->a[60407] = 2;
	v->a[60408] = anon_sym_AMP_AMP;
	v->a[60409] = anon_sym_PIPE_PIPE;
	v->a[60410] = actions(2027);
	v->a[60411] = 2;
	v->a[60412] = anon_sym_LT_AMP_DASH;
	v->a[60413] = anon_sym_GT_AMP_DASH;
	v->a[60414] = actions(781);
	v->a[60415] = 3;
	v->a[60416] = anon_sym_SEMI_SEMI;
	v->a[60417] = anon_sym_AMP;
	v->a[60418] = anon_sym_SEMI;
	v->a[60419] = state(1160);
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = 3;
	v->a[60421] = sym_file_redirect;
	v->a[60422] = sym_heredoc_redirect;
	v->a[60423] = aux_sym_redirected_statement_repeat1;
	v->a[60424] = actions(2025);
	v->a[60425] = 6;
	v->a[60426] = anon_sym_LT;
	v->a[60427] = anon_sym_GT;
	v->a[60428] = anon_sym_GT_GT;
	v->a[60429] = anon_sym_LT_AMP;
	v->a[60430] = anon_sym_GT_AMP;
	v->a[60431] = anon_sym_GT_PIPE;
	v->a[60432] = 12;
	v->a[60433] = actions(3);
	v->a[60434] = 1;
	v->a[60435] = sym_comment;
	v->a[60436] = actions(682);
	v->a[60437] = 1;
	v->a[60438] = anon_sym_PIPE;
	v->a[60439] = actions(779);
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = 1;
	v->a[60441] = ts_builtin_sym_end;
	v->a[60442] = actions(2029);
	v->a[60443] = 1;
	v->a[60444] = aux_sym_heredoc_redirect_token1;
	v->a[60445] = actions(2031);
	v->a[60446] = 1;
	v->a[60447] = sym_file_descriptor;
	v->a[60448] = state(801);
	v->a[60449] = 1;
	v->a[60450] = sym_terminator;
	v->a[60451] = actions(754);
	v->a[60452] = 2;
	v->a[60453] = anon_sym_LT_LT;
	v->a[60454] = anon_sym_LT_LT_DASH;
	v->a[60455] = actions(783);
	v->a[60456] = 2;
	v->a[60457] = anon_sym_AMP_AMP;
	v->a[60458] = anon_sym_PIPE_PIPE;
	v->a[60459] = actions(2027);
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = 2;
	v->a[60461] = anon_sym_LT_AMP_DASH;
	v->a[60462] = anon_sym_GT_AMP_DASH;
	v->a[60463] = actions(781);
	v->a[60464] = 3;
	v->a[60465] = anon_sym_SEMI_SEMI;
	v->a[60466] = anon_sym_AMP;
	v->a[60467] = anon_sym_SEMI;
	v->a[60468] = state(1160);
	v->a[60469] = 3;
	v->a[60470] = sym_file_redirect;
	v->a[60471] = sym_heredoc_redirect;
	v->a[60472] = aux_sym_redirected_statement_repeat1;
	v->a[60473] = actions(2025);
	v->a[60474] = 6;
	v->a[60475] = anon_sym_LT;
	v->a[60476] = anon_sym_GT;
	v->a[60477] = anon_sym_GT_GT;
	v->a[60478] = anon_sym_LT_AMP;
	v->a[60479] = anon_sym_GT_AMP;
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = anon_sym_GT_PIPE;
	v->a[60481] = 12;
	v->a[60482] = actions(3);
	v->a[60483] = 1;
	v->a[60484] = sym_comment;
	v->a[60485] = actions(682);
	v->a[60486] = 1;
	v->a[60487] = anon_sym_PIPE;
	v->a[60488] = actions(779);
	v->a[60489] = 1;
	v->a[60490] = ts_builtin_sym_end;
	v->a[60491] = actions(2029);
	v->a[60492] = 1;
	v->a[60493] = aux_sym_heredoc_redirect_token1;
	v->a[60494] = actions(2031);
	v->a[60495] = 1;
	v->a[60496] = sym_file_descriptor;
	v->a[60497] = state(769);
	v->a[60498] = 1;
	v->a[60499] = sym_terminator;
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
