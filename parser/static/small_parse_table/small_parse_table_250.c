/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_250.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1250(t_small_parse_table_array *v)
{
	v->a[25000] = 1;
	v->a[25001] = sym_comment;
	v->a[25002] = actions(754);
	v->a[25003] = 1;
	v->a[25004] = anon_sym_PIPE;
	v->a[25005] = actions(756);
	v->a[25006] = 1;
	v->a[25007] = anon_sym_AMP_AMP;
	v->a[25008] = actions(758);
	v->a[25009] = 1;
	v->a[25010] = anon_sym_PIPE_PIPE;
	v->a[25011] = actions(764);
	v->a[25012] = 1;
	v->a[25013] = anon_sym_CARET;
	v->a[25014] = actions(766);
	v->a[25015] = 1;
	v->a[25016] = anon_sym_AMP;
	v->a[25017] = actions(776);
	v->a[25018] = 1;
	v->a[25019] = anon_sym_QMARK;
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = actions(895);
	v->a[25021] = 1;
	v->a[25022] = anon_sym_EQ;
	v->a[25023] = actions(942);
	v->a[25024] = 1;
	v->a[25025] = anon_sym_RPAREN;
	v->a[25026] = actions(760);
	v->a[25027] = 2;
	v->a[25028] = anon_sym_LT;
	v->a[25029] = anon_sym_GT;
	v->a[25030] = actions(762);
	v->a[25031] = 2;
	v->a[25032] = anon_sym_GT_GT;
	v->a[25033] = anon_sym_LT_LT;
	v->a[25034] = actions(768);
	v->a[25035] = 2;
	v->a[25036] = anon_sym_EQ_EQ;
	v->a[25037] = anon_sym_BANG_EQ;
	v->a[25038] = actions(770);
	v->a[25039] = 2;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = anon_sym_LT_EQ;
	v->a[25041] = anon_sym_GT_EQ;
	v->a[25042] = actions(772);
	v->a[25043] = 2;
	v->a[25044] = anon_sym_PLUS;
	v->a[25045] = anon_sym_DASH;
	v->a[25046] = actions(778);
	v->a[25047] = 2;
	v->a[25048] = anon_sym_PLUS_PLUS2;
	v->a[25049] = anon_sym_DASH_DASH2;
	v->a[25050] = actions(774);
	v->a[25051] = 3;
	v->a[25052] = anon_sym_STAR;
	v->a[25053] = anon_sym_SLASH;
	v->a[25054] = anon_sym_PERCENT;
	v->a[25055] = actions(897);
	v->a[25056] = 10;
	v->a[25057] = anon_sym_PLUS_EQ;
	v->a[25058] = anon_sym_DASH_EQ;
	v->a[25059] = anon_sym_STAR_EQ;
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = anon_sym_SLASH_EQ;
	v->a[25061] = anon_sym_PERCENT_EQ;
	v->a[25062] = anon_sym_LT_LT_EQ;
	v->a[25063] = anon_sym_GT_GT_EQ;
	v->a[25064] = anon_sym_AMP_EQ;
	v->a[25065] = anon_sym_CARET_EQ;
	v->a[25066] = anon_sym_PIPE_EQ;
	v->a[25067] = 17;
	v->a[25068] = actions(501);
	v->a[25069] = 1;
	v->a[25070] = sym_comment;
	v->a[25071] = actions(650);
	v->a[25072] = 1;
	v->a[25073] = anon_sym_PIPE;
	v->a[25074] = actions(652);
	v->a[25075] = 1;
	v->a[25076] = anon_sym_AMP_AMP;
	v->a[25077] = actions(654);
	v->a[25078] = 1;
	v->a[25079] = anon_sym_PIPE_PIPE;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = actions(664);
	v->a[25081] = 1;
	v->a[25082] = anon_sym_CARET;
	v->a[25083] = actions(666);
	v->a[25084] = 1;
	v->a[25085] = anon_sym_AMP;
	v->a[25086] = actions(721);
	v->a[25087] = 1;
	v->a[25088] = anon_sym_QMARK;
	v->a[25089] = actions(723);
	v->a[25090] = 1;
	v->a[25091] = anon_sym_EQ;
	v->a[25092] = actions(944);
	v->a[25093] = 1;
	v->a[25094] = anon_sym_RPAREN_RPAREN;
	v->a[25095] = actions(499);
	v->a[25096] = 2;
	v->a[25097] = anon_sym_PLUS_PLUS2;
	v->a[25098] = anon_sym_DASH_DASH2;
	v->a[25099] = actions(658);
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
