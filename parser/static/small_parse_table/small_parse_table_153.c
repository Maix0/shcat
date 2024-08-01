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
	v->a[15300] = anon_sym_DOLLAR_LPAREN;
	v->a[15301] = actions(65);
	v->a[15302] = 1;
	v->a[15303] = anon_sym_BQUOTE;
	v->a[15304] = actions(341);
	v->a[15305] = 1;
	v->a[15306] = sym_variable_name;
	v->a[15307] = state(252);
	v->a[15308] = 1;
	v->a[15309] = sym_command_name;
	v->a[15310] = state(387);
	v->a[15311] = 1;
	v->a[15312] = aux_sym_command_repeat1;
	v->a[15313] = state(551);
	v->a[15314] = 1;
	v->a[15315] = sym_file_redirect;
	v->a[15316] = state(555);
	v->a[15317] = 1;
	v->a[15318] = sym_concatenation;
	v->a[15319] = state(818);
	small_parse_table_766(v);
}

void	small_parse_table_766(t_small_parse_table_array *v)
{
	v->a[15320] = 1;
	v->a[15321] = sym_variable_assignment;
	v->a[15322] = state(1313);
	v->a[15323] = 1;
	v->a[15324] = aux_sym_redirected_statement_repeat2;
	v->a[15325] = actions(11);
	v->a[15326] = 2;
	v->a[15327] = anon_sym_while;
	v->a[15328] = anon_sym_until;
	v->a[15329] = actions(335);
	v->a[15330] = 3;
	v->a[15331] = anon_sym_LT;
	v->a[15332] = anon_sym_GT;
	v->a[15333] = anon_sym_GT_GT;
	v->a[15334] = actions(337);
	v->a[15335] = 3;
	v->a[15336] = sym_raw_string;
	v->a[15337] = sym_number;
	v->a[15338] = sym_word;
	v->a[15339] = state(525);
	small_parse_table_767(v);
}

void	small_parse_table_767(t_small_parse_table_array *v)
{
	v->a[15340] = 5;
	v->a[15341] = sym_arithmetic_expansion;
	v->a[15342] = sym_string;
	v->a[15343] = sym_simple_expansion;
	v->a[15344] = sym_expansion;
	v->a[15345] = sym_command_substitution;
	v->a[15346] = state(1008);
	v->a[15347] = 7;
	v->a[15348] = sym_for_statement;
	v->a[15349] = sym_while_statement;
	v->a[15350] = sym_if_statement;
	v->a[15351] = sym_compound_statement;
	v->a[15352] = sym_subshell;
	v->a[15353] = sym_command;
	v->a[15354] = sym__variable_assignments;
	v->a[15355] = 23;
	v->a[15356] = actions(3);
	v->a[15357] = 1;
	v->a[15358] = sym_comment;
	v->a[15359] = actions(9);
	small_parse_table_768(v);
}

void	small_parse_table_768(t_small_parse_table_array *v)
{
	v->a[15360] = 1;
	v->a[15361] = anon_sym_for;
	v->a[15362] = actions(13);
	v->a[15363] = 1;
	v->a[15364] = anon_sym_if;
	v->a[15365] = actions(17);
	v->a[15366] = 1;
	v->a[15367] = anon_sym_LPAREN;
	v->a[15368] = actions(19);
	v->a[15369] = 1;
	v->a[15370] = anon_sym_LBRACE;
	v->a[15371] = actions(53);
	v->a[15372] = 1;
	v->a[15373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15374] = actions(55);
	v->a[15375] = 1;
	v->a[15376] = anon_sym_DOLLAR;
	v->a[15377] = actions(57);
	v->a[15378] = 1;
	v->a[15379] = anon_sym_DQUOTE;
	small_parse_table_769(v);
}

void	small_parse_table_769(t_small_parse_table_array *v)
{
	v->a[15380] = actions(61);
	v->a[15381] = 1;
	v->a[15382] = anon_sym_DOLLAR_LBRACE;
	v->a[15383] = actions(63);
	v->a[15384] = 1;
	v->a[15385] = anon_sym_DOLLAR_LPAREN;
	v->a[15386] = actions(65);
	v->a[15387] = 1;
	v->a[15388] = anon_sym_BQUOTE;
	v->a[15389] = actions(341);
	v->a[15390] = 1;
	v->a[15391] = sym_variable_name;
	v->a[15392] = state(158);
	v->a[15393] = 1;
	v->a[15394] = sym_command_name;
	v->a[15395] = state(298);
	v->a[15396] = 1;
	v->a[15397] = aux_sym_command_repeat1;
	v->a[15398] = state(551);
	v->a[15399] = 1;
	small_parse_table_770(v);
}

/* EOF small_parse_table_153.c */
