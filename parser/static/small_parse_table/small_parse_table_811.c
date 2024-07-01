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
	v->a[81100] = anon_sym_SEMI_SEMI;
	v->a[81101] = aux_sym_heredoc_redirect_token1;
	v->a[81102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81103] = anon_sym_AMP;
	v->a[81104] = aux_sym_concatenation_token1;
	v->a[81105] = anon_sym_DOLLAR;
	v->a[81106] = anon_sym_DQUOTE;
	v->a[81107] = sym_raw_string;
	v->a[81108] = sym_number;
	v->a[81109] = anon_sym_DOLLAR_LBRACE;
	v->a[81110] = anon_sym_DOLLAR_LPAREN;
	v->a[81111] = anon_sym_BQUOTE;
	v->a[81112] = sym_word;
	v->a[81113] = anon_sym_SEMI;
	v->a[81114] = 10;
	v->a[81115] = actions(3);
	v->a[81116] = 1;
	v->a[81117] = sym_comment;
	v->a[81118] = actions(2758);
	v->a[81119] = 1;
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81121] = actions(2762);
	v->a[81122] = 1;
	v->a[81123] = anon_sym_DQUOTE;
	v->a[81124] = actions(2764);
	v->a[81125] = 1;
	v->a[81126] = anon_sym_DOLLAR_LBRACE;
	v->a[81127] = actions(2766);
	v->a[81128] = 1;
	v->a[81129] = anon_sym_DOLLAR_LPAREN;
	v->a[81130] = actions(2768);
	v->a[81131] = 1;
	v->a[81132] = anon_sym_BQUOTE;
	v->a[81133] = actions(2925);
	v->a[81134] = 1;
	v->a[81135] = anon_sym_DOLLAR;
	v->a[81136] = state(1991);
	v->a[81137] = 1;
	v->a[81138] = sym_concatenation;
	v->a[81139] = actions(3168);
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = 3;
	v->a[81141] = sym_raw_string;
	v->a[81142] = sym_number;
	v->a[81143] = sym_word;
	v->a[81144] = state(1939);
	v->a[81145] = 5;
	v->a[81146] = sym_arithmetic_expansion;
	v->a[81147] = sym_string;
	v->a[81148] = sym_simple_expansion;
	v->a[81149] = sym_expansion;
	v->a[81150] = sym_command_substitution;
	v->a[81151] = 3;
	v->a[81152] = actions(3);
	v->a[81153] = 1;
	v->a[81154] = sym_comment;
	v->a[81155] = actions(1037);
	v->a[81156] = 1;
	v->a[81157] = sym__concat;
	v->a[81158] = actions(1035);
	v->a[81159] = 14;
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = anon_sym_SEMI_SEMI;
	v->a[81161] = aux_sym_heredoc_redirect_token1;
	v->a[81162] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81163] = anon_sym_AMP;
	v->a[81164] = aux_sym_concatenation_token1;
	v->a[81165] = anon_sym_DOLLAR;
	v->a[81166] = anon_sym_DQUOTE;
	v->a[81167] = sym_raw_string;
	v->a[81168] = sym_number;
	v->a[81169] = anon_sym_DOLLAR_LBRACE;
	v->a[81170] = anon_sym_DOLLAR_LPAREN;
	v->a[81171] = anon_sym_BQUOTE;
	v->a[81172] = sym_word;
	v->a[81173] = anon_sym_SEMI;
	v->a[81174] = 6;
	v->a[81175] = actions(3);
	v->a[81176] = 1;
	v->a[81177] = sym_comment;
	v->a[81178] = actions(3170);
	v->a[81179] = 1;
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = aux_sym_concatenation_token1;
	v->a[81181] = actions(3172);
	v->a[81182] = 1;
	v->a[81183] = sym__concat;
	v->a[81184] = state(1608);
	v->a[81185] = 1;
	v->a[81186] = aux_sym_concatenation_repeat1;
	v->a[81187] = actions(1085);
	v->a[81188] = 2;
	v->a[81189] = sym_file_descriptor;
	v->a[81190] = aux_sym_heredoc_redirect_token1;
	v->a[81191] = actions(1081);
	v->a[81192] = 10;
	v->a[81193] = anon_sym_AMP_AMP;
	v->a[81194] = anon_sym_PIPE_PIPE;
	v->a[81195] = anon_sym_LT;
	v->a[81196] = anon_sym_GT;
	v->a[81197] = anon_sym_GT_GT;
	v->a[81198] = anon_sym_LT_AMP;
	v->a[81199] = anon_sym_GT_AMP;
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
