/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_584.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2920(t_small_parse_table_array *v)
{
	v->a[58400] = aux_sym_concatenation_token1;
	v->a[58401] = anon_sym_SEMI;
	v->a[58402] = 15;
	v->a[58403] = actions(3);
	v->a[58404] = 1;
	v->a[58405] = sym_comment;
	v->a[58406] = actions(1637);
	v->a[58407] = 1;
	v->a[58408] = anon_sym_LPAREN;
	v->a[58409] = actions(1641);
	v->a[58410] = 1;
	v->a[58411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58412] = actions(1643);
	v->a[58413] = 1;
	v->a[58414] = anon_sym_DOLLAR;
	v->a[58415] = actions(1645);
	v->a[58416] = 1;
	v->a[58417] = anon_sym_DQUOTE;
	v->a[58418] = actions(1647);
	v->a[58419] = 1;
	small_parse_table_2921(v);
}

void	small_parse_table_2921(t_small_parse_table_array *v)
{
	v->a[58420] = anon_sym_DOLLAR_LBRACE;
	v->a[58421] = actions(1649);
	v->a[58422] = 1;
	v->a[58423] = anon_sym_DOLLAR_LPAREN;
	v->a[58424] = actions(1651);
	v->a[58425] = 1;
	v->a[58426] = anon_sym_BQUOTE;
	v->a[58427] = actions(1653);
	v->a[58428] = 1;
	v->a[58429] = sym_extglob_pattern;
	v->a[58430] = state(1123);
	v->a[58431] = 1;
	v->a[58432] = aux_sym_case_statement_repeat1;
	v->a[58433] = state(1713);
	v->a[58434] = 1;
	v->a[58435] = sym_case_item;
	v->a[58436] = state(2061);
	v->a[58437] = 1;
	v->a[58438] = sym__case_item_last;
	v->a[58439] = state(1873);
	small_parse_table_2922(v);
}

void	small_parse_table_2922(t_small_parse_table_array *v)
{
	v->a[58440] = 2;
	v->a[58441] = sym_concatenation;
	v->a[58442] = sym__extglob_blob;
	v->a[58443] = actions(1633);
	v->a[58444] = 3;
	v->a[58445] = sym_raw_string;
	v->a[58446] = sym_number;
	v->a[58447] = sym_word;
	v->a[58448] = state(1806);
	v->a[58449] = 5;
	v->a[58450] = sym_arithmetic_expansion;
	v->a[58451] = sym_string;
	v->a[58452] = sym_simple_expansion;
	v->a[58453] = sym_expansion;
	v->a[58454] = sym_command_substitution;
	v->a[58455] = 15;
	v->a[58456] = actions(3);
	v->a[58457] = 1;
	v->a[58458] = sym_comment;
	v->a[58459] = actions(1637);
	small_parse_table_2923(v);
}

void	small_parse_table_2923(t_small_parse_table_array *v)
{
	v->a[58460] = 1;
	v->a[58461] = anon_sym_LPAREN;
	v->a[58462] = actions(1641);
	v->a[58463] = 1;
	v->a[58464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58465] = actions(1643);
	v->a[58466] = 1;
	v->a[58467] = anon_sym_DOLLAR;
	v->a[58468] = actions(1645);
	v->a[58469] = 1;
	v->a[58470] = anon_sym_DQUOTE;
	v->a[58471] = actions(1647);
	v->a[58472] = 1;
	v->a[58473] = anon_sym_DOLLAR_LBRACE;
	v->a[58474] = actions(1649);
	v->a[58475] = 1;
	v->a[58476] = anon_sym_DOLLAR_LPAREN;
	v->a[58477] = actions(1651);
	v->a[58478] = 1;
	v->a[58479] = anon_sym_BQUOTE;
	small_parse_table_2924(v);
}

void	small_parse_table_2924(t_small_parse_table_array *v)
{
	v->a[58480] = actions(1653);
	v->a[58481] = 1;
	v->a[58482] = sym_extglob_pattern;
	v->a[58483] = state(1123);
	v->a[58484] = 1;
	v->a[58485] = aux_sym_case_statement_repeat1;
	v->a[58486] = state(1713);
	v->a[58487] = 1;
	v->a[58488] = sym_case_item;
	v->a[58489] = state(2028);
	v->a[58490] = 1;
	v->a[58491] = sym__case_item_last;
	v->a[58492] = state(1873);
	v->a[58493] = 2;
	v->a[58494] = sym_concatenation;
	v->a[58495] = sym__extglob_blob;
	v->a[58496] = actions(1633);
	v->a[58497] = 3;
	v->a[58498] = sym_raw_string;
	v->a[58499] = sym_number;
	small_parse_table_2925(v);
}

/* EOF small_parse_table_584.c */
