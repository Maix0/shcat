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
	v->a[15300] = sym_command_name;
	v->a[15301] = state(408);
	v->a[15302] = 1;
	v->a[15303] = sym_variable_assignment;
	v->a[15304] = state(471);
	v->a[15305] = 1;
	v->a[15306] = aux_sym_command_repeat1;
	v->a[15307] = state(600);
	v->a[15308] = 1;
	v->a[15309] = sym_file_redirect;
	v->a[15310] = state(602);
	v->a[15311] = 1;
	v->a[15312] = sym_concatenation;
	v->a[15313] = state(1201);
	v->a[15314] = 1;
	v->a[15315] = aux_sym_redirected_statement_repeat2;
	v->a[15316] = state(1213);
	v->a[15317] = 1;
	v->a[15318] = sym_pipeline;
	v->a[15319] = state(1603);
	small_parse_table_766(v);
}

void	small_parse_table_766(t_small_parse_table_array *v)
{
	v->a[15320] = 1;
	v->a[15321] = sym__statement_not_pipeline;
	v->a[15322] = actions(11);
	v->a[15323] = 2;
	v->a[15324] = anon_sym_while;
	v->a[15325] = anon_sym_until;
	v->a[15326] = actions(303);
	v->a[15327] = 2;
	v->a[15328] = sym_raw_string;
	v->a[15329] = sym_number;
	v->a[15330] = state(603);
	v->a[15331] = 5;
	v->a[15332] = sym_arithmetic_expansion;
	v->a[15333] = sym_string;
	v->a[15334] = sym_simple_expansion;
	v->a[15335] = sym_expansion;
	v->a[15336] = sym_command_substitution;
	v->a[15337] = actions(301);
	v->a[15338] = 7;
	v->a[15339] = anon_sym_LT;
	small_parse_table_767(v);
}

void	small_parse_table_767(t_small_parse_table_array *v)
{
	v->a[15340] = anon_sym_GT;
	v->a[15341] = anon_sym_GT_GT;
	v->a[15342] = anon_sym_LT_AMP;
	v->a[15343] = anon_sym_GT_AMP;
	v->a[15344] = anon_sym_GT_PIPE;
	v->a[15345] = anon_sym_LT_GT;
	v->a[15346] = state(1173);
	v->a[15347] = 12;
	v->a[15348] = sym_redirected_statement;
	v->a[15349] = sym_for_statement;
	v->a[15350] = sym_while_statement;
	v->a[15351] = sym_if_statement;
	v->a[15352] = sym_case_statement;
	v->a[15353] = sym_function_definition;
	v->a[15354] = sym_compound_statement;
	v->a[15355] = sym_subshell;
	v->a[15356] = sym_list;
	v->a[15357] = sym_negated_command;
	v->a[15358] = sym_command;
	v->a[15359] = sym__variable_assignments;
	small_parse_table_768(v);
}

void	small_parse_table_768(t_small_parse_table_array *v)
{
	v->a[15360] = 27;
	v->a[15361] = actions(3);
	v->a[15362] = 1;
	v->a[15363] = sym_comment;
	v->a[15364] = actions(9);
	v->a[15365] = 1;
	v->a[15366] = anon_sym_for;
	v->a[15367] = actions(13);
	v->a[15368] = 1;
	v->a[15369] = anon_sym_if;
	v->a[15370] = actions(15);
	v->a[15371] = 1;
	v->a[15372] = anon_sym_case;
	v->a[15373] = actions(17);
	v->a[15374] = 1;
	v->a[15375] = anon_sym_LPAREN;
	v->a[15376] = actions(19);
	v->a[15377] = 1;
	v->a[15378] = anon_sym_LBRACE;
	v->a[15379] = actions(53);
	small_parse_table_769(v);
}

void	small_parse_table_769(t_small_parse_table_array *v)
{
	v->a[15380] = 1;
	v->a[15381] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15382] = actions(55);
	v->a[15383] = 1;
	v->a[15384] = anon_sym_DOLLAR;
	v->a[15385] = actions(57);
	v->a[15386] = 1;
	v->a[15387] = anon_sym_DQUOTE;
	v->a[15388] = actions(61);
	v->a[15389] = 1;
	v->a[15390] = anon_sym_DOLLAR_LBRACE;
	v->a[15391] = actions(63);
	v->a[15392] = 1;
	v->a[15393] = anon_sym_DOLLAR_LPAREN;
	v->a[15394] = actions(65);
	v->a[15395] = 1;
	v->a[15396] = anon_sym_BQUOTE;
	v->a[15397] = actions(67);
	v->a[15398] = 1;
	v->a[15399] = sym_variable_name;
	small_parse_table_770(v);
}

/* EOF small_parse_table_153.c */
