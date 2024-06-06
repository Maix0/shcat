/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_60.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_300(t_parse_actions_entries_array *v)
{
	v->a[6000] = shift(52);
	v->a[6001] = entry(1, true);
	v->a[6002] = shift(1165);
	v->a[6003] = entry(2, false);
	v->a[6004] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6005] = shift_repeat(2183);
	v->a[6006] = entry(2, false);
	v->a[6007] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6008] = shift_repeat(468);
	v->a[6009] = entry(2, true);
	v->a[6010] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6011] = shift_repeat(3201);
	v->a[6012] = entry(1, true);
	v->a[6013] = reduce(sym_command, 2, 0, 1);
	v->a[6014] = entry(1, false);
	v->a[6015] = reduce(sym_command, 2, 0, 1);
	v->a[6016] = entry(1, true);
	v->a[6017] = shift(1838);
	v->a[6018] = entry(1, true);
	v->a[6019] = shift(1687);
	parse_actions_entries_301(v);
}

void	parse_actions_entries_301(t_parse_actions_entries_array *v)
{
	v->a[6020] = entry(1, true);
	v->a[6021] = shift(3037);
	v->a[6022] = entry(1, true);
	v->a[6023] = shift(3039);
	v->a[6024] = entry(1, true);
	v->a[6025] = shift(202);
	v->a[6026] = entry(1, true);
	v->a[6027] = shift(201);
	v->a[6028] = entry(2, false);
	v->a[6029] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6030] = shift_repeat(2162);
	v->a[6031] = entry(2, false);
	v->a[6032] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6033] = shift_repeat(440);
	v->a[6034] = entry(2, true);
	v->a[6035] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[6036] = shift_repeat(3204);
	v->a[6037] = entry(1, false);
	v->a[6038] = shift(1800);
	v->a[6039] = entry(1, true);
	parse_actions_entries_302(v);
}

void	parse_actions_entries_302(t_parse_actions_entries_array *v)
{
	v->a[6040] = shift(1800);
	v->a[6041] = entry(1, true);
	v->a[6042] = shift(3201);
	v->a[6043] = entry(1, true);
	v->a[6044] = reduce(sym_case_statement, 8, 0, 35);
	v->a[6045] = entry(1, false);
	v->a[6046] = reduce(sym_case_statement, 8, 0, 35);
	v->a[6047] = entry(1, false);
	v->a[6048] = reduce(sym_while_statement, 3, 0, 23);
	v->a[6049] = entry(1, true);
	v->a[6050] = reduce(sym_while_statement, 3, 0, 23);
	v->a[6051] = entry(1, true);
	v->a[6052] = shift(1798);
	v->a[6053] = entry(1, true);
	v->a[6054] = shift(2595);
	v->a[6055] = entry(1, true);
	v->a[6056] = shift(3031);
	v->a[6057] = entry(1, true);
	v->a[6058] = shift(3016);
	v->a[6059] = entry(1, true);
	parse_actions_entries_303(v);
}

void	parse_actions_entries_303(t_parse_actions_entries_array *v)
{
	v->a[6060] = shift(158);
	v->a[6061] = entry(1, true);
	v->a[6062] = shift(145);
	v->a[6063] = entry(1, false);
	v->a[6064] = reduce(sym_subshell, 3, 0, 0);
	v->a[6065] = entry(1, true);
	v->a[6066] = reduce(sym_subshell, 3, 0, 0);
	v->a[6067] = entry(1, false);
	v->a[6068] = reduce(sym_compound_statement, 3, 0, 0);
	v->a[6069] = entry(1, true);
	v->a[6070] = reduce(sym_compound_statement, 3, 0, 0);
	v->a[6071] = entry(1, false);
	v->a[6072] = shift(1461);
	v->a[6073] = entry(1, true);
	v->a[6074] = shift(1461);
	v->a[6075] = entry(1, true);
	v->a[6076] = shift(1398);
	v->a[6077] = entry(1, false);
	v->a[6078] = shift(1343);
	v->a[6079] = entry(1, true);
	parse_actions_entries_304(v);
}

void	parse_actions_entries_304(t_parse_actions_entries_array *v)
{
	v->a[6080] = shift(1343);
	v->a[6081] = entry(1, true);
	v->a[6082] = reduce(sym_heredoc_redirect, 7, 0, 88);
	v->a[6083] = entry(1, false);
	v->a[6084] = reduce(sym_heredoc_redirect, 7, 0, 88);
	v->a[6085] = entry(1, true);
	v->a[6086] = reduce(sym_if_statement, 7, 0, 33);
	v->a[6087] = entry(1, false);
	v->a[6088] = reduce(sym_if_statement, 7, 0, 33);
	v->a[6089] = entry(1, true);
	v->a[6090] = reduce(sym_case_statement, 8, 0, 34);
	v->a[6091] = entry(1, false);
	v->a[6092] = reduce(sym_case_statement, 8, 0, 34);
	v->a[6093] = entry(1, false);
	v->a[6094] = reduce(sym_heredoc_redirect, 4, 0, 0);
	v->a[6095] = entry(1, true);
	v->a[6096] = reduce(sym_heredoc_redirect, 4, 0, 0);
	v->a[6097] = entry(1, false);
	v->a[6098] = shift(577);
	v->a[6099] = entry(1, true);
	parse_actions_entries_305(v);
}

/* EOF parse_actions_entries_60.c */
