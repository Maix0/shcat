/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_414.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2070(t_small_parse_table_array *v)
{
	v->a[41400] = aux_sym__expansion_regex_token1;
	v->a[41401] = actions(1575);
	v->a[41402] = 1;
	v->a[41403] = sym_regex;
	v->a[41404] = state(1627);
	v->a[41405] = 1;
	v->a[41406] = sym__expansion_regex;
	v->a[41407] = state(1716);
	v->a[41408] = 1;
	v->a[41409] = sym__expansion_expression;
	v->a[41410] = state(1472);
	v->a[41411] = 2;
	v->a[41412] = sym_string;
	v->a[41413] = aux_sym__expansion_regex_repeat1;
	v->a[41414] = actions(1504);
	v->a[41415] = 3;
	v->a[41416] = anon_sym_PERCENT;
	v->a[41417] = anon_sym_POUND;
	v->a[41418] = anon_sym_PERCENT_PERCENT;
	v->a[41419] = actions(1508);
	small_parse_table_2071(v);
}

void	small_parse_table_2071(t_small_parse_table_array *v)
{
	v->a[41420] = 8;
	v->a[41421] = anon_sym_COLON_DASH;
	v->a[41422] = anon_sym_DASH3;
	v->a[41423] = anon_sym_COLON_EQ;
	v->a[41424] = anon_sym_EQ2;
	v->a[41425] = anon_sym_COLON_QMARK;
	v->a[41426] = anon_sym_QMARK2;
	v->a[41427] = anon_sym_COLON_PLUS;
	v->a[41428] = anon_sym_PLUS3;
	v->a[41429] = 5;
	v->a[41430] = actions(3);
	v->a[41431] = 1;
	v->a[41432] = sym_comment;
	v->a[41433] = actions(1021);
	v->a[41434] = 1;
	v->a[41435] = sym_variable_name;
	v->a[41436] = actions(1019);
	v->a[41437] = 2;
	v->a[41438] = aux_sym__simple_variable_name_token1;
	v->a[41439] = aux_sym__multiline_variable_name_token1;
	small_parse_table_2072(v);
}

void	small_parse_table_2072(t_small_parse_table_array *v)
{
	v->a[41440] = actions(1017);
	v->a[41441] = 8;
	v->a[41442] = anon_sym_BANG;
	v->a[41443] = anon_sym_DASH;
	v->a[41444] = anon_sym_STAR;
	v->a[41445] = anon_sym_QMARK;
	v->a[41446] = anon_sym_DOLLAR;
	v->a[41447] = anon_sym_POUND;
	v->a[41448] = anon_sym_AT;
	v->a[41449] = anon_sym_0;
	v->a[41450] = actions(345);
	v->a[41451] = 11;
	v->a[41452] = anon_sym_SEMI_SEMI;
	v->a[41453] = aux_sym_heredoc_redirect_token1;
	v->a[41454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41455] = anon_sym_DQUOTE;
	v->a[41456] = sym_raw_string;
	v->a[41457] = sym_number;
	v->a[41458] = anon_sym_DOLLAR_LBRACE;
	v->a[41459] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2073(v);
}

void	small_parse_table_2073(t_small_parse_table_array *v)
{
	v->a[41460] = anon_sym_BQUOTE;
	v->a[41461] = sym_word;
	v->a[41462] = anon_sym_SEMI;
	v->a[41463] = 5;
	v->a[41464] = actions(3);
	v->a[41465] = 1;
	v->a[41466] = sym_comment;
	v->a[41467] = actions(1577);
	v->a[41468] = 1;
	v->a[41469] = aux_sym_concatenation_token1;
	v->a[41470] = actions(1579);
	v->a[41471] = 1;
	v->a[41472] = sym__concat;
	v->a[41473] = state(776);
	v->a[41474] = 1;
	v->a[41475] = aux_sym_concatenation_repeat1;
	v->a[41476] = actions(1071);
	v->a[41477] = 19;
	v->a[41478] = anon_sym_AMP_AMP;
	v->a[41479] = anon_sym_PIPE_PIPE;
	small_parse_table_2074(v);
}

void	small_parse_table_2074(t_small_parse_table_array *v)
{
	v->a[41480] = anon_sym_LT;
	v->a[41481] = anon_sym_GT;
	v->a[41482] = anon_sym_GT_GT;
	v->a[41483] = anon_sym_LT_AMP;
	v->a[41484] = anon_sym_GT_AMP;
	v->a[41485] = anon_sym_GT_PIPE;
	v->a[41486] = anon_sym_LT_GT;
	v->a[41487] = aux_sym_heredoc_redirect_token1;
	v->a[41488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41489] = anon_sym_DOLLAR;
	v->a[41490] = anon_sym_DQUOTE;
	v->a[41491] = sym_raw_string;
	v->a[41492] = sym_number;
	v->a[41493] = anon_sym_DOLLAR_LBRACE;
	v->a[41494] = anon_sym_DOLLAR_LPAREN;
	v->a[41495] = anon_sym_BQUOTE;
	v->a[41496] = sym_word;
	v->a[41497] = 12;
	v->a[41498] = actions(407);
	v->a[41499] = 1;
	small_parse_table_2075(v);
}

/* EOF small_parse_table_414.c */
