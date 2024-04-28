/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2203.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11015(t_small_parse_table_array *v)
{
	v->a[220300] = sym__comment_word;
	v->a[220301] = actions(8876);
	v->a[220302] = 2;
	v->a[220303] = anon_sym_LPAREN_LPAREN;
	v->a[220304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220305] = actions(8892);
	v->a[220306] = 2;
	v->a[220307] = anon_sym_LT_LPAREN;
	v->a[220308] = anon_sym_GT_LPAREN;
	v->a[220309] = actions(10524);
	v->a[220310] = 2;
	v->a[220311] = sym_test_operator;
	v->a[220312] = sym__special_character;
	v->a[220313] = actions(10526);
	v->a[220314] = 3;
	v->a[220315] = sym__bare_dollar;
	v->a[220316] = sym_raw_string;
	v->a[220317] = sym_ansi_c_string;
	v->a[220318] = state(1120);
	v->a[220319] = 9;
	small_parse_table_11016(v);
}

void	small_parse_table_11016(t_small_parse_table_array *v)
{
	v->a[220320] = sym_arithmetic_expansion;
	v->a[220321] = sym_brace_expression;
	v->a[220322] = sym_string;
	v->a[220323] = sym_translated_string;
	v->a[220324] = sym_number;
	v->a[220325] = sym_simple_expansion;
	v->a[220326] = sym_expansion;
	v->a[220327] = sym_command_substitution;
	v->a[220328] = sym_process_substitution;
	v->a[220329] = 18;
	v->a[220330] = actions(3);
	v->a[220331] = 1;
	v->a[220332] = sym_comment;
	v->a[220333] = actions(3339);
	v->a[220334] = 1;
	v->a[220335] = anon_sym_DOLLAR;
	v->a[220336] = actions(3343);
	v->a[220337] = 1;
	v->a[220338] = aux_sym_number_token1;
	v->a[220339] = actions(3345);
	small_parse_table_11017(v);
}

void	small_parse_table_11017(t_small_parse_table_array *v)
{
	v->a[220340] = 1;
	v->a[220341] = aux_sym_number_token2;
	v->a[220342] = actions(3349);
	v->a[220343] = 1;
	v->a[220344] = anon_sym_DOLLAR_LPAREN;
	v->a[220345] = actions(3359);
	v->a[220346] = 1;
	v->a[220347] = sym__brace_start;
	v->a[220348] = actions(9046);
	v->a[220349] = 1;
	v->a[220350] = anon_sym_DOLLAR_LBRACK;
	v->a[220351] = actions(9050);
	v->a[220352] = 1;
	v->a[220353] = anon_sym_DQUOTE;
	v->a[220354] = actions(9054);
	v->a[220355] = 1;
	v->a[220356] = anon_sym_DOLLAR_LBRACE;
	v->a[220357] = actions(9056);
	v->a[220358] = 1;
	v->a[220359] = anon_sym_BQUOTE;
	small_parse_table_11018(v);
}

void	small_parse_table_11018(t_small_parse_table_array *v)
{
	v->a[220360] = actions(9058);
	v->a[220361] = 1;
	v->a[220362] = anon_sym_DOLLAR_BQUOTE;
	v->a[220363] = actions(10530);
	v->a[220364] = 1;
	v->a[220365] = sym_word;
	v->a[220366] = actions(10536);
	v->a[220367] = 1;
	v->a[220368] = sym__comment_word;
	v->a[220369] = actions(9044);
	v->a[220370] = 2;
	v->a[220371] = anon_sym_LPAREN_LPAREN;
	v->a[220372] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220373] = actions(9060);
	v->a[220374] = 2;
	v->a[220375] = anon_sym_LT_LPAREN;
	v->a[220376] = anon_sym_GT_LPAREN;
	v->a[220377] = actions(10532);
	v->a[220378] = 2;
	v->a[220379] = sym_test_operator;
	small_parse_table_11019(v);
}

void	small_parse_table_11019(t_small_parse_table_array *v)
{
	v->a[220380] = sym__special_character;
	v->a[220381] = actions(10534);
	v->a[220382] = 3;
	v->a[220383] = sym__bare_dollar;
	v->a[220384] = sym_raw_string;
	v->a[220385] = sym_ansi_c_string;
	v->a[220386] = state(1827);
	v->a[220387] = 9;
	v->a[220388] = sym_arithmetic_expansion;
	v->a[220389] = sym_brace_expression;
	v->a[220390] = sym_string;
	v->a[220391] = sym_translated_string;
	v->a[220392] = sym_number;
	v->a[220393] = sym_simple_expansion;
	v->a[220394] = sym_expansion;
	v->a[220395] = sym_command_substitution;
	v->a[220396] = sym_process_substitution;
	v->a[220397] = 18;
	v->a[220398] = actions(3);
	v->a[220399] = 1;
	small_parse_table_11020(v);
}

/* EOF small_parse_table_2203.c */
