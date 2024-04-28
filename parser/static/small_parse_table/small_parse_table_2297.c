/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2297.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11485(t_small_parse_table_array *v)
{
	v->a[229700] = actions(320);
	v->a[229701] = 1;
	v->a[229702] = anon_sym_DQUOTE;
	v->a[229703] = actions(324);
	v->a[229704] = 1;
	v->a[229705] = aux_sym_number_token1;
	v->a[229706] = actions(326);
	v->a[229707] = 1;
	v->a[229708] = aux_sym_number_token2;
	v->a[229709] = actions(328);
	v->a[229710] = 1;
	v->a[229711] = anon_sym_DOLLAR_LBRACE;
	v->a[229712] = actions(330);
	v->a[229713] = 1;
	v->a[229714] = anon_sym_DOLLAR_LPAREN;
	v->a[229715] = actions(332);
	v->a[229716] = 1;
	v->a[229717] = anon_sym_BQUOTE;
	v->a[229718] = actions(334);
	v->a[229719] = 1;
	small_parse_table_11486(v);
}

void	small_parse_table_11486(t_small_parse_table_array *v)
{
	v->a[229720] = anon_sym_DOLLAR_BQUOTE;
	v->a[229721] = actions(344);
	v->a[229722] = 1;
	v->a[229723] = sym__brace_start;
	v->a[229724] = actions(9400);
	v->a[229725] = 1;
	v->a[229726] = sym_word;
	v->a[229727] = actions(9406);
	v->a[229728] = 1;
	v->a[229729] = sym__comment_word;
	v->a[229730] = actions(10882);
	v->a[229731] = 1;
	v->a[229732] = anon_sym_DOLLAR;
	v->a[229733] = actions(312);
	v->a[229734] = 2;
	v->a[229735] = anon_sym_LPAREN_LPAREN;
	v->a[229736] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[229737] = actions(336);
	v->a[229738] = 2;
	v->a[229739] = anon_sym_LT_LPAREN;
	small_parse_table_11487(v);
}

void	small_parse_table_11487(t_small_parse_table_array *v)
{
	v->a[229740] = anon_sym_GT_LPAREN;
	v->a[229741] = actions(9402);
	v->a[229742] = 2;
	v->a[229743] = sym_test_operator;
	v->a[229744] = sym__special_character;
	v->a[229745] = actions(9404);
	v->a[229746] = 3;
	v->a[229747] = sym__bare_dollar;
	v->a[229748] = sym_raw_string;
	v->a[229749] = sym_ansi_c_string;
	v->a[229750] = state(1037);
	v->a[229751] = 9;
	v->a[229752] = sym_arithmetic_expansion;
	v->a[229753] = sym_brace_expression;
	v->a[229754] = sym_string;
	v->a[229755] = sym_translated_string;
	v->a[229756] = sym_number;
	v->a[229757] = sym_simple_expansion;
	v->a[229758] = sym_expansion;
	v->a[229759] = sym_command_substitution;
	small_parse_table_11488(v);
}

void	small_parse_table_11488(t_small_parse_table_array *v)
{
	v->a[229760] = sym_process_substitution;
	v->a[229761] = 18;
	v->a[229762] = actions(3);
	v->a[229763] = 1;
	v->a[229764] = sym_comment;
	v->a[229765] = actions(8571);
	v->a[229766] = 1;
	v->a[229767] = anon_sym_DOLLAR_LBRACK;
	v->a[229768] = actions(8577);
	v->a[229769] = 1;
	v->a[229770] = anon_sym_DQUOTE;
	v->a[229771] = actions(8581);
	v->a[229772] = 1;
	v->a[229773] = aux_sym_number_token1;
	v->a[229774] = actions(8583);
	v->a[229775] = 1;
	v->a[229776] = aux_sym_number_token2;
	v->a[229777] = actions(8585);
	v->a[229778] = 1;
	v->a[229779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11489(v);
}

void	small_parse_table_11489(t_small_parse_table_array *v)
{
	v->a[229780] = actions(8587);
	v->a[229781] = 1;
	v->a[229782] = anon_sym_DOLLAR_LPAREN;
	v->a[229783] = actions(8589);
	v->a[229784] = 1;
	v->a[229785] = anon_sym_BQUOTE;
	v->a[229786] = actions(8591);
	v->a[229787] = 1;
	v->a[229788] = anon_sym_DOLLAR_BQUOTE;
	v->a[229789] = actions(8597);
	v->a[229790] = 1;
	v->a[229791] = sym__brace_start;
	v->a[229792] = actions(10014);
	v->a[229793] = 1;
	v->a[229794] = sym_word;
	v->a[229795] = actions(10020);
	v->a[229796] = 1;
	v->a[229797] = sym__comment_word;
	v->a[229798] = actions(10884);
	v->a[229799] = 1;
	small_parse_table_11490(v);
}

/* EOF small_parse_table_2297.c */
