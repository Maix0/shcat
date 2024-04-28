/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_440.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2200(t_small_parse_table_array *v)
{
	v->a[44000] = 1;
	v->a[44001] = sym_variable_name;
	v->a[44002] = state(2716);
	v->a[44003] = 1;
	v->a[44004] = sym_string;
	v->a[44005] = actions(4665);
	v->a[44006] = 2;
	v->a[44007] = aux_sym__simple_variable_name_token1;
	v->a[44008] = aux_sym__multiline_variable_name_token1;
	v->a[44009] = actions(4661);
	v->a[44010] = 9;
	v->a[44011] = anon_sym_DASH;
	v->a[44012] = anon_sym_STAR;
	v->a[44013] = anon_sym_BANG;
	v->a[44014] = anon_sym_QMARK;
	v->a[44015] = anon_sym_DOLLAR;
	v->a[44016] = anon_sym_POUND;
	v->a[44017] = anon_sym_AT2;
	v->a[44018] = anon_sym_0;
	v->a[44019] = anon_sym__;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = actions(1227);
	v->a[44021] = 33;
	v->a[44022] = anon_sym_EQ;
	v->a[44023] = anon_sym_PLUS_PLUS;
	v->a[44024] = anon_sym_DASH_DASH;
	v->a[44025] = anon_sym_PLUS_EQ;
	v->a[44026] = anon_sym_DASH_EQ;
	v->a[44027] = anon_sym_STAR_EQ;
	v->a[44028] = anon_sym_SLASH_EQ;
	v->a[44029] = anon_sym_PERCENT_EQ;
	v->a[44030] = anon_sym_STAR_STAR_EQ;
	v->a[44031] = anon_sym_LT_LT_EQ;
	v->a[44032] = anon_sym_GT_GT_EQ;
	v->a[44033] = anon_sym_AMP_EQ;
	v->a[44034] = anon_sym_CARET_EQ;
	v->a[44035] = anon_sym_PIPE_EQ;
	v->a[44036] = anon_sym_PIPE_PIPE;
	v->a[44037] = anon_sym_AMP_AMP;
	v->a[44038] = anon_sym_PIPE;
	v->a[44039] = anon_sym_CARET;
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = anon_sym_AMP;
	v->a[44041] = anon_sym_EQ_EQ;
	v->a[44042] = anon_sym_BANG_EQ;
	v->a[44043] = anon_sym_LT;
	v->a[44044] = anon_sym_GT;
	v->a[44045] = anon_sym_LT_EQ;
	v->a[44046] = anon_sym_GT_EQ;
	v->a[44047] = anon_sym_LT_LT;
	v->a[44048] = anon_sym_GT_GT;
	v->a[44049] = anon_sym_PLUS;
	v->a[44050] = anon_sym_SLASH;
	v->a[44051] = anon_sym_PERCENT;
	v->a[44052] = anon_sym_STAR_STAR;
	v->a[44053] = anon_sym_RBRACK;
	v->a[44054] = anon_sym_EQ_TILDE;
	v->a[44055] = 8;
	v->a[44056] = actions(3);
	v->a[44057] = 1;
	v->a[44058] = sym_comment;
	v->a[44059] = actions(1241);
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = 1;
	v->a[44061] = sym_test_operator;
	v->a[44062] = actions(4663);
	v->a[44063] = 1;
	v->a[44064] = anon_sym_DQUOTE;
	v->a[44065] = actions(4667);
	v->a[44066] = 1;
	v->a[44067] = sym_variable_name;
	v->a[44068] = state(2716);
	v->a[44069] = 1;
	v->a[44070] = sym_string;
	v->a[44071] = actions(4665);
	v->a[44072] = 2;
	v->a[44073] = aux_sym__simple_variable_name_token1;
	v->a[44074] = aux_sym__multiline_variable_name_token1;
	v->a[44075] = actions(4661);
	v->a[44076] = 9;
	v->a[44077] = anon_sym_DASH;
	v->a[44078] = anon_sym_STAR;
	v->a[44079] = anon_sym_BANG;
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = anon_sym_QMARK;
	v->a[44081] = anon_sym_DOLLAR;
	v->a[44082] = anon_sym_POUND;
	v->a[44083] = anon_sym_AT2;
	v->a[44084] = anon_sym_0;
	v->a[44085] = anon_sym__;
	v->a[44086] = actions(1239);
	v->a[44087] = 33;
	v->a[44088] = anon_sym_EQ;
	v->a[44089] = anon_sym_PLUS_PLUS;
	v->a[44090] = anon_sym_DASH_DASH;
	v->a[44091] = anon_sym_PLUS_EQ;
	v->a[44092] = anon_sym_DASH_EQ;
	v->a[44093] = anon_sym_STAR_EQ;
	v->a[44094] = anon_sym_SLASH_EQ;
	v->a[44095] = anon_sym_PERCENT_EQ;
	v->a[44096] = anon_sym_STAR_STAR_EQ;
	v->a[44097] = anon_sym_LT_LT_EQ;
	v->a[44098] = anon_sym_GT_GT_EQ;
	v->a[44099] = anon_sym_AMP_EQ;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
