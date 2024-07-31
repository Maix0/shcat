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
	v->a[5000] = sym_simple_expansion;
	v->a[5001] = sym_expansion;
	v->a[5002] = sym_command_substitution;
	v->a[5003] = actions(210);
	v->a[5004] = 7;
	v->a[5005] = anon_sym_LT;
	v->a[5006] = anon_sym_GT;
	v->a[5007] = anon_sym_GT_GT;
	v->a[5008] = anon_sym_LT_AMP;
	v->a[5009] = anon_sym_GT_AMP;
	v->a[5010] = anon_sym_GT_PIPE;
	v->a[5011] = anon_sym_LT_GT;
	v->a[5012] = state(884);
	v->a[5013] = 12;
	v->a[5014] = sym_redirected_statement;
	v->a[5015] = sym_for_statement;
	v->a[5016] = sym_while_statement;
	v->a[5017] = sym_if_statement;
	v->a[5018] = sym_case_statement;
	v->a[5019] = sym_function_definition;
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = sym_compound_statement;
	v->a[5021] = sym_subshell;
	v->a[5022] = sym_list;
	v->a[5023] = sym_negated_command;
	v->a[5024] = sym_command;
	v->a[5025] = sym__variable_assignments;
	v->a[5026] = 30;
	v->a[5027] = actions(3);
	v->a[5028] = 1;
	v->a[5029] = sym_comment;
	v->a[5030] = actions(9);
	v->a[5031] = 1;
	v->a[5032] = anon_sym_for;
	v->a[5033] = actions(13);
	v->a[5034] = 1;
	v->a[5035] = anon_sym_if;
	v->a[5036] = actions(15);
	v->a[5037] = 1;
	v->a[5038] = anon_sym_case;
	v->a[5039] = actions(17);
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = 1;
	v->a[5041] = anon_sym_LPAREN;
	v->a[5042] = actions(19);
	v->a[5043] = 1;
	v->a[5044] = anon_sym_LBRACE;
	v->a[5045] = actions(41);
	v->a[5046] = 1;
	v->a[5047] = sym_word;
	v->a[5048] = actions(49);
	v->a[5049] = 1;
	v->a[5050] = anon_sym_BANG;
	v->a[5051] = actions(53);
	v->a[5052] = 1;
	v->a[5053] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5054] = actions(55);
	v->a[5055] = 1;
	v->a[5056] = anon_sym_DOLLAR;
	v->a[5057] = actions(57);
	v->a[5058] = 1;
	v->a[5059] = anon_sym_DQUOTE;
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = actions(61);
	v->a[5061] = 1;
	v->a[5062] = anon_sym_DOLLAR_LBRACE;
	v->a[5063] = actions(63);
	v->a[5064] = 1;
	v->a[5065] = anon_sym_DOLLAR_LPAREN;
	v->a[5066] = actions(65);
	v->a[5067] = 1;
	v->a[5068] = anon_sym_BQUOTE;
	v->a[5069] = actions(67);
	v->a[5070] = 1;
	v->a[5071] = sym_variable_name;
	v->a[5072] = actions(216);
	v->a[5073] = 1;
	v->a[5074] = anon_sym_then;
	v->a[5075] = state(36);
	v->a[5076] = 1;
	v->a[5077] = aux_sym__terminated_statement;
	v->a[5078] = state(271);
	v->a[5079] = 1;
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = sym_command_name;
	v->a[5081] = state(298);
	v->a[5082] = 1;
	v->a[5083] = sym_variable_assignment;
	v->a[5084] = state(482);
	v->a[5085] = 1;
	v->a[5086] = aux_sym_command_repeat1;
	v->a[5087] = state(600);
	v->a[5088] = 1;
	v->a[5089] = sym_file_redirect;
	v->a[5090] = state(602);
	v->a[5091] = 1;
	v->a[5092] = sym_concatenation;
	v->a[5093] = state(1012);
	v->a[5094] = 1;
	v->a[5095] = sym_pipeline;
	v->a[5096] = state(1068);
	v->a[5097] = 1;
	v->a[5098] = aux_sym_redirected_statement_repeat2;
	v->a[5099] = state(1609);
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
