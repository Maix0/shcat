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
	v->a[41000] = actions(1432);
	v->a[41001] = 3;
	v->a[41002] = sym_raw_string;
	v->a[41003] = sym_number;
	v->a[41004] = sym_word;
	v->a[41005] = state(827);
	v->a[41006] = 5;
	v->a[41007] = sym_arithmetic_expansion;
	v->a[41008] = sym_string;
	v->a[41009] = sym_simple_expansion;
	v->a[41010] = sym_expansion;
	v->a[41011] = sym_command_substitution;
	v->a[41012] = actions(516);
	v->a[41013] = 16;
	v->a[41014] = anon_sym_PIPE;
	v->a[41015] = anon_sym_AMP_AMP;
	v->a[41016] = anon_sym_PIPE_PIPE;
	v->a[41017] = anon_sym_LT;
	v->a[41018] = anon_sym_GT;
	v->a[41019] = anon_sym_GT_GT;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = anon_sym_AMP_GT;
	v->a[41021] = anon_sym_AMP_GT_GT;
	v->a[41022] = anon_sym_LT_AMP;
	v->a[41023] = anon_sym_GT_AMP;
	v->a[41024] = anon_sym_GT_PIPE;
	v->a[41025] = anon_sym_LT_AMP_DASH;
	v->a[41026] = anon_sym_GT_AMP_DASH;
	v->a[41027] = anon_sym_LT_LT;
	v->a[41028] = anon_sym_LT_LT_DASH;
	v->a[41029] = aux_sym_heredoc_redirect_token1;
	v->a[41030] = 3;
	v->a[41031] = actions(1074);
	v->a[41032] = 1;
	v->a[41033] = sym_comment;
	v->a[41034] = actions(1243);
	v->a[41035] = 13;
	v->a[41036] = anon_sym_PIPE;
	v->a[41037] = anon_sym_EQ;
	v->a[41038] = anon_sym_LT;
	v->a[41039] = anon_sym_GT;
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = anon_sym_GT_GT;
	v->a[41041] = anon_sym_LT_LT;
	v->a[41042] = anon_sym_CARET;
	v->a[41043] = anon_sym_AMP;
	v->a[41044] = anon_sym_PLUS;
	v->a[41045] = anon_sym_DASH;
	v->a[41046] = anon_sym_STAR;
	v->a[41047] = anon_sym_SLASH;
	v->a[41048] = anon_sym_PERCENT;
	v->a[41049] = actions(1245);
	v->a[41050] = 20;
	v->a[41051] = anon_sym_RPAREN;
	v->a[41052] = anon_sym_AMP_AMP;
	v->a[41053] = anon_sym_PIPE_PIPE;
	v->a[41054] = anon_sym_PLUS_EQ;
	v->a[41055] = anon_sym_DASH_EQ;
	v->a[41056] = anon_sym_STAR_EQ;
	v->a[41057] = anon_sym_SLASH_EQ;
	v->a[41058] = anon_sym_PERCENT_EQ;
	v->a[41059] = anon_sym_LT_LT_EQ;
	small_parse_table_2053(v);
}

void	small_parse_table_2053(t_small_parse_table_array *v)
{
	v->a[41060] = anon_sym_GT_GT_EQ;
	v->a[41061] = anon_sym_AMP_EQ;
	v->a[41062] = anon_sym_CARET_EQ;
	v->a[41063] = anon_sym_PIPE_EQ;
	v->a[41064] = anon_sym_EQ_EQ;
	v->a[41065] = anon_sym_BANG_EQ;
	v->a[41066] = anon_sym_LT_EQ;
	v->a[41067] = anon_sym_GT_EQ;
	v->a[41068] = anon_sym_QMARK;
	v->a[41069] = anon_sym_PLUS_PLUS2;
	v->a[41070] = anon_sym_DASH_DASH2;
	v->a[41071] = 12;
	v->a[41072] = actions(1074);
	v->a[41073] = 1;
	v->a[41074] = sym_comment;
	v->a[41075] = actions(1342);
	v->a[41076] = 1;
	v->a[41077] = anon_sym_CARET;
	v->a[41078] = actions(1344);
	v->a[41079] = 1;
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = anon_sym_AMP;
	v->a[41081] = actions(1235);
	v->a[41082] = 2;
	v->a[41083] = anon_sym_PIPE;
	v->a[41084] = anon_sym_EQ;
	v->a[41085] = actions(1336);
	v->a[41086] = 2;
	v->a[41087] = anon_sym_LT;
	v->a[41088] = anon_sym_GT;
	v->a[41089] = actions(1338);
	v->a[41090] = 2;
	v->a[41091] = anon_sym_GT_GT;
	v->a[41092] = anon_sym_LT_LT;
	v->a[41093] = actions(1346);
	v->a[41094] = 2;
	v->a[41095] = anon_sym_EQ_EQ;
	v->a[41096] = anon_sym_BANG_EQ;
	v->a[41097] = actions(1348);
	v->a[41098] = 2;
	v->a[41099] = anon_sym_LT_EQ;
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
