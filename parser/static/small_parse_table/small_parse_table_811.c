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
	v->a[81100] = actions(2967);
	v->a[81101] = 5;
	v->a[81102] = aux_sym_concatenation_token1;
	v->a[81103] = sym_raw_string;
	v->a[81104] = sym_number;
	v->a[81105] = sym__comment_word;
	v->a[81106] = sym_word;
	v->a[81107] = state(1693);
	v->a[81108] = 5;
	v->a[81109] = sym_arithmetic_expansion;
	v->a[81110] = sym_string;
	v->a[81111] = sym_simple_expansion;
	v->a[81112] = sym_expansion;
	v->a[81113] = sym_command_substitution;
	v->a[81114] = 12;
	v->a[81115] = actions(3);
	v->a[81116] = 1;
	v->a[81117] = sym_comment;
	v->a[81118] = actions(2911);
	v->a[81119] = 1;
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81121] = actions(2913);
	v->a[81122] = 1;
	v->a[81123] = anon_sym_DOLLAR;
	v->a[81124] = actions(2915);
	v->a[81125] = 1;
	v->a[81126] = anon_sym_DQUOTE;
	v->a[81127] = actions(2917);
	v->a[81128] = 1;
	v->a[81129] = anon_sym_DOLLAR_LBRACE;
	v->a[81130] = actions(2919);
	v->a[81131] = 1;
	v->a[81132] = anon_sym_DOLLAR_LPAREN;
	v->a[81133] = actions(2921);
	v->a[81134] = 1;
	v->a[81135] = anon_sym_BQUOTE;
	v->a[81136] = actions(3040);
	v->a[81137] = 1;
	v->a[81138] = sym__comment_word;
	v->a[81139] = actions(3042);
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = 1;
	v->a[81141] = sym__empty_value;
	v->a[81142] = state(669);
	v->a[81143] = 1;
	v->a[81144] = sym_concatenation;
	v->a[81145] = actions(3038);
	v->a[81146] = 3;
	v->a[81147] = sym_raw_string;
	v->a[81148] = sym_number;
	v->a[81149] = sym_word;
	v->a[81150] = state(343);
	v->a[81151] = 5;
	v->a[81152] = sym_arithmetic_expansion;
	v->a[81153] = sym_string;
	v->a[81154] = sym_simple_expansion;
	v->a[81155] = sym_expansion;
	v->a[81156] = sym_command_substitution;
	v->a[81157] = 10;
	v->a[81158] = actions(3);
	v->a[81159] = 1;
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = sym_comment;
	v->a[81161] = actions(718);
	v->a[81162] = 1;
	v->a[81163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81164] = actions(722);
	v->a[81165] = 1;
	v->a[81166] = anon_sym_DQUOTE;
	v->a[81167] = actions(724);
	v->a[81168] = 1;
	v->a[81169] = anon_sym_DOLLAR_LBRACE;
	v->a[81170] = actions(726);
	v->a[81171] = 1;
	v->a[81172] = anon_sym_DOLLAR_LPAREN;
	v->a[81173] = actions(728);
	v->a[81174] = 1;
	v->a[81175] = anon_sym_BQUOTE;
	v->a[81176] = actions(2977);
	v->a[81177] = 1;
	v->a[81178] = sym__bare_dollar;
	v->a[81179] = actions(3044);
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = 1;
	v->a[81181] = anon_sym_DOLLAR;
	v->a[81182] = actions(2973);
	v->a[81183] = 5;
	v->a[81184] = aux_sym_concatenation_token1;
	v->a[81185] = sym_raw_string;
	v->a[81186] = sym_number;
	v->a[81187] = sym__comment_word;
	v->a[81188] = sym_word;
	v->a[81189] = state(625);
	v->a[81190] = 5;
	v->a[81191] = sym_arithmetic_expansion;
	v->a[81192] = sym_string;
	v->a[81193] = sym_simple_expansion;
	v->a[81194] = sym_expansion;
	v->a[81195] = sym_command_substitution;
	v->a[81196] = 10;
	v->a[81197] = actions(3);
	v->a[81198] = 1;
	v->a[81199] = sym_comment;
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
