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
	v->a[10000] = aux_sym_redirected_statement_repeat2;
	v->a[10001] = state(1609);
	v->a[10002] = 1;
	v->a[10003] = sym__statement_not_pipeline;
	v->a[10004] = actions(11);
	v->a[10005] = 2;
	v->a[10006] = anon_sym_while;
	v->a[10007] = anon_sym_until;
	v->a[10008] = actions(59);
	v->a[10009] = 2;
	v->a[10010] = sym_raw_string;
	v->a[10011] = sym_number;
	v->a[10012] = state(425);
	v->a[10013] = 5;
	v->a[10014] = sym_arithmetic_expansion;
	v->a[10015] = sym_string;
	v->a[10016] = sym_simple_expansion;
	v->a[10017] = sym_expansion;
	v->a[10018] = sym_command_substitution;
	v->a[10019] = actions(51);
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = 7;
	v->a[10021] = anon_sym_LT;
	v->a[10022] = anon_sym_GT;
	v->a[10023] = anon_sym_GT_GT;
	v->a[10024] = anon_sym_LT_AMP;
	v->a[10025] = anon_sym_GT_AMP;
	v->a[10026] = anon_sym_GT_PIPE;
	v->a[10027] = anon_sym_LT_GT;
	v->a[10028] = state(933);
	v->a[10029] = 12;
	v->a[10030] = sym_redirected_statement;
	v->a[10031] = sym_for_statement;
	v->a[10032] = sym_while_statement;
	v->a[10033] = sym_if_statement;
	v->a[10034] = sym_case_statement;
	v->a[10035] = sym_function_definition;
	v->a[10036] = sym_compound_statement;
	v->a[10037] = sym_subshell;
	v->a[10038] = sym_list;
	v->a[10039] = sym_negated_command;
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = sym_command;
	v->a[10041] = sym__variable_assignments;
	v->a[10042] = 30;
	v->a[10043] = actions(3);
	v->a[10044] = 1;
	v->a[10045] = sym_comment;
	v->a[10046] = actions(9);
	v->a[10047] = 1;
	v->a[10048] = anon_sym_for;
	v->a[10049] = actions(13);
	v->a[10050] = 1;
	v->a[10051] = anon_sym_if;
	v->a[10052] = actions(15);
	v->a[10053] = 1;
	v->a[10054] = anon_sym_case;
	v->a[10055] = actions(17);
	v->a[10056] = 1;
	v->a[10057] = anon_sym_LPAREN;
	v->a[10058] = actions(19);
	v->a[10059] = 1;
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = anon_sym_LBRACE;
	v->a[10061] = actions(41);
	v->a[10062] = 1;
	v->a[10063] = sym_word;
	v->a[10064] = actions(49);
	v->a[10065] = 1;
	v->a[10066] = anon_sym_BANG;
	v->a[10067] = actions(53);
	v->a[10068] = 1;
	v->a[10069] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10070] = actions(55);
	v->a[10071] = 1;
	v->a[10072] = anon_sym_DOLLAR;
	v->a[10073] = actions(57);
	v->a[10074] = 1;
	v->a[10075] = anon_sym_DQUOTE;
	v->a[10076] = actions(61);
	v->a[10077] = 1;
	v->a[10078] = anon_sym_DOLLAR_LBRACE;
	v->a[10079] = actions(63);
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = 1;
	v->a[10081] = anon_sym_DOLLAR_LPAREN;
	v->a[10082] = actions(65);
	v->a[10083] = 1;
	v->a[10084] = anon_sym_BQUOTE;
	v->a[10085] = actions(67);
	v->a[10086] = 1;
	v->a[10087] = sym_variable_name;
	v->a[10088] = actions(236);
	v->a[10089] = 1;
	v->a[10090] = anon_sym_fi;
	v->a[10091] = state(57);
	v->a[10092] = 1;
	v->a[10093] = aux_sym__terminated_statement;
	v->a[10094] = state(271);
	v->a[10095] = 1;
	v->a[10096] = sym_command_name;
	v->a[10097] = state(296);
	v->a[10098] = 1;
	v->a[10099] = sym_variable_assignment;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
