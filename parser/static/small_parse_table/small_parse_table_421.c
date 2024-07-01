/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_421.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2105(t_small_parse_table_array *v)
{
	v->a[42100] = 1;
	v->a[42101] = anon_sym_BQUOTE;
	v->a[42102] = actions(359);
	v->a[42103] = 1;
	v->a[42104] = sym_variable_name;
	v->a[42105] = actions(1152);
	v->a[42106] = 1;
	v->a[42107] = sym_file_descriptor;
	v->a[42108] = state(182);
	v->a[42109] = 1;
	v->a[42110] = sym_command_name;
	v->a[42111] = state(603);
	v->a[42112] = 1;
	v->a[42113] = sym_concatenation;
	v->a[42114] = state(1225);
	v->a[42115] = 1;
	v->a[42116] = sym_file_redirect;
	v->a[42117] = state(1024);
	v->a[42118] = 2;
	v->a[42119] = sym_variable_assignment;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = aux_sym_command_repeat1;
	v->a[42121] = actions(61);
	v->a[42122] = 3;
	v->a[42123] = sym_raw_string;
	v->a[42124] = sym_number;
	v->a[42125] = sym_word;
	v->a[42126] = state(436);
	v->a[42127] = 5;
	v->a[42128] = sym_arithmetic_expansion;
	v->a[42129] = sym_string;
	v->a[42130] = sym_simple_expansion;
	v->a[42131] = sym_expansion;
	v->a[42132] = sym_command_substitution;
	v->a[42133] = actions(1150);
	v->a[42134] = 7;
	v->a[42135] = anon_sym_LT;
	v->a[42136] = anon_sym_GT;
	v->a[42137] = anon_sym_GT_GT;
	v->a[42138] = anon_sym_LT_AMP;
	v->a[42139] = anon_sym_GT_AMP;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = anon_sym_GT_PIPE;
	v->a[42141] = anon_sym_LT_GT;
	v->a[42142] = 4;
	v->a[42143] = actions(3);
	v->a[42144] = 1;
	v->a[42145] = sym_comment;
	v->a[42146] = actions(1439);
	v->a[42147] = 2;
	v->a[42148] = anon_sym_RPAREN;
	v->a[42149] = anon_sym_SEMI_SEMI;
	v->a[42150] = actions(1441);
	v->a[42151] = 2;
	v->a[42152] = sym_file_descriptor;
	v->a[42153] = sym_variable_name;
	v->a[42154] = actions(1437);
	v->a[42155] = 24;
	v->a[42156] = anon_sym_for;
	v->a[42157] = anon_sym_while;
	v->a[42158] = anon_sym_until;
	v->a[42159] = anon_sym_if;
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = anon_sym_case;
	v->a[42161] = anon_sym_LPAREN;
	v->a[42162] = anon_sym_LBRACE;
	v->a[42163] = anon_sym_BANG;
	v->a[42164] = anon_sym_LT;
	v->a[42165] = anon_sym_GT;
	v->a[42166] = anon_sym_GT_GT;
	v->a[42167] = anon_sym_LT_AMP;
	v->a[42168] = anon_sym_GT_AMP;
	v->a[42169] = anon_sym_GT_PIPE;
	v->a[42170] = anon_sym_LT_GT;
	v->a[42171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42172] = anon_sym_DOLLAR;
	v->a[42173] = anon_sym_DQUOTE;
	v->a[42174] = sym_raw_string;
	v->a[42175] = sym_number;
	v->a[42176] = anon_sym_DOLLAR_LBRACE;
	v->a[42177] = anon_sym_DOLLAR_LPAREN;
	v->a[42178] = anon_sym_BQUOTE;
	v->a[42179] = sym_word;
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = 7;
	v->a[42181] = actions(3);
	v->a[42182] = 1;
	v->a[42183] = sym_comment;
	v->a[42184] = actions(1045);
	v->a[42185] = 1;
	v->a[42186] = aux_sym_concatenation_token1;
	v->a[42187] = actions(1123);
	v->a[42188] = 1;
	v->a[42189] = sym__concat;
	v->a[42190] = actions(1496);
	v->a[42191] = 1;
	v->a[42192] = anon_sym_LPAREN;
	v->a[42193] = state(674);
	v->a[42194] = 1;
	v->a[42195] = aux_sym_concatenation_repeat1;
	v->a[42196] = actions(1055);
	v->a[42197] = 2;
	v->a[42198] = sym_file_descriptor;
	v->a[42199] = sym__bare_dollar;
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
