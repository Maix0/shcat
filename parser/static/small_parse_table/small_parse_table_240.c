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
	v->a[24000] = anon_sym_GT_AMP_DASH;
	v->a[24001] = anon_sym_LT_LT;
	v->a[24002] = anon_sym_LT_LT_DASH;
	v->a[24003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24004] = anon_sym_DQUOTE;
	v->a[24005] = sym_raw_string;
	v->a[24006] = sym_number;
	v->a[24007] = anon_sym_DOLLAR_LBRACE;
	v->a[24008] = anon_sym_DOLLAR_LPAREN;
	v->a[24009] = anon_sym_BQUOTE;
	v->a[24010] = sym_word;
	v->a[24011] = 13;
	v->a[24012] = actions(3);
	v->a[24013] = 1;
	v->a[24014] = sym_comment;
	v->a[24015] = actions(459);
	v->a[24016] = 1;
	v->a[24017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24018] = actions(461);
	v->a[24019] = 1;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = anon_sym_DOLLAR;
	v->a[24021] = actions(463);
	v->a[24022] = 1;
	v->a[24023] = anon_sym_DQUOTE;
	v->a[24024] = actions(465);
	v->a[24025] = 1;
	v->a[24026] = anon_sym_DOLLAR_LBRACE;
	v->a[24027] = actions(467);
	v->a[24028] = 1;
	v->a[24029] = anon_sym_DOLLAR_LPAREN;
	v->a[24030] = actions(473);
	v->a[24031] = 1;
	v->a[24032] = sym__bare_dollar;
	v->a[24033] = actions(543);
	v->a[24034] = 1;
	v->a[24035] = sym_file_descriptor;
	v->a[24036] = state(224);
	v->a[24037] = 1;
	v->a[24038] = aux_sym_command_repeat2;
	v->a[24039] = state(718);
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = 1;
	v->a[24041] = sym_concatenation;
	v->a[24042] = actions(511);
	v->a[24043] = 3;
	v->a[24044] = sym_raw_string;
	v->a[24045] = sym_number;
	v->a[24046] = sym_word;
	v->a[24047] = state(493);
	v->a[24048] = 5;
	v->a[24049] = sym_arithmetic_expansion;
	v->a[24050] = sym_string;
	v->a[24051] = sym_simple_expansion;
	v->a[24052] = sym_expansion;
	v->a[24053] = sym_command_substitution;
	v->a[24054] = actions(541);
	v->a[24055] = 18;
	v->a[24056] = anon_sym_PIPE;
	v->a[24057] = anon_sym_SEMI_SEMI;
	v->a[24058] = anon_sym_AMP_AMP;
	v->a[24059] = anon_sym_PIPE_PIPE;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = anon_sym_LT;
	v->a[24061] = anon_sym_GT;
	v->a[24062] = anon_sym_GT_GT;
	v->a[24063] = anon_sym_LT_AMP;
	v->a[24064] = anon_sym_GT_AMP;
	v->a[24065] = anon_sym_GT_PIPE;
	v->a[24066] = anon_sym_LT_AMP_DASH;
	v->a[24067] = anon_sym_GT_AMP_DASH;
	v->a[24068] = anon_sym_LT_LT;
	v->a[24069] = anon_sym_LT_LT_DASH;
	v->a[24070] = aux_sym_heredoc_redirect_token1;
	v->a[24071] = anon_sym_AMP;
	v->a[24072] = anon_sym_BQUOTE;
	v->a[24073] = anon_sym_SEMI;
	v->a[24074] = 12;
	v->a[24075] = actions(3);
	v->a[24076] = 1;
	v->a[24077] = sym_comment;
	v->a[24078] = actions(577);
	v->a[24079] = 1;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = sym_file_descriptor;
	v->a[24081] = actions(824);
	v->a[24082] = 1;
	v->a[24083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24084] = actions(827);
	v->a[24085] = 1;
	v->a[24086] = anon_sym_DOLLAR;
	v->a[24087] = actions(830);
	v->a[24088] = 1;
	v->a[24089] = anon_sym_DQUOTE;
	v->a[24090] = actions(833);
	v->a[24091] = 1;
	v->a[24092] = anon_sym_DOLLAR_LBRACE;
	v->a[24093] = actions(836);
	v->a[24094] = 1;
	v->a[24095] = anon_sym_DOLLAR_LPAREN;
	v->a[24096] = actions(839);
	v->a[24097] = 1;
	v->a[24098] = anon_sym_BQUOTE;
	v->a[24099] = state(242);
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
