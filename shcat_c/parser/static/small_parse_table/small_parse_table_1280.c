/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1280.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6400(t_small_parse_table_array *v)
{
	v->a[128000] = anon_sym_PLUS_EQ;
	v->a[128001] = anon_sym_DASH_EQ;
	v->a[128002] = anon_sym_STAR_EQ;
	v->a[128003] = anon_sym_SLASH_EQ;
	v->a[128004] = anon_sym_PERCENT_EQ;
	v->a[128005] = anon_sym_STAR_STAR_EQ;
	v->a[128006] = anon_sym_LT_LT_EQ;
	v->a[128007] = anon_sym_GT_GT_EQ;
	v->a[128008] = anon_sym_AMP_EQ;
	v->a[128009] = anon_sym_CARET_EQ;
	v->a[128010] = anon_sym_PIPE_EQ;
	v->a[128011] = anon_sym_PIPE_PIPE;
	v->a[128012] = anon_sym_AMP_AMP;
	v->a[128013] = anon_sym_EQ_EQ;
	v->a[128014] = anon_sym_BANG_EQ;
	v->a[128015] = anon_sym_LT_EQ;
	v->a[128016] = anon_sym_GT_EQ;
	v->a[128017] = anon_sym_RPAREN;
	v->a[128018] = anon_sym_EQ_TILDE;
	v->a[128019] = anon_sym_QMARK;
	small_parse_table_6401(v);
}

void	small_parse_table_6401(t_small_parse_table_array *v)
{
	v->a[128020] = sym__special_character;
	v->a[128021] = 5;
	v->a[128022] = actions(71);
	v->a[128023] = 1;
	v->a[128024] = sym_comment;
	v->a[128025] = state(2429);
	v->a[128026] = 1;
	v->a[128027] = aux_sym_concatenation_repeat1;
	v->a[128028] = actions(6514);
	v->a[128029] = 2;
	v->a[128030] = sym__concat;
	v->a[128031] = aux_sym_concatenation_token1;
	v->a[128032] = actions(5067);
	v->a[128033] = 13;
	v->a[128034] = anon_sym_PIPE;
	v->a[128035] = anon_sym_LT;
	v->a[128036] = anon_sym_GT;
	v->a[128037] = anon_sym_LT_LT;
	v->a[128038] = anon_sym_AMP_GT;
	v->a[128039] = anon_sym_LT_AMP;
	small_parse_table_6402(v);
}

void	small_parse_table_6402(t_small_parse_table_array *v)
{
	v->a[128040] = anon_sym_GT_AMP;
	v->a[128041] = anon_sym_DOLLAR;
	v->a[128042] = aux_sym_number_token1;
	v->a[128043] = aux_sym_number_token2;
	v->a[128044] = anon_sym_DOLLAR_LPAREN;
	v->a[128045] = anon_sym_BQUOTE;
	v->a[128046] = sym_word;
	v->a[128047] = actions(5069);
	v->a[128048] = 25;
	v->a[128049] = sym_file_descriptor;
	v->a[128050] = sym_variable_name;
	v->a[128051] = sym_test_operator;
	v->a[128052] = sym__brace_start;
	v->a[128053] = anon_sym_LPAREN_LPAREN;
	v->a[128054] = anon_sym_PIPE_PIPE;
	v->a[128055] = anon_sym_AMP_AMP;
	v->a[128056] = anon_sym_GT_GT;
	v->a[128057] = anon_sym_PIPE_AMP;
	v->a[128058] = anon_sym_AMP_GT_GT;
	v->a[128059] = anon_sym_GT_PIPE;
	small_parse_table_6403(v);
}

void	small_parse_table_6403(t_small_parse_table_array *v)
{
	v->a[128060] = anon_sym_LT_AMP_DASH;
	v->a[128061] = anon_sym_GT_AMP_DASH;
	v->a[128062] = anon_sym_LT_LT_DASH;
	v->a[128063] = anon_sym_LT_LT_LT;
	v->a[128064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128065] = anon_sym_DOLLAR_LBRACK;
	v->a[128066] = sym__special_character;
	v->a[128067] = anon_sym_DQUOTE;
	v->a[128068] = sym_raw_string;
	v->a[128069] = sym_ansi_c_string;
	v->a[128070] = anon_sym_DOLLAR_LBRACE;
	v->a[128071] = anon_sym_DOLLAR_BQUOTE;
	v->a[128072] = anon_sym_LT_LPAREN;
	v->a[128073] = anon_sym_GT_LPAREN;
	v->a[128074] = 5;
	v->a[128075] = actions(71);
	v->a[128076] = 1;
	v->a[128077] = sym_comment;
	v->a[128078] = state(2435);
	v->a[128079] = 1;
	small_parse_table_6404(v);
}

void	small_parse_table_6404(t_small_parse_table_array *v)
{
	v->a[128080] = aux_sym_concatenation_repeat1;
	v->a[128081] = actions(6647);
	v->a[128082] = 2;
	v->a[128083] = sym__concat;
	v->a[128084] = aux_sym_concatenation_token1;
	v->a[128085] = actions(1251);
	v->a[128086] = 14;
	v->a[128087] = anon_sym_PIPE;
	v->a[128088] = anon_sym_LT;
	v->a[128089] = anon_sym_GT;
	v->a[128090] = anon_sym_LT_LT;
	v->a[128091] = anon_sym_AMP_GT;
	v->a[128092] = anon_sym_LT_AMP;
	v->a[128093] = anon_sym_GT_AMP;
	v->a[128094] = anon_sym_DOLLAR;
	v->a[128095] = aux_sym_number_token1;
	v->a[128096] = aux_sym_number_token2;
	v->a[128097] = anon_sym_DOLLAR_LPAREN;
	v->a[128098] = anon_sym_BQUOTE;
	v->a[128099] = aux_sym__simple_variable_name_token1;
	small_parse_table_6405(v);
}

/* EOF small_parse_table_1280.c */
