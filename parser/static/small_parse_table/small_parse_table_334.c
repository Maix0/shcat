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
	v->a[33401] = anon_sym_DOLLAR_LBRACE;
	v->a[33402] = actions(35);
	v->a[33403] = 1;
	v->a[33404] = anon_sym_DOLLAR_LPAREN;
	v->a[33405] = actions(37);
	v->a[33406] = 1;
	v->a[33407] = anon_sym_BQUOTE;
	v->a[33408] = actions(41);
	v->a[33409] = 1;
	v->a[33410] = sym_variable_name;
	v->a[33411] = actions(1164);
	v->a[33412] = 1;
	v->a[33413] = sym_file_descriptor;
	v->a[33414] = state(175);
	v->a[33415] = 1;
	v->a[33416] = sym_command_name;
	v->a[33417] = state(583);
	v->a[33418] = 1;
	v->a[33419] = sym_concatenation;
	small_parse_table_1671(v);
}

void	small_parse_table_1671(t_small_parse_table_array *v)
{
	v->a[33420] = state(624);
	v->a[33421] = 1;
	v->a[33422] = aux_sym_command_repeat1;
	v->a[33423] = state(631);
	v->a[33424] = 1;
	v->a[33425] = sym_variable_assignment;
	v->a[33426] = state(1109);
	v->a[33427] = 1;
	v->a[33428] = sym_subshell;
	v->a[33429] = state(1113);
	v->a[33430] = 1;
	v->a[33431] = sym_command;
	v->a[33432] = state(1218);
	v->a[33433] = 1;
	v->a[33434] = sym_file_redirect;
	v->a[33435] = actions(31);
	v->a[33436] = 3;
	v->a[33437] = sym_raw_string;
	v->a[33438] = sym_number;
	v->a[33439] = sym_word;
	small_parse_table_1672(v);
}

void	small_parse_table_1672(t_small_parse_table_array *v)
{
	v->a[33440] = state(345);
	v->a[33441] = 5;
	v->a[33442] = sym_arithmetic_expansion;
	v->a[33443] = sym_string;
	v->a[33444] = sym_simple_expansion;
	v->a[33445] = sym_expansion;
	v->a[33446] = sym_command_substitution;
	v->a[33447] = actions(1162);
	v->a[33448] = 7;
	v->a[33449] = anon_sym_LT;
	v->a[33450] = anon_sym_GT;
	v->a[33451] = anon_sym_GT_GT;
	v->a[33452] = anon_sym_LT_AMP;
	v->a[33453] = anon_sym_GT_AMP;
	v->a[33454] = anon_sym_GT_PIPE;
	v->a[33455] = anon_sym_LT_GT;
	v->a[33456] = 6;
	v->a[33457] = actions(3);
	v->a[33458] = 1;
	v->a[33459] = sym_comment;
	small_parse_table_1673(v);
}

void	small_parse_table_1673(t_small_parse_table_array *v)
{
	v->a[33460] = actions(361);
	v->a[33461] = 1;
	v->a[33462] = sym_file_descriptor;
	v->a[33463] = actions(1264);
	v->a[33464] = 1;
	v->a[33465] = sym_variable_name;
	v->a[33466] = actions(1262);
	v->a[33467] = 2;
	v->a[33468] = aux_sym__simple_variable_name_token1;
	v->a[33469] = aux_sym__multiline_variable_name_token1;
	v->a[33470] = actions(1260);
	v->a[33471] = 9;
	v->a[33472] = anon_sym_BANG;
	v->a[33473] = anon_sym_DASH;
	v->a[33474] = anon_sym_STAR;
	v->a[33475] = anon_sym_QMARK;
	v->a[33476] = anon_sym_DOLLAR;
	v->a[33477] = anon_sym_POUND;
	v->a[33478] = anon_sym_AT;
	v->a[33479] = anon_sym_0;
	small_parse_table_1674(v);
}

void	small_parse_table_1674(t_small_parse_table_array *v)
{
	v->a[33480] = anon_sym__;
	v->a[33481] = actions(363);
	v->a[33482] = 18;
	v->a[33483] = anon_sym_AMP_AMP;
	v->a[33484] = anon_sym_PIPE_PIPE;
	v->a[33485] = anon_sym_LT;
	v->a[33486] = anon_sym_GT;
	v->a[33487] = anon_sym_GT_GT;
	v->a[33488] = anon_sym_LT_AMP;
	v->a[33489] = anon_sym_GT_AMP;
	v->a[33490] = anon_sym_GT_PIPE;
	v->a[33491] = anon_sym_LT_GT;
	v->a[33492] = aux_sym_heredoc_redirect_token1;
	v->a[33493] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33494] = anon_sym_DQUOTE;
	v->a[33495] = sym_raw_string;
	v->a[33496] = sym_number;
	v->a[33497] = anon_sym_DOLLAR_LBRACE;
	v->a[33498] = anon_sym_DOLLAR_LPAREN;
	v->a[33499] = anon_sym_BQUOTE;
	small_parse_table_1675(v);
}

/* EOF small_parse_table_334.c */
