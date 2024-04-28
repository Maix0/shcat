/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_12.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_60(t_parse_table_array *v)
{
	v->a[11][anon_sym_if] = actions(159);
	v->a[11][anon_sym_case] = actions(161);
	v->a[11][anon_sym_function] = actions(163);
	v->a[11][anon_sym_LBRACE] = actions(165);
	v->a[11][anon_sym_BANG] = actions(167);
	v->a[11][anon_sym_LBRACK] = actions(169);
	v->a[11][anon_sym_RBRACK] = actions(235);
	v->a[11][anon_sym_LBRACK_LBRACK] = actions(173);
	v->a[11][anon_sym_declare] = actions(175);
	v->a[11][anon_sym_typeset] = actions(175);
	v->a[11][anon_sym_export] = actions(175);
	v->a[11][anon_sym_readonly] = actions(175);
	v->a[11][anon_sym_local] = actions(175);
	v->a[11][anon_sym_unset] = actions(177);
	v->a[11][anon_sym_unsetenv] = actions(177);
	v->a[11][anon_sym_AMP_GT] = actions(151);
	v->a[11][anon_sym_AMP_GT_GT] = actions(153);
	v->a[11][anon_sym_LT_AMP] = actions(151);
	v->a[11][anon_sym_GT_AMP] = actions(151);
	v->a[11][anon_sym_GT_PIPE] = actions(153);
	parse_table_61(v);
}

void	parse_table_61(t_parse_table_array *v)
{
	v->a[11][anon_sym_LT_AMP_DASH] = actions(179);
	v->a[11][anon_sym_GT_AMP_DASH] = actions(179);
	v->a[11][anon_sym_LT_LT_LT] = actions(181);
	v->a[11][anon_sym_PLUS_PLUS2] = actions(183);
	v->a[11][anon_sym_DASH_DASH2] = actions(183);
	v->a[11][anon_sym_DASH2] = actions(185);
	v->a[11][anon_sym_PLUS2] = actions(185);
	v->a[11][anon_sym_TILDE] = actions(187);
	v->a[11][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(189);
	v->a[11][anon_sym_DOLLAR_LBRACK] = actions(191);
	v->a[11][anon_sym_DOLLAR] = actions(193);
	v->a[11][sym__special_character] = actions(195);
	v->a[11][anon_sym_DQUOTE] = actions(197);
	v->a[11][sym_raw_string] = actions(199);
	v->a[11][sym_ansi_c_string] = actions(199);
	v->a[11][aux_sym_number_token1] = actions(201);
	v->a[11][aux_sym_number_token2] = actions(203);
	v->a[11][anon_sym_DOLLAR_LBRACE] = actions(205);
	v->a[11][anon_sym_DOLLAR_LPAREN] = actions(207);
	v->a[11][anon_sym_BQUOTE] = actions(209);
	parse_table_62(v);
}

void	parse_table_62(t_parse_table_array *v)
{
	v->a[11][anon_sym_DOLLAR_BQUOTE] = actions(211);
	v->a[11][anon_sym_LT_LPAREN] = actions(213);
	v->a[11][anon_sym_GT_LPAREN] = actions(213);
	v->a[11][sym_comment] = actions(71);
	v->a[11][sym_file_descriptor] = actions(215);
	v->a[11][sym_variable_name] = actions(217);
	v->a[11][sym_test_operator] = actions(219);
	v->a[11][sym__brace_start] = actions(221);
	v->a[12][sym__expression] = state(3098);
	v->a[12][sym_binary_expression] = state(3053);
	v->a[12][sym_ternary_expression] = state(3053);
	v->a[12][sym_unary_expression] = state(3053);
	v->a[12][sym_postfix_expression] = state(3053);
	v->a[12][sym_parenthesized_expression] = state(3053);
	v->a[12][sym_arithmetic_expansion] = state(2500);
	v->a[12][sym_brace_expression] = state(2500);
	v->a[12][sym_concatenation] = state(3053);
	v->a[12][sym_string] = state(2500);
	v->a[12][sym_translated_string] = state(2500);
	v->a[12][sym_number] = state(2500);
	parse_table_63(v);
}

void	parse_table_63(t_parse_table_array *v)
{
	v->a[12][sym_simple_expansion] = state(2500);
	v->a[12][sym_expansion] = state(2500);
	v->a[12][sym_command_substitution] = state(2500);
	v->a[12][sym_process_substitution] = state(2500);
	v->a[12][aux_sym__literal_repeat1] = state(2690);
	v->a[12][aux_sym_concatenation_repeat1] = state(470);
	v->a[12][sym_word] = actions(237);
	v->a[12][anon_sym_LPAREN_LPAREN] = actions(239);
	v->a[12][anon_sym_SEMI] = actions(241);
	v->a[12][anon_sym_EQ] = actions(243);
	v->a[12][anon_sym_PLUS_PLUS] = actions(243);
	v->a[12][anon_sym_DASH_DASH] = actions(243);
	v->a[12][anon_sym_PLUS_EQ] = actions(243);
	v->a[12][anon_sym_DASH_EQ] = actions(243);
	v->a[12][anon_sym_STAR_EQ] = actions(243);
	v->a[12][anon_sym_SLASH_EQ] = actions(243);
	v->a[12][anon_sym_PERCENT_EQ] = actions(243);
	v->a[12][anon_sym_STAR_STAR_EQ] = actions(243);
	v->a[12][anon_sym_LT_LT_EQ] = actions(243);
	v->a[12][anon_sym_GT_GT_EQ] = actions(243);
	parse_table_64(v);
}

void	parse_table_64(t_parse_table_array *v)
{
	v->a[12][anon_sym_AMP_EQ] = actions(243);
	v->a[12][anon_sym_CARET_EQ] = actions(243);
	v->a[12][anon_sym_PIPE_EQ] = actions(243);
	v->a[12][anon_sym_PIPE_PIPE] = actions(245);
	v->a[12][anon_sym_AMP_AMP] = actions(245);
	v->a[12][anon_sym_PIPE] = actions(245);
	v->a[12][anon_sym_CARET] = actions(243);
	v->a[12][anon_sym_AMP] = actions(245);
	v->a[12][anon_sym_EQ_EQ] = actions(245);
	v->a[12][anon_sym_BANG_EQ] = actions(243);
	v->a[12][anon_sym_LT] = actions(245);
	v->a[12][anon_sym_GT] = actions(245);
	v->a[12][anon_sym_LT_EQ] = actions(243);
	v->a[12][anon_sym_GT_EQ] = actions(243);
	v->a[12][anon_sym_LT_LT] = actions(245);
	v->a[12][anon_sym_GT_GT] = actions(245);
	v->a[12][anon_sym_PLUS] = actions(243);
	v->a[12][anon_sym_DASH] = actions(243);
	v->a[12][anon_sym_STAR] = actions(243);
	v->a[12][anon_sym_SLASH] = actions(243);
	parse_table_65(v);
}

/* EOF parse_table_12.c */
