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
	v->a[5000] = actions(9);
	v->a[5001] = 1;
	v->a[5002] = anon_sym_for;
	v->a[5003] = actions(13);
	v->a[5004] = 1;
	v->a[5005] = anon_sym_if;
	v->a[5006] = actions(15);
	v->a[5007] = 1;
	v->a[5008] = anon_sym_case;
	v->a[5009] = actions(17);
	v->a[5010] = 1;
	v->a[5011] = anon_sym_LPAREN;
	v->a[5012] = actions(19);
	v->a[5013] = 1;
	v->a[5014] = anon_sym_LBRACE;
	v->a[5015] = actions(59);
	v->a[5016] = 1;
	v->a[5017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5018] = actions(61);
	v->a[5019] = 1;
	small_parse_table_251(v);
}

void	small_parse_table_251(t_small_parse_table_array *v)
{
	v->a[5020] = anon_sym_DOLLAR;
	v->a[5021] = actions(63);
	v->a[5022] = 1;
	v->a[5023] = anon_sym_DQUOTE;
	v->a[5024] = actions(67);
	v->a[5025] = 1;
	v->a[5026] = anon_sym_DOLLAR_LBRACE;
	v->a[5027] = actions(69);
	v->a[5028] = 1;
	v->a[5029] = anon_sym_DOLLAR_LPAREN;
	v->a[5030] = actions(71);
	v->a[5031] = 1;
	v->a[5032] = anon_sym_BQUOTE;
	v->a[5033] = actions(220);
	v->a[5034] = 1;
	v->a[5035] = sym_word;
	v->a[5036] = actions(222);
	v->a[5037] = 1;
	v->a[5038] = anon_sym_BANG;
	v->a[5039] = actions(230);
	small_parse_table_252(v);
}

void	small_parse_table_252(t_small_parse_table_array *v)
{
	v->a[5040] = 1;
	v->a[5041] = sym_file_descriptor;
	v->a[5042] = actions(232);
	v->a[5043] = 1;
	v->a[5044] = sym_variable_name;
	v->a[5045] = state(126);
	v->a[5046] = 1;
	v->a[5047] = aux_sym__statements_repeat1;
	v->a[5048] = state(184);
	v->a[5049] = 1;
	v->a[5050] = sym_command_name;
	v->a[5051] = state(268);
	v->a[5052] = 1;
	v->a[5053] = sym_variable_assignment;
	v->a[5054] = state(647);
	v->a[5055] = 1;
	v->a[5056] = sym_concatenation;
	v->a[5057] = state(738);
	v->a[5058] = 1;
	v->a[5059] = sym_file_redirect;
	small_parse_table_253(v);
}

void	small_parse_table_253(t_small_parse_table_array *v)
{
	v->a[5060] = state(828);
	v->a[5061] = 1;
	v->a[5062] = aux_sym_command_repeat1;
	v->a[5063] = state(1314);
	v->a[5064] = 1;
	v->a[5065] = sym_pipeline;
	v->a[5066] = state(1331);
	v->a[5067] = 1;
	v->a[5068] = aux_sym_redirected_statement_repeat2;
	v->a[5069] = state(2252);
	v->a[5070] = 1;
	v->a[5071] = sym__statement_not_pipeline;
	v->a[5072] = state(2475);
	v->a[5073] = 1;
	v->a[5074] = sym__statements;
	v->a[5075] = actions(11);
	v->a[5076] = 2;
	v->a[5077] = anon_sym_while;
	v->a[5078] = anon_sym_until;
	v->a[5079] = actions(226);
	small_parse_table_254(v);
}

void	small_parse_table_254(t_small_parse_table_array *v)
{
	v->a[5080] = 2;
	v->a[5081] = anon_sym_LT_AMP_DASH;
	v->a[5082] = anon_sym_GT_AMP_DASH;
	v->a[5083] = actions(228);
	v->a[5084] = 2;
	v->a[5085] = sym_raw_string;
	v->a[5086] = sym_number;
	v->a[5087] = state(294);
	v->a[5088] = 5;
	v->a[5089] = sym_arithmetic_expansion;
	v->a[5090] = sym_string;
	v->a[5091] = sym_simple_expansion;
	v->a[5092] = sym_expansion;
	v->a[5093] = sym_command_substitution;
	v->a[5094] = actions(224);
	v->a[5095] = 8;
	v->a[5096] = anon_sym_LT;
	v->a[5097] = anon_sym_GT;
	v->a[5098] = anon_sym_GT_GT;
	v->a[5099] = anon_sym_AMP_GT;
	small_parse_table_255(v);
}

/* EOF small_parse_table_50.c */
