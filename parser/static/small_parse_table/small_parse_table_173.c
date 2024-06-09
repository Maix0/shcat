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
	v->a[17301] = sym_variable_assignment;
	v->a[17302] = state(582);
	v->a[17303] = 1;
	v->a[17304] = sym_concatenation;
	v->a[17305] = state(587);
	v->a[17306] = 1;
	v->a[17307] = aux_sym_command_repeat1;
	v->a[17308] = state(718);
	v->a[17309] = 1;
	v->a[17310] = sym_file_redirect;
	v->a[17311] = state(1213);
	v->a[17312] = 1;
	v->a[17313] = aux_sym_redirected_statement_repeat2;
	v->a[17314] = state(1231);
	v->a[17315] = 1;
	v->a[17316] = sym_pipeline;
	v->a[17317] = state(2035);
	v->a[17318] = 1;
	v->a[17319] = sym__statement_not_pipeline;
	small_parse_table_866(v);
}

void	small_parse_table_866(t_small_parse_table_array *v)
{
	v->a[17320] = actions(292);
	v->a[17321] = 2;
	v->a[17322] = anon_sym_while;
	v->a[17323] = anon_sym_until;
	v->a[17324] = actions(313);
	v->a[17325] = 2;
	v->a[17326] = anon_sym_LT_AMP_DASH;
	v->a[17327] = anon_sym_GT_AMP_DASH;
	v->a[17328] = state(397);
	v->a[17329] = 6;
	v->a[17330] = sym_arithmetic_expansion;
	v->a[17331] = sym_string;
	v->a[17332] = sym_number;
	v->a[17333] = sym_simple_expansion;
	v->a[17334] = sym_expansion;
	v->a[17335] = sym_command_substitution;
	v->a[17336] = actions(310);
	v->a[17337] = 8;
	v->a[17338] = anon_sym_LT;
	v->a[17339] = anon_sym_GT;
	small_parse_table_867(v);
}

void	small_parse_table_867(t_small_parse_table_array *v)
{
	v->a[17340] = anon_sym_GT_GT;
	v->a[17341] = anon_sym_AMP_GT;
	v->a[17342] = anon_sym_AMP_GT_GT;
	v->a[17343] = anon_sym_LT_AMP;
	v->a[17344] = anon_sym_GT_AMP;
	v->a[17345] = anon_sym_GT_PIPE;
	v->a[17346] = state(1167);
	v->a[17347] = 12;
	v->a[17348] = sym_redirected_statement;
	v->a[17349] = sym_for_statement;
	v->a[17350] = sym_while_statement;
	v->a[17351] = sym_if_statement;
	v->a[17352] = sym_case_statement;
	v->a[17353] = sym_function_definition;
	v->a[17354] = sym_compound_statement;
	v->a[17355] = sym_subshell;
	v->a[17356] = sym_list;
	v->a[17357] = sym_negated_command;
	v->a[17358] = sym_command;
	v->a[17359] = sym_variable_assignments;
	small_parse_table_868(v);
}

void	small_parse_table_868(t_small_parse_table_array *v)
{
	v->a[17360] = 33;
	v->a[17361] = actions(3);
	v->a[17362] = 1;
	v->a[17363] = sym_comment;
	v->a[17364] = actions(9);
	v->a[17365] = 1;
	v->a[17366] = anon_sym_for;
	v->a[17367] = actions(13);
	v->a[17368] = 1;
	v->a[17369] = anon_sym_if;
	v->a[17370] = actions(15);
	v->a[17371] = 1;
	v->a[17372] = anon_sym_case;
	v->a[17373] = actions(17);
	v->a[17374] = 1;
	v->a[17375] = anon_sym_LPAREN;
	v->a[17376] = actions(19);
	v->a[17377] = 1;
	v->a[17378] = anon_sym_LBRACE;
	v->a[17379] = actions(49);
	small_parse_table_869(v);
}

void	small_parse_table_869(t_small_parse_table_array *v)
{
	v->a[17380] = 1;
	v->a[17381] = sym_word;
	v->a[17382] = actions(57);
	v->a[17383] = 1;
	v->a[17384] = anon_sym_BANG;
	v->a[17385] = actions(63);
	v->a[17386] = 1;
	v->a[17387] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17388] = actions(65);
	v->a[17389] = 1;
	v->a[17390] = anon_sym_DOLLAR;
	v->a[17391] = actions(67);
	v->a[17392] = 1;
	v->a[17393] = anon_sym_DQUOTE;
	v->a[17394] = actions(69);
	v->a[17395] = 1;
	v->a[17396] = sym_raw_string;
	v->a[17397] = actions(71);
	v->a[17398] = 1;
	v->a[17399] = aux_sym_number_token1;
	small_parse_table_870(v);
}

/* EOF small_parse_table_173.c */
