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
	v->a[33200] = anon_sym_DQUOTE;
	v->a[33201] = sym_raw_string;
	v->a[33202] = sym_number;
	v->a[33203] = anon_sym_DOLLAR_LBRACE;
	v->a[33204] = anon_sym_DOLLAR_LPAREN;
	v->a[33205] = anon_sym_BQUOTE;
	v->a[33206] = sym_word;
	v->a[33207] = 14;
	v->a[33208] = actions(3);
	v->a[33209] = 1;
	v->a[33210] = sym_comment;
	v->a[33211] = actions(1380);
	v->a[33212] = 1;
	v->a[33213] = anon_sym_LPAREN;
	v->a[33214] = actions(1383);
	v->a[33215] = 1;
	v->a[33216] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33217] = actions(1386);
	v->a[33218] = 1;
	v->a[33219] = anon_sym_DOLLAR;
	small_parse_table_1661(v);
}

void	small_parse_table_1661(t_small_parse_table_array *v)
{
	v->a[33220] = actions(1389);
	v->a[33221] = 1;
	v->a[33222] = anon_sym_DQUOTE;
	v->a[33223] = actions(1392);
	v->a[33224] = 1;
	v->a[33225] = anon_sym_DOLLAR_LBRACE;
	v->a[33226] = actions(1395);
	v->a[33227] = 1;
	v->a[33228] = anon_sym_DOLLAR_LPAREN;
	v->a[33229] = actions(1398);
	v->a[33230] = 1;
	v->a[33231] = anon_sym_BQUOTE;
	v->a[33232] = actions(1401);
	v->a[33233] = 1;
	v->a[33234] = sym_extglob_pattern;
	v->a[33235] = state(597);
	v->a[33236] = 1;
	v->a[33237] = aux_sym_case_statement_repeat1;
	v->a[33238] = state(1232);
	v->a[33239] = 1;
	small_parse_table_1662(v);
}

void	small_parse_table_1662(t_small_parse_table_array *v)
{
	v->a[33240] = sym_case_item;
	v->a[33241] = state(1537);
	v->a[33242] = 2;
	v->a[33243] = sym_concatenation;
	v->a[33244] = sym__extglob_blob;
	v->a[33245] = actions(1377);
	v->a[33246] = 3;
	v->a[33247] = sym_raw_string;
	v->a[33248] = sym_number;
	v->a[33249] = sym_word;
	v->a[33250] = state(1463);
	v->a[33251] = 5;
	v->a[33252] = sym_arithmetic_expansion;
	v->a[33253] = sym_string;
	v->a[33254] = sym_simple_expansion;
	v->a[33255] = sym_expansion;
	v->a[33256] = sym_command_substitution;
	v->a[33257] = 5;
	v->a[33258] = actions(3);
	v->a[33259] = 1;
	small_parse_table_1663(v);
}

void	small_parse_table_1663(t_small_parse_table_array *v)
{
	v->a[33260] = sym_comment;
	v->a[33261] = actions(1156);
	v->a[33262] = 1;
	v->a[33263] = aux_sym_concatenation_token1;
	v->a[33264] = actions(1404);
	v->a[33265] = 1;
	v->a[33266] = sym__concat;
	v->a[33267] = state(343);
	v->a[33268] = 1;
	v->a[33269] = aux_sym_concatenation_repeat1;
	v->a[33270] = actions(923);
	v->a[33271] = 17;
	v->a[33272] = anon_sym_PIPE;
	v->a[33273] = anon_sym_AMP_AMP;
	v->a[33274] = anon_sym_PIPE_PIPE;
	v->a[33275] = anon_sym_LT;
	v->a[33276] = anon_sym_GT;
	v->a[33277] = anon_sym_GT_GT;
	v->a[33278] = anon_sym_LT_LT;
	v->a[33279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1664(v);
}

void	small_parse_table_1664(t_small_parse_table_array *v)
{
	v->a[33280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33281] = anon_sym_DOLLAR;
	v->a[33282] = anon_sym_DQUOTE;
	v->a[33283] = sym_raw_string;
	v->a[33284] = sym_number;
	v->a[33285] = anon_sym_DOLLAR_LBRACE;
	v->a[33286] = anon_sym_DOLLAR_LPAREN;
	v->a[33287] = anon_sym_BQUOTE;
	v->a[33288] = sym_word;
	v->a[33289] = 5;
	v->a[33290] = actions(3);
	v->a[33291] = 1;
	v->a[33292] = sym_comment;
	v->a[33293] = actions(1257);
	v->a[33294] = 1;
	v->a[33295] = sym_variable_name;
	v->a[33296] = actions(1254);
	v->a[33297] = 4;
	v->a[33298] = anon_sym_LT;
	v->a[33299] = anon_sym_GT;
	small_parse_table_1665(v);
}

/* EOF small_parse_table_332.c */
