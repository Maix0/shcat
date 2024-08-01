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
	v->a[10000] = sym_raw_string;
	v->a[10001] = sym_number;
	v->a[10002] = actions(212);
	v->a[10003] = 3;
	v->a[10004] = anon_sym_LT;
	v->a[10005] = anon_sym_GT;
	v->a[10006] = anon_sym_GT_GT;
	v->a[10007] = state(277);
	v->a[10008] = 5;
	v->a[10009] = sym_arithmetic_expansion;
	v->a[10010] = sym_string;
	v->a[10011] = sym_simple_expansion;
	v->a[10012] = sym_expansion;
	v->a[10013] = sym_command_substitution;
	v->a[10014] = state(877);
	v->a[10015] = 12;
	v->a[10016] = sym_redirected_statement;
	v->a[10017] = sym_for_statement;
	v->a[10018] = sym_while_statement;
	v->a[10019] = sym_if_statement;
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = sym_case_statement;
	v->a[10021] = sym_function_definition;
	v->a[10022] = sym_compound_statement;
	v->a[10023] = sym_subshell;
	v->a[10024] = sym_list;
	v->a[10025] = sym_negated_command;
	v->a[10026] = sym_command;
	v->a[10027] = sym__variable_assignments;
	v->a[10028] = 30;
	v->a[10029] = actions(3);
	v->a[10030] = 1;
	v->a[10031] = sym_comment;
	v->a[10032] = actions(9);
	v->a[10033] = 1;
	v->a[10034] = anon_sym_for;
	v->a[10035] = actions(13);
	v->a[10036] = 1;
	v->a[10037] = anon_sym_if;
	v->a[10038] = actions(15);
	v->a[10039] = 1;
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = anon_sym_case;
	v->a[10041] = actions(17);
	v->a[10042] = 1;
	v->a[10043] = anon_sym_LPAREN;
	v->a[10044] = actions(19);
	v->a[10045] = 1;
	v->a[10046] = anon_sym_LBRACE;
	v->a[10047] = actions(53);
	v->a[10048] = 1;
	v->a[10049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10050] = actions(55);
	v->a[10051] = 1;
	v->a[10052] = anon_sym_DOLLAR;
	v->a[10053] = actions(57);
	v->a[10054] = 1;
	v->a[10055] = anon_sym_DQUOTE;
	v->a[10056] = actions(61);
	v->a[10057] = 1;
	v->a[10058] = anon_sym_DOLLAR_LBRACE;
	v->a[10059] = actions(63);
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = 1;
	v->a[10061] = anon_sym_DOLLAR_LPAREN;
	v->a[10062] = actions(65);
	v->a[10063] = 1;
	v->a[10064] = anon_sym_BQUOTE;
	v->a[10065] = actions(67);
	v->a[10066] = 1;
	v->a[10067] = sym_variable_name;
	v->a[10068] = actions(204);
	v->a[10069] = 1;
	v->a[10070] = sym_word;
	v->a[10071] = actions(206);
	v->a[10072] = 1;
	v->a[10073] = anon_sym_BANG;
	v->a[10074] = state(116);
	v->a[10075] = 1;
	v->a[10076] = aux_sym__statements_repeat1;
	v->a[10077] = state(179);
	v->a[10078] = 1;
	v->a[10079] = sym_command_name;
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = state(208);
	v->a[10081] = 1;
	v->a[10082] = sym_variable_assignment;
	v->a[10083] = state(385);
	v->a[10084] = 1;
	v->a[10085] = aux_sym_command_repeat1;
	v->a[10086] = state(555);
	v->a[10087] = 1;
	v->a[10088] = sym_concatenation;
	v->a[10089] = state(599);
	v->a[10090] = 1;
	v->a[10091] = sym_file_redirect;
	v->a[10092] = state(969);
	v->a[10093] = 1;
	v->a[10094] = sym_pipeline;
	v->a[10095] = state(1006);
	v->a[10096] = 1;
	v->a[10097] = aux_sym_redirected_statement_repeat2;
	v->a[10098] = state(1560);
	v->a[10099] = 1;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
