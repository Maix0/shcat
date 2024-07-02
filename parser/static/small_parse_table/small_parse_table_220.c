/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_220.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1100(t_small_parse_table_array *v)
{
	v->a[22000] = anon_sym_STAR_EQ;
	v->a[22001] = anon_sym_SLASH_EQ;
	v->a[22002] = anon_sym_PERCENT_EQ;
	v->a[22003] = anon_sym_LT_LT_EQ;
	v->a[22004] = anon_sym_GT_GT_EQ;
	v->a[22005] = anon_sym_AMP_EQ;
	v->a[22006] = anon_sym_CARET_EQ;
	v->a[22007] = anon_sym_PIPE_EQ;
	v->a[22008] = anon_sym_EQ_EQ;
	v->a[22009] = anon_sym_BANG_EQ;
	v->a[22010] = anon_sym_LT_EQ;
	v->a[22011] = anon_sym_GT_EQ;
	v->a[22012] = anon_sym_QMARK;
	v->a[22013] = anon_sym_COLON;
	v->a[22014] = anon_sym_PLUS_PLUS2;
	v->a[22015] = anon_sym_DASH_DASH2;
	v->a[22016] = 10;
	v->a[22017] = actions(680);
	v->a[22018] = 1;
	v->a[22019] = sym_comment;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = actions(664);
	v->a[22021] = 2;
	v->a[22022] = anon_sym_LT;
	v->a[22023] = anon_sym_GT;
	v->a[22024] = actions(666);
	v->a[22025] = 2;
	v->a[22026] = anon_sym_GT_GT;
	v->a[22027] = anon_sym_LT_LT;
	v->a[22028] = actions(670);
	v->a[22029] = 2;
	v->a[22030] = anon_sym_EQ_EQ;
	v->a[22031] = anon_sym_BANG_EQ;
	v->a[22032] = actions(672);
	v->a[22033] = 2;
	v->a[22034] = anon_sym_LT_EQ;
	v->a[22035] = anon_sym_GT_EQ;
	v->a[22036] = actions(674);
	v->a[22037] = 2;
	v->a[22038] = anon_sym_PLUS;
	v->a[22039] = anon_sym_DASH;
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = actions(678);
	v->a[22041] = 2;
	v->a[22042] = anon_sym_PLUS_PLUS2;
	v->a[22043] = anon_sym_DASH_DASH2;
	v->a[22044] = actions(676);
	v->a[22045] = 3;
	v->a[22046] = anon_sym_STAR;
	v->a[22047] = anon_sym_SLASH;
	v->a[22048] = anon_sym_PERCENT;
	v->a[22049] = actions(660);
	v->a[22050] = 4;
	v->a[22051] = anon_sym_PIPE;
	v->a[22052] = anon_sym_EQ;
	v->a[22053] = anon_sym_CARET;
	v->a[22054] = anon_sym_AMP;
	v->a[22055] = actions(662);
	v->a[22056] = 15;
	v->a[22057] = anon_sym_AMP_AMP;
	v->a[22058] = anon_sym_PIPE_PIPE;
	v->a[22059] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = anon_sym_PLUS_EQ;
	v->a[22061] = anon_sym_DASH_EQ;
	v->a[22062] = anon_sym_STAR_EQ;
	v->a[22063] = anon_sym_SLASH_EQ;
	v->a[22064] = anon_sym_PERCENT_EQ;
	v->a[22065] = anon_sym_LT_LT_EQ;
	v->a[22066] = anon_sym_GT_GT_EQ;
	v->a[22067] = anon_sym_AMP_EQ;
	v->a[22068] = anon_sym_CARET_EQ;
	v->a[22069] = anon_sym_PIPE_EQ;
	v->a[22070] = anon_sym_QMARK;
	v->a[22071] = anon_sym_COLON;
	v->a[22072] = 9;
	v->a[22073] = actions(680);
	v->a[22074] = 1;
	v->a[22075] = sym_comment;
	v->a[22076] = actions(664);
	v->a[22077] = 2;
	v->a[22078] = anon_sym_LT;
	v->a[22079] = anon_sym_GT;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = actions(666);
	v->a[22081] = 2;
	v->a[22082] = anon_sym_GT_GT;
	v->a[22083] = anon_sym_LT_LT;
	v->a[22084] = actions(672);
	v->a[22085] = 2;
	v->a[22086] = anon_sym_LT_EQ;
	v->a[22087] = anon_sym_GT_EQ;
	v->a[22088] = actions(674);
	v->a[22089] = 2;
	v->a[22090] = anon_sym_PLUS;
	v->a[22091] = anon_sym_DASH;
	v->a[22092] = actions(678);
	v->a[22093] = 2;
	v->a[22094] = anon_sym_PLUS_PLUS2;
	v->a[22095] = anon_sym_DASH_DASH2;
	v->a[22096] = actions(676);
	v->a[22097] = 3;
	v->a[22098] = anon_sym_STAR;
	v->a[22099] = anon_sym_SLASH;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
