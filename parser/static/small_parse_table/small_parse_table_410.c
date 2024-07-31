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
	v->a[41000] = actions(3);
	v->a[41001] = 1;
	v->a[41002] = sym_comment;
	v->a[41003] = actions(1147);
	v->a[41004] = 1;
	v->a[41005] = sym__concat;
	v->a[41006] = actions(1145);
	v->a[41007] = 22;
	v->a[41008] = anon_sym_PIPE;
	v->a[41009] = anon_sym_AMP_AMP;
	v->a[41010] = anon_sym_PIPE_PIPE;
	v->a[41011] = anon_sym_LT;
	v->a[41012] = anon_sym_GT;
	v->a[41013] = anon_sym_GT_GT;
	v->a[41014] = anon_sym_LT_AMP;
	v->a[41015] = anon_sym_GT_AMP;
	v->a[41016] = anon_sym_GT_PIPE;
	v->a[41017] = anon_sym_LT_GT;
	v->a[41018] = anon_sym_LT_LT;
	v->a[41019] = anon_sym_LT_LT_DASH;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41021] = aux_sym_concatenation_token1;
	v->a[41022] = anon_sym_DOLLAR;
	v->a[41023] = anon_sym_DQUOTE;
	v->a[41024] = sym_raw_string;
	v->a[41025] = sym_number;
	v->a[41026] = anon_sym_DOLLAR_LBRACE;
	v->a[41027] = anon_sym_DOLLAR_LPAREN;
	v->a[41028] = anon_sym_BQUOTE;
	v->a[41029] = sym_word;
	v->a[41030] = 3;
	v->a[41031] = actions(3);
	v->a[41032] = 1;
	v->a[41033] = sym_comment;
	v->a[41034] = actions(473);
	v->a[41035] = 1;
	v->a[41036] = sym__concat;
	v->a[41037] = actions(471);
	v->a[41038] = 22;
	v->a[41039] = anon_sym_SEMI_SEMI;
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = anon_sym_AMP_AMP;
	v->a[41041] = anon_sym_PIPE_PIPE;
	v->a[41042] = anon_sym_LT;
	v->a[41043] = anon_sym_GT;
	v->a[41044] = anon_sym_GT_GT;
	v->a[41045] = anon_sym_LT_AMP;
	v->a[41046] = anon_sym_GT_AMP;
	v->a[41047] = anon_sym_GT_PIPE;
	v->a[41048] = anon_sym_LT_GT;
	v->a[41049] = aux_sym_heredoc_redirect_token1;
	v->a[41050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41051] = aux_sym_concatenation_token1;
	v->a[41052] = anon_sym_DOLLAR;
	v->a[41053] = anon_sym_DQUOTE;
	v->a[41054] = sym_raw_string;
	v->a[41055] = sym_number;
	v->a[41056] = anon_sym_DOLLAR_LBRACE;
	v->a[41057] = anon_sym_DOLLAR_LPAREN;
	v->a[41058] = anon_sym_BQUOTE;
	v->a[41059] = sym_word;
	small_parse_table_2053(v);
}

void	small_parse_table_2053(t_small_parse_table_array *v)
{
	v->a[41060] = anon_sym_SEMI;
	v->a[41061] = 5;
	v->a[41062] = actions(3);
	v->a[41063] = 1;
	v->a[41064] = sym_comment;
	v->a[41065] = actions(1289);
	v->a[41066] = 1;
	v->a[41067] = sym_variable_name;
	v->a[41068] = actions(1281);
	v->a[41069] = 5;
	v->a[41070] = anon_sym_PIPE;
	v->a[41071] = anon_sym_AMP_AMP;
	v->a[41072] = anon_sym_PIPE_PIPE;
	v->a[41073] = anon_sym_LT_LT;
	v->a[41074] = anon_sym_LT_LT_DASH;
	v->a[41075] = actions(1286);
	v->a[41076] = 7;
	v->a[41077] = anon_sym_LT;
	v->a[41078] = anon_sym_GT;
	v->a[41079] = anon_sym_GT_GT;
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = anon_sym_LT_AMP;
	v->a[41081] = anon_sym_GT_AMP;
	v->a[41082] = anon_sym_GT_PIPE;
	v->a[41083] = anon_sym_LT_GT;
	v->a[41084] = actions(1279);
	v->a[41085] = 9;
	v->a[41086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41087] = anon_sym_DOLLAR;
	v->a[41088] = anon_sym_DQUOTE;
	v->a[41089] = sym_raw_string;
	v->a[41090] = sym_number;
	v->a[41091] = anon_sym_DOLLAR_LBRACE;
	v->a[41092] = anon_sym_DOLLAR_LPAREN;
	v->a[41093] = anon_sym_BQUOTE;
	v->a[41094] = sym_word;
	v->a[41095] = 16;
	v->a[41096] = actions(3);
	v->a[41097] = 1;
	v->a[41098] = sym_comment;
	v->a[41099] = actions(1335);
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
