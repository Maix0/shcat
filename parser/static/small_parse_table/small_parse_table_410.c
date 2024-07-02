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
	v->a[41000] = sym_file_descriptor;
	v->a[41001] = actions(1438);
	v->a[41002] = 1;
	v->a[41003] = sym_variable_name;
	v->a[41004] = actions(1454);
	v->a[41005] = 1;
	v->a[41006] = anon_sym_RPAREN;
	v->a[41007] = actions(1432);
	v->a[41008] = 7;
	v->a[41009] = anon_sym_LT;
	v->a[41010] = anon_sym_GT;
	v->a[41011] = anon_sym_GT_GT;
	v->a[41012] = anon_sym_LT_AMP;
	v->a[41013] = anon_sym_GT_AMP;
	v->a[41014] = anon_sym_GT_PIPE;
	v->a[41015] = anon_sym_LT_GT;
	v->a[41016] = actions(1428);
	v->a[41017] = 9;
	v->a[41018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41019] = anon_sym_DOLLAR;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = anon_sym_DQUOTE;
	v->a[41021] = sym_raw_string;
	v->a[41022] = sym_number;
	v->a[41023] = anon_sym_DOLLAR_LBRACE;
	v->a[41024] = anon_sym_DOLLAR_LPAREN;
	v->a[41025] = anon_sym_BQUOTE;
	v->a[41026] = sym_word;
	v->a[41027] = actions(1430);
	v->a[41028] = 9;
	v->a[41029] = anon_sym_PIPE;
	v->a[41030] = anon_sym_SEMI_SEMI;
	v->a[41031] = anon_sym_AMP_AMP;
	v->a[41032] = anon_sym_PIPE_PIPE;
	v->a[41033] = anon_sym_LT_LT;
	v->a[41034] = anon_sym_LT_LT_DASH;
	v->a[41035] = aux_sym_heredoc_redirect_token1;
	v->a[41036] = anon_sym_AMP;
	v->a[41037] = anon_sym_SEMI;
	v->a[41038] = 5;
	v->a[41039] = actions(3);
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = 1;
	v->a[41041] = sym_comment;
	v->a[41042] = actions(702);
	v->a[41043] = 1;
	v->a[41044] = sym_variable_name;
	v->a[41045] = actions(1457);
	v->a[41046] = 2;
	v->a[41047] = sym_file_descriptor;
	v->a[41048] = ts_builtin_sym_end;
	v->a[41049] = actions(690);
	v->a[41050] = 9;
	v->a[41051] = anon_sym_DOLLAR_LPAREN_LPAREN;
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
	v->a[41060] = actions(1459);
	v->a[41061] = 16;
	v->a[41062] = anon_sym_PIPE;
	v->a[41063] = anon_sym_SEMI_SEMI;
	v->a[41064] = anon_sym_AMP_AMP;
	v->a[41065] = anon_sym_PIPE_PIPE;
	v->a[41066] = anon_sym_LT;
	v->a[41067] = anon_sym_GT;
	v->a[41068] = anon_sym_GT_GT;
	v->a[41069] = anon_sym_LT_AMP;
	v->a[41070] = anon_sym_GT_AMP;
	v->a[41071] = anon_sym_GT_PIPE;
	v->a[41072] = anon_sym_LT_GT;
	v->a[41073] = anon_sym_LT_LT;
	v->a[41074] = anon_sym_LT_LT_DASH;
	v->a[41075] = aux_sym_heredoc_redirect_token1;
	v->a[41076] = anon_sym_AMP;
	v->a[41077] = anon_sym_SEMI;
	v->a[41078] = 7;
	v->a[41079] = actions(3);
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = 1;
	v->a[41081] = sym_comment;
	v->a[41082] = actions(1435);
	v->a[41083] = 1;
	v->a[41084] = sym_file_descriptor;
	v->a[41085] = actions(1438);
	v->a[41086] = 1;
	v->a[41087] = sym_variable_name;
	v->a[41088] = actions(1461);
	v->a[41089] = 1;
	v->a[41090] = anon_sym_RPAREN;
	v->a[41091] = actions(1432);
	v->a[41092] = 7;
	v->a[41093] = anon_sym_LT;
	v->a[41094] = anon_sym_GT;
	v->a[41095] = anon_sym_GT_GT;
	v->a[41096] = anon_sym_LT_AMP;
	v->a[41097] = anon_sym_GT_AMP;
	v->a[41098] = anon_sym_GT_PIPE;
	v->a[41099] = anon_sym_LT_GT;
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
