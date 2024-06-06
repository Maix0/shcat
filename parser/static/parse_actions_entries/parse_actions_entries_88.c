/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_88.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_440(t_parse_actions_entries_array *v)
{
	v->a[8800] = shift(245);
	v->a[8801] = entry(1, true);
	v->a[8802] = shift(252);
	v->a[8803] = entry(2, true);
	v->a[8804] = reduce(aux_sym_arithmetic_expansion_repeat1, 2, 0, 0);
	v->a[8805] = shift_repeat(1806);
	v->a[8806] = entry(1, true);
	v->a[8807] = shift(1135);
	v->a[8808] = entry(1, true);
	v->a[8809] = shift(242);
	v->a[8810] = entry(1, true);
	v->a[8811] = shift(3217);
	v->a[8812] = entry(1, true);
	v->a[8813] = shift(816);
	v->a[8814] = entry(1, true);
	v->a[8815] = shift(249);
	v->a[8816] = entry(1, true);
	v->a[8817] = shift(19);
	v->a[8818] = entry(1, true);
	v->a[8819] = reduce(sym__extglob_blob, 2, 0, 0);
	parse_actions_entries_441(v);
}

void	parse_actions_entries_441(t_parse_actions_entries_array *v)
{
	v->a[8820] = entry(1, true);
	v->a[8821] = shift(3557);
	v->a[8822] = entry(1, true);
	v->a[8823] = shift(11);
	v->a[8824] = entry(1, true);
	v->a[8825] = shift(17);
	v->a[8826] = entry(1, true);
	v->a[8827] = shift(1142);
	v->a[8828] = entry(1, true);
	v->a[8829] = shift(854);
	v->a[8830] = entry(1, true);
	v->a[8831] = shift(1046);
	v->a[8832] = entry(2, true);
	v->a[8833] = reduce(aux_sym_case_item_repeat1, 2, 0, 49);
	v->a[8834] = shift_repeat(2150);
	v->a[8835] = entry(1, true);
	v->a[8836] = reduce(aux_sym_case_item_repeat1, 2, 0, 49);
	v->a[8837] = entry(1, true);
	v->a[8838] = shift(18);
	v->a[8839] = entry(1, true);
	parse_actions_entries_442(v);
}

void	parse_actions_entries_442(t_parse_actions_entries_array *v)
{
	v->a[8840] = shift(14);
	v->a[8841] = entry(1, true);
	v->a[8842] = shift(1954);
	v->a[8843] = entry(1, true);
	v->a[8844] = shift(12);
	v->a[8845] = entry(1, true);
	v->a[8846] = shift(988);
	v->a[8847] = entry(1, true);
	v->a[8848] = shift(2691);
	v->a[8849] = entry(1, true);
	v->a[8850] = shift(2110);
	v->a[8851] = entry(1, true);
	v->a[8852] = shift(1029);
	v->a[8853] = entry(1, true);
	v->a[8854] = shift(821);
	v->a[8855] = entry(1, true);
	v->a[8856] = shift(1872);
	v->a[8857] = entry(1, true);
	v->a[8858] = shift(1656);
	v->a[8859] = entry(1, true);
	parse_actions_entries_443(v);
}

void	parse_actions_entries_443(t_parse_actions_entries_array *v)
{
	v->a[8860] = shift(29);
	v->a[8861] = entry(1, true);
	v->a[8862] = shift(1194);
	v->a[8863] = entry(1, true);
	v->a[8864] = shift(1004);
	v->a[8865] = entry(1, true);
	v->a[8866] = shift(2027);
	v->a[8867] = entry(1, true);
	v->a[8868] = shift(240);
	v->a[8869] = entry(1, true);
	v->a[8870] = shift(2639);
	v->a[8871] = entry(1, true);
	v->a[8872] = shift(1239);
	v->a[8873] = entry(1, true);
	v->a[8874] = shift(3444);
	v->a[8875] = entry(1, false);
	v->a[8876] = shift(2815);
	v->a[8877] = entry(1, true);
	v->a[8878] = shift(30);
	v->a[8879] = entry(1, true);
	parse_actions_entries_444(v);
}

void	parse_actions_entries_444(t_parse_actions_entries_array *v)
{
	v->a[8880] = shift(21);
	v->a[8881] = entry(1, true);
	v->a[8882] = shift(26);
	v->a[8883] = entry(1, true);
	v->a[8884] = shift(942);
	v->a[8885] = entry(1, false);
	v->a[8886] = shift(2807);
	v->a[8887] = entry(1, true);
	v->a[8888] = shift(1925);
	v->a[8889] = entry(1, false);
	v->a[8890] = shift(2817);
	v->a[8891] = entry(1, false);
	v->a[8892] = shift(2819);
	v->a[8893] = entry(1, false);
	v->a[8894] = shift(2829);
	v->a[8895] = entry(1, false);
	v->a[8896] = shift(2844);
	v->a[8897] = entry(1, false);
	v->a[8898] = shift(2855);
	v->a[8899] = entry(1, true);
	parse_actions_entries_445(v);
}

/* EOF parse_actions_entries_88.c */
