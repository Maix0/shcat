/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_48.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_240(t_small_parse_table_array *v)
{
	v->a[4800] = sym_variable_name;
	v->a[4801] = state(138);
	v->a[4802] = 1;
	v->a[4803] = aux_sym__statements_repeat1;
	v->a[4804] = state(185);
	v->a[4805] = 1;
	v->a[4806] = sym_command_name;
	v->a[4807] = state(235);
	v->a[4808] = 1;
	v->a[4809] = sym_variable_assignment;
	v->a[4810] = state(624);
	v->a[4811] = 1;
	v->a[4812] = sym_concatenation;
	v->a[4813] = state(675);
	v->a[4814] = 1;
	v->a[4815] = sym_file_redirect;
	v->a[4816] = state(765);
	v->a[4817] = 1;
	v->a[4818] = aux_sym_command_repeat1;
	v->a[4819] = state(1110);
	small_parse_table_241(v);
}

void	small_parse_table_241(t_small_parse_table_array *v)
{
	v->a[4820] = 1;
	v->a[4821] = sym_pipeline;
	v->a[4822] = state(1188);
	v->a[4823] = 1;
	v->a[4824] = aux_sym_redirected_statement_repeat2;
	v->a[4825] = state(2115);
	v->a[4826] = 1;
	v->a[4827] = sym__statement_not_pipeline;
	v->a[4828] = state(2323);
	v->a[4829] = 1;
	v->a[4830] = sym__statements;
	v->a[4831] = actions(11);
	v->a[4832] = 2;
	v->a[4833] = anon_sym_while;
	v->a[4834] = anon_sym_until;
	v->a[4835] = actions(226);
	v->a[4836] = 2;
	v->a[4837] = anon_sym_LT_AMP_DASH;
	v->a[4838] = anon_sym_GT_AMP_DASH;
	v->a[4839] = actions(228);
	small_parse_table_242(v);
}

void	small_parse_table_242(t_small_parse_table_array *v)
{
	v->a[4840] = 2;
	v->a[4841] = sym_raw_string;
	v->a[4842] = sym_number;
	v->a[4843] = state(299);
	v->a[4844] = 5;
	v->a[4845] = sym_arithmetic_expansion;
	v->a[4846] = sym_string;
	v->a[4847] = sym_simple_expansion;
	v->a[4848] = sym_expansion;
	v->a[4849] = sym_command_substitution;
	v->a[4850] = actions(224);
	v->a[4851] = 8;
	v->a[4852] = anon_sym_LT;
	v->a[4853] = anon_sym_GT;
	v->a[4854] = anon_sym_GT_GT;
	v->a[4855] = anon_sym_AMP_GT;
	v->a[4856] = anon_sym_AMP_GT_GT;
	v->a[4857] = anon_sym_LT_AMP;
	v->a[4858] = anon_sym_GT_AMP;
	v->a[4859] = anon_sym_GT_PIPE;
	small_parse_table_243(v);
}

void	small_parse_table_243(t_small_parse_table_array *v)
{
	v->a[4860] = state(1072);
	v->a[4861] = 12;
	v->a[4862] = sym_redirected_statement;
	v->a[4863] = sym_for_statement;
	v->a[4864] = sym_while_statement;
	v->a[4865] = sym_if_statement;
	v->a[4866] = sym_case_statement;
	v->a[4867] = sym_function_definition;
	v->a[4868] = sym_compound_statement;
	v->a[4869] = sym_subshell;
	v->a[4870] = sym_list;
	v->a[4871] = sym_negated_command;
	v->a[4872] = sym_command;
	v->a[4873] = sym__variable_assignments;
	v->a[4874] = 32;
	v->a[4875] = actions(3);
	v->a[4876] = 1;
	v->a[4877] = sym_comment;
	v->a[4878] = actions(9);
	v->a[4879] = 1;
	small_parse_table_244(v);
}

void	small_parse_table_244(t_small_parse_table_array *v)
{
	v->a[4880] = anon_sym_for;
	v->a[4881] = actions(13);
	v->a[4882] = 1;
	v->a[4883] = anon_sym_if;
	v->a[4884] = actions(15);
	v->a[4885] = 1;
	v->a[4886] = anon_sym_case;
	v->a[4887] = actions(17);
	v->a[4888] = 1;
	v->a[4889] = anon_sym_LPAREN;
	v->a[4890] = actions(19);
	v->a[4891] = 1;
	v->a[4892] = anon_sym_LBRACE;
	v->a[4893] = actions(59);
	v->a[4894] = 1;
	v->a[4895] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4896] = actions(61);
	v->a[4897] = 1;
	v->a[4898] = anon_sym_DOLLAR;
	v->a[4899] = actions(63);
	small_parse_table_245(v);
}

/* EOF small_parse_table_48.c */
