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
	v->a[28000] = actions(1053);
	v->a[28001] = 1;
	v->a[28002] = anon_sym_AMP_AMP;
	v->a[28003] = actions(1055);
	v->a[28004] = 1;
	v->a[28005] = anon_sym_PIPE_PIPE;
	v->a[28006] = actions(1061);
	v->a[28007] = 1;
	v->a[28008] = anon_sym_CARET;
	v->a[28009] = actions(1063);
	v->a[28010] = 1;
	v->a[28011] = anon_sym_AMP;
	v->a[28012] = actions(1073);
	v->a[28013] = 1;
	v->a[28014] = anon_sym_QMARK;
	v->a[28015] = actions(1057);
	v->a[28016] = 2;
	v->a[28017] = anon_sym_LT;
	v->a[28018] = anon_sym_GT;
	v->a[28019] = actions(1059);
	small_parse_table_1401(v);
}

void	small_parse_table_1401(t_small_parse_table_array *v)
{
	v->a[28020] = 2;
	v->a[28021] = anon_sym_GT_GT;
	v->a[28022] = anon_sym_LT_LT;
	v->a[28023] = actions(1065);
	v->a[28024] = 2;
	v->a[28025] = anon_sym_EQ_EQ;
	v->a[28026] = anon_sym_BANG_EQ;
	v->a[28027] = actions(1067);
	v->a[28028] = 2;
	v->a[28029] = anon_sym_LT_EQ;
	v->a[28030] = anon_sym_GT_EQ;
	v->a[28031] = actions(1069);
	v->a[28032] = 2;
	v->a[28033] = anon_sym_PLUS;
	v->a[28034] = anon_sym_DASH;
	v->a[28035] = actions(1075);
	v->a[28036] = 2;
	v->a[28037] = anon_sym_PLUS_PLUS2;
	v->a[28038] = anon_sym_DASH_DASH2;
	v->a[28039] = actions(1071);
	small_parse_table_1402(v);
}

void	small_parse_table_1402(t_small_parse_table_array *v)
{
	v->a[28040] = 3;
	v->a[28041] = anon_sym_STAR;
	v->a[28042] = anon_sym_SLASH;
	v->a[28043] = anon_sym_PERCENT;
	v->a[28044] = actions(874);
	v->a[28045] = 11;
	v->a[28046] = anon_sym_RPAREN;
	v->a[28047] = anon_sym_PLUS_EQ;
	v->a[28048] = anon_sym_DASH_EQ;
	v->a[28049] = anon_sym_STAR_EQ;
	v->a[28050] = anon_sym_SLASH_EQ;
	v->a[28051] = anon_sym_PERCENT_EQ;
	v->a[28052] = anon_sym_LT_LT_EQ;
	v->a[28053] = anon_sym_GT_GT_EQ;
	v->a[28054] = anon_sym_AMP_EQ;
	v->a[28055] = anon_sym_CARET_EQ;
	v->a[28056] = anon_sym_PIPE_EQ;
	v->a[28057] = 17;
	v->a[28058] = actions(842);
	v->a[28059] = 1;
	small_parse_table_1403(v);
}

void	small_parse_table_1403(t_small_parse_table_array *v)
{
	v->a[28060] = anon_sym_PIPE;
	v->a[28061] = actions(844);
	v->a[28062] = 1;
	v->a[28063] = anon_sym_AMP_AMP;
	v->a[28064] = actions(846);
	v->a[28065] = 1;
	v->a[28066] = anon_sym_PIPE_PIPE;
	v->a[28067] = actions(856);
	v->a[28068] = 1;
	v->a[28069] = anon_sym_CARET;
	v->a[28070] = actions(858);
	v->a[28071] = 1;
	v->a[28072] = anon_sym_AMP;
	v->a[28073] = actions(870);
	v->a[28074] = 1;
	v->a[28075] = sym_comment;
	v->a[28076] = actions(1021);
	v->a[28077] = 1;
	v->a[28078] = anon_sym_EQ;
	v->a[28079] = actions(1023);
	small_parse_table_1404(v);
}

void	small_parse_table_1404(t_small_parse_table_array *v)
{
	v->a[28080] = 1;
	v->a[28081] = anon_sym_QMARK;
	v->a[28082] = actions(1077);
	v->a[28083] = 1;
	v->a[28084] = anon_sym_RPAREN_RPAREN;
	v->a[28085] = actions(850);
	v->a[28086] = 2;
	v->a[28087] = anon_sym_LT;
	v->a[28088] = anon_sym_GT;
	v->a[28089] = actions(852);
	v->a[28090] = 2;
	v->a[28091] = anon_sym_GT_GT;
	v->a[28092] = anon_sym_LT_LT;
	v->a[28093] = actions(860);
	v->a[28094] = 2;
	v->a[28095] = anon_sym_EQ_EQ;
	v->a[28096] = anon_sym_BANG_EQ;
	v->a[28097] = actions(862);
	v->a[28098] = 2;
	v->a[28099] = anon_sym_LT_EQ;
	small_parse_table_1405(v);
}

/* EOF small_parse_table_280.c */
