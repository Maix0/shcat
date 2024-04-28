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
	v->a[31001] = sym_ansi_c_string;
	v->a[31002] = aux_sym_number_token1;
	v->a[31003] = aux_sym_number_token2;
	v->a[31004] = anon_sym_DOLLAR_LBRACE;
	v->a[31005] = anon_sym_DOLLAR_LPAREN;
	v->a[31006] = anon_sym_BQUOTE;
	v->a[31007] = anon_sym_DOLLAR_BQUOTE;
	v->a[31008] = anon_sym_LT_LPAREN;
	v->a[31009] = anon_sym_GT_LPAREN;
	v->a[31010] = sym_word;
	v->a[31011] = 8;
	v->a[31012] = actions(3);
	v->a[31013] = 1;
	v->a[31014] = sym_comment;
	v->a[31015] = actions(3115);
	v->a[31016] = 1;
	v->a[31017] = anon_sym_DQUOTE;
	v->a[31018] = actions(3119);
	v->a[31019] = 1;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = sym_variable_name;
	v->a[31021] = state(1864);
	v->a[31022] = 1;
	v->a[31023] = sym_string;
	v->a[31024] = actions(3117);
	v->a[31025] = 2;
	v->a[31026] = aux_sym__simple_variable_name_token1;
	v->a[31027] = aux_sym__multiline_variable_name_token1;
	v->a[31028] = actions(1241);
	v->a[31029] = 3;
	v->a[31030] = sym_file_descriptor;
	v->a[31031] = sym_test_operator;
	v->a[31032] = sym__brace_start;
	v->a[31033] = actions(3113);
	v->a[31034] = 9;
	v->a[31035] = anon_sym_DASH;
	v->a[31036] = anon_sym_STAR;
	v->a[31037] = anon_sym_BANG;
	v->a[31038] = anon_sym_QMARK;
	v->a[31039] = anon_sym_DOLLAR;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = anon_sym_POUND;
	v->a[31041] = anon_sym_AT2;
	v->a[31042] = anon_sym_0;
	v->a[31043] = anon_sym__;
	v->a[31044] = actions(1239);
	v->a[31045] = 33;
	v->a[31046] = anon_sym_LPAREN_LPAREN;
	v->a[31047] = anon_sym_PIPE_PIPE;
	v->a[31048] = anon_sym_AMP_AMP;
	v->a[31049] = anon_sym_PIPE;
	v->a[31050] = anon_sym_LT;
	v->a[31051] = anon_sym_GT;
	v->a[31052] = anon_sym_LT_LT;
	v->a[31053] = anon_sym_GT_GT;
	v->a[31054] = anon_sym_PIPE_AMP;
	v->a[31055] = anon_sym_AMP_GT;
	v->a[31056] = anon_sym_AMP_GT_GT;
	v->a[31057] = anon_sym_LT_AMP;
	v->a[31058] = anon_sym_GT_AMP;
	v->a[31059] = anon_sym_GT_PIPE;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = anon_sym_LT_AMP_DASH;
	v->a[31061] = anon_sym_GT_AMP_DASH;
	v->a[31062] = anon_sym_LT_LT_DASH;
	v->a[31063] = aux_sym_heredoc_redirect_token1;
	v->a[31064] = anon_sym_LT_LT_LT;
	v->a[31065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31066] = anon_sym_DOLLAR_LBRACK;
	v->a[31067] = sym__special_character;
	v->a[31068] = sym_raw_string;
	v->a[31069] = sym_ansi_c_string;
	v->a[31070] = aux_sym_number_token1;
	v->a[31071] = aux_sym_number_token2;
	v->a[31072] = anon_sym_DOLLAR_LBRACE;
	v->a[31073] = anon_sym_DOLLAR_LPAREN;
	v->a[31074] = anon_sym_BQUOTE;
	v->a[31075] = anon_sym_DOLLAR_BQUOTE;
	v->a[31076] = anon_sym_LT_LPAREN;
	v->a[31077] = anon_sym_GT_LPAREN;
	v->a[31078] = sym_word;
	v->a[31079] = 22;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = actions(3);
	v->a[31081] = 1;
	v->a[31082] = sym_comment;
	v->a[31083] = actions(3183);
	v->a[31084] = 1;
	v->a[31085] = anon_sym_DOLLAR_LBRACK;
	v->a[31086] = actions(3185);
	v->a[31087] = 1;
	v->a[31088] = anon_sym_DOLLAR;
	v->a[31089] = actions(3189);
	v->a[31090] = 1;
	v->a[31091] = anon_sym_DQUOTE;
	v->a[31092] = actions(3191);
	v->a[31093] = 1;
	v->a[31094] = aux_sym_number_token1;
	v->a[31095] = actions(3193);
	v->a[31096] = 1;
	v->a[31097] = aux_sym_number_token2;
	v->a[31098] = actions(3195);
	v->a[31099] = 1;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
