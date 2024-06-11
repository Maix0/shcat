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
	v->a[8500] = 2;
	v->a[8501] = sym_raw_string;
	v->a[8502] = sym_number;
	v->a[8503] = state(394);
	v->a[8504] = 5;
	v->a[8505] = sym_arithmetic_expansion;
	v->a[8506] = sym_string;
	v->a[8507] = sym_simple_expansion;
	v->a[8508] = sym_expansion;
	v->a[8509] = sym_command_substitution;
	v->a[8510] = actions(55);
	v->a[8511] = 8;
	v->a[8512] = anon_sym_LT;
	v->a[8513] = anon_sym_GT;
	v->a[8514] = anon_sym_GT_GT;
	v->a[8515] = anon_sym_AMP_GT;
	v->a[8516] = anon_sym_AMP_GT_GT;
	v->a[8517] = anon_sym_LT_AMP;
	v->a[8518] = anon_sym_GT_AMP;
	v->a[8519] = anon_sym_GT_PIPE;
	small_parse_table_426(v);
}

void	small_parse_table_426(t_small_parse_table_array *v)
{
	v->a[8520] = state(1211);
	v->a[8521] = 12;
	v->a[8522] = sym_redirected_statement;
	v->a[8523] = sym_for_statement;
	v->a[8524] = sym_while_statement;
	v->a[8525] = sym_if_statement;
	v->a[8526] = sym_case_statement;
	v->a[8527] = sym_function_definition;
	v->a[8528] = sym_compound_statement;
	v->a[8529] = sym_subshell;
	v->a[8530] = sym_list;
	v->a[8531] = sym_negated_command;
	v->a[8532] = sym_command;
	v->a[8533] = sym_variable_assignments;
	v->a[8534] = 32;
	v->a[8535] = actions(3);
	v->a[8536] = 1;
	v->a[8537] = sym_comment;
	v->a[8538] = actions(9);
	v->a[8539] = 1;
	small_parse_table_427(v);
}

void	small_parse_table_427(t_small_parse_table_array *v)
{
	v->a[8540] = anon_sym_for;
	v->a[8541] = actions(13);
	v->a[8542] = 1;
	v->a[8543] = anon_sym_if;
	v->a[8544] = actions(15);
	v->a[8545] = 1;
	v->a[8546] = anon_sym_case;
	v->a[8547] = actions(17);
	v->a[8548] = 1;
	v->a[8549] = anon_sym_LPAREN;
	v->a[8550] = actions(19);
	v->a[8551] = 1;
	v->a[8552] = anon_sym_LBRACE;
	v->a[8553] = actions(59);
	v->a[8554] = 1;
	v->a[8555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8556] = actions(61);
	v->a[8557] = 1;
	v->a[8558] = anon_sym_DOLLAR;
	v->a[8559] = actions(63);
	small_parse_table_428(v);
}

void	small_parse_table_428(t_small_parse_table_array *v)
{
	v->a[8560] = 1;
	v->a[8561] = anon_sym_DQUOTE;
	v->a[8562] = actions(67);
	v->a[8563] = 1;
	v->a[8564] = anon_sym_DOLLAR_LBRACE;
	v->a[8565] = actions(69);
	v->a[8566] = 1;
	v->a[8567] = anon_sym_DOLLAR_LPAREN;
	v->a[8568] = actions(71);
	v->a[8569] = 1;
	v->a[8570] = anon_sym_BQUOTE;
	v->a[8571] = actions(220);
	v->a[8572] = 1;
	v->a[8573] = sym_word;
	v->a[8574] = actions(222);
	v->a[8575] = 1;
	v->a[8576] = anon_sym_BANG;
	v->a[8577] = actions(230);
	v->a[8578] = 1;
	v->a[8579] = sym_file_descriptor;
	small_parse_table_429(v);
}

void	small_parse_table_429(t_small_parse_table_array *v)
{
	v->a[8580] = actions(232);
	v->a[8581] = 1;
	v->a[8582] = sym_variable_name;
	v->a[8583] = state(126);
	v->a[8584] = 1;
	v->a[8585] = aux_sym__statements_repeat1;
	v->a[8586] = state(184);
	v->a[8587] = 1;
	v->a[8588] = sym_command_name;
	v->a[8589] = state(268);
	v->a[8590] = 1;
	v->a[8591] = sym_variable_assignment;
	v->a[8592] = state(647);
	v->a[8593] = 1;
	v->a[8594] = sym_concatenation;
	v->a[8595] = state(770);
	v->a[8596] = 1;
	v->a[8597] = sym_file_redirect;
	v->a[8598] = state(828);
	v->a[8599] = 1;
	small_parse_table_430(v);
}

/* EOF small_parse_table_85.c */
