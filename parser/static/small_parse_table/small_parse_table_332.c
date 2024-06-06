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
	v->a[33200] = actions(2372);
	v->a[33201] = 1;
	v->a[33202] = anon_sym_DOLLAR_BQUOTE;
	v->a[33203] = actions(2376);
	v->a[33204] = 1;
	v->a[33205] = sym__brace_start;
	v->a[33206] = actions(3412);
	v->a[33207] = 1;
	v->a[33208] = sym__special_character;
	v->a[33209] = actions(3418);
	v->a[33210] = 1;
	v->a[33211] = sym_test_operator;
	v->a[33212] = state(1996);
	v->a[33213] = 1;
	v->a[33214] = aux_sym__literal_repeat1;
	v->a[33215] = state(2320);
	v->a[33216] = 1;
	v->a[33217] = sym_concatenation;
	v->a[33218] = actions(1534);
	v->a[33219] = 2;
	small_parse_table_1661(v);
}

void	small_parse_table_1661(t_small_parse_table_array *v)
{
	v->a[33220] = sym_file_descriptor;
	v->a[33221] = aux_sym_heredoc_redirect_token1;
	v->a[33222] = actions(3416);
	v->a[33223] = 2;
	v->a[33224] = sym_raw_string;
	v->a[33225] = sym_word;
	v->a[33226] = state(2611);
	v->a[33227] = 7;
	v->a[33228] = sym_arithmetic_expansion;
	v->a[33229] = sym_brace_expression;
	v->a[33230] = sym_string;
	v->a[33231] = sym_number;
	v->a[33232] = sym_simple_expansion;
	v->a[33233] = sym_expansion;
	v->a[33234] = sym_command_substitution;
	v->a[33235] = actions(1532);
	v->a[33236] = 16;
	v->a[33237] = anon_sym_PIPE;
	v->a[33238] = anon_sym_PIPE_AMP;
	v->a[33239] = anon_sym_AMP_AMP;
	small_parse_table_1662(v);
}

void	small_parse_table_1662(t_small_parse_table_array *v)
{
	v->a[33240] = anon_sym_PIPE_PIPE;
	v->a[33241] = anon_sym_LT;
	v->a[33242] = anon_sym_GT;
	v->a[33243] = anon_sym_GT_GT;
	v->a[33244] = anon_sym_AMP_GT;
	v->a[33245] = anon_sym_AMP_GT_GT;
	v->a[33246] = anon_sym_LT_AMP;
	v->a[33247] = anon_sym_GT_AMP;
	v->a[33248] = anon_sym_GT_PIPE;
	v->a[33249] = anon_sym_LT_AMP_DASH;
	v->a[33250] = anon_sym_GT_AMP_DASH;
	v->a[33251] = anon_sym_LT_LT;
	v->a[33252] = anon_sym_LT_LT_DASH;
	v->a[33253] = 5;
	v->a[33254] = actions(3);
	v->a[33255] = 1;
	v->a[33256] = sym_comment;
	v->a[33257] = actions(3420);
	v->a[33258] = 1;
	v->a[33259] = sym__special_character;
	small_parse_table_1663(v);
}

void	small_parse_table_1663(t_small_parse_table_array *v)
{
	v->a[33260] = state(765);
	v->a[33261] = 1;
	v->a[33262] = aux_sym__literal_repeat1;
	v->a[33263] = actions(3197);
	v->a[33264] = 5;
	v->a[33265] = sym_file_descriptor;
	v->a[33266] = sym_test_operator;
	v->a[33267] = sym__bare_dollar;
	v->a[33268] = sym__brace_start;
	v->a[33269] = aux_sym_heredoc_redirect_token1;
	v->a[33270] = actions(3195);
	v->a[33271] = 33;
	v->a[33272] = anon_sym_LPAREN;
	v->a[33273] = anon_sym_PIPE;
	v->a[33274] = anon_sym_SEMI_SEMI;
	v->a[33275] = anon_sym_SEMI_AMP;
	v->a[33276] = anon_sym_SEMI_SEMI_AMP;
	v->a[33277] = anon_sym_PIPE_AMP;
	v->a[33278] = anon_sym_AMP_AMP;
	v->a[33279] = anon_sym_PIPE_PIPE;
	small_parse_table_1664(v);
}

void	small_parse_table_1664(t_small_parse_table_array *v)
{
	v->a[33280] = anon_sym_LT;
	v->a[33281] = anon_sym_GT;
	v->a[33282] = anon_sym_GT_GT;
	v->a[33283] = anon_sym_AMP_GT;
	v->a[33284] = anon_sym_AMP_GT_GT;
	v->a[33285] = anon_sym_LT_AMP;
	v->a[33286] = anon_sym_GT_AMP;
	v->a[33287] = anon_sym_GT_PIPE;
	v->a[33288] = anon_sym_LT_AMP_DASH;
	v->a[33289] = anon_sym_GT_AMP_DASH;
	v->a[33290] = anon_sym_LT_LT;
	v->a[33291] = anon_sym_LT_LT_DASH;
	v->a[33292] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33293] = anon_sym_AMP;
	v->a[33294] = anon_sym_DOLLAR;
	v->a[33295] = anon_sym_DQUOTE;
	v->a[33296] = sym_raw_string;
	v->a[33297] = aux_sym_number_token1;
	v->a[33298] = aux_sym_number_token2;
	v->a[33299] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1665(v);
}

/* EOF small_parse_table_332.c */
