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
	v->a[113000] = actions(5821);
	v->a[113001] = 9;
	v->a[113002] = anon_sym_SEMI;
	v->a[113003] = anon_sym_PIPE_PIPE;
	v->a[113004] = anon_sym_AMP_AMP;
	v->a[113005] = anon_sym_PIPE;
	v->a[113006] = anon_sym_AMP;
	v->a[113007] = anon_sym_LT_LT;
	v->a[113008] = anon_sym_SEMI_SEMI;
	v->a[113009] = anon_sym_PIPE_AMP;
	v->a[113010] = anon_sym_LT_LT_DASH;
	v->a[113011] = actions(5823);
	v->a[113012] = 11;
	v->a[113013] = anon_sym_LT;
	v->a[113014] = anon_sym_GT;
	v->a[113015] = anon_sym_GT_GT;
	v->a[113016] = anon_sym_AMP_GT;
	v->a[113017] = anon_sym_AMP_GT_GT;
	v->a[113018] = anon_sym_LT_AMP;
	v->a[113019] = anon_sym_GT_AMP;
	small_parse_table_5651(v);
}

void	small_parse_table_5651(t_small_parse_table_array *v)
{
	v->a[113020] = anon_sym_GT_PIPE;
	v->a[113021] = anon_sym_LT_AMP_DASH;
	v->a[113022] = anon_sym_GT_AMP_DASH;
	v->a[113023] = anon_sym_LT_LT_LT;
	v->a[113024] = actions(5819);
	v->a[113025] = 17;
	v->a[113026] = anon_sym_LPAREN_LPAREN;
	v->a[113027] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113028] = anon_sym_DOLLAR_LBRACK;
	v->a[113029] = anon_sym_DOLLAR;
	v->a[113030] = sym__special_character;
	v->a[113031] = anon_sym_DQUOTE;
	v->a[113032] = sym_raw_string;
	v->a[113033] = sym_ansi_c_string;
	v->a[113034] = aux_sym_number_token1;
	v->a[113035] = aux_sym_number_token2;
	v->a[113036] = anon_sym_DOLLAR_LBRACE;
	v->a[113037] = anon_sym_DOLLAR_LPAREN;
	v->a[113038] = anon_sym_BQUOTE;
	v->a[113039] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5652(v);
}

void	small_parse_table_5652(t_small_parse_table_array *v)
{
	v->a[113040] = anon_sym_LT_LPAREN;
	v->a[113041] = anon_sym_GT_LPAREN;
	v->a[113042] = sym_word;
	v->a[113043] = 8;
	v->a[113044] = actions(3);
	v->a[113045] = 1;
	v->a[113046] = sym_comment;
	v->a[113047] = actions(5826);
	v->a[113048] = 1;
	v->a[113049] = aux_sym_heredoc_redirect_token1;
	v->a[113050] = actions(5828);
	v->a[113051] = 1;
	v->a[113052] = sym_file_descriptor;
	v->a[113053] = actions(6361);
	v->a[113054] = 1;
	v->a[113055] = anon_sym_RPAREN;
	v->a[113056] = actions(5831);
	v->a[113057] = 3;
	v->a[113058] = sym_variable_name;
	v->a[113059] = sym_test_operator;
	small_parse_table_5653(v);
}

void	small_parse_table_5653(t_small_parse_table_array *v)
{
	v->a[113060] = sym__brace_start;
	v->a[113061] = actions(5821);
	v->a[113062] = 9;
	v->a[113063] = anon_sym_SEMI;
	v->a[113064] = anon_sym_PIPE_PIPE;
	v->a[113065] = anon_sym_AMP_AMP;
	v->a[113066] = anon_sym_PIPE;
	v->a[113067] = anon_sym_AMP;
	v->a[113068] = anon_sym_LT_LT;
	v->a[113069] = anon_sym_SEMI_SEMI;
	v->a[113070] = anon_sym_PIPE_AMP;
	v->a[113071] = anon_sym_LT_LT_DASH;
	v->a[113072] = actions(5823);
	v->a[113073] = 11;
	v->a[113074] = anon_sym_LT;
	v->a[113075] = anon_sym_GT;
	v->a[113076] = anon_sym_GT_GT;
	v->a[113077] = anon_sym_AMP_GT;
	v->a[113078] = anon_sym_AMP_GT_GT;
	v->a[113079] = anon_sym_LT_AMP;
	small_parse_table_5654(v);
}

void	small_parse_table_5654(t_small_parse_table_array *v)
{
	v->a[113080] = anon_sym_GT_AMP;
	v->a[113081] = anon_sym_GT_PIPE;
	v->a[113082] = anon_sym_LT_AMP_DASH;
	v->a[113083] = anon_sym_GT_AMP_DASH;
	v->a[113084] = anon_sym_LT_LT_LT;
	v->a[113085] = actions(5819);
	v->a[113086] = 17;
	v->a[113087] = anon_sym_LPAREN_LPAREN;
	v->a[113088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113089] = anon_sym_DOLLAR_LBRACK;
	v->a[113090] = anon_sym_DOLLAR;
	v->a[113091] = sym__special_character;
	v->a[113092] = anon_sym_DQUOTE;
	v->a[113093] = sym_raw_string;
	v->a[113094] = sym_ansi_c_string;
	v->a[113095] = aux_sym_number_token1;
	v->a[113096] = aux_sym_number_token2;
	v->a[113097] = anon_sym_DOLLAR_LBRACE;
	v->a[113098] = anon_sym_DOLLAR_LPAREN;
	v->a[113099] = anon_sym_BQUOTE;
	small_parse_table_5655(v);
}

/* EOF small_parse_table_1130.c */
