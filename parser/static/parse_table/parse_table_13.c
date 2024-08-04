/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_13.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_65(t_parse_table_array *v)
{
	v->a[24][anon_sym_LPAREN] = actions(17);
	v->a[24][anon_sym_LF] = actions(115);
	v->a[24][anon_sym_LBRACE] = actions(19);
	v->a[24][anon_sym_BANG] = actions(49);
	v->a[24][anon_sym_LT] = actions(51);
	v->a[24][anon_sym_GT] = actions(51);
	v->a[24][anon_sym_GT_GT] = actions(51);
	v->a[24][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[24][anon_sym_DOLLAR] = actions(55);
	v->a[24][anon_sym_DQUOTE] = actions(57);
	v->a[24][sym_raw_string] = actions(59);
	v->a[24][sym_number] = actions(59);
	v->a[24][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[24][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[24][anon_sym_BQUOTE] = actions(65);
	v->a[24][sym_comment] = actions(3);
	v->a[24][sym_variable_name] = actions(67);
	v->a[25][sym__statements] = state(1572);
	v->a[25][sym__statement_not_pipeline] = state(1564);
	v->a[25][sym_redirected_statement] = state(867);
	return (parse_table_66(v));
}

void	parse_table_66(t_parse_table_array *v)
{
	v->a[25][sym_for_statement] = state(867);
	v->a[25][sym_while_statement] = state(867);
	v->a[25][sym_if_statement] = state(867);
	v->a[25][sym_case_statement] = state(867);
	v->a[25][sym_function_definition] = state(867);
	v->a[25][sym_compound_statement] = state(867);
	v->a[25][sym_subshell] = state(867);
	v->a[25][sym_pipeline] = state(913);
	v->a[25][sym_list] = state(867);
	v->a[25][sym_negated_command] = state(867);
	v->a[25][sym_command] = state(867);
	v->a[25][sym_command_name] = state(170);
	v->a[25][sym_variable_assignment] = state(177);
	v->a[25][sym__variable_assignments] = state(867);
	v->a[25][sym_file_redirect] = state(541);
	v->a[25][sym_arithmetic_expansion] = state(276);
	v->a[25][sym_concatenation] = state(546);
	v->a[25][sym_string] = state(276);
	v->a[25][sym_simple_expansion] = state(276);
	v->a[25][sym_expansion] = state(276);
	return (parse_table_67(v));
}

void	parse_table_67(t_parse_table_array *v)
{
	v->a[25][sym_command_substitution] = state(276);
	v->a[25][aux_sym__statements_repeat1] = state(104);
	v->a[25][aux_sym_redirected_statement_repeat2] = state(990);
	v->a[25][aux_sym__case_item_last_repeat2] = state(26);
	v->a[25][aux_sym_command_repeat1] = state(408);
	v->a[25][sym_word] = actions(79);
	v->a[25][anon_sym_for] = actions(81);
	v->a[25][anon_sym_while] = actions(83);
	v->a[25][anon_sym_until] = actions(83);
	v->a[25][anon_sym_if] = actions(85);
	v->a[25][anon_sym_case] = actions(87);
	v->a[25][anon_sym_LPAREN] = actions(89);
	v->a[25][anon_sym_LF] = actions(182);
	v->a[25][anon_sym_LBRACE] = actions(93);
	v->a[25][anon_sym_BANG] = actions(95);
	v->a[25][anon_sym_LT] = actions(97);
	v->a[25][anon_sym_GT] = actions(97);
	v->a[25][anon_sym_GT_GT] = actions(97);
	v->a[25][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[25][anon_sym_DOLLAR] = actions(101);
	return (parse_table_68(v));
}

void	parse_table_68(t_parse_table_array *v)
{
	v->a[25][anon_sym_DQUOTE] = actions(103);
	v->a[25][sym_raw_string] = actions(105);
	v->a[25][sym_number] = actions(105);
	v->a[25][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[25][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[25][anon_sym_BQUOTE] = actions(111);
	v->a[25][sym_comment] = actions(3);
	v->a[25][sym_variable_name] = actions(113);
	v->a[26][sym__statements] = state(1575);
	v->a[26][sym__statement_not_pipeline] = state(1564);
	v->a[26][sym_redirected_statement] = state(867);
	v->a[26][sym_for_statement] = state(867);
	v->a[26][sym_while_statement] = state(867);
	v->a[26][sym_if_statement] = state(867);
	v->a[26][sym_case_statement] = state(867);
	v->a[26][sym_function_definition] = state(867);
	v->a[26][sym_compound_statement] = state(867);
	v->a[26][sym_subshell] = state(867);
	v->a[26][sym_pipeline] = state(913);
	v->a[26][sym_list] = state(867);
	return (parse_table_69(v));
}

void	parse_table_69(t_parse_table_array *v)
{
	v->a[26][sym_negated_command] = state(867);
	v->a[26][sym_command] = state(867);
	v->a[26][sym_command_name] = state(170);
	v->a[26][sym_variable_assignment] = state(177);
	v->a[26][sym__variable_assignments] = state(867);
	v->a[26][sym_file_redirect] = state(541);
	v->a[26][sym_arithmetic_expansion] = state(276);
	v->a[26][sym_concatenation] = state(546);
	v->a[26][sym_string] = state(276);
	v->a[26][sym_simple_expansion] = state(276);
	v->a[26][sym_expansion] = state(276);
	v->a[26][sym_command_substitution] = state(276);
	v->a[26][aux_sym__statements_repeat1] = state(104);
	v->a[26][aux_sym_redirected_statement_repeat2] = state(990);
	v->a[26][aux_sym__case_item_last_repeat2] = state(326);
	v->a[26][aux_sym_command_repeat1] = state(408);
	v->a[26][sym_word] = actions(79);
	v->a[26][anon_sym_for] = actions(81);
	v->a[26][anon_sym_while] = actions(83);
	v->a[26][anon_sym_until] = actions(83);
	return (parse_table_70(v));
}

/* EOF parse_table_13.c */
