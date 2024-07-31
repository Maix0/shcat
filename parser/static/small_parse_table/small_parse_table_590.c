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
	v->a[59000] = actions(2351);
	v->a[59001] = 1;
	v->a[59002] = sym__concat;
	v->a[59003] = state(656);
	v->a[59004] = 1;
	v->a[59005] = aux_sym_concatenation_repeat1;
	v->a[59006] = actions(997);
	v->a[59007] = 12;
	v->a[59008] = anon_sym_SEMI_SEMI;
	v->a[59009] = aux_sym_heredoc_redirect_token1;
	v->a[59010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59011] = anon_sym_DOLLAR;
	v->a[59012] = anon_sym_DQUOTE;
	v->a[59013] = sym_raw_string;
	v->a[59014] = sym_number;
	v->a[59015] = anon_sym_DOLLAR_LBRACE;
	v->a[59016] = anon_sym_DOLLAR_LPAREN;
	v->a[59017] = anon_sym_BQUOTE;
	v->a[59018] = sym_word;
	v->a[59019] = anon_sym_SEMI;
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = 10;
	v->a[59021] = actions(3);
	v->a[59022] = 1;
	v->a[59023] = sym_comment;
	v->a[59024] = actions(2157);
	v->a[59025] = 1;
	v->a[59026] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59027] = actions(2161);
	v->a[59028] = 1;
	v->a[59029] = anon_sym_DQUOTE;
	v->a[59030] = actions(2163);
	v->a[59031] = 1;
	v->a[59032] = anon_sym_DOLLAR_LBRACE;
	v->a[59033] = actions(2165);
	v->a[59034] = 1;
	v->a[59035] = anon_sym_DOLLAR_LPAREN;
	v->a[59036] = actions(2167);
	v->a[59037] = 1;
	v->a[59038] = anon_sym_BQUOTE;
	v->a[59039] = actions(2274);
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = 1;
	v->a[59041] = anon_sym_DOLLAR;
	v->a[59042] = state(1556);
	v->a[59043] = 1;
	v->a[59044] = sym_concatenation;
	v->a[59045] = actions(2353);
	v->a[59046] = 3;
	v->a[59047] = sym_raw_string;
	v->a[59048] = sym_number;
	v->a[59049] = sym_word;
	v->a[59050] = state(1482);
	v->a[59051] = 5;
	v->a[59052] = sym_arithmetic_expansion;
	v->a[59053] = sym_string;
	v->a[59054] = sym_simple_expansion;
	v->a[59055] = sym_expansion;
	v->a[59056] = sym_command_substitution;
	v->a[59057] = 3;
	v->a[59058] = actions(407);
	v->a[59059] = 1;
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = sym_comment;
	v->a[59061] = actions(481);
	v->a[59062] = 4;
	v->a[59063] = anon_sym_PIPE;
	v->a[59064] = anon_sym_LT;
	v->a[59065] = anon_sym_GT;
	v->a[59066] = anon_sym_LT_LT;
	v->a[59067] = actions(483);
	v->a[59068] = 11;
	v->a[59069] = sym__concat;
	v->a[59070] = sym_variable_name;
	v->a[59071] = anon_sym_AMP_AMP;
	v->a[59072] = anon_sym_PIPE_PIPE;
	v->a[59073] = anon_sym_GT_GT;
	v->a[59074] = anon_sym_LT_AMP;
	v->a[59075] = anon_sym_GT_AMP;
	v->a[59076] = anon_sym_GT_PIPE;
	v->a[59077] = anon_sym_LT_GT;
	v->a[59078] = anon_sym_LT_LT_DASH;
	v->a[59079] = aux_sym_concatenation_token1;
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = 6;
	v->a[59081] = actions(3);
	v->a[59082] = 1;
	v->a[59083] = sym_comment;
	v->a[59084] = actions(2309);
	v->a[59085] = 1;
	v->a[59086] = aux_sym_heredoc_redirect_token1;
	v->a[59087] = actions(850);
	v->a[59088] = 2;
	v->a[59089] = anon_sym_LT_LT;
	v->a[59090] = anon_sym_LT_LT_DASH;
	v->a[59091] = actions(1213);
	v->a[59092] = 2;
	v->a[59093] = anon_sym_AMP_AMP;
	v->a[59094] = anon_sym_PIPE_PIPE;
	v->a[59095] = state(1185);
	v->a[59096] = 3;
	v->a[59097] = sym_file_redirect;
	v->a[59098] = sym_heredoc_redirect;
	v->a[59099] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
