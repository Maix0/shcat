/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_24.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_120(t_parse_table_array *v)
{
	v->a[24][sym_pipeline] = state(4620);
	v->a[24][sym_list] = state(4349);
	v->a[24][sym_negated_command] = state(4349);
	v->a[24][sym_test_command] = state(4349);
	v->a[24][sym_declaration_command] = state(4349);
	v->a[24][sym_unset_command] = state(4349);
	v->a[24][sym_command] = state(4349);
	v->a[24][sym_command_name] = state(528);
	v->a[24][sym_variable_assignment] = state(807);
	v->a[24][sym_variable_assignments] = state(4349);
	v->a[24][sym_subscript] = state(6736);
	v->a[24][sym_file_redirect] = state(1635);
	v->a[24][sym_herestring_redirect] = state(1634);
	v->a[24][sym_arithmetic_expansion] = state(815);
	v->a[24][sym_brace_expression] = state(815);
	v->a[24][sym_concatenation] = state(1082);
	v->a[24][sym_string] = state(815);
	v->a[24][sym_translated_string] = state(815);
	v->a[24][sym_number] = state(815);
	v->a[24][sym_simple_expansion] = state(815);
	parse_table_121(v);
}

void	parse_table_121(t_parse_table_array *v)
{
	v->a[24][sym_expansion] = state(815);
	v->a[24][sym_command_substitution] = state(815);
	v->a[24][sym_process_substitution] = state(815);
	v->a[24][aux_sym__statements_repeat1] = state(431);
	v->a[24][aux_sym_redirected_statement_repeat2] = state(4250);
	v->a[24][aux_sym_command_repeat1] = state(925);
	v->a[24][aux_sym__literal_repeat1] = state(926);
	v->a[24][sym_word] = actions(403);
	v->a[24][anon_sym_for] = actions(405);
	v->a[24][anon_sym_select] = actions(407);
	v->a[24][anon_sym_LPAREN_LPAREN] = actions(409);
	v->a[24][anon_sym_LT] = actions(411);
	v->a[24][anon_sym_GT] = actions(411);
	v->a[24][anon_sym_GT_GT] = actions(413);
	v->a[24][anon_sym_LPAREN] = actions(415);
	v->a[24][anon_sym_while] = actions(417);
	v->a[24][anon_sym_until] = actions(417);
	v->a[24][anon_sym_if] = actions(419);
	v->a[24][anon_sym_case] = actions(421);
	v->a[24][anon_sym_esac] = actions(489);
	parse_table_122(v);
}

void	parse_table_122(t_parse_table_array *v)
{
	v->a[24][anon_sym_SEMI_SEMI] = actions(491);
	v->a[24][anon_sym_SEMI_AMP] = actions(493);
	v->a[24][anon_sym_SEMI_SEMI_AMP] = actions(495);
	v->a[24][anon_sym_function] = actions(431);
	v->a[24][anon_sym_LBRACE] = actions(433);
	v->a[24][anon_sym_BANG] = actions(435);
	v->a[24][anon_sym_LBRACK] = actions(437);
	v->a[24][anon_sym_LBRACK_LBRACK] = actions(439);
	v->a[24][anon_sym_declare] = actions(441);
	v->a[24][anon_sym_typeset] = actions(441);
	v->a[24][anon_sym_export] = actions(441);
	v->a[24][anon_sym_readonly] = actions(441);
	v->a[24][anon_sym_local] = actions(441);
	v->a[24][anon_sym_unset] = actions(443);
	v->a[24][anon_sym_unsetenv] = actions(443);
	v->a[24][anon_sym_AMP_GT] = actions(411);
	v->a[24][anon_sym_AMP_GT_GT] = actions(413);
	v->a[24][anon_sym_LT_AMP] = actions(411);
	v->a[24][anon_sym_GT_AMP] = actions(411);
	v->a[24][anon_sym_GT_PIPE] = actions(413);
	parse_table_123(v);
}

void	parse_table_123(t_parse_table_array *v)
{
	v->a[24][anon_sym_LT_AMP_DASH] = actions(445);
	v->a[24][anon_sym_GT_AMP_DASH] = actions(445);
	v->a[24][anon_sym_LT_LT_LT] = actions(447);
	v->a[24][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(449);
	v->a[24][anon_sym_DOLLAR_LBRACK] = actions(451);
	v->a[24][anon_sym_DOLLAR] = actions(453);
	v->a[24][sym__special_character] = actions(455);
	v->a[24][anon_sym_DQUOTE] = actions(457);
	v->a[24][sym_raw_string] = actions(459);
	v->a[24][sym_ansi_c_string] = actions(459);
	v->a[24][aux_sym_number_token1] = actions(461);
	v->a[24][aux_sym_number_token2] = actions(463);
	v->a[24][anon_sym_DOLLAR_LBRACE] = actions(465);
	v->a[24][anon_sym_DOLLAR_LPAREN] = actions(467);
	v->a[24][anon_sym_BQUOTE] = actions(469);
	v->a[24][anon_sym_DOLLAR_BQUOTE] = actions(471);
	v->a[24][anon_sym_LT_LPAREN] = actions(473);
	v->a[24][anon_sym_GT_LPAREN] = actions(473);
	v->a[24][sym_comment] = actions(71);
	v->a[24][sym_file_descriptor] = actions(475);
	parse_table_124(v);
}

void	parse_table_124(t_parse_table_array *v)
{
	v->a[24][sym_variable_name] = actions(477);
	v->a[24][sym_test_operator] = actions(479);
	v->a[24][sym__brace_start] = actions(481);
	v->a[25][sym__statements] = state(6492);
	v->a[25][sym__statement_not_pipeline] = state(6584);
	v->a[25][sym_redirected_statement] = state(4349);
	v->a[25][sym_for_statement] = state(4349);
	v->a[25][sym_c_style_for_statement] = state(4349);
	v->a[25][sym_while_statement] = state(4225);
	v->a[25][sym_if_statement] = state(4225);
	v->a[25][sym_case_statement] = state(4349);
	v->a[25][sym_function_definition] = state(4349);
	v->a[25][sym_compound_statement] = state(4349);
	v->a[25][sym_subshell] = state(4349);
	v->a[25][sym_pipeline] = state(4620);
	v->a[25][sym_list] = state(4349);
	v->a[25][sym_negated_command] = state(4349);
	v->a[25][sym_test_command] = state(4349);
	v->a[25][sym_declaration_command] = state(4349);
	v->a[25][sym_unset_command] = state(4349);
	parse_table_125(v);
}

/* EOF parse_table_24.c */
