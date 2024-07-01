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
	v->a[44100] = state(277);
	v->a[44101] = 1;
	v->a[44102] = sym_command_name;
	v->a[44103] = state(603);
	v->a[44104] = 1;
	v->a[44105] = sym_concatenation;
	v->a[44106] = state(1225);
	v->a[44107] = 1;
	v->a[44108] = sym_file_redirect;
	v->a[44109] = state(1024);
	v->a[44110] = 2;
	v->a[44111] = sym_variable_assignment;
	v->a[44112] = aux_sym_command_repeat1;
	v->a[44113] = actions(353);
	v->a[44114] = 3;
	v->a[44115] = sym_raw_string;
	v->a[44116] = sym_number;
	v->a[44117] = sym_word;
	v->a[44118] = state(625);
	v->a[44119] = 5;
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = sym_arithmetic_expansion;
	v->a[44121] = sym_string;
	v->a[44122] = sym_simple_expansion;
	v->a[44123] = sym_expansion;
	v->a[44124] = sym_command_substitution;
	v->a[44125] = actions(1150);
	v->a[44126] = 7;
	v->a[44127] = anon_sym_LT;
	v->a[44128] = anon_sym_GT;
	v->a[44129] = anon_sym_GT_GT;
	v->a[44130] = anon_sym_LT_AMP;
	v->a[44131] = anon_sym_GT_AMP;
	v->a[44132] = anon_sym_GT_PIPE;
	v->a[44133] = anon_sym_LT_GT;
	v->a[44134] = 7;
	v->a[44135] = actions(3);
	v->a[44136] = 1;
	v->a[44137] = sym_comment;
	v->a[44138] = actions(1432);
	v->a[44139] = 1;
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = sym_file_descriptor;
	v->a[44141] = actions(1435);
	v->a[44142] = 1;
	v->a[44143] = sym_variable_name;
	v->a[44144] = actions(1554);
	v->a[44145] = 1;
	v->a[44146] = anon_sym_RPAREN;
	v->a[44147] = actions(1429);
	v->a[44148] = 7;
	v->a[44149] = anon_sym_LT;
	v->a[44150] = anon_sym_GT;
	v->a[44151] = anon_sym_GT_GT;
	v->a[44152] = anon_sym_LT_AMP;
	v->a[44153] = anon_sym_GT_AMP;
	v->a[44154] = anon_sym_GT_PIPE;
	v->a[44155] = anon_sym_LT_GT;
	v->a[44156] = actions(1422);
	v->a[44157] = 9;
	v->a[44158] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44159] = anon_sym_DOLLAR;
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = anon_sym_DQUOTE;
	v->a[44161] = sym_raw_string;
	v->a[44162] = sym_number;
	v->a[44163] = anon_sym_DOLLAR_LBRACE;
	v->a[44164] = anon_sym_DOLLAR_LPAREN;
	v->a[44165] = anon_sym_BQUOTE;
	v->a[44166] = sym_word;
	v->a[44167] = actions(1424);
	v->a[44168] = 9;
	v->a[44169] = anon_sym_PIPE;
	v->a[44170] = anon_sym_SEMI_SEMI;
	v->a[44171] = anon_sym_AMP_AMP;
	v->a[44172] = anon_sym_PIPE_PIPE;
	v->a[44173] = anon_sym_LT_LT;
	v->a[44174] = anon_sym_LT_LT_DASH;
	v->a[44175] = aux_sym_heredoc_redirect_token1;
	v->a[44176] = anon_sym_AMP;
	v->a[44177] = anon_sym_SEMI;
	v->a[44178] = 7;
	v->a[44179] = actions(3);
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = 1;
	v->a[44181] = sym_comment;
	v->a[44182] = actions(1432);
	v->a[44183] = 1;
	v->a[44184] = sym_file_descriptor;
	v->a[44185] = actions(1435);
	v->a[44186] = 1;
	v->a[44187] = sym_variable_name;
	v->a[44188] = actions(1557);
	v->a[44189] = 1;
	v->a[44190] = anon_sym_RPAREN;
	v->a[44191] = actions(1429);
	v->a[44192] = 7;
	v->a[44193] = anon_sym_LT;
	v->a[44194] = anon_sym_GT;
	v->a[44195] = anon_sym_GT_GT;
	v->a[44196] = anon_sym_LT_AMP;
	v->a[44197] = anon_sym_GT_AMP;
	v->a[44198] = anon_sym_GT_PIPE;
	v->a[44199] = anon_sym_LT_GT;
	small_parse_table_2210(v);
}

/* EOF small_parse_table_441.c */
