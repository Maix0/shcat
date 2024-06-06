/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_74.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_370(t_parse_actions_entries_array *v)
{
	v->a[7400] = entry(1, true);
	v->a[7401] = reduce(sym_case_item, 3, 0, 50);
	v->a[7402] = entry(1, false);
	v->a[7403] = reduce(sym_case_item, 4, 0, 62);
	v->a[7404] = entry(1, false);
	v->a[7405] = reduce(sym_last_case_item, 4, 0, 34);
	v->a[7406] = entry(1, true);
	v->a[7407] = reduce(sym_case_item, 4, 0, 62);
	v->a[7408] = entry(1, false);
	v->a[7409] = reduce(sym_case_item, 4, 0, 58);
	v->a[7410] = entry(1, false);
	v->a[7411] = reduce(sym_last_case_item, 4, 0, 40);
	v->a[7412] = entry(1, true);
	v->a[7413] = reduce(sym_case_item, 4, 0, 58);
	v->a[7414] = entry(1, false);
	v->a[7415] = reduce(sym_case_item, 4, 0, 65);
	v->a[7416] = entry(1, false);
	v->a[7417] = reduce(sym_last_case_item, 4, 0, 35);
	v->a[7418] = entry(1, true);
	v->a[7419] = reduce(sym_case_item, 4, 0, 65);
	parse_actions_entries_371(v);
}

void	parse_actions_entries_371(t_parse_actions_entries_array *v)
{
	v->a[7420] = entry(1, false);
	v->a[7421] = reduce(sym_case_item, 3, 0, 46);
	v->a[7422] = entry(1, false);
	v->a[7423] = reduce(sym_last_case_item, 3, 0, 40);
	v->a[7424] = entry(1, true);
	v->a[7425] = reduce(sym_case_item, 3, 0, 46);
	v->a[7426] = entry(1, false);
	v->a[7427] = reduce(sym_case_item, 5, 0, 85);
	v->a[7428] = entry(1, true);
	v->a[7429] = reduce(sym_case_item, 5, 0, 85);
	v->a[7430] = entry(1, false);
	v->a[7431] = reduce(sym_case_item, 6, 0, 92);
	v->a[7432] = entry(1, true);
	v->a[7433] = reduce(sym_case_item, 6, 0, 92);
	v->a[7434] = entry(1, false);
	v->a[7435] = reduce(sym_case_item, 3, 0, 47);
	v->a[7436] = entry(1, true);
	v->a[7437] = reduce(sym_case_item, 3, 0, 47);
	v->a[7438] = entry(1, false);
	v->a[7439] = reduce(sym_case_item, 6, 0, 90);
	parse_actions_entries_372(v);
}

void	parse_actions_entries_372(t_parse_actions_entries_array *v)
{
	v->a[7440] = entry(1, true);
	v->a[7441] = reduce(sym_case_item, 6, 0, 90);
	v->a[7442] = entry(1, false);
	v->a[7443] = shift(2881);
	v->a[7444] = entry(1, false);
	v->a[7445] = reduce(sym_case_item, 3, 0, 51);
	v->a[7446] = entry(1, true);
	v->a[7447] = reduce(sym_case_item, 3, 0, 51);
	v->a[7448] = entry(2, false);
	v->a[7449] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[7450] = shift_repeat(2881);
	v->a[7451] = entry(1, true);
	v->a[7452] = shift(3450);
	v->a[7453] = entry(1, true);
	v->a[7454] = shift(2997);
	v->a[7455] = entry(1, true);
	v->a[7456] = shift(2995);
	v->a[7457] = entry(1, true);
	v->a[7458] = reduce(sym__expansion_expression, 1, 0, 25);
	v->a[7459] = entry(1, true);
	parse_actions_entries_373(v);
}

void	parse_actions_entries_373(t_parse_actions_entries_array *v)
{
	v->a[7460] = shift(215);
	v->a[7461] = entry(1, true);
	v->a[7462] = shift(3474);
	v->a[7463] = entry(1, false);
	v->a[7464] = reduce(sym_case_item, 4, 0, 59);
	v->a[7465] = entry(1, true);
	v->a[7466] = reduce(sym_case_item, 4, 0, 59);
	v->a[7467] = entry(1, false);
	v->a[7468] = reduce(sym_case_item, 4, 0, 61);
	v->a[7469] = entry(1, true);
	v->a[7470] = reduce(sym_case_item, 4, 0, 61);
	v->a[7471] = entry(1, false);
	v->a[7472] = reduce(sym_case_item, 5, 0, 87);
	v->a[7473] = entry(1, true);
	v->a[7474] = reduce(sym_case_item, 5, 0, 87);
	v->a[7475] = entry(1, false);
	v->a[7476] = reduce(sym_case_item, 4, 0, 63);
	v->a[7477] = entry(1, true);
	v->a[7478] = reduce(sym_case_item, 4, 0, 63);
	v->a[7479] = entry(1, false);
	parse_actions_entries_374(v);
}

void	parse_actions_entries_374(t_parse_actions_entries_array *v)
{
	v->a[7480] = reduce(sym_case_item, 5, 0, 77);
	v->a[7481] = entry(1, true);
	v->a[7482] = reduce(sym_case_item, 5, 0, 77);
	v->a[7483] = entry(1, false);
	v->a[7484] = reduce(sym_case_item, 4, 0, 66);
	v->a[7485] = entry(1, true);
	v->a[7486] = reduce(sym_case_item, 4, 0, 66);
	v->a[7487] = entry(1, false);
	v->a[7488] = reduce(aux_sym__heredoc_command, 1, 0, 15);
	v->a[7489] = entry(1, true);
	v->a[7490] = reduce(aux_sym__heredoc_command, 1, 0, 15);
	v->a[7491] = entry(1, false);
	v->a[7492] = reduce(sym_case_item, 5, 0, 83);
	v->a[7493] = entry(1, true);
	v->a[7494] = reduce(sym_case_item, 5, 0, 83);
	v->a[7495] = entry(1, false);
	v->a[7496] = reduce(sym_case_item, 5, 0, 81);
	v->a[7497] = entry(1, true);
	v->a[7498] = reduce(sym_case_item, 5, 0, 81);
	v->a[7499] = entry(1, false);
	parse_actions_entries_375(v);
}

/* EOF parse_actions_entries_74.c */
