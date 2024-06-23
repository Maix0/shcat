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
	v->a[17300] = anon_sym_DOLLAR_LPAREN;
	v->a[17301] = actions(71);
	v->a[17302] = 1;
	v->a[17303] = anon_sym_BQUOTE;
	v->a[17304] = actions(73);
	v->a[17305] = 1;
	v->a[17306] = sym_file_descriptor;
	v->a[17307] = actions(75);
	v->a[17308] = 1;
	v->a[17309] = sym_variable_name;
	v->a[17310] = state(37);
	v->a[17311] = 1;
	v->a[17312] = aux_sym__terminated_statement;
	v->a[17313] = state(187);
	v->a[17314] = 1;
	v->a[17315] = sym_command_name;
	v->a[17316] = state(300);
	v->a[17317] = 1;
	v->a[17318] = sym_variable_assignment;
	v->a[17319] = state(647);
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = 1;
	v->a[17321] = sym_concatenation;
	v->a[17322] = state(736);
	v->a[17323] = 1;
	v->a[17324] = aux_sym_command_repeat1;
	v->a[17325] = state(738);
	v->a[17326] = 1;
	v->a[17327] = sym_file_redirect;
	v->a[17328] = state(1455);
	v->a[17329] = 1;
	v->a[17330] = sym_pipeline;
	v->a[17331] = state(1460);
	v->a[17332] = 1;
	v->a[17333] = aux_sym_redirected_statement_repeat2;
	v->a[17334] = state(2269);
	v->a[17335] = 1;
	v->a[17336] = sym__statement_not_pipeline;
	v->a[17337] = actions(11);
	v->a[17338] = 2;
	v->a[17339] = anon_sym_while;
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = anon_sym_until;
	v->a[17341] = actions(57);
	v->a[17342] = 2;
	v->a[17343] = anon_sym_LT_AMP_DASH;
	v->a[17344] = anon_sym_GT_AMP_DASH;
	v->a[17345] = actions(65);
	v->a[17346] = 2;
	v->a[17347] = sym_raw_string;
	v->a[17348] = sym_number;
	v->a[17349] = state(394);
	v->a[17350] = 5;
	v->a[17351] = sym_arithmetic_expansion;
	v->a[17352] = sym_string;
	v->a[17353] = sym_simple_expansion;
	v->a[17354] = sym_expansion;
	v->a[17355] = sym_command_substitution;
	v->a[17356] = actions(55);
	v->a[17357] = 8;
	v->a[17358] = anon_sym_LT;
	v->a[17359] = anon_sym_GT;
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = anon_sym_GT_GT;
	v->a[17361] = anon_sym_AMP_GT;
	v->a[17362] = anon_sym_AMP_GT_GT;
	v->a[17363] = anon_sym_LT_AMP;
	v->a[17364] = anon_sym_GT_AMP;
	v->a[17365] = anon_sym_GT_PIPE;
	v->a[17366] = state(1359);
	v->a[17367] = 12;
	v->a[17368] = sym_redirected_statement;
	v->a[17369] = sym_for_statement;
	v->a[17370] = sym_while_statement;
	v->a[17371] = sym_if_statement;
	v->a[17372] = sym_case_statement;
	v->a[17373] = sym_function_definition;
	v->a[17374] = sym_compound_statement;
	v->a[17375] = sym_subshell;
	v->a[17376] = sym_list;
	v->a[17377] = sym_negated_command;
	v->a[17378] = sym_command;
	v->a[17379] = sym__variable_assignments;
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = 29;
	v->a[17381] = actions(3);
	v->a[17382] = 1;
	v->a[17383] = sym_comment;
	v->a[17384] = actions(9);
	v->a[17385] = 1;
	v->a[17386] = anon_sym_for;
	v->a[17387] = actions(13);
	v->a[17388] = 1;
	v->a[17389] = anon_sym_if;
	v->a[17390] = actions(15);
	v->a[17391] = 1;
	v->a[17392] = anon_sym_case;
	v->a[17393] = actions(17);
	v->a[17394] = 1;
	v->a[17395] = anon_sym_LPAREN;
	v->a[17396] = actions(19);
	v->a[17397] = 1;
	v->a[17398] = anon_sym_LBRACE;
	v->a[17399] = actions(59);
	small_parse_table_870(v);
}

/* EOF small_parse_table_173.c */
