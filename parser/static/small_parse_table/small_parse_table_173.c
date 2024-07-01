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
	v->a[17300] = 1;
	v->a[17301] = anon_sym_LPAREN;
	v->a[17302] = actions(19);
	v->a[17303] = 1;
	v->a[17304] = anon_sym_LBRACE;
	v->a[17305] = actions(43);
	v->a[17306] = 1;
	v->a[17307] = sym_word;
	v->a[17308] = actions(51);
	v->a[17309] = 1;
	v->a[17310] = anon_sym_BANG;
	v->a[17311] = actions(55);
	v->a[17312] = 1;
	v->a[17313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17314] = actions(57);
	v->a[17315] = 1;
	v->a[17316] = anon_sym_DOLLAR;
	v->a[17317] = actions(59);
	v->a[17318] = 1;
	v->a[17319] = anon_sym_DQUOTE;
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = actions(63);
	v->a[17321] = 1;
	v->a[17322] = anon_sym_DOLLAR_LBRACE;
	v->a[17323] = actions(65);
	v->a[17324] = 1;
	v->a[17325] = anon_sym_DOLLAR_LPAREN;
	v->a[17326] = actions(67);
	v->a[17327] = 1;
	v->a[17328] = anon_sym_BQUOTE;
	v->a[17329] = actions(69);
	v->a[17330] = 1;
	v->a[17331] = sym_file_descriptor;
	v->a[17332] = actions(71);
	v->a[17333] = 1;
	v->a[17334] = sym_variable_name;
	v->a[17335] = state(183);
	v->a[17336] = 1;
	v->a[17337] = sym_command_name;
	v->a[17338] = state(350);
	v->a[17339] = 1;
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = sym_variable_assignment;
	v->a[17341] = state(603);
	v->a[17342] = 1;
	v->a[17343] = sym_concatenation;
	v->a[17344] = state(639);
	v->a[17345] = 1;
	v->a[17346] = aux_sym_command_repeat1;
	v->a[17347] = state(644);
	v->a[17348] = 1;
	v->a[17349] = sym_file_redirect;
	v->a[17350] = state(1176);
	v->a[17351] = 1;
	v->a[17352] = sym_pipeline;
	v->a[17353] = state(1196);
	v->a[17354] = 1;
	v->a[17355] = aux_sym_redirected_statement_repeat2;
	v->a[17356] = state(1910);
	v->a[17357] = 1;
	v->a[17358] = sym__statement_not_pipeline;
	v->a[17359] = actions(11);
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = 2;
	v->a[17361] = anon_sym_while;
	v->a[17362] = anon_sym_until;
	v->a[17363] = actions(61);
	v->a[17364] = 2;
	v->a[17365] = sym_raw_string;
	v->a[17366] = sym_number;
	v->a[17367] = state(436);
	v->a[17368] = 5;
	v->a[17369] = sym_arithmetic_expansion;
	v->a[17370] = sym_string;
	v->a[17371] = sym_simple_expansion;
	v->a[17372] = sym_expansion;
	v->a[17373] = sym_command_substitution;
	v->a[17374] = actions(53);
	v->a[17375] = 7;
	v->a[17376] = anon_sym_LT;
	v->a[17377] = anon_sym_GT;
	v->a[17378] = anon_sym_GT_GT;
	v->a[17379] = anon_sym_LT_AMP;
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = anon_sym_GT_AMP;
	v->a[17381] = anon_sym_GT_PIPE;
	v->a[17382] = anon_sym_LT_GT;
	v->a[17383] = state(1181);
	v->a[17384] = 12;
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
