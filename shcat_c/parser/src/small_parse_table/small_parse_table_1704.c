/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1704.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8520(t_small_parse_table_array *v)
{
	v->a[170400] = anon_sym_AMP_AMP;
	v->a[170401] = anon_sym_PIPE;
	v->a[170402] = anon_sym_AMP;
	v->a[170403] = anon_sym_LT;
	v->a[170404] = anon_sym_GT;
	v->a[170405] = anon_sym_LT_LT;
	v->a[170406] = anon_sym_GT_GT;
	v->a[170407] = anon_sym_SEMI_SEMI;
	v->a[170408] = anon_sym_PIPE_AMP;
	v->a[170409] = anon_sym_AMP_GT;
	v->a[170410] = anon_sym_AMP_GT_GT;
	v->a[170411] = anon_sym_LT_AMP;
	v->a[170412] = anon_sym_GT_AMP;
	v->a[170413] = anon_sym_GT_PIPE;
	v->a[170414] = anon_sym_LT_AMP_DASH;
	v->a[170415] = anon_sym_GT_AMP_DASH;
	v->a[170416] = anon_sym_LT_LT_DASH;
	v->a[170417] = aux_sym_heredoc_redirect_token1;
	v->a[170418] = anon_sym_BQUOTE;
	v->a[170419] = 8;
	small_parse_table_8521(v);
}

void	small_parse_table_8521(t_small_parse_table_array *v)
{
	v->a[170420] = actions(3);
	v->a[170421] = 1;
	v->a[170422] = sym_comment;
	v->a[170423] = actions(1235);
	v->a[170424] = 1;
	v->a[170425] = sym_file_descriptor;
	v->a[170426] = actions(4084);
	v->a[170427] = 1;
	v->a[170428] = anon_sym_DQUOTE;
	v->a[170429] = actions(7613);
	v->a[170430] = 1;
	v->a[170431] = sym_variable_name;
	v->a[170432] = state(4606);
	v->a[170433] = 1;
	v->a[170434] = sym_string;
	v->a[170435] = actions(7611);
	v->a[170436] = 2;
	v->a[170437] = aux_sym__simple_variable_name_token1;
	v->a[170438] = aux_sym__multiline_variable_name_token1;
	v->a[170439] = actions(7609);
	small_parse_table_8522(v);
}

void	small_parse_table_8522(t_small_parse_table_array *v)
{
	v->a[170440] = 9;
	v->a[170441] = anon_sym_DASH;
	v->a[170442] = anon_sym_STAR;
	v->a[170443] = anon_sym_BANG;
	v->a[170444] = anon_sym_QMARK;
	v->a[170445] = anon_sym_DOLLAR;
	v->a[170446] = anon_sym_POUND;
	v->a[170447] = anon_sym_AT2;
	v->a[170448] = anon_sym_0;
	v->a[170449] = anon_sym__;
	v->a[170450] = actions(1227);
	v->a[170451] = 21;
	v->a[170452] = anon_sym_SEMI;
	v->a[170453] = anon_sym_PIPE_PIPE;
	v->a[170454] = anon_sym_AMP_AMP;
	v->a[170455] = anon_sym_PIPE;
	v->a[170456] = anon_sym_AMP;
	v->a[170457] = anon_sym_LT;
	v->a[170458] = anon_sym_GT;
	v->a[170459] = anon_sym_LT_LT;
	small_parse_table_8523(v);
}

void	small_parse_table_8523(t_small_parse_table_array *v)
{
	v->a[170460] = anon_sym_GT_GT;
	v->a[170461] = anon_sym_SEMI_SEMI;
	v->a[170462] = anon_sym_PIPE_AMP;
	v->a[170463] = anon_sym_AMP_GT;
	v->a[170464] = anon_sym_AMP_GT_GT;
	v->a[170465] = anon_sym_LT_AMP;
	v->a[170466] = anon_sym_GT_AMP;
	v->a[170467] = anon_sym_GT_PIPE;
	v->a[170468] = anon_sym_LT_AMP_DASH;
	v->a[170469] = anon_sym_GT_AMP_DASH;
	v->a[170470] = anon_sym_LT_LT_DASH;
	v->a[170471] = aux_sym_heredoc_redirect_token1;
	v->a[170472] = anon_sym_BQUOTE;
	v->a[170473] = 16;
	v->a[170474] = actions(71);
	v->a[170475] = 1;
	v->a[170476] = sym_comment;
	v->a[170477] = actions(7102);
	v->a[170478] = 1;
	v->a[170479] = anon_sym_EQ;
	small_parse_table_8524(v);
}

void	small_parse_table_8524(t_small_parse_table_array *v)
{
	v->a[170480] = actions(7617);
	v->a[170481] = 1;
	v->a[170482] = anon_sym_PIPE_PIPE;
	v->a[170483] = actions(7619);
	v->a[170484] = 1;
	v->a[170485] = anon_sym_AMP_AMP;
	v->a[170486] = actions(7621);
	v->a[170487] = 1;
	v->a[170488] = anon_sym_PIPE;
	v->a[170489] = actions(7623);
	v->a[170490] = 1;
	v->a[170491] = anon_sym_CARET;
	v->a[170492] = actions(7625);
	v->a[170493] = 1;
	v->a[170494] = anon_sym_AMP;
	v->a[170495] = actions(7639);
	v->a[170496] = 1;
	v->a[170497] = anon_sym_STAR_STAR;
	v->a[170498] = actions(7615);
	v->a[170499] = 2;
	small_parse_table_8525(v);
}

/* EOF small_parse_table_1704.c */
