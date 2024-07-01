/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_210.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1050(t_small_parse_table_array *v)
{
	v->a[21000] = actions(686);
	v->a[21001] = 2;
	v->a[21002] = anon_sym_PLUS;
	v->a[21003] = anon_sym_DASH;
	v->a[21004] = actions(690);
	v->a[21005] = 2;
	v->a[21006] = anon_sym_PLUS_PLUS2;
	v->a[21007] = anon_sym_DASH_DASH2;
	v->a[21008] = actions(688);
	v->a[21009] = 3;
	v->a[21010] = anon_sym_STAR;
	v->a[21011] = anon_sym_SLASH;
	v->a[21012] = anon_sym_PERCENT;
	v->a[21013] = actions(680);
	v->a[21014] = 6;
	v->a[21015] = anon_sym_PIPE;
	v->a[21016] = anon_sym_EQ;
	v->a[21017] = anon_sym_LT;
	v->a[21018] = anon_sym_GT;
	v->a[21019] = anon_sym_CARET;
	small_parse_table_1051(v);
}

void	small_parse_table_1051(t_small_parse_table_array *v)
{
	v->a[21020] = anon_sym_AMP;
	v->a[21021] = actions(682);
	v->a[21022] = 19;
	v->a[21023] = anon_sym_AMP_AMP;
	v->a[21024] = anon_sym_PIPE_PIPE;
	v->a[21025] = anon_sym_RPAREN_RPAREN;
	v->a[21026] = anon_sym_PLUS_EQ;
	v->a[21027] = anon_sym_DASH_EQ;
	v->a[21028] = anon_sym_STAR_EQ;
	v->a[21029] = anon_sym_SLASH_EQ;
	v->a[21030] = anon_sym_PERCENT_EQ;
	v->a[21031] = anon_sym_LT_LT_EQ;
	v->a[21032] = anon_sym_GT_GT_EQ;
	v->a[21033] = anon_sym_AMP_EQ;
	v->a[21034] = anon_sym_CARET_EQ;
	v->a[21035] = anon_sym_PIPE_EQ;
	v->a[21036] = anon_sym_EQ_EQ;
	v->a[21037] = anon_sym_BANG_EQ;
	v->a[21038] = anon_sym_LT_EQ;
	v->a[21039] = anon_sym_GT_EQ;
	small_parse_table_1052(v);
}

void	small_parse_table_1052(t_small_parse_table_array *v)
{
	v->a[21040] = anon_sym_QMARK;
	v->a[21041] = anon_sym_COLON;
	v->a[21042] = 4;
	v->a[21043] = actions(664);
	v->a[21044] = 1;
	v->a[21045] = sym_comment;
	v->a[21046] = actions(690);
	v->a[21047] = 2;
	v->a[21048] = anon_sym_PLUS_PLUS2;
	v->a[21049] = anon_sym_DASH_DASH2;
	v->a[21050] = actions(680);
	v->a[21051] = 13;
	v->a[21052] = anon_sym_PIPE;
	v->a[21053] = anon_sym_EQ;
	v->a[21054] = anon_sym_LT;
	v->a[21055] = anon_sym_GT;
	v->a[21056] = anon_sym_GT_GT;
	v->a[21057] = anon_sym_LT_LT;
	v->a[21058] = anon_sym_CARET;
	v->a[21059] = anon_sym_AMP;
	small_parse_table_1053(v);
}

void	small_parse_table_1053(t_small_parse_table_array *v)
{
	v->a[21060] = anon_sym_PLUS;
	v->a[21061] = anon_sym_DASH;
	v->a[21062] = anon_sym_STAR;
	v->a[21063] = anon_sym_SLASH;
	v->a[21064] = anon_sym_PERCENT;
	v->a[21065] = actions(682);
	v->a[21066] = 19;
	v->a[21067] = anon_sym_AMP_AMP;
	v->a[21068] = anon_sym_PIPE_PIPE;
	v->a[21069] = anon_sym_RPAREN_RPAREN;
	v->a[21070] = anon_sym_PLUS_EQ;
	v->a[21071] = anon_sym_DASH_EQ;
	v->a[21072] = anon_sym_STAR_EQ;
	v->a[21073] = anon_sym_SLASH_EQ;
	v->a[21074] = anon_sym_PERCENT_EQ;
	v->a[21075] = anon_sym_LT_LT_EQ;
	v->a[21076] = anon_sym_GT_GT_EQ;
	v->a[21077] = anon_sym_AMP_EQ;
	v->a[21078] = anon_sym_CARET_EQ;
	v->a[21079] = anon_sym_PIPE_EQ;
	small_parse_table_1054(v);
}

void	small_parse_table_1054(t_small_parse_table_array *v)
{
	v->a[21080] = anon_sym_EQ_EQ;
	v->a[21081] = anon_sym_BANG_EQ;
	v->a[21082] = anon_sym_LT_EQ;
	v->a[21083] = anon_sym_GT_EQ;
	v->a[21084] = anon_sym_QMARK;
	v->a[21085] = anon_sym_COLON;
	v->a[21086] = 7;
	v->a[21087] = actions(664);
	v->a[21088] = 1;
	v->a[21089] = sym_comment;
	v->a[21090] = actions(684);
	v->a[21091] = 2;
	v->a[21092] = anon_sym_GT_GT;
	v->a[21093] = anon_sym_LT_LT;
	v->a[21094] = actions(686);
	v->a[21095] = 2;
	v->a[21096] = anon_sym_PLUS;
	v->a[21097] = anon_sym_DASH;
	v->a[21098] = actions(690);
	v->a[21099] = 2;
	small_parse_table_1055(v);
}

/* EOF small_parse_table_210.c */
