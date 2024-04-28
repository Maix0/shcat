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
	v->a[81100] = actions(5946);
	v->a[81101] = 1;
	v->a[81102] = sym__concat;
	v->a[81103] = state(1694);
	v->a[81104] = 1;
	v->a[81105] = aux_sym_concatenation_repeat1;
	v->a[81106] = actions(5395);
	v->a[81107] = 4;
	v->a[81108] = sym_file_descriptor;
	v->a[81109] = sym_test_operator;
	v->a[81110] = sym__brace_start;
	v->a[81111] = aux_sym_heredoc_redirect_token1;
	v->a[81112] = actions(5393);
	v->a[81113] = 38;
	v->a[81114] = anon_sym_LPAREN_LPAREN;
	v->a[81115] = anon_sym_SEMI;
	v->a[81116] = anon_sym_PIPE_PIPE;
	v->a[81117] = anon_sym_AMP_AMP;
	v->a[81118] = anon_sym_PIPE;
	v->a[81119] = anon_sym_AMP;
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = anon_sym_LT;
	v->a[81121] = anon_sym_GT;
	v->a[81122] = anon_sym_LT_LT;
	v->a[81123] = anon_sym_GT_GT;
	v->a[81124] = anon_sym_RPAREN;
	v->a[81125] = anon_sym_SEMI_SEMI;
	v->a[81126] = anon_sym_PIPE_AMP;
	v->a[81127] = anon_sym_AMP_GT;
	v->a[81128] = anon_sym_AMP_GT_GT;
	v->a[81129] = anon_sym_LT_AMP;
	v->a[81130] = anon_sym_GT_AMP;
	v->a[81131] = anon_sym_GT_PIPE;
	v->a[81132] = anon_sym_LT_AMP_DASH;
	v->a[81133] = anon_sym_GT_AMP_DASH;
	v->a[81134] = anon_sym_LT_LT_DASH;
	v->a[81135] = anon_sym_LT_LT_LT;
	v->a[81136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81137] = anon_sym_DOLLAR_LBRACK;
	v->a[81138] = anon_sym_DOLLAR;
	v->a[81139] = sym__special_character;
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = anon_sym_DQUOTE;
	v->a[81141] = sym_raw_string;
	v->a[81142] = sym_ansi_c_string;
	v->a[81143] = aux_sym_number_token1;
	v->a[81144] = aux_sym_number_token2;
	v->a[81145] = anon_sym_DOLLAR_LBRACE;
	v->a[81146] = anon_sym_DOLLAR_LPAREN;
	v->a[81147] = anon_sym_BQUOTE;
	v->a[81148] = anon_sym_DOLLAR_BQUOTE;
	v->a[81149] = anon_sym_LT_LPAREN;
	v->a[81150] = anon_sym_GT_LPAREN;
	v->a[81151] = sym_word;
	v->a[81152] = 3;
	v->a[81153] = actions(3);
	v->a[81154] = 1;
	v->a[81155] = sym_comment;
	v->a[81156] = actions(1346);
	v->a[81157] = 5;
	v->a[81158] = sym_file_descriptor;
	v->a[81159] = sym__concat;
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = sym_test_operator;
	v->a[81161] = sym__brace_start;
	v->a[81162] = aux_sym_heredoc_redirect_token1;
	v->a[81163] = actions(1344);
	v->a[81164] = 40;
	v->a[81165] = anon_sym_LPAREN_LPAREN;
	v->a[81166] = anon_sym_SEMI;
	v->a[81167] = anon_sym_PIPE_PIPE;
	v->a[81168] = anon_sym_AMP_AMP;
	v->a[81169] = anon_sym_PIPE;
	v->a[81170] = anon_sym_AMP;
	v->a[81171] = anon_sym_LT;
	v->a[81172] = anon_sym_GT;
	v->a[81173] = anon_sym_LT_LT;
	v->a[81174] = anon_sym_GT_GT;
	v->a[81175] = anon_sym_SEMI_SEMI;
	v->a[81176] = anon_sym_SEMI_AMP;
	v->a[81177] = anon_sym_SEMI_SEMI_AMP;
	v->a[81178] = anon_sym_PIPE_AMP;
	v->a[81179] = anon_sym_AMP_GT;
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = anon_sym_AMP_GT_GT;
	v->a[81181] = anon_sym_LT_AMP;
	v->a[81182] = anon_sym_GT_AMP;
	v->a[81183] = anon_sym_GT_PIPE;
	v->a[81184] = anon_sym_LT_AMP_DASH;
	v->a[81185] = anon_sym_GT_AMP_DASH;
	v->a[81186] = anon_sym_LT_LT_DASH;
	v->a[81187] = anon_sym_LT_LT_LT;
	v->a[81188] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81189] = anon_sym_DOLLAR_LBRACK;
	v->a[81190] = aux_sym_concatenation_token1;
	v->a[81191] = anon_sym_DOLLAR;
	v->a[81192] = sym__special_character;
	v->a[81193] = anon_sym_DQUOTE;
	v->a[81194] = sym_raw_string;
	v->a[81195] = sym_ansi_c_string;
	v->a[81196] = aux_sym_number_token1;
	v->a[81197] = aux_sym_number_token2;
	v->a[81198] = anon_sym_DOLLAR_LBRACE;
	v->a[81199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
