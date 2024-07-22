/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_332.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1660(t_small_parse_table_array *v)
{
	v->a[33200] = anon_sym_GT_AMP;
	v->a[33201] = anon_sym_GT_PIPE;
	v->a[33202] = anon_sym_LT_GT;
	v->a[33203] = anon_sym_LT_LT;
	v->a[33204] = anon_sym_LT_LT_DASH;
	v->a[33205] = aux_sym_heredoc_redirect_token1;
	v->a[33206] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33207] = aux_sym_concatenation_token1;
	v->a[33208] = anon_sym_DOLLAR;
	v->a[33209] = anon_sym_DQUOTE;
	v->a[33210] = sym_raw_string;
	v->a[33211] = sym_number;
	v->a[33212] = anon_sym_DOLLAR_LBRACE;
	v->a[33213] = anon_sym_DOLLAR_LPAREN;
	v->a[33214] = anon_sym_BQUOTE;
	v->a[33215] = sym_word;
	v->a[33216] = anon_sym_SEMI;
	v->a[33217] = 14;
	v->a[33218] = actions(3);
	v->a[33219] = 1;
	small_parse_table_1661(v);
}

void	small_parse_table_1661(t_small_parse_table_array *v)
{
	v->a[33220] = sym_comment;
	v->a[33221] = actions(505);
	v->a[33222] = 1;
	v->a[33223] = sym_file_descriptor;
	v->a[33224] = actions(1037);
	v->a[33225] = 1;
	v->a[33226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33227] = actions(1039);
	v->a[33228] = 1;
	v->a[33229] = anon_sym_DOLLAR;
	v->a[33230] = actions(1041);
	v->a[33231] = 1;
	v->a[33232] = anon_sym_DQUOTE;
	v->a[33233] = actions(1043);
	v->a[33234] = 1;
	v->a[33235] = anon_sym_DOLLAR_LBRACE;
	v->a[33236] = actions(1045);
	v->a[33237] = 1;
	v->a[33238] = anon_sym_DOLLAR_LPAREN;
	v->a[33239] = actions(1047);
	small_parse_table_1662(v);
}

void	small_parse_table_1662(t_small_parse_table_array *v)
{
	v->a[33240] = 1;
	v->a[33241] = anon_sym_BQUOTE;
	v->a[33242] = actions(1049);
	v->a[33243] = 1;
	v->a[33244] = sym__bare_dollar;
	v->a[33245] = state(385);
	v->a[33246] = 1;
	v->a[33247] = aux_sym_command_repeat2;
	v->a[33248] = state(904);
	v->a[33249] = 1;
	v->a[33250] = sym_concatenation;
	v->a[33251] = actions(1035);
	v->a[33252] = 3;
	v->a[33253] = sym_raw_string;
	v->a[33254] = sym_number;
	v->a[33255] = sym_word;
	v->a[33256] = state(811);
	v->a[33257] = 5;
	v->a[33258] = sym_arithmetic_expansion;
	v->a[33259] = sym_string;
	small_parse_table_1663(v);
}

void	small_parse_table_1663(t_small_parse_table_array *v)
{
	v->a[33260] = sym_simple_expansion;
	v->a[33261] = sym_expansion;
	v->a[33262] = sym_command_substitution;
	v->a[33263] = actions(503);
	v->a[33264] = 12;
	v->a[33265] = anon_sym_PIPE;
	v->a[33266] = anon_sym_AMP_AMP;
	v->a[33267] = anon_sym_PIPE_PIPE;
	v->a[33268] = anon_sym_LT;
	v->a[33269] = anon_sym_GT;
	v->a[33270] = anon_sym_GT_GT;
	v->a[33271] = anon_sym_LT_AMP;
	v->a[33272] = anon_sym_GT_AMP;
	v->a[33273] = anon_sym_GT_PIPE;
	v->a[33274] = anon_sym_LT_GT;
	v->a[33275] = anon_sym_LT_LT;
	v->a[33276] = anon_sym_LT_LT_DASH;
	v->a[33277] = 12;
	v->a[33278] = actions(3);
	v->a[33279] = 1;
	small_parse_table_1664(v);
}

void	small_parse_table_1664(t_small_parse_table_array *v)
{
	v->a[33280] = sym_comment;
	v->a[33281] = actions(648);
	v->a[33282] = 1;
	v->a[33283] = sym_file_descriptor;
	v->a[33284] = actions(864);
	v->a[33285] = 1;
	v->a[33286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33287] = actions(867);
	v->a[33288] = 1;
	v->a[33289] = anon_sym_DOLLAR;
	v->a[33290] = actions(870);
	v->a[33291] = 1;
	v->a[33292] = anon_sym_DQUOTE;
	v->a[33293] = actions(873);
	v->a[33294] = 1;
	v->a[33295] = anon_sym_DOLLAR_LBRACE;
	v->a[33296] = actions(876);
	v->a[33297] = 1;
	v->a[33298] = anon_sym_DOLLAR_LPAREN;
	v->a[33299] = actions(879);
	small_parse_table_1665(v);
}

/* EOF small_parse_table_332.c */
