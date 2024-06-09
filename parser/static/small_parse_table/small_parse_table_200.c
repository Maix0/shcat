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
	v->a[20000] = sym_file_redirect;
	v->a[20001] = state(1213);
	v->a[20002] = 1;
	v->a[20003] = aux_sym_redirected_statement_repeat2;
	v->a[20004] = state(1413);
	v->a[20005] = 1;
	v->a[20006] = sym_pipeline;
	v->a[20007] = actions(11);
	v->a[20008] = 2;
	v->a[20009] = anon_sym_while;
	v->a[20010] = anon_sym_until;
	v->a[20011] = actions(61);
	v->a[20012] = 2;
	v->a[20013] = anon_sym_LT_AMP_DASH;
	v->a[20014] = anon_sym_GT_AMP_DASH;
	v->a[20015] = state(397);
	v->a[20016] = 6;
	v->a[20017] = sym_arithmetic_expansion;
	v->a[20018] = sym_string;
	v->a[20019] = sym_number;
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = sym_simple_expansion;
	v->a[20021] = sym_expansion;
	v->a[20022] = sym_command_substitution;
	v->a[20023] = actions(59);
	v->a[20024] = 8;
	v->a[20025] = anon_sym_LT;
	v->a[20026] = anon_sym_GT;
	v->a[20027] = anon_sym_GT_GT;
	v->a[20028] = anon_sym_AMP_GT;
	v->a[20029] = anon_sym_AMP_GT_GT;
	v->a[20030] = anon_sym_LT_AMP;
	v->a[20031] = anon_sym_GT_AMP;
	v->a[20032] = anon_sym_GT_PIPE;
	v->a[20033] = state(1007);
	v->a[20034] = 13;
	v->a[20035] = sym__statement_not_pipeline;
	v->a[20036] = sym_redirected_statement;
	v->a[20037] = sym_for_statement;
	v->a[20038] = sym_while_statement;
	v->a[20039] = sym_if_statement;
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = sym_case_statement;
	v->a[20041] = sym_function_definition;
	v->a[20042] = sym_compound_statement;
	v->a[20043] = sym_subshell;
	v->a[20044] = sym_list;
	v->a[20045] = sym_negated_command;
	v->a[20046] = sym_command;
	v->a[20047] = sym_variable_assignments;
	v->a[20048] = 27;
	v->a[20049] = actions(3);
	v->a[20050] = 1;
	v->a[20051] = sym_comment;
	v->a[20052] = actions(365);
	v->a[20053] = 1;
	v->a[20054] = anon_sym_for;
	v->a[20055] = actions(369);
	v->a[20056] = 1;
	v->a[20057] = anon_sym_if;
	v->a[20058] = actions(373);
	v->a[20059] = 1;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = anon_sym_LPAREN;
	v->a[20061] = actions(375);
	v->a[20062] = 1;
	v->a[20063] = anon_sym_LBRACE;
	v->a[20064] = actions(383);
	v->a[20065] = 1;
	v->a[20066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20067] = actions(385);
	v->a[20068] = 1;
	v->a[20069] = anon_sym_DOLLAR;
	v->a[20070] = actions(387);
	v->a[20071] = 1;
	v->a[20072] = anon_sym_DQUOTE;
	v->a[20073] = actions(391);
	v->a[20074] = 1;
	v->a[20075] = aux_sym_number_token1;
	v->a[20076] = actions(393);
	v->a[20077] = 1;
	v->a[20078] = aux_sym_number_token2;
	v->a[20079] = actions(395);
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = 1;
	v->a[20081] = anon_sym_DOLLAR_LBRACE;
	v->a[20082] = actions(397);
	v->a[20083] = 1;
	v->a[20084] = anon_sym_DOLLAR_LPAREN;
	v->a[20085] = actions(399);
	v->a[20086] = 1;
	v->a[20087] = anon_sym_BQUOTE;
	v->a[20088] = actions(401);
	v->a[20089] = 1;
	v->a[20090] = sym_file_descriptor;
	v->a[20091] = actions(405);
	v->a[20092] = 1;
	v->a[20093] = sym_variable_name;
	v->a[20094] = state(271);
	v->a[20095] = 1;
	v->a[20096] = sym_command_name;
	v->a[20097] = state(581);
	v->a[20098] = 1;
	v->a[20099] = aux_sym_command_repeat1;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
