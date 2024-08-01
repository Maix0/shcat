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
	v->a[9000] = aux_sym_redirected_statement_repeat2;
	v->a[9001] = state(1561);
	v->a[9002] = 1;
	v->a[9003] = sym__statement_not_pipeline;
	v->a[9004] = actions(11);
	v->a[9005] = 2;
	v->a[9006] = anon_sym_while;
	v->a[9007] = anon_sym_until;
	v->a[9008] = actions(59);
	v->a[9009] = 2;
	v->a[9010] = sym_raw_string;
	v->a[9011] = sym_number;
	v->a[9012] = actions(51);
	v->a[9013] = 3;
	v->a[9014] = anon_sym_LT;
	v->a[9015] = anon_sym_GT;
	v->a[9016] = anon_sym_GT_GT;
	v->a[9017] = state(401);
	v->a[9018] = 5;
	v->a[9019] = sym_arithmetic_expansion;
	small_parse_table_451(v);
}

void	small_parse_table_451(t_small_parse_table_array *v)
{
	v->a[9020] = sym_string;
	v->a[9021] = sym_simple_expansion;
	v->a[9022] = sym_expansion;
	v->a[9023] = sym_command_substitution;
	v->a[9024] = state(949);
	v->a[9025] = 12;
	v->a[9026] = sym_redirected_statement;
	v->a[9027] = sym_for_statement;
	v->a[9028] = sym_while_statement;
	v->a[9029] = sym_if_statement;
	v->a[9030] = sym_case_statement;
	v->a[9031] = sym_function_definition;
	v->a[9032] = sym_compound_statement;
	v->a[9033] = sym_subshell;
	v->a[9034] = sym_list;
	v->a[9035] = sym_negated_command;
	v->a[9036] = sym_command;
	v->a[9037] = sym__variable_assignments;
	v->a[9038] = 30;
	v->a[9039] = actions(3);
	small_parse_table_452(v);
}

void	small_parse_table_452(t_small_parse_table_array *v)
{
	v->a[9040] = 1;
	v->a[9041] = sym_comment;
	v->a[9042] = actions(9);
	v->a[9043] = 1;
	v->a[9044] = anon_sym_for;
	v->a[9045] = actions(13);
	v->a[9046] = 1;
	v->a[9047] = anon_sym_if;
	v->a[9048] = actions(15);
	v->a[9049] = 1;
	v->a[9050] = anon_sym_case;
	v->a[9051] = actions(17);
	v->a[9052] = 1;
	v->a[9053] = anon_sym_LPAREN;
	v->a[9054] = actions(19);
	v->a[9055] = 1;
	v->a[9056] = anon_sym_LBRACE;
	v->a[9057] = actions(53);
	v->a[9058] = 1;
	v->a[9059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_453(v);
}

void	small_parse_table_453(t_small_parse_table_array *v)
{
	v->a[9060] = actions(55);
	v->a[9061] = 1;
	v->a[9062] = anon_sym_DOLLAR;
	v->a[9063] = actions(57);
	v->a[9064] = 1;
	v->a[9065] = anon_sym_DQUOTE;
	v->a[9066] = actions(61);
	v->a[9067] = 1;
	v->a[9068] = anon_sym_DOLLAR_LBRACE;
	v->a[9069] = actions(63);
	v->a[9070] = 1;
	v->a[9071] = anon_sym_DOLLAR_LPAREN;
	v->a[9072] = actions(65);
	v->a[9073] = 1;
	v->a[9074] = anon_sym_BQUOTE;
	v->a[9075] = actions(67);
	v->a[9076] = 1;
	v->a[9077] = sym_variable_name;
	v->a[9078] = actions(204);
	v->a[9079] = 1;
	small_parse_table_454(v);
}

void	small_parse_table_454(t_small_parse_table_array *v)
{
	v->a[9080] = sym_word;
	v->a[9081] = actions(206);
	v->a[9082] = 1;
	v->a[9083] = anon_sym_BANG;
	v->a[9084] = state(116);
	v->a[9085] = 1;
	v->a[9086] = aux_sym__statements_repeat1;
	v->a[9087] = state(179);
	v->a[9088] = 1;
	v->a[9089] = sym_command_name;
	v->a[9090] = state(208);
	v->a[9091] = 1;
	v->a[9092] = sym_variable_assignment;
	v->a[9093] = state(385);
	v->a[9094] = 1;
	v->a[9095] = aux_sym_command_repeat1;
	v->a[9096] = state(555);
	v->a[9097] = 1;
	v->a[9098] = sym_concatenation;
	v->a[9099] = state(599);
	small_parse_table_455(v);
}

/* EOF small_parse_table_90.c */
