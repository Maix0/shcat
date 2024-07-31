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
	v->a[10300] = anon_sym_DOLLAR_LBRACE;
	v->a[10301] = actions(63);
	v->a[10302] = 1;
	v->a[10303] = anon_sym_DOLLAR_LPAREN;
	v->a[10304] = actions(65);
	v->a[10305] = 1;
	v->a[10306] = anon_sym_BQUOTE;
	v->a[10307] = actions(206);
	v->a[10308] = 1;
	v->a[10309] = sym_word;
	v->a[10310] = actions(208);
	v->a[10311] = 1;
	v->a[10312] = anon_sym_BANG;
	v->a[10313] = actions(214);
	v->a[10314] = 1;
	v->a[10315] = sym_variable_name;
	v->a[10316] = state(106);
	v->a[10317] = 1;
	v->a[10318] = aux_sym__statements_repeat1;
	v->a[10319] = state(227);
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = 1;
	v->a[10321] = sym_command_name;
	v->a[10322] = state(277);
	v->a[10323] = 1;
	v->a[10324] = sym_variable_assignment;
	v->a[10325] = state(506);
	v->a[10326] = 1;
	v->a[10327] = aux_sym_command_repeat1;
	v->a[10328] = state(587);
	v->a[10329] = 1;
	v->a[10330] = sym_file_redirect;
	v->a[10331] = state(602);
	v->a[10332] = 1;
	v->a[10333] = sym_concatenation;
	v->a[10334] = state(911);
	v->a[10335] = 1;
	v->a[10336] = sym_pipeline;
	v->a[10337] = state(1001);
	v->a[10338] = 1;
	v->a[10339] = aux_sym_redirected_statement_repeat2;
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = state(1606);
	v->a[10341] = 1;
	v->a[10342] = sym__statement_not_pipeline;
	v->a[10343] = state(1694);
	v->a[10344] = 1;
	v->a[10345] = sym__statements;
	v->a[10346] = actions(11);
	v->a[10347] = 2;
	v->a[10348] = anon_sym_while;
	v->a[10349] = anon_sym_until;
	v->a[10350] = actions(212);
	v->a[10351] = 2;
	v->a[10352] = sym_raw_string;
	v->a[10353] = sym_number;
	v->a[10354] = state(327);
	v->a[10355] = 5;
	v->a[10356] = sym_arithmetic_expansion;
	v->a[10357] = sym_string;
	v->a[10358] = sym_simple_expansion;
	v->a[10359] = sym_expansion;
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = sym_command_substitution;
	v->a[10361] = actions(210);
	v->a[10362] = 7;
	v->a[10363] = anon_sym_LT;
	v->a[10364] = anon_sym_GT;
	v->a[10365] = anon_sym_GT_GT;
	v->a[10366] = anon_sym_LT_AMP;
	v->a[10367] = anon_sym_GT_AMP;
	v->a[10368] = anon_sym_GT_PIPE;
	v->a[10369] = anon_sym_LT_GT;
	v->a[10370] = state(884);
	v->a[10371] = 12;
	v->a[10372] = sym_redirected_statement;
	v->a[10373] = sym_for_statement;
	v->a[10374] = sym_while_statement;
	v->a[10375] = sym_if_statement;
	v->a[10376] = sym_case_statement;
	v->a[10377] = sym_function_definition;
	v->a[10378] = sym_compound_statement;
	v->a[10379] = sym_subshell;
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = sym_list;
	v->a[10381] = sym_negated_command;
	v->a[10382] = sym_command;
	v->a[10383] = sym__variable_assignments;
	v->a[10384] = 30;
	v->a[10385] = actions(3);
	v->a[10386] = 1;
	v->a[10387] = sym_comment;
	v->a[10388] = actions(9);
	v->a[10389] = 1;
	v->a[10390] = anon_sym_for;
	v->a[10391] = actions(13);
	v->a[10392] = 1;
	v->a[10393] = anon_sym_if;
	v->a[10394] = actions(15);
	v->a[10395] = 1;
	v->a[10396] = anon_sym_case;
	v->a[10397] = actions(17);
	v->a[10398] = 1;
	v->a[10399] = anon_sym_LPAREN;
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
