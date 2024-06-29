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
	v->a[61405] = actions(764);
	v->a[61406] = 1;
	v->a[61407] = anon_sym_BQUOTE;
	v->a[61408] = actions(766);
	v->a[61409] = 1;
	v->a[61410] = anon_sym_PIPE;
	v->a[61411] = actions(2031);
	v->a[61412] = 1;
	v->a[61413] = aux_sym_heredoc_redirect_token1;
	v->a[61414] = actions(2033);
	v->a[61415] = 1;
	v->a[61416] = sym_file_descriptor;
	v->a[61417] = state(833);
	v->a[61418] = 1;
	v->a[61419] = sym_terminator;
	small_parse_table_3071(v);
}

void	small_parse_table_3071(t_small_parse_table_array *v)
{
	v->a[61420] = actions(804);
	v->a[61421] = 2;
	v->a[61422] = anon_sym_LT_LT;
	v->a[61423] = anon_sym_LT_LT_DASH;
	v->a[61424] = actions(842);
	v->a[61425] = 2;
	v->a[61426] = anon_sym_AMP_AMP;
	v->a[61427] = anon_sym_PIPE_PIPE;
	v->a[61428] = actions(2029);
	v->a[61429] = 2;
	v->a[61430] = anon_sym_LT_AMP_DASH;
	v->a[61431] = anon_sym_GT_AMP_DASH;
	v->a[61432] = actions(800);
	v->a[61433] = 3;
	v->a[61434] = anon_sym_SEMI_SEMI;
	v->a[61435] = anon_sym_AMP;
	v->a[61436] = anon_sym_SEMI;
	v->a[61437] = state(1157);
	v->a[61438] = 3;
	v->a[61439] = sym_file_redirect;
	small_parse_table_3072(v);
}

void	small_parse_table_3072(t_small_parse_table_array *v)
{
	v->a[61440] = sym_heredoc_redirect;
	v->a[61441] = aux_sym_redirected_statement_repeat1;
	v->a[61442] = actions(2027);
	v->a[61443] = 8;
	v->a[61444] = anon_sym_LT;
	v->a[61445] = anon_sym_GT;
	v->a[61446] = anon_sym_GT_GT;
	v->a[61447] = anon_sym_AMP_GT;
	v->a[61448] = anon_sym_AMP_GT_GT;
	v->a[61449] = anon_sym_LT_AMP;
	v->a[61450] = anon_sym_GT_AMP;
	v->a[61451] = anon_sym_GT_PIPE;
	v->a[61452] = 3;
	v->a[61453] = actions(3);
	v->a[61454] = 1;
	v->a[61455] = sym_comment;
	v->a[61456] = actions(1056);
	v->a[61457] = 2;
	v->a[61458] = sym_file_descriptor;
	v->a[61459] = sym__concat;
	small_parse_table_3073(v);
}

void	small_parse_table_3073(t_small_parse_table_array *v)
{
	v->a[61460] = actions(1058);
	v->a[61461] = 23;
	v->a[61462] = anon_sym_AMP_AMP;
	v->a[61463] = anon_sym_PIPE_PIPE;
	v->a[61464] = anon_sym_LT;
	v->a[61465] = anon_sym_GT;
	v->a[61466] = anon_sym_GT_GT;
	v->a[61467] = anon_sym_AMP_GT;
	v->a[61468] = anon_sym_AMP_GT_GT;
	v->a[61469] = anon_sym_LT_AMP;
	v->a[61470] = anon_sym_GT_AMP;
	v->a[61471] = anon_sym_GT_PIPE;
	v->a[61472] = anon_sym_LT_AMP_DASH;
	v->a[61473] = anon_sym_GT_AMP_DASH;
	v->a[61474] = aux_sym_heredoc_redirect_token1;
	v->a[61475] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61476] = aux_sym_concatenation_token1;
	v->a[61477] = anon_sym_DOLLAR;
	v->a[61478] = anon_sym_DQUOTE;
	v->a[61479] = sym_raw_string;
	small_parse_table_3074(v);
}

void	small_parse_table_3074(t_small_parse_table_array *v)
{
	v->a[61480] = sym_number;
	v->a[61481] = anon_sym_DOLLAR_LBRACE;
	v->a[61482] = anon_sym_DOLLAR_LPAREN;
	v->a[61483] = anon_sym_BQUOTE;
	v->a[61484] = sym_word;
	v->a[61485] = 12;
	v->a[61486] = actions(3);
	v->a[61487] = 1;
	v->a[61488] = sym_comment;
	v->a[61489] = actions(764);
	v->a[61490] = 1;
	v->a[61491] = anon_sym_BQUOTE;
	v->a[61492] = actions(766);
	v->a[61493] = 1;
	v->a[61494] = anon_sym_PIPE;
	v->a[61495] = actions(2031);
	v->a[61496] = 1;
	v->a[61497] = aux_sym_heredoc_redirect_token1;
	v->a[61498] = actions(2033);
	v->a[61499] = 1;
	small_parse_table_3075(v);
}

/* EOF small_parse_table_614.c */
