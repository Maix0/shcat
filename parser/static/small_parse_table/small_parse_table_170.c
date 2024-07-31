/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_170.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_850(t_small_parse_table_array *v)
{
	v->a[17000] = anon_sym_PLUS;
	v->a[17001] = anon_sym_DASH;
	v->a[17002] = anon_sym_STAR;
	v->a[17003] = anon_sym_SLASH;
	v->a[17004] = anon_sym_PERCENT;
	v->a[17005] = actions(457);
	v->a[17006] = 21;
	v->a[17007] = anon_sym_AMP_AMP;
	v->a[17008] = anon_sym_PIPE_PIPE;
	v->a[17009] = anon_sym_RPAREN_RPAREN;
	v->a[17010] = anon_sym_PLUS_EQ;
	v->a[17011] = anon_sym_DASH_EQ;
	v->a[17012] = anon_sym_STAR_EQ;
	v->a[17013] = anon_sym_SLASH_EQ;
	v->a[17014] = anon_sym_PERCENT_EQ;
	v->a[17015] = anon_sym_LT_LT_EQ;
	v->a[17016] = anon_sym_GT_GT_EQ;
	v->a[17017] = anon_sym_AMP_EQ;
	v->a[17018] = anon_sym_CARET_EQ;
	v->a[17019] = anon_sym_PIPE_EQ;
	small_parse_table_851(v);
}

void	small_parse_table_851(t_small_parse_table_array *v)
{
	v->a[17020] = anon_sym_EQ_EQ;
	v->a[17021] = anon_sym_BANG_EQ;
	v->a[17022] = anon_sym_LT_EQ;
	v->a[17023] = anon_sym_GT_EQ;
	v->a[17024] = anon_sym_QMARK;
	v->a[17025] = anon_sym_COLON;
	v->a[17026] = anon_sym_PLUS_PLUS2;
	v->a[17027] = anon_sym_DASH_DASH2;
	v->a[17028] = 7;
	v->a[17029] = actions(407);
	v->a[17030] = 1;
	v->a[17031] = sym_comment;
	v->a[17032] = actions(405);
	v->a[17033] = 2;
	v->a[17034] = anon_sym_PLUS_PLUS2;
	v->a[17035] = anon_sym_DASH_DASH2;
	v->a[17036] = actions(419);
	v->a[17037] = 2;
	v->a[17038] = anon_sym_GT_GT;
	v->a[17039] = anon_sym_LT_LT;
	small_parse_table_852(v);
}

void	small_parse_table_852(t_small_parse_table_array *v)
{
	v->a[17040] = actions(431);
	v->a[17041] = 2;
	v->a[17042] = anon_sym_PLUS;
	v->a[17043] = anon_sym_DASH;
	v->a[17044] = actions(433);
	v->a[17045] = 3;
	v->a[17046] = anon_sym_STAR;
	v->a[17047] = anon_sym_SLASH;
	v->a[17048] = anon_sym_PERCENT;
	v->a[17049] = actions(401);
	v->a[17050] = 6;
	v->a[17051] = anon_sym_PIPE;
	v->a[17052] = anon_sym_EQ;
	v->a[17053] = anon_sym_LT;
	v->a[17054] = anon_sym_GT;
	v->a[17055] = anon_sym_CARET;
	v->a[17056] = anon_sym_AMP;
	v->a[17057] = actions(403);
	v->a[17058] = 19;
	v->a[17059] = anon_sym_AMP_AMP;
	small_parse_table_853(v);
}

void	small_parse_table_853(t_small_parse_table_array *v)
{
	v->a[17060] = anon_sym_PIPE_PIPE;
	v->a[17061] = anon_sym_RPAREN_RPAREN;
	v->a[17062] = anon_sym_PLUS_EQ;
	v->a[17063] = anon_sym_DASH_EQ;
	v->a[17064] = anon_sym_STAR_EQ;
	v->a[17065] = anon_sym_SLASH_EQ;
	v->a[17066] = anon_sym_PERCENT_EQ;
	v->a[17067] = anon_sym_LT_LT_EQ;
	v->a[17068] = anon_sym_GT_GT_EQ;
	v->a[17069] = anon_sym_AMP_EQ;
	v->a[17070] = anon_sym_CARET_EQ;
	v->a[17071] = anon_sym_PIPE_EQ;
	v->a[17072] = anon_sym_EQ_EQ;
	v->a[17073] = anon_sym_BANG_EQ;
	v->a[17074] = anon_sym_LT_EQ;
	v->a[17075] = anon_sym_GT_EQ;
	v->a[17076] = anon_sym_QMARK;
	v->a[17077] = anon_sym_COLON;
	v->a[17078] = 10;
	v->a[17079] = actions(407);
	small_parse_table_854(v);
}

void	small_parse_table_854(t_small_parse_table_array *v)
{
	v->a[17080] = 1;
	v->a[17081] = sym_comment;
	v->a[17082] = actions(405);
	v->a[17083] = 2;
	v->a[17084] = anon_sym_PLUS_PLUS2;
	v->a[17085] = anon_sym_DASH_DASH2;
	v->a[17086] = actions(417);
	v->a[17087] = 2;
	v->a[17088] = anon_sym_LT;
	v->a[17089] = anon_sym_GT;
	v->a[17090] = actions(419);
	v->a[17091] = 2;
	v->a[17092] = anon_sym_GT_GT;
	v->a[17093] = anon_sym_LT_LT;
	v->a[17094] = actions(427);
	v->a[17095] = 2;
	v->a[17096] = anon_sym_EQ_EQ;
	v->a[17097] = anon_sym_BANG_EQ;
	v->a[17098] = actions(429);
	v->a[17099] = 2;
	small_parse_table_855(v);
}

/* EOF small_parse_table_170.c */
