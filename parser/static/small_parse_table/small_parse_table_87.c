/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_87.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_435(t_small_parse_table_array *v)
{
	v->a[8700] = 1;
	v->a[8701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8702] = actions(55);
	v->a[8703] = 1;
	v->a[8704] = anon_sym_DOLLAR;
	v->a[8705] = actions(57);
	v->a[8706] = 1;
	v->a[8707] = anon_sym_DQUOTE;
	v->a[8708] = actions(61);
	v->a[8709] = 1;
	v->a[8710] = anon_sym_DOLLAR_LBRACE;
	v->a[8711] = actions(63);
	v->a[8712] = 1;
	v->a[8713] = anon_sym_DOLLAR_LPAREN;
	v->a[8714] = actions(65);
	v->a[8715] = 1;
	v->a[8716] = anon_sym_BQUOTE;
	v->a[8717] = actions(67);
	v->a[8718] = 1;
	v->a[8719] = sym_variable_name;
	small_parse_table_436(v);
}

void	small_parse_table_436(t_small_parse_table_array *v)
{
	v->a[8720] = actions(228);
	v->a[8721] = 1;
	v->a[8722] = anon_sym_done;
	v->a[8723] = state(56);
	v->a[8724] = 1;
	v->a[8725] = aux_sym__terminated_statement;
	v->a[8726] = state(271);
	v->a[8727] = 1;
	v->a[8728] = sym_command_name;
	v->a[8729] = state(298);
	v->a[8730] = 1;
	v->a[8731] = sym_variable_assignment;
	v->a[8732] = state(482);
	v->a[8733] = 1;
	v->a[8734] = aux_sym_command_repeat1;
	v->a[8735] = state(600);
	v->a[8736] = 1;
	v->a[8737] = sym_file_redirect;
	v->a[8738] = state(602);
	v->a[8739] = 1;
	small_parse_table_437(v);
}

void	small_parse_table_437(t_small_parse_table_array *v)
{
	v->a[8740] = sym_concatenation;
	v->a[8741] = state(1012);
	v->a[8742] = 1;
	v->a[8743] = sym_pipeline;
	v->a[8744] = state(1068);
	v->a[8745] = 1;
	v->a[8746] = aux_sym_redirected_statement_repeat2;
	v->a[8747] = state(1609);
	v->a[8748] = 1;
	v->a[8749] = sym__statement_not_pipeline;
	v->a[8750] = actions(11);
	v->a[8751] = 2;
	v->a[8752] = anon_sym_while;
	v->a[8753] = anon_sym_until;
	v->a[8754] = actions(59);
	v->a[8755] = 2;
	v->a[8756] = sym_raw_string;
	v->a[8757] = sym_number;
	v->a[8758] = state(425);
	v->a[8759] = 5;
	small_parse_table_438(v);
}

void	small_parse_table_438(t_small_parse_table_array *v)
{
	v->a[8760] = sym_arithmetic_expansion;
	v->a[8761] = sym_string;
	v->a[8762] = sym_simple_expansion;
	v->a[8763] = sym_expansion;
	v->a[8764] = sym_command_substitution;
	v->a[8765] = actions(51);
	v->a[8766] = 7;
	v->a[8767] = anon_sym_LT;
	v->a[8768] = anon_sym_GT;
	v->a[8769] = anon_sym_GT_GT;
	v->a[8770] = anon_sym_LT_AMP;
	v->a[8771] = anon_sym_GT_AMP;
	v->a[8772] = anon_sym_GT_PIPE;
	v->a[8773] = anon_sym_LT_GT;
	v->a[8774] = state(933);
	v->a[8775] = 12;
	v->a[8776] = sym_redirected_statement;
	v->a[8777] = sym_for_statement;
	v->a[8778] = sym_while_statement;
	v->a[8779] = sym_if_statement;
	small_parse_table_439(v);
}

void	small_parse_table_439(t_small_parse_table_array *v)
{
	v->a[8780] = sym_case_statement;
	v->a[8781] = sym_function_definition;
	v->a[8782] = sym_compound_statement;
	v->a[8783] = sym_subshell;
	v->a[8784] = sym_list;
	v->a[8785] = sym_negated_command;
	v->a[8786] = sym_command;
	v->a[8787] = sym__variable_assignments;
	v->a[8788] = 30;
	v->a[8789] = actions(3);
	v->a[8790] = 1;
	v->a[8791] = sym_comment;
	v->a[8792] = actions(9);
	v->a[8793] = 1;
	v->a[8794] = anon_sym_for;
	v->a[8795] = actions(13);
	v->a[8796] = 1;
	v->a[8797] = anon_sym_if;
	v->a[8798] = actions(15);
	v->a[8799] = 1;
	small_parse_table_440(v);
}

/* EOF small_parse_table_87.c */
