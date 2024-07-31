/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_120.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_600(t_small_parse_table_array *v)
{
	v->a[12000] = 1;
	v->a[12001] = anon_sym_BANG;
	v->a[12002] = actions(273);
	v->a[12003] = 1;
	v->a[12004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12005] = actions(276);
	v->a[12006] = 1;
	v->a[12007] = anon_sym_DOLLAR;
	v->a[12008] = actions(279);
	v->a[12009] = 1;
	v->a[12010] = anon_sym_DQUOTE;
	v->a[12011] = actions(285);
	v->a[12012] = 1;
	v->a[12013] = anon_sym_DOLLAR_LBRACE;
	v->a[12014] = actions(288);
	v->a[12015] = 1;
	v->a[12016] = anon_sym_DOLLAR_LPAREN;
	v->a[12017] = actions(291);
	v->a[12018] = 1;
	v->a[12019] = anon_sym_BQUOTE;
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = actions(294);
	v->a[12021] = 1;
	v->a[12022] = sym_variable_name;
	v->a[12023] = state(105);
	v->a[12024] = 1;
	v->a[12025] = aux_sym__statements_repeat1;
	v->a[12026] = state(271);
	v->a[12027] = 1;
	v->a[12028] = sym_command_name;
	v->a[12029] = state(281);
	v->a[12030] = 1;
	v->a[12031] = sym_variable_assignment;
	v->a[12032] = state(482);
	v->a[12033] = 1;
	v->a[12034] = aux_sym_command_repeat1;
	v->a[12035] = state(600);
	v->a[12036] = 1;
	v->a[12037] = sym_file_redirect;
	v->a[12038] = state(602);
	v->a[12039] = 1;
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = sym_concatenation;
	v->a[12041] = state(1025);
	v->a[12042] = 1;
	v->a[12043] = sym_pipeline;
	v->a[12044] = state(1068);
	v->a[12045] = 1;
	v->a[12046] = aux_sym_redirected_statement_repeat2;
	v->a[12047] = state(1609);
	v->a[12048] = 1;
	v->a[12049] = sym__statement_not_pipeline;
	v->a[12050] = actions(252);
	v->a[12051] = 2;
	v->a[12052] = anon_sym_while;
	v->a[12053] = anon_sym_until;
	v->a[12054] = actions(282);
	v->a[12055] = 2;
	v->a[12056] = sym_raw_string;
	v->a[12057] = sym_number;
	v->a[12058] = state(425);
	v->a[12059] = 5;
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = sym_arithmetic_expansion;
	v->a[12061] = sym_string;
	v->a[12062] = sym_simple_expansion;
	v->a[12063] = sym_expansion;
	v->a[12064] = sym_command_substitution;
	v->a[12065] = actions(270);
	v->a[12066] = 7;
	v->a[12067] = anon_sym_LT;
	v->a[12068] = anon_sym_GT;
	v->a[12069] = anon_sym_GT_GT;
	v->a[12070] = anon_sym_LT_AMP;
	v->a[12071] = anon_sym_GT_AMP;
	v->a[12072] = anon_sym_GT_PIPE;
	v->a[12073] = anon_sym_LT_GT;
	v->a[12074] = state(902);
	v->a[12075] = 12;
	v->a[12076] = sym_redirected_statement;
	v->a[12077] = sym_for_statement;
	v->a[12078] = sym_while_statement;
	v->a[12079] = sym_if_statement;
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = sym_case_statement;
	v->a[12081] = sym_function_definition;
	v->a[12082] = sym_compound_statement;
	v->a[12083] = sym_subshell;
	v->a[12084] = sym_list;
	v->a[12085] = sym_negated_command;
	v->a[12086] = sym_command;
	v->a[12087] = sym__variable_assignments;
	v->a[12088] = 40;
	v->a[12089] = actions(3);
	v->a[12090] = 1;
	v->a[12091] = sym_comment;
	v->a[12092] = actions(9);
	v->a[12093] = 1;
	v->a[12094] = anon_sym_for;
	v->a[12095] = actions(13);
	v->a[12096] = 1;
	v->a[12097] = anon_sym_if;
	v->a[12098] = actions(15);
	v->a[12099] = 1;
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
