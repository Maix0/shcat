/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_750.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3750(t_small_parse_table_array *v)
{
	v->a[75000] = 1;
	v->a[75001] = sym_comment;
	v->a[75002] = actions(1318);
	v->a[75003] = 7;
	v->a[75004] = sym_file_descriptor;
	v->a[75005] = sym__concat;
	v->a[75006] = sym_variable_name;
	v->a[75007] = sym_test_operator;
	v->a[75008] = sym__brace_start;
	v->a[75009] = ts_builtin_sym_end;
	v->a[75010] = aux_sym_heredoc_redirect_token1;
	v->a[75011] = actions(1316);
	v->a[75012] = 38;
	v->a[75013] = anon_sym_LPAREN_LPAREN;
	v->a[75014] = anon_sym_SEMI;
	v->a[75015] = anon_sym_PIPE_PIPE;
	v->a[75016] = anon_sym_AMP_AMP;
	v->a[75017] = anon_sym_PIPE;
	v->a[75018] = anon_sym_AMP;
	v->a[75019] = anon_sym_LT;
	small_parse_table_3751(v);
}

void	small_parse_table_3751(t_small_parse_table_array *v)
{
	v->a[75020] = anon_sym_GT;
	v->a[75021] = anon_sym_LT_LT;
	v->a[75022] = anon_sym_GT_GT;
	v->a[75023] = anon_sym_SEMI_SEMI;
	v->a[75024] = anon_sym_PIPE_AMP;
	v->a[75025] = anon_sym_AMP_GT;
	v->a[75026] = anon_sym_AMP_GT_GT;
	v->a[75027] = anon_sym_LT_AMP;
	v->a[75028] = anon_sym_GT_AMP;
	v->a[75029] = anon_sym_GT_PIPE;
	v->a[75030] = anon_sym_LT_AMP_DASH;
	v->a[75031] = anon_sym_GT_AMP_DASH;
	v->a[75032] = anon_sym_LT_LT_DASH;
	v->a[75033] = anon_sym_LT_LT_LT;
	v->a[75034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75035] = anon_sym_DOLLAR_LBRACK;
	v->a[75036] = aux_sym_concatenation_token1;
	v->a[75037] = anon_sym_DOLLAR;
	v->a[75038] = sym__special_character;
	v->a[75039] = anon_sym_DQUOTE;
	small_parse_table_3752(v);
}

void	small_parse_table_3752(t_small_parse_table_array *v)
{
	v->a[75040] = sym_raw_string;
	v->a[75041] = sym_ansi_c_string;
	v->a[75042] = aux_sym_number_token1;
	v->a[75043] = aux_sym_number_token2;
	v->a[75044] = anon_sym_DOLLAR_LBRACE;
	v->a[75045] = anon_sym_DOLLAR_LPAREN;
	v->a[75046] = anon_sym_BQUOTE;
	v->a[75047] = anon_sym_DOLLAR_BQUOTE;
	v->a[75048] = anon_sym_LT_LPAREN;
	v->a[75049] = anon_sym_GT_LPAREN;
	v->a[75050] = sym_word;
	v->a[75051] = 5;
	v->a[75052] = actions(3);
	v->a[75053] = 1;
	v->a[75054] = sym_comment;
	v->a[75055] = actions(5753);
	v->a[75056] = 1;
	v->a[75057] = sym__special_character;
	v->a[75058] = state(1608);
	v->a[75059] = 1;
	small_parse_table_3753(v);
}

void	small_parse_table_3753(t_small_parse_table_array *v)
{
	v->a[75060] = aux_sym__literal_repeat1;
	v->a[75061] = actions(5723);
	v->a[75062] = 5;
	v->a[75063] = sym_file_descriptor;
	v->a[75064] = sym_variable_name;
	v->a[75065] = sym_test_operator;
	v->a[75066] = sym__brace_start;
	v->a[75067] = aux_sym_heredoc_redirect_token1;
	v->a[75068] = actions(5721);
	v->a[75069] = 38;
	v->a[75070] = anon_sym_LPAREN_LPAREN;
	v->a[75071] = anon_sym_SEMI;
	v->a[75072] = anon_sym_PIPE_PIPE;
	v->a[75073] = anon_sym_AMP_AMP;
	v->a[75074] = anon_sym_PIPE;
	v->a[75075] = anon_sym_AMP;
	v->a[75076] = anon_sym_LT;
	v->a[75077] = anon_sym_GT;
	v->a[75078] = anon_sym_LT_LT;
	v->a[75079] = anon_sym_GT_GT;
	small_parse_table_3754(v);
}

void	small_parse_table_3754(t_small_parse_table_array *v)
{
	v->a[75080] = anon_sym_SEMI_SEMI;
	v->a[75081] = anon_sym_SEMI_AMP;
	v->a[75082] = anon_sym_SEMI_SEMI_AMP;
	v->a[75083] = anon_sym_PIPE_AMP;
	v->a[75084] = anon_sym_AMP_GT;
	v->a[75085] = anon_sym_AMP_GT_GT;
	v->a[75086] = anon_sym_LT_AMP;
	v->a[75087] = anon_sym_GT_AMP;
	v->a[75088] = anon_sym_GT_PIPE;
	v->a[75089] = anon_sym_LT_AMP_DASH;
	v->a[75090] = anon_sym_GT_AMP_DASH;
	v->a[75091] = anon_sym_LT_LT_DASH;
	v->a[75092] = anon_sym_LT_LT_LT;
	v->a[75093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75094] = anon_sym_DOLLAR_LBRACK;
	v->a[75095] = anon_sym_DOLLAR;
	v->a[75096] = anon_sym_DQUOTE;
	v->a[75097] = sym_raw_string;
	v->a[75098] = sym_ansi_c_string;
	v->a[75099] = aux_sym_number_token1;
	small_parse_table_3755(v);
}

/* EOF small_parse_table_750.c */
