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
	v->a[8300] = actions(61);
	v->a[8301] = 1;
	v->a[8302] = anon_sym_DOLLAR;
	v->a[8303] = actions(63);
	v->a[8304] = 1;
	v->a[8305] = anon_sym_DQUOTE;
	v->a[8306] = actions(67);
	v->a[8307] = 1;
	v->a[8308] = anon_sym_DOLLAR_LBRACE;
	v->a[8309] = actions(69);
	v->a[8310] = 1;
	v->a[8311] = anon_sym_DOLLAR_LPAREN;
	v->a[8312] = actions(71);
	v->a[8313] = 1;
	v->a[8314] = anon_sym_BQUOTE;
	v->a[8315] = actions(220);
	v->a[8316] = 1;
	v->a[8317] = sym_word;
	v->a[8318] = actions(222);
	v->a[8319] = 1;
	small_parse_table_416(v);
}

void	small_parse_table_416(t_small_parse_table_array *v)
{
	v->a[8320] = anon_sym_BANG;
	v->a[8321] = actions(230);
	v->a[8322] = 1;
	v->a[8323] = sym_file_descriptor;
	v->a[8324] = actions(232);
	v->a[8325] = 1;
	v->a[8326] = sym_variable_name;
	v->a[8327] = state(133);
	v->a[8328] = 1;
	v->a[8329] = aux_sym__statements_repeat1;
	v->a[8330] = state(180);
	v->a[8331] = 1;
	v->a[8332] = sym_command_name;
	v->a[8333] = state(231);
	v->a[8334] = 1;
	v->a[8335] = sym_variable_assignment;
	v->a[8336] = state(650);
	v->a[8337] = 1;
	v->a[8338] = sym_concatenation;
	v->a[8339] = state(710);
	small_parse_table_417(v);
}

void	small_parse_table_417(t_small_parse_table_array *v)
{
	v->a[8340] = 1;
	v->a[8341] = aux_sym_command_repeat1;
	v->a[8342] = state(712);
	v->a[8343] = 1;
	v->a[8344] = sym_file_redirect;
	v->a[8345] = state(1095);
	v->a[8346] = 1;
	v->a[8347] = sym_pipeline;
	v->a[8348] = state(1282);
	v->a[8349] = 1;
	v->a[8350] = aux_sym_redirected_statement_repeat2;
	v->a[8351] = state(2127);
	v->a[8352] = 1;
	v->a[8353] = sym__statement_not_pipeline;
	v->a[8354] = state(2327);
	v->a[8355] = 1;
	v->a[8356] = sym__statements;
	v->a[8357] = actions(11);
	v->a[8358] = 2;
	v->a[8359] = anon_sym_while;
	small_parse_table_418(v);
}

void	small_parse_table_418(t_small_parse_table_array *v)
{
	v->a[8360] = anon_sym_until;
	v->a[8361] = actions(226);
	v->a[8362] = 2;
	v->a[8363] = anon_sym_LT_AMP_DASH;
	v->a[8364] = anon_sym_GT_AMP_DASH;
	v->a[8365] = actions(228);
	v->a[8366] = 2;
	v->a[8367] = sym_raw_string;
	v->a[8368] = sym_number;
	v->a[8369] = state(382);
	v->a[8370] = 5;
	v->a[8371] = sym_arithmetic_expansion;
	v->a[8372] = sym_string;
	v->a[8373] = sym_simple_expansion;
	v->a[8374] = sym_expansion;
	v->a[8375] = sym_command_substitution;
	v->a[8376] = actions(224);
	v->a[8377] = 6;
	v->a[8378] = anon_sym_LT;
	v->a[8379] = anon_sym_GT;
	small_parse_table_419(v);
}

void	small_parse_table_419(t_small_parse_table_array *v)
{
	v->a[8380] = anon_sym_GT_GT;
	v->a[8381] = anon_sym_LT_AMP;
	v->a[8382] = anon_sym_GT_AMP;
	v->a[8383] = anon_sym_GT_PIPE;
	v->a[8384] = state(1087);
	v->a[8385] = 12;
	v->a[8386] = sym_redirected_statement;
	v->a[8387] = sym_for_statement;
	v->a[8388] = sym_while_statement;
	v->a[8389] = sym_if_statement;
	v->a[8390] = sym_case_statement;
	v->a[8391] = sym_function_definition;
	v->a[8392] = sym_compound_statement;
	v->a[8393] = sym_subshell;
	v->a[8394] = sym_list;
	v->a[8395] = sym_negated_command;
	v->a[8396] = sym_command;
	v->a[8397] = sym__variable_assignments;
	v->a[8398] = 32;
	v->a[8399] = actions(3);
	small_parse_table_420(v);
}

/* EOF small_parse_table_83.c */
