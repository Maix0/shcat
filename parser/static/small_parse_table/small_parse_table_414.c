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
	v->a[41400] = 1;
	v->a[41401] = sym_variable_name;
	v->a[41402] = state(1300);
	v->a[41403] = 2;
	v->a[41404] = sym_variable_assignment;
	v->a[41405] = aux_sym_variable_assignments_repeat1;
	v->a[41406] = state(1302);
	v->a[41407] = 3;
	v->a[41408] = sym_file_redirect;
	v->a[41409] = sym_heredoc_redirect;
	v->a[41410] = aux_sym_redirected_statement_repeat1;
	v->a[41411] = actions(1004);
	v->a[41412] = 5;
	v->a[41413] = anon_sym_AMP_AMP;
	v->a[41414] = anon_sym_PIPE_PIPE;
	v->a[41415] = anon_sym_LT_LT;
	v->a[41416] = anon_sym_LT_LT_DASH;
	v->a[41417] = aux_sym_heredoc_redirect_token1;
	v->a[41418] = actions(1000);
	v->a[41419] = 20;
	small_parse_table_2071(v);
}

void	small_parse_table_2071(t_small_parse_table_array *v)
{
	v->a[41420] = anon_sym_LT;
	v->a[41421] = anon_sym_GT;
	v->a[41422] = anon_sym_GT_GT;
	v->a[41423] = anon_sym_AMP_GT;
	v->a[41424] = anon_sym_AMP_GT_GT;
	v->a[41425] = anon_sym_LT_AMP;
	v->a[41426] = anon_sym_GT_AMP;
	v->a[41427] = anon_sym_GT_PIPE;
	v->a[41428] = anon_sym_LT_AMP_DASH;
	v->a[41429] = anon_sym_GT_AMP_DASH;
	v->a[41430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41431] = anon_sym_DOLLAR;
	v->a[41432] = anon_sym_DQUOTE;
	v->a[41433] = sym_raw_string;
	v->a[41434] = aux_sym_number_token1;
	v->a[41435] = aux_sym_number_token2;
	v->a[41436] = anon_sym_DOLLAR_LBRACE;
	v->a[41437] = anon_sym_DOLLAR_LPAREN;
	v->a[41438] = anon_sym_BQUOTE;
	v->a[41439] = sym_word;
	small_parse_table_2072(v);
}

void	small_parse_table_2072(t_small_parse_table_array *v)
{
	v->a[41440] = 15;
	v->a[41441] = actions(1404);
	v->a[41442] = 1;
	v->a[41443] = sym_comment;
	v->a[41444] = actions(1535);
	v->a[41445] = 1;
	v->a[41446] = anon_sym_EQ;
	v->a[41447] = actions(1562);
	v->a[41448] = 1;
	v->a[41449] = anon_sym_PIPE;
	v->a[41450] = actions(1564);
	v->a[41451] = 1;
	v->a[41452] = anon_sym_AMP_AMP;
	v->a[41453] = actions(1566);
	v->a[41454] = 1;
	v->a[41455] = anon_sym_PIPE_PIPE;
	v->a[41456] = actions(1572);
	v->a[41457] = 1;
	v->a[41458] = anon_sym_CARET;
	v->a[41459] = actions(1574);
	small_parse_table_2073(v);
}

void	small_parse_table_2073(t_small_parse_table_array *v)
{
	v->a[41460] = 1;
	v->a[41461] = anon_sym_AMP;
	v->a[41462] = actions(1545);
	v->a[41463] = 2;
	v->a[41464] = anon_sym_PLUS_PLUS2;
	v->a[41465] = anon_sym_DASH_DASH2;
	v->a[41466] = actions(1568);
	v->a[41467] = 2;
	v->a[41468] = anon_sym_LT;
	v->a[41469] = anon_sym_GT;
	v->a[41470] = actions(1570);
	v->a[41471] = 2;
	v->a[41472] = anon_sym_GT_GT;
	v->a[41473] = anon_sym_LT_LT;
	v->a[41474] = actions(1576);
	v->a[41475] = 2;
	v->a[41476] = anon_sym_EQ_EQ;
	v->a[41477] = anon_sym_BANG_EQ;
	v->a[41478] = actions(1578);
	v->a[41479] = 2;
	small_parse_table_2074(v);
}

void	small_parse_table_2074(t_small_parse_table_array *v)
{
	v->a[41480] = anon_sym_LT_EQ;
	v->a[41481] = anon_sym_GT_EQ;
	v->a[41482] = actions(1580);
	v->a[41483] = 2;
	v->a[41484] = anon_sym_PLUS;
	v->a[41485] = anon_sym_DASH;
	v->a[41486] = actions(1582);
	v->a[41487] = 3;
	v->a[41488] = anon_sym_STAR;
	v->a[41489] = anon_sym_SLASH;
	v->a[41490] = anon_sym_PERCENT;
	v->a[41491] = actions(1537);
	v->a[41492] = 12;
	v->a[41493] = anon_sym_RPAREN;
	v->a[41494] = anon_sym_PLUS_EQ;
	v->a[41495] = anon_sym_DASH_EQ;
	v->a[41496] = anon_sym_STAR_EQ;
	v->a[41497] = anon_sym_SLASH_EQ;
	v->a[41498] = anon_sym_PERCENT_EQ;
	v->a[41499] = anon_sym_LT_LT_EQ;
	small_parse_table_2075(v);
}

/* EOF small_parse_table_414.c */
