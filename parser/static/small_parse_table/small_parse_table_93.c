/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_93.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_465(t_small_parse_table_array *v)
{
	v->a[9300] = anon_sym_BANG;
	v->a[9301] = actions(216);
	v->a[9302] = 1;
	v->a[9303] = sym_variable_name;
	v->a[9304] = state(112);
	v->a[9305] = 1;
	v->a[9306] = aux_sym__statements_repeat1;
	v->a[9307] = state(158);
	v->a[9308] = 1;
	v->a[9309] = sym_command_name;
	v->a[9310] = state(186);
	v->a[9311] = 1;
	v->a[9312] = sym_variable_assignment;
	v->a[9313] = state(298);
	v->a[9314] = 1;
	v->a[9315] = aux_sym_command_repeat1;
	v->a[9316] = state(551);
	v->a[9317] = 1;
	v->a[9318] = sym_file_redirect;
	v->a[9319] = state(555);
	small_parse_table_466(v);
}

void	small_parse_table_466(t_small_parse_table_array *v)
{
	v->a[9320] = 1;
	v->a[9321] = sym_concatenation;
	v->a[9322] = state(937);
	v->a[9323] = 1;
	v->a[9324] = sym_pipeline;
	v->a[9325] = state(1019);
	v->a[9326] = 1;
	v->a[9327] = aux_sym_redirected_statement_repeat2;
	v->a[9328] = state(1557);
	v->a[9329] = 1;
	v->a[9330] = sym__statement_not_pipeline;
	v->a[9331] = state(1716);
	v->a[9332] = 1;
	v->a[9333] = sym__statements;
	v->a[9334] = actions(11);
	v->a[9335] = 2;
	v->a[9336] = anon_sym_while;
	v->a[9337] = anon_sym_until;
	v->a[9338] = actions(214);
	v->a[9339] = 2;
	small_parse_table_467(v);
}

void	small_parse_table_467(t_small_parse_table_array *v)
{
	v->a[9340] = sym_raw_string;
	v->a[9341] = sym_number;
	v->a[9342] = actions(212);
	v->a[9343] = 3;
	v->a[9344] = anon_sym_LT;
	v->a[9345] = anon_sym_GT;
	v->a[9346] = anon_sym_GT_GT;
	v->a[9347] = state(277);
	v->a[9348] = 5;
	v->a[9349] = sym_arithmetic_expansion;
	v->a[9350] = sym_string;
	v->a[9351] = sym_simple_expansion;
	v->a[9352] = sym_expansion;
	v->a[9353] = sym_command_substitution;
	v->a[9354] = state(877);
	v->a[9355] = 12;
	v->a[9356] = sym_redirected_statement;
	v->a[9357] = sym_for_statement;
	v->a[9358] = sym_while_statement;
	v->a[9359] = sym_if_statement;
	small_parse_table_468(v);
}

void	small_parse_table_468(t_small_parse_table_array *v)
{
	v->a[9360] = sym_case_statement;
	v->a[9361] = sym_function_definition;
	v->a[9362] = sym_compound_statement;
	v->a[9363] = sym_subshell;
	v->a[9364] = sym_list;
	v->a[9365] = sym_negated_command;
	v->a[9366] = sym_command;
	v->a[9367] = sym__variable_assignments;
	v->a[9368] = 30;
	v->a[9369] = actions(3);
	v->a[9370] = 1;
	v->a[9371] = sym_comment;
	v->a[9372] = actions(9);
	v->a[9373] = 1;
	v->a[9374] = anon_sym_for;
	v->a[9375] = actions(13);
	v->a[9376] = 1;
	v->a[9377] = anon_sym_if;
	v->a[9378] = actions(15);
	v->a[9379] = 1;
	small_parse_table_469(v);
}

void	small_parse_table_469(t_small_parse_table_array *v)
{
	v->a[9380] = anon_sym_case;
	v->a[9381] = actions(17);
	v->a[9382] = 1;
	v->a[9383] = anon_sym_LPAREN;
	v->a[9384] = actions(19);
	v->a[9385] = 1;
	v->a[9386] = anon_sym_LBRACE;
	v->a[9387] = actions(41);
	v->a[9388] = 1;
	v->a[9389] = sym_word;
	v->a[9390] = actions(49);
	v->a[9391] = 1;
	v->a[9392] = anon_sym_BANG;
	v->a[9393] = actions(53);
	v->a[9394] = 1;
	v->a[9395] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9396] = actions(55);
	v->a[9397] = 1;
	v->a[9398] = anon_sym_DOLLAR;
	v->a[9399] = actions(57);
	small_parse_table_470(v);
}

/* EOF small_parse_table_93.c */
