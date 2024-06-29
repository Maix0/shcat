/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_43.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_215(t_small_parse_table_array *v)
{
	v->a[4300] = actions(75);
	v->a[4301] = 1;
	v->a[4302] = sym_variable_name;
	v->a[4303] = actions(214);
	v->a[4304] = 1;
	v->a[4305] = anon_sym_do;
	v->a[4306] = state(118);
	v->a[4307] = 1;
	v->a[4308] = aux_sym__terminated_statement;
	v->a[4309] = state(191);
	v->a[4310] = 1;
	v->a[4311] = sym_command_name;
	v->a[4312] = state(280);
	v->a[4313] = 1;
	v->a[4314] = sym_variable_assignment;
	v->a[4315] = state(624);
	v->a[4316] = 1;
	v->a[4317] = sym_concatenation;
	v->a[4318] = state(726);
	v->a[4319] = 1;
	small_parse_table_216(v);
}

void	small_parse_table_216(t_small_parse_table_array *v)
{
	v->a[4320] = sym_file_redirect;
	v->a[4321] = state(733);
	v->a[4322] = 1;
	v->a[4323] = aux_sym_command_repeat1;
	v->a[4324] = state(1235);
	v->a[4325] = 1;
	v->a[4326] = sym_pipeline;
	v->a[4327] = state(1307);
	v->a[4328] = 1;
	v->a[4329] = aux_sym_redirected_statement_repeat2;
	v->a[4330] = state(1324);
	v->a[4331] = 1;
	v->a[4332] = sym_do_group;
	v->a[4333] = state(2117);
	v->a[4334] = 1;
	v->a[4335] = sym__statement_not_pipeline;
	v->a[4336] = actions(11);
	v->a[4337] = 2;
	v->a[4338] = anon_sym_while;
	v->a[4339] = anon_sym_until;
	small_parse_table_217(v);
}

void	small_parse_table_217(t_small_parse_table_array *v)
{
	v->a[4340] = actions(57);
	v->a[4341] = 2;
	v->a[4342] = anon_sym_LT_AMP_DASH;
	v->a[4343] = anon_sym_GT_AMP_DASH;
	v->a[4344] = actions(65);
	v->a[4345] = 2;
	v->a[4346] = sym_raw_string;
	v->a[4347] = sym_number;
	v->a[4348] = state(420);
	v->a[4349] = 5;
	v->a[4350] = sym_arithmetic_expansion;
	v->a[4351] = sym_string;
	v->a[4352] = sym_simple_expansion;
	v->a[4353] = sym_expansion;
	v->a[4354] = sym_command_substitution;
	v->a[4355] = actions(55);
	v->a[4356] = 8;
	v->a[4357] = anon_sym_LT;
	v->a[4358] = anon_sym_GT;
	v->a[4359] = anon_sym_GT_GT;
	small_parse_table_218(v);
}

void	small_parse_table_218(t_small_parse_table_array *v)
{
	v->a[4360] = anon_sym_AMP_GT;
	v->a[4361] = anon_sym_AMP_GT_GT;
	v->a[4362] = anon_sym_LT_AMP;
	v->a[4363] = anon_sym_GT_AMP;
	v->a[4364] = anon_sym_GT_PIPE;
	v->a[4365] = state(1174);
	v->a[4366] = 12;
	v->a[4367] = sym_redirected_statement;
	v->a[4368] = sym_for_statement;
	v->a[4369] = sym_while_statement;
	v->a[4370] = sym_if_statement;
	v->a[4371] = sym_case_statement;
	v->a[4372] = sym_function_definition;
	v->a[4373] = sym_compound_statement;
	v->a[4374] = sym_subshell;
	v->a[4375] = sym_list;
	v->a[4376] = sym_negated_command;
	v->a[4377] = sym_command;
	v->a[4378] = sym__variable_assignments;
	v->a[4379] = 32;
	small_parse_table_219(v);
}

void	small_parse_table_219(t_small_parse_table_array *v)
{
	v->a[4380] = actions(3);
	v->a[4381] = 1;
	v->a[4382] = sym_comment;
	v->a[4383] = actions(141);
	v->a[4384] = 1;
	v->a[4385] = sym_word;
	v->a[4386] = actions(144);
	v->a[4387] = 1;
	v->a[4388] = anon_sym_for;
	v->a[4389] = actions(150);
	v->a[4390] = 1;
	v->a[4391] = anon_sym_if;
	v->a[4392] = actions(155);
	v->a[4393] = 1;
	v->a[4394] = anon_sym_case;
	v->a[4395] = actions(158);
	v->a[4396] = 1;
	v->a[4397] = anon_sym_LPAREN;
	v->a[4398] = actions(161);
	v->a[4399] = 1;
	small_parse_table_220(v);
}

/* EOF small_parse_table_43.c */
