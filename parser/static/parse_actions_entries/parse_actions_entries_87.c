/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_87.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_435(t_parse_actions_entries_array *v)
{
	v->a[8700] = reduce(sym_last_case_item, 4, 0, 52);
	v->a[8701] = entry(1, false);
	v->a[8702] = shift(2730);
	v->a[8703] = entry(1, true);
	v->a[8704] = shift(2842);
	v->a[8705] = entry(1, true);
	v->a[8706] = shift(2841);
	v->a[8707] = entry(1, true);
	v->a[8708] = reduce(aux_sym_case_item_repeat1, 2, 0, 35);
	v->a[8709] = entry(2, true);
	v->a[8710] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[8711] = shift_repeat(3457);
	v->a[8712] = entry(1, true);
	v->a[8713] = reduce(sym_last_case_item, 4, 0, 48);
	v->a[8714] = entry(1, false);
	v->a[8715] = shift(2731);
	v->a[8716] = entry(1, true);
	v->a[8717] = shift(2849);
	v->a[8718] = entry(1, true);
	v->a[8719] = shift(2848);
	parse_actions_entries_436(v);
}

void	parse_actions_entries_436(t_parse_actions_entries_array *v)
{
	v->a[8720] = entry(1, true);
	v->a[8721] = shift(2932);
	v->a[8722] = entry(1, true);
	v->a[8723] = reduce(sym__concatenation_in_expansion, 2, 0, 0);
	v->a[8724] = entry(1, true);
	v->a[8725] = reduce(sym_last_case_item, 3, 0, 40);
	v->a[8726] = entry(1, false);
	v->a[8727] = shift(2785);
	v->a[8728] = entry(1, true);
	v->a[8729] = shift(2837);
	v->a[8730] = entry(1, true);
	v->a[8731] = reduce(sym_last_case_item, 4, 0, 35);
	v->a[8732] = entry(1, false);
	v->a[8733] = shift(2735);
	v->a[8734] = entry(1, true);
	v->a[8735] = shift(2861);
	v->a[8736] = entry(1, true);
	v->a[8737] = reduce(sym_last_case_item, 5, 0, 64);
	v->a[8738] = entry(1, false);
	v->a[8739] = shift(2728);
	parse_actions_entries_437(v);
}

void	parse_actions_entries_437(t_parse_actions_entries_array *v)
{
	v->a[8740] = entry(1, true);
	v->a[8741] = shift(2834);
	v->a[8742] = entry(1, true);
	v->a[8743] = shift(2832);
	v->a[8744] = entry(1, true);
	v->a[8745] = reduce(sym_last_case_item, 5, 0, 67);
	v->a[8746] = entry(1, false);
	v->a[8747] = shift(2724);
	v->a[8748] = entry(1, true);
	v->a[8749] = shift(2820);
	v->a[8750] = entry(1, true);
	v->a[8751] = shift(2818);
	v->a[8752] = entry(2, true);
	v->a[8753] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[8754] = shift_repeat(2932);
	v->a[8755] = entry(1, true);
	v->a[8756] = reduce(aux_sym__concatenation_in_expansion_repeat1, 2, 0, 0);
	v->a[8757] = entry(1, true);
	v->a[8758] = reduce(sym_last_case_item, 4, 0, 34);
	v->a[8759] = entry(1, false);
	parse_actions_entries_438(v);
}

void	parse_actions_entries_438(t_parse_actions_entries_array *v)
{
	v->a[8760] = shift(2749);
	v->a[8761] = entry(1, true);
	v->a[8762] = shift(2875);
	v->a[8763] = entry(1, false);
	v->a[8764] = shift(2727);
	v->a[8765] = entry(1, true);
	v->a[8766] = shift(2825);
	v->a[8767] = entry(1, true);
	v->a[8768] = shift(2823);
	v->a[8769] = entry(1, true);
	v->a[8770] = reduce(sym__expansion_expression, 2, 0, 25);
	v->a[8771] = entry(1, false);
	v->a[8772] = shift(2750);
	v->a[8773] = entry(1, true);
	v->a[8774] = shift(2879);
	v->a[8775] = entry(1, true);
	v->a[8776] = shift(2877);
	v->a[8777] = entry(1, true);
	v->a[8778] = shift(1377);
	v->a[8779] = entry(1, true);
	parse_actions_entries_439(v);
}

void	parse_actions_entries_439(t_parse_actions_entries_array *v)
{
	v->a[8780] = shift(28);
	v->a[8781] = entry(1, true);
	v->a[8782] = shift(243);
	v->a[8783] = entry(1, true);
	v->a[8784] = shift(955);
	v->a[8785] = entry(1, true);
	v->a[8786] = shift(899);
	v->a[8787] = entry(1, true);
	v->a[8788] = shift(239);
	v->a[8789] = entry(1, true);
	v->a[8790] = shift(1075);
	v->a[8791] = entry(1, true);
	v->a[8792] = shift(2025);
	v->a[8793] = entry(1, true);
	v->a[8794] = shift(745);
	v->a[8795] = entry(1, true);
	v->a[8796] = shift(728);
	v->a[8797] = entry(1, true);
	v->a[8798] = shift(3258);
	v->a[8799] = entry(1, true);
	parse_actions_entries_440(v);
}

/* EOF parse_actions_entries_87.c */
