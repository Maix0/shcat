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
	v->a[400] = shift(488);
	v->a[401] = entry(1, false);
	v->a[402] = shift(261);
	v->a[403] = entry(1, false);
	v->a[404] = reduce(sym_command, 3, 0, 31);
	v->a[405] = entry(1, true);
	v->a[406] = shift(523);
	v->a[407] = entry(1, true);
	v->a[408] = reduce(sym_command, 2, 0, 11);
	v->a[409] = entry(1, false);
	v->a[410] = shift(273);
	v->a[411] = entry(1, false);
	v->a[412] = reduce(sym_command, 2, 0, 11);
	v->a[413] = entry(1, true);
	v->a[414] = shift(564);
	v->a[415] = entry(1, false);
	v->a[416] = shift(289);
	v->a[417] = entry(1, false);
	v->a[418] = reduce(sym_command, 1, 0, 3);
	v->a[419] = entry(1, true);
	parse_actions_entries_21(v);
}

void	parse_actions_entries_21(t_parse_actions_entries_array *v)
{
	v->a[420] = shift(570);
	v->a[421] = entry(1, false);
	v->a[422] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[423] = entry(1, true);
	v->a[424] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[425] = entry(2, false);
	v->a[426] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[427] = shift_repeat(282);
	v->a[428] = entry(1, false);
	v->a[429] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[430] = entry(2, false);
	v->a[431] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[432] = shift_repeat(670);
	v->a[433] = entry(2, false);
	v->a[434] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[435] = shift_repeat(1206);
	v->a[436] = entry(2, false);
	v->a[437] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[438] = shift_repeat(1100);
	v->a[439] = entry(2, false);
	parse_actions_entries_22(v);
}

void	parse_actions_entries_22(t_parse_actions_entries_array *v)
{
	v->a[440] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[441] = shift_repeat(1102);
	v->a[442] = entry(2, false);
	v->a[443] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[444] = shift_repeat(86);
	v->a[445] = entry(2, false);
	v->a[446] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[447] = shift_repeat(87);
	v->a[448] = entry(1, true);
	v->a[449] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[450] = entry(1, false);
	v->a[451] = reduce(sym_command, 2, 0, 14);
	v->a[452] = entry(2, false);
	v->a[453] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[454] = shift_repeat(289);
	v->a[455] = entry(1, false);
	v->a[456] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[457] = entry(2, false);
	v->a[458] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[459] = shift_repeat(673);
	parse_actions_entries_23(v);
}

void	parse_actions_entries_23(t_parse_actions_entries_array *v)
{
	v->a[460] = entry(2, false);
	v->a[461] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[462] = shift_repeat(1213);
	v->a[463] = entry(2, false);
	v->a[464] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[465] = shift_repeat(1104);
	v->a[466] = entry(2, false);
	v->a[467] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[468] = shift_repeat(1105);
	v->a[469] = entry(2, false);
	v->a[470] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[471] = shift_repeat(97);
	v->a[472] = entry(2, false);
	v->a[473] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[474] = shift_repeat(98);
	v->a[475] = entry(2, true);
	v->a[476] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[477] = shift_repeat(570);
	v->a[478] = entry(2, false);
	v->a[479] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_24(v);
}

void	parse_actions_entries_24(t_parse_actions_entries_array *v)
{
	v->a[480] = shift_repeat(258);
	v->a[481] = entry(2, false);
	v->a[482] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[483] = shift_repeat(665);
	v->a[484] = entry(2, false);
	v->a[485] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[486] = shift_repeat(1249);
	v->a[487] = entry(2, false);
	v->a[488] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[489] = shift_repeat(1111);
	v->a[490] = entry(2, false);
	v->a[491] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[492] = shift_repeat(1110);
	v->a[493] = entry(2, false);
	v->a[494] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[495] = shift_repeat(78);
	v->a[496] = entry(2, false);
	v->a[497] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[498] = shift_repeat(77);
	v->a[499] = entry(1, true);
	parse_actions_entries_25(v);
}

/* EOF parse_actions_entries_4.c */
