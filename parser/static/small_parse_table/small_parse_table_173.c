/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_173.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_865(t_small_parse_table_array *v)
{
	v->a[17300] = anon_sym_case;
	v->a[17301] = actions(17);
	v->a[17302] = 1;
	v->a[17303] = anon_sym_LPAREN;
	v->a[17304] = actions(19);
	v->a[17305] = 1;
	v->a[17306] = anon_sym_LBRACE;
	v->a[17307] = actions(43);
	v->a[17308] = 1;
	v->a[17309] = sym_word;
	v->a[17310] = actions(51);
	v->a[17311] = 1;
	v->a[17312] = anon_sym_BANG;
	v->a[17313] = actions(55);
	v->a[17314] = 1;
	v->a[17315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17316] = actions(57);
	v->a[17317] = 1;
	v->a[17318] = anon_sym_DOLLAR;
	v->a[17319] = actions(59);
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = 1;
	v->a[17321] = anon_sym_DQUOTE;
	v->a[17322] = actions(63);
	v->a[17323] = 1;
	v->a[17324] = anon_sym_DOLLAR_LBRACE;
	v->a[17325] = actions(65);
	v->a[17326] = 1;
	v->a[17327] = anon_sym_DOLLAR_LPAREN;
	v->a[17328] = actions(67);
	v->a[17329] = 1;
	v->a[17330] = anon_sym_BQUOTE;
	v->a[17331] = actions(69);
	v->a[17332] = 1;
	v->a[17333] = sym_file_descriptor;
	v->a[17334] = actions(71);
	v->a[17335] = 1;
	v->a[17336] = sym_variable_name;
	v->a[17337] = state(182);
	v->a[17338] = 1;
	v->a[17339] = sym_command_name;
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = state(367);
	v->a[17341] = 1;
	v->a[17342] = sym_variable_assignment;
	v->a[17343] = state(584);
	v->a[17344] = 1;
	v->a[17345] = sym_concatenation;
	v->a[17346] = state(620);
	v->a[17347] = 1;
	v->a[17348] = sym_file_redirect;
	v->a[17349] = state(623);
	v->a[17350] = 1;
	v->a[17351] = aux_sym_command_repeat1;
	v->a[17352] = state(1201);
	v->a[17353] = 1;
	v->a[17354] = aux_sym_redirected_statement_repeat2;
	v->a[17355] = state(1449);
	v->a[17356] = 1;
	v->a[17357] = sym_pipeline;
	v->a[17358] = actions(11);
	v->a[17359] = 2;
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = anon_sym_while;
	v->a[17361] = anon_sym_until;
	v->a[17362] = actions(61);
	v->a[17363] = 2;
	v->a[17364] = sym_raw_string;
	v->a[17365] = sym_number;
	v->a[17366] = state(433);
	v->a[17367] = 5;
	v->a[17368] = sym_arithmetic_expansion;
	v->a[17369] = sym_string;
	v->a[17370] = sym_simple_expansion;
	v->a[17371] = sym_expansion;
	v->a[17372] = sym_command_substitution;
	v->a[17373] = actions(53);
	v->a[17374] = 7;
	v->a[17375] = anon_sym_LT;
	v->a[17376] = anon_sym_GT;
	v->a[17377] = anon_sym_GT_GT;
	v->a[17378] = anon_sym_LT_AMP;
	v->a[17379] = anon_sym_GT_AMP;
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = anon_sym_GT_PIPE;
	v->a[17381] = anon_sym_LT_GT;
	v->a[17382] = state(1009);
	v->a[17383] = 13;
	v->a[17384] = sym__statement_not_pipeline;
	v->a[17385] = sym_redirected_statement;
	v->a[17386] = sym_for_statement;
	v->a[17387] = sym_while_statement;
	v->a[17388] = sym_if_statement;
	v->a[17389] = sym_case_statement;
	v->a[17390] = sym_function_definition;
	v->a[17391] = sym_compound_statement;
	v->a[17392] = sym_subshell;
	v->a[17393] = sym_list;
	v->a[17394] = sym_negated_command;
	v->a[17395] = sym_command;
	v->a[17396] = sym__variable_assignments;
	v->a[17397] = 28;
	v->a[17398] = actions(3);
	v->a[17399] = 1;
	small_parse_table_870(v);
}

/* EOF small_parse_table_173.c */
