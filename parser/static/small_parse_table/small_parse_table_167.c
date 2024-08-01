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
	v->a[16700] = actions(515);
	v->a[16701] = 1;
	v->a[16702] = anon_sym_DOLLAR_LBRACE;
	v->a[16703] = actions(518);
	v->a[16704] = 1;
	v->a[16705] = anon_sym_DOLLAR_LPAREN;
	v->a[16706] = actions(521);
	v->a[16707] = 1;
	v->a[16708] = anon_sym_BQUOTE;
	v->a[16709] = actions(524);
	v->a[16710] = 1;
	v->a[16711] = sym__bare_dollar;
	v->a[16712] = state(167);
	v->a[16713] = 1;
	v->a[16714] = aux_sym_command_repeat2;
	v->a[16715] = state(564);
	v->a[16716] = 1;
	v->a[16717] = sym_concatenation;
	v->a[16718] = actions(503);
	v->a[16719] = 3;
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = sym_raw_string;
	v->a[16721] = sym_number;
	v->a[16722] = sym_word;
	v->a[16723] = state(273);
	v->a[16724] = 5;
	v->a[16725] = sym_arithmetic_expansion;
	v->a[16726] = sym_string;
	v->a[16727] = sym_simple_expansion;
	v->a[16728] = sym_expansion;
	v->a[16729] = sym_command_substitution;
	v->a[16730] = actions(455);
	v->a[16731] = 10;
	v->a[16732] = anon_sym_PIPE;
	v->a[16733] = anon_sym_SEMI_SEMI;
	v->a[16734] = anon_sym_AMP_AMP;
	v->a[16735] = anon_sym_PIPE_PIPE;
	v->a[16736] = anon_sym_LT;
	v->a[16737] = anon_sym_GT;
	v->a[16738] = anon_sym_GT_GT;
	v->a[16739] = anon_sym_LT_LT;
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = aux_sym_heredoc_redirect_token1;
	v->a[16741] = anon_sym_SEMI;
	v->a[16742] = 5;
	v->a[16743] = actions(3);
	v->a[16744] = 1;
	v->a[16745] = sym_comment;
	v->a[16746] = actions(423);
	v->a[16747] = 1;
	v->a[16748] = sym_variable_name;
	v->a[16749] = state(160);
	v->a[16750] = 2;
	v->a[16751] = sym_concatenation;
	v->a[16752] = aux_sym_for_statement_repeat1;
	v->a[16753] = state(282);
	v->a[16754] = 5;
	v->a[16755] = sym_arithmetic_expansion;
	v->a[16756] = sym_string;
	v->a[16757] = sym_simple_expansion;
	v->a[16758] = sym_expansion;
	v->a[16759] = sym_command_substitution;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = actions(421);
	v->a[16761] = 20;
	v->a[16762] = anon_sym_esac;
	v->a[16763] = anon_sym_PIPE;
	v->a[16764] = anon_sym_SEMI_SEMI;
	v->a[16765] = anon_sym_AMP_AMP;
	v->a[16766] = anon_sym_PIPE_PIPE;
	v->a[16767] = anon_sym_LT;
	v->a[16768] = anon_sym_GT;
	v->a[16769] = anon_sym_GT_GT;
	v->a[16770] = anon_sym_LT_LT;
	v->a[16771] = aux_sym_heredoc_redirect_token1;
	v->a[16772] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16773] = anon_sym_DOLLAR;
	v->a[16774] = anon_sym_DQUOTE;
	v->a[16775] = sym_raw_string;
	v->a[16776] = sym_number;
	v->a[16777] = anon_sym_DOLLAR_LBRACE;
	v->a[16778] = anon_sym_DOLLAR_LPAREN;
	v->a[16779] = anon_sym_BQUOTE;
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = sym_word;
	v->a[16781] = anon_sym_SEMI;
	v->a[16782] = 5;
	v->a[16783] = actions(3);
	v->a[16784] = 1;
	v->a[16785] = sym_comment;
	v->a[16786] = actions(423);
	v->a[16787] = 2;
	v->a[16788] = sym_variable_name;
	v->a[16789] = ts_builtin_sym_end;
	v->a[16790] = state(165);
	v->a[16791] = 2;
	v->a[16792] = sym_concatenation;
	v->a[16793] = aux_sym_for_statement_repeat1;
	v->a[16794] = state(258);
	v->a[16795] = 5;
	v->a[16796] = sym_arithmetic_expansion;
	v->a[16797] = sym_string;
	v->a[16798] = sym_simple_expansion;
	v->a[16799] = sym_expansion;
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
