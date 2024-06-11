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
	v->a[44100] = anon_sym_LT_AMP;
	v->a[44101] = anon_sym_GT_AMP;
	v->a[44102] = anon_sym_GT_PIPE;
	v->a[44103] = anon_sym_LT_AMP_DASH;
	v->a[44104] = anon_sym_GT_AMP_DASH;
	v->a[44105] = anon_sym_LT_LT;
	v->a[44106] = anon_sym_LT_LT_DASH;
	v->a[44107] = aux_sym_heredoc_redirect_token1;
	v->a[44108] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44109] = anon_sym_AMP;
	v->a[44110] = aux_sym_concatenation_token1;
	v->a[44111] = anon_sym_DOLLAR;
	v->a[44112] = anon_sym_DQUOTE;
	v->a[44113] = sym_raw_string;
	v->a[44114] = sym_number;
	v->a[44115] = anon_sym_DOLLAR_LBRACE;
	v->a[44116] = anon_sym_DOLLAR_LPAREN;
	v->a[44117] = anon_sym_BQUOTE;
	v->a[44118] = sym_word;
	v->a[44119] = anon_sym_SEMI;
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = 3;
	v->a[44121] = actions(3);
	v->a[44122] = 1;
	v->a[44123] = sym_comment;
	v->a[44124] = actions(1124);
	v->a[44125] = 3;
	v->a[44126] = sym_file_descriptor;
	v->a[44127] = sym__concat;
	v->a[44128] = ts_builtin_sym_end;
	v->a[44129] = actions(1122);
	v->a[44130] = 29;
	v->a[44131] = anon_sym_PIPE;
	v->a[44132] = anon_sym_SEMI_SEMI;
	v->a[44133] = anon_sym_AMP_AMP;
	v->a[44134] = anon_sym_PIPE_PIPE;
	v->a[44135] = anon_sym_LT;
	v->a[44136] = anon_sym_GT;
	v->a[44137] = anon_sym_GT_GT;
	v->a[44138] = anon_sym_AMP_GT;
	v->a[44139] = anon_sym_AMP_GT_GT;
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = anon_sym_LT_AMP;
	v->a[44141] = anon_sym_GT_AMP;
	v->a[44142] = anon_sym_GT_PIPE;
	v->a[44143] = anon_sym_LT_AMP_DASH;
	v->a[44144] = anon_sym_GT_AMP_DASH;
	v->a[44145] = anon_sym_LT_LT;
	v->a[44146] = anon_sym_LT_LT_DASH;
	v->a[44147] = aux_sym_heredoc_redirect_token1;
	v->a[44148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44149] = anon_sym_AMP;
	v->a[44150] = aux_sym_concatenation_token1;
	v->a[44151] = anon_sym_DOLLAR;
	v->a[44152] = anon_sym_DQUOTE;
	v->a[44153] = sym_raw_string;
	v->a[44154] = sym_number;
	v->a[44155] = anon_sym_DOLLAR_LBRACE;
	v->a[44156] = anon_sym_DOLLAR_LPAREN;
	v->a[44157] = anon_sym_BQUOTE;
	v->a[44158] = sym_word;
	v->a[44159] = anon_sym_SEMI;
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = 5;
	v->a[44161] = actions(3);
	v->a[44162] = 1;
	v->a[44163] = sym_comment;
	v->a[44164] = state(1106);
	v->a[44165] = 1;
	v->a[44166] = sym_concatenation;
	v->a[44167] = actions(713);
	v->a[44168] = 2;
	v->a[44169] = sym_file_descriptor;
	v->a[44170] = sym_variable_name;
	v->a[44171] = state(976);
	v->a[44172] = 5;
	v->a[44173] = sym_arithmetic_expansion;
	v->a[44174] = sym_string;
	v->a[44175] = sym_simple_expansion;
	v->a[44176] = sym_expansion;
	v->a[44177] = sym_command_substitution;
	v->a[44178] = actions(715);
	v->a[44179] = 24;
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = anon_sym_PIPE;
	v->a[44181] = anon_sym_AMP_AMP;
	v->a[44182] = anon_sym_PIPE_PIPE;
	v->a[44183] = anon_sym_LT;
	v->a[44184] = anon_sym_GT;
	v->a[44185] = anon_sym_GT_GT;
	v->a[44186] = anon_sym_AMP_GT;
	v->a[44187] = anon_sym_AMP_GT_GT;
	v->a[44188] = anon_sym_LT_AMP;
	v->a[44189] = anon_sym_GT_AMP;
	v->a[44190] = anon_sym_GT_PIPE;
	v->a[44191] = anon_sym_LT_AMP_DASH;
	v->a[44192] = anon_sym_GT_AMP_DASH;
	v->a[44193] = anon_sym_LT_LT;
	v->a[44194] = anon_sym_LT_LT_DASH;
	v->a[44195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44196] = anon_sym_DOLLAR;
	v->a[44197] = anon_sym_DQUOTE;
	v->a[44198] = sym_raw_string;
	v->a[44199] = sym_number;
	small_parse_table_2210(v);
}

/* EOF small_parse_table_441.c */
