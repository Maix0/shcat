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
	v->a[8000] = anon_sym_until;
	v->a[8001] = actions(226);
	v->a[8002] = 2;
	v->a[8003] = anon_sym_LT_AMP_DASH;
	v->a[8004] = anon_sym_GT_AMP_DASH;
	v->a[8005] = actions(228);
	v->a[8006] = 2;
	v->a[8007] = sym_raw_string;
	v->a[8008] = sym_number;
	v->a[8009] = state(382);
	v->a[8010] = 5;
	v->a[8011] = sym_arithmetic_expansion;
	v->a[8012] = sym_string;
	v->a[8013] = sym_simple_expansion;
	v->a[8014] = sym_expansion;
	v->a[8015] = sym_command_substitution;
	v->a[8016] = actions(224);
	v->a[8017] = 6;
	v->a[8018] = anon_sym_LT;
	v->a[8019] = anon_sym_GT;
	small_parse_table_401(v);
}

void	small_parse_table_401(t_small_parse_table_array *v)
{
	v->a[8020] = anon_sym_GT_GT;
	v->a[8021] = anon_sym_LT_AMP;
	v->a[8022] = anon_sym_GT_AMP;
	v->a[8023] = anon_sym_GT_PIPE;
	v->a[8024] = state(1087);
	v->a[8025] = 12;
	v->a[8026] = sym_redirected_statement;
	v->a[8027] = sym_for_statement;
	v->a[8028] = sym_while_statement;
	v->a[8029] = sym_if_statement;
	v->a[8030] = sym_case_statement;
	v->a[8031] = sym_function_definition;
	v->a[8032] = sym_compound_statement;
	v->a[8033] = sym_subshell;
	v->a[8034] = sym_list;
	v->a[8035] = sym_negated_command;
	v->a[8036] = sym_command;
	v->a[8037] = sym__variable_assignments;
	v->a[8038] = 32;
	v->a[8039] = actions(3);
	small_parse_table_402(v);
}

void	small_parse_table_402(t_small_parse_table_array *v)
{
	v->a[8040] = 1;
	v->a[8041] = sym_comment;
	v->a[8042] = actions(9);
	v->a[8043] = 1;
	v->a[8044] = anon_sym_for;
	v->a[8045] = actions(13);
	v->a[8046] = 1;
	v->a[8047] = anon_sym_if;
	v->a[8048] = actions(15);
	v->a[8049] = 1;
	v->a[8050] = anon_sym_case;
	v->a[8051] = actions(17);
	v->a[8052] = 1;
	v->a[8053] = anon_sym_LPAREN;
	v->a[8054] = actions(19);
	v->a[8055] = 1;
	v->a[8056] = anon_sym_LBRACE;
	v->a[8057] = actions(45);
	v->a[8058] = 1;
	v->a[8059] = sym_word;
	small_parse_table_403(v);
}

void	small_parse_table_403(t_small_parse_table_array *v)
{
	v->a[8060] = actions(53);
	v->a[8061] = 1;
	v->a[8062] = anon_sym_BANG;
	v->a[8063] = actions(59);
	v->a[8064] = 1;
	v->a[8065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8066] = actions(61);
	v->a[8067] = 1;
	v->a[8068] = anon_sym_DOLLAR;
	v->a[8069] = actions(63);
	v->a[8070] = 1;
	v->a[8071] = anon_sym_DQUOTE;
	v->a[8072] = actions(67);
	v->a[8073] = 1;
	v->a[8074] = anon_sym_DOLLAR_LBRACE;
	v->a[8075] = actions(69);
	v->a[8076] = 1;
	v->a[8077] = anon_sym_DOLLAR_LPAREN;
	v->a[8078] = actions(71);
	v->a[8079] = 1;
	small_parse_table_404(v);
}

void	small_parse_table_404(t_small_parse_table_array *v)
{
	v->a[8080] = anon_sym_BQUOTE;
	v->a[8081] = actions(73);
	v->a[8082] = 1;
	v->a[8083] = sym_file_descriptor;
	v->a[8084] = actions(75);
	v->a[8085] = 1;
	v->a[8086] = sym_variable_name;
	v->a[8087] = actions(254);
	v->a[8088] = 1;
	v->a[8089] = anon_sym_done;
	v->a[8090] = state(73);
	v->a[8091] = 1;
	v->a[8092] = aux_sym__terminated_statement;
	v->a[8093] = state(189);
	v->a[8094] = 1;
	v->a[8095] = sym_command_name;
	v->a[8096] = state(291);
	v->a[8097] = 1;
	v->a[8098] = sym_variable_assignment;
	v->a[8099] = state(650);
	small_parse_table_405(v);
}

/* EOF small_parse_table_80.c */
