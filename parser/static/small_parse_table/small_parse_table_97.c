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
	v->a[9700] = 30;
	v->a[9701] = actions(3);
	v->a[9702] = 1;
	v->a[9703] = sym_comment;
	v->a[9704] = actions(9);
	v->a[9705] = 1;
	v->a[9706] = anon_sym_for;
	v->a[9707] = actions(13);
	v->a[9708] = 1;
	v->a[9709] = anon_sym_if;
	v->a[9710] = actions(15);
	v->a[9711] = 1;
	v->a[9712] = anon_sym_case;
	v->a[9713] = actions(17);
	v->a[9714] = 1;
	v->a[9715] = anon_sym_LPAREN;
	v->a[9716] = actions(19);
	v->a[9717] = 1;
	v->a[9718] = anon_sym_LBRACE;
	v->a[9719] = actions(53);
	small_parse_table_486(v);
}

void	small_parse_table_486(t_small_parse_table_array *v)
{
	v->a[9720] = 1;
	v->a[9721] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9722] = actions(55);
	v->a[9723] = 1;
	v->a[9724] = anon_sym_DOLLAR;
	v->a[9725] = actions(57);
	v->a[9726] = 1;
	v->a[9727] = anon_sym_DQUOTE;
	v->a[9728] = actions(61);
	v->a[9729] = 1;
	v->a[9730] = anon_sym_DOLLAR_LBRACE;
	v->a[9731] = actions(63);
	v->a[9732] = 1;
	v->a[9733] = anon_sym_DOLLAR_LPAREN;
	v->a[9734] = actions(65);
	v->a[9735] = 1;
	v->a[9736] = anon_sym_BQUOTE;
	v->a[9737] = actions(206);
	v->a[9738] = 1;
	v->a[9739] = sym_word;
	small_parse_table_487(v);
}

void	small_parse_table_487(t_small_parse_table_array *v)
{
	v->a[9740] = actions(208);
	v->a[9741] = 1;
	v->a[9742] = anon_sym_BANG;
	v->a[9743] = actions(214);
	v->a[9744] = 1;
	v->a[9745] = sym_variable_name;
	v->a[9746] = state(106);
	v->a[9747] = 1;
	v->a[9748] = aux_sym__statements_repeat1;
	v->a[9749] = state(227);
	v->a[9750] = 1;
	v->a[9751] = sym_command_name;
	v->a[9752] = state(277);
	v->a[9753] = 1;
	v->a[9754] = sym_variable_assignment;
	v->a[9755] = state(506);
	v->a[9756] = 1;
	v->a[9757] = aux_sym_command_repeat1;
	v->a[9758] = state(584);
	v->a[9759] = 1;
	small_parse_table_488(v);
}

void	small_parse_table_488(t_small_parse_table_array *v)
{
	v->a[9760] = sym_file_redirect;
	v->a[9761] = state(602);
	v->a[9762] = 1;
	v->a[9763] = sym_concatenation;
	v->a[9764] = state(911);
	v->a[9765] = 1;
	v->a[9766] = sym_pipeline;
	v->a[9767] = state(1001);
	v->a[9768] = 1;
	v->a[9769] = aux_sym_redirected_statement_repeat2;
	v->a[9770] = state(1606);
	v->a[9771] = 1;
	v->a[9772] = sym__statement_not_pipeline;
	v->a[9773] = state(1691);
	v->a[9774] = 1;
	v->a[9775] = sym__statements;
	v->a[9776] = actions(11);
	v->a[9777] = 2;
	v->a[9778] = anon_sym_while;
	v->a[9779] = anon_sym_until;
	small_parse_table_489(v);
}

void	small_parse_table_489(t_small_parse_table_array *v)
{
	v->a[9780] = actions(212);
	v->a[9781] = 2;
	v->a[9782] = sym_raw_string;
	v->a[9783] = sym_number;
	v->a[9784] = state(327);
	v->a[9785] = 5;
	v->a[9786] = sym_arithmetic_expansion;
	v->a[9787] = sym_string;
	v->a[9788] = sym_simple_expansion;
	v->a[9789] = sym_expansion;
	v->a[9790] = sym_command_substitution;
	v->a[9791] = actions(210);
	v->a[9792] = 7;
	v->a[9793] = anon_sym_LT;
	v->a[9794] = anon_sym_GT;
	v->a[9795] = anon_sym_GT_GT;
	v->a[9796] = anon_sym_LT_AMP;
	v->a[9797] = anon_sym_GT_AMP;
	v->a[9798] = anon_sym_GT_PIPE;
	v->a[9799] = anon_sym_LT_GT;
	small_parse_table_490(v);
}

/* EOF small_parse_table_97.c */
