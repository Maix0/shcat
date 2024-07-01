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
	v->a[9700] = anon_sym_GT_GT;
	v->a[9701] = anon_sym_LT_AMP;
	v->a[9702] = anon_sym_GT_AMP;
	v->a[9703] = anon_sym_GT_PIPE;
	v->a[9704] = state(1157);
	v->a[9705] = 12;
	v->a[9706] = sym_redirected_statement;
	v->a[9707] = sym_for_statement;
	v->a[9708] = sym_while_statement;
	v->a[9709] = sym_if_statement;
	v->a[9710] = sym_case_statement;
	v->a[9711] = sym_function_definition;
	v->a[9712] = sym_compound_statement;
	v->a[9713] = sym_subshell;
	v->a[9714] = sym_list;
	v->a[9715] = sym_negated_command;
	v->a[9716] = sym_command;
	v->a[9717] = sym__variable_assignments;
	v->a[9718] = 32;
	v->a[9719] = actions(3);
	small_parse_table_486(v);
}

void	small_parse_table_486(t_small_parse_table_array *v)
{
	v->a[9720] = 1;
	v->a[9721] = sym_comment;
	v->a[9722] = actions(9);
	v->a[9723] = 1;
	v->a[9724] = anon_sym_for;
	v->a[9725] = actions(13);
	v->a[9726] = 1;
	v->a[9727] = anon_sym_if;
	v->a[9728] = actions(15);
	v->a[9729] = 1;
	v->a[9730] = anon_sym_case;
	v->a[9731] = actions(17);
	v->a[9732] = 1;
	v->a[9733] = anon_sym_LPAREN;
	v->a[9734] = actions(19);
	v->a[9735] = 1;
	v->a[9736] = anon_sym_LBRACE;
	v->a[9737] = actions(59);
	v->a[9738] = 1;
	v->a[9739] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_487(v);
}

void	small_parse_table_487(t_small_parse_table_array *v)
{
	v->a[9740] = actions(61);
	v->a[9741] = 1;
	v->a[9742] = anon_sym_DOLLAR;
	v->a[9743] = actions(63);
	v->a[9744] = 1;
	v->a[9745] = anon_sym_DQUOTE;
	v->a[9746] = actions(67);
	v->a[9747] = 1;
	v->a[9748] = anon_sym_DOLLAR_LBRACE;
	v->a[9749] = actions(69);
	v->a[9750] = 1;
	v->a[9751] = anon_sym_DOLLAR_LPAREN;
	v->a[9752] = actions(71);
	v->a[9753] = 1;
	v->a[9754] = anon_sym_BQUOTE;
	v->a[9755] = actions(73);
	v->a[9756] = 1;
	v->a[9757] = sym_file_descriptor;
	v->a[9758] = actions(75);
	v->a[9759] = 1;
	small_parse_table_488(v);
}

void	small_parse_table_488(t_small_parse_table_array *v)
{
	v->a[9760] = sym_variable_name;
	v->a[9761] = actions(240);
	v->a[9762] = 1;
	v->a[9763] = sym_word;
	v->a[9764] = actions(242);
	v->a[9765] = 1;
	v->a[9766] = anon_sym_BANG;
	v->a[9767] = state(136);
	v->a[9768] = 1;
	v->a[9769] = aux_sym__statements_repeat1;
	v->a[9770] = state(188);
	v->a[9771] = 1;
	v->a[9772] = sym_command_name;
	v->a[9773] = state(297);
	v->a[9774] = 1;
	v->a[9775] = sym_variable_assignment;
	v->a[9776] = state(650);
	v->a[9777] = 1;
	v->a[9778] = sym_concatenation;
	v->a[9779] = state(749);
	small_parse_table_489(v);
}

void	small_parse_table_489(t_small_parse_table_array *v)
{
	v->a[9780] = 1;
	v->a[9781] = aux_sym_command_repeat1;
	v->a[9782] = state(795);
	v->a[9783] = 1;
	v->a[9784] = sym_file_redirect;
	v->a[9785] = state(1154);
	v->a[9786] = 1;
	v->a[9787] = sym_pipeline;
	v->a[9788] = state(1240);
	v->a[9789] = 1;
	v->a[9790] = aux_sym_redirected_statement_repeat2;
	v->a[9791] = state(2119);
	v->a[9792] = 1;
	v->a[9793] = sym__statement_not_pipeline;
	v->a[9794] = state(2237);
	v->a[9795] = 1;
	v->a[9796] = sym__statements;
	v->a[9797] = actions(11);
	v->a[9798] = 2;
	v->a[9799] = anon_sym_while;
	small_parse_table_490(v);
}

/* EOF small_parse_table_97.c */
