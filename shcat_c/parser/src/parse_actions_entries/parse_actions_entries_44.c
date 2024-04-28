/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_44.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_220(t_parse_actions_entries_array *v)
{
	v->a[4400] = shift(2363);
	v->a[4401] = entry(1, true);
	v->a[4402] = shift(2363);
	v->a[4403] = entry(2, false);
	v->a[4404] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4405] = shift_repeat(3940);
	v->a[4406] = entry(2, true);
	v->a[4407] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4408] = shift_repeat(3940);
	v->a[4409] = entry(1, false);
	v->a[4410] = shift(624);
	v->a[4411] = entry(1, true);
	v->a[4412] = shift(624);
	v->a[4413] = entry(1, true);
	v->a[4414] = shift(3940);
	v->a[4415] = entry(2, false);
	v->a[4416] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4417] = shift_repeat(2369);
	v->a[4418] = entry(2, true);
	v->a[4419] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_221(v);
}

void	parse_actions_entries_221(t_parse_actions_entries_array *v)
{
	v->a[4420] = shift_repeat(3983);
	v->a[4421] = entry(2, true);
	v->a[4422] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4423] = shift_repeat(3982);
	v->a[4424] = entry(2, false);
	v->a[4425] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4426] = shift_repeat(5950);
	v->a[4427] = entry(2, true);
	v->a[4428] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4429] = shift_repeat(2396);
	v->a[4430] = entry(2, true);
	v->a[4431] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4432] = shift_repeat(5725);
	v->a[4433] = entry(2, true);
	v->a[4434] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4435] = shift_repeat(2369);
	v->a[4436] = entry(2, false);
	v->a[4437] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4438] = shift_repeat(2507);
	v->a[4439] = entry(2, false);
	parse_actions_entries_222(v);
}

void	parse_actions_entries_222(t_parse_actions_entries_array *v)
{
	v->a[4440] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4441] = shift_repeat(6313);
	v->a[4442] = entry(2, true);
	v->a[4443] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4444] = shift_repeat(4839);
	v->a[4445] = entry(2, false);
	v->a[4446] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4447] = shift_repeat(140);
	v->a[4448] = entry(2, true);
	v->a[4449] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4450] = shift_repeat(141);
	v->a[4451] = entry(2, true);
	v->a[4452] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4453] = shift_repeat(142);
	v->a[4454] = entry(2, true);
	v->a[4455] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4456] = shift_repeat(88);
	v->a[4457] = entry(2, true);
	v->a[4458] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4459] = shift_repeat(2371);
	parse_actions_entries_223(v);
}

void	parse_actions_entries_223(t_parse_actions_entries_array *v)
{
	v->a[4460] = entry(2, true);
	v->a[4461] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4462] = shift_repeat(7636);
	v->a[4463] = entry(1, false);
	v->a[4464] = reduce(aux_sym_command_repeat2, 2, 0, 37);
	v->a[4465] = entry(1, true);
	v->a[4466] = reduce(aux_sym_command_repeat2, 2, 0, 37);
	v->a[4467] = entry(1, false);
	v->a[4468] = reduce(sym_herestring_redirect, 2, 0, 10);
	v->a[4469] = entry(1, true);
	v->a[4470] = reduce(sym_herestring_redirect, 2, 0, 10);
	v->a[4471] = entry(2, false);
	v->a[4472] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4473] = shift_repeat(2422);
	v->a[4474] = entry(2, false);
	v->a[4475] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4476] = shift_repeat(2389);
	v->a[4477] = entry(2, true);
	v->a[4478] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4479] = shift_repeat(2431);
	parse_actions_entries_224(v);
}

void	parse_actions_entries_224(t_parse_actions_entries_array *v)
{
	v->a[4480] = entry(1, false);
	v->a[4481] = reduce(aux_sym_command_repeat2, 2, 0, 36);
	v->a[4482] = entry(1, true);
	v->a[4483] = reduce(aux_sym_command_repeat2, 2, 0, 36);
	v->a[4484] = entry(1, false);
	v->a[4485] = shift(2422);
	v->a[4486] = entry(1, false);
	v->a[4487] = shift(2389);
	v->a[4488] = entry(1, true);
	v->a[4489] = shift(2431);
	v->a[4490] = entry(1, false);
	v->a[4491] = shift(2367);
	v->a[4492] = entry(1, false);
	v->a[4493] = shift(2386);
	v->a[4494] = entry(1, false);
	v->a[4495] = shift(875);
	v->a[4496] = entry(1, true);
	v->a[4497] = shift(2365);
	v->a[4498] = entry(1, false);
	v->a[4499] = shift(2438);
	parse_actions_entries_225(v);
}

/* EOF parse_actions_entries_44.c */
