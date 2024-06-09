/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_47.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_235(t_small_parse_table_array *v)
{
	v->a[4700] = state(1172);
	v->a[4701] = 12;
	v->a[4702] = sym_redirected_statement;
	v->a[4703] = sym_for_statement;
	v->a[4704] = sym_while_statement;
	v->a[4705] = sym_if_statement;
	v->a[4706] = sym_case_statement;
	v->a[4707] = sym_function_definition;
	v->a[4708] = sym_compound_statement;
	v->a[4709] = sym_subshell;
	v->a[4710] = sym_list;
	v->a[4711] = sym_negated_command;
	v->a[4712] = sym_command;
	v->a[4713] = sym_variable_assignments;
	v->a[4714] = 34;
	v->a[4715] = actions(3);
	v->a[4716] = 1;
	v->a[4717] = sym_comment;
	v->a[4718] = actions(151);
	v->a[4719] = 1;
	small_parse_table_236(v);
}

void	small_parse_table_236(t_small_parse_table_array *v)
{
	v->a[4720] = sym_word;
	v->a[4721] = actions(154);
	v->a[4722] = 1;
	v->a[4723] = anon_sym_for;
	v->a[4724] = actions(160);
	v->a[4725] = 1;
	v->a[4726] = anon_sym_if;
	v->a[4727] = actions(165);
	v->a[4728] = 1;
	v->a[4729] = anon_sym_case;
	v->a[4730] = actions(168);
	v->a[4731] = 1;
	v->a[4732] = anon_sym_LPAREN;
	v->a[4733] = actions(171);
	v->a[4734] = 1;
	v->a[4735] = anon_sym_LBRACE;
	v->a[4736] = actions(174);
	v->a[4737] = 1;
	v->a[4738] = anon_sym_BANG;
	v->a[4739] = actions(183);
	small_parse_table_237(v);
}

void	small_parse_table_237(t_small_parse_table_array *v)
{
	v->a[4740] = 1;
	v->a[4741] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4742] = actions(186);
	v->a[4743] = 1;
	v->a[4744] = anon_sym_DOLLAR;
	v->a[4745] = actions(189);
	v->a[4746] = 1;
	v->a[4747] = anon_sym_DQUOTE;
	v->a[4748] = actions(192);
	v->a[4749] = 1;
	v->a[4750] = sym_raw_string;
	v->a[4751] = actions(195);
	v->a[4752] = 1;
	v->a[4753] = aux_sym_number_token1;
	v->a[4754] = actions(198);
	v->a[4755] = 1;
	v->a[4756] = aux_sym_number_token2;
	v->a[4757] = actions(201);
	v->a[4758] = 1;
	v->a[4759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_238(v);
}

void	small_parse_table_238(t_small_parse_table_array *v)
{
	v->a[4760] = actions(204);
	v->a[4761] = 1;
	v->a[4762] = anon_sym_DOLLAR_LPAREN;
	v->a[4763] = actions(207);
	v->a[4764] = 1;
	v->a[4765] = anon_sym_BQUOTE;
	v->a[4766] = actions(210);
	v->a[4767] = 1;
	v->a[4768] = sym_file_descriptor;
	v->a[4769] = actions(213);
	v->a[4770] = 1;
	v->a[4771] = sym_variable_name;
	v->a[4772] = state(37);
	v->a[4773] = 1;
	v->a[4774] = aux_sym__terminated_statement;
	v->a[4775] = state(190);
	v->a[4776] = 1;
	v->a[4777] = sym_command_name;
	v->a[4778] = state(303);
	v->a[4779] = 1;
	small_parse_table_239(v);
}

void	small_parse_table_239(t_small_parse_table_array *v)
{
	v->a[4780] = sym_variable_assignment;
	v->a[4781] = state(582);
	v->a[4782] = 1;
	v->a[4783] = sym_concatenation;
	v->a[4784] = state(587);
	v->a[4785] = 1;
	v->a[4786] = aux_sym_command_repeat1;
	v->a[4787] = state(718);
	v->a[4788] = 1;
	v->a[4789] = sym_file_redirect;
	v->a[4790] = state(1213);
	v->a[4791] = 1;
	v->a[4792] = aux_sym_redirected_statement_repeat2;
	v->a[4793] = state(1225);
	v->a[4794] = 1;
	v->a[4795] = sym_pipeline;
	v->a[4796] = state(2035);
	v->a[4797] = 1;
	v->a[4798] = sym__statement_not_pipeline;
	v->a[4799] = actions(157);
	small_parse_table_240(v);
}

/* EOF small_parse_table_47.c */
