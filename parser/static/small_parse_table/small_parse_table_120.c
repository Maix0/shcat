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
	v->a[12001] = sym_variable_name;
	v->a[12002] = state(98);
	v->a[12003] = 1;
	v->a[12004] = aux_sym__terminated_statement;
	v->a[12005] = state(191);
	v->a[12006] = 1;
	v->a[12007] = sym_command_name;
	v->a[12008] = state(281);
	v->a[12009] = 1;
	v->a[12010] = sym_variable_assignment;
	v->a[12011] = state(624);
	v->a[12012] = 1;
	v->a[12013] = sym_concatenation;
	v->a[12014] = state(726);
	v->a[12015] = 1;
	v->a[12016] = sym_file_redirect;
	v->a[12017] = state(733);
	v->a[12018] = 1;
	v->a[12019] = aux_sym_command_repeat1;
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = state(1200);
	v->a[12021] = 1;
	v->a[12022] = sym_pipeline;
	v->a[12023] = state(1307);
	v->a[12024] = 1;
	v->a[12025] = aux_sym_redirected_statement_repeat2;
	v->a[12026] = state(2117);
	v->a[12027] = 1;
	v->a[12028] = sym__statement_not_pipeline;
	v->a[12029] = actions(147);
	v->a[12030] = 2;
	v->a[12031] = anon_sym_while;
	v->a[12032] = anon_sym_until;
	v->a[12033] = actions(170);
	v->a[12034] = 2;
	v->a[12035] = anon_sym_LT_AMP_DASH;
	v->a[12036] = anon_sym_GT_AMP_DASH;
	v->a[12037] = actions(182);
	v->a[12038] = 2;
	v->a[12039] = sym_raw_string;
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = sym_number;
	v->a[12041] = state(420);
	v->a[12042] = 5;
	v->a[12043] = sym_arithmetic_expansion;
	v->a[12044] = sym_string;
	v->a[12045] = sym_simple_expansion;
	v->a[12046] = sym_expansion;
	v->a[12047] = sym_command_substitution;
	v->a[12048] = actions(167);
	v->a[12049] = 8;
	v->a[12050] = anon_sym_LT;
	v->a[12051] = anon_sym_GT;
	v->a[12052] = anon_sym_GT_GT;
	v->a[12053] = anon_sym_AMP_GT;
	v->a[12054] = anon_sym_AMP_GT_GT;
	v->a[12055] = anon_sym_LT_AMP;
	v->a[12056] = anon_sym_GT_AMP;
	v->a[12057] = anon_sym_GT_PIPE;
	v->a[12058] = state(1141);
	v->a[12059] = 12;
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = sym_redirected_statement;
	v->a[12061] = sym_for_statement;
	v->a[12062] = sym_while_statement;
	v->a[12063] = sym_if_statement;
	v->a[12064] = sym_case_statement;
	v->a[12065] = sym_function_definition;
	v->a[12066] = sym_compound_statement;
	v->a[12067] = sym_subshell;
	v->a[12068] = sym_list;
	v->a[12069] = sym_negated_command;
	v->a[12070] = sym_command;
	v->a[12071] = sym__variable_assignments;
	v->a[12072] = 32;
	v->a[12073] = actions(3);
	v->a[12074] = 1;
	v->a[12075] = sym_comment;
	v->a[12076] = actions(9);
	v->a[12077] = 1;
	v->a[12078] = anon_sym_for;
	v->a[12079] = actions(13);
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = 1;
	v->a[12081] = anon_sym_if;
	v->a[12082] = actions(15);
	v->a[12083] = 1;
	v->a[12084] = anon_sym_case;
	v->a[12085] = actions(17);
	v->a[12086] = 1;
	v->a[12087] = anon_sym_LPAREN;
	v->a[12088] = actions(19);
	v->a[12089] = 1;
	v->a[12090] = anon_sym_LBRACE;
	v->a[12091] = actions(59);
	v->a[12092] = 1;
	v->a[12093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12094] = actions(61);
	v->a[12095] = 1;
	v->a[12096] = anon_sym_DOLLAR;
	v->a[12097] = actions(63);
	v->a[12098] = 1;
	v->a[12099] = anon_sym_DQUOTE;
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
