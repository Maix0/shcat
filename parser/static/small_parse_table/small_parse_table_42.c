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
	v->a[4200] = sym_if_statement;
	v->a[4201] = sym_case_statement;
	v->a[4202] = sym_function_definition;
	v->a[4203] = sym_compound_statement;
	v->a[4204] = sym_subshell;
	v->a[4205] = sym_list;
	v->a[4206] = sym_negated_command;
	v->a[4207] = sym_command;
	v->a[4208] = sym__variable_assignments;
	v->a[4209] = 31;
	v->a[4210] = actions(3);
	v->a[4211] = 1;
	v->a[4212] = sym_comment;
	v->a[4213] = actions(141);
	v->a[4214] = 1;
	v->a[4215] = sym_word;
	v->a[4216] = actions(144);
	v->a[4217] = 1;
	v->a[4218] = anon_sym_for;
	v->a[4219] = actions(150);
	small_parse_table_211(v);
}

void	small_parse_table_211(t_small_parse_table_array *v)
{
	v->a[4220] = 1;
	v->a[4221] = anon_sym_if;
	v->a[4222] = actions(155);
	v->a[4223] = 1;
	v->a[4224] = anon_sym_case;
	v->a[4225] = actions(158);
	v->a[4226] = 1;
	v->a[4227] = anon_sym_LPAREN;
	v->a[4228] = actions(161);
	v->a[4229] = 1;
	v->a[4230] = anon_sym_LBRACE;
	v->a[4231] = actions(164);
	v->a[4232] = 1;
	v->a[4233] = anon_sym_BANG;
	v->a[4234] = actions(170);
	v->a[4235] = 1;
	v->a[4236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4237] = actions(173);
	v->a[4238] = 1;
	v->a[4239] = anon_sym_DOLLAR;
	small_parse_table_212(v);
}

void	small_parse_table_212(t_small_parse_table_array *v)
{
	v->a[4240] = actions(176);
	v->a[4241] = 1;
	v->a[4242] = anon_sym_DQUOTE;
	v->a[4243] = actions(182);
	v->a[4244] = 1;
	v->a[4245] = anon_sym_DOLLAR_LBRACE;
	v->a[4246] = actions(185);
	v->a[4247] = 1;
	v->a[4248] = anon_sym_DOLLAR_LPAREN;
	v->a[4249] = actions(188);
	v->a[4250] = 1;
	v->a[4251] = anon_sym_BQUOTE;
	v->a[4252] = actions(191);
	v->a[4253] = 1;
	v->a[4254] = sym_file_descriptor;
	v->a[4255] = actions(194);
	v->a[4256] = 1;
	v->a[4257] = sym_variable_name;
	v->a[4258] = state(36);
	v->a[4259] = 1;
	small_parse_table_213(v);
}

void	small_parse_table_213(t_small_parse_table_array *v)
{
	v->a[4260] = aux_sym__terminated_statement;
	v->a[4261] = state(183);
	v->a[4262] = 1;
	v->a[4263] = sym_command_name;
	v->a[4264] = state(341);
	v->a[4265] = 1;
	v->a[4266] = sym_variable_assignment;
	v->a[4267] = state(603);
	v->a[4268] = 1;
	v->a[4269] = sym_concatenation;
	v->a[4270] = state(639);
	v->a[4271] = 1;
	v->a[4272] = aux_sym_command_repeat1;
	v->a[4273] = state(644);
	v->a[4274] = 1;
	v->a[4275] = sym_file_redirect;
	v->a[4276] = state(1122);
	v->a[4277] = 1;
	v->a[4278] = sym_pipeline;
	v->a[4279] = state(1196);
	small_parse_table_214(v);
}

void	small_parse_table_214(t_small_parse_table_array *v)
{
	v->a[4280] = 1;
	v->a[4281] = aux_sym_redirected_statement_repeat2;
	v->a[4282] = state(1910);
	v->a[4283] = 1;
	v->a[4284] = sym__statement_not_pipeline;
	v->a[4285] = actions(147);
	v->a[4286] = 2;
	v->a[4287] = anon_sym_while;
	v->a[4288] = anon_sym_until;
	v->a[4289] = actions(153);
	v->a[4290] = 2;
	v->a[4291] = anon_sym_done;
	v->a[4292] = anon_sym_then;
	v->a[4293] = actions(179);
	v->a[4294] = 2;
	v->a[4295] = sym_raw_string;
	v->a[4296] = sym_number;
	v->a[4297] = state(436);
	v->a[4298] = 5;
	v->a[4299] = sym_arithmetic_expansion;
	small_parse_table_215(v);
}

/* EOF small_parse_table_42.c */
