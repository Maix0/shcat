/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_16.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_80(t_parse_table_array *v)
{
	v->a[15][anon_sym_local] = actions(304);
	v->a[15][anon_sym_unset] = actions(306);
	v->a[15][anon_sym_unsetenv] = actions(306);
	v->a[15][anon_sym_AMP_GT] = actions(290);
	v->a[15][anon_sym_AMP_GT_GT] = actions(292);
	v->a[15][anon_sym_LT_AMP] = actions(290);
	v->a[15][anon_sym_GT_AMP] = actions(290);
	v->a[15][anon_sym_GT_PIPE] = actions(292);
	v->a[15][anon_sym_LT_AMP_DASH] = actions(308);
	v->a[15][anon_sym_GT_AMP_DASH] = actions(308);
	v->a[15][anon_sym_LT_LT_LT] = actions(310);
	v->a[15][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[15][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[15][anon_sym_DOLLAR] = actions(316);
	v->a[15][sym__special_character] = actions(318);
	v->a[15][anon_sym_DQUOTE] = actions(320);
	v->a[15][sym_raw_string] = actions(322);
	v->a[15][sym_ansi_c_string] = actions(322);
	v->a[15][aux_sym_number_token1] = actions(324);
	v->a[15][aux_sym_number_token2] = actions(326);
	parse_table_81(v);
}

void	parse_table_81(t_parse_table_array *v)
{
	v->a[15][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[15][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[15][anon_sym_BQUOTE] = actions(332);
	v->a[15][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[15][anon_sym_LT_LPAREN] = actions(336);
	v->a[15][anon_sym_GT_LPAREN] = actions(336);
	v->a[15][sym_comment] = actions(71);
	v->a[15][sym_file_descriptor] = actions(338);
	v->a[15][sym_variable_name] = actions(340);
	v->a[15][sym_test_operator] = actions(342);
	v->a[15][sym__brace_start] = actions(344);
	v->a[16][sym__expression] = state(3012);
	v->a[16][sym_binary_expression] = state(3071);
	v->a[16][sym_ternary_expression] = state(3071);
	v->a[16][sym_unary_expression] = state(3071);
	v->a[16][sym_postfix_expression] = state(3071);
	v->a[16][sym_parenthesized_expression] = state(3071);
	v->a[16][sym_arithmetic_expansion] = state(2521);
	v->a[16][sym_brace_expression] = state(2521);
	v->a[16][sym_concatenation] = state(3071);
	parse_table_82(v);
}

void	parse_table_82(t_parse_table_array *v)
{
	v->a[16][sym_string] = state(2521);
	v->a[16][sym_translated_string] = state(2521);
	v->a[16][sym_number] = state(2521);
	v->a[16][sym_simple_expansion] = state(2521);
	v->a[16][sym_expansion] = state(2521);
	v->a[16][sym_command_substitution] = state(2521);
	v->a[16][sym_process_substitution] = state(2521);
	v->a[16][aux_sym__literal_repeat1] = state(2641);
	v->a[16][aux_sym_concatenation_repeat1] = state(499);
	v->a[16][sym_word] = actions(350);
	v->a[16][anon_sym_LPAREN_LPAREN] = actions(352);
	v->a[16][anon_sym_EQ] = actions(243);
	v->a[16][anon_sym_PLUS_PLUS] = actions(243);
	v->a[16][anon_sym_DASH_DASH] = actions(243);
	v->a[16][anon_sym_PLUS_EQ] = actions(243);
	v->a[16][anon_sym_DASH_EQ] = actions(243);
	v->a[16][anon_sym_STAR_EQ] = actions(243);
	v->a[16][anon_sym_SLASH_EQ] = actions(243);
	v->a[16][anon_sym_PERCENT_EQ] = actions(243);
	v->a[16][anon_sym_STAR_STAR_EQ] = actions(243);
	parse_table_83(v);
}

void	parse_table_83(t_parse_table_array *v)
{
	v->a[16][anon_sym_LT_LT_EQ] = actions(354);
	v->a[16][anon_sym_GT_GT_EQ] = actions(354);
	v->a[16][anon_sym_AMP_EQ] = actions(354);
	v->a[16][anon_sym_CARET_EQ] = actions(243);
	v->a[16][anon_sym_PIPE_EQ] = actions(354);
	v->a[16][anon_sym_PIPE_PIPE] = actions(356);
	v->a[16][anon_sym_AMP_AMP] = actions(356);
	v->a[16][anon_sym_PIPE] = actions(245);
	v->a[16][anon_sym_CARET] = actions(243);
	v->a[16][anon_sym_AMP] = actions(243);
	v->a[16][anon_sym_EQ_EQ] = actions(245);
	v->a[16][anon_sym_BANG_EQ] = actions(243);
	v->a[16][anon_sym_LT] = actions(245);
	v->a[16][anon_sym_GT] = actions(245);
	v->a[16][anon_sym_LT_EQ] = actions(354);
	v->a[16][anon_sym_GT_EQ] = actions(354);
	v->a[16][anon_sym_LT_LT] = actions(245);
	v->a[16][anon_sym_GT_GT] = actions(245);
	v->a[16][anon_sym_PLUS] = actions(243);
	v->a[16][anon_sym_DASH] = actions(243);
	parse_table_84(v);
}

void	parse_table_84(t_parse_table_array *v)
{
	v->a[16][anon_sym_STAR] = actions(243);
	v->a[16][anon_sym_SLASH] = actions(243);
	v->a[16][anon_sym_PERCENT] = actions(243);
	v->a[16][anon_sym_STAR_STAR] = actions(243);
	v->a[16][anon_sym_LPAREN] = actions(359);
	v->a[16][anon_sym_PIPE_AMP] = actions(278);
	v->a[16][anon_sym_BANG] = actions(361);
	v->a[16][anon_sym_RBRACK] = actions(354);
	v->a[16][anon_sym_EQ_TILDE] = actions(245);
	v->a[16][anon_sym_AMP_GT] = actions(241);
	v->a[16][anon_sym_AMP_GT_GT] = actions(278);
	v->a[16][anon_sym_LT_AMP] = actions(241);
	v->a[16][anon_sym_GT_AMP] = actions(241);
	v->a[16][anon_sym_GT_PIPE] = actions(278);
	v->a[16][anon_sym_LT_AMP_DASH] = actions(278);
	v->a[16][anon_sym_GT_AMP_DASH] = actions(278);
	v->a[16][anon_sym_LT_LT_DASH] = actions(278);
	v->a[16][anon_sym_LT_LT_LT] = actions(278);
	v->a[16][anon_sym_QMARK] = actions(243);
	v->a[16][anon_sym_PLUS_PLUS2] = actions(183);
	parse_table_85(v);
}

/* EOF parse_table_16.c */
