/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1350.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6750(t_small_parse_table_array *v)
{
	v->a[135000] = actions(1322);
	v->a[135001] = 26;
	v->a[135002] = sym_file_descriptor;
	v->a[135003] = sym__concat;
	v->a[135004] = sym_test_operator;
	v->a[135005] = sym__brace_start;
	v->a[135006] = anon_sym_LPAREN_LPAREN;
	v->a[135007] = anon_sym_PIPE_PIPE;
	v->a[135008] = anon_sym_AMP_AMP;
	v->a[135009] = anon_sym_GT_GT;
	v->a[135010] = anon_sym_PIPE_AMP;
	v->a[135011] = anon_sym_RBRACK;
	v->a[135012] = anon_sym_AMP_GT_GT;
	v->a[135013] = anon_sym_GT_PIPE;
	v->a[135014] = anon_sym_LT_AMP_DASH;
	v->a[135015] = anon_sym_GT_AMP_DASH;
	v->a[135016] = anon_sym_LT_LT_DASH;
	v->a[135017] = anon_sym_LT_LT_LT;
	v->a[135018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135019] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6751(v);
}

void	small_parse_table_6751(t_small_parse_table_array *v)
{
	v->a[135020] = aux_sym_concatenation_token1;
	v->a[135021] = anon_sym_DQUOTE;
	v->a[135022] = sym_raw_string;
	v->a[135023] = sym_ansi_c_string;
	v->a[135024] = anon_sym_DOLLAR_LBRACE;
	v->a[135025] = anon_sym_DOLLAR_BQUOTE;
	v->a[135026] = anon_sym_LT_LPAREN;
	v->a[135027] = anon_sym_GT_LPAREN;
	v->a[135028] = 6;
	v->a[135029] = actions(3);
	v->a[135030] = 1;
	v->a[135031] = sym_comment;
	v->a[135032] = actions(6013);
	v->a[135033] = 1;
	v->a[135034] = aux_sym_concatenation_token1;
	v->a[135035] = actions(6015);
	v->a[135036] = 1;
	v->a[135037] = sym__concat;
	v->a[135038] = state(2471);
	v->a[135039] = 1;
	small_parse_table_6752(v);
}

void	small_parse_table_6752(t_small_parse_table_array *v)
{
	v->a[135040] = aux_sym_concatenation_repeat1;
	v->a[135041] = actions(5391);
	v->a[135042] = 4;
	v->a[135043] = sym_file_descriptor;
	v->a[135044] = sym_test_operator;
	v->a[135045] = sym__brace_start;
	v->a[135046] = aux_sym_heredoc_redirect_token1;
	v->a[135047] = actions(5389);
	v->a[135048] = 33;
	v->a[135049] = anon_sym_LPAREN_LPAREN;
	v->a[135050] = anon_sym_PIPE_PIPE;
	v->a[135051] = anon_sym_AMP_AMP;
	v->a[135052] = anon_sym_PIPE;
	v->a[135053] = anon_sym_LT;
	v->a[135054] = anon_sym_GT;
	v->a[135055] = anon_sym_LT_LT;
	v->a[135056] = anon_sym_GT_GT;
	v->a[135057] = anon_sym_PIPE_AMP;
	v->a[135058] = anon_sym_AMP_GT;
	v->a[135059] = anon_sym_AMP_GT_GT;
	small_parse_table_6753(v);
}

void	small_parse_table_6753(t_small_parse_table_array *v)
{
	v->a[135060] = anon_sym_LT_AMP;
	v->a[135061] = anon_sym_GT_AMP;
	v->a[135062] = anon_sym_GT_PIPE;
	v->a[135063] = anon_sym_LT_AMP_DASH;
	v->a[135064] = anon_sym_GT_AMP_DASH;
	v->a[135065] = anon_sym_LT_LT_DASH;
	v->a[135066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135067] = anon_sym_DOLLAR_LBRACK;
	v->a[135068] = anon_sym_DOLLAR;
	v->a[135069] = sym__special_character;
	v->a[135070] = anon_sym_DQUOTE;
	v->a[135071] = sym_raw_string;
	v->a[135072] = sym_ansi_c_string;
	v->a[135073] = aux_sym_number_token1;
	v->a[135074] = aux_sym_number_token2;
	v->a[135075] = anon_sym_DOLLAR_LBRACE;
	v->a[135076] = anon_sym_DOLLAR_LPAREN;
	v->a[135077] = anon_sym_BQUOTE;
	v->a[135078] = anon_sym_DOLLAR_BQUOTE;
	v->a[135079] = anon_sym_LT_LPAREN;
	small_parse_table_6754(v);
}

void	small_parse_table_6754(t_small_parse_table_array *v)
{
	v->a[135080] = anon_sym_GT_LPAREN;
	v->a[135081] = sym_word;
	v->a[135082] = 5;
	v->a[135083] = actions(71);
	v->a[135084] = 1;
	v->a[135085] = sym_comment;
	v->a[135086] = state(2582);
	v->a[135087] = 1;
	v->a[135088] = aux_sym_concatenation_repeat1;
	v->a[135089] = actions(1143);
	v->a[135090] = 2;
	v->a[135091] = sym__concat;
	v->a[135092] = aux_sym_concatenation_token1;
	v->a[135093] = actions(1273);
	v->a[135094] = 14;
	v->a[135095] = anon_sym_EQ;
	v->a[135096] = anon_sym_PIPE;
	v->a[135097] = anon_sym_CARET;
	v->a[135098] = anon_sym_AMP;
	v->a[135099] = anon_sym_LT;
	small_parse_table_6755(v);
}

/* EOF small_parse_table_1350.c */
