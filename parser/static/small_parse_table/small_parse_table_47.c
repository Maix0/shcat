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
	v->a[4700] = actions(61);
	v->a[4701] = 1;
	v->a[4702] = anon_sym_DOLLAR;
	v->a[4703] = actions(63);
	v->a[4704] = 1;
	v->a[4705] = anon_sym_DQUOTE;
	v->a[4706] = actions(67);
	v->a[4707] = 1;
	v->a[4708] = anon_sym_DOLLAR_LBRACE;
	v->a[4709] = actions(69);
	v->a[4710] = 1;
	v->a[4711] = anon_sym_DOLLAR_LPAREN;
	v->a[4712] = actions(71);
	v->a[4713] = 1;
	v->a[4714] = anon_sym_BQUOTE;
	v->a[4715] = actions(220);
	v->a[4716] = 1;
	v->a[4717] = sym_word;
	v->a[4718] = actions(222);
	v->a[4719] = 1;
	small_parse_table_236(v);
}

void	small_parse_table_236(t_small_parse_table_array *v)
{
	v->a[4720] = anon_sym_BANG;
	v->a[4721] = actions(230);
	v->a[4722] = 1;
	v->a[4723] = sym_file_descriptor;
	v->a[4724] = actions(232);
	v->a[4725] = 1;
	v->a[4726] = sym_variable_name;
	v->a[4727] = state(133);
	v->a[4728] = 1;
	v->a[4729] = aux_sym__statements_repeat1;
	v->a[4730] = state(180);
	v->a[4731] = 1;
	v->a[4732] = sym_command_name;
	v->a[4733] = state(231);
	v->a[4734] = 1;
	v->a[4735] = sym_variable_assignment;
	v->a[4736] = state(650);
	v->a[4737] = 1;
	v->a[4738] = sym_concatenation;
	v->a[4739] = state(707);
	small_parse_table_237(v);
}

void	small_parse_table_237(t_small_parse_table_array *v)
{
	v->a[4740] = 1;
	v->a[4741] = sym_file_redirect;
	v->a[4742] = state(710);
	v->a[4743] = 1;
	v->a[4744] = aux_sym_command_repeat1;
	v->a[4745] = state(1095);
	v->a[4746] = 1;
	v->a[4747] = sym_pipeline;
	v->a[4748] = state(1282);
	v->a[4749] = 1;
	v->a[4750] = aux_sym_redirected_statement_repeat2;
	v->a[4751] = state(2127);
	v->a[4752] = 1;
	v->a[4753] = sym__statement_not_pipeline;
	v->a[4754] = state(2287);
	v->a[4755] = 1;
	v->a[4756] = sym__statements;
	v->a[4757] = actions(11);
	v->a[4758] = 2;
	v->a[4759] = anon_sym_while;
	small_parse_table_238(v);
}

void	small_parse_table_238(t_small_parse_table_array *v)
{
	v->a[4760] = anon_sym_until;
	v->a[4761] = actions(226);
	v->a[4762] = 2;
	v->a[4763] = anon_sym_LT_AMP_DASH;
	v->a[4764] = anon_sym_GT_AMP_DASH;
	v->a[4765] = actions(228);
	v->a[4766] = 2;
	v->a[4767] = sym_raw_string;
	v->a[4768] = sym_number;
	v->a[4769] = state(382);
	v->a[4770] = 5;
	v->a[4771] = sym_arithmetic_expansion;
	v->a[4772] = sym_string;
	v->a[4773] = sym_simple_expansion;
	v->a[4774] = sym_expansion;
	v->a[4775] = sym_command_substitution;
	v->a[4776] = actions(224);
	v->a[4777] = 6;
	v->a[4778] = anon_sym_LT;
	v->a[4779] = anon_sym_GT;
	small_parse_table_239(v);
}

void	small_parse_table_239(t_small_parse_table_array *v)
{
	v->a[4780] = anon_sym_GT_GT;
	v->a[4781] = anon_sym_LT_AMP;
	v->a[4782] = anon_sym_GT_AMP;
	v->a[4783] = anon_sym_GT_PIPE;
	v->a[4784] = state(1087);
	v->a[4785] = 12;
	v->a[4786] = sym_redirected_statement;
	v->a[4787] = sym_for_statement;
	v->a[4788] = sym_while_statement;
	v->a[4789] = sym_if_statement;
	v->a[4790] = sym_case_statement;
	v->a[4791] = sym_function_definition;
	v->a[4792] = sym_compound_statement;
	v->a[4793] = sym_subshell;
	v->a[4794] = sym_list;
	v->a[4795] = sym_negated_command;
	v->a[4796] = sym_command;
	v->a[4797] = sym__variable_assignments;
	v->a[4798] = 32;
	v->a[4799] = actions(3);
	small_parse_table_240(v);
}

/* EOF small_parse_table_47.c */
