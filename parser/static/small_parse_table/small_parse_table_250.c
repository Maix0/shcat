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
	v->a[25000] = anon_sym_PIPE_PIPE;
	v->a[25001] = anon_sym_PLUS_EQ;
	v->a[25002] = anon_sym_DASH_EQ;
	v->a[25003] = anon_sym_STAR_EQ;
	v->a[25004] = anon_sym_SLASH_EQ;
	v->a[25005] = anon_sym_PERCENT_EQ;
	v->a[25006] = anon_sym_LT_LT_EQ;
	v->a[25007] = anon_sym_GT_GT_EQ;
	v->a[25008] = anon_sym_AMP_EQ;
	v->a[25009] = anon_sym_CARET_EQ;
	v->a[25010] = anon_sym_PIPE_EQ;
	v->a[25011] = anon_sym_EQ_EQ;
	v->a[25012] = anon_sym_BANG_EQ;
	v->a[25013] = anon_sym_LT_EQ;
	v->a[25014] = anon_sym_GT_EQ;
	v->a[25015] = anon_sym_QMARK;
	v->a[25016] = anon_sym_PLUS_PLUS2;
	v->a[25017] = anon_sym_DASH_DASH2;
	v->a[25018] = 17;
	v->a[25019] = actions(664);
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = 1;
	v->a[25021] = sym_comment;
	v->a[25022] = actions(702);
	v->a[25023] = 1;
	v->a[25024] = anon_sym_CARET;
	v->a[25025] = actions(704);
	v->a[25026] = 1;
	v->a[25027] = anon_sym_AMP;
	v->a[25028] = actions(710);
	v->a[25029] = 1;
	v->a[25030] = anon_sym_PIPE;
	v->a[25031] = actions(712);
	v->a[25032] = 1;
	v->a[25033] = anon_sym_AMP_AMP;
	v->a[25034] = actions(714);
	v->a[25035] = 1;
	v->a[25036] = anon_sym_PIPE_PIPE;
	v->a[25037] = actions(716);
	v->a[25038] = 1;
	v->a[25039] = anon_sym_QMARK;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = actions(718);
	v->a[25041] = 1;
	v->a[25042] = anon_sym_EQ;
	v->a[25043] = actions(968);
	v->a[25044] = 1;
	v->a[25045] = anon_sym_RPAREN_RPAREN;
	v->a[25046] = actions(684);
	v->a[25047] = 2;
	v->a[25048] = anon_sym_GT_GT;
	v->a[25049] = anon_sym_LT_LT;
	v->a[25050] = actions(686);
	v->a[25051] = 2;
	v->a[25052] = anon_sym_PLUS;
	v->a[25053] = anon_sym_DASH;
	v->a[25054] = actions(690);
	v->a[25055] = 2;
	v->a[25056] = anon_sym_PLUS_PLUS2;
	v->a[25057] = anon_sym_DASH_DASH2;
	v->a[25058] = actions(700);
	v->a[25059] = 2;
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = anon_sym_LT;
	v->a[25061] = anon_sym_GT;
	v->a[25062] = actions(706);
	v->a[25063] = 2;
	v->a[25064] = anon_sym_EQ_EQ;
	v->a[25065] = anon_sym_BANG_EQ;
	v->a[25066] = actions(708);
	v->a[25067] = 2;
	v->a[25068] = anon_sym_LT_EQ;
	v->a[25069] = anon_sym_GT_EQ;
	v->a[25070] = actions(688);
	v->a[25071] = 3;
	v->a[25072] = anon_sym_STAR;
	v->a[25073] = anon_sym_SLASH;
	v->a[25074] = anon_sym_PERCENT;
	v->a[25075] = actions(953);
	v->a[25076] = 10;
	v->a[25077] = anon_sym_PLUS_EQ;
	v->a[25078] = anon_sym_DASH_EQ;
	v->a[25079] = anon_sym_STAR_EQ;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = anon_sym_SLASH_EQ;
	v->a[25081] = anon_sym_PERCENT_EQ;
	v->a[25082] = anon_sym_LT_LT_EQ;
	v->a[25083] = anon_sym_GT_GT_EQ;
	v->a[25084] = anon_sym_AMP_EQ;
	v->a[25085] = anon_sym_CARET_EQ;
	v->a[25086] = anon_sym_PIPE_EQ;
	v->a[25087] = 3;
	v->a[25088] = actions(664);
	v->a[25089] = 1;
	v->a[25090] = sym_comment;
	v->a[25091] = actions(768);
	v->a[25092] = 13;
	v->a[25093] = anon_sym_PIPE;
	v->a[25094] = anon_sym_EQ;
	v->a[25095] = anon_sym_LT;
	v->a[25096] = anon_sym_GT;
	v->a[25097] = anon_sym_GT_GT;
	v->a[25098] = anon_sym_LT_LT;
	v->a[25099] = anon_sym_CARET;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
