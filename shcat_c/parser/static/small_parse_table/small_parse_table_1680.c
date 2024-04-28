/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1680.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8400(t_small_parse_table_array *v)
{
	v->a[168000] = 1;
	v->a[168001] = anon_sym_EQ_TILDE;
	v->a[168002] = actions(7314);
	v->a[168003] = 1;
	v->a[168004] = anon_sym_QMARK;
	v->a[168005] = actions(7557);
	v->a[168006] = 1;
	v->a[168007] = anon_sym_RBRACK;
	v->a[168008] = actions(7278);
	v->a[168009] = 2;
	v->a[168010] = anon_sym_PLUS_PLUS;
	v->a[168011] = anon_sym_DASH_DASH;
	v->a[168012] = actions(7290);
	v->a[168013] = 2;
	v->a[168014] = anon_sym_EQ_EQ;
	v->a[168015] = anon_sym_BANG_EQ;
	v->a[168016] = actions(7292);
	v->a[168017] = 2;
	v->a[168018] = anon_sym_LT;
	v->a[168019] = anon_sym_GT;
	small_parse_table_8401(v);
}

void	small_parse_table_8401(t_small_parse_table_array *v)
{
	v->a[168020] = actions(7294);
	v->a[168021] = 2;
	v->a[168022] = anon_sym_LT_EQ;
	v->a[168023] = anon_sym_GT_EQ;
	v->a[168024] = actions(7296);
	v->a[168025] = 2;
	v->a[168026] = anon_sym_LT_LT;
	v->a[168027] = anon_sym_GT_GT;
	v->a[168028] = actions(7298);
	v->a[168029] = 2;
	v->a[168030] = anon_sym_PLUS;
	v->a[168031] = anon_sym_DASH;
	v->a[168032] = actions(7300);
	v->a[168033] = 3;
	v->a[168034] = anon_sym_STAR;
	v->a[168035] = anon_sym_SLASH;
	v->a[168036] = anon_sym_PERCENT;
	v->a[168037] = actions(7446);
	v->a[168038] = 11;
	v->a[168039] = anon_sym_PLUS_EQ;
	small_parse_table_8402(v);
}

void	small_parse_table_8402(t_small_parse_table_array *v)
{
	v->a[168040] = anon_sym_DASH_EQ;
	v->a[168041] = anon_sym_STAR_EQ;
	v->a[168042] = anon_sym_SLASH_EQ;
	v->a[168043] = anon_sym_PERCENT_EQ;
	v->a[168044] = anon_sym_STAR_STAR_EQ;
	v->a[168045] = anon_sym_LT_LT_EQ;
	v->a[168046] = anon_sym_GT_GT_EQ;
	v->a[168047] = anon_sym_AMP_EQ;
	v->a[168048] = anon_sym_CARET_EQ;
	v->a[168049] = anon_sym_PIPE_EQ;
	v->a[168050] = 3;
	v->a[168051] = actions(71);
	v->a[168052] = 1;
	v->a[168053] = sym_comment;
	v->a[168054] = actions(6807);
	v->a[168055] = 14;
	v->a[168056] = anon_sym_EQ;
	v->a[168057] = anon_sym_PIPE;
	v->a[168058] = anon_sym_CARET;
	v->a[168059] = anon_sym_AMP;
	small_parse_table_8403(v);
}

void	small_parse_table_8403(t_small_parse_table_array *v)
{
	v->a[168060] = anon_sym_LT;
	v->a[168061] = anon_sym_GT;
	v->a[168062] = anon_sym_LT_LT;
	v->a[168063] = anon_sym_GT_GT;
	v->a[168064] = anon_sym_PLUS;
	v->a[168065] = anon_sym_DASH;
	v->a[168066] = anon_sym_STAR;
	v->a[168067] = anon_sym_SLASH;
	v->a[168068] = anon_sym_PERCENT;
	v->a[168069] = anon_sym_STAR_STAR;
	v->a[168070] = actions(6805);
	v->a[168071] = 23;
	v->a[168072] = sym_test_operator;
	v->a[168073] = anon_sym_PLUS_PLUS;
	v->a[168074] = anon_sym_DASH_DASH;
	v->a[168075] = anon_sym_PLUS_EQ;
	v->a[168076] = anon_sym_DASH_EQ;
	v->a[168077] = anon_sym_STAR_EQ;
	v->a[168078] = anon_sym_SLASH_EQ;
	v->a[168079] = anon_sym_PERCENT_EQ;
	small_parse_table_8404(v);
}

void	small_parse_table_8404(t_small_parse_table_array *v)
{
	v->a[168080] = anon_sym_STAR_STAR_EQ;
	v->a[168081] = anon_sym_LT_LT_EQ;
	v->a[168082] = anon_sym_GT_GT_EQ;
	v->a[168083] = anon_sym_AMP_EQ;
	v->a[168084] = anon_sym_CARET_EQ;
	v->a[168085] = anon_sym_PIPE_EQ;
	v->a[168086] = anon_sym_PIPE_PIPE;
	v->a[168087] = anon_sym_AMP_AMP;
	v->a[168088] = anon_sym_EQ_EQ;
	v->a[168089] = anon_sym_BANG_EQ;
	v->a[168090] = anon_sym_LT_EQ;
	v->a[168091] = anon_sym_GT_EQ;
	v->a[168092] = anon_sym_RPAREN;
	v->a[168093] = anon_sym_EQ_TILDE;
	v->a[168094] = anon_sym_QMARK;
	v->a[168095] = 20;
	v->a[168096] = actions(71);
	v->a[168097] = 1;
	v->a[168098] = sym_comment;
	v->a[168099] = actions(7322);
	small_parse_table_8405(v);
}

/* EOF small_parse_table_1680.c */
