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
	v->a[12001] = sym_concatenation;
	v->a[12002] = state(620);
	v->a[12003] = 1;
	v->a[12004] = sym_file_redirect;
	v->a[12005] = state(623);
	v->a[12006] = 1;
	v->a[12007] = aux_sym_command_repeat1;
	v->a[12008] = state(1193);
	v->a[12009] = 1;
	v->a[12010] = sym_pipeline;
	v->a[12011] = state(1201);
	v->a[12012] = 1;
	v->a[12013] = aux_sym_redirected_statement_repeat2;
	v->a[12014] = state(1911);
	v->a[12015] = 1;
	v->a[12016] = sym__statement_not_pipeline;
	v->a[12017] = actions(147);
	v->a[12018] = 2;
	v->a[12019] = anon_sym_while;
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = anon_sym_until;
	v->a[12021] = actions(179);
	v->a[12022] = 2;
	v->a[12023] = sym_raw_string;
	v->a[12024] = sym_number;
	v->a[12025] = state(433);
	v->a[12026] = 5;
	v->a[12027] = sym_arithmetic_expansion;
	v->a[12028] = sym_string;
	v->a[12029] = sym_simple_expansion;
	v->a[12030] = sym_expansion;
	v->a[12031] = sym_command_substitution;
	v->a[12032] = actions(167);
	v->a[12033] = 7;
	v->a[12034] = anon_sym_LT;
	v->a[12035] = anon_sym_GT;
	v->a[12036] = anon_sym_GT_GT;
	v->a[12037] = anon_sym_LT_AMP;
	v->a[12038] = anon_sym_GT_AMP;
	v->a[12039] = anon_sym_GT_PIPE;
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = anon_sym_LT_GT;
	v->a[12041] = state(1089);
	v->a[12042] = 12;
	v->a[12043] = sym_redirected_statement;
	v->a[12044] = sym_for_statement;
	v->a[12045] = sym_while_statement;
	v->a[12046] = sym_if_statement;
	v->a[12047] = sym_case_statement;
	v->a[12048] = sym_function_definition;
	v->a[12049] = sym_compound_statement;
	v->a[12050] = sym_subshell;
	v->a[12051] = sym_list;
	v->a[12052] = sym_negated_command;
	v->a[12053] = sym_command;
	v->a[12054] = sym__variable_assignments;
	v->a[12055] = 31;
	v->a[12056] = actions(3);
	v->a[12057] = 1;
	v->a[12058] = sym_comment;
	v->a[12059] = actions(9);
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = 1;
	v->a[12061] = anon_sym_for;
	v->a[12062] = actions(13);
	v->a[12063] = 1;
	v->a[12064] = anon_sym_if;
	v->a[12065] = actions(15);
	v->a[12066] = 1;
	v->a[12067] = anon_sym_case;
	v->a[12068] = actions(17);
	v->a[12069] = 1;
	v->a[12070] = anon_sym_LPAREN;
	v->a[12071] = actions(19);
	v->a[12072] = 1;
	v->a[12073] = anon_sym_LBRACE;
	v->a[12074] = actions(55);
	v->a[12075] = 1;
	v->a[12076] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12077] = actions(57);
	v->a[12078] = 1;
	v->a[12079] = anon_sym_DOLLAR;
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = actions(59);
	v->a[12081] = 1;
	v->a[12082] = anon_sym_DQUOTE;
	v->a[12083] = actions(63);
	v->a[12084] = 1;
	v->a[12085] = anon_sym_DOLLAR_LBRACE;
	v->a[12086] = actions(65);
	v->a[12087] = 1;
	v->a[12088] = anon_sym_DOLLAR_LPAREN;
	v->a[12089] = actions(67);
	v->a[12090] = 1;
	v->a[12091] = anon_sym_BQUOTE;
	v->a[12092] = actions(69);
	v->a[12093] = 1;
	v->a[12094] = sym_file_descriptor;
	v->a[12095] = actions(71);
	v->a[12096] = 1;
	v->a[12097] = sym_variable_name;
	v->a[12098] = actions(223);
	v->a[12099] = 1;
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
