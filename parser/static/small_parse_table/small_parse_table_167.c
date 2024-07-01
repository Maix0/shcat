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
	v->a[16700] = sym_subshell;
	v->a[16701] = sym_list;
	v->a[16702] = sym_negated_command;
	v->a[16703] = sym_command;
	v->a[16704] = sym__variable_assignments;
	v->a[16705] = 42;
	v->a[16706] = actions(3);
	v->a[16707] = 1;
	v->a[16708] = sym_comment;
	v->a[16709] = actions(7);
	v->a[16710] = 1;
	v->a[16711] = sym_word;
	v->a[16712] = actions(9);
	v->a[16713] = 1;
	v->a[16714] = anon_sym_for;
	v->a[16715] = actions(13);
	v->a[16716] = 1;
	v->a[16717] = anon_sym_if;
	v->a[16718] = actions(15);
	v->a[16719] = 1;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = anon_sym_case;
	v->a[16721] = actions(17);
	v->a[16722] = 1;
	v->a[16723] = anon_sym_LPAREN;
	v->a[16724] = actions(19);
	v->a[16725] = 1;
	v->a[16726] = anon_sym_LBRACE;
	v->a[16727] = actions(21);
	v->a[16728] = 1;
	v->a[16729] = anon_sym_BANG;
	v->a[16730] = actions(27);
	v->a[16731] = 1;
	v->a[16732] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16733] = actions(29);
	v->a[16734] = 1;
	v->a[16735] = anon_sym_DOLLAR;
	v->a[16736] = actions(31);
	v->a[16737] = 1;
	v->a[16738] = anon_sym_DQUOTE;
	v->a[16739] = actions(35);
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = 1;
	v->a[16741] = anon_sym_DOLLAR_LBRACE;
	v->a[16742] = actions(37);
	v->a[16743] = 1;
	v->a[16744] = anon_sym_DOLLAR_LPAREN;
	v->a[16745] = actions(39);
	v->a[16746] = 1;
	v->a[16747] = anon_sym_BQUOTE;
	v->a[16748] = actions(41);
	v->a[16749] = 1;
	v->a[16750] = sym_file_descriptor;
	v->a[16751] = actions(43);
	v->a[16752] = 1;
	v->a[16753] = sym_variable_name;
	v->a[16754] = state(131);
	v->a[16755] = 1;
	v->a[16756] = aux_sym__statements_repeat1;
	v->a[16757] = state(181);
	v->a[16758] = 1;
	v->a[16759] = sym_command_name;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = state(229);
	v->a[16761] = 1;
	v->a[16762] = sym_variable_assignment;
	v->a[16763] = state(618);
	v->a[16764] = 1;
	v->a[16765] = sym_concatenation;
	v->a[16766] = state(684);
	v->a[16767] = 1;
	v->a[16768] = sym_file_redirect;
	v->a[16769] = state(688);
	v->a[16770] = 1;
	v->a[16771] = aux_sym_command_repeat1;
	v->a[16772] = state(1031);
	v->a[16773] = 1;
	v->a[16774] = sym_redirected_statement;
	v->a[16775] = state(1032);
	v->a[16776] = 1;
	v->a[16777] = sym_for_statement;
	v->a[16778] = state(1034);
	v->a[16779] = 1;
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = sym_while_statement;
	v->a[16781] = state(1035);
	v->a[16782] = 1;
	v->a[16783] = sym_if_statement;
	v->a[16784] = state(1036);
	v->a[16785] = 1;
	v->a[16786] = sym_case_statement;
	v->a[16787] = state(1037);
	v->a[16788] = 1;
	v->a[16789] = sym_function_definition;
	v->a[16790] = state(1038);
	v->a[16791] = 1;
	v->a[16792] = sym_compound_statement;
	v->a[16793] = state(1060);
	v->a[16794] = 1;
	v->a[16795] = sym_subshell;
	v->a[16796] = state(1065);
	v->a[16797] = 1;
	v->a[16798] = sym_list;
	v->a[16799] = state(1066);
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
