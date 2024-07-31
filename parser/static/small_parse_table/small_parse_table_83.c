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
	v->a[8300] = sym_raw_string;
	v->a[8301] = sym_number;
	v->a[8302] = state(327);
	v->a[8303] = 5;
	v->a[8304] = sym_arithmetic_expansion;
	v->a[8305] = sym_string;
	v->a[8306] = sym_simple_expansion;
	v->a[8307] = sym_expansion;
	v->a[8308] = sym_command_substitution;
	v->a[8309] = actions(210);
	v->a[8310] = 7;
	v->a[8311] = anon_sym_LT;
	v->a[8312] = anon_sym_GT;
	v->a[8313] = anon_sym_GT_GT;
	v->a[8314] = anon_sym_LT_AMP;
	v->a[8315] = anon_sym_GT_AMP;
	v->a[8316] = anon_sym_GT_PIPE;
	v->a[8317] = anon_sym_LT_GT;
	v->a[8318] = state(884);
	v->a[8319] = 12;
	small_parse_table_416(v);
}

void	small_parse_table_416(t_small_parse_table_array *v)
{
	v->a[8320] = sym_redirected_statement;
	v->a[8321] = sym_for_statement;
	v->a[8322] = sym_while_statement;
	v->a[8323] = sym_if_statement;
	v->a[8324] = sym_case_statement;
	v->a[8325] = sym_function_definition;
	v->a[8326] = sym_compound_statement;
	v->a[8327] = sym_subshell;
	v->a[8328] = sym_list;
	v->a[8329] = sym_negated_command;
	v->a[8330] = sym_command;
	v->a[8331] = sym__variable_assignments;
	v->a[8332] = 30;
	v->a[8333] = actions(3);
	v->a[8334] = 1;
	v->a[8335] = sym_comment;
	v->a[8336] = actions(9);
	v->a[8337] = 1;
	v->a[8338] = anon_sym_for;
	v->a[8339] = actions(13);
	small_parse_table_417(v);
}

void	small_parse_table_417(t_small_parse_table_array *v)
{
	v->a[8340] = 1;
	v->a[8341] = anon_sym_if;
	v->a[8342] = actions(15);
	v->a[8343] = 1;
	v->a[8344] = anon_sym_case;
	v->a[8345] = actions(17);
	v->a[8346] = 1;
	v->a[8347] = anon_sym_LPAREN;
	v->a[8348] = actions(19);
	v->a[8349] = 1;
	v->a[8350] = anon_sym_LBRACE;
	v->a[8351] = actions(53);
	v->a[8352] = 1;
	v->a[8353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8354] = actions(55);
	v->a[8355] = 1;
	v->a[8356] = anon_sym_DOLLAR;
	v->a[8357] = actions(57);
	v->a[8358] = 1;
	v->a[8359] = anon_sym_DQUOTE;
	small_parse_table_418(v);
}

void	small_parse_table_418(t_small_parse_table_array *v)
{
	v->a[8360] = actions(61);
	v->a[8361] = 1;
	v->a[8362] = anon_sym_DOLLAR_LBRACE;
	v->a[8363] = actions(63);
	v->a[8364] = 1;
	v->a[8365] = anon_sym_DOLLAR_LPAREN;
	v->a[8366] = actions(65);
	v->a[8367] = 1;
	v->a[8368] = anon_sym_BQUOTE;
	v->a[8369] = actions(67);
	v->a[8370] = 1;
	v->a[8371] = sym_variable_name;
	v->a[8372] = actions(202);
	v->a[8373] = 1;
	v->a[8374] = sym_word;
	v->a[8375] = actions(204);
	v->a[8376] = 1;
	v->a[8377] = anon_sym_BANG;
	v->a[8378] = state(119);
	v->a[8379] = 1;
	small_parse_table_419(v);
}

void	small_parse_table_419(t_small_parse_table_array *v)
{
	v->a[8380] = aux_sym__statements_repeat1;
	v->a[8381] = state(272);
	v->a[8382] = 1;
	v->a[8383] = sym_command_name;
	v->a[8384] = state(283);
	v->a[8385] = 1;
	v->a[8386] = sym_variable_assignment;
	v->a[8387] = state(486);
	v->a[8388] = 1;
	v->a[8389] = aux_sym_command_repeat1;
	v->a[8390] = state(602);
	v->a[8391] = 1;
	v->a[8392] = sym_concatenation;
	v->a[8393] = state(636);
	v->a[8394] = 1;
	v->a[8395] = sym_file_redirect;
	v->a[8396] = state(951);
	v->a[8397] = 1;
	v->a[8398] = sym_pipeline;
	v->a[8399] = state(1006);
	small_parse_table_420(v);
}

/* EOF small_parse_table_83.c */
