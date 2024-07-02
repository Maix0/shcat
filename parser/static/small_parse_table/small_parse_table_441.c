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
	v->a[44100] = anon_sym_RPAREN;
	v->a[44101] = actions(1432);
	v->a[44102] = 7;
	v->a[44103] = anon_sym_LT;
	v->a[44104] = anon_sym_GT;
	v->a[44105] = anon_sym_GT_GT;
	v->a[44106] = anon_sym_LT_AMP;
	v->a[44107] = anon_sym_GT_AMP;
	v->a[44108] = anon_sym_GT_PIPE;
	v->a[44109] = anon_sym_LT_GT;
	v->a[44110] = actions(1428);
	v->a[44111] = 9;
	v->a[44112] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44113] = anon_sym_DOLLAR;
	v->a[44114] = anon_sym_DQUOTE;
	v->a[44115] = sym_raw_string;
	v->a[44116] = sym_number;
	v->a[44117] = anon_sym_DOLLAR_LBRACE;
	v->a[44118] = anon_sym_DOLLAR_LPAREN;
	v->a[44119] = anon_sym_BQUOTE;
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = sym_word;
	v->a[44121] = actions(1430);
	v->a[44122] = 9;
	v->a[44123] = anon_sym_PIPE;
	v->a[44124] = anon_sym_SEMI_SEMI;
	v->a[44125] = anon_sym_AMP_AMP;
	v->a[44126] = anon_sym_PIPE_PIPE;
	v->a[44127] = anon_sym_LT_LT;
	v->a[44128] = anon_sym_LT_LT_DASH;
	v->a[44129] = aux_sym_heredoc_redirect_token1;
	v->a[44130] = anon_sym_AMP;
	v->a[44131] = anon_sym_SEMI;
	v->a[44132] = 8;
	v->a[44133] = actions(3);
	v->a[44134] = 1;
	v->a[44135] = sym_comment;
	v->a[44136] = actions(692);
	v->a[44137] = 1;
	v->a[44138] = anon_sym_PIPE;
	v->a[44139] = actions(702);
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = 1;
	v->a[44141] = sym_file_descriptor;
	v->a[44142] = actions(1480);
	v->a[44143] = 1;
	v->a[44144] = sym_variable_name;
	v->a[44145] = state(1402);
	v->a[44146] = 2;
	v->a[44147] = sym_variable_assignment;
	v->a[44148] = aux_sym__variable_assignments_repeat1;
	v->a[44149] = state(1415);
	v->a[44150] = 3;
	v->a[44151] = sym_file_redirect;
	v->a[44152] = sym_heredoc_redirect;
	v->a[44153] = aux_sym_redirected_statement_repeat1;
	v->a[44154] = actions(997);
	v->a[44155] = 4;
	v->a[44156] = anon_sym_AMP_AMP;
	v->a[44157] = anon_sym_PIPE_PIPE;
	v->a[44158] = anon_sym_LT_LT;
	v->a[44159] = anon_sym_LT_LT_DASH;
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = actions(690);
	v->a[44161] = 16;
	v->a[44162] = anon_sym_LT;
	v->a[44163] = anon_sym_GT;
	v->a[44164] = anon_sym_GT_GT;
	v->a[44165] = anon_sym_LT_AMP;
	v->a[44166] = anon_sym_GT_AMP;
	v->a[44167] = anon_sym_GT_PIPE;
	v->a[44168] = anon_sym_LT_GT;
	v->a[44169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44170] = anon_sym_DOLLAR;
	v->a[44171] = anon_sym_DQUOTE;
	v->a[44172] = sym_raw_string;
	v->a[44173] = sym_number;
	v->a[44174] = anon_sym_DOLLAR_LBRACE;
	v->a[44175] = anon_sym_DOLLAR_LPAREN;
	v->a[44176] = anon_sym_BQUOTE;
	v->a[44177] = sym_word;
	v->a[44178] = 7;
	v->a[44179] = actions(3);
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = 1;
	v->a[44181] = sym_comment;
	v->a[44182] = actions(1435);
	v->a[44183] = 1;
	v->a[44184] = sym_file_descriptor;
	v->a[44185] = actions(1438);
	v->a[44186] = 1;
	v->a[44187] = sym_variable_name;
	v->a[44188] = actions(1557);
	v->a[44189] = 1;
	v->a[44190] = anon_sym_RPAREN;
	v->a[44191] = actions(1432);
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
