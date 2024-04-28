/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_410.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2050(t_small_parse_table_array *v)
{
	v->a[41000] = sym__special_character;
	v->a[41001] = anon_sym_DQUOTE;
	v->a[41002] = sym_raw_string;
	v->a[41003] = sym_ansi_c_string;
	v->a[41004] = aux_sym_number_token1;
	v->a[41005] = aux_sym_number_token2;
	v->a[41006] = anon_sym_DOLLAR_LBRACE;
	v->a[41007] = anon_sym_DOLLAR_LPAREN;
	v->a[41008] = anon_sym_BQUOTE;
	v->a[41009] = anon_sym_DOLLAR_BQUOTE;
	v->a[41010] = anon_sym_LT_LPAREN;
	v->a[41011] = anon_sym_GT_LPAREN;
	v->a[41012] = sym_word;
	v->a[41013] = 3;
	v->a[41014] = actions(3);
	v->a[41015] = 1;
	v->a[41016] = sym_comment;
	v->a[41017] = actions(1342);
	v->a[41018] = 6;
	v->a[41019] = sym_file_descriptor;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = sym__concat;
	v->a[41021] = sym_test_operator;
	v->a[41022] = sym__bare_dollar;
	v->a[41023] = sym__brace_start;
	v->a[41024] = aux_sym_heredoc_redirect_token1;
	v->a[41025] = actions(1340);
	v->a[41026] = 42;
	v->a[41027] = anon_sym_LPAREN_LPAREN;
	v->a[41028] = anon_sym_SEMI;
	v->a[41029] = anon_sym_PIPE_PIPE;
	v->a[41030] = anon_sym_AMP_AMP;
	v->a[41031] = anon_sym_PIPE;
	v->a[41032] = anon_sym_AMP;
	v->a[41033] = anon_sym_EQ_EQ;
	v->a[41034] = anon_sym_LT;
	v->a[41035] = anon_sym_GT;
	v->a[41036] = anon_sym_LT_LT;
	v->a[41037] = anon_sym_GT_GT;
	v->a[41038] = anon_sym_LPAREN;
	v->a[41039] = anon_sym_RPAREN;
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = anon_sym_SEMI_SEMI;
	v->a[41041] = anon_sym_PIPE_AMP;
	v->a[41042] = anon_sym_EQ_TILDE;
	v->a[41043] = anon_sym_AMP_GT;
	v->a[41044] = anon_sym_AMP_GT_GT;
	v->a[41045] = anon_sym_LT_AMP;
	v->a[41046] = anon_sym_GT_AMP;
	v->a[41047] = anon_sym_GT_PIPE;
	v->a[41048] = anon_sym_LT_AMP_DASH;
	v->a[41049] = anon_sym_GT_AMP_DASH;
	v->a[41050] = anon_sym_LT_LT_DASH;
	v->a[41051] = anon_sym_LT_LT_LT;
	v->a[41052] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41053] = anon_sym_DOLLAR_LBRACK;
	v->a[41054] = aux_sym_concatenation_token1;
	v->a[41055] = anon_sym_DOLLAR;
	v->a[41056] = sym__special_character;
	v->a[41057] = anon_sym_DQUOTE;
	v->a[41058] = sym_raw_string;
	v->a[41059] = sym_ansi_c_string;
	small_parse_table_2053(v);
}

void	small_parse_table_2053(t_small_parse_table_array *v)
{
	v->a[41060] = aux_sym_number_token1;
	v->a[41061] = aux_sym_number_token2;
	v->a[41062] = anon_sym_DOLLAR_LBRACE;
	v->a[41063] = anon_sym_DOLLAR_LPAREN;
	v->a[41064] = anon_sym_BQUOTE;
	v->a[41065] = anon_sym_DOLLAR_BQUOTE;
	v->a[41066] = anon_sym_LT_LPAREN;
	v->a[41067] = anon_sym_GT_LPAREN;
	v->a[41068] = sym_word;
	v->a[41069] = 6;
	v->a[41070] = actions(3);
	v->a[41071] = 1;
	v->a[41072] = sym_comment;
	v->a[41073] = actions(5080);
	v->a[41074] = 1;
	v->a[41075] = aux_sym_concatenation_token1;
	v->a[41076] = actions(5082);
	v->a[41077] = 1;
	v->a[41078] = sym__concat;
	v->a[41079] = state(1040);
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = 1;
	v->a[41081] = aux_sym_concatenation_repeat1;
	v->a[41082] = actions(4532);
	v->a[41083] = 5;
	v->a[41084] = sym_file_descriptor;
	v->a[41085] = sym_test_operator;
	v->a[41086] = sym__bare_dollar;
	v->a[41087] = sym__brace_start;
	v->a[41088] = aux_sym_heredoc_redirect_token1;
	v->a[41089] = actions(4530);
	v->a[41090] = 40;
	v->a[41091] = anon_sym_LPAREN_LPAREN;
	v->a[41092] = anon_sym_SEMI;
	v->a[41093] = anon_sym_PIPE_PIPE;
	v->a[41094] = anon_sym_AMP_AMP;
	v->a[41095] = anon_sym_PIPE;
	v->a[41096] = anon_sym_AMP;
	v->a[41097] = anon_sym_EQ_EQ;
	v->a[41098] = anon_sym_LT;
	v->a[41099] = anon_sym_GT;
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
