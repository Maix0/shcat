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
	v->a[4300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4301] = actions(1981);
	v->a[4302] = 2;
	v->a[4303] = anon_sym_EQ_EQ;
	v->a[4304] = anon_sym_EQ_TILDE;
	v->a[4305] = actions(2017);
	v->a[4306] = 2;
	v->a[4307] = anon_sym_LT_LPAREN;
	v->a[4308] = anon_sym_GT_LPAREN;
	v->a[4309] = actions(1975);
	v->a[4310] = 3;
	v->a[4311] = sym_raw_string;
	v->a[4312] = sym_ansi_c_string;
	v->a[4313] = sym_word;
	v->a[4314] = state(1093);
	v->a[4315] = 9;
	v->a[4316] = sym_arithmetic_expansion;
	v->a[4317] = sym_brace_expression;
	v->a[4318] = sym_string;
	v->a[4319] = sym_translated_string;
	small_parse_table_216(v);
}

void	small_parse_table_216(t_small_parse_table_array *v)
{
	v->a[4320] = sym_number;
	v->a[4321] = sym_simple_expansion;
	v->a[4322] = sym_expansion;
	v->a[4323] = sym_command_substitution;
	v->a[4324] = sym_process_substitution;
	v->a[4325] = actions(1486);
	v->a[4326] = 19;
	v->a[4327] = anon_sym_SEMI;
	v->a[4328] = anon_sym_PIPE_PIPE;
	v->a[4329] = anon_sym_AMP_AMP;
	v->a[4330] = anon_sym_PIPE;
	v->a[4331] = anon_sym_AMP;
	v->a[4332] = anon_sym_LT;
	v->a[4333] = anon_sym_GT;
	v->a[4334] = anon_sym_LT_LT;
	v->a[4335] = anon_sym_GT_GT;
	v->a[4336] = anon_sym_SEMI_SEMI;
	v->a[4337] = anon_sym_PIPE_AMP;
	v->a[4338] = anon_sym_AMP_GT;
	v->a[4339] = anon_sym_AMP_GT_GT;
	small_parse_table_217(v);
}

void	small_parse_table_217(t_small_parse_table_array *v)
{
	v->a[4340] = anon_sym_LT_AMP;
	v->a[4341] = anon_sym_GT_AMP;
	v->a[4342] = anon_sym_GT_PIPE;
	v->a[4343] = anon_sym_LT_AMP_DASH;
	v->a[4344] = anon_sym_GT_AMP_DASH;
	v->a[4345] = anon_sym_LT_LT_DASH;
	v->a[4346] = 24;
	v->a[4347] = actions(3);
	v->a[4348] = 1;
	v->a[4349] = sym_comment;
	v->a[4350] = actions(2036);
	v->a[4351] = 1;
	v->a[4352] = anon_sym_DOLLAR_LBRACK;
	v->a[4353] = actions(2038);
	v->a[4354] = 1;
	v->a[4355] = anon_sym_DOLLAR;
	v->a[4356] = actions(2040);
	v->a[4357] = 1;
	v->a[4358] = sym__special_character;
	v->a[4359] = actions(2042);
	small_parse_table_218(v);
}

void	small_parse_table_218(t_small_parse_table_array *v)
{
	v->a[4360] = 1;
	v->a[4361] = anon_sym_DQUOTE;
	v->a[4362] = actions(2044);
	v->a[4363] = 1;
	v->a[4364] = aux_sym_number_token1;
	v->a[4365] = actions(2046);
	v->a[4366] = 1;
	v->a[4367] = aux_sym_number_token2;
	v->a[4368] = actions(2048);
	v->a[4369] = 1;
	v->a[4370] = anon_sym_DOLLAR_LBRACE;
	v->a[4371] = actions(2050);
	v->a[4372] = 1;
	v->a[4373] = anon_sym_DOLLAR_LPAREN;
	v->a[4374] = actions(2052);
	v->a[4375] = 1;
	v->a[4376] = anon_sym_BQUOTE;
	v->a[4377] = actions(2054);
	v->a[4378] = 1;
	v->a[4379] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_219(v);
}

void	small_parse_table_219(t_small_parse_table_array *v)
{
	v->a[4380] = actions(2058);
	v->a[4381] = 1;
	v->a[4382] = aux_sym__simple_variable_name_token1;
	v->a[4383] = actions(2060);
	v->a[4384] = 1;
	v->a[4385] = sym_variable_name;
	v->a[4386] = actions(2062);
	v->a[4387] = 1;
	v->a[4388] = sym_test_operator;
	v->a[4389] = actions(2064);
	v->a[4390] = 1;
	v->a[4391] = sym__brace_start;
	v->a[4392] = state(1816);
	v->a[4393] = 1;
	v->a[4394] = aux_sym__literal_repeat1;
	v->a[4395] = state(6731);
	v->a[4396] = 1;
	v->a[4397] = sym_subscript;
	v->a[4398] = actions(2034);
	v->a[4399] = 2;
	small_parse_table_220(v);
}

/* EOF small_parse_table_43.c */
