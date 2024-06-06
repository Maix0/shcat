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
	v->a[41000] = aux_sym__simple_variable_name_token1;
	v->a[41001] = sym_word;
	v->a[41002] = anon_sym_SEMI;
	v->a[41003] = 3;
	v->a[41004] = actions(3);
	v->a[41005] = 1;
	v->a[41006] = sym_comment;
	v->a[41007] = actions(2774);
	v->a[41008] = 6;
	v->a[41009] = sym_file_descriptor;
	v->a[41010] = sym__concat;
	v->a[41011] = sym_variable_name;
	v->a[41012] = sym_test_operator;
	v->a[41013] = sym__brace_start;
	v->a[41014] = aux_sym_heredoc_redirect_token1;
	v->a[41015] = actions(2772);
	v->a[41016] = 34;
	v->a[41017] = anon_sym_PIPE;
	v->a[41018] = anon_sym_SEMI_SEMI;
	v->a[41019] = anon_sym_SEMI_AMP;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = anon_sym_SEMI_SEMI_AMP;
	v->a[41021] = anon_sym_PIPE_AMP;
	v->a[41022] = anon_sym_AMP_AMP;
	v->a[41023] = anon_sym_PIPE_PIPE;
	v->a[41024] = anon_sym_LT;
	v->a[41025] = anon_sym_GT;
	v->a[41026] = anon_sym_GT_GT;
	v->a[41027] = anon_sym_AMP_GT;
	v->a[41028] = anon_sym_AMP_GT_GT;
	v->a[41029] = anon_sym_LT_AMP;
	v->a[41030] = anon_sym_GT_AMP;
	v->a[41031] = anon_sym_GT_PIPE;
	v->a[41032] = anon_sym_LT_AMP_DASH;
	v->a[41033] = anon_sym_GT_AMP_DASH;
	v->a[41034] = anon_sym_LT_LT;
	v->a[41035] = anon_sym_LT_LT_DASH;
	v->a[41036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41037] = anon_sym_AMP;
	v->a[41038] = aux_sym_concatenation_token1;
	v->a[41039] = anon_sym_DOLLAR;
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = sym__special_character;
	v->a[41041] = anon_sym_DQUOTE;
	v->a[41042] = sym_raw_string;
	v->a[41043] = aux_sym_number_token1;
	v->a[41044] = aux_sym_number_token2;
	v->a[41045] = anon_sym_DOLLAR_LBRACE;
	v->a[41046] = anon_sym_DOLLAR_LPAREN;
	v->a[41047] = anon_sym_BQUOTE;
	v->a[41048] = anon_sym_DOLLAR_BQUOTE;
	v->a[41049] = sym_word;
	v->a[41050] = anon_sym_SEMI;
	v->a[41051] = 6;
	v->a[41052] = actions(3);
	v->a[41053] = 1;
	v->a[41054] = sym_comment;
	v->a[41055] = actions(3442);
	v->a[41056] = 1;
	v->a[41057] = aux_sym_concatenation_token1;
	v->a[41058] = actions(3572);
	v->a[41059] = 1;
	small_parse_table_2053(v);
}

void	small_parse_table_2053(t_small_parse_table_array *v)
{
	v->a[41060] = sym__concat;
	v->a[41061] = state(778);
	v->a[41062] = 1;
	v->a[41063] = aux_sym_concatenation_repeat1;
	v->a[41064] = actions(3106);
	v->a[41065] = 4;
	v->a[41066] = sym_file_descriptor;
	v->a[41067] = sym_test_operator;
	v->a[41068] = sym__brace_start;
	v->a[41069] = aux_sym_heredoc_redirect_token1;
	v->a[41070] = actions(3104);
	v->a[41071] = 33;
	v->a[41072] = anon_sym_PIPE;
	v->a[41073] = anon_sym_RPAREN;
	v->a[41074] = anon_sym_SEMI_SEMI;
	v->a[41075] = anon_sym_PIPE_AMP;
	v->a[41076] = anon_sym_AMP_AMP;
	v->a[41077] = anon_sym_PIPE_PIPE;
	v->a[41078] = anon_sym_LT;
	v->a[41079] = anon_sym_GT;
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = anon_sym_GT_GT;
	v->a[41081] = anon_sym_AMP_GT;
	v->a[41082] = anon_sym_AMP_GT_GT;
	v->a[41083] = anon_sym_LT_AMP;
	v->a[41084] = anon_sym_GT_AMP;
	v->a[41085] = anon_sym_GT_PIPE;
	v->a[41086] = anon_sym_LT_AMP_DASH;
	v->a[41087] = anon_sym_GT_AMP_DASH;
	v->a[41088] = anon_sym_LT_LT;
	v->a[41089] = anon_sym_LT_LT_DASH;
	v->a[41090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41091] = anon_sym_AMP;
	v->a[41092] = anon_sym_DOLLAR;
	v->a[41093] = sym__special_character;
	v->a[41094] = anon_sym_DQUOTE;
	v->a[41095] = sym_raw_string;
	v->a[41096] = aux_sym_number_token1;
	v->a[41097] = aux_sym_number_token2;
	v->a[41098] = anon_sym_DOLLAR_LBRACE;
	v->a[41099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
