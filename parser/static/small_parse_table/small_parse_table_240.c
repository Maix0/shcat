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
	v->a[24000] = 2;
	v->a[24001] = anon_sym_GT_GT;
	v->a[24002] = anon_sym_LT_LT;
	v->a[24003] = actions(668);
	v->a[24004] = 2;
	v->a[24005] = anon_sym_EQ_EQ;
	v->a[24006] = anon_sym_BANG_EQ;
	v->a[24007] = actions(670);
	v->a[24008] = 2;
	v->a[24009] = anon_sym_LT_EQ;
	v->a[24010] = anon_sym_GT_EQ;
	v->a[24011] = actions(672);
	v->a[24012] = 2;
	v->a[24013] = anon_sym_PLUS;
	v->a[24014] = anon_sym_DASH;
	v->a[24015] = actions(674);
	v->a[24016] = 3;
	v->a[24017] = anon_sym_STAR;
	v->a[24018] = anon_sym_SLASH;
	v->a[24019] = anon_sym_PERCENT;
	small_parse_table_1201(v);
}

void	small_parse_table_1201(t_small_parse_table_array *v)
{
	v->a[24020] = actions(802);
	v->a[24021] = 10;
	v->a[24022] = anon_sym_PLUS_EQ;
	v->a[24023] = anon_sym_DASH_EQ;
	v->a[24024] = anon_sym_STAR_EQ;
	v->a[24025] = anon_sym_SLASH_EQ;
	v->a[24026] = anon_sym_PERCENT_EQ;
	v->a[24027] = anon_sym_LT_LT_EQ;
	v->a[24028] = anon_sym_GT_GT_EQ;
	v->a[24029] = anon_sym_AMP_EQ;
	v->a[24030] = anon_sym_CARET_EQ;
	v->a[24031] = anon_sym_PIPE_EQ;
	v->a[24032] = 7;
	v->a[24033] = actions(501);
	v->a[24034] = 1;
	v->a[24035] = sym_comment;
	v->a[24036] = actions(762);
	v->a[24037] = 2;
	v->a[24038] = anon_sym_GT_GT;
	v->a[24039] = anon_sym_LT_LT;
	small_parse_table_1202(v);
}

void	small_parse_table_1202(t_small_parse_table_array *v)
{
	v->a[24040] = actions(772);
	v->a[24041] = 2;
	v->a[24042] = anon_sym_PLUS;
	v->a[24043] = anon_sym_DASH;
	v->a[24044] = actions(778);
	v->a[24045] = 2;
	v->a[24046] = anon_sym_PLUS_PLUS2;
	v->a[24047] = anon_sym_DASH_DASH2;
	v->a[24048] = actions(774);
	v->a[24049] = 3;
	v->a[24050] = anon_sym_STAR;
	v->a[24051] = anon_sym_SLASH;
	v->a[24052] = anon_sym_PERCENT;
	v->a[24053] = actions(495);
	v->a[24054] = 6;
	v->a[24055] = anon_sym_PIPE;
	v->a[24056] = anon_sym_EQ;
	v->a[24057] = anon_sym_LT;
	v->a[24058] = anon_sym_GT;
	v->a[24059] = anon_sym_CARET;
	small_parse_table_1203(v);
}

void	small_parse_table_1203(t_small_parse_table_array *v)
{
	v->a[24060] = anon_sym_AMP;
	v->a[24061] = actions(497);
	v->a[24062] = 18;
	v->a[24063] = anon_sym_RPAREN;
	v->a[24064] = anon_sym_AMP_AMP;
	v->a[24065] = anon_sym_PIPE_PIPE;
	v->a[24066] = anon_sym_PLUS_EQ;
	v->a[24067] = anon_sym_DASH_EQ;
	v->a[24068] = anon_sym_STAR_EQ;
	v->a[24069] = anon_sym_SLASH_EQ;
	v->a[24070] = anon_sym_PERCENT_EQ;
	v->a[24071] = anon_sym_LT_LT_EQ;
	v->a[24072] = anon_sym_GT_GT_EQ;
	v->a[24073] = anon_sym_AMP_EQ;
	v->a[24074] = anon_sym_CARET_EQ;
	v->a[24075] = anon_sym_PIPE_EQ;
	v->a[24076] = anon_sym_EQ_EQ;
	v->a[24077] = anon_sym_BANG_EQ;
	v->a[24078] = anon_sym_LT_EQ;
	v->a[24079] = anon_sym_GT_EQ;
	small_parse_table_1204(v);
}

void	small_parse_table_1204(t_small_parse_table_array *v)
{
	v->a[24080] = anon_sym_QMARK;
	v->a[24081] = 17;
	v->a[24082] = actions(501);
	v->a[24083] = 1;
	v->a[24084] = sym_comment;
	v->a[24085] = actions(754);
	v->a[24086] = 1;
	v->a[24087] = anon_sym_PIPE;
	v->a[24088] = actions(756);
	v->a[24089] = 1;
	v->a[24090] = anon_sym_AMP_AMP;
	v->a[24091] = actions(758);
	v->a[24092] = 1;
	v->a[24093] = anon_sym_PIPE_PIPE;
	v->a[24094] = actions(764);
	v->a[24095] = 1;
	v->a[24096] = anon_sym_CARET;
	v->a[24097] = actions(766);
	v->a[24098] = 1;
	v->a[24099] = anon_sym_AMP;
	small_parse_table_1205(v);
}

/* EOF small_parse_table_240.c */
