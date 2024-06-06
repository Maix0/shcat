/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_86.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_430(t_parse_actions_entries_array *v)
{
	v->a[8600] = shift(115);
	v->a[8601] = entry(1, true);
	v->a[8602] = shift(2342);
	v->a[8603] = entry(1, true);
	v->a[8604] = shift(2236);
	v->a[8605] = entry(1, true);
	v->a[8606] = shift(195);
	v->a[8607] = entry(1, true);
	v->a[8608] = shift(50);
	v->a[8609] = entry(1, true);
	v->a[8610] = shift(141);
	v->a[8611] = entry(1, true);
	v->a[8612] = shift(192);
	v->a[8613] = entry(1, true);
	v->a[8614] = shift(124);
	v->a[8615] = entry(1, true);
	v->a[8616] = shift(118);
	v->a[8617] = entry(1, true);
	v->a[8618] = shift(106);
	v->a[8619] = entry(1, true);
	parse_actions_entries_431(v);
}

void	parse_actions_entries_431(t_parse_actions_entries_array *v)
{
	v->a[8620] = shift(44);
	v->a[8621] = entry(1, true);
	v->a[8622] = shift(2356);
	v->a[8623] = entry(1, true);
	v->a[8624] = shift(33);
	v->a[8625] = entry(1, true);
	v->a[8626] = shift(68);
	v->a[8627] = entry(1, true);
	v->a[8628] = shift(182);
	v->a[8629] = entry(1, true);
	v->a[8630] = shift(150);
	v->a[8631] = entry(1, true);
	v->a[8632] = shift(217);
	v->a[8633] = entry(1, true);
	v->a[8634] = shift(154);
	v->a[8635] = entry(1, true);
	v->a[8636] = shift(3951);
	v->a[8637] = entry(1, true);
	v->a[8638] = shift(3195);
	v->a[8639] = entry(1, true);
	parse_actions_entries_432(v);
}

void	parse_actions_entries_432(t_parse_actions_entries_array *v)
{
	v->a[8640] = shift(3854);
	v->a[8641] = entry(1, false);
	v->a[8642] = shift(2321);
	v->a[8643] = entry(1, false);
	v->a[8644] = shift(3560);
	v->a[8645] = entry(1, true);
	v->a[8646] = shift(3560);
	v->a[8647] = entry(1, false);
	v->a[8648] = shift(2196);
	v->a[8649] = entry(1, false);
	v->a[8650] = shift(3564);
	v->a[8651] = entry(1, true);
	v->a[8652] = shift(3564);
	v->a[8653] = entry(1, true);
	v->a[8654] = shift(3835);
	v->a[8655] = entry(1, true);
	v->a[8656] = shift(3981);
	v->a[8657] = entry(1, true);
	v->a[8658] = shift(2433);
	v->a[8659] = entry(1, true);
	parse_actions_entries_433(v);
}

void	parse_actions_entries_433(t_parse_actions_entries_array *v)
{
	v->a[8660] = shift(2412);
	v->a[8661] = entry(1, false);
	v->a[8662] = shift(2200);
	v->a[8663] = entry(1, false);
	v->a[8664] = shift(3562);
	v->a[8665] = entry(1, true);
	v->a[8666] = shift(3562);
	v->a[8667] = entry(1, true);
	v->a[8668] = shift(10);
	v->a[8669] = entry(1, true);
	v->a[8670] = shift(3457);
	v->a[8671] = entry(2, true);
	v->a[8672] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[8673] = shift_repeat(2435);
	v->a[8674] = entry(1, true);
	v->a[8675] = reduce(aux_sym_case_item_repeat1, 2, 0, 34);
	v->a[8676] = entry(1, true);
	v->a[8677] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	v->a[8678] = entry(2, true);
	v->a[8679] = reduce(aux_sym_if_statement_repeat1, 2, 0, 0);
	parse_actions_entries_434(v);
}

void	parse_actions_entries_434(t_parse_actions_entries_array *v)
{
	v->a[8680] = shift_repeat(227);
	v->a[8681] = entry(1, false);
	v->a[8682] = shift(2298);
	v->a[8683] = entry(1, false);
	v->a[8684] = shift(3555);
	v->a[8685] = entry(1, true);
	v->a[8686] = shift(3555);
	v->a[8687] = entry(1, true);
	v->a[8688] = shift(22);
	v->a[8689] = entry(1, true);
	v->a[8690] = shift(15);
	v->a[8691] = entry(1, true);
	v->a[8692] = shift(27);
	v->a[8693] = entry(1, true);
	v->a[8694] = reduce(sym_last_case_item, 3, 0, 41);
	v->a[8695] = entry(1, false);
	v->a[8696] = shift(2756);
	v->a[8697] = entry(1, true);
	v->a[8698] = shift(2868);
	v->a[8699] = entry(1, true);
	parse_actions_entries_435(v);
}

/* EOF parse_actions_entries_86.c */
