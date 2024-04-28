/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_124.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_620(t_parse_actions_entries_array *v)
{
	v->a[12400] = reduce(sym_case_item, 4, 0, 107);
	v->a[12401] = entry(1, true);
	v->a[12402] = reduce(sym_case_item, 4, 0, 107);
	v->a[12403] = entry(1, false);
	v->a[12404] = reduce(sym_last_case_item, 4, 0, 45);
	v->a[12405] = entry(1, false);
	v->a[12406] = reduce(sym_case_item, 4, 0, 103);
	v->a[12407] = entry(1, true);
	v->a[12408] = reduce(sym_case_item, 4, 0, 103);
	v->a[12409] = entry(1, false);
	v->a[12410] = reduce(sym_last_case_item, 4, 0, 59);
	v->a[12411] = entry(1, false);
	v->a[12412] = shift(3669);
	v->a[12413] = entry(1, true);
	v->a[12414] = shift(3669);
	v->a[12415] = entry(1, true);
	v->a[12416] = shift(944);
	v->a[12417] = entry(1, true);
	v->a[12418] = shift(3716);
	v->a[12419] = entry(1, true);
	parse_actions_entries_621(v);
}

void	parse_actions_entries_621(t_parse_actions_entries_array *v)
{
	v->a[12420] = shift(6118);
	v->a[12421] = entry(1, true);
	v->a[12422] = shift(3454);
	v->a[12423] = entry(1, false);
	v->a[12424] = reduce(sym_case_item, 3, 0, 81);
	v->a[12425] = entry(1, true);
	v->a[12426] = reduce(sym_case_item, 3, 0, 81);
	v->a[12427] = entry(1, false);
	v->a[12428] = reduce(sym_last_case_item, 3, 0, 60);
	v->a[12429] = entry(1, false);
	v->a[12430] = reduce(sym_case_item, 3, 0, 77);
	v->a[12431] = entry(1, true);
	v->a[12432] = reduce(sym_case_item, 3, 0, 77);
	v->a[12433] = entry(1, false);
	v->a[12434] = reduce(sym_last_case_item, 3, 0, 59);
	v->a[12435] = entry(1, true);
	v->a[12436] = shift(3866);
	v->a[12437] = entry(1, true);
	v->a[12438] = shift(4157);
	v->a[12439] = entry(1, false);
	parse_actions_entries_622(v);
}

void	parse_actions_entries_622(t_parse_actions_entries_array *v)
{
	v->a[12440] = shift(3633);
	v->a[12441] = entry(1, false);
	v->a[12442] = shift(908);
	v->a[12443] = entry(1, false);
	v->a[12444] = shift(4188);
	v->a[12445] = entry(1, true);
	v->a[12446] = shift(6120);
	v->a[12447] = entry(1, false);
	v->a[12448] = reduce(sym_case_item, 5, 0, 136);
	v->a[12449] = entry(1, true);
	v->a[12450] = reduce(sym_case_item, 5, 0, 136);
	v->a[12451] = entry(1, false);
	v->a[12452] = reduce(sym_last_case_item, 5, 0, 45);
	v->a[12453] = entry(1, true);
	v->a[12454] = shift(4159);
	v->a[12455] = entry(2, false);
	v->a[12456] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12457] = shift_repeat(3633);
	v->a[12458] = entry(2, false);
	v->a[12459] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	parse_actions_entries_623(v);
}

void	parse_actions_entries_623(t_parse_actions_entries_array *v)
{
	v->a[12460] = shift_repeat(908);
	v->a[12461] = entry(2, false);
	v->a[12462] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12463] = shift_repeat(4188);
	v->a[12464] = entry(2, true);
	v->a[12465] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12466] = shift_repeat(6120);
	v->a[12467] = entry(1, false);
	v->a[12468] = reduce(sym_case_item, 5, 0, 144);
	v->a[12469] = entry(1, true);
	v->a[12470] = reduce(sym_case_item, 5, 0, 144);
	v->a[12471] = entry(1, false);
	v->a[12472] = reduce(sym_last_case_item, 5, 0, 83);
	v->a[12473] = entry(1, true);
	v->a[12474] = shift(3762);
	v->a[12475] = entry(1, true);
	v->a[12476] = shift(3405);
	v->a[12477] = entry(1, true);
	v->a[12478] = shift(3404);
	v->a[12479] = entry(1, true);
	parse_actions_entries_624(v);
}

void	parse_actions_entries_624(t_parse_actions_entries_array *v)
{
	v->a[12480] = shift(3403);
	v->a[12481] = entry(2, true);
	v->a[12482] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[12483] = shift_repeat(3870);
	v->a[12484] = entry(1, true);
	v->a[12485] = shift(3402);
	v->a[12486] = entry(1, true);
	v->a[12487] = shift(3399);
	v->a[12488] = entry(1, true);
	v->a[12489] = shift(3395);
	v->a[12490] = entry(1, false);
	v->a[12491] = reduce(sym_case_item, 5, 0, 138);
	v->a[12492] = entry(1, true);
	v->a[12493] = reduce(sym_case_item, 5, 0, 138);
	v->a[12494] = entry(1, false);
	v->a[12495] = reduce(sym_last_case_item, 5, 0, 109);
	v->a[12496] = entry(1, true);
	v->a[12497] = shift(3394);
	v->a[12498] = entry(1, false);
	v->a[12499] = shift(3689);
	parse_actions_entries_625(v);
}

/* EOF parse_actions_entries_124.c */
