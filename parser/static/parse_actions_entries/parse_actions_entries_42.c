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
	v->a[4200] = reduce(sym__arithmetic_postfix_expression, 2, 0, 26);
	v->a[4201] = entry(1, true);
	v->a[4202] = shift(1869);
	v->a[4203] = entry(1, true);
	v->a[4204] = shift(3225);
	v->a[4205] = entry(1, true);
	v->a[4206] = shift(2486);
	v->a[4207] = entry(1, true);
	v->a[4208] = shift(1692);
	v->a[4209] = entry(1, false);
	v->a[4210] = reduce(sym__arithmetic_ternary_expression, 5, 0, 54);
	v->a[4211] = entry(1, true);
	v->a[4212] = reduce(sym__arithmetic_ternary_expression, 5, 0, 54);
	v->a[4213] = entry(1, true);
	v->a[4214] = shift(1535);
	v->a[4215] = entry(1, true);
	v->a[4216] = shift(3245);
	v->a[4217] = entry(1, true);
	v->a[4218] = shift(1562);
	v->a[4219] = entry(1, true);
	parse_actions_entries_211(v);
}

void	parse_actions_entries_211(t_parse_actions_entries_array *v)
{
	v->a[4220] = shift(823);
	v->a[4221] = entry(1, true);
	v->a[4222] = shift(2017);
	v->a[4223] = entry(1, true);
	v->a[4224] = shift(2504);
	v->a[4225] = entry(1, true);
	v->a[4226] = shift(638);
	v->a[4227] = entry(1, true);
	v->a[4228] = shift(1203);
	v->a[4229] = entry(1, true);
	v->a[4230] = shift(1984);
	v->a[4231] = entry(1, true);
	v->a[4232] = shift(669);
	v->a[4233] = entry(1, true);
	v->a[4234] = shift(845);
	v->a[4235] = entry(1, false);
	v->a[4236] = reduce(sym__arithmetic_binary_expression, 3, 0, 37);
	v->a[4237] = entry(1, true);
	v->a[4238] = reduce(sym__arithmetic_binary_expression, 3, 0, 37);
	v->a[4239] = entry(2, true);
	parse_actions_entries_212(v);
}

void	parse_actions_entries_212(t_parse_actions_entries_array *v)
{
	v->a[4240] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4241] = shift_repeat(2504);
	v->a[4242] = entry(1, true);
	v->a[4243] = shift(2430);
	v->a[4244] = entry(1, true);
	v->a[4245] = shift(2640);
	v->a[4246] = entry(1, true);
	v->a[4247] = shift(1123);
	v->a[4248] = entry(1, true);
	v->a[4249] = shift(2436);
	v->a[4250] = entry(1, true);
	v->a[4251] = shift(1242);
	v->a[4252] = entry(1, true);
	v->a[4253] = shift(2420);
	v->a[4254] = entry(1, true);
	v->a[4255] = shift(524);
	v->a[4256] = entry(2, true);
	v->a[4257] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[4258] = shift_repeat(2420);
	v->a[4259] = entry(1, true);
	parse_actions_entries_213(v);
}

void	parse_actions_entries_213(t_parse_actions_entries_array *v)
{
	v->a[4260] = shift(1543);
	v->a[4261] = entry(1, true);
	v->a[4262] = shift(1958);
	v->a[4263] = entry(1, false);
	v->a[4264] = shift(2026);
	v->a[4265] = entry(1, false);
	v->a[4266] = shift(2023);
	v->a[4267] = entry(1, true);
	v->a[4268] = shift(2023);
	v->a[4269] = entry(1, true);
	v->a[4270] = shift(2452);
	v->a[4271] = entry(1, true);
	v->a[4272] = shift(2104);
	v->a[4273] = entry(1, true);
	v->a[4274] = shift(1659);
	v->a[4275] = entry(1, false);
	v->a[4276] = shift(2143);
	v->a[4277] = entry(1, false);
	v->a[4278] = shift(2142);
	v->a[4279] = entry(1, true);
	parse_actions_entries_214(v);
}

void	parse_actions_entries_214(t_parse_actions_entries_array *v)
{
	v->a[4280] = shift(2142);
	v->a[4281] = entry(1, true);
	v->a[4282] = shift(838);
	v->a[4283] = entry(1, true);
	v->a[4284] = shift(1061);
	v->a[4285] = entry(1, true);
	v->a[4286] = shift(2458);
	v->a[4287] = entry(1, false);
	v->a[4288] = reduce(sym__arithmetic_expression, 1, 0, 9);
	v->a[4289] = entry(1, true);
	v->a[4290] = reduce(sym__arithmetic_expression, 1, 0, 9);
	v->a[4291] = entry(1, true);
	v->a[4292] = shift(892);
	v->a[4293] = entry(1, true);
	v->a[4294] = shift(825);
	v->a[4295] = entry(1, false);
	v->a[4296] = reduce(sym__arithmetic_expression, 1, 0, 8);
	v->a[4297] = entry(1, true);
	v->a[4298] = reduce(sym__arithmetic_expression, 1, 0, 8);
	v->a[4299] = entry(1, true);
	parse_actions_entries_215(v);
}

/* EOF parse_actions_entries_42.c */
