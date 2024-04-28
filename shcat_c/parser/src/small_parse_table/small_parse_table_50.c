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
	v->a[5000] = anon_sym_LT_LT_DASH;
	v->a[5001] = 24;
	v->a[5002] = actions(3);
	v->a[5003] = 1;
	v->a[5004] = sym_comment;
	v->a[5005] = actions(2106);
	v->a[5006] = 1;
	v->a[5007] = anon_sym_DOLLAR_LBRACK;
	v->a[5008] = actions(2109);
	v->a[5009] = 1;
	v->a[5010] = anon_sym_DOLLAR;
	v->a[5011] = actions(2112);
	v->a[5012] = 1;
	v->a[5013] = sym__special_character;
	v->a[5014] = actions(2115);
	v->a[5015] = 1;
	v->a[5016] = anon_sym_DQUOTE;
	v->a[5017] = actions(2118);
	v->a[5018] = 1;
	v->a[5019] = aux_sym_number_token1;
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = actions(2121);
	v->a[5021] = 1;
	v->a[5022] = aux_sym_number_token2;
	v->a[5023] = actions(2124);
	v->a[5024] = 1;
	v->a[5025] = anon_sym_DOLLAR_LBRACE;
	v->a[5026] = actions(2127);
	v->a[5027] = 1;
	v->a[5028] = anon_sym_DOLLAR_LPAREN;
	v->a[5029] = actions(2130);
	v->a[5030] = 1;
	v->a[5031] = anon_sym_BQUOTE;
	v->a[5032] = actions(2133);
	v->a[5033] = 1;
	v->a[5034] = anon_sym_DOLLAR_BQUOTE;
	v->a[5035] = actions(2139);
	v->a[5036] = 1;
	v->a[5037] = aux_sym__simple_variable_name_token1;
	v->a[5038] = actions(2142);
	v->a[5039] = 1;
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = sym_variable_name;
	v->a[5041] = actions(2145);
	v->a[5042] = 1;
	v->a[5043] = sym_test_operator;
	v->a[5044] = actions(2148);
	v->a[5045] = 1;
	v->a[5046] = sym__brace_start;
	v->a[5047] = state(1816);
	v->a[5048] = 1;
	v->a[5049] = aux_sym__literal_repeat1;
	v->a[5050] = state(6731);
	v->a[5051] = 1;
	v->a[5052] = sym_subscript;
	v->a[5053] = actions(2103);
	v->a[5054] = 2;
	v->a[5055] = anon_sym_LPAREN_LPAREN;
	v->a[5056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5057] = actions(2136);
	v->a[5058] = 2;
	v->a[5059] = anon_sym_LT_LPAREN;
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = anon_sym_GT_LPAREN;
	v->a[5061] = actions(1704);
	v->a[5062] = 3;
	v->a[5063] = sym_file_descriptor;
	v->a[5064] = ts_builtin_sym_end;
	v->a[5065] = aux_sym_heredoc_redirect_token1;
	v->a[5066] = actions(2100);
	v->a[5067] = 3;
	v->a[5068] = sym_raw_string;
	v->a[5069] = sym_ansi_c_string;
	v->a[5070] = sym_word;
	v->a[5071] = state(577);
	v->a[5072] = 3;
	v->a[5073] = sym_variable_assignment;
	v->a[5074] = sym_concatenation;
	v->a[5075] = aux_sym_declaration_command_repeat1;
	v->a[5076] = state(1322);
	v->a[5077] = 9;
	v->a[5078] = sym_arithmetic_expansion;
	v->a[5079] = sym_brace_expression;
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = sym_string;
	v->a[5081] = sym_translated_string;
	v->a[5082] = sym_number;
	v->a[5083] = sym_simple_expansion;
	v->a[5084] = sym_expansion;
	v->a[5085] = sym_command_substitution;
	v->a[5086] = sym_process_substitution;
	v->a[5087] = actions(1702);
	v->a[5088] = 19;
	v->a[5089] = anon_sym_SEMI;
	v->a[5090] = anon_sym_PIPE_PIPE;
	v->a[5091] = anon_sym_AMP_AMP;
	v->a[5092] = anon_sym_PIPE;
	v->a[5093] = anon_sym_AMP;
	v->a[5094] = anon_sym_LT;
	v->a[5095] = anon_sym_GT;
	v->a[5096] = anon_sym_LT_LT;
	v->a[5097] = anon_sym_GT_GT;
	v->a[5098] = anon_sym_SEMI_SEMI;
	v->a[5099] = anon_sym_PIPE_AMP;
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
