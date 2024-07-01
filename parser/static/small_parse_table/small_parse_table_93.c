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
	v->a[9300] = 1;
	v->a[9301] = aux_sym_command_repeat1;
	v->a[9302] = state(748);
	v->a[9303] = 1;
	v->a[9304] = sym_file_redirect;
	v->a[9305] = state(1095);
	v->a[9306] = 1;
	v->a[9307] = sym_pipeline;
	v->a[9308] = state(1282);
	v->a[9309] = 1;
	v->a[9310] = aux_sym_redirected_statement_repeat2;
	v->a[9311] = state(2127);
	v->a[9312] = 1;
	v->a[9313] = sym__statement_not_pipeline;
	v->a[9314] = state(2215);
	v->a[9315] = 1;
	v->a[9316] = sym__statements;
	v->a[9317] = actions(11);
	v->a[9318] = 2;
	v->a[9319] = anon_sym_while;
	small_parse_table_466(v);
}

void	small_parse_table_466(t_small_parse_table_array *v)
{
	v->a[9320] = anon_sym_until;
	v->a[9321] = actions(226);
	v->a[9322] = 2;
	v->a[9323] = anon_sym_LT_AMP_DASH;
	v->a[9324] = anon_sym_GT_AMP_DASH;
	v->a[9325] = actions(228);
	v->a[9326] = 2;
	v->a[9327] = sym_raw_string;
	v->a[9328] = sym_number;
	v->a[9329] = state(382);
	v->a[9330] = 5;
	v->a[9331] = sym_arithmetic_expansion;
	v->a[9332] = sym_string;
	v->a[9333] = sym_simple_expansion;
	v->a[9334] = sym_expansion;
	v->a[9335] = sym_command_substitution;
	v->a[9336] = actions(224);
	v->a[9337] = 6;
	v->a[9338] = anon_sym_LT;
	v->a[9339] = anon_sym_GT;
	small_parse_table_467(v);
}

void	small_parse_table_467(t_small_parse_table_array *v)
{
	v->a[9340] = anon_sym_GT_GT;
	v->a[9341] = anon_sym_LT_AMP;
	v->a[9342] = anon_sym_GT_AMP;
	v->a[9343] = anon_sym_GT_PIPE;
	v->a[9344] = state(1087);
	v->a[9345] = 12;
	v->a[9346] = sym_redirected_statement;
	v->a[9347] = sym_for_statement;
	v->a[9348] = sym_while_statement;
	v->a[9349] = sym_if_statement;
	v->a[9350] = sym_case_statement;
	v->a[9351] = sym_function_definition;
	v->a[9352] = sym_compound_statement;
	v->a[9353] = sym_subshell;
	v->a[9354] = sym_list;
	v->a[9355] = sym_negated_command;
	v->a[9356] = sym_command;
	v->a[9357] = sym__variable_assignments;
	v->a[9358] = 32;
	v->a[9359] = actions(3);
	small_parse_table_468(v);
}

void	small_parse_table_468(t_small_parse_table_array *v)
{
	v->a[9360] = 1;
	v->a[9361] = sym_comment;
	v->a[9362] = actions(9);
	v->a[9363] = 1;
	v->a[9364] = anon_sym_for;
	v->a[9365] = actions(13);
	v->a[9366] = 1;
	v->a[9367] = anon_sym_if;
	v->a[9368] = actions(15);
	v->a[9369] = 1;
	v->a[9370] = anon_sym_case;
	v->a[9371] = actions(17);
	v->a[9372] = 1;
	v->a[9373] = anon_sym_LPAREN;
	v->a[9374] = actions(19);
	v->a[9375] = 1;
	v->a[9376] = anon_sym_LBRACE;
	v->a[9377] = actions(59);
	v->a[9378] = 1;
	v->a[9379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_469(v);
}

void	small_parse_table_469(t_small_parse_table_array *v)
{
	v->a[9380] = actions(61);
	v->a[9381] = 1;
	v->a[9382] = anon_sym_DOLLAR;
	v->a[9383] = actions(63);
	v->a[9384] = 1;
	v->a[9385] = anon_sym_DQUOTE;
	v->a[9386] = actions(67);
	v->a[9387] = 1;
	v->a[9388] = anon_sym_DOLLAR_LBRACE;
	v->a[9389] = actions(69);
	v->a[9390] = 1;
	v->a[9391] = anon_sym_DOLLAR_LPAREN;
	v->a[9392] = actions(71);
	v->a[9393] = 1;
	v->a[9394] = anon_sym_BQUOTE;
	v->a[9395] = actions(73);
	v->a[9396] = 1;
	v->a[9397] = sym_file_descriptor;
	v->a[9398] = actions(75);
	v->a[9399] = 1;
	small_parse_table_470(v);
}

/* EOF small_parse_table_93.c */
