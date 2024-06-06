/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1130.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5650(t_small_parse_table_array *v)
{
	v->a[113000] = actions(6519);
	v->a[113001] = 1;
	v->a[113002] = anon_sym_DOLLAR_BQUOTE;
	v->a[113003] = actions(6521);
	v->a[113004] = 1;
	v->a[113005] = sym__comment_word;
	v->a[113006] = actions(6513);
	v->a[113007] = 3;
	v->a[113008] = sym_test_operator;
	v->a[113009] = sym__bare_dollar;
	v->a[113010] = sym_raw_string;
	v->a[113011] = state(2085);
	v->a[113012] = 7;
	v->a[113013] = sym_arithmetic_expansion;
	v->a[113014] = sym_brace_expression;
	v->a[113015] = sym_string;
	v->a[113016] = sym_number;
	v->a[113017] = sym_simple_expansion;
	v->a[113018] = sym_expansion;
	v->a[113019] = sym_command_substitution;
	small_parse_table_5651(v);
}

void	small_parse_table_5651(t_small_parse_table_array *v)
{
	v->a[113020] = 3;
	v->a[113021] = actions(3);
	v->a[113022] = 1;
	v->a[113023] = sym_comment;
	v->a[113024] = actions(6185);
	v->a[113025] = 2;
	v->a[113026] = sym_file_descriptor;
	v->a[113027] = aux_sym_heredoc_redirect_token1;
	v->a[113028] = actions(6187);
	v->a[113029] = 21;
	v->a[113030] = anon_sym_PIPE;
	v->a[113031] = anon_sym_SEMI_SEMI;
	v->a[113032] = anon_sym_SEMI_AMP;
	v->a[113033] = anon_sym_SEMI_SEMI_AMP;
	v->a[113034] = anon_sym_PIPE_AMP;
	v->a[113035] = anon_sym_AMP_AMP;
	v->a[113036] = anon_sym_PIPE_PIPE;
	v->a[113037] = anon_sym_LT;
	v->a[113038] = anon_sym_GT;
	v->a[113039] = anon_sym_GT_GT;
	small_parse_table_5652(v);
}

void	small_parse_table_5652(t_small_parse_table_array *v)
{
	v->a[113040] = anon_sym_AMP_GT;
	v->a[113041] = anon_sym_AMP_GT_GT;
	v->a[113042] = anon_sym_LT_AMP;
	v->a[113043] = anon_sym_GT_AMP;
	v->a[113044] = anon_sym_GT_PIPE;
	v->a[113045] = anon_sym_LT_AMP_DASH;
	v->a[113046] = anon_sym_GT_AMP_DASH;
	v->a[113047] = anon_sym_LT_LT;
	v->a[113048] = anon_sym_LT_LT_DASH;
	v->a[113049] = anon_sym_AMP;
	v->a[113050] = anon_sym_SEMI;
	v->a[113051] = 3;
	v->a[113052] = actions(3);
	v->a[113053] = 1;
	v->a[113054] = sym_comment;
	v->a[113055] = actions(6181);
	v->a[113056] = 2;
	v->a[113057] = sym_file_descriptor;
	v->a[113058] = aux_sym_heredoc_redirect_token1;
	v->a[113059] = actions(6183);
	small_parse_table_5653(v);
}

void	small_parse_table_5653(t_small_parse_table_array *v)
{
	v->a[113060] = 21;
	v->a[113061] = anon_sym_PIPE;
	v->a[113062] = anon_sym_SEMI_SEMI;
	v->a[113063] = anon_sym_SEMI_AMP;
	v->a[113064] = anon_sym_SEMI_SEMI_AMP;
	v->a[113065] = anon_sym_PIPE_AMP;
	v->a[113066] = anon_sym_AMP_AMP;
	v->a[113067] = anon_sym_PIPE_PIPE;
	v->a[113068] = anon_sym_LT;
	v->a[113069] = anon_sym_GT;
	v->a[113070] = anon_sym_GT_GT;
	v->a[113071] = anon_sym_AMP_GT;
	v->a[113072] = anon_sym_AMP_GT_GT;
	v->a[113073] = anon_sym_LT_AMP;
	v->a[113074] = anon_sym_GT_AMP;
	v->a[113075] = anon_sym_GT_PIPE;
	v->a[113076] = anon_sym_LT_AMP_DASH;
	v->a[113077] = anon_sym_GT_AMP_DASH;
	v->a[113078] = anon_sym_LT_LT;
	v->a[113079] = anon_sym_LT_LT_DASH;
	small_parse_table_5654(v);
}

void	small_parse_table_5654(t_small_parse_table_array *v)
{
	v->a[113080] = anon_sym_AMP;
	v->a[113081] = anon_sym_SEMI;
	v->a[113082] = 16;
	v->a[113083] = actions(3);
	v->a[113084] = 1;
	v->a[113085] = sym_comment;
	v->a[113086] = actions(3720);
	v->a[113087] = 1;
	v->a[113088] = anon_sym_DOLLAR;
	v->a[113089] = actions(3726);
	v->a[113090] = 1;
	v->a[113091] = aux_sym_number_token1;
	v->a[113092] = actions(3728);
	v->a[113093] = 1;
	v->a[113094] = aux_sym_number_token2;
	v->a[113095] = actions(3732);
	v->a[113096] = 1;
	v->a[113097] = anon_sym_DOLLAR_LPAREN;
	v->a[113098] = actions(3740);
	v->a[113099] = 1;
	small_parse_table_5655(v);
}

/* EOF small_parse_table_1130.c */
