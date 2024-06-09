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
	v->a[24000] = anon_sym_QMARK;
	v->a[24001] = anon_sym_DOLLAR;
	v->a[24002] = anon_sym_POUND;
	v->a[24003] = anon_sym_AT;
	v->a[24004] = anon_sym_0;
	v->a[24005] = anon_sym__;
	v->a[24006] = actions(407);
	v->a[24007] = 25;
	v->a[24008] = anon_sym_PIPE;
	v->a[24009] = anon_sym_AMP_AMP;
	v->a[24010] = anon_sym_PIPE_PIPE;
	v->a[24011] = anon_sym_LT;
	v->a[24012] = anon_sym_GT;
	v->a[24013] = anon_sym_GT_GT;
	v->a[24014] = anon_sym_AMP_GT;
	v->a[24015] = anon_sym_AMP_GT_GT;
	v->a[24016] = anon_sym_LT_AMP;
	v->a[24017] = anon_sym_GT_AMP;
	v->a[24018] = anon_sym_GT_PIPE;
	v->a[24019] = anon_sym_LT_AMP_DASH;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = anon_sym_GT_AMP_DASH;
	v->a[24021] = anon_sym_LT_LT;
	v->a[24022] = anon_sym_LT_LT_DASH;
	v->a[24023] = aux_sym_heredoc_redirect_token1;
	v->a[24024] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24025] = anon_sym_DQUOTE;
	v->a[24026] = sym_raw_string;
	v->a[24027] = aux_sym_number_token1;
	v->a[24028] = aux_sym_number_token2;
	v->a[24029] = anon_sym_DOLLAR_LBRACE;
	v->a[24030] = anon_sym_DOLLAR_LPAREN;
	v->a[24031] = anon_sym_BQUOTE;
	v->a[24032] = sym_word;
	v->a[24033] = 14;
	v->a[24034] = actions(3);
	v->a[24035] = 1;
	v->a[24036] = sym_comment;
	v->a[24037] = actions(565);
	v->a[24038] = 1;
	v->a[24039] = sym_file_descriptor;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = actions(761);
	v->a[24041] = 1;
	v->a[24042] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24043] = actions(763);
	v->a[24044] = 1;
	v->a[24045] = anon_sym_DOLLAR;
	v->a[24046] = actions(765);
	v->a[24047] = 1;
	v->a[24048] = anon_sym_DQUOTE;
	v->a[24049] = actions(767);
	v->a[24050] = 1;
	v->a[24051] = aux_sym_number_token1;
	v->a[24052] = actions(769);
	v->a[24053] = 1;
	v->a[24054] = aux_sym_number_token2;
	v->a[24055] = actions(771);
	v->a[24056] = 1;
	v->a[24057] = anon_sym_DOLLAR_LBRACE;
	v->a[24058] = actions(773);
	v->a[24059] = 1;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = anon_sym_DOLLAR_LPAREN;
	v->a[24061] = actions(775);
	v->a[24062] = 1;
	v->a[24063] = anon_sym_BQUOTE;
	v->a[24064] = actions(759);
	v->a[24065] = 2;
	v->a[24066] = sym_raw_string;
	v->a[24067] = sym_word;
	v->a[24068] = state(228);
	v->a[24069] = 2;
	v->a[24070] = sym_concatenation;
	v->a[24071] = aux_sym_for_statement_repeat1;
	v->a[24072] = state(541);
	v->a[24073] = 6;
	v->a[24074] = sym_arithmetic_expansion;
	v->a[24075] = sym_string;
	v->a[24076] = sym_number;
	v->a[24077] = sym_simple_expansion;
	v->a[24078] = sym_expansion;
	v->a[24079] = sym_command_substitution;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = actions(567);
	v->a[24081] = 20;
	v->a[24082] = anon_sym_PIPE;
	v->a[24083] = anon_sym_RPAREN;
	v->a[24084] = anon_sym_SEMI_SEMI;
	v->a[24085] = anon_sym_AMP_AMP;
	v->a[24086] = anon_sym_PIPE_PIPE;
	v->a[24087] = anon_sym_LT;
	v->a[24088] = anon_sym_GT;
	v->a[24089] = anon_sym_GT_GT;
	v->a[24090] = anon_sym_AMP_GT;
	v->a[24091] = anon_sym_AMP_GT_GT;
	v->a[24092] = anon_sym_LT_AMP;
	v->a[24093] = anon_sym_GT_AMP;
	v->a[24094] = anon_sym_GT_PIPE;
	v->a[24095] = anon_sym_LT_AMP_DASH;
	v->a[24096] = anon_sym_GT_AMP_DASH;
	v->a[24097] = anon_sym_LT_LT;
	v->a[24098] = anon_sym_LT_LT_DASH;
	v->a[24099] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
