/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1330.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6650(t_small_parse_table_array *v)
{
	v->a[133000] = sym_file_descriptor;
	v->a[133001] = sym_variable_name;
	v->a[133002] = sym_test_operator;
	v->a[133003] = sym__brace_start;
	v->a[133004] = anon_sym_LPAREN_LPAREN;
	v->a[133005] = anon_sym_PIPE_PIPE;
	v->a[133006] = anon_sym_AMP_AMP;
	v->a[133007] = anon_sym_GT_GT;
	v->a[133008] = anon_sym_PIPE_AMP;
	v->a[133009] = anon_sym_RBRACK;
	v->a[133010] = anon_sym_AMP_GT_GT;
	v->a[133011] = anon_sym_GT_PIPE;
	v->a[133012] = anon_sym_LT_AMP_DASH;
	v->a[133013] = anon_sym_GT_AMP_DASH;
	v->a[133014] = anon_sym_LT_LT_DASH;
	v->a[133015] = anon_sym_LT_LT_LT;
	v->a[133016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[133017] = anon_sym_DOLLAR_LBRACK;
	v->a[133018] = anon_sym_DQUOTE;
	v->a[133019] = sym_raw_string;
	small_parse_table_6651(v);
}

void	small_parse_table_6651(t_small_parse_table_array *v)
{
	v->a[133020] = sym_ansi_c_string;
	v->a[133021] = anon_sym_DOLLAR_LBRACE;
	v->a[133022] = anon_sym_BQUOTE;
	v->a[133023] = anon_sym_DOLLAR_BQUOTE;
	v->a[133024] = anon_sym_LT_LPAREN;
	v->a[133025] = anon_sym_GT_LPAREN;
	v->a[133026] = 6;
	v->a[133027] = actions(71);
	v->a[133028] = 1;
	v->a[133029] = sym_comment;
	v->a[133030] = actions(1105);
	v->a[133031] = 1;
	v->a[133032] = aux_sym_concatenation_token1;
	v->a[133033] = actions(6717);
	v->a[133034] = 1;
	v->a[133035] = sym__concat;
	v->a[133036] = state(2511);
	v->a[133037] = 1;
	v->a[133038] = aux_sym_concatenation_repeat1;
	v->a[133039] = actions(1286);
	small_parse_table_6652(v);
}

void	small_parse_table_6652(t_small_parse_table_array *v)
{
	v->a[133040] = 14;
	v->a[133041] = anon_sym_EQ;
	v->a[133042] = anon_sym_PIPE;
	v->a[133043] = anon_sym_CARET;
	v->a[133044] = anon_sym_AMP;
	v->a[133045] = anon_sym_LT;
	v->a[133046] = anon_sym_GT;
	v->a[133047] = anon_sym_LT_LT;
	v->a[133048] = anon_sym_GT_GT;
	v->a[133049] = anon_sym_PLUS;
	v->a[133050] = anon_sym_DASH;
	v->a[133051] = anon_sym_STAR;
	v->a[133052] = anon_sym_SLASH;
	v->a[133053] = anon_sym_PERCENT;
	v->a[133054] = anon_sym_STAR_STAR;
	v->a[133055] = actions(1288);
	v->a[133056] = 23;
	v->a[133057] = sym_test_operator;
	v->a[133058] = anon_sym_PLUS_PLUS;
	v->a[133059] = anon_sym_DASH_DASH;
	small_parse_table_6653(v);
}

void	small_parse_table_6653(t_small_parse_table_array *v)
{
	v->a[133060] = anon_sym_PLUS_EQ;
	v->a[133061] = anon_sym_DASH_EQ;
	v->a[133062] = anon_sym_STAR_EQ;
	v->a[133063] = anon_sym_SLASH_EQ;
	v->a[133064] = anon_sym_PERCENT_EQ;
	v->a[133065] = anon_sym_STAR_STAR_EQ;
	v->a[133066] = anon_sym_LT_LT_EQ;
	v->a[133067] = anon_sym_GT_GT_EQ;
	v->a[133068] = anon_sym_AMP_EQ;
	v->a[133069] = anon_sym_CARET_EQ;
	v->a[133070] = anon_sym_PIPE_EQ;
	v->a[133071] = anon_sym_PIPE_PIPE;
	v->a[133072] = anon_sym_AMP_AMP;
	v->a[133073] = anon_sym_EQ_EQ;
	v->a[133074] = anon_sym_BANG_EQ;
	v->a[133075] = anon_sym_LT_EQ;
	v->a[133076] = anon_sym_GT_EQ;
	v->a[133077] = anon_sym_RBRACK;
	v->a[133078] = anon_sym_EQ_TILDE;
	v->a[133079] = anon_sym_QMARK;
	small_parse_table_6654(v);
}

void	small_parse_table_6654(t_small_parse_table_array *v)
{
	v->a[133080] = 3;
	v->a[133081] = actions(71);
	v->a[133082] = 1;
	v->a[133083] = sym_comment;
	v->a[133084] = actions(4370);
	v->a[133085] = 14;
	v->a[133086] = anon_sym_PIPE;
	v->a[133087] = anon_sym_EQ_EQ;
	v->a[133088] = anon_sym_LT;
	v->a[133089] = anon_sym_GT;
	v->a[133090] = anon_sym_LT_LT;
	v->a[133091] = anon_sym_EQ_TILDE;
	v->a[133092] = anon_sym_AMP_GT;
	v->a[133093] = anon_sym_LT_AMP;
	v->a[133094] = anon_sym_GT_AMP;
	v->a[133095] = anon_sym_DOLLAR;
	v->a[133096] = aux_sym_number_token1;
	v->a[133097] = aux_sym_number_token2;
	v->a[133098] = anon_sym_DOLLAR_LPAREN;
	v->a[133099] = sym_word;
	small_parse_table_6655(v);
}

/* EOF small_parse_table_1330.c */
