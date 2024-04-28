/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1370.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6850(t_small_parse_table_array *v)
{
	v->a[137000] = anon_sym_GT_PIPE;
	v->a[137001] = anon_sym_LT_AMP_DASH;
	v->a[137002] = anon_sym_GT_AMP_DASH;
	v->a[137003] = anon_sym_LT_LT_DASH;
	v->a[137004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137005] = anon_sym_DOLLAR_LBRACK;
	v->a[137006] = sym__special_character;
	v->a[137007] = anon_sym_DQUOTE;
	v->a[137008] = sym_raw_string;
	v->a[137009] = sym_ansi_c_string;
	v->a[137010] = anon_sym_DOLLAR_LBRACE;
	v->a[137011] = anon_sym_DOLLAR_BQUOTE;
	v->a[137012] = anon_sym_LT_LPAREN;
	v->a[137013] = anon_sym_GT_LPAREN;
	v->a[137014] = 5;
	v->a[137015] = actions(71);
	v->a[137016] = 1;
	v->a[137017] = sym_comment;
	v->a[137018] = state(2619);
	v->a[137019] = 1;
	small_parse_table_6851(v);
}

void	small_parse_table_6851(t_small_parse_table_array *v)
{
	v->a[137020] = aux_sym_concatenation_repeat1;
	v->a[137021] = actions(6780);
	v->a[137022] = 2;
	v->a[137023] = sym__concat;
	v->a[137024] = aux_sym_concatenation_token1;
	v->a[137025] = actions(5389);
	v->a[137026] = 13;
	v->a[137027] = anon_sym_PIPE;
	v->a[137028] = anon_sym_LT;
	v->a[137029] = anon_sym_GT;
	v->a[137030] = anon_sym_LT_LT;
	v->a[137031] = anon_sym_AMP_GT;
	v->a[137032] = anon_sym_LT_AMP;
	v->a[137033] = anon_sym_GT_AMP;
	v->a[137034] = anon_sym_DOLLAR;
	v->a[137035] = aux_sym_number_token1;
	v->a[137036] = aux_sym_number_token2;
	v->a[137037] = anon_sym_DOLLAR_LPAREN;
	v->a[137038] = anon_sym_BQUOTE;
	v->a[137039] = sym_word;
	small_parse_table_6852(v);
}

void	small_parse_table_6852(t_small_parse_table_array *v)
{
	v->a[137040] = actions(5391);
	v->a[137041] = 23;
	v->a[137042] = sym_file_descriptor;
	v->a[137043] = sym_test_operator;
	v->a[137044] = sym__brace_start;
	v->a[137045] = anon_sym_LPAREN_LPAREN;
	v->a[137046] = anon_sym_PIPE_PIPE;
	v->a[137047] = anon_sym_AMP_AMP;
	v->a[137048] = anon_sym_GT_GT;
	v->a[137049] = anon_sym_PIPE_AMP;
	v->a[137050] = anon_sym_AMP_GT_GT;
	v->a[137051] = anon_sym_GT_PIPE;
	v->a[137052] = anon_sym_LT_AMP_DASH;
	v->a[137053] = anon_sym_GT_AMP_DASH;
	v->a[137054] = anon_sym_LT_LT_DASH;
	v->a[137055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137056] = anon_sym_DOLLAR_LBRACK;
	v->a[137057] = sym__special_character;
	v->a[137058] = anon_sym_DQUOTE;
	v->a[137059] = sym_raw_string;
	small_parse_table_6853(v);
}

void	small_parse_table_6853(t_small_parse_table_array *v)
{
	v->a[137060] = sym_ansi_c_string;
	v->a[137061] = anon_sym_DOLLAR_LBRACE;
	v->a[137062] = anon_sym_DOLLAR_BQUOTE;
	v->a[137063] = anon_sym_LT_LPAREN;
	v->a[137064] = anon_sym_GT_LPAREN;
	v->a[137065] = 3;
	v->a[137066] = actions(71);
	v->a[137067] = 1;
	v->a[137068] = sym_comment;
	v->a[137069] = actions(1312);
	v->a[137070] = 14;
	v->a[137071] = anon_sym_PIPE;
	v->a[137072] = anon_sym_LT;
	v->a[137073] = anon_sym_GT;
	v->a[137074] = anon_sym_LT_LT;
	v->a[137075] = anon_sym_AMP_GT;
	v->a[137076] = anon_sym_LT_AMP;
	v->a[137077] = anon_sym_GT_AMP;
	v->a[137078] = anon_sym_DOLLAR;
	v->a[137079] = sym__special_character;
	small_parse_table_6854(v);
}

void	small_parse_table_6854(t_small_parse_table_array *v)
{
	v->a[137080] = aux_sym_number_token1;
	v->a[137081] = aux_sym_number_token2;
	v->a[137082] = anon_sym_DOLLAR_LPAREN;
	v->a[137083] = anon_sym_BQUOTE;
	v->a[137084] = sym_word;
	v->a[137085] = actions(1314);
	v->a[137086] = 25;
	v->a[137087] = sym_file_descriptor;
	v->a[137088] = sym__concat;
	v->a[137089] = sym_test_operator;
	v->a[137090] = sym__brace_start;
	v->a[137091] = anon_sym_LPAREN_LPAREN;
	v->a[137092] = anon_sym_PIPE_PIPE;
	v->a[137093] = anon_sym_AMP_AMP;
	v->a[137094] = anon_sym_GT_GT;
	v->a[137095] = anon_sym_PIPE_AMP;
	v->a[137096] = anon_sym_RBRACK;
	v->a[137097] = anon_sym_AMP_GT_GT;
	v->a[137098] = anon_sym_GT_PIPE;
	v->a[137099] = anon_sym_LT_AMP_DASH;
	small_parse_table_6855(v);
}

/* EOF small_parse_table_1370.c */
