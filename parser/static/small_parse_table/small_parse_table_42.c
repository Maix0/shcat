/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_42.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_210(t_small_parse_table_array *v)
{
	v->a[4200] = actions(105);
	v->a[4201] = 1;
	v->a[4202] = anon_sym_LPAREN;
	v->a[4203] = actions(109);
	v->a[4204] = 1;
	v->a[4205] = anon_sym_LBRACE;
	v->a[4206] = actions(111);
	v->a[4207] = 1;
	v->a[4208] = anon_sym_BANG;
	v->a[4209] = actions(117);
	v->a[4210] = 1;
	v->a[4211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4212] = actions(119);
	v->a[4213] = 1;
	v->a[4214] = anon_sym_DOLLAR;
	v->a[4215] = actions(121);
	v->a[4216] = 1;
	v->a[4217] = anon_sym_DQUOTE;
	v->a[4218] = actions(123);
	v->a[4219] = 1;
	small_parse_table_211(v);
}

void	small_parse_table_211(t_small_parse_table_array *v)
{
	v->a[4220] = sym_raw_string;
	v->a[4221] = actions(125);
	v->a[4222] = 1;
	v->a[4223] = aux_sym_number_token1;
	v->a[4224] = actions(127);
	v->a[4225] = 1;
	v->a[4226] = aux_sym_number_token2;
	v->a[4227] = actions(129);
	v->a[4228] = 1;
	v->a[4229] = anon_sym_DOLLAR_LBRACE;
	v->a[4230] = actions(131);
	v->a[4231] = 1;
	v->a[4232] = anon_sym_DOLLAR_LPAREN;
	v->a[4233] = actions(133);
	v->a[4234] = 1;
	v->a[4235] = anon_sym_BQUOTE;
	v->a[4236] = actions(135);
	v->a[4237] = 1;
	v->a[4238] = sym_file_descriptor;
	v->a[4239] = actions(137);
	small_parse_table_212(v);
}

void	small_parse_table_212(t_small_parse_table_array *v)
{
	v->a[4240] = 1;
	v->a[4241] = sym_variable_name;
	v->a[4242] = actions(228);
	v->a[4243] = 1;
	v->a[4244] = anon_sym_LF;
	v->a[4245] = state(13);
	v->a[4246] = 1;
	v->a[4247] = aux_sym__case_item_last_repeat2;
	v->a[4248] = state(139);
	v->a[4249] = 1;
	v->a[4250] = aux_sym__statements_repeat1;
	v->a[4251] = state(173);
	v->a[4252] = 1;
	v->a[4253] = sym_command_name;
	v->a[4254] = state(269);
	v->a[4255] = 1;
	v->a[4256] = sym_variable_assignment;
	v->a[4257] = state(663);
	v->a[4258] = 1;
	v->a[4259] = aux_sym_command_repeat1;
	small_parse_table_213(v);
}

void	small_parse_table_213(t_small_parse_table_array *v)
{
	v->a[4260] = state(665);
	v->a[4261] = 1;
	v->a[4262] = sym_concatenation;
	v->a[4263] = state(749);
	v->a[4264] = 1;
	v->a[4265] = sym_file_redirect;
	v->a[4266] = state(1145);
	v->a[4267] = 1;
	v->a[4268] = aux_sym_redirected_statement_repeat2;
	v->a[4269] = state(1190);
	v->a[4270] = 1;
	v->a[4271] = sym_pipeline;
	v->a[4272] = state(2040);
	v->a[4273] = 1;
	v->a[4274] = sym__statement_not_pipeline;
	v->a[4275] = state(2043);
	v->a[4276] = 1;
	v->a[4277] = sym__statements;
	v->a[4278] = actions(99);
	v->a[4279] = 2;
	small_parse_table_214(v);
}

void	small_parse_table_214(t_small_parse_table_array *v)
{
	v->a[4280] = anon_sym_while;
	v->a[4281] = anon_sym_until;
	v->a[4282] = actions(115);
	v->a[4283] = 2;
	v->a[4284] = anon_sym_LT_AMP_DASH;
	v->a[4285] = anon_sym_GT_AMP_DASH;
	v->a[4286] = state(282);
	v->a[4287] = 6;
	v->a[4288] = sym_arithmetic_expansion;
	v->a[4289] = sym_string;
	v->a[4290] = sym_number;
	v->a[4291] = sym_simple_expansion;
	v->a[4292] = sym_expansion;
	v->a[4293] = sym_command_substitution;
	v->a[4294] = actions(113);
	v->a[4295] = 8;
	v->a[4296] = anon_sym_LT;
	v->a[4297] = anon_sym_GT;
	v->a[4298] = anon_sym_GT_GT;
	v->a[4299] = anon_sym_AMP_GT;
	small_parse_table_215(v);
}

/* EOF small_parse_table_42.c */
