/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2093.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10465(t_small_parse_table_array *v)
{
	v->a[209300] = aux_sym_number_token2;
	v->a[209301] = actions(7972);
	v->a[209302] = 1;
	v->a[209303] = anon_sym_DOLLAR_LBRACE;
	v->a[209304] = actions(7974);
	v->a[209305] = 1;
	v->a[209306] = anon_sym_DOLLAR_LPAREN;
	v->a[209307] = actions(7976);
	v->a[209308] = 1;
	v->a[209309] = anon_sym_BQUOTE;
	v->a[209310] = actions(7978);
	v->a[209311] = 1;
	v->a[209312] = anon_sym_DOLLAR_BQUOTE;
	v->a[209313] = actions(7988);
	v->a[209314] = 1;
	v->a[209315] = sym__brace_start;
	v->a[209316] = actions(9860);
	v->a[209317] = 1;
	v->a[209318] = sym_word;
	v->a[209319] = actions(9862);
	small_parse_table_10466(v);
}

void	small_parse_table_10466(t_small_parse_table_array *v)
{
	v->a[209320] = 1;
	v->a[209321] = anon_sym_DOLLAR;
	v->a[209322] = actions(9868);
	v->a[209323] = 1;
	v->a[209324] = sym__comment_word;
	v->a[209325] = actions(7954);
	v->a[209326] = 2;
	v->a[209327] = anon_sym_LPAREN_LPAREN;
	v->a[209328] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209329] = actions(7980);
	v->a[209330] = 2;
	v->a[209331] = anon_sym_LT_LPAREN;
	v->a[209332] = anon_sym_GT_LPAREN;
	v->a[209333] = actions(9864);
	v->a[209334] = 2;
	v->a[209335] = sym_test_operator;
	v->a[209336] = sym__special_character;
	v->a[209337] = actions(9866);
	v->a[209338] = 3;
	v->a[209339] = sym__bare_dollar;
	small_parse_table_10467(v);
}

void	small_parse_table_10467(t_small_parse_table_array *v)
{
	v->a[209340] = sym_raw_string;
	v->a[209341] = sym_ansi_c_string;
	v->a[209342] = state(4357);
	v->a[209343] = 9;
	v->a[209344] = sym_arithmetic_expansion;
	v->a[209345] = sym_brace_expression;
	v->a[209346] = sym_string;
	v->a[209347] = sym_translated_string;
	v->a[209348] = sym_number;
	v->a[209349] = sym_simple_expansion;
	v->a[209350] = sym_expansion;
	v->a[209351] = sym_command_substitution;
	v->a[209352] = sym_process_substitution;
	v->a[209353] = 18;
	v->a[209354] = actions(3);
	v->a[209355] = 1;
	v->a[209356] = sym_comment;
	v->a[209357] = actions(7958);
	v->a[209358] = 1;
	v->a[209359] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10468(v);
}

void	small_parse_table_10468(t_small_parse_table_array *v)
{
	v->a[209360] = actions(7964);
	v->a[209361] = 1;
	v->a[209362] = anon_sym_DQUOTE;
	v->a[209363] = actions(7968);
	v->a[209364] = 1;
	v->a[209365] = aux_sym_number_token1;
	v->a[209366] = actions(7970);
	v->a[209367] = 1;
	v->a[209368] = aux_sym_number_token2;
	v->a[209369] = actions(7972);
	v->a[209370] = 1;
	v->a[209371] = anon_sym_DOLLAR_LBRACE;
	v->a[209372] = actions(7974);
	v->a[209373] = 1;
	v->a[209374] = anon_sym_DOLLAR_LPAREN;
	v->a[209375] = actions(7976);
	v->a[209376] = 1;
	v->a[209377] = anon_sym_BQUOTE;
	v->a[209378] = actions(7978);
	v->a[209379] = 1;
	small_parse_table_10469(v);
}

void	small_parse_table_10469(t_small_parse_table_array *v)
{
	v->a[209380] = anon_sym_DOLLAR_BQUOTE;
	v->a[209381] = actions(7988);
	v->a[209382] = 1;
	v->a[209383] = sym__brace_start;
	v->a[209384] = actions(9860);
	v->a[209385] = 1;
	v->a[209386] = sym_word;
	v->a[209387] = actions(9868);
	v->a[209388] = 1;
	v->a[209389] = sym__comment_word;
	v->a[209390] = actions(9870);
	v->a[209391] = 1;
	v->a[209392] = anon_sym_DOLLAR;
	v->a[209393] = actions(7954);
	v->a[209394] = 2;
	v->a[209395] = anon_sym_LPAREN_LPAREN;
	v->a[209396] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209397] = actions(7980);
	v->a[209398] = 2;
	v->a[209399] = anon_sym_LT_LPAREN;
	small_parse_table_10470(v);
}

/* EOF small_parse_table_2093.c */
