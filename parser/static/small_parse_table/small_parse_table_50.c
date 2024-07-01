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
	v->a[5001] = actions(57);
	v->a[5002] = 2;
	v->a[5003] = anon_sym_LT_AMP_DASH;
	v->a[5004] = anon_sym_GT_AMP_DASH;
	v->a[5005] = actions(65);
	v->a[5006] = 2;
	v->a[5007] = sym_raw_string;
	v->a[5008] = sym_number;
	v->a[5009] = state(443);
	v->a[5010] = 5;
	v->a[5011] = sym_arithmetic_expansion;
	v->a[5012] = sym_string;
	v->a[5013] = sym_simple_expansion;
	v->a[5014] = sym_expansion;
	v->a[5015] = sym_command_substitution;
	v->a[5016] = actions(55);
	v->a[5017] = 6;
	v->a[5018] = anon_sym_LT;
	v->a[5019] = anon_sym_GT;
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = anon_sym_GT_GT;
	v->a[5021] = anon_sym_LT_AMP;
	v->a[5022] = anon_sym_GT_AMP;
	v->a[5023] = anon_sym_GT_PIPE;
	v->a[5024] = state(1094);
	v->a[5025] = 12;
	v->a[5026] = sym_redirected_statement;
	v->a[5027] = sym_for_statement;
	v->a[5028] = sym_while_statement;
	v->a[5029] = sym_if_statement;
	v->a[5030] = sym_case_statement;
	v->a[5031] = sym_function_definition;
	v->a[5032] = sym_compound_statement;
	v->a[5033] = sym_subshell;
	v->a[5034] = sym_list;
	v->a[5035] = sym_negated_command;
	v->a[5036] = sym_command;
	v->a[5037] = sym__variable_assignments;
	v->a[5038] = 32;
	v->a[5039] = actions(3);
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = 1;
	v->a[5041] = sym_comment;
	v->a[5042] = actions(89);
	v->a[5043] = 1;
	v->a[5044] = sym_word;
	v->a[5045] = actions(92);
	v->a[5046] = 1;
	v->a[5047] = anon_sym_for;
	v->a[5048] = actions(98);
	v->a[5049] = 1;
	v->a[5050] = anon_sym_if;
	v->a[5051] = actions(101);
	v->a[5052] = 1;
	v->a[5053] = anon_sym_RBRACE;
	v->a[5054] = actions(103);
	v->a[5055] = 1;
	v->a[5056] = anon_sym_case;
	v->a[5057] = actions(106);
	v->a[5058] = 1;
	v->a[5059] = anon_sym_LPAREN;
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = actions(109);
	v->a[5061] = 1;
	v->a[5062] = anon_sym_LBRACE;
	v->a[5063] = actions(112);
	v->a[5064] = 1;
	v->a[5065] = anon_sym_BANG;
	v->a[5066] = actions(121);
	v->a[5067] = 1;
	v->a[5068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5069] = actions(124);
	v->a[5070] = 1;
	v->a[5071] = anon_sym_DOLLAR;
	v->a[5072] = actions(127);
	v->a[5073] = 1;
	v->a[5074] = anon_sym_DQUOTE;
	v->a[5075] = actions(133);
	v->a[5076] = 1;
	v->a[5077] = anon_sym_DOLLAR_LBRACE;
	v->a[5078] = actions(136);
	v->a[5079] = 1;
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = anon_sym_DOLLAR_LPAREN;
	v->a[5081] = actions(139);
	v->a[5082] = 1;
	v->a[5083] = anon_sym_BQUOTE;
	v->a[5084] = actions(142);
	v->a[5085] = 1;
	v->a[5086] = sym_file_descriptor;
	v->a[5087] = actions(145);
	v->a[5088] = 1;
	v->a[5089] = sym_variable_name;
	v->a[5090] = state(42);
	v->a[5091] = 1;
	v->a[5092] = aux_sym__terminated_statement;
	v->a[5093] = state(189);
	v->a[5094] = 1;
	v->a[5095] = sym_command_name;
	v->a[5096] = state(249);
	v->a[5097] = 1;
	v->a[5098] = sym_variable_assignment;
	v->a[5099] = state(650);
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
