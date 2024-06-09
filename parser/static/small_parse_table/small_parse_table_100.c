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
	v->a[10000] = actions(75);
	v->a[10001] = 1;
	v->a[10002] = anon_sym_DOLLAR_LBRACE;
	v->a[10003] = actions(77);
	v->a[10004] = 1;
	v->a[10005] = anon_sym_DOLLAR_LPAREN;
	v->a[10006] = actions(79);
	v->a[10007] = 1;
	v->a[10008] = anon_sym_BQUOTE;
	v->a[10009] = actions(248);
	v->a[10010] = 1;
	v->a[10011] = sym_word;
	v->a[10012] = actions(250);
	v->a[10013] = 1;
	v->a[10014] = anon_sym_BANG;
	v->a[10015] = actions(256);
	v->a[10016] = 1;
	v->a[10017] = sym_raw_string;
	v->a[10018] = actions(258);
	v->a[10019] = 1;
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = sym_file_descriptor;
	v->a[10021] = actions(260);
	v->a[10022] = 1;
	v->a[10023] = sym_variable_name;
	v->a[10024] = state(141);
	v->a[10025] = 1;
	v->a[10026] = aux_sym__statements_repeat1;
	v->a[10027] = state(175);
	v->a[10028] = 1;
	v->a[10029] = sym_command_name;
	v->a[10030] = state(278);
	v->a[10031] = 1;
	v->a[10032] = sym_variable_assignment;
	v->a[10033] = state(567);
	v->a[10034] = 1;
	v->a[10035] = aux_sym_command_repeat1;
	v->a[10036] = state(582);
	v->a[10037] = 1;
	v->a[10038] = sym_concatenation;
	v->a[10039] = state(737);
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = 1;
	v->a[10041] = sym_file_redirect;
	v->a[10042] = state(1100);
	v->a[10043] = 1;
	v->a[10044] = sym_pipeline;
	v->a[10045] = state(1196);
	v->a[10046] = 1;
	v->a[10047] = aux_sym_redirected_statement_repeat2;
	v->a[10048] = state(2037);
	v->a[10049] = 1;
	v->a[10050] = sym__statement_not_pipeline;
	v->a[10051] = state(2122);
	v->a[10052] = 1;
	v->a[10053] = sym__statements;
	v->a[10054] = actions(11);
	v->a[10055] = 2;
	v->a[10056] = anon_sym_while;
	v->a[10057] = anon_sym_until;
	v->a[10058] = actions(254);
	v->a[10059] = 2;
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = anon_sym_LT_AMP_DASH;
	v->a[10061] = anon_sym_GT_AMP_DASH;
	v->a[10062] = state(295);
	v->a[10063] = 6;
	v->a[10064] = sym_arithmetic_expansion;
	v->a[10065] = sym_string;
	v->a[10066] = sym_number;
	v->a[10067] = sym_simple_expansion;
	v->a[10068] = sym_expansion;
	v->a[10069] = sym_command_substitution;
	v->a[10070] = actions(252);
	v->a[10071] = 8;
	v->a[10072] = anon_sym_LT;
	v->a[10073] = anon_sym_GT;
	v->a[10074] = anon_sym_GT_GT;
	v->a[10075] = anon_sym_AMP_GT;
	v->a[10076] = anon_sym_AMP_GT_GT;
	v->a[10077] = anon_sym_LT_AMP;
	v->a[10078] = anon_sym_GT_AMP;
	v->a[10079] = anon_sym_GT_PIPE;
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = state(1031);
	v->a[10081] = 12;
	v->a[10082] = sym_redirected_statement;
	v->a[10083] = sym_for_statement;
	v->a[10084] = sym_while_statement;
	v->a[10085] = sym_if_statement;
	v->a[10086] = sym_case_statement;
	v->a[10087] = sym_function_definition;
	v->a[10088] = sym_compound_statement;
	v->a[10089] = sym_subshell;
	v->a[10090] = sym_list;
	v->a[10091] = sym_negated_command;
	v->a[10092] = sym_command;
	v->a[10093] = sym_variable_assignments;
	v->a[10094] = 34;
	v->a[10095] = actions(3);
	v->a[10096] = 1;
	v->a[10097] = sym_comment;
	v->a[10098] = actions(9);
	v->a[10099] = 1;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
