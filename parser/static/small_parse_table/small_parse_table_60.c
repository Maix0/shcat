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
	v->a[6001] = sym_concatenation;
	v->a[6002] = state(911);
	v->a[6003] = 1;
	v->a[6004] = sym_pipeline;
	v->a[6005] = state(1001);
	v->a[6006] = 1;
	v->a[6007] = aux_sym_redirected_statement_repeat2;
	v->a[6008] = state(1606);
	v->a[6009] = 1;
	v->a[6010] = sym__statement_not_pipeline;
	v->a[6011] = state(1788);
	v->a[6012] = 1;
	v->a[6013] = sym__statements;
	v->a[6014] = actions(11);
	v->a[6015] = 2;
	v->a[6016] = anon_sym_while;
	v->a[6017] = anon_sym_until;
	v->a[6018] = actions(212);
	v->a[6019] = 2;
	small_parse_table_301(v);
}

void	small_parse_table_301(t_small_parse_table_array *v)
{
	v->a[6020] = sym_raw_string;
	v->a[6021] = sym_number;
	v->a[6022] = state(327);
	v->a[6023] = 5;
	v->a[6024] = sym_arithmetic_expansion;
	v->a[6025] = sym_string;
	v->a[6026] = sym_simple_expansion;
	v->a[6027] = sym_expansion;
	v->a[6028] = sym_command_substitution;
	v->a[6029] = actions(210);
	v->a[6030] = 7;
	v->a[6031] = anon_sym_LT;
	v->a[6032] = anon_sym_GT;
	v->a[6033] = anon_sym_GT_GT;
	v->a[6034] = anon_sym_LT_AMP;
	v->a[6035] = anon_sym_GT_AMP;
	v->a[6036] = anon_sym_GT_PIPE;
	v->a[6037] = anon_sym_LT_GT;
	v->a[6038] = state(884);
	v->a[6039] = 12;
	small_parse_table_302(v);
}

void	small_parse_table_302(t_small_parse_table_array *v)
{
	v->a[6040] = sym_redirected_statement;
	v->a[6041] = sym_for_statement;
	v->a[6042] = sym_while_statement;
	v->a[6043] = sym_if_statement;
	v->a[6044] = sym_case_statement;
	v->a[6045] = sym_function_definition;
	v->a[6046] = sym_compound_statement;
	v->a[6047] = sym_subshell;
	v->a[6048] = sym_list;
	v->a[6049] = sym_negated_command;
	v->a[6050] = sym_command;
	v->a[6051] = sym__variable_assignments;
	v->a[6052] = 30;
	v->a[6053] = actions(3);
	v->a[6054] = 1;
	v->a[6055] = sym_comment;
	v->a[6056] = actions(9);
	v->a[6057] = 1;
	v->a[6058] = anon_sym_for;
	v->a[6059] = actions(13);
	small_parse_table_303(v);
}

void	small_parse_table_303(t_small_parse_table_array *v)
{
	v->a[6060] = 1;
	v->a[6061] = anon_sym_if;
	v->a[6062] = actions(15);
	v->a[6063] = 1;
	v->a[6064] = anon_sym_case;
	v->a[6065] = actions(17);
	v->a[6066] = 1;
	v->a[6067] = anon_sym_LPAREN;
	v->a[6068] = actions(19);
	v->a[6069] = 1;
	v->a[6070] = anon_sym_LBRACE;
	v->a[6071] = actions(53);
	v->a[6072] = 1;
	v->a[6073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6074] = actions(55);
	v->a[6075] = 1;
	v->a[6076] = anon_sym_DOLLAR;
	v->a[6077] = actions(57);
	v->a[6078] = 1;
	v->a[6079] = anon_sym_DQUOTE;
	small_parse_table_304(v);
}

void	small_parse_table_304(t_small_parse_table_array *v)
{
	v->a[6080] = actions(61);
	v->a[6081] = 1;
	v->a[6082] = anon_sym_DOLLAR_LBRACE;
	v->a[6083] = actions(63);
	v->a[6084] = 1;
	v->a[6085] = anon_sym_DOLLAR_LPAREN;
	v->a[6086] = actions(65);
	v->a[6087] = 1;
	v->a[6088] = anon_sym_BQUOTE;
	v->a[6089] = actions(206);
	v->a[6090] = 1;
	v->a[6091] = sym_word;
	v->a[6092] = actions(208);
	v->a[6093] = 1;
	v->a[6094] = anon_sym_BANG;
	v->a[6095] = actions(214);
	v->a[6096] = 1;
	v->a[6097] = sym_variable_name;
	v->a[6098] = state(106);
	v->a[6099] = 1;
	small_parse_table_305(v);
}

/* EOF small_parse_table_60.c */
