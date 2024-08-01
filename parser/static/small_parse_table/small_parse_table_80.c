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
	v->a[8000] = 1;
	v->a[8001] = sym_file_redirect;
	v->a[8002] = state(555);
	v->a[8003] = 1;
	v->a[8004] = sym_concatenation;
	v->a[8005] = state(1059);
	v->a[8006] = 1;
	v->a[8007] = sym_pipeline;
	v->a[8008] = state(1126);
	v->a[8009] = 1;
	v->a[8010] = aux_sym_redirected_statement_repeat2;
	v->a[8011] = state(1561);
	v->a[8012] = 1;
	v->a[8013] = sym__statement_not_pipeline;
	v->a[8014] = actions(11);
	v->a[8015] = 2;
	v->a[8016] = anon_sym_while;
	v->a[8017] = anon_sym_until;
	v->a[8018] = actions(59);
	v->a[8019] = 2;
	small_parse_table_401(v);
}

void	small_parse_table_401(t_small_parse_table_array *v)
{
	v->a[8020] = sym_raw_string;
	v->a[8021] = sym_number;
	v->a[8022] = actions(51);
	v->a[8023] = 3;
	v->a[8024] = anon_sym_LT;
	v->a[8025] = anon_sym_GT;
	v->a[8026] = anon_sym_GT_GT;
	v->a[8027] = state(401);
	v->a[8028] = 5;
	v->a[8029] = sym_arithmetic_expansion;
	v->a[8030] = sym_string;
	v->a[8031] = sym_simple_expansion;
	v->a[8032] = sym_expansion;
	v->a[8033] = sym_command_substitution;
	v->a[8034] = state(949);
	v->a[8035] = 12;
	v->a[8036] = sym_redirected_statement;
	v->a[8037] = sym_for_statement;
	v->a[8038] = sym_while_statement;
	v->a[8039] = sym_if_statement;
	small_parse_table_402(v);
}

void	small_parse_table_402(t_small_parse_table_array *v)
{
	v->a[8040] = sym_case_statement;
	v->a[8041] = sym_function_definition;
	v->a[8042] = sym_compound_statement;
	v->a[8043] = sym_subshell;
	v->a[8044] = sym_list;
	v->a[8045] = sym_negated_command;
	v->a[8046] = sym_command;
	v->a[8047] = sym__variable_assignments;
	v->a[8048] = 30;
	v->a[8049] = actions(3);
	v->a[8050] = 1;
	v->a[8051] = sym_comment;
	v->a[8052] = actions(9);
	v->a[8053] = 1;
	v->a[8054] = anon_sym_for;
	v->a[8055] = actions(13);
	v->a[8056] = 1;
	v->a[8057] = anon_sym_if;
	v->a[8058] = actions(15);
	v->a[8059] = 1;
	small_parse_table_403(v);
}

void	small_parse_table_403(t_small_parse_table_array *v)
{
	v->a[8060] = anon_sym_case;
	v->a[8061] = actions(17);
	v->a[8062] = 1;
	v->a[8063] = anon_sym_LPAREN;
	v->a[8064] = actions(19);
	v->a[8065] = 1;
	v->a[8066] = anon_sym_LBRACE;
	v->a[8067] = actions(53);
	v->a[8068] = 1;
	v->a[8069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8070] = actions(55);
	v->a[8071] = 1;
	v->a[8072] = anon_sym_DOLLAR;
	v->a[8073] = actions(57);
	v->a[8074] = 1;
	v->a[8075] = anon_sym_DQUOTE;
	v->a[8076] = actions(61);
	v->a[8077] = 1;
	v->a[8078] = anon_sym_DOLLAR_LBRACE;
	v->a[8079] = actions(63);
	small_parse_table_404(v);
}

void	small_parse_table_404(t_small_parse_table_array *v)
{
	v->a[8080] = 1;
	v->a[8081] = anon_sym_DOLLAR_LPAREN;
	v->a[8082] = actions(65);
	v->a[8083] = 1;
	v->a[8084] = anon_sym_BQUOTE;
	v->a[8085] = actions(208);
	v->a[8086] = 1;
	v->a[8087] = sym_word;
	v->a[8088] = actions(210);
	v->a[8089] = 1;
	v->a[8090] = anon_sym_BANG;
	v->a[8091] = actions(216);
	v->a[8092] = 1;
	v->a[8093] = sym_variable_name;
	v->a[8094] = state(112);
	v->a[8095] = 1;
	v->a[8096] = aux_sym__statements_repeat1;
	v->a[8097] = state(158);
	v->a[8098] = 1;
	v->a[8099] = sym_command_name;
	small_parse_table_405(v);
}

/* EOF small_parse_table_80.c */
