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
	v->a[30][sym_word] = actions(79);
	v->a[30][anon_sym_for] = actions(81);
	v->a[30][anon_sym_while] = actions(83);
	v->a[30][anon_sym_until] = actions(83);
	v->a[30][anon_sym_if] = actions(85);
	v->a[30][anon_sym_case] = actions(87);
	v->a[30][anon_sym_LPAREN] = actions(89);
	v->a[30][anon_sym_LF] = actions(190);
	v->a[30][anon_sym_LBRACE] = actions(93);
	v->a[30][anon_sym_BANG] = actions(95);
	v->a[30][anon_sym_LT] = actions(97);
	v->a[30][anon_sym_GT] = actions(97);
	v->a[30][anon_sym_GT_GT] = actions(97);
	v->a[30][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[30][anon_sym_DOLLAR] = actions(101);
	v->a[30][anon_sym_DQUOTE] = actions(103);
	v->a[30][sym_raw_string] = actions(105);
	v->a[30][sym_number] = actions(105);
	v->a[30][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[30][anon_sym_DOLLAR_LPAREN] = actions(109);
	return (parse_table_81(v));
}

void	parse_table_81(t_parse_table_array *v)
{
	v->a[30][anon_sym_BQUOTE] = actions(111);
	v->a[30][sym_comment] = actions(3);
	v->a[30][sym_variable_name] = actions(113);
	v->a[31][sym__statements] = state(1555);
	v->a[31][sym__statement_not_pipeline] = state(1564);
	v->a[31][sym_redirected_statement] = state(867);
	v->a[31][sym_for_statement] = state(867);
	v->a[31][sym_while_statement] = state(867);
	v->a[31][sym_if_statement] = state(867);
	v->a[31][sym_case_statement] = state(867);
	v->a[31][sym_function_definition] = state(867);
	v->a[31][sym_compound_statement] = state(867);
	v->a[31][sym_subshell] = state(867);
	v->a[31][sym_pipeline] = state(913);
	v->a[31][sym_list] = state(867);
	v->a[31][sym_negated_command] = state(867);
	v->a[31][sym_command] = state(867);
	v->a[31][sym_command_name] = state(170);
	v->a[31][sym_variable_assignment] = state(177);
	v->a[31][sym__variable_assignments] = state(867);
	return (parse_table_82(v));
}

void	parse_table_82(t_parse_table_array *v)
{
	v->a[31][sym_file_redirect] = state(541);
	v->a[31][sym_arithmetic_expansion] = state(276);
	v->a[31][sym_concatenation] = state(546);
	v->a[31][sym_string] = state(276);
	v->a[31][sym_simple_expansion] = state(276);
	v->a[31][sym_expansion] = state(276);
	v->a[31][sym_command_substitution] = state(276);
	v->a[31][aux_sym__statements_repeat1] = state(104);
	v->a[31][aux_sym_redirected_statement_repeat2] = state(990);
	v->a[31][aux_sym__case_item_last_repeat2] = state(326);
	v->a[31][aux_sym_command_repeat1] = state(408);
	v->a[31][sym_word] = actions(79);
	v->a[31][anon_sym_for] = actions(81);
	v->a[31][anon_sym_while] = actions(83);
	v->a[31][anon_sym_until] = actions(83);
	v->a[31][anon_sym_if] = actions(85);
	v->a[31][anon_sym_case] = actions(87);
	v->a[31][anon_sym_LPAREN] = actions(89);
	v->a[31][anon_sym_LF] = actions(115);
	v->a[31][anon_sym_LBRACE] = actions(93);
	return (parse_table_83(v));
}

void	parse_table_83(t_parse_table_array *v)
{
	v->a[31][anon_sym_BANG] = actions(95);
	v->a[31][anon_sym_LT] = actions(97);
	v->a[31][anon_sym_GT] = actions(97);
	v->a[31][anon_sym_GT_GT] = actions(97);
	v->a[31][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[31][anon_sym_DOLLAR] = actions(101);
	v->a[31][anon_sym_DQUOTE] = actions(103);
	v->a[31][sym_raw_string] = actions(105);
	v->a[31][sym_number] = actions(105);
	v->a[31][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[31][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[31][anon_sym_BQUOTE] = actions(111);
	v->a[31][sym_comment] = actions(3);
	v->a[31][sym_variable_name] = actions(113);
	v->a[32][sym__statements] = state(1577);
	v->a[32][sym__statement_not_pipeline] = state(1564);
	v->a[32][sym_redirected_statement] = state(867);
	v->a[32][sym_for_statement] = state(867);
	v->a[32][sym_while_statement] = state(867);
	v->a[32][sym_if_statement] = state(867);
	return (parse_table_84(v));
}

void	parse_table_84(t_parse_table_array *v)
{
	v->a[32][sym_case_statement] = state(867);
	v->a[32][sym_function_definition] = state(867);
	v->a[32][sym_compound_statement] = state(867);
	v->a[32][sym_subshell] = state(867);
	v->a[32][sym_pipeline] = state(913);
	v->a[32][sym_list] = state(867);
	v->a[32][sym_negated_command] = state(867);
	v->a[32][sym_command] = state(867);
	v->a[32][sym_command_name] = state(170);
	v->a[32][sym_variable_assignment] = state(177);
	v->a[32][sym__variable_assignments] = state(867);
	v->a[32][sym_file_redirect] = state(541);
	v->a[32][sym_arithmetic_expansion] = state(276);
	v->a[32][sym_concatenation] = state(546);
	v->a[32][sym_string] = state(276);
	v->a[32][sym_simple_expansion] = state(276);
	v->a[32][sym_expansion] = state(276);
	v->a[32][sym_command_substitution] = state(276);
	v->a[32][aux_sym__statements_repeat1] = state(104);
	v->a[32][aux_sym_redirected_statement_repeat2] = state(990);
	return (parse_table_85(v));
}

/* EOF parse_table_16.c */
