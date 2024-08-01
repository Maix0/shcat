/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_421.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2105(t_small_parse_table_array *v)
{
	v->a[42100] = 1;
	v->a[42101] = sym__concat;
	v->a[42102] = state(832);
	v->a[42103] = 1;
	v->a[42104] = aux_sym_concatenation_repeat1;
	v->a[42105] = actions(880);
	v->a[42106] = 12;
	v->a[42107] = anon_sym_SEMI_SEMI;
	v->a[42108] = aux_sym_heredoc_redirect_token1;
	v->a[42109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42110] = anon_sym_DOLLAR;
	v->a[42111] = anon_sym_DQUOTE;
	v->a[42112] = sym_raw_string;
	v->a[42113] = sym_number;
	v->a[42114] = anon_sym_DOLLAR_LBRACE;
	v->a[42115] = anon_sym_DOLLAR_LPAREN;
	v->a[42116] = anon_sym_BQUOTE;
	v->a[42117] = sym_word;
	v->a[42118] = anon_sym_SEMI;
	v->a[42119] = 10;
	small_parse_table_2106(v);
}

void	small_parse_table_2106(t_small_parse_table_array *v)
{
	v->a[42120] = actions(3);
	v->a[42121] = 1;
	v->a[42122] = sym_comment;
	v->a[42123] = actions(580);
	v->a[42124] = 1;
	v->a[42125] = anon_sym_PIPE;
	v->a[42126] = actions(591);
	v->a[42127] = 1;
	v->a[42128] = anon_sym_BQUOTE;
	v->a[42129] = actions(597);
	v->a[42130] = 1;
	v->a[42131] = anon_sym_LT_LT;
	v->a[42132] = actions(1870);
	v->a[42133] = 1;
	v->a[42134] = aux_sym_heredoc_redirect_token1;
	v->a[42135] = state(583);
	v->a[42136] = 1;
	v->a[42137] = sym_terminator;
	v->a[42138] = actions(593);
	v->a[42139] = 2;
	small_parse_table_2107(v);
}

void	small_parse_table_2107(t_small_parse_table_array *v)
{
	v->a[42140] = anon_sym_SEMI_SEMI;
	v->a[42141] = anon_sym_SEMI;
	v->a[42142] = actions(762);
	v->a[42143] = 2;
	v->a[42144] = anon_sym_AMP_AMP;
	v->a[42145] = anon_sym_PIPE_PIPE;
	v->a[42146] = actions(1880);
	v->a[42147] = 3;
	v->a[42148] = anon_sym_LT;
	v->a[42149] = anon_sym_GT;
	v->a[42150] = anon_sym_GT_GT;
	v->a[42151] = state(925);
	v->a[42152] = 3;
	v->a[42153] = sym_file_redirect;
	v->a[42154] = sym_heredoc_redirect;
	v->a[42155] = aux_sym_redirected_statement_repeat1;
	v->a[42156] = 10;
	v->a[42157] = actions(3);
	v->a[42158] = 1;
	v->a[42159] = sym_comment;
	small_parse_table_2108(v);
}

void	small_parse_table_2108(t_small_parse_table_array *v)
{
	v->a[42160] = actions(580);
	v->a[42161] = 1;
	v->a[42162] = anon_sym_PIPE;
	v->a[42163] = actions(591);
	v->a[42164] = 1;
	v->a[42165] = anon_sym_BQUOTE;
	v->a[42166] = actions(597);
	v->a[42167] = 1;
	v->a[42168] = anon_sym_LT_LT;
	v->a[42169] = actions(1870);
	v->a[42170] = 1;
	v->a[42171] = aux_sym_heredoc_redirect_token1;
	v->a[42172] = state(582);
	v->a[42173] = 1;
	v->a[42174] = sym_terminator;
	v->a[42175] = actions(593);
	v->a[42176] = 2;
	v->a[42177] = anon_sym_SEMI_SEMI;
	v->a[42178] = anon_sym_SEMI;
	v->a[42179] = actions(762);
	small_parse_table_2109(v);
}

void	small_parse_table_2109(t_small_parse_table_array *v)
{
	v->a[42180] = 2;
	v->a[42181] = anon_sym_AMP_AMP;
	v->a[42182] = anon_sym_PIPE_PIPE;
	v->a[42183] = actions(1880);
	v->a[42184] = 3;
	v->a[42185] = anon_sym_LT;
	v->a[42186] = anon_sym_GT;
	v->a[42187] = anon_sym_GT_GT;
	v->a[42188] = state(925);
	v->a[42189] = 3;
	v->a[42190] = sym_file_redirect;
	v->a[42191] = sym_heredoc_redirect;
	v->a[42192] = aux_sym_redirected_statement_repeat1;
	v->a[42193] = 10;
	v->a[42194] = actions(3);
	v->a[42195] = 1;
	v->a[42196] = sym_comment;
	v->a[42197] = actions(580);
	v->a[42198] = 1;
	v->a[42199] = anon_sym_PIPE;
	small_parse_table_2110(v);
}

/* EOF small_parse_table_421.c */
