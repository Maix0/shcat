/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_167.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_835(t_small_parse_table_array *v)
{
	v->a[16700] = anon_sym_until;
	v->a[16701] = actions(353);
	v->a[16702] = 2;
	v->a[16703] = sym_raw_string;
	v->a[16704] = sym_number;
	v->a[16705] = state(625);
	v->a[16706] = 5;
	v->a[16707] = sym_arithmetic_expansion;
	v->a[16708] = sym_string;
	v->a[16709] = sym_simple_expansion;
	v->a[16710] = sym_expansion;
	v->a[16711] = sym_command_substitution;
	v->a[16712] = actions(351);
	v->a[16713] = 7;
	v->a[16714] = anon_sym_LT;
	v->a[16715] = anon_sym_GT;
	v->a[16716] = anon_sym_GT_GT;
	v->a[16717] = anon_sym_LT_AMP;
	v->a[16718] = anon_sym_GT_AMP;
	v->a[16719] = anon_sym_GT_PIPE;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = anon_sym_LT_GT;
	v->a[16721] = state(1282);
	v->a[16722] = 12;
	v->a[16723] = sym_redirected_statement;
	v->a[16724] = sym_for_statement;
	v->a[16725] = sym_while_statement;
	v->a[16726] = sym_if_statement;
	v->a[16727] = sym_case_statement;
	v->a[16728] = sym_function_definition;
	v->a[16729] = sym_compound_statement;
	v->a[16730] = sym_subshell;
	v->a[16731] = sym_list;
	v->a[16732] = sym_negated_command;
	v->a[16733] = sym_command;
	v->a[16734] = sym__variable_assignments;
	v->a[16735] = 29;
	v->a[16736] = actions(3);
	v->a[16737] = 1;
	v->a[16738] = sym_comment;
	v->a[16739] = actions(311);
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = 1;
	v->a[16741] = sym_word;
	v->a[16742] = actions(313);
	v->a[16743] = 1;
	v->a[16744] = anon_sym_for;
	v->a[16745] = actions(317);
	v->a[16746] = 1;
	v->a[16747] = anon_sym_if;
	v->a[16748] = actions(319);
	v->a[16749] = 1;
	v->a[16750] = anon_sym_case;
	v->a[16751] = actions(321);
	v->a[16752] = 1;
	v->a[16753] = anon_sym_LPAREN;
	v->a[16754] = actions(323);
	v->a[16755] = 1;
	v->a[16756] = anon_sym_LBRACE;
	v->a[16757] = actions(325);
	v->a[16758] = 1;
	v->a[16759] = anon_sym_BANG;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = actions(329);
	v->a[16761] = 1;
	v->a[16762] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16763] = actions(331);
	v->a[16764] = 1;
	v->a[16765] = anon_sym_DOLLAR;
	v->a[16766] = actions(333);
	v->a[16767] = 1;
	v->a[16768] = anon_sym_DQUOTE;
	v->a[16769] = actions(337);
	v->a[16770] = 1;
	v->a[16771] = anon_sym_DOLLAR_LBRACE;
	v->a[16772] = actions(339);
	v->a[16773] = 1;
	v->a[16774] = anon_sym_DOLLAR_LPAREN;
	v->a[16775] = actions(341);
	v->a[16776] = 1;
	v->a[16777] = anon_sym_BQUOTE;
	v->a[16778] = actions(343);
	v->a[16779] = 1;
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = sym_file_descriptor;
	v->a[16781] = actions(345);
	v->a[16782] = 1;
	v->a[16783] = sym_variable_name;
	v->a[16784] = state(364);
	v->a[16785] = 1;
	v->a[16786] = sym_command_name;
	v->a[16787] = state(626);
	v->a[16788] = 1;
	v->a[16789] = aux_sym_command_repeat1;
	v->a[16790] = state(678);
	v->a[16791] = 1;
	v->a[16792] = sym_variable_assignment;
	v->a[16793] = state(890);
	v->a[16794] = 1;
	v->a[16795] = sym_concatenation;
	v->a[16796] = state(903);
	v->a[16797] = 1;
	v->a[16798] = sym_file_redirect;
	v->a[16799] = state(1370);
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
