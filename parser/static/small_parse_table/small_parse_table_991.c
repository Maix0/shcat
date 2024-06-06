/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_991.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4955(t_small_parse_table_array *v)
{
	v->a[99100] = 1;
	v->a[99101] = sym__special_character;
	v->a[99102] = actions(5551);
	v->a[99103] = 1;
	v->a[99104] = anon_sym_DQUOTE;
	v->a[99105] = actions(5555);
	v->a[99106] = 1;
	v->a[99107] = aux_sym_number_token1;
	v->a[99108] = actions(5557);
	v->a[99109] = 1;
	v->a[99110] = aux_sym_number_token2;
	v->a[99111] = actions(5559);
	v->a[99112] = 1;
	v->a[99113] = anon_sym_DOLLAR_LBRACE;
	v->a[99114] = actions(5561);
	v->a[99115] = 1;
	v->a[99116] = anon_sym_DOLLAR_LPAREN;
	v->a[99117] = actions(5563);
	v->a[99118] = 1;
	v->a[99119] = anon_sym_BQUOTE;
	small_parse_table_4956(v);
}

void	small_parse_table_4956(t_small_parse_table_array *v)
{
	v->a[99120] = actions(5565);
	v->a[99121] = 1;
	v->a[99122] = anon_sym_DOLLAR_BQUOTE;
	v->a[99123] = actions(5567);
	v->a[99124] = 1;
	v->a[99125] = sym__comment_word;
	v->a[99126] = actions(5569);
	v->a[99127] = 1;
	v->a[99128] = sym__empty_value;
	v->a[99129] = actions(5571);
	v->a[99130] = 1;
	v->a[99131] = sym__brace_start;
	v->a[99132] = state(1109);
	v->a[99133] = 1;
	v->a[99134] = aux_sym__literal_repeat1;
	v->a[99135] = state(1223);
	v->a[99136] = 1;
	v->a[99137] = sym_concatenation;
	v->a[99138] = actions(5553);
	v->a[99139] = 2;
	small_parse_table_4957(v);
}

void	small_parse_table_4957(t_small_parse_table_array *v)
{
	v->a[99140] = sym_test_operator;
	v->a[99141] = sym_raw_string;
	v->a[99142] = state(664);
	v->a[99143] = 7;
	v->a[99144] = sym_arithmetic_expansion;
	v->a[99145] = sym_brace_expression;
	v->a[99146] = sym_string;
	v->a[99147] = sym_number;
	v->a[99148] = sym_simple_expansion;
	v->a[99149] = sym_expansion;
	v->a[99150] = sym_command_substitution;
	v->a[99151] = 19;
	v->a[99152] = actions(3);
	v->a[99153] = 1;
	v->a[99154] = sym_comment;
	v->a[99155] = actions(2458);
	v->a[99156] = 1;
	v->a[99157] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99158] = actions(2460);
	v->a[99159] = 1;
	small_parse_table_4958(v);
}

void	small_parse_table_4958(t_small_parse_table_array *v)
{
	v->a[99160] = anon_sym_DOLLAR;
	v->a[99161] = actions(2462);
	v->a[99162] = 1;
	v->a[99163] = sym__special_character;
	v->a[99164] = actions(2464);
	v->a[99165] = 1;
	v->a[99166] = anon_sym_DQUOTE;
	v->a[99167] = actions(2466);
	v->a[99168] = 1;
	v->a[99169] = aux_sym_number_token1;
	v->a[99170] = actions(2468);
	v->a[99171] = 1;
	v->a[99172] = aux_sym_number_token2;
	v->a[99173] = actions(2470);
	v->a[99174] = 1;
	v->a[99175] = anon_sym_DOLLAR_LBRACE;
	v->a[99176] = actions(2472);
	v->a[99177] = 1;
	v->a[99178] = anon_sym_DOLLAR_LPAREN;
	v->a[99179] = actions(2474);
	small_parse_table_4959(v);
}

void	small_parse_table_4959(t_small_parse_table_array *v)
{
	v->a[99180] = 1;
	v->a[99181] = anon_sym_BQUOTE;
	v->a[99182] = actions(2476);
	v->a[99183] = 1;
	v->a[99184] = anon_sym_DOLLAR_BQUOTE;
	v->a[99185] = actions(2480);
	v->a[99186] = 1;
	v->a[99187] = sym_test_operator;
	v->a[99188] = actions(2482);
	v->a[99189] = 1;
	v->a[99190] = sym__brace_start;
	v->a[99191] = actions(5573);
	v->a[99192] = 1;
	v->a[99193] = aux_sym_heredoc_redirect_token1;
	v->a[99194] = state(2122);
	v->a[99195] = 1;
	v->a[99196] = aux_sym__heredoc_command;
	v->a[99197] = state(2852);
	v->a[99198] = 1;
	v->a[99199] = aux_sym__literal_repeat1;
	small_parse_table_4960(v);
}

/* EOF small_parse_table_991.c */
