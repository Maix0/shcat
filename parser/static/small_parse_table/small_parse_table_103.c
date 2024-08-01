/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_103.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_515(t_small_parse_table_array *v)
{
	v->a[10300] = state(186);
	v->a[10301] = 1;
	v->a[10302] = sym_variable_assignment;
	v->a[10303] = state(298);
	v->a[10304] = 1;
	v->a[10305] = aux_sym_command_repeat1;
	v->a[10306] = state(515);
	v->a[10307] = 1;
	v->a[10308] = sym_file_redirect;
	v->a[10309] = state(555);
	v->a[10310] = 1;
	v->a[10311] = sym_concatenation;
	v->a[10312] = state(937);
	v->a[10313] = 1;
	v->a[10314] = sym_pipeline;
	v->a[10315] = state(1019);
	v->a[10316] = 1;
	v->a[10317] = aux_sym_redirected_statement_repeat2;
	v->a[10318] = state(1557);
	v->a[10319] = 1;
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = sym__statement_not_pipeline;
	v->a[10321] = state(1681);
	v->a[10322] = 1;
	v->a[10323] = sym__statements;
	v->a[10324] = actions(11);
	v->a[10325] = 2;
	v->a[10326] = anon_sym_while;
	v->a[10327] = anon_sym_until;
	v->a[10328] = actions(214);
	v->a[10329] = 2;
	v->a[10330] = sym_raw_string;
	v->a[10331] = sym_number;
	v->a[10332] = actions(212);
	v->a[10333] = 3;
	v->a[10334] = anon_sym_LT;
	v->a[10335] = anon_sym_GT;
	v->a[10336] = anon_sym_GT_GT;
	v->a[10337] = state(277);
	v->a[10338] = 5;
	v->a[10339] = sym_arithmetic_expansion;
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = sym_string;
	v->a[10341] = sym_simple_expansion;
	v->a[10342] = sym_expansion;
	v->a[10343] = sym_command_substitution;
	v->a[10344] = state(877);
	v->a[10345] = 12;
	v->a[10346] = sym_redirected_statement;
	v->a[10347] = sym_for_statement;
	v->a[10348] = sym_while_statement;
	v->a[10349] = sym_if_statement;
	v->a[10350] = sym_case_statement;
	v->a[10351] = sym_function_definition;
	v->a[10352] = sym_compound_statement;
	v->a[10353] = sym_subshell;
	v->a[10354] = sym_list;
	v->a[10355] = sym_negated_command;
	v->a[10356] = sym_command;
	v->a[10357] = sym__variable_assignments;
	v->a[10358] = 30;
	v->a[10359] = actions(3);
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = 1;
	v->a[10361] = sym_comment;
	v->a[10362] = actions(9);
	v->a[10363] = 1;
	v->a[10364] = anon_sym_for;
	v->a[10365] = actions(13);
	v->a[10366] = 1;
	v->a[10367] = anon_sym_if;
	v->a[10368] = actions(15);
	v->a[10369] = 1;
	v->a[10370] = anon_sym_case;
	v->a[10371] = actions(17);
	v->a[10372] = 1;
	v->a[10373] = anon_sym_LPAREN;
	v->a[10374] = actions(19);
	v->a[10375] = 1;
	v->a[10376] = anon_sym_LBRACE;
	v->a[10377] = actions(53);
	v->a[10378] = 1;
	v->a[10379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = actions(55);
	v->a[10381] = 1;
	v->a[10382] = anon_sym_DOLLAR;
	v->a[10383] = actions(57);
	v->a[10384] = 1;
	v->a[10385] = anon_sym_DQUOTE;
	v->a[10386] = actions(61);
	v->a[10387] = 1;
	v->a[10388] = anon_sym_DOLLAR_LBRACE;
	v->a[10389] = actions(63);
	v->a[10390] = 1;
	v->a[10391] = anon_sym_DOLLAR_LPAREN;
	v->a[10392] = actions(65);
	v->a[10393] = 1;
	v->a[10394] = anon_sym_BQUOTE;
	v->a[10395] = actions(208);
	v->a[10396] = 1;
	v->a[10397] = sym_word;
	v->a[10398] = actions(210);
	v->a[10399] = 1;
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
