/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1220.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6100(t_small_parse_table_array *v)
{
	v->a[122000] = anon_sym_PIPE;
	v->a[122001] = anon_sym_LT;
	v->a[122002] = anon_sym_GT;
	v->a[122003] = anon_sym_LT_LT;
	v->a[122004] = anon_sym_GT_GT;
	v->a[122005] = anon_sym_PIPE_AMP;
	v->a[122006] = anon_sym_AMP_GT;
	v->a[122007] = anon_sym_AMP_GT_GT;
	v->a[122008] = anon_sym_LT_AMP;
	v->a[122009] = anon_sym_GT_AMP;
	v->a[122010] = anon_sym_GT_PIPE;
	v->a[122011] = anon_sym_LT_AMP_DASH;
	v->a[122012] = anon_sym_GT_AMP_DASH;
	v->a[122013] = anon_sym_LT_LT_DASH;
	v->a[122014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122015] = anon_sym_DOLLAR_LBRACK;
	v->a[122016] = anon_sym_DOLLAR;
	v->a[122017] = sym__special_character;
	v->a[122018] = anon_sym_DQUOTE;
	v->a[122019] = sym_raw_string;
	small_parse_table_6101(v);
}

void	small_parse_table_6101(t_small_parse_table_array *v)
{
	v->a[122020] = sym_ansi_c_string;
	v->a[122021] = aux_sym_number_token1;
	v->a[122022] = aux_sym_number_token2;
	v->a[122023] = anon_sym_DOLLAR_LBRACE;
	v->a[122024] = anon_sym_DOLLAR_LPAREN;
	v->a[122025] = anon_sym_BQUOTE;
	v->a[122026] = anon_sym_DOLLAR_BQUOTE;
	v->a[122027] = anon_sym_LT_LPAREN;
	v->a[122028] = anon_sym_GT_LPAREN;
	v->a[122029] = aux_sym__simple_variable_name_token1;
	v->a[122030] = sym_word;
	v->a[122031] = 5;
	v->a[122032] = actions(71);
	v->a[122033] = 1;
	v->a[122034] = sym_comment;
	v->a[122035] = actions(6467);
	v->a[122036] = 1;
	v->a[122037] = sym__special_character;
	v->a[122038] = state(2345);
	v->a[122039] = 1;
	small_parse_table_6102(v);
}

void	small_parse_table_6102(t_small_parse_table_array *v)
{
	v->a[122040] = aux_sym__literal_repeat1;
	v->a[122041] = actions(241);
	v->a[122042] = 15;
	v->a[122043] = anon_sym_PIPE;
	v->a[122044] = anon_sym_EQ_EQ;
	v->a[122045] = anon_sym_LT;
	v->a[122046] = anon_sym_GT;
	v->a[122047] = anon_sym_LT_LT;
	v->a[122048] = anon_sym_LPAREN;
	v->a[122049] = anon_sym_EQ_TILDE;
	v->a[122050] = anon_sym_AMP_GT;
	v->a[122051] = anon_sym_LT_AMP;
	v->a[122052] = anon_sym_GT_AMP;
	v->a[122053] = anon_sym_DOLLAR;
	v->a[122054] = aux_sym_number_token1;
	v->a[122055] = aux_sym_number_token2;
	v->a[122056] = anon_sym_DOLLAR_LPAREN;
	v->a[122057] = sym_word;
	v->a[122058] = actions(278);
	v->a[122059] = 25;
	small_parse_table_6103(v);
}

void	small_parse_table_6103(t_small_parse_table_array *v)
{
	v->a[122060] = sym_file_descriptor;
	v->a[122061] = sym_test_operator;
	v->a[122062] = sym__bare_dollar;
	v->a[122063] = sym__brace_start;
	v->a[122064] = anon_sym_LPAREN_LPAREN;
	v->a[122065] = anon_sym_PIPE_PIPE;
	v->a[122066] = anon_sym_AMP_AMP;
	v->a[122067] = anon_sym_GT_GT;
	v->a[122068] = anon_sym_PIPE_AMP;
	v->a[122069] = anon_sym_AMP_GT_GT;
	v->a[122070] = anon_sym_GT_PIPE;
	v->a[122071] = anon_sym_LT_AMP_DASH;
	v->a[122072] = anon_sym_GT_AMP_DASH;
	v->a[122073] = anon_sym_LT_LT_DASH;
	v->a[122074] = anon_sym_LT_LT_LT;
	v->a[122075] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122076] = anon_sym_DOLLAR_LBRACK;
	v->a[122077] = anon_sym_DQUOTE;
	v->a[122078] = sym_raw_string;
	v->a[122079] = sym_ansi_c_string;
	small_parse_table_6104(v);
}

void	small_parse_table_6104(t_small_parse_table_array *v)
{
	v->a[122080] = anon_sym_DOLLAR_LBRACE;
	v->a[122081] = anon_sym_BQUOTE;
	v->a[122082] = anon_sym_DOLLAR_BQUOTE;
	v->a[122083] = anon_sym_LT_LPAREN;
	v->a[122084] = anon_sym_GT_LPAREN;
	v->a[122085] = 3;
	v->a[122086] = actions(71);
	v->a[122087] = 1;
	v->a[122088] = sym_comment;
	v->a[122089] = actions(1328);
	v->a[122090] = 15;
	v->a[122091] = anon_sym_PIPE;
	v->a[122092] = anon_sym_EQ_EQ;
	v->a[122093] = anon_sym_LT;
	v->a[122094] = anon_sym_GT;
	v->a[122095] = anon_sym_LT_LT;
	v->a[122096] = anon_sym_EQ_TILDE;
	v->a[122097] = anon_sym_AMP_GT;
	v->a[122098] = anon_sym_LT_AMP;
	v->a[122099] = anon_sym_GT_AMP;
	small_parse_table_6105(v);
}

/* EOF small_parse_table_1220.c */
