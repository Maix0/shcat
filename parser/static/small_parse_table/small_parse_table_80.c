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
	v->a[8000] = actions(15);
	v->a[8001] = 1;
	v->a[8002] = anon_sym_case;
	v->a[8003] = actions(17);
	v->a[8004] = 1;
	v->a[8005] = anon_sym_LPAREN;
	v->a[8006] = actions(19);
	v->a[8007] = 1;
	v->a[8008] = anon_sym_LBRACE;
	v->a[8009] = actions(53);
	v->a[8010] = 1;
	v->a[8011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8012] = actions(55);
	v->a[8013] = 1;
	v->a[8014] = anon_sym_DOLLAR;
	v->a[8015] = actions(57);
	v->a[8016] = 1;
	v->a[8017] = anon_sym_DQUOTE;
	v->a[8018] = actions(61);
	v->a[8019] = 1;
	small_parse_table_401(v);
}

void	small_parse_table_401(t_small_parse_table_array *v)
{
	v->a[8020] = anon_sym_DOLLAR_LBRACE;
	v->a[8021] = actions(63);
	v->a[8022] = 1;
	v->a[8023] = anon_sym_DOLLAR_LPAREN;
	v->a[8024] = actions(65);
	v->a[8025] = 1;
	v->a[8026] = anon_sym_BQUOTE;
	v->a[8027] = actions(206);
	v->a[8028] = 1;
	v->a[8029] = sym_word;
	v->a[8030] = actions(208);
	v->a[8031] = 1;
	v->a[8032] = anon_sym_BANG;
	v->a[8033] = actions(214);
	v->a[8034] = 1;
	v->a[8035] = sym_variable_name;
	v->a[8036] = state(106);
	v->a[8037] = 1;
	v->a[8038] = aux_sym__statements_repeat1;
	v->a[8039] = state(227);
	small_parse_table_402(v);
}

void	small_parse_table_402(t_small_parse_table_array *v)
{
	v->a[8040] = 1;
	v->a[8041] = sym_command_name;
	v->a[8042] = state(277);
	v->a[8043] = 1;
	v->a[8044] = sym_variable_assignment;
	v->a[8045] = state(506);
	v->a[8046] = 1;
	v->a[8047] = aux_sym_command_repeat1;
	v->a[8048] = state(557);
	v->a[8049] = 1;
	v->a[8050] = sym_file_redirect;
	v->a[8051] = state(602);
	v->a[8052] = 1;
	v->a[8053] = sym_concatenation;
	v->a[8054] = state(911);
	v->a[8055] = 1;
	v->a[8056] = sym_pipeline;
	v->a[8057] = state(1001);
	v->a[8058] = 1;
	v->a[8059] = aux_sym_redirected_statement_repeat2;
	small_parse_table_403(v);
}

void	small_parse_table_403(t_small_parse_table_array *v)
{
	v->a[8060] = state(1606);
	v->a[8061] = 1;
	v->a[8062] = sym__statement_not_pipeline;
	v->a[8063] = state(1646);
	v->a[8064] = 1;
	v->a[8065] = sym__statements;
	v->a[8066] = actions(11);
	v->a[8067] = 2;
	v->a[8068] = anon_sym_while;
	v->a[8069] = anon_sym_until;
	v->a[8070] = actions(212);
	v->a[8071] = 2;
	v->a[8072] = sym_raw_string;
	v->a[8073] = sym_number;
	v->a[8074] = state(327);
	v->a[8075] = 5;
	v->a[8076] = sym_arithmetic_expansion;
	v->a[8077] = sym_string;
	v->a[8078] = sym_simple_expansion;
	v->a[8079] = sym_expansion;
	small_parse_table_404(v);
}

void	small_parse_table_404(t_small_parse_table_array *v)
{
	v->a[8080] = sym_command_substitution;
	v->a[8081] = actions(210);
	v->a[8082] = 7;
	v->a[8083] = anon_sym_LT;
	v->a[8084] = anon_sym_GT;
	v->a[8085] = anon_sym_GT_GT;
	v->a[8086] = anon_sym_LT_AMP;
	v->a[8087] = anon_sym_GT_AMP;
	v->a[8088] = anon_sym_GT_PIPE;
	v->a[8089] = anon_sym_LT_GT;
	v->a[8090] = state(884);
	v->a[8091] = 12;
	v->a[8092] = sym_redirected_statement;
	v->a[8093] = sym_for_statement;
	v->a[8094] = sym_while_statement;
	v->a[8095] = sym_if_statement;
	v->a[8096] = sym_case_statement;
	v->a[8097] = sym_function_definition;
	v->a[8098] = sym_compound_statement;
	v->a[8099] = sym_subshell;
	small_parse_table_405(v);
}

/* EOF small_parse_table_80.c */
