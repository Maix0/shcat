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
	v->a[61400] = 1;
	v->a[61401] = sym_file_descriptor;
	v->a[61402] = actions(4014);
	v->a[61403] = 1;
	v->a[61404] = anon_sym_RPAREN;
	v->a[61405] = actions(3637);
	v->a[61406] = 3;
	v->a[61407] = sym_variable_name;
	v->a[61408] = sym_test_operator;
	v->a[61409] = sym__brace_start;
	v->a[61410] = actions(3627);
	v->a[61411] = 9;
	v->a[61412] = anon_sym_PIPE;
	v->a[61413] = anon_sym_SEMI_SEMI;
	v->a[61414] = anon_sym_PIPE_AMP;
	v->a[61415] = anon_sym_AMP_AMP;
	v->a[61416] = anon_sym_PIPE_PIPE;
	v->a[61417] = anon_sym_LT_LT;
	v->a[61418] = anon_sym_LT_LT_DASH;
	v->a[61419] = anon_sym_AMP;
	small_parse_table_3071(v);
}

void	small_parse_table_3071(t_small_parse_table_array *v)
{
	v->a[61420] = anon_sym_SEMI;
	v->a[61421] = actions(3629);
	v->a[61422] = 10;
	v->a[61423] = anon_sym_LT;
	v->a[61424] = anon_sym_GT;
	v->a[61425] = anon_sym_GT_GT;
	v->a[61426] = anon_sym_AMP_GT;
	v->a[61427] = anon_sym_AMP_GT_GT;
	v->a[61428] = anon_sym_LT_AMP;
	v->a[61429] = anon_sym_GT_AMP;
	v->a[61430] = anon_sym_GT_PIPE;
	v->a[61431] = anon_sym_LT_AMP_DASH;
	v->a[61432] = anon_sym_GT_AMP_DASH;
	v->a[61433] = actions(3625);
	v->a[61434] = 12;
	v->a[61435] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61436] = anon_sym_DOLLAR;
	v->a[61437] = sym__special_character;
	v->a[61438] = anon_sym_DQUOTE;
	v->a[61439] = sym_raw_string;
	small_parse_table_3072(v);
}

void	small_parse_table_3072(t_small_parse_table_array *v)
{
	v->a[61440] = aux_sym_number_token1;
	v->a[61441] = aux_sym_number_token2;
	v->a[61442] = anon_sym_DOLLAR_LBRACE;
	v->a[61443] = anon_sym_DOLLAR_LPAREN;
	v->a[61444] = anon_sym_BQUOTE;
	v->a[61445] = anon_sym_DOLLAR_BQUOTE;
	v->a[61446] = sym_word;
	v->a[61447] = 8;
	v->a[61448] = actions(3);
	v->a[61449] = 1;
	v->a[61450] = sym_comment;
	v->a[61451] = actions(3632);
	v->a[61452] = 1;
	v->a[61453] = aux_sym_heredoc_redirect_token1;
	v->a[61454] = actions(3634);
	v->a[61455] = 1;
	v->a[61456] = sym_file_descriptor;
	v->a[61457] = actions(4017);
	v->a[61458] = 1;
	v->a[61459] = anon_sym_RPAREN;
	small_parse_table_3073(v);
}

void	small_parse_table_3073(t_small_parse_table_array *v)
{
	v->a[61460] = actions(3637);
	v->a[61461] = 3;
	v->a[61462] = sym_variable_name;
	v->a[61463] = sym_test_operator;
	v->a[61464] = sym__brace_start;
	v->a[61465] = actions(3627);
	v->a[61466] = 9;
	v->a[61467] = anon_sym_PIPE;
	v->a[61468] = anon_sym_SEMI_SEMI;
	v->a[61469] = anon_sym_PIPE_AMP;
	v->a[61470] = anon_sym_AMP_AMP;
	v->a[61471] = anon_sym_PIPE_PIPE;
	v->a[61472] = anon_sym_LT_LT;
	v->a[61473] = anon_sym_LT_LT_DASH;
	v->a[61474] = anon_sym_AMP;
	v->a[61475] = anon_sym_SEMI;
	v->a[61476] = actions(3629);
	v->a[61477] = 10;
	v->a[61478] = anon_sym_LT;
	v->a[61479] = anon_sym_GT;
	small_parse_table_3074(v);
}

void	small_parse_table_3074(t_small_parse_table_array *v)
{
	v->a[61480] = anon_sym_GT_GT;
	v->a[61481] = anon_sym_AMP_GT;
	v->a[61482] = anon_sym_AMP_GT_GT;
	v->a[61483] = anon_sym_LT_AMP;
	v->a[61484] = anon_sym_GT_AMP;
	v->a[61485] = anon_sym_GT_PIPE;
	v->a[61486] = anon_sym_LT_AMP_DASH;
	v->a[61487] = anon_sym_GT_AMP_DASH;
	v->a[61488] = actions(3625);
	v->a[61489] = 12;
	v->a[61490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61491] = anon_sym_DOLLAR;
	v->a[61492] = sym__special_character;
	v->a[61493] = anon_sym_DQUOTE;
	v->a[61494] = sym_raw_string;
	v->a[61495] = aux_sym_number_token1;
	v->a[61496] = aux_sym_number_token2;
	v->a[61497] = anon_sym_DOLLAR_LBRACE;
	v->a[61498] = anon_sym_DOLLAR_LPAREN;
	v->a[61499] = anon_sym_BQUOTE;
	small_parse_table_3075(v);
}

/* EOF small_parse_table_614.c */
