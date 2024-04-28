/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1580.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7900(t_small_parse_table_array *v)
{
	v->a[158000] = 1;
	v->a[158001] = sym_comment;
	v->a[158002] = actions(7308);
	v->a[158003] = 1;
	v->a[158004] = sym__concat;
	v->a[158005] = actions(6838);
	v->a[158006] = 14;
	v->a[158007] = anon_sym_EQ;
	v->a[158008] = anon_sym_PIPE;
	v->a[158009] = anon_sym_CARET;
	v->a[158010] = anon_sym_AMP;
	v->a[158011] = anon_sym_LT;
	v->a[158012] = anon_sym_GT;
	v->a[158013] = anon_sym_LT_LT;
	v->a[158014] = anon_sym_GT_GT;
	v->a[158015] = anon_sym_PLUS;
	v->a[158016] = anon_sym_DASH;
	v->a[158017] = anon_sym_STAR;
	v->a[158018] = anon_sym_SLASH;
	v->a[158019] = anon_sym_PERCENT;
	small_parse_table_7901(v);
}

void	small_parse_table_7901(t_small_parse_table_array *v)
{
	v->a[158020] = anon_sym_STAR_STAR;
	v->a[158021] = actions(6836);
	v->a[158022] = 22;
	v->a[158023] = anon_sym_PLUS_PLUS;
	v->a[158024] = anon_sym_DASH_DASH;
	v->a[158025] = anon_sym_PLUS_EQ;
	v->a[158026] = anon_sym_DASH_EQ;
	v->a[158027] = anon_sym_STAR_EQ;
	v->a[158028] = anon_sym_SLASH_EQ;
	v->a[158029] = anon_sym_PERCENT_EQ;
	v->a[158030] = anon_sym_STAR_STAR_EQ;
	v->a[158031] = anon_sym_LT_LT_EQ;
	v->a[158032] = anon_sym_GT_GT_EQ;
	v->a[158033] = anon_sym_AMP_EQ;
	v->a[158034] = anon_sym_CARET_EQ;
	v->a[158035] = anon_sym_PIPE_EQ;
	v->a[158036] = anon_sym_PIPE_PIPE;
	v->a[158037] = anon_sym_AMP_AMP;
	v->a[158038] = anon_sym_EQ_EQ;
	v->a[158039] = anon_sym_BANG_EQ;
	small_parse_table_7902(v);
}

void	small_parse_table_7902(t_small_parse_table_array *v)
{
	v->a[158040] = anon_sym_LT_EQ;
	v->a[158041] = anon_sym_GT_EQ;
	v->a[158042] = anon_sym_RBRACK;
	v->a[158043] = anon_sym_EQ_TILDE;
	v->a[158044] = anon_sym_QMARK;
	v->a[158045] = 15;
	v->a[158046] = actions(71);
	v->a[158047] = 1;
	v->a[158048] = sym_comment;
	v->a[158049] = actions(6807);
	v->a[158050] = 1;
	v->a[158051] = anon_sym_EQ;
	v->a[158052] = actions(7284);
	v->a[158053] = 1;
	v->a[158054] = anon_sym_PIPE;
	v->a[158055] = actions(7286);
	v->a[158056] = 1;
	v->a[158057] = anon_sym_CARET;
	v->a[158058] = actions(7288);
	v->a[158059] = 1;
	small_parse_table_7903(v);
}

void	small_parse_table_7903(t_small_parse_table_array *v)
{
	v->a[158060] = anon_sym_AMP;
	v->a[158061] = actions(7302);
	v->a[158062] = 1;
	v->a[158063] = anon_sym_STAR_STAR;
	v->a[158064] = actions(7304);
	v->a[158065] = 1;
	v->a[158066] = sym_test_operator;
	v->a[158067] = actions(7278);
	v->a[158068] = 2;
	v->a[158069] = anon_sym_PLUS_PLUS;
	v->a[158070] = anon_sym_DASH_DASH;
	v->a[158071] = actions(7290);
	v->a[158072] = 2;
	v->a[158073] = anon_sym_EQ_EQ;
	v->a[158074] = anon_sym_BANG_EQ;
	v->a[158075] = actions(7292);
	v->a[158076] = 2;
	v->a[158077] = anon_sym_LT;
	v->a[158078] = anon_sym_GT;
	v->a[158079] = actions(7294);
	small_parse_table_7904(v);
}

void	small_parse_table_7904(t_small_parse_table_array *v)
{
	v->a[158080] = 2;
	v->a[158081] = anon_sym_LT_EQ;
	v->a[158082] = anon_sym_GT_EQ;
	v->a[158083] = actions(7296);
	v->a[158084] = 2;
	v->a[158085] = anon_sym_LT_LT;
	v->a[158086] = anon_sym_GT_GT;
	v->a[158087] = actions(7298);
	v->a[158088] = 2;
	v->a[158089] = anon_sym_PLUS;
	v->a[158090] = anon_sym_DASH;
	v->a[158091] = actions(7300);
	v->a[158092] = 3;
	v->a[158093] = anon_sym_STAR;
	v->a[158094] = anon_sym_SLASH;
	v->a[158095] = anon_sym_PERCENT;
	v->a[158096] = actions(6805);
	v->a[158097] = 16;
	v->a[158098] = anon_sym_PLUS_EQ;
	v->a[158099] = anon_sym_DASH_EQ;
	small_parse_table_7905(v);
}

/* EOF small_parse_table_1580.c */
