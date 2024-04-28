/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1700.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8500(t_small_parse_table_array *v)
{
	v->a[170000] = anon_sym_SLASH;
	v->a[170001] = anon_sym_PERCENT;
	v->a[170002] = anon_sym_STAR_STAR;
	v->a[170003] = actions(1306);
	v->a[170004] = 22;
	v->a[170005] = anon_sym_PLUS_PLUS;
	v->a[170006] = anon_sym_DASH_DASH;
	v->a[170007] = anon_sym_PLUS_EQ;
	v->a[170008] = anon_sym_DASH_EQ;
	v->a[170009] = anon_sym_STAR_EQ;
	v->a[170010] = anon_sym_SLASH_EQ;
	v->a[170011] = anon_sym_PERCENT_EQ;
	v->a[170012] = anon_sym_STAR_STAR_EQ;
	v->a[170013] = anon_sym_LT_LT_EQ;
	v->a[170014] = anon_sym_GT_GT_EQ;
	v->a[170015] = anon_sym_AMP_EQ;
	v->a[170016] = anon_sym_CARET_EQ;
	v->a[170017] = anon_sym_PIPE_EQ;
	v->a[170018] = anon_sym_PIPE_PIPE;
	v->a[170019] = anon_sym_AMP_AMP;
	small_parse_table_8501(v);
}

void	small_parse_table_8501(t_small_parse_table_array *v)
{
	v->a[170020] = anon_sym_EQ_EQ;
	v->a[170021] = anon_sym_BANG_EQ;
	v->a[170022] = anon_sym_LT_EQ;
	v->a[170023] = anon_sym_GT_EQ;
	v->a[170024] = anon_sym_RPAREN;
	v->a[170025] = anon_sym_EQ_TILDE;
	v->a[170026] = anon_sym_QMARK;
	v->a[170027] = 3;
	v->a[170028] = actions(71);
	v->a[170029] = 1;
	v->a[170030] = sym_comment;
	v->a[170031] = actions(1308);
	v->a[170032] = 14;
	v->a[170033] = anon_sym_EQ;
	v->a[170034] = anon_sym_PIPE;
	v->a[170035] = anon_sym_CARET;
	v->a[170036] = anon_sym_AMP;
	v->a[170037] = anon_sym_LT;
	v->a[170038] = anon_sym_GT;
	v->a[170039] = anon_sym_LT_LT;
	small_parse_table_8502(v);
}

void	small_parse_table_8502(t_small_parse_table_array *v)
{
	v->a[170040] = anon_sym_GT_GT;
	v->a[170041] = anon_sym_PLUS;
	v->a[170042] = anon_sym_DASH;
	v->a[170043] = anon_sym_STAR;
	v->a[170044] = anon_sym_SLASH;
	v->a[170045] = anon_sym_PERCENT;
	v->a[170046] = anon_sym_STAR_STAR;
	v->a[170047] = actions(1310);
	v->a[170048] = 22;
	v->a[170049] = anon_sym_PLUS_PLUS;
	v->a[170050] = anon_sym_DASH_DASH;
	v->a[170051] = anon_sym_PLUS_EQ;
	v->a[170052] = anon_sym_DASH_EQ;
	v->a[170053] = anon_sym_STAR_EQ;
	v->a[170054] = anon_sym_SLASH_EQ;
	v->a[170055] = anon_sym_PERCENT_EQ;
	v->a[170056] = anon_sym_STAR_STAR_EQ;
	v->a[170057] = anon_sym_LT_LT_EQ;
	v->a[170058] = anon_sym_GT_GT_EQ;
	v->a[170059] = anon_sym_AMP_EQ;
	small_parse_table_8503(v);
}

void	small_parse_table_8503(t_small_parse_table_array *v)
{
	v->a[170060] = anon_sym_CARET_EQ;
	v->a[170061] = anon_sym_PIPE_EQ;
	v->a[170062] = anon_sym_PIPE_PIPE;
	v->a[170063] = anon_sym_AMP_AMP;
	v->a[170064] = anon_sym_EQ_EQ;
	v->a[170065] = anon_sym_BANG_EQ;
	v->a[170066] = anon_sym_LT_EQ;
	v->a[170067] = anon_sym_GT_EQ;
	v->a[170068] = anon_sym_RPAREN;
	v->a[170069] = anon_sym_EQ_TILDE;
	v->a[170070] = anon_sym_QMARK;
	v->a[170071] = 3;
	v->a[170072] = actions(3);
	v->a[170073] = 1;
	v->a[170074] = sym_comment;
	v->a[170075] = actions(1346);
	v->a[170076] = 5;
	v->a[170077] = sym_file_descriptor;
	v->a[170078] = sym__concat;
	v->a[170079] = sym_test_operator;
	small_parse_table_8504(v);
}

void	small_parse_table_8504(t_small_parse_table_array *v)
{
	v->a[170080] = sym__brace_start;
	v->a[170081] = aux_sym_heredoc_redirect_token1;
	v->a[170082] = actions(1344);
	v->a[170083] = 31;
	v->a[170084] = anon_sym_LPAREN_LPAREN;
	v->a[170085] = anon_sym_PIPE_PIPE;
	v->a[170086] = anon_sym_AMP_AMP;
	v->a[170087] = anon_sym_LT;
	v->a[170088] = anon_sym_GT;
	v->a[170089] = anon_sym_GT_GT;
	v->a[170090] = anon_sym_AMP_GT;
	v->a[170091] = anon_sym_AMP_GT_GT;
	v->a[170092] = anon_sym_LT_AMP;
	v->a[170093] = anon_sym_GT_AMP;
	v->a[170094] = anon_sym_GT_PIPE;
	v->a[170095] = anon_sym_LT_AMP_DASH;
	v->a[170096] = anon_sym_GT_AMP_DASH;
	v->a[170097] = anon_sym_LT_LT_LT;
	v->a[170098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[170099] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_8505(v);
}

/* EOF small_parse_table_1700.c */
