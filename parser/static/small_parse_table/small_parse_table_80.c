/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_80.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_400(t_small_parse_table_array *v)
{
	v->a[8000] = actions(175);
	v->a[8001] = 1;
	v->a[8002] = anon_sym_DOLLAR_LPAREN;
	v->a[8003] = actions(178);
	v->a[8004] = 1;
	v->a[8005] = anon_sym_BQUOTE;
	v->a[8006] = actions(181);
	v->a[8007] = 1;
	v->a[8008] = sym_file_descriptor;
	v->a[8009] = actions(184);
	v->a[8010] = 1;
	v->a[8011] = sym_variable_name;
	v->a[8012] = state(68);
	v->a[8013] = 1;
	v->a[8014] = aux_sym__terminated_statement;
	v->a[8015] = state(183);
	v->a[8016] = 1;
	v->a[8017] = sym_command_name;
	v->a[8018] = state(322);
	v->a[8019] = 1;
	small_parse_table_401(v);
}

void	small_parse_table_401(t_small_parse_table_array *v)
{
	v->a[8020] = sym_variable_assignment;
	v->a[8021] = state(655);
	v->a[8022] = 1;
	v->a[8023] = aux_sym_command_repeat1;
	v->a[8024] = state(661);
	v->a[8025] = 1;
	v->a[8026] = sym_concatenation;
	v->a[8027] = state(665);
	v->a[8028] = 1;
	v->a[8029] = sym_file_redirect;
	v->a[8030] = state(1167);
	v->a[8031] = 1;
	v->a[8032] = sym_pipeline;
	v->a[8033] = state(1198);
	v->a[8034] = 1;
	v->a[8035] = aux_sym_redirected_statement_repeat2;
	v->a[8036] = state(1901);
	v->a[8037] = 1;
	v->a[8038] = sym__statement_not_pipeline;
	v->a[8039] = actions(137);
	small_parse_table_402(v);
}

void	small_parse_table_402(t_small_parse_table_array *v)
{
	v->a[8040] = 2;
	v->a[8041] = anon_sym_while;
	v->a[8042] = anon_sym_until;
	v->a[8043] = actions(169);
	v->a[8044] = 2;
	v->a[8045] = sym_raw_string;
	v->a[8046] = sym_number;
	v->a[8047] = state(455);
	v->a[8048] = 5;
	v->a[8049] = sym_arithmetic_expansion;
	v->a[8050] = sym_string;
	v->a[8051] = sym_simple_expansion;
	v->a[8052] = sym_expansion;
	v->a[8053] = sym_command_substitution;
	v->a[8054] = actions(157);
	v->a[8055] = 7;
	v->a[8056] = anon_sym_LT;
	v->a[8057] = anon_sym_GT;
	v->a[8058] = anon_sym_GT_GT;
	v->a[8059] = anon_sym_LT_AMP;
	small_parse_table_403(v);
}

void	small_parse_table_403(t_small_parse_table_array *v)
{
	v->a[8060] = anon_sym_GT_AMP;
	v->a[8061] = anon_sym_GT_PIPE;
	v->a[8062] = anon_sym_LT_GT;
	v->a[8063] = state(1026);
	v->a[8064] = 12;
	v->a[8065] = sym_redirected_statement;
	v->a[8066] = sym_for_statement;
	v->a[8067] = sym_while_statement;
	v->a[8068] = sym_if_statement;
	v->a[8069] = sym_case_statement;
	v->a[8070] = sym_function_definition;
	v->a[8071] = sym_compound_statement;
	v->a[8072] = sym_subshell;
	v->a[8073] = sym_list;
	v->a[8074] = sym_negated_command;
	v->a[8075] = sym_command;
	v->a[8076] = sym__variable_assignments;
	v->a[8077] = 31;
	v->a[8078] = actions(3);
	v->a[8079] = 1;
	small_parse_table_404(v);
}

void	small_parse_table_404(t_small_parse_table_array *v)
{
	v->a[8080] = sym_comment;
	v->a[8081] = actions(9);
	v->a[8082] = 1;
	v->a[8083] = anon_sym_for;
	v->a[8084] = actions(13);
	v->a[8085] = 1;
	v->a[8086] = anon_sym_if;
	v->a[8087] = actions(15);
	v->a[8088] = 1;
	v->a[8089] = anon_sym_case;
	v->a[8090] = actions(17);
	v->a[8091] = 1;
	v->a[8092] = anon_sym_LPAREN;
	v->a[8093] = actions(19);
	v->a[8094] = 1;
	v->a[8095] = anon_sym_LBRACE;
	v->a[8096] = actions(55);
	v->a[8097] = 1;
	v->a[8098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8099] = actions(57);
	small_parse_table_405(v);
}

/* EOF small_parse_table_80.c */
