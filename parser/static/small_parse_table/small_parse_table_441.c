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
	v->a[44100] = anon_sym_DOLLAR_LBRACE;
	v->a[44101] = anon_sym_DOLLAR_LPAREN;
	v->a[44102] = anon_sym_BQUOTE;
	v->a[44103] = anon_sym_DOLLAR_BQUOTE;
	v->a[44104] = sym_word;
	v->a[44105] = anon_sym_SEMI;
	v->a[44106] = 6;
	v->a[44107] = actions(3);
	v->a[44108] = 1;
	v->a[44109] = sym_comment;
	v->a[44110] = actions(3613);
	v->a[44111] = 1;
	v->a[44112] = aux_sym_concatenation_token1;
	v->a[44113] = actions(3615);
	v->a[44114] = 1;
	v->a[44115] = sym__concat;
	v->a[44116] = state(1147);
	v->a[44117] = 1;
	v->a[44118] = aux_sym_concatenation_repeat1;
	v->a[44119] = actions(2696);
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = 4;
	v->a[44121] = sym_file_descriptor;
	v->a[44122] = sym_test_operator;
	v->a[44123] = sym__brace_start;
	v->a[44124] = aux_sym_heredoc_redirect_token1;
	v->a[44125] = actions(2694);
	v->a[44126] = 32;
	v->a[44127] = anon_sym_PIPE;
	v->a[44128] = anon_sym_RPAREN;
	v->a[44129] = anon_sym_SEMI_SEMI;
	v->a[44130] = anon_sym_PIPE_AMP;
	v->a[44131] = anon_sym_AMP_AMP;
	v->a[44132] = anon_sym_PIPE_PIPE;
	v->a[44133] = anon_sym_LT;
	v->a[44134] = anon_sym_GT;
	v->a[44135] = anon_sym_GT_GT;
	v->a[44136] = anon_sym_AMP_GT;
	v->a[44137] = anon_sym_AMP_GT_GT;
	v->a[44138] = anon_sym_LT_AMP;
	v->a[44139] = anon_sym_GT_AMP;
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = anon_sym_GT_PIPE;
	v->a[44141] = anon_sym_LT_AMP_DASH;
	v->a[44142] = anon_sym_GT_AMP_DASH;
	v->a[44143] = anon_sym_LT_LT;
	v->a[44144] = anon_sym_LT_LT_DASH;
	v->a[44145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44146] = anon_sym_AMP;
	v->a[44147] = anon_sym_DOLLAR;
	v->a[44148] = sym__special_character;
	v->a[44149] = anon_sym_DQUOTE;
	v->a[44150] = sym_raw_string;
	v->a[44151] = aux_sym_number_token1;
	v->a[44152] = aux_sym_number_token2;
	v->a[44153] = anon_sym_DOLLAR_LBRACE;
	v->a[44154] = anon_sym_DOLLAR_LPAREN;
	v->a[44155] = anon_sym_BQUOTE;
	v->a[44156] = anon_sym_DOLLAR_BQUOTE;
	v->a[44157] = sym_word;
	v->a[44158] = anon_sym_SEMI;
	v->a[44159] = 5;
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = actions(3);
	v->a[44161] = 1;
	v->a[44162] = sym_comment;
	v->a[44163] = actions(3617);
	v->a[44164] = 1;
	v->a[44165] = sym__special_character;
	v->a[44166] = state(1072);
	v->a[44167] = 1;
	v->a[44168] = aux_sym__literal_repeat1;
	v->a[44169] = actions(3252);
	v->a[44170] = 6;
	v->a[44171] = sym_file_descriptor;
	v->a[44172] = sym_variable_name;
	v->a[44173] = sym_test_operator;
	v->a[44174] = sym__brace_start;
	v->a[44175] = ts_builtin_sym_end;
	v->a[44176] = aux_sym_heredoc_redirect_token1;
	v->a[44177] = actions(3250);
	v->a[44178] = 31;
	v->a[44179] = anon_sym_PIPE;
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = anon_sym_SEMI_SEMI;
	v->a[44181] = anon_sym_PIPE_AMP;
	v->a[44182] = anon_sym_AMP_AMP;
	v->a[44183] = anon_sym_PIPE_PIPE;
	v->a[44184] = anon_sym_LT;
	v->a[44185] = anon_sym_GT;
	v->a[44186] = anon_sym_GT_GT;
	v->a[44187] = anon_sym_AMP_GT;
	v->a[44188] = anon_sym_AMP_GT_GT;
	v->a[44189] = anon_sym_LT_AMP;
	v->a[44190] = anon_sym_GT_AMP;
	v->a[44191] = anon_sym_GT_PIPE;
	v->a[44192] = anon_sym_LT_AMP_DASH;
	v->a[44193] = anon_sym_GT_AMP_DASH;
	v->a[44194] = anon_sym_LT_LT;
	v->a[44195] = anon_sym_LT_LT_DASH;
	v->a[44196] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44197] = anon_sym_AMP;
	v->a[44198] = anon_sym_DOLLAR;
	v->a[44199] = anon_sym_DQUOTE;
	small_parse_table_2210(v);
}

/* EOF small_parse_table_441.c */
