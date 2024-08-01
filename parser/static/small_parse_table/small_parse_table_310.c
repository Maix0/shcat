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
	v->a[31000] = actions(774);
	v->a[31001] = 3;
	v->a[31002] = sym_raw_string;
	v->a[31003] = sym_number;
	v->a[31004] = sym_word;
	v->a[31005] = state(1468);
	v->a[31006] = 5;
	v->a[31007] = sym_arithmetic_expansion;
	v->a[31008] = sym_string;
	v->a[31009] = sym_simple_expansion;
	v->a[31010] = sym_expansion;
	v->a[31011] = sym_command_substitution;
	v->a[31012] = 6;
	v->a[31013] = actions(3);
	v->a[31014] = 1;
	v->a[31015] = sym_comment;
	v->a[31016] = actions(1257);
	v->a[31017] = 1;
	v->a[31018] = sym_variable_name;
	v->a[31019] = actions(1286);
	small_parse_table_1551(v);
}

void	small_parse_table_1551(t_small_parse_table_array *v)
{
	v->a[31020] = 1;
	v->a[31021] = anon_sym_RPAREN;
	v->a[31022] = actions(1254);
	v->a[31023] = 3;
	v->a[31024] = anon_sym_LT;
	v->a[31025] = anon_sym_GT;
	v->a[31026] = anon_sym_GT_GT;
	v->a[31027] = actions(1249);
	v->a[31028] = 7;
	v->a[31029] = anon_sym_PIPE;
	v->a[31030] = anon_sym_SEMI_SEMI;
	v->a[31031] = anon_sym_AMP_AMP;
	v->a[31032] = anon_sym_PIPE_PIPE;
	v->a[31033] = anon_sym_LT_LT;
	v->a[31034] = aux_sym_heredoc_redirect_token1;
	v->a[31035] = anon_sym_SEMI;
	v->a[31036] = actions(1247);
	v->a[31037] = 9;
	v->a[31038] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31039] = anon_sym_DOLLAR;
	small_parse_table_1552(v);
}

void	small_parse_table_1552(t_small_parse_table_array *v)
{
	v->a[31040] = anon_sym_DQUOTE;
	v->a[31041] = sym_raw_string;
	v->a[31042] = sym_number;
	v->a[31043] = anon_sym_DOLLAR_LBRACE;
	v->a[31044] = anon_sym_DOLLAR_LPAREN;
	v->a[31045] = anon_sym_BQUOTE;
	v->a[31046] = sym_word;
	v->a[31047] = 3;
	v->a[31048] = actions(3);
	v->a[31049] = 1;
	v->a[31050] = sym_comment;
	v->a[31051] = actions(917);
	v->a[31052] = 1;
	v->a[31053] = sym_variable_name;
	v->a[31054] = actions(919);
	v->a[31055] = 20;
	v->a[31056] = anon_sym_esac;
	v->a[31057] = anon_sym_PIPE;
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
	v->a[31064] = anon_sym_LT_LT;
	v->a[31065] = aux_sym_heredoc_redirect_token1;
	v->a[31066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31067] = anon_sym_DOLLAR;
	v->a[31068] = anon_sym_DQUOTE;
	v->a[31069] = sym_raw_string;
	v->a[31070] = sym_number;
	v->a[31071] = anon_sym_DOLLAR_LBRACE;
	v->a[31072] = anon_sym_DOLLAR_LPAREN;
	v->a[31073] = anon_sym_BQUOTE;
	v->a[31074] = sym_word;
	v->a[31075] = anon_sym_SEMI;
	v->a[31076] = 6;
	v->a[31077] = actions(3);
	v->a[31078] = 1;
	v->a[31079] = sym_comment;
	small_parse_table_1554(v);
}

void	small_parse_table_1554(t_small_parse_table_array *v)
{
	v->a[31080] = actions(1257);
	v->a[31081] = 1;
	v->a[31082] = sym_variable_name;
	v->a[31083] = actions(1289);
	v->a[31084] = 1;
	v->a[31085] = anon_sym_RPAREN;
	v->a[31086] = actions(1254);
	v->a[31087] = 3;
	v->a[31088] = anon_sym_LT;
	v->a[31089] = anon_sym_GT;
	v->a[31090] = anon_sym_GT_GT;
	v->a[31091] = actions(1249);
	v->a[31092] = 7;
	v->a[31093] = anon_sym_PIPE;
	v->a[31094] = anon_sym_SEMI_SEMI;
	v->a[31095] = anon_sym_AMP_AMP;
	v->a[31096] = anon_sym_PIPE_PIPE;
	v->a[31097] = anon_sym_LT_LT;
	v->a[31098] = aux_sym_heredoc_redirect_token1;
	v->a[31099] = anon_sym_SEMI;
	small_parse_table_1555(v);
}

/* EOF small_parse_table_310.c */
