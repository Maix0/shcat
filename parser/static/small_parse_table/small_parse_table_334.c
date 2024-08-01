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
	v->a[33400] = sym_number;
	v->a[33401] = anon_sym_DOLLAR_LBRACE;
	v->a[33402] = anon_sym_DOLLAR_LPAREN;
	v->a[33403] = sym_word;
	v->a[33404] = actions(1276);
	v->a[33405] = 11;
	v->a[33406] = anon_sym_PIPE;
	v->a[33407] = anon_sym_SEMI_SEMI;
	v->a[33408] = anon_sym_AMP_AMP;
	v->a[33409] = anon_sym_PIPE_PIPE;
	v->a[33410] = anon_sym_LT;
	v->a[33411] = anon_sym_GT;
	v->a[33412] = anon_sym_GT_GT;
	v->a[33413] = anon_sym_LT_LT;
	v->a[33414] = aux_sym_heredoc_redirect_token1;
	v->a[33415] = anon_sym_BQUOTE;
	v->a[33416] = anon_sym_SEMI;
	v->a[33417] = 12;
	v->a[33418] = actions(3);
	v->a[33419] = 1;
	small_parse_table_1671(v);
}

void	small_parse_table_1671(t_small_parse_table_array *v)
{
	v->a[33420] = sym_comment;
	v->a[33421] = actions(655);
	v->a[33422] = 1;
	v->a[33423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33424] = actions(657);
	v->a[33425] = 1;
	v->a[33426] = anon_sym_DOLLAR;
	v->a[33427] = actions(659);
	v->a[33428] = 1;
	v->a[33429] = anon_sym_DQUOTE;
	v->a[33430] = actions(661);
	v->a[33431] = 1;
	v->a[33432] = anon_sym_DOLLAR_LBRACE;
	v->a[33433] = actions(663);
	v->a[33434] = 1;
	v->a[33435] = anon_sym_DOLLAR_LPAREN;
	v->a[33436] = actions(665);
	v->a[33437] = 1;
	v->a[33438] = anon_sym_BQUOTE;
	v->a[33439] = state(1553);
	small_parse_table_1672(v);
}

void	small_parse_table_1672(t_small_parse_table_array *v)
{
	v->a[33440] = 1;
	v->a[33441] = sym_terminator;
	v->a[33442] = state(650);
	v->a[33443] = 2;
	v->a[33444] = sym_concatenation;
	v->a[33445] = aux_sym_for_statement_repeat1;
	v->a[33446] = actions(1346);
	v->a[33447] = 3;
	v->a[33448] = sym_raw_string;
	v->a[33449] = sym_number;
	v->a[33450] = sym_word;
	v->a[33451] = actions(1348);
	v->a[33452] = 3;
	v->a[33453] = anon_sym_SEMI_SEMI;
	v->a[33454] = aux_sym_heredoc_redirect_token1;
	v->a[33455] = anon_sym_SEMI;
	v->a[33456] = state(857);
	v->a[33457] = 5;
	v->a[33458] = sym_arithmetic_expansion;
	v->a[33459] = sym_string;
	small_parse_table_1673(v);
}

void	small_parse_table_1673(t_small_parse_table_array *v)
{
	v->a[33460] = sym_simple_expansion;
	v->a[33461] = sym_expansion;
	v->a[33462] = sym_command_substitution;
	v->a[33463] = 6;
	v->a[33464] = actions(3);
	v->a[33465] = 1;
	v->a[33466] = sym_comment;
	v->a[33467] = actions(921);
	v->a[33468] = 1;
	v->a[33469] = sym_variable_name;
	v->a[33470] = actions(1342);
	v->a[33471] = 1;
	v->a[33472] = aux_sym_concatenation_token1;
	v->a[33473] = actions(1412);
	v->a[33474] = 1;
	v->a[33475] = sym__concat;
	v->a[33476] = state(596);
	v->a[33477] = 1;
	v->a[33478] = aux_sym_concatenation_repeat1;
	v->a[33479] = actions(923);
	small_parse_table_1674(v);
}

void	small_parse_table_1674(t_small_parse_table_array *v)
{
	v->a[33480] = 16;
	v->a[33481] = anon_sym_PIPE;
	v->a[33482] = anon_sym_AMP_AMP;
	v->a[33483] = anon_sym_PIPE_PIPE;
	v->a[33484] = anon_sym_LT;
	v->a[33485] = anon_sym_GT;
	v->a[33486] = anon_sym_GT_GT;
	v->a[33487] = anon_sym_LT_LT;
	v->a[33488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33489] = anon_sym_DOLLAR;
	v->a[33490] = anon_sym_DQUOTE;
	v->a[33491] = sym_raw_string;
	v->a[33492] = sym_number;
	v->a[33493] = anon_sym_DOLLAR_LBRACE;
	v->a[33494] = anon_sym_DOLLAR_LPAREN;
	v->a[33495] = anon_sym_BQUOTE;
	v->a[33496] = sym_word;
	v->a[33497] = 6;
	v->a[33498] = actions(3);
	v->a[33499] = 1;
	small_parse_table_1675(v);
}

/* EOF small_parse_table_334.c */
