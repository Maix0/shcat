/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2353.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11765(t_small_parse_table_array *v)
{
	v->a[235300] = actions(9056);
	v->a[235301] = 1;
	v->a[235302] = anon_sym_BQUOTE;
	v->a[235303] = actions(9058);
	v->a[235304] = 1;
	v->a[235305] = anon_sym_DOLLAR_BQUOTE;
	v->a[235306] = actions(10530);
	v->a[235307] = 1;
	v->a[235308] = sym_word;
	v->a[235309] = actions(10536);
	v->a[235310] = 1;
	v->a[235311] = sym__comment_word;
	v->a[235312] = actions(11088);
	v->a[235313] = 1;
	v->a[235314] = anon_sym_DOLLAR;
	v->a[235315] = actions(9044);
	v->a[235316] = 2;
	v->a[235317] = anon_sym_LPAREN_LPAREN;
	v->a[235318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235319] = actions(9060);
	small_parse_table_11766(v);
}

void	small_parse_table_11766(t_small_parse_table_array *v)
{
	v->a[235320] = 2;
	v->a[235321] = anon_sym_LT_LPAREN;
	v->a[235322] = anon_sym_GT_LPAREN;
	v->a[235323] = actions(10532);
	v->a[235324] = 2;
	v->a[235325] = sym_test_operator;
	v->a[235326] = sym__special_character;
	v->a[235327] = actions(10534);
	v->a[235328] = 3;
	v->a[235329] = sym__bare_dollar;
	v->a[235330] = sym_raw_string;
	v->a[235331] = sym_ansi_c_string;
	v->a[235332] = state(1827);
	v->a[235333] = 9;
	v->a[235334] = sym_arithmetic_expansion;
	v->a[235335] = sym_brace_expression;
	v->a[235336] = sym_string;
	v->a[235337] = sym_translated_string;
	v->a[235338] = sym_number;
	v->a[235339] = sym_simple_expansion;
	small_parse_table_11767(v);
}

void	small_parse_table_11767(t_small_parse_table_array *v)
{
	v->a[235340] = sym_expansion;
	v->a[235341] = sym_command_substitution;
	v->a[235342] = sym_process_substitution;
	v->a[235343] = 18;
	v->a[235344] = actions(3);
	v->a[235345] = 1;
	v->a[235346] = sym_comment;
	v->a[235347] = actions(4767);
	v->a[235348] = 1;
	v->a[235349] = anon_sym_DOLLAR_LBRACK;
	v->a[235350] = actions(4773);
	v->a[235351] = 1;
	v->a[235352] = anon_sym_DQUOTE;
	v->a[235353] = actions(4777);
	v->a[235354] = 1;
	v->a[235355] = aux_sym_number_token1;
	v->a[235356] = actions(4779);
	v->a[235357] = 1;
	v->a[235358] = aux_sym_number_token2;
	v->a[235359] = actions(4781);
	small_parse_table_11768(v);
}

void	small_parse_table_11768(t_small_parse_table_array *v)
{
	v->a[235360] = 1;
	v->a[235361] = anon_sym_DOLLAR_LBRACE;
	v->a[235362] = actions(4783);
	v->a[235363] = 1;
	v->a[235364] = anon_sym_DOLLAR_LPAREN;
	v->a[235365] = actions(4785);
	v->a[235366] = 1;
	v->a[235367] = anon_sym_BQUOTE;
	v->a[235368] = actions(4787);
	v->a[235369] = 1;
	v->a[235370] = anon_sym_DOLLAR_BQUOTE;
	v->a[235371] = actions(4793);
	v->a[235372] = 1;
	v->a[235373] = sym__brace_start;
	v->a[235374] = actions(10264);
	v->a[235375] = 1;
	v->a[235376] = sym_word;
	v->a[235377] = actions(10270);
	v->a[235378] = 1;
	v->a[235379] = sym__comment_word;
	small_parse_table_11769(v);
}

void	small_parse_table_11769(t_small_parse_table_array *v)
{
	v->a[235380] = actions(11090);
	v->a[235381] = 1;
	v->a[235382] = anon_sym_DOLLAR;
	v->a[235383] = actions(4765);
	v->a[235384] = 2;
	v->a[235385] = anon_sym_LPAREN_LPAREN;
	v->a[235386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235387] = actions(4789);
	v->a[235388] = 2;
	v->a[235389] = anon_sym_LT_LPAREN;
	v->a[235390] = anon_sym_GT_LPAREN;
	v->a[235391] = actions(10266);
	v->a[235392] = 2;
	v->a[235393] = sym_test_operator;
	v->a[235394] = sym__special_character;
	v->a[235395] = actions(10268);
	v->a[235396] = 3;
	v->a[235397] = sym__bare_dollar;
	v->a[235398] = sym_raw_string;
	v->a[235399] = sym_ansi_c_string;
	small_parse_table_11770(v);
}

/* EOF small_parse_table_2353.c */
