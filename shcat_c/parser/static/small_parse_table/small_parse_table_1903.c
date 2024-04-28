/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1903.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9515(t_small_parse_table_array *v)
{
	v->a[190300] = 2;
	v->a[190301] = sym_concatenation;
	v->a[190302] = sym_array;
	v->a[190303] = state(1192);
	v->a[190304] = 9;
	v->a[190305] = sym_arithmetic_expansion;
	v->a[190306] = sym_brace_expression;
	v->a[190307] = sym_string;
	v->a[190308] = sym_translated_string;
	v->a[190309] = sym_number;
	v->a[190310] = sym_simple_expansion;
	v->a[190311] = sym_expansion;
	v->a[190312] = sym_command_substitution;
	v->a[190313] = sym_process_substitution;
	v->a[190314] = 3;
	v->a[190315] = actions(71);
	v->a[190316] = 1;
	v->a[190317] = sym_comment;
	v->a[190318] = actions(1332);
	v->a[190319] = 11;
	small_parse_table_9516(v);
}

void	small_parse_table_9516(t_small_parse_table_array *v)
{
	v->a[190320] = anon_sym_LT;
	v->a[190321] = anon_sym_GT;
	v->a[190322] = anon_sym_AMP_GT;
	v->a[190323] = anon_sym_LT_AMP;
	v->a[190324] = anon_sym_GT_AMP;
	v->a[190325] = anon_sym_DOLLAR;
	v->a[190326] = aux_sym_number_token1;
	v->a[190327] = aux_sym_number_token2;
	v->a[190328] = anon_sym_DOLLAR_LPAREN;
	v->a[190329] = anon_sym_BQUOTE;
	v->a[190330] = sym_word;
	v->a[190331] = actions(1334);
	v->a[190332] = 23;
	v->a[190333] = sym_file_descriptor;
	v->a[190334] = sym__concat;
	v->a[190335] = sym_variable_name;
	v->a[190336] = sym_test_operator;
	v->a[190337] = sym__brace_start;
	v->a[190338] = anon_sym_LPAREN_LPAREN;
	v->a[190339] = anon_sym_GT_GT;
	small_parse_table_9517(v);
}

void	small_parse_table_9517(t_small_parse_table_array *v)
{
	v->a[190340] = anon_sym_AMP_GT_GT;
	v->a[190341] = anon_sym_GT_PIPE;
	v->a[190342] = anon_sym_LT_AMP_DASH;
	v->a[190343] = anon_sym_GT_AMP_DASH;
	v->a[190344] = anon_sym_LT_LT_LT;
	v->a[190345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190346] = anon_sym_DOLLAR_LBRACK;
	v->a[190347] = aux_sym_concatenation_token1;
	v->a[190348] = sym__special_character;
	v->a[190349] = anon_sym_DQUOTE;
	v->a[190350] = sym_raw_string;
	v->a[190351] = sym_ansi_c_string;
	v->a[190352] = anon_sym_DOLLAR_LBRACE;
	v->a[190353] = anon_sym_DOLLAR_BQUOTE;
	v->a[190354] = anon_sym_LT_LPAREN;
	v->a[190355] = anon_sym_GT_LPAREN;
	v->a[190356] = 3;
	v->a[190357] = actions(71);
	v->a[190358] = 1;
	v->a[190359] = sym_comment;
	small_parse_table_9518(v);
}

void	small_parse_table_9518(t_small_parse_table_array *v)
{
	v->a[190360] = actions(1316);
	v->a[190361] = 11;
	v->a[190362] = anon_sym_LT;
	v->a[190363] = anon_sym_GT;
	v->a[190364] = anon_sym_AMP_GT;
	v->a[190365] = anon_sym_LT_AMP;
	v->a[190366] = anon_sym_GT_AMP;
	v->a[190367] = anon_sym_DOLLAR;
	v->a[190368] = aux_sym_number_token1;
	v->a[190369] = aux_sym_number_token2;
	v->a[190370] = anon_sym_DOLLAR_LPAREN;
	v->a[190371] = anon_sym_BQUOTE;
	v->a[190372] = sym_word;
	v->a[190373] = actions(1318);
	v->a[190374] = 23;
	v->a[190375] = sym_file_descriptor;
	v->a[190376] = sym__concat;
	v->a[190377] = sym_variable_name;
	v->a[190378] = sym_test_operator;
	v->a[190379] = sym__brace_start;
	small_parse_table_9519(v);
}

void	small_parse_table_9519(t_small_parse_table_array *v)
{
	v->a[190380] = anon_sym_LPAREN_LPAREN;
	v->a[190381] = anon_sym_GT_GT;
	v->a[190382] = anon_sym_AMP_GT_GT;
	v->a[190383] = anon_sym_GT_PIPE;
	v->a[190384] = anon_sym_LT_AMP_DASH;
	v->a[190385] = anon_sym_GT_AMP_DASH;
	v->a[190386] = anon_sym_LT_LT_LT;
	v->a[190387] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190388] = anon_sym_DOLLAR_LBRACK;
	v->a[190389] = aux_sym_concatenation_token1;
	v->a[190390] = sym__special_character;
	v->a[190391] = anon_sym_DQUOTE;
	v->a[190392] = sym_raw_string;
	v->a[190393] = sym_ansi_c_string;
	v->a[190394] = anon_sym_DOLLAR_LBRACE;
	v->a[190395] = anon_sym_DOLLAR_BQUOTE;
	v->a[190396] = anon_sym_LT_LPAREN;
	v->a[190397] = anon_sym_GT_LPAREN;
	v->a[190398] = 23;
	v->a[190399] = actions(3);
	small_parse_table_9520(v);
}

/* EOF small_parse_table_1903.c */
