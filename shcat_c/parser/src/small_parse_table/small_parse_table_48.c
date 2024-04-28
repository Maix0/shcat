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
	v->a[4800] = sym_command_substitution;
	v->a[4801] = sym_process_substitution;
	v->a[4802] = actions(1486);
	v->a[4803] = 19;
	v->a[4804] = anon_sym_SEMI;
	v->a[4805] = anon_sym_PIPE_PIPE;
	v->a[4806] = anon_sym_AMP_AMP;
	v->a[4807] = anon_sym_PIPE;
	v->a[4808] = anon_sym_AMP;
	v->a[4809] = anon_sym_LT;
	v->a[4810] = anon_sym_GT;
	v->a[4811] = anon_sym_LT_LT;
	v->a[4812] = anon_sym_GT_GT;
	v->a[4813] = anon_sym_SEMI_SEMI;
	v->a[4814] = anon_sym_PIPE_AMP;
	v->a[4815] = anon_sym_AMP_GT;
	v->a[4816] = anon_sym_AMP_GT_GT;
	v->a[4817] = anon_sym_LT_AMP;
	v->a[4818] = anon_sym_GT_AMP;
	v->a[4819] = anon_sym_GT_PIPE;
	small_parse_table_241(v);
}

void	small_parse_table_241(t_small_parse_table_array *v)
{
	v->a[4820] = anon_sym_LT_AMP_DASH;
	v->a[4821] = anon_sym_GT_AMP_DASH;
	v->a[4822] = anon_sym_LT_LT_DASH;
	v->a[4823] = 6;
	v->a[4824] = actions(3);
	v->a[4825] = 1;
	v->a[4826] = sym_comment;
	v->a[4827] = state(1474);
	v->a[4828] = 1;
	v->a[4829] = aux_sym__literal_repeat1;
	v->a[4830] = state(583);
	v->a[4831] = 2;
	v->a[4832] = sym_concatenation;
	v->a[4833] = aux_sym_for_statement_repeat1;
	v->a[4834] = actions(2096);
	v->a[4835] = 5;
	v->a[4836] = sym_file_descriptor;
	v->a[4837] = sym_variable_name;
	v->a[4838] = sym_test_operator;
	v->a[4839] = sym__brace_start;
	small_parse_table_242(v);
}

void	small_parse_table_242(t_small_parse_table_array *v)
{
	v->a[4840] = aux_sym_heredoc_redirect_token1;
	v->a[4841] = state(1158);
	v->a[4842] = 9;
	v->a[4843] = sym_arithmetic_expansion;
	v->a[4844] = sym_brace_expression;
	v->a[4845] = sym_string;
	v->a[4846] = sym_translated_string;
	v->a[4847] = sym_number;
	v->a[4848] = sym_simple_expansion;
	v->a[4849] = sym_expansion;
	v->a[4850] = sym_command_substitution;
	v->a[4851] = sym_process_substitution;
	v->a[4852] = actions(2094);
	v->a[4853] = 40;
	v->a[4854] = anon_sym_LPAREN_LPAREN;
	v->a[4855] = anon_sym_SEMI;
	v->a[4856] = anon_sym_PIPE_PIPE;
	v->a[4857] = anon_sym_AMP_AMP;
	v->a[4858] = anon_sym_PIPE;
	v->a[4859] = anon_sym_AMP;
	small_parse_table_243(v);
}

void	small_parse_table_243(t_small_parse_table_array *v)
{
	v->a[4860] = anon_sym_LT;
	v->a[4861] = anon_sym_GT;
	v->a[4862] = anon_sym_LT_LT;
	v->a[4863] = anon_sym_GT_GT;
	v->a[4864] = anon_sym_esac;
	v->a[4865] = anon_sym_SEMI_SEMI;
	v->a[4866] = anon_sym_SEMI_AMP;
	v->a[4867] = anon_sym_SEMI_SEMI_AMP;
	v->a[4868] = anon_sym_PIPE_AMP;
	v->a[4869] = anon_sym_AMP_GT;
	v->a[4870] = anon_sym_AMP_GT_GT;
	v->a[4871] = anon_sym_LT_AMP;
	v->a[4872] = anon_sym_GT_AMP;
	v->a[4873] = anon_sym_GT_PIPE;
	v->a[4874] = anon_sym_LT_AMP_DASH;
	v->a[4875] = anon_sym_GT_AMP_DASH;
	v->a[4876] = anon_sym_LT_LT_DASH;
	v->a[4877] = anon_sym_LT_LT_LT;
	v->a[4878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4879] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_244(v);
}

void	small_parse_table_244(t_small_parse_table_array *v)
{
	v->a[4880] = anon_sym_DOLLAR;
	v->a[4881] = sym__special_character;
	v->a[4882] = anon_sym_DQUOTE;
	v->a[4883] = sym_raw_string;
	v->a[4884] = sym_ansi_c_string;
	v->a[4885] = aux_sym_number_token1;
	v->a[4886] = aux_sym_number_token2;
	v->a[4887] = anon_sym_DOLLAR_LBRACE;
	v->a[4888] = anon_sym_DOLLAR_LPAREN;
	v->a[4889] = anon_sym_BQUOTE;
	v->a[4890] = anon_sym_DOLLAR_BQUOTE;
	v->a[4891] = anon_sym_LT_LPAREN;
	v->a[4892] = anon_sym_GT_LPAREN;
	v->a[4893] = sym_word;
	v->a[4894] = 24;
	v->a[4895] = actions(3);
	v->a[4896] = 1;
	v->a[4897] = sym_comment;
	v->a[4898] = actions(2036);
	v->a[4899] = 1;
	small_parse_table_245(v);
}

/* EOF small_parse_table_48.c */
