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
	v->a[60401] = aux_sym_heredoc_redirect_token1;
	v->a[60402] = actions(1946);
	v->a[60403] = 1;
	v->a[60404] = sym_file_descriptor;
	v->a[60405] = state(683);
	v->a[60406] = 1;
	v->a[60407] = sym_terminator;
	v->a[60408] = actions(696);
	v->a[60409] = 2;
	v->a[60410] = anon_sym_AMP;
	v->a[60411] = anon_sym_SEMI;
	v->a[60412] = actions(700);
	v->a[60413] = 2;
	v->a[60414] = anon_sym_LT_LT;
	v->a[60415] = anon_sym_LT_LT_DASH;
	v->a[60416] = actions(914);
	v->a[60417] = 2;
	v->a[60418] = anon_sym_AMP_AMP;
	v->a[60419] = anon_sym_PIPE_PIPE;
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = state(1134);
	v->a[60421] = 3;
	v->a[60422] = sym_file_redirect;
	v->a[60423] = sym_heredoc_redirect;
	v->a[60424] = aux_sym_redirected_statement_repeat1;
	v->a[60425] = actions(1942);
	v->a[60426] = 7;
	v->a[60427] = anon_sym_LT;
	v->a[60428] = anon_sym_GT;
	v->a[60429] = anon_sym_GT_GT;
	v->a[60430] = anon_sym_LT_AMP;
	v->a[60431] = anon_sym_GT_AMP;
	v->a[60432] = anon_sym_GT_PIPE;
	v->a[60433] = anon_sym_LT_GT;
	v->a[60434] = 11;
	v->a[60435] = actions(3);
	v->a[60436] = 1;
	v->a[60437] = sym_comment;
	v->a[60438] = actions(692);
	v->a[60439] = 1;
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = anon_sym_PIPE;
	v->a[60441] = actions(724);
	v->a[60442] = 1;
	v->a[60443] = anon_sym_SEMI_SEMI;
	v->a[60444] = actions(1857);
	v->a[60445] = 1;
	v->a[60446] = aux_sym_heredoc_redirect_token1;
	v->a[60447] = actions(1946);
	v->a[60448] = 1;
	v->a[60449] = sym_file_descriptor;
	v->a[60450] = state(692);
	v->a[60451] = 1;
	v->a[60452] = sym_terminator;
	v->a[60453] = actions(696);
	v->a[60454] = 2;
	v->a[60455] = anon_sym_AMP;
	v->a[60456] = anon_sym_SEMI;
	v->a[60457] = actions(700);
	v->a[60458] = 2;
	v->a[60459] = anon_sym_LT_LT;
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = anon_sym_LT_LT_DASH;
	v->a[60461] = actions(914);
	v->a[60462] = 2;
	v->a[60463] = anon_sym_AMP_AMP;
	v->a[60464] = anon_sym_PIPE_PIPE;
	v->a[60465] = state(1134);
	v->a[60466] = 3;
	v->a[60467] = sym_file_redirect;
	v->a[60468] = sym_heredoc_redirect;
	v->a[60469] = aux_sym_redirected_statement_repeat1;
	v->a[60470] = actions(1942);
	v->a[60471] = 7;
	v->a[60472] = anon_sym_LT;
	v->a[60473] = anon_sym_GT;
	v->a[60474] = anon_sym_GT_GT;
	v->a[60475] = anon_sym_LT_AMP;
	v->a[60476] = anon_sym_GT_AMP;
	v->a[60477] = anon_sym_GT_PIPE;
	v->a[60478] = anon_sym_LT_GT;
	v->a[60479] = 11;
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = actions(3);
	v->a[60481] = 1;
	v->a[60482] = sym_comment;
	v->a[60483] = actions(692);
	v->a[60484] = 1;
	v->a[60485] = anon_sym_PIPE;
	v->a[60486] = actions(724);
	v->a[60487] = 1;
	v->a[60488] = anon_sym_SEMI_SEMI;
	v->a[60489] = actions(1857);
	v->a[60490] = 1;
	v->a[60491] = aux_sym_heredoc_redirect_token1;
	v->a[60492] = actions(1946);
	v->a[60493] = 1;
	v->a[60494] = sym_file_descriptor;
	v->a[60495] = state(694);
	v->a[60496] = 1;
	v->a[60497] = sym_terminator;
	v->a[60498] = actions(696);
	v->a[60499] = 2;
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
