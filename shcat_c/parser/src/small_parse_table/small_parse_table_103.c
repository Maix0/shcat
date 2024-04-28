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
	v->a[10300] = anon_sym_LT_AMP;
	v->a[10301] = anon_sym_GT_AMP;
	v->a[10302] = anon_sym_GT_PIPE;
	v->a[10303] = anon_sym_LT_AMP_DASH;
	v->a[10304] = anon_sym_GT_AMP_DASH;
	v->a[10305] = anon_sym_LT_LT_DASH;
	v->a[10306] = 22;
	v->a[10307] = actions(3);
	v->a[10308] = 1;
	v->a[10309] = sym_comment;
	v->a[10310] = actions(2895);
	v->a[10311] = 1;
	v->a[10312] = anon_sym_DOLLAR_LBRACK;
	v->a[10313] = actions(2898);
	v->a[10314] = 1;
	v->a[10315] = anon_sym_DOLLAR;
	v->a[10316] = actions(2901);
	v->a[10317] = 1;
	v->a[10318] = sym__special_character;
	v->a[10319] = actions(2904);
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = 1;
	v->a[10321] = anon_sym_DQUOTE;
	v->a[10322] = actions(2907);
	v->a[10323] = 1;
	v->a[10324] = aux_sym_number_token1;
	v->a[10325] = actions(2910);
	v->a[10326] = 1;
	v->a[10327] = aux_sym_number_token2;
	v->a[10328] = actions(2913);
	v->a[10329] = 1;
	v->a[10330] = anon_sym_DOLLAR_LBRACE;
	v->a[10331] = actions(2916);
	v->a[10332] = 1;
	v->a[10333] = anon_sym_DOLLAR_LPAREN;
	v->a[10334] = actions(2919);
	v->a[10335] = 1;
	v->a[10336] = anon_sym_BQUOTE;
	v->a[10337] = actions(2922);
	v->a[10338] = 1;
	v->a[10339] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = actions(2928);
	v->a[10341] = 1;
	v->a[10342] = aux_sym__simple_variable_name_token1;
	v->a[10343] = actions(2931);
	v->a[10344] = 1;
	v->a[10345] = sym_test_operator;
	v->a[10346] = actions(2934);
	v->a[10347] = 1;
	v->a[10348] = sym__brace_start;
	v->a[10349] = state(1860);
	v->a[10350] = 1;
	v->a[10351] = aux_sym__literal_repeat1;
	v->a[10352] = actions(2442);
	v->a[10353] = 2;
	v->a[10354] = sym_file_descriptor;
	v->a[10355] = aux_sym_heredoc_redirect_token1;
	v->a[10356] = actions(2892);
	v->a[10357] = 2;
	v->a[10358] = anon_sym_LPAREN_LPAREN;
	v->a[10359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = actions(2925);
	v->a[10361] = 2;
	v->a[10362] = anon_sym_LT_LPAREN;
	v->a[10363] = anon_sym_GT_LPAREN;
	v->a[10364] = state(633);
	v->a[10365] = 2;
	v->a[10366] = sym_concatenation;
	v->a[10367] = aux_sym_unset_command_repeat1;
	v->a[10368] = actions(2889);
	v->a[10369] = 3;
	v->a[10370] = sym_raw_string;
	v->a[10371] = sym_ansi_c_string;
	v->a[10372] = sym_word;
	v->a[10373] = state(1326);
	v->a[10374] = 9;
	v->a[10375] = sym_arithmetic_expansion;
	v->a[10376] = sym_brace_expression;
	v->a[10377] = sym_string;
	v->a[10378] = sym_translated_string;
	v->a[10379] = sym_number;
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = sym_simple_expansion;
	v->a[10381] = sym_expansion;
	v->a[10382] = sym_command_substitution;
	v->a[10383] = sym_process_substitution;
	v->a[10384] = actions(2440);
	v->a[10385] = 21;
	v->a[10386] = anon_sym_SEMI;
	v->a[10387] = anon_sym_PIPE_PIPE;
	v->a[10388] = anon_sym_AMP_AMP;
	v->a[10389] = anon_sym_PIPE;
	v->a[10390] = anon_sym_AMP;
	v->a[10391] = anon_sym_LT;
	v->a[10392] = anon_sym_GT;
	v->a[10393] = anon_sym_LT_LT;
	v->a[10394] = anon_sym_GT_GT;
	v->a[10395] = anon_sym_SEMI_SEMI;
	v->a[10396] = anon_sym_SEMI_AMP;
	v->a[10397] = anon_sym_SEMI_SEMI_AMP;
	v->a[10398] = anon_sym_PIPE_AMP;
	v->a[10399] = anon_sym_AMP_GT;
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
