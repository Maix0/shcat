/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1897.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9485(t_small_parse_table_array *v)
{
	v->a[189700] = 1;
	v->a[189701] = sym_test_operator;
	v->a[189702] = state(1742);
	v->a[189703] = 1;
	v->a[189704] = aux_sym__literal_repeat1;
	v->a[189705] = actions(8174);
	v->a[189706] = 2;
	v->a[189707] = anon_sym_LPAREN_LPAREN;
	v->a[189708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189709] = actions(8200);
	v->a[189710] = 2;
	v->a[189711] = anon_sym_LT_LPAREN;
	v->a[189712] = anon_sym_GT_LPAREN;
	v->a[189713] = actions(8222);
	v->a[189714] = 2;
	v->a[189715] = sym_raw_string;
	v->a[189716] = sym_ansi_c_string;
	v->a[189717] = state(1959);
	v->a[189718] = 2;
	v->a[189719] = sym_concatenation;
	small_parse_table_9486(v);
}

void	small_parse_table_9486(t_small_parse_table_array *v)
{
	v->a[189720] = sym_array;
	v->a[189721] = state(1355);
	v->a[189722] = 9;
	v->a[189723] = sym_arithmetic_expansion;
	v->a[189724] = sym_brace_expression;
	v->a[189725] = sym_string;
	v->a[189726] = sym_translated_string;
	v->a[189727] = sym_number;
	v->a[189728] = sym_simple_expansion;
	v->a[189729] = sym_expansion;
	v->a[189730] = sym_command_substitution;
	v->a[189731] = sym_process_substitution;
	v->a[189732] = 3;
	v->a[189733] = actions(71);
	v->a[189734] = 1;
	v->a[189735] = sym_comment;
	v->a[189736] = actions(1308);
	v->a[189737] = 11;
	v->a[189738] = anon_sym_LT;
	v->a[189739] = anon_sym_GT;
	small_parse_table_9487(v);
}

void	small_parse_table_9487(t_small_parse_table_array *v)
{
	v->a[189740] = anon_sym_AMP_GT;
	v->a[189741] = anon_sym_LT_AMP;
	v->a[189742] = anon_sym_GT_AMP;
	v->a[189743] = anon_sym_DOLLAR;
	v->a[189744] = aux_sym_number_token1;
	v->a[189745] = aux_sym_number_token2;
	v->a[189746] = anon_sym_DOLLAR_LPAREN;
	v->a[189747] = anon_sym_BQUOTE;
	v->a[189748] = sym_word;
	v->a[189749] = actions(1310);
	v->a[189750] = 23;
	v->a[189751] = sym_file_descriptor;
	v->a[189752] = sym__concat;
	v->a[189753] = sym_variable_name;
	v->a[189754] = sym_test_operator;
	v->a[189755] = sym__brace_start;
	v->a[189756] = anon_sym_LPAREN_LPAREN;
	v->a[189757] = anon_sym_GT_GT;
	v->a[189758] = anon_sym_AMP_GT_GT;
	v->a[189759] = anon_sym_GT_PIPE;
	small_parse_table_9488(v);
}

void	small_parse_table_9488(t_small_parse_table_array *v)
{
	v->a[189760] = anon_sym_LT_AMP_DASH;
	v->a[189761] = anon_sym_GT_AMP_DASH;
	v->a[189762] = anon_sym_LT_LT_LT;
	v->a[189763] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189764] = anon_sym_DOLLAR_LBRACK;
	v->a[189765] = aux_sym_concatenation_token1;
	v->a[189766] = sym__special_character;
	v->a[189767] = anon_sym_DQUOTE;
	v->a[189768] = sym_raw_string;
	v->a[189769] = sym_ansi_c_string;
	v->a[189770] = anon_sym_DOLLAR_LBRACE;
	v->a[189771] = anon_sym_DOLLAR_BQUOTE;
	v->a[189772] = anon_sym_LT_LPAREN;
	v->a[189773] = anon_sym_GT_LPAREN;
	v->a[189774] = 3;
	v->a[189775] = actions(71);
	v->a[189776] = 1;
	v->a[189777] = sym_comment;
	v->a[189778] = actions(1304);
	v->a[189779] = 11;
	small_parse_table_9489(v);
}

void	small_parse_table_9489(t_small_parse_table_array *v)
{
	v->a[189780] = anon_sym_LT;
	v->a[189781] = anon_sym_GT;
	v->a[189782] = anon_sym_AMP_GT;
	v->a[189783] = anon_sym_LT_AMP;
	v->a[189784] = anon_sym_GT_AMP;
	v->a[189785] = anon_sym_DOLLAR;
	v->a[189786] = aux_sym_number_token1;
	v->a[189787] = aux_sym_number_token2;
	v->a[189788] = anon_sym_DOLLAR_LPAREN;
	v->a[189789] = anon_sym_BQUOTE;
	v->a[189790] = sym_word;
	v->a[189791] = actions(1306);
	v->a[189792] = 23;
	v->a[189793] = sym_file_descriptor;
	v->a[189794] = sym__concat;
	v->a[189795] = sym_variable_name;
	v->a[189796] = sym_test_operator;
	v->a[189797] = sym__brace_start;
	v->a[189798] = anon_sym_LPAREN_LPAREN;
	v->a[189799] = anon_sym_GT_GT;
	small_parse_table_9490(v);
}

/* EOF small_parse_table_1897.c */
