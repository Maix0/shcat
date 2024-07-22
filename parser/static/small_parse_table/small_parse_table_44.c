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
	v->a[4400] = state(1198);
	v->a[4401] = 1;
	v->a[4402] = aux_sym_redirected_statement_repeat2;
	v->a[4403] = state(1556);
	v->a[4404] = 1;
	v->a[4405] = sym_do_group;
	v->a[4406] = state(1901);
	v->a[4407] = 1;
	v->a[4408] = sym__statement_not_pipeline;
	v->a[4409] = actions(11);
	v->a[4410] = 2;
	v->a[4411] = anon_sym_while;
	v->a[4412] = anon_sym_until;
	v->a[4413] = actions(61);
	v->a[4414] = 2;
	v->a[4415] = sym_raw_string;
	v->a[4416] = sym_number;
	v->a[4417] = state(455);
	v->a[4418] = 5;
	v->a[4419] = sym_arithmetic_expansion;
	small_parse_table_221(v);
}

void	small_parse_table_221(t_small_parse_table_array *v)
{
	v->a[4420] = sym_string;
	v->a[4421] = sym_simple_expansion;
	v->a[4422] = sym_expansion;
	v->a[4423] = sym_command_substitution;
	v->a[4424] = actions(53);
	v->a[4425] = 7;
	v->a[4426] = anon_sym_LT;
	v->a[4427] = anon_sym_GT;
	v->a[4428] = anon_sym_GT_GT;
	v->a[4429] = anon_sym_LT_AMP;
	v->a[4430] = anon_sym_GT_AMP;
	v->a[4431] = anon_sym_GT_PIPE;
	v->a[4432] = anon_sym_LT_GT;
	v->a[4433] = state(1033);
	v->a[4434] = 12;
	v->a[4435] = sym_redirected_statement;
	v->a[4436] = sym_for_statement;
	v->a[4437] = sym_while_statement;
	v->a[4438] = sym_if_statement;
	v->a[4439] = sym_case_statement;
	small_parse_table_222(v);
}

void	small_parse_table_222(t_small_parse_table_array *v)
{
	v->a[4440] = sym_function_definition;
	v->a[4441] = sym_compound_statement;
	v->a[4442] = sym_subshell;
	v->a[4443] = sym_list;
	v->a[4444] = sym_negated_command;
	v->a[4445] = sym_command;
	v->a[4446] = sym__variable_assignments;
	v->a[4447] = 32;
	v->a[4448] = actions(3);
	v->a[4449] = 1;
	v->a[4450] = sym_comment;
	v->a[4451] = actions(9);
	v->a[4452] = 1;
	v->a[4453] = anon_sym_for;
	v->a[4454] = actions(13);
	v->a[4455] = 1;
	v->a[4456] = anon_sym_if;
	v->a[4457] = actions(15);
	v->a[4458] = 1;
	v->a[4459] = anon_sym_case;
	small_parse_table_223(v);
}

void	small_parse_table_223(t_small_parse_table_array *v)
{
	v->a[4460] = actions(17);
	v->a[4461] = 1;
	v->a[4462] = anon_sym_LPAREN;
	v->a[4463] = actions(19);
	v->a[4464] = 1;
	v->a[4465] = anon_sym_LBRACE;
	v->a[4466] = actions(43);
	v->a[4467] = 1;
	v->a[4468] = sym_word;
	v->a[4469] = actions(51);
	v->a[4470] = 1;
	v->a[4471] = anon_sym_BANG;
	v->a[4472] = actions(55);
	v->a[4473] = 1;
	v->a[4474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4475] = actions(57);
	v->a[4476] = 1;
	v->a[4477] = anon_sym_DOLLAR;
	v->a[4478] = actions(59);
	v->a[4479] = 1;
	small_parse_table_224(v);
}

void	small_parse_table_224(t_small_parse_table_array *v)
{
	v->a[4480] = anon_sym_DQUOTE;
	v->a[4481] = actions(63);
	v->a[4482] = 1;
	v->a[4483] = anon_sym_DOLLAR_LBRACE;
	v->a[4484] = actions(65);
	v->a[4485] = 1;
	v->a[4486] = anon_sym_DOLLAR_LPAREN;
	v->a[4487] = actions(67);
	v->a[4488] = 1;
	v->a[4489] = anon_sym_BQUOTE;
	v->a[4490] = actions(69);
	v->a[4491] = 1;
	v->a[4492] = sym_file_descriptor;
	v->a[4493] = actions(71);
	v->a[4494] = 1;
	v->a[4495] = sym_variable_name;
	v->a[4496] = actions(209);
	v->a[4497] = 1;
	v->a[4498] = anon_sym_do;
	v->a[4499] = state(39);
	small_parse_table_225(v);
}

/* EOF small_parse_table_44.c */
