/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1957.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9785(t_small_parse_table_array *v)
{
	v->a[195700] = anon_sym_LT_AMP_DASH;
	v->a[195701] = anon_sym_GT_AMP_DASH;
	v->a[195702] = anon_sym_LT_LT_DASH;
	v->a[195703] = 21;
	v->a[195704] = actions(71);
	v->a[195705] = 1;
	v->a[195706] = sym_comment;
	v->a[195707] = actions(8565);
	v->a[195708] = 1;
	v->a[195709] = sym_word;
	v->a[195710] = actions(8571);
	v->a[195711] = 1;
	v->a[195712] = anon_sym_DOLLAR_LBRACK;
	v->a[195713] = actions(8573);
	v->a[195714] = 1;
	v->a[195715] = anon_sym_DOLLAR;
	v->a[195716] = actions(8575);
	v->a[195717] = 1;
	v->a[195718] = sym__special_character;
	v->a[195719] = actions(8577);
	small_parse_table_9786(v);
}

void	small_parse_table_9786(t_small_parse_table_array *v)
{
	v->a[195720] = 1;
	v->a[195721] = anon_sym_DQUOTE;
	v->a[195722] = actions(8581);
	v->a[195723] = 1;
	v->a[195724] = aux_sym_number_token1;
	v->a[195725] = actions(8583);
	v->a[195726] = 1;
	v->a[195727] = aux_sym_number_token2;
	v->a[195728] = actions(8585);
	v->a[195729] = 1;
	v->a[195730] = anon_sym_DOLLAR_LBRACE;
	v->a[195731] = actions(8587);
	v->a[195732] = 1;
	v->a[195733] = anon_sym_DOLLAR_LPAREN;
	v->a[195734] = actions(8589);
	v->a[195735] = 1;
	v->a[195736] = anon_sym_BQUOTE;
	v->a[195737] = actions(8591);
	v->a[195738] = 1;
	v->a[195739] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9787(v);
}

void	small_parse_table_9787(t_small_parse_table_array *v)
{
	v->a[195740] = actions(8595);
	v->a[195741] = 1;
	v->a[195742] = sym_test_operator;
	v->a[195743] = actions(8597);
	v->a[195744] = 1;
	v->a[195745] = sym__brace_start;
	v->a[195746] = actions(8746);
	v->a[195747] = 1;
	v->a[195748] = anon_sym_RPAREN;
	v->a[195749] = state(5365);
	v->a[195750] = 1;
	v->a[195751] = aux_sym__literal_repeat1;
	v->a[195752] = actions(8567);
	v->a[195753] = 2;
	v->a[195754] = anon_sym_LPAREN_LPAREN;
	v->a[195755] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195756] = actions(8579);
	v->a[195757] = 2;
	v->a[195758] = sym_raw_string;
	v->a[195759] = sym_ansi_c_string;
	small_parse_table_9788(v);
}

void	small_parse_table_9788(t_small_parse_table_array *v)
{
	v->a[195760] = actions(8593);
	v->a[195761] = 2;
	v->a[195762] = anon_sym_LT_LPAREN;
	v->a[195763] = anon_sym_GT_LPAREN;
	v->a[195764] = state(3576);
	v->a[195765] = 2;
	v->a[195766] = sym_concatenation;
	v->a[195767] = aux_sym_for_statement_repeat1;
	v->a[195768] = state(5045);
	v->a[195769] = 9;
	v->a[195770] = sym_arithmetic_expansion;
	v->a[195771] = sym_brace_expression;
	v->a[195772] = sym_string;
	v->a[195773] = sym_translated_string;
	v->a[195774] = sym_number;
	v->a[195775] = sym_simple_expansion;
	v->a[195776] = sym_expansion;
	v->a[195777] = sym_command_substitution;
	v->a[195778] = sym_process_substitution;
	v->a[195779] = 8;
	small_parse_table_9789(v);
}

void	small_parse_table_9789(t_small_parse_table_array *v)
{
	v->a[195780] = actions(3);
	v->a[195781] = 1;
	v->a[195782] = sym_comment;
	v->a[195783] = actions(1241);
	v->a[195784] = 1;
	v->a[195785] = sym_file_descriptor;
	v->a[195786] = actions(4084);
	v->a[195787] = 1;
	v->a[195788] = anon_sym_DQUOTE;
	v->a[195789] = actions(7613);
	v->a[195790] = 1;
	v->a[195791] = sym_variable_name;
	v->a[195792] = state(4606);
	v->a[195793] = 1;
	v->a[195794] = sym_string;
	v->a[195795] = actions(7611);
	v->a[195796] = 2;
	v->a[195797] = aux_sym__simple_variable_name_token1;
	v->a[195798] = aux_sym__multiline_variable_name_token1;
	v->a[195799] = actions(7609);
	small_parse_table_9790(v);
}

/* EOF small_parse_table_1957.c */
