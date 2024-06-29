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
	v->a[8300] = actions(15);
	v->a[8301] = 1;
	v->a[8302] = anon_sym_case;
	v->a[8303] = actions(17);
	v->a[8304] = 1;
	v->a[8305] = anon_sym_LPAREN;
	v->a[8306] = actions(19);
	v->a[8307] = 1;
	v->a[8308] = anon_sym_LBRACE;
	v->a[8309] = actions(59);
	v->a[8310] = 1;
	v->a[8311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8312] = actions(61);
	v->a[8313] = 1;
	v->a[8314] = anon_sym_DOLLAR;
	v->a[8315] = actions(63);
	v->a[8316] = 1;
	v->a[8317] = anon_sym_DQUOTE;
	v->a[8318] = actions(67);
	v->a[8319] = 1;
	small_parse_table_416(v);
}

void	small_parse_table_416(t_small_parse_table_array *v)
{
	v->a[8320] = anon_sym_DOLLAR_LBRACE;
	v->a[8321] = actions(69);
	v->a[8322] = 1;
	v->a[8323] = anon_sym_DOLLAR_LPAREN;
	v->a[8324] = actions(71);
	v->a[8325] = 1;
	v->a[8326] = anon_sym_BQUOTE;
	v->a[8327] = actions(220);
	v->a[8328] = 1;
	v->a[8329] = sym_word;
	v->a[8330] = actions(222);
	v->a[8331] = 1;
	v->a[8332] = anon_sym_BANG;
	v->a[8333] = actions(230);
	v->a[8334] = 1;
	v->a[8335] = sym_file_descriptor;
	v->a[8336] = actions(232);
	v->a[8337] = 1;
	v->a[8338] = sym_variable_name;
	v->a[8339] = state(138);
	small_parse_table_417(v);
}

void	small_parse_table_417(t_small_parse_table_array *v)
{
	v->a[8340] = 1;
	v->a[8341] = aux_sym__statements_repeat1;
	v->a[8342] = state(185);
	v->a[8343] = 1;
	v->a[8344] = sym_command_name;
	v->a[8345] = state(235);
	v->a[8346] = 1;
	v->a[8347] = sym_variable_assignment;
	v->a[8348] = state(624);
	v->a[8349] = 1;
	v->a[8350] = sym_concatenation;
	v->a[8351] = state(699);
	v->a[8352] = 1;
	v->a[8353] = sym_file_redirect;
	v->a[8354] = state(765);
	v->a[8355] = 1;
	v->a[8356] = aux_sym_command_repeat1;
	v->a[8357] = state(1110);
	v->a[8358] = 1;
	v->a[8359] = sym_pipeline;
	small_parse_table_418(v);
}

void	small_parse_table_418(t_small_parse_table_array *v)
{
	v->a[8360] = state(1188);
	v->a[8361] = 1;
	v->a[8362] = aux_sym_redirected_statement_repeat2;
	v->a[8363] = state(2115);
	v->a[8364] = 1;
	v->a[8365] = sym__statement_not_pipeline;
	v->a[8366] = state(2188);
	v->a[8367] = 1;
	v->a[8368] = sym__statements;
	v->a[8369] = actions(11);
	v->a[8370] = 2;
	v->a[8371] = anon_sym_while;
	v->a[8372] = anon_sym_until;
	v->a[8373] = actions(226);
	v->a[8374] = 2;
	v->a[8375] = anon_sym_LT_AMP_DASH;
	v->a[8376] = anon_sym_GT_AMP_DASH;
	v->a[8377] = actions(228);
	v->a[8378] = 2;
	v->a[8379] = sym_raw_string;
	small_parse_table_419(v);
}

void	small_parse_table_419(t_small_parse_table_array *v)
{
	v->a[8380] = sym_number;
	v->a[8381] = state(299);
	v->a[8382] = 5;
	v->a[8383] = sym_arithmetic_expansion;
	v->a[8384] = sym_string;
	v->a[8385] = sym_simple_expansion;
	v->a[8386] = sym_expansion;
	v->a[8387] = sym_command_substitution;
	v->a[8388] = actions(224);
	v->a[8389] = 8;
	v->a[8390] = anon_sym_LT;
	v->a[8391] = anon_sym_GT;
	v->a[8392] = anon_sym_GT_GT;
	v->a[8393] = anon_sym_AMP_GT;
	v->a[8394] = anon_sym_AMP_GT_GT;
	v->a[8395] = anon_sym_LT_AMP;
	v->a[8396] = anon_sym_GT_AMP;
	v->a[8397] = anon_sym_GT_PIPE;
	v->a[8398] = state(1072);
	v->a[8399] = 12;
	small_parse_table_420(v);
}

/* EOF small_parse_table_83.c */
