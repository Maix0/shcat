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
	v->a[15301] = sym__statements;
	v->a[15302] = actions(11);
	v->a[15303] = 2;
	v->a[15304] = anon_sym_while;
	v->a[15305] = anon_sym_until;
	v->a[15306] = actions(254);
	v->a[15307] = 2;
	v->a[15308] = anon_sym_LT_AMP_DASH;
	v->a[15309] = anon_sym_GT_AMP_DASH;
	v->a[15310] = state(295);
	v->a[15311] = 6;
	v->a[15312] = sym_arithmetic_expansion;
	v->a[15313] = sym_string;
	v->a[15314] = sym_number;
	v->a[15315] = sym_simple_expansion;
	v->a[15316] = sym_expansion;
	v->a[15317] = sym_command_substitution;
	v->a[15318] = actions(252);
	v->a[15319] = 8;
	small_parse_table_766(v);
}

void	small_parse_table_766(t_small_parse_table_array *v)
{
	v->a[15320] = anon_sym_LT;
	v->a[15321] = anon_sym_GT;
	v->a[15322] = anon_sym_GT_GT;
	v->a[15323] = anon_sym_AMP_GT;
	v->a[15324] = anon_sym_AMP_GT_GT;
	v->a[15325] = anon_sym_LT_AMP;
	v->a[15326] = anon_sym_GT_AMP;
	v->a[15327] = anon_sym_GT_PIPE;
	v->a[15328] = state(1031);
	v->a[15329] = 12;
	v->a[15330] = sym_redirected_statement;
	v->a[15331] = sym_for_statement;
	v->a[15332] = sym_while_statement;
	v->a[15333] = sym_if_statement;
	v->a[15334] = sym_case_statement;
	v->a[15335] = sym_function_definition;
	v->a[15336] = sym_compound_statement;
	v->a[15337] = sym_subshell;
	v->a[15338] = sym_list;
	v->a[15339] = sym_negated_command;
	small_parse_table_767(v);
}

void	small_parse_table_767(t_small_parse_table_array *v)
{
	v->a[15340] = sym_command;
	v->a[15341] = sym_variable_assignments;
	v->a[15342] = 34;
	v->a[15343] = actions(3);
	v->a[15344] = 1;
	v->a[15345] = sym_comment;
	v->a[15346] = actions(9);
	v->a[15347] = 1;
	v->a[15348] = anon_sym_for;
	v->a[15349] = actions(13);
	v->a[15350] = 1;
	v->a[15351] = anon_sym_if;
	v->a[15352] = actions(15);
	v->a[15353] = 1;
	v->a[15354] = anon_sym_case;
	v->a[15355] = actions(17);
	v->a[15356] = 1;
	v->a[15357] = anon_sym_LPAREN;
	v->a[15358] = actions(19);
	v->a[15359] = 1;
	small_parse_table_768(v);
}

void	small_parse_table_768(t_small_parse_table_array *v)
{
	v->a[15360] = anon_sym_LBRACE;
	v->a[15361] = actions(63);
	v->a[15362] = 1;
	v->a[15363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15364] = actions(65);
	v->a[15365] = 1;
	v->a[15366] = anon_sym_DOLLAR;
	v->a[15367] = actions(67);
	v->a[15368] = 1;
	v->a[15369] = anon_sym_DQUOTE;
	v->a[15370] = actions(71);
	v->a[15371] = 1;
	v->a[15372] = aux_sym_number_token1;
	v->a[15373] = actions(73);
	v->a[15374] = 1;
	v->a[15375] = aux_sym_number_token2;
	v->a[15376] = actions(75);
	v->a[15377] = 1;
	v->a[15378] = anon_sym_DOLLAR_LBRACE;
	v->a[15379] = actions(77);
	small_parse_table_769(v);
}

void	small_parse_table_769(t_small_parse_table_array *v)
{
	v->a[15380] = 1;
	v->a[15381] = anon_sym_DOLLAR_LPAREN;
	v->a[15382] = actions(79);
	v->a[15383] = 1;
	v->a[15384] = anon_sym_BQUOTE;
	v->a[15385] = actions(248);
	v->a[15386] = 1;
	v->a[15387] = sym_word;
	v->a[15388] = actions(250);
	v->a[15389] = 1;
	v->a[15390] = anon_sym_BANG;
	v->a[15391] = actions(256);
	v->a[15392] = 1;
	v->a[15393] = sym_raw_string;
	v->a[15394] = actions(258);
	v->a[15395] = 1;
	v->a[15396] = sym_file_descriptor;
	v->a[15397] = actions(260);
	v->a[15398] = 1;
	v->a[15399] = sym_variable_name;
	small_parse_table_770(v);
}

/* EOF small_parse_table_153.c */
