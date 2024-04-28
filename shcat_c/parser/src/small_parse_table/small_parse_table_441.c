/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_441.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2205(t_small_parse_table_array *v)
{
	v->a[44100] = anon_sym_CARET_EQ;
	v->a[44101] = anon_sym_PIPE_EQ;
	v->a[44102] = anon_sym_PIPE_PIPE;
	v->a[44103] = anon_sym_AMP_AMP;
	v->a[44104] = anon_sym_PIPE;
	v->a[44105] = anon_sym_CARET;
	v->a[44106] = anon_sym_AMP;
	v->a[44107] = anon_sym_EQ_EQ;
	v->a[44108] = anon_sym_BANG_EQ;
	v->a[44109] = anon_sym_LT;
	v->a[44110] = anon_sym_GT;
	v->a[44111] = anon_sym_LT_EQ;
	v->a[44112] = anon_sym_GT_EQ;
	v->a[44113] = anon_sym_LT_LT;
	v->a[44114] = anon_sym_GT_GT;
	v->a[44115] = anon_sym_PLUS;
	v->a[44116] = anon_sym_SLASH;
	v->a[44117] = anon_sym_PERCENT;
	v->a[44118] = anon_sym_STAR_STAR;
	v->a[44119] = anon_sym_RBRACK;
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = anon_sym_EQ_TILDE;
	v->a[44121] = 6;
	v->a[44122] = actions(3);
	v->a[44123] = 1;
	v->a[44124] = sym_comment;
	v->a[44125] = actions(5144);
	v->a[44126] = 1;
	v->a[44127] = aux_sym_concatenation_token1;
	v->a[44128] = actions(5146);
	v->a[44129] = 1;
	v->a[44130] = sym__concat;
	v->a[44131] = state(1123);
	v->a[44132] = 1;
	v->a[44133] = aux_sym_concatenation_repeat1;
	v->a[44134] = actions(4566);
	v->a[44135] = 6;
	v->a[44136] = sym_file_descriptor;
	v->a[44137] = sym_test_operator;
	v->a[44138] = sym__bare_dollar;
	v->a[44139] = sym__brace_start;
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = ts_builtin_sym_end;
	v->a[44141] = aux_sym_heredoc_redirect_token1;
	v->a[44142] = actions(4564);
	v->a[44143] = 39;
	v->a[44144] = anon_sym_LPAREN_LPAREN;
	v->a[44145] = anon_sym_SEMI;
	v->a[44146] = anon_sym_PIPE_PIPE;
	v->a[44147] = anon_sym_AMP_AMP;
	v->a[44148] = anon_sym_PIPE;
	v->a[44149] = anon_sym_AMP;
	v->a[44150] = anon_sym_EQ_EQ;
	v->a[44151] = anon_sym_LT;
	v->a[44152] = anon_sym_GT;
	v->a[44153] = anon_sym_LT_LT;
	v->a[44154] = anon_sym_GT_GT;
	v->a[44155] = anon_sym_SEMI_SEMI;
	v->a[44156] = anon_sym_PIPE_AMP;
	v->a[44157] = anon_sym_EQ_TILDE;
	v->a[44158] = anon_sym_AMP_GT;
	v->a[44159] = anon_sym_AMP_GT_GT;
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = anon_sym_LT_AMP;
	v->a[44161] = anon_sym_GT_AMP;
	v->a[44162] = anon_sym_GT_PIPE;
	v->a[44163] = anon_sym_LT_AMP_DASH;
	v->a[44164] = anon_sym_GT_AMP_DASH;
	v->a[44165] = anon_sym_LT_LT_DASH;
	v->a[44166] = anon_sym_LT_LT_LT;
	v->a[44167] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44168] = anon_sym_DOLLAR_LBRACK;
	v->a[44169] = anon_sym_DOLLAR;
	v->a[44170] = sym__special_character;
	v->a[44171] = anon_sym_DQUOTE;
	v->a[44172] = sym_raw_string;
	v->a[44173] = sym_ansi_c_string;
	v->a[44174] = aux_sym_number_token1;
	v->a[44175] = aux_sym_number_token2;
	v->a[44176] = anon_sym_DOLLAR_LBRACE;
	v->a[44177] = anon_sym_DOLLAR_LPAREN;
	v->a[44178] = anon_sym_BQUOTE;
	v->a[44179] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = anon_sym_LT_LPAREN;
	v->a[44181] = anon_sym_GT_LPAREN;
	v->a[44182] = sym_word;
	v->a[44183] = 6;
	v->a[44184] = actions(3);
	v->a[44185] = 1;
	v->a[44186] = sym_comment;
	v->a[44187] = actions(5182);
	v->a[44188] = 1;
	v->a[44189] = aux_sym_concatenation_token1;
	v->a[44190] = actions(5184);
	v->a[44191] = 1;
	v->a[44192] = sym__concat;
	v->a[44193] = state(1079);
	v->a[44194] = 1;
	v->a[44195] = aux_sym_concatenation_repeat1;
	v->a[44196] = actions(1267);
	v->a[44197] = 5;
	v->a[44198] = sym_file_descriptor;
	v->a[44199] = sym_variable_name;
	small_parse_table_2210(v);
}

/* EOF small_parse_table_441.c */
