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
	v->a[8701] = sym_file_descriptor;
	v->a[8702] = actions(71);
	v->a[8703] = 1;
	v->a[8704] = sym_variable_name;
	v->a[8705] = actions(223);
	v->a[8706] = 1;
	v->a[8707] = sym_word;
	v->a[8708] = actions(225);
	v->a[8709] = 1;
	v->a[8710] = anon_sym_BANG;
	v->a[8711] = state(131);
	v->a[8712] = 1;
	v->a[8713] = aux_sym__statements_repeat1;
	v->a[8714] = state(183);
	v->a[8715] = 1;
	v->a[8716] = sym_command_name;
	v->a[8717] = state(290);
	v->a[8718] = 1;
	v->a[8719] = sym_variable_assignment;
	small_parse_table_436(v);
}

void	small_parse_table_436(t_small_parse_table_array *v)
{
	v->a[8720] = state(584);
	v->a[8721] = 1;
	v->a[8722] = sym_concatenation;
	v->a[8723] = state(674);
	v->a[8724] = 1;
	v->a[8725] = aux_sym_command_repeat1;
	v->a[8726] = state(723);
	v->a[8727] = 1;
	v->a[8728] = sym_file_redirect;
	v->a[8729] = state(1087);
	v->a[8730] = 1;
	v->a[8731] = sym_pipeline;
	v->a[8732] = state(1099);
	v->a[8733] = 1;
	v->a[8734] = aux_sym_redirected_statement_repeat2;
	v->a[8735] = state(1914);
	v->a[8736] = 1;
	v->a[8737] = sym__statement_not_pipeline;
	v->a[8738] = state(2128);
	v->a[8739] = 1;
	small_parse_table_437(v);
}

void	small_parse_table_437(t_small_parse_table_array *v)
{
	v->a[8740] = sym__statements;
	v->a[8741] = actions(11);
	v->a[8742] = 2;
	v->a[8743] = anon_sym_while;
	v->a[8744] = anon_sym_until;
	v->a[8745] = actions(61);
	v->a[8746] = 2;
	v->a[8747] = sym_raw_string;
	v->a[8748] = sym_number;
	v->a[8749] = state(433);
	v->a[8750] = 5;
	v->a[8751] = sym_arithmetic_expansion;
	v->a[8752] = sym_string;
	v->a[8753] = sym_simple_expansion;
	v->a[8754] = sym_expansion;
	v->a[8755] = sym_command_substitution;
	v->a[8756] = actions(53);
	v->a[8757] = 7;
	v->a[8758] = anon_sym_LT;
	v->a[8759] = anon_sym_GT;
	small_parse_table_438(v);
}

void	small_parse_table_438(t_small_parse_table_array *v)
{
	v->a[8760] = anon_sym_GT_GT;
	v->a[8761] = anon_sym_LT_AMP;
	v->a[8762] = anon_sym_GT_AMP;
	v->a[8763] = anon_sym_GT_PIPE;
	v->a[8764] = anon_sym_LT_GT;
	v->a[8765] = state(935);
	v->a[8766] = 12;
	v->a[8767] = sym_redirected_statement;
	v->a[8768] = sym_for_statement;
	v->a[8769] = sym_while_statement;
	v->a[8770] = sym_if_statement;
	v->a[8771] = sym_case_statement;
	v->a[8772] = sym_function_definition;
	v->a[8773] = sym_compound_statement;
	v->a[8774] = sym_subshell;
	v->a[8775] = sym_list;
	v->a[8776] = sym_negated_command;
	v->a[8777] = sym_command;
	v->a[8778] = sym__variable_assignments;
	v->a[8779] = 31;
	small_parse_table_439(v);
}

void	small_parse_table_439(t_small_parse_table_array *v)
{
	v->a[8780] = actions(3);
	v->a[8781] = 1;
	v->a[8782] = sym_comment;
	v->a[8783] = actions(9);
	v->a[8784] = 1;
	v->a[8785] = anon_sym_for;
	v->a[8786] = actions(13);
	v->a[8787] = 1;
	v->a[8788] = anon_sym_if;
	v->a[8789] = actions(15);
	v->a[8790] = 1;
	v->a[8791] = anon_sym_case;
	v->a[8792] = actions(17);
	v->a[8793] = 1;
	v->a[8794] = anon_sym_LPAREN;
	v->a[8795] = actions(19);
	v->a[8796] = 1;
	v->a[8797] = anon_sym_LBRACE;
	v->a[8798] = actions(55);
	v->a[8799] = 1;
	small_parse_table_440(v);
}

/* EOF small_parse_table_87.c */
