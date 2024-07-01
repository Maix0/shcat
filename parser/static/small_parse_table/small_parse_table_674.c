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
	v->a[67400] = anon_sym_PIPE_PIPE;
	v->a[67401] = anon_sym_LT;
	v->a[67402] = anon_sym_GT;
	v->a[67403] = anon_sym_GT_GT;
	v->a[67404] = anon_sym_LT_AMP;
	v->a[67405] = anon_sym_GT_AMP;
	v->a[67406] = anon_sym_GT_PIPE;
	v->a[67407] = anon_sym_LT_AMP_DASH;
	v->a[67408] = anon_sym_GT_AMP_DASH;
	v->a[67409] = anon_sym_LT_LT;
	v->a[67410] = anon_sym_LT_LT_DASH;
	v->a[67411] = anon_sym_AMP;
	v->a[67412] = anon_sym_BQUOTE;
	v->a[67413] = anon_sym_SEMI;
	v->a[67414] = 5;
	v->a[67415] = actions(3);
	v->a[67416] = 1;
	v->a[67417] = sym_comment;
	v->a[67418] = actions(690);
	v->a[67419] = 1;
	small_parse_table_3371(v);
}

void	small_parse_table_3371(t_small_parse_table_array *v)
{
	v->a[67420] = sym_file_descriptor;
	v->a[67421] = actions(692);
	v->a[67422] = 1;
	v->a[67423] = sym_variable_name;
	v->a[67424] = state(1174);
	v->a[67425] = 2;
	v->a[67426] = sym_variable_assignment;
	v->a[67427] = aux_sym__variable_assignments_repeat1;
	v->a[67428] = actions(678);
	v->a[67429] = 17;
	v->a[67430] = anon_sym_LT;
	v->a[67431] = anon_sym_GT;
	v->a[67432] = anon_sym_GT_GT;
	v->a[67433] = anon_sym_LT_AMP;
	v->a[67434] = anon_sym_GT_AMP;
	v->a[67435] = anon_sym_GT_PIPE;
	v->a[67436] = anon_sym_LT_AMP_DASH;
	v->a[67437] = anon_sym_GT_AMP_DASH;
	v->a[67438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67439] = anon_sym_DOLLAR;
	small_parse_table_3372(v);
}

void	small_parse_table_3372(t_small_parse_table_array *v)
{
	v->a[67440] = anon_sym_DQUOTE;
	v->a[67441] = sym_raw_string;
	v->a[67442] = sym_number;
	v->a[67443] = anon_sym_DOLLAR_LBRACE;
	v->a[67444] = anon_sym_DOLLAR_LPAREN;
	v->a[67445] = anon_sym_BQUOTE;
	v->a[67446] = sym_word;
	v->a[67447] = 3;
	v->a[67448] = actions(3);
	v->a[67449] = 1;
	v->a[67450] = sym_comment;
	v->a[67451] = actions(2232);
	v->a[67452] = 3;
	v->a[67453] = sym_file_descriptor;
	v->a[67454] = ts_builtin_sym_end;
	v->a[67455] = aux_sym_heredoc_redirect_token1;
	v->a[67456] = actions(2234);
	v->a[67457] = 18;
	v->a[67458] = anon_sym_PIPE;
	v->a[67459] = anon_sym_RPAREN;
	small_parse_table_3373(v);
}

void	small_parse_table_3373(t_small_parse_table_array *v)
{
	v->a[67460] = anon_sym_SEMI_SEMI;
	v->a[67461] = anon_sym_AMP_AMP;
	v->a[67462] = anon_sym_PIPE_PIPE;
	v->a[67463] = anon_sym_LT;
	v->a[67464] = anon_sym_GT;
	v->a[67465] = anon_sym_GT_GT;
	v->a[67466] = anon_sym_LT_AMP;
	v->a[67467] = anon_sym_GT_AMP;
	v->a[67468] = anon_sym_GT_PIPE;
	v->a[67469] = anon_sym_LT_AMP_DASH;
	v->a[67470] = anon_sym_GT_AMP_DASH;
	v->a[67471] = anon_sym_LT_LT;
	v->a[67472] = anon_sym_LT_LT_DASH;
	v->a[67473] = anon_sym_AMP;
	v->a[67474] = anon_sym_BQUOTE;
	v->a[67475] = anon_sym_SEMI;
	v->a[67476] = 3;
	v->a[67477] = actions(3);
	v->a[67478] = 1;
	v->a[67479] = sym_comment;
	small_parse_table_3374(v);
}

void	small_parse_table_3374(t_small_parse_table_array *v)
{
	v->a[67480] = actions(1194);
	v->a[67481] = 3;
	v->a[67482] = sym_file_descriptor;
	v->a[67483] = sym__concat;
	v->a[67484] = sym_variable_name;
	v->a[67485] = actions(1189);
	v->a[67486] = 18;
	v->a[67487] = anon_sym_LT;
	v->a[67488] = anon_sym_GT;
	v->a[67489] = anon_sym_GT_GT;
	v->a[67490] = anon_sym_LT_AMP;
	v->a[67491] = anon_sym_GT_AMP;
	v->a[67492] = anon_sym_GT_PIPE;
	v->a[67493] = anon_sym_LT_AMP_DASH;
	v->a[67494] = anon_sym_GT_AMP_DASH;
	v->a[67495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67496] = aux_sym_concatenation_token1;
	v->a[67497] = anon_sym_DOLLAR;
	v->a[67498] = anon_sym_DQUOTE;
	v->a[67499] = sym_raw_string;
	small_parse_table_3375(v);
}

/* EOF small_parse_table_674.c */
