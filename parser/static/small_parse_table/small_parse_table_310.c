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
	v->a[31000] = anon_sym_DOLLAR_LPAREN;
	v->a[31001] = anon_sym_BQUOTE;
	v->a[31002] = sym_word;
	v->a[31003] = anon_sym_SEMI;
	v->a[31004] = 6;
	v->a[31005] = actions(3);
	v->a[31006] = 1;
	v->a[31007] = sym_comment;
	v->a[31008] = actions(987);
	v->a[31009] = 1;
	v->a[31010] = aux_sym_concatenation_token1;
	v->a[31011] = actions(1001);
	v->a[31012] = 1;
	v->a[31013] = sym__bare_dollar;
	v->a[31014] = actions(1243);
	v->a[31015] = 1;
	v->a[31016] = sym__concat;
	v->a[31017] = state(358);
	v->a[31018] = 1;
	v->a[31019] = aux_sym_concatenation_repeat1;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = actions(997);
	v->a[31021] = 24;
	v->a[31022] = anon_sym_PIPE;
	v->a[31023] = anon_sym_SEMI_SEMI;
	v->a[31024] = anon_sym_AMP_AMP;
	v->a[31025] = anon_sym_PIPE_PIPE;
	v->a[31026] = anon_sym_LT;
	v->a[31027] = anon_sym_GT;
	v->a[31028] = anon_sym_GT_GT;
	v->a[31029] = anon_sym_LT_AMP;
	v->a[31030] = anon_sym_GT_AMP;
	v->a[31031] = anon_sym_GT_PIPE;
	v->a[31032] = anon_sym_LT_GT;
	v->a[31033] = anon_sym_LT_LT;
	v->a[31034] = anon_sym_LT_LT_DASH;
	v->a[31035] = aux_sym_heredoc_redirect_token1;
	v->a[31036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31037] = anon_sym_DOLLAR;
	v->a[31038] = anon_sym_DQUOTE;
	v->a[31039] = sym_raw_string;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = sym_number;
	v->a[31041] = anon_sym_DOLLAR_LBRACE;
	v->a[31042] = anon_sym_DOLLAR_LPAREN;
	v->a[31043] = anon_sym_BQUOTE;
	v->a[31044] = sym_word;
	v->a[31045] = anon_sym_SEMI;
	v->a[31046] = 3;
	v->a[31047] = actions(3);
	v->a[31048] = 1;
	v->a[31049] = sym_comment;
	v->a[31050] = actions(457);
	v->a[31051] = 2;
	v->a[31052] = sym__concat;
	v->a[31053] = sym__bare_dollar;
	v->a[31054] = actions(455);
	v->a[31055] = 26;
	v->a[31056] = anon_sym_PIPE;
	v->a[31057] = anon_sym_RPAREN;
	v->a[31058] = anon_sym_SEMI_SEMI;
	v->a[31059] = anon_sym_AMP_AMP;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = anon_sym_PIPE_PIPE;
	v->a[31061] = anon_sym_LT;
	v->a[31062] = anon_sym_GT;
	v->a[31063] = anon_sym_GT_GT;
	v->a[31064] = anon_sym_LT_AMP;
	v->a[31065] = anon_sym_GT_AMP;
	v->a[31066] = anon_sym_GT_PIPE;
	v->a[31067] = anon_sym_LT_GT;
	v->a[31068] = anon_sym_LT_LT;
	v->a[31069] = anon_sym_LT_LT_DASH;
	v->a[31070] = aux_sym_heredoc_redirect_token1;
	v->a[31071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31072] = aux_sym_concatenation_token1;
	v->a[31073] = anon_sym_DOLLAR;
	v->a[31074] = anon_sym_DQUOTE;
	v->a[31075] = sym_raw_string;
	v->a[31076] = sym_number;
	v->a[31077] = anon_sym_DOLLAR_LBRACE;
	v->a[31078] = anon_sym_DOLLAR_LPAREN;
	v->a[31079] = anon_sym_BQUOTE;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = sym_word;
	v->a[31081] = anon_sym_SEMI;
	v->a[31082] = 3;
	v->a[31083] = actions(3);
	v->a[31084] = 1;
	v->a[31085] = sym_comment;
	v->a[31086] = actions(453);
	v->a[31087] = 3;
	v->a[31088] = sym__concat;
	v->a[31089] = sym__bare_dollar;
	v->a[31090] = ts_builtin_sym_end;
	v->a[31091] = actions(451);
	v->a[31092] = 25;
	v->a[31093] = anon_sym_PIPE;
	v->a[31094] = anon_sym_SEMI_SEMI;
	v->a[31095] = anon_sym_AMP_AMP;
	v->a[31096] = anon_sym_PIPE_PIPE;
	v->a[31097] = anon_sym_LT;
	v->a[31098] = anon_sym_GT;
	v->a[31099] = anon_sym_GT_GT;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
