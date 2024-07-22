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
	v->a[60400] = actions(784);
	v->a[60401] = 1;
	v->a[60402] = anon_sym_SEMI_SEMI;
	v->a[60403] = actions(786);
	v->a[60404] = 1;
	v->a[60405] = anon_sym_SEMI;
	v->a[60406] = actions(1888);
	v->a[60407] = 1;
	v->a[60408] = aux_sym_heredoc_redirect_token1;
	v->a[60409] = actions(1945);
	v->a[60410] = 1;
	v->a[60411] = sym_file_descriptor;
	v->a[60412] = state(586);
	v->a[60413] = 1;
	v->a[60414] = sym_terminator;
	v->a[60415] = actions(790);
	v->a[60416] = 2;
	v->a[60417] = anon_sym_LT_LT;
	v->a[60418] = anon_sym_LT_LT_DASH;
	v->a[60419] = actions(1028);
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = 2;
	v->a[60421] = anon_sym_AMP_AMP;
	v->a[60422] = anon_sym_PIPE_PIPE;
	v->a[60423] = state(1194);
	v->a[60424] = 3;
	v->a[60425] = sym_file_redirect;
	v->a[60426] = sym_heredoc_redirect;
	v->a[60427] = aux_sym_redirected_statement_repeat1;
	v->a[60428] = actions(1941);
	v->a[60429] = 7;
	v->a[60430] = anon_sym_LT;
	v->a[60431] = anon_sym_GT;
	v->a[60432] = anon_sym_GT_GT;
	v->a[60433] = anon_sym_LT_AMP;
	v->a[60434] = anon_sym_GT_AMP;
	v->a[60435] = anon_sym_GT_PIPE;
	v->a[60436] = anon_sym_LT_GT;
	v->a[60437] = 5;
	v->a[60438] = actions(3);
	v->a[60439] = 1;
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = sym_comment;
	v->a[60441] = actions(2051);
	v->a[60442] = 1;
	v->a[60443] = sym_variable_name;
	v->a[60444] = actions(1955);
	v->a[60445] = 2;
	v->a[60446] = sym_file_descriptor;
	v->a[60447] = aux_sym_heredoc_redirect_token1;
	v->a[60448] = state(1111);
	v->a[60449] = 2;
	v->a[60450] = sym_variable_assignment;
	v->a[60451] = aux_sym__variable_assignments_repeat1;
	v->a[60452] = actions(1953);
	v->a[60453] = 15;
	v->a[60454] = anon_sym_PIPE;
	v->a[60455] = anon_sym_RPAREN;
	v->a[60456] = anon_sym_SEMI_SEMI;
	v->a[60457] = anon_sym_AMP_AMP;
	v->a[60458] = anon_sym_PIPE_PIPE;
	v->a[60459] = anon_sym_LT;
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = anon_sym_GT;
	v->a[60461] = anon_sym_GT_GT;
	v->a[60462] = anon_sym_LT_AMP;
	v->a[60463] = anon_sym_GT_AMP;
	v->a[60464] = anon_sym_GT_PIPE;
	v->a[60465] = anon_sym_LT_GT;
	v->a[60466] = anon_sym_LT_LT;
	v->a[60467] = anon_sym_LT_LT_DASH;
	v->a[60468] = anon_sym_SEMI;
	v->a[60469] = 11;
	v->a[60470] = actions(3);
	v->a[60471] = 1;
	v->a[60472] = sym_comment;
	v->a[60473] = actions(782);
	v->a[60474] = 1;
	v->a[60475] = anon_sym_PIPE;
	v->a[60476] = actions(784);
	v->a[60477] = 1;
	v->a[60478] = anon_sym_SEMI_SEMI;
	v->a[60479] = actions(786);
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = 1;
	v->a[60481] = anon_sym_SEMI;
	v->a[60482] = actions(1888);
	v->a[60483] = 1;
	v->a[60484] = aux_sym_heredoc_redirect_token1;
	v->a[60485] = actions(1945);
	v->a[60486] = 1;
	v->a[60487] = sym_file_descriptor;
	v->a[60488] = state(582);
	v->a[60489] = 1;
	v->a[60490] = sym_terminator;
	v->a[60491] = actions(790);
	v->a[60492] = 2;
	v->a[60493] = anon_sym_LT_LT;
	v->a[60494] = anon_sym_LT_LT_DASH;
	v->a[60495] = actions(1028);
	v->a[60496] = 2;
	v->a[60497] = anon_sym_AMP_AMP;
	v->a[60498] = anon_sym_PIPE_PIPE;
	v->a[60499] = state(1194);
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
