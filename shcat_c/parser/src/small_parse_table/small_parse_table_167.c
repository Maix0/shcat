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
	v->a[16701] = aux_sym__literal_repeat1;
	v->a[16702] = actions(2732);
	v->a[16703] = 2;
	v->a[16704] = anon_sym_LPAREN_LPAREN;
	v->a[16705] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16706] = actions(2765);
	v->a[16707] = 2;
	v->a[16708] = anon_sym_LT_LPAREN;
	v->a[16709] = anon_sym_GT_LPAREN;
	v->a[16710] = state(704);
	v->a[16711] = 2;
	v->a[16712] = sym_concatenation;
	v->a[16713] = aux_sym_for_statement_repeat1;
	v->a[16714] = actions(2216);
	v->a[16715] = 3;
	v->a[16716] = sym_file_descriptor;
	v->a[16717] = sym_variable_name;
	v->a[16718] = aux_sym_heredoc_redirect_token1;
	v->a[16719] = actions(3517);
	small_parse_table_836(v);
}

void	small_parse_table_836(t_small_parse_table_array *v)
{
	v->a[16720] = 3;
	v->a[16721] = sym_raw_string;
	v->a[16722] = sym_ansi_c_string;
	v->a[16723] = sym_word;
	v->a[16724] = state(1688);
	v->a[16725] = 9;
	v->a[16726] = sym_arithmetic_expansion;
	v->a[16727] = sym_brace_expression;
	v->a[16728] = sym_string;
	v->a[16729] = sym_translated_string;
	v->a[16730] = sym_number;
	v->a[16731] = sym_simple_expansion;
	v->a[16732] = sym_expansion;
	v->a[16733] = sym_command_substitution;
	v->a[16734] = sym_process_substitution;
	v->a[16735] = actions(2214);
	v->a[16736] = 20;
	v->a[16737] = anon_sym_SEMI;
	v->a[16738] = anon_sym_PIPE_PIPE;
	v->a[16739] = anon_sym_AMP_AMP;
	small_parse_table_837(v);
}

void	small_parse_table_837(t_small_parse_table_array *v)
{
	v->a[16740] = anon_sym_PIPE;
	v->a[16741] = anon_sym_AMP;
	v->a[16742] = anon_sym_LT;
	v->a[16743] = anon_sym_GT;
	v->a[16744] = anon_sym_LT_LT;
	v->a[16745] = anon_sym_GT_GT;
	v->a[16746] = anon_sym_SEMI_SEMI;
	v->a[16747] = anon_sym_PIPE_AMP;
	v->a[16748] = anon_sym_AMP_GT;
	v->a[16749] = anon_sym_AMP_GT_GT;
	v->a[16750] = anon_sym_LT_AMP;
	v->a[16751] = anon_sym_GT_AMP;
	v->a[16752] = anon_sym_GT_PIPE;
	v->a[16753] = anon_sym_LT_AMP_DASH;
	v->a[16754] = anon_sym_GT_AMP_DASH;
	v->a[16755] = anon_sym_LT_LT_DASH;
	v->a[16756] = anon_sym_LT_LT_LT;
	v->a[16757] = 21;
	v->a[16758] = actions(3);
	v->a[16759] = 1;
	small_parse_table_838(v);
}

void	small_parse_table_838(t_small_parse_table_array *v)
{
	v->a[16760] = sym_comment;
	v->a[16761] = actions(3213);
	v->a[16762] = 1;
	v->a[16763] = anon_sym_DQUOTE;
	v->a[16764] = actions(3475);
	v->a[16765] = 1;
	v->a[16766] = anon_sym_DOLLAR_LBRACK;
	v->a[16767] = actions(3477);
	v->a[16768] = 1;
	v->a[16769] = anon_sym_DOLLAR;
	v->a[16770] = actions(3479);
	v->a[16771] = 1;
	v->a[16772] = sym__special_character;
	v->a[16773] = actions(3481);
	v->a[16774] = 1;
	v->a[16775] = aux_sym_number_token1;
	v->a[16776] = actions(3483);
	v->a[16777] = 1;
	v->a[16778] = aux_sym_number_token2;
	v->a[16779] = actions(3485);
	small_parse_table_839(v);
}

void	small_parse_table_839(t_small_parse_table_array *v)
{
	v->a[16780] = 1;
	v->a[16781] = anon_sym_DOLLAR_LBRACE;
	v->a[16782] = actions(3487);
	v->a[16783] = 1;
	v->a[16784] = anon_sym_DOLLAR_LPAREN;
	v->a[16785] = actions(3489);
	v->a[16786] = 1;
	v->a[16787] = anon_sym_BQUOTE;
	v->a[16788] = actions(3491);
	v->a[16789] = 1;
	v->a[16790] = anon_sym_DOLLAR_BQUOTE;
	v->a[16791] = actions(3495);
	v->a[16792] = 1;
	v->a[16793] = sym_test_operator;
	v->a[16794] = actions(3497);
	v->a[16795] = 1;
	v->a[16796] = sym__brace_start;
	v->a[16797] = state(2024);
	v->a[16798] = 1;
	v->a[16799] = aux_sym__literal_repeat1;
	small_parse_table_840(v);
}

/* EOF small_parse_table_167.c */
