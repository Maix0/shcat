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
	v->a[16700] = 1;
	v->a[16701] = sym_variable_assignment;
	v->a[16702] = state(624);
	v->a[16703] = 1;
	v->a[16704] = sym_concatenation;
	v->a[16705] = state(726);
	v->a[16706] = 1;
	v->a[16707] = sym_file_redirect;
	v->a[16708] = state(733);
	v->a[16709] = 1;
	v->a[16710] = aux_sym_command_repeat1;
	v->a[16711] = state(1246);
	v->a[16712] = 1;
	v->a[16713] = sym_pipeline;
	v->a[16714] = state(1307);
	v->a[16715] = 1;
	v->a[16716] = aux_sym_redirected_statement_repeat2;
	v->a[16717] = state(2117);
	v->a[16718] = 1;
	v->a[16719] = sym__statement_not_pipeline;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = actions(11);
	v->a[16721] = 2;
	v->a[16722] = anon_sym_while;
	v->a[16723] = anon_sym_until;
	v->a[16724] = actions(57);
	v->a[16725] = 2;
	v->a[16726] = anon_sym_LT_AMP_DASH;
	v->a[16727] = anon_sym_GT_AMP_DASH;
	v->a[16728] = actions(65);
	v->a[16729] = 2;
	v->a[16730] = sym_raw_string;
	v->a[16731] = sym_number;
	v->a[16732] = state(420);
	v->a[16733] = 5;
	v->a[16734] = sym_arithmetic_expansion;
	v->a[16735] = sym_string;
	v->a[16736] = sym_simple_expansion;
	v->a[16737] = sym_expansion;
	v->a[16738] = sym_command_substitution;
	v->a[16739] = actions(55);
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = 8;
	v->a[16741] = anon_sym_LT;
	v->a[16742] = anon_sym_GT;
	v->a[16743] = anon_sym_GT_GT;
	v->a[16744] = anon_sym_AMP_GT;
	v->a[16745] = anon_sym_AMP_GT_GT;
	v->a[16746] = anon_sym_LT_AMP;
	v->a[16747] = anon_sym_GT_AMP;
	v->a[16748] = anon_sym_GT_PIPE;
	v->a[16749] = state(1112);
	v->a[16750] = 12;
	v->a[16751] = sym_redirected_statement;
	v->a[16752] = sym_for_statement;
	v->a[16753] = sym_while_statement;
	v->a[16754] = sym_if_statement;
	v->a[16755] = sym_case_statement;
	v->a[16756] = sym_function_definition;
	v->a[16757] = sym_compound_statement;
	v->a[16758] = sym_subshell;
	v->a[16759] = sym_list;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = sym_negated_command;
	v->a[16761] = sym_command;
	v->a[16762] = sym__variable_assignments;
	v->a[16763] = 31;
	v->a[16764] = actions(3);
	v->a[16765] = 1;
	v->a[16766] = sym_comment;
	v->a[16767] = actions(268);
	v->a[16768] = 1;
	v->a[16769] = sym_word;
	v->a[16770] = actions(271);
	v->a[16771] = 1;
	v->a[16772] = anon_sym_for;
	v->a[16773] = actions(277);
	v->a[16774] = 1;
	v->a[16775] = anon_sym_if;
	v->a[16776] = actions(280);
	v->a[16777] = 1;
	v->a[16778] = anon_sym_case;
	v->a[16779] = actions(283);
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = 1;
	v->a[16781] = anon_sym_LPAREN;
	v->a[16782] = actions(286);
	v->a[16783] = 1;
	v->a[16784] = anon_sym_LBRACE;
	v->a[16785] = actions(289);
	v->a[16786] = 1;
	v->a[16787] = anon_sym_BANG;
	v->a[16788] = actions(298);
	v->a[16789] = 1;
	v->a[16790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16791] = actions(301);
	v->a[16792] = 1;
	v->a[16793] = anon_sym_DOLLAR;
	v->a[16794] = actions(304);
	v->a[16795] = 1;
	v->a[16796] = anon_sym_DQUOTE;
	v->a[16797] = actions(310);
	v->a[16798] = 1;
	v->a[16799] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
