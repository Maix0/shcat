/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_408.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2040(t_parse_table_array *v)
{
	v->a[450][sym_brace_expression] = state(815);
	v->a[450][sym_concatenation] = state(1082);
	v->a[450][sym_string] = state(815);
	v->a[450][sym_translated_string] = state(815);
	v->a[450][sym_number] = state(815);
	v->a[450][sym_simple_expansion] = state(815);
	v->a[450][sym_expansion] = state(815);
	v->a[450][sym_command_substitution] = state(815);
	v->a[450][sym_process_substitution] = state(815);
	v->a[450][aux_sym_redirected_statement_repeat2] = state(4250);
	v->a[450][aux_sym_command_repeat1] = state(925);
	v->a[450][aux_sym__literal_repeat1] = state(926);
	v->a[450][sym_word] = actions(403);
	v->a[450][anon_sym_for] = actions(405);
	v->a[450][anon_sym_select] = actions(407);
	v->a[450][anon_sym_LPAREN_LPAREN] = actions(409);
	v->a[450][anon_sym_LT] = actions(411);
	v->a[450][anon_sym_GT] = actions(411);
	v->a[450][anon_sym_GT_GT] = actions(413);
	v->a[450][anon_sym_LPAREN] = actions(415);
	parse_table_2041(v);
}

void	parse_table_2041(t_parse_table_array *v)
{
	v->a[450][anon_sym_while] = actions(417);
	v->a[450][anon_sym_until] = actions(417);
	v->a[450][anon_sym_if] = actions(419);
	v->a[450][anon_sym_case] = actions(421);
	v->a[450][anon_sym_function] = actions(431);
	v->a[450][anon_sym_LBRACE] = actions(433);
	v->a[450][anon_sym_BANG] = actions(435);
	v->a[450][anon_sym_LBRACK] = actions(437);
	v->a[450][anon_sym_LBRACK_LBRACK] = actions(439);
	v->a[450][anon_sym_declare] = actions(441);
	v->a[450][anon_sym_typeset] = actions(441);
	v->a[450][anon_sym_export] = actions(441);
	v->a[450][anon_sym_readonly] = actions(441);
	v->a[450][anon_sym_local] = actions(441);
	v->a[450][anon_sym_unset] = actions(443);
	v->a[450][anon_sym_unsetenv] = actions(443);
	v->a[450][anon_sym_AMP_GT] = actions(411);
	v->a[450][anon_sym_AMP_GT_GT] = actions(413);
	v->a[450][anon_sym_LT_AMP] = actions(411);
	v->a[450][anon_sym_GT_AMP] = actions(411);
	parse_table_2042(v);
}

void	parse_table_2042(t_parse_table_array *v)
{
	v->a[450][anon_sym_GT_PIPE] = actions(413);
	v->a[450][anon_sym_LT_AMP_DASH] = actions(445);
	v->a[450][anon_sym_GT_AMP_DASH] = actions(445);
	v->a[450][anon_sym_LT_LT_LT] = actions(447);
	v->a[450][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(449);
	v->a[450][anon_sym_DOLLAR_LBRACK] = actions(451);
	v->a[450][anon_sym_DOLLAR] = actions(453);
	v->a[450][sym__special_character] = actions(455);
	v->a[450][anon_sym_DQUOTE] = actions(457);
	v->a[450][sym_raw_string] = actions(459);
	v->a[450][sym_ansi_c_string] = actions(459);
	v->a[450][aux_sym_number_token1] = actions(461);
	v->a[450][aux_sym_number_token2] = actions(463);
	v->a[450][anon_sym_DOLLAR_LBRACE] = actions(465);
	v->a[450][anon_sym_DOLLAR_LPAREN] = actions(467);
	v->a[450][anon_sym_BQUOTE] = actions(469);
	v->a[450][anon_sym_DOLLAR_BQUOTE] = actions(471);
	v->a[450][anon_sym_LT_LPAREN] = actions(473);
	v->a[450][anon_sym_GT_LPAREN] = actions(473);
	v->a[450][sym_comment] = actions(71);
	parse_table_2043(v);
}

void	parse_table_2043(t_parse_table_array *v)
{
	v->a[450][sym_file_descriptor] = actions(475);
	v->a[450][sym_variable_name] = actions(477);
	v->a[450][sym_test_operator] = actions(479);
	v->a[450][sym__brace_start] = actions(481);
	v->a[451][sym__expression] = state(3098);
	v->a[451][sym_binary_expression] = state(3053);
	v->a[451][sym_ternary_expression] = state(3053);
	v->a[451][sym_unary_expression] = state(3053);
	v->a[451][sym_postfix_expression] = state(3053);
	v->a[451][sym_parenthesized_expression] = state(3053);
	v->a[451][sym_arithmetic_expansion] = state(2500);
	v->a[451][sym_brace_expression] = state(2500);
	v->a[451][sym_concatenation] = state(3053);
	v->a[451][sym_string] = state(2500);
	v->a[451][sym_translated_string] = state(2500);
	v->a[451][sym_number] = state(2500);
	v->a[451][sym_simple_expansion] = state(2500);
	v->a[451][sym_expansion] = state(2500);
	v->a[451][sym_command_substitution] = state(2500);
	v->a[451][sym_process_substitution] = state(2500);
	parse_table_2044(v);
}

void	parse_table_2044(t_parse_table_array *v)
{
	v->a[451][aux_sym__literal_repeat1] = state(2690);
	v->a[451][aux_sym_concatenation_repeat1] = state(2491);
	v->a[451][sym_word] = actions(237);
	v->a[451][anon_sym_LPAREN_LPAREN] = actions(1073);
	v->a[451][anon_sym_EQ] = actions(243);
	v->a[451][anon_sym_PLUS_PLUS] = actions(243);
	v->a[451][anon_sym_DASH_DASH] = actions(243);
	v->a[451][anon_sym_PLUS_EQ] = actions(243);
	v->a[451][anon_sym_DASH_EQ] = actions(243);
	v->a[451][anon_sym_STAR_EQ] = actions(243);
	v->a[451][anon_sym_SLASH_EQ] = actions(243);
	v->a[451][anon_sym_PERCENT_EQ] = actions(243);
	v->a[451][anon_sym_STAR_STAR_EQ] = actions(243);
	v->a[451][anon_sym_LT_LT_EQ] = actions(354);
	v->a[451][anon_sym_GT_GT_EQ] = actions(354);
	v->a[451][anon_sym_AMP_EQ] = actions(354);
	v->a[451][anon_sym_CARET_EQ] = actions(243);
	v->a[451][anon_sym_PIPE_EQ] = actions(354);
	v->a[451][anon_sym_PIPE_PIPE] = actions(354);
	v->a[451][anon_sym_AMP_AMP] = actions(354);
	parse_table_2045(v);
}

/* EOF parse_table_408.c */
