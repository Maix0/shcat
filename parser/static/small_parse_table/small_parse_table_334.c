/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_334.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1670(t_small_parse_table_array *v)
{
	v->a[33400] = sym_comment;
	v->a[33401] = actions(1246);
	v->a[33402] = 1;
	v->a[33403] = aux_sym_concatenation_token1;
	v->a[33404] = actions(1249);
	v->a[33405] = 1;
	v->a[33406] = sym__concat;
	v->a[33407] = state(411);
	v->a[33408] = 1;
	v->a[33409] = aux_sym_concatenation_repeat1;
	v->a[33410] = actions(1194);
	v->a[33411] = 2;
	v->a[33412] = sym_file_descriptor;
	v->a[33413] = sym_variable_name;
	v->a[33414] = actions(1189);
	v->a[33415] = 27;
	v->a[33416] = anon_sym_PIPE;
	v->a[33417] = anon_sym_RPAREN;
	v->a[33418] = anon_sym_SEMI_SEMI;
	v->a[33419] = anon_sym_AMP_AMP;
	small_parse_table_1671(v);
}

void	small_parse_table_1671(t_small_parse_table_array *v)
{
	v->a[33420] = anon_sym_PIPE_PIPE;
	v->a[33421] = anon_sym_LT;
	v->a[33422] = anon_sym_GT;
	v->a[33423] = anon_sym_GT_GT;
	v->a[33424] = anon_sym_LT_AMP;
	v->a[33425] = anon_sym_GT_AMP;
	v->a[33426] = anon_sym_GT_PIPE;
	v->a[33427] = anon_sym_LT_AMP_DASH;
	v->a[33428] = anon_sym_GT_AMP_DASH;
	v->a[33429] = anon_sym_LT_LT;
	v->a[33430] = anon_sym_LT_LT_DASH;
	v->a[33431] = aux_sym_heredoc_redirect_token1;
	v->a[33432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33433] = anon_sym_AMP;
	v->a[33434] = anon_sym_DOLLAR;
	v->a[33435] = anon_sym_DQUOTE;
	v->a[33436] = sym_raw_string;
	v->a[33437] = sym_number;
	v->a[33438] = anon_sym_DOLLAR_LBRACE;
	v->a[33439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1672(v);
}

void	small_parse_table_1672(t_small_parse_table_array *v)
{
	v->a[33440] = anon_sym_BQUOTE;
	v->a[33441] = sym_word;
	v->a[33442] = anon_sym_SEMI;
	v->a[33443] = 3;
	v->a[33444] = actions(3);
	v->a[33445] = 1;
	v->a[33446] = sym_comment;
	v->a[33447] = actions(1027);
	v->a[33448] = 3;
	v->a[33449] = sym_file_descriptor;
	v->a[33450] = sym__concat;
	v->a[33451] = sym__bare_dollar;
	v->a[33452] = actions(1025);
	v->a[33453] = 29;
	v->a[33454] = anon_sym_esac;
	v->a[33455] = anon_sym_LPAREN;
	v->a[33456] = anon_sym_PIPE;
	v->a[33457] = anon_sym_SEMI_SEMI;
	v->a[33458] = anon_sym_AMP_AMP;
	v->a[33459] = anon_sym_PIPE_PIPE;
	small_parse_table_1673(v);
}

void	small_parse_table_1673(t_small_parse_table_array *v)
{
	v->a[33460] = anon_sym_LT;
	v->a[33461] = anon_sym_GT;
	v->a[33462] = anon_sym_GT_GT;
	v->a[33463] = anon_sym_LT_AMP;
	v->a[33464] = anon_sym_GT_AMP;
	v->a[33465] = anon_sym_GT_PIPE;
	v->a[33466] = anon_sym_LT_AMP_DASH;
	v->a[33467] = anon_sym_GT_AMP_DASH;
	v->a[33468] = anon_sym_LT_LT;
	v->a[33469] = anon_sym_LT_LT_DASH;
	v->a[33470] = aux_sym_heredoc_redirect_token1;
	v->a[33471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33472] = anon_sym_AMP;
	v->a[33473] = aux_sym_concatenation_token1;
	v->a[33474] = anon_sym_DOLLAR;
	v->a[33475] = anon_sym_DQUOTE;
	v->a[33476] = sym_raw_string;
	v->a[33477] = sym_number;
	v->a[33478] = anon_sym_DOLLAR_LBRACE;
	v->a[33479] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1674(v);
}

void	small_parse_table_1674(t_small_parse_table_array *v)
{
	v->a[33480] = anon_sym_BQUOTE;
	v->a[33481] = sym_word;
	v->a[33482] = anon_sym_SEMI;
	v->a[33483] = 21;
	v->a[33484] = actions(3);
	v->a[33485] = 1;
	v->a[33486] = sym_comment;
	v->a[33487] = actions(166);
	v->a[33488] = 1;
	v->a[33489] = anon_sym_LPAREN;
	v->a[33490] = actions(176);
	v->a[33491] = 1;
	v->a[33492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33493] = actions(178);
	v->a[33494] = 1;
	v->a[33495] = anon_sym_DOLLAR;
	v->a[33496] = actions(180);
	v->a[33497] = 1;
	v->a[33498] = anon_sym_DQUOTE;
	v->a[33499] = actions(184);
	small_parse_table_1675(v);
}

/* EOF small_parse_table_334.c */
