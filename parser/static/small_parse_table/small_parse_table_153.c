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
	v->a[15300] = 1;
	v->a[15301] = aux_sym_command_repeat1;
	v->a[15302] = state(1251);
	v->a[15303] = 1;
	v->a[15304] = sym_pipeline;
	v->a[15305] = state(1333);
	v->a[15306] = 1;
	v->a[15307] = aux_sym_redirected_statement_repeat2;
	v->a[15308] = state(2103);
	v->a[15309] = 1;
	v->a[15310] = sym__statement_not_pipeline;
	v->a[15311] = actions(11);
	v->a[15312] = 2;
	v->a[15313] = anon_sym_while;
	v->a[15314] = anon_sym_until;
	v->a[15315] = actions(57);
	v->a[15316] = 2;
	v->a[15317] = anon_sym_LT_AMP_DASH;
	v->a[15318] = anon_sym_GT_AMP_DASH;
	v->a[15319] = actions(65);
	small_parse_table_766(v);
}

void	small_parse_table_766(t_small_parse_table_array *v)
{
	v->a[15320] = 2;
	v->a[15321] = sym_raw_string;
	v->a[15322] = sym_number;
	v->a[15323] = state(443);
	v->a[15324] = 5;
	v->a[15325] = sym_arithmetic_expansion;
	v->a[15326] = sym_string;
	v->a[15327] = sym_simple_expansion;
	v->a[15328] = sym_expansion;
	v->a[15329] = sym_command_substitution;
	v->a[15330] = actions(55);
	v->a[15331] = 6;
	v->a[15332] = anon_sym_LT;
	v->a[15333] = anon_sym_GT;
	v->a[15334] = anon_sym_GT_GT;
	v->a[15335] = anon_sym_LT_AMP;
	v->a[15336] = anon_sym_GT_AMP;
	v->a[15337] = anon_sym_GT_PIPE;
	v->a[15338] = state(1094);
	v->a[15339] = 12;
	small_parse_table_767(v);
}

void	small_parse_table_767(t_small_parse_table_array *v)
{
	v->a[15340] = sym_redirected_statement;
	v->a[15341] = sym_for_statement;
	v->a[15342] = sym_while_statement;
	v->a[15343] = sym_if_statement;
	v->a[15344] = sym_case_statement;
	v->a[15345] = sym_function_definition;
	v->a[15346] = sym_compound_statement;
	v->a[15347] = sym_subshell;
	v->a[15348] = sym_list;
	v->a[15349] = sym_negated_command;
	v->a[15350] = sym_command;
	v->a[15351] = sym__variable_assignments;
	v->a[15352] = 31;
	v->a[15353] = actions(3);
	v->a[15354] = 1;
	v->a[15355] = sym_comment;
	v->a[15356] = actions(9);
	v->a[15357] = 1;
	v->a[15358] = anon_sym_for;
	v->a[15359] = actions(13);
	small_parse_table_768(v);
}

void	small_parse_table_768(t_small_parse_table_array *v)
{
	v->a[15360] = 1;
	v->a[15361] = anon_sym_if;
	v->a[15362] = actions(15);
	v->a[15363] = 1;
	v->a[15364] = anon_sym_case;
	v->a[15365] = actions(17);
	v->a[15366] = 1;
	v->a[15367] = anon_sym_LPAREN;
	v->a[15368] = actions(19);
	v->a[15369] = 1;
	v->a[15370] = anon_sym_LBRACE;
	v->a[15371] = actions(45);
	v->a[15372] = 1;
	v->a[15373] = sym_word;
	v->a[15374] = actions(53);
	v->a[15375] = 1;
	v->a[15376] = anon_sym_BANG;
	v->a[15377] = actions(59);
	v->a[15378] = 1;
	v->a[15379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_769(v);
}

void	small_parse_table_769(t_small_parse_table_array *v)
{
	v->a[15380] = actions(61);
	v->a[15381] = 1;
	v->a[15382] = anon_sym_DOLLAR;
	v->a[15383] = actions(63);
	v->a[15384] = 1;
	v->a[15385] = anon_sym_DQUOTE;
	v->a[15386] = actions(67);
	v->a[15387] = 1;
	v->a[15388] = anon_sym_DOLLAR_LBRACE;
	v->a[15389] = actions(69);
	v->a[15390] = 1;
	v->a[15391] = anon_sym_DOLLAR_LPAREN;
	v->a[15392] = actions(71);
	v->a[15393] = 1;
	v->a[15394] = anon_sym_BQUOTE;
	v->a[15395] = actions(73);
	v->a[15396] = 1;
	v->a[15397] = sym_file_descriptor;
	v->a[15398] = actions(75);
	v->a[15399] = 1;
	small_parse_table_770(v);
}

/* EOF small_parse_table_153.c */
