/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_407.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_2035(t_parse_table_array *v)
{
	v->a[449][sym_negated_command] = state(4722);
	v->a[449][sym_test_command] = state(4722);
	v->a[449][sym_declaration_command] = state(4722);
	v->a[449][sym_unset_command] = state(4722);
	v->a[449][sym_command] = state(4722);
	v->a[449][sym_command_name] = state(554);
	v->a[449][sym_variable_assignment] = state(1059);
	v->a[449][sym_variable_assignments] = state(4722);
	v->a[449][sym_subscript] = state(6790);
	v->a[449][sym_file_redirect] = state(2273);
	v->a[449][sym_herestring_redirect] = state(2272);
	v->a[449][sym_arithmetic_expansion] = state(1078);
	v->a[449][sym_brace_expression] = state(1078);
	v->a[449][sym_concatenation] = state(1376);
	v->a[449][sym_string] = state(1078);
	v->a[449][sym_translated_string] = state(1078);
	v->a[449][sym_number] = state(1078);
	v->a[449][sym_simple_expansion] = state(1078);
	v->a[449][sym_expansion] = state(1078);
	v->a[449][sym_command_substitution] = state(1078);
	parse_table_2036(v);
}

void	parse_table_2036(t_parse_table_array *v)
{
	v->a[449][sym_process_substitution] = state(1078);
	v->a[449][aux_sym_redirected_statement_repeat2] = state(4573);
	v->a[449][aux_sym_command_repeat1] = state(958);
	v->a[449][aux_sym__literal_repeat1] = state(1267);
	v->a[449][sym_word] = actions(799);
	v->a[449][anon_sym_for] = actions(9);
	v->a[449][anon_sym_select] = actions(11);
	v->a[449][anon_sym_LPAREN_LPAREN] = actions(288);
	v->a[449][anon_sym_LT] = actions(290);
	v->a[449][anon_sym_GT] = actions(290);
	v->a[449][anon_sym_GT_GT] = actions(292);
	v->a[449][anon_sym_LPAREN] = actions(19);
	v->a[449][anon_sym_while] = actions(21);
	v->a[449][anon_sym_until] = actions(21);
	v->a[449][anon_sym_if] = actions(23);
	v->a[449][anon_sym_case] = actions(25);
	v->a[449][anon_sym_function] = actions(801);
	v->a[449][anon_sym_LBRACE] = actions(29);
	v->a[449][anon_sym_BANG] = actions(803);
	v->a[449][anon_sym_LBRACK] = actions(33);
	parse_table_2037(v);
}

void	parse_table_2037(t_parse_table_array *v)
{
	v->a[449][anon_sym_LBRACK_LBRACK] = actions(35);
	v->a[449][anon_sym_declare] = actions(805);
	v->a[449][anon_sym_typeset] = actions(805);
	v->a[449][anon_sym_export] = actions(805);
	v->a[449][anon_sym_readonly] = actions(805);
	v->a[449][anon_sym_local] = actions(805);
	v->a[449][anon_sym_unset] = actions(807);
	v->a[449][anon_sym_unsetenv] = actions(807);
	v->a[449][anon_sym_AMP_GT] = actions(290);
	v->a[449][anon_sym_AMP_GT_GT] = actions(292);
	v->a[449][anon_sym_LT_AMP] = actions(290);
	v->a[449][anon_sym_GT_AMP] = actions(290);
	v->a[449][anon_sym_GT_PIPE] = actions(292);
	v->a[449][anon_sym_LT_AMP_DASH] = actions(308);
	v->a[449][anon_sym_GT_AMP_DASH] = actions(308);
	v->a[449][anon_sym_LT_LT_LT] = actions(310);
	v->a[449][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(312);
	v->a[449][anon_sym_DOLLAR_LBRACK] = actions(314);
	v->a[449][anon_sym_DOLLAR] = actions(316);
	v->a[449][sym__special_character] = actions(318);
	parse_table_2038(v);
}

void	parse_table_2038(t_parse_table_array *v)
{
	v->a[449][anon_sym_DQUOTE] = actions(320);
	v->a[449][sym_raw_string] = actions(322);
	v->a[449][sym_ansi_c_string] = actions(322);
	v->a[449][aux_sym_number_token1] = actions(324);
	v->a[449][aux_sym_number_token2] = actions(326);
	v->a[449][anon_sym_DOLLAR_LBRACE] = actions(328);
	v->a[449][anon_sym_DOLLAR_LPAREN] = actions(330);
	v->a[449][anon_sym_BQUOTE] = actions(332);
	v->a[449][anon_sym_DOLLAR_BQUOTE] = actions(334);
	v->a[449][anon_sym_LT_LPAREN] = actions(336);
	v->a[449][anon_sym_GT_LPAREN] = actions(336);
	v->a[449][sym_comment] = actions(71);
	v->a[449][sym_file_descriptor] = actions(338);
	v->a[449][sym_variable_name] = actions(340);
	v->a[449][sym_test_operator] = actions(342);
	v->a[449][sym__brace_start] = actions(344);
	v->a[450][sym__statement_not_pipeline] = state(6584);
	v->a[450][sym_redirected_statement] = state(4342);
	v->a[450][sym_for_statement] = state(4342);
	v->a[450][sym_c_style_for_statement] = state(4342);
	parse_table_2039(v);
}

void	parse_table_2039(t_parse_table_array *v)
{
	v->a[450][sym_while_statement] = state(4224);
	v->a[450][sym_if_statement] = state(4224);
	v->a[450][sym_case_statement] = state(4342);
	v->a[450][sym_function_definition] = state(4342);
	v->a[450][sym_compound_statement] = state(4342);
	v->a[450][sym_subshell] = state(4342);
	v->a[450][sym_pipeline] = state(4339);
	v->a[450][sym_list] = state(4342);
	v->a[450][sym_negated_command] = state(4342);
	v->a[450][sym_test_command] = state(4342);
	v->a[450][sym_declaration_command] = state(4342);
	v->a[450][sym_unset_command] = state(4342);
	v->a[450][sym_command] = state(4342);
	v->a[450][sym_command_name] = state(528);
	v->a[450][sym_variable_assignment] = state(809);
	v->a[450][sym_variable_assignments] = state(4342);
	v->a[450][sym_subscript] = state(6736);
	v->a[450][sym_file_redirect] = state(1635);
	v->a[450][sym_herestring_redirect] = state(1634);
	v->a[450][sym_arithmetic_expansion] = state(815);
	parse_table_2040(v);
}

/* EOF parse_table_407.c */
