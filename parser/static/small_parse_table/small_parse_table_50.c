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
	v->a[5000] = anon_sym_AMP;
	v->a[5001] = sym__special_character;
	v->a[5002] = anon_sym_DQUOTE;
	v->a[5003] = sym_raw_string;
	v->a[5004] = aux_sym_number_token1;
	v->a[5005] = aux_sym_number_token2;
	v->a[5006] = anon_sym_DOLLAR_LBRACE;
	v->a[5007] = anon_sym_DOLLAR_LPAREN;
	v->a[5008] = anon_sym_BQUOTE;
	v->a[5009] = anon_sym_DOLLAR_BQUOTE;
	v->a[5010] = sym_word;
	v->a[5011] = anon_sym_SEMI;
	v->a[5012] = 23;
	v->a[5013] = actions(3);
	v->a[5014] = 1;
	v->a[5015] = sym_comment;
	v->a[5016] = actions(1146);
	v->a[5017] = 1;
	v->a[5018] = anon_sym_LPAREN;
	v->a[5019] = actions(1252);
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = 1;
	v->a[5021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5022] = actions(1254);
	v->a[5023] = 1;
	v->a[5024] = anon_sym_DOLLAR;
	v->a[5025] = actions(1258);
	v->a[5026] = 1;
	v->a[5027] = anon_sym_DQUOTE;
	v->a[5028] = actions(1260);
	v->a[5029] = 1;
	v->a[5030] = aux_sym_number_token1;
	v->a[5031] = actions(1262);
	v->a[5032] = 1;
	v->a[5033] = aux_sym_number_token2;
	v->a[5034] = actions(1264);
	v->a[5035] = 1;
	v->a[5036] = anon_sym_DOLLAR_LBRACE;
	v->a[5037] = actions(1266);
	v->a[5038] = 1;
	v->a[5039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = actions(1268);
	v->a[5041] = 1;
	v->a[5042] = anon_sym_BQUOTE;
	v->a[5043] = actions(1270);
	v->a[5044] = 1;
	v->a[5045] = anon_sym_DOLLAR_BQUOTE;
	v->a[5046] = actions(1274);
	v->a[5047] = 1;
	v->a[5048] = sym__bare_dollar;
	v->a[5049] = actions(1276);
	v->a[5050] = 1;
	v->a[5051] = sym__brace_start;
	v->a[5052] = actions(1428);
	v->a[5053] = 1;
	v->a[5054] = sym__special_character;
	v->a[5055] = actions(1430);
	v->a[5056] = 1;
	v->a[5057] = sym_test_operator;
	v->a[5058] = state(401);
	v->a[5059] = 1;
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = aux_sym_command_repeat2;
	v->a[5061] = state(1232);
	v->a[5062] = 1;
	v->a[5063] = aux_sym__literal_repeat1;
	v->a[5064] = state(1293);
	v->a[5065] = 1;
	v->a[5066] = sym_concatenation;
	v->a[5067] = state(2297);
	v->a[5068] = 1;
	v->a[5069] = sym_subshell;
	v->a[5070] = actions(759);
	v->a[5071] = 2;
	v->a[5072] = sym_file_descriptor;
	v->a[5073] = aux_sym_heredoc_redirect_token1;
	v->a[5074] = actions(1426);
	v->a[5075] = 2;
	v->a[5076] = sym_raw_string;
	v->a[5077] = sym_word;
	v->a[5078] = state(1146);
	v->a[5079] = 7;
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = sym_arithmetic_expansion;
	v->a[5081] = sym_brace_expression;
	v->a[5082] = sym_string;
	v->a[5083] = sym_number;
	v->a[5084] = sym_simple_expansion;
	v->a[5085] = sym_expansion;
	v->a[5086] = sym_command_substitution;
	v->a[5087] = actions(757);
	v->a[5088] = 19;
	v->a[5089] = anon_sym_PIPE;
	v->a[5090] = anon_sym_SEMI_SEMI;
	v->a[5091] = anon_sym_PIPE_AMP;
	v->a[5092] = anon_sym_AMP_AMP;
	v->a[5093] = anon_sym_PIPE_PIPE;
	v->a[5094] = anon_sym_LT;
	v->a[5095] = anon_sym_GT;
	v->a[5096] = anon_sym_GT_GT;
	v->a[5097] = anon_sym_AMP_GT;
	v->a[5098] = anon_sym_AMP_GT_GT;
	v->a[5099] = anon_sym_LT_AMP;
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
