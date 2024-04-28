/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1953.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9765(t_small_parse_table_array *v)
{
	v->a[195300] = sym_arithmetic_expansion;
	v->a[195301] = sym_brace_expression;
	v->a[195302] = sym_string;
	v->a[195303] = sym_translated_string;
	v->a[195304] = sym_number;
	v->a[195305] = sym_simple_expansion;
	v->a[195306] = sym_expansion;
	v->a[195307] = sym_command_substitution;
	v->a[195308] = sym_process_substitution;
	v->a[195309] = 21;
	v->a[195310] = actions(71);
	v->a[195311] = 1;
	v->a[195312] = sym_comment;
	v->a[195313] = actions(8565);
	v->a[195314] = 1;
	v->a[195315] = sym_word;
	v->a[195316] = actions(8571);
	v->a[195317] = 1;
	v->a[195318] = anon_sym_DOLLAR_LBRACK;
	v->a[195319] = actions(8573);
	small_parse_table_9766(v);
}

void	small_parse_table_9766(t_small_parse_table_array *v)
{
	v->a[195320] = 1;
	v->a[195321] = anon_sym_DOLLAR;
	v->a[195322] = actions(8575);
	v->a[195323] = 1;
	v->a[195324] = sym__special_character;
	v->a[195325] = actions(8577);
	v->a[195326] = 1;
	v->a[195327] = anon_sym_DQUOTE;
	v->a[195328] = actions(8581);
	v->a[195329] = 1;
	v->a[195330] = aux_sym_number_token1;
	v->a[195331] = actions(8583);
	v->a[195332] = 1;
	v->a[195333] = aux_sym_number_token2;
	v->a[195334] = actions(8585);
	v->a[195335] = 1;
	v->a[195336] = anon_sym_DOLLAR_LBRACE;
	v->a[195337] = actions(8587);
	v->a[195338] = 1;
	v->a[195339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9767(v);
}

void	small_parse_table_9767(t_small_parse_table_array *v)
{
	v->a[195340] = actions(8589);
	v->a[195341] = 1;
	v->a[195342] = anon_sym_BQUOTE;
	v->a[195343] = actions(8591);
	v->a[195344] = 1;
	v->a[195345] = anon_sym_DOLLAR_BQUOTE;
	v->a[195346] = actions(8595);
	v->a[195347] = 1;
	v->a[195348] = sym_test_operator;
	v->a[195349] = actions(8597);
	v->a[195350] = 1;
	v->a[195351] = sym__brace_start;
	v->a[195352] = actions(8738);
	v->a[195353] = 1;
	v->a[195354] = anon_sym_RPAREN;
	v->a[195355] = state(5365);
	v->a[195356] = 1;
	v->a[195357] = aux_sym__literal_repeat1;
	v->a[195358] = actions(8567);
	v->a[195359] = 2;
	small_parse_table_9768(v);
}

void	small_parse_table_9768(t_small_parse_table_array *v)
{
	v->a[195360] = anon_sym_LPAREN_LPAREN;
	v->a[195361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[195362] = actions(8579);
	v->a[195363] = 2;
	v->a[195364] = sym_raw_string;
	v->a[195365] = sym_ansi_c_string;
	v->a[195366] = actions(8593);
	v->a[195367] = 2;
	v->a[195368] = anon_sym_LT_LPAREN;
	v->a[195369] = anon_sym_GT_LPAREN;
	v->a[195370] = state(3587);
	v->a[195371] = 2;
	v->a[195372] = sym_concatenation;
	v->a[195373] = aux_sym_for_statement_repeat1;
	v->a[195374] = state(5045);
	v->a[195375] = 9;
	v->a[195376] = sym_arithmetic_expansion;
	v->a[195377] = sym_brace_expression;
	v->a[195378] = sym_string;
	v->a[195379] = sym_translated_string;
	small_parse_table_9769(v);
}

void	small_parse_table_9769(t_small_parse_table_array *v)
{
	v->a[195380] = sym_number;
	v->a[195381] = sym_simple_expansion;
	v->a[195382] = sym_expansion;
	v->a[195383] = sym_command_substitution;
	v->a[195384] = sym_process_substitution;
	v->a[195385] = 21;
	v->a[195386] = actions(71);
	v->a[195387] = 1;
	v->a[195388] = sym_comment;
	v->a[195389] = actions(8565);
	v->a[195390] = 1;
	v->a[195391] = sym_word;
	v->a[195392] = actions(8571);
	v->a[195393] = 1;
	v->a[195394] = anon_sym_DOLLAR_LBRACK;
	v->a[195395] = actions(8573);
	v->a[195396] = 1;
	v->a[195397] = anon_sym_DOLLAR;
	v->a[195398] = actions(8575);
	v->a[195399] = 1;
	small_parse_table_9770(v);
}

/* EOF small_parse_table_1953.c */
