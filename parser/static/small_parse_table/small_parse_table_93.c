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
	v->a[9300] = actions(71);
	v->a[9301] = 1;
	v->a[9302] = anon_sym_BQUOTE;
	v->a[9303] = actions(73);
	v->a[9304] = 1;
	v->a[9305] = sym_file_descriptor;
	v->a[9306] = actions(75);
	v->a[9307] = 1;
	v->a[9308] = sym_variable_name;
	v->a[9309] = actions(234);
	v->a[9310] = 1;
	v->a[9311] = sym_word;
	v->a[9312] = actions(236);
	v->a[9313] = 1;
	v->a[9314] = anon_sym_BANG;
	v->a[9315] = state(129);
	v->a[9316] = 1;
	v->a[9317] = aux_sym__statements_repeat1;
	v->a[9318] = state(189);
	v->a[9319] = 1;
	small_parse_table_466(v);
}

void	small_parse_table_466(t_small_parse_table_array *v)
{
	v->a[9320] = sym_command_name;
	v->a[9321] = state(244);
	v->a[9322] = 1;
	v->a[9323] = sym_variable_assignment;
	v->a[9324] = state(624);
	v->a[9325] = 1;
	v->a[9326] = sym_concatenation;
	v->a[9327] = state(672);
	v->a[9328] = 1;
	v->a[9329] = aux_sym_command_repeat1;
	v->a[9330] = state(787);
	v->a[9331] = 1;
	v->a[9332] = sym_file_redirect;
	v->a[9333] = state(1176);
	v->a[9334] = 1;
	v->a[9335] = sym_pipeline;
	v->a[9336] = state(1207);
	v->a[9337] = 1;
	v->a[9338] = aux_sym_redirected_statement_repeat2;
	v->a[9339] = state(2116);
	small_parse_table_467(v);
}

void	small_parse_table_467(t_small_parse_table_array *v)
{
	v->a[9340] = 1;
	v->a[9341] = sym__statement_not_pipeline;
	v->a[9342] = state(2131);
	v->a[9343] = 1;
	v->a[9344] = sym__statements;
	v->a[9345] = actions(11);
	v->a[9346] = 2;
	v->a[9347] = anon_sym_while;
	v->a[9348] = anon_sym_until;
	v->a[9349] = actions(57);
	v->a[9350] = 2;
	v->a[9351] = anon_sym_LT_AMP_DASH;
	v->a[9352] = anon_sym_GT_AMP_DASH;
	v->a[9353] = actions(65);
	v->a[9354] = 2;
	v->a[9355] = sym_raw_string;
	v->a[9356] = sym_number;
	v->a[9357] = state(420);
	v->a[9358] = 5;
	v->a[9359] = sym_arithmetic_expansion;
	small_parse_table_468(v);
}

void	small_parse_table_468(t_small_parse_table_array *v)
{
	v->a[9360] = sym_string;
	v->a[9361] = sym_simple_expansion;
	v->a[9362] = sym_expansion;
	v->a[9363] = sym_command_substitution;
	v->a[9364] = actions(55);
	v->a[9365] = 8;
	v->a[9366] = anon_sym_LT;
	v->a[9367] = anon_sym_GT;
	v->a[9368] = anon_sym_GT_GT;
	v->a[9369] = anon_sym_AMP_GT;
	v->a[9370] = anon_sym_AMP_GT_GT;
	v->a[9371] = anon_sym_LT_AMP;
	v->a[9372] = anon_sym_GT_AMP;
	v->a[9373] = anon_sym_GT_PIPE;
	v->a[9374] = state(1057);
	v->a[9375] = 12;
	v->a[9376] = sym_redirected_statement;
	v->a[9377] = sym_for_statement;
	v->a[9378] = sym_while_statement;
	v->a[9379] = sym_if_statement;
	small_parse_table_469(v);
}

void	small_parse_table_469(t_small_parse_table_array *v)
{
	v->a[9380] = sym_case_statement;
	v->a[9381] = sym_function_definition;
	v->a[9382] = sym_compound_statement;
	v->a[9383] = sym_subshell;
	v->a[9384] = sym_list;
	v->a[9385] = sym_negated_command;
	v->a[9386] = sym_command;
	v->a[9387] = sym__variable_assignments;
	v->a[9388] = 32;
	v->a[9389] = actions(3);
	v->a[9390] = 1;
	v->a[9391] = sym_comment;
	v->a[9392] = actions(9);
	v->a[9393] = 1;
	v->a[9394] = anon_sym_for;
	v->a[9395] = actions(13);
	v->a[9396] = 1;
	v->a[9397] = anon_sym_if;
	v->a[9398] = actions(15);
	v->a[9399] = 1;
	small_parse_table_470(v);
}

/* EOF small_parse_table_93.c */
