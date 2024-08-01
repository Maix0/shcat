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
	v->a[4800] = state(208);
	v->a[4801] = 1;
	v->a[4802] = sym_variable_assignment;
	v->a[4803] = state(385);
	v->a[4804] = 1;
	v->a[4805] = aux_sym_command_repeat1;
	v->a[4806] = state(555);
	v->a[4807] = 1;
	v->a[4808] = sym_concatenation;
	v->a[4809] = state(599);
	v->a[4810] = 1;
	v->a[4811] = sym_file_redirect;
	v->a[4812] = state(969);
	v->a[4813] = 1;
	v->a[4814] = sym_pipeline;
	v->a[4815] = state(1006);
	v->a[4816] = 1;
	v->a[4817] = aux_sym_redirected_statement_repeat2;
	v->a[4818] = state(1560);
	v->a[4819] = 1;
	small_parse_table_241(v);
}

void	small_parse_table_241(t_small_parse_table_array *v)
{
	v->a[4820] = sym__statement_not_pipeline;
	v->a[4821] = state(1603);
	v->a[4822] = 1;
	v->a[4823] = sym__statements;
	v->a[4824] = actions(11);
	v->a[4825] = 2;
	v->a[4826] = anon_sym_while;
	v->a[4827] = anon_sym_until;
	v->a[4828] = actions(59);
	v->a[4829] = 2;
	v->a[4830] = sym_raw_string;
	v->a[4831] = sym_number;
	v->a[4832] = actions(51);
	v->a[4833] = 3;
	v->a[4834] = anon_sym_LT;
	v->a[4835] = anon_sym_GT;
	v->a[4836] = anon_sym_GT_GT;
	v->a[4837] = state(401);
	v->a[4838] = 5;
	v->a[4839] = sym_arithmetic_expansion;
	small_parse_table_242(v);
}

void	small_parse_table_242(t_small_parse_table_array *v)
{
	v->a[4840] = sym_string;
	v->a[4841] = sym_simple_expansion;
	v->a[4842] = sym_expansion;
	v->a[4843] = sym_command_substitution;
	v->a[4844] = state(820);
	v->a[4845] = 12;
	v->a[4846] = sym_redirected_statement;
	v->a[4847] = sym_for_statement;
	v->a[4848] = sym_while_statement;
	v->a[4849] = sym_if_statement;
	v->a[4850] = sym_case_statement;
	v->a[4851] = sym_function_definition;
	v->a[4852] = sym_compound_statement;
	v->a[4853] = sym_subshell;
	v->a[4854] = sym_list;
	v->a[4855] = sym_negated_command;
	v->a[4856] = sym_command;
	v->a[4857] = sym__variable_assignments;
	v->a[4858] = 30;
	v->a[4859] = actions(3);
	small_parse_table_243(v);
}

void	small_parse_table_243(t_small_parse_table_array *v)
{
	v->a[4860] = 1;
	v->a[4861] = sym_comment;
	v->a[4862] = actions(9);
	v->a[4863] = 1;
	v->a[4864] = anon_sym_for;
	v->a[4865] = actions(13);
	v->a[4866] = 1;
	v->a[4867] = anon_sym_if;
	v->a[4868] = actions(15);
	v->a[4869] = 1;
	v->a[4870] = anon_sym_case;
	v->a[4871] = actions(17);
	v->a[4872] = 1;
	v->a[4873] = anon_sym_LPAREN;
	v->a[4874] = actions(19);
	v->a[4875] = 1;
	v->a[4876] = anon_sym_LBRACE;
	v->a[4877] = actions(41);
	v->a[4878] = 1;
	v->a[4879] = sym_word;
	small_parse_table_244(v);
}

void	small_parse_table_244(t_small_parse_table_array *v)
{
	v->a[4880] = actions(49);
	v->a[4881] = 1;
	v->a[4882] = anon_sym_BANG;
	v->a[4883] = actions(53);
	v->a[4884] = 1;
	v->a[4885] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4886] = actions(55);
	v->a[4887] = 1;
	v->a[4888] = anon_sym_DOLLAR;
	v->a[4889] = actions(57);
	v->a[4890] = 1;
	v->a[4891] = anon_sym_DQUOTE;
	v->a[4892] = actions(61);
	v->a[4893] = 1;
	v->a[4894] = anon_sym_DOLLAR_LBRACE;
	v->a[4895] = actions(63);
	v->a[4896] = 1;
	v->a[4897] = anon_sym_DOLLAR_LPAREN;
	v->a[4898] = actions(65);
	v->a[4899] = 1;
	small_parse_table_245(v);
}

/* EOF small_parse_table_48.c */
