/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_614.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3070(t_small_parse_table_array *v)
{
	v->a[61400] = anon_sym_GT_PIPE;
	v->a[61401] = 12;
	v->a[61402] = actions(3);
	v->a[61403] = 1;
	v->a[61404] = sym_comment;
	v->a[61405] = actions(682);
	v->a[61406] = 1;
	v->a[61407] = anon_sym_PIPE;
	v->a[61408] = actions(695);
	v->a[61409] = 1;
	v->a[61410] = anon_sym_RPAREN;
	v->a[61411] = actions(2009);
	v->a[61412] = 1;
	v->a[61413] = aux_sym_heredoc_redirect_token1;
	v->a[61414] = actions(2011);
	v->a[61415] = 1;
	v->a[61416] = sym_file_descriptor;
	v->a[61417] = state(763);
	v->a[61418] = 1;
	v->a[61419] = sym_terminator;
	small_parse_table_3071(v);
}

void	small_parse_table_3071(t_small_parse_table_array *v)
{
	v->a[61420] = actions(752);
	v->a[61421] = 2;
	v->a[61422] = anon_sym_AMP_AMP;
	v->a[61423] = anon_sym_PIPE_PIPE;
	v->a[61424] = actions(754);
	v->a[61425] = 2;
	v->a[61426] = anon_sym_LT_LT;
	v->a[61427] = anon_sym_LT_LT_DASH;
	v->a[61428] = actions(2007);
	v->a[61429] = 2;
	v->a[61430] = anon_sym_LT_AMP_DASH;
	v->a[61431] = anon_sym_GT_AMP_DASH;
	v->a[61432] = actions(750);
	v->a[61433] = 3;
	v->a[61434] = anon_sym_SEMI_SEMI;
	v->a[61435] = anon_sym_AMP;
	v->a[61436] = anon_sym_SEMI;
	v->a[61437] = state(1128);
	v->a[61438] = 3;
	v->a[61439] = sym_file_redirect;
	small_parse_table_3072(v);
}

void	small_parse_table_3072(t_small_parse_table_array *v)
{
	v->a[61440] = sym_heredoc_redirect;
	v->a[61441] = aux_sym_redirected_statement_repeat1;
	v->a[61442] = actions(2005);
	v->a[61443] = 6;
	v->a[61444] = anon_sym_LT;
	v->a[61445] = anon_sym_GT;
	v->a[61446] = anon_sym_GT_GT;
	v->a[61447] = anon_sym_LT_AMP;
	v->a[61448] = anon_sym_GT_AMP;
	v->a[61449] = anon_sym_GT_PIPE;
	v->a[61450] = 12;
	v->a[61451] = actions(3);
	v->a[61452] = 1;
	v->a[61453] = sym_comment;
	v->a[61454] = actions(682);
	v->a[61455] = 1;
	v->a[61456] = anon_sym_PIPE;
	v->a[61457] = actions(695);
	v->a[61458] = 1;
	v->a[61459] = anon_sym_RPAREN;
	small_parse_table_3073(v);
}

void	small_parse_table_3073(t_small_parse_table_array *v)
{
	v->a[61460] = actions(2009);
	v->a[61461] = 1;
	v->a[61462] = aux_sym_heredoc_redirect_token1;
	v->a[61463] = actions(2011);
	v->a[61464] = 1;
	v->a[61465] = sym_file_descriptor;
	v->a[61466] = state(760);
	v->a[61467] = 1;
	v->a[61468] = sym_terminator;
	v->a[61469] = actions(752);
	v->a[61470] = 2;
	v->a[61471] = anon_sym_AMP_AMP;
	v->a[61472] = anon_sym_PIPE_PIPE;
	v->a[61473] = actions(754);
	v->a[61474] = 2;
	v->a[61475] = anon_sym_LT_LT;
	v->a[61476] = anon_sym_LT_LT_DASH;
	v->a[61477] = actions(2007);
	v->a[61478] = 2;
	v->a[61479] = anon_sym_LT_AMP_DASH;
	small_parse_table_3074(v);
}

void	small_parse_table_3074(t_small_parse_table_array *v)
{
	v->a[61480] = anon_sym_GT_AMP_DASH;
	v->a[61481] = actions(750);
	v->a[61482] = 3;
	v->a[61483] = anon_sym_SEMI_SEMI;
	v->a[61484] = anon_sym_AMP;
	v->a[61485] = anon_sym_SEMI;
	v->a[61486] = state(1128);
	v->a[61487] = 3;
	v->a[61488] = sym_file_redirect;
	v->a[61489] = sym_heredoc_redirect;
	v->a[61490] = aux_sym_redirected_statement_repeat1;
	v->a[61491] = actions(2005);
	v->a[61492] = 6;
	v->a[61493] = anon_sym_LT;
	v->a[61494] = anon_sym_GT;
	v->a[61495] = anon_sym_GT_GT;
	v->a[61496] = anon_sym_LT_AMP;
	v->a[61497] = anon_sym_GT_AMP;
	v->a[61498] = anon_sym_GT_PIPE;
	v->a[61499] = 12;
	small_parse_table_3075(v);
}

/* EOF small_parse_table_614.c */
