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
	v->a[31000] = sym_raw_string;
	v->a[31001] = sym_number;
	v->a[31002] = anon_sym_DOLLAR_LBRACE;
	v->a[31003] = anon_sym_DOLLAR_LPAREN;
	v->a[31004] = anon_sym_BQUOTE;
	v->a[31005] = sym_word;
	v->a[31006] = anon_sym_SEMI;
	v->a[31007] = 14;
	v->a[31008] = actions(3);
	v->a[31009] = 1;
	v->a[31010] = sym_comment;
	v->a[31011] = actions(524);
	v->a[31012] = 1;
	v->a[31013] = sym_file_descriptor;
	v->a[31014] = actions(591);
	v->a[31015] = 1;
	v->a[31016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31017] = actions(594);
	v->a[31018] = 1;
	v->a[31019] = anon_sym_DOLLAR;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = actions(597);
	v->a[31021] = 1;
	v->a[31022] = anon_sym_DQUOTE;
	v->a[31023] = actions(600);
	v->a[31024] = 1;
	v->a[31025] = anon_sym_DOLLAR_LBRACE;
	v->a[31026] = actions(603);
	v->a[31027] = 1;
	v->a[31028] = anon_sym_DOLLAR_LPAREN;
	v->a[31029] = actions(606);
	v->a[31030] = 1;
	v->a[31031] = anon_sym_BQUOTE;
	v->a[31032] = actions(609);
	v->a[31033] = 1;
	v->a[31034] = sym__bare_dollar;
	v->a[31035] = state(387);
	v->a[31036] = 1;
	v->a[31037] = aux_sym_command_repeat2;
	v->a[31038] = state(627);
	v->a[31039] = 1;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = sym_concatenation;
	v->a[31041] = actions(1184);
	v->a[31042] = 3;
	v->a[31043] = sym_raw_string;
	v->a[31044] = sym_number;
	v->a[31045] = sym_word;
	v->a[31046] = state(759);
	v->a[31047] = 5;
	v->a[31048] = sym_arithmetic_expansion;
	v->a[31049] = sym_string;
	v->a[31050] = sym_simple_expansion;
	v->a[31051] = sym_expansion;
	v->a[31052] = sym_command_substitution;
	v->a[31053] = actions(529);
	v->a[31054] = 13;
	v->a[31055] = anon_sym_PIPE;
	v->a[31056] = anon_sym_AMP_AMP;
	v->a[31057] = anon_sym_PIPE_PIPE;
	v->a[31058] = anon_sym_LT;
	v->a[31059] = anon_sym_GT;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = anon_sym_GT_GT;
	v->a[31061] = anon_sym_LT_AMP;
	v->a[31062] = anon_sym_GT_AMP;
	v->a[31063] = anon_sym_GT_PIPE;
	v->a[31064] = anon_sym_LT_GT;
	v->a[31065] = anon_sym_LT_LT;
	v->a[31066] = anon_sym_LT_LT_DASH;
	v->a[31067] = aux_sym_heredoc_redirect_token1;
	v->a[31068] = 6;
	v->a[31069] = actions(3);
	v->a[31070] = 1;
	v->a[31071] = sym_comment;
	v->a[31072] = actions(1187);
	v->a[31073] = 1;
	v->a[31074] = aux_sym_concatenation_token1;
	v->a[31075] = actions(1190);
	v->a[31076] = 1;
	v->a[31077] = sym__concat;
	v->a[31078] = state(388);
	v->a[31079] = 1;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = aux_sym_concatenation_repeat1;
	v->a[31081] = actions(1093);
	v->a[31082] = 3;
	v->a[31083] = sym_file_descriptor;
	v->a[31084] = sym_variable_name;
	v->a[31085] = ts_builtin_sym_end;
	v->a[31086] = actions(1088);
	v->a[31087] = 25;
	v->a[31088] = anon_sym_PIPE;
	v->a[31089] = anon_sym_SEMI_SEMI;
	v->a[31090] = anon_sym_AMP_AMP;
	v->a[31091] = anon_sym_PIPE_PIPE;
	v->a[31092] = anon_sym_LT;
	v->a[31093] = anon_sym_GT;
	v->a[31094] = anon_sym_GT_GT;
	v->a[31095] = anon_sym_LT_AMP;
	v->a[31096] = anon_sym_GT_AMP;
	v->a[31097] = anon_sym_GT_PIPE;
	v->a[31098] = anon_sym_LT_GT;
	v->a[31099] = anon_sym_LT_LT;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
