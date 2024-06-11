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
	v->a[59000] = sym_word;
	v->a[59001] = 4;
	v->a[59002] = actions(3);
	v->a[59003] = 1;
	v->a[59004] = sym_comment;
	v->a[59005] = actions(1554);
	v->a[59006] = 1;
	v->a[59007] = anon_sym_BQUOTE;
	v->a[59008] = actions(1556);
	v->a[59009] = 2;
	v->a[59010] = sym_file_descriptor;
	v->a[59011] = sym_variable_name;
	v->a[59012] = actions(1552);
	v->a[59013] = 26;
	v->a[59014] = anon_sym_for;
	v->a[59015] = anon_sym_while;
	v->a[59016] = anon_sym_until;
	v->a[59017] = anon_sym_if;
	v->a[59018] = anon_sym_case;
	v->a[59019] = anon_sym_LPAREN;
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = anon_sym_LBRACE;
	v->a[59021] = anon_sym_BANG;
	v->a[59022] = anon_sym_LT;
	v->a[59023] = anon_sym_GT;
	v->a[59024] = anon_sym_GT_GT;
	v->a[59025] = anon_sym_AMP_GT;
	v->a[59026] = anon_sym_AMP_GT_GT;
	v->a[59027] = anon_sym_LT_AMP;
	v->a[59028] = anon_sym_GT_AMP;
	v->a[59029] = anon_sym_GT_PIPE;
	v->a[59030] = anon_sym_LT_AMP_DASH;
	v->a[59031] = anon_sym_GT_AMP_DASH;
	v->a[59032] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59033] = anon_sym_DOLLAR;
	v->a[59034] = anon_sym_DQUOTE;
	v->a[59035] = sym_raw_string;
	v->a[59036] = sym_number;
	v->a[59037] = anon_sym_DOLLAR_LBRACE;
	v->a[59038] = anon_sym_DOLLAR_LPAREN;
	v->a[59039] = sym_word;
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = 6;
	v->a[59041] = actions(3);
	v->a[59042] = 1;
	v->a[59043] = sym_comment;
	v->a[59044] = actions(379);
	v->a[59045] = 1;
	v->a[59046] = sym_file_descriptor;
	v->a[59047] = actions(1431);
	v->a[59048] = 1;
	v->a[59049] = sym_variable_name;
	v->a[59050] = actions(1429);
	v->a[59051] = 2;
	v->a[59052] = aux_sym__simple_variable_name_token1;
	v->a[59053] = aux_sym__multiline_variable_name_token1;
	v->a[59054] = actions(1427);
	v->a[59055] = 9;
	v->a[59056] = anon_sym_BANG;
	v->a[59057] = anon_sym_DASH;
	v->a[59058] = anon_sym_STAR;
	v->a[59059] = anon_sym_QMARK;
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = anon_sym_DOLLAR;
	v->a[59061] = anon_sym_POUND;
	v->a[59062] = anon_sym_AT;
	v->a[59063] = anon_sym_0;
	v->a[59064] = anon_sym__;
	v->a[59065] = actions(381);
	v->a[59066] = 16;
	v->a[59067] = anon_sym_PIPE;
	v->a[59068] = anon_sym_AMP_AMP;
	v->a[59069] = anon_sym_PIPE_PIPE;
	v->a[59070] = anon_sym_LT;
	v->a[59071] = anon_sym_GT;
	v->a[59072] = anon_sym_GT_GT;
	v->a[59073] = anon_sym_AMP_GT;
	v->a[59074] = anon_sym_AMP_GT_GT;
	v->a[59075] = anon_sym_LT_AMP;
	v->a[59076] = anon_sym_GT_AMP;
	v->a[59077] = anon_sym_GT_PIPE;
	v->a[59078] = anon_sym_LT_AMP_DASH;
	v->a[59079] = anon_sym_GT_AMP_DASH;
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = anon_sym_LT_LT;
	v->a[59081] = anon_sym_LT_LT_DASH;
	v->a[59082] = aux_sym_heredoc_redirect_token1;
	v->a[59083] = 4;
	v->a[59084] = actions(3);
	v->a[59085] = 1;
	v->a[59086] = sym_comment;
	v->a[59087] = actions(1554);
	v->a[59088] = 1;
	v->a[59089] = anon_sym_BQUOTE;
	v->a[59090] = actions(1556);
	v->a[59091] = 2;
	v->a[59092] = sym_file_descriptor;
	v->a[59093] = sym_variable_name;
	v->a[59094] = actions(1552);
	v->a[59095] = 26;
	v->a[59096] = anon_sym_for;
	v->a[59097] = anon_sym_while;
	v->a[59098] = anon_sym_until;
	v->a[59099] = anon_sym_if;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
