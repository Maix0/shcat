/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_404.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2020(t_small_parse_table_array *v)
{
	v->a[40400] = actions(663);
	v->a[40401] = 1;
	v->a[40402] = anon_sym_DOLLAR_LPAREN;
	v->a[40403] = actions(665);
	v->a[40404] = 1;
	v->a[40405] = anon_sym_BQUOTE;
	v->a[40406] = state(594);
	v->a[40407] = 2;
	v->a[40408] = sym_concatenation;
	v->a[40409] = aux_sym_for_statement_repeat1;
	v->a[40410] = actions(1346);
	v->a[40411] = 3;
	v->a[40412] = sym_raw_string;
	v->a[40413] = sym_number;
	v->a[40414] = sym_word;
	v->a[40415] = state(857);
	v->a[40416] = 5;
	v->a[40417] = sym_arithmetic_expansion;
	v->a[40418] = sym_string;
	v->a[40419] = sym_simple_expansion;
	small_parse_table_2021(v);
}

void	small_parse_table_2021(t_small_parse_table_array *v)
{
	v->a[40420] = sym_expansion;
	v->a[40421] = sym_command_substitution;
	v->a[40422] = 10;
	v->a[40423] = actions(3);
	v->a[40424] = 1;
	v->a[40425] = sym_comment;
	v->a[40426] = actions(1597);
	v->a[40427] = 1;
	v->a[40428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40429] = actions(1599);
	v->a[40430] = 1;
	v->a[40431] = anon_sym_DOLLAR;
	v->a[40432] = actions(1601);
	v->a[40433] = 1;
	v->a[40434] = anon_sym_DQUOTE;
	v->a[40435] = actions(1603);
	v->a[40436] = 1;
	v->a[40437] = anon_sym_DOLLAR_LBRACE;
	v->a[40438] = actions(1605);
	v->a[40439] = 1;
	small_parse_table_2022(v);
}

void	small_parse_table_2022(t_small_parse_table_array *v)
{
	v->a[40440] = anon_sym_DOLLAR_LPAREN;
	v->a[40441] = actions(1607);
	v->a[40442] = 1;
	v->a[40443] = anon_sym_BQUOTE;
	v->a[40444] = state(285);
	v->a[40445] = 2;
	v->a[40446] = sym_concatenation;
	v->a[40447] = aux_sym_for_statement_repeat1;
	v->a[40448] = actions(1860);
	v->a[40449] = 3;
	v->a[40450] = sym_raw_string;
	v->a[40451] = sym_number;
	v->a[40452] = sym_word;
	v->a[40453] = state(589);
	v->a[40454] = 5;
	v->a[40455] = sym_arithmetic_expansion;
	v->a[40456] = sym_string;
	v->a[40457] = sym_simple_expansion;
	v->a[40458] = sym_expansion;
	v->a[40459] = sym_command_substitution;
	small_parse_table_2023(v);
}

void	small_parse_table_2023(t_small_parse_table_array *v)
{
	v->a[40460] = 10;
	v->a[40461] = actions(3);
	v->a[40462] = 1;
	v->a[40463] = sym_comment;
	v->a[40464] = actions(1479);
	v->a[40465] = 1;
	v->a[40466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40467] = actions(1481);
	v->a[40468] = 1;
	v->a[40469] = anon_sym_DOLLAR;
	v->a[40470] = actions(1483);
	v->a[40471] = 1;
	v->a[40472] = anon_sym_DQUOTE;
	v->a[40473] = actions(1485);
	v->a[40474] = 1;
	v->a[40475] = anon_sym_DOLLAR_LBRACE;
	v->a[40476] = actions(1487);
	v->a[40477] = 1;
	v->a[40478] = anon_sym_DOLLAR_LPAREN;
	v->a[40479] = actions(1489);
	small_parse_table_2024(v);
}

void	small_parse_table_2024(t_small_parse_table_array *v)
{
	v->a[40480] = 1;
	v->a[40481] = anon_sym_BQUOTE;
	v->a[40482] = state(249);
	v->a[40483] = 2;
	v->a[40484] = sym_concatenation;
	v->a[40485] = aux_sym_for_statement_repeat1;
	v->a[40486] = actions(1862);
	v->a[40487] = 3;
	v->a[40488] = sym_raw_string;
	v->a[40489] = sym_number;
	v->a[40490] = sym_word;
	v->a[40491] = state(530);
	v->a[40492] = 5;
	v->a[40493] = sym_arithmetic_expansion;
	v->a[40494] = sym_string;
	v->a[40495] = sym_simple_expansion;
	v->a[40496] = sym_expansion;
	v->a[40497] = sym_command_substitution;
	v->a[40498] = 10;
	v->a[40499] = actions(3);
	small_parse_table_2025(v);
}

/* EOF small_parse_table_404.c */
