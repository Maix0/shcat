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
	v->a[6000] = actions(67);
	v->a[6001] = 1;
	v->a[6002] = anon_sym_DOLLAR_LBRACE;
	v->a[6003] = actions(69);
	v->a[6004] = 1;
	v->a[6005] = anon_sym_DOLLAR_LPAREN;
	v->a[6006] = actions(71);
	v->a[6007] = 1;
	v->a[6008] = anon_sym_BQUOTE;
	v->a[6009] = actions(73);
	v->a[6010] = 1;
	v->a[6011] = sym_file_descriptor;
	v->a[6012] = actions(75);
	v->a[6013] = 1;
	v->a[6014] = sym_variable_name;
	v->a[6015] = actions(236);
	v->a[6016] = 1;
	v->a[6017] = sym_word;
	v->a[6018] = actions(238);
	v->a[6019] = 1;
	small_parse_table_301(v);
}

void	small_parse_table_301(t_small_parse_table_array *v)
{
	v->a[6020] = anon_sym_BANG;
	v->a[6021] = state(140);
	v->a[6022] = 1;
	v->a[6023] = aux_sym__statements_repeat1;
	v->a[6024] = state(189);
	v->a[6025] = 1;
	v->a[6026] = sym_command_name;
	v->a[6027] = state(286);
	v->a[6028] = 1;
	v->a[6029] = sym_variable_assignment;
	v->a[6030] = state(647);
	v->a[6031] = 1;
	v->a[6032] = sym_concatenation;
	v->a[6033] = state(746);
	v->a[6034] = 1;
	v->a[6035] = aux_sym_command_repeat1;
	v->a[6036] = state(905);
	v->a[6037] = 1;
	v->a[6038] = sym_file_redirect;
	v->a[6039] = state(1422);
	small_parse_table_302(v);
}

void	small_parse_table_302(t_small_parse_table_array *v)
{
	v->a[6040] = 1;
	v->a[6041] = sym_pipeline;
	v->a[6042] = state(1429);
	v->a[6043] = 1;
	v->a[6044] = aux_sym_redirected_statement_repeat2;
	v->a[6045] = state(2271);
	v->a[6046] = 1;
	v->a[6047] = sym__statement_not_pipeline;
	v->a[6048] = state(2463);
	v->a[6049] = 1;
	v->a[6050] = sym__statements;
	v->a[6051] = actions(11);
	v->a[6052] = 2;
	v->a[6053] = anon_sym_while;
	v->a[6054] = anon_sym_until;
	v->a[6055] = actions(57);
	v->a[6056] = 2;
	v->a[6057] = anon_sym_LT_AMP_DASH;
	v->a[6058] = anon_sym_GT_AMP_DASH;
	v->a[6059] = actions(65);
	small_parse_table_303(v);
}

void	small_parse_table_303(t_small_parse_table_array *v)
{
	v->a[6060] = 2;
	v->a[6061] = sym_raw_string;
	v->a[6062] = sym_number;
	v->a[6063] = state(394);
	v->a[6064] = 5;
	v->a[6065] = sym_arithmetic_expansion;
	v->a[6066] = sym_string;
	v->a[6067] = sym_simple_expansion;
	v->a[6068] = sym_expansion;
	v->a[6069] = sym_command_substitution;
	v->a[6070] = actions(55);
	v->a[6071] = 8;
	v->a[6072] = anon_sym_LT;
	v->a[6073] = anon_sym_GT;
	v->a[6074] = anon_sym_GT_GT;
	v->a[6075] = anon_sym_AMP_GT;
	v->a[6076] = anon_sym_AMP_GT_GT;
	v->a[6077] = anon_sym_LT_AMP;
	v->a[6078] = anon_sym_GT_AMP;
	v->a[6079] = anon_sym_GT_PIPE;
	small_parse_table_304(v);
}

void	small_parse_table_304(t_small_parse_table_array *v)
{
	v->a[6080] = state(1211);
	v->a[6081] = 12;
	v->a[6082] = sym_redirected_statement;
	v->a[6083] = sym_for_statement;
	v->a[6084] = sym_while_statement;
	v->a[6085] = sym_if_statement;
	v->a[6086] = sym_case_statement;
	v->a[6087] = sym_function_definition;
	v->a[6088] = sym_compound_statement;
	v->a[6089] = sym_subshell;
	v->a[6090] = sym_list;
	v->a[6091] = sym_negated_command;
	v->a[6092] = sym_command;
	v->a[6093] = sym__variable_assignments;
	v->a[6094] = 32;
	v->a[6095] = actions(3);
	v->a[6096] = 1;
	v->a[6097] = sym_comment;
	v->a[6098] = actions(9);
	v->a[6099] = 1;
	small_parse_table_305(v);
}

/* EOF small_parse_table_60.c */
