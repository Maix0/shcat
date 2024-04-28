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
	v->a[8300] = anon_sym_SEMI_SEMI;
	v->a[8301] = anon_sym_PIPE_AMP;
	v->a[8302] = anon_sym_AMP_GT;
	v->a[8303] = anon_sym_AMP_GT_GT;
	v->a[8304] = anon_sym_LT_AMP;
	v->a[8305] = anon_sym_GT_AMP;
	v->a[8306] = anon_sym_GT_PIPE;
	v->a[8307] = anon_sym_LT_AMP_DASH;
	v->a[8308] = anon_sym_GT_AMP_DASH;
	v->a[8309] = anon_sym_LT_LT_DASH;
	v->a[8310] = 22;
	v->a[8311] = actions(3);
	v->a[8312] = 1;
	v->a[8313] = sym_comment;
	v->a[8314] = actions(2301);
	v->a[8315] = 1;
	v->a[8316] = anon_sym_DOLLAR_LBRACK;
	v->a[8317] = actions(2303);
	v->a[8318] = 1;
	v->a[8319] = anon_sym_DOLLAR;
	small_parse_table_416(v);
}

void	small_parse_table_416(t_small_parse_table_array *v)
{
	v->a[8320] = actions(2305);
	v->a[8321] = 1;
	v->a[8322] = sym__special_character;
	v->a[8323] = actions(2307);
	v->a[8324] = 1;
	v->a[8325] = anon_sym_DQUOTE;
	v->a[8326] = actions(2309);
	v->a[8327] = 1;
	v->a[8328] = aux_sym_number_token1;
	v->a[8329] = actions(2311);
	v->a[8330] = 1;
	v->a[8331] = aux_sym_number_token2;
	v->a[8332] = actions(2313);
	v->a[8333] = 1;
	v->a[8334] = anon_sym_DOLLAR_LBRACE;
	v->a[8335] = actions(2315);
	v->a[8336] = 1;
	v->a[8337] = anon_sym_DOLLAR_LPAREN;
	v->a[8338] = actions(2317);
	v->a[8339] = 1;
	small_parse_table_417(v);
}

void	small_parse_table_417(t_small_parse_table_array *v)
{
	v->a[8340] = anon_sym_BQUOTE;
	v->a[8341] = actions(2319);
	v->a[8342] = 1;
	v->a[8343] = anon_sym_DOLLAR_BQUOTE;
	v->a[8344] = actions(2325);
	v->a[8345] = 1;
	v->a[8346] = sym_test_operator;
	v->a[8347] = actions(2327);
	v->a[8348] = 1;
	v->a[8349] = sym__brace_start;
	v->a[8350] = actions(2566);
	v->a[8351] = 1;
	v->a[8352] = aux_sym__simple_variable_name_token1;
	v->a[8353] = state(1631);
	v->a[8354] = 1;
	v->a[8355] = aux_sym__literal_repeat1;
	v->a[8356] = actions(2295);
	v->a[8357] = 2;
	v->a[8358] = anon_sym_LPAREN_LPAREN;
	v->a[8359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_418(v);
}

void	small_parse_table_418(t_small_parse_table_array *v)
{
	v->a[8360] = actions(2321);
	v->a[8361] = 2;
	v->a[8362] = anon_sym_LT_LPAREN;
	v->a[8363] = anon_sym_GT_LPAREN;
	v->a[8364] = actions(2564);
	v->a[8365] = 2;
	v->a[8366] = sym_file_descriptor;
	v->a[8367] = aux_sym_heredoc_redirect_token1;
	v->a[8368] = state(598);
	v->a[8369] = 2;
	v->a[8370] = sym_concatenation;
	v->a[8371] = aux_sym_unset_command_repeat1;
	v->a[8372] = actions(2293);
	v->a[8373] = 3;
	v->a[8374] = sym_raw_string;
	v->a[8375] = sym_ansi_c_string;
	v->a[8376] = sym_word;
	v->a[8377] = state(1190);
	v->a[8378] = 9;
	v->a[8379] = sym_arithmetic_expansion;
	small_parse_table_419(v);
}

void	small_parse_table_419(t_small_parse_table_array *v)
{
	v->a[8380] = sym_brace_expression;
	v->a[8381] = sym_string;
	v->a[8382] = sym_translated_string;
	v->a[8383] = sym_number;
	v->a[8384] = sym_simple_expansion;
	v->a[8385] = sym_expansion;
	v->a[8386] = sym_command_substitution;
	v->a[8387] = sym_process_substitution;
	v->a[8388] = actions(2562);
	v->a[8389] = 22;
	v->a[8390] = anon_sym_SEMI;
	v->a[8391] = anon_sym_PIPE_PIPE;
	v->a[8392] = anon_sym_AMP_AMP;
	v->a[8393] = anon_sym_PIPE;
	v->a[8394] = anon_sym_AMP;
	v->a[8395] = anon_sym_LT;
	v->a[8396] = anon_sym_GT;
	v->a[8397] = anon_sym_LT_LT;
	v->a[8398] = anon_sym_GT_GT;
	v->a[8399] = anon_sym_esac;
	small_parse_table_420(v);
}

/* EOF small_parse_table_83.c */
