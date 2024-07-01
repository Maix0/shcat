/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_70.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_350(t_small_parse_table_array *v)
{
	v->a[7000] = sym_variable_name;
	v->a[7001] = actions(240);
	v->a[7002] = 1;
	v->a[7003] = sym_word;
	v->a[7004] = actions(242);
	v->a[7005] = 1;
	v->a[7006] = anon_sym_BANG;
	v->a[7007] = state(136);
	v->a[7008] = 1;
	v->a[7009] = aux_sym__statements_repeat1;
	v->a[7010] = state(188);
	v->a[7011] = 1;
	v->a[7012] = sym_command_name;
	v->a[7013] = state(297);
	v->a[7014] = 1;
	v->a[7015] = sym_variable_assignment;
	v->a[7016] = state(650);
	v->a[7017] = 1;
	v->a[7018] = sym_concatenation;
	v->a[7019] = state(749);
	small_parse_table_351(v);
}

void	small_parse_table_351(t_small_parse_table_array *v)
{
	v->a[7020] = 1;
	v->a[7021] = aux_sym_command_repeat1;
	v->a[7022] = state(795);
	v->a[7023] = 1;
	v->a[7024] = sym_file_redirect;
	v->a[7025] = state(1154);
	v->a[7026] = 1;
	v->a[7027] = sym_pipeline;
	v->a[7028] = state(1240);
	v->a[7029] = 1;
	v->a[7030] = aux_sym_redirected_statement_repeat2;
	v->a[7031] = state(2119);
	v->a[7032] = 1;
	v->a[7033] = sym__statement_not_pipeline;
	v->a[7034] = state(2129);
	v->a[7035] = 1;
	v->a[7036] = sym__statements;
	v->a[7037] = actions(11);
	v->a[7038] = 2;
	v->a[7039] = anon_sym_while;
	small_parse_table_352(v);
}

void	small_parse_table_352(t_small_parse_table_array *v)
{
	v->a[7040] = anon_sym_until;
	v->a[7041] = actions(57);
	v->a[7042] = 2;
	v->a[7043] = anon_sym_LT_AMP_DASH;
	v->a[7044] = anon_sym_GT_AMP_DASH;
	v->a[7045] = actions(65);
	v->a[7046] = 2;
	v->a[7047] = sym_raw_string;
	v->a[7048] = sym_number;
	v->a[7049] = state(443);
	v->a[7050] = 5;
	v->a[7051] = sym_arithmetic_expansion;
	v->a[7052] = sym_string;
	v->a[7053] = sym_simple_expansion;
	v->a[7054] = sym_expansion;
	v->a[7055] = sym_command_substitution;
	v->a[7056] = actions(55);
	v->a[7057] = 6;
	v->a[7058] = anon_sym_LT;
	v->a[7059] = anon_sym_GT;
	small_parse_table_353(v);
}

void	small_parse_table_353(t_small_parse_table_array *v)
{
	v->a[7060] = anon_sym_GT_GT;
	v->a[7061] = anon_sym_LT_AMP;
	v->a[7062] = anon_sym_GT_AMP;
	v->a[7063] = anon_sym_GT_PIPE;
	v->a[7064] = state(1030);
	v->a[7065] = 12;
	v->a[7066] = sym_redirected_statement;
	v->a[7067] = sym_for_statement;
	v->a[7068] = sym_while_statement;
	v->a[7069] = sym_if_statement;
	v->a[7070] = sym_case_statement;
	v->a[7071] = sym_function_definition;
	v->a[7072] = sym_compound_statement;
	v->a[7073] = sym_subshell;
	v->a[7074] = sym_list;
	v->a[7075] = sym_negated_command;
	v->a[7076] = sym_command;
	v->a[7077] = sym__variable_assignments;
	v->a[7078] = 32;
	v->a[7079] = actions(3);
	small_parse_table_354(v);
}

void	small_parse_table_354(t_small_parse_table_array *v)
{
	v->a[7080] = 1;
	v->a[7081] = sym_comment;
	v->a[7082] = actions(9);
	v->a[7083] = 1;
	v->a[7084] = anon_sym_for;
	v->a[7085] = actions(13);
	v->a[7086] = 1;
	v->a[7087] = anon_sym_if;
	v->a[7088] = actions(15);
	v->a[7089] = 1;
	v->a[7090] = anon_sym_case;
	v->a[7091] = actions(17);
	v->a[7092] = 1;
	v->a[7093] = anon_sym_LPAREN;
	v->a[7094] = actions(19);
	v->a[7095] = 1;
	v->a[7096] = anon_sym_LBRACE;
	v->a[7097] = actions(45);
	v->a[7098] = 1;
	v->a[7099] = sym_word;
	small_parse_table_355(v);
}

/* EOF small_parse_table_70.c */
