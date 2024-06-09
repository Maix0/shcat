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
	v->a[8500] = state(614);
	v->a[8501] = 1;
	v->a[8502] = aux_sym_command_repeat1;
	v->a[8503] = state(769);
	v->a[8504] = 1;
	v->a[8505] = sym_file_redirect;
	v->a[8506] = state(1133);
	v->a[8507] = 1;
	v->a[8508] = aux_sym_redirected_statement_repeat2;
	v->a[8509] = state(1142);
	v->a[8510] = 1;
	v->a[8511] = sym_pipeline;
	v->a[8512] = state(2041);
	v->a[8513] = 1;
	v->a[8514] = sym__statement_not_pipeline;
	v->a[8515] = state(2113);
	v->a[8516] = 1;
	v->a[8517] = sym__statements;
	v->a[8518] = actions(11);
	v->a[8519] = 2;
	small_parse_table_426(v);
}

void	small_parse_table_426(t_small_parse_table_array *v)
{
	v->a[8520] = anon_sym_while;
	v->a[8521] = anon_sym_until;
	v->a[8522] = actions(61);
	v->a[8523] = 2;
	v->a[8524] = anon_sym_LT_AMP_DASH;
	v->a[8525] = anon_sym_GT_AMP_DASH;
	v->a[8526] = state(397);
	v->a[8527] = 6;
	v->a[8528] = sym_arithmetic_expansion;
	v->a[8529] = sym_string;
	v->a[8530] = sym_number;
	v->a[8531] = sym_simple_expansion;
	v->a[8532] = sym_expansion;
	v->a[8533] = sym_command_substitution;
	v->a[8534] = actions(59);
	v->a[8535] = 8;
	v->a[8536] = anon_sym_LT;
	v->a[8537] = anon_sym_GT;
	v->a[8538] = anon_sym_GT_GT;
	v->a[8539] = anon_sym_AMP_GT;
	small_parse_table_427(v);
}

void	small_parse_table_427(t_small_parse_table_array *v)
{
	v->a[8540] = anon_sym_AMP_GT_GT;
	v->a[8541] = anon_sym_LT_AMP;
	v->a[8542] = anon_sym_GT_AMP;
	v->a[8543] = anon_sym_GT_PIPE;
	v->a[8544] = state(1071);
	v->a[8545] = 12;
	v->a[8546] = sym_redirected_statement;
	v->a[8547] = sym_for_statement;
	v->a[8548] = sym_while_statement;
	v->a[8549] = sym_if_statement;
	v->a[8550] = sym_case_statement;
	v->a[8551] = sym_function_definition;
	v->a[8552] = sym_compound_statement;
	v->a[8553] = sym_subshell;
	v->a[8554] = sym_list;
	v->a[8555] = sym_negated_command;
	v->a[8556] = sym_command;
	v->a[8557] = sym_variable_assignments;
	v->a[8558] = 34;
	v->a[8559] = actions(3);
	small_parse_table_428(v);
}

void	small_parse_table_428(t_small_parse_table_array *v)
{
	v->a[8560] = 1;
	v->a[8561] = sym_comment;
	v->a[8562] = actions(9);
	v->a[8563] = 1;
	v->a[8564] = anon_sym_for;
	v->a[8565] = actions(13);
	v->a[8566] = 1;
	v->a[8567] = anon_sym_if;
	v->a[8568] = actions(15);
	v->a[8569] = 1;
	v->a[8570] = anon_sym_case;
	v->a[8571] = actions(17);
	v->a[8572] = 1;
	v->a[8573] = anon_sym_LPAREN;
	v->a[8574] = actions(19);
	v->a[8575] = 1;
	v->a[8576] = anon_sym_LBRACE;
	v->a[8577] = actions(63);
	v->a[8578] = 1;
	v->a[8579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_429(v);
}

void	small_parse_table_429(t_small_parse_table_array *v)
{
	v->a[8580] = actions(65);
	v->a[8581] = 1;
	v->a[8582] = anon_sym_DOLLAR;
	v->a[8583] = actions(67);
	v->a[8584] = 1;
	v->a[8585] = anon_sym_DQUOTE;
	v->a[8586] = actions(69);
	v->a[8587] = 1;
	v->a[8588] = sym_raw_string;
	v->a[8589] = actions(71);
	v->a[8590] = 1;
	v->a[8591] = aux_sym_number_token1;
	v->a[8592] = actions(73);
	v->a[8593] = 1;
	v->a[8594] = aux_sym_number_token2;
	v->a[8595] = actions(75);
	v->a[8596] = 1;
	v->a[8597] = anon_sym_DOLLAR_LBRACE;
	v->a[8598] = actions(77);
	v->a[8599] = 1;
	small_parse_table_430(v);
}

/* EOF small_parse_table_85.c */
