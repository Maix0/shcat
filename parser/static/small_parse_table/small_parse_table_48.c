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
	v->a[4800] = 6;
	v->a[4801] = actions(3);
	v->a[4802] = 1;
	v->a[4803] = sym_comment;
	v->a[4804] = state(884);
	v->a[4805] = 1;
	v->a[4806] = aux_sym__literal_repeat1;
	v->a[4807] = state(1160);
	v->a[4808] = 1;
	v->a[4809] = sym_concatenation;
	v->a[4810] = actions(1534);
	v->a[4811] = 5;
	v->a[4812] = sym_file_descriptor;
	v->a[4813] = sym_variable_name;
	v->a[4814] = sym_test_operator;
	v->a[4815] = sym__brace_start;
	v->a[4816] = aux_sym_heredoc_redirect_token1;
	v->a[4817] = state(529);
	v->a[4818] = 7;
	v->a[4819] = sym_arithmetic_expansion;
	small_parse_table_241(v);
}

void	small_parse_table_241(t_small_parse_table_array *v)
{
	v->a[4820] = sym_brace_expression;
	v->a[4821] = sym_string;
	v->a[4822] = sym_number;
	v->a[4823] = sym_simple_expansion;
	v->a[4824] = sym_expansion;
	v->a[4825] = sym_command_substitution;
	v->a[4826] = actions(1532);
	v->a[4827] = 34;
	v->a[4828] = anon_sym_esac;
	v->a[4829] = anon_sym_PIPE;
	v->a[4830] = anon_sym_SEMI_SEMI;
	v->a[4831] = anon_sym_SEMI_AMP;
	v->a[4832] = anon_sym_SEMI_SEMI_AMP;
	v->a[4833] = anon_sym_PIPE_AMP;
	v->a[4834] = anon_sym_AMP_AMP;
	v->a[4835] = anon_sym_PIPE_PIPE;
	v->a[4836] = anon_sym_LT;
	v->a[4837] = anon_sym_GT;
	v->a[4838] = anon_sym_GT_GT;
	v->a[4839] = anon_sym_AMP_GT;
	small_parse_table_242(v);
}

void	small_parse_table_242(t_small_parse_table_array *v)
{
	v->a[4840] = anon_sym_AMP_GT_GT;
	v->a[4841] = anon_sym_LT_AMP;
	v->a[4842] = anon_sym_GT_AMP;
	v->a[4843] = anon_sym_GT_PIPE;
	v->a[4844] = anon_sym_LT_AMP_DASH;
	v->a[4845] = anon_sym_GT_AMP_DASH;
	v->a[4846] = anon_sym_LT_LT;
	v->a[4847] = anon_sym_LT_LT_DASH;
	v->a[4848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4849] = anon_sym_AMP;
	v->a[4850] = anon_sym_DOLLAR;
	v->a[4851] = sym__special_character;
	v->a[4852] = anon_sym_DQUOTE;
	v->a[4853] = sym_raw_string;
	v->a[4854] = aux_sym_number_token1;
	v->a[4855] = aux_sym_number_token2;
	v->a[4856] = anon_sym_DOLLAR_LBRACE;
	v->a[4857] = anon_sym_DOLLAR_LPAREN;
	v->a[4858] = anon_sym_BQUOTE;
	v->a[4859] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_243(v);
}

void	small_parse_table_243(t_small_parse_table_array *v)
{
	v->a[4860] = sym_word;
	v->a[4861] = anon_sym_SEMI;
	v->a[4862] = 19;
	v->a[4863] = actions(3);
	v->a[4864] = 1;
	v->a[4865] = sym_comment;
	v->a[4866] = actions(1538);
	v->a[4867] = 1;
	v->a[4868] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4869] = actions(1540);
	v->a[4870] = 1;
	v->a[4871] = anon_sym_DOLLAR;
	v->a[4872] = actions(1542);
	v->a[4873] = 1;
	v->a[4874] = sym__special_character;
	v->a[4875] = actions(1544);
	v->a[4876] = 1;
	v->a[4877] = anon_sym_DQUOTE;
	v->a[4878] = actions(1546);
	v->a[4879] = 1;
	small_parse_table_244(v);
}

void	small_parse_table_244(t_small_parse_table_array *v)
{
	v->a[4880] = aux_sym_number_token1;
	v->a[4881] = actions(1548);
	v->a[4882] = 1;
	v->a[4883] = aux_sym_number_token2;
	v->a[4884] = actions(1550);
	v->a[4885] = 1;
	v->a[4886] = anon_sym_DOLLAR_LBRACE;
	v->a[4887] = actions(1552);
	v->a[4888] = 1;
	v->a[4889] = anon_sym_DOLLAR_LPAREN;
	v->a[4890] = actions(1554);
	v->a[4891] = 1;
	v->a[4892] = anon_sym_BQUOTE;
	v->a[4893] = actions(1556);
	v->a[4894] = 1;
	v->a[4895] = anon_sym_DOLLAR_BQUOTE;
	v->a[4896] = actions(1558);
	v->a[4897] = 1;
	v->a[4898] = sym_test_operator;
	v->a[4899] = actions(1560);
	small_parse_table_245(v);
}

/* EOF small_parse_table_48.c */
