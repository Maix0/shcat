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
	v->a[33400] = 1;
	v->a[33401] = aux_sym_concatenation_repeat1;
	v->a[33402] = actions(1110);
	v->a[33403] = 2;
	v->a[33404] = sym_file_descriptor;
	v->a[33405] = sym_variable_name;
	v->a[33406] = actions(1105);
	v->a[33407] = 25;
	v->a[33408] = anon_sym_PIPE;
	v->a[33409] = anon_sym_RPAREN;
	v->a[33410] = anon_sym_SEMI_SEMI;
	v->a[33411] = anon_sym_AMP_AMP;
	v->a[33412] = anon_sym_PIPE_PIPE;
	v->a[33413] = anon_sym_LT;
	v->a[33414] = anon_sym_GT;
	v->a[33415] = anon_sym_GT_GT;
	v->a[33416] = anon_sym_LT_AMP;
	v->a[33417] = anon_sym_GT_AMP;
	v->a[33418] = anon_sym_GT_PIPE;
	v->a[33419] = anon_sym_LT_GT;
	small_parse_table_1671(v);
}

void	small_parse_table_1671(t_small_parse_table_array *v)
{
	v->a[33420] = anon_sym_LT_LT;
	v->a[33421] = anon_sym_LT_LT_DASH;
	v->a[33422] = aux_sym_heredoc_redirect_token1;
	v->a[33423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33424] = anon_sym_DOLLAR;
	v->a[33425] = anon_sym_DQUOTE;
	v->a[33426] = sym_raw_string;
	v->a[33427] = sym_number;
	v->a[33428] = anon_sym_DOLLAR_LBRACE;
	v->a[33429] = anon_sym_DOLLAR_LPAREN;
	v->a[33430] = anon_sym_BQUOTE;
	v->a[33431] = sym_word;
	v->a[33432] = anon_sym_SEMI;
	v->a[33433] = 12;
	v->a[33434] = actions(3);
	v->a[33435] = 1;
	v->a[33436] = sym_comment;
	v->a[33437] = actions(678);
	v->a[33438] = 1;
	v->a[33439] = sym_file_descriptor;
	small_parse_table_1672(v);
}

void	small_parse_table_1672(t_small_parse_table_array *v)
{
	v->a[33440] = actions(962);
	v->a[33441] = 1;
	v->a[33442] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33443] = actions(964);
	v->a[33444] = 1;
	v->a[33445] = anon_sym_DOLLAR;
	v->a[33446] = actions(966);
	v->a[33447] = 1;
	v->a[33448] = anon_sym_DQUOTE;
	v->a[33449] = actions(968);
	v->a[33450] = 1;
	v->a[33451] = anon_sym_DOLLAR_LBRACE;
	v->a[33452] = actions(970);
	v->a[33453] = 1;
	v->a[33454] = anon_sym_DOLLAR_LPAREN;
	v->a[33455] = actions(972);
	v->a[33456] = 1;
	v->a[33457] = anon_sym_BQUOTE;
	v->a[33458] = state(442);
	v->a[33459] = 2;
	small_parse_table_1673(v);
}

void	small_parse_table_1673(t_small_parse_table_array *v)
{
	v->a[33460] = sym_concatenation;
	v->a[33461] = aux_sym_for_statement_repeat1;
	v->a[33462] = actions(1297);
	v->a[33463] = 3;
	v->a[33464] = sym_raw_string;
	v->a[33465] = sym_number;
	v->a[33466] = sym_word;
	v->a[33467] = state(780);
	v->a[33468] = 5;
	v->a[33469] = sym_arithmetic_expansion;
	v->a[33470] = sym_string;
	v->a[33471] = sym_simple_expansion;
	v->a[33472] = sym_expansion;
	v->a[33473] = sym_command_substitution;
	v->a[33474] = actions(676);
	v->a[33475] = 13;
	v->a[33476] = anon_sym_PIPE;
	v->a[33477] = anon_sym_AMP_AMP;
	v->a[33478] = anon_sym_PIPE_PIPE;
	v->a[33479] = anon_sym_LT;
	small_parse_table_1674(v);
}

void	small_parse_table_1674(t_small_parse_table_array *v)
{
	v->a[33480] = anon_sym_GT;
	v->a[33481] = anon_sym_GT_GT;
	v->a[33482] = anon_sym_LT_AMP;
	v->a[33483] = anon_sym_GT_AMP;
	v->a[33484] = anon_sym_GT_PIPE;
	v->a[33485] = anon_sym_LT_GT;
	v->a[33486] = anon_sym_LT_LT;
	v->a[33487] = anon_sym_LT_LT_DASH;
	v->a[33488] = aux_sym_heredoc_redirect_token1;
	v->a[33489] = 6;
	v->a[33490] = actions(3);
	v->a[33491] = 1;
	v->a[33492] = sym_comment;
	v->a[33493] = actions(1243);
	v->a[33494] = 1;
	v->a[33495] = aux_sym_concatenation_token1;
	v->a[33496] = actions(1305);
	v->a[33497] = 1;
	v->a[33498] = sym__concat;
	v->a[33499] = state(402);
	small_parse_table_1675(v);
}

/* EOF small_parse_table_334.c */
