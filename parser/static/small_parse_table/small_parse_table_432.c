/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_432.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2160(t_small_parse_table_array *v)
{
	v->a[43200] = anon_sym_GT_PIPE;
	v->a[43201] = anon_sym_LT_GT;
	v->a[43202] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43203] = anon_sym_DOLLAR;
	v->a[43204] = anon_sym_DQUOTE;
	v->a[43205] = sym_raw_string;
	v->a[43206] = sym_number;
	v->a[43207] = anon_sym_DOLLAR_LBRACE;
	v->a[43208] = anon_sym_DOLLAR_LPAREN;
	v->a[43209] = anon_sym_BQUOTE;
	v->a[43210] = sym_word;
	v->a[43211] = 7;
	v->a[43212] = actions(3);
	v->a[43213] = 1;
	v->a[43214] = sym_comment;
	v->a[43215] = actions(1457);
	v->a[43216] = 1;
	v->a[43217] = sym_file_descriptor;
	v->a[43218] = actions(1460);
	v->a[43219] = 1;
	small_parse_table_2161(v);
}

void	small_parse_table_2161(t_small_parse_table_array *v)
{
	v->a[43220] = sym_variable_name;
	v->a[43221] = actions(1547);
	v->a[43222] = 1;
	v->a[43223] = anon_sym_RPAREN;
	v->a[43224] = actions(1454);
	v->a[43225] = 7;
	v->a[43226] = anon_sym_LT;
	v->a[43227] = anon_sym_GT;
	v->a[43228] = anon_sym_GT_GT;
	v->a[43229] = anon_sym_LT_AMP;
	v->a[43230] = anon_sym_GT_AMP;
	v->a[43231] = anon_sym_GT_PIPE;
	v->a[43232] = anon_sym_LT_GT;
	v->a[43233] = actions(1449);
	v->a[43234] = 8;
	v->a[43235] = anon_sym_PIPE;
	v->a[43236] = anon_sym_SEMI_SEMI;
	v->a[43237] = anon_sym_AMP_AMP;
	v->a[43238] = anon_sym_PIPE_PIPE;
	v->a[43239] = anon_sym_LT_LT;
	small_parse_table_2162(v);
}

void	small_parse_table_2162(t_small_parse_table_array *v)
{
	v->a[43240] = anon_sym_LT_LT_DASH;
	v->a[43241] = aux_sym_heredoc_redirect_token1;
	v->a[43242] = anon_sym_SEMI;
	v->a[43243] = actions(1447);
	v->a[43244] = 9;
	v->a[43245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43246] = anon_sym_DOLLAR;
	v->a[43247] = anon_sym_DQUOTE;
	v->a[43248] = sym_raw_string;
	v->a[43249] = sym_number;
	v->a[43250] = anon_sym_DOLLAR_LBRACE;
	v->a[43251] = anon_sym_DOLLAR_LPAREN;
	v->a[43252] = anon_sym_BQUOTE;
	v->a[43253] = sym_word;
	v->a[43254] = 3;
	v->a[43255] = actions(3);
	v->a[43256] = 1;
	v->a[43257] = sym_comment;
	v->a[43258] = actions(1525);
	v->a[43259] = 3;
	small_parse_table_2163(v);
}

void	small_parse_table_2163(t_small_parse_table_array *v)
{
	v->a[43260] = sym_file_descriptor;
	v->a[43261] = sym__bare_dollar;
	v->a[43262] = ts_builtin_sym_end;
	v->a[43263] = actions(1523);
	v->a[43264] = 24;
	v->a[43265] = anon_sym_PIPE;
	v->a[43266] = anon_sym_SEMI_SEMI;
	v->a[43267] = anon_sym_AMP_AMP;
	v->a[43268] = anon_sym_PIPE_PIPE;
	v->a[43269] = anon_sym_LT;
	v->a[43270] = anon_sym_GT;
	v->a[43271] = anon_sym_GT_GT;
	v->a[43272] = anon_sym_LT_AMP;
	v->a[43273] = anon_sym_GT_AMP;
	v->a[43274] = anon_sym_GT_PIPE;
	v->a[43275] = anon_sym_LT_GT;
	v->a[43276] = anon_sym_LT_LT;
	v->a[43277] = anon_sym_LT_LT_DASH;
	v->a[43278] = aux_sym_heredoc_redirect_token1;
	v->a[43279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2164(v);
}

void	small_parse_table_2164(t_small_parse_table_array *v)
{
	v->a[43280] = anon_sym_DOLLAR;
	v->a[43281] = anon_sym_DQUOTE;
	v->a[43282] = sym_raw_string;
	v->a[43283] = sym_number;
	v->a[43284] = anon_sym_DOLLAR_LBRACE;
	v->a[43285] = anon_sym_DOLLAR_LPAREN;
	v->a[43286] = anon_sym_BQUOTE;
	v->a[43287] = sym_word;
	v->a[43288] = anon_sym_SEMI;
	v->a[43289] = 6;
	v->a[43290] = actions(3);
	v->a[43291] = 1;
	v->a[43292] = sym_comment;
	v->a[43293] = actions(1550);
	v->a[43294] = 1;
	v->a[43295] = aux_sym_concatenation_token1;
	v->a[43296] = actions(1553);
	v->a[43297] = 1;
	v->a[43298] = sym__concat;
	v->a[43299] = state(693);
	small_parse_table_2165(v);
}

/* EOF small_parse_table_432.c */
