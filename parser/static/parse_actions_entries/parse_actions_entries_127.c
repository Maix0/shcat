/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_127.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_635(t_parse_actions_entries_array *v)
{
	v->a[12700] = shift_repeat(5416);
	v->a[12701] = entry(1, false);
	v->a[12702] = reduce(sym_case_item, 6, 0, 156);
	v->a[12703] = entry(1, true);
	v->a[12704] = reduce(sym_case_item, 6, 0, 156);
	v->a[12705] = entry(2, true);
	v->a[12706] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[12707] = shift_repeat(3890);
	v->a[12708] = entry(1, false);
	v->a[12709] = reduce(sym_case_item, 4, 0, 106);
	v->a[12710] = entry(1, true);
	v->a[12711] = reduce(sym_case_item, 4, 0, 106);
	v->a[12712] = entry(1, true);
	v->a[12713] = shift(4199);
	v->a[12714] = entry(1, false);
	v->a[12715] = reduce(sym_case_item, 4, 0, 116);
	v->a[12716] = entry(1, true);
	v->a[12717] = reduce(sym_case_item, 4, 0, 116);
	v->a[12718] = entry(1, false);
	v->a[12719] = reduce(sym_case_item, 4, 0, 114);
	parse_actions_entries_636(v);
}

void	parse_actions_entries_636(t_parse_actions_entries_array *v)
{
	v->a[12720] = entry(1, true);
	v->a[12721] = reduce(sym_case_item, 4, 0, 114);
	v->a[12722] = entry(1, false);
	v->a[12723] = reduce(sym_case_item, 4, 0, 111);
	v->a[12724] = entry(1, true);
	v->a[12725] = reduce(sym_case_item, 4, 0, 111);
	v->a[12726] = entry(1, true);
	v->a[12727] = shift(4059);
	v->a[12728] = entry(1, false);
	v->a[12729] = reduce(sym_case_item, 4, 0, 108);
	v->a[12730] = entry(1, true);
	v->a[12731] = reduce(sym_case_item, 4, 0, 108);
	v->a[12732] = entry(1, true);
	v->a[12733] = shift(4077);
	v->a[12734] = entry(1, false);
	v->a[12735] = reduce(sym_case_item, 5, 0, 145);
	v->a[12736] = entry(1, true);
	v->a[12737] = reduce(sym_case_item, 5, 0, 145);
	v->a[12738] = entry(2, true);
	v->a[12739] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_637(v);
}

void	parse_actions_entries_637(t_parse_actions_entries_array *v)
{
	v->a[12740] = shift_repeat(3866);
	v->a[12741] = entry(1, false);
	v->a[12742] = reduce(sym_case_item, 3, 0, 82);
	v->a[12743] = entry(1, true);
	v->a[12744] = reduce(sym_case_item, 3, 0, 82);
	v->a[12745] = entry(1, false);
	v->a[12746] = reduce(sym_case_item, 3, 0, 78);
	v->a[12747] = entry(1, true);
	v->a[12748] = reduce(sym_case_item, 3, 0, 78);
	v->a[12749] = entry(1, true);
	v->a[12750] = shift(6664);
	v->a[12751] = entry(1, false);
	v->a[12752] = shift(3624);
	v->a[12753] = entry(1, true);
	v->a[12754] = shift(3624);
	v->a[12755] = entry(1, true);
	v->a[12756] = shift(1090);
	v->a[12757] = entry(1, true);
	v->a[12758] = shift(3769);
	v->a[12759] = entry(1, true);
	parse_actions_entries_638(v);
}

void	parse_actions_entries_638(t_parse_actions_entries_array *v)
{
	v->a[12760] = shift(6117);
	v->a[12761] = entry(2, false);
	v->a[12762] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12763] = shift_repeat(3624);
	v->a[12764] = entry(2, true);
	v->a[12765] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12766] = shift_repeat(3624);
	v->a[12767] = entry(2, true);
	v->a[12768] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12769] = shift_repeat(1090);
	v->a[12770] = entry(2, true);
	v->a[12771] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12772] = shift_repeat(3769);
	v->a[12773] = entry(2, true);
	v->a[12774] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[12775] = shift_repeat(6117);
	v->a[12776] = entry(1, true);
	v->a[12777] = shift(5416);
	v->a[12778] = entry(1, true);
	v->a[12779] = shift(6109);
	parse_actions_entries_639(v);
}

void	parse_actions_entries_639(t_parse_actions_entries_array *v)
{
	v->a[12780] = entry(1, true);
	v->a[12781] = shift(6134);
	v->a[12782] = entry(2, false);
	v->a[12783] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[12784] = shift_repeat(3618);
	v->a[12785] = entry(2, false);
	v->a[12786] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[12787] = shift_repeat(1111);
	v->a[12788] = entry(2, true);
	v->a[12789] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[12790] = shift_repeat(6109);
	v->a[12791] = entry(2, true);
	v->a[12792] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[12793] = shift_repeat(3877);
	v->a[12794] = entry(2, false);
	v->a[12795] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[12796] = shift_repeat(3689);
	v->a[12797] = entry(2, false);
	v->a[12798] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[12799] = shift_repeat(7274);
	parse_actions_entries_640(v);
}

/* EOF parse_actions_entries_127.c */
