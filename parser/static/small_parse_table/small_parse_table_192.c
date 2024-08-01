/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_192.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_960(t_small_parse_table_array *v)
{
	v->a[19200] = actions(3);
	v->a[19201] = 1;
	v->a[19202] = sym_comment;
	v->a[19203] = actions(800);
	v->a[19204] = 1;
	v->a[19205] = sym_variable_name;
	v->a[19206] = actions(798);
	v->a[19207] = 2;
	v->a[19208] = aux_sym__simple_variable_name_token1;
	v->a[19209] = aux_sym__multiline_variable_name_token1;
	v->a[19210] = actions(796);
	v->a[19211] = 8;
	v->a[19212] = anon_sym_BANG;
	v->a[19213] = anon_sym_DASH;
	v->a[19214] = anon_sym_STAR;
	v->a[19215] = anon_sym_QMARK;
	v->a[19216] = anon_sym_DOLLAR;
	v->a[19217] = anon_sym_POUND;
	v->a[19218] = anon_sym_AT;
	v->a[19219] = anon_sym_0;
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = actions(343);
	v->a[19221] = 15;
	v->a[19222] = anon_sym_PIPE;
	v->a[19223] = anon_sym_AMP_AMP;
	v->a[19224] = anon_sym_PIPE_PIPE;
	v->a[19225] = anon_sym_LT;
	v->a[19226] = anon_sym_GT;
	v->a[19227] = anon_sym_GT_GT;
	v->a[19228] = anon_sym_LT_LT;
	v->a[19229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19230] = anon_sym_DQUOTE;
	v->a[19231] = sym_raw_string;
	v->a[19232] = sym_number;
	v->a[19233] = anon_sym_DOLLAR_LBRACE;
	v->a[19234] = anon_sym_DOLLAR_LPAREN;
	v->a[19235] = anon_sym_BQUOTE;
	v->a[19236] = sym_word;
	v->a[19237] = 11;
	v->a[19238] = actions(3);
	v->a[19239] = 1;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = sym_comment;
	v->a[19241] = actions(580);
	v->a[19242] = 1;
	v->a[19243] = anon_sym_PIPE;
	v->a[19244] = actions(591);
	v->a[19245] = 1;
	v->a[19246] = anon_sym_SEMI_SEMI;
	v->a[19247] = actions(597);
	v->a[19248] = 1;
	v->a[19249] = anon_sym_LT_LT;
	v->a[19250] = actions(771);
	v->a[19251] = 1;
	v->a[19252] = sym_variable_name;
	v->a[19253] = state(361);
	v->a[19254] = 1;
	v->a[19255] = sym_terminator;
	v->a[19256] = actions(593);
	v->a[19257] = 2;
	v->a[19258] = aux_sym_heredoc_redirect_token1;
	v->a[19259] = anon_sym_SEMI;
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = actions(769);
	v->a[19261] = 2;
	v->a[19262] = anon_sym_AMP_AMP;
	v->a[19263] = anon_sym_PIPE_PIPE;
	v->a[19264] = state(995);
	v->a[19265] = 2;
	v->a[19266] = sym_variable_assignment;
	v->a[19267] = aux_sym__variable_assignments_repeat1;
	v->a[19268] = state(1040);
	v->a[19269] = 3;
	v->a[19270] = sym_file_redirect;
	v->a[19271] = sym_heredoc_redirect;
	v->a[19272] = aux_sym_redirected_statement_repeat1;
	v->a[19273] = actions(576);
	v->a[19274] = 12;
	v->a[19275] = anon_sym_LT;
	v->a[19276] = anon_sym_GT;
	v->a[19277] = anon_sym_GT_GT;
	v->a[19278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19279] = anon_sym_DOLLAR;
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = anon_sym_DQUOTE;
	v->a[19281] = sym_raw_string;
	v->a[19282] = sym_number;
	v->a[19283] = anon_sym_DOLLAR_LBRACE;
	v->a[19284] = anon_sym_DOLLAR_LPAREN;
	v->a[19285] = anon_sym_BQUOTE;
	v->a[19286] = sym_word;
	v->a[19287] = 11;
	v->a[19288] = actions(3);
	v->a[19289] = 1;
	v->a[19290] = sym_comment;
	v->a[19291] = actions(578);
	v->a[19292] = 1;
	v->a[19293] = anon_sym_SEMI_SEMI;
	v->a[19294] = actions(580);
	v->a[19295] = 1;
	v->a[19296] = anon_sym_PIPE;
	v->a[19297] = actions(597);
	v->a[19298] = 1;
	v->a[19299] = anon_sym_LT_LT;
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */
