/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_103.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_515(t_small_parse_table_array *v)
{
	v->a[10300] = sym_command_substitution;
	v->a[10301] = actions(1180);
	v->a[10302] = 20;
	v->a[10303] = anon_sym_PIPE;
	v->a[10304] = anon_sym_RPAREN;
	v->a[10305] = anon_sym_SEMI_SEMI;
	v->a[10306] = anon_sym_PIPE_AMP;
	v->a[10307] = anon_sym_AMP_AMP;
	v->a[10308] = anon_sym_PIPE_PIPE;
	v->a[10309] = anon_sym_LT;
	v->a[10310] = anon_sym_GT;
	v->a[10311] = anon_sym_GT_GT;
	v->a[10312] = anon_sym_AMP_GT;
	v->a[10313] = anon_sym_AMP_GT_GT;
	v->a[10314] = anon_sym_LT_AMP;
	v->a[10315] = anon_sym_GT_AMP;
	v->a[10316] = anon_sym_GT_PIPE;
	v->a[10317] = anon_sym_LT_AMP_DASH;
	v->a[10318] = anon_sym_GT_AMP_DASH;
	v->a[10319] = anon_sym_LT_LT;
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = anon_sym_LT_LT_DASH;
	v->a[10321] = anon_sym_AMP;
	v->a[10322] = anon_sym_SEMI;
	v->a[10323] = 19;
	v->a[10324] = actions(3);
	v->a[10325] = 1;
	v->a[10326] = sym_comment;
	v->a[10327] = actions(2178);
	v->a[10328] = 1;
	v->a[10329] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10330] = actions(2180);
	v->a[10331] = 1;
	v->a[10332] = anon_sym_DOLLAR;
	v->a[10333] = actions(2182);
	v->a[10334] = 1;
	v->a[10335] = sym__special_character;
	v->a[10336] = actions(2184);
	v->a[10337] = 1;
	v->a[10338] = anon_sym_DQUOTE;
	v->a[10339] = actions(2186);
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = 1;
	v->a[10341] = aux_sym_number_token1;
	v->a[10342] = actions(2188);
	v->a[10343] = 1;
	v->a[10344] = aux_sym_number_token2;
	v->a[10345] = actions(2190);
	v->a[10346] = 1;
	v->a[10347] = anon_sym_DOLLAR_LBRACE;
	v->a[10348] = actions(2192);
	v->a[10349] = 1;
	v->a[10350] = anon_sym_DOLLAR_LPAREN;
	v->a[10351] = actions(2194);
	v->a[10352] = 1;
	v->a[10353] = anon_sym_BQUOTE;
	v->a[10354] = actions(2196);
	v->a[10355] = 1;
	v->a[10356] = anon_sym_DOLLAR_BQUOTE;
	v->a[10357] = actions(2198);
	v->a[10358] = 1;
	v->a[10359] = sym_test_operator;
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = actions(2200);
	v->a[10361] = 1;
	v->a[10362] = sym__brace_start;
	v->a[10363] = state(2096);
	v->a[10364] = 1;
	v->a[10365] = aux_sym__literal_repeat1;
	v->a[10366] = state(2462);
	v->a[10367] = 1;
	v->a[10368] = sym_concatenation;
	v->a[10369] = actions(1530);
	v->a[10370] = 2;
	v->a[10371] = sym_file_descriptor;
	v->a[10372] = aux_sym_heredoc_redirect_token1;
	v->a[10373] = actions(2176);
	v->a[10374] = 2;
	v->a[10375] = sym_raw_string;
	v->a[10376] = sym_word;
	v->a[10377] = state(1973);
	v->a[10378] = 7;
	v->a[10379] = sym_arithmetic_expansion;
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = sym_brace_expression;
	v->a[10381] = sym_string;
	v->a[10382] = sym_number;
	v->a[10383] = sym_simple_expansion;
	v->a[10384] = sym_expansion;
	v->a[10385] = sym_command_substitution;
	v->a[10386] = actions(1528);
	v->a[10387] = 21;
	v->a[10388] = anon_sym_PIPE;
	v->a[10389] = anon_sym_SEMI_SEMI;
	v->a[10390] = anon_sym_SEMI_AMP;
	v->a[10391] = anon_sym_SEMI_SEMI_AMP;
	v->a[10392] = anon_sym_PIPE_AMP;
	v->a[10393] = anon_sym_AMP_AMP;
	v->a[10394] = anon_sym_PIPE_PIPE;
	v->a[10395] = anon_sym_LT;
	v->a[10396] = anon_sym_GT;
	v->a[10397] = anon_sym_GT_GT;
	v->a[10398] = anon_sym_AMP_GT;
	v->a[10399] = anon_sym_AMP_GT_GT;
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
