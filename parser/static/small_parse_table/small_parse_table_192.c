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
	v->a[19200] = sym_string;
	v->a[19201] = sym_simple_expansion;
	v->a[19202] = sym_expansion;
	v->a[19203] = sym_command_substitution;
	v->a[19204] = actions(475);
	v->a[19205] = 17;
	v->a[19206] = anon_sym_PIPE;
	v->a[19207] = anon_sym_RPAREN;
	v->a[19208] = anon_sym_SEMI_SEMI;
	v->a[19209] = anon_sym_AMP_AMP;
	v->a[19210] = anon_sym_PIPE_PIPE;
	v->a[19211] = anon_sym_LT;
	v->a[19212] = anon_sym_GT;
	v->a[19213] = anon_sym_GT_GT;
	v->a[19214] = anon_sym_LT_AMP;
	v->a[19215] = anon_sym_GT_AMP;
	v->a[19216] = anon_sym_GT_PIPE;
	v->a[19217] = anon_sym_LT_GT;
	v->a[19218] = anon_sym_LT_LT;
	v->a[19219] = anon_sym_LT_LT_DASH;
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = aux_sym_heredoc_redirect_token1;
	v->a[19221] = anon_sym_AMP;
	v->a[19222] = anon_sym_SEMI;
	v->a[19223] = 6;
	v->a[19224] = actions(3);
	v->a[19225] = 1;
	v->a[19226] = sym_comment;
	v->a[19227] = actions(367);
	v->a[19228] = 1;
	v->a[19229] = sym_file_descriptor;
	v->a[19230] = actions(429);
	v->a[19231] = 1;
	v->a[19232] = sym_variable_name;
	v->a[19233] = actions(427);
	v->a[19234] = 2;
	v->a[19235] = aux_sym__simple_variable_name_token1;
	v->a[19236] = aux_sym__multiline_variable_name_token1;
	v->a[19237] = actions(425);
	v->a[19238] = 9;
	v->a[19239] = anon_sym_BANG;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = anon_sym_DASH;
	v->a[19241] = anon_sym_STAR;
	v->a[19242] = anon_sym_QMARK;
	v->a[19243] = anon_sym_DOLLAR;
	v->a[19244] = anon_sym_POUND;
	v->a[19245] = anon_sym_AT;
	v->a[19246] = anon_sym_0;
	v->a[19247] = anon_sym__;
	v->a[19248] = actions(361);
	v->a[19249] = 24;
	v->a[19250] = anon_sym_PIPE;
	v->a[19251] = anon_sym_SEMI_SEMI;
	v->a[19252] = anon_sym_AMP_AMP;
	v->a[19253] = anon_sym_PIPE_PIPE;
	v->a[19254] = anon_sym_LT;
	v->a[19255] = anon_sym_GT;
	v->a[19256] = anon_sym_GT_GT;
	v->a[19257] = anon_sym_LT_AMP;
	v->a[19258] = anon_sym_GT_AMP;
	v->a[19259] = anon_sym_GT_PIPE;
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = anon_sym_LT_GT;
	v->a[19261] = anon_sym_LT_LT;
	v->a[19262] = anon_sym_LT_LT_DASH;
	v->a[19263] = aux_sym_heredoc_redirect_token1;
	v->a[19264] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19265] = anon_sym_AMP;
	v->a[19266] = anon_sym_DQUOTE;
	v->a[19267] = sym_raw_string;
	v->a[19268] = sym_number;
	v->a[19269] = anon_sym_DOLLAR_LBRACE;
	v->a[19270] = anon_sym_DOLLAR_LPAREN;
	v->a[19271] = anon_sym_BQUOTE;
	v->a[19272] = sym_word;
	v->a[19273] = anon_sym_SEMI;
	v->a[19274] = 16;
	v->a[19275] = actions(3);
	v->a[19276] = 1;
	v->a[19277] = sym_comment;
	v->a[19278] = actions(97);
	v->a[19279] = 1;
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = anon_sym_LPAREN;
	v->a[19281] = actions(473);
	v->a[19282] = 1;
	v->a[19283] = sym_file_descriptor;
	v->a[19284] = actions(479);
	v->a[19285] = 1;
	v->a[19286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19287] = actions(481);
	v->a[19288] = 1;
	v->a[19289] = anon_sym_DOLLAR;
	v->a[19290] = actions(483);
	v->a[19291] = 1;
	v->a[19292] = anon_sym_DQUOTE;
	v->a[19293] = actions(485);
	v->a[19294] = 1;
	v->a[19295] = anon_sym_DOLLAR_LBRACE;
	v->a[19296] = actions(487);
	v->a[19297] = 1;
	v->a[19298] = anon_sym_DOLLAR_LPAREN;
	v->a[19299] = actions(489);
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */
