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
	v->a[19200] = sym_raw_string;
	v->a[19201] = aux_sym_number_token1;
	v->a[19202] = aux_sym_number_token2;
	v->a[19203] = anon_sym_DOLLAR_LBRACE;
	v->a[19204] = anon_sym_DOLLAR_LPAREN;
	v->a[19205] = anon_sym_BQUOTE;
	v->a[19206] = anon_sym_DOLLAR_BQUOTE;
	v->a[19207] = sym_word;
	v->a[19208] = anon_sym_SEMI;
	v->a[19209] = 6;
	v->a[19210] = actions(3);
	v->a[19211] = 1;
	v->a[19212] = sym_comment;
	v->a[19213] = actions(2832);
	v->a[19214] = 1;
	v->a[19215] = aux_sym_concatenation_token1;
	v->a[19216] = actions(2835);
	v->a[19217] = 1;
	v->a[19218] = sym__concat;
	v->a[19219] = state(515);
	small_parse_table_961(v);
}

void	small_parse_table_961(t_small_parse_table_array *v)
{
	v->a[19220] = 1;
	v->a[19221] = aux_sym_concatenation_repeat1;
	v->a[19222] = actions(2654);
	v->a[19223] = 5;
	v->a[19224] = sym_file_descriptor;
	v->a[19225] = sym_test_operator;
	v->a[19226] = sym__bare_dollar;
	v->a[19227] = sym__brace_start;
	v->a[19228] = aux_sym_heredoc_redirect_token1;
	v->a[19229] = actions(2652);
	v->a[19230] = 34;
	v->a[19231] = anon_sym_LPAREN;
	v->a[19232] = anon_sym_PIPE;
	v->a[19233] = anon_sym_SEMI_SEMI;
	v->a[19234] = anon_sym_SEMI_AMP;
	v->a[19235] = anon_sym_SEMI_SEMI_AMP;
	v->a[19236] = anon_sym_PIPE_AMP;
	v->a[19237] = anon_sym_AMP_AMP;
	v->a[19238] = anon_sym_PIPE_PIPE;
	v->a[19239] = anon_sym_LT;
	small_parse_table_962(v);
}

void	small_parse_table_962(t_small_parse_table_array *v)
{
	v->a[19240] = anon_sym_GT;
	v->a[19241] = anon_sym_GT_GT;
	v->a[19242] = anon_sym_AMP_GT;
	v->a[19243] = anon_sym_AMP_GT_GT;
	v->a[19244] = anon_sym_LT_AMP;
	v->a[19245] = anon_sym_GT_AMP;
	v->a[19246] = anon_sym_GT_PIPE;
	v->a[19247] = anon_sym_LT_AMP_DASH;
	v->a[19248] = anon_sym_GT_AMP_DASH;
	v->a[19249] = anon_sym_LT_LT;
	v->a[19250] = anon_sym_LT_LT_DASH;
	v->a[19251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19252] = anon_sym_AMP;
	v->a[19253] = anon_sym_DOLLAR;
	v->a[19254] = sym__special_character;
	v->a[19255] = anon_sym_DQUOTE;
	v->a[19256] = sym_raw_string;
	v->a[19257] = aux_sym_number_token1;
	v->a[19258] = aux_sym_number_token2;
	v->a[19259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_963(v);
}

void	small_parse_table_963(t_small_parse_table_array *v)
{
	v->a[19260] = anon_sym_DOLLAR_LPAREN;
	v->a[19261] = anon_sym_BQUOTE;
	v->a[19262] = anon_sym_DOLLAR_BQUOTE;
	v->a[19263] = sym_word;
	v->a[19264] = anon_sym_SEMI;
	v->a[19265] = 6;
	v->a[19266] = actions(3);
	v->a[19267] = 1;
	v->a[19268] = sym_comment;
	v->a[19269] = actions(2842);
	v->a[19270] = 1;
	v->a[19271] = sym_variable_name;
	v->a[19272] = actions(2840);
	v->a[19273] = 2;
	v->a[19274] = aux_sym__simple_variable_name_token1;
	v->a[19275] = aux_sym__multiline_variable_name_token1;
	v->a[19276] = actions(816);
	v->a[19277] = 3;
	v->a[19278] = sym_file_descriptor;
	v->a[19279] = sym_test_operator;
	small_parse_table_964(v);
}

void	small_parse_table_964(t_small_parse_table_array *v)
{
	v->a[19280] = sym__brace_start;
	v->a[19281] = actions(2838);
	v->a[19282] = 9;
	v->a[19283] = anon_sym_BANG;
	v->a[19284] = anon_sym_DASH;
	v->a[19285] = anon_sym_STAR;
	v->a[19286] = anon_sym_QMARK;
	v->a[19287] = anon_sym_DOLLAR;
	v->a[19288] = anon_sym_POUND;
	v->a[19289] = anon_sym_AT;
	v->a[19290] = anon_sym_0;
	v->a[19291] = anon_sym__;
	v->a[19292] = actions(810);
	v->a[19293] = 27;
	v->a[19294] = anon_sym_PIPE;
	v->a[19295] = anon_sym_PIPE_AMP;
	v->a[19296] = anon_sym_AMP_AMP;
	v->a[19297] = anon_sym_PIPE_PIPE;
	v->a[19298] = anon_sym_LT;
	v->a[19299] = anon_sym_GT;
	small_parse_table_965(v);
}

/* EOF small_parse_table_192.c */
