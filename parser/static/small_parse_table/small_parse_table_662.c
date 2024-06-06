/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_662.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3310(t_small_parse_table_array *v)
{
	v->a[66200] = anon_sym_EQ_EQ;
	v->a[66201] = anon_sym_BANG_EQ;
	v->a[66202] = actions(4144);
	v->a[66203] = 2;
	v->a[66204] = anon_sym_LT_EQ;
	v->a[66205] = anon_sym_GT_EQ;
	v->a[66206] = actions(4146);
	v->a[66207] = 2;
	v->a[66208] = anon_sym_PLUS;
	v->a[66209] = anon_sym_DASH;
	v->a[66210] = actions(4152);
	v->a[66211] = 2;
	v->a[66212] = anon_sym_PLUS_PLUS2;
	v->a[66213] = anon_sym_DASH_DASH2;
	v->a[66214] = actions(4148);
	v->a[66215] = 3;
	v->a[66216] = anon_sym_STAR;
	v->a[66217] = anon_sym_SLASH;
	v->a[66218] = anon_sym_PERCENT;
	v->a[66219] = actions(4211);
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = 14;
	v->a[66221] = anon_sym_COMMA;
	v->a[66222] = anon_sym_RPAREN_RPAREN;
	v->a[66223] = anon_sym_PLUS_EQ;
	v->a[66224] = anon_sym_DASH_EQ;
	v->a[66225] = anon_sym_STAR_EQ;
	v->a[66226] = anon_sym_SLASH_EQ;
	v->a[66227] = anon_sym_PERCENT_EQ;
	v->a[66228] = anon_sym_LT_LT_EQ;
	v->a[66229] = anon_sym_GT_GT_EQ;
	v->a[66230] = anon_sym_AMP_EQ;
	v->a[66231] = anon_sym_CARET_EQ;
	v->a[66232] = anon_sym_PIPE_EQ;
	v->a[66233] = anon_sym_QMARK;
	v->a[66234] = anon_sym_COLON;
	v->a[66235] = 6;
	v->a[66236] = actions(3);
	v->a[66237] = 1;
	v->a[66238] = sym_comment;
	v->a[66239] = actions(3613);
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = 1;
	v->a[66241] = aux_sym_concatenation_token1;
	v->a[66242] = actions(3674);
	v->a[66243] = 1;
	v->a[66244] = sym__concat;
	v->a[66245] = state(1409);
	v->a[66246] = 1;
	v->a[66247] = aux_sym_concatenation_repeat1;
	v->a[66248] = actions(3121);
	v->a[66249] = 4;
	v->a[66250] = sym_file_descriptor;
	v->a[66251] = sym_test_operator;
	v->a[66252] = sym__brace_start;
	v->a[66253] = aux_sym_heredoc_redirect_token1;
	v->a[66254] = actions(3119);
	v->a[66255] = 28;
	v->a[66256] = anon_sym_PIPE;
	v->a[66257] = anon_sym_PIPE_AMP;
	v->a[66258] = anon_sym_AMP_AMP;
	v->a[66259] = anon_sym_PIPE_PIPE;
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = anon_sym_LT;
	v->a[66261] = anon_sym_GT;
	v->a[66262] = anon_sym_GT_GT;
	v->a[66263] = anon_sym_AMP_GT;
	v->a[66264] = anon_sym_AMP_GT_GT;
	v->a[66265] = anon_sym_LT_AMP;
	v->a[66266] = anon_sym_GT_AMP;
	v->a[66267] = anon_sym_GT_PIPE;
	v->a[66268] = anon_sym_LT_AMP_DASH;
	v->a[66269] = anon_sym_GT_AMP_DASH;
	v->a[66270] = anon_sym_LT_LT;
	v->a[66271] = anon_sym_LT_LT_DASH;
	v->a[66272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66273] = anon_sym_DOLLAR;
	v->a[66274] = sym__special_character;
	v->a[66275] = anon_sym_DQUOTE;
	v->a[66276] = sym_raw_string;
	v->a[66277] = aux_sym_number_token1;
	v->a[66278] = aux_sym_number_token2;
	v->a[66279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = anon_sym_DOLLAR_LPAREN;
	v->a[66281] = anon_sym_BQUOTE;
	v->a[66282] = anon_sym_DOLLAR_BQUOTE;
	v->a[66283] = sym_word;
	v->a[66284] = 19;
	v->a[66285] = actions(57);
	v->a[66286] = 1;
	v->a[66287] = sym_comment;
	v->a[66288] = actions(4120);
	v->a[66289] = 1;
	v->a[66290] = anon_sym_PIPE;
	v->a[66291] = actions(4122);
	v->a[66292] = 1;
	v->a[66293] = anon_sym_AMP_AMP;
	v->a[66294] = actions(4124);
	v->a[66295] = 1;
	v->a[66296] = anon_sym_PIPE_PIPE;
	v->a[66297] = actions(4126);
	v->a[66298] = 1;
	v->a[66299] = anon_sym_EQ;
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
