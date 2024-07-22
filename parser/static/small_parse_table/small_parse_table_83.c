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
	v->a[8300] = sym_for_statement;
	v->a[8301] = sym_while_statement;
	v->a[8302] = sym_if_statement;
	v->a[8303] = sym_case_statement;
	v->a[8304] = sym_function_definition;
	v->a[8305] = sym_compound_statement;
	v->a[8306] = sym_subshell;
	v->a[8307] = sym_list;
	v->a[8308] = sym_negated_command;
	v->a[8309] = sym_command;
	v->a[8310] = sym__variable_assignments;
	v->a[8311] = 31;
	v->a[8312] = actions(3);
	v->a[8313] = 1;
	v->a[8314] = sym_comment;
	v->a[8315] = actions(9);
	v->a[8316] = 1;
	v->a[8317] = anon_sym_for;
	v->a[8318] = actions(13);
	v->a[8319] = 1;
	small_parse_table_416(v);
}

void	small_parse_table_416(t_small_parse_table_array *v)
{
	v->a[8320] = anon_sym_if;
	v->a[8321] = actions(15);
	v->a[8322] = 1;
	v->a[8323] = anon_sym_case;
	v->a[8324] = actions(17);
	v->a[8325] = 1;
	v->a[8326] = anon_sym_LPAREN;
	v->a[8327] = actions(19);
	v->a[8328] = 1;
	v->a[8329] = anon_sym_LBRACE;
	v->a[8330] = actions(55);
	v->a[8331] = 1;
	v->a[8332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8333] = actions(57);
	v->a[8334] = 1;
	v->a[8335] = anon_sym_DOLLAR;
	v->a[8336] = actions(59);
	v->a[8337] = 1;
	v->a[8338] = anon_sym_DQUOTE;
	v->a[8339] = actions(63);
	small_parse_table_417(v);
}

void	small_parse_table_417(t_small_parse_table_array *v)
{
	v->a[8340] = 1;
	v->a[8341] = anon_sym_DOLLAR_LBRACE;
	v->a[8342] = actions(65);
	v->a[8343] = 1;
	v->a[8344] = anon_sym_DOLLAR_LPAREN;
	v->a[8345] = actions(67);
	v->a[8346] = 1;
	v->a[8347] = anon_sym_BQUOTE;
	v->a[8348] = actions(69);
	v->a[8349] = 1;
	v->a[8350] = sym_file_descriptor;
	v->a[8351] = actions(71);
	v->a[8352] = 1;
	v->a[8353] = sym_variable_name;
	v->a[8354] = actions(223);
	v->a[8355] = 1;
	v->a[8356] = sym_word;
	v->a[8357] = actions(225);
	v->a[8358] = 1;
	v->a[8359] = anon_sym_BANG;
	small_parse_table_418(v);
}

void	small_parse_table_418(t_small_parse_table_array *v)
{
	v->a[8360] = state(129);
	v->a[8361] = 1;
	v->a[8362] = aux_sym__statements_repeat1;
	v->a[8363] = state(178);
	v->a[8364] = 1;
	v->a[8365] = sym_command_name;
	v->a[8366] = state(339);
	v->a[8367] = 1;
	v->a[8368] = sym_variable_assignment;
	v->a[8369] = state(585);
	v->a[8370] = 1;
	v->a[8371] = aux_sym_command_repeat1;
	v->a[8372] = state(661);
	v->a[8373] = 1;
	v->a[8374] = sym_concatenation;
	v->a[8375] = state(774);
	v->a[8376] = 1;
	v->a[8377] = sym_file_redirect;
	v->a[8378] = state(1089);
	v->a[8379] = 1;
	small_parse_table_419(v);
}

void	small_parse_table_419(t_small_parse_table_array *v)
{
	v->a[8380] = sym_pipeline;
	v->a[8381] = state(1149);
	v->a[8382] = 1;
	v->a[8383] = aux_sym_redirected_statement_repeat2;
	v->a[8384] = state(1922);
	v->a[8385] = 1;
	v->a[8386] = sym__statement_not_pipeline;
	v->a[8387] = state(1990);
	v->a[8388] = 1;
	v->a[8389] = sym__statements;
	v->a[8390] = actions(11);
	v->a[8391] = 2;
	v->a[8392] = anon_sym_while;
	v->a[8393] = anon_sym_until;
	v->a[8394] = actions(61);
	v->a[8395] = 2;
	v->a[8396] = sym_raw_string;
	v->a[8397] = sym_number;
	v->a[8398] = state(455);
	v->a[8399] = 5;
	small_parse_table_420(v);
}

/* EOF small_parse_table_83.c */
