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
	v->a[4700] = 1;
	v->a[4701] = sym_file_redirect;
	v->a[4702] = state(555);
	v->a[4703] = 1;
	v->a[4704] = sym_concatenation;
	v->a[4705] = state(974);
	v->a[4706] = 1;
	v->a[4707] = sym_pipeline;
	v->a[4708] = state(1126);
	v->a[4709] = 1;
	v->a[4710] = aux_sym_redirected_statement_repeat2;
	v->a[4711] = state(1561);
	v->a[4712] = 1;
	v->a[4713] = sym__statement_not_pipeline;
	v->a[4714] = actions(129);
	v->a[4715] = 2;
	v->a[4716] = anon_sym_while;
	v->a[4717] = anon_sym_until;
	v->a[4718] = actions(161);
	v->a[4719] = 2;
	small_parse_table_236(v);
}

void	small_parse_table_236(t_small_parse_table_array *v)
{
	v->a[4720] = sym_raw_string;
	v->a[4721] = sym_number;
	v->a[4722] = actions(149);
	v->a[4723] = 3;
	v->a[4724] = anon_sym_LT;
	v->a[4725] = anon_sym_GT;
	v->a[4726] = anon_sym_GT_GT;
	v->a[4727] = state(401);
	v->a[4728] = 5;
	v->a[4729] = sym_arithmetic_expansion;
	v->a[4730] = sym_string;
	v->a[4731] = sym_simple_expansion;
	v->a[4732] = sym_expansion;
	v->a[4733] = sym_command_substitution;
	v->a[4734] = state(955);
	v->a[4735] = 12;
	v->a[4736] = sym_redirected_statement;
	v->a[4737] = sym_for_statement;
	v->a[4738] = sym_while_statement;
	v->a[4739] = sym_if_statement;
	small_parse_table_237(v);
}

void	small_parse_table_237(t_small_parse_table_array *v)
{
	v->a[4740] = sym_case_statement;
	v->a[4741] = sym_function_definition;
	v->a[4742] = sym_compound_statement;
	v->a[4743] = sym_subshell;
	v->a[4744] = sym_list;
	v->a[4745] = sym_negated_command;
	v->a[4746] = sym_command;
	v->a[4747] = sym__variable_assignments;
	v->a[4748] = 30;
	v->a[4749] = actions(3);
	v->a[4750] = 1;
	v->a[4751] = sym_comment;
	v->a[4752] = actions(9);
	v->a[4753] = 1;
	v->a[4754] = anon_sym_for;
	v->a[4755] = actions(13);
	v->a[4756] = 1;
	v->a[4757] = anon_sym_if;
	v->a[4758] = actions(15);
	v->a[4759] = 1;
	small_parse_table_238(v);
}

void	small_parse_table_238(t_small_parse_table_array *v)
{
	v->a[4760] = anon_sym_case;
	v->a[4761] = actions(17);
	v->a[4762] = 1;
	v->a[4763] = anon_sym_LPAREN;
	v->a[4764] = actions(19);
	v->a[4765] = 1;
	v->a[4766] = anon_sym_LBRACE;
	v->a[4767] = actions(53);
	v->a[4768] = 1;
	v->a[4769] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4770] = actions(55);
	v->a[4771] = 1;
	v->a[4772] = anon_sym_DOLLAR;
	v->a[4773] = actions(57);
	v->a[4774] = 1;
	v->a[4775] = anon_sym_DQUOTE;
	v->a[4776] = actions(61);
	v->a[4777] = 1;
	v->a[4778] = anon_sym_DOLLAR_LBRACE;
	v->a[4779] = actions(63);
	small_parse_table_239(v);
}

void	small_parse_table_239(t_small_parse_table_array *v)
{
	v->a[4780] = 1;
	v->a[4781] = anon_sym_DOLLAR_LPAREN;
	v->a[4782] = actions(65);
	v->a[4783] = 1;
	v->a[4784] = anon_sym_BQUOTE;
	v->a[4785] = actions(67);
	v->a[4786] = 1;
	v->a[4787] = sym_variable_name;
	v->a[4788] = actions(204);
	v->a[4789] = 1;
	v->a[4790] = sym_word;
	v->a[4791] = actions(206);
	v->a[4792] = 1;
	v->a[4793] = anon_sym_BANG;
	v->a[4794] = state(116);
	v->a[4795] = 1;
	v->a[4796] = aux_sym__statements_repeat1;
	v->a[4797] = state(179);
	v->a[4798] = 1;
	v->a[4799] = sym_command_name;
	small_parse_table_240(v);
}

/* EOF small_parse_table_47.c */
