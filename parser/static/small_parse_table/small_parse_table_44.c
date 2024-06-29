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
	v->a[4400] = anon_sym_LBRACE;
	v->a[4401] = actions(164);
	v->a[4402] = 1;
	v->a[4403] = anon_sym_BANG;
	v->a[4404] = actions(173);
	v->a[4405] = 1;
	v->a[4406] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4407] = actions(176);
	v->a[4408] = 1;
	v->a[4409] = anon_sym_DOLLAR;
	v->a[4410] = actions(179);
	v->a[4411] = 1;
	v->a[4412] = anon_sym_DQUOTE;
	v->a[4413] = actions(185);
	v->a[4414] = 1;
	v->a[4415] = anon_sym_DOLLAR_LBRACE;
	v->a[4416] = actions(188);
	v->a[4417] = 1;
	v->a[4418] = anon_sym_DOLLAR_LPAREN;
	v->a[4419] = actions(191);
	small_parse_table_221(v);
}

void	small_parse_table_221(t_small_parse_table_array *v)
{
	v->a[4420] = 1;
	v->a[4421] = anon_sym_BQUOTE;
	v->a[4422] = actions(194);
	v->a[4423] = 1;
	v->a[4424] = sym_file_descriptor;
	v->a[4425] = actions(197);
	v->a[4426] = 1;
	v->a[4427] = sym_variable_name;
	v->a[4428] = state(36);
	v->a[4429] = 1;
	v->a[4430] = aux_sym__terminated_statement;
	v->a[4431] = state(191);
	v->a[4432] = 1;
	v->a[4433] = sym_command_name;
	v->a[4434] = state(252);
	v->a[4435] = 1;
	v->a[4436] = sym_variable_assignment;
	v->a[4437] = state(624);
	v->a[4438] = 1;
	v->a[4439] = sym_concatenation;
	small_parse_table_222(v);
}

void	small_parse_table_222(t_small_parse_table_array *v)
{
	v->a[4440] = state(726);
	v->a[4441] = 1;
	v->a[4442] = sym_file_redirect;
	v->a[4443] = state(733);
	v->a[4444] = 1;
	v->a[4445] = aux_sym_command_repeat1;
	v->a[4446] = state(1246);
	v->a[4447] = 1;
	v->a[4448] = sym_pipeline;
	v->a[4449] = state(1307);
	v->a[4450] = 1;
	v->a[4451] = aux_sym_redirected_statement_repeat2;
	v->a[4452] = state(2117);
	v->a[4453] = 1;
	v->a[4454] = sym__statement_not_pipeline;
	v->a[4455] = actions(147);
	v->a[4456] = 2;
	v->a[4457] = anon_sym_while;
	v->a[4458] = anon_sym_until;
	v->a[4459] = actions(153);
	small_parse_table_223(v);
}

void	small_parse_table_223(t_small_parse_table_array *v)
{
	v->a[4460] = 2;
	v->a[4461] = anon_sym_done;
	v->a[4462] = anon_sym_then;
	v->a[4463] = actions(170);
	v->a[4464] = 2;
	v->a[4465] = anon_sym_LT_AMP_DASH;
	v->a[4466] = anon_sym_GT_AMP_DASH;
	v->a[4467] = actions(182);
	v->a[4468] = 2;
	v->a[4469] = sym_raw_string;
	v->a[4470] = sym_number;
	v->a[4471] = state(420);
	v->a[4472] = 5;
	v->a[4473] = sym_arithmetic_expansion;
	v->a[4474] = sym_string;
	v->a[4475] = sym_simple_expansion;
	v->a[4476] = sym_expansion;
	v->a[4477] = sym_command_substitution;
	v->a[4478] = actions(167);
	v->a[4479] = 8;
	small_parse_table_224(v);
}

void	small_parse_table_224(t_small_parse_table_array *v)
{
	v->a[4480] = anon_sym_LT;
	v->a[4481] = anon_sym_GT;
	v->a[4482] = anon_sym_GT_GT;
	v->a[4483] = anon_sym_AMP_GT;
	v->a[4484] = anon_sym_AMP_GT_GT;
	v->a[4485] = anon_sym_LT_AMP;
	v->a[4486] = anon_sym_GT_AMP;
	v->a[4487] = anon_sym_GT_PIPE;
	v->a[4488] = state(1112);
	v->a[4489] = 12;
	v->a[4490] = sym_redirected_statement;
	v->a[4491] = sym_for_statement;
	v->a[4492] = sym_while_statement;
	v->a[4493] = sym_if_statement;
	v->a[4494] = sym_case_statement;
	v->a[4495] = sym_function_definition;
	v->a[4496] = sym_compound_statement;
	v->a[4497] = sym_subshell;
	v->a[4498] = sym_list;
	v->a[4499] = sym_negated_command;
	small_parse_table_225(v);
}

/* EOF small_parse_table_44.c */
