/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1002.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5010(t_small_parse_table_array *v)
{
	v->a[100200] = aux_sym_heredoc_redirect_token1;
	v->a[100201] = actions(4496);
	v->a[100202] = 3;
	v->a[100203] = anon_sym_SEMI_SEMI;
	v->a[100204] = anon_sym_AMP;
	v->a[100205] = anon_sym_SEMI;
	v->a[100206] = 2;
	v->a[100207] = actions(1094);
	v->a[100208] = 1;
	v->a[100209] = sym_comment;
	v->a[100210] = actions(1147);
	v->a[100211] = 5;
	v->a[100212] = sym__concat;
	v->a[100213] = anon_sym_PIPE;
	v->a[100214] = anon_sym_RPAREN;
	v->a[100215] = anon_sym_RBRACE;
	v->a[100216] = aux_sym_concatenation_token1;
	v->a[100217] = 2;
	v->a[100218] = actions(1094);
	v->a[100219] = 1;
	small_parse_table_5011(v);
}

void	small_parse_table_5011(t_small_parse_table_array *v)
{
	v->a[100220] = sym_comment;
	v->a[100221] = actions(1177);
	v->a[100222] = 5;
	v->a[100223] = sym__concat;
	v->a[100224] = anon_sym_PIPE;
	v->a[100225] = anon_sym_RPAREN;
	v->a[100226] = anon_sym_RBRACE;
	v->a[100227] = aux_sym_concatenation_token1;
	v->a[100228] = 4;
	v->a[100229] = actions(3);
	v->a[100230] = 1;
	v->a[100231] = sym_comment;
	v->a[100232] = actions(4396);
	v->a[100233] = 1;
	v->a[100234] = anon_sym_in;
	v->a[100235] = actions(4400);
	v->a[100236] = 1;
	v->a[100237] = aux_sym_heredoc_redirect_token1;
	v->a[100238] = actions(4398);
	v->a[100239] = 3;
	small_parse_table_5012(v);
}

void	small_parse_table_5012(t_small_parse_table_array *v)
{
	v->a[100240] = anon_sym_SEMI_SEMI;
	v->a[100241] = anon_sym_AMP;
	v->a[100242] = anon_sym_SEMI;
	v->a[100243] = 2;
	v->a[100244] = actions(1094);
	v->a[100245] = 1;
	v->a[100246] = sym_comment;
	v->a[100247] = actions(1187);
	v->a[100248] = 5;
	v->a[100249] = sym__concat;
	v->a[100250] = anon_sym_PIPE;
	v->a[100251] = anon_sym_RPAREN;
	v->a[100252] = anon_sym_RBRACE;
	v->a[100253] = aux_sym_concatenation_token1;
	v->a[100254] = 2;
	v->a[100255] = actions(1094);
	v->a[100256] = 1;
	v->a[100257] = sym_comment;
	v->a[100258] = actions(1163);
	v->a[100259] = 5;
	small_parse_table_5013(v);
}

void	small_parse_table_5013(t_small_parse_table_array *v)
{
	v->a[100260] = sym__concat;
	v->a[100261] = anon_sym_PIPE;
	v->a[100262] = anon_sym_RPAREN;
	v->a[100263] = anon_sym_RBRACE;
	v->a[100264] = aux_sym_concatenation_token1;
	v->a[100265] = 5;
	v->a[100266] = actions(1094);
	v->a[100267] = 1;
	v->a[100268] = sym_comment;
	v->a[100269] = actions(4464);
	v->a[100270] = 1;
	v->a[100271] = sym__heredoc_body_beginning;
	v->a[100272] = actions(4470);
	v->a[100273] = 1;
	v->a[100274] = sym_simple_heredoc_body;
	v->a[100275] = state(2390);
	v->a[100276] = 1;
	v->a[100277] = sym_heredoc_body;
	v->a[100278] = state(1423);
	v->a[100279] = 2;
	small_parse_table_5014(v);
}

void	small_parse_table_5014(t_small_parse_table_array *v)
{
	v->a[100280] = sym__heredoc_body;
	v->a[100281] = sym__simple_heredoc_body;
	v->a[100282] = 2;
	v->a[100283] = actions(1094);
	v->a[100284] = 1;
	v->a[100285] = sym_comment;
	v->a[100286] = actions(1153);
	v->a[100287] = 5;
	v->a[100288] = sym__concat;
	v->a[100289] = anon_sym_PIPE;
	v->a[100290] = anon_sym_RPAREN;
	v->a[100291] = anon_sym_RBRACE;
	v->a[100292] = aux_sym_concatenation_token1;
	v->a[100293] = 5;
	v->a[100294] = actions(1094);
	v->a[100295] = 1;
	v->a[100296] = sym_comment;
	v->a[100297] = actions(4464);
	v->a[100298] = 1;
	v->a[100299] = sym__heredoc_body_beginning;
	small_parse_table_5015(v);
}

/* EOF small_parse_table_1002.c */
