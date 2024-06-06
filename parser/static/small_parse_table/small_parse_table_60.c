/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_60.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_300(t_small_parse_table_array *v)
{
	v->a[6000] = 1;
	v->a[6001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6002] = actions(1254);
	v->a[6003] = 1;
	v->a[6004] = anon_sym_DOLLAR;
	v->a[6005] = actions(1258);
	v->a[6006] = 1;
	v->a[6007] = anon_sym_DQUOTE;
	v->a[6008] = actions(1260);
	v->a[6009] = 1;
	v->a[6010] = aux_sym_number_token1;
	v->a[6011] = actions(1262);
	v->a[6012] = 1;
	v->a[6013] = aux_sym_number_token2;
	v->a[6014] = actions(1264);
	v->a[6015] = 1;
	v->a[6016] = anon_sym_DOLLAR_LBRACE;
	v->a[6017] = actions(1266);
	v->a[6018] = 1;
	v->a[6019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_301(v);
}

void	small_parse_table_301(t_small_parse_table_array *v)
{
	v->a[6020] = actions(1270);
	v->a[6021] = 1;
	v->a[6022] = anon_sym_DOLLAR_BQUOTE;
	v->a[6023] = actions(1274);
	v->a[6024] = 1;
	v->a[6025] = sym__bare_dollar;
	v->a[6026] = actions(1276);
	v->a[6027] = 1;
	v->a[6028] = sym__brace_start;
	v->a[6029] = actions(1428);
	v->a[6030] = 1;
	v->a[6031] = sym__special_character;
	v->a[6032] = actions(1430);
	v->a[6033] = 1;
	v->a[6034] = sym_test_operator;
	v->a[6035] = state(402);
	v->a[6036] = 1;
	v->a[6037] = aux_sym_command_repeat2;
	v->a[6038] = state(1232);
	v->a[6039] = 1;
	small_parse_table_302(v);
}

void	small_parse_table_302(t_small_parse_table_array *v)
{
	v->a[6040] = aux_sym__literal_repeat1;
	v->a[6041] = state(1293);
	v->a[6042] = 1;
	v->a[6043] = sym_concatenation;
	v->a[6044] = state(2297);
	v->a[6045] = 1;
	v->a[6046] = sym_subshell;
	v->a[6047] = actions(759);
	v->a[6048] = 2;
	v->a[6049] = sym_file_descriptor;
	v->a[6050] = aux_sym_heredoc_redirect_token1;
	v->a[6051] = actions(1426);
	v->a[6052] = 2;
	v->a[6053] = sym_raw_string;
	v->a[6054] = sym_word;
	v->a[6055] = state(1146);
	v->a[6056] = 7;
	v->a[6057] = sym_arithmetic_expansion;
	v->a[6058] = sym_brace_expression;
	v->a[6059] = sym_string;
	small_parse_table_303(v);
}

void	small_parse_table_303(t_small_parse_table_array *v)
{
	v->a[6060] = sym_number;
	v->a[6061] = sym_simple_expansion;
	v->a[6062] = sym_expansion;
	v->a[6063] = sym_command_substitution;
	v->a[6064] = actions(757);
	v->a[6065] = 20;
	v->a[6066] = anon_sym_PIPE;
	v->a[6067] = anon_sym_SEMI_SEMI;
	v->a[6068] = anon_sym_PIPE_AMP;
	v->a[6069] = anon_sym_AMP_AMP;
	v->a[6070] = anon_sym_PIPE_PIPE;
	v->a[6071] = anon_sym_LT;
	v->a[6072] = anon_sym_GT;
	v->a[6073] = anon_sym_GT_GT;
	v->a[6074] = anon_sym_AMP_GT;
	v->a[6075] = anon_sym_AMP_GT_GT;
	v->a[6076] = anon_sym_LT_AMP;
	v->a[6077] = anon_sym_GT_AMP;
	v->a[6078] = anon_sym_GT_PIPE;
	v->a[6079] = anon_sym_LT_AMP_DASH;
	small_parse_table_304(v);
}

void	small_parse_table_304(t_small_parse_table_array *v)
{
	v->a[6080] = anon_sym_GT_AMP_DASH;
	v->a[6081] = anon_sym_LT_LT;
	v->a[6082] = anon_sym_LT_LT_DASH;
	v->a[6083] = anon_sym_AMP;
	v->a[6084] = anon_sym_BQUOTE;
	v->a[6085] = anon_sym_SEMI;
	v->a[6086] = 19;
	v->a[6087] = actions(3);
	v->a[6088] = 1;
	v->a[6089] = sym_comment;
	v->a[6090] = actions(1606);
	v->a[6091] = 1;
	v->a[6092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6093] = actions(1609);
	v->a[6094] = 1;
	v->a[6095] = anon_sym_DOLLAR;
	v->a[6096] = actions(1612);
	v->a[6097] = 1;
	v->a[6098] = sym__special_character;
	v->a[6099] = actions(1615);
	small_parse_table_305(v);
}

/* EOF small_parse_table_60.c */
