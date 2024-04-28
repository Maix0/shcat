/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_114.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_570(t_small_parse_table_array *v)
{
	v->a[11400] = anon_sym_LT_LT_LT;
	v->a[11401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11402] = anon_sym_DOLLAR_LBRACK;
	v->a[11403] = anon_sym_DOLLAR;
	v->a[11404] = sym__special_character;
	v->a[11405] = anon_sym_DQUOTE;
	v->a[11406] = sym_raw_string;
	v->a[11407] = sym_ansi_c_string;
	v->a[11408] = aux_sym_number_token1;
	v->a[11409] = aux_sym_number_token2;
	v->a[11410] = anon_sym_DOLLAR_LBRACE;
	v->a[11411] = anon_sym_DOLLAR_LPAREN;
	v->a[11412] = anon_sym_BQUOTE;
	v->a[11413] = anon_sym_DOLLAR_BQUOTE;
	v->a[11414] = anon_sym_LT_LPAREN;
	v->a[11415] = anon_sym_GT_LPAREN;
	v->a[11416] = sym_word;
	v->a[11417] = 6;
	v->a[11418] = actions(3);
	v->a[11419] = 1;
	small_parse_table_571(v);
}

void	small_parse_table_571(t_small_parse_table_array *v)
{
	v->a[11420] = sym_comment;
	v->a[11421] = state(1744);
	v->a[11422] = 1;
	v->a[11423] = aux_sym__literal_repeat1;
	v->a[11424] = state(627);
	v->a[11425] = 2;
	v->a[11426] = sym_concatenation;
	v->a[11427] = aux_sym_for_statement_repeat1;
	v->a[11428] = actions(2096);
	v->a[11429] = 5;
	v->a[11430] = sym_file_descriptor;
	v->a[11431] = sym_variable_name;
	v->a[11432] = sym_test_operator;
	v->a[11433] = sym__brace_start;
	v->a[11434] = aux_sym_heredoc_redirect_token1;
	v->a[11435] = state(1370);
	v->a[11436] = 9;
	v->a[11437] = sym_arithmetic_expansion;
	v->a[11438] = sym_brace_expression;
	v->a[11439] = sym_string;
	small_parse_table_572(v);
}

void	small_parse_table_572(t_small_parse_table_array *v)
{
	v->a[11440] = sym_translated_string;
	v->a[11441] = sym_number;
	v->a[11442] = sym_simple_expansion;
	v->a[11443] = sym_expansion;
	v->a[11444] = sym_command_substitution;
	v->a[11445] = sym_process_substitution;
	v->a[11446] = actions(2094);
	v->a[11447] = 38;
	v->a[11448] = anon_sym_LPAREN_LPAREN;
	v->a[11449] = anon_sym_SEMI;
	v->a[11450] = anon_sym_PIPE_PIPE;
	v->a[11451] = anon_sym_AMP_AMP;
	v->a[11452] = anon_sym_PIPE;
	v->a[11453] = anon_sym_AMP;
	v->a[11454] = anon_sym_LT;
	v->a[11455] = anon_sym_GT;
	v->a[11456] = anon_sym_LT_LT;
	v->a[11457] = anon_sym_GT_GT;
	v->a[11458] = anon_sym_RPAREN;
	v->a[11459] = anon_sym_SEMI_SEMI;
	small_parse_table_573(v);
}

void	small_parse_table_573(t_small_parse_table_array *v)
{
	v->a[11460] = anon_sym_PIPE_AMP;
	v->a[11461] = anon_sym_AMP_GT;
	v->a[11462] = anon_sym_AMP_GT_GT;
	v->a[11463] = anon_sym_LT_AMP;
	v->a[11464] = anon_sym_GT_AMP;
	v->a[11465] = anon_sym_GT_PIPE;
	v->a[11466] = anon_sym_LT_AMP_DASH;
	v->a[11467] = anon_sym_GT_AMP_DASH;
	v->a[11468] = anon_sym_LT_LT_DASH;
	v->a[11469] = anon_sym_LT_LT_LT;
	v->a[11470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11471] = anon_sym_DOLLAR_LBRACK;
	v->a[11472] = anon_sym_DOLLAR;
	v->a[11473] = sym__special_character;
	v->a[11474] = anon_sym_DQUOTE;
	v->a[11475] = sym_raw_string;
	v->a[11476] = sym_ansi_c_string;
	v->a[11477] = aux_sym_number_token1;
	v->a[11478] = aux_sym_number_token2;
	v->a[11479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_574(v);
}

void	small_parse_table_574(t_small_parse_table_array *v)
{
	v->a[11480] = anon_sym_DOLLAR_LPAREN;
	v->a[11481] = anon_sym_BQUOTE;
	v->a[11482] = anon_sym_DOLLAR_BQUOTE;
	v->a[11483] = anon_sym_LT_LPAREN;
	v->a[11484] = anon_sym_GT_LPAREN;
	v->a[11485] = sym_word;
	v->a[11486] = 8;
	v->a[11487] = actions(3);
	v->a[11488] = 1;
	v->a[11489] = sym_comment;
	v->a[11490] = actions(2965);
	v->a[11491] = 1;
	v->a[11492] = anon_sym_DQUOTE;
	v->a[11493] = actions(2969);
	v->a[11494] = 1;
	v->a[11495] = sym_variable_name;
	v->a[11496] = state(1454);
	v->a[11497] = 1;
	v->a[11498] = sym_string;
	v->a[11499] = actions(2967);
	small_parse_table_575(v);
}

/* EOF small_parse_table_114.c */
