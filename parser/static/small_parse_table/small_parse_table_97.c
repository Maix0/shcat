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
	v->a[9701] = sym_comment;
	v->a[9702] = actions(9);
	v->a[9703] = 1;
	v->a[9704] = anon_sym_for;
	v->a[9705] = actions(13);
	v->a[9706] = 1;
	v->a[9707] = anon_sym_if;
	v->a[9708] = actions(15);
	v->a[9709] = 1;
	v->a[9710] = anon_sym_case;
	v->a[9711] = actions(17);
	v->a[9712] = 1;
	v->a[9713] = anon_sym_LPAREN;
	v->a[9714] = actions(19);
	v->a[9715] = 1;
	v->a[9716] = anon_sym_LBRACE;
	v->a[9717] = actions(41);
	v->a[9718] = 1;
	v->a[9719] = sym_word;
	small_parse_table_486(v);
}

void	small_parse_table_486(t_small_parse_table_array *v)
{
	v->a[9720] = actions(49);
	v->a[9721] = 1;
	v->a[9722] = anon_sym_BANG;
	v->a[9723] = actions(53);
	v->a[9724] = 1;
	v->a[9725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9726] = actions(55);
	v->a[9727] = 1;
	v->a[9728] = anon_sym_DOLLAR;
	v->a[9729] = actions(57);
	v->a[9730] = 1;
	v->a[9731] = anon_sym_DQUOTE;
	v->a[9732] = actions(61);
	v->a[9733] = 1;
	v->a[9734] = anon_sym_DOLLAR_LBRACE;
	v->a[9735] = actions(63);
	v->a[9736] = 1;
	v->a[9737] = anon_sym_DOLLAR_LPAREN;
	v->a[9738] = actions(65);
	v->a[9739] = 1;
	small_parse_table_487(v);
}

void	small_parse_table_487(t_small_parse_table_array *v)
{
	v->a[9740] = anon_sym_BQUOTE;
	v->a[9741] = actions(67);
	v->a[9742] = 1;
	v->a[9743] = sym_variable_name;
	v->a[9744] = actions(240);
	v->a[9745] = 1;
	v->a[9746] = anon_sym_fi;
	v->a[9747] = state(51);
	v->a[9748] = 1;
	v->a[9749] = aux_sym__terminated_statement;
	v->a[9750] = state(185);
	v->a[9751] = 1;
	v->a[9752] = sym_command_name;
	v->a[9753] = state(220);
	v->a[9754] = 1;
	v->a[9755] = sym_variable_assignment;
	v->a[9756] = state(411);
	v->a[9757] = 1;
	v->a[9758] = aux_sym_command_repeat1;
	v->a[9759] = state(551);
	small_parse_table_488(v);
}

void	small_parse_table_488(t_small_parse_table_array *v)
{
	v->a[9760] = 1;
	v->a[9761] = sym_file_redirect;
	v->a[9762] = state(555);
	v->a[9763] = 1;
	v->a[9764] = sym_concatenation;
	v->a[9765] = state(1085);
	v->a[9766] = 1;
	v->a[9767] = sym_pipeline;
	v->a[9768] = state(1126);
	v->a[9769] = 1;
	v->a[9770] = aux_sym_redirected_statement_repeat2;
	v->a[9771] = state(1561);
	v->a[9772] = 1;
	v->a[9773] = sym__statement_not_pipeline;
	v->a[9774] = actions(11);
	v->a[9775] = 2;
	v->a[9776] = anon_sym_while;
	v->a[9777] = anon_sym_until;
	v->a[9778] = actions(59);
	v->a[9779] = 2;
	small_parse_table_489(v);
}

void	small_parse_table_489(t_small_parse_table_array *v)
{
	v->a[9780] = sym_raw_string;
	v->a[9781] = sym_number;
	v->a[9782] = actions(51);
	v->a[9783] = 3;
	v->a[9784] = anon_sym_LT;
	v->a[9785] = anon_sym_GT;
	v->a[9786] = anon_sym_GT_GT;
	v->a[9787] = state(401);
	v->a[9788] = 5;
	v->a[9789] = sym_arithmetic_expansion;
	v->a[9790] = sym_string;
	v->a[9791] = sym_simple_expansion;
	v->a[9792] = sym_expansion;
	v->a[9793] = sym_command_substitution;
	v->a[9794] = state(920);
	v->a[9795] = 12;
	v->a[9796] = sym_redirected_statement;
	v->a[9797] = sym_for_statement;
	v->a[9798] = sym_while_statement;
	v->a[9799] = sym_if_statement;
	small_parse_table_490(v);
}

/* EOF small_parse_table_97.c */
