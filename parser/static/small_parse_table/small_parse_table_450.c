/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_450.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2250(t_small_parse_table_array *v)
{
	v->a[45000] = anon_sym_DOLLAR;
	v->a[45001] = sym__special_character;
	v->a[45002] = anon_sym_DQUOTE;
	v->a[45003] = sym_raw_string;
	v->a[45004] = aux_sym_number_token1;
	v->a[45005] = aux_sym_number_token2;
	v->a[45006] = anon_sym_DOLLAR_LBRACE;
	v->a[45007] = anon_sym_DOLLAR_LPAREN;
	v->a[45008] = anon_sym_BQUOTE;
	v->a[45009] = anon_sym_DOLLAR_BQUOTE;
	v->a[45010] = sym_word;
	v->a[45011] = anon_sym_SEMI;
	v->a[45012] = 3;
	v->a[45013] = actions(3);
	v->a[45014] = 1;
	v->a[45015] = sym_comment;
	v->a[45016] = actions(3125);
	v->a[45017] = 6;
	v->a[45018] = sym_file_descriptor;
	v->a[45019] = sym__concat;
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = sym_variable_name;
	v->a[45021] = sym_test_operator;
	v->a[45022] = sym__brace_start;
	v->a[45023] = aux_sym_heredoc_redirect_token1;
	v->a[45024] = actions(3123);
	v->a[45025] = 33;
	v->a[45026] = anon_sym_PIPE;
	v->a[45027] = anon_sym_RPAREN;
	v->a[45028] = anon_sym_SEMI_SEMI;
	v->a[45029] = anon_sym_PIPE_AMP;
	v->a[45030] = anon_sym_AMP_AMP;
	v->a[45031] = anon_sym_PIPE_PIPE;
	v->a[45032] = anon_sym_LT;
	v->a[45033] = anon_sym_GT;
	v->a[45034] = anon_sym_GT_GT;
	v->a[45035] = anon_sym_AMP_GT;
	v->a[45036] = anon_sym_AMP_GT_GT;
	v->a[45037] = anon_sym_LT_AMP;
	v->a[45038] = anon_sym_GT_AMP;
	v->a[45039] = anon_sym_GT_PIPE;
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = anon_sym_LT_AMP_DASH;
	v->a[45041] = anon_sym_GT_AMP_DASH;
	v->a[45042] = anon_sym_LT_LT;
	v->a[45043] = anon_sym_LT_LT_DASH;
	v->a[45044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45045] = anon_sym_AMP;
	v->a[45046] = aux_sym_concatenation_token1;
	v->a[45047] = anon_sym_DOLLAR;
	v->a[45048] = sym__special_character;
	v->a[45049] = anon_sym_DQUOTE;
	v->a[45050] = sym_raw_string;
	v->a[45051] = aux_sym_number_token1;
	v->a[45052] = aux_sym_number_token2;
	v->a[45053] = anon_sym_DOLLAR_LBRACE;
	v->a[45054] = anon_sym_DOLLAR_LPAREN;
	v->a[45055] = anon_sym_BQUOTE;
	v->a[45056] = anon_sym_DOLLAR_BQUOTE;
	v->a[45057] = sym_word;
	v->a[45058] = anon_sym_SEMI;
	v->a[45059] = 3;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = actions(3);
	v->a[45061] = 1;
	v->a[45062] = sym_comment;
	v->a[45063] = actions(3050);
	v->a[45064] = 5;
	v->a[45065] = sym_file_descriptor;
	v->a[45066] = sym__concat;
	v->a[45067] = sym_test_operator;
	v->a[45068] = sym__brace_start;
	v->a[45069] = aux_sym_heredoc_redirect_token1;
	v->a[45070] = actions(3048);
	v->a[45071] = 34;
	v->a[45072] = anon_sym_PIPE;
	v->a[45073] = anon_sym_SEMI_SEMI;
	v->a[45074] = anon_sym_SEMI_AMP;
	v->a[45075] = anon_sym_SEMI_SEMI_AMP;
	v->a[45076] = anon_sym_PIPE_AMP;
	v->a[45077] = anon_sym_AMP_AMP;
	v->a[45078] = anon_sym_PIPE_PIPE;
	v->a[45079] = anon_sym_LT;
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = anon_sym_GT;
	v->a[45081] = anon_sym_GT_GT;
	v->a[45082] = anon_sym_AMP_GT;
	v->a[45083] = anon_sym_AMP_GT_GT;
	v->a[45084] = anon_sym_LT_AMP;
	v->a[45085] = anon_sym_GT_AMP;
	v->a[45086] = anon_sym_GT_PIPE;
	v->a[45087] = anon_sym_LT_AMP_DASH;
	v->a[45088] = anon_sym_GT_AMP_DASH;
	v->a[45089] = anon_sym_LT_LT;
	v->a[45090] = anon_sym_LT_LT_DASH;
	v->a[45091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45092] = anon_sym_AMP;
	v->a[45093] = aux_sym_concatenation_token1;
	v->a[45094] = anon_sym_DOLLAR;
	v->a[45095] = sym__special_character;
	v->a[45096] = anon_sym_DQUOTE;
	v->a[45097] = sym_raw_string;
	v->a[45098] = aux_sym_number_token1;
	v->a[45099] = aux_sym_number_token2;
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
