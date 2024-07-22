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
	v->a[4800] = sym__variable_assignments;
	v->a[4801] = 31;
	v->a[4802] = actions(3);
	v->a[4803] = 1;
	v->a[4804] = sym_comment;
	v->a[4805] = actions(9);
	v->a[4806] = 1;
	v->a[4807] = anon_sym_for;
	v->a[4808] = actions(13);
	v->a[4809] = 1;
	v->a[4810] = anon_sym_if;
	v->a[4811] = actions(15);
	v->a[4812] = 1;
	v->a[4813] = anon_sym_case;
	v->a[4814] = actions(17);
	v->a[4815] = 1;
	v->a[4816] = anon_sym_LPAREN;
	v->a[4817] = actions(19);
	v->a[4818] = 1;
	v->a[4819] = anon_sym_LBRACE;
	small_parse_table_241(v);
}

void	small_parse_table_241(t_small_parse_table_array *v)
{
	v->a[4820] = actions(55);
	v->a[4821] = 1;
	v->a[4822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4823] = actions(57);
	v->a[4824] = 1;
	v->a[4825] = anon_sym_DOLLAR;
	v->a[4826] = actions(59);
	v->a[4827] = 1;
	v->a[4828] = anon_sym_DQUOTE;
	v->a[4829] = actions(63);
	v->a[4830] = 1;
	v->a[4831] = anon_sym_DOLLAR_LBRACE;
	v->a[4832] = actions(65);
	v->a[4833] = 1;
	v->a[4834] = anon_sym_DOLLAR_LPAREN;
	v->a[4835] = actions(67);
	v->a[4836] = 1;
	v->a[4837] = anon_sym_BQUOTE;
	v->a[4838] = actions(211);
	v->a[4839] = 1;
	small_parse_table_242(v);
}

void	small_parse_table_242(t_small_parse_table_array *v)
{
	v->a[4840] = sym_word;
	v->a[4841] = actions(213);
	v->a[4842] = 1;
	v->a[4843] = anon_sym_BANG;
	v->a[4844] = actions(219);
	v->a[4845] = 1;
	v->a[4846] = sym_file_descriptor;
	v->a[4847] = actions(221);
	v->a[4848] = 1;
	v->a[4849] = sym_variable_name;
	v->a[4850] = state(127);
	v->a[4851] = 1;
	v->a[4852] = aux_sym__statements_repeat1;
	v->a[4853] = state(170);
	v->a[4854] = 1;
	v->a[4855] = sym_command_name;
	v->a[4856] = state(241);
	v->a[4857] = 1;
	v->a[4858] = sym_variable_assignment;
	v->a[4859] = state(617);
	small_parse_table_243(v);
}

void	small_parse_table_243(t_small_parse_table_array *v)
{
	v->a[4860] = 1;
	v->a[4861] = aux_sym_command_repeat1;
	v->a[4862] = state(661);
	v->a[4863] = 1;
	v->a[4864] = sym_concatenation;
	v->a[4865] = state(688);
	v->a[4866] = 1;
	v->a[4867] = sym_file_redirect;
	v->a[4868] = state(1070);
	v->a[4869] = 1;
	v->a[4870] = sym_pipeline;
	v->a[4871] = state(1177);
	v->a[4872] = 1;
	v->a[4873] = aux_sym_redirected_statement_repeat2;
	v->a[4874] = state(1919);
	v->a[4875] = 1;
	v->a[4876] = sym__statement_not_pipeline;
	v->a[4877] = state(2058);
	v->a[4878] = 1;
	v->a[4879] = sym__statements;
	small_parse_table_244(v);
}

void	small_parse_table_244(t_small_parse_table_array *v)
{
	v->a[4880] = actions(11);
	v->a[4881] = 2;
	v->a[4882] = anon_sym_while;
	v->a[4883] = anon_sym_until;
	v->a[4884] = actions(217);
	v->a[4885] = 2;
	v->a[4886] = sym_raw_string;
	v->a[4887] = sym_number;
	v->a[4888] = state(374);
	v->a[4889] = 5;
	v->a[4890] = sym_arithmetic_expansion;
	v->a[4891] = sym_string;
	v->a[4892] = sym_simple_expansion;
	v->a[4893] = sym_expansion;
	v->a[4894] = sym_command_substitution;
	v->a[4895] = actions(215);
	v->a[4896] = 7;
	v->a[4897] = anon_sym_LT;
	v->a[4898] = anon_sym_GT;
	v->a[4899] = anon_sym_GT_GT;
	small_parse_table_245(v);
}

/* EOF small_parse_table_48.c */
