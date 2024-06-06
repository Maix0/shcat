/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1110.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5550(t_small_parse_table_array *v)
{
	v->a[111000] = 1;
	v->a[111001] = sym__comment_word;
	v->a[111002] = actions(6354);
	v->a[111003] = 3;
	v->a[111004] = sym_test_operator;
	v->a[111005] = sym__bare_dollar;
	v->a[111006] = sym_raw_string;
	v->a[111007] = state(599);
	v->a[111008] = 7;
	v->a[111009] = sym_arithmetic_expansion;
	v->a[111010] = sym_brace_expression;
	v->a[111011] = sym_string;
	v->a[111012] = sym_number;
	v->a[111013] = sym_simple_expansion;
	v->a[111014] = sym_expansion;
	v->a[111015] = sym_command_substitution;
	v->a[111016] = 3;
	v->a[111017] = actions(3);
	v->a[111018] = 1;
	v->a[111019] = sym_comment;
	small_parse_table_5551(v);
}

void	small_parse_table_5551(t_small_parse_table_array *v)
{
	v->a[111020] = actions(6095);
	v->a[111021] = 2;
	v->a[111022] = sym_file_descriptor;
	v->a[111023] = aux_sym_heredoc_redirect_token1;
	v->a[111024] = actions(6093);
	v->a[111025] = 21;
	v->a[111026] = anon_sym_PIPE;
	v->a[111027] = anon_sym_SEMI_SEMI;
	v->a[111028] = anon_sym_SEMI_AMP;
	v->a[111029] = anon_sym_SEMI_SEMI_AMP;
	v->a[111030] = anon_sym_PIPE_AMP;
	v->a[111031] = anon_sym_AMP_AMP;
	v->a[111032] = anon_sym_PIPE_PIPE;
	v->a[111033] = anon_sym_LT;
	v->a[111034] = anon_sym_GT;
	v->a[111035] = anon_sym_GT_GT;
	v->a[111036] = anon_sym_AMP_GT;
	v->a[111037] = anon_sym_AMP_GT_GT;
	v->a[111038] = anon_sym_LT_AMP;
	v->a[111039] = anon_sym_GT_AMP;
	small_parse_table_5552(v);
}

void	small_parse_table_5552(t_small_parse_table_array *v)
{
	v->a[111040] = anon_sym_GT_PIPE;
	v->a[111041] = anon_sym_LT_AMP_DASH;
	v->a[111042] = anon_sym_GT_AMP_DASH;
	v->a[111043] = anon_sym_LT_LT;
	v->a[111044] = anon_sym_LT_LT_DASH;
	v->a[111045] = anon_sym_AMP;
	v->a[111046] = anon_sym_SEMI;
	v->a[111047] = 3;
	v->a[111048] = actions(3);
	v->a[111049] = 1;
	v->a[111050] = sym_comment;
	v->a[111051] = actions(6049);
	v->a[111052] = 2;
	v->a[111053] = sym_file_descriptor;
	v->a[111054] = aux_sym_heredoc_redirect_token1;
	v->a[111055] = actions(6047);
	v->a[111056] = 21;
	v->a[111057] = anon_sym_PIPE;
	v->a[111058] = anon_sym_SEMI_SEMI;
	v->a[111059] = anon_sym_SEMI_AMP;
	small_parse_table_5553(v);
}

void	small_parse_table_5553(t_small_parse_table_array *v)
{
	v->a[111060] = anon_sym_SEMI_SEMI_AMP;
	v->a[111061] = anon_sym_PIPE_AMP;
	v->a[111062] = anon_sym_AMP_AMP;
	v->a[111063] = anon_sym_PIPE_PIPE;
	v->a[111064] = anon_sym_LT;
	v->a[111065] = anon_sym_GT;
	v->a[111066] = anon_sym_GT_GT;
	v->a[111067] = anon_sym_AMP_GT;
	v->a[111068] = anon_sym_AMP_GT_GT;
	v->a[111069] = anon_sym_LT_AMP;
	v->a[111070] = anon_sym_GT_AMP;
	v->a[111071] = anon_sym_GT_PIPE;
	v->a[111072] = anon_sym_LT_AMP_DASH;
	v->a[111073] = anon_sym_GT_AMP_DASH;
	v->a[111074] = anon_sym_LT_LT;
	v->a[111075] = anon_sym_LT_LT_DASH;
	v->a[111076] = anon_sym_AMP;
	v->a[111077] = anon_sym_SEMI;
	v->a[111078] = 16;
	v->a[111079] = actions(3);
	small_parse_table_5554(v);
}

void	small_parse_table_5554(t_small_parse_table_array *v)
{
	v->a[111080] = 1;
	v->a[111081] = sym_comment;
	v->a[111082] = actions(1079);
	v->a[111083] = 1;
	v->a[111084] = aux_sym_number_token1;
	v->a[111085] = actions(1081);
	v->a[111086] = 1;
	v->a[111087] = aux_sym_number_token2;
	v->a[111088] = actions(1085);
	v->a[111089] = 1;
	v->a[111090] = anon_sym_DOLLAR_LPAREN;
	v->a[111091] = actions(1097);
	v->a[111092] = 1;
	v->a[111093] = sym__brace_start;
	v->a[111094] = actions(5897);
	v->a[111095] = 1;
	v->a[111096] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111097] = actions(5901);
	v->a[111098] = 1;
	v->a[111099] = anon_sym_DQUOTE;
	small_parse_table_5555(v);
}

/* EOF small_parse_table_1110.c */
