/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1194.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5970(t_small_parse_table_array *v)
{
	v->a[119400] = 1;
	v->a[119401] = anon_sym_BQUOTE;
	v->a[119402] = actions(5427);
	v->a[119403] = 1;
	v->a[119404] = anon_sym_DOLLAR_BQUOTE;
	v->a[119405] = actions(5433);
	v->a[119406] = 1;
	v->a[119407] = sym__brace_start;
	v->a[119408] = actions(6625);
	v->a[119409] = 1;
	v->a[119410] = sym_word;
	v->a[119411] = actions(6627);
	v->a[119412] = 1;
	v->a[119413] = sym__special_character;
	v->a[119414] = actions(6631);
	v->a[119415] = 1;
	v->a[119416] = sym__comment_word;
	v->a[119417] = actions(6981);
	v->a[119418] = 1;
	v->a[119419] = anon_sym_DOLLAR;
	small_parse_table_5971(v);
}

void	small_parse_table_5971(t_small_parse_table_array *v)
{
	v->a[119420] = actions(6629);
	v->a[119421] = 3;
	v->a[119422] = sym_test_operator;
	v->a[119423] = sym__bare_dollar;
	v->a[119424] = sym_raw_string;
	v->a[119425] = state(1903);
	v->a[119426] = 7;
	v->a[119427] = sym_arithmetic_expansion;
	v->a[119428] = sym_brace_expression;
	v->a[119429] = sym_string;
	v->a[119430] = sym_number;
	v->a[119431] = sym_simple_expansion;
	v->a[119432] = sym_expansion;
	v->a[119433] = sym_command_substitution;
	v->a[119434] = 16;
	v->a[119435] = actions(3);
	v->a[119436] = 1;
	v->a[119437] = sym_comment;
	v->a[119438] = actions(5407);
	v->a[119439] = 1;
	small_parse_table_5972(v);
}

void	small_parse_table_5972(t_small_parse_table_array *v)
{
	v->a[119440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119441] = actions(5413);
	v->a[119442] = 1;
	v->a[119443] = anon_sym_DQUOTE;
	v->a[119444] = actions(5417);
	v->a[119445] = 1;
	v->a[119446] = aux_sym_number_token1;
	v->a[119447] = actions(5419);
	v->a[119448] = 1;
	v->a[119449] = aux_sym_number_token2;
	v->a[119450] = actions(5421);
	v->a[119451] = 1;
	v->a[119452] = anon_sym_DOLLAR_LBRACE;
	v->a[119453] = actions(5423);
	v->a[119454] = 1;
	v->a[119455] = anon_sym_DOLLAR_LPAREN;
	v->a[119456] = actions(5425);
	v->a[119457] = 1;
	v->a[119458] = anon_sym_BQUOTE;
	v->a[119459] = actions(5427);
	small_parse_table_5973(v);
}

void	small_parse_table_5973(t_small_parse_table_array *v)
{
	v->a[119460] = 1;
	v->a[119461] = anon_sym_DOLLAR_BQUOTE;
	v->a[119462] = actions(5433);
	v->a[119463] = 1;
	v->a[119464] = sym__brace_start;
	v->a[119465] = actions(6625);
	v->a[119466] = 1;
	v->a[119467] = sym_word;
	v->a[119468] = actions(6627);
	v->a[119469] = 1;
	v->a[119470] = sym__special_character;
	v->a[119471] = actions(6631);
	v->a[119472] = 1;
	v->a[119473] = sym__comment_word;
	v->a[119474] = actions(6983);
	v->a[119475] = 1;
	v->a[119476] = anon_sym_DOLLAR;
	v->a[119477] = actions(6629);
	v->a[119478] = 3;
	v->a[119479] = sym_test_operator;
	small_parse_table_5974(v);
}

void	small_parse_table_5974(t_small_parse_table_array *v)
{
	v->a[119480] = sym__bare_dollar;
	v->a[119481] = sym_raw_string;
	v->a[119482] = state(1903);
	v->a[119483] = 7;
	v->a[119484] = sym_arithmetic_expansion;
	v->a[119485] = sym_brace_expression;
	v->a[119486] = sym_string;
	v->a[119487] = sym_number;
	v->a[119488] = sym_simple_expansion;
	v->a[119489] = sym_expansion;
	v->a[119490] = sym_command_substitution;
	v->a[119491] = 16;
	v->a[119492] = actions(3);
	v->a[119493] = 1;
	v->a[119494] = sym_comment;
	v->a[119495] = actions(163);
	v->a[119496] = 1;
	v->a[119497] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119498] = actions(169);
	v->a[119499] = 1;
	small_parse_table_5975(v);
}

/* EOF small_parse_table_1194.c */
