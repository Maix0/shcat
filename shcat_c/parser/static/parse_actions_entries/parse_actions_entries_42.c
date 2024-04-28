/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_42.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_210(t_parse_actions_entries_array *v)
{
	v->a[4200] = shift_repeat(5894);
	v->a[4201] = entry(2, true);
	v->a[4202] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4203] = shift_repeat(2373);
	v->a[4204] = entry(2, true);
	v->a[4205] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4206] = shift_repeat(5754);
	v->a[4207] = entry(2, true);
	v->a[4208] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4209] = shift_repeat(2419);
	v->a[4210] = entry(2, false);
	v->a[4211] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4212] = shift_repeat(2469);
	v->a[4213] = entry(2, false);
	v->a[4214] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4215] = shift_repeat(6298);
	v->a[4216] = entry(2, true);
	v->a[4217] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4218] = shift_repeat(4730);
	v->a[4219] = entry(2, false);
	parse_actions_entries_211(v);
}

void	parse_actions_entries_211(t_parse_actions_entries_array *v)
{
	v->a[4220] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4221] = shift_repeat(278);
	v->a[4222] = entry(2, true);
	v->a[4223] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4224] = shift_repeat(136);
	v->a[4225] = entry(2, true);
	v->a[4226] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4227] = shift_repeat(289);
	v->a[4228] = entry(2, true);
	v->a[4229] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4230] = shift_repeat(248);
	v->a[4231] = entry(2, false);
	v->a[4232] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4233] = shift_repeat(803);
	v->a[4234] = entry(2, true);
	v->a[4235] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4236] = shift_repeat(6636);
	v->a[4237] = entry(2, true);
	v->a[4238] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4239] = shift_repeat(2395);
	parse_actions_entries_212(v);
}

void	parse_actions_entries_212(t_parse_actions_entries_array *v)
{
	v->a[4240] = entry(2, true);
	v->a[4241] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[4242] = shift_repeat(7623);
	v->a[4243] = entry(1, false);
	v->a[4244] = shift(4614);
	v->a[4245] = entry(1, true);
	v->a[4246] = shift(4795);
	v->a[4247] = entry(1, false);
	v->a[4248] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[4249] = entry(1, false);
	v->a[4250] = shift(622);
	v->a[4251] = entry(1, false);
	v->a[4252] = shift(450);
	v->a[4253] = entry(1, false);
	v->a[4254] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[4255] = entry(1, false);
	v->a[4256] = shift(7487);
	v->a[4257] = entry(1, false);
	v->a[4258] = reduce(sym__statements, 1, 0, 0);
	v->a[4259] = entry(1, true);
	parse_actions_entries_213(v);
}

void	parse_actions_entries_213(t_parse_actions_entries_array *v)
{
	v->a[4260] = shift(622);
	v->a[4261] = entry(1, true);
	v->a[4262] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[4263] = entry(2, true);
	v->a[4264] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[4265] = shift(6662);
	v->a[4266] = entry(1, false);
	v->a[4267] = shift(3881);
	v->a[4268] = entry(1, true);
	v->a[4269] = shift(3939);
	v->a[4270] = entry(1, false);
	v->a[4271] = reduce(sym_list, 3, 0, 0);
	v->a[4272] = entry(1, true);
	v->a[4273] = reduce(sym_list, 3, 0, 0);
	v->a[4274] = entry(2, false);
	v->a[4275] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4276] = shift_repeat(2337);
	v->a[4277] = entry(2, false);
	v->a[4278] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4279] = shift_repeat(2302);
	parse_actions_entries_214(v);
}

void	parse_actions_entries_214(t_parse_actions_entries_array *v)
{
	v->a[4280] = entry(2, true);
	v->a[4281] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4282] = shift_repeat(2340);
	v->a[4283] = entry(2, false);
	v->a[4284] = reduce(sym_command_name, 1, 0, 0);
	v->a[4285] = shift(6956);
	v->a[4286] = entry(1, true);
	v->a[4287] = shift(3881);
	v->a[4288] = entry(1, true);
	v->a[4289] = shift(3924);
	v->a[4290] = entry(2, false);
	v->a[4291] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4292] = shift_repeat(2271);
	v->a[4293] = entry(2, true);
	v->a[4294] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4295] = shift_repeat(4164);
	v->a[4296] = entry(2, true);
	v->a[4297] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[4298] = shift_repeat(4144);
	v->a[4299] = entry(2, false);
	parse_actions_entries_215(v);
}

/* EOF parse_actions_entries_42.c */
