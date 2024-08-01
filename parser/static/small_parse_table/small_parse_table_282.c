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
	v->a[28200] = sym__expansion_expression;
	v->a[28201] = state(1382);
	v->a[28202] = 2;
	v->a[28203] = sym_string;
	v->a[28204] = aux_sym__expansion_regex_repeat1;
	v->a[28205] = actions(937);
	v->a[28206] = 3;
	v->a[28207] = anon_sym_PERCENT;
	v->a[28208] = anon_sym_POUND;
	v->a[28209] = anon_sym_PERCENT_PERCENT;
	v->a[28210] = actions(941);
	v->a[28211] = 8;
	v->a[28212] = anon_sym_COLON_DASH;
	v->a[28213] = anon_sym_DASH3;
	v->a[28214] = anon_sym_COLON_EQ;
	v->a[28215] = anon_sym_EQ2;
	v->a[28216] = anon_sym_COLON_QMARK;
	v->a[28217] = anon_sym_QMARK2;
	v->a[28218] = anon_sym_COLON_PLUS;
	v->a[28219] = anon_sym_PLUS3;
	small_parse_table_1411(v);
}

void	small_parse_table_1411(t_small_parse_table_array *v)
{
	v->a[28220] = 3;
	v->a[28221] = actions(3);
	v->a[28222] = 1;
	v->a[28223] = sym_comment;
	v->a[28224] = actions(1050);
	v->a[28225] = 1;
	v->a[28226] = sym__concat;
	v->a[28227] = actions(1052);
	v->a[28228] = 21;
	v->a[28229] = anon_sym_esac;
	v->a[28230] = anon_sym_PIPE;
	v->a[28231] = anon_sym_SEMI_SEMI;
	v->a[28232] = anon_sym_AMP_AMP;
	v->a[28233] = anon_sym_PIPE_PIPE;
	v->a[28234] = anon_sym_LT;
	v->a[28235] = anon_sym_GT;
	v->a[28236] = anon_sym_GT_GT;
	v->a[28237] = anon_sym_LT_LT;
	v->a[28238] = aux_sym_heredoc_redirect_token1;
	v->a[28239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1412(v);
}

void	small_parse_table_1412(t_small_parse_table_array *v)
{
	v->a[28240] = aux_sym_concatenation_token1;
	v->a[28241] = anon_sym_DOLLAR;
	v->a[28242] = anon_sym_DQUOTE;
	v->a[28243] = sym_raw_string;
	v->a[28244] = sym_number;
	v->a[28245] = anon_sym_DOLLAR_LBRACE;
	v->a[28246] = anon_sym_DOLLAR_LPAREN;
	v->a[28247] = anon_sym_BQUOTE;
	v->a[28248] = sym_word;
	v->a[28249] = anon_sym_SEMI;
	v->a[28250] = 5;
	v->a[28251] = actions(3);
	v->a[28252] = 1;
	v->a[28253] = sym_comment;
	v->a[28254] = actions(1156);
	v->a[28255] = 1;
	v->a[28256] = aux_sym_concatenation_token1;
	v->a[28257] = actions(1206);
	v->a[28258] = 1;
	v->a[28259] = sym__concat;
	small_parse_table_1413(v);
}

void	small_parse_table_1413(t_small_parse_table_array *v)
{
	v->a[28260] = state(343);
	v->a[28261] = 1;
	v->a[28262] = aux_sym_concatenation_repeat1;
	v->a[28263] = actions(923);
	v->a[28264] = 19;
	v->a[28265] = anon_sym_PIPE;
	v->a[28266] = anon_sym_SEMI_SEMI;
	v->a[28267] = anon_sym_AMP_AMP;
	v->a[28268] = anon_sym_PIPE_PIPE;
	v->a[28269] = anon_sym_LT;
	v->a[28270] = anon_sym_GT;
	v->a[28271] = anon_sym_GT_GT;
	v->a[28272] = anon_sym_LT_LT;
	v->a[28273] = aux_sym_heredoc_redirect_token1;
	v->a[28274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28275] = anon_sym_DOLLAR;
	v->a[28276] = anon_sym_DQUOTE;
	v->a[28277] = sym_raw_string;
	v->a[28278] = sym_number;
	v->a[28279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1414(v);
}

void	small_parse_table_1414(t_small_parse_table_array *v)
{
	v->a[28280] = anon_sym_DOLLAR_LPAREN;
	v->a[28281] = anon_sym_BQUOTE;
	v->a[28282] = sym_word;
	v->a[28283] = anon_sym_SEMI;
	v->a[28284] = 3;
	v->a[28285] = actions(3);
	v->a[28286] = 1;
	v->a[28287] = sym_comment;
	v->a[28288] = actions(1054);
	v->a[28289] = 1;
	v->a[28290] = sym__concat;
	v->a[28291] = actions(1056);
	v->a[28292] = 21;
	v->a[28293] = anon_sym_esac;
	v->a[28294] = anon_sym_PIPE;
	v->a[28295] = anon_sym_SEMI_SEMI;
	v->a[28296] = anon_sym_AMP_AMP;
	v->a[28297] = anon_sym_PIPE_PIPE;
	v->a[28298] = anon_sym_LT;
	v->a[28299] = anon_sym_GT;
	small_parse_table_1415(v);
}

/* EOF small_parse_table_282.c */
