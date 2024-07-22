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
	v->a[7000] = sym_command_substitution;
	v->a[7001] = actions(215);
	v->a[7002] = 7;
	v->a[7003] = anon_sym_LT;
	v->a[7004] = anon_sym_GT;
	v->a[7005] = anon_sym_GT_GT;
	v->a[7006] = anon_sym_LT_AMP;
	v->a[7007] = anon_sym_GT_AMP;
	v->a[7008] = anon_sym_GT_PIPE;
	v->a[7009] = anon_sym_LT_GT;
	v->a[7010] = state(989);
	v->a[7011] = 12;
	v->a[7012] = sym_redirected_statement;
	v->a[7013] = sym_for_statement;
	v->a[7014] = sym_while_statement;
	v->a[7015] = sym_if_statement;
	v->a[7016] = sym_case_statement;
	v->a[7017] = sym_function_definition;
	v->a[7018] = sym_compound_statement;
	v->a[7019] = sym_subshell;
	small_parse_table_351(v);
}

void	small_parse_table_351(t_small_parse_table_array *v)
{
	v->a[7020] = sym_list;
	v->a[7021] = sym_negated_command;
	v->a[7022] = sym_command;
	v->a[7023] = sym__variable_assignments;
	v->a[7024] = 31;
	v->a[7025] = actions(3);
	v->a[7026] = 1;
	v->a[7027] = sym_comment;
	v->a[7028] = actions(9);
	v->a[7029] = 1;
	v->a[7030] = anon_sym_for;
	v->a[7031] = actions(13);
	v->a[7032] = 1;
	v->a[7033] = anon_sym_if;
	v->a[7034] = actions(15);
	v->a[7035] = 1;
	v->a[7036] = anon_sym_case;
	v->a[7037] = actions(17);
	v->a[7038] = 1;
	v->a[7039] = anon_sym_LPAREN;
	small_parse_table_352(v);
}

void	small_parse_table_352(t_small_parse_table_array *v)
{
	v->a[7040] = actions(19);
	v->a[7041] = 1;
	v->a[7042] = anon_sym_LBRACE;
	v->a[7043] = actions(55);
	v->a[7044] = 1;
	v->a[7045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7046] = actions(57);
	v->a[7047] = 1;
	v->a[7048] = anon_sym_DOLLAR;
	v->a[7049] = actions(59);
	v->a[7050] = 1;
	v->a[7051] = anon_sym_DQUOTE;
	v->a[7052] = actions(63);
	v->a[7053] = 1;
	v->a[7054] = anon_sym_DOLLAR_LBRACE;
	v->a[7055] = actions(65);
	v->a[7056] = 1;
	v->a[7057] = anon_sym_DOLLAR_LPAREN;
	v->a[7058] = actions(67);
	v->a[7059] = 1;
	small_parse_table_353(v);
}

void	small_parse_table_353(t_small_parse_table_array *v)
{
	v->a[7060] = anon_sym_BQUOTE;
	v->a[7061] = actions(69);
	v->a[7062] = 1;
	v->a[7063] = sym_file_descriptor;
	v->a[7064] = actions(71);
	v->a[7065] = 1;
	v->a[7066] = sym_variable_name;
	v->a[7067] = actions(223);
	v->a[7068] = 1;
	v->a[7069] = sym_word;
	v->a[7070] = actions(225);
	v->a[7071] = 1;
	v->a[7072] = anon_sym_BANG;
	v->a[7073] = state(129);
	v->a[7074] = 1;
	v->a[7075] = aux_sym__statements_repeat1;
	v->a[7076] = state(178);
	v->a[7077] = 1;
	v->a[7078] = sym_command_name;
	v->a[7079] = state(339);
	small_parse_table_354(v);
}

void	small_parse_table_354(t_small_parse_table_array *v)
{
	v->a[7080] = 1;
	v->a[7081] = sym_variable_assignment;
	v->a[7082] = state(585);
	v->a[7083] = 1;
	v->a[7084] = aux_sym_command_repeat1;
	v->a[7085] = state(661);
	v->a[7086] = 1;
	v->a[7087] = sym_concatenation;
	v->a[7088] = state(774);
	v->a[7089] = 1;
	v->a[7090] = sym_file_redirect;
	v->a[7091] = state(1089);
	v->a[7092] = 1;
	v->a[7093] = sym_pipeline;
	v->a[7094] = state(1149);
	v->a[7095] = 1;
	v->a[7096] = aux_sym_redirected_statement_repeat2;
	v->a[7097] = state(1922);
	v->a[7098] = 1;
	v->a[7099] = sym__statement_not_pipeline;
	small_parse_table_355(v);
}

/* EOF small_parse_table_70.c */
