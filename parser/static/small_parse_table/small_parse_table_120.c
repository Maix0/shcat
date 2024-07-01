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
	v->a[12001] = sym_comment;
	v->a[12002] = actions(9);
	v->a[12003] = 1;
	v->a[12004] = anon_sym_for;
	v->a[12005] = actions(13);
	v->a[12006] = 1;
	v->a[12007] = anon_sym_if;
	v->a[12008] = actions(15);
	v->a[12009] = 1;
	v->a[12010] = anon_sym_case;
	v->a[12011] = actions(17);
	v->a[12012] = 1;
	v->a[12013] = anon_sym_LPAREN;
	v->a[12014] = actions(19);
	v->a[12015] = 1;
	v->a[12016] = anon_sym_LBRACE;
	v->a[12017] = actions(59);
	v->a[12018] = 1;
	v->a[12019] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = actions(61);
	v->a[12021] = 1;
	v->a[12022] = anon_sym_DOLLAR;
	v->a[12023] = actions(63);
	v->a[12024] = 1;
	v->a[12025] = anon_sym_DQUOTE;
	v->a[12026] = actions(67);
	v->a[12027] = 1;
	v->a[12028] = anon_sym_DOLLAR_LBRACE;
	v->a[12029] = actions(69);
	v->a[12030] = 1;
	v->a[12031] = anon_sym_DOLLAR_LPAREN;
	v->a[12032] = actions(71);
	v->a[12033] = 1;
	v->a[12034] = anon_sym_BQUOTE;
	v->a[12035] = actions(73);
	v->a[12036] = 1;
	v->a[12037] = sym_file_descriptor;
	v->a[12038] = actions(75);
	v->a[12039] = 1;
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = sym_variable_name;
	v->a[12041] = actions(240);
	v->a[12042] = 1;
	v->a[12043] = sym_word;
	v->a[12044] = actions(242);
	v->a[12045] = 1;
	v->a[12046] = anon_sym_BANG;
	v->a[12047] = state(136);
	v->a[12048] = 1;
	v->a[12049] = aux_sym__statements_repeat1;
	v->a[12050] = state(188);
	v->a[12051] = 1;
	v->a[12052] = sym_command_name;
	v->a[12053] = state(297);
	v->a[12054] = 1;
	v->a[12055] = sym_variable_assignment;
	v->a[12056] = state(650);
	v->a[12057] = 1;
	v->a[12058] = sym_concatenation;
	v->a[12059] = state(749);
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = 1;
	v->a[12061] = aux_sym_command_repeat1;
	v->a[12062] = state(795);
	v->a[12063] = 1;
	v->a[12064] = sym_file_redirect;
	v->a[12065] = state(1154);
	v->a[12066] = 1;
	v->a[12067] = sym_pipeline;
	v->a[12068] = state(1240);
	v->a[12069] = 1;
	v->a[12070] = aux_sym_redirected_statement_repeat2;
	v->a[12071] = state(2119);
	v->a[12072] = 1;
	v->a[12073] = sym__statement_not_pipeline;
	v->a[12074] = state(2328);
	v->a[12075] = 1;
	v->a[12076] = sym__statements;
	v->a[12077] = actions(11);
	v->a[12078] = 2;
	v->a[12079] = anon_sym_while;
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = anon_sym_until;
	v->a[12081] = actions(57);
	v->a[12082] = 2;
	v->a[12083] = anon_sym_LT_AMP_DASH;
	v->a[12084] = anon_sym_GT_AMP_DASH;
	v->a[12085] = actions(65);
	v->a[12086] = 2;
	v->a[12087] = sym_raw_string;
	v->a[12088] = sym_number;
	v->a[12089] = state(443);
	v->a[12090] = 5;
	v->a[12091] = sym_arithmetic_expansion;
	v->a[12092] = sym_string;
	v->a[12093] = sym_simple_expansion;
	v->a[12094] = sym_expansion;
	v->a[12095] = sym_command_substitution;
	v->a[12096] = actions(55);
	v->a[12097] = 6;
	v->a[12098] = anon_sym_LT;
	v->a[12099] = anon_sym_GT;
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
