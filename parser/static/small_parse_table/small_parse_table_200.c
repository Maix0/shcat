/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_200.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1000(t_small_parse_table_array *v)
{
	v->a[20000] = 1;
	v->a[20001] = anon_sym_LPAREN;
	v->a[20002] = actions(315);
	v->a[20003] = 1;
	v->a[20004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20005] = actions(317);
	v->a[20006] = 1;
	v->a[20007] = anon_sym_DOLLAR;
	v->a[20008] = actions(319);
	v->a[20009] = 1;
	v->a[20010] = anon_sym_DQUOTE;
	v->a[20011] = actions(323);
	v->a[20012] = 1;
	v->a[20013] = anon_sym_DOLLAR_LBRACE;
	v->a[20014] = actions(325);
	v->a[20015] = 1;
	v->a[20016] = anon_sym_DOLLAR_LPAREN;
	v->a[20017] = actions(327);
	v->a[20018] = 1;
	v->a[20019] = anon_sym_BQUOTE;
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = actions(329);
	v->a[20021] = 1;
	v->a[20022] = sym_variable_name;
	v->a[20023] = state(274);
	v->a[20024] = 1;
	v->a[20025] = sym_command_name;
	v->a[20026] = state(328);
	v->a[20027] = 1;
	v->a[20028] = aux_sym_command_repeat1;
	v->a[20029] = state(701);
	v->a[20030] = 1;
	v->a[20031] = sym_variable_assignment;
	v->a[20032] = state(772);
	v->a[20033] = 1;
	v->a[20034] = sym_concatenation;
	v->a[20035] = state(1083);
	v->a[20036] = 1;
	v->a[20037] = sym_file_redirect;
	v->a[20038] = state(1431);
	v->a[20039] = 1;
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = sym_subshell;
	v->a[20041] = state(1432);
	v->a[20042] = 1;
	v->a[20043] = sym_command;
	v->a[20044] = actions(321);
	v->a[20045] = 3;
	v->a[20046] = sym_raw_string;
	v->a[20047] = sym_number;
	v->a[20048] = sym_word;
	v->a[20049] = actions(758);
	v->a[20050] = 3;
	v->a[20051] = anon_sym_LT;
	v->a[20052] = anon_sym_GT;
	v->a[20053] = anon_sym_GT_GT;
	v->a[20054] = state(606);
	v->a[20055] = 5;
	v->a[20056] = sym_arithmetic_expansion;
	v->a[20057] = sym_string;
	v->a[20058] = sym_simple_expansion;
	v->a[20059] = sym_expansion;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = sym_command_substitution;
	v->a[20061] = 10;
	v->a[20062] = actions(3);
	v->a[20063] = 1;
	v->a[20064] = sym_comment;
	v->a[20065] = actions(580);
	v->a[20066] = 1;
	v->a[20067] = anon_sym_PIPE;
	v->a[20068] = actions(597);
	v->a[20069] = 1;
	v->a[20070] = anon_sym_LT_LT;
	v->a[20071] = actions(771);
	v->a[20072] = 1;
	v->a[20073] = sym_variable_name;
	v->a[20074] = state(573);
	v->a[20075] = 1;
	v->a[20076] = sym_terminator;
	v->a[20077] = actions(769);
	v->a[20078] = 2;
	v->a[20079] = anon_sym_AMP_AMP;
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = anon_sym_PIPE_PIPE;
	v->a[20081] = state(995);
	v->a[20082] = 2;
	v->a[20083] = sym_variable_assignment;
	v->a[20084] = aux_sym__variable_assignments_repeat1;
	v->a[20085] = actions(593);
	v->a[20086] = 3;
	v->a[20087] = anon_sym_SEMI_SEMI;
	v->a[20088] = aux_sym_heredoc_redirect_token1;
	v->a[20089] = anon_sym_SEMI;
	v->a[20090] = state(1040);
	v->a[20091] = 3;
	v->a[20092] = sym_file_redirect;
	v->a[20093] = sym_heredoc_redirect;
	v->a[20094] = aux_sym_redirected_statement_repeat1;
	v->a[20095] = actions(576);
	v->a[20096] = 12;
	v->a[20097] = anon_sym_LT;
	v->a[20098] = anon_sym_GT;
	v->a[20099] = anon_sym_GT_GT;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
