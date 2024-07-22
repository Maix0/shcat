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
	v->a[59000] = actions(361);
	v->a[59001] = 9;
	v->a[59002] = aux_sym_heredoc_redirect_token1;
	v->a[59003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59004] = anon_sym_DQUOTE;
	v->a[59005] = sym_raw_string;
	v->a[59006] = sym_number;
	v->a[59007] = anon_sym_DOLLAR_LBRACE;
	v->a[59008] = anon_sym_DOLLAR_LPAREN;
	v->a[59009] = anon_sym_BQUOTE;
	v->a[59010] = sym_word;
	v->a[59011] = 3;
	v->a[59012] = actions(3);
	v->a[59013] = 1;
	v->a[59014] = sym_comment;
	v->a[59015] = actions(571);
	v->a[59016] = 3;
	v->a[59017] = sym_file_descriptor;
	v->a[59018] = sym__concat;
	v->a[59019] = sym_variable_name;
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = actions(569);
	v->a[59021] = 17;
	v->a[59022] = anon_sym_LT;
	v->a[59023] = anon_sym_GT;
	v->a[59024] = anon_sym_GT_GT;
	v->a[59025] = anon_sym_LT_AMP;
	v->a[59026] = anon_sym_GT_AMP;
	v->a[59027] = anon_sym_GT_PIPE;
	v->a[59028] = anon_sym_LT_GT;
	v->a[59029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59030] = aux_sym_concatenation_token1;
	v->a[59031] = anon_sym_DOLLAR;
	v->a[59032] = anon_sym_DQUOTE;
	v->a[59033] = sym_raw_string;
	v->a[59034] = sym_number;
	v->a[59035] = anon_sym_DOLLAR_LBRACE;
	v->a[59036] = anon_sym_DOLLAR_LPAREN;
	v->a[59037] = anon_sym_BQUOTE;
	v->a[59038] = sym_word;
	v->a[59039] = 10;
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = actions(3);
	v->a[59041] = 1;
	v->a[59042] = sym_comment;
	v->a[59043] = actions(797);
	v->a[59044] = 1;
	v->a[59045] = anon_sym_RPAREN;
	v->a[59046] = actions(1888);
	v->a[59047] = 1;
	v->a[59048] = aux_sym_heredoc_redirect_token1;
	v->a[59049] = actions(1933);
	v->a[59050] = 1;
	v->a[59051] = sym_file_descriptor;
	v->a[59052] = state(630);
	v->a[59053] = 1;
	v->a[59054] = sym_terminator;
	v->a[59055] = actions(786);
	v->a[59056] = 2;
	v->a[59057] = anon_sym_SEMI_SEMI;
	v->a[59058] = anon_sym_SEMI;
	v->a[59059] = actions(788);
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = 2;
	v->a[59061] = anon_sym_AMP_AMP;
	v->a[59062] = anon_sym_PIPE_PIPE;
	v->a[59063] = actions(790);
	v->a[59064] = 2;
	v->a[59065] = anon_sym_LT_LT;
	v->a[59066] = anon_sym_LT_LT_DASH;
	v->a[59067] = state(1034);
	v->a[59068] = 3;
	v->a[59069] = sym_file_redirect;
	v->a[59070] = sym_heredoc_redirect;
	v->a[59071] = aux_sym_redirected_statement_repeat1;
	v->a[59072] = actions(1931);
	v->a[59073] = 7;
	v->a[59074] = anon_sym_LT;
	v->a[59075] = anon_sym_GT;
	v->a[59076] = anon_sym_GT_GT;
	v->a[59077] = anon_sym_LT_AMP;
	v->a[59078] = anon_sym_GT_AMP;
	v->a[59079] = anon_sym_GT_PIPE;
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = anon_sym_LT_GT;
	v->a[59081] = 11;
	v->a[59082] = actions(3);
	v->a[59083] = 1;
	v->a[59084] = sym_comment;
	v->a[59085] = actions(782);
	v->a[59086] = 1;
	v->a[59087] = anon_sym_PIPE;
	v->a[59088] = actions(784);
	v->a[59089] = 1;
	v->a[59090] = anon_sym_SEMI_SEMI;
	v->a[59091] = actions(786);
	v->a[59092] = 1;
	v->a[59093] = anon_sym_SEMI;
	v->a[59094] = actions(1888);
	v->a[59095] = 1;
	v->a[59096] = aux_sym_heredoc_redirect_token1;
	v->a[59097] = actions(1945);
	v->a[59098] = 1;
	v->a[59099] = sym_file_descriptor;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
