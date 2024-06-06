/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_50.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_250(t_parse_actions_entries_array *v)
{
	v->a[5000] = shift(1443);
	v->a[5001] = entry(1, false);
	v->a[5002] = shift(1401);
	v->a[5003] = entry(1, true);
	v->a[5004] = shift(1401);
	v->a[5005] = entry(1, false);
	v->a[5006] = shift(1423);
	v->a[5007] = entry(1, true);
	v->a[5008] = shift(1423);
	v->a[5009] = entry(1, false);
	v->a[5010] = shift(1506);
	v->a[5011] = entry(1, true);
	v->a[5012] = shift(1506);
	v->a[5013] = entry(2, false);
	v->a[5014] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5015] = shift_repeat(2609);
	v->a[5016] = entry(2, false);
	v->a[5017] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5018] = shift_repeat(1798);
	v->a[5019] = entry(2, false);
	parse_actions_entries_251(v);
}

void	parse_actions_entries_251(t_parse_actions_entries_array *v)
{
	v->a[5020] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5021] = shift_repeat(3153);
	v->a[5022] = entry(2, false);
	v->a[5023] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5024] = shift_repeat(2595);
	v->a[5025] = entry(2, false);
	v->a[5026] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5027] = shift_repeat(3031);
	v->a[5028] = entry(2, false);
	v->a[5029] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5030] = shift_repeat(2636);
	v->a[5031] = entry(2, false);
	v->a[5032] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5033] = shift_repeat(3353);
	v->a[5034] = entry(2, false);
	v->a[5035] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5036] = shift_repeat(3016);
	v->a[5037] = entry(2, false);
	v->a[5038] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5039] = shift_repeat(217);
	parse_actions_entries_252(v);
}

void	parse_actions_entries_252(t_parse_actions_entries_array *v)
{
	v->a[5040] = entry(2, false);
	v->a[5041] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5042] = shift_repeat(158);
	v->a[5043] = entry(2, false);
	v->a[5044] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5045] = shift_repeat(145);
	v->a[5046] = entry(2, true);
	v->a[5047] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5048] = shift_repeat(2609);
	v->a[5049] = entry(2, true);
	v->a[5050] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5051] = shift_repeat(4057);
	v->a[5052] = entry(2, false);
	v->a[5053] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5054] = shift_repeat(2423);
	v->a[5055] = entry(2, true);
	v->a[5056] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5057] = shift_repeat(2423);
	v->a[5058] = entry(1, true);
	v->a[5059] = shift(2540);
	parse_actions_entries_253(v);
}

void	parse_actions_entries_253(t_parse_actions_entries_array *v)
{
	v->a[5060] = entry(1, true);
	v->a[5061] = shift(2471);
	v->a[5062] = entry(1, false);
	v->a[5063] = shift(2515);
	v->a[5064] = entry(1, true);
	v->a[5065] = shift(2515);
	v->a[5066] = entry(1, false);
	v->a[5067] = shift(2609);
	v->a[5068] = entry(1, false);
	v->a[5069] = shift(3563);
	v->a[5070] = entry(1, true);
	v->a[5071] = shift(3563);
	v->a[5072] = entry(1, false);
	v->a[5073] = shift(2595);
	v->a[5074] = entry(1, true);
	v->a[5075] = shift(2609);
	v->a[5076] = entry(1, false);
	v->a[5077] = shift(2443);
	v->a[5078] = entry(1, true);
	v->a[5079] = shift(2443);
	parse_actions_entries_254(v);
}

void	parse_actions_entries_254(t_parse_actions_entries_array *v)
{
	v->a[5080] = entry(2, false);
	v->a[5081] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5082] = shift_repeat(2370);
	v->a[5083] = entry(2, true);
	v->a[5084] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5085] = shift_repeat(2370);
	v->a[5086] = entry(1, false);
	v->a[5087] = shift(3561);
	v->a[5088] = entry(1, true);
	v->a[5089] = shift(3561);
	v->a[5090] = entry(1, false);
	v->a[5091] = shift(3559);
	v->a[5092] = entry(1, true);
	v->a[5093] = shift(3559);
	v->a[5094] = entry(1, false);
	v->a[5095] = shift(3556);
	v->a[5096] = entry(1, true);
	v->a[5097] = shift(3556);
	v->a[5098] = entry(2, false);
	v->a[5099] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	parse_actions_entries_255(v);
}

/* EOF parse_actions_entries_50.c */
