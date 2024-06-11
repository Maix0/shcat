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
	v->a[10000] = 1;
	v->a[10001] = sym_comment;
	v->a[10002] = actions(9);
	v->a[10003] = 1;
	v->a[10004] = anon_sym_for;
	v->a[10005] = actions(13);
	v->a[10006] = 1;
	v->a[10007] = anon_sym_if;
	v->a[10008] = actions(15);
	v->a[10009] = 1;
	v->a[10010] = anon_sym_case;
	v->a[10011] = actions(17);
	v->a[10012] = 1;
	v->a[10013] = anon_sym_LPAREN;
	v->a[10014] = actions(19);
	v->a[10015] = 1;
	v->a[10016] = anon_sym_LBRACE;
	v->a[10017] = actions(59);
	v->a[10018] = 1;
	v->a[10019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_501(v);
}

void	small_parse_table_501(t_small_parse_table_array *v)
{
	v->a[10020] = actions(61);
	v->a[10021] = 1;
	v->a[10022] = anon_sym_DOLLAR;
	v->a[10023] = actions(63);
	v->a[10024] = 1;
	v->a[10025] = anon_sym_DQUOTE;
	v->a[10026] = actions(67);
	v->a[10027] = 1;
	v->a[10028] = anon_sym_DOLLAR_LBRACE;
	v->a[10029] = actions(69);
	v->a[10030] = 1;
	v->a[10031] = anon_sym_DOLLAR_LPAREN;
	v->a[10032] = actions(71);
	v->a[10033] = 1;
	v->a[10034] = anon_sym_BQUOTE;
	v->a[10035] = actions(220);
	v->a[10036] = 1;
	v->a[10037] = sym_word;
	v->a[10038] = actions(222);
	v->a[10039] = 1;
	small_parse_table_502(v);
}

void	small_parse_table_502(t_small_parse_table_array *v)
{
	v->a[10040] = anon_sym_BANG;
	v->a[10041] = actions(230);
	v->a[10042] = 1;
	v->a[10043] = sym_file_descriptor;
	v->a[10044] = actions(232);
	v->a[10045] = 1;
	v->a[10046] = sym_variable_name;
	v->a[10047] = state(126);
	v->a[10048] = 1;
	v->a[10049] = aux_sym__statements_repeat1;
	v->a[10050] = state(184);
	v->a[10051] = 1;
	v->a[10052] = sym_command_name;
	v->a[10053] = state(268);
	v->a[10054] = 1;
	v->a[10055] = sym_variable_assignment;
	v->a[10056] = state(647);
	v->a[10057] = 1;
	v->a[10058] = sym_concatenation;
	v->a[10059] = state(785);
	small_parse_table_503(v);
}

void	small_parse_table_503(t_small_parse_table_array *v)
{
	v->a[10060] = 1;
	v->a[10061] = sym_file_redirect;
	v->a[10062] = state(828);
	v->a[10063] = 1;
	v->a[10064] = aux_sym_command_repeat1;
	v->a[10065] = state(1314);
	v->a[10066] = 1;
	v->a[10067] = sym_pipeline;
	v->a[10068] = state(1331);
	v->a[10069] = 1;
	v->a[10070] = aux_sym_redirected_statement_repeat2;
	v->a[10071] = state(2252);
	v->a[10072] = 1;
	v->a[10073] = sym__statement_not_pipeline;
	v->a[10074] = state(2422);
	v->a[10075] = 1;
	v->a[10076] = sym__statements;
	v->a[10077] = actions(11);
	v->a[10078] = 2;
	v->a[10079] = anon_sym_while;
	small_parse_table_504(v);
}

void	small_parse_table_504(t_small_parse_table_array *v)
{
	v->a[10080] = anon_sym_until;
	v->a[10081] = actions(226);
	v->a[10082] = 2;
	v->a[10083] = anon_sym_LT_AMP_DASH;
	v->a[10084] = anon_sym_GT_AMP_DASH;
	v->a[10085] = actions(228);
	v->a[10086] = 2;
	v->a[10087] = sym_raw_string;
	v->a[10088] = sym_number;
	v->a[10089] = state(294);
	v->a[10090] = 5;
	v->a[10091] = sym_arithmetic_expansion;
	v->a[10092] = sym_string;
	v->a[10093] = sym_simple_expansion;
	v->a[10094] = sym_expansion;
	v->a[10095] = sym_command_substitution;
	v->a[10096] = actions(224);
	v->a[10097] = 8;
	v->a[10098] = anon_sym_LT;
	v->a[10099] = anon_sym_GT;
	small_parse_table_505(v);
}

/* EOF small_parse_table_100.c */
