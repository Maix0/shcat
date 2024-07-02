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
	v->a[16700] = 2;
	v->a[16701] = anon_sym_while;
	v->a[16702] = anon_sym_until;
	v->a[16703] = actions(353);
	v->a[16704] = 2;
	v->a[16705] = sym_raw_string;
	v->a[16706] = sym_number;
	v->a[16707] = state(628);
	v->a[16708] = 5;
	v->a[16709] = sym_arithmetic_expansion;
	v->a[16710] = sym_string;
	v->a[16711] = sym_simple_expansion;
	v->a[16712] = sym_expansion;
	v->a[16713] = sym_command_substitution;
	v->a[16714] = actions(351);
	v->a[16715] = 7;
	v->a[16716] = anon_sym_LT;
	v->a[16717] = anon_sym_GT;
	v->a[16718] = anon_sym_GT_GT;
	v->a[16719] = anon_sym_LT_AMP;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = anon_sym_GT_AMP;
	v->a[16721] = anon_sym_GT_PIPE;
	v->a[16722] = anon_sym_LT_GT;
	v->a[16723] = state(1332);
	v->a[16724] = 12;
	v->a[16725] = sym_redirected_statement;
	v->a[16726] = sym_for_statement;
	v->a[16727] = sym_while_statement;
	v->a[16728] = sym_if_statement;
	v->a[16729] = sym_case_statement;
	v->a[16730] = sym_function_definition;
	v->a[16731] = sym_compound_statement;
	v->a[16732] = sym_subshell;
	v->a[16733] = sym_list;
	v->a[16734] = sym_negated_command;
	v->a[16735] = sym_command;
	v->a[16736] = sym__variable_assignments;
	v->a[16737] = 28;
	v->a[16738] = actions(3);
	v->a[16739] = 1;
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = sym_comment;
	v->a[16741] = actions(83);
	v->a[16742] = 1;
	v->a[16743] = sym_word;
	v->a[16744] = actions(85);
	v->a[16745] = 1;
	v->a[16746] = anon_sym_for;
	v->a[16747] = actions(89);
	v->a[16748] = 1;
	v->a[16749] = anon_sym_if;
	v->a[16750] = actions(91);
	v->a[16751] = 1;
	v->a[16752] = anon_sym_case;
	v->a[16753] = actions(93);
	v->a[16754] = 1;
	v->a[16755] = anon_sym_LPAREN;
	v->a[16756] = actions(97);
	v->a[16757] = 1;
	v->a[16758] = anon_sym_LBRACE;
	v->a[16759] = actions(99);
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = 1;
	v->a[16761] = anon_sym_BANG;
	v->a[16762] = actions(103);
	v->a[16763] = 1;
	v->a[16764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16765] = actions(105);
	v->a[16766] = 1;
	v->a[16767] = anon_sym_DOLLAR;
	v->a[16768] = actions(107);
	v->a[16769] = 1;
	v->a[16770] = anon_sym_DQUOTE;
	v->a[16771] = actions(111);
	v->a[16772] = 1;
	v->a[16773] = anon_sym_DOLLAR_LBRACE;
	v->a[16774] = actions(113);
	v->a[16775] = 1;
	v->a[16776] = anon_sym_DOLLAR_LPAREN;
	v->a[16777] = actions(115);
	v->a[16778] = 1;
	v->a[16779] = anon_sym_BQUOTE;
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = actions(117);
	v->a[16781] = 1;
	v->a[16782] = sym_file_descriptor;
	v->a[16783] = actions(119);
	v->a[16784] = 1;
	v->a[16785] = sym_variable_name;
	v->a[16786] = state(172);
	v->a[16787] = 1;
	v->a[16788] = sym_command_name;
	v->a[16789] = state(263);
	v->a[16790] = 1;
	v->a[16791] = sym_variable_assignment;
	v->a[16792] = state(567);
	v->a[16793] = 1;
	v->a[16794] = sym_concatenation;
	v->a[16795] = state(634);
	v->a[16796] = 1;
	v->a[16797] = sym_file_redirect;
	v->a[16798] = state(670);
	v->a[16799] = 1;
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
