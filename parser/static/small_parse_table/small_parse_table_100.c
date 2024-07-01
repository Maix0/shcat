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
	v->a[10000] = aux_sym__statements_repeat1;
	v->a[10001] = state(179);
	v->a[10002] = 1;
	v->a[10003] = sym_command_name;
	v->a[10004] = state(302);
	v->a[10005] = 1;
	v->a[10006] = sym_variable_assignment;
	v->a[10007] = state(603);
	v->a[10008] = 1;
	v->a[10009] = sym_concatenation;
	v->a[10010] = state(658);
	v->a[10011] = 1;
	v->a[10012] = aux_sym_command_repeat1;
	v->a[10013] = state(764);
	v->a[10014] = 1;
	v->a[10015] = sym_file_redirect;
	v->a[10016] = state(1052);
	v->a[10017] = 1;
	v->a[10018] = sym_pipeline;
	v->a[10019] = state(1190);
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = 1;
	v->a[10021] = aux_sym_redirected_statement_repeat2;
	v->a[10022] = state(1890);
	v->a[10023] = 1;
	v->a[10024] = sym__statement_not_pipeline;
	v->a[10025] = state(1976);
	v->a[10026] = 1;
	v->a[10027] = sym__statements;
	v->a[10028] = actions(11);
	v->a[10029] = 2;
	v->a[10030] = anon_sym_while;
	v->a[10031] = anon_sym_until;
	v->a[10032] = actions(61);
	v->a[10033] = 2;
	v->a[10034] = sym_raw_string;
	v->a[10035] = sym_number;
	v->a[10036] = state(436);
	v->a[10037] = 5;
	v->a[10038] = sym_arithmetic_expansion;
	v->a[10039] = sym_string;
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = sym_simple_expansion;
	v->a[10041] = sym_expansion;
	v->a[10042] = sym_command_substitution;
	v->a[10043] = actions(53);
	v->a[10044] = 7;
	v->a[10045] = anon_sym_LT;
	v->a[10046] = anon_sym_GT;
	v->a[10047] = anon_sym_GT_GT;
	v->a[10048] = anon_sym_LT_AMP;
	v->a[10049] = anon_sym_GT_AMP;
	v->a[10050] = anon_sym_GT_PIPE;
	v->a[10051] = anon_sym_LT_GT;
	v->a[10052] = state(967);
	v->a[10053] = 12;
	v->a[10054] = sym_redirected_statement;
	v->a[10055] = sym_for_statement;
	v->a[10056] = sym_while_statement;
	v->a[10057] = sym_if_statement;
	v->a[10058] = sym_case_statement;
	v->a[10059] = sym_function_definition;
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = sym_compound_statement;
	v->a[10061] = sym_subshell;
	v->a[10062] = sym_list;
	v->a[10063] = sym_negated_command;
	v->a[10064] = sym_command;
	v->a[10065] = sym__variable_assignments;
	v->a[10066] = 31;
	v->a[10067] = actions(3);
	v->a[10068] = 1;
	v->a[10069] = sym_comment;
	v->a[10070] = actions(9);
	v->a[10071] = 1;
	v->a[10072] = anon_sym_for;
	v->a[10073] = actions(13);
	v->a[10074] = 1;
	v->a[10075] = anon_sym_if;
	v->a[10076] = actions(15);
	v->a[10077] = 1;
	v->a[10078] = anon_sym_case;
	v->a[10079] = actions(17);
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = 1;
	v->a[10081] = anon_sym_LPAREN;
	v->a[10082] = actions(19);
	v->a[10083] = 1;
	v->a[10084] = anon_sym_LBRACE;
	v->a[10085] = actions(55);
	v->a[10086] = 1;
	v->a[10087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10088] = actions(57);
	v->a[10089] = 1;
	v->a[10090] = anon_sym_DOLLAR;
	v->a[10091] = actions(59);
	v->a[10092] = 1;
	v->a[10093] = anon_sym_DQUOTE;
	v->a[10094] = actions(63);
	v->a[10095] = 1;
	v->a[10096] = anon_sym_DOLLAR_LBRACE;
	v->a[10097] = actions(65);
	v->a[10098] = 1;
	v->a[10099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
