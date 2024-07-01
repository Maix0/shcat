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
	v->a[10300] = anon_sym_GT_GT;
	v->a[10301] = anon_sym_LT_AMP;
	v->a[10302] = anon_sym_GT_AMP;
	v->a[10303] = anon_sym_GT_PIPE;
	v->a[10304] = state(1087);
	v->a[10305] = 12;
	v->a[10306] = sym_redirected_statement;
	v->a[10307] = sym_for_statement;
	v->a[10308] = sym_while_statement;
	v->a[10309] = sym_if_statement;
	v->a[10310] = sym_case_statement;
	v->a[10311] = sym_function_definition;
	v->a[10312] = sym_compound_statement;
	v->a[10313] = sym_subshell;
	v->a[10314] = sym_list;
	v->a[10315] = sym_negated_command;
	v->a[10316] = sym_command;
	v->a[10317] = sym__variable_assignments;
	v->a[10318] = 32;
	v->a[10319] = actions(3);
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = 1;
	v->a[10321] = sym_comment;
	v->a[10322] = actions(9);
	v->a[10323] = 1;
	v->a[10324] = anon_sym_for;
	v->a[10325] = actions(13);
	v->a[10326] = 1;
	v->a[10327] = anon_sym_if;
	v->a[10328] = actions(15);
	v->a[10329] = 1;
	v->a[10330] = anon_sym_case;
	v->a[10331] = actions(17);
	v->a[10332] = 1;
	v->a[10333] = anon_sym_LPAREN;
	v->a[10334] = actions(19);
	v->a[10335] = 1;
	v->a[10336] = anon_sym_LBRACE;
	v->a[10337] = actions(59);
	v->a[10338] = 1;
	v->a[10339] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = actions(61);
	v->a[10341] = 1;
	v->a[10342] = anon_sym_DOLLAR;
	v->a[10343] = actions(63);
	v->a[10344] = 1;
	v->a[10345] = anon_sym_DQUOTE;
	v->a[10346] = actions(67);
	v->a[10347] = 1;
	v->a[10348] = anon_sym_DOLLAR_LBRACE;
	v->a[10349] = actions(69);
	v->a[10350] = 1;
	v->a[10351] = anon_sym_DOLLAR_LPAREN;
	v->a[10352] = actions(71);
	v->a[10353] = 1;
	v->a[10354] = anon_sym_BQUOTE;
	v->a[10355] = actions(73);
	v->a[10356] = 1;
	v->a[10357] = sym_file_descriptor;
	v->a[10358] = actions(75);
	v->a[10359] = 1;
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = sym_variable_name;
	v->a[10361] = actions(240);
	v->a[10362] = 1;
	v->a[10363] = sym_word;
	v->a[10364] = actions(242);
	v->a[10365] = 1;
	v->a[10366] = anon_sym_BANG;
	v->a[10367] = state(136);
	v->a[10368] = 1;
	v->a[10369] = aux_sym__statements_repeat1;
	v->a[10370] = state(188);
	v->a[10371] = 1;
	v->a[10372] = sym_command_name;
	v->a[10373] = state(297);
	v->a[10374] = 1;
	v->a[10375] = sym_variable_assignment;
	v->a[10376] = state(650);
	v->a[10377] = 1;
	v->a[10378] = sym_concatenation;
	v->a[10379] = state(749);
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = 1;
	v->a[10381] = aux_sym_command_repeat1;
	v->a[10382] = state(795);
	v->a[10383] = 1;
	v->a[10384] = sym_file_redirect;
	v->a[10385] = state(1154);
	v->a[10386] = 1;
	v->a[10387] = sym_pipeline;
	v->a[10388] = state(1240);
	v->a[10389] = 1;
	v->a[10390] = aux_sym_redirected_statement_repeat2;
	v->a[10391] = state(2119);
	v->a[10392] = 1;
	v->a[10393] = sym__statement_not_pipeline;
	v->a[10394] = state(2264);
	v->a[10395] = 1;
	v->a[10396] = sym__statements;
	v->a[10397] = actions(11);
	v->a[10398] = 2;
	v->a[10399] = anon_sym_while;
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
