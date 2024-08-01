/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_85.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_425(t_small_parse_table_array *v)
{
	v->a[8500] = anon_sym_case;
	v->a[8501] = actions(17);
	v->a[8502] = 1;
	v->a[8503] = anon_sym_LPAREN;
	v->a[8504] = actions(19);
	v->a[8505] = 1;
	v->a[8506] = anon_sym_LBRACE;
	v->a[8507] = actions(53);
	v->a[8508] = 1;
	v->a[8509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8510] = actions(55);
	v->a[8511] = 1;
	v->a[8512] = anon_sym_DOLLAR;
	v->a[8513] = actions(57);
	v->a[8514] = 1;
	v->a[8515] = anon_sym_DQUOTE;
	v->a[8516] = actions(61);
	v->a[8517] = 1;
	v->a[8518] = anon_sym_DOLLAR_LBRACE;
	v->a[8519] = actions(63);
	small_parse_table_426(v);
}

void	small_parse_table_426(t_small_parse_table_array *v)
{
	v->a[8520] = 1;
	v->a[8521] = anon_sym_DOLLAR_LPAREN;
	v->a[8522] = actions(65);
	v->a[8523] = 1;
	v->a[8524] = anon_sym_BQUOTE;
	v->a[8525] = actions(67);
	v->a[8526] = 1;
	v->a[8527] = sym_variable_name;
	v->a[8528] = actions(204);
	v->a[8529] = 1;
	v->a[8530] = sym_word;
	v->a[8531] = actions(206);
	v->a[8532] = 1;
	v->a[8533] = anon_sym_BANG;
	v->a[8534] = state(116);
	v->a[8535] = 1;
	v->a[8536] = aux_sym__statements_repeat1;
	v->a[8537] = state(179);
	v->a[8538] = 1;
	v->a[8539] = sym_command_name;
	small_parse_table_427(v);
}

void	small_parse_table_427(t_small_parse_table_array *v)
{
	v->a[8540] = state(208);
	v->a[8541] = 1;
	v->a[8542] = sym_variable_assignment;
	v->a[8543] = state(385);
	v->a[8544] = 1;
	v->a[8545] = aux_sym_command_repeat1;
	v->a[8546] = state(555);
	v->a[8547] = 1;
	v->a[8548] = sym_concatenation;
	v->a[8549] = state(599);
	v->a[8550] = 1;
	v->a[8551] = sym_file_redirect;
	v->a[8552] = state(969);
	v->a[8553] = 1;
	v->a[8554] = sym_pipeline;
	v->a[8555] = state(1006);
	v->a[8556] = 1;
	v->a[8557] = aux_sym_redirected_statement_repeat2;
	v->a[8558] = state(1560);
	v->a[8559] = 1;
	small_parse_table_428(v);
}

void	small_parse_table_428(t_small_parse_table_array *v)
{
	v->a[8560] = sym__statement_not_pipeline;
	v->a[8561] = state(1739);
	v->a[8562] = 1;
	v->a[8563] = sym__statements;
	v->a[8564] = actions(11);
	v->a[8565] = 2;
	v->a[8566] = anon_sym_while;
	v->a[8567] = anon_sym_until;
	v->a[8568] = actions(59);
	v->a[8569] = 2;
	v->a[8570] = sym_raw_string;
	v->a[8571] = sym_number;
	v->a[8572] = actions(51);
	v->a[8573] = 3;
	v->a[8574] = anon_sym_LT;
	v->a[8575] = anon_sym_GT;
	v->a[8576] = anon_sym_GT_GT;
	v->a[8577] = state(401);
	v->a[8578] = 5;
	v->a[8579] = sym_arithmetic_expansion;
	small_parse_table_429(v);
}

void	small_parse_table_429(t_small_parse_table_array *v)
{
	v->a[8580] = sym_string;
	v->a[8581] = sym_simple_expansion;
	v->a[8582] = sym_expansion;
	v->a[8583] = sym_command_substitution;
	v->a[8584] = state(820);
	v->a[8585] = 12;
	v->a[8586] = sym_redirected_statement;
	v->a[8587] = sym_for_statement;
	v->a[8588] = sym_while_statement;
	v->a[8589] = sym_if_statement;
	v->a[8590] = sym_case_statement;
	v->a[8591] = sym_function_definition;
	v->a[8592] = sym_compound_statement;
	v->a[8593] = sym_subshell;
	v->a[8594] = sym_list;
	v->a[8595] = sym_negated_command;
	v->a[8596] = sym_command;
	v->a[8597] = sym__variable_assignments;
	v->a[8598] = 30;
	v->a[8599] = actions(3);
	small_parse_table_430(v);
}

/* EOF small_parse_table_85.c */
