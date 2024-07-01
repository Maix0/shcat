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
	v->a[8500] = anon_sym_GT_GT;
	v->a[8501] = anon_sym_LT_AMP;
	v->a[8502] = anon_sym_GT_AMP;
	v->a[8503] = anon_sym_GT_PIPE;
	v->a[8504] = state(1173);
	v->a[8505] = 12;
	v->a[8506] = sym_redirected_statement;
	v->a[8507] = sym_for_statement;
	v->a[8508] = sym_while_statement;
	v->a[8509] = sym_if_statement;
	v->a[8510] = sym_case_statement;
	v->a[8511] = sym_function_definition;
	v->a[8512] = sym_compound_statement;
	v->a[8513] = sym_subshell;
	v->a[8514] = sym_list;
	v->a[8515] = sym_negated_command;
	v->a[8516] = sym_command;
	v->a[8517] = sym__variable_assignments;
	v->a[8518] = 32;
	v->a[8519] = actions(3);
	small_parse_table_426(v);
}

void	small_parse_table_426(t_small_parse_table_array *v)
{
	v->a[8520] = 1;
	v->a[8521] = sym_comment;
	v->a[8522] = actions(9);
	v->a[8523] = 1;
	v->a[8524] = anon_sym_for;
	v->a[8525] = actions(13);
	v->a[8526] = 1;
	v->a[8527] = anon_sym_if;
	v->a[8528] = actions(15);
	v->a[8529] = 1;
	v->a[8530] = anon_sym_case;
	v->a[8531] = actions(17);
	v->a[8532] = 1;
	v->a[8533] = anon_sym_LPAREN;
	v->a[8534] = actions(19);
	v->a[8535] = 1;
	v->a[8536] = anon_sym_LBRACE;
	v->a[8537] = actions(59);
	v->a[8538] = 1;
	v->a[8539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_427(v);
}

void	small_parse_table_427(t_small_parse_table_array *v)
{
	v->a[8540] = actions(61);
	v->a[8541] = 1;
	v->a[8542] = anon_sym_DOLLAR;
	v->a[8543] = actions(63);
	v->a[8544] = 1;
	v->a[8545] = anon_sym_DQUOTE;
	v->a[8546] = actions(67);
	v->a[8547] = 1;
	v->a[8548] = anon_sym_DOLLAR_LBRACE;
	v->a[8549] = actions(69);
	v->a[8550] = 1;
	v->a[8551] = anon_sym_DOLLAR_LPAREN;
	v->a[8552] = actions(71);
	v->a[8553] = 1;
	v->a[8554] = anon_sym_BQUOTE;
	v->a[8555] = actions(73);
	v->a[8556] = 1;
	v->a[8557] = sym_file_descriptor;
	v->a[8558] = actions(75);
	v->a[8559] = 1;
	small_parse_table_428(v);
}

void	small_parse_table_428(t_small_parse_table_array *v)
{
	v->a[8560] = sym_variable_name;
	v->a[8561] = actions(240);
	v->a[8562] = 1;
	v->a[8563] = sym_word;
	v->a[8564] = actions(242);
	v->a[8565] = 1;
	v->a[8566] = anon_sym_BANG;
	v->a[8567] = state(136);
	v->a[8568] = 1;
	v->a[8569] = aux_sym__statements_repeat1;
	v->a[8570] = state(188);
	v->a[8571] = 1;
	v->a[8572] = sym_command_name;
	v->a[8573] = state(297);
	v->a[8574] = 1;
	v->a[8575] = sym_variable_assignment;
	v->a[8576] = state(650);
	v->a[8577] = 1;
	v->a[8578] = sym_concatenation;
	v->a[8579] = state(749);
	small_parse_table_429(v);
}

void	small_parse_table_429(t_small_parse_table_array *v)
{
	v->a[8580] = 1;
	v->a[8581] = aux_sym_command_repeat1;
	v->a[8582] = state(795);
	v->a[8583] = 1;
	v->a[8584] = sym_file_redirect;
	v->a[8585] = state(1154);
	v->a[8586] = 1;
	v->a[8587] = sym_pipeline;
	v->a[8588] = state(1240);
	v->a[8589] = 1;
	v->a[8590] = aux_sym_redirected_statement_repeat2;
	v->a[8591] = state(2119);
	v->a[8592] = 1;
	v->a[8593] = sym__statement_not_pipeline;
	v->a[8594] = state(2217);
	v->a[8595] = 1;
	v->a[8596] = sym__statements;
	v->a[8597] = actions(11);
	v->a[8598] = 2;
	v->a[8599] = anon_sym_while;
	small_parse_table_430(v);
}

/* EOF small_parse_table_85.c */
