/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_97.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_485(t_small_parse_table_array *v)
{
	v->a[9700] = sym_while_statement;
	v->a[9701] = sym_if_statement;
	v->a[9702] = sym_case_statement;
	v->a[9703] = sym_function_definition;
	v->a[9704] = sym_compound_statement;
	v->a[9705] = sym_subshell;
	v->a[9706] = sym_list;
	v->a[9707] = sym_negated_command;
	v->a[9708] = sym_command;
	v->a[9709] = sym_variable_assignments;
	v->a[9710] = 34;
	v->a[9711] = actions(3);
	v->a[9712] = 1;
	v->a[9713] = sym_comment;
	v->a[9714] = actions(9);
	v->a[9715] = 1;
	v->a[9716] = anon_sym_for;
	v->a[9717] = actions(13);
	v->a[9718] = 1;
	v->a[9719] = anon_sym_if;
	small_parse_table_486(v);
}

void	small_parse_table_486(t_small_parse_table_array *v)
{
	v->a[9720] = actions(15);
	v->a[9721] = 1;
	v->a[9722] = anon_sym_case;
	v->a[9723] = actions(17);
	v->a[9724] = 1;
	v->a[9725] = anon_sym_LPAREN;
	v->a[9726] = actions(19);
	v->a[9727] = 1;
	v->a[9728] = anon_sym_LBRACE;
	v->a[9729] = actions(49);
	v->a[9730] = 1;
	v->a[9731] = sym_word;
	v->a[9732] = actions(57);
	v->a[9733] = 1;
	v->a[9734] = anon_sym_BANG;
	v->a[9735] = actions(63);
	v->a[9736] = 1;
	v->a[9737] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9738] = actions(65);
	v->a[9739] = 1;
	small_parse_table_487(v);
}

void	small_parse_table_487(t_small_parse_table_array *v)
{
	v->a[9740] = anon_sym_DOLLAR;
	v->a[9741] = actions(67);
	v->a[9742] = 1;
	v->a[9743] = anon_sym_DQUOTE;
	v->a[9744] = actions(69);
	v->a[9745] = 1;
	v->a[9746] = sym_raw_string;
	v->a[9747] = actions(71);
	v->a[9748] = 1;
	v->a[9749] = aux_sym_number_token1;
	v->a[9750] = actions(73);
	v->a[9751] = 1;
	v->a[9752] = aux_sym_number_token2;
	v->a[9753] = actions(75);
	v->a[9754] = 1;
	v->a[9755] = anon_sym_DOLLAR_LBRACE;
	v->a[9756] = actions(77);
	v->a[9757] = 1;
	v->a[9758] = anon_sym_DOLLAR_LPAREN;
	v->a[9759] = actions(79);
	small_parse_table_488(v);
}

void	small_parse_table_488(t_small_parse_table_array *v)
{
	v->a[9760] = 1;
	v->a[9761] = anon_sym_BQUOTE;
	v->a[9762] = actions(81);
	v->a[9763] = 1;
	v->a[9764] = sym_file_descriptor;
	v->a[9765] = actions(83);
	v->a[9766] = 1;
	v->a[9767] = sym_variable_name;
	v->a[9768] = actions(274);
	v->a[9769] = 1;
	v->a[9770] = anon_sym_then;
	v->a[9771] = state(37);
	v->a[9772] = 1;
	v->a[9773] = aux_sym__terminated_statement;
	v->a[9774] = state(190);
	v->a[9775] = 1;
	v->a[9776] = sym_command_name;
	v->a[9777] = state(303);
	v->a[9778] = 1;
	v->a[9779] = sym_variable_assignment;
	small_parse_table_489(v);
}

void	small_parse_table_489(t_small_parse_table_array *v)
{
	v->a[9780] = state(582);
	v->a[9781] = 1;
	v->a[9782] = sym_concatenation;
	v->a[9783] = state(587);
	v->a[9784] = 1;
	v->a[9785] = aux_sym_command_repeat1;
	v->a[9786] = state(718);
	v->a[9787] = 1;
	v->a[9788] = sym_file_redirect;
	v->a[9789] = state(1213);
	v->a[9790] = 1;
	v->a[9791] = aux_sym_redirected_statement_repeat2;
	v->a[9792] = state(1225);
	v->a[9793] = 1;
	v->a[9794] = sym_pipeline;
	v->a[9795] = state(2035);
	v->a[9796] = 1;
	v->a[9797] = sym__statement_not_pipeline;
	v->a[9798] = actions(11);
	v->a[9799] = 2;
	small_parse_table_490(v);
}

/* EOF small_parse_table_97.c */
