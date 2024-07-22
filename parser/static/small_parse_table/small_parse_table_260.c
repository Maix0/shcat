/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_260.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1300(t_small_parse_table_array *v)
{
	v->a[26000] = anon_sym_LT;
	v->a[26001] = anon_sym_GT;
	v->a[26002] = anon_sym_GT_GT;
	v->a[26003] = anon_sym_LT_AMP;
	v->a[26004] = anon_sym_GT_AMP;
	v->a[26005] = anon_sym_GT_PIPE;
	v->a[26006] = anon_sym_LT_GT;
	v->a[26007] = anon_sym_LT_LT;
	v->a[26008] = anon_sym_LT_LT_DASH;
	v->a[26009] = aux_sym_heredoc_redirect_token1;
	v->a[26010] = anon_sym_SEMI;
	v->a[26011] = 17;
	v->a[26012] = actions(501);
	v->a[26013] = 1;
	v->a[26014] = sym_comment;
	v->a[26015] = actions(650);
	v->a[26016] = 1;
	v->a[26017] = anon_sym_PIPE;
	v->a[26018] = actions(652);
	v->a[26019] = 1;
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = anon_sym_AMP_AMP;
	v->a[26021] = actions(654);
	v->a[26022] = 1;
	v->a[26023] = anon_sym_PIPE_PIPE;
	v->a[26024] = actions(664);
	v->a[26025] = 1;
	v->a[26026] = anon_sym_CARET;
	v->a[26027] = actions(666);
	v->a[26028] = 1;
	v->a[26029] = anon_sym_AMP;
	v->a[26030] = actions(721);
	v->a[26031] = 1;
	v->a[26032] = anon_sym_QMARK;
	v->a[26033] = actions(723);
	v->a[26034] = 1;
	v->a[26035] = anon_sym_EQ;
	v->a[26036] = actions(974);
	v->a[26037] = 1;
	v->a[26038] = anon_sym_RPAREN_RPAREN;
	v->a[26039] = actions(499);
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = 2;
	v->a[26041] = anon_sym_PLUS_PLUS2;
	v->a[26042] = anon_sym_DASH_DASH2;
	v->a[26043] = actions(658);
	v->a[26044] = 2;
	v->a[26045] = anon_sym_LT;
	v->a[26046] = anon_sym_GT;
	v->a[26047] = actions(660);
	v->a[26048] = 2;
	v->a[26049] = anon_sym_GT_GT;
	v->a[26050] = anon_sym_LT_LT;
	v->a[26051] = actions(668);
	v->a[26052] = 2;
	v->a[26053] = anon_sym_EQ_EQ;
	v->a[26054] = anon_sym_BANG_EQ;
	v->a[26055] = actions(670);
	v->a[26056] = 2;
	v->a[26057] = anon_sym_LT_EQ;
	v->a[26058] = anon_sym_GT_EQ;
	v->a[26059] = actions(672);
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = 2;
	v->a[26061] = anon_sym_PLUS;
	v->a[26062] = anon_sym_DASH;
	v->a[26063] = actions(674);
	v->a[26064] = 3;
	v->a[26065] = anon_sym_STAR;
	v->a[26066] = anon_sym_SLASH;
	v->a[26067] = anon_sym_PERCENT;
	v->a[26068] = actions(802);
	v->a[26069] = 10;
	v->a[26070] = anon_sym_PLUS_EQ;
	v->a[26071] = anon_sym_DASH_EQ;
	v->a[26072] = anon_sym_STAR_EQ;
	v->a[26073] = anon_sym_SLASH_EQ;
	v->a[26074] = anon_sym_PERCENT_EQ;
	v->a[26075] = anon_sym_LT_LT_EQ;
	v->a[26076] = anon_sym_GT_GT_EQ;
	v->a[26077] = anon_sym_AMP_EQ;
	v->a[26078] = anon_sym_CARET_EQ;
	v->a[26079] = anon_sym_PIPE_EQ;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = 13;
	v->a[26081] = actions(3);
	v->a[26082] = 1;
	v->a[26083] = sym_comment;
	v->a[26084] = actions(405);
	v->a[26085] = 1;
	v->a[26086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26087] = actions(407);
	v->a[26088] = 1;
	v->a[26089] = anon_sym_DOLLAR;
	v->a[26090] = actions(409);
	v->a[26091] = 1;
	v->a[26092] = anon_sym_DQUOTE;
	v->a[26093] = actions(411);
	v->a[26094] = 1;
	v->a[26095] = anon_sym_DOLLAR_LBRACE;
	v->a[26096] = actions(413);
	v->a[26097] = 1;
	v->a[26098] = anon_sym_DOLLAR_LPAREN;
	v->a[26099] = actions(419);
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
