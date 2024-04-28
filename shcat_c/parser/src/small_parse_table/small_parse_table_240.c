/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_240.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1200(t_small_parse_table_array *v)
{
	v->a[24000] = anon_sym_LT_LPAREN;
	v->a[24001] = anon_sym_GT_LPAREN;
	v->a[24002] = state(781);
	v->a[24003] = 2;
	v->a[24004] = sym_concatenation;
	v->a[24005] = aux_sym_for_statement_repeat1;
	v->a[24006] = actions(4104);
	v->a[24007] = 3;
	v->a[24008] = sym_raw_string;
	v->a[24009] = sym_ansi_c_string;
	v->a[24010] = sym_word;
	v->a[24011] = state(1968);
	v->a[24012] = 9;
	v->a[24013] = sym_arithmetic_expansion;
	v->a[24014] = sym_brace_expression;
	v->a[24015] = sym_string;
	v->a[24016] = sym_translated_string;
	v->a[24017] = sym_number;
	v->a[24018] = sym_simple_expansion;
	v->a[24019] = sym_expansion;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = sym_command_substitution;
	v->a[24021] = sym_process_substitution;
	v->a[24022] = actions(2214);
	v->a[24023] = 19;
	v->a[24024] = anon_sym_SEMI;
	v->a[24025] = anon_sym_PIPE_PIPE;
	v->a[24026] = anon_sym_AMP_AMP;
	v->a[24027] = anon_sym_PIPE;
	v->a[24028] = anon_sym_AMP;
	v->a[24029] = anon_sym_LT;
	v->a[24030] = anon_sym_GT;
	v->a[24031] = anon_sym_LT_LT;
	v->a[24032] = anon_sym_GT_GT;
	v->a[24033] = anon_sym_SEMI_SEMI;
	v->a[24034] = anon_sym_PIPE_AMP;
	v->a[24035] = anon_sym_AMP_GT;
	v->a[24036] = anon_sym_AMP_GT_GT;
	v->a[24037] = anon_sym_LT_AMP;
	v->a[24038] = anon_sym_GT_AMP;
	v->a[24039] = anon_sym_GT_PIPE;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = anon_sym_LT_AMP_DASH;
	v->a[24041] = anon_sym_GT_AMP_DASH;
	v->a[24042] = anon_sym_LT_LT_DASH;
	v->a[24043] = 8;
	v->a[24044] = actions(3);
	v->a[24045] = 1;
	v->a[24046] = sym_comment;
	v->a[24047] = actions(4115);
	v->a[24048] = 1;
	v->a[24049] = anon_sym_DQUOTE;
	v->a[24050] = actions(4119);
	v->a[24051] = 1;
	v->a[24052] = sym_variable_name;
	v->a[24053] = state(2334);
	v->a[24054] = 1;
	v->a[24055] = sym_string;
	v->a[24056] = actions(4117);
	v->a[24057] = 2;
	v->a[24058] = aux_sym__simple_variable_name_token1;
	v->a[24059] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = actions(1235);
	v->a[24061] = 4;
	v->a[24062] = sym_file_descriptor;
	v->a[24063] = sym_test_operator;
	v->a[24064] = sym__bare_dollar;
	v->a[24065] = sym__brace_start;
	v->a[24066] = actions(4113);
	v->a[24067] = 9;
	v->a[24068] = anon_sym_DASH;
	v->a[24069] = anon_sym_STAR;
	v->a[24070] = anon_sym_BANG;
	v->a[24071] = anon_sym_QMARK;
	v->a[24072] = anon_sym_DOLLAR;
	v->a[24073] = anon_sym_POUND;
	v->a[24074] = anon_sym_AT2;
	v->a[24075] = anon_sym_0;
	v->a[24076] = anon_sym__;
	v->a[24077] = actions(1227);
	v->a[24078] = 34;
	v->a[24079] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = anon_sym_PIPE_PIPE;
	v->a[24081] = anon_sym_AMP_AMP;
	v->a[24082] = anon_sym_PIPE;
	v->a[24083] = anon_sym_EQ_EQ;
	v->a[24084] = anon_sym_LT;
	v->a[24085] = anon_sym_GT;
	v->a[24086] = anon_sym_LT_LT;
	v->a[24087] = anon_sym_GT_GT;
	v->a[24088] = anon_sym_PIPE_AMP;
	v->a[24089] = anon_sym_EQ_TILDE;
	v->a[24090] = anon_sym_AMP_GT;
	v->a[24091] = anon_sym_AMP_GT_GT;
	v->a[24092] = anon_sym_LT_AMP;
	v->a[24093] = anon_sym_GT_AMP;
	v->a[24094] = anon_sym_GT_PIPE;
	v->a[24095] = anon_sym_LT_AMP_DASH;
	v->a[24096] = anon_sym_GT_AMP_DASH;
	v->a[24097] = anon_sym_LT_LT_DASH;
	v->a[24098] = anon_sym_LT_LT_LT;
	v->a[24099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
