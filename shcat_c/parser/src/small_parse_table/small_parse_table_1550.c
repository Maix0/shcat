/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1550.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7750(t_small_parse_table_array *v)
{
	v->a[155000] = actions(6905);
	v->a[155001] = 2;
	v->a[155002] = anon_sym_LT_LT;
	v->a[155003] = anon_sym_GT_GT;
	v->a[155004] = actions(6907);
	v->a[155005] = 2;
	v->a[155006] = anon_sym_PLUS;
	v->a[155007] = anon_sym_DASH;
	v->a[155008] = actions(6909);
	v->a[155009] = 3;
	v->a[155010] = anon_sym_STAR;
	v->a[155011] = anon_sym_SLASH;
	v->a[155012] = anon_sym_PERCENT;
	v->a[155013] = actions(6887);
	v->a[155014] = 11;
	v->a[155015] = anon_sym_PLUS_EQ;
	v->a[155016] = anon_sym_DASH_EQ;
	v->a[155017] = anon_sym_STAR_EQ;
	v->a[155018] = anon_sym_SLASH_EQ;
	v->a[155019] = anon_sym_PERCENT_EQ;
	small_parse_table_7751(v);
}

void	small_parse_table_7751(t_small_parse_table_array *v)
{
	v->a[155020] = anon_sym_STAR_STAR_EQ;
	v->a[155021] = anon_sym_LT_LT_EQ;
	v->a[155022] = anon_sym_GT_GT_EQ;
	v->a[155023] = anon_sym_AMP_EQ;
	v->a[155024] = anon_sym_CARET_EQ;
	v->a[155025] = anon_sym_PIPE_EQ;
	v->a[155026] = 9;
	v->a[155027] = actions(71);
	v->a[155028] = 1;
	v->a[155029] = sym_comment;
	v->a[155030] = actions(6877);
	v->a[155031] = 1;
	v->a[155032] = anon_sym_STAR_STAR;
	v->a[155033] = actions(7049);
	v->a[155034] = 1;
	v->a[155035] = sym_test_operator;
	v->a[155036] = actions(6869);
	v->a[155037] = 2;
	v->a[155038] = anon_sym_PLUS_PLUS;
	v->a[155039] = anon_sym_DASH_DASH;
	small_parse_table_7752(v);
}

void	small_parse_table_7752(t_small_parse_table_array *v)
{
	v->a[155040] = actions(6871);
	v->a[155041] = 2;
	v->a[155042] = anon_sym_LT_LT;
	v->a[155043] = anon_sym_GT_GT;
	v->a[155044] = actions(6873);
	v->a[155045] = 2;
	v->a[155046] = anon_sym_PLUS;
	v->a[155047] = anon_sym_DASH;
	v->a[155048] = actions(6875);
	v->a[155049] = 3;
	v->a[155050] = anon_sym_STAR;
	v->a[155051] = anon_sym_SLASH;
	v->a[155052] = anon_sym_PERCENT;
	v->a[155053] = actions(6791);
	v->a[155054] = 6;
	v->a[155055] = anon_sym_EQ;
	v->a[155056] = anon_sym_PIPE;
	v->a[155057] = anon_sym_CARET;
	v->a[155058] = anon_sym_AMP;
	v->a[155059] = anon_sym_LT;
	small_parse_table_7753(v);
}

void	small_parse_table_7753(t_small_parse_table_array *v)
{
	v->a[155060] = anon_sym_GT;
	v->a[155061] = actions(6789);
	v->a[155062] = 21;
	v->a[155063] = sym__concat;
	v->a[155064] = anon_sym_PLUS_EQ;
	v->a[155065] = anon_sym_DASH_EQ;
	v->a[155066] = anon_sym_STAR_EQ;
	v->a[155067] = anon_sym_SLASH_EQ;
	v->a[155068] = anon_sym_PERCENT_EQ;
	v->a[155069] = anon_sym_STAR_STAR_EQ;
	v->a[155070] = anon_sym_LT_LT_EQ;
	v->a[155071] = anon_sym_GT_GT_EQ;
	v->a[155072] = anon_sym_AMP_EQ;
	v->a[155073] = anon_sym_CARET_EQ;
	v->a[155074] = anon_sym_PIPE_EQ;
	v->a[155075] = anon_sym_PIPE_PIPE;
	v->a[155076] = anon_sym_AMP_AMP;
	v->a[155077] = anon_sym_EQ_EQ;
	v->a[155078] = anon_sym_BANG_EQ;
	v->a[155079] = anon_sym_LT_EQ;
	small_parse_table_7754(v);
}

void	small_parse_table_7754(t_small_parse_table_array *v)
{
	v->a[155080] = anon_sym_GT_EQ;
	v->a[155081] = anon_sym_RBRACK;
	v->a[155082] = anon_sym_EQ_TILDE;
	v->a[155083] = anon_sym_QMARK;
	v->a[155084] = 3;
	v->a[155085] = actions(71);
	v->a[155086] = 1;
	v->a[155087] = sym_comment;
	v->a[155088] = actions(5373);
	v->a[155089] = 12;
	v->a[155090] = anon_sym_PIPE;
	v->a[155091] = anon_sym_LT;
	v->a[155092] = anon_sym_GT;
	v->a[155093] = anon_sym_LT_LT;
	v->a[155094] = anon_sym_AMP_GT;
	v->a[155095] = anon_sym_LT_AMP;
	v->a[155096] = anon_sym_GT_AMP;
	v->a[155097] = anon_sym_DOLLAR;
	v->a[155098] = aux_sym_number_token1;
	v->a[155099] = aux_sym_number_token2;
	small_parse_table_7755(v);
}

/* EOF small_parse_table_1550.c */
