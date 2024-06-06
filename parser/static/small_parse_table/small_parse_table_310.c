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
	v->a[31000] = 1;
	v->a[31001] = sym_comment;
	v->a[31002] = actions(2967);
	v->a[31003] = 6;
	v->a[31004] = sym_file_descriptor;
	v->a[31005] = sym__concat;
	v->a[31006] = sym_variable_name;
	v->a[31007] = sym_test_operator;
	v->a[31008] = sym__brace_start;
	v->a[31009] = aux_sym_heredoc_redirect_token1;
	v->a[31010] = actions(2965);
	v->a[31011] = 35;
	v->a[31012] = anon_sym_esac;
	v->a[31013] = anon_sym_PIPE;
	v->a[31014] = anon_sym_SEMI_SEMI;
	v->a[31015] = anon_sym_SEMI_AMP;
	v->a[31016] = anon_sym_SEMI_SEMI_AMP;
	v->a[31017] = anon_sym_PIPE_AMP;
	v->a[31018] = anon_sym_AMP_AMP;
	v->a[31019] = anon_sym_PIPE_PIPE;
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = anon_sym_LT;
	v->a[31021] = anon_sym_GT;
	v->a[31022] = anon_sym_GT_GT;
	v->a[31023] = anon_sym_AMP_GT;
	v->a[31024] = anon_sym_AMP_GT_GT;
	v->a[31025] = anon_sym_LT_AMP;
	v->a[31026] = anon_sym_GT_AMP;
	v->a[31027] = anon_sym_GT_PIPE;
	v->a[31028] = anon_sym_LT_AMP_DASH;
	v->a[31029] = anon_sym_GT_AMP_DASH;
	v->a[31030] = anon_sym_LT_LT;
	v->a[31031] = anon_sym_LT_LT_DASH;
	v->a[31032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31033] = anon_sym_AMP;
	v->a[31034] = aux_sym_concatenation_token1;
	v->a[31035] = anon_sym_DOLLAR;
	v->a[31036] = sym__special_character;
	v->a[31037] = anon_sym_DQUOTE;
	v->a[31038] = sym_raw_string;
	v->a[31039] = aux_sym_number_token1;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = aux_sym_number_token2;
	v->a[31041] = anon_sym_DOLLAR_LBRACE;
	v->a[31042] = anon_sym_DOLLAR_LPAREN;
	v->a[31043] = anon_sym_BQUOTE;
	v->a[31044] = anon_sym_DOLLAR_BQUOTE;
	v->a[31045] = sym_word;
	v->a[31046] = anon_sym_SEMI;
	v->a[31047] = 6;
	v->a[31048] = actions(57);
	v->a[31049] = 1;
	v->a[31050] = sym_comment;
	v->a[31051] = state(1668);
	v->a[31052] = 1;
	v->a[31053] = aux_sym__literal_repeat1;
	v->a[31054] = state(1683);
	v->a[31055] = 1;
	v->a[31056] = sym_concatenation;
	v->a[31057] = state(1432);
	v->a[31058] = 7;
	v->a[31059] = sym_arithmetic_expansion;
	small_parse_table_1553(v);
}

void	small_parse_table_1553(t_small_parse_table_array *v)
{
	v->a[31060] = sym_brace_expression;
	v->a[31061] = sym_string;
	v->a[31062] = sym_number;
	v->a[31063] = sym_simple_expansion;
	v->a[31064] = sym_expansion;
	v->a[31065] = sym_command_substitution;
	v->a[31066] = actions(1532);
	v->a[31067] = 12;
	v->a[31068] = anon_sym_PIPE;
	v->a[31069] = anon_sym_LT;
	v->a[31070] = anon_sym_GT;
	v->a[31071] = anon_sym_AMP_GT;
	v->a[31072] = anon_sym_LT_AMP;
	v->a[31073] = anon_sym_GT_AMP;
	v->a[31074] = anon_sym_LT_LT;
	v->a[31075] = anon_sym_DOLLAR;
	v->a[31076] = aux_sym_number_token1;
	v->a[31077] = aux_sym_number_token2;
	v->a[31078] = anon_sym_DOLLAR_LPAREN;
	v->a[31079] = sym_word;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = actions(1534);
	v->a[31081] = 20;
	v->a[31082] = sym_file_descriptor;
	v->a[31083] = sym_variable_name;
	v->a[31084] = sym_test_operator;
	v->a[31085] = sym__brace_start;
	v->a[31086] = anon_sym_PIPE_AMP;
	v->a[31087] = anon_sym_AMP_AMP;
	v->a[31088] = anon_sym_PIPE_PIPE;
	v->a[31089] = anon_sym_GT_GT;
	v->a[31090] = anon_sym_AMP_GT_GT;
	v->a[31091] = anon_sym_GT_PIPE;
	v->a[31092] = anon_sym_LT_AMP_DASH;
	v->a[31093] = anon_sym_GT_AMP_DASH;
	v->a[31094] = anon_sym_LT_LT_DASH;
	v->a[31095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31096] = sym__special_character;
	v->a[31097] = anon_sym_DQUOTE;
	v->a[31098] = sym_raw_string;
	v->a[31099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
