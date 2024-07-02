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
	v->a[61400] = actions(3);
	v->a[61401] = 1;
	v->a[61402] = sym_comment;
	v->a[61403] = actions(1946);
	v->a[61404] = 1;
	v->a[61405] = sym_file_descriptor;
	v->a[61406] = actions(2030);
	v->a[61407] = 1;
	v->a[61408] = aux_sym_heredoc_redirect_token1;
	v->a[61409] = state(576);
	v->a[61410] = 1;
	v->a[61411] = sym_terminator;
	v->a[61412] = actions(700);
	v->a[61413] = 2;
	v->a[61414] = anon_sym_LT_LT;
	v->a[61415] = anon_sym_LT_LT_DASH;
	v->a[61416] = actions(914);
	v->a[61417] = 2;
	v->a[61418] = anon_sym_AMP_AMP;
	v->a[61419] = anon_sym_PIPE_PIPE;
	small_parse_table_3071(v);
}

void	small_parse_table_3071(t_small_parse_table_array *v)
{
	v->a[61420] = actions(1039);
	v->a[61421] = 3;
	v->a[61422] = anon_sym_SEMI_SEMI;
	v->a[61423] = anon_sym_AMP;
	v->a[61424] = anon_sym_SEMI;
	v->a[61425] = state(1134);
	v->a[61426] = 3;
	v->a[61427] = sym_file_redirect;
	v->a[61428] = sym_heredoc_redirect;
	v->a[61429] = aux_sym_redirected_statement_repeat1;
	v->a[61430] = actions(1942);
	v->a[61431] = 7;
	v->a[61432] = anon_sym_LT;
	v->a[61433] = anon_sym_GT;
	v->a[61434] = anon_sym_GT_GT;
	v->a[61435] = anon_sym_LT_AMP;
	v->a[61436] = anon_sym_GT_AMP;
	v->a[61437] = anon_sym_GT_PIPE;
	v->a[61438] = anon_sym_LT_GT;
	v->a[61439] = 14;
	small_parse_table_3072(v);
}

void	small_parse_table_3072(t_small_parse_table_array *v)
{
	v->a[61440] = actions(3);
	v->a[61441] = 1;
	v->a[61442] = sym_comment;
	v->a[61443] = actions(2101);
	v->a[61444] = 1;
	v->a[61445] = anon_sym_LPAREN;
	v->a[61446] = actions(2104);
	v->a[61447] = 1;
	v->a[61448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61449] = actions(2107);
	v->a[61450] = 1;
	v->a[61451] = anon_sym_DOLLAR;
	v->a[61452] = actions(2110);
	v->a[61453] = 1;
	v->a[61454] = anon_sym_DQUOTE;
	v->a[61455] = actions(2113);
	v->a[61456] = 1;
	v->a[61457] = anon_sym_DOLLAR_LBRACE;
	v->a[61458] = actions(2116);
	v->a[61459] = 1;
	small_parse_table_3073(v);
}

void	small_parse_table_3073(t_small_parse_table_array *v)
{
	v->a[61460] = anon_sym_DOLLAR_LPAREN;
	v->a[61461] = actions(2119);
	v->a[61462] = 1;
	v->a[61463] = anon_sym_BQUOTE;
	v->a[61464] = actions(2122);
	v->a[61465] = 1;
	v->a[61466] = sym_extglob_pattern;
	v->a[61467] = state(1123);
	v->a[61468] = 1;
	v->a[61469] = aux_sym_case_statement_repeat1;
	v->a[61470] = state(1713);
	v->a[61471] = 1;
	v->a[61472] = sym_case_item;
	v->a[61473] = state(1888);
	v->a[61474] = 2;
	v->a[61475] = sym_concatenation;
	v->a[61476] = sym__extglob_blob;
	v->a[61477] = actions(2098);
	v->a[61478] = 3;
	v->a[61479] = sym_raw_string;
	small_parse_table_3074(v);
}

void	small_parse_table_3074(t_small_parse_table_array *v)
{
	v->a[61480] = sym_number;
	v->a[61481] = sym_word;
	v->a[61482] = state(1791);
	v->a[61483] = 5;
	v->a[61484] = sym_arithmetic_expansion;
	v->a[61485] = sym_string;
	v->a[61486] = sym_simple_expansion;
	v->a[61487] = sym_expansion;
	v->a[61488] = sym_command_substitution;
	v->a[61489] = 3;
	v->a[61490] = actions(3);
	v->a[61491] = 1;
	v->a[61492] = sym_comment;
	v->a[61493] = actions(2125);
	v->a[61494] = 3;
	v->a[61495] = sym_file_descriptor;
	v->a[61496] = ts_builtin_sym_end;
	v->a[61497] = aux_sym_heredoc_redirect_token1;
	v->a[61498] = actions(2127);
	v->a[61499] = 17;
	small_parse_table_3075(v);
}

/* EOF small_parse_table_614.c */
