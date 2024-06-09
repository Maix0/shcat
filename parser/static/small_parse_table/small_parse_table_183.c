/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_183.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_915(t_small_parse_table_array *v)
{
	v->a[18300] = 1;
	v->a[18301] = sym_concatenation;
	v->a[18302] = state(718);
	v->a[18303] = 1;
	v->a[18304] = sym_file_redirect;
	v->a[18305] = state(1196);
	v->a[18306] = 1;
	v->a[18307] = aux_sym_redirected_statement_repeat2;
	v->a[18308] = state(1400);
	v->a[18309] = 1;
	v->a[18310] = sym_pipeline;
	v->a[18311] = actions(11);
	v->a[18312] = 2;
	v->a[18313] = anon_sym_while;
	v->a[18314] = anon_sym_until;
	v->a[18315] = actions(254);
	v->a[18316] = 2;
	v->a[18317] = anon_sym_LT_AMP_DASH;
	v->a[18318] = anon_sym_GT_AMP_DASH;
	v->a[18319] = state(295);
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = 6;
	v->a[18321] = sym_arithmetic_expansion;
	v->a[18322] = sym_string;
	v->a[18323] = sym_number;
	v->a[18324] = sym_simple_expansion;
	v->a[18325] = sym_expansion;
	v->a[18326] = sym_command_substitution;
	v->a[18327] = actions(252);
	v->a[18328] = 8;
	v->a[18329] = anon_sym_LT;
	v->a[18330] = anon_sym_GT;
	v->a[18331] = anon_sym_GT_GT;
	v->a[18332] = anon_sym_AMP_GT;
	v->a[18333] = anon_sym_AMP_GT_GT;
	v->a[18334] = anon_sym_LT_AMP;
	v->a[18335] = anon_sym_GT_AMP;
	v->a[18336] = anon_sym_GT_PIPE;
	v->a[18337] = state(1007);
	v->a[18338] = 13;
	v->a[18339] = sym__statement_not_pipeline;
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = sym_redirected_statement;
	v->a[18341] = sym_for_statement;
	v->a[18342] = sym_while_statement;
	v->a[18343] = sym_if_statement;
	v->a[18344] = sym_case_statement;
	v->a[18345] = sym_function_definition;
	v->a[18346] = sym_compound_statement;
	v->a[18347] = sym_subshell;
	v->a[18348] = sym_list;
	v->a[18349] = sym_negated_command;
	v->a[18350] = sym_command;
	v->a[18351] = sym_variable_assignments;
	v->a[18352] = 32;
	v->a[18353] = actions(3);
	v->a[18354] = 1;
	v->a[18355] = sym_comment;
	v->a[18356] = actions(9);
	v->a[18357] = 1;
	v->a[18358] = anon_sym_for;
	v->a[18359] = actions(13);
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = 1;
	v->a[18361] = anon_sym_if;
	v->a[18362] = actions(15);
	v->a[18363] = 1;
	v->a[18364] = anon_sym_case;
	v->a[18365] = actions(17);
	v->a[18366] = 1;
	v->a[18367] = anon_sym_LPAREN;
	v->a[18368] = actions(19);
	v->a[18369] = 1;
	v->a[18370] = anon_sym_LBRACE;
	v->a[18371] = actions(63);
	v->a[18372] = 1;
	v->a[18373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18374] = actions(65);
	v->a[18375] = 1;
	v->a[18376] = anon_sym_DOLLAR;
	v->a[18377] = actions(67);
	v->a[18378] = 1;
	v->a[18379] = anon_sym_DQUOTE;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = actions(71);
	v->a[18381] = 1;
	v->a[18382] = aux_sym_number_token1;
	v->a[18383] = actions(73);
	v->a[18384] = 1;
	v->a[18385] = aux_sym_number_token2;
	v->a[18386] = actions(75);
	v->a[18387] = 1;
	v->a[18388] = anon_sym_DOLLAR_LBRACE;
	v->a[18389] = actions(77);
	v->a[18390] = 1;
	v->a[18391] = anon_sym_DOLLAR_LPAREN;
	v->a[18392] = actions(79);
	v->a[18393] = 1;
	v->a[18394] = anon_sym_BQUOTE;
	v->a[18395] = actions(248);
	v->a[18396] = 1;
	v->a[18397] = sym_word;
	v->a[18398] = actions(250);
	v->a[18399] = 1;
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
