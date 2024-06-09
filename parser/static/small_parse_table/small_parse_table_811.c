/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_811.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4055(t_small_parse_table_array *v)
{
	v->a[81100] = sym__comment_word;
	v->a[81101] = sym_word;
	v->a[81102] = state(1997);
	v->a[81103] = 6;
	v->a[81104] = sym_arithmetic_expansion;
	v->a[81105] = sym_string;
	v->a[81106] = sym_number;
	v->a[81107] = sym_simple_expansion;
	v->a[81108] = sym_expansion;
	v->a[81109] = sym_command_substitution;
	v->a[81110] = 12;
	v->a[81111] = actions(3);
	v->a[81112] = 1;
	v->a[81113] = sym_comment;
	v->a[81114] = actions(1902);
	v->a[81115] = 1;
	v->a[81116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81117] = actions(1906);
	v->a[81118] = 1;
	v->a[81119] = anon_sym_DQUOTE;
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = actions(1908);
	v->a[81121] = 1;
	v->a[81122] = aux_sym_number_token1;
	v->a[81123] = actions(1910);
	v->a[81124] = 1;
	v->a[81125] = aux_sym_number_token2;
	v->a[81126] = actions(1912);
	v->a[81127] = 1;
	v->a[81128] = anon_sym_DOLLAR_LBRACE;
	v->a[81129] = actions(1914);
	v->a[81130] = 1;
	v->a[81131] = anon_sym_DOLLAR_LPAREN;
	v->a[81132] = actions(1916);
	v->a[81133] = 1;
	v->a[81134] = anon_sym_BQUOTE;
	v->a[81135] = actions(3326);
	v->a[81136] = 1;
	v->a[81137] = sym__bare_dollar;
	v->a[81138] = actions(3350);
	v->a[81139] = 1;
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = anon_sym_DOLLAR;
	v->a[81141] = actions(3324);
	v->a[81142] = 3;
	v->a[81143] = sym_raw_string;
	v->a[81144] = sym__comment_word;
	v->a[81145] = sym_word;
	v->a[81146] = state(1533);
	v->a[81147] = 6;
	v->a[81148] = sym_arithmetic_expansion;
	v->a[81149] = sym_string;
	v->a[81150] = sym_number;
	v->a[81151] = sym_simple_expansion;
	v->a[81152] = sym_expansion;
	v->a[81153] = sym_command_substitution;
	v->a[81154] = 12;
	v->a[81155] = actions(3);
	v->a[81156] = 1;
	v->a[81157] = sym_comment;
	v->a[81158] = actions(2929);
	v->a[81159] = 1;
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81161] = actions(2931);
	v->a[81162] = 1;
	v->a[81163] = anon_sym_DOLLAR;
	v->a[81164] = actions(2933);
	v->a[81165] = 1;
	v->a[81166] = anon_sym_DQUOTE;
	v->a[81167] = actions(2935);
	v->a[81168] = 1;
	v->a[81169] = aux_sym_number_token1;
	v->a[81170] = actions(2937);
	v->a[81171] = 1;
	v->a[81172] = aux_sym_number_token2;
	v->a[81173] = actions(2939);
	v->a[81174] = 1;
	v->a[81175] = anon_sym_DOLLAR_LBRACE;
	v->a[81176] = actions(2941);
	v->a[81177] = 1;
	v->a[81178] = anon_sym_DOLLAR_LPAREN;
	v->a[81179] = actions(2943);
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = 1;
	v->a[81181] = anon_sym_BQUOTE;
	v->a[81182] = actions(3352);
	v->a[81183] = 2;
	v->a[81184] = sym_raw_string;
	v->a[81185] = sym_word;
	v->a[81186] = state(367);
	v->a[81187] = 2;
	v->a[81188] = sym_concatenation;
	v->a[81189] = aux_sym_for_statement_repeat1;
	v->a[81190] = state(784);
	v->a[81191] = 6;
	v->a[81192] = sym_arithmetic_expansion;
	v->a[81193] = sym_string;
	v->a[81194] = sym_number;
	v->a[81195] = sym_simple_expansion;
	v->a[81196] = sym_expansion;
	v->a[81197] = sym_command_substitution;
	v->a[81198] = 12;
	v->a[81199] = actions(3);
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
