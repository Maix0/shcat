/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_164.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_820(t_small_parse_table_array *v)
{
	v->a[16400] = anon_sym_STAR;
	v->a[16401] = anon_sym_QMARK;
	v->a[16402] = anon_sym_DOLLAR;
	v->a[16403] = anon_sym_POUND;
	v->a[16404] = anon_sym_AT;
	v->a[16405] = anon_sym_0;
	v->a[16406] = actions(345);
	v->a[16407] = 23;
	v->a[16408] = anon_sym_PIPE;
	v->a[16409] = anon_sym_SEMI_SEMI;
	v->a[16410] = anon_sym_AMP_AMP;
	v->a[16411] = anon_sym_PIPE_PIPE;
	v->a[16412] = anon_sym_LT;
	v->a[16413] = anon_sym_GT;
	v->a[16414] = anon_sym_GT_GT;
	v->a[16415] = anon_sym_LT_AMP;
	v->a[16416] = anon_sym_GT_AMP;
	v->a[16417] = anon_sym_GT_PIPE;
	v->a[16418] = anon_sym_LT_GT;
	v->a[16419] = anon_sym_LT_LT;
	small_parse_table_821(v);
}

void	small_parse_table_821(t_small_parse_table_array *v)
{
	v->a[16420] = anon_sym_LT_LT_DASH;
	v->a[16421] = aux_sym_heredoc_redirect_token1;
	v->a[16422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16423] = anon_sym_DQUOTE;
	v->a[16424] = sym_raw_string;
	v->a[16425] = sym_number;
	v->a[16426] = anon_sym_DOLLAR_LBRACE;
	v->a[16427] = anon_sym_DOLLAR_LPAREN;
	v->a[16428] = anon_sym_BQUOTE;
	v->a[16429] = sym_word;
	v->a[16430] = anon_sym_SEMI;
	v->a[16431] = 5;
	v->a[16432] = actions(3);
	v->a[16433] = 1;
	v->a[16434] = sym_comment;
	v->a[16435] = actions(387);
	v->a[16436] = 1;
	v->a[16437] = sym_variable_name;
	v->a[16438] = actions(385);
	v->a[16439] = 2;
	small_parse_table_822(v);
}

void	small_parse_table_822(t_small_parse_table_array *v)
{
	v->a[16440] = aux_sym__simple_variable_name_token1;
	v->a[16441] = aux_sym__multiline_variable_name_token1;
	v->a[16442] = actions(383);
	v->a[16443] = 8;
	v->a[16444] = anon_sym_BANG;
	v->a[16445] = anon_sym_DASH;
	v->a[16446] = anon_sym_STAR;
	v->a[16447] = anon_sym_QMARK;
	v->a[16448] = anon_sym_DOLLAR;
	v->a[16449] = anon_sym_POUND;
	v->a[16450] = anon_sym_AT;
	v->a[16451] = anon_sym_0;
	v->a[16452] = actions(345);
	v->a[16453] = 24;
	v->a[16454] = anon_sym_PIPE;
	v->a[16455] = anon_sym_RPAREN;
	v->a[16456] = anon_sym_SEMI_SEMI;
	v->a[16457] = anon_sym_AMP_AMP;
	v->a[16458] = anon_sym_PIPE_PIPE;
	v->a[16459] = anon_sym_LT;
	small_parse_table_823(v);
}

void	small_parse_table_823(t_small_parse_table_array *v)
{
	v->a[16460] = anon_sym_GT;
	v->a[16461] = anon_sym_GT_GT;
	v->a[16462] = anon_sym_LT_AMP;
	v->a[16463] = anon_sym_GT_AMP;
	v->a[16464] = anon_sym_GT_PIPE;
	v->a[16465] = anon_sym_LT_GT;
	v->a[16466] = anon_sym_LT_LT;
	v->a[16467] = anon_sym_LT_LT_DASH;
	v->a[16468] = aux_sym_heredoc_redirect_token1;
	v->a[16469] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16470] = anon_sym_DQUOTE;
	v->a[16471] = sym_raw_string;
	v->a[16472] = sym_number;
	v->a[16473] = anon_sym_DOLLAR_LBRACE;
	v->a[16474] = anon_sym_DOLLAR_LPAREN;
	v->a[16475] = anon_sym_BQUOTE;
	v->a[16476] = sym_word;
	v->a[16477] = anon_sym_SEMI;
	v->a[16478] = 6;
	v->a[16479] = actions(3);
	small_parse_table_824(v);
}

void	small_parse_table_824(t_small_parse_table_array *v)
{
	v->a[16480] = 1;
	v->a[16481] = sym_comment;
	v->a[16482] = actions(343);
	v->a[16483] = 1;
	v->a[16484] = ts_builtin_sym_end;
	v->a[16485] = actions(393);
	v->a[16486] = 1;
	v->a[16487] = sym_variable_name;
	v->a[16488] = actions(391);
	v->a[16489] = 2;
	v->a[16490] = aux_sym__simple_variable_name_token1;
	v->a[16491] = aux_sym__multiline_variable_name_token1;
	v->a[16492] = actions(389);
	v->a[16493] = 8;
	v->a[16494] = anon_sym_BANG;
	v->a[16495] = anon_sym_DASH;
	v->a[16496] = anon_sym_STAR;
	v->a[16497] = anon_sym_QMARK;
	v->a[16498] = anon_sym_DOLLAR;
	v->a[16499] = anon_sym_POUND;
	small_parse_table_825(v);
}

/* EOF small_parse_table_164.c */
