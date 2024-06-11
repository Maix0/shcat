/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_90.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_450(t_small_parse_table_array *v)
{
	v->a[9000] = anon_sym_LT;
	v->a[9001] = anon_sym_GT;
	v->a[9002] = anon_sym_GT_GT;
	v->a[9003] = anon_sym_AMP_GT;
	v->a[9004] = anon_sym_AMP_GT_GT;
	v->a[9005] = anon_sym_LT_AMP;
	v->a[9006] = anon_sym_GT_AMP;
	v->a[9007] = anon_sym_GT_PIPE;
	v->a[9008] = state(1211);
	v->a[9009] = 12;
	v->a[9010] = sym_redirected_statement;
	v->a[9011] = sym_for_statement;
	v->a[9012] = sym_while_statement;
	v->a[9013] = sym_if_statement;
	v->a[9014] = sym_case_statement;
	v->a[9015] = sym_function_definition;
	v->a[9016] = sym_compound_statement;
	v->a[9017] = sym_subshell;
	v->a[9018] = sym_list;
	v->a[9019] = sym_negated_command;
	small_parse_table_451(v);
}

void	small_parse_table_451(t_small_parse_table_array *v)
{
	v->a[9020] = sym_command;
	v->a[9021] = sym_variable_assignments;
	v->a[9022] = 32;
	v->a[9023] = actions(3);
	v->a[9024] = 1;
	v->a[9025] = sym_comment;
	v->a[9026] = actions(9);
	v->a[9027] = 1;
	v->a[9028] = anon_sym_for;
	v->a[9029] = actions(13);
	v->a[9030] = 1;
	v->a[9031] = anon_sym_if;
	v->a[9032] = actions(15);
	v->a[9033] = 1;
	v->a[9034] = anon_sym_case;
	v->a[9035] = actions(17);
	v->a[9036] = 1;
	v->a[9037] = anon_sym_LPAREN;
	v->a[9038] = actions(19);
	v->a[9039] = 1;
	small_parse_table_452(v);
}

void	small_parse_table_452(t_small_parse_table_array *v)
{
	v->a[9040] = anon_sym_LBRACE;
	v->a[9041] = actions(59);
	v->a[9042] = 1;
	v->a[9043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9044] = actions(61);
	v->a[9045] = 1;
	v->a[9046] = anon_sym_DOLLAR;
	v->a[9047] = actions(63);
	v->a[9048] = 1;
	v->a[9049] = anon_sym_DQUOTE;
	v->a[9050] = actions(67);
	v->a[9051] = 1;
	v->a[9052] = anon_sym_DOLLAR_LBRACE;
	v->a[9053] = actions(69);
	v->a[9054] = 1;
	v->a[9055] = anon_sym_DOLLAR_LPAREN;
	v->a[9056] = actions(71);
	v->a[9057] = 1;
	v->a[9058] = anon_sym_BQUOTE;
	v->a[9059] = actions(220);
	small_parse_table_453(v);
}

void	small_parse_table_453(t_small_parse_table_array *v)
{
	v->a[9060] = 1;
	v->a[9061] = sym_word;
	v->a[9062] = actions(222);
	v->a[9063] = 1;
	v->a[9064] = anon_sym_BANG;
	v->a[9065] = actions(230);
	v->a[9066] = 1;
	v->a[9067] = sym_file_descriptor;
	v->a[9068] = actions(232);
	v->a[9069] = 1;
	v->a[9070] = sym_variable_name;
	v->a[9071] = state(126);
	v->a[9072] = 1;
	v->a[9073] = aux_sym__statements_repeat1;
	v->a[9074] = state(184);
	v->a[9075] = 1;
	v->a[9076] = sym_command_name;
	v->a[9077] = state(268);
	v->a[9078] = 1;
	v->a[9079] = sym_variable_assignment;
	small_parse_table_454(v);
}

void	small_parse_table_454(t_small_parse_table_array *v)
{
	v->a[9080] = state(647);
	v->a[9081] = 1;
	v->a[9082] = sym_concatenation;
	v->a[9083] = state(772);
	v->a[9084] = 1;
	v->a[9085] = sym_file_redirect;
	v->a[9086] = state(828);
	v->a[9087] = 1;
	v->a[9088] = aux_sym_command_repeat1;
	v->a[9089] = state(1314);
	v->a[9090] = 1;
	v->a[9091] = sym_pipeline;
	v->a[9092] = state(1331);
	v->a[9093] = 1;
	v->a[9094] = aux_sym_redirected_statement_repeat2;
	v->a[9095] = state(2252);
	v->a[9096] = 1;
	v->a[9097] = sym__statement_not_pipeline;
	v->a[9098] = state(2377);
	v->a[9099] = 1;
	small_parse_table_455(v);
}

/* EOF small_parse_table_90.c */
