/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1170.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5850(t_small_parse_table_array *v)
{
	v->a[117000] = 1;
	v->a[117001] = anon_sym_DQUOTE;
	v->a[117002] = actions(1085);
	v->a[117003] = 1;
	v->a[117004] = anon_sym_DOLLAR_LBRACE;
	v->a[117005] = actions(1087);
	v->a[117006] = 1;
	v->a[117007] = anon_sym_DOLLAR_BQUOTE;
	v->a[117008] = actions(3598);
	v->a[117009] = 1;
	v->a[117010] = anon_sym_BQUOTE;
	v->a[117011] = state(2690);
	v->a[117012] = 1;
	v->a[117013] = aux_sym__literal_repeat1;
	v->a[117014] = state(3078);
	v->a[117015] = 1;
	v->a[117016] = sym__expression;
	v->a[117017] = actions(103);
	v->a[117018] = 2;
	v->a[117019] = anon_sym_PLUS_PLUS2;
	small_parse_table_5851(v);
}

void	small_parse_table_5851(t_small_parse_table_array *v)
{
	v->a[117020] = anon_sym_DASH_DASH2;
	v->a[117021] = actions(105);
	v->a[117022] = 2;
	v->a[117023] = anon_sym_DASH2;
	v->a[117024] = anon_sym_PLUS2;
	v->a[117025] = actions(1073);
	v->a[117026] = 2;
	v->a[117027] = anon_sym_LPAREN_LPAREN;
	v->a[117028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117029] = actions(1083);
	v->a[117030] = 2;
	v->a[117031] = sym_raw_string;
	v->a[117032] = sym_ansi_c_string;
	v->a[117033] = actions(1089);
	v->a[117034] = 2;
	v->a[117035] = anon_sym_LT_LPAREN;
	v->a[117036] = anon_sym_GT_LPAREN;
	v->a[117037] = state(3053);
	v->a[117038] = 6;
	v->a[117039] = sym_binary_expression;
	small_parse_table_5852(v);
}

void	small_parse_table_5852(t_small_parse_table_array *v)
{
	v->a[117040] = sym_ternary_expression;
	v->a[117041] = sym_unary_expression;
	v->a[117042] = sym_postfix_expression;
	v->a[117043] = sym_parenthesized_expression;
	v->a[117044] = sym_concatenation;
	v->a[117045] = state(2500);
	v->a[117046] = 9;
	v->a[117047] = sym_arithmetic_expansion;
	v->a[117048] = sym_brace_expression;
	v->a[117049] = sym_string;
	v->a[117050] = sym_translated_string;
	v->a[117051] = sym_number;
	v->a[117052] = sym_simple_expansion;
	v->a[117053] = sym_expansion;
	v->a[117054] = sym_command_substitution;
	v->a[117055] = sym_process_substitution;
	v->a[117056] = 3;
	v->a[117057] = actions(3);
	v->a[117058] = 1;
	v->a[117059] = sym_comment;
	small_parse_table_5853(v);
}

void	small_parse_table_5853(t_small_parse_table_array *v)
{
	v->a[117060] = actions(5772);
	v->a[117061] = 5;
	v->a[117062] = sym_file_descriptor;
	v->a[117063] = sym_variable_name;
	v->a[117064] = sym_test_operator;
	v->a[117065] = sym__brace_start;
	v->a[117066] = aux_sym_heredoc_redirect_token1;
	v->a[117067] = actions(5770);
	v->a[117068] = 38;
	v->a[117069] = anon_sym_LPAREN_LPAREN;
	v->a[117070] = anon_sym_SEMI;
	v->a[117071] = anon_sym_PIPE_PIPE;
	v->a[117072] = anon_sym_AMP_AMP;
	v->a[117073] = anon_sym_PIPE;
	v->a[117074] = anon_sym_AMP;
	v->a[117075] = anon_sym_LT;
	v->a[117076] = anon_sym_GT;
	v->a[117077] = anon_sym_LT_LT;
	v->a[117078] = anon_sym_GT_GT;
	v->a[117079] = anon_sym_RPAREN;
	small_parse_table_5854(v);
}

void	small_parse_table_5854(t_small_parse_table_array *v)
{
	v->a[117080] = anon_sym_SEMI_SEMI;
	v->a[117081] = anon_sym_PIPE_AMP;
	v->a[117082] = anon_sym_AMP_GT;
	v->a[117083] = anon_sym_AMP_GT_GT;
	v->a[117084] = anon_sym_LT_AMP;
	v->a[117085] = anon_sym_GT_AMP;
	v->a[117086] = anon_sym_GT_PIPE;
	v->a[117087] = anon_sym_LT_AMP_DASH;
	v->a[117088] = anon_sym_GT_AMP_DASH;
	v->a[117089] = anon_sym_LT_LT_DASH;
	v->a[117090] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117091] = anon_sym_DOLLAR_LBRACK;
	v->a[117092] = anon_sym_DOLLAR;
	v->a[117093] = sym__special_character;
	v->a[117094] = anon_sym_DQUOTE;
	v->a[117095] = sym_raw_string;
	v->a[117096] = sym_ansi_c_string;
	v->a[117097] = aux_sym_number_token1;
	v->a[117098] = aux_sym_number_token2;
	v->a[117099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5855(v);
}

/* EOF small_parse_table_1170.c */
