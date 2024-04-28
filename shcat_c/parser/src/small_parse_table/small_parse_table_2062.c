/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2062.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10310(t_small_parse_table_array *v)
{
	v->a[206200] = anon_sym_BQUOTE;
	v->a[206201] = actions(8078);
	v->a[206202] = 1;
	v->a[206203] = anon_sym_DOLLAR_BQUOTE;
	v->a[206204] = actions(9580);
	v->a[206205] = 1;
	v->a[206206] = sym_word;
	v->a[206207] = actions(9582);
	v->a[206208] = 1;
	v->a[206209] = anon_sym_DOLLAR;
	v->a[206210] = actions(9588);
	v->a[206211] = 1;
	v->a[206212] = sym__comment_word;
	v->a[206213] = actions(8062);
	v->a[206214] = 2;
	v->a[206215] = anon_sym_LPAREN_LPAREN;
	v->a[206216] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[206217] = actions(8080);
	v->a[206218] = 2;
	v->a[206219] = anon_sym_LT_LPAREN;
	small_parse_table_10311(v);
}

void	small_parse_table_10311(t_small_parse_table_array *v)
{
	v->a[206220] = anon_sym_GT_LPAREN;
	v->a[206221] = actions(9584);
	v->a[206222] = 2;
	v->a[206223] = sym_test_operator;
	v->a[206224] = sym__special_character;
	v->a[206225] = actions(9586);
	v->a[206226] = 3;
	v->a[206227] = sym__bare_dollar;
	v->a[206228] = sym_raw_string;
	v->a[206229] = sym_ansi_c_string;
	v->a[206230] = state(1623);
	v->a[206231] = 9;
	v->a[206232] = sym_arithmetic_expansion;
	v->a[206233] = sym_brace_expression;
	v->a[206234] = sym_string;
	v->a[206235] = sym_translated_string;
	v->a[206236] = sym_number;
	v->a[206237] = sym_simple_expansion;
	v->a[206238] = sym_expansion;
	v->a[206239] = sym_command_substitution;
	small_parse_table_10312(v);
}

void	small_parse_table_10312(t_small_parse_table_array *v)
{
	v->a[206240] = sym_process_substitution;
	v->a[206241] = 18;
	v->a[206242] = actions(3);
	v->a[206243] = 1;
	v->a[206244] = sym_comment;
	v->a[206245] = actions(2269);
	v->a[206246] = 1;
	v->a[206247] = aux_sym_number_token1;
	v->a[206248] = actions(2271);
	v->a[206249] = 1;
	v->a[206250] = aux_sym_number_token2;
	v->a[206251] = actions(2275);
	v->a[206252] = 1;
	v->a[206253] = anon_sym_DOLLAR_LPAREN;
	v->a[206254] = actions(2289);
	v->a[206255] = 1;
	v->a[206256] = sym__brace_start;
	v->a[206257] = actions(8066);
	v->a[206258] = 1;
	v->a[206259] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10313(v);
}

void	small_parse_table_10313(t_small_parse_table_array *v)
{
	v->a[206260] = actions(8070);
	v->a[206261] = 1;
	v->a[206262] = anon_sym_DQUOTE;
	v->a[206263] = actions(8074);
	v->a[206264] = 1;
	v->a[206265] = anon_sym_DOLLAR_LBRACE;
	v->a[206266] = actions(8076);
	v->a[206267] = 1;
	v->a[206268] = anon_sym_BQUOTE;
	v->a[206269] = actions(8078);
	v->a[206270] = 1;
	v->a[206271] = anon_sym_DOLLAR_BQUOTE;
	v->a[206272] = actions(9580);
	v->a[206273] = 1;
	v->a[206274] = sym_word;
	v->a[206275] = actions(9588);
	v->a[206276] = 1;
	v->a[206277] = sym__comment_word;
	v->a[206278] = actions(9590);
	v->a[206279] = 1;
	small_parse_table_10314(v);
}

void	small_parse_table_10314(t_small_parse_table_array *v)
{
	v->a[206280] = anon_sym_DOLLAR;
	v->a[206281] = actions(8062);
	v->a[206282] = 2;
	v->a[206283] = anon_sym_LPAREN_LPAREN;
	v->a[206284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[206285] = actions(8080);
	v->a[206286] = 2;
	v->a[206287] = anon_sym_LT_LPAREN;
	v->a[206288] = anon_sym_GT_LPAREN;
	v->a[206289] = actions(9584);
	v->a[206290] = 2;
	v->a[206291] = sym_test_operator;
	v->a[206292] = sym__special_character;
	v->a[206293] = actions(9586);
	v->a[206294] = 3;
	v->a[206295] = sym__bare_dollar;
	v->a[206296] = sym_raw_string;
	v->a[206297] = sym_ansi_c_string;
	v->a[206298] = state(1623);
	v->a[206299] = 9;
	small_parse_table_10315(v);
}

/* EOF small_parse_table_2062.c */
