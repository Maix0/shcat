/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_200.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1000(t_small_parse_table_array *v)
{
	v->a[20000] = anon_sym_GT_GT;
	v->a[20001] = anon_sym_LT_AMP;
	v->a[20002] = anon_sym_GT_AMP;
	v->a[20003] = anon_sym_GT_PIPE;
	v->a[20004] = anon_sym_LT_GT;
	v->a[20005] = anon_sym_LT_LT;
	v->a[20006] = anon_sym_LT_LT_DASH;
	v->a[20007] = aux_sym_heredoc_redirect_token1;
	v->a[20008] = anon_sym_SEMI;
	v->a[20009] = 3;
	v->a[20010] = actions(501);
	v->a[20011] = 1;
	v->a[20012] = sym_comment;
	v->a[20013] = actions(521);
	v->a[20014] = 13;
	v->a[20015] = anon_sym_PIPE;
	v->a[20016] = anon_sym_EQ;
	v->a[20017] = anon_sym_LT;
	v->a[20018] = anon_sym_GT;
	v->a[20019] = anon_sym_GT_GT;
	small_parse_table_1001(v);
}

void	small_parse_table_1001(t_small_parse_table_array *v)
{
	v->a[20020] = anon_sym_LT_LT;
	v->a[20021] = anon_sym_CARET;
	v->a[20022] = anon_sym_AMP;
	v->a[20023] = anon_sym_PLUS;
	v->a[20024] = anon_sym_DASH;
	v->a[20025] = anon_sym_STAR;
	v->a[20026] = anon_sym_SLASH;
	v->a[20027] = anon_sym_PERCENT;
	v->a[20028] = actions(523);
	v->a[20029] = 21;
	v->a[20030] = anon_sym_AMP_AMP;
	v->a[20031] = anon_sym_PIPE_PIPE;
	v->a[20032] = anon_sym_RPAREN_RPAREN;
	v->a[20033] = anon_sym_PLUS_EQ;
	v->a[20034] = anon_sym_DASH_EQ;
	v->a[20035] = anon_sym_STAR_EQ;
	v->a[20036] = anon_sym_SLASH_EQ;
	v->a[20037] = anon_sym_PERCENT_EQ;
	v->a[20038] = anon_sym_LT_LT_EQ;
	v->a[20039] = anon_sym_GT_GT_EQ;
	small_parse_table_1002(v);
}

void	small_parse_table_1002(t_small_parse_table_array *v)
{
	v->a[20040] = anon_sym_AMP_EQ;
	v->a[20041] = anon_sym_CARET_EQ;
	v->a[20042] = anon_sym_PIPE_EQ;
	v->a[20043] = anon_sym_EQ_EQ;
	v->a[20044] = anon_sym_BANG_EQ;
	v->a[20045] = anon_sym_LT_EQ;
	v->a[20046] = anon_sym_GT_EQ;
	v->a[20047] = anon_sym_QMARK;
	v->a[20048] = anon_sym_COLON;
	v->a[20049] = anon_sym_PLUS_PLUS2;
	v->a[20050] = anon_sym_DASH_DASH2;
	v->a[20051] = 3;
	v->a[20052] = actions(501);
	v->a[20053] = 1;
	v->a[20054] = sym_comment;
	v->a[20055] = actions(525);
	v->a[20056] = 13;
	v->a[20057] = anon_sym_PIPE;
	v->a[20058] = anon_sym_EQ;
	v->a[20059] = anon_sym_LT;
	small_parse_table_1003(v);
}

void	small_parse_table_1003(t_small_parse_table_array *v)
{
	v->a[20060] = anon_sym_GT;
	v->a[20061] = anon_sym_GT_GT;
	v->a[20062] = anon_sym_LT_LT;
	v->a[20063] = anon_sym_CARET;
	v->a[20064] = anon_sym_AMP;
	v->a[20065] = anon_sym_PLUS;
	v->a[20066] = anon_sym_DASH;
	v->a[20067] = anon_sym_STAR;
	v->a[20068] = anon_sym_SLASH;
	v->a[20069] = anon_sym_PERCENT;
	v->a[20070] = actions(527);
	v->a[20071] = 21;
	v->a[20072] = anon_sym_AMP_AMP;
	v->a[20073] = anon_sym_PIPE_PIPE;
	v->a[20074] = anon_sym_RPAREN_RPAREN;
	v->a[20075] = anon_sym_PLUS_EQ;
	v->a[20076] = anon_sym_DASH_EQ;
	v->a[20077] = anon_sym_STAR_EQ;
	v->a[20078] = anon_sym_SLASH_EQ;
	v->a[20079] = anon_sym_PERCENT_EQ;
	small_parse_table_1004(v);
}

void	small_parse_table_1004(t_small_parse_table_array *v)
{
	v->a[20080] = anon_sym_LT_LT_EQ;
	v->a[20081] = anon_sym_GT_GT_EQ;
	v->a[20082] = anon_sym_AMP_EQ;
	v->a[20083] = anon_sym_CARET_EQ;
	v->a[20084] = anon_sym_PIPE_EQ;
	v->a[20085] = anon_sym_EQ_EQ;
	v->a[20086] = anon_sym_BANG_EQ;
	v->a[20087] = anon_sym_LT_EQ;
	v->a[20088] = anon_sym_GT_EQ;
	v->a[20089] = anon_sym_QMARK;
	v->a[20090] = anon_sym_COLON;
	v->a[20091] = anon_sym_PLUS_PLUS2;
	v->a[20092] = anon_sym_DASH_DASH2;
	v->a[20093] = 3;
	v->a[20094] = actions(501);
	v->a[20095] = 1;
	v->a[20096] = sym_comment;
	v->a[20097] = actions(521);
	v->a[20098] = 13;
	v->a[20099] = anon_sym_PIPE;
	small_parse_table_1005(v);
}

/* EOF small_parse_table_200.c */
