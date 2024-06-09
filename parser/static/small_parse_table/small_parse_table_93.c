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
	v->a[9300] = sym_expansion;
	v->a[9301] = sym_command_substitution;
	v->a[9302] = actions(59);
	v->a[9303] = 8;
	v->a[9304] = anon_sym_LT;
	v->a[9305] = anon_sym_GT;
	v->a[9306] = anon_sym_GT_GT;
	v->a[9307] = anon_sym_AMP_GT;
	v->a[9308] = anon_sym_AMP_GT_GT;
	v->a[9309] = anon_sym_LT_AMP;
	v->a[9310] = anon_sym_GT_AMP;
	v->a[9311] = anon_sym_GT_PIPE;
	v->a[9312] = state(1137);
	v->a[9313] = 12;
	v->a[9314] = sym_redirected_statement;
	v->a[9315] = sym_for_statement;
	v->a[9316] = sym_while_statement;
	v->a[9317] = sym_if_statement;
	v->a[9318] = sym_case_statement;
	v->a[9319] = sym_function_definition;
	small_parse_table_466(v);
}

void	small_parse_table_466(t_small_parse_table_array *v)
{
	v->a[9320] = sym_compound_statement;
	v->a[9321] = sym_subshell;
	v->a[9322] = sym_list;
	v->a[9323] = sym_negated_command;
	v->a[9324] = sym_command;
	v->a[9325] = sym_variable_assignments;
	v->a[9326] = 34;
	v->a[9327] = actions(3);
	v->a[9328] = 1;
	v->a[9329] = sym_comment;
	v->a[9330] = actions(9);
	v->a[9331] = 1;
	v->a[9332] = anon_sym_for;
	v->a[9333] = actions(13);
	v->a[9334] = 1;
	v->a[9335] = anon_sym_if;
	v->a[9336] = actions(15);
	v->a[9337] = 1;
	v->a[9338] = anon_sym_case;
	v->a[9339] = actions(17);
	small_parse_table_467(v);
}

void	small_parse_table_467(t_small_parse_table_array *v)
{
	v->a[9340] = 1;
	v->a[9341] = anon_sym_LPAREN;
	v->a[9342] = actions(19);
	v->a[9343] = 1;
	v->a[9344] = anon_sym_LBRACE;
	v->a[9345] = actions(49);
	v->a[9346] = 1;
	v->a[9347] = sym_word;
	v->a[9348] = actions(57);
	v->a[9349] = 1;
	v->a[9350] = anon_sym_BANG;
	v->a[9351] = actions(63);
	v->a[9352] = 1;
	v->a[9353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9354] = actions(65);
	v->a[9355] = 1;
	v->a[9356] = anon_sym_DOLLAR;
	v->a[9357] = actions(67);
	v->a[9358] = 1;
	v->a[9359] = anon_sym_DQUOTE;
	small_parse_table_468(v);
}

void	small_parse_table_468(t_small_parse_table_array *v)
{
	v->a[9360] = actions(69);
	v->a[9361] = 1;
	v->a[9362] = sym_raw_string;
	v->a[9363] = actions(71);
	v->a[9364] = 1;
	v->a[9365] = aux_sym_number_token1;
	v->a[9366] = actions(73);
	v->a[9367] = 1;
	v->a[9368] = aux_sym_number_token2;
	v->a[9369] = actions(75);
	v->a[9370] = 1;
	v->a[9371] = anon_sym_DOLLAR_LBRACE;
	v->a[9372] = actions(77);
	v->a[9373] = 1;
	v->a[9374] = anon_sym_DOLLAR_LPAREN;
	v->a[9375] = actions(79);
	v->a[9376] = 1;
	v->a[9377] = anon_sym_BQUOTE;
	v->a[9378] = actions(81);
	v->a[9379] = 1;
	small_parse_table_469(v);
}

void	small_parse_table_469(t_small_parse_table_array *v)
{
	v->a[9380] = sym_file_descriptor;
	v->a[9381] = actions(83);
	v->a[9382] = 1;
	v->a[9383] = sym_variable_name;
	v->a[9384] = actions(272);
	v->a[9385] = 1;
	v->a[9386] = anon_sym_done;
	v->a[9387] = state(37);
	v->a[9388] = 1;
	v->a[9389] = aux_sym__terminated_statement;
	v->a[9390] = state(190);
	v->a[9391] = 1;
	v->a[9392] = sym_command_name;
	v->a[9393] = state(303);
	v->a[9394] = 1;
	v->a[9395] = sym_variable_assignment;
	v->a[9396] = state(582);
	v->a[9397] = 1;
	v->a[9398] = sym_concatenation;
	v->a[9399] = state(587);
	small_parse_table_470(v);
}

/* EOF small_parse_table_93.c */
