/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_52.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_260(t_parse_table_array *v)
{
	v->a[103][anon_sym_GT] = actions(149);
	v->a[103][anon_sym_GT_GT] = actions(149);
	v->a[103][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(152);
	v->a[103][anon_sym_DOLLAR] = actions(155);
	v->a[103][anon_sym_DQUOTE] = actions(158);
	v->a[103][sym_raw_string] = actions(161);
	v->a[103][sym_number] = actions(161);
	v->a[103][anon_sym_DOLLAR_LBRACE] = actions(164);
	v->a[103][anon_sym_DOLLAR_LPAREN] = actions(167);
	v->a[103][anon_sym_BQUOTE] = actions(170);
	v->a[103][sym_comment] = actions(3);
	v->a[103][sym_variable_name] = actions(173);
	v->a[104][sym__statement_not_pipeline] = state(1564);
	v->a[104][sym_redirected_statement] = state(819);
	v->a[104][sym_for_statement] = state(826);
	v->a[104][sym_while_statement] = state(828);
	v->a[104][sym_if_statement] = state(889);
	v->a[104][sym_case_statement] = state(837);
	v->a[104][sym_function_definition] = state(838);
	v->a[104][sym_compound_statement] = state(843);
	return (parse_table_261(v));
}

void	parse_table_261(t_parse_table_array *v)
{
	v->a[104][sym_subshell] = state(854);
	v->a[104][sym_pipeline] = state(959);
	v->a[104][sym_list] = state(856);
	v->a[104][sym_negated_command] = state(860);
	v->a[104][sym_command] = state(862);
	v->a[104][sym_command_name] = state(170);
	v->a[104][sym_variable_assignment] = state(191);
	v->a[104][sym__variable_assignments] = state(863);
	v->a[104][sym_file_redirect] = state(541);
	v->a[104][sym_arithmetic_expansion] = state(276);
	v->a[104][sym_concatenation] = state(546);
	v->a[104][sym_string] = state(276);
	v->a[104][sym_simple_expansion] = state(276);
	v->a[104][sym_expansion] = state(276);
	v->a[104][sym_command_substitution] = state(276);
	v->a[104][aux_sym__statements_repeat1] = state(109);
	v->a[104][aux_sym_redirected_statement_repeat2] = state(990);
	v->a[104][aux_sym_command_repeat1] = state(408);
	v->a[104][sym_word] = actions(79);
	v->a[104][anon_sym_for] = actions(81);
	return (parse_table_262(v));
}

void	parse_table_262(t_parse_table_array *v)
{
	v->a[104][anon_sym_while] = actions(83);
	v->a[104][anon_sym_until] = actions(83);
	v->a[104][anon_sym_if] = actions(85);
	v->a[104][anon_sym_case] = actions(87);
	v->a[104][anon_sym_LPAREN] = actions(89);
	v->a[104][anon_sym_LBRACE] = actions(93);
	v->a[104][anon_sym_BANG] = actions(95);
	v->a[104][anon_sym_LT] = actions(97);
	v->a[104][anon_sym_GT] = actions(97);
	v->a[104][anon_sym_GT_GT] = actions(97);
	v->a[104][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[104][anon_sym_DOLLAR] = actions(101);
	v->a[104][anon_sym_DQUOTE] = actions(103);
	v->a[104][sym_raw_string] = actions(105);
	v->a[104][sym_number] = actions(105);
	v->a[104][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[104][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[104][anon_sym_BQUOTE] = actions(111);
	v->a[104][sym_comment] = actions(3);
	v->a[104][sym_variable_name] = actions(113);
	return (parse_table_263(v));
}

void	parse_table_263(t_parse_table_array *v)
{
	v->a[105][aux_sym__terminated_statement] = state(37);
	v->a[105][sym__statement_not_pipeline] = state(1561);
	v->a[105][sym_redirected_statement] = state(958);
	v->a[105][sym_for_statement] = state(958);
	v->a[105][sym_while_statement] = state(958);
	v->a[105][sym_if_statement] = state(958);
	v->a[105][sym_case_statement] = state(958);
	v->a[105][sym_function_definition] = state(958);
	v->a[105][sym_compound_statement] = state(958);
	v->a[105][sym_subshell] = state(958);
	v->a[105][sym_pipeline] = state(1001);
	v->a[105][sym_list] = state(958);
	v->a[105][sym_negated_command] = state(958);
	v->a[105][sym_command] = state(958);
	v->a[105][sym_command_name] = state(185);
	v->a[105][sym_variable_assignment] = state(238);
	v->a[105][sym__variable_assignments] = state(958);
	v->a[105][sym_file_redirect] = state(551);
	v->a[105][sym_arithmetic_expansion] = state(401);
	v->a[105][sym_concatenation] = state(555);
	return (parse_table_264(v));
}

void	parse_table_264(t_parse_table_array *v)
{
	v->a[105][sym_string] = state(401);
	v->a[105][sym_simple_expansion] = state(401);
	v->a[105][sym_expansion] = state(401);
	v->a[105][sym_command_substitution] = state(401);
	v->a[105][aux_sym_redirected_statement_repeat2] = state(1126);
	v->a[105][aux_sym_command_repeat1] = state(411);
	v->a[105][sym_word] = actions(41);
	v->a[105][anon_sym_for] = actions(9);
	v->a[105][anon_sym_while] = actions(11);
	v->a[105][anon_sym_until] = actions(11);
	v->a[105][anon_sym_if] = actions(13);
	v->a[105][anon_sym_case] = actions(15);
	v->a[105][anon_sym_LPAREN] = actions(17);
	v->a[105][anon_sym_LBRACE] = actions(19);
	v->a[105][anon_sym_BANG] = actions(49);
	v->a[105][anon_sym_LT] = actions(51);
	v->a[105][anon_sym_GT] = actions(51);
	v->a[105][anon_sym_GT_GT] = actions(51);
	v->a[105][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[105][anon_sym_DOLLAR] = actions(55);
	return (parse_table_265(v));
}

/* EOF parse_table_52.c */
