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
	v->a[17300] = sym_string;
	v->a[17301] = sym_simple_expansion;
	v->a[17302] = sym_expansion;
	v->a[17303] = sym_command_substitution;
	v->a[17304] = actions(341);
	v->a[17305] = 6;
	v->a[17306] = anon_sym_LT;
	v->a[17307] = anon_sym_GT;
	v->a[17308] = anon_sym_GT_GT;
	v->a[17309] = anon_sym_LT_AMP;
	v->a[17310] = anon_sym_GT_AMP;
	v->a[17311] = anon_sym_GT_PIPE;
	v->a[17312] = state(1536);
	v->a[17313] = 12;
	v->a[17314] = sym_redirected_statement;
	v->a[17315] = sym_for_statement;
	v->a[17316] = sym_while_statement;
	v->a[17317] = sym_if_statement;
	v->a[17318] = sym_case_statement;
	v->a[17319] = sym_function_definition;
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = sym_compound_statement;
	v->a[17321] = sym_subshell;
	v->a[17322] = sym_list;
	v->a[17323] = sym_negated_command;
	v->a[17324] = sym_command;
	v->a[17325] = sym__variable_assignments;
	v->a[17326] = 29;
	v->a[17327] = actions(3);
	v->a[17328] = 1;
	v->a[17329] = sym_comment;
	v->a[17330] = actions(9);
	v->a[17331] = 1;
	v->a[17332] = anon_sym_for;
	v->a[17333] = actions(13);
	v->a[17334] = 1;
	v->a[17335] = anon_sym_if;
	v->a[17336] = actions(15);
	v->a[17337] = 1;
	v->a[17338] = anon_sym_case;
	v->a[17339] = actions(17);
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = 1;
	v->a[17341] = anon_sym_LPAREN;
	v->a[17342] = actions(19);
	v->a[17343] = 1;
	v->a[17344] = anon_sym_LBRACE;
	v->a[17345] = actions(59);
	v->a[17346] = 1;
	v->a[17347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17348] = actions(61);
	v->a[17349] = 1;
	v->a[17350] = anon_sym_DOLLAR;
	v->a[17351] = actions(63);
	v->a[17352] = 1;
	v->a[17353] = anon_sym_DQUOTE;
	v->a[17354] = actions(67);
	v->a[17355] = 1;
	v->a[17356] = anon_sym_DOLLAR_LBRACE;
	v->a[17357] = actions(69);
	v->a[17358] = 1;
	v->a[17359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = actions(71);
	v->a[17361] = 1;
	v->a[17362] = anon_sym_BQUOTE;
	v->a[17363] = actions(220);
	v->a[17364] = 1;
	v->a[17365] = sym_word;
	v->a[17366] = actions(222);
	v->a[17367] = 1;
	v->a[17368] = anon_sym_BANG;
	v->a[17369] = actions(230);
	v->a[17370] = 1;
	v->a[17371] = sym_file_descriptor;
	v->a[17372] = actions(232);
	v->a[17373] = 1;
	v->a[17374] = sym_variable_name;
	v->a[17375] = state(180);
	v->a[17376] = 1;
	v->a[17377] = sym_command_name;
	v->a[17378] = state(284);
	v->a[17379] = 1;
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = sym_variable_assignment;
	v->a[17381] = state(650);
	v->a[17382] = 1;
	v->a[17383] = sym_concatenation;
	v->a[17384] = state(710);
	v->a[17385] = 1;
	v->a[17386] = aux_sym_command_repeat1;
	v->a[17387] = state(712);
	v->a[17388] = 1;
	v->a[17389] = sym_file_redirect;
	v->a[17390] = state(1282);
	v->a[17391] = 1;
	v->a[17392] = aux_sym_redirected_statement_repeat2;
	v->a[17393] = state(1576);
	v->a[17394] = 1;
	v->a[17395] = sym_pipeline;
	v->a[17396] = actions(11);
	v->a[17397] = 2;
	v->a[17398] = anon_sym_while;
	v->a[17399] = anon_sym_until;
	small_parse_table_870(v);
}

/* EOF small_parse_table_173.c */
