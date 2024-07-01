/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_584.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2920(t_small_parse_table_array *v)
{
	v->a[58400] = anon_sym_SEMI_SEMI;
	v->a[58401] = actions(1865);
	v->a[58402] = 1;
	v->a[58403] = aux_sym_heredoc_redirect_token1;
	v->a[58404] = actions(1889);
	v->a[58405] = 1;
	v->a[58406] = sym_file_descriptor;
	v->a[58407] = state(684);
	v->a[58408] = 1;
	v->a[58409] = sym_terminator;
	v->a[58410] = actions(740);
	v->a[58411] = 2;
	v->a[58412] = anon_sym_AMP;
	v->a[58413] = anon_sym_SEMI;
	v->a[58414] = actions(744);
	v->a[58415] = 2;
	v->a[58416] = anon_sym_LT_LT;
	v->a[58417] = anon_sym_LT_LT_DASH;
	v->a[58418] = actions(955);
	v->a[58419] = 2;
	small_parse_table_2921(v);
}

void	small_parse_table_2921(t_small_parse_table_array *v)
{
	v->a[58420] = anon_sym_AMP_AMP;
	v->a[58421] = anon_sym_PIPE_PIPE;
	v->a[58422] = state(1194);
	v->a[58423] = 3;
	v->a[58424] = sym_file_redirect;
	v->a[58425] = sym_heredoc_redirect;
	v->a[58426] = aux_sym_redirected_statement_repeat1;
	v->a[58427] = actions(1887);
	v->a[58428] = 7;
	v->a[58429] = anon_sym_LT;
	v->a[58430] = anon_sym_GT;
	v->a[58431] = anon_sym_GT_GT;
	v->a[58432] = anon_sym_LT_AMP;
	v->a[58433] = anon_sym_GT_AMP;
	v->a[58434] = anon_sym_GT_PIPE;
	v->a[58435] = anon_sym_LT_GT;
	v->a[58436] = 5;
	v->a[58437] = actions(3);
	v->a[58438] = 1;
	v->a[58439] = sym_comment;
	small_parse_table_2922(v);
}

void	small_parse_table_2922(t_small_parse_table_array *v)
{
	v->a[58440] = actions(1936);
	v->a[58441] = 1;
	v->a[58442] = sym_variable_name;
	v->a[58443] = actions(1914);
	v->a[58444] = 2;
	v->a[58445] = sym_file_descriptor;
	v->a[58446] = aux_sym_heredoc_redirect_token1;
	v->a[58447] = state(1044);
	v->a[58448] = 2;
	v->a[58449] = sym_variable_assignment;
	v->a[58450] = aux_sym__variable_assignments_repeat1;
	v->a[58451] = actions(1916);
	v->a[58452] = 16;
	v->a[58453] = anon_sym_PIPE;
	v->a[58454] = anon_sym_RPAREN;
	v->a[58455] = anon_sym_SEMI_SEMI;
	v->a[58456] = anon_sym_AMP_AMP;
	v->a[58457] = anon_sym_PIPE_PIPE;
	v->a[58458] = anon_sym_LT;
	v->a[58459] = anon_sym_GT;
	small_parse_table_2923(v);
}

void	small_parse_table_2923(t_small_parse_table_array *v)
{
	v->a[58460] = anon_sym_GT_GT;
	v->a[58461] = anon_sym_LT_AMP;
	v->a[58462] = anon_sym_GT_AMP;
	v->a[58463] = anon_sym_GT_PIPE;
	v->a[58464] = anon_sym_LT_GT;
	v->a[58465] = anon_sym_LT_LT;
	v->a[58466] = anon_sym_LT_LT_DASH;
	v->a[58467] = anon_sym_AMP;
	v->a[58468] = anon_sym_SEMI;
	v->a[58469] = 5;
	v->a[58470] = actions(3);
	v->a[58471] = 1;
	v->a[58472] = sym_comment;
	v->a[58473] = actions(1939);
	v->a[58474] = 1;
	v->a[58475] = sym_variable_name;
	v->a[58476] = actions(1908);
	v->a[58477] = 2;
	v->a[58478] = sym_file_descriptor;
	v->a[58479] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2924(v);
}

void	small_parse_table_2924(t_small_parse_table_array *v)
{
	v->a[58480] = state(1044);
	v->a[58481] = 2;
	v->a[58482] = sym_variable_assignment;
	v->a[58483] = aux_sym__variable_assignments_repeat1;
	v->a[58484] = actions(1906);
	v->a[58485] = 16;
	v->a[58486] = anon_sym_PIPE;
	v->a[58487] = anon_sym_RPAREN;
	v->a[58488] = anon_sym_SEMI_SEMI;
	v->a[58489] = anon_sym_AMP_AMP;
	v->a[58490] = anon_sym_PIPE_PIPE;
	v->a[58491] = anon_sym_LT;
	v->a[58492] = anon_sym_GT;
	v->a[58493] = anon_sym_GT_GT;
	v->a[58494] = anon_sym_LT_AMP;
	v->a[58495] = anon_sym_GT_AMP;
	v->a[58496] = anon_sym_GT_PIPE;
	v->a[58497] = anon_sym_LT_GT;
	v->a[58498] = anon_sym_LT_LT;
	v->a[58499] = anon_sym_LT_LT_DASH;
	small_parse_table_2925(v);
}

/* EOF small_parse_table_584.c */
