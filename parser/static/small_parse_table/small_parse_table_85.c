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
	v->a[8500] = aux_sym_redirected_statement_repeat2;
	v->a[8501] = state(1914);
	v->a[8502] = 1;
	v->a[8503] = sym__statement_not_pipeline;
	v->a[8504] = state(2105);
	v->a[8505] = 1;
	v->a[8506] = sym__statements;
	v->a[8507] = actions(11);
	v->a[8508] = 2;
	v->a[8509] = anon_sym_while;
	v->a[8510] = anon_sym_until;
	v->a[8511] = actions(61);
	v->a[8512] = 2;
	v->a[8513] = sym_raw_string;
	v->a[8514] = sym_number;
	v->a[8515] = state(433);
	v->a[8516] = 5;
	v->a[8517] = sym_arithmetic_expansion;
	v->a[8518] = sym_string;
	v->a[8519] = sym_simple_expansion;
	small_parse_table_426(v);
}

void	small_parse_table_426(t_small_parse_table_array *v)
{
	v->a[8520] = sym_expansion;
	v->a[8521] = sym_command_substitution;
	v->a[8522] = actions(53);
	v->a[8523] = 7;
	v->a[8524] = anon_sym_LT;
	v->a[8525] = anon_sym_GT;
	v->a[8526] = anon_sym_GT_GT;
	v->a[8527] = anon_sym_LT_AMP;
	v->a[8528] = anon_sym_GT_AMP;
	v->a[8529] = anon_sym_GT_PIPE;
	v->a[8530] = anon_sym_LT_GT;
	v->a[8531] = state(935);
	v->a[8532] = 12;
	v->a[8533] = sym_redirected_statement;
	v->a[8534] = sym_for_statement;
	v->a[8535] = sym_while_statement;
	v->a[8536] = sym_if_statement;
	v->a[8537] = sym_case_statement;
	v->a[8538] = sym_function_definition;
	v->a[8539] = sym_compound_statement;
	small_parse_table_427(v);
}

void	small_parse_table_427(t_small_parse_table_array *v)
{
	v->a[8540] = sym_subshell;
	v->a[8541] = sym_list;
	v->a[8542] = sym_negated_command;
	v->a[8543] = sym_command;
	v->a[8544] = sym__variable_assignments;
	v->a[8545] = 31;
	v->a[8546] = actions(3);
	v->a[8547] = 1;
	v->a[8548] = sym_comment;
	v->a[8549] = actions(9);
	v->a[8550] = 1;
	v->a[8551] = anon_sym_for;
	v->a[8552] = actions(13);
	v->a[8553] = 1;
	v->a[8554] = anon_sym_if;
	v->a[8555] = actions(15);
	v->a[8556] = 1;
	v->a[8557] = anon_sym_case;
	v->a[8558] = actions(17);
	v->a[8559] = 1;
	small_parse_table_428(v);
}

void	small_parse_table_428(t_small_parse_table_array *v)
{
	v->a[8560] = anon_sym_LPAREN;
	v->a[8561] = actions(19);
	v->a[8562] = 1;
	v->a[8563] = anon_sym_LBRACE;
	v->a[8564] = actions(55);
	v->a[8565] = 1;
	v->a[8566] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8567] = actions(57);
	v->a[8568] = 1;
	v->a[8569] = anon_sym_DOLLAR;
	v->a[8570] = actions(59);
	v->a[8571] = 1;
	v->a[8572] = anon_sym_DQUOTE;
	v->a[8573] = actions(63);
	v->a[8574] = 1;
	v->a[8575] = anon_sym_DOLLAR_LBRACE;
	v->a[8576] = actions(65);
	v->a[8577] = 1;
	v->a[8578] = anon_sym_DOLLAR_LPAREN;
	v->a[8579] = actions(67);
	small_parse_table_429(v);
}

void	small_parse_table_429(t_small_parse_table_array *v)
{
	v->a[8580] = 1;
	v->a[8581] = anon_sym_BQUOTE;
	v->a[8582] = actions(69);
	v->a[8583] = 1;
	v->a[8584] = sym_file_descriptor;
	v->a[8585] = actions(71);
	v->a[8586] = 1;
	v->a[8587] = sym_variable_name;
	v->a[8588] = actions(223);
	v->a[8589] = 1;
	v->a[8590] = sym_word;
	v->a[8591] = actions(225);
	v->a[8592] = 1;
	v->a[8593] = anon_sym_BANG;
	v->a[8594] = state(131);
	v->a[8595] = 1;
	v->a[8596] = aux_sym__statements_repeat1;
	v->a[8597] = state(183);
	v->a[8598] = 1;
	v->a[8599] = sym_command_name;
	small_parse_table_430(v);
}

/* EOF small_parse_table_85.c */
