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
	v->a[12000] = state(1137);
	v->a[12001] = 12;
	v->a[12002] = sym_redirected_statement;
	v->a[12003] = sym_for_statement;
	v->a[12004] = sym_while_statement;
	v->a[12005] = sym_if_statement;
	v->a[12006] = sym_case_statement;
	v->a[12007] = sym_function_definition;
	v->a[12008] = sym_compound_statement;
	v->a[12009] = sym_subshell;
	v->a[12010] = sym_list;
	v->a[12011] = sym_negated_command;
	v->a[12012] = sym_command;
	v->a[12013] = sym_variable_assignments;
	v->a[12014] = 34;
	v->a[12015] = actions(3);
	v->a[12016] = 1;
	v->a[12017] = sym_comment;
	v->a[12018] = actions(9);
	v->a[12019] = 1;
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = anon_sym_for;
	v->a[12021] = actions(13);
	v->a[12022] = 1;
	v->a[12023] = anon_sym_if;
	v->a[12024] = actions(15);
	v->a[12025] = 1;
	v->a[12026] = anon_sym_case;
	v->a[12027] = actions(17);
	v->a[12028] = 1;
	v->a[12029] = anon_sym_LPAREN;
	v->a[12030] = actions(19);
	v->a[12031] = 1;
	v->a[12032] = anon_sym_LBRACE;
	v->a[12033] = actions(63);
	v->a[12034] = 1;
	v->a[12035] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12036] = actions(65);
	v->a[12037] = 1;
	v->a[12038] = anon_sym_DOLLAR;
	v->a[12039] = actions(67);
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = 1;
	v->a[12041] = anon_sym_DQUOTE;
	v->a[12042] = actions(71);
	v->a[12043] = 1;
	v->a[12044] = aux_sym_number_token1;
	v->a[12045] = actions(73);
	v->a[12046] = 1;
	v->a[12047] = aux_sym_number_token2;
	v->a[12048] = actions(75);
	v->a[12049] = 1;
	v->a[12050] = anon_sym_DOLLAR_LBRACE;
	v->a[12051] = actions(77);
	v->a[12052] = 1;
	v->a[12053] = anon_sym_DOLLAR_LPAREN;
	v->a[12054] = actions(79);
	v->a[12055] = 1;
	v->a[12056] = anon_sym_BQUOTE;
	v->a[12057] = actions(248);
	v->a[12058] = 1;
	v->a[12059] = sym_word;
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = actions(250);
	v->a[12061] = 1;
	v->a[12062] = anon_sym_BANG;
	v->a[12063] = actions(256);
	v->a[12064] = 1;
	v->a[12065] = sym_raw_string;
	v->a[12066] = actions(258);
	v->a[12067] = 1;
	v->a[12068] = sym_file_descriptor;
	v->a[12069] = actions(260);
	v->a[12070] = 1;
	v->a[12071] = sym_variable_name;
	v->a[12072] = state(141);
	v->a[12073] = 1;
	v->a[12074] = aux_sym__statements_repeat1;
	v->a[12075] = state(175);
	v->a[12076] = 1;
	v->a[12077] = sym_command_name;
	v->a[12078] = state(278);
	v->a[12079] = 1;
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = sym_variable_assignment;
	v->a[12081] = state(567);
	v->a[12082] = 1;
	v->a[12083] = aux_sym_command_repeat1;
	v->a[12084] = state(582);
	v->a[12085] = 1;
	v->a[12086] = sym_concatenation;
	v->a[12087] = state(690);
	v->a[12088] = 1;
	v->a[12089] = sym_file_redirect;
	v->a[12090] = state(1100);
	v->a[12091] = 1;
	v->a[12092] = sym_pipeline;
	v->a[12093] = state(1196);
	v->a[12094] = 1;
	v->a[12095] = aux_sym_redirected_statement_repeat2;
	v->a[12096] = state(2037);
	v->a[12097] = 1;
	v->a[12098] = sym__statement_not_pipeline;
	v->a[12099] = state(2171);
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
