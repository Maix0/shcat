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
	v->a[18300] = state(2111);
	v->a[18301] = 1;
	v->a[18302] = sym__statement_not_pipeline;
	v->a[18303] = actions(160);
	v->a[18304] = 2;
	v->a[18305] = anon_sym_while;
	v->a[18306] = anon_sym_until;
	v->a[18307] = actions(174);
	v->a[18308] = 2;
	v->a[18309] = anon_sym_LT_AMP_DASH;
	v->a[18310] = anon_sym_GT_AMP_DASH;
	v->a[18311] = actions(182);
	v->a[18312] = 2;
	v->a[18313] = sym_raw_string;
	v->a[18314] = sym_number;
	v->a[18315] = state(385);
	v->a[18316] = 5;
	v->a[18317] = sym_arithmetic_expansion;
	v->a[18318] = sym_string;
	v->a[18319] = sym_simple_expansion;
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = sym_expansion;
	v->a[18321] = sym_command_substitution;
	v->a[18322] = actions(172);
	v->a[18323] = 6;
	v->a[18324] = anon_sym_LT;
	v->a[18325] = anon_sym_GT;
	v->a[18326] = anon_sym_GT_GT;
	v->a[18327] = anon_sym_LT_AMP;
	v->a[18328] = anon_sym_GT_AMP;
	v->a[18329] = anon_sym_GT_PIPE;
	v->a[18330] = state(1162);
	v->a[18331] = 12;
	v->a[18332] = sym_redirected_statement;
	v->a[18333] = sym_for_statement;
	v->a[18334] = sym_while_statement;
	v->a[18335] = sym_if_statement;
	v->a[18336] = sym_case_statement;
	v->a[18337] = sym_function_definition;
	v->a[18338] = sym_compound_statement;
	v->a[18339] = sym_subshell;
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = sym_list;
	v->a[18341] = sym_negated_command;
	v->a[18342] = sym_command;
	v->a[18343] = sym__variable_assignments;
	v->a[18344] = 30;
	v->a[18345] = actions(3);
	v->a[18346] = 1;
	v->a[18347] = sym_comment;
	v->a[18348] = actions(9);
	v->a[18349] = 1;
	v->a[18350] = anon_sym_for;
	v->a[18351] = actions(13);
	v->a[18352] = 1;
	v->a[18353] = anon_sym_if;
	v->a[18354] = actions(15);
	v->a[18355] = 1;
	v->a[18356] = anon_sym_case;
	v->a[18357] = actions(17);
	v->a[18358] = 1;
	v->a[18359] = anon_sym_LPAREN;
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = actions(19);
	v->a[18361] = 1;
	v->a[18362] = anon_sym_LBRACE;
	v->a[18363] = actions(59);
	v->a[18364] = 1;
	v->a[18365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18366] = actions(61);
	v->a[18367] = 1;
	v->a[18368] = anon_sym_DOLLAR;
	v->a[18369] = actions(63);
	v->a[18370] = 1;
	v->a[18371] = anon_sym_DQUOTE;
	v->a[18372] = actions(67);
	v->a[18373] = 1;
	v->a[18374] = anon_sym_DOLLAR_LBRACE;
	v->a[18375] = actions(69);
	v->a[18376] = 1;
	v->a[18377] = anon_sym_DOLLAR_LPAREN;
	v->a[18378] = actions(71);
	v->a[18379] = 1;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = anon_sym_BQUOTE;
	v->a[18381] = actions(73);
	v->a[18382] = 1;
	v->a[18383] = sym_file_descriptor;
	v->a[18384] = actions(75);
	v->a[18385] = 1;
	v->a[18386] = sym_variable_name;
	v->a[18387] = actions(240);
	v->a[18388] = 1;
	v->a[18389] = sym_word;
	v->a[18390] = actions(242);
	v->a[18391] = 1;
	v->a[18392] = anon_sym_BANG;
	v->a[18393] = state(188);
	v->a[18394] = 1;
	v->a[18395] = sym_command_name;
	v->a[18396] = state(324);
	v->a[18397] = 1;
	v->a[18398] = sym_variable_assignment;
	v->a[18399] = state(650);
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
