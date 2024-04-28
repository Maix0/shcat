/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1937.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9685(t_small_parse_table_array *v)
{
	v->a[193700] = 1;
	v->a[193701] = anon_sym_DQUOTE;
	v->a[193702] = actions(8581);
	v->a[193703] = 1;
	v->a[193704] = aux_sym_number_token1;
	v->a[193705] = actions(8583);
	v->a[193706] = 1;
	v->a[193707] = aux_sym_number_token2;
	v->a[193708] = actions(8585);
	v->a[193709] = 1;
	v->a[193710] = anon_sym_DOLLAR_LBRACE;
	v->a[193711] = actions(8587);
	v->a[193712] = 1;
	v->a[193713] = anon_sym_DOLLAR_LPAREN;
	v->a[193714] = actions(8589);
	v->a[193715] = 1;
	v->a[193716] = anon_sym_BQUOTE;
	v->a[193717] = actions(8591);
	v->a[193718] = 1;
	v->a[193719] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9686(v);
}

void	small_parse_table_9686(t_small_parse_table_array *v)
{
	v->a[193720] = actions(8595);
	v->a[193721] = 1;
	v->a[193722] = sym_test_operator;
	v->a[193723] = actions(8597);
	v->a[193724] = 1;
	v->a[193725] = sym__brace_start;
	v->a[193726] = actions(8641);
	v->a[193727] = 1;
	v->a[193728] = anon_sym_RPAREN;
	v->a[193729] = state(5365);
	v->a[193730] = 1;
	v->a[193731] = aux_sym__literal_repeat1;
	v->a[193732] = actions(8567);
	v->a[193733] = 2;
	v->a[193734] = anon_sym_LPAREN_LPAREN;
	v->a[193735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193736] = actions(8579);
	v->a[193737] = 2;
	v->a[193738] = sym_raw_string;
	v->a[193739] = sym_ansi_c_string;
	small_parse_table_9687(v);
}

void	small_parse_table_9687(t_small_parse_table_array *v)
{
	v->a[193740] = actions(8593);
	v->a[193741] = 2;
	v->a[193742] = anon_sym_LT_LPAREN;
	v->a[193743] = anon_sym_GT_LPAREN;
	v->a[193744] = state(3604);
	v->a[193745] = 2;
	v->a[193746] = sym_concatenation;
	v->a[193747] = aux_sym_for_statement_repeat1;
	v->a[193748] = state(5045);
	v->a[193749] = 9;
	v->a[193750] = sym_arithmetic_expansion;
	v->a[193751] = sym_brace_expression;
	v->a[193752] = sym_string;
	v->a[193753] = sym_translated_string;
	v->a[193754] = sym_number;
	v->a[193755] = sym_simple_expansion;
	v->a[193756] = sym_expansion;
	v->a[193757] = sym_command_substitution;
	v->a[193758] = sym_process_substitution;
	v->a[193759] = 3;
	small_parse_table_9688(v);
}

void	small_parse_table_9688(t_small_parse_table_array *v)
{
	v->a[193760] = actions(71);
	v->a[193761] = 1;
	v->a[193762] = sym_comment;
	v->a[193763] = actions(4370);
	v->a[193764] = 10;
	v->a[193765] = anon_sym_LT;
	v->a[193766] = anon_sym_GT;
	v->a[193767] = anon_sym_AMP_GT;
	v->a[193768] = anon_sym_LT_AMP;
	v->a[193769] = anon_sym_GT_AMP;
	v->a[193770] = anon_sym_DOLLAR;
	v->a[193771] = aux_sym_number_token1;
	v->a[193772] = aux_sym_number_token2;
	v->a[193773] = anon_sym_DOLLAR_LPAREN;
	v->a[193774] = sym_word;
	v->a[193775] = actions(4372);
	v->a[193776] = 22;
	v->a[193777] = sym_file_descriptor;
	v->a[193778] = sym_variable_name;
	v->a[193779] = sym_test_operator;
	small_parse_table_9689(v);
}

void	small_parse_table_9689(t_small_parse_table_array *v)
{
	v->a[193780] = sym__brace_start;
	v->a[193781] = anon_sym_LPAREN_LPAREN;
	v->a[193782] = anon_sym_GT_GT;
	v->a[193783] = anon_sym_AMP_GT_GT;
	v->a[193784] = anon_sym_GT_PIPE;
	v->a[193785] = anon_sym_LT_AMP_DASH;
	v->a[193786] = anon_sym_GT_AMP_DASH;
	v->a[193787] = anon_sym_LT_LT_LT;
	v->a[193788] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193789] = anon_sym_DOLLAR_LBRACK;
	v->a[193790] = sym__special_character;
	v->a[193791] = anon_sym_DQUOTE;
	v->a[193792] = sym_raw_string;
	v->a[193793] = sym_ansi_c_string;
	v->a[193794] = anon_sym_DOLLAR_LBRACE;
	v->a[193795] = anon_sym_BQUOTE;
	v->a[193796] = anon_sym_DOLLAR_BQUOTE;
	v->a[193797] = anon_sym_LT_LPAREN;
	v->a[193798] = anon_sym_GT_LPAREN;
	v->a[193799] = 21;
	small_parse_table_9690(v);
}

/* EOF small_parse_table_1937.c */
