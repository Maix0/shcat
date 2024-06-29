/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_674.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3370(t_small_parse_table_array *v)
{
	v->a[67400] = aux_sym_heredoc_redirect_token1;
	v->a[67401] = actions(2066);
	v->a[67402] = 1;
	v->a[67403] = sym_file_descriptor;
	v->a[67404] = state(719);
	v->a[67405] = 1;
	v->a[67406] = sym_terminator;
	v->a[67407] = actions(800);
	v->a[67408] = 2;
	v->a[67409] = anon_sym_AMP;
	v->a[67410] = anon_sym_SEMI;
	v->a[67411] = actions(804);
	v->a[67412] = 2;
	v->a[67413] = anon_sym_LT_LT;
	v->a[67414] = anon_sym_LT_LT_DASH;
	v->a[67415] = actions(893);
	v->a[67416] = 2;
	v->a[67417] = anon_sym_AMP_AMP;
	v->a[67418] = anon_sym_PIPE_PIPE;
	v->a[67419] = actions(2064);
	small_parse_table_3371(v);
}

void	small_parse_table_3371(t_small_parse_table_array *v)
{
	v->a[67420] = 2;
	v->a[67421] = anon_sym_LT_AMP_DASH;
	v->a[67422] = anon_sym_GT_AMP_DASH;
	v->a[67423] = state(1256);
	v->a[67424] = 3;
	v->a[67425] = sym_file_redirect;
	v->a[67426] = sym_heredoc_redirect;
	v->a[67427] = aux_sym_redirected_statement_repeat1;
	v->a[67428] = actions(2062);
	v->a[67429] = 8;
	v->a[67430] = anon_sym_LT;
	v->a[67431] = anon_sym_GT;
	v->a[67432] = anon_sym_GT_GT;
	v->a[67433] = anon_sym_AMP_GT;
	v->a[67434] = anon_sym_AMP_GT_GT;
	v->a[67435] = anon_sym_LT_AMP;
	v->a[67436] = anon_sym_GT_AMP;
	v->a[67437] = anon_sym_GT_PIPE;
	v->a[67438] = 11;
	v->a[67439] = actions(3);
	small_parse_table_3372(v);
}

void	small_parse_table_3372(t_small_parse_table_array *v)
{
	v->a[67440] = 1;
	v->a[67441] = sym_comment;
	v->a[67442] = actions(766);
	v->a[67443] = 1;
	v->a[67444] = anon_sym_PIPE;
	v->a[67445] = actions(2031);
	v->a[67446] = 1;
	v->a[67447] = aux_sym_heredoc_redirect_token1;
	v->a[67448] = actions(2066);
	v->a[67449] = 1;
	v->a[67450] = sym_file_descriptor;
	v->a[67451] = state(825);
	v->a[67452] = 1;
	v->a[67453] = sym_terminator;
	v->a[67454] = actions(804);
	v->a[67455] = 2;
	v->a[67456] = anon_sym_LT_LT;
	v->a[67457] = anon_sym_LT_LT_DASH;
	v->a[67458] = actions(893);
	v->a[67459] = 2;
	small_parse_table_3373(v);
}

void	small_parse_table_3373(t_small_parse_table_array *v)
{
	v->a[67460] = anon_sym_AMP_AMP;
	v->a[67461] = anon_sym_PIPE_PIPE;
	v->a[67462] = actions(2064);
	v->a[67463] = 2;
	v->a[67464] = anon_sym_LT_AMP_DASH;
	v->a[67465] = anon_sym_GT_AMP_DASH;
	v->a[67466] = actions(800);
	v->a[67467] = 3;
	v->a[67468] = anon_sym_SEMI_SEMI;
	v->a[67469] = anon_sym_AMP;
	v->a[67470] = anon_sym_SEMI;
	v->a[67471] = state(1256);
	v->a[67472] = 3;
	v->a[67473] = sym_file_redirect;
	v->a[67474] = sym_heredoc_redirect;
	v->a[67475] = aux_sym_redirected_statement_repeat1;
	v->a[67476] = actions(2062);
	v->a[67477] = 8;
	v->a[67478] = anon_sym_LT;
	v->a[67479] = anon_sym_GT;
	small_parse_table_3374(v);
}

void	small_parse_table_3374(t_small_parse_table_array *v)
{
	v->a[67480] = anon_sym_GT_GT;
	v->a[67481] = anon_sym_AMP_GT;
	v->a[67482] = anon_sym_AMP_GT_GT;
	v->a[67483] = anon_sym_LT_AMP;
	v->a[67484] = anon_sym_GT_AMP;
	v->a[67485] = anon_sym_GT_PIPE;
	v->a[67486] = 5;
	v->a[67487] = actions(3);
	v->a[67488] = 1;
	v->a[67489] = sym_comment;
	v->a[67490] = actions(2162);
	v->a[67491] = 1;
	v->a[67492] = sym_variable_name;
	v->a[67493] = state(1163);
	v->a[67494] = 2;
	v->a[67495] = sym_variable_assignment;
	v->a[67496] = aux_sym__variable_assignments_repeat1;
	v->a[67497] = actions(2057);
	v->a[67498] = 3;
	v->a[67499] = sym_file_descriptor;
	small_parse_table_3375(v);
}

/* EOF small_parse_table_674.c */
