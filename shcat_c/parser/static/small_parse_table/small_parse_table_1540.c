/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1540.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7700(t_small_parse_table_array *v)
{
	v->a[154000] = anon_sym_GT_AMP_DASH;
	v->a[154001] = anon_sym_LT_LT_DASH;
	v->a[154002] = anon_sym_LT_LT_LT;
	v->a[154003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[154004] = anon_sym_DOLLAR_LBRACK;
	v->a[154005] = sym__special_character;
	v->a[154006] = anon_sym_DQUOTE;
	v->a[154007] = sym_raw_string;
	v->a[154008] = sym_ansi_c_string;
	v->a[154009] = anon_sym_DOLLAR_LBRACE;
	v->a[154010] = anon_sym_BQUOTE;
	v->a[154011] = anon_sym_DOLLAR_BQUOTE;
	v->a[154012] = anon_sym_LT_LPAREN;
	v->a[154013] = anon_sym_GT_LPAREN;
	v->a[154014] = 5;
	v->a[154015] = actions(71);
	v->a[154016] = 1;
	v->a[154017] = sym_comment;
	v->a[154018] = actions(7158);
	v->a[154019] = 1;
	small_parse_table_7701(v);
}

void	small_parse_table_7701(t_small_parse_table_array *v)
{
	v->a[154020] = sym__special_character;
	v->a[154021] = state(2867);
	v->a[154022] = 1;
	v->a[154023] = aux_sym__literal_repeat1;
	v->a[154024] = actions(5393);
	v->a[154025] = 12;
	v->a[154026] = anon_sym_PIPE;
	v->a[154027] = anon_sym_LT;
	v->a[154028] = anon_sym_GT;
	v->a[154029] = anon_sym_LT_LT;
	v->a[154030] = anon_sym_AMP_GT;
	v->a[154031] = anon_sym_LT_AMP;
	v->a[154032] = anon_sym_GT_AMP;
	v->a[154033] = anon_sym_DOLLAR;
	v->a[154034] = aux_sym_number_token1;
	v->a[154035] = aux_sym_number_token2;
	v->a[154036] = anon_sym_DOLLAR_LPAREN;
	v->a[154037] = sym_word;
	v->a[154038] = actions(5395);
	v->a[154039] = 24;
	small_parse_table_7702(v);
}

void	small_parse_table_7702(t_small_parse_table_array *v)
{
	v->a[154040] = sym_file_descriptor;
	v->a[154041] = sym_test_operator;
	v->a[154042] = sym__brace_start;
	v->a[154043] = anon_sym_LPAREN_LPAREN;
	v->a[154044] = anon_sym_PIPE_PIPE;
	v->a[154045] = anon_sym_AMP_AMP;
	v->a[154046] = anon_sym_GT_GT;
	v->a[154047] = anon_sym_PIPE_AMP;
	v->a[154048] = anon_sym_AMP_GT_GT;
	v->a[154049] = anon_sym_GT_PIPE;
	v->a[154050] = anon_sym_LT_AMP_DASH;
	v->a[154051] = anon_sym_GT_AMP_DASH;
	v->a[154052] = anon_sym_LT_LT_DASH;
	v->a[154053] = anon_sym_LT_LT_LT;
	v->a[154054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[154055] = anon_sym_DOLLAR_LBRACK;
	v->a[154056] = anon_sym_DQUOTE;
	v->a[154057] = sym_raw_string;
	v->a[154058] = sym_ansi_c_string;
	v->a[154059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_7703(v);
}

void	small_parse_table_7703(t_small_parse_table_array *v)
{
	v->a[154060] = anon_sym_BQUOTE;
	v->a[154061] = anon_sym_DOLLAR_BQUOTE;
	v->a[154062] = anon_sym_LT_LPAREN;
	v->a[154063] = anon_sym_GT_LPAREN;
	v->a[154064] = 13;
	v->a[154065] = actions(71);
	v->a[154066] = 1;
	v->a[154067] = sym_comment;
	v->a[154068] = actions(6895);
	v->a[154069] = 1;
	v->a[154070] = anon_sym_CARET;
	v->a[154071] = actions(6897);
	v->a[154072] = 1;
	v->a[154073] = anon_sym_AMP;
	v->a[154074] = actions(6911);
	v->a[154075] = 1;
	v->a[154076] = anon_sym_STAR_STAR;
	v->a[154077] = actions(6885);
	v->a[154078] = 2;
	v->a[154079] = anon_sym_PLUS_PLUS;
	small_parse_table_7704(v);
}

void	small_parse_table_7704(t_small_parse_table_array *v)
{
	v->a[154080] = anon_sym_DASH_DASH;
	v->a[154081] = actions(6899);
	v->a[154082] = 2;
	v->a[154083] = anon_sym_EQ_EQ;
	v->a[154084] = anon_sym_BANG_EQ;
	v->a[154085] = actions(6901);
	v->a[154086] = 2;
	v->a[154087] = anon_sym_LT;
	v->a[154088] = anon_sym_GT;
	v->a[154089] = actions(6903);
	v->a[154090] = 2;
	v->a[154091] = anon_sym_LT_EQ;
	v->a[154092] = anon_sym_GT_EQ;
	v->a[154093] = actions(6905);
	v->a[154094] = 2;
	v->a[154095] = anon_sym_LT_LT;
	v->a[154096] = anon_sym_GT_GT;
	v->a[154097] = actions(6907);
	v->a[154098] = 2;
	v->a[154099] = anon_sym_PLUS;
	small_parse_table_7705(v);
}

/* EOF small_parse_table_1540.c */
