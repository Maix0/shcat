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
	v->a[4300] = anon_sym_LT;
	v->a[4301] = anon_sym_GT;
	v->a[4302] = anon_sym_GT_GT;
	v->a[4303] = anon_sym_AMP_GT;
	v->a[4304] = anon_sym_AMP_GT_GT;
	v->a[4305] = anon_sym_LT_AMP;
	v->a[4306] = anon_sym_GT_AMP;
	v->a[4307] = anon_sym_GT_PIPE;
	v->a[4308] = anon_sym_LT_AMP_DASH;
	v->a[4309] = anon_sym_GT_AMP_DASH;
	v->a[4310] = anon_sym_LT_LT;
	v->a[4311] = anon_sym_LT_LT_DASH;
	v->a[4312] = anon_sym_AMP;
	v->a[4313] = anon_sym_SEMI;
	v->a[4314] = 21;
	v->a[4315] = actions(3);
	v->a[4316] = 1;
	v->a[4317] = sym_comment;
	v->a[4318] = actions(1435);
	v->a[4319] = 1;
	small_parse_table_216(v);
}

void	small_parse_table_216(t_small_parse_table_array *v)
{
	v->a[4320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4321] = actions(1438);
	v->a[4322] = 1;
	v->a[4323] = anon_sym_DOLLAR;
	v->a[4324] = actions(1441);
	v->a[4325] = 1;
	v->a[4326] = sym__special_character;
	v->a[4327] = actions(1444);
	v->a[4328] = 1;
	v->a[4329] = anon_sym_DQUOTE;
	v->a[4330] = actions(1447);
	v->a[4331] = 1;
	v->a[4332] = aux_sym_number_token1;
	v->a[4333] = actions(1450);
	v->a[4334] = 1;
	v->a[4335] = aux_sym_number_token2;
	v->a[4336] = actions(1453);
	v->a[4337] = 1;
	v->a[4338] = anon_sym_DOLLAR_LBRACE;
	v->a[4339] = actions(1456);
	small_parse_table_217(v);
}

void	small_parse_table_217(t_small_parse_table_array *v)
{
	v->a[4340] = 1;
	v->a[4341] = anon_sym_DOLLAR_LPAREN;
	v->a[4342] = actions(1459);
	v->a[4343] = 1;
	v->a[4344] = anon_sym_BQUOTE;
	v->a[4345] = actions(1462);
	v->a[4346] = 1;
	v->a[4347] = anon_sym_DOLLAR_BQUOTE;
	v->a[4348] = actions(1465);
	v->a[4349] = 1;
	v->a[4350] = sym_test_operator;
	v->a[4351] = actions(1468);
	v->a[4352] = 1;
	v->a[4353] = sym__bare_dollar;
	v->a[4354] = actions(1471);
	v->a[4355] = 1;
	v->a[4356] = sym__brace_start;
	v->a[4357] = state(311);
	v->a[4358] = 1;
	v->a[4359] = aux_sym_command_repeat2;
	small_parse_table_218(v);
}

void	small_parse_table_218(t_small_parse_table_array *v)
{
	v->a[4360] = state(1039);
	v->a[4361] = 1;
	v->a[4362] = aux_sym__literal_repeat1;
	v->a[4363] = state(1193);
	v->a[4364] = 1;
	v->a[4365] = sym_concatenation;
	v->a[4366] = actions(1195);
	v->a[4367] = 2;
	v->a[4368] = sym_file_descriptor;
	v->a[4369] = aux_sym_heredoc_redirect_token1;
	v->a[4370] = actions(1432);
	v->a[4371] = 2;
	v->a[4372] = sym_raw_string;
	v->a[4373] = sym_word;
	v->a[4374] = state(692);
	v->a[4375] = 7;
	v->a[4376] = sym_arithmetic_expansion;
	v->a[4377] = sym_brace_expression;
	v->a[4378] = sym_string;
	v->a[4379] = sym_number;
	small_parse_table_219(v);
}

void	small_parse_table_219(t_small_parse_table_array *v)
{
	v->a[4380] = sym_simple_expansion;
	v->a[4381] = sym_expansion;
	v->a[4382] = sym_command_substitution;
	v->a[4383] = actions(1193);
	v->a[4384] = 21;
	v->a[4385] = anon_sym_PIPE;
	v->a[4386] = anon_sym_SEMI_SEMI;
	v->a[4387] = anon_sym_SEMI_AMP;
	v->a[4388] = anon_sym_SEMI_SEMI_AMP;
	v->a[4389] = anon_sym_PIPE_AMP;
	v->a[4390] = anon_sym_AMP_AMP;
	v->a[4391] = anon_sym_PIPE_PIPE;
	v->a[4392] = anon_sym_LT;
	v->a[4393] = anon_sym_GT;
	v->a[4394] = anon_sym_GT_GT;
	v->a[4395] = anon_sym_AMP_GT;
	v->a[4396] = anon_sym_AMP_GT_GT;
	v->a[4397] = anon_sym_LT_AMP;
	v->a[4398] = anon_sym_GT_AMP;
	v->a[4399] = anon_sym_GT_PIPE;
	small_parse_table_220(v);
}

/* EOF small_parse_table_43.c */
