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
	v->a[24000] = actions(171);
	v->a[24001] = 2;
	v->a[24002] = sym_test_operator;
	v->a[24003] = sym_raw_string;
	v->a[24004] = actions(2896);
	v->a[24005] = 2;
	v->a[24006] = anon_sym_LT_AMP_DASH;
	v->a[24007] = anon_sym_GT_AMP_DASH;
	v->a[24008] = actions(2894);
	v->a[24009] = 3;
	v->a[24010] = anon_sym_GT_GT;
	v->a[24011] = anon_sym_AMP_GT_GT;
	v->a[24012] = anon_sym_GT_PIPE;
	v->a[24013] = actions(2892);
	v->a[24014] = 5;
	v->a[24015] = anon_sym_LT;
	v->a[24016] = anon_sym_GT;
	v->a[24017] = anon_sym_AMP_GT;
	v->a[24018] = anon_sym_LT_AMP;
	v->a[24019] = anon_sym_GT_AMP;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = state(508);
	v->a[24021] = 7;
	v->a[24022] = sym_arithmetic_expansion;
	v->a[24023] = sym_brace_expression;
	v->a[24024] = sym_string;
	v->a[24025] = sym_number;
	v->a[24026] = sym_simple_expansion;
	v->a[24027] = sym_expansion;
	v->a[24028] = sym_command_substitution;
	v->a[24029] = 3;
	v->a[24030] = actions(3);
	v->a[24031] = 1;
	v->a[24032] = sym_comment;
	v->a[24033] = actions(3024);
	v->a[24034] = 6;
	v->a[24035] = sym_file_descriptor;
	v->a[24036] = sym__concat;
	v->a[24037] = sym_test_operator;
	v->a[24038] = sym__bare_dollar;
	v->a[24039] = sym__brace_start;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = aux_sym_heredoc_redirect_token1;
	v->a[24041] = actions(3022);
	v->a[24042] = 36;
	v->a[24043] = anon_sym_esac;
	v->a[24044] = anon_sym_LPAREN;
	v->a[24045] = anon_sym_PIPE;
	v->a[24046] = anon_sym_SEMI_SEMI;
	v->a[24047] = anon_sym_SEMI_AMP;
	v->a[24048] = anon_sym_SEMI_SEMI_AMP;
	v->a[24049] = anon_sym_PIPE_AMP;
	v->a[24050] = anon_sym_AMP_AMP;
	v->a[24051] = anon_sym_PIPE_PIPE;
	v->a[24052] = anon_sym_LT;
	v->a[24053] = anon_sym_GT;
	v->a[24054] = anon_sym_GT_GT;
	v->a[24055] = anon_sym_AMP_GT;
	v->a[24056] = anon_sym_AMP_GT_GT;
	v->a[24057] = anon_sym_LT_AMP;
	v->a[24058] = anon_sym_GT_AMP;
	v->a[24059] = anon_sym_GT_PIPE;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = anon_sym_LT_AMP_DASH;
	v->a[24061] = anon_sym_GT_AMP_DASH;
	v->a[24062] = anon_sym_LT_LT;
	v->a[24063] = anon_sym_LT_LT_DASH;
	v->a[24064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24065] = anon_sym_AMP;
	v->a[24066] = aux_sym_concatenation_token1;
	v->a[24067] = anon_sym_DOLLAR;
	v->a[24068] = sym__special_character;
	v->a[24069] = anon_sym_DQUOTE;
	v->a[24070] = sym_raw_string;
	v->a[24071] = aux_sym_number_token1;
	v->a[24072] = aux_sym_number_token2;
	v->a[24073] = anon_sym_DOLLAR_LBRACE;
	v->a[24074] = anon_sym_DOLLAR_LPAREN;
	v->a[24075] = anon_sym_BQUOTE;
	v->a[24076] = anon_sym_DOLLAR_BQUOTE;
	v->a[24077] = sym_word;
	v->a[24078] = anon_sym_SEMI;
	v->a[24079] = 6;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = actions(3);
	v->a[24081] = 1;
	v->a[24082] = sym_comment;
	v->a[24083] = actions(3139);
	v->a[24084] = 1;
	v->a[24085] = sym_variable_name;
	v->a[24086] = actions(3137);
	v->a[24087] = 2;
	v->a[24088] = aux_sym__simple_variable_name_token1;
	v->a[24089] = aux_sym__multiline_variable_name_token1;
	v->a[24090] = actions(816);
	v->a[24091] = 3;
	v->a[24092] = sym_file_descriptor;
	v->a[24093] = sym_test_operator;
	v->a[24094] = sym__brace_start;
	v->a[24095] = actions(3135);
	v->a[24096] = 9;
	v->a[24097] = anon_sym_BANG;
	v->a[24098] = anon_sym_DASH;
	v->a[24099] = anon_sym_STAR;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
