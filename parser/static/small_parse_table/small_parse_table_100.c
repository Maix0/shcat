/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_100.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_500(t_small_parse_table_array *v)
{
	v->a[10000] = anon_sym_BANG;
	v->a[10001] = actions(230);
	v->a[10002] = 1;
	v->a[10003] = sym_file_descriptor;
	v->a[10004] = actions(232);
	v->a[10005] = 1;
	v->a[10006] = sym_variable_name;
	v->a[10007] = state(133);
	v->a[10008] = 1;
	v->a[10009] = aux_sym__statements_repeat1;
	v->a[10010] = state(180);
	v->a[10011] = 1;
	v->a[10012] = sym_command_name;
	v->a[10013] = state(231);
	v->a[10014] = 1;
	v->a[10015] = sym_variable_assignment;
	v->a[10016] = state(650);
	v->a[10017] = 1;
	v->a[10018] = sym_concatenation;
	v->a[10019] = state(710);
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = 1;
	v->a[10021] = aux_sym_command_repeat1;
	v->a[10022] = state(761);
	v->a[10023] = 1;
	v->a[10024] = sym_file_redirect;
	v->a[10025] = state(1095);
	v->a[10026] = 1;
	v->a[10027] = sym_pipeline;
	v->a[10028] = state(1282);
	v->a[10029] = 1;
	v->a[10030] = aux_sym_redirected_statement_repeat2;
	v->a[10031] = state(2127);
	v->a[10032] = 1;
	v->a[10033] = sym__statement_not_pipeline;
	v->a[10034] = state(2238);
	v->a[10035] = 1;
	v->a[10036] = sym__statements;
	v->a[10037] = actions(11);
	v->a[10038] = 2;
	v->a[10039] = anon_sym_while;
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = anon_sym_until;
	v->a[10041] = actions(226);
	v->a[10042] = 2;
	v->a[10043] = anon_sym_LT_AMP_DASH;
	v->a[10044] = anon_sym_GT_AMP_DASH;
	v->a[10045] = actions(228);
	v->a[10046] = 2;
	v->a[10047] = sym_raw_string;
	v->a[10048] = sym_number;
	v->a[10049] = state(382);
	v->a[10050] = 5;
	v->a[10051] = sym_arithmetic_expansion;
	v->a[10052] = sym_string;
	v->a[10053] = sym_simple_expansion;
	v->a[10054] = sym_expansion;
	v->a[10055] = sym_command_substitution;
	v->a[10056] = actions(224);
	v->a[10057] = 6;
	v->a[10058] = anon_sym_LT;
	v->a[10059] = anon_sym_GT;
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = anon_sym_GT_GT;
	v->a[10061] = anon_sym_LT_AMP;
	v->a[10062] = anon_sym_GT_AMP;
	v->a[10063] = anon_sym_GT_PIPE;
	v->a[10064] = state(1087);
	v->a[10065] = 12;
	v->a[10066] = sym_redirected_statement;
	v->a[10067] = sym_for_statement;
	v->a[10068] = sym_while_statement;
	v->a[10069] = sym_if_statement;
	v->a[10070] = sym_case_statement;
	v->a[10071] = sym_function_definition;
	v->a[10072] = sym_compound_statement;
	v->a[10073] = sym_subshell;
	v->a[10074] = sym_list;
	v->a[10075] = sym_negated_command;
	v->a[10076] = sym_command;
	v->a[10077] = sym__variable_assignments;
	v->a[10078] = 32;
	v->a[10079] = actions(3);
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = 1;
	v->a[10081] = sym_comment;
	v->a[10082] = actions(9);
	v->a[10083] = 1;
	v->a[10084] = anon_sym_for;
	v->a[10085] = actions(13);
	v->a[10086] = 1;
	v->a[10087] = anon_sym_if;
	v->a[10088] = actions(15);
	v->a[10089] = 1;
	v->a[10090] = anon_sym_case;
	v->a[10091] = actions(17);
	v->a[10092] = 1;
	v->a[10093] = anon_sym_LPAREN;
	v->a[10094] = actions(19);
	v->a[10095] = 1;
	v->a[10096] = anon_sym_LBRACE;
	v->a[10097] = actions(59);
	v->a[10098] = 1;
	v->a[10099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
