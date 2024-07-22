/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_292.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1460(t_small_parse_table_array *v)
{
	v->a[29200] = anon_sym_SEMI_SEMI;
	v->a[29201] = anon_sym_AMP_AMP;
	v->a[29202] = anon_sym_PIPE_PIPE;
	v->a[29203] = anon_sym_LT_LT;
	v->a[29204] = anon_sym_LT_LT_DASH;
	v->a[29205] = aux_sym_heredoc_redirect_token1;
	v->a[29206] = anon_sym_SEMI;
	v->a[29207] = actions(780);
	v->a[29208] = 16;
	v->a[29209] = anon_sym_LT;
	v->a[29210] = anon_sym_GT;
	v->a[29211] = anon_sym_GT_GT;
	v->a[29212] = anon_sym_LT_AMP;
	v->a[29213] = anon_sym_GT_AMP;
	v->a[29214] = anon_sym_GT_PIPE;
	v->a[29215] = anon_sym_LT_GT;
	v->a[29216] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29217] = anon_sym_DOLLAR;
	v->a[29218] = anon_sym_DQUOTE;
	v->a[29219] = sym_raw_string;
	small_parse_table_1461(v);
}

void	small_parse_table_1461(t_small_parse_table_array *v)
{
	v->a[29220] = sym_number;
	v->a[29221] = anon_sym_DOLLAR_LBRACE;
	v->a[29222] = anon_sym_DOLLAR_LPAREN;
	v->a[29223] = anon_sym_BQUOTE;
	v->a[29224] = sym_word;
	v->a[29225] = 14;
	v->a[29226] = actions(3);
	v->a[29227] = 1;
	v->a[29228] = sym_comment;
	v->a[29229] = actions(405);
	v->a[29230] = 1;
	v->a[29231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29232] = actions(407);
	v->a[29233] = 1;
	v->a[29234] = anon_sym_DOLLAR;
	v->a[29235] = actions(409);
	v->a[29236] = 1;
	v->a[29237] = anon_sym_DQUOTE;
	v->a[29238] = actions(411);
	v->a[29239] = 1;
	small_parse_table_1462(v);
}

void	small_parse_table_1462(t_small_parse_table_array *v)
{
	v->a[29240] = anon_sym_DOLLAR_LBRACE;
	v->a[29241] = actions(413);
	v->a[29242] = 1;
	v->a[29243] = anon_sym_DOLLAR_LPAREN;
	v->a[29244] = actions(415);
	v->a[29245] = 1;
	v->a[29246] = anon_sym_BQUOTE;
	v->a[29247] = actions(419);
	v->a[29248] = 1;
	v->a[29249] = sym__bare_dollar;
	v->a[29250] = actions(505);
	v->a[29251] = 1;
	v->a[29252] = sym_file_descriptor;
	v->a[29253] = state(372);
	v->a[29254] = 1;
	v->a[29255] = aux_sym_command_repeat2;
	v->a[29256] = state(674);
	v->a[29257] = 1;
	v->a[29258] = sym_concatenation;
	v->a[29259] = actions(815);
	small_parse_table_1463(v);
}

void	small_parse_table_1463(t_small_parse_table_array *v)
{
	v->a[29260] = 3;
	v->a[29261] = sym_raw_string;
	v->a[29262] = sym_number;
	v->a[29263] = sym_word;
	v->a[29264] = state(682);
	v->a[29265] = 5;
	v->a[29266] = sym_arithmetic_expansion;
	v->a[29267] = sym_string;
	v->a[29268] = sym_simple_expansion;
	v->a[29269] = sym_expansion;
	v->a[29270] = sym_command_substitution;
	v->a[29271] = actions(503);
	v->a[29272] = 13;
	v->a[29273] = anon_sym_PIPE;
	v->a[29274] = anon_sym_AMP_AMP;
	v->a[29275] = anon_sym_PIPE_PIPE;
	v->a[29276] = anon_sym_LT;
	v->a[29277] = anon_sym_GT;
	v->a[29278] = anon_sym_GT_GT;
	v->a[29279] = anon_sym_LT_AMP;
	small_parse_table_1464(v);
}

void	small_parse_table_1464(t_small_parse_table_array *v)
{
	v->a[29280] = anon_sym_GT_AMP;
	v->a[29281] = anon_sym_GT_PIPE;
	v->a[29282] = anon_sym_LT_GT;
	v->a[29283] = anon_sym_LT_LT;
	v->a[29284] = anon_sym_LT_LT_DASH;
	v->a[29285] = aux_sym_heredoc_redirect_token1;
	v->a[29286] = 20;
	v->a[29287] = actions(3);
	v->a[29288] = 1;
	v->a[29289] = sym_comment;
	v->a[29290] = actions(17);
	v->a[29291] = 1;
	v->a[29292] = anon_sym_LPAREN;
	v->a[29293] = actions(55);
	v->a[29294] = 1;
	v->a[29295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29296] = actions(57);
	v->a[29297] = 1;
	v->a[29298] = anon_sym_DOLLAR;
	v->a[29299] = actions(59);
	small_parse_table_1465(v);
}

/* EOF small_parse_table_292.c */
