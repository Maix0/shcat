/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_83.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_415(t_small_parse_table_array *v)
{
	v->a[8300] = sym_variable_name;
	v->a[8301] = sym_test_operator;
	v->a[8302] = sym__brace_start;
	v->a[8303] = aux_sym_heredoc_redirect_token1;
	v->a[8304] = state(768);
	v->a[8305] = 7;
	v->a[8306] = sym_arithmetic_expansion;
	v->a[8307] = sym_brace_expression;
	v->a[8308] = sym_string;
	v->a[8309] = sym_number;
	v->a[8310] = sym_simple_expansion;
	v->a[8311] = sym_expansion;
	v->a[8312] = sym_command_substitution;
	v->a[8313] = actions(1180);
	v->a[8314] = 32;
	v->a[8315] = anon_sym_PIPE;
	v->a[8316] = anon_sym_RPAREN;
	v->a[8317] = anon_sym_SEMI_SEMI;
	v->a[8318] = anon_sym_PIPE_AMP;
	v->a[8319] = anon_sym_AMP_AMP;
	small_parse_table_416(v);
}

void	small_parse_table_416(t_small_parse_table_array *v)
{
	v->a[8320] = anon_sym_PIPE_PIPE;
	v->a[8321] = anon_sym_LT;
	v->a[8322] = anon_sym_GT;
	v->a[8323] = anon_sym_GT_GT;
	v->a[8324] = anon_sym_AMP_GT;
	v->a[8325] = anon_sym_AMP_GT_GT;
	v->a[8326] = anon_sym_LT_AMP;
	v->a[8327] = anon_sym_GT_AMP;
	v->a[8328] = anon_sym_GT_PIPE;
	v->a[8329] = anon_sym_LT_AMP_DASH;
	v->a[8330] = anon_sym_GT_AMP_DASH;
	v->a[8331] = anon_sym_LT_LT;
	v->a[8332] = anon_sym_LT_LT_DASH;
	v->a[8333] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8334] = anon_sym_AMP;
	v->a[8335] = anon_sym_DOLLAR;
	v->a[8336] = sym__special_character;
	v->a[8337] = anon_sym_DQUOTE;
	v->a[8338] = sym_raw_string;
	v->a[8339] = aux_sym_number_token1;
	small_parse_table_417(v);
}

void	small_parse_table_417(t_small_parse_table_array *v)
{
	v->a[8340] = aux_sym_number_token2;
	v->a[8341] = anon_sym_DOLLAR_LBRACE;
	v->a[8342] = anon_sym_DOLLAR_LPAREN;
	v->a[8343] = anon_sym_BQUOTE;
	v->a[8344] = anon_sym_DOLLAR_BQUOTE;
	v->a[8345] = sym_word;
	v->a[8346] = anon_sym_SEMI;
	v->a[8347] = 6;
	v->a[8348] = actions(3);
	v->a[8349] = 1;
	v->a[8350] = sym_comment;
	v->a[8351] = actions(1855);
	v->a[8352] = 1;
	v->a[8353] = sym_variable_name;
	v->a[8354] = actions(1853);
	v->a[8355] = 2;
	v->a[8356] = aux_sym__simple_variable_name_token1;
	v->a[8357] = aux_sym__multiline_variable_name_token1;
	v->a[8358] = actions(828);
	v->a[8359] = 3;
	small_parse_table_418(v);
}

void	small_parse_table_418(t_small_parse_table_array *v)
{
	v->a[8360] = sym_file_descriptor;
	v->a[8361] = sym_test_operator;
	v->a[8362] = sym__brace_start;
	v->a[8363] = actions(1851);
	v->a[8364] = 9;
	v->a[8365] = anon_sym_BANG;
	v->a[8366] = anon_sym_DASH;
	v->a[8367] = anon_sym_STAR;
	v->a[8368] = anon_sym_QMARK;
	v->a[8369] = anon_sym_DOLLAR;
	v->a[8370] = anon_sym_POUND;
	v->a[8371] = anon_sym_AT;
	v->a[8372] = anon_sym_0;
	v->a[8373] = anon_sym__;
	v->a[8374] = actions(826);
	v->a[8375] = 32;
	v->a[8376] = anon_sym_PIPE;
	v->a[8377] = anon_sym_RPAREN;
	v->a[8378] = anon_sym_SEMI_SEMI;
	v->a[8379] = anon_sym_PIPE_AMP;
	small_parse_table_419(v);
}

void	small_parse_table_419(t_small_parse_table_array *v)
{
	v->a[8380] = anon_sym_AMP_AMP;
	v->a[8381] = anon_sym_PIPE_PIPE;
	v->a[8382] = anon_sym_LT;
	v->a[8383] = anon_sym_GT;
	v->a[8384] = anon_sym_GT_GT;
	v->a[8385] = anon_sym_AMP_GT;
	v->a[8386] = anon_sym_AMP_GT_GT;
	v->a[8387] = anon_sym_LT_AMP;
	v->a[8388] = anon_sym_GT_AMP;
	v->a[8389] = anon_sym_GT_PIPE;
	v->a[8390] = anon_sym_LT_AMP_DASH;
	v->a[8391] = anon_sym_GT_AMP_DASH;
	v->a[8392] = anon_sym_LT_LT;
	v->a[8393] = anon_sym_LT_LT_DASH;
	v->a[8394] = aux_sym_heredoc_redirect_token1;
	v->a[8395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8396] = anon_sym_AMP;
	v->a[8397] = sym__special_character;
	v->a[8398] = anon_sym_DQUOTE;
	v->a[8399] = sym_raw_string;
	small_parse_table_420(v);
}

/* EOF small_parse_table_83.c */
