/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_464.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2320(t_parse_table_array *v)
{
	v->a[525][anon_sym_DASH_DASH] = actions(1261);
	v->a[525][anon_sym_PLUS_EQ] = actions(1261);
	v->a[525][anon_sym_DASH_EQ] = actions(1261);
	v->a[525][anon_sym_STAR_EQ] = actions(1261);
	v->a[525][anon_sym_SLASH_EQ] = actions(1261);
	v->a[525][anon_sym_PERCENT_EQ] = actions(1261);
	v->a[525][anon_sym_STAR_STAR_EQ] = actions(1261);
	v->a[525][anon_sym_LT_LT_EQ] = actions(1263);
	v->a[525][anon_sym_GT_GT_EQ] = actions(1263);
	v->a[525][anon_sym_AMP_EQ] = actions(1263);
	v->a[525][anon_sym_CARET_EQ] = actions(1261);
	v->a[525][anon_sym_PIPE_EQ] = actions(1263);
	v->a[525][anon_sym_PIPE_PIPE] = actions(1263);
	v->a[525][anon_sym_AMP_AMP] = actions(1263);
	v->a[525][anon_sym_PIPE] = actions(1261);
	v->a[525][anon_sym_CARET] = actions(1261);
	v->a[525][anon_sym_AMP] = actions(1261);
	v->a[525][anon_sym_EQ_EQ] = actions(1261);
	v->a[525][anon_sym_BANG_EQ] = actions(1261);
	v->a[525][anon_sym_LT] = actions(1261);
	parse_table_2321(v);
}

void	parse_table_2321(t_parse_table_array *v)
{
	v->a[525][anon_sym_GT] = actions(1261);
	v->a[525][anon_sym_LT_EQ] = actions(1263);
	v->a[525][anon_sym_GT_EQ] = actions(1263);
	v->a[525][anon_sym_LT_LT] = actions(1261);
	v->a[525][anon_sym_GT_GT] = actions(1261);
	v->a[525][anon_sym_PLUS] = actions(1261);
	v->a[525][anon_sym_DASH] = actions(1261);
	v->a[525][anon_sym_STAR] = actions(1261);
	v->a[525][anon_sym_SLASH] = actions(1261);
	v->a[525][anon_sym_PERCENT] = actions(1261);
	v->a[525][anon_sym_STAR_STAR] = actions(1261);
	v->a[525][anon_sym_LPAREN] = actions(1261);
	v->a[525][anon_sym_PIPE_AMP] = actions(1263);
	v->a[525][anon_sym_RBRACK] = actions(1263);
	v->a[525][anon_sym_EQ_TILDE] = actions(1261);
	v->a[525][anon_sym_AMP_GT] = actions(1261);
	v->a[525][anon_sym_AMP_GT_GT] = actions(1263);
	v->a[525][anon_sym_LT_AMP] = actions(1261);
	v->a[525][anon_sym_GT_AMP] = actions(1261);
	v->a[525][anon_sym_GT_PIPE] = actions(1263);
	parse_table_2322(v);
}

void	parse_table_2322(t_parse_table_array *v)
{
	v->a[525][anon_sym_LT_AMP_DASH] = actions(1263);
	v->a[525][anon_sym_GT_AMP_DASH] = actions(1263);
	v->a[525][anon_sym_LT_LT_DASH] = actions(1263);
	v->a[525][anon_sym_LT_LT_LT] = actions(1263);
	v->a[525][anon_sym_QMARK] = actions(1261);
	v->a[525][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1263);
	v->a[525][anon_sym_DOLLAR_LBRACK] = actions(1263);
	v->a[525][anon_sym_DOLLAR] = actions(1261);
	v->a[525][sym__special_character] = actions(1261);
	v->a[525][anon_sym_DQUOTE] = actions(1263);
	v->a[525][sym_raw_string] = actions(1263);
	v->a[525][sym_ansi_c_string] = actions(1263);
	v->a[525][aux_sym_number_token1] = actions(1261);
	v->a[525][aux_sym_number_token2] = actions(1261);
	v->a[525][anon_sym_DOLLAR_LBRACE] = actions(1263);
	v->a[525][anon_sym_DOLLAR_LPAREN] = actions(1261);
	v->a[525][anon_sym_BQUOTE] = actions(1263);
	v->a[525][anon_sym_DOLLAR_BQUOTE] = actions(1263);
	v->a[525][anon_sym_LT_LPAREN] = actions(1263);
	v->a[525][anon_sym_GT_LPAREN] = actions(1263);
	parse_table_2323(v);
}

void	parse_table_2323(t_parse_table_array *v)
{
	v->a[525][sym_comment] = actions(71);
	v->a[525][sym_file_descriptor] = actions(1263);
	v->a[525][sym_test_operator] = actions(1263);
	v->a[525][sym__bare_dollar] = actions(1263);
	v->a[525][sym__brace_start] = actions(1263);
	v->a[526][sym_subshell] = state(5014);
	v->a[526][sym_test_command] = state(5014);
	v->a[526][sym_command] = state(5026);
	v->a[526][sym_command_name] = state(533);
	v->a[526][sym_variable_assignment] = state(1974);
	v->a[526][sym_subscript] = state(6754);
	v->a[526][sym_file_redirect] = state(3581);
	v->a[526][sym_herestring_redirect] = state(3581);
	v->a[526][sym__expression] = state(3100);
	v->a[526][sym_binary_expression] = state(3053);
	v->a[526][sym_ternary_expression] = state(3053);
	v->a[526][sym_unary_expression] = state(3053);
	v->a[526][sym_postfix_expression] = state(3053);
	v->a[526][sym_parenthesized_expression] = state(3053);
	v->a[526][sym_arithmetic_expansion] = state(472);
	parse_table_2324(v);
}

void	parse_table_2324(t_parse_table_array *v)
{
	v->a[526][sym_brace_expression] = state(472);
	v->a[526][sym_concatenation] = state(502);
	v->a[526][sym_string] = state(472);
	v->a[526][sym_translated_string] = state(472);
	v->a[526][sym_number] = state(472);
	v->a[526][sym_simple_expansion] = state(472);
	v->a[526][sym_expansion] = state(472);
	v->a[526][sym_command_substitution] = state(472);
	v->a[526][sym_process_substitution] = state(472);
	v->a[526][aux_sym_command_repeat1] = state(951);
	v->a[526][aux_sym__literal_repeat1] = state(493);
	v->a[526][sym_word] = actions(1386);
	v->a[526][anon_sym_LPAREN_LPAREN] = actions(83);
	v->a[526][anon_sym_LT] = actions(1388);
	v->a[526][anon_sym_GT] = actions(1388);
	v->a[526][anon_sym_GT_GT] = actions(1390);
	v->a[526][anon_sym_LPAREN] = actions(89);
	v->a[526][anon_sym_BANG] = actions(250);
	v->a[526][anon_sym_LBRACK] = actions(33);
	v->a[526][anon_sym_LBRACK_LBRACK] = actions(35);
	parse_table_2325(v);
}

/* EOF parse_table_464.c */
