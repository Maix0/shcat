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
	v->a[6000] = actions(1567);
	v->a[6001] = 1;
	v->a[6002] = anon_sym_DOLLAR_BQUOTE;
	v->a[6003] = actions(1573);
	v->a[6004] = 1;
	v->a[6005] = sym__bare_dollar;
	v->a[6006] = actions(1575);
	v->a[6007] = 1;
	v->a[6008] = sym__brace_start;
	v->a[6009] = actions(1690);
	v->a[6010] = 1;
	v->a[6011] = anon_sym_LT_LT_LT;
	v->a[6012] = actions(1692);
	v->a[6013] = 1;
	v->a[6014] = sym__special_character;
	v->a[6015] = actions(1694);
	v->a[6016] = 1;
	v->a[6017] = sym_test_operator;
	v->a[6018] = state(574);
	v->a[6019] = 1;
	small_parse_table_301(v);
}

void	small_parse_table_301(t_small_parse_table_array *v)
{
	v->a[6020] = aux_sym_command_repeat2;
	v->a[6021] = state(1321);
	v->a[6022] = 1;
	v->a[6023] = aux_sym__literal_repeat1;
	v->a[6024] = state(1712);
	v->a[6025] = 1;
	v->a[6026] = sym_herestring_redirect;
	v->a[6027] = state(1716);
	v->a[6028] = 1;
	v->a[6029] = sym_concatenation;
	v->a[6030] = actions(1543);
	v->a[6031] = 2;
	v->a[6032] = anon_sym_LPAREN_LPAREN;
	v->a[6033] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6034] = actions(1569);
	v->a[6035] = 2;
	v->a[6036] = anon_sym_LT_LPAREN;
	v->a[6037] = anon_sym_GT_LPAREN;
	v->a[6038] = actions(1615);
	v->a[6039] = 2;
	small_parse_table_302(v);
}

void	small_parse_table_302(t_small_parse_table_array *v)
{
	v->a[6040] = sym_file_descriptor;
	v->a[6041] = aux_sym_heredoc_redirect_token1;
	v->a[6042] = actions(1688);
	v->a[6043] = 2;
	v->a[6044] = anon_sym_EQ_EQ;
	v->a[6045] = anon_sym_EQ_TILDE;
	v->a[6046] = actions(1686);
	v->a[6047] = 3;
	v->a[6048] = sym_raw_string;
	v->a[6049] = sym_ansi_c_string;
	v->a[6050] = sym_word;
	v->a[6051] = state(1219);
	v->a[6052] = 9;
	v->a[6053] = sym_arithmetic_expansion;
	v->a[6054] = sym_brace_expression;
	v->a[6055] = sym_string;
	v->a[6056] = sym_translated_string;
	v->a[6057] = sym_number;
	v->a[6058] = sym_simple_expansion;
	v->a[6059] = sym_expansion;
	small_parse_table_303(v);
}

void	small_parse_table_303(t_small_parse_table_array *v)
{
	v->a[6060] = sym_command_substitution;
	v->a[6061] = sym_process_substitution;
	v->a[6062] = actions(1613);
	v->a[6063] = 20;
	v->a[6064] = anon_sym_SEMI;
	v->a[6065] = anon_sym_PIPE_PIPE;
	v->a[6066] = anon_sym_AMP_AMP;
	v->a[6067] = anon_sym_PIPE;
	v->a[6068] = anon_sym_AMP;
	v->a[6069] = anon_sym_LT;
	v->a[6070] = anon_sym_GT;
	v->a[6071] = anon_sym_LT_LT;
	v->a[6072] = anon_sym_GT_GT;
	v->a[6073] = anon_sym_SEMI_SEMI;
	v->a[6074] = anon_sym_PIPE_AMP;
	v->a[6075] = anon_sym_AMP_GT;
	v->a[6076] = anon_sym_AMP_GT_GT;
	v->a[6077] = anon_sym_LT_AMP;
	v->a[6078] = anon_sym_GT_AMP;
	v->a[6079] = anon_sym_GT_PIPE;
	small_parse_table_304(v);
}

void	small_parse_table_304(t_small_parse_table_array *v)
{
	v->a[6080] = anon_sym_LT_AMP_DASH;
	v->a[6081] = anon_sym_GT_AMP_DASH;
	v->a[6082] = anon_sym_LT_LT_DASH;
	v->a[6083] = anon_sym_BQUOTE;
	v->a[6084] = 8;
	v->a[6085] = actions(3);
	v->a[6086] = 1;
	v->a[6087] = sym_comment;
	v->a[6088] = actions(1591);
	v->a[6089] = 1;
	v->a[6090] = anon_sym_DQUOTE;
	v->a[6091] = actions(2155);
	v->a[6092] = 1;
	v->a[6093] = sym_variable_name;
	v->a[6094] = state(1282);
	v->a[6095] = 1;
	v->a[6096] = sym_string;
	v->a[6097] = actions(2153);
	v->a[6098] = 2;
	v->a[6099] = aux_sym__simple_variable_name_token1;
	small_parse_table_305(v);
}

/* EOF small_parse_table_60.c */
