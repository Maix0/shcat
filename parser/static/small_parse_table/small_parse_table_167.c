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
	v->a[16700] = anon_sym_select;
	v->a[16701] = anon_sym_while;
	v->a[16702] = anon_sym_until;
	v->a[16703] = anon_sym_if;
	v->a[16704] = anon_sym_case;
	v->a[16705] = anon_sym_function;
	v->a[16706] = anon_sym_BANG;
	v->a[16707] = anon_sym_declare;
	v->a[16708] = anon_sym_typeset;
	v->a[16709] = anon_sym_export;
	v->a[16710] = anon_sym_readonly;
	v->a[16711] = anon_sym_local;
	v->a[16712] = anon_sym_unset;
	v->a[16713] = anon_sym_unsetenv;
	v->a[16714] = anon_sym_LT;
	v->a[16715] = anon_sym_GT;
	v->a[16716] = anon_sym_AMP_GT;
	v->a[16717] = anon_sym_LT_AMP;
	v->a[16718] = anon_sym_GT_AMP;
	v->a[16719] = anon_sym_DOLLAR;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = sym__special_character;
	v->a[16721] = aux_sym_number_token1;
	v->a[16722] = aux_sym_number_token2;
	v->a[16723] = anon_sym_DOLLAR_LPAREN;
	v->a[16724] = sym_word;
	v->a[16725] = 6;
	v->a[16726] = actions(3);
	v->a[16727] = 1;
	v->a[16728] = sym_comment;
	v->a[16729] = actions(2682);
	v->a[16730] = 1;
	v->a[16731] = sym_variable_name;
	v->a[16732] = actions(2680);
	v->a[16733] = 2;
	v->a[16734] = aux_sym__simple_variable_name_token1;
	v->a[16735] = aux_sym__multiline_variable_name_token1;
	v->a[16736] = actions(816);
	v->a[16737] = 4;
	v->a[16738] = sym_file_descriptor;
	v->a[16739] = sym_test_operator;
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = sym__bare_dollar;
	v->a[16741] = sym__brace_start;
	v->a[16742] = actions(2678);
	v->a[16743] = 9;
	v->a[16744] = anon_sym_BANG;
	v->a[16745] = anon_sym_DASH;
	v->a[16746] = anon_sym_STAR;
	v->a[16747] = anon_sym_QMARK;
	v->a[16748] = anon_sym_DOLLAR;
	v->a[16749] = anon_sym_POUND;
	v->a[16750] = anon_sym_AT;
	v->a[16751] = anon_sym_0;
	v->a[16752] = anon_sym__;
	v->a[16753] = actions(810);
	v->a[16754] = 27;
	v->a[16755] = anon_sym_PIPE;
	v->a[16756] = anon_sym_PIPE_AMP;
	v->a[16757] = anon_sym_AMP_AMP;
	v->a[16758] = anon_sym_PIPE_PIPE;
	v->a[16759] = anon_sym_LT;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = anon_sym_GT;
	v->a[16761] = anon_sym_GT_GT;
	v->a[16762] = anon_sym_AMP_GT;
	v->a[16763] = anon_sym_AMP_GT_GT;
	v->a[16764] = anon_sym_LT_AMP;
	v->a[16765] = anon_sym_GT_AMP;
	v->a[16766] = anon_sym_GT_PIPE;
	v->a[16767] = anon_sym_LT_AMP_DASH;
	v->a[16768] = anon_sym_GT_AMP_DASH;
	v->a[16769] = anon_sym_LT_LT;
	v->a[16770] = anon_sym_LT_LT_DASH;
	v->a[16771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16772] = sym__special_character;
	v->a[16773] = anon_sym_DQUOTE;
	v->a[16774] = sym_raw_string;
	v->a[16775] = aux_sym_number_token1;
	v->a[16776] = aux_sym_number_token2;
	v->a[16777] = anon_sym_DOLLAR_LBRACE;
	v->a[16778] = anon_sym_DOLLAR_LPAREN;
	v->a[16779] = anon_sym_BQUOTE;
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = anon_sym_DOLLAR_BQUOTE;
	v->a[16781] = sym_word;
	v->a[16782] = 6;
	v->a[16783] = actions(3);
	v->a[16784] = 1;
	v->a[16785] = sym_comment;
	v->a[16786] = actions(2682);
	v->a[16787] = 1;
	v->a[16788] = sym_variable_name;
	v->a[16789] = actions(2680);
	v->a[16790] = 2;
	v->a[16791] = aux_sym__simple_variable_name_token1;
	v->a[16792] = aux_sym__multiline_variable_name_token1;
	v->a[16793] = actions(828);
	v->a[16794] = 4;
	v->a[16795] = sym_file_descriptor;
	v->a[16796] = sym_test_operator;
	v->a[16797] = sym__bare_dollar;
	v->a[16798] = sym__brace_start;
	v->a[16799] = actions(2678);
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
