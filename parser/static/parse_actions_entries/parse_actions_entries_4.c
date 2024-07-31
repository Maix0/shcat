/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_4.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_20(t_parse_actions_entries_array *v)
{
	v->a[400] = shift(381);
	v->a[401] = entry(1, false);
	v->a[402] = reduce(sym_arithmetic_unary_expression, 2, 0, 19);
	v->a[403] = entry(1, true);
	v->a[404] = reduce(sym_arithmetic_unary_expression, 2, 0, 19);
	v->a[405] = entry(1, true);
	v->a[406] = shift(167);
	v->a[407] = entry(1, true);
	v->a[408] = shift_extra();
	v->a[409] = entry(1, false);
	v->a[410] = shift(733);
	v->a[411] = entry(1, true);
	v->a[412] = shift(785);
	v->a[413] = entry(1, true);
	v->a[414] = shift(784);
	v->a[415] = entry(1, false);
	v->a[416] = reduce(sym_arithmetic_ternary_expression, 5, 0, 61);
	v->a[417] = entry(1, false);
	v->a[418] = shift(765);
	v->a[419] = entry(1, false);
	parse_actions_entries_21(v);
}

void	parse_actions_entries_21(t_parse_actions_entries_array *v)
{
	v->a[420] = shift(762);
	v->a[421] = entry(1, true);
	v->a[422] = reduce(sym_arithmetic_ternary_expression, 5, 0, 61);
	v->a[423] = entry(1, false);
	v->a[424] = shift(754);
	v->a[425] = entry(1, false);
	v->a[426] = shift(751);
	v->a[427] = entry(1, true);
	v->a[428] = shift(736);
	v->a[429] = entry(1, true);
	v->a[430] = shift(765);
	v->a[431] = entry(1, false);
	v->a[432] = shift(752);
	v->a[433] = entry(1, false);
	v->a[434] = shift(756);
	v->a[435] = entry(1, false);
	v->a[436] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[437] = entry(1, true);
	v->a[438] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[439] = entry(1, false);
	parse_actions_entries_22(v);
}

void	parse_actions_entries_22(t_parse_actions_entries_array *v)
{
	v->a[440] = reduce(sym_string, 4, 0, 38);
	v->a[441] = entry(1, true);
	v->a[442] = reduce(sym_string, 4, 0, 38);
	v->a[443] = entry(1, false);
	v->a[444] = reduce(sym_expansion, 3, 0, 27);
	v->a[445] = entry(1, true);
	v->a[446] = reduce(sym_expansion, 3, 0, 27);
	v->a[447] = entry(1, false);
	v->a[448] = reduce(sym_string, 3, 0, 0);
	v->a[449] = entry(1, true);
	v->a[450] = reduce(sym_string, 3, 0, 0);
	v->a[451] = entry(1, false);
	v->a[452] = reduce(sym_string, 3, 0, 21);
	v->a[453] = entry(1, true);
	v->a[454] = reduce(sym_string, 3, 0, 21);
	v->a[455] = entry(1, false);
	v->a[456] = reduce(sym_expansion, 2, 0, 0);
	v->a[457] = entry(1, true);
	v->a[458] = reduce(sym_expansion, 2, 0, 0);
	v->a[459] = entry(1, false);
	parse_actions_entries_23(v);
}

void	parse_actions_entries_23(t_parse_actions_entries_array *v)
{
	v->a[460] = reduce(sym_arithmetic_binary_expression, 3, 0, 37);
	v->a[461] = entry(1, true);
	v->a[462] = reduce(sym_arithmetic_binary_expression, 3, 0, 37);
	v->a[463] = entry(1, false);
	v->a[464] = reduce(sym_arithmetic_postfix_expression, 2, 0, 20);
	v->a[465] = entry(1, true);
	v->a[466] = reduce(sym_arithmetic_postfix_expression, 2, 0, 20);
	v->a[467] = entry(1, false);
	v->a[468] = reduce(sym_string, 2, 0, 0);
	v->a[469] = entry(1, true);
	v->a[470] = reduce(sym_string, 2, 0, 0);
	v->a[471] = entry(1, false);
	v->a[472] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[473] = entry(1, true);
	v->a[474] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[475] = entry(1, false);
	v->a[476] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[477] = entry(1, true);
	v->a[478] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[479] = entry(1, true);
	parse_actions_entries_24(v);
}

void	parse_actions_entries_24(t_parse_actions_entries_array *v)
{
	v->a[480] = shift(720);
	v->a[481] = entry(1, false);
	v->a[482] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[483] = entry(1, true);
	v->a[484] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[485] = entry(1, false);
	v->a[486] = shift(772);
	v->a[487] = entry(1, false);
	v->a[488] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[489] = entry(1, true);
	v->a[490] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[491] = entry(1, true);
	v->a[492] = shift(699);
	v->a[493] = entry(1, true);
	v->a[494] = shift(759);
	v->a[495] = entry(1, false);
	v->a[496] = shift(357);
	v->a[497] = entry(1, false);
	v->a[498] = reduce(sym_command, 1, 0, 3);
	v->a[499] = entry(1, true);
	parse_actions_entries_25(v);
}

/* EOF parse_actions_entries_4.c */
