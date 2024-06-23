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
	v->a[10300] = state(647);
	v->a[10301] = 1;
	v->a[10302] = sym_concatenation;
	v->a[10303] = state(791);
	v->a[10304] = 1;
	v->a[10305] = sym_file_redirect;
	v->a[10306] = state(828);
	v->a[10307] = 1;
	v->a[10308] = aux_sym_command_repeat1;
	v->a[10309] = state(1314);
	v->a[10310] = 1;
	v->a[10311] = sym_pipeline;
	v->a[10312] = state(1331);
	v->a[10313] = 1;
	v->a[10314] = aux_sym_redirected_statement_repeat2;
	v->a[10315] = state(2252);
	v->a[10316] = 1;
	v->a[10317] = sym__statement_not_pipeline;
	v->a[10318] = state(2425);
	v->a[10319] = 1;
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = sym__statements;
	v->a[10321] = actions(11);
	v->a[10322] = 2;
	v->a[10323] = anon_sym_while;
	v->a[10324] = anon_sym_until;
	v->a[10325] = actions(226);
	v->a[10326] = 2;
	v->a[10327] = anon_sym_LT_AMP_DASH;
	v->a[10328] = anon_sym_GT_AMP_DASH;
	v->a[10329] = actions(228);
	v->a[10330] = 2;
	v->a[10331] = sym_raw_string;
	v->a[10332] = sym_number;
	v->a[10333] = state(294);
	v->a[10334] = 5;
	v->a[10335] = sym_arithmetic_expansion;
	v->a[10336] = sym_string;
	v->a[10337] = sym_simple_expansion;
	v->a[10338] = sym_expansion;
	v->a[10339] = sym_command_substitution;
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = actions(224);
	v->a[10341] = 8;
	v->a[10342] = anon_sym_LT;
	v->a[10343] = anon_sym_GT;
	v->a[10344] = anon_sym_GT_GT;
	v->a[10345] = anon_sym_AMP_GT;
	v->a[10346] = anon_sym_AMP_GT_GT;
	v->a[10347] = anon_sym_LT_AMP;
	v->a[10348] = anon_sym_GT_AMP;
	v->a[10349] = anon_sym_GT_PIPE;
	v->a[10350] = state(1188);
	v->a[10351] = 12;
	v->a[10352] = sym_redirected_statement;
	v->a[10353] = sym_for_statement;
	v->a[10354] = sym_while_statement;
	v->a[10355] = sym_if_statement;
	v->a[10356] = sym_case_statement;
	v->a[10357] = sym_function_definition;
	v->a[10358] = sym_compound_statement;
	v->a[10359] = sym_subshell;
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = sym_list;
	v->a[10361] = sym_negated_command;
	v->a[10362] = sym_command;
	v->a[10363] = sym__variable_assignments;
	v->a[10364] = 32;
	v->a[10365] = actions(3);
	v->a[10366] = 1;
	v->a[10367] = sym_comment;
	v->a[10368] = actions(9);
	v->a[10369] = 1;
	v->a[10370] = anon_sym_for;
	v->a[10371] = actions(13);
	v->a[10372] = 1;
	v->a[10373] = anon_sym_if;
	v->a[10374] = actions(15);
	v->a[10375] = 1;
	v->a[10376] = anon_sym_case;
	v->a[10377] = actions(17);
	v->a[10378] = 1;
	v->a[10379] = anon_sym_LPAREN;
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = actions(19);
	v->a[10381] = 1;
	v->a[10382] = anon_sym_LBRACE;
	v->a[10383] = actions(59);
	v->a[10384] = 1;
	v->a[10385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10386] = actions(61);
	v->a[10387] = 1;
	v->a[10388] = anon_sym_DOLLAR;
	v->a[10389] = actions(63);
	v->a[10390] = 1;
	v->a[10391] = anon_sym_DQUOTE;
	v->a[10392] = actions(67);
	v->a[10393] = 1;
	v->a[10394] = anon_sym_DOLLAR_LBRACE;
	v->a[10395] = actions(69);
	v->a[10396] = 1;
	v->a[10397] = anon_sym_DOLLAR_LPAREN;
	v->a[10398] = actions(71);
	v->a[10399] = 1;
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
