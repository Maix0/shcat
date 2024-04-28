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
	v->a[33400] = sym_string;
	v->a[33401] = actions(4056);
	v->a[33402] = 2;
	v->a[33403] = aux_sym__simple_variable_name_token1;
	v->a[33404] = aux_sym__multiline_variable_name_token1;
	v->a[33405] = actions(1235);
	v->a[33406] = 3;
	v->a[33407] = sym_file_descriptor;
	v->a[33408] = sym_test_operator;
	v->a[33409] = sym__brace_start;
	v->a[33410] = actions(4054);
	v->a[33411] = 9;
	v->a[33412] = anon_sym_DASH;
	v->a[33413] = anon_sym_STAR;
	v->a[33414] = anon_sym_BANG;
	v->a[33415] = anon_sym_QMARK;
	v->a[33416] = anon_sym_DOLLAR;
	v->a[33417] = anon_sym_POUND;
	v->a[33418] = anon_sym_AT2;
	v->a[33419] = anon_sym_0;
	small_parse_table_1671(v);
}

void	small_parse_table_1671(t_small_parse_table_array *v)
{
	v->a[33420] = anon_sym__;
	v->a[33421] = actions(1227);
	v->a[33422] = 32;
	v->a[33423] = anon_sym_LPAREN_LPAREN;
	v->a[33424] = anon_sym_PIPE_PIPE;
	v->a[33425] = anon_sym_AMP_AMP;
	v->a[33426] = anon_sym_PIPE;
	v->a[33427] = anon_sym_LT;
	v->a[33428] = anon_sym_GT;
	v->a[33429] = anon_sym_LT_LT;
	v->a[33430] = anon_sym_GT_GT;
	v->a[33431] = anon_sym_PIPE_AMP;
	v->a[33432] = anon_sym_AMP_GT;
	v->a[33433] = anon_sym_AMP_GT_GT;
	v->a[33434] = anon_sym_LT_AMP;
	v->a[33435] = anon_sym_GT_AMP;
	v->a[33436] = anon_sym_GT_PIPE;
	v->a[33437] = anon_sym_LT_AMP_DASH;
	v->a[33438] = anon_sym_GT_AMP_DASH;
	v->a[33439] = anon_sym_LT_LT_DASH;
	small_parse_table_1672(v);
}

void	small_parse_table_1672(t_small_parse_table_array *v)
{
	v->a[33440] = aux_sym_heredoc_redirect_token1;
	v->a[33441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33442] = anon_sym_DOLLAR_LBRACK;
	v->a[33443] = sym__special_character;
	v->a[33444] = sym_raw_string;
	v->a[33445] = sym_ansi_c_string;
	v->a[33446] = aux_sym_number_token1;
	v->a[33447] = aux_sym_number_token2;
	v->a[33448] = anon_sym_DOLLAR_LBRACE;
	v->a[33449] = anon_sym_DOLLAR_LPAREN;
	v->a[33450] = anon_sym_BQUOTE;
	v->a[33451] = anon_sym_DOLLAR_BQUOTE;
	v->a[33452] = anon_sym_LT_LPAREN;
	v->a[33453] = anon_sym_GT_LPAREN;
	v->a[33454] = sym_word;
	v->a[33455] = 3;
	v->a[33456] = actions(3);
	v->a[33457] = 1;
	v->a[33458] = sym_comment;
	v->a[33459] = actions(1326);
	small_parse_table_1673(v);
}

void	small_parse_table_1673(t_small_parse_table_array *v)
{
	v->a[33460] = 6;
	v->a[33461] = sym_file_descriptor;
	v->a[33462] = sym__concat;
	v->a[33463] = sym_test_operator;
	v->a[33464] = sym__bare_dollar;
	v->a[33465] = sym__brace_start;
	v->a[33466] = aux_sym_heredoc_redirect_token1;
	v->a[33467] = actions(1324);
	v->a[33468] = 43;
	v->a[33469] = anon_sym_LPAREN_LPAREN;
	v->a[33470] = anon_sym_SEMI;
	v->a[33471] = anon_sym_PIPE_PIPE;
	v->a[33472] = anon_sym_AMP_AMP;
	v->a[33473] = anon_sym_PIPE;
	v->a[33474] = anon_sym_AMP;
	v->a[33475] = anon_sym_EQ_EQ;
	v->a[33476] = anon_sym_LT;
	v->a[33477] = anon_sym_GT;
	v->a[33478] = anon_sym_LT_LT;
	v->a[33479] = anon_sym_GT_GT;
	small_parse_table_1674(v);
}

void	small_parse_table_1674(t_small_parse_table_array *v)
{
	v->a[33480] = anon_sym_esac;
	v->a[33481] = anon_sym_SEMI_SEMI;
	v->a[33482] = anon_sym_SEMI_AMP;
	v->a[33483] = anon_sym_SEMI_SEMI_AMP;
	v->a[33484] = anon_sym_PIPE_AMP;
	v->a[33485] = anon_sym_EQ_TILDE;
	v->a[33486] = anon_sym_AMP_GT;
	v->a[33487] = anon_sym_AMP_GT_GT;
	v->a[33488] = anon_sym_LT_AMP;
	v->a[33489] = anon_sym_GT_AMP;
	v->a[33490] = anon_sym_GT_PIPE;
	v->a[33491] = anon_sym_LT_AMP_DASH;
	v->a[33492] = anon_sym_GT_AMP_DASH;
	v->a[33493] = anon_sym_LT_LT_DASH;
	v->a[33494] = anon_sym_LT_LT_LT;
	v->a[33495] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33496] = anon_sym_DOLLAR_LBRACK;
	v->a[33497] = aux_sym_concatenation_token1;
	v->a[33498] = anon_sym_DOLLAR;
	v->a[33499] = sym__special_character;
	small_parse_table_1675(v);
}

/* EOF small_parse_table_334.c */
