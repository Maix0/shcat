/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_310.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1550(t_small_parse_table_array *v)
{
	v->a[31000] = sym_arithmetic_expansion;
	v->a[31001] = sym_string;
	v->a[31002] = sym_simple_expansion;
	v->a[31003] = sym_expansion;
	v->a[31004] = sym_command_substitution;
	v->a[31005] = actions(788);
	v->a[31006] = 17;
	v->a[31007] = anon_sym_PIPE;
	v->a[31008] = anon_sym_SEMI_SEMI;
	v->a[31009] = anon_sym_AMP_AMP;
	v->a[31010] = anon_sym_PIPE_PIPE;
	v->a[31011] = anon_sym_LT;
	v->a[31012] = anon_sym_GT;
	v->a[31013] = anon_sym_GT_GT;
	v->a[31014] = anon_sym_LT_AMP;
	v->a[31015] = anon_sym_GT_AMP;
	v->a[31016] = anon_sym_GT_PIPE;
	v->a[31017] = anon_sym_LT_AMP_DASH;
	v->a[31018] = anon_sym_GT_AMP_DASH;
	v->a[31019] = anon_sym_LT_LT;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = anon_sym_LT_LT_DASH;
	v->a[31021] = aux_sym_heredoc_redirect_token1;
	v->a[31022] = anon_sym_AMP;
	v->a[31023] = anon_sym_SEMI;
	v->a[31024] = 7;
	v->a[31025] = actions(870);
	v->a[31026] = 1;
	v->a[31027] = sym_comment;
	v->a[31028] = actions(1059);
	v->a[31029] = 2;
	v->a[31030] = anon_sym_GT_GT;
	v->a[31031] = anon_sym_LT_LT;
	v->a[31032] = actions(1069);
	v->a[31033] = 2;
	v->a[31034] = anon_sym_PLUS;
	v->a[31035] = anon_sym_DASH;
	v->a[31036] = actions(1075);
	v->a[31037] = 2;
	v->a[31038] = anon_sym_PLUS_PLUS2;
	v->a[31039] = anon_sym_DASH_DASH2;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = actions(1071);
	v->a[31041] = 3;
	v->a[31042] = anon_sym_STAR;
	v->a[31043] = anon_sym_SLASH;
	v->a[31044] = anon_sym_PERCENT;
	v->a[31045] = actions(872);
	v->a[31046] = 6;
	v->a[31047] = anon_sym_PIPE;
	v->a[31048] = anon_sym_EQ;
	v->a[31049] = anon_sym_LT;
	v->a[31050] = anon_sym_GT;
	v->a[31051] = anon_sym_CARET;
	v->a[31052] = anon_sym_AMP;
	v->a[31053] = actions(874);
	v->a[31054] = 18;
	v->a[31055] = anon_sym_RPAREN;
	v->a[31056] = anon_sym_AMP_AMP;
	v->a[31057] = anon_sym_PIPE_PIPE;
	v->a[31058] = anon_sym_PLUS_EQ;
	v->a[31059] = anon_sym_DASH_EQ;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = anon_sym_STAR_EQ;
	v->a[31061] = anon_sym_SLASH_EQ;
	v->a[31062] = anon_sym_PERCENT_EQ;
	v->a[31063] = anon_sym_LT_LT_EQ;
	v->a[31064] = anon_sym_GT_GT_EQ;
	v->a[31065] = anon_sym_AMP_EQ;
	v->a[31066] = anon_sym_CARET_EQ;
	v->a[31067] = anon_sym_PIPE_EQ;
	v->a[31068] = anon_sym_EQ_EQ;
	v->a[31069] = anon_sym_BANG_EQ;
	v->a[31070] = anon_sym_LT_EQ;
	v->a[31071] = anon_sym_GT_EQ;
	v->a[31072] = anon_sym_QMARK;
	v->a[31073] = 14;
	v->a[31074] = actions(870);
	v->a[31075] = 1;
	v->a[31076] = sym_comment;
	v->a[31077] = actions(872);
	v->a[31078] = 1;
	v->a[31079] = anon_sym_EQ;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = actions(1051);
	v->a[31081] = 1;
	v->a[31082] = anon_sym_PIPE;
	v->a[31083] = actions(1053);
	v->a[31084] = 1;
	v->a[31085] = anon_sym_AMP_AMP;
	v->a[31086] = actions(1061);
	v->a[31087] = 1;
	v->a[31088] = anon_sym_CARET;
	v->a[31089] = actions(1063);
	v->a[31090] = 1;
	v->a[31091] = anon_sym_AMP;
	v->a[31092] = actions(1057);
	v->a[31093] = 2;
	v->a[31094] = anon_sym_LT;
	v->a[31095] = anon_sym_GT;
	v->a[31096] = actions(1059);
	v->a[31097] = 2;
	v->a[31098] = anon_sym_GT_GT;
	v->a[31099] = anon_sym_LT_LT;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
