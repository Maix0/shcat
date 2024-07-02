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
	v->a[31000] = anon_sym_DOLLAR_LBRACE;
	v->a[31001] = actions(65);
	v->a[31002] = 1;
	v->a[31003] = anon_sym_DOLLAR_LPAREN;
	v->a[31004] = actions(67);
	v->a[31005] = 1;
	v->a[31006] = anon_sym_BQUOTE;
	v->a[31007] = actions(71);
	v->a[31008] = 1;
	v->a[31009] = sym_variable_name;
	v->a[31010] = actions(1164);
	v->a[31011] = 1;
	v->a[31012] = sym_file_descriptor;
	v->a[31013] = state(182);
	v->a[31014] = 1;
	v->a[31015] = sym_command_name;
	v->a[31016] = state(584);
	v->a[31017] = 1;
	v->a[31018] = sym_concatenation;
	v->a[31019] = state(623);
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = 1;
	v->a[31021] = aux_sym_command_repeat1;
	v->a[31022] = state(640);
	v->a[31023] = 1;
	v->a[31024] = sym_variable_assignment;
	v->a[31025] = state(1109);
	v->a[31026] = 1;
	v->a[31027] = sym_subshell;
	v->a[31028] = state(1113);
	v->a[31029] = 1;
	v->a[31030] = sym_command;
	v->a[31031] = state(1218);
	v->a[31032] = 1;
	v->a[31033] = sym_file_redirect;
	v->a[31034] = actions(61);
	v->a[31035] = 3;
	v->a[31036] = sym_raw_string;
	v->a[31037] = sym_number;
	v->a[31038] = sym_word;
	v->a[31039] = state(433);
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = 5;
	v->a[31041] = sym_arithmetic_expansion;
	v->a[31042] = sym_string;
	v->a[31043] = sym_simple_expansion;
	v->a[31044] = sym_expansion;
	v->a[31045] = sym_command_substitution;
	v->a[31046] = actions(1162);
	v->a[31047] = 7;
	v->a[31048] = anon_sym_LT;
	v->a[31049] = anon_sym_GT;
	v->a[31050] = anon_sym_GT_GT;
	v->a[31051] = anon_sym_LT_AMP;
	v->a[31052] = anon_sym_GT_AMP;
	v->a[31053] = anon_sym_GT_PIPE;
	v->a[31054] = anon_sym_LT_GT;
	v->a[31055] = 3;
	v->a[31056] = actions(3);
	v->a[31057] = 1;
	v->a[31058] = sym_comment;
	v->a[31059] = actions(709);
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = 3;
	v->a[31061] = sym_file_descriptor;
	v->a[31062] = sym__concat;
	v->a[31063] = sym__bare_dollar;
	v->a[31064] = actions(707);
	v->a[31065] = 28;
	v->a[31066] = anon_sym_LPAREN;
	v->a[31067] = anon_sym_PIPE;
	v->a[31068] = anon_sym_RPAREN;
	v->a[31069] = anon_sym_SEMI_SEMI;
	v->a[31070] = anon_sym_AMP_AMP;
	v->a[31071] = anon_sym_PIPE_PIPE;
	v->a[31072] = anon_sym_LT;
	v->a[31073] = anon_sym_GT;
	v->a[31074] = anon_sym_GT_GT;
	v->a[31075] = anon_sym_LT_AMP;
	v->a[31076] = anon_sym_GT_AMP;
	v->a[31077] = anon_sym_GT_PIPE;
	v->a[31078] = anon_sym_LT_GT;
	v->a[31079] = anon_sym_LT_LT;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = anon_sym_LT_LT_DASH;
	v->a[31081] = aux_sym_heredoc_redirect_token1;
	v->a[31082] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31083] = anon_sym_AMP;
	v->a[31084] = aux_sym_concatenation_token1;
	v->a[31085] = anon_sym_DOLLAR;
	v->a[31086] = anon_sym_DQUOTE;
	v->a[31087] = sym_raw_string;
	v->a[31088] = sym_number;
	v->a[31089] = anon_sym_DOLLAR_LBRACE;
	v->a[31090] = anon_sym_DOLLAR_LPAREN;
	v->a[31091] = anon_sym_BQUOTE;
	v->a[31092] = sym_word;
	v->a[31093] = anon_sym_SEMI;
	v->a[31094] = 3;
	v->a[31095] = actions(3);
	v->a[31096] = 1;
	v->a[31097] = sym_comment;
	v->a[31098] = actions(744);
	v->a[31099] = 3;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
