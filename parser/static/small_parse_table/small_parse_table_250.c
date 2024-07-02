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
	v->a[25000] = anon_sym_GT_EQ;
	v->a[25001] = anon_sym_QMARK;
	v->a[25002] = anon_sym_PLUS_PLUS2;
	v->a[25003] = anon_sym_DASH_DASH2;
	v->a[25004] = 17;
	v->a[25005] = actions(668);
	v->a[25006] = 1;
	v->a[25007] = anon_sym_AMP;
	v->a[25008] = actions(680);
	v->a[25009] = 1;
	v->a[25010] = sym_comment;
	v->a[25011] = actions(730);
	v->a[25012] = 1;
	v->a[25013] = anon_sym_CARET;
	v->a[25014] = actions(732);
	v->a[25015] = 1;
	v->a[25016] = anon_sym_PIPE;
	v->a[25017] = actions(734);
	v->a[25018] = 1;
	v->a[25019] = anon_sym_AMP_AMP;
	small_parse_table_1251(v);
}

void	small_parse_table_1251(t_small_parse_table_array *v)
{
	v->a[25020] = actions(736);
	v->a[25021] = 1;
	v->a[25022] = anon_sym_PIPE_PIPE;
	v->a[25023] = actions(738);
	v->a[25024] = 1;
	v->a[25025] = anon_sym_QMARK;
	v->a[25026] = actions(740);
	v->a[25027] = 1;
	v->a[25028] = anon_sym_EQ;
	v->a[25029] = actions(945);
	v->a[25030] = 1;
	v->a[25031] = anon_sym_RPAREN_RPAREN;
	v->a[25032] = actions(664);
	v->a[25033] = 2;
	v->a[25034] = anon_sym_LT;
	v->a[25035] = anon_sym_GT;
	v->a[25036] = actions(666);
	v->a[25037] = 2;
	v->a[25038] = anon_sym_GT_GT;
	v->a[25039] = anon_sym_LT_LT;
	small_parse_table_1252(v);
}

void	small_parse_table_1252(t_small_parse_table_array *v)
{
	v->a[25040] = actions(670);
	v->a[25041] = 2;
	v->a[25042] = anon_sym_EQ_EQ;
	v->a[25043] = anon_sym_BANG_EQ;
	v->a[25044] = actions(672);
	v->a[25045] = 2;
	v->a[25046] = anon_sym_LT_EQ;
	v->a[25047] = anon_sym_GT_EQ;
	v->a[25048] = actions(674);
	v->a[25049] = 2;
	v->a[25050] = anon_sym_PLUS;
	v->a[25051] = anon_sym_DASH;
	v->a[25052] = actions(678);
	v->a[25053] = 2;
	v->a[25054] = anon_sym_PLUS_PLUS2;
	v->a[25055] = anon_sym_DASH_DASH2;
	v->a[25056] = actions(676);
	v->a[25057] = 3;
	v->a[25058] = anon_sym_STAR;
	v->a[25059] = anon_sym_SLASH;
	small_parse_table_1253(v);
}

void	small_parse_table_1253(t_small_parse_table_array *v)
{
	v->a[25060] = anon_sym_PERCENT;
	v->a[25061] = actions(912);
	v->a[25062] = 10;
	v->a[25063] = anon_sym_PLUS_EQ;
	v->a[25064] = anon_sym_DASH_EQ;
	v->a[25065] = anon_sym_STAR_EQ;
	v->a[25066] = anon_sym_SLASH_EQ;
	v->a[25067] = anon_sym_PERCENT_EQ;
	v->a[25068] = anon_sym_LT_LT_EQ;
	v->a[25069] = anon_sym_GT_GT_EQ;
	v->a[25070] = anon_sym_AMP_EQ;
	v->a[25071] = anon_sym_CARET_EQ;
	v->a[25072] = anon_sym_PIPE_EQ;
	v->a[25073] = 7;
	v->a[25074] = actions(680);
	v->a[25075] = 1;
	v->a[25076] = sym_comment;
	v->a[25077] = actions(947);
	v->a[25078] = 2;
	v->a[25079] = anon_sym_GT_GT;
	small_parse_table_1254(v);
}

void	small_parse_table_1254(t_small_parse_table_array *v)
{
	v->a[25080] = anon_sym_LT_LT;
	v->a[25081] = actions(949);
	v->a[25082] = 2;
	v->a[25083] = anon_sym_PLUS;
	v->a[25084] = anon_sym_DASH;
	v->a[25085] = actions(953);
	v->a[25086] = 2;
	v->a[25087] = anon_sym_PLUS_PLUS2;
	v->a[25088] = anon_sym_DASH_DASH2;
	v->a[25089] = actions(951);
	v->a[25090] = 3;
	v->a[25091] = anon_sym_STAR;
	v->a[25092] = anon_sym_SLASH;
	v->a[25093] = anon_sym_PERCENT;
	v->a[25094] = actions(682);
	v->a[25095] = 6;
	v->a[25096] = anon_sym_PIPE;
	v->a[25097] = anon_sym_EQ;
	v->a[25098] = anon_sym_LT;
	v->a[25099] = anon_sym_GT;
	small_parse_table_1255(v);
}

/* EOF small_parse_table_250.c */
