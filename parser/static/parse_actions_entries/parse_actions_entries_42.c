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
	v->a[4200] = entry(1, false);
	v->a[4201] = shift(470);
	v->a[4202] = entry(1, false);
	v->a[4203] = shift(1789);
	v->a[4204] = entry(1, true);
	v->a[4205] = shift(1789);
	v->a[4206] = entry(1, true);
	v->a[4207] = shift(240);
	v->a[4208] = entry(1, false);
	v->a[4209] = shift(1870);
	v->a[4210] = entry(1, false);
	v->a[4211] = shift(348);
	v->a[4212] = entry(1, false);
	v->a[4213] = shift(1899);
	v->a[4214] = entry(1, false);
	v->a[4215] = shift(1794);
	v->a[4216] = entry(1, false);
	v->a[4217] = shift(1889);
	v->a[4218] = entry(1, false);
	v->a[4219] = shift(1377);
	parse_actions_entries_211(v);
}

void	parse_actions_entries_211(t_parse_actions_entries_array *v)
{
	v->a[4220] = entry(1, false);
	v->a[4221] = shift(1849);
	v->a[4222] = entry(1, false);
	v->a[4223] = shift(543);
	v->a[4224] = entry(1, false);
	v->a[4225] = shift(1747);
	v->a[4226] = entry(1, true);
	v->a[4227] = shift(1747);
	v->a[4228] = entry(1, true);
	v->a[4229] = shift(649);
	v->a[4230] = entry(1, false);
	v->a[4231] = shift(1904);
	v->a[4232] = entry(1, false);
	v->a[4233] = shift(1799);
	v->a[4234] = entry(1, false);
	v->a[4235] = shift(1911);
	v->a[4236] = entry(1, false);
	v->a[4237] = shift(644);
	v->a[4238] = entry(1, false);
	v->a[4239] = shift(1903);
	parse_actions_entries_212(v);
}

void	parse_actions_entries_212(t_parse_actions_entries_array *v)
{
	v->a[4240] = entry(1, false);
	v->a[4241] = shift(537);
	v->a[4242] = entry(1, false);
	v->a[4243] = shift(1877);
	v->a[4244] = entry(1, false);
	v->a[4245] = shift(488);
	v->a[4246] = entry(1, false);
	v->a[4247] = shift(1909);
	v->a[4248] = entry(1, false);
	v->a[4249] = shift(1016);
	v->a[4250] = entry(1, false);
	v->a[4251] = shift(1905);
	v->a[4252] = entry(1, false);
	v->a[4253] = shift(416);
	v->a[4254] = entry(1, false);
	v->a[4255] = shift(1894);
	v->a[4256] = entry(1, false);
	v->a[4257] = shift(452);
	v->a[4258] = entry(1, false);
	v->a[4259] = shift(1873);
	parse_actions_entries_213(v);
}

void	parse_actions_entries_213(t_parse_actions_entries_array *v)
{
	v->a[4260] = entry(1, false);
	v->a[4261] = shift(327);
	v->a[4262] = entry(1, false);
	v->a[4263] = reduce(aux_sym_case_statement_repeat1, 1, 0, 37);
	v->a[4264] = entry(1, true);
	v->a[4265] = reduce(aux_sym_case_statement_repeat1, 1, 0, 37);
	v->a[4266] = entry(1, false);
	v->a[4267] = shift(1757);
	v->a[4268] = entry(1, true);
	v->a[4269] = shift(1757);
	v->a[4270] = entry(1, true);
	v->a[4271] = shift(969);
	v->a[4272] = entry(1, false);
	v->a[4273] = shift(1796);
	v->a[4274] = entry(1, true);
	v->a[4275] = shift(1796);
	v->a[4276] = entry(1, true);
	v->a[4277] = shift(223);
	v->a[4278] = entry(1, false);
	v->a[4279] = shift(1743);
	parse_actions_entries_214(v);
}

void	parse_actions_entries_214(t_parse_actions_entries_array *v)
{
	v->a[4280] = entry(1, true);
	v->a[4281] = shift(1743);
	v->a[4282] = entry(1, true);
	v->a[4283] = shift(217);
	v->a[4284] = entry(2, false);
	v->a[4285] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4286] = shift_repeat(1984);
	v->a[4287] = entry(2, true);
	v->a[4288] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4289] = shift_repeat(1924);
	v->a[4290] = entry(2, true);
	v->a[4291] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4292] = shift_repeat(106);
	v->a[4293] = entry(2, true);
	v->a[4294] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4295] = shift_repeat(107);
	v->a[4296] = entry(2, true);
	v->a[4297] = reduce(aux_sym_heredoc_body_repeat1, 2, 0, 0);
	v->a[4298] = shift_repeat(2091);
	v->a[4299] = entry(1, true);
	parse_actions_entries_215(v);
}

/* EOF parse_actions_entries_42.c */
