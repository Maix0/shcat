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
	v->a[4300] = anon_sym_AMP_GT_GT;
	v->a[4301] = anon_sym_LT_AMP;
	v->a[4302] = anon_sym_GT_AMP;
	v->a[4303] = anon_sym_GT_PIPE;
	v->a[4304] = state(1048);
	v->a[4305] = 12;
	v->a[4306] = sym_redirected_statement;
	v->a[4307] = sym_for_statement;
	v->a[4308] = sym_while_statement;
	v->a[4309] = sym_if_statement;
	v->a[4310] = sym_case_statement;
	v->a[4311] = sym_function_definition;
	v->a[4312] = sym_compound_statement;
	v->a[4313] = sym_subshell;
	v->a[4314] = sym_list;
	v->a[4315] = sym_negated_command;
	v->a[4316] = sym_command;
	v->a[4317] = sym_variable_assignments;
	v->a[4318] = 36;
	v->a[4319] = actions(3);
	small_parse_table_216(v);
}

void	small_parse_table_216(t_small_parse_table_array *v)
{
	v->a[4320] = 1;
	v->a[4321] = sym_comment;
	v->a[4322] = actions(9);
	v->a[4323] = 1;
	v->a[4324] = anon_sym_for;
	v->a[4325] = actions(13);
	v->a[4326] = 1;
	v->a[4327] = anon_sym_if;
	v->a[4328] = actions(15);
	v->a[4329] = 1;
	v->a[4330] = anon_sym_case;
	v->a[4331] = actions(17);
	v->a[4332] = 1;
	v->a[4333] = anon_sym_LPAREN;
	v->a[4334] = actions(19);
	v->a[4335] = 1;
	v->a[4336] = anon_sym_LBRACE;
	v->a[4337] = actions(49);
	v->a[4338] = 1;
	v->a[4339] = sym_word;
	small_parse_table_217(v);
}

void	small_parse_table_217(t_small_parse_table_array *v)
{
	v->a[4340] = actions(57);
	v->a[4341] = 1;
	v->a[4342] = anon_sym_BANG;
	v->a[4343] = actions(63);
	v->a[4344] = 1;
	v->a[4345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4346] = actions(65);
	v->a[4347] = 1;
	v->a[4348] = anon_sym_DOLLAR;
	v->a[4349] = actions(67);
	v->a[4350] = 1;
	v->a[4351] = anon_sym_DQUOTE;
	v->a[4352] = actions(69);
	v->a[4353] = 1;
	v->a[4354] = sym_raw_string;
	v->a[4355] = actions(71);
	v->a[4356] = 1;
	v->a[4357] = aux_sym_number_token1;
	v->a[4358] = actions(73);
	v->a[4359] = 1;
	small_parse_table_218(v);
}

void	small_parse_table_218(t_small_parse_table_array *v)
{
	v->a[4360] = aux_sym_number_token2;
	v->a[4361] = actions(75);
	v->a[4362] = 1;
	v->a[4363] = anon_sym_DOLLAR_LBRACE;
	v->a[4364] = actions(77);
	v->a[4365] = 1;
	v->a[4366] = anon_sym_DOLLAR_LPAREN;
	v->a[4367] = actions(79);
	v->a[4368] = 1;
	v->a[4369] = anon_sym_BQUOTE;
	v->a[4370] = actions(81);
	v->a[4371] = 1;
	v->a[4372] = sym_file_descriptor;
	v->a[4373] = actions(83);
	v->a[4374] = 1;
	v->a[4375] = sym_variable_name;
	v->a[4376] = actions(230);
	v->a[4377] = 1;
	v->a[4378] = anon_sym_LF;
	v->a[4379] = state(32);
	small_parse_table_219(v);
}

void	small_parse_table_219(t_small_parse_table_array *v)
{
	v->a[4380] = 1;
	v->a[4381] = aux_sym__case_item_last_repeat2;
	v->a[4382] = state(131);
	v->a[4383] = 1;
	v->a[4384] = aux_sym__statements_repeat1;
	v->a[4385] = state(190);
	v->a[4386] = 1;
	v->a[4387] = sym_command_name;
	v->a[4388] = state(314);
	v->a[4389] = 1;
	v->a[4390] = sym_variable_assignment;
	v->a[4391] = state(582);
	v->a[4392] = 1;
	v->a[4393] = sym_concatenation;
	v->a[4394] = state(587);
	v->a[4395] = 1;
	v->a[4396] = aux_sym_command_repeat1;
	v->a[4397] = state(718);
	v->a[4398] = 1;
	v->a[4399] = sym_file_redirect;
	small_parse_table_220(v);
}

/* EOF small_parse_table_43.c */
