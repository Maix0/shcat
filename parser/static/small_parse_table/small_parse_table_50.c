/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_50.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_250(t_small_parse_table_array *v)
{
	v->a[5000] = 1;
	v->a[5001] = anon_sym_DQUOTE;
	v->a[5002] = actions(69);
	v->a[5003] = 1;
	v->a[5004] = sym_raw_string;
	v->a[5005] = actions(71);
	v->a[5006] = 1;
	v->a[5007] = aux_sym_number_token1;
	v->a[5008] = actions(73);
	v->a[5009] = 1;
	v->a[5010] = aux_sym_number_token2;
	v->a[5011] = actions(75);
	v->a[5012] = 1;
	v->a[5013] = anon_sym_DOLLAR_LBRACE;
	v->a[5014] = actions(77);
	v->a[5015] = 1;
	v->a[5016] = anon_sym_DOLLAR_LPAREN;
	v->a[5017] = actions(79);
	v->a[5018] = 1;
	v->a[5019] = anon_sym_BQUOTE;
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = actions(81);
	v->a[5021] = 1;
	v->a[5022] = sym_file_descriptor;
	v->a[5023] = actions(83);
	v->a[5024] = 1;
	v->a[5025] = sym_variable_name;
	v->a[5026] = actions(238);
	v->a[5027] = 1;
	v->a[5028] = sym_word;
	v->a[5029] = actions(240);
	v->a[5030] = 1;
	v->a[5031] = anon_sym_BANG;
	v->a[5032] = state(132);
	v->a[5033] = 1;
	v->a[5034] = aux_sym__statements_repeat1;
	v->a[5035] = state(185);
	v->a[5036] = 1;
	v->a[5037] = sym_command_name;
	v->a[5038] = state(297);
	v->a[5039] = 1;
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = sym_variable_assignment;
	v->a[5041] = state(582);
	v->a[5042] = 1;
	v->a[5043] = sym_concatenation;
	v->a[5044] = state(614);
	v->a[5045] = 1;
	v->a[5046] = aux_sym_command_repeat1;
	v->a[5047] = state(769);
	v->a[5048] = 1;
	v->a[5049] = sym_file_redirect;
	v->a[5050] = state(1133);
	v->a[5051] = 1;
	v->a[5052] = aux_sym_redirected_statement_repeat2;
	v->a[5053] = state(1142);
	v->a[5054] = 1;
	v->a[5055] = sym_pipeline;
	v->a[5056] = state(2041);
	v->a[5057] = 1;
	v->a[5058] = sym__statement_not_pipeline;
	v->a[5059] = state(2182);
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = 1;
	v->a[5061] = sym__statements;
	v->a[5062] = actions(11);
	v->a[5063] = 2;
	v->a[5064] = anon_sym_while;
	v->a[5065] = anon_sym_until;
	v->a[5066] = actions(61);
	v->a[5067] = 2;
	v->a[5068] = anon_sym_LT_AMP_DASH;
	v->a[5069] = anon_sym_GT_AMP_DASH;
	v->a[5070] = state(397);
	v->a[5071] = 6;
	v->a[5072] = sym_arithmetic_expansion;
	v->a[5073] = sym_string;
	v->a[5074] = sym_number;
	v->a[5075] = sym_simple_expansion;
	v->a[5076] = sym_expansion;
	v->a[5077] = sym_command_substitution;
	v->a[5078] = actions(59);
	v->a[5079] = 8;
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = anon_sym_LT;
	v->a[5081] = anon_sym_GT;
	v->a[5082] = anon_sym_GT_GT;
	v->a[5083] = anon_sym_AMP_GT;
	v->a[5084] = anon_sym_AMP_GT_GT;
	v->a[5085] = anon_sym_LT_AMP;
	v->a[5086] = anon_sym_GT_AMP;
	v->a[5087] = anon_sym_GT_PIPE;
	v->a[5088] = state(1071);
	v->a[5089] = 12;
	v->a[5090] = sym_redirected_statement;
	v->a[5091] = sym_for_statement;
	v->a[5092] = sym_while_statement;
	v->a[5093] = sym_if_statement;
	v->a[5094] = sym_case_statement;
	v->a[5095] = sym_function_definition;
	v->a[5096] = sym_compound_statement;
	v->a[5097] = sym_subshell;
	v->a[5098] = sym_list;
	v->a[5099] = sym_negated_command;
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
