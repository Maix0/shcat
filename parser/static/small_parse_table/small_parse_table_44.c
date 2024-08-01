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
	v->a[4400] = sym_string;
	v->a[4401] = sym_simple_expansion;
	v->a[4402] = sym_expansion;
	v->a[4403] = sym_command_substitution;
	v->a[4404] = state(949);
	v->a[4405] = 12;
	v->a[4406] = sym_redirected_statement;
	v->a[4407] = sym_for_statement;
	v->a[4408] = sym_while_statement;
	v->a[4409] = sym_if_statement;
	v->a[4410] = sym_case_statement;
	v->a[4411] = sym_function_definition;
	v->a[4412] = sym_compound_statement;
	v->a[4413] = sym_subshell;
	v->a[4414] = sym_list;
	v->a[4415] = sym_negated_command;
	v->a[4416] = sym_command;
	v->a[4417] = sym__variable_assignments;
	v->a[4418] = 30;
	v->a[4419] = actions(3);
	small_parse_table_221(v);
}

void	small_parse_table_221(t_small_parse_table_array *v)
{
	v->a[4420] = 1;
	v->a[4421] = sym_comment;
	v->a[4422] = actions(9);
	v->a[4423] = 1;
	v->a[4424] = anon_sym_for;
	v->a[4425] = actions(13);
	v->a[4426] = 1;
	v->a[4427] = anon_sym_if;
	v->a[4428] = actions(15);
	v->a[4429] = 1;
	v->a[4430] = anon_sym_case;
	v->a[4431] = actions(17);
	v->a[4432] = 1;
	v->a[4433] = anon_sym_LPAREN;
	v->a[4434] = actions(19);
	v->a[4435] = 1;
	v->a[4436] = anon_sym_LBRACE;
	v->a[4437] = actions(53);
	v->a[4438] = 1;
	v->a[4439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_222(v);
}

void	small_parse_table_222(t_small_parse_table_array *v)
{
	v->a[4440] = actions(55);
	v->a[4441] = 1;
	v->a[4442] = anon_sym_DOLLAR;
	v->a[4443] = actions(57);
	v->a[4444] = 1;
	v->a[4445] = anon_sym_DQUOTE;
	v->a[4446] = actions(61);
	v->a[4447] = 1;
	v->a[4448] = anon_sym_DOLLAR_LBRACE;
	v->a[4449] = actions(63);
	v->a[4450] = 1;
	v->a[4451] = anon_sym_DOLLAR_LPAREN;
	v->a[4452] = actions(65);
	v->a[4453] = 1;
	v->a[4454] = anon_sym_BQUOTE;
	v->a[4455] = actions(67);
	v->a[4456] = 1;
	v->a[4457] = sym_variable_name;
	v->a[4458] = actions(204);
	v->a[4459] = 1;
	small_parse_table_223(v);
}

void	small_parse_table_223(t_small_parse_table_array *v)
{
	v->a[4460] = sym_word;
	v->a[4461] = actions(206);
	v->a[4462] = 1;
	v->a[4463] = anon_sym_BANG;
	v->a[4464] = state(116);
	v->a[4465] = 1;
	v->a[4466] = aux_sym__statements_repeat1;
	v->a[4467] = state(179);
	v->a[4468] = 1;
	v->a[4469] = sym_command_name;
	v->a[4470] = state(208);
	v->a[4471] = 1;
	v->a[4472] = sym_variable_assignment;
	v->a[4473] = state(385);
	v->a[4474] = 1;
	v->a[4475] = aux_sym_command_repeat1;
	v->a[4476] = state(555);
	v->a[4477] = 1;
	v->a[4478] = sym_concatenation;
	v->a[4479] = state(599);
	small_parse_table_224(v);
}

void	small_parse_table_224(t_small_parse_table_array *v)
{
	v->a[4480] = 1;
	v->a[4481] = sym_file_redirect;
	v->a[4482] = state(969);
	v->a[4483] = 1;
	v->a[4484] = sym_pipeline;
	v->a[4485] = state(1006);
	v->a[4486] = 1;
	v->a[4487] = aux_sym_redirected_statement_repeat2;
	v->a[4488] = state(1560);
	v->a[4489] = 1;
	v->a[4490] = sym__statement_not_pipeline;
	v->a[4491] = state(1724);
	v->a[4492] = 1;
	v->a[4493] = sym__statements;
	v->a[4494] = actions(11);
	v->a[4495] = 2;
	v->a[4496] = anon_sym_while;
	v->a[4497] = anon_sym_until;
	v->a[4498] = actions(59);
	v->a[4499] = 2;
	small_parse_table_225(v);
}

/* EOF small_parse_table_44.c */
