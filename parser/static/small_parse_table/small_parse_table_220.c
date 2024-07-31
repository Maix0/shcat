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
	v->a[22000] = anon_sym_SLASH_EQ;
	v->a[22001] = anon_sym_PERCENT_EQ;
	v->a[22002] = anon_sym_LT_LT_EQ;
	v->a[22003] = anon_sym_GT_GT_EQ;
	v->a[22004] = anon_sym_AMP_EQ;
	v->a[22005] = anon_sym_CARET_EQ;
	v->a[22006] = anon_sym_PIPE_EQ;
	v->a[22007] = 17;
	v->a[22008] = actions(407);
	v->a[22009] = 1;
	v->a[22010] = sym_comment;
	v->a[22011] = actions(409);
	v->a[22012] = 1;
	v->a[22013] = anon_sym_PIPE;
	v->a[22014] = actions(411);
	v->a[22015] = 1;
	v->a[22016] = anon_sym_AMP_AMP;
	v->a[22017] = actions(413);
	v->a[22018] = 1;
	v->a[22019] = anon_sym_PIPE_PIPE;
	small_parse_table_1101(v);
}

void	small_parse_table_1101(t_small_parse_table_array *v)
{
	v->a[22020] = actions(423);
	v->a[22021] = 1;
	v->a[22022] = anon_sym_CARET;
	v->a[22023] = actions(425);
	v->a[22024] = 1;
	v->a[22025] = anon_sym_AMP;
	v->a[22026] = actions(479);
	v->a[22027] = 1;
	v->a[22028] = anon_sym_QMARK;
	v->a[22029] = actions(485);
	v->a[22030] = 1;
	v->a[22031] = anon_sym_EQ;
	v->a[22032] = actions(736);
	v->a[22033] = 1;
	v->a[22034] = anon_sym_RPAREN_RPAREN;
	v->a[22035] = actions(405);
	v->a[22036] = 2;
	v->a[22037] = anon_sym_PLUS_PLUS2;
	v->a[22038] = anon_sym_DASH_DASH2;
	v->a[22039] = actions(417);
	small_parse_table_1102(v);
}

void	small_parse_table_1102(t_small_parse_table_array *v)
{
	v->a[22040] = 2;
	v->a[22041] = anon_sym_LT;
	v->a[22042] = anon_sym_GT;
	v->a[22043] = actions(419);
	v->a[22044] = 2;
	v->a[22045] = anon_sym_GT_GT;
	v->a[22046] = anon_sym_LT_LT;
	v->a[22047] = actions(427);
	v->a[22048] = 2;
	v->a[22049] = anon_sym_EQ_EQ;
	v->a[22050] = anon_sym_BANG_EQ;
	v->a[22051] = actions(429);
	v->a[22052] = 2;
	v->a[22053] = anon_sym_LT_EQ;
	v->a[22054] = anon_sym_GT_EQ;
	v->a[22055] = actions(431);
	v->a[22056] = 2;
	v->a[22057] = anon_sym_PLUS;
	v->a[22058] = anon_sym_DASH;
	v->a[22059] = actions(433);
	small_parse_table_1103(v);
}

void	small_parse_table_1103(t_small_parse_table_array *v)
{
	v->a[22060] = 3;
	v->a[22061] = anon_sym_STAR;
	v->a[22062] = anon_sym_SLASH;
	v->a[22063] = anon_sym_PERCENT;
	v->a[22064] = actions(493);
	v->a[22065] = 10;
	v->a[22066] = anon_sym_PLUS_EQ;
	v->a[22067] = anon_sym_DASH_EQ;
	v->a[22068] = anon_sym_STAR_EQ;
	v->a[22069] = anon_sym_SLASH_EQ;
	v->a[22070] = anon_sym_PERCENT_EQ;
	v->a[22071] = anon_sym_LT_LT_EQ;
	v->a[22072] = anon_sym_GT_GT_EQ;
	v->a[22073] = anon_sym_AMP_EQ;
	v->a[22074] = anon_sym_CARET_EQ;
	v->a[22075] = anon_sym_PIPE_EQ;
	v->a[22076] = 15;
	v->a[22077] = actions(407);
	v->a[22078] = 1;
	v->a[22079] = sym_comment;
	small_parse_table_1104(v);
}

void	small_parse_table_1104(t_small_parse_table_array *v)
{
	v->a[22080] = actions(415);
	v->a[22081] = 1;
	v->a[22082] = anon_sym_EQ;
	v->a[22083] = actions(567);
	v->a[22084] = 1;
	v->a[22085] = anon_sym_PIPE;
	v->a[22086] = actions(571);
	v->a[22087] = 1;
	v->a[22088] = anon_sym_AMP_AMP;
	v->a[22089] = actions(573);
	v->a[22090] = 1;
	v->a[22091] = anon_sym_PIPE_PIPE;
	v->a[22092] = actions(583);
	v->a[22093] = 1;
	v->a[22094] = anon_sym_CARET;
	v->a[22095] = actions(585);
	v->a[22096] = 1;
	v->a[22097] = anon_sym_AMP;
	v->a[22098] = actions(577);
	v->a[22099] = 2;
	small_parse_table_1105(v);
}

/* EOF small_parse_table_220.c */
