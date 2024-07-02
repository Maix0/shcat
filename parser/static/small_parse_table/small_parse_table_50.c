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
	v->a[5000] = anon_sym_until;
	v->a[5001] = actions(61);
	v->a[5002] = 2;
	v->a[5003] = sym_raw_string;
	v->a[5004] = sym_number;
	v->a[5005] = state(433);
	v->a[5006] = 5;
	v->a[5007] = sym_arithmetic_expansion;
	v->a[5008] = sym_string;
	v->a[5009] = sym_simple_expansion;
	v->a[5010] = sym_expansion;
	v->a[5011] = sym_command_substitution;
	v->a[5012] = actions(53);
	v->a[5013] = 7;
	v->a[5014] = anon_sym_LT;
	v->a[5015] = anon_sym_GT;
	v->a[5016] = anon_sym_GT_GT;
	v->a[5017] = anon_sym_LT_AMP;
	v->a[5018] = anon_sym_GT_AMP;
	v->a[5019] = anon_sym_GT_PIPE;
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = anon_sym_LT_GT;
	v->a[5021] = state(935);
	v->a[5022] = 12;
	v->a[5023] = sym_redirected_statement;
	v->a[5024] = sym_for_statement;
	v->a[5025] = sym_while_statement;
	v->a[5026] = sym_if_statement;
	v->a[5027] = sym_case_statement;
	v->a[5028] = sym_function_definition;
	v->a[5029] = sym_compound_statement;
	v->a[5030] = sym_subshell;
	v->a[5031] = sym_list;
	v->a[5032] = sym_negated_command;
	v->a[5033] = sym_command;
	v->a[5034] = sym__variable_assignments;
	v->a[5035] = 31;
	v->a[5036] = actions(3);
	v->a[5037] = 1;
	v->a[5038] = sym_comment;
	v->a[5039] = actions(9);
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = 1;
	v->a[5041] = anon_sym_for;
	v->a[5042] = actions(13);
	v->a[5043] = 1;
	v->a[5044] = anon_sym_if;
	v->a[5045] = actions(15);
	v->a[5046] = 1;
	v->a[5047] = anon_sym_case;
	v->a[5048] = actions(17);
	v->a[5049] = 1;
	v->a[5050] = anon_sym_LPAREN;
	v->a[5051] = actions(19);
	v->a[5052] = 1;
	v->a[5053] = anon_sym_LBRACE;
	v->a[5054] = actions(55);
	v->a[5055] = 1;
	v->a[5056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5057] = actions(57);
	v->a[5058] = 1;
	v->a[5059] = anon_sym_DOLLAR;
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = actions(59);
	v->a[5061] = 1;
	v->a[5062] = anon_sym_DQUOTE;
	v->a[5063] = actions(63);
	v->a[5064] = 1;
	v->a[5065] = anon_sym_DOLLAR_LBRACE;
	v->a[5066] = actions(65);
	v->a[5067] = 1;
	v->a[5068] = anon_sym_DOLLAR_LPAREN;
	v->a[5069] = actions(67);
	v->a[5070] = 1;
	v->a[5071] = anon_sym_BQUOTE;
	v->a[5072] = actions(211);
	v->a[5073] = 1;
	v->a[5074] = sym_word;
	v->a[5075] = actions(213);
	v->a[5076] = 1;
	v->a[5077] = anon_sym_BANG;
	v->a[5078] = actions(219);
	v->a[5079] = 1;
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = sym_file_descriptor;
	v->a[5081] = actions(221);
	v->a[5082] = 1;
	v->a[5083] = sym_variable_name;
	v->a[5084] = state(120);
	v->a[5085] = 1;
	v->a[5086] = aux_sym__statements_repeat1;
	v->a[5087] = state(177);
	v->a[5088] = 1;
	v->a[5089] = sym_command_name;
	v->a[5090] = state(208);
	v->a[5091] = 1;
	v->a[5092] = sym_variable_assignment;
	v->a[5093] = state(584);
	v->a[5094] = 1;
	v->a[5095] = sym_concatenation;
	v->a[5096] = state(632);
	v->a[5097] = 1;
	v->a[5098] = sym_file_redirect;
	v->a[5099] = state(639);
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
