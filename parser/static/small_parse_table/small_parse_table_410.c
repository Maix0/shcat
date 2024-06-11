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
	v->a[41000] = actions(1116);
	v->a[41001] = 2;
	v->a[41002] = anon_sym_EQ_EQ;
	v->a[41003] = anon_sym_BANG_EQ;
	v->a[41004] = actions(1090);
	v->a[41005] = 3;
	v->a[41006] = anon_sym_STAR;
	v->a[41007] = anon_sym_SLASH;
	v->a[41008] = anon_sym_PERCENT;
	v->a[41009] = actions(1288);
	v->a[41010] = 10;
	v->a[41011] = anon_sym_PLUS_EQ;
	v->a[41012] = anon_sym_DASH_EQ;
	v->a[41013] = anon_sym_STAR_EQ;
	v->a[41014] = anon_sym_SLASH_EQ;
	v->a[41015] = anon_sym_PERCENT_EQ;
	v->a[41016] = anon_sym_LT_LT_EQ;
	v->a[41017] = anon_sym_GT_GT_EQ;
	v->a[41018] = anon_sym_AMP_EQ;
	v->a[41019] = anon_sym_CARET_EQ;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = anon_sym_PIPE_EQ;
	v->a[41021] = 3;
	v->a[41022] = actions(1094);
	v->a[41023] = 1;
	v->a[41024] = sym_comment;
	v->a[41025] = actions(1191);
	v->a[41026] = 13;
	v->a[41027] = anon_sym_PIPE;
	v->a[41028] = anon_sym_EQ;
	v->a[41029] = anon_sym_LT;
	v->a[41030] = anon_sym_GT;
	v->a[41031] = anon_sym_GT_GT;
	v->a[41032] = anon_sym_LT_LT;
	v->a[41033] = anon_sym_CARET;
	v->a[41034] = anon_sym_AMP;
	v->a[41035] = anon_sym_PLUS;
	v->a[41036] = anon_sym_DASH;
	v->a[41037] = anon_sym_STAR;
	v->a[41038] = anon_sym_SLASH;
	v->a[41039] = anon_sym_PERCENT;
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = actions(1193);
	v->a[41041] = 20;
	v->a[41042] = anon_sym_RPAREN;
	v->a[41043] = anon_sym_AMP_AMP;
	v->a[41044] = anon_sym_PIPE_PIPE;
	v->a[41045] = anon_sym_PLUS_EQ;
	v->a[41046] = anon_sym_DASH_EQ;
	v->a[41047] = anon_sym_STAR_EQ;
	v->a[41048] = anon_sym_SLASH_EQ;
	v->a[41049] = anon_sym_PERCENT_EQ;
	v->a[41050] = anon_sym_LT_LT_EQ;
	v->a[41051] = anon_sym_GT_GT_EQ;
	v->a[41052] = anon_sym_AMP_EQ;
	v->a[41053] = anon_sym_CARET_EQ;
	v->a[41054] = anon_sym_PIPE_EQ;
	v->a[41055] = anon_sym_EQ_EQ;
	v->a[41056] = anon_sym_BANG_EQ;
	v->a[41057] = anon_sym_LT_EQ;
	v->a[41058] = anon_sym_GT_EQ;
	v->a[41059] = anon_sym_QMARK;
	small_parse_table_2053(v);
}

void	small_parse_table_2053(t_small_parse_table_array *v)
{
	v->a[41060] = anon_sym_PLUS_PLUS2;
	v->a[41061] = anon_sym_DASH_DASH2;
	v->a[41062] = 6;
	v->a[41063] = actions(3);
	v->a[41064] = 1;
	v->a[41065] = sym_comment;
	v->a[41066] = actions(1431);
	v->a[41067] = 1;
	v->a[41068] = sym_variable_name;
	v->a[41069] = actions(379);
	v->a[41070] = 2;
	v->a[41071] = sym_file_descriptor;
	v->a[41072] = ts_builtin_sym_end;
	v->a[41073] = actions(1429);
	v->a[41074] = 2;
	v->a[41075] = aux_sym__simple_variable_name_token1;
	v->a[41076] = aux_sym__multiline_variable_name_token1;
	v->a[41077] = actions(1427);
	v->a[41078] = 9;
	v->a[41079] = anon_sym_BANG;
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = anon_sym_DASH;
	v->a[41081] = anon_sym_STAR;
	v->a[41082] = anon_sym_QMARK;
	v->a[41083] = anon_sym_DOLLAR;
	v->a[41084] = anon_sym_POUND;
	v->a[41085] = anon_sym_AT;
	v->a[41086] = anon_sym_0;
	v->a[41087] = anon_sym__;
	v->a[41088] = actions(381);
	v->a[41089] = 19;
	v->a[41090] = anon_sym_PIPE;
	v->a[41091] = anon_sym_SEMI_SEMI;
	v->a[41092] = anon_sym_AMP_AMP;
	v->a[41093] = anon_sym_PIPE_PIPE;
	v->a[41094] = anon_sym_LT;
	v->a[41095] = anon_sym_GT;
	v->a[41096] = anon_sym_GT_GT;
	v->a[41097] = anon_sym_AMP_GT;
	v->a[41098] = anon_sym_AMP_GT_GT;
	v->a[41099] = anon_sym_LT_AMP;
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
