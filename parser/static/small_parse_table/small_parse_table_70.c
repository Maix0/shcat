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
	v->a[7000] = anon_sym_LT;
	v->a[7001] = anon_sym_GT;
	v->a[7002] = anon_sym_GT_GT;
	v->a[7003] = anon_sym_AMP_GT;
	v->a[7004] = anon_sym_AMP_GT_GT;
	v->a[7005] = anon_sym_LT_AMP;
	v->a[7006] = anon_sym_GT_AMP;
	v->a[7007] = anon_sym_GT_PIPE;
	v->a[7008] = state(1071);
	v->a[7009] = 12;
	v->a[7010] = sym_redirected_statement;
	v->a[7011] = sym_for_statement;
	v->a[7012] = sym_while_statement;
	v->a[7013] = sym_if_statement;
	v->a[7014] = sym_case_statement;
	v->a[7015] = sym_function_definition;
	v->a[7016] = sym_compound_statement;
	v->a[7017] = sym_subshell;
	v->a[7018] = sym_list;
	v->a[7019] = sym_negated_command;
	small_parse_table_351(v);
}

void	small_parse_table_351(t_small_parse_table_array *v)
{
	v->a[7020] = sym_command;
	v->a[7021] = sym_variable_assignments;
	v->a[7022] = 34;
	v->a[7023] = actions(3);
	v->a[7024] = 1;
	v->a[7025] = sym_comment;
	v->a[7026] = actions(9);
	v->a[7027] = 1;
	v->a[7028] = anon_sym_for;
	v->a[7029] = actions(13);
	v->a[7030] = 1;
	v->a[7031] = anon_sym_if;
	v->a[7032] = actions(15);
	v->a[7033] = 1;
	v->a[7034] = anon_sym_case;
	v->a[7035] = actions(17);
	v->a[7036] = 1;
	v->a[7037] = anon_sym_LPAREN;
	v->a[7038] = actions(19);
	v->a[7039] = 1;
	small_parse_table_352(v);
}

void	small_parse_table_352(t_small_parse_table_array *v)
{
	v->a[7040] = anon_sym_LBRACE;
	v->a[7041] = actions(63);
	v->a[7042] = 1;
	v->a[7043] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7044] = actions(65);
	v->a[7045] = 1;
	v->a[7046] = anon_sym_DOLLAR;
	v->a[7047] = actions(67);
	v->a[7048] = 1;
	v->a[7049] = anon_sym_DQUOTE;
	v->a[7050] = actions(71);
	v->a[7051] = 1;
	v->a[7052] = aux_sym_number_token1;
	v->a[7053] = actions(73);
	v->a[7054] = 1;
	v->a[7055] = aux_sym_number_token2;
	v->a[7056] = actions(75);
	v->a[7057] = 1;
	v->a[7058] = anon_sym_DOLLAR_LBRACE;
	v->a[7059] = actions(77);
	small_parse_table_353(v);
}

void	small_parse_table_353(t_small_parse_table_array *v)
{
	v->a[7060] = 1;
	v->a[7061] = anon_sym_DOLLAR_LPAREN;
	v->a[7062] = actions(79);
	v->a[7063] = 1;
	v->a[7064] = anon_sym_BQUOTE;
	v->a[7065] = actions(248);
	v->a[7066] = 1;
	v->a[7067] = sym_word;
	v->a[7068] = actions(250);
	v->a[7069] = 1;
	v->a[7070] = anon_sym_BANG;
	v->a[7071] = actions(256);
	v->a[7072] = 1;
	v->a[7073] = sym_raw_string;
	v->a[7074] = actions(258);
	v->a[7075] = 1;
	v->a[7076] = sym_file_descriptor;
	v->a[7077] = actions(260);
	v->a[7078] = 1;
	v->a[7079] = sym_variable_name;
	small_parse_table_354(v);
}

void	small_parse_table_354(t_small_parse_table_array *v)
{
	v->a[7080] = state(141);
	v->a[7081] = 1;
	v->a[7082] = aux_sym__statements_repeat1;
	v->a[7083] = state(175);
	v->a[7084] = 1;
	v->a[7085] = sym_command_name;
	v->a[7086] = state(278);
	v->a[7087] = 1;
	v->a[7088] = sym_variable_assignment;
	v->a[7089] = state(567);
	v->a[7090] = 1;
	v->a[7091] = aux_sym_command_repeat1;
	v->a[7092] = state(582);
	v->a[7093] = 1;
	v->a[7094] = sym_concatenation;
	v->a[7095] = state(718);
	v->a[7096] = 1;
	v->a[7097] = sym_file_redirect;
	v->a[7098] = state(1100);
	v->a[7099] = 1;
	small_parse_table_355(v);
}

/* EOF small_parse_table_70.c */
