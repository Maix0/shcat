/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2233.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11165(t_small_parse_table_array *v)
{
	v->a[223300] = 1;
	v->a[223301] = anon_sym_BQUOTE;
	v->a[223302] = actions(1063);
	v->a[223303] = 1;
	v->a[223304] = anon_sym_DOLLAR_BQUOTE;
	v->a[223305] = actions(1071);
	v->a[223306] = 1;
	v->a[223307] = sym__brace_start;
	v->a[223308] = actions(9706);
	v->a[223309] = 1;
	v->a[223310] = sym_word;
	v->a[223311] = actions(9712);
	v->a[223312] = 1;
	v->a[223313] = sym__comment_word;
	v->a[223314] = actions(10652);
	v->a[223315] = 1;
	v->a[223316] = anon_sym_DOLLAR;
	v->a[223317] = actions(1041);
	v->a[223318] = 2;
	v->a[223319] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11166(v);
}

void	small_parse_table_11166(t_small_parse_table_array *v)
{
	v->a[223320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223321] = actions(1065);
	v->a[223322] = 2;
	v->a[223323] = anon_sym_LT_LPAREN;
	v->a[223324] = anon_sym_GT_LPAREN;
	v->a[223325] = actions(9708);
	v->a[223326] = 2;
	v->a[223327] = sym_test_operator;
	v->a[223328] = sym__special_character;
	v->a[223329] = actions(9710);
	v->a[223330] = 3;
	v->a[223331] = sym__bare_dollar;
	v->a[223332] = sym_raw_string;
	v->a[223333] = sym_ansi_c_string;
	v->a[223334] = state(2075);
	v->a[223335] = 9;
	v->a[223336] = sym_arithmetic_expansion;
	v->a[223337] = sym_brace_expression;
	v->a[223338] = sym_string;
	v->a[223339] = sym_translated_string;
	small_parse_table_11167(v);
}

void	small_parse_table_11167(t_small_parse_table_array *v)
{
	v->a[223340] = sym_number;
	v->a[223341] = sym_simple_expansion;
	v->a[223342] = sym_expansion;
	v->a[223343] = sym_command_substitution;
	v->a[223344] = sym_process_substitution;
	v->a[223345] = 18;
	v->a[223346] = actions(3);
	v->a[223347] = 1;
	v->a[223348] = sym_comment;
	v->a[223349] = actions(191);
	v->a[223350] = 1;
	v->a[223351] = anon_sym_DOLLAR_LBRACK;
	v->a[223352] = actions(197);
	v->a[223353] = 1;
	v->a[223354] = anon_sym_DQUOTE;
	v->a[223355] = actions(201);
	v->a[223356] = 1;
	v->a[223357] = aux_sym_number_token1;
	v->a[223358] = actions(203);
	v->a[223359] = 1;
	small_parse_table_11168(v);
}

void	small_parse_table_11168(t_small_parse_table_array *v)
{
	v->a[223360] = aux_sym_number_token2;
	v->a[223361] = actions(205);
	v->a[223362] = 1;
	v->a[223363] = anon_sym_DOLLAR_LBRACE;
	v->a[223364] = actions(207);
	v->a[223365] = 1;
	v->a[223366] = anon_sym_DOLLAR_LPAREN;
	v->a[223367] = actions(209);
	v->a[223368] = 1;
	v->a[223369] = anon_sym_BQUOTE;
	v->a[223370] = actions(211);
	v->a[223371] = 1;
	v->a[223372] = anon_sym_DOLLAR_BQUOTE;
	v->a[223373] = actions(221);
	v->a[223374] = 1;
	v->a[223375] = sym__brace_start;
	v->a[223376] = actions(10406);
	v->a[223377] = 1;
	v->a[223378] = sym_word;
	v->a[223379] = actions(10412);
	small_parse_table_11169(v);
}

void	small_parse_table_11169(t_small_parse_table_array *v)
{
	v->a[223380] = 1;
	v->a[223381] = sym__comment_word;
	v->a[223382] = actions(10654);
	v->a[223383] = 1;
	v->a[223384] = anon_sym_DOLLAR;
	v->a[223385] = actions(189);
	v->a[223386] = 2;
	v->a[223387] = anon_sym_LPAREN_LPAREN;
	v->a[223388] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223389] = actions(213);
	v->a[223390] = 2;
	v->a[223391] = anon_sym_LT_LPAREN;
	v->a[223392] = anon_sym_GT_LPAREN;
	v->a[223393] = actions(10408);
	v->a[223394] = 2;
	v->a[223395] = sym_test_operator;
	v->a[223396] = sym__special_character;
	v->a[223397] = actions(10410);
	v->a[223398] = 3;
	v->a[223399] = sym__bare_dollar;
	small_parse_table_11170(v);
}

/* EOF small_parse_table_2233.c */
