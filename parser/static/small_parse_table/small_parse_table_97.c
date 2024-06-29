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
	v->a[9700] = 1;
	v->a[9701] = aux_sym_command_repeat1;
	v->a[9702] = state(1289);
	v->a[9703] = 1;
	v->a[9704] = sym_pipeline;
	v->a[9705] = state(1307);
	v->a[9706] = 1;
	v->a[9707] = aux_sym_redirected_statement_repeat2;
	v->a[9708] = state(2117);
	v->a[9709] = 1;
	v->a[9710] = sym__statement_not_pipeline;
	v->a[9711] = actions(147);
	v->a[9712] = 2;
	v->a[9713] = anon_sym_while;
	v->a[9714] = anon_sym_until;
	v->a[9715] = actions(170);
	v->a[9716] = 2;
	v->a[9717] = anon_sym_LT_AMP_DASH;
	v->a[9718] = anon_sym_GT_AMP_DASH;
	v->a[9719] = actions(182);
	small_parse_table_486(v);
}

void	small_parse_table_486(t_small_parse_table_array *v)
{
	v->a[9720] = 2;
	v->a[9721] = sym_raw_string;
	v->a[9722] = sym_number;
	v->a[9723] = state(420);
	v->a[9724] = 5;
	v->a[9725] = sym_arithmetic_expansion;
	v->a[9726] = sym_string;
	v->a[9727] = sym_simple_expansion;
	v->a[9728] = sym_expansion;
	v->a[9729] = sym_command_substitution;
	v->a[9730] = actions(167);
	v->a[9731] = 8;
	v->a[9732] = anon_sym_LT;
	v->a[9733] = anon_sym_GT;
	v->a[9734] = anon_sym_GT_GT;
	v->a[9735] = anon_sym_AMP_GT;
	v->a[9736] = anon_sym_AMP_GT_GT;
	v->a[9737] = anon_sym_LT_AMP;
	v->a[9738] = anon_sym_GT_AMP;
	v->a[9739] = anon_sym_GT_PIPE;
	small_parse_table_487(v);
}

void	small_parse_table_487(t_small_parse_table_array *v)
{
	v->a[9740] = state(1135);
	v->a[9741] = 12;
	v->a[9742] = sym_redirected_statement;
	v->a[9743] = sym_for_statement;
	v->a[9744] = sym_while_statement;
	v->a[9745] = sym_if_statement;
	v->a[9746] = sym_case_statement;
	v->a[9747] = sym_function_definition;
	v->a[9748] = sym_compound_statement;
	v->a[9749] = sym_subshell;
	v->a[9750] = sym_list;
	v->a[9751] = sym_negated_command;
	v->a[9752] = sym_command;
	v->a[9753] = sym__variable_assignments;
	v->a[9754] = 32;
	v->a[9755] = actions(3);
	v->a[9756] = 1;
	v->a[9757] = sym_comment;
	v->a[9758] = actions(9);
	v->a[9759] = 1;
	small_parse_table_488(v);
}

void	small_parse_table_488(t_small_parse_table_array *v)
{
	v->a[9760] = anon_sym_for;
	v->a[9761] = actions(13);
	v->a[9762] = 1;
	v->a[9763] = anon_sym_if;
	v->a[9764] = actions(15);
	v->a[9765] = 1;
	v->a[9766] = anon_sym_case;
	v->a[9767] = actions(17);
	v->a[9768] = 1;
	v->a[9769] = anon_sym_LPAREN;
	v->a[9770] = actions(19);
	v->a[9771] = 1;
	v->a[9772] = anon_sym_LBRACE;
	v->a[9773] = actions(59);
	v->a[9774] = 1;
	v->a[9775] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9776] = actions(61);
	v->a[9777] = 1;
	v->a[9778] = anon_sym_DOLLAR;
	v->a[9779] = actions(63);
	small_parse_table_489(v);
}

void	small_parse_table_489(t_small_parse_table_array *v)
{
	v->a[9780] = 1;
	v->a[9781] = anon_sym_DQUOTE;
	v->a[9782] = actions(67);
	v->a[9783] = 1;
	v->a[9784] = anon_sym_DOLLAR_LBRACE;
	v->a[9785] = actions(69);
	v->a[9786] = 1;
	v->a[9787] = anon_sym_DOLLAR_LPAREN;
	v->a[9788] = actions(71);
	v->a[9789] = 1;
	v->a[9790] = anon_sym_BQUOTE;
	v->a[9791] = actions(220);
	v->a[9792] = 1;
	v->a[9793] = sym_word;
	v->a[9794] = actions(222);
	v->a[9795] = 1;
	v->a[9796] = anon_sym_BANG;
	v->a[9797] = actions(230);
	v->a[9798] = 1;
	v->a[9799] = sym_file_descriptor;
	small_parse_table_490(v);
}

/* EOF small_parse_table_97.c */
