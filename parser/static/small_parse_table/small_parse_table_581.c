/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_581.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2905(t_small_parse_table_array *v)
{
	v->a[58100] = anon_sym_LT_GT;
	v->a[58101] = 6;
	v->a[58102] = actions(3);
	v->a[58103] = 1;
	v->a[58104] = sym_comment;
	v->a[58105] = actions(1902);
	v->a[58106] = 1;
	v->a[58107] = aux_sym_concatenation_token1;
	v->a[58108] = actions(1935);
	v->a[58109] = 1;
	v->a[58110] = sym__concat;
	v->a[58111] = state(1073);
	v->a[58112] = 1;
	v->a[58113] = aux_sym_concatenation_repeat1;
	v->a[58114] = actions(1200);
	v->a[58115] = 3;
	v->a[58116] = sym_file_descriptor;
	v->a[58117] = sym_variable_name;
	v->a[58118] = aux_sym_heredoc_redirect_token1;
	v->a[58119] = actions(1202);
	small_parse_table_2906(v);
}

void	small_parse_table_2906(t_small_parse_table_array *v)
{
	v->a[58120] = 14;
	v->a[58121] = anon_sym_PIPE;
	v->a[58122] = anon_sym_SEMI_SEMI;
	v->a[58123] = anon_sym_AMP_AMP;
	v->a[58124] = anon_sym_PIPE_PIPE;
	v->a[58125] = anon_sym_LT;
	v->a[58126] = anon_sym_GT;
	v->a[58127] = anon_sym_GT_GT;
	v->a[58128] = anon_sym_LT_AMP;
	v->a[58129] = anon_sym_GT_AMP;
	v->a[58130] = anon_sym_GT_PIPE;
	v->a[58131] = anon_sym_LT_GT;
	v->a[58132] = anon_sym_LT_LT;
	v->a[58133] = anon_sym_LT_LT_DASH;
	v->a[58134] = anon_sym_SEMI;
	v->a[58135] = 12;
	v->a[58136] = actions(3);
	v->a[58137] = 1;
	v->a[58138] = sym_comment;
	v->a[58139] = actions(1012);
	small_parse_table_2907(v);
}

void	small_parse_table_2907(t_small_parse_table_array *v)
{
	v->a[58140] = 1;
	v->a[58141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58142] = actions(1014);
	v->a[58143] = 1;
	v->a[58144] = anon_sym_DOLLAR;
	v->a[58145] = actions(1016);
	v->a[58146] = 1;
	v->a[58147] = anon_sym_DQUOTE;
	v->a[58148] = actions(1018);
	v->a[58149] = 1;
	v->a[58150] = anon_sym_DOLLAR_LBRACE;
	v->a[58151] = actions(1020);
	v->a[58152] = 1;
	v->a[58153] = anon_sym_DOLLAR_LPAREN;
	v->a[58154] = actions(1022);
	v->a[58155] = 1;
	v->a[58156] = anon_sym_BQUOTE;
	v->a[58157] = state(1916);
	v->a[58158] = 1;
	v->a[58159] = sym_terminator;
	small_parse_table_2908(v);
}

void	small_parse_table_2908(t_small_parse_table_array *v)
{
	v->a[58160] = state(1132);
	v->a[58161] = 2;
	v->a[58162] = sym_concatenation;
	v->a[58163] = aux_sym_for_statement_repeat1;
	v->a[58164] = actions(1973);
	v->a[58165] = 3;
	v->a[58166] = sym_raw_string;
	v->a[58167] = sym_number;
	v->a[58168] = sym_word;
	v->a[58169] = actions(1975);
	v->a[58170] = 3;
	v->a[58171] = anon_sym_SEMI_SEMI;
	v->a[58172] = aux_sym_heredoc_redirect_token1;
	v->a[58173] = anon_sym_SEMI;
	v->a[58174] = state(1424);
	v->a[58175] = 5;
	v->a[58176] = sym_arithmetic_expansion;
	v->a[58177] = sym_string;
	v->a[58178] = sym_simple_expansion;
	v->a[58179] = sym_expansion;
	small_parse_table_2909(v);
}

void	small_parse_table_2909(t_small_parse_table_array *v)
{
	v->a[58180] = sym_command_substitution;
	v->a[58181] = 5;
	v->a[58182] = actions(3);
	v->a[58183] = 1;
	v->a[58184] = sym_comment;
	v->a[58185] = actions(792);
	v->a[58186] = 1;
	v->a[58187] = sym_file_descriptor;
	v->a[58188] = actions(1332);
	v->a[58189] = 1;
	v->a[58190] = sym_variable_name;
	v->a[58191] = state(1360);
	v->a[58192] = 2;
	v->a[58193] = sym_variable_assignment;
	v->a[58194] = aux_sym__variable_assignments_repeat1;
	v->a[58195] = actions(780);
	v->a[58196] = 16;
	v->a[58197] = anon_sym_LT;
	v->a[58198] = anon_sym_GT;
	v->a[58199] = anon_sym_GT_GT;
	small_parse_table_2910(v);
}

/* EOF small_parse_table_581.c */
