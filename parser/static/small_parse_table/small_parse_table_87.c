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
	v->a[8700] = sym_case_statement;
	v->a[8701] = sym_function_definition;
	v->a[8702] = sym_compound_statement;
	v->a[8703] = sym_subshell;
	v->a[8704] = sym_list;
	v->a[8705] = sym_negated_command;
	v->a[8706] = sym_command;
	v->a[8707] = sym__variable_assignments;
	v->a[8708] = 30;
	v->a[8709] = actions(3);
	v->a[8710] = 1;
	v->a[8711] = sym_comment;
	v->a[8712] = actions(9);
	v->a[8713] = 1;
	v->a[8714] = anon_sym_for;
	v->a[8715] = actions(13);
	v->a[8716] = 1;
	v->a[8717] = anon_sym_if;
	v->a[8718] = actions(15);
	v->a[8719] = 1;
	small_parse_table_436(v);
}

void	small_parse_table_436(t_small_parse_table_array *v)
{
	v->a[8720] = anon_sym_case;
	v->a[8721] = actions(17);
	v->a[8722] = 1;
	v->a[8723] = anon_sym_LPAREN;
	v->a[8724] = actions(19);
	v->a[8725] = 1;
	v->a[8726] = anon_sym_LBRACE;
	v->a[8727] = actions(53);
	v->a[8728] = 1;
	v->a[8729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8730] = actions(55);
	v->a[8731] = 1;
	v->a[8732] = anon_sym_DOLLAR;
	v->a[8733] = actions(57);
	v->a[8734] = 1;
	v->a[8735] = anon_sym_DQUOTE;
	v->a[8736] = actions(61);
	v->a[8737] = 1;
	v->a[8738] = anon_sym_DOLLAR_LBRACE;
	v->a[8739] = actions(63);
	small_parse_table_437(v);
}

void	small_parse_table_437(t_small_parse_table_array *v)
{
	v->a[8740] = 1;
	v->a[8741] = anon_sym_DOLLAR_LPAREN;
	v->a[8742] = actions(65);
	v->a[8743] = 1;
	v->a[8744] = anon_sym_BQUOTE;
	v->a[8745] = actions(208);
	v->a[8746] = 1;
	v->a[8747] = sym_word;
	v->a[8748] = actions(210);
	v->a[8749] = 1;
	v->a[8750] = anon_sym_BANG;
	v->a[8751] = actions(216);
	v->a[8752] = 1;
	v->a[8753] = sym_variable_name;
	v->a[8754] = state(112);
	v->a[8755] = 1;
	v->a[8756] = aux_sym__statements_repeat1;
	v->a[8757] = state(158);
	v->a[8758] = 1;
	v->a[8759] = sym_command_name;
	small_parse_table_438(v);
}

void	small_parse_table_438(t_small_parse_table_array *v)
{
	v->a[8760] = state(186);
	v->a[8761] = 1;
	v->a[8762] = sym_variable_assignment;
	v->a[8763] = state(298);
	v->a[8764] = 1;
	v->a[8765] = aux_sym_command_repeat1;
	v->a[8766] = state(534);
	v->a[8767] = 1;
	v->a[8768] = sym_file_redirect;
	v->a[8769] = state(555);
	v->a[8770] = 1;
	v->a[8771] = sym_concatenation;
	v->a[8772] = state(937);
	v->a[8773] = 1;
	v->a[8774] = sym_pipeline;
	v->a[8775] = state(1019);
	v->a[8776] = 1;
	v->a[8777] = aux_sym_redirected_statement_repeat2;
	v->a[8778] = state(1557);
	v->a[8779] = 1;
	small_parse_table_439(v);
}

void	small_parse_table_439(t_small_parse_table_array *v)
{
	v->a[8780] = sym__statement_not_pipeline;
	v->a[8781] = state(1714);
	v->a[8782] = 1;
	v->a[8783] = sym__statements;
	v->a[8784] = actions(11);
	v->a[8785] = 2;
	v->a[8786] = anon_sym_while;
	v->a[8787] = anon_sym_until;
	v->a[8788] = actions(214);
	v->a[8789] = 2;
	v->a[8790] = sym_raw_string;
	v->a[8791] = sym_number;
	v->a[8792] = actions(212);
	v->a[8793] = 3;
	v->a[8794] = anon_sym_LT;
	v->a[8795] = anon_sym_GT;
	v->a[8796] = anon_sym_GT_GT;
	v->a[8797] = state(277);
	v->a[8798] = 5;
	v->a[8799] = sym_arithmetic_expansion;
	small_parse_table_440(v);
}

/* EOF small_parse_table_87.c */
