/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_280.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1400(t_small_parse_table_array *v)
{
	v->a[28000] = 2;
	v->a[28001] = anon_sym_GT_GT;
	v->a[28002] = anon_sym_LT_LT;
	v->a[28003] = actions(670);
	v->a[28004] = 2;
	v->a[28005] = anon_sym_EQ_EQ;
	v->a[28006] = anon_sym_BANG_EQ;
	v->a[28007] = actions(672);
	v->a[28008] = 2;
	v->a[28009] = anon_sym_LT_EQ;
	v->a[28010] = anon_sym_GT_EQ;
	v->a[28011] = actions(674);
	v->a[28012] = 2;
	v->a[28013] = anon_sym_PLUS;
	v->a[28014] = anon_sym_DASH;
	v->a[28015] = actions(678);
	v->a[28016] = 2;
	v->a[28017] = anon_sym_PLUS_PLUS2;
	v->a[28018] = anon_sym_DASH_DASH2;
	v->a[28019] = actions(676);
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = 3;
	v->a[28021] = anon_sym_STAR;
	v->a[28022] = anon_sym_SLASH;
	v->a[28023] = anon_sym_PERCENT;
	v->a[28024] = actions(912);
	v->a[28025] = 10;
	v->a[28026] = anon_sym_PLUS_EQ;
	v->a[28027] = anon_sym_DASH_EQ;
	v->a[28028] = anon_sym_STAR_EQ;
	v->a[28029] = anon_sym_SLASH_EQ;
	v->a[28030] = anon_sym_PERCENT_EQ;
	v->a[28031] = anon_sym_LT_LT_EQ;
	v->a[28032] = anon_sym_GT_GT_EQ;
	v->a[28033] = anon_sym_AMP_EQ;
	v->a[28034] = anon_sym_CARET_EQ;
	v->a[28035] = anon_sym_PIPE_EQ;
	v->a[28036] = 3;
	v->a[28037] = actions(680);
	v->a[28038] = 1;
	v->a[28039] = sym_comment;
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = actions(726);
	v->a[28041] = 13;
	v->a[28042] = anon_sym_PIPE;
	v->a[28043] = anon_sym_EQ;
	v->a[28044] = anon_sym_LT;
	v->a[28045] = anon_sym_GT;
	v->a[28046] = anon_sym_GT_GT;
	v->a[28047] = anon_sym_LT_LT;
	v->a[28048] = anon_sym_CARET;
	v->a[28049] = anon_sym_AMP;
	v->a[28050] = anon_sym_PLUS;
	v->a[28051] = anon_sym_DASH;
	v->a[28052] = anon_sym_STAR;
	v->a[28053] = anon_sym_SLASH;
	v->a[28054] = anon_sym_PERCENT;
	v->a[28055] = actions(728);
	v->a[28056] = 20;
	v->a[28057] = anon_sym_RPAREN;
	v->a[28058] = anon_sym_AMP_AMP;
	v->a[28059] = anon_sym_PIPE_PIPE;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = anon_sym_PLUS_EQ;
	v->a[28061] = anon_sym_DASH_EQ;
	v->a[28062] = anon_sym_STAR_EQ;
	v->a[28063] = anon_sym_SLASH_EQ;
	v->a[28064] = anon_sym_PERCENT_EQ;
	v->a[28065] = anon_sym_LT_LT_EQ;
	v->a[28066] = anon_sym_GT_GT_EQ;
	v->a[28067] = anon_sym_AMP_EQ;
	v->a[28068] = anon_sym_CARET_EQ;
	v->a[28069] = anon_sym_PIPE_EQ;
	v->a[28070] = anon_sym_EQ_EQ;
	v->a[28071] = anon_sym_BANG_EQ;
	v->a[28072] = anon_sym_LT_EQ;
	v->a[28073] = anon_sym_GT_EQ;
	v->a[28074] = anon_sym_QMARK;
	v->a[28075] = anon_sym_PLUS_PLUS2;
	v->a[28076] = anon_sym_DASH_DASH2;
	v->a[28077] = 17;
	v->a[28078] = actions(668);
	v->a[28079] = 1;
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = anon_sym_AMP;
	v->a[28081] = actions(680);
	v->a[28082] = 1;
	v->a[28083] = sym_comment;
	v->a[28084] = actions(730);
	v->a[28085] = 1;
	v->a[28086] = anon_sym_CARET;
	v->a[28087] = actions(732);
	v->a[28088] = 1;
	v->a[28089] = anon_sym_PIPE;
	v->a[28090] = actions(734);
	v->a[28091] = 1;
	v->a[28092] = anon_sym_AMP_AMP;
	v->a[28093] = actions(736);
	v->a[28094] = 1;
	v->a[28095] = anon_sym_PIPE_PIPE;
	v->a[28096] = actions(738);
	v->a[28097] = 1;
	v->a[28098] = anon_sym_QMARK;
	v->a[28099] = actions(740);
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
