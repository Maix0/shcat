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
	v->a[31000] = anon_sym_LT_LT_DASH;
	v->a[31001] = aux_sym_heredoc_redirect_token1;
	v->a[31002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31003] = anon_sym_AMP;
	v->a[31004] = aux_sym_concatenation_token1;
	v->a[31005] = anon_sym_DOLLAR;
	v->a[31006] = anon_sym_DQUOTE;
	v->a[31007] = sym_raw_string;
	v->a[31008] = sym_number;
	v->a[31009] = anon_sym_DOLLAR_LBRACE;
	v->a[31010] = anon_sym_DOLLAR_LPAREN;
	v->a[31011] = anon_sym_BQUOTE;
	v->a[31012] = sym_word;
	v->a[31013] = anon_sym_SEMI;
	v->a[31014] = 3;
	v->a[31015] = actions(3);
	v->a[31016] = 1;
	v->a[31017] = sym_comment;
	v->a[31018] = actions(1126);
	v->a[31019] = 3;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = sym_file_descriptor;
	v->a[31021] = sym__concat;
	v->a[31022] = sym__bare_dollar;
	v->a[31023] = actions(1124);
	v->a[31024] = 31;
	v->a[31025] = anon_sym_LPAREN;
	v->a[31026] = anon_sym_PIPE;
	v->a[31027] = anon_sym_RPAREN;
	v->a[31028] = anon_sym_SEMI_SEMI;
	v->a[31029] = anon_sym_AMP_AMP;
	v->a[31030] = anon_sym_PIPE_PIPE;
	v->a[31031] = anon_sym_LT;
	v->a[31032] = anon_sym_GT;
	v->a[31033] = anon_sym_GT_GT;
	v->a[31034] = anon_sym_AMP_GT;
	v->a[31035] = anon_sym_AMP_GT_GT;
	v->a[31036] = anon_sym_LT_AMP;
	v->a[31037] = anon_sym_GT_AMP;
	v->a[31038] = anon_sym_GT_PIPE;
	v->a[31039] = anon_sym_LT_AMP_DASH;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = anon_sym_GT_AMP_DASH;
	v->a[31041] = anon_sym_LT_LT;
	v->a[31042] = anon_sym_LT_LT_DASH;
	v->a[31043] = aux_sym_heredoc_redirect_token1;
	v->a[31044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31045] = anon_sym_AMP;
	v->a[31046] = aux_sym_concatenation_token1;
	v->a[31047] = anon_sym_DOLLAR;
	v->a[31048] = anon_sym_DQUOTE;
	v->a[31049] = sym_raw_string;
	v->a[31050] = sym_number;
	v->a[31051] = anon_sym_DOLLAR_LBRACE;
	v->a[31052] = anon_sym_DOLLAR_LPAREN;
	v->a[31053] = anon_sym_BQUOTE;
	v->a[31054] = sym_word;
	v->a[31055] = anon_sym_SEMI;
	v->a[31056] = 21;
	v->a[31057] = actions(3);
	v->a[31058] = 1;
	v->a[31059] = sym_comment;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = actions(17);
	v->a[31061] = 1;
	v->a[31062] = anon_sym_LPAREN;
	v->a[31063] = actions(59);
	v->a[31064] = 1;
	v->a[31065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31066] = actions(61);
	v->a[31067] = 1;
	v->a[31068] = anon_sym_DOLLAR;
	v->a[31069] = actions(63);
	v->a[31070] = 1;
	v->a[31071] = anon_sym_DQUOTE;
	v->a[31072] = actions(67);
	v->a[31073] = 1;
	v->a[31074] = anon_sym_DOLLAR_LBRACE;
	v->a[31075] = actions(69);
	v->a[31076] = 1;
	v->a[31077] = anon_sym_DOLLAR_LPAREN;
	v->a[31078] = actions(71);
	v->a[31079] = 1;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = anon_sym_BQUOTE;
	v->a[31081] = actions(375);
	v->a[31082] = 1;
	v->a[31083] = sym_variable_name;
	v->a[31084] = actions(1068);
	v->a[31085] = 1;
	v->a[31086] = sym_file_descriptor;
	v->a[31087] = state(259);
	v->a[31088] = 1;
	v->a[31089] = sym_command_name;
	v->a[31090] = state(624);
	v->a[31091] = 1;
	v->a[31092] = sym_concatenation;
	v->a[31093] = state(713);
	v->a[31094] = 1;
	v->a[31095] = aux_sym_command_repeat1;
	v->a[31096] = state(747);
	v->a[31097] = 1;
	v->a[31098] = sym_variable_assignment;
	v->a[31099] = state(1283);
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
