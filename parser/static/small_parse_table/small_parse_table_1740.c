/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1740.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8700(t_small_parse_table_array *v)
{
	v->a[174000] = 2;
	v->a[174001] = anon_sym_PLUS_PLUS;
	v->a[174002] = anon_sym_DASH_DASH;
	v->a[174003] = actions(7583);
	v->a[174004] = 2;
	v->a[174005] = anon_sym_EQ_EQ;
	v->a[174006] = anon_sym_BANG_EQ;
	v->a[174007] = actions(7585);
	v->a[174008] = 2;
	v->a[174009] = anon_sym_LT;
	v->a[174010] = anon_sym_GT;
	v->a[174011] = actions(7587);
	v->a[174012] = 2;
	v->a[174013] = anon_sym_LT_EQ;
	v->a[174014] = anon_sym_GT_EQ;
	v->a[174015] = actions(7589);
	v->a[174016] = 2;
	v->a[174017] = anon_sym_LT_LT;
	v->a[174018] = anon_sym_GT_GT;
	v->a[174019] = actions(7591);
	small_parse_table_8701(v);
}

void	small_parse_table_8701(t_small_parse_table_array *v)
{
	v->a[174020] = 2;
	v->a[174021] = anon_sym_PLUS;
	v->a[174022] = anon_sym_DASH;
	v->a[174023] = actions(7593);
	v->a[174024] = 3;
	v->a[174025] = anon_sym_STAR;
	v->a[174026] = anon_sym_SLASH;
	v->a[174027] = anon_sym_PERCENT;
	v->a[174028] = actions(7571);
	v->a[174029] = 11;
	v->a[174030] = anon_sym_PLUS_EQ;
	v->a[174031] = anon_sym_DASH_EQ;
	v->a[174032] = anon_sym_STAR_EQ;
	v->a[174033] = anon_sym_SLASH_EQ;
	v->a[174034] = anon_sym_PERCENT_EQ;
	v->a[174035] = anon_sym_STAR_STAR_EQ;
	v->a[174036] = anon_sym_LT_LT_EQ;
	v->a[174037] = anon_sym_GT_GT_EQ;
	v->a[174038] = anon_sym_AMP_EQ;
	v->a[174039] = anon_sym_CARET_EQ;
	small_parse_table_8702(v);
}

void	small_parse_table_8702(t_small_parse_table_array *v)
{
	v->a[174040] = anon_sym_PIPE_EQ;
	v->a[174041] = 3;
	v->a[174042] = actions(3);
	v->a[174043] = 1;
	v->a[174044] = sym_comment;
	v->a[174045] = actions(1306);
	v->a[174046] = 5;
	v->a[174047] = sym_file_descriptor;
	v->a[174048] = sym__concat;
	v->a[174049] = sym_test_operator;
	v->a[174050] = sym__brace_start;
	v->a[174051] = aux_sym_heredoc_redirect_token1;
	v->a[174052] = actions(1304);
	v->a[174053] = 31;
	v->a[174054] = anon_sym_LPAREN_LPAREN;
	v->a[174055] = anon_sym_PIPE_PIPE;
	v->a[174056] = anon_sym_AMP_AMP;
	v->a[174057] = anon_sym_LT;
	v->a[174058] = anon_sym_GT;
	v->a[174059] = anon_sym_GT_GT;
	small_parse_table_8703(v);
}

void	small_parse_table_8703(t_small_parse_table_array *v)
{
	v->a[174060] = anon_sym_AMP_GT;
	v->a[174061] = anon_sym_AMP_GT_GT;
	v->a[174062] = anon_sym_LT_AMP;
	v->a[174063] = anon_sym_GT_AMP;
	v->a[174064] = anon_sym_GT_PIPE;
	v->a[174065] = anon_sym_LT_AMP_DASH;
	v->a[174066] = anon_sym_GT_AMP_DASH;
	v->a[174067] = anon_sym_LT_LT_LT;
	v->a[174068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[174069] = anon_sym_DOLLAR_LBRACK;
	v->a[174070] = aux_sym_concatenation_token1;
	v->a[174071] = anon_sym_DOLLAR;
	v->a[174072] = sym__special_character;
	v->a[174073] = anon_sym_DQUOTE;
	v->a[174074] = sym_raw_string;
	v->a[174075] = sym_ansi_c_string;
	v->a[174076] = aux_sym_number_token1;
	v->a[174077] = aux_sym_number_token2;
	v->a[174078] = anon_sym_DOLLAR_LBRACE;
	v->a[174079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_8704(v);
}

void	small_parse_table_8704(t_small_parse_table_array *v)
{
	v->a[174080] = anon_sym_BQUOTE;
	v->a[174081] = anon_sym_DOLLAR_BQUOTE;
	v->a[174082] = anon_sym_LT_LPAREN;
	v->a[174083] = anon_sym_GT_LPAREN;
	v->a[174084] = sym_word;
	v->a[174085] = 3;
	v->a[174086] = actions(71);
	v->a[174087] = 1;
	v->a[174088] = sym_comment;
	v->a[174089] = actions(1316);
	v->a[174090] = 13;
	v->a[174091] = anon_sym_PIPE;
	v->a[174092] = anon_sym_CARET;
	v->a[174093] = anon_sym_AMP;
	v->a[174094] = anon_sym_LT;
	v->a[174095] = anon_sym_GT;
	v->a[174096] = anon_sym_LT_LT;
	v->a[174097] = anon_sym_GT_GT;
	v->a[174098] = anon_sym_PLUS;
	v->a[174099] = anon_sym_DASH;
	small_parse_table_8705(v);
}

/* EOF small_parse_table_1740.c */
