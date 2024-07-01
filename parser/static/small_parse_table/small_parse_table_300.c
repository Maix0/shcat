/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_300.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1500(t_small_parse_table_array *v)
{
	v->a[30000] = anon_sym_LT_LT_EQ;
	v->a[30001] = anon_sym_GT_GT_EQ;
	v->a[30002] = anon_sym_AMP_EQ;
	v->a[30003] = anon_sym_CARET_EQ;
	v->a[30004] = anon_sym_PIPE_EQ;
	v->a[30005] = anon_sym_EQ_EQ;
	v->a[30006] = anon_sym_BANG_EQ;
	v->a[30007] = anon_sym_LT_EQ;
	v->a[30008] = anon_sym_GT_EQ;
	v->a[30009] = anon_sym_QMARK;
	v->a[30010] = 7;
	v->a[30011] = actions(870);
	v->a[30012] = 1;
	v->a[30013] = sym_comment;
	v->a[30014] = actions(1059);
	v->a[30015] = 2;
	v->a[30016] = anon_sym_GT_GT;
	v->a[30017] = anon_sym_LT_LT;
	v->a[30018] = actions(1069);
	v->a[30019] = 2;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = anon_sym_PLUS;
	v->a[30021] = anon_sym_DASH;
	v->a[30022] = actions(1075);
	v->a[30023] = 2;
	v->a[30024] = anon_sym_PLUS_PLUS2;
	v->a[30025] = anon_sym_DASH_DASH2;
	v->a[30026] = actions(1071);
	v->a[30027] = 3;
	v->a[30028] = anon_sym_STAR;
	v->a[30029] = anon_sym_SLASH;
	v->a[30030] = anon_sym_PERCENT;
	v->a[30031] = actions(959);
	v->a[30032] = 6;
	v->a[30033] = anon_sym_PIPE;
	v->a[30034] = anon_sym_EQ;
	v->a[30035] = anon_sym_LT;
	v->a[30036] = anon_sym_GT;
	v->a[30037] = anon_sym_CARET;
	v->a[30038] = anon_sym_AMP;
	v->a[30039] = actions(961);
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = 18;
	v->a[30041] = anon_sym_RPAREN;
	v->a[30042] = anon_sym_AMP_AMP;
	v->a[30043] = anon_sym_PIPE_PIPE;
	v->a[30044] = anon_sym_PLUS_EQ;
	v->a[30045] = anon_sym_DASH_EQ;
	v->a[30046] = anon_sym_STAR_EQ;
	v->a[30047] = anon_sym_SLASH_EQ;
	v->a[30048] = anon_sym_PERCENT_EQ;
	v->a[30049] = anon_sym_LT_LT_EQ;
	v->a[30050] = anon_sym_GT_GT_EQ;
	v->a[30051] = anon_sym_AMP_EQ;
	v->a[30052] = anon_sym_CARET_EQ;
	v->a[30053] = anon_sym_PIPE_EQ;
	v->a[30054] = anon_sym_EQ_EQ;
	v->a[30055] = anon_sym_BANG_EQ;
	v->a[30056] = anon_sym_LT_EQ;
	v->a[30057] = anon_sym_GT_EQ;
	v->a[30058] = anon_sym_QMARK;
	v->a[30059] = 5;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = actions(870);
	v->a[30061] = 1;
	v->a[30062] = sym_comment;
	v->a[30063] = actions(1075);
	v->a[30064] = 2;
	v->a[30065] = anon_sym_PLUS_PLUS2;
	v->a[30066] = anon_sym_DASH_DASH2;
	v->a[30067] = actions(1071);
	v->a[30068] = 3;
	v->a[30069] = anon_sym_STAR;
	v->a[30070] = anon_sym_SLASH;
	v->a[30071] = anon_sym_PERCENT;
	v->a[30072] = actions(872);
	v->a[30073] = 10;
	v->a[30074] = anon_sym_PIPE;
	v->a[30075] = anon_sym_EQ;
	v->a[30076] = anon_sym_LT;
	v->a[30077] = anon_sym_GT;
	v->a[30078] = anon_sym_GT_GT;
	v->a[30079] = anon_sym_LT_LT;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = anon_sym_CARET;
	v->a[30081] = anon_sym_AMP;
	v->a[30082] = anon_sym_PLUS;
	v->a[30083] = anon_sym_DASH;
	v->a[30084] = actions(874);
	v->a[30085] = 18;
	v->a[30086] = anon_sym_RPAREN;
	v->a[30087] = anon_sym_AMP_AMP;
	v->a[30088] = anon_sym_PIPE_PIPE;
	v->a[30089] = anon_sym_PLUS_EQ;
	v->a[30090] = anon_sym_DASH_EQ;
	v->a[30091] = anon_sym_STAR_EQ;
	v->a[30092] = anon_sym_SLASH_EQ;
	v->a[30093] = anon_sym_PERCENT_EQ;
	v->a[30094] = anon_sym_LT_LT_EQ;
	v->a[30095] = anon_sym_GT_GT_EQ;
	v->a[30096] = anon_sym_AMP_EQ;
	v->a[30097] = anon_sym_CARET_EQ;
	v->a[30098] = anon_sym_PIPE_EQ;
	v->a[30099] = anon_sym_EQ_EQ;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
