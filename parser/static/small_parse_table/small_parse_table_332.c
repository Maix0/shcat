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
	v->a[33200] = 2;
	v->a[33201] = anon_sym_LT_LPAREN;
	v->a[33202] = anon_sym_GT_LPAREN;
	v->a[33203] = actions(4676);
	v->a[33204] = 3;
	v->a[33205] = sym_raw_string;
	v->a[33206] = sym_ansi_c_string;
	v->a[33207] = sym_word;
	v->a[33208] = state(5135);
	v->a[33209] = 9;
	v->a[33210] = sym_arithmetic_expansion;
	v->a[33211] = sym_brace_expression;
	v->a[33212] = sym_string;
	v->a[33213] = sym_translated_string;
	v->a[33214] = sym_number;
	v->a[33215] = sym_simple_expansion;
	v->a[33216] = sym_expansion;
	v->a[33217] = sym_command_substitution;
	v->a[33218] = sym_process_substitution;
	v->a[33219] = actions(2494);
	small_parse_table_1661(v);
}

void	small_parse_table_1661(t_small_parse_table_array *v)
{
	v->a[33220] = 17;
	v->a[33221] = anon_sym_PIPE_PIPE;
	v->a[33222] = anon_sym_AMP_AMP;
	v->a[33223] = anon_sym_PIPE;
	v->a[33224] = anon_sym_LT;
	v->a[33225] = anon_sym_GT;
	v->a[33226] = anon_sym_LT_LT;
	v->a[33227] = anon_sym_GT_GT;
	v->a[33228] = anon_sym_PIPE_AMP;
	v->a[33229] = anon_sym_AMP_GT;
	v->a[33230] = anon_sym_AMP_GT_GT;
	v->a[33231] = anon_sym_LT_AMP;
	v->a[33232] = anon_sym_GT_AMP;
	v->a[33233] = anon_sym_GT_PIPE;
	v->a[33234] = anon_sym_LT_AMP_DASH;
	v->a[33235] = anon_sym_GT_AMP_DASH;
	v->a[33236] = anon_sym_LT_LT_DASH;
	v->a[33237] = anon_sym_LT_LT_LT;
	v->a[33238] = 21;
	v->a[33239] = actions(3);
	small_parse_table_1662(v);
}

void	small_parse_table_1662(t_small_parse_table_array *v)
{
	v->a[33240] = 1;
	v->a[33241] = sym_comment;
	v->a[33242] = actions(3785);
	v->a[33243] = 1;
	v->a[33244] = anon_sym_DOLLAR_LBRACK;
	v->a[33245] = actions(3787);
	v->a[33246] = 1;
	v->a[33247] = anon_sym_DOLLAR;
	v->a[33248] = actions(3791);
	v->a[33249] = 1;
	v->a[33250] = anon_sym_DQUOTE;
	v->a[33251] = actions(3793);
	v->a[33252] = 1;
	v->a[33253] = aux_sym_number_token1;
	v->a[33254] = actions(3795);
	v->a[33255] = 1;
	v->a[33256] = aux_sym_number_token2;
	v->a[33257] = actions(3797);
	v->a[33258] = 1;
	v->a[33259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1663(v);
}

void	small_parse_table_1663(t_small_parse_table_array *v)
{
	v->a[33260] = actions(3799);
	v->a[33261] = 1;
	v->a[33262] = anon_sym_DOLLAR_LPAREN;
	v->a[33263] = actions(3801);
	v->a[33264] = 1;
	v->a[33265] = anon_sym_BQUOTE;
	v->a[33266] = actions(3803);
	v->a[33267] = 1;
	v->a[33268] = anon_sym_DOLLAR_BQUOTE;
	v->a[33269] = actions(3809);
	v->a[33270] = 1;
	v->a[33271] = sym__brace_start;
	v->a[33272] = actions(4678);
	v->a[33273] = 1;
	v->a[33274] = sym__special_character;
	v->a[33275] = actions(4684);
	v->a[33276] = 1;
	v->a[33277] = sym_test_operator;
	v->a[33278] = state(4305);
	v->a[33279] = 1;
	small_parse_table_1664(v);
}

void	small_parse_table_1664(t_small_parse_table_array *v)
{
	v->a[33280] = aux_sym__literal_repeat1;
	v->a[33281] = state(4736);
	v->a[33282] = 1;
	v->a[33283] = sym_concatenation;
	v->a[33284] = actions(2500);
	v->a[33285] = 2;
	v->a[33286] = sym_file_descriptor;
	v->a[33287] = aux_sym_heredoc_redirect_token1;
	v->a[33288] = actions(3783);
	v->a[33289] = 2;
	v->a[33290] = anon_sym_LPAREN_LPAREN;
	v->a[33291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33292] = actions(3805);
	v->a[33293] = 2;
	v->a[33294] = anon_sym_LT_LPAREN;
	v->a[33295] = anon_sym_GT_LPAREN;
	v->a[33296] = actions(4682);
	v->a[33297] = 3;
	v->a[33298] = sym_raw_string;
	v->a[33299] = sym_ansi_c_string;
	small_parse_table_1665(v);
}

/* EOF small_parse_table_332.c */
