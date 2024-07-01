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
	v->a[24000] = 1;
	v->a[24001] = anon_sym_PIPE_PIPE;
	v->a[24002] = actions(920);
	v->a[24003] = 1;
	v->a[24004] = anon_sym_EQ;
	v->a[24005] = actions(928);
	v->a[24006] = 1;
	v->a[24007] = anon_sym_CARET;
	v->a[24008] = actions(930);
	v->a[24009] = 1;
	v->a[24010] = anon_sym_AMP;
	v->a[24011] = actions(940);
	v->a[24012] = 1;
	v->a[24013] = anon_sym_QMARK;
	v->a[24014] = actions(922);
	v->a[24015] = 2;
	v->a[24016] = anon_sym_LT;
	v->a[24017] = anon_sym_GT;
	v->a[24018] = actions(924);
	v->a[24019] = 2;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = anon_sym_GT_GT;
	v->a[24021] = anon_sym_LT_LT;
	v->a[24022] = actions(932);
	v->a[24023] = 2;
	v->a[24024] = anon_sym_EQ_EQ;
	v->a[24025] = anon_sym_BANG_EQ;
	v->a[24026] = actions(934);
	v->a[24027] = 2;
	v->a[24028] = anon_sym_LT_EQ;
	v->a[24029] = anon_sym_GT_EQ;
	v->a[24030] = actions(936);
	v->a[24031] = 2;
	v->a[24032] = anon_sym_PLUS;
	v->a[24033] = anon_sym_DASH;
	v->a[24034] = actions(942);
	v->a[24035] = 2;
	v->a[24036] = anon_sym_PLUS_PLUS2;
	v->a[24037] = anon_sym_DASH_DASH2;
	v->a[24038] = actions(938);
	v->a[24039] = 3;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = anon_sym_STAR;
	v->a[24041] = anon_sym_SLASH;
	v->a[24042] = anon_sym_PERCENT;
	v->a[24043] = actions(926);
	v->a[24044] = 10;
	v->a[24045] = anon_sym_PLUS_EQ;
	v->a[24046] = anon_sym_DASH_EQ;
	v->a[24047] = anon_sym_STAR_EQ;
	v->a[24048] = anon_sym_SLASH_EQ;
	v->a[24049] = anon_sym_PERCENT_EQ;
	v->a[24050] = anon_sym_LT_LT_EQ;
	v->a[24051] = anon_sym_GT_GT_EQ;
	v->a[24052] = anon_sym_AMP_EQ;
	v->a[24053] = anon_sym_CARET_EQ;
	v->a[24054] = anon_sym_PIPE_EQ;
	v->a[24055] = 12;
	v->a[24056] = actions(3);
	v->a[24057] = 1;
	v->a[24058] = sym_comment;
	v->a[24059] = actions(499);
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = 1;
	v->a[24061] = sym_file_descriptor;
	v->a[24062] = actions(824);
	v->a[24063] = 1;
	v->a[24064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24065] = actions(827);
	v->a[24066] = 1;
	v->a[24067] = anon_sym_DOLLAR;
	v->a[24068] = actions(830);
	v->a[24069] = 1;
	v->a[24070] = anon_sym_DQUOTE;
	v->a[24071] = actions(833);
	v->a[24072] = 1;
	v->a[24073] = anon_sym_DOLLAR_LBRACE;
	v->a[24074] = actions(836);
	v->a[24075] = 1;
	v->a[24076] = anon_sym_DOLLAR_LPAREN;
	v->a[24077] = actions(839);
	v->a[24078] = 1;
	v->a[24079] = anon_sym_BQUOTE;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = state(263);
	v->a[24081] = 2;
	v->a[24082] = sym_concatenation;
	v->a[24083] = aux_sym_for_statement_repeat1;
	v->a[24084] = actions(944);
	v->a[24085] = 3;
	v->a[24086] = sym_raw_string;
	v->a[24087] = sym_number;
	v->a[24088] = sym_word;
	v->a[24089] = state(616);
	v->a[24090] = 5;
	v->a[24091] = sym_arithmetic_expansion;
	v->a[24092] = sym_string;
	v->a[24093] = sym_simple_expansion;
	v->a[24094] = sym_expansion;
	v->a[24095] = sym_command_substitution;
	v->a[24096] = actions(504);
	v->a[24097] = 16;
	v->a[24098] = anon_sym_PIPE;
	v->a[24099] = anon_sym_SEMI_SEMI;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
