/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1142.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5710(t_small_parse_table_array *v)
{
	v->a[114200] = 1;
	v->a[114201] = aux_sym_number_token2;
	v->a[114202] = actions(5421);
	v->a[114203] = 1;
	v->a[114204] = anon_sym_DOLLAR_LBRACE;
	v->a[114205] = actions(5423);
	v->a[114206] = 1;
	v->a[114207] = anon_sym_DOLLAR_LPAREN;
	v->a[114208] = actions(5425);
	v->a[114209] = 1;
	v->a[114210] = anon_sym_BQUOTE;
	v->a[114211] = actions(5427);
	v->a[114212] = 1;
	v->a[114213] = anon_sym_DOLLAR_BQUOTE;
	v->a[114214] = actions(5433);
	v->a[114215] = 1;
	v->a[114216] = sym__brace_start;
	v->a[114217] = actions(6625);
	v->a[114218] = 1;
	v->a[114219] = sym_word;
	small_parse_table_5711(v);
}

void	small_parse_table_5711(t_small_parse_table_array *v)
{
	v->a[114220] = actions(6627);
	v->a[114221] = 1;
	v->a[114222] = sym__special_character;
	v->a[114223] = actions(6631);
	v->a[114224] = 1;
	v->a[114225] = sym__comment_word;
	v->a[114226] = actions(6629);
	v->a[114227] = 3;
	v->a[114228] = sym_test_operator;
	v->a[114229] = sym__bare_dollar;
	v->a[114230] = sym_raw_string;
	v->a[114231] = state(1903);
	v->a[114232] = 7;
	v->a[114233] = sym_arithmetic_expansion;
	v->a[114234] = sym_brace_expression;
	v->a[114235] = sym_string;
	v->a[114236] = sym_number;
	v->a[114237] = sym_simple_expansion;
	v->a[114238] = sym_expansion;
	v->a[114239] = sym_command_substitution;
	small_parse_table_5712(v);
}

void	small_parse_table_5712(t_small_parse_table_array *v)
{
	v->a[114240] = 16;
	v->a[114241] = actions(3);
	v->a[114242] = 1;
	v->a[114243] = sym_comment;
	v->a[114244] = actions(1867);
	v->a[114245] = 1;
	v->a[114246] = aux_sym_number_token1;
	v->a[114247] = actions(1869);
	v->a[114248] = 1;
	v->a[114249] = aux_sym_number_token2;
	v->a[114250] = actions(1873);
	v->a[114251] = 1;
	v->a[114252] = anon_sym_DOLLAR_LPAREN;
	v->a[114253] = actions(1883);
	v->a[114254] = 1;
	v->a[114255] = sym__brace_start;
	v->a[114256] = actions(6575);
	v->a[114257] = 1;
	v->a[114258] = sym_word;
	v->a[114259] = actions(6577);
	small_parse_table_5713(v);
}

void	small_parse_table_5713(t_small_parse_table_array *v)
{
	v->a[114260] = 1;
	v->a[114261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114262] = actions(6579);
	v->a[114263] = 1;
	v->a[114264] = sym__special_character;
	v->a[114265] = actions(6581);
	v->a[114266] = 1;
	v->a[114267] = anon_sym_DQUOTE;
	v->a[114268] = actions(6585);
	v->a[114269] = 1;
	v->a[114270] = anon_sym_DOLLAR_LBRACE;
	v->a[114271] = actions(6587);
	v->a[114272] = 1;
	v->a[114273] = anon_sym_BQUOTE;
	v->a[114274] = actions(6589);
	v->a[114275] = 1;
	v->a[114276] = anon_sym_DOLLAR_BQUOTE;
	v->a[114277] = actions(6591);
	v->a[114278] = 1;
	v->a[114279] = sym__comment_word;
	small_parse_table_5714(v);
}

void	small_parse_table_5714(t_small_parse_table_array *v)
{
	v->a[114280] = actions(6633);
	v->a[114281] = 1;
	v->a[114282] = anon_sym_DOLLAR;
	v->a[114283] = actions(6583);
	v->a[114284] = 3;
	v->a[114285] = sym_test_operator;
	v->a[114286] = sym__bare_dollar;
	v->a[114287] = sym_raw_string;
	v->a[114288] = state(1054);
	v->a[114289] = 7;
	v->a[114290] = sym_arithmetic_expansion;
	v->a[114291] = sym_brace_expression;
	v->a[114292] = sym_string;
	v->a[114293] = sym_number;
	v->a[114294] = sym_simple_expansion;
	v->a[114295] = sym_expansion;
	v->a[114296] = sym_command_substitution;
	v->a[114297] = 16;
	v->a[114298] = actions(3);
	v->a[114299] = 1;
	small_parse_table_5715(v);
}

/* EOF small_parse_table_1142.c */
