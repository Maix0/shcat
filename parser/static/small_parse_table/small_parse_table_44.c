/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_44.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_220(t_small_parse_table_array *v)
{
	v->a[4400] = state(1211);
	v->a[4401] = 1;
	v->a[4402] = sym_pipeline;
	v->a[4403] = state(1213);
	v->a[4404] = 1;
	v->a[4405] = aux_sym_redirected_statement_repeat2;
	v->a[4406] = state(2035);
	v->a[4407] = 1;
	v->a[4408] = sym__statement_not_pipeline;
	v->a[4409] = state(2077);
	v->a[4410] = 1;
	v->a[4411] = sym__statements;
	v->a[4412] = actions(11);
	v->a[4413] = 2;
	v->a[4414] = anon_sym_while;
	v->a[4415] = anon_sym_until;
	v->a[4416] = actions(61);
	v->a[4417] = 2;
	v->a[4418] = anon_sym_LT_AMP_DASH;
	v->a[4419] = anon_sym_GT_AMP_DASH;
	small_parse_table_221(v);
}

void	small_parse_table_221(t_small_parse_table_array *v)
{
	v->a[4420] = state(397);
	v->a[4421] = 6;
	v->a[4422] = sym_arithmetic_expansion;
	v->a[4423] = sym_string;
	v->a[4424] = sym_number;
	v->a[4425] = sym_simple_expansion;
	v->a[4426] = sym_expansion;
	v->a[4427] = sym_command_substitution;
	v->a[4428] = actions(59);
	v->a[4429] = 8;
	v->a[4430] = anon_sym_LT;
	v->a[4431] = anon_sym_GT;
	v->a[4432] = anon_sym_GT_GT;
	v->a[4433] = anon_sym_AMP_GT;
	v->a[4434] = anon_sym_AMP_GT_GT;
	v->a[4435] = anon_sym_LT_AMP;
	v->a[4436] = anon_sym_GT_AMP;
	v->a[4437] = anon_sym_GT_PIPE;
	v->a[4438] = state(1140);
	v->a[4439] = 12;
	small_parse_table_222(v);
}

void	small_parse_table_222(t_small_parse_table_array *v)
{
	v->a[4440] = sym_redirected_statement;
	v->a[4441] = sym_for_statement;
	v->a[4442] = sym_while_statement;
	v->a[4443] = sym_if_statement;
	v->a[4444] = sym_case_statement;
	v->a[4445] = sym_function_definition;
	v->a[4446] = sym_compound_statement;
	v->a[4447] = sym_subshell;
	v->a[4448] = sym_list;
	v->a[4449] = sym_negated_command;
	v->a[4450] = sym_command;
	v->a[4451] = sym_variable_assignments;
	v->a[4452] = 35;
	v->a[4453] = actions(3);
	v->a[4454] = 1;
	v->a[4455] = sym_comment;
	v->a[4456] = actions(9);
	v->a[4457] = 1;
	v->a[4458] = anon_sym_for;
	v->a[4459] = actions(13);
	small_parse_table_223(v);
}

void	small_parse_table_223(t_small_parse_table_array *v)
{
	v->a[4460] = 1;
	v->a[4461] = anon_sym_if;
	v->a[4462] = actions(15);
	v->a[4463] = 1;
	v->a[4464] = anon_sym_case;
	v->a[4465] = actions(17);
	v->a[4466] = 1;
	v->a[4467] = anon_sym_LPAREN;
	v->a[4468] = actions(19);
	v->a[4469] = 1;
	v->a[4470] = anon_sym_LBRACE;
	v->a[4471] = actions(49);
	v->a[4472] = 1;
	v->a[4473] = sym_word;
	v->a[4474] = actions(57);
	v->a[4475] = 1;
	v->a[4476] = anon_sym_BANG;
	v->a[4477] = actions(63);
	v->a[4478] = 1;
	v->a[4479] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_224(v);
}

void	small_parse_table_224(t_small_parse_table_array *v)
{
	v->a[4480] = actions(65);
	v->a[4481] = 1;
	v->a[4482] = anon_sym_DOLLAR;
	v->a[4483] = actions(67);
	v->a[4484] = 1;
	v->a[4485] = anon_sym_DQUOTE;
	v->a[4486] = actions(69);
	v->a[4487] = 1;
	v->a[4488] = sym_raw_string;
	v->a[4489] = actions(71);
	v->a[4490] = 1;
	v->a[4491] = aux_sym_number_token1;
	v->a[4492] = actions(73);
	v->a[4493] = 1;
	v->a[4494] = aux_sym_number_token2;
	v->a[4495] = actions(75);
	v->a[4496] = 1;
	v->a[4497] = anon_sym_DOLLAR_LBRACE;
	v->a[4498] = actions(77);
	v->a[4499] = 1;
	small_parse_table_225(v);
}

/* EOF small_parse_table_44.c */
