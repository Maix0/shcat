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
	v->a[12000] = sym_command_substitution;
	v->a[12001] = state(955);
	v->a[12002] = 12;
	v->a[12003] = sym_redirected_statement;
	v->a[12004] = sym_for_statement;
	v->a[12005] = sym_while_statement;
	v->a[12006] = sym_if_statement;
	v->a[12007] = sym_case_statement;
	v->a[12008] = sym_function_definition;
	v->a[12009] = sym_compound_statement;
	v->a[12010] = sym_subshell;
	v->a[12011] = sym_list;
	v->a[12012] = sym_negated_command;
	v->a[12013] = sym_command;
	v->a[12014] = sym__variable_assignments;
	v->a[12015] = 29;
	v->a[12016] = actions(3);
	v->a[12017] = 1;
	v->a[12018] = sym_comment;
	v->a[12019] = actions(246);
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = 1;
	v->a[12021] = sym_word;
	v->a[12022] = actions(249);
	v->a[12023] = 1;
	v->a[12024] = anon_sym_for;
	v->a[12025] = actions(255);
	v->a[12026] = 1;
	v->a[12027] = anon_sym_if;
	v->a[12028] = actions(258);
	v->a[12029] = 1;
	v->a[12030] = anon_sym_case;
	v->a[12031] = actions(261);
	v->a[12032] = 1;
	v->a[12033] = anon_sym_LPAREN;
	v->a[12034] = actions(264);
	v->a[12035] = 1;
	v->a[12036] = anon_sym_LBRACE;
	v->a[12037] = actions(267);
	v->a[12038] = 1;
	v->a[12039] = anon_sym_BANG;
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = actions(273);
	v->a[12041] = 1;
	v->a[12042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12043] = actions(276);
	v->a[12044] = 1;
	v->a[12045] = anon_sym_DOLLAR;
	v->a[12046] = actions(279);
	v->a[12047] = 1;
	v->a[12048] = anon_sym_DQUOTE;
	v->a[12049] = actions(285);
	v->a[12050] = 1;
	v->a[12051] = anon_sym_DOLLAR_LBRACE;
	v->a[12052] = actions(288);
	v->a[12053] = 1;
	v->a[12054] = anon_sym_DOLLAR_LPAREN;
	v->a[12055] = actions(291);
	v->a[12056] = 1;
	v->a[12057] = anon_sym_BQUOTE;
	v->a[12058] = actions(294);
	v->a[12059] = 1;
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = sym_variable_name;
	v->a[12061] = state(109);
	v->a[12062] = 1;
	v->a[12063] = aux_sym__statements_repeat1;
	v->a[12064] = state(185);
	v->a[12065] = 1;
	v->a[12066] = sym_command_name;
	v->a[12067] = state(230);
	v->a[12068] = 1;
	v->a[12069] = sym_variable_assignment;
	v->a[12070] = state(411);
	v->a[12071] = 1;
	v->a[12072] = aux_sym_command_repeat1;
	v->a[12073] = state(551);
	v->a[12074] = 1;
	v->a[12075] = sym_file_redirect;
	v->a[12076] = state(555);
	v->a[12077] = 1;
	v->a[12078] = sym_concatenation;
	v->a[12079] = state(982);
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = 1;
	v->a[12081] = sym_pipeline;
	v->a[12082] = state(1126);
	v->a[12083] = 1;
	v->a[12084] = aux_sym_redirected_statement_repeat2;
	v->a[12085] = state(1561);
	v->a[12086] = 1;
	v->a[12087] = sym__statement_not_pipeline;
	v->a[12088] = actions(252);
	v->a[12089] = 2;
	v->a[12090] = anon_sym_while;
	v->a[12091] = anon_sym_until;
	v->a[12092] = actions(282);
	v->a[12093] = 2;
	v->a[12094] = sym_raw_string;
	v->a[12095] = sym_number;
	v->a[12096] = actions(270);
	v->a[12097] = 3;
	v->a[12098] = anon_sym_LT;
	v->a[12099] = anon_sym_GT;
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
