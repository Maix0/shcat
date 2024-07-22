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
	v->a[31000] = anon_sym_GT;
	v->a[31001] = anon_sym_GT_GT;
	v->a[31002] = anon_sym_LT_AMP;
	v->a[31003] = anon_sym_GT_AMP;
	v->a[31004] = anon_sym_GT_PIPE;
	v->a[31005] = anon_sym_LT_GT;
	v->a[31006] = anon_sym_LT_LT;
	v->a[31007] = anon_sym_LT_LT_DASH;
	v->a[31008] = aux_sym_heredoc_redirect_token1;
	v->a[31009] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31010] = anon_sym_DOLLAR;
	v->a[31011] = anon_sym_DQUOTE;
	v->a[31012] = sym_raw_string;
	v->a[31013] = sym_number;
	v->a[31014] = anon_sym_DOLLAR_LBRACE;
	v->a[31015] = anon_sym_DOLLAR_LPAREN;
	v->a[31016] = anon_sym_BQUOTE;
	v->a[31017] = sym_word;
	v->a[31018] = anon_sym_SEMI;
	v->a[31019] = 6;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = actions(3);
	v->a[31021] = 1;
	v->a[31022] = sym_comment;
	v->a[31023] = actions(1204);
	v->a[31024] = 1;
	v->a[31025] = aux_sym_concatenation_token1;
	v->a[31026] = actions(1206);
	v->a[31027] = 1;
	v->a[31028] = sym__concat;
	v->a[31029] = state(397);
	v->a[31030] = 1;
	v->a[31031] = aux_sym_concatenation_repeat1;
	v->a[31032] = actions(1208);
	v->a[31033] = 3;
	v->a[31034] = sym_file_descriptor;
	v->a[31035] = sym_variable_name;
	v->a[31036] = ts_builtin_sym_end;
	v->a[31037] = actions(1210);
	v->a[31038] = 24;
	v->a[31039] = anon_sym_PIPE;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = anon_sym_SEMI_SEMI;
	v->a[31041] = anon_sym_AMP_AMP;
	v->a[31042] = anon_sym_PIPE_PIPE;
	v->a[31043] = anon_sym_LT;
	v->a[31044] = anon_sym_GT;
	v->a[31045] = anon_sym_GT_GT;
	v->a[31046] = anon_sym_LT_AMP;
	v->a[31047] = anon_sym_GT_AMP;
	v->a[31048] = anon_sym_GT_PIPE;
	v->a[31049] = anon_sym_LT_GT;
	v->a[31050] = anon_sym_LT_LT;
	v->a[31051] = anon_sym_LT_LT_DASH;
	v->a[31052] = aux_sym_heredoc_redirect_token1;
	v->a[31053] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31054] = anon_sym_DOLLAR;
	v->a[31055] = anon_sym_DQUOTE;
	v->a[31056] = sym_raw_string;
	v->a[31057] = sym_number;
	v->a[31058] = anon_sym_DOLLAR_LBRACE;
	v->a[31059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = anon_sym_BQUOTE;
	v->a[31061] = sym_word;
	v->a[31062] = anon_sym_SEMI;
	v->a[31063] = 14;
	v->a[31064] = actions(3);
	v->a[31065] = 1;
	v->a[31066] = sym_comment;
	v->a[31067] = actions(519);
	v->a[31068] = 1;
	v->a[31069] = sym_file_descriptor;
	v->a[31070] = actions(1037);
	v->a[31071] = 1;
	v->a[31072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31073] = actions(1039);
	v->a[31074] = 1;
	v->a[31075] = anon_sym_DOLLAR;
	v->a[31076] = actions(1041);
	v->a[31077] = 1;
	v->a[31078] = anon_sym_DQUOTE;
	v->a[31079] = actions(1043);
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = 1;
	v->a[31081] = anon_sym_DOLLAR_LBRACE;
	v->a[31082] = actions(1045);
	v->a[31083] = 1;
	v->a[31084] = anon_sym_DOLLAR_LPAREN;
	v->a[31085] = actions(1047);
	v->a[31086] = 1;
	v->a[31087] = anon_sym_BQUOTE;
	v->a[31088] = actions(1049);
	v->a[31089] = 1;
	v->a[31090] = sym__bare_dollar;
	v->a[31091] = state(385);
	v->a[31092] = 1;
	v->a[31093] = aux_sym_command_repeat2;
	v->a[31094] = state(904);
	v->a[31095] = 1;
	v->a[31096] = sym_concatenation;
	v->a[31097] = actions(1035);
	v->a[31098] = 3;
	v->a[31099] = sym_raw_string;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
