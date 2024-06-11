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
	v->a[16700] = state(1407);
	v->a[16701] = 1;
	v->a[16702] = sym_variable_assignments;
	v->a[16703] = state(1446);
	v->a[16704] = 1;
	v->a[16705] = sym_pipeline;
	v->a[16706] = state(1460);
	v->a[16707] = 1;
	v->a[16708] = aux_sym_redirected_statement_repeat2;
	v->a[16709] = state(2269);
	v->a[16710] = 1;
	v->a[16711] = sym__statement_not_pipeline;
	v->a[16712] = actions(11);
	v->a[16713] = 2;
	v->a[16714] = anon_sym_while;
	v->a[16715] = anon_sym_until;
	v->a[16716] = actions(57);
	v->a[16717] = 2;
	v->a[16718] = anon_sym_LT_AMP_DASH;
	v->a[16719] = anon_sym_GT_AMP_DASH;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = actions(65);
	v->a[16721] = 2;
	v->a[16722] = sym_raw_string;
	v->a[16723] = sym_number;
	v->a[16724] = state(394);
	v->a[16725] = 5;
	v->a[16726] = sym_arithmetic_expansion;
	v->a[16727] = sym_string;
	v->a[16728] = sym_simple_expansion;
	v->a[16729] = sym_expansion;
	v->a[16730] = sym_command_substitution;
	v->a[16731] = actions(55);
	v->a[16732] = 8;
	v->a[16733] = anon_sym_LT;
	v->a[16734] = anon_sym_GT;
	v->a[16735] = anon_sym_GT_GT;
	v->a[16736] = anon_sym_AMP_GT;
	v->a[16737] = anon_sym_AMP_GT_GT;
	v->a[16738] = anon_sym_LT_AMP;
	v->a[16739] = anon_sym_GT_AMP;
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = anon_sym_GT_PIPE;
	v->a[16741] = 42;
	v->a[16742] = actions(3);
	v->a[16743] = 1;
	v->a[16744] = sym_comment;
	v->a[16745] = actions(7);
	v->a[16746] = 1;
	v->a[16747] = sym_word;
	v->a[16748] = actions(9);
	v->a[16749] = 1;
	v->a[16750] = anon_sym_for;
	v->a[16751] = actions(13);
	v->a[16752] = 1;
	v->a[16753] = anon_sym_if;
	v->a[16754] = actions(15);
	v->a[16755] = 1;
	v->a[16756] = anon_sym_case;
	v->a[16757] = actions(17);
	v->a[16758] = 1;
	v->a[16759] = anon_sym_LPAREN;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = actions(19);
	v->a[16761] = 1;
	v->a[16762] = anon_sym_LBRACE;
	v->a[16763] = actions(21);
	v->a[16764] = 1;
	v->a[16765] = anon_sym_BANG;
	v->a[16766] = actions(27);
	v->a[16767] = 1;
	v->a[16768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16769] = actions(29);
	v->a[16770] = 1;
	v->a[16771] = anon_sym_DOLLAR;
	v->a[16772] = actions(31);
	v->a[16773] = 1;
	v->a[16774] = anon_sym_DQUOTE;
	v->a[16775] = actions(35);
	v->a[16776] = 1;
	v->a[16777] = anon_sym_DOLLAR_LBRACE;
	v->a[16778] = actions(37);
	v->a[16779] = 1;
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = anon_sym_DOLLAR_LPAREN;
	v->a[16781] = actions(39);
	v->a[16782] = 1;
	v->a[16783] = anon_sym_BQUOTE;
	v->a[16784] = actions(41);
	v->a[16785] = 1;
	v->a[16786] = sym_file_descriptor;
	v->a[16787] = actions(43);
	v->a[16788] = 1;
	v->a[16789] = sym_variable_name;
	v->a[16790] = state(133);
	v->a[16791] = 1;
	v->a[16792] = aux_sym__statements_repeat1;
	v->a[16793] = state(185);
	v->a[16794] = 1;
	v->a[16795] = sym_command_name;
	v->a[16796] = state(272);
	v->a[16797] = 1;
	v->a[16798] = sym_variable_assignment;
	v->a[16799] = state(639);
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
