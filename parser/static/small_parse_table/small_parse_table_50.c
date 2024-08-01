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
	v->a[5001] = anon_sym_DOLLAR_LPAREN;
	v->a[5002] = actions(65);
	v->a[5003] = 1;
	v->a[5004] = anon_sym_BQUOTE;
	v->a[5005] = actions(208);
	v->a[5006] = 1;
	v->a[5007] = sym_word;
	v->a[5008] = actions(210);
	v->a[5009] = 1;
	v->a[5010] = anon_sym_BANG;
	v->a[5011] = actions(216);
	v->a[5012] = 1;
	v->a[5013] = sym_variable_name;
	v->a[5014] = state(112);
	v->a[5015] = 1;
	v->a[5016] = aux_sym__statements_repeat1;
	v->a[5017] = state(158);
	v->a[5018] = 1;
	v->a[5019] = sym_command_name;
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = state(186);
	v->a[5021] = 1;
	v->a[5022] = sym_variable_assignment;
	v->a[5023] = state(298);
	v->a[5024] = 1;
	v->a[5025] = aux_sym_command_repeat1;
	v->a[5026] = state(516);
	v->a[5027] = 1;
	v->a[5028] = sym_file_redirect;
	v->a[5029] = state(555);
	v->a[5030] = 1;
	v->a[5031] = sym_concatenation;
	v->a[5032] = state(937);
	v->a[5033] = 1;
	v->a[5034] = sym_pipeline;
	v->a[5035] = state(1019);
	v->a[5036] = 1;
	v->a[5037] = aux_sym_redirected_statement_repeat2;
	v->a[5038] = state(1557);
	v->a[5039] = 1;
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = sym__statement_not_pipeline;
	v->a[5041] = state(1697);
	v->a[5042] = 1;
	v->a[5043] = sym__statements;
	v->a[5044] = actions(11);
	v->a[5045] = 2;
	v->a[5046] = anon_sym_while;
	v->a[5047] = anon_sym_until;
	v->a[5048] = actions(214);
	v->a[5049] = 2;
	v->a[5050] = sym_raw_string;
	v->a[5051] = sym_number;
	v->a[5052] = actions(212);
	v->a[5053] = 3;
	v->a[5054] = anon_sym_LT;
	v->a[5055] = anon_sym_GT;
	v->a[5056] = anon_sym_GT_GT;
	v->a[5057] = state(277);
	v->a[5058] = 5;
	v->a[5059] = sym_arithmetic_expansion;
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = sym_string;
	v->a[5061] = sym_simple_expansion;
	v->a[5062] = sym_expansion;
	v->a[5063] = sym_command_substitution;
	v->a[5064] = state(877);
	v->a[5065] = 12;
	v->a[5066] = sym_redirected_statement;
	v->a[5067] = sym_for_statement;
	v->a[5068] = sym_while_statement;
	v->a[5069] = sym_if_statement;
	v->a[5070] = sym_case_statement;
	v->a[5071] = sym_function_definition;
	v->a[5072] = sym_compound_statement;
	v->a[5073] = sym_subshell;
	v->a[5074] = sym_list;
	v->a[5075] = sym_negated_command;
	v->a[5076] = sym_command;
	v->a[5077] = sym__variable_assignments;
	v->a[5078] = 30;
	v->a[5079] = actions(3);
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = 1;
	v->a[5081] = sym_comment;
	v->a[5082] = actions(9);
	v->a[5083] = 1;
	v->a[5084] = anon_sym_for;
	v->a[5085] = actions(13);
	v->a[5086] = 1;
	v->a[5087] = anon_sym_if;
	v->a[5088] = actions(15);
	v->a[5089] = 1;
	v->a[5090] = anon_sym_case;
	v->a[5091] = actions(17);
	v->a[5092] = 1;
	v->a[5093] = anon_sym_LPAREN;
	v->a[5094] = actions(19);
	v->a[5095] = 1;
	v->a[5096] = anon_sym_LBRACE;
	v->a[5097] = actions(53);
	v->a[5098] = 1;
	v->a[5099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
