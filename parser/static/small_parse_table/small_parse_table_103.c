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
	v->a[10300] = 31;
	v->a[10301] = actions(3);
	v->a[10302] = 1;
	v->a[10303] = sym_comment;
	v->a[10304] = actions(9);
	v->a[10305] = 1;
	v->a[10306] = anon_sym_for;
	v->a[10307] = actions(13);
	v->a[10308] = 1;
	v->a[10309] = anon_sym_if;
	v->a[10310] = actions(15);
	v->a[10311] = 1;
	v->a[10312] = anon_sym_case;
	v->a[10313] = actions(17);
	v->a[10314] = 1;
	v->a[10315] = anon_sym_LPAREN;
	v->a[10316] = actions(19);
	v->a[10317] = 1;
	v->a[10318] = anon_sym_LBRACE;
	v->a[10319] = actions(55);
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = 1;
	v->a[10321] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10322] = actions(57);
	v->a[10323] = 1;
	v->a[10324] = anon_sym_DOLLAR;
	v->a[10325] = actions(59);
	v->a[10326] = 1;
	v->a[10327] = anon_sym_DQUOTE;
	v->a[10328] = actions(63);
	v->a[10329] = 1;
	v->a[10330] = anon_sym_DOLLAR_LBRACE;
	v->a[10331] = actions(65);
	v->a[10332] = 1;
	v->a[10333] = anon_sym_DOLLAR_LPAREN;
	v->a[10334] = actions(67);
	v->a[10335] = 1;
	v->a[10336] = anon_sym_BQUOTE;
	v->a[10337] = actions(211);
	v->a[10338] = 1;
	v->a[10339] = sym_word;
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = actions(213);
	v->a[10341] = 1;
	v->a[10342] = anon_sym_BANG;
	v->a[10343] = actions(219);
	v->a[10344] = 1;
	v->a[10345] = sym_file_descriptor;
	v->a[10346] = actions(221);
	v->a[10347] = 1;
	v->a[10348] = sym_variable_name;
	v->a[10349] = state(120);
	v->a[10350] = 1;
	v->a[10351] = aux_sym__statements_repeat1;
	v->a[10352] = state(177);
	v->a[10353] = 1;
	v->a[10354] = sym_command_name;
	v->a[10355] = state(208);
	v->a[10356] = 1;
	v->a[10357] = sym_variable_assignment;
	v->a[10358] = state(584);
	v->a[10359] = 1;
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = sym_concatenation;
	v->a[10361] = state(620);
	v->a[10362] = 1;
	v->a[10363] = sym_file_redirect;
	v->a[10364] = state(639);
	v->a[10365] = 1;
	v->a[10366] = aux_sym_command_repeat1;
	v->a[10367] = state(1073);
	v->a[10368] = 1;
	v->a[10369] = sym_pipeline;
	v->a[10370] = state(1158);
	v->a[10371] = 1;
	v->a[10372] = aux_sym_redirected_statement_repeat2;
	v->a[10373] = state(1906);
	v->a[10374] = 1;
	v->a[10375] = sym__statement_not_pipeline;
	v->a[10376] = state(2094);
	v->a[10377] = 1;
	v->a[10378] = sym__statements;
	v->a[10379] = actions(11);
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = 2;
	v->a[10381] = anon_sym_while;
	v->a[10382] = anon_sym_until;
	v->a[10383] = actions(217);
	v->a[10384] = 2;
	v->a[10385] = sym_raw_string;
	v->a[10386] = sym_number;
	v->a[10387] = state(347);
	v->a[10388] = 5;
	v->a[10389] = sym_arithmetic_expansion;
	v->a[10390] = sym_string;
	v->a[10391] = sym_simple_expansion;
	v->a[10392] = sym_expansion;
	v->a[10393] = sym_command_substitution;
	v->a[10394] = actions(215);
	v->a[10395] = 7;
	v->a[10396] = anon_sym_LT;
	v->a[10397] = anon_sym_GT;
	v->a[10398] = anon_sym_GT_GT;
	v->a[10399] = anon_sym_LT_AMP;
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
