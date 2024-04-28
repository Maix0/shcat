/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1620.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8100(t_small_parse_table_array *v)
{
	v->a[162000] = actions(7312);
	v->a[162001] = 1;
	v->a[162002] = anon_sym_EQ_TILDE;
	v->a[162003] = actions(7314);
	v->a[162004] = 1;
	v->a[162005] = anon_sym_QMARK;
	v->a[162006] = actions(7374);
	v->a[162007] = 1;
	v->a[162008] = anon_sym_RBRACK;
	v->a[162009] = actions(7278);
	v->a[162010] = 2;
	v->a[162011] = anon_sym_PLUS_PLUS;
	v->a[162012] = anon_sym_DASH_DASH;
	v->a[162013] = actions(7290);
	v->a[162014] = 2;
	v->a[162015] = anon_sym_EQ_EQ;
	v->a[162016] = anon_sym_BANG_EQ;
	v->a[162017] = actions(7292);
	v->a[162018] = 2;
	v->a[162019] = anon_sym_LT;
	small_parse_table_8101(v);
}

void	small_parse_table_8101(t_small_parse_table_array *v)
{
	v->a[162020] = anon_sym_GT;
	v->a[162021] = actions(7294);
	v->a[162022] = 2;
	v->a[162023] = anon_sym_LT_EQ;
	v->a[162024] = anon_sym_GT_EQ;
	v->a[162025] = actions(7296);
	v->a[162026] = 2;
	v->a[162027] = anon_sym_LT_LT;
	v->a[162028] = anon_sym_GT_GT;
	v->a[162029] = actions(7298);
	v->a[162030] = 2;
	v->a[162031] = anon_sym_PLUS;
	v->a[162032] = anon_sym_DASH;
	v->a[162033] = actions(7300);
	v->a[162034] = 3;
	v->a[162035] = anon_sym_STAR;
	v->a[162036] = anon_sym_SLASH;
	v->a[162037] = anon_sym_PERCENT;
	v->a[162038] = actions(7446);
	v->a[162039] = 11;
	small_parse_table_8102(v);
}

void	small_parse_table_8102(t_small_parse_table_array *v)
{
	v->a[162040] = anon_sym_PLUS_EQ;
	v->a[162041] = anon_sym_DASH_EQ;
	v->a[162042] = anon_sym_STAR_EQ;
	v->a[162043] = anon_sym_SLASH_EQ;
	v->a[162044] = anon_sym_PERCENT_EQ;
	v->a[162045] = anon_sym_STAR_STAR_EQ;
	v->a[162046] = anon_sym_LT_LT_EQ;
	v->a[162047] = anon_sym_GT_GT_EQ;
	v->a[162048] = anon_sym_AMP_EQ;
	v->a[162049] = anon_sym_CARET_EQ;
	v->a[162050] = anon_sym_PIPE_EQ;
	v->a[162051] = 3;
	v->a[162052] = actions(71);
	v->a[162053] = 1;
	v->a[162054] = sym_comment;
	v->a[162055] = actions(1273);
	v->a[162056] = 14;
	v->a[162057] = anon_sym_EQ;
	v->a[162058] = anon_sym_PIPE;
	v->a[162059] = anon_sym_CARET;
	small_parse_table_8103(v);
}

void	small_parse_table_8103(t_small_parse_table_array *v)
{
	v->a[162060] = anon_sym_AMP;
	v->a[162061] = anon_sym_LT;
	v->a[162062] = anon_sym_GT;
	v->a[162063] = anon_sym_LT_LT;
	v->a[162064] = anon_sym_GT_GT;
	v->a[162065] = anon_sym_PLUS;
	v->a[162066] = anon_sym_DASH;
	v->a[162067] = anon_sym_STAR;
	v->a[162068] = anon_sym_SLASH;
	v->a[162069] = anon_sym_PERCENT;
	v->a[162070] = anon_sym_STAR_STAR;
	v->a[162071] = actions(1369);
	v->a[162072] = 23;
	v->a[162073] = sym_test_operator;
	v->a[162074] = anon_sym_PLUS_PLUS;
	v->a[162075] = anon_sym_DASH_DASH;
	v->a[162076] = anon_sym_PLUS_EQ;
	v->a[162077] = anon_sym_DASH_EQ;
	v->a[162078] = anon_sym_STAR_EQ;
	v->a[162079] = anon_sym_SLASH_EQ;
	small_parse_table_8104(v);
}

void	small_parse_table_8104(t_small_parse_table_array *v)
{
	v->a[162080] = anon_sym_PERCENT_EQ;
	v->a[162081] = anon_sym_STAR_STAR_EQ;
	v->a[162082] = anon_sym_LT_LT_EQ;
	v->a[162083] = anon_sym_GT_GT_EQ;
	v->a[162084] = anon_sym_AMP_EQ;
	v->a[162085] = anon_sym_CARET_EQ;
	v->a[162086] = anon_sym_PIPE_EQ;
	v->a[162087] = anon_sym_PIPE_PIPE;
	v->a[162088] = anon_sym_AMP_AMP;
	v->a[162089] = anon_sym_EQ_EQ;
	v->a[162090] = anon_sym_BANG_EQ;
	v->a[162091] = anon_sym_LT_EQ;
	v->a[162092] = anon_sym_GT_EQ;
	v->a[162093] = anon_sym_RPAREN;
	v->a[162094] = anon_sym_EQ_TILDE;
	v->a[162095] = anon_sym_QMARK;
	v->a[162096] = 8;
	v->a[162097] = actions(71);
	v->a[162098] = 1;
	v->a[162099] = sym_comment;
	small_parse_table_8105(v);
}

/* EOF small_parse_table_1620.c */
