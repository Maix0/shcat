/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_511.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2555(t_small_parse_table_array *v)
{
	v->a[51100] = sym_string;
	v->a[51101] = sym_simple_expansion;
	v->a[51102] = sym_expansion;
	v->a[51103] = sym_command_substitution;
	v->a[51104] = actions(497);
	v->a[51105] = 16;
	v->a[51106] = anon_sym_LT;
	v->a[51107] = anon_sym_GT;
	v->a[51108] = anon_sym_GT_GT;
	v->a[51109] = anon_sym_LT_AMP;
	v->a[51110] = anon_sym_GT_AMP;
	v->a[51111] = anon_sym_GT_PIPE;
	v->a[51112] = anon_sym_LT_GT;
	v->a[51113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51114] = anon_sym_DOLLAR;
	v->a[51115] = anon_sym_DQUOTE;
	v->a[51116] = sym_raw_string;
	v->a[51117] = sym_number;
	v->a[51118] = anon_sym_DOLLAR_LBRACE;
	v->a[51119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2556(v);
}

void	small_parse_table_2556(t_small_parse_table_array *v)
{
	v->a[51120] = anon_sym_BQUOTE;
	v->a[51121] = sym_word;
	v->a[51122] = 6;
	v->a[51123] = actions(3);
	v->a[51124] = 1;
	v->a[51125] = sym_comment;
	v->a[51126] = actions(1172);
	v->a[51127] = 1;
	v->a[51128] = sym_file_descriptor;
	v->a[51129] = actions(1774);
	v->a[51130] = 1;
	v->a[51131] = aux_sym_concatenation_token1;
	v->a[51132] = actions(1776);
	v->a[51133] = 1;
	v->a[51134] = sym__concat;
	v->a[51135] = state(884);
	v->a[51136] = 1;
	v->a[51137] = aux_sym_concatenation_repeat1;
	v->a[51138] = actions(1168);
	v->a[51139] = 21;
	small_parse_table_2557(v);
}

void	small_parse_table_2557(t_small_parse_table_array *v)
{
	v->a[51140] = anon_sym_PIPE;
	v->a[51141] = anon_sym_AMP_AMP;
	v->a[51142] = anon_sym_PIPE_PIPE;
	v->a[51143] = anon_sym_LT;
	v->a[51144] = anon_sym_GT;
	v->a[51145] = anon_sym_GT_GT;
	v->a[51146] = anon_sym_LT_AMP;
	v->a[51147] = anon_sym_GT_AMP;
	v->a[51148] = anon_sym_GT_PIPE;
	v->a[51149] = anon_sym_LT_GT;
	v->a[51150] = anon_sym_LT_LT;
	v->a[51151] = anon_sym_LT_LT_DASH;
	v->a[51152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51153] = anon_sym_DOLLAR;
	v->a[51154] = anon_sym_DQUOTE;
	v->a[51155] = sym_raw_string;
	v->a[51156] = sym_number;
	v->a[51157] = anon_sym_DOLLAR_LBRACE;
	v->a[51158] = anon_sym_DOLLAR_LPAREN;
	v->a[51159] = anon_sym_BQUOTE;
	small_parse_table_2558(v);
}

void	small_parse_table_2558(t_small_parse_table_array *v)
{
	v->a[51160] = sym_word;
	v->a[51161] = 3;
	v->a[51162] = actions(3);
	v->a[51163] = 1;
	v->a[51164] = sym_comment;
	v->a[51165] = actions(1093);
	v->a[51166] = 3;
	v->a[51167] = sym_file_descriptor;
	v->a[51168] = sym__concat;
	v->a[51169] = sym_variable_name;
	v->a[51170] = actions(1088);
	v->a[51171] = 22;
	v->a[51172] = anon_sym_PIPE;
	v->a[51173] = anon_sym_AMP_AMP;
	v->a[51174] = anon_sym_PIPE_PIPE;
	v->a[51175] = anon_sym_LT;
	v->a[51176] = anon_sym_GT;
	v->a[51177] = anon_sym_GT_GT;
	v->a[51178] = anon_sym_LT_AMP;
	v->a[51179] = anon_sym_GT_AMP;
	small_parse_table_2559(v);
}

void	small_parse_table_2559(t_small_parse_table_array *v)
{
	v->a[51180] = anon_sym_GT_PIPE;
	v->a[51181] = anon_sym_LT_GT;
	v->a[51182] = anon_sym_LT_LT;
	v->a[51183] = anon_sym_LT_LT_DASH;
	v->a[51184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51185] = aux_sym_concatenation_token1;
	v->a[51186] = anon_sym_DOLLAR;
	v->a[51187] = anon_sym_DQUOTE;
	v->a[51188] = sym_raw_string;
	v->a[51189] = sym_number;
	v->a[51190] = anon_sym_DOLLAR_LBRACE;
	v->a[51191] = anon_sym_DOLLAR_LPAREN;
	v->a[51192] = anon_sym_BQUOTE;
	v->a[51193] = sym_word;
	v->a[51194] = 12;
	v->a[51195] = actions(3);
	v->a[51196] = 1;
	v->a[51197] = sym_comment;
	v->a[51198] = actions(1781);
	v->a[51199] = 1;
	small_parse_table_2560(v);
}

/* EOF small_parse_table_511.c */
