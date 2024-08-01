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
	v->a[4300] = sym_case_statement;
	v->a[4301] = sym_function_definition;
	v->a[4302] = sym_compound_statement;
	v->a[4303] = sym_subshell;
	v->a[4304] = sym_list;
	v->a[4305] = sym_negated_command;
	v->a[4306] = sym_command;
	v->a[4307] = sym__variable_assignments;
	v->a[4308] = 30;
	v->a[4309] = actions(3);
	v->a[4310] = 1;
	v->a[4311] = sym_comment;
	v->a[4312] = actions(9);
	v->a[4313] = 1;
	v->a[4314] = anon_sym_for;
	v->a[4315] = actions(13);
	v->a[4316] = 1;
	v->a[4317] = anon_sym_if;
	v->a[4318] = actions(15);
	v->a[4319] = 1;
	small_parse_table_216(v);
}

void	small_parse_table_216(t_small_parse_table_array *v)
{
	v->a[4320] = anon_sym_case;
	v->a[4321] = actions(17);
	v->a[4322] = 1;
	v->a[4323] = anon_sym_LPAREN;
	v->a[4324] = actions(19);
	v->a[4325] = 1;
	v->a[4326] = anon_sym_LBRACE;
	v->a[4327] = actions(41);
	v->a[4328] = 1;
	v->a[4329] = sym_word;
	v->a[4330] = actions(49);
	v->a[4331] = 1;
	v->a[4332] = anon_sym_BANG;
	v->a[4333] = actions(53);
	v->a[4334] = 1;
	v->a[4335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4336] = actions(55);
	v->a[4337] = 1;
	v->a[4338] = anon_sym_DOLLAR;
	v->a[4339] = actions(57);
	small_parse_table_217(v);
}

void	small_parse_table_217(t_small_parse_table_array *v)
{
	v->a[4340] = 1;
	v->a[4341] = anon_sym_DQUOTE;
	v->a[4342] = actions(61);
	v->a[4343] = 1;
	v->a[4344] = anon_sym_DOLLAR_LBRACE;
	v->a[4345] = actions(63);
	v->a[4346] = 1;
	v->a[4347] = anon_sym_DOLLAR_LPAREN;
	v->a[4348] = actions(65);
	v->a[4349] = 1;
	v->a[4350] = anon_sym_BQUOTE;
	v->a[4351] = actions(67);
	v->a[4352] = 1;
	v->a[4353] = sym_variable_name;
	v->a[4354] = actions(202);
	v->a[4355] = 1;
	v->a[4356] = anon_sym_then;
	v->a[4357] = state(38);
	v->a[4358] = 1;
	v->a[4359] = aux_sym__terminated_statement;
	small_parse_table_218(v);
}

void	small_parse_table_218(t_small_parse_table_array *v)
{
	v->a[4360] = state(185);
	v->a[4361] = 1;
	v->a[4362] = sym_command_name;
	v->a[4363] = state(237);
	v->a[4364] = 1;
	v->a[4365] = sym_variable_assignment;
	v->a[4366] = state(411);
	v->a[4367] = 1;
	v->a[4368] = aux_sym_command_repeat1;
	v->a[4369] = state(551);
	v->a[4370] = 1;
	v->a[4371] = sym_file_redirect;
	v->a[4372] = state(555);
	v->a[4373] = 1;
	v->a[4374] = sym_concatenation;
	v->a[4375] = state(1059);
	v->a[4376] = 1;
	v->a[4377] = sym_pipeline;
	v->a[4378] = state(1126);
	v->a[4379] = 1;
	small_parse_table_219(v);
}

void	small_parse_table_219(t_small_parse_table_array *v)
{
	v->a[4380] = aux_sym_redirected_statement_repeat2;
	v->a[4381] = state(1561);
	v->a[4382] = 1;
	v->a[4383] = sym__statement_not_pipeline;
	v->a[4384] = actions(11);
	v->a[4385] = 2;
	v->a[4386] = anon_sym_while;
	v->a[4387] = anon_sym_until;
	v->a[4388] = actions(59);
	v->a[4389] = 2;
	v->a[4390] = sym_raw_string;
	v->a[4391] = sym_number;
	v->a[4392] = actions(51);
	v->a[4393] = 3;
	v->a[4394] = anon_sym_LT;
	v->a[4395] = anon_sym_GT;
	v->a[4396] = anon_sym_GT_GT;
	v->a[4397] = state(401);
	v->a[4398] = 5;
	v->a[4399] = sym_arithmetic_expansion;
	small_parse_table_220(v);
}

/* EOF small_parse_table_43.c */
