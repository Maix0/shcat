/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2013.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10065(t_small_parse_table_array *v)
{
	v->a[201300] = 1;
	v->a[201301] = anon_sym_DQUOTE;
	v->a[201302] = actions(8188);
	v->a[201303] = 1;
	v->a[201304] = aux_sym_number_token1;
	v->a[201305] = actions(8190);
	v->a[201306] = 1;
	v->a[201307] = aux_sym_number_token2;
	v->a[201308] = actions(8192);
	v->a[201309] = 1;
	v->a[201310] = anon_sym_DOLLAR_LBRACE;
	v->a[201311] = actions(8194);
	v->a[201312] = 1;
	v->a[201313] = anon_sym_DOLLAR_LPAREN;
	v->a[201314] = actions(8196);
	v->a[201315] = 1;
	v->a[201316] = anon_sym_BQUOTE;
	v->a[201317] = actions(8198);
	v->a[201318] = 1;
	v->a[201319] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10066(v);
}

void	small_parse_table_10066(t_small_parse_table_array *v)
{
	v->a[201320] = actions(8208);
	v->a[201321] = 1;
	v->a[201322] = sym__brace_start;
	v->a[201323] = actions(8450);
	v->a[201324] = 1;
	v->a[201325] = sym__special_character;
	v->a[201326] = actions(9186);
	v->a[201327] = 1;
	v->a[201328] = sym_word;
	v->a[201329] = actions(9190);
	v->a[201330] = 1;
	v->a[201331] = sym_test_operator;
	v->a[201332] = state(1744);
	v->a[201333] = 1;
	v->a[201334] = aux_sym__literal_repeat1;
	v->a[201335] = actions(8174);
	v->a[201336] = 2;
	v->a[201337] = anon_sym_LPAREN_LPAREN;
	v->a[201338] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201339] = actions(8200);
	small_parse_table_10067(v);
}

void	small_parse_table_10067(t_small_parse_table_array *v)
{
	v->a[201340] = 2;
	v->a[201341] = anon_sym_LT_LPAREN;
	v->a[201342] = anon_sym_GT_LPAREN;
	v->a[201343] = actions(9188);
	v->a[201344] = 2;
	v->a[201345] = sym_raw_string;
	v->a[201346] = sym_ansi_c_string;
	v->a[201347] = state(686);
	v->a[201348] = 2;
	v->a[201349] = sym_concatenation;
	v->a[201350] = aux_sym_for_statement_repeat1;
	v->a[201351] = state(1688);
	v->a[201352] = 9;
	v->a[201353] = sym_arithmetic_expansion;
	v->a[201354] = sym_brace_expression;
	v->a[201355] = sym_string;
	v->a[201356] = sym_translated_string;
	v->a[201357] = sym_number;
	v->a[201358] = sym_simple_expansion;
	v->a[201359] = sym_expansion;
	small_parse_table_10068(v);
}

void	small_parse_table_10068(t_small_parse_table_array *v)
{
	v->a[201360] = sym_command_substitution;
	v->a[201361] = sym_process_substitution;
	v->a[201362] = 20;
	v->a[201363] = actions(71);
	v->a[201364] = 1;
	v->a[201365] = sym_comment;
	v->a[201366] = actions(8178);
	v->a[201367] = 1;
	v->a[201368] = anon_sym_DOLLAR_LBRACK;
	v->a[201369] = actions(8180);
	v->a[201370] = 1;
	v->a[201371] = anon_sym_DOLLAR;
	v->a[201372] = actions(8184);
	v->a[201373] = 1;
	v->a[201374] = anon_sym_DQUOTE;
	v->a[201375] = actions(8188);
	v->a[201376] = 1;
	v->a[201377] = aux_sym_number_token1;
	v->a[201378] = actions(8190);
	v->a[201379] = 1;
	small_parse_table_10069(v);
}

void	small_parse_table_10069(t_small_parse_table_array *v)
{
	v->a[201380] = aux_sym_number_token2;
	v->a[201381] = actions(8192);
	v->a[201382] = 1;
	v->a[201383] = anon_sym_DOLLAR_LBRACE;
	v->a[201384] = actions(8194);
	v->a[201385] = 1;
	v->a[201386] = anon_sym_DOLLAR_LPAREN;
	v->a[201387] = actions(8196);
	v->a[201388] = 1;
	v->a[201389] = anon_sym_BQUOTE;
	v->a[201390] = actions(8198);
	v->a[201391] = 1;
	v->a[201392] = anon_sym_DOLLAR_BQUOTE;
	v->a[201393] = actions(8208);
	v->a[201394] = 1;
	v->a[201395] = sym__brace_start;
	v->a[201396] = actions(8450);
	v->a[201397] = 1;
	v->a[201398] = sym__special_character;
	v->a[201399] = actions(9186);
	small_parse_table_10070(v);
}

/* EOF small_parse_table_2013.c */
