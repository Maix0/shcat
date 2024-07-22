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
	v->a[6001] = anon_sym_DOLLAR;
	v->a[6002] = actions(59);
	v->a[6003] = 1;
	v->a[6004] = anon_sym_DQUOTE;
	v->a[6005] = actions(63);
	v->a[6006] = 1;
	v->a[6007] = anon_sym_DOLLAR_LBRACE;
	v->a[6008] = actions(65);
	v->a[6009] = 1;
	v->a[6010] = anon_sym_DOLLAR_LPAREN;
	v->a[6011] = actions(67);
	v->a[6012] = 1;
	v->a[6013] = anon_sym_BQUOTE;
	v->a[6014] = actions(69);
	v->a[6015] = 1;
	v->a[6016] = sym_file_descriptor;
	v->a[6017] = actions(71);
	v->a[6018] = 1;
	v->a[6019] = sym_variable_name;
	small_parse_table_301(v);
}

void	small_parse_table_301(t_small_parse_table_array *v)
{
	v->a[6020] = actions(229);
	v->a[6021] = 1;
	v->a[6022] = anon_sym_then;
	v->a[6023] = state(36);
	v->a[6024] = 1;
	v->a[6025] = aux_sym__terminated_statement;
	v->a[6026] = state(183);
	v->a[6027] = 1;
	v->a[6028] = sym_command_name;
	v->a[6029] = state(327);
	v->a[6030] = 1;
	v->a[6031] = sym_variable_assignment;
	v->a[6032] = state(655);
	v->a[6033] = 1;
	v->a[6034] = aux_sym_command_repeat1;
	v->a[6035] = state(661);
	v->a[6036] = 1;
	v->a[6037] = sym_concatenation;
	v->a[6038] = state(665);
	v->a[6039] = 1;
	small_parse_table_302(v);
}

void	small_parse_table_302(t_small_parse_table_array *v)
{
	v->a[6040] = sym_file_redirect;
	v->a[6041] = state(1142);
	v->a[6042] = 1;
	v->a[6043] = sym_pipeline;
	v->a[6044] = state(1198);
	v->a[6045] = 1;
	v->a[6046] = aux_sym_redirected_statement_repeat2;
	v->a[6047] = state(1901);
	v->a[6048] = 1;
	v->a[6049] = sym__statement_not_pipeline;
	v->a[6050] = actions(11);
	v->a[6051] = 2;
	v->a[6052] = anon_sym_while;
	v->a[6053] = anon_sym_until;
	v->a[6054] = actions(61);
	v->a[6055] = 2;
	v->a[6056] = sym_raw_string;
	v->a[6057] = sym_number;
	v->a[6058] = state(455);
	v->a[6059] = 5;
	small_parse_table_303(v);
}

void	small_parse_table_303(t_small_parse_table_array *v)
{
	v->a[6060] = sym_arithmetic_expansion;
	v->a[6061] = sym_string;
	v->a[6062] = sym_simple_expansion;
	v->a[6063] = sym_expansion;
	v->a[6064] = sym_command_substitution;
	v->a[6065] = actions(53);
	v->a[6066] = 7;
	v->a[6067] = anon_sym_LT;
	v->a[6068] = anon_sym_GT;
	v->a[6069] = anon_sym_GT_GT;
	v->a[6070] = anon_sym_LT_AMP;
	v->a[6071] = anon_sym_GT_AMP;
	v->a[6072] = anon_sym_GT_PIPE;
	v->a[6073] = anon_sym_LT_GT;
	v->a[6074] = state(1090);
	v->a[6075] = 12;
	v->a[6076] = sym_redirected_statement;
	v->a[6077] = sym_for_statement;
	v->a[6078] = sym_while_statement;
	v->a[6079] = sym_if_statement;
	small_parse_table_304(v);
}

void	small_parse_table_304(t_small_parse_table_array *v)
{
	v->a[6080] = sym_case_statement;
	v->a[6081] = sym_function_definition;
	v->a[6082] = sym_compound_statement;
	v->a[6083] = sym_subshell;
	v->a[6084] = sym_list;
	v->a[6085] = sym_negated_command;
	v->a[6086] = sym_command;
	v->a[6087] = sym__variable_assignments;
	v->a[6088] = 31;
	v->a[6089] = actions(3);
	v->a[6090] = 1;
	v->a[6091] = sym_comment;
	v->a[6092] = actions(9);
	v->a[6093] = 1;
	v->a[6094] = anon_sym_for;
	v->a[6095] = actions(13);
	v->a[6096] = 1;
	v->a[6097] = anon_sym_if;
	v->a[6098] = actions(15);
	v->a[6099] = 1;
	small_parse_table_305(v);
}

/* EOF small_parse_table_60.c */
