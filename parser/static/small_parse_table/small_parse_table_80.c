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
	v->a[8000] = state(2276);
	v->a[8001] = 1;
	v->a[8002] = sym__statements;
	v->a[8003] = actions(11);
	v->a[8004] = 2;
	v->a[8005] = anon_sym_while;
	v->a[8006] = anon_sym_until;
	v->a[8007] = actions(57);
	v->a[8008] = 2;
	v->a[8009] = anon_sym_LT_AMP_DASH;
	v->a[8010] = anon_sym_GT_AMP_DASH;
	v->a[8011] = actions(65);
	v->a[8012] = 2;
	v->a[8013] = sym_raw_string;
	v->a[8014] = sym_number;
	v->a[8015] = state(394);
	v->a[8016] = 5;
	v->a[8017] = sym_arithmetic_expansion;
	v->a[8018] = sym_string;
	v->a[8019] = sym_simple_expansion;
	small_parse_table_401(v);
}

void	small_parse_table_401(t_small_parse_table_array *v)
{
	v->a[8020] = sym_expansion;
	v->a[8021] = sym_command_substitution;
	v->a[8022] = actions(55);
	v->a[8023] = 8;
	v->a[8024] = anon_sym_LT;
	v->a[8025] = anon_sym_GT;
	v->a[8026] = anon_sym_GT_GT;
	v->a[8027] = anon_sym_AMP_GT;
	v->a[8028] = anon_sym_AMP_GT_GT;
	v->a[8029] = anon_sym_LT_AMP;
	v->a[8030] = anon_sym_GT_AMP;
	v->a[8031] = anon_sym_GT_PIPE;
	v->a[8032] = state(1211);
	v->a[8033] = 12;
	v->a[8034] = sym_redirected_statement;
	v->a[8035] = sym_for_statement;
	v->a[8036] = sym_while_statement;
	v->a[8037] = sym_if_statement;
	v->a[8038] = sym_case_statement;
	v->a[8039] = sym_function_definition;
	small_parse_table_402(v);
}

void	small_parse_table_402(t_small_parse_table_array *v)
{
	v->a[8040] = sym_compound_statement;
	v->a[8041] = sym_subshell;
	v->a[8042] = sym_list;
	v->a[8043] = sym_negated_command;
	v->a[8044] = sym_command;
	v->a[8045] = sym__variable_assignments;
	v->a[8046] = 32;
	v->a[8047] = actions(3);
	v->a[8048] = 1;
	v->a[8049] = sym_comment;
	v->a[8050] = actions(9);
	v->a[8051] = 1;
	v->a[8052] = anon_sym_for;
	v->a[8053] = actions(13);
	v->a[8054] = 1;
	v->a[8055] = anon_sym_if;
	v->a[8056] = actions(15);
	v->a[8057] = 1;
	v->a[8058] = anon_sym_case;
	v->a[8059] = actions(17);
	small_parse_table_403(v);
}

void	small_parse_table_403(t_small_parse_table_array *v)
{
	v->a[8060] = 1;
	v->a[8061] = anon_sym_LPAREN;
	v->a[8062] = actions(19);
	v->a[8063] = 1;
	v->a[8064] = anon_sym_LBRACE;
	v->a[8065] = actions(59);
	v->a[8066] = 1;
	v->a[8067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8068] = actions(61);
	v->a[8069] = 1;
	v->a[8070] = anon_sym_DOLLAR;
	v->a[8071] = actions(63);
	v->a[8072] = 1;
	v->a[8073] = anon_sym_DQUOTE;
	v->a[8074] = actions(67);
	v->a[8075] = 1;
	v->a[8076] = anon_sym_DOLLAR_LBRACE;
	v->a[8077] = actions(69);
	v->a[8078] = 1;
	v->a[8079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_404(v);
}

void	small_parse_table_404(t_small_parse_table_array *v)
{
	v->a[8080] = actions(71);
	v->a[8081] = 1;
	v->a[8082] = anon_sym_BQUOTE;
	v->a[8083] = actions(220);
	v->a[8084] = 1;
	v->a[8085] = sym_word;
	v->a[8086] = actions(222);
	v->a[8087] = 1;
	v->a[8088] = anon_sym_BANG;
	v->a[8089] = actions(230);
	v->a[8090] = 1;
	v->a[8091] = sym_file_descriptor;
	v->a[8092] = actions(232);
	v->a[8093] = 1;
	v->a[8094] = sym_variable_name;
	v->a[8095] = state(126);
	v->a[8096] = 1;
	v->a[8097] = aux_sym__statements_repeat1;
	v->a[8098] = state(184);
	v->a[8099] = 1;
	small_parse_table_405(v);
}

/* EOF small_parse_table_80.c */
