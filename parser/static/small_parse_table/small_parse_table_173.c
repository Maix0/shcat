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
	v->a[17300] = actions(19);
	v->a[17301] = 1;
	v->a[17302] = anon_sym_LBRACE;
	v->a[17303] = actions(55);
	v->a[17304] = 1;
	v->a[17305] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17306] = actions(57);
	v->a[17307] = 1;
	v->a[17308] = anon_sym_DOLLAR;
	v->a[17309] = actions(59);
	v->a[17310] = 1;
	v->a[17311] = anon_sym_DQUOTE;
	v->a[17312] = actions(63);
	v->a[17313] = 1;
	v->a[17314] = anon_sym_DOLLAR_LBRACE;
	v->a[17315] = actions(65);
	v->a[17316] = 1;
	v->a[17317] = anon_sym_DOLLAR_LPAREN;
	v->a[17318] = actions(67);
	v->a[17319] = 1;
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = anon_sym_BQUOTE;
	v->a[17321] = actions(347);
	v->a[17322] = 1;
	v->a[17323] = sym_word;
	v->a[17324] = actions(349);
	v->a[17325] = 1;
	v->a[17326] = anon_sym_BANG;
	v->a[17327] = actions(355);
	v->a[17328] = 1;
	v->a[17329] = sym_file_descriptor;
	v->a[17330] = actions(357);
	v->a[17331] = 1;
	v->a[17332] = sym_variable_name;
	v->a[17333] = state(315);
	v->a[17334] = 1;
	v->a[17335] = sym_command_name;
	v->a[17336] = state(532);
	v->a[17337] = 1;
	v->a[17338] = sym_variable_assignment;
	v->a[17339] = state(622);
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = 1;
	v->a[17341] = aux_sym_command_repeat1;
	v->a[17342] = state(661);
	v->a[17343] = 1;
	v->a[17344] = sym_concatenation;
	v->a[17345] = state(665);
	v->a[17346] = 1;
	v->a[17347] = sym_file_redirect;
	v->a[17348] = state(1359);
	v->a[17349] = 1;
	v->a[17350] = sym_pipeline;
	v->a[17351] = state(1389);
	v->a[17352] = 1;
	v->a[17353] = aux_sym_redirected_statement_repeat2;
	v->a[17354] = state(1909);
	v->a[17355] = 1;
	v->a[17356] = sym__statement_not_pipeline;
	v->a[17357] = actions(11);
	v->a[17358] = 2;
	v->a[17359] = anon_sym_while;
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = anon_sym_until;
	v->a[17361] = actions(353);
	v->a[17362] = 2;
	v->a[17363] = sym_raw_string;
	v->a[17364] = sym_number;
	v->a[17365] = state(620);
	v->a[17366] = 5;
	v->a[17367] = sym_arithmetic_expansion;
	v->a[17368] = sym_string;
	v->a[17369] = sym_simple_expansion;
	v->a[17370] = sym_expansion;
	v->a[17371] = sym_command_substitution;
	v->a[17372] = actions(351);
	v->a[17373] = 7;
	v->a[17374] = anon_sym_LT;
	v->a[17375] = anon_sym_GT;
	v->a[17376] = anon_sym_GT_GT;
	v->a[17377] = anon_sym_LT_AMP;
	v->a[17378] = anon_sym_GT_AMP;
	v->a[17379] = anon_sym_GT_PIPE;
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = anon_sym_LT_GT;
	v->a[17381] = state(1358);
	v->a[17382] = 12;
	v->a[17383] = sym_redirected_statement;
	v->a[17384] = sym_for_statement;
	v->a[17385] = sym_while_statement;
	v->a[17386] = sym_if_statement;
	v->a[17387] = sym_case_statement;
	v->a[17388] = sym_function_definition;
	v->a[17389] = sym_compound_statement;
	v->a[17390] = sym_subshell;
	v->a[17391] = sym_list;
	v->a[17392] = sym_negated_command;
	v->a[17393] = sym_command;
	v->a[17394] = sym__variable_assignments;
	v->a[17395] = 29;
	v->a[17396] = actions(3);
	v->a[17397] = 1;
	v->a[17398] = sym_comment;
	v->a[17399] = actions(9);
	small_parse_table_870(v);
}

/* EOF small_parse_table_173.c */
