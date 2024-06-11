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
	v->a[4700] = state(1460);
	v->a[4701] = 1;
	v->a[4702] = aux_sym_redirected_statement_repeat2;
	v->a[4703] = state(1533);
	v->a[4704] = 1;
	v->a[4705] = sym_do_group;
	v->a[4706] = state(2269);
	v->a[4707] = 1;
	v->a[4708] = sym__statement_not_pipeline;
	v->a[4709] = actions(11);
	v->a[4710] = 2;
	v->a[4711] = anon_sym_while;
	v->a[4712] = anon_sym_until;
	v->a[4713] = actions(57);
	v->a[4714] = 2;
	v->a[4715] = anon_sym_LT_AMP_DASH;
	v->a[4716] = anon_sym_GT_AMP_DASH;
	v->a[4717] = actions(65);
	v->a[4718] = 2;
	v->a[4719] = sym_raw_string;
	small_parse_table_236(v);
}

void	small_parse_table_236(t_small_parse_table_array *v)
{
	v->a[4720] = sym_number;
	v->a[4721] = state(394);
	v->a[4722] = 5;
	v->a[4723] = sym_arithmetic_expansion;
	v->a[4724] = sym_string;
	v->a[4725] = sym_simple_expansion;
	v->a[4726] = sym_expansion;
	v->a[4727] = sym_command_substitution;
	v->a[4728] = actions(55);
	v->a[4729] = 8;
	v->a[4730] = anon_sym_LT;
	v->a[4731] = anon_sym_GT;
	v->a[4732] = anon_sym_GT_GT;
	v->a[4733] = anon_sym_AMP_GT;
	v->a[4734] = anon_sym_AMP_GT_GT;
	v->a[4735] = anon_sym_LT_AMP;
	v->a[4736] = anon_sym_GT_AMP;
	v->a[4737] = anon_sym_GT_PIPE;
	v->a[4738] = state(1359);
	v->a[4739] = 12;
	small_parse_table_237(v);
}

void	small_parse_table_237(t_small_parse_table_array *v)
{
	v->a[4740] = sym_redirected_statement;
	v->a[4741] = sym_for_statement;
	v->a[4742] = sym_while_statement;
	v->a[4743] = sym_if_statement;
	v->a[4744] = sym_case_statement;
	v->a[4745] = sym_function_definition;
	v->a[4746] = sym_compound_statement;
	v->a[4747] = sym_subshell;
	v->a[4748] = sym_list;
	v->a[4749] = sym_negated_command;
	v->a[4750] = sym_command;
	v->a[4751] = sym_variable_assignments;
	v->a[4752] = 32;
	v->a[4753] = actions(3);
	v->a[4754] = 1;
	v->a[4755] = sym_comment;
	v->a[4756] = actions(9);
	v->a[4757] = 1;
	v->a[4758] = anon_sym_for;
	v->a[4759] = actions(13);
	small_parse_table_238(v);
}

void	small_parse_table_238(t_small_parse_table_array *v)
{
	v->a[4760] = 1;
	v->a[4761] = anon_sym_if;
	v->a[4762] = actions(15);
	v->a[4763] = 1;
	v->a[4764] = anon_sym_case;
	v->a[4765] = actions(17);
	v->a[4766] = 1;
	v->a[4767] = anon_sym_LPAREN;
	v->a[4768] = actions(19);
	v->a[4769] = 1;
	v->a[4770] = anon_sym_LBRACE;
	v->a[4771] = actions(59);
	v->a[4772] = 1;
	v->a[4773] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4774] = actions(61);
	v->a[4775] = 1;
	v->a[4776] = anon_sym_DOLLAR;
	v->a[4777] = actions(63);
	v->a[4778] = 1;
	v->a[4779] = anon_sym_DQUOTE;
	small_parse_table_239(v);
}

void	small_parse_table_239(t_small_parse_table_array *v)
{
	v->a[4780] = actions(67);
	v->a[4781] = 1;
	v->a[4782] = anon_sym_DOLLAR_LBRACE;
	v->a[4783] = actions(69);
	v->a[4784] = 1;
	v->a[4785] = anon_sym_DOLLAR_LPAREN;
	v->a[4786] = actions(71);
	v->a[4787] = 1;
	v->a[4788] = anon_sym_BQUOTE;
	v->a[4789] = actions(220);
	v->a[4790] = 1;
	v->a[4791] = sym_word;
	v->a[4792] = actions(222);
	v->a[4793] = 1;
	v->a[4794] = anon_sym_BANG;
	v->a[4795] = actions(230);
	v->a[4796] = 1;
	v->a[4797] = sym_file_descriptor;
	v->a[4798] = actions(232);
	v->a[4799] = 1;
	small_parse_table_240(v);
}

/* EOF small_parse_table_47.c */
