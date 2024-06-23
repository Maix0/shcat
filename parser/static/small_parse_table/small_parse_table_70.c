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
	v->a[7000] = state(189);
	v->a[7001] = 1;
	v->a[7002] = sym_command_name;
	v->a[7003] = state(286);
	v->a[7004] = 1;
	v->a[7005] = sym_variable_assignment;
	v->a[7006] = state(647);
	v->a[7007] = 1;
	v->a[7008] = sym_concatenation;
	v->a[7009] = state(746);
	v->a[7010] = 1;
	v->a[7011] = aux_sym_command_repeat1;
	v->a[7012] = state(905);
	v->a[7013] = 1;
	v->a[7014] = sym_file_redirect;
	v->a[7015] = state(1422);
	v->a[7016] = 1;
	v->a[7017] = sym_pipeline;
	v->a[7018] = state(1429);
	v->a[7019] = 1;
	small_parse_table_351(v);
}

void	small_parse_table_351(t_small_parse_table_array *v)
{
	v->a[7020] = aux_sym_redirected_statement_repeat2;
	v->a[7021] = state(2271);
	v->a[7022] = 1;
	v->a[7023] = sym__statement_not_pipeline;
	v->a[7024] = state(2333);
	v->a[7025] = 1;
	v->a[7026] = sym__statements;
	v->a[7027] = actions(11);
	v->a[7028] = 2;
	v->a[7029] = anon_sym_while;
	v->a[7030] = anon_sym_until;
	v->a[7031] = actions(57);
	v->a[7032] = 2;
	v->a[7033] = anon_sym_LT_AMP_DASH;
	v->a[7034] = anon_sym_GT_AMP_DASH;
	v->a[7035] = actions(65);
	v->a[7036] = 2;
	v->a[7037] = sym_raw_string;
	v->a[7038] = sym_number;
	v->a[7039] = state(394);
	small_parse_table_352(v);
}

void	small_parse_table_352(t_small_parse_table_array *v)
{
	v->a[7040] = 5;
	v->a[7041] = sym_arithmetic_expansion;
	v->a[7042] = sym_string;
	v->a[7043] = sym_simple_expansion;
	v->a[7044] = sym_expansion;
	v->a[7045] = sym_command_substitution;
	v->a[7046] = actions(55);
	v->a[7047] = 8;
	v->a[7048] = anon_sym_LT;
	v->a[7049] = anon_sym_GT;
	v->a[7050] = anon_sym_GT_GT;
	v->a[7051] = anon_sym_AMP_GT;
	v->a[7052] = anon_sym_AMP_GT_GT;
	v->a[7053] = anon_sym_LT_AMP;
	v->a[7054] = anon_sym_GT_AMP;
	v->a[7055] = anon_sym_GT_PIPE;
	v->a[7056] = state(1211);
	v->a[7057] = 12;
	v->a[7058] = sym_redirected_statement;
	v->a[7059] = sym_for_statement;
	small_parse_table_353(v);
}

void	small_parse_table_353(t_small_parse_table_array *v)
{
	v->a[7060] = sym_while_statement;
	v->a[7061] = sym_if_statement;
	v->a[7062] = sym_case_statement;
	v->a[7063] = sym_function_definition;
	v->a[7064] = sym_compound_statement;
	v->a[7065] = sym_subshell;
	v->a[7066] = sym_list;
	v->a[7067] = sym_negated_command;
	v->a[7068] = sym_command;
	v->a[7069] = sym__variable_assignments;
	v->a[7070] = 32;
	v->a[7071] = actions(3);
	v->a[7072] = 1;
	v->a[7073] = sym_comment;
	v->a[7074] = actions(9);
	v->a[7075] = 1;
	v->a[7076] = anon_sym_for;
	v->a[7077] = actions(13);
	v->a[7078] = 1;
	v->a[7079] = anon_sym_if;
	small_parse_table_354(v);
}

void	small_parse_table_354(t_small_parse_table_array *v)
{
	v->a[7080] = actions(15);
	v->a[7081] = 1;
	v->a[7082] = anon_sym_case;
	v->a[7083] = actions(17);
	v->a[7084] = 1;
	v->a[7085] = anon_sym_LPAREN;
	v->a[7086] = actions(19);
	v->a[7087] = 1;
	v->a[7088] = anon_sym_LBRACE;
	v->a[7089] = actions(59);
	v->a[7090] = 1;
	v->a[7091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7092] = actions(61);
	v->a[7093] = 1;
	v->a[7094] = anon_sym_DOLLAR;
	v->a[7095] = actions(63);
	v->a[7096] = 1;
	v->a[7097] = anon_sym_DQUOTE;
	v->a[7098] = actions(67);
	v->a[7099] = 1;
	small_parse_table_355(v);
}

/* EOF small_parse_table_70.c */
