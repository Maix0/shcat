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
	v->a[31000] = anon_sym_AMP_GT_GT;
	v->a[31001] = anon_sym_LT_AMP;
	v->a[31002] = anon_sym_GT_AMP;
	v->a[31003] = anon_sym_GT_PIPE;
	v->a[31004] = anon_sym_LT_AMP_DASH;
	v->a[31005] = anon_sym_GT_AMP_DASH;
	v->a[31006] = anon_sym_LT_LT;
	v->a[31007] = anon_sym_LT_LT_DASH;
	v->a[31008] = aux_sym_heredoc_redirect_token1;
	v->a[31009] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31010] = anon_sym_AMP;
	v->a[31011] = anon_sym_DOLLAR;
	v->a[31012] = anon_sym_DQUOTE;
	v->a[31013] = sym_raw_string;
	v->a[31014] = aux_sym_number_token1;
	v->a[31015] = aux_sym_number_token2;
	v->a[31016] = anon_sym_DOLLAR_LBRACE;
	v->a[31017] = anon_sym_DOLLAR_LPAREN;
	v->a[31018] = anon_sym_BQUOTE;
	v->a[31019] = sym_word;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = anon_sym_SEMI;
	v->a[31021] = 6;
	v->a[31022] = actions(3);
	v->a[31023] = 1;
	v->a[31024] = sym_comment;
	v->a[31025] = actions(1229);
	v->a[31026] = 1;
	v->a[31027] = aux_sym_concatenation_token1;
	v->a[31028] = actions(1231);
	v->a[31029] = 1;
	v->a[31030] = sym__concat;
	v->a[31031] = state(356);
	v->a[31032] = 1;
	v->a[31033] = aux_sym_concatenation_repeat1;
	v->a[31034] = actions(1210);
	v->a[31035] = 3;
	v->a[31036] = sym_file_descriptor;
	v->a[31037] = sym_variable_name;
	v->a[31038] = ts_builtin_sym_end;
	v->a[31039] = actions(1206);
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = 29;
	v->a[31041] = anon_sym_PIPE;
	v->a[31042] = anon_sym_SEMI_SEMI;
	v->a[31043] = anon_sym_AMP_AMP;
	v->a[31044] = anon_sym_PIPE_PIPE;
	v->a[31045] = anon_sym_LT;
	v->a[31046] = anon_sym_GT;
	v->a[31047] = anon_sym_GT_GT;
	v->a[31048] = anon_sym_AMP_GT;
	v->a[31049] = anon_sym_AMP_GT_GT;
	v->a[31050] = anon_sym_LT_AMP;
	v->a[31051] = anon_sym_GT_AMP;
	v->a[31052] = anon_sym_GT_PIPE;
	v->a[31053] = anon_sym_LT_AMP_DASH;
	v->a[31054] = anon_sym_GT_AMP_DASH;
	v->a[31055] = anon_sym_LT_LT;
	v->a[31056] = anon_sym_LT_LT_DASH;
	v->a[31057] = aux_sym_heredoc_redirect_token1;
	v->a[31058] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31059] = anon_sym_AMP;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = anon_sym_DOLLAR;
	v->a[31061] = anon_sym_DQUOTE;
	v->a[31062] = sym_raw_string;
	v->a[31063] = aux_sym_number_token1;
	v->a[31064] = aux_sym_number_token2;
	v->a[31065] = anon_sym_DOLLAR_LBRACE;
	v->a[31066] = anon_sym_DOLLAR_LPAREN;
	v->a[31067] = anon_sym_BQUOTE;
	v->a[31068] = sym_word;
	v->a[31069] = anon_sym_SEMI;
	v->a[31070] = 6;
	v->a[31071] = actions(3);
	v->a[31072] = 1;
	v->a[31073] = sym_comment;
	v->a[31074] = actions(1229);
	v->a[31075] = 1;
	v->a[31076] = aux_sym_concatenation_token1;
	v->a[31077] = actions(1231);
	v->a[31078] = 1;
	v->a[31079] = sym__concat;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = state(356);
	v->a[31081] = 1;
	v->a[31082] = aux_sym_concatenation_repeat1;
	v->a[31083] = actions(565);
	v->a[31084] = 3;
	v->a[31085] = sym_file_descriptor;
	v->a[31086] = sym_variable_name;
	v->a[31087] = ts_builtin_sym_end;
	v->a[31088] = actions(567);
	v->a[31089] = 29;
	v->a[31090] = anon_sym_PIPE;
	v->a[31091] = anon_sym_SEMI_SEMI;
	v->a[31092] = anon_sym_AMP_AMP;
	v->a[31093] = anon_sym_PIPE_PIPE;
	v->a[31094] = anon_sym_LT;
	v->a[31095] = anon_sym_GT;
	v->a[31096] = anon_sym_GT_GT;
	v->a[31097] = anon_sym_AMP_GT;
	v->a[31098] = anon_sym_AMP_GT_GT;
	v->a[31099] = anon_sym_LT_AMP;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
