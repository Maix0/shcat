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
	v->a[4200] = anon_sym_if;
	v->a[4201] = actions(103);
	v->a[4202] = 1;
	v->a[4203] = anon_sym_case;
	v->a[4204] = actions(106);
	v->a[4205] = 1;
	v->a[4206] = anon_sym_LPAREN;
	v->a[4207] = actions(109);
	v->a[4208] = 1;
	v->a[4209] = anon_sym_LBRACE;
	v->a[4210] = actions(112);
	v->a[4211] = 1;
	v->a[4212] = anon_sym_BANG;
	v->a[4213] = actions(121);
	v->a[4214] = 1;
	v->a[4215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4216] = actions(124);
	v->a[4217] = 1;
	v->a[4218] = anon_sym_DOLLAR;
	v->a[4219] = actions(127);
	small_parse_table_211(v);
}

void	small_parse_table_211(t_small_parse_table_array *v)
{
	v->a[4220] = 1;
	v->a[4221] = anon_sym_DQUOTE;
	v->a[4222] = actions(133);
	v->a[4223] = 1;
	v->a[4224] = anon_sym_DOLLAR_LBRACE;
	v->a[4225] = actions(136);
	v->a[4226] = 1;
	v->a[4227] = anon_sym_DOLLAR_LPAREN;
	v->a[4228] = actions(139);
	v->a[4229] = 1;
	v->a[4230] = anon_sym_BQUOTE;
	v->a[4231] = actions(142);
	v->a[4232] = 1;
	v->a[4233] = sym_file_descriptor;
	v->a[4234] = actions(145);
	v->a[4235] = 1;
	v->a[4236] = sym_variable_name;
	v->a[4237] = state(35);
	v->a[4238] = 1;
	v->a[4239] = aux_sym__terminated_statement;
	small_parse_table_212(v);
}

void	small_parse_table_212(t_small_parse_table_array *v)
{
	v->a[4240] = state(189);
	v->a[4241] = 1;
	v->a[4242] = sym_command_name;
	v->a[4243] = state(291);
	v->a[4244] = 1;
	v->a[4245] = sym_variable_assignment;
	v->a[4246] = state(650);
	v->a[4247] = 1;
	v->a[4248] = sym_concatenation;
	v->a[4249] = state(712);
	v->a[4250] = 1;
	v->a[4251] = sym_file_redirect;
	v->a[4252] = state(713);
	v->a[4253] = 1;
	v->a[4254] = aux_sym_command_repeat1;
	v->a[4255] = state(1251);
	v->a[4256] = 1;
	v->a[4257] = sym_pipeline;
	v->a[4258] = state(1333);
	v->a[4259] = 1;
	small_parse_table_213(v);
}

void	small_parse_table_213(t_small_parse_table_array *v)
{
	v->a[4260] = aux_sym_redirected_statement_repeat2;
	v->a[4261] = state(2103);
	v->a[4262] = 1;
	v->a[4263] = sym__statement_not_pipeline;
	v->a[4264] = actions(95);
	v->a[4265] = 2;
	v->a[4266] = anon_sym_while;
	v->a[4267] = anon_sym_until;
	v->a[4268] = actions(101);
	v->a[4269] = 2;
	v->a[4270] = anon_sym_done;
	v->a[4271] = anon_sym_then;
	v->a[4272] = actions(118);
	v->a[4273] = 2;
	v->a[4274] = anon_sym_LT_AMP_DASH;
	v->a[4275] = anon_sym_GT_AMP_DASH;
	v->a[4276] = actions(130);
	v->a[4277] = 2;
	v->a[4278] = sym_raw_string;
	v->a[4279] = sym_number;
	small_parse_table_214(v);
}

void	small_parse_table_214(t_small_parse_table_array *v)
{
	v->a[4280] = state(443);
	v->a[4281] = 5;
	v->a[4282] = sym_arithmetic_expansion;
	v->a[4283] = sym_string;
	v->a[4284] = sym_simple_expansion;
	v->a[4285] = sym_expansion;
	v->a[4286] = sym_command_substitution;
	v->a[4287] = actions(115);
	v->a[4288] = 6;
	v->a[4289] = anon_sym_LT;
	v->a[4290] = anon_sym_GT;
	v->a[4291] = anon_sym_GT_GT;
	v->a[4292] = anon_sym_LT_AMP;
	v->a[4293] = anon_sym_GT_AMP;
	v->a[4294] = anon_sym_GT_PIPE;
	v->a[4295] = state(1094);
	v->a[4296] = 12;
	v->a[4297] = sym_redirected_statement;
	v->a[4298] = sym_for_statement;
	v->a[4299] = sym_while_statement;
	small_parse_table_215(v);
}

/* EOF small_parse_table_42.c */
