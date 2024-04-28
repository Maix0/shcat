/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_590.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2950(t_small_parse_table_array *v)
{
	v->a[59000] = anon_sym_PIPE;
	v->a[59001] = anon_sym_AMP;
	v->a[59002] = anon_sym_LT;
	v->a[59003] = anon_sym_GT;
	v->a[59004] = anon_sym_LT_LT;
	v->a[59005] = anon_sym_GT_GT;
	v->a[59006] = anon_sym_SEMI_SEMI;
	v->a[59007] = anon_sym_SEMI_AMP;
	v->a[59008] = anon_sym_SEMI_SEMI_AMP;
	v->a[59009] = anon_sym_PIPE_AMP;
	v->a[59010] = anon_sym_AMP_GT;
	v->a[59011] = anon_sym_AMP_GT_GT;
	v->a[59012] = anon_sym_LT_AMP;
	v->a[59013] = anon_sym_GT_AMP;
	v->a[59014] = anon_sym_GT_PIPE;
	v->a[59015] = anon_sym_LT_AMP_DASH;
	v->a[59016] = anon_sym_GT_AMP_DASH;
	v->a[59017] = anon_sym_LT_LT_DASH;
	v->a[59018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59019] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = aux_sym_concatenation_token1;
	v->a[59021] = anon_sym_DOLLAR;
	v->a[59022] = sym__special_character;
	v->a[59023] = anon_sym_DQUOTE;
	v->a[59024] = sym_raw_string;
	v->a[59025] = sym_ansi_c_string;
	v->a[59026] = aux_sym_number_token1;
	v->a[59027] = aux_sym_number_token2;
	v->a[59028] = anon_sym_DOLLAR_LBRACE;
	v->a[59029] = anon_sym_DOLLAR_LPAREN;
	v->a[59030] = anon_sym_BQUOTE;
	v->a[59031] = anon_sym_DOLLAR_BQUOTE;
	v->a[59032] = anon_sym_LT_LPAREN;
	v->a[59033] = anon_sym_GT_LPAREN;
	v->a[59034] = aux_sym__simple_variable_name_token1;
	v->a[59035] = sym_word;
	v->a[59036] = 6;
	v->a[59037] = actions(3);
	v->a[59038] = 1;
	v->a[59039] = sym_comment;
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = actions(5638);
	v->a[59041] = 1;
	v->a[59042] = aux_sym_concatenation_token1;
	v->a[59043] = actions(5640);
	v->a[59044] = 1;
	v->a[59045] = sym__concat;
	v->a[59046] = state(1367);
	v->a[59047] = 1;
	v->a[59048] = aux_sym_concatenation_repeat1;
	v->a[59049] = actions(2096);
	v->a[59050] = 5;
	v->a[59051] = sym_file_descriptor;
	v->a[59052] = sym_variable_name;
	v->a[59053] = sym_test_operator;
	v->a[59054] = sym__brace_start;
	v->a[59055] = aux_sym_heredoc_redirect_token1;
	v->a[59056] = actions(2094);
	v->a[59057] = 38;
	v->a[59058] = anon_sym_LPAREN_LPAREN;
	v->a[59059] = anon_sym_SEMI;
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = anon_sym_PIPE_PIPE;
	v->a[59061] = anon_sym_AMP_AMP;
	v->a[59062] = anon_sym_PIPE;
	v->a[59063] = anon_sym_AMP;
	v->a[59064] = anon_sym_LT;
	v->a[59065] = anon_sym_GT;
	v->a[59066] = anon_sym_LT_LT;
	v->a[59067] = anon_sym_GT_GT;
	v->a[59068] = anon_sym_RPAREN;
	v->a[59069] = anon_sym_SEMI_SEMI;
	v->a[59070] = anon_sym_PIPE_AMP;
	v->a[59071] = anon_sym_AMP_GT;
	v->a[59072] = anon_sym_AMP_GT_GT;
	v->a[59073] = anon_sym_LT_AMP;
	v->a[59074] = anon_sym_GT_AMP;
	v->a[59075] = anon_sym_GT_PIPE;
	v->a[59076] = anon_sym_LT_AMP_DASH;
	v->a[59077] = anon_sym_GT_AMP_DASH;
	v->a[59078] = anon_sym_LT_LT_DASH;
	v->a[59079] = anon_sym_LT_LT_LT;
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59081] = anon_sym_DOLLAR_LBRACK;
	v->a[59082] = anon_sym_DOLLAR;
	v->a[59083] = sym__special_character;
	v->a[59084] = anon_sym_DQUOTE;
	v->a[59085] = sym_raw_string;
	v->a[59086] = sym_ansi_c_string;
	v->a[59087] = aux_sym_number_token1;
	v->a[59088] = aux_sym_number_token2;
	v->a[59089] = anon_sym_DOLLAR_LBRACE;
	v->a[59090] = anon_sym_DOLLAR_LPAREN;
	v->a[59091] = anon_sym_BQUOTE;
	v->a[59092] = anon_sym_DOLLAR_BQUOTE;
	v->a[59093] = anon_sym_LT_LPAREN;
	v->a[59094] = anon_sym_GT_LPAREN;
	v->a[59095] = sym_word;
	v->a[59096] = 5;
	v->a[59097] = actions(3);
	v->a[59098] = 1;
	v->a[59099] = sym_comment;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
