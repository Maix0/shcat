/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_282.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1410(t_small_parse_table_array *v)
{
	v->a[28200] = sym_comment;
	v->a[28201] = actions(754);
	v->a[28202] = 1;
	v->a[28203] = sym_file_descriptor;
	v->a[28204] = actions(904);
	v->a[28205] = 1;
	v->a[28206] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28207] = actions(906);
	v->a[28208] = 1;
	v->a[28209] = anon_sym_DOLLAR;
	v->a[28210] = actions(908);
	v->a[28211] = 1;
	v->a[28212] = anon_sym_DQUOTE;
	v->a[28213] = actions(910);
	v->a[28214] = 1;
	v->a[28215] = anon_sym_DOLLAR_LBRACE;
	v->a[28216] = actions(912);
	v->a[28217] = 1;
	v->a[28218] = anon_sym_DOLLAR_LPAREN;
	v->a[28219] = state(1205);
	small_parse_table_1411(v);
}

void	small_parse_table_1411(t_small_parse_table_array *v)
{
	v->a[28220] = 1;
	v->a[28221] = sym_concatenation;
	v->a[28222] = actions(1036);
	v->a[28223] = 3;
	v->a[28224] = sym_raw_string;
	v->a[28225] = sym_number;
	v->a[28226] = sym_word;
	v->a[28227] = state(1152);
	v->a[28228] = 5;
	v->a[28229] = sym_arithmetic_expansion;
	v->a[28230] = sym_string;
	v->a[28231] = sym_simple_expansion;
	v->a[28232] = sym_expansion;
	v->a[28233] = sym_command_substitution;
	v->a[28234] = actions(756);
	v->a[28235] = 20;
	v->a[28236] = anon_sym_PIPE;
	v->a[28237] = anon_sym_SEMI_SEMI;
	v->a[28238] = anon_sym_AMP_AMP;
	v->a[28239] = anon_sym_PIPE_PIPE;
	small_parse_table_1412(v);
}

void	small_parse_table_1412(t_small_parse_table_array *v)
{
	v->a[28240] = anon_sym_LT;
	v->a[28241] = anon_sym_GT;
	v->a[28242] = anon_sym_GT_GT;
	v->a[28243] = anon_sym_AMP_GT;
	v->a[28244] = anon_sym_AMP_GT_GT;
	v->a[28245] = anon_sym_LT_AMP;
	v->a[28246] = anon_sym_GT_AMP;
	v->a[28247] = anon_sym_GT_PIPE;
	v->a[28248] = anon_sym_LT_AMP_DASH;
	v->a[28249] = anon_sym_GT_AMP_DASH;
	v->a[28250] = anon_sym_LT_LT;
	v->a[28251] = anon_sym_LT_LT_DASH;
	v->a[28252] = aux_sym_heredoc_redirect_token1;
	v->a[28253] = anon_sym_AMP;
	v->a[28254] = anon_sym_BQUOTE;
	v->a[28255] = anon_sym_SEMI;
	v->a[28256] = 6;
	v->a[28257] = actions(3);
	v->a[28258] = 1;
	v->a[28259] = sym_comment;
	small_parse_table_1413(v);
}

void	small_parse_table_1413(t_small_parse_table_array *v)
{
	v->a[28260] = actions(1038);
	v->a[28261] = 1;
	v->a[28262] = aux_sym_concatenation_token1;
	v->a[28263] = actions(1040);
	v->a[28264] = 1;
	v->a[28265] = sym__concat;
	v->a[28266] = state(344);
	v->a[28267] = 1;
	v->a[28268] = aux_sym_concatenation_repeat1;
	v->a[28269] = actions(961);
	v->a[28270] = 2;
	v->a[28271] = sym_file_descriptor;
	v->a[28272] = sym__bare_dollar;
	v->a[28273] = actions(957);
	v->a[28274] = 29;
	v->a[28275] = anon_sym_PIPE;
	v->a[28276] = anon_sym_RPAREN;
	v->a[28277] = anon_sym_SEMI_SEMI;
	v->a[28278] = anon_sym_AMP_AMP;
	v->a[28279] = anon_sym_PIPE_PIPE;
	small_parse_table_1414(v);
}

void	small_parse_table_1414(t_small_parse_table_array *v)
{
	v->a[28280] = anon_sym_LT;
	v->a[28281] = anon_sym_GT;
	v->a[28282] = anon_sym_GT_GT;
	v->a[28283] = anon_sym_AMP_GT;
	v->a[28284] = anon_sym_AMP_GT_GT;
	v->a[28285] = anon_sym_LT_AMP;
	v->a[28286] = anon_sym_GT_AMP;
	v->a[28287] = anon_sym_GT_PIPE;
	v->a[28288] = anon_sym_LT_AMP_DASH;
	v->a[28289] = anon_sym_GT_AMP_DASH;
	v->a[28290] = anon_sym_LT_LT;
	v->a[28291] = anon_sym_LT_LT_DASH;
	v->a[28292] = aux_sym_heredoc_redirect_token1;
	v->a[28293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28294] = anon_sym_AMP;
	v->a[28295] = anon_sym_DOLLAR;
	v->a[28296] = anon_sym_DQUOTE;
	v->a[28297] = sym_raw_string;
	v->a[28298] = sym_number;
	v->a[28299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1415(v);
}

/* EOF small_parse_table_282.c */
