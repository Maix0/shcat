/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_68.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_340(t_parse_table_array *v)
{
	v->a[137][anon_sym_DQUOTE] = actions(319);
	v->a[137][sym_raw_string] = actions(321);
	v->a[137][sym_number] = actions(321);
	v->a[137][anon_sym_DOLLAR_LBRACE] = actions(323);
	v->a[137][anon_sym_DOLLAR_LPAREN] = actions(325);
	v->a[137][anon_sym_BQUOTE] = actions(327);
	v->a[137][sym_comment] = actions(3);
	v->a[137][sym_variable_name] = actions(341);
	v->a[138][sym_for_statement] = state(1241);
	v->a[138][sym_while_statement] = state(1241);
	v->a[138][sym_if_statement] = state(1241);
	v->a[138][sym_compound_statement] = state(1241);
	v->a[138][sym_subshell] = state(1241);
	v->a[138][sym_command] = state(1241);
	v->a[138][sym_command_name] = state(170);
	v->a[138][sym_variable_assignment] = state(880);
	v->a[138][sym__variable_assignments] = state(1241);
	v->a[138][sym_file_redirect] = state(541);
	v->a[138][sym_arithmetic_expansion] = state(276);
	v->a[138][sym_concatenation] = state(546);
	return (parse_table_341(v));
}

void	parse_table_341(t_parse_table_array *v)
{
	v->a[138][sym_string] = state(276);
	v->a[138][sym_simple_expansion] = state(276);
	v->a[138][sym_expansion] = state(276);
	v->a[138][sym_command_substitution] = state(276);
	v->a[138][aux_sym_redirected_statement_repeat2] = state(1015);
	v->a[138][aux_sym_command_repeat1] = state(408);
	v->a[138][sym_word] = actions(105);
	v->a[138][anon_sym_for] = actions(81);
	v->a[138][anon_sym_while] = actions(83);
	v->a[138][anon_sym_until] = actions(83);
	v->a[138][anon_sym_if] = actions(85);
	v->a[138][anon_sym_LPAREN] = actions(89);
	v->a[138][anon_sym_LBRACE] = actions(93);
	v->a[138][anon_sym_LT] = actions(97);
	v->a[138][anon_sym_GT] = actions(97);
	v->a[138][anon_sym_GT_GT] = actions(97);
	v->a[138][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(99);
	v->a[138][anon_sym_DOLLAR] = actions(101);
	v->a[138][anon_sym_DQUOTE] = actions(103);
	v->a[138][sym_raw_string] = actions(105);
	return (parse_table_342(v));
}

void	parse_table_342(t_parse_table_array *v)
{
	v->a[138][sym_number] = actions(105);
	v->a[138][anon_sym_DOLLAR_LBRACE] = actions(107);
	v->a[138][anon_sym_DOLLAR_LPAREN] = actions(109);
	v->a[138][anon_sym_BQUOTE] = actions(111);
	v->a[138][sym_comment] = actions(3);
	v->a[138][sym_variable_name] = actions(341);
	v->a[139][sym_for_statement] = state(1008);
	v->a[139][sym_while_statement] = state(1008);
	v->a[139][sym_if_statement] = state(1008);
	v->a[139][sym_compound_statement] = state(1008);
	v->a[139][sym_subshell] = state(1008);
	v->a[139][sym_command] = state(1008);
	v->a[139][sym_command_name] = state(179);
	v->a[139][sym_variable_assignment] = state(821);
	v->a[139][sym__variable_assignments] = state(1008);
	v->a[139][sym_file_redirect] = state(599);
	v->a[139][sym_arithmetic_expansion] = state(401);
	v->a[139][sym_concatenation] = state(555);
	v->a[139][sym_string] = state(401);
	v->a[139][sym_simple_expansion] = state(401);
	return (parse_table_343(v));
}

void	parse_table_343(t_parse_table_array *v)
{
	v->a[139][sym_expansion] = state(401);
	v->a[139][sym_command_substitution] = state(401);
	v->a[139][aux_sym_redirected_statement_repeat2] = state(1000);
	v->a[139][aux_sym_command_repeat1] = state(385);
	v->a[139][sym_word] = actions(59);
	v->a[139][anon_sym_for] = actions(9);
	v->a[139][anon_sym_while] = actions(11);
	v->a[139][anon_sym_until] = actions(11);
	v->a[139][anon_sym_if] = actions(13);
	v->a[139][anon_sym_LPAREN] = actions(17);
	v->a[139][anon_sym_LBRACE] = actions(19);
	v->a[139][anon_sym_LT] = actions(51);
	v->a[139][anon_sym_GT] = actions(51);
	v->a[139][anon_sym_GT_GT] = actions(51);
	v->a[139][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[139][anon_sym_DOLLAR] = actions(55);
	v->a[139][anon_sym_DQUOTE] = actions(57);
	v->a[139][sym_raw_string] = actions(59);
	v->a[139][sym_number] = actions(59);
	v->a[139][anon_sym_DOLLAR_LBRACE] = actions(61);
	return (parse_table_344(v));
}

void	parse_table_344(t_parse_table_array *v)
{
	v->a[139][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[139][anon_sym_BQUOTE] = actions(65);
	v->a[139][sym_comment] = actions(3);
	v->a[139][sym_variable_name] = actions(341);
	v->a[140][sym_for_statement] = state(1008);
	v->a[140][sym_while_statement] = state(1008);
	v->a[140][sym_if_statement] = state(1008);
	v->a[140][sym_compound_statement] = state(1008);
	v->a[140][sym_subshell] = state(1008);
	v->a[140][sym_command] = state(1008);
	v->a[140][sym_command_name] = state(252);
	v->a[140][sym_variable_assignment] = state(818);
	v->a[140][sym__variable_assignments] = state(1008);
	v->a[140][sym_file_redirect] = state(551);
	v->a[140][sym_arithmetic_expansion] = state(525);
	v->a[140][sym_concatenation] = state(555);
	v->a[140][sym_string] = state(525);
	v->a[140][sym_simple_expansion] = state(525);
	v->a[140][sym_expansion] = state(525);
	v->a[140][sym_command_substitution] = state(525);
	return (parse_table_345(v));
}

/* EOF parse_table_68.c */
