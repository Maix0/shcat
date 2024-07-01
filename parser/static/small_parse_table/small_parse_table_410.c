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
	v->a[41000] = anon_sym_LT;
	v->a[41001] = anon_sym_GT;
	v->a[41002] = anon_sym_GT_GT;
	v->a[41003] = anon_sym_LT_AMP;
	v->a[41004] = anon_sym_GT_AMP;
	v->a[41005] = anon_sym_GT_PIPE;
	v->a[41006] = anon_sym_LT_GT;
	v->a[41007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41008] = anon_sym_DOLLAR;
	v->a[41009] = anon_sym_DQUOTE;
	v->a[41010] = sym_raw_string;
	v->a[41011] = sym_number;
	v->a[41012] = anon_sym_DOLLAR_LBRACE;
	v->a[41013] = anon_sym_DOLLAR_LPAREN;
	v->a[41014] = anon_sym_BQUOTE;
	v->a[41015] = sym_word;
	v->a[41016] = 7;
	v->a[41017] = actions(3);
	v->a[41018] = 1;
	v->a[41019] = sym_comment;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = actions(1432);
	v->a[41021] = 1;
	v->a[41022] = sym_file_descriptor;
	v->a[41023] = actions(1435);
	v->a[41024] = 1;
	v->a[41025] = sym_variable_name;
	v->a[41026] = actions(1464);
	v->a[41027] = 1;
	v->a[41028] = anon_sym_RPAREN;
	v->a[41029] = actions(1429);
	v->a[41030] = 7;
	v->a[41031] = anon_sym_LT;
	v->a[41032] = anon_sym_GT;
	v->a[41033] = anon_sym_GT_GT;
	v->a[41034] = anon_sym_LT_AMP;
	v->a[41035] = anon_sym_GT_AMP;
	v->a[41036] = anon_sym_GT_PIPE;
	v->a[41037] = anon_sym_LT_GT;
	v->a[41038] = actions(1422);
	v->a[41039] = 9;
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41041] = anon_sym_DOLLAR;
	v->a[41042] = anon_sym_DQUOTE;
	v->a[41043] = sym_raw_string;
	v->a[41044] = sym_number;
	v->a[41045] = anon_sym_DOLLAR_LBRACE;
	v->a[41046] = anon_sym_DOLLAR_LPAREN;
	v->a[41047] = anon_sym_BQUOTE;
	v->a[41048] = sym_word;
	v->a[41049] = actions(1424);
	v->a[41050] = 9;
	v->a[41051] = anon_sym_PIPE;
	v->a[41052] = anon_sym_SEMI_SEMI;
	v->a[41053] = anon_sym_AMP_AMP;
	v->a[41054] = anon_sym_PIPE_PIPE;
	v->a[41055] = anon_sym_LT_LT;
	v->a[41056] = anon_sym_LT_LT_DASH;
	v->a[41057] = aux_sym_heredoc_redirect_token1;
	v->a[41058] = anon_sym_AMP;
	v->a[41059] = anon_sym_SEMI;
	small_parse_table_2053(v);
}

void	small_parse_table_2053(t_small_parse_table_array *v)
{
	v->a[41060] = 3;
	v->a[41061] = actions(3);
	v->a[41062] = 1;
	v->a[41063] = sym_comment;
	v->a[41064] = actions(1209);
	v->a[41065] = 2;
	v->a[41066] = sym_file_descriptor;
	v->a[41067] = sym_variable_name;
	v->a[41068] = actions(1207);
	v->a[41069] = 26;
	v->a[41070] = anon_sym_esac;
	v->a[41071] = anon_sym_PIPE;
	v->a[41072] = anon_sym_SEMI_SEMI;
	v->a[41073] = anon_sym_AMP_AMP;
	v->a[41074] = anon_sym_PIPE_PIPE;
	v->a[41075] = anon_sym_LT;
	v->a[41076] = anon_sym_GT;
	v->a[41077] = anon_sym_GT_GT;
	v->a[41078] = anon_sym_LT_AMP;
	v->a[41079] = anon_sym_GT_AMP;
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = anon_sym_GT_PIPE;
	v->a[41081] = anon_sym_LT_GT;
	v->a[41082] = anon_sym_LT_LT;
	v->a[41083] = anon_sym_LT_LT_DASH;
	v->a[41084] = aux_sym_heredoc_redirect_token1;
	v->a[41085] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41086] = anon_sym_AMP;
	v->a[41087] = anon_sym_DOLLAR;
	v->a[41088] = anon_sym_DQUOTE;
	v->a[41089] = sym_raw_string;
	v->a[41090] = sym_number;
	v->a[41091] = anon_sym_DOLLAR_LBRACE;
	v->a[41092] = anon_sym_DOLLAR_LPAREN;
	v->a[41093] = anon_sym_BQUOTE;
	v->a[41094] = sym_word;
	v->a[41095] = anon_sym_SEMI;
	v->a[41096] = 4;
	v->a[41097] = actions(3);
	v->a[41098] = 1;
	v->a[41099] = sym_comment;
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
