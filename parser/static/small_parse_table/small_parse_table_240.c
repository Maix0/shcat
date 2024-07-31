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
	v->a[24000] = anon_sym_DOLLAR_LBRACE;
	v->a[24001] = anon_sym_DOLLAR_LPAREN;
	v->a[24002] = anon_sym_BQUOTE;
	v->a[24003] = sym_word;
	v->a[24004] = actions(746);
	v->a[24005] = 15;
	v->a[24006] = anon_sym_PIPE;
	v->a[24007] = anon_sym_SEMI_SEMI;
	v->a[24008] = anon_sym_AMP_AMP;
	v->a[24009] = anon_sym_PIPE_PIPE;
	v->a[24010] = anon_sym_LT;
	v->a[24011] = anon_sym_GT;
	v->a[24012] = anon_sym_GT_GT;
	v->a[24013] = anon_sym_LT_AMP;
	v->a[24014] = anon_sym_GT_AMP;
	v->a[24015] = anon_sym_GT_PIPE;
	v->a[24016] = anon_sym_LT_GT;
	v->a[24017] = anon_sym_LT_LT;
	v->a[24018] = anon_sym_LT_LT_DASH;
	v->a[24019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = anon_sym_SEMI;
	v->a[24021] = 18;
	v->a[24022] = actions(3);
	v->a[24023] = 1;
	v->a[24024] = sym_comment;
	v->a[24025] = actions(922);
	v->a[24026] = 1;
	v->a[24027] = anon_sym_PIPE;
	v->a[24028] = actions(928);
	v->a[24029] = 1;
	v->a[24030] = aux_sym_heredoc_redirect_token1;
	v->a[24031] = actions(930);
	v->a[24032] = 1;
	v->a[24033] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24034] = actions(932);
	v->a[24035] = 1;
	v->a[24036] = anon_sym_DOLLAR;
	v->a[24037] = actions(934);
	v->a[24038] = 1;
	v->a[24039] = anon_sym_DQUOTE;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = actions(936);
	v->a[24041] = 1;
	v->a[24042] = anon_sym_DOLLAR_LBRACE;
	v->a[24043] = actions(938);
	v->a[24044] = 1;
	v->a[24045] = anon_sym_DOLLAR_LPAREN;
	v->a[24046] = actions(940);
	v->a[24047] = 1;
	v->a[24048] = anon_sym_BQUOTE;
	v->a[24049] = state(1046);
	v->a[24050] = 1;
	v->a[24051] = aux_sym__heredoc_command;
	v->a[24052] = state(1465);
	v->a[24053] = 1;
	v->a[24054] = sym_concatenation;
	v->a[24055] = state(1711);
	v->a[24056] = 1;
	v->a[24057] = sym__heredoc_expression;
	v->a[24058] = state(1712);
	v->a[24059] = 1;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = sym__heredoc_pipeline;
	v->a[24061] = actions(924);
	v->a[24062] = 2;
	v->a[24063] = anon_sym_AMP_AMP;
	v->a[24064] = anon_sym_PIPE_PIPE;
	v->a[24065] = state(1281);
	v->a[24066] = 2;
	v->a[24067] = sym_file_redirect;
	v->a[24068] = aux_sym_redirected_statement_repeat2;
	v->a[24069] = actions(920);
	v->a[24070] = 3;
	v->a[24071] = sym_raw_string;
	v->a[24072] = sym_number;
	v->a[24073] = sym_word;
	v->a[24074] = state(1287);
	v->a[24075] = 5;
	v->a[24076] = sym_arithmetic_expansion;
	v->a[24077] = sym_string;
	v->a[24078] = sym_simple_expansion;
	v->a[24079] = sym_expansion;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = sym_command_substitution;
	v->a[24081] = actions(926);
	v->a[24082] = 7;
	v->a[24083] = anon_sym_LT;
	v->a[24084] = anon_sym_GT;
	v->a[24085] = anon_sym_GT_GT;
	v->a[24086] = anon_sym_LT_AMP;
	v->a[24087] = anon_sym_GT_AMP;
	v->a[24088] = anon_sym_GT_PIPE;
	v->a[24089] = anon_sym_LT_GT;
	v->a[24090] = 11;
	v->a[24091] = actions(3);
	v->a[24092] = 1;
	v->a[24093] = sym_comment;
	v->a[24094] = actions(744);
	v->a[24095] = 1;
	v->a[24096] = anon_sym_SEMI_SEMI;
	v->a[24097] = actions(746);
	v->a[24098] = 1;
	v->a[24099] = anon_sym_PIPE;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
