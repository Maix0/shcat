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
	v->a[10300] = sym_pipeline;
	v->a[10301] = state(1196);
	v->a[10302] = 1;
	v->a[10303] = aux_sym_redirected_statement_repeat2;
	v->a[10304] = state(2037);
	v->a[10305] = 1;
	v->a[10306] = sym__statement_not_pipeline;
	v->a[10307] = state(2206);
	v->a[10308] = 1;
	v->a[10309] = sym__statements;
	v->a[10310] = actions(11);
	v->a[10311] = 2;
	v->a[10312] = anon_sym_while;
	v->a[10313] = anon_sym_until;
	v->a[10314] = actions(254);
	v->a[10315] = 2;
	v->a[10316] = anon_sym_LT_AMP_DASH;
	v->a[10317] = anon_sym_GT_AMP_DASH;
	v->a[10318] = state(295);
	v->a[10319] = 6;
	small_parse_table_516(v);
}

void	small_parse_table_516(t_small_parse_table_array *v)
{
	v->a[10320] = sym_arithmetic_expansion;
	v->a[10321] = sym_string;
	v->a[10322] = sym_number;
	v->a[10323] = sym_simple_expansion;
	v->a[10324] = sym_expansion;
	v->a[10325] = sym_command_substitution;
	v->a[10326] = actions(252);
	v->a[10327] = 8;
	v->a[10328] = anon_sym_LT;
	v->a[10329] = anon_sym_GT;
	v->a[10330] = anon_sym_GT_GT;
	v->a[10331] = anon_sym_AMP_GT;
	v->a[10332] = anon_sym_AMP_GT_GT;
	v->a[10333] = anon_sym_LT_AMP;
	v->a[10334] = anon_sym_GT_AMP;
	v->a[10335] = anon_sym_GT_PIPE;
	v->a[10336] = state(1031);
	v->a[10337] = 12;
	v->a[10338] = sym_redirected_statement;
	v->a[10339] = sym_for_statement;
	small_parse_table_517(v);
}

void	small_parse_table_517(t_small_parse_table_array *v)
{
	v->a[10340] = sym_while_statement;
	v->a[10341] = sym_if_statement;
	v->a[10342] = sym_case_statement;
	v->a[10343] = sym_function_definition;
	v->a[10344] = sym_compound_statement;
	v->a[10345] = sym_subshell;
	v->a[10346] = sym_list;
	v->a[10347] = sym_negated_command;
	v->a[10348] = sym_command;
	v->a[10349] = sym_variable_assignments;
	v->a[10350] = 34;
	v->a[10351] = actions(3);
	v->a[10352] = 1;
	v->a[10353] = sym_comment;
	v->a[10354] = actions(9);
	v->a[10355] = 1;
	v->a[10356] = anon_sym_for;
	v->a[10357] = actions(13);
	v->a[10358] = 1;
	v->a[10359] = anon_sym_if;
	small_parse_table_518(v);
}

void	small_parse_table_518(t_small_parse_table_array *v)
{
	v->a[10360] = actions(15);
	v->a[10361] = 1;
	v->a[10362] = anon_sym_case;
	v->a[10363] = actions(17);
	v->a[10364] = 1;
	v->a[10365] = anon_sym_LPAREN;
	v->a[10366] = actions(19);
	v->a[10367] = 1;
	v->a[10368] = anon_sym_LBRACE;
	v->a[10369] = actions(63);
	v->a[10370] = 1;
	v->a[10371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10372] = actions(65);
	v->a[10373] = 1;
	v->a[10374] = anon_sym_DOLLAR;
	v->a[10375] = actions(67);
	v->a[10376] = 1;
	v->a[10377] = anon_sym_DQUOTE;
	v->a[10378] = actions(71);
	v->a[10379] = 1;
	small_parse_table_519(v);
}

void	small_parse_table_519(t_small_parse_table_array *v)
{
	v->a[10380] = aux_sym_number_token1;
	v->a[10381] = actions(73);
	v->a[10382] = 1;
	v->a[10383] = aux_sym_number_token2;
	v->a[10384] = actions(75);
	v->a[10385] = 1;
	v->a[10386] = anon_sym_DOLLAR_LBRACE;
	v->a[10387] = actions(77);
	v->a[10388] = 1;
	v->a[10389] = anon_sym_DOLLAR_LPAREN;
	v->a[10390] = actions(79);
	v->a[10391] = 1;
	v->a[10392] = anon_sym_BQUOTE;
	v->a[10393] = actions(248);
	v->a[10394] = 1;
	v->a[10395] = sym_word;
	v->a[10396] = actions(250);
	v->a[10397] = 1;
	v->a[10398] = anon_sym_BANG;
	v->a[10399] = actions(256);
	small_parse_table_520(v);
}

/* EOF small_parse_table_103.c */
