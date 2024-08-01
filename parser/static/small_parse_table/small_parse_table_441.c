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
	v->a[44100] = 10;
	v->a[44101] = anon_sym_PIPE;
	v->a[44102] = anon_sym_RPAREN;
	v->a[44103] = anon_sym_SEMI_SEMI;
	v->a[44104] = anon_sym_AMP_AMP;
	v->a[44105] = anon_sym_PIPE_PIPE;
	v->a[44106] = anon_sym_LT;
	v->a[44107] = anon_sym_GT;
	v->a[44108] = anon_sym_GT_GT;
	v->a[44109] = anon_sym_LT_LT;
	v->a[44110] = anon_sym_SEMI;
	v->a[44111] = 6;
	v->a[44112] = actions(3);
	v->a[44113] = 1;
	v->a[44114] = sym_comment;
	v->a[44115] = actions(1945);
	v->a[44116] = 1;
	v->a[44117] = anon_sym_LT_LT;
	v->a[44118] = actions(1948);
	v->a[44119] = 1;
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = aux_sym_heredoc_redirect_token1;
	v->a[44121] = actions(1942);
	v->a[44122] = 3;
	v->a[44123] = anon_sym_LT;
	v->a[44124] = anon_sym_GT;
	v->a[44125] = anon_sym_GT_GT;
	v->a[44126] = state(919);
	v->a[44127] = 3;
	v->a[44128] = sym_file_redirect;
	v->a[44129] = sym_heredoc_redirect;
	v->a[44130] = aux_sym_redirected_statement_repeat1;
	v->a[44131] = actions(1940);
	v->a[44132] = 6;
	v->a[44133] = anon_sym_PIPE;
	v->a[44134] = anon_sym_RPAREN;
	v->a[44135] = anon_sym_SEMI_SEMI;
	v->a[44136] = anon_sym_AMP_AMP;
	v->a[44137] = anon_sym_PIPE_PIPE;
	v->a[44138] = anon_sym_SEMI;
	v->a[44139] = 9;
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = actions(3);
	v->a[44141] = 1;
	v->a[44142] = sym_comment;
	v->a[44143] = actions(580);
	v->a[44144] = 1;
	v->a[44145] = anon_sym_PIPE;
	v->a[44146] = actions(597);
	v->a[44147] = 1;
	v->a[44148] = anon_sym_LT_LT;
	v->a[44149] = actions(1950);
	v->a[44150] = 1;
	v->a[44151] = aux_sym_heredoc_redirect_token1;
	v->a[44152] = state(480);
	v->a[44153] = 1;
	v->a[44154] = sym_terminator;
	v->a[44155] = actions(769);
	v->a[44156] = 2;
	v->a[44157] = anon_sym_AMP_AMP;
	v->a[44158] = anon_sym_PIPE_PIPE;
	v->a[44159] = actions(812);
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = 2;
	v->a[44161] = anon_sym_SEMI_SEMI;
	v->a[44162] = anon_sym_SEMI;
	v->a[44163] = actions(1924);
	v->a[44164] = 3;
	v->a[44165] = anon_sym_LT;
	v->a[44166] = anon_sym_GT;
	v->a[44167] = anon_sym_GT_GT;
	v->a[44168] = state(1040);
	v->a[44169] = 3;
	v->a[44170] = sym_file_redirect;
	v->a[44171] = sym_heredoc_redirect;
	v->a[44172] = aux_sym_redirected_statement_repeat1;
	v->a[44173] = 3;
	v->a[44174] = actions(3);
	v->a[44175] = 1;
	v->a[44176] = sym_comment;
	v->a[44177] = actions(1097);
	v->a[44178] = 3;
	v->a[44179] = sym__concat;
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = sym_variable_name;
	v->a[44181] = aux_sym_heredoc_redirect_token1;
	v->a[44182] = actions(1095);
	v->a[44183] = 11;
	v->a[44184] = anon_sym_esac;
	v->a[44185] = anon_sym_PIPE;
	v->a[44186] = anon_sym_SEMI_SEMI;
	v->a[44187] = anon_sym_AMP_AMP;
	v->a[44188] = anon_sym_PIPE_PIPE;
	v->a[44189] = anon_sym_LT;
	v->a[44190] = anon_sym_GT;
	v->a[44191] = anon_sym_GT_GT;
	v->a[44192] = anon_sym_LT_LT;
	v->a[44193] = aux_sym_concatenation_token1;
	v->a[44194] = anon_sym_SEMI;
	v->a[44195] = 6;
	v->a[44196] = actions(3);
	v->a[44197] = 1;
	v->a[44198] = sym_comment;
	v->a[44199] = actions(597);
	small_parse_table_2210(v);
}

/* EOF small_parse_table_441.c */
