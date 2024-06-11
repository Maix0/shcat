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
	v->a[4400] = 1;
	v->a[4401] = anon_sym_BANG;
	v->a[4402] = actions(59);
	v->a[4403] = 1;
	v->a[4404] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4405] = actions(61);
	v->a[4406] = 1;
	v->a[4407] = anon_sym_DOLLAR;
	v->a[4408] = actions(63);
	v->a[4409] = 1;
	v->a[4410] = anon_sym_DQUOTE;
	v->a[4411] = actions(67);
	v->a[4412] = 1;
	v->a[4413] = anon_sym_DOLLAR_LBRACE;
	v->a[4414] = actions(69);
	v->a[4415] = 1;
	v->a[4416] = anon_sym_DOLLAR_LPAREN;
	v->a[4417] = actions(71);
	v->a[4418] = 1;
	v->a[4419] = anon_sym_BQUOTE;
	small_parse_table_221(v);
}

void	small_parse_table_221(t_small_parse_table_array *v)
{
	v->a[4420] = actions(73);
	v->a[4421] = 1;
	v->a[4422] = sym_file_descriptor;
	v->a[4423] = actions(75);
	v->a[4424] = 1;
	v->a[4425] = sym_variable_name;
	v->a[4426] = actions(214);
	v->a[4427] = 1;
	v->a[4428] = anon_sym_do;
	v->a[4429] = state(117);
	v->a[4430] = 1;
	v->a[4431] = aux_sym__terminated_statement;
	v->a[4432] = state(187);
	v->a[4433] = 1;
	v->a[4434] = sym_command_name;
	v->a[4435] = state(300);
	v->a[4436] = 1;
	v->a[4437] = sym_variable_assignment;
	v->a[4438] = state(647);
	v->a[4439] = 1;
	small_parse_table_222(v);
}

void	small_parse_table_222(t_small_parse_table_array *v)
{
	v->a[4440] = sym_concatenation;
	v->a[4441] = state(736);
	v->a[4442] = 1;
	v->a[4443] = aux_sym_command_repeat1;
	v->a[4444] = state(738);
	v->a[4445] = 1;
	v->a[4446] = sym_file_redirect;
	v->a[4447] = state(1455);
	v->a[4448] = 1;
	v->a[4449] = sym_pipeline;
	v->a[4450] = state(1460);
	v->a[4451] = 1;
	v->a[4452] = aux_sym_redirected_statement_repeat2;
	v->a[4453] = state(1734);
	v->a[4454] = 1;
	v->a[4455] = sym_do_group;
	v->a[4456] = state(2269);
	v->a[4457] = 1;
	v->a[4458] = sym__statement_not_pipeline;
	v->a[4459] = actions(11);
	small_parse_table_223(v);
}

void	small_parse_table_223(t_small_parse_table_array *v)
{
	v->a[4460] = 2;
	v->a[4461] = anon_sym_while;
	v->a[4462] = anon_sym_until;
	v->a[4463] = actions(57);
	v->a[4464] = 2;
	v->a[4465] = anon_sym_LT_AMP_DASH;
	v->a[4466] = anon_sym_GT_AMP_DASH;
	v->a[4467] = actions(65);
	v->a[4468] = 2;
	v->a[4469] = sym_raw_string;
	v->a[4470] = sym_number;
	v->a[4471] = state(394);
	v->a[4472] = 5;
	v->a[4473] = sym_arithmetic_expansion;
	v->a[4474] = sym_string;
	v->a[4475] = sym_simple_expansion;
	v->a[4476] = sym_expansion;
	v->a[4477] = sym_command_substitution;
	v->a[4478] = actions(55);
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
	v->a[4488] = state(1359);
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
