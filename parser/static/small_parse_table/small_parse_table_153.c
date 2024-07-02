/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_153.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_765(t_small_parse_table_array *v)
{
	v->a[15300] = actions(63);
	v->a[15301] = 1;
	v->a[15302] = anon_sym_DOLLAR_LBRACE;
	v->a[15303] = actions(65);
	v->a[15304] = 1;
	v->a[15305] = anon_sym_DOLLAR_LPAREN;
	v->a[15306] = actions(67);
	v->a[15307] = 1;
	v->a[15308] = anon_sym_BQUOTE;
	v->a[15309] = actions(69);
	v->a[15310] = 1;
	v->a[15311] = sym_file_descriptor;
	v->a[15312] = actions(71);
	v->a[15313] = 1;
	v->a[15314] = sym_variable_name;
	v->a[15315] = state(38);
	v->a[15316] = 1;
	v->a[15317] = aux_sym__terminated_statement;
	v->a[15318] = state(182);
	v->a[15319] = 1;
	small_parse_table_766(v);
}

void	small_parse_table_766(t_small_parse_table_array *v)
{
	v->a[15320] = sym_command_name;
	v->a[15321] = state(295);
	v->a[15322] = 1;
	v->a[15323] = sym_variable_assignment;
	v->a[15324] = state(584);
	v->a[15325] = 1;
	v->a[15326] = sym_concatenation;
	v->a[15327] = state(620);
	v->a[15328] = 1;
	v->a[15329] = sym_file_redirect;
	v->a[15330] = state(623);
	v->a[15331] = 1;
	v->a[15332] = aux_sym_command_repeat1;
	v->a[15333] = state(1107);
	v->a[15334] = 1;
	v->a[15335] = sym_pipeline;
	v->a[15336] = state(1201);
	v->a[15337] = 1;
	v->a[15338] = aux_sym_redirected_statement_repeat2;
	v->a[15339] = state(1911);
	small_parse_table_767(v);
}

void	small_parse_table_767(t_small_parse_table_array *v)
{
	v->a[15340] = 1;
	v->a[15341] = sym__statement_not_pipeline;
	v->a[15342] = actions(11);
	v->a[15343] = 2;
	v->a[15344] = anon_sym_while;
	v->a[15345] = anon_sym_until;
	v->a[15346] = actions(61);
	v->a[15347] = 2;
	v->a[15348] = sym_raw_string;
	v->a[15349] = sym_number;
	v->a[15350] = state(433);
	v->a[15351] = 5;
	v->a[15352] = sym_arithmetic_expansion;
	v->a[15353] = sym_string;
	v->a[15354] = sym_simple_expansion;
	v->a[15355] = sym_expansion;
	v->a[15356] = sym_command_substitution;
	v->a[15357] = actions(53);
	v->a[15358] = 7;
	v->a[15359] = anon_sym_LT;
	small_parse_table_768(v);
}

void	small_parse_table_768(t_small_parse_table_array *v)
{
	v->a[15360] = anon_sym_GT;
	v->a[15361] = anon_sym_GT_GT;
	v->a[15362] = anon_sym_LT_AMP;
	v->a[15363] = anon_sym_GT_AMP;
	v->a[15364] = anon_sym_GT_PIPE;
	v->a[15365] = anon_sym_LT_GT;
	v->a[15366] = state(1074);
	v->a[15367] = 12;
	v->a[15368] = sym_redirected_statement;
	v->a[15369] = sym_for_statement;
	v->a[15370] = sym_while_statement;
	v->a[15371] = sym_if_statement;
	v->a[15372] = sym_case_statement;
	v->a[15373] = sym_function_definition;
	v->a[15374] = sym_compound_statement;
	v->a[15375] = sym_subshell;
	v->a[15376] = sym_list;
	v->a[15377] = sym_negated_command;
	v->a[15378] = sym_command;
	v->a[15379] = sym__variable_assignments;
	small_parse_table_769(v);
}

void	small_parse_table_769(t_small_parse_table_array *v)
{
	v->a[15380] = 41;
	v->a[15381] = actions(3);
	v->a[15382] = 1;
	v->a[15383] = sym_comment;
	v->a[15384] = actions(9);
	v->a[15385] = 1;
	v->a[15386] = anon_sym_for;
	v->a[15387] = actions(13);
	v->a[15388] = 1;
	v->a[15389] = anon_sym_if;
	v->a[15390] = actions(15);
	v->a[15391] = 1;
	v->a[15392] = anon_sym_case;
	v->a[15393] = actions(17);
	v->a[15394] = 1;
	v->a[15395] = anon_sym_LPAREN;
	v->a[15396] = actions(19);
	v->a[15397] = 1;
	v->a[15398] = anon_sym_LBRACE;
	v->a[15399] = actions(55);
	small_parse_table_770(v);
}

/* EOF small_parse_table_153.c */
