/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_73.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_365(t_parse_actions_entries_array *v)
{
	v->a[7300] = entry(1, false);
	v->a[7301] = shift(3264);
	v->a[7302] = entry(1, true);
	v->a[7303] = shift(3264);
	v->a[7304] = entry(1, true);
	v->a[7305] = shift(3389);
	v->a[7306] = entry(1, true);
	v->a[7307] = shift(2530);
	v->a[7308] = entry(1, false);
	v->a[7309] = reduce(sym_case_item, 6, 0, 91);
	v->a[7310] = entry(1, false);
	v->a[7311] = reduce(sym_last_case_item, 6, 0, 67);
	v->a[7312] = entry(1, true);
	v->a[7313] = reduce(sym_case_item, 6, 0, 91);
	v->a[7314] = entry(1, true);
	v->a[7315] = shift(2526);
	v->a[7316] = entry(1, false);
	v->a[7317] = reduce(sym_case_item, 6, 0, 89);
	v->a[7318] = entry(1, false);
	v->a[7319] = reduce(sym_last_case_item, 6, 0, 64);
	parse_actions_entries_366(v);
}

void	parse_actions_entries_366(t_parse_actions_entries_array *v)
{
	v->a[7320] = entry(1, true);
	v->a[7321] = reduce(sym_case_item, 6, 0, 89);
	v->a[7322] = entry(2, false);
	v->a[7323] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[7324] = shift_repeat(2392);
	v->a[7325] = entry(2, true);
	v->a[7326] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[7327] = shift_repeat(2392);
	v->a[7328] = entry(1, false);
	v->a[7329] = reduce(sym_case_item, 5, 0, 86);
	v->a[7330] = entry(1, false);
	v->a[7331] = reduce(sym_last_case_item, 5, 0, 52);
	v->a[7332] = entry(1, true);
	v->a[7333] = reduce(sym_case_item, 5, 0, 86);
	v->a[7334] = entry(1, false);
	v->a[7335] = reduce(sym_case_item, 5, 0, 76);
	v->a[7336] = entry(1, false);
	v->a[7337] = reduce(sym_last_case_item, 5, 0, 48);
	v->a[7338] = entry(1, true);
	v->a[7339] = reduce(sym_case_item, 5, 0, 76);
	parse_actions_entries_367(v);
}

void	parse_actions_entries_367(t_parse_actions_entries_array *v)
{
	v->a[7340] = entry(1, true);
	v->a[7341] = shift(3407);
	v->a[7342] = entry(1, false);
	v->a[7343] = reduce(sym_case_item, 5, 0, 84);
	v->a[7344] = entry(1, false);
	v->a[7345] = reduce(sym_last_case_item, 5, 0, 67);
	v->a[7346] = entry(1, true);
	v->a[7347] = reduce(sym_case_item, 5, 0, 84);
	v->a[7348] = entry(1, false);
	v->a[7349] = reduce(sym_case_item, 5, 0, 82);
	v->a[7350] = entry(1, false);
	v->a[7351] = reduce(sym_last_case_item, 5, 0, 35);
	v->a[7352] = entry(1, true);
	v->a[7353] = reduce(sym_case_item, 5, 0, 82);
	v->a[7354] = entry(1, true);
	v->a[7355] = shift(3366);
	v->a[7356] = entry(1, false);
	v->a[7357] = reduce(sym_case_item, 5, 0, 80);
	v->a[7358] = entry(1, false);
	v->a[7359] = reduce(sym_last_case_item, 5, 0, 64);
	parse_actions_entries_368(v);
}

void	parse_actions_entries_368(t_parse_actions_entries_array *v)
{
	v->a[7360] = entry(1, true);
	v->a[7361] = reduce(sym_case_item, 5, 0, 80);
	v->a[7362] = entry(1, true);
	v->a[7363] = shift(3377);
	v->a[7364] = entry(1, false);
	v->a[7365] = reduce(sym_case_item, 5, 0, 78);
	v->a[7366] = entry(1, false);
	v->a[7367] = reduce(sym_last_case_item, 5, 0, 34);
	v->a[7368] = entry(1, true);
	v->a[7369] = reduce(sym_case_item, 5, 0, 78);
	v->a[7370] = entry(1, true);
	v->a[7371] = shift(3380);
	v->a[7372] = entry(1, false);
	v->a[7373] = reduce(sym_case_item, 4, 0, 70);
	v->a[7374] = entry(1, false);
	v->a[7375] = reduce(sym_last_case_item, 4, 0, 52);
	v->a[7376] = entry(1, true);
	v->a[7377] = reduce(sym_case_item, 4, 0, 70);
	v->a[7378] = entry(1, false);
	v->a[7379] = reduce(sym_case_item, 4, 0, 68);
	parse_actions_entries_369(v);
}

void	parse_actions_entries_369(t_parse_actions_entries_array *v)
{
	v->a[7380] = entry(1, false);
	v->a[7381] = reduce(sym_last_case_item, 4, 0, 41);
	v->a[7382] = entry(1, true);
	v->a[7383] = reduce(sym_case_item, 4, 0, 68);
	v->a[7384] = entry(1, true);
	v->a[7385] = shift(3394);
	v->a[7386] = entry(1, true);
	v->a[7387] = shift(3396);
	v->a[7388] = entry(1, false);
	v->a[7389] = reduce(sym_case_item, 4, 0, 60);
	v->a[7390] = entry(1, false);
	v->a[7391] = reduce(sym_last_case_item, 4, 0, 48);
	v->a[7392] = entry(1, true);
	v->a[7393] = reduce(sym_case_item, 4, 0, 60);
	v->a[7394] = entry(1, true);
	v->a[7395] = shift(3400);
	v->a[7396] = entry(1, false);
	v->a[7397] = reduce(sym_case_item, 3, 0, 50);
	v->a[7398] = entry(1, false);
	v->a[7399] = reduce(sym_last_case_item, 3, 0, 41);
	parse_actions_entries_370(v);
}

/* EOF parse_actions_entries_73.c */
