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
	v->a[9000] = state(141);
	v->a[9001] = 1;
	v->a[9002] = aux_sym__statements_repeat1;
	v->a[9003] = state(175);
	v->a[9004] = 1;
	v->a[9005] = sym_command_name;
	v->a[9006] = state(278);
	v->a[9007] = 1;
	v->a[9008] = sym_variable_assignment;
	v->a[9009] = state(567);
	v->a[9010] = 1;
	v->a[9011] = aux_sym_command_repeat1;
	v->a[9012] = state(582);
	v->a[9013] = 1;
	v->a[9014] = sym_concatenation;
	v->a[9015] = state(752);
	v->a[9016] = 1;
	v->a[9017] = sym_file_redirect;
	v->a[9018] = state(1100);
	v->a[9019] = 1;
	small_parse_table_451(v);
}

void	small_parse_table_451(t_small_parse_table_array *v)
{
	v->a[9020] = sym_pipeline;
	v->a[9021] = state(1196);
	v->a[9022] = 1;
	v->a[9023] = aux_sym_redirected_statement_repeat2;
	v->a[9024] = state(2037);
	v->a[9025] = 1;
	v->a[9026] = sym__statement_not_pipeline;
	v->a[9027] = state(2117);
	v->a[9028] = 1;
	v->a[9029] = sym__statements;
	v->a[9030] = actions(11);
	v->a[9031] = 2;
	v->a[9032] = anon_sym_while;
	v->a[9033] = anon_sym_until;
	v->a[9034] = actions(254);
	v->a[9035] = 2;
	v->a[9036] = anon_sym_LT_AMP_DASH;
	v->a[9037] = anon_sym_GT_AMP_DASH;
	v->a[9038] = state(295);
	v->a[9039] = 6;
	small_parse_table_452(v);
}

void	small_parse_table_452(t_small_parse_table_array *v)
{
	v->a[9040] = sym_arithmetic_expansion;
	v->a[9041] = sym_string;
	v->a[9042] = sym_number;
	v->a[9043] = sym_simple_expansion;
	v->a[9044] = sym_expansion;
	v->a[9045] = sym_command_substitution;
	v->a[9046] = actions(252);
	v->a[9047] = 8;
	v->a[9048] = anon_sym_LT;
	v->a[9049] = anon_sym_GT;
	v->a[9050] = anon_sym_GT_GT;
	v->a[9051] = anon_sym_AMP_GT;
	v->a[9052] = anon_sym_AMP_GT_GT;
	v->a[9053] = anon_sym_LT_AMP;
	v->a[9054] = anon_sym_GT_AMP;
	v->a[9055] = anon_sym_GT_PIPE;
	v->a[9056] = state(1031);
	v->a[9057] = 12;
	v->a[9058] = sym_redirected_statement;
	v->a[9059] = sym_for_statement;
	small_parse_table_453(v);
}

void	small_parse_table_453(t_small_parse_table_array *v)
{
	v->a[9060] = sym_while_statement;
	v->a[9061] = sym_if_statement;
	v->a[9062] = sym_case_statement;
	v->a[9063] = sym_function_definition;
	v->a[9064] = sym_compound_statement;
	v->a[9065] = sym_subshell;
	v->a[9066] = sym_list;
	v->a[9067] = sym_negated_command;
	v->a[9068] = sym_command;
	v->a[9069] = sym_variable_assignments;
	v->a[9070] = 34;
	v->a[9071] = actions(3);
	v->a[9072] = 1;
	v->a[9073] = sym_comment;
	v->a[9074] = actions(9);
	v->a[9075] = 1;
	v->a[9076] = anon_sym_for;
	v->a[9077] = actions(13);
	v->a[9078] = 1;
	v->a[9079] = anon_sym_if;
	small_parse_table_454(v);
}

void	small_parse_table_454(t_small_parse_table_array *v)
{
	v->a[9080] = actions(15);
	v->a[9081] = 1;
	v->a[9082] = anon_sym_case;
	v->a[9083] = actions(17);
	v->a[9084] = 1;
	v->a[9085] = anon_sym_LPAREN;
	v->a[9086] = actions(19);
	v->a[9087] = 1;
	v->a[9088] = anon_sym_LBRACE;
	v->a[9089] = actions(63);
	v->a[9090] = 1;
	v->a[9091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9092] = actions(65);
	v->a[9093] = 1;
	v->a[9094] = anon_sym_DOLLAR;
	v->a[9095] = actions(67);
	v->a[9096] = 1;
	v->a[9097] = anon_sym_DQUOTE;
	v->a[9098] = actions(69);
	v->a[9099] = 1;
	small_parse_table_455(v);
}

/* EOF small_parse_table_90.c */
