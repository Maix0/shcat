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
	v->a[4200] = 7;
	v->a[4201] = anon_sym_LT;
	v->a[4202] = anon_sym_GT;
	v->a[4203] = anon_sym_GT_GT;
	v->a[4204] = anon_sym_LT_AMP;
	v->a[4205] = anon_sym_GT_AMP;
	v->a[4206] = anon_sym_GT_PIPE;
	v->a[4207] = anon_sym_LT_GT;
	v->a[4208] = state(933);
	v->a[4209] = 12;
	v->a[4210] = sym_redirected_statement;
	v->a[4211] = sym_for_statement;
	v->a[4212] = sym_while_statement;
	v->a[4213] = sym_if_statement;
	v->a[4214] = sym_case_statement;
	v->a[4215] = sym_function_definition;
	v->a[4216] = sym_compound_statement;
	v->a[4217] = sym_subshell;
	v->a[4218] = sym_list;
	v->a[4219] = sym_negated_command;
	small_parse_table_211(v);
}

void	small_parse_table_211(t_small_parse_table_array *v)
{
	v->a[4220] = sym_command;
	v->a[4221] = sym__variable_assignments;
	v->a[4222] = 31;
	v->a[4223] = actions(3);
	v->a[4224] = 1;
	v->a[4225] = sym_comment;
	v->a[4226] = actions(9);
	v->a[4227] = 1;
	v->a[4228] = anon_sym_for;
	v->a[4229] = actions(13);
	v->a[4230] = 1;
	v->a[4231] = anon_sym_if;
	v->a[4232] = actions(15);
	v->a[4233] = 1;
	v->a[4234] = anon_sym_case;
	v->a[4235] = actions(17);
	v->a[4236] = 1;
	v->a[4237] = anon_sym_LPAREN;
	v->a[4238] = actions(19);
	v->a[4239] = 1;
	small_parse_table_212(v);
}

void	small_parse_table_212(t_small_parse_table_array *v)
{
	v->a[4240] = anon_sym_LBRACE;
	v->a[4241] = actions(41);
	v->a[4242] = 1;
	v->a[4243] = sym_word;
	v->a[4244] = actions(49);
	v->a[4245] = 1;
	v->a[4246] = anon_sym_BANG;
	v->a[4247] = actions(53);
	v->a[4248] = 1;
	v->a[4249] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4250] = actions(55);
	v->a[4251] = 1;
	v->a[4252] = anon_sym_DOLLAR;
	v->a[4253] = actions(57);
	v->a[4254] = 1;
	v->a[4255] = anon_sym_DQUOTE;
	v->a[4256] = actions(61);
	v->a[4257] = 1;
	v->a[4258] = anon_sym_DOLLAR_LBRACE;
	v->a[4259] = actions(63);
	small_parse_table_213(v);
}

void	small_parse_table_213(t_small_parse_table_array *v)
{
	v->a[4260] = 1;
	v->a[4261] = anon_sym_DOLLAR_LPAREN;
	v->a[4262] = actions(65);
	v->a[4263] = 1;
	v->a[4264] = anon_sym_BQUOTE;
	v->a[4265] = actions(67);
	v->a[4266] = 1;
	v->a[4267] = sym_variable_name;
	v->a[4268] = actions(198);
	v->a[4269] = 1;
	v->a[4270] = anon_sym_do;
	v->a[4271] = state(96);
	v->a[4272] = 1;
	v->a[4273] = aux_sym__terminated_statement;
	v->a[4274] = state(271);
	v->a[4275] = 1;
	v->a[4276] = sym_command_name;
	v->a[4277] = state(284);
	v->a[4278] = 1;
	v->a[4279] = sym_variable_assignment;
	small_parse_table_214(v);
}

void	small_parse_table_214(t_small_parse_table_array *v)
{
	v->a[4280] = state(482);
	v->a[4281] = 1;
	v->a[4282] = aux_sym_command_repeat1;
	v->a[4283] = state(600);
	v->a[4284] = 1;
	v->a[4285] = sym_file_redirect;
	v->a[4286] = state(602);
	v->a[4287] = 1;
	v->a[4288] = sym_concatenation;
	v->a[4289] = state(1005);
	v->a[4290] = 1;
	v->a[4291] = sym_pipeline;
	v->a[4292] = state(1068);
	v->a[4293] = 1;
	v->a[4294] = aux_sym_redirected_statement_repeat2;
	v->a[4295] = state(1314);
	v->a[4296] = 1;
	v->a[4297] = sym_do_group;
	v->a[4298] = state(1609);
	v->a[4299] = 1;
	small_parse_table_215(v);
}

/* EOF small_parse_table_42.c */
