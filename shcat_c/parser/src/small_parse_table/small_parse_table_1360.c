/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1360.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6800(t_small_parse_table_array *v)
{
	v->a[136000] = anon_sym_LT_AMP_DASH;
	v->a[136001] = anon_sym_GT_AMP_DASH;
	v->a[136002] = anon_sym_LT_LT_DASH;
	v->a[136003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136004] = anon_sym_DOLLAR_LBRACK;
	v->a[136005] = aux_sym_concatenation_token1;
	v->a[136006] = anon_sym_DQUOTE;
	v->a[136007] = sym_raw_string;
	v->a[136008] = sym_ansi_c_string;
	v->a[136009] = anon_sym_DOLLAR_LBRACE;
	v->a[136010] = anon_sym_DOLLAR_BQUOTE;
	v->a[136011] = anon_sym_LT_LPAREN;
	v->a[136012] = anon_sym_GT_LPAREN;
	v->a[136013] = 3;
	v->a[136014] = actions(71);
	v->a[136015] = 1;
	v->a[136016] = sym_comment;
	v->a[136017] = actions(1300);
	v->a[136018] = 14;
	v->a[136019] = anon_sym_PIPE;
	small_parse_table_6801(v);
}

void	small_parse_table_6801(t_small_parse_table_array *v)
{
	v->a[136020] = anon_sym_LT;
	v->a[136021] = anon_sym_GT;
	v->a[136022] = anon_sym_LT_LT;
	v->a[136023] = anon_sym_AMP_GT;
	v->a[136024] = anon_sym_LT_AMP;
	v->a[136025] = anon_sym_GT_AMP;
	v->a[136026] = anon_sym_DOLLAR;
	v->a[136027] = sym__special_character;
	v->a[136028] = aux_sym_number_token1;
	v->a[136029] = aux_sym_number_token2;
	v->a[136030] = anon_sym_DOLLAR_LPAREN;
	v->a[136031] = anon_sym_BQUOTE;
	v->a[136032] = sym_word;
	v->a[136033] = actions(1302);
	v->a[136034] = 25;
	v->a[136035] = sym_file_descriptor;
	v->a[136036] = sym__concat;
	v->a[136037] = sym_test_operator;
	v->a[136038] = sym__brace_start;
	v->a[136039] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6802(v);
}

void	small_parse_table_6802(t_small_parse_table_array *v)
{
	v->a[136040] = anon_sym_PIPE_PIPE;
	v->a[136041] = anon_sym_AMP_AMP;
	v->a[136042] = anon_sym_GT_GT;
	v->a[136043] = anon_sym_PIPE_AMP;
	v->a[136044] = anon_sym_RBRACK;
	v->a[136045] = anon_sym_AMP_GT_GT;
	v->a[136046] = anon_sym_GT_PIPE;
	v->a[136047] = anon_sym_LT_AMP_DASH;
	v->a[136048] = anon_sym_GT_AMP_DASH;
	v->a[136049] = anon_sym_LT_LT_DASH;
	v->a[136050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136051] = anon_sym_DOLLAR_LBRACK;
	v->a[136052] = aux_sym_concatenation_token1;
	v->a[136053] = anon_sym_DQUOTE;
	v->a[136054] = sym_raw_string;
	v->a[136055] = sym_ansi_c_string;
	v->a[136056] = anon_sym_DOLLAR_LBRACE;
	v->a[136057] = anon_sym_DOLLAR_BQUOTE;
	v->a[136058] = anon_sym_LT_LPAREN;
	v->a[136059] = anon_sym_GT_LPAREN;
	small_parse_table_6803(v);
}

void	small_parse_table_6803(t_small_parse_table_array *v)
{
	v->a[136060] = 3;
	v->a[136061] = actions(71);
	v->a[136062] = 1;
	v->a[136063] = sym_comment;
	v->a[136064] = actions(1340);
	v->a[136065] = 14;
	v->a[136066] = anon_sym_EQ;
	v->a[136067] = anon_sym_PIPE;
	v->a[136068] = anon_sym_CARET;
	v->a[136069] = anon_sym_AMP;
	v->a[136070] = anon_sym_LT;
	v->a[136071] = anon_sym_GT;
	v->a[136072] = anon_sym_LT_LT;
	v->a[136073] = anon_sym_GT_GT;
	v->a[136074] = anon_sym_PLUS;
	v->a[136075] = anon_sym_DASH;
	v->a[136076] = anon_sym_STAR;
	v->a[136077] = anon_sym_SLASH;
	v->a[136078] = anon_sym_PERCENT;
	v->a[136079] = anon_sym_STAR_STAR;
	small_parse_table_6804(v);
}

void	small_parse_table_6804(t_small_parse_table_array *v)
{
	v->a[136080] = actions(1342);
	v->a[136081] = 25;
	v->a[136082] = sym__concat;
	v->a[136083] = sym_test_operator;
	v->a[136084] = anon_sym_PLUS_PLUS;
	v->a[136085] = anon_sym_DASH_DASH;
	v->a[136086] = anon_sym_PLUS_EQ;
	v->a[136087] = anon_sym_DASH_EQ;
	v->a[136088] = anon_sym_STAR_EQ;
	v->a[136089] = anon_sym_SLASH_EQ;
	v->a[136090] = anon_sym_PERCENT_EQ;
	v->a[136091] = anon_sym_STAR_STAR_EQ;
	v->a[136092] = anon_sym_LT_LT_EQ;
	v->a[136093] = anon_sym_GT_GT_EQ;
	v->a[136094] = anon_sym_AMP_EQ;
	v->a[136095] = anon_sym_CARET_EQ;
	v->a[136096] = anon_sym_PIPE_EQ;
	v->a[136097] = anon_sym_PIPE_PIPE;
	v->a[136098] = anon_sym_AMP_AMP;
	v->a[136099] = anon_sym_EQ_EQ;
	small_parse_table_6805(v);
}

/* EOF small_parse_table_1360.c */
