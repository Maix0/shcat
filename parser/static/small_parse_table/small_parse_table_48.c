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
	v->a[4800] = 2;
	v->a[4801] = anon_sym_while;
	v->a[4802] = anon_sym_until;
	v->a[4803] = actions(163);
	v->a[4804] = 2;
	v->a[4805] = anon_sym_done;
	v->a[4806] = anon_sym_then;
	v->a[4807] = actions(180);
	v->a[4808] = 2;
	v->a[4809] = anon_sym_LT_AMP_DASH;
	v->a[4810] = anon_sym_GT_AMP_DASH;
	v->a[4811] = state(397);
	v->a[4812] = 6;
	v->a[4813] = sym_arithmetic_expansion;
	v->a[4814] = sym_string;
	v->a[4815] = sym_number;
	v->a[4816] = sym_simple_expansion;
	v->a[4817] = sym_expansion;
	v->a[4818] = sym_command_substitution;
	v->a[4819] = actions(177);
	small_parse_table_241(v);
}

void	small_parse_table_241(t_small_parse_table_array *v)
{
	v->a[4820] = 8;
	v->a[4821] = anon_sym_LT;
	v->a[4822] = anon_sym_GT;
	v->a[4823] = anon_sym_GT_GT;
	v->a[4824] = anon_sym_AMP_GT;
	v->a[4825] = anon_sym_AMP_GT_GT;
	v->a[4826] = anon_sym_LT_AMP;
	v->a[4827] = anon_sym_GT_AMP;
	v->a[4828] = anon_sym_GT_PIPE;
	v->a[4829] = state(1137);
	v->a[4830] = 12;
	v->a[4831] = sym_redirected_statement;
	v->a[4832] = sym_for_statement;
	v->a[4833] = sym_while_statement;
	v->a[4834] = sym_if_statement;
	v->a[4835] = sym_case_statement;
	v->a[4836] = sym_function_definition;
	v->a[4837] = sym_compound_statement;
	v->a[4838] = sym_subshell;
	v->a[4839] = sym_list;
	small_parse_table_242(v);
}

void	small_parse_table_242(t_small_parse_table_array *v)
{
	v->a[4840] = sym_negated_command;
	v->a[4841] = sym_command;
	v->a[4842] = sym_variable_assignments;
	v->a[4843] = 35;
	v->a[4844] = actions(3);
	v->a[4845] = 1;
	v->a[4846] = sym_comment;
	v->a[4847] = actions(9);
	v->a[4848] = 1;
	v->a[4849] = anon_sym_for;
	v->a[4850] = actions(13);
	v->a[4851] = 1;
	v->a[4852] = anon_sym_if;
	v->a[4853] = actions(15);
	v->a[4854] = 1;
	v->a[4855] = anon_sym_case;
	v->a[4856] = actions(17);
	v->a[4857] = 1;
	v->a[4858] = anon_sym_LPAREN;
	v->a[4859] = actions(19);
	small_parse_table_243(v);
}

void	small_parse_table_243(t_small_parse_table_array *v)
{
	v->a[4860] = 1;
	v->a[4861] = anon_sym_LBRACE;
	v->a[4862] = actions(49);
	v->a[4863] = 1;
	v->a[4864] = sym_word;
	v->a[4865] = actions(57);
	v->a[4866] = 1;
	v->a[4867] = anon_sym_BANG;
	v->a[4868] = actions(63);
	v->a[4869] = 1;
	v->a[4870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4871] = actions(65);
	v->a[4872] = 1;
	v->a[4873] = anon_sym_DOLLAR;
	v->a[4874] = actions(67);
	v->a[4875] = 1;
	v->a[4876] = anon_sym_DQUOTE;
	v->a[4877] = actions(69);
	v->a[4878] = 1;
	v->a[4879] = sym_raw_string;
	small_parse_table_244(v);
}

void	small_parse_table_244(t_small_parse_table_array *v)
{
	v->a[4880] = actions(71);
	v->a[4881] = 1;
	v->a[4882] = aux_sym_number_token1;
	v->a[4883] = actions(73);
	v->a[4884] = 1;
	v->a[4885] = aux_sym_number_token2;
	v->a[4886] = actions(75);
	v->a[4887] = 1;
	v->a[4888] = anon_sym_DOLLAR_LBRACE;
	v->a[4889] = actions(77);
	v->a[4890] = 1;
	v->a[4891] = anon_sym_DOLLAR_LPAREN;
	v->a[4892] = actions(79);
	v->a[4893] = 1;
	v->a[4894] = anon_sym_BQUOTE;
	v->a[4895] = actions(81);
	v->a[4896] = 1;
	v->a[4897] = sym_file_descriptor;
	v->a[4898] = actions(83);
	v->a[4899] = 1;
	small_parse_table_245(v);
}

/* EOF small_parse_table_48.c */
