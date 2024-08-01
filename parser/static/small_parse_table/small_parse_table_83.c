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
	v->a[8300] = 1;
	v->a[8301] = anon_sym_DOLLAR_LPAREN;
	v->a[8302] = actions(65);
	v->a[8303] = 1;
	v->a[8304] = anon_sym_BQUOTE;
	v->a[8305] = actions(67);
	v->a[8306] = 1;
	v->a[8307] = sym_variable_name;
	v->a[8308] = actions(204);
	v->a[8309] = 1;
	v->a[8310] = sym_word;
	v->a[8311] = actions(206);
	v->a[8312] = 1;
	v->a[8313] = anon_sym_BANG;
	v->a[8314] = state(116);
	v->a[8315] = 1;
	v->a[8316] = aux_sym__statements_repeat1;
	v->a[8317] = state(179);
	v->a[8318] = 1;
	v->a[8319] = sym_command_name;
	small_parse_table_416(v);
}

void	small_parse_table_416(t_small_parse_table_array *v)
{
	v->a[8320] = state(208);
	v->a[8321] = 1;
	v->a[8322] = sym_variable_assignment;
	v->a[8323] = state(385);
	v->a[8324] = 1;
	v->a[8325] = aux_sym_command_repeat1;
	v->a[8326] = state(555);
	v->a[8327] = 1;
	v->a[8328] = sym_concatenation;
	v->a[8329] = state(599);
	v->a[8330] = 1;
	v->a[8331] = sym_file_redirect;
	v->a[8332] = state(969);
	v->a[8333] = 1;
	v->a[8334] = sym_pipeline;
	v->a[8335] = state(1006);
	v->a[8336] = 1;
	v->a[8337] = aux_sym_redirected_statement_repeat2;
	v->a[8338] = state(1560);
	v->a[8339] = 1;
	small_parse_table_417(v);
}

void	small_parse_table_417(t_small_parse_table_array *v)
{
	v->a[8340] = sym__statement_not_pipeline;
	v->a[8341] = state(1748);
	v->a[8342] = 1;
	v->a[8343] = sym__statements;
	v->a[8344] = actions(11);
	v->a[8345] = 2;
	v->a[8346] = anon_sym_while;
	v->a[8347] = anon_sym_until;
	v->a[8348] = actions(59);
	v->a[8349] = 2;
	v->a[8350] = sym_raw_string;
	v->a[8351] = sym_number;
	v->a[8352] = actions(51);
	v->a[8353] = 3;
	v->a[8354] = anon_sym_LT;
	v->a[8355] = anon_sym_GT;
	v->a[8356] = anon_sym_GT_GT;
	v->a[8357] = state(401);
	v->a[8358] = 5;
	v->a[8359] = sym_arithmetic_expansion;
	small_parse_table_418(v);
}

void	small_parse_table_418(t_small_parse_table_array *v)
{
	v->a[8360] = sym_string;
	v->a[8361] = sym_simple_expansion;
	v->a[8362] = sym_expansion;
	v->a[8363] = sym_command_substitution;
	v->a[8364] = state(820);
	v->a[8365] = 12;
	v->a[8366] = sym_redirected_statement;
	v->a[8367] = sym_for_statement;
	v->a[8368] = sym_while_statement;
	v->a[8369] = sym_if_statement;
	v->a[8370] = sym_case_statement;
	v->a[8371] = sym_function_definition;
	v->a[8372] = sym_compound_statement;
	v->a[8373] = sym_subshell;
	v->a[8374] = sym_list;
	v->a[8375] = sym_negated_command;
	v->a[8376] = sym_command;
	v->a[8377] = sym__variable_assignments;
	v->a[8378] = 30;
	v->a[8379] = actions(3);
	small_parse_table_419(v);
}

void	small_parse_table_419(t_small_parse_table_array *v)
{
	v->a[8380] = 1;
	v->a[8381] = sym_comment;
	v->a[8382] = actions(9);
	v->a[8383] = 1;
	v->a[8384] = anon_sym_for;
	v->a[8385] = actions(13);
	v->a[8386] = 1;
	v->a[8387] = anon_sym_if;
	v->a[8388] = actions(15);
	v->a[8389] = 1;
	v->a[8390] = anon_sym_case;
	v->a[8391] = actions(17);
	v->a[8392] = 1;
	v->a[8393] = anon_sym_LPAREN;
	v->a[8394] = actions(19);
	v->a[8395] = 1;
	v->a[8396] = anon_sym_LBRACE;
	v->a[8397] = actions(53);
	v->a[8398] = 1;
	v->a[8399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_420(v);
}

/* EOF small_parse_table_83.c */
