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
	v->a[18300] = sym_command;
	v->a[18301] = sym__variable_assignments;
	v->a[18302] = 29;
	v->a[18303] = actions(3);
	v->a[18304] = 1;
	v->a[18305] = sym_comment;
	v->a[18306] = actions(9);
	v->a[18307] = 1;
	v->a[18308] = anon_sym_for;
	v->a[18309] = actions(13);
	v->a[18310] = 1;
	v->a[18311] = anon_sym_if;
	v->a[18312] = actions(15);
	v->a[18313] = 1;
	v->a[18314] = anon_sym_case;
	v->a[18315] = actions(17);
	v->a[18316] = 1;
	v->a[18317] = anon_sym_LPAREN;
	v->a[18318] = actions(19);
	v->a[18319] = 1;
	small_parse_table_916(v);
}

void	small_parse_table_916(t_small_parse_table_array *v)
{
	v->a[18320] = anon_sym_LBRACE;
	v->a[18321] = actions(59);
	v->a[18322] = 1;
	v->a[18323] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18324] = actions(61);
	v->a[18325] = 1;
	v->a[18326] = anon_sym_DOLLAR;
	v->a[18327] = actions(63);
	v->a[18328] = 1;
	v->a[18329] = anon_sym_DQUOTE;
	v->a[18330] = actions(67);
	v->a[18331] = 1;
	v->a[18332] = anon_sym_DOLLAR_LBRACE;
	v->a[18333] = actions(69);
	v->a[18334] = 1;
	v->a[18335] = anon_sym_DOLLAR_LPAREN;
	v->a[18336] = actions(71);
	v->a[18337] = 1;
	v->a[18338] = anon_sym_BQUOTE;
	v->a[18339] = actions(220);
	small_parse_table_917(v);
}

void	small_parse_table_917(t_small_parse_table_array *v)
{
	v->a[18340] = 1;
	v->a[18341] = sym_word;
	v->a[18342] = actions(222);
	v->a[18343] = 1;
	v->a[18344] = anon_sym_BANG;
	v->a[18345] = actions(230);
	v->a[18346] = 1;
	v->a[18347] = sym_file_descriptor;
	v->a[18348] = actions(232);
	v->a[18349] = 1;
	v->a[18350] = sym_variable_name;
	v->a[18351] = state(185);
	v->a[18352] = 1;
	v->a[18353] = sym_command_name;
	v->a[18354] = state(254);
	v->a[18355] = 1;
	v->a[18356] = sym_variable_assignment;
	v->a[18357] = state(624);
	v->a[18358] = 1;
	v->a[18359] = sym_concatenation;
	small_parse_table_918(v);
}

void	small_parse_table_918(t_small_parse_table_array *v)
{
	v->a[18360] = state(726);
	v->a[18361] = 1;
	v->a[18362] = sym_file_redirect;
	v->a[18363] = state(765);
	v->a[18364] = 1;
	v->a[18365] = aux_sym_command_repeat1;
	v->a[18366] = state(1188);
	v->a[18367] = 1;
	v->a[18368] = aux_sym_redirected_statement_repeat2;
	v->a[18369] = state(1442);
	v->a[18370] = 1;
	v->a[18371] = sym_pipeline;
	v->a[18372] = actions(11);
	v->a[18373] = 2;
	v->a[18374] = anon_sym_while;
	v->a[18375] = anon_sym_until;
	v->a[18376] = actions(226);
	v->a[18377] = 2;
	v->a[18378] = anon_sym_LT_AMP_DASH;
	v->a[18379] = anon_sym_GT_AMP_DASH;
	small_parse_table_919(v);
}

void	small_parse_table_919(t_small_parse_table_array *v)
{
	v->a[18380] = actions(228);
	v->a[18381] = 2;
	v->a[18382] = sym_raw_string;
	v->a[18383] = sym_number;
	v->a[18384] = state(299);
	v->a[18385] = 5;
	v->a[18386] = sym_arithmetic_expansion;
	v->a[18387] = sym_string;
	v->a[18388] = sym_simple_expansion;
	v->a[18389] = sym_expansion;
	v->a[18390] = sym_command_substitution;
	v->a[18391] = actions(224);
	v->a[18392] = 8;
	v->a[18393] = anon_sym_LT;
	v->a[18394] = anon_sym_GT;
	v->a[18395] = anon_sym_GT_GT;
	v->a[18396] = anon_sym_AMP_GT;
	v->a[18397] = anon_sym_AMP_GT_GT;
	v->a[18398] = anon_sym_LT_AMP;
	v->a[18399] = anon_sym_GT_AMP;
	small_parse_table_920(v);
}

/* EOF small_parse_table_183.c */
