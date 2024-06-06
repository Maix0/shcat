/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1202.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6010(t_small_parse_table_array *v)
{
	v->a[120200] = 1;
	v->a[120201] = aux_sym_number_token2;
	v->a[120202] = actions(2319);
	v->a[120203] = 1;
	v->a[120204] = anon_sym_DOLLAR_LPAREN;
	v->a[120205] = actions(2327);
	v->a[120206] = 1;
	v->a[120207] = sym__brace_start;
	v->a[120208] = actions(5954);
	v->a[120209] = 1;
	v->a[120210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120211] = actions(5958);
	v->a[120212] = 1;
	v->a[120213] = anon_sym_DQUOTE;
	v->a[120214] = actions(5960);
	v->a[120215] = 1;
	v->a[120216] = anon_sym_DOLLAR_LBRACE;
	v->a[120217] = actions(5962);
	v->a[120218] = 1;
	v->a[120219] = anon_sym_BQUOTE;
	small_parse_table_6011(v);
}

void	small_parse_table_6011(t_small_parse_table_array *v)
{
	v->a[120220] = actions(5964);
	v->a[120221] = 1;
	v->a[120222] = anon_sym_DOLLAR_BQUOTE;
	v->a[120223] = actions(6941);
	v->a[120224] = 1;
	v->a[120225] = sym_word;
	v->a[120226] = actions(6943);
	v->a[120227] = 1;
	v->a[120228] = sym__special_character;
	v->a[120229] = actions(6947);
	v->a[120230] = 1;
	v->a[120231] = sym__comment_word;
	v->a[120232] = actions(7005);
	v->a[120233] = 1;
	v->a[120234] = anon_sym_DOLLAR;
	v->a[120235] = actions(6945);
	v->a[120236] = 3;
	v->a[120237] = sym_test_operator;
	v->a[120238] = sym__bare_dollar;
	v->a[120239] = sym_raw_string;
	small_parse_table_6012(v);
}

void	small_parse_table_6012(t_small_parse_table_array *v)
{
	v->a[120240] = state(1236);
	v->a[120241] = 7;
	v->a[120242] = sym_arithmetic_expansion;
	v->a[120243] = sym_brace_expression;
	v->a[120244] = sym_string;
	v->a[120245] = sym_number;
	v->a[120246] = sym_simple_expansion;
	v->a[120247] = sym_expansion;
	v->a[120248] = sym_command_substitution;
	v->a[120249] = 16;
	v->a[120250] = actions(3);
	v->a[120251] = 1;
	v->a[120252] = sym_comment;
	v->a[120253] = actions(2313);
	v->a[120254] = 1;
	v->a[120255] = aux_sym_number_token1;
	v->a[120256] = actions(2315);
	v->a[120257] = 1;
	v->a[120258] = aux_sym_number_token2;
	v->a[120259] = actions(2319);
	small_parse_table_6013(v);
}

void	small_parse_table_6013(t_small_parse_table_array *v)
{
	v->a[120260] = 1;
	v->a[120261] = anon_sym_DOLLAR_LPAREN;
	v->a[120262] = actions(2327);
	v->a[120263] = 1;
	v->a[120264] = sym__brace_start;
	v->a[120265] = actions(5954);
	v->a[120266] = 1;
	v->a[120267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120268] = actions(5958);
	v->a[120269] = 1;
	v->a[120270] = anon_sym_DQUOTE;
	v->a[120271] = actions(5960);
	v->a[120272] = 1;
	v->a[120273] = anon_sym_DOLLAR_LBRACE;
	v->a[120274] = actions(5962);
	v->a[120275] = 1;
	v->a[120276] = anon_sym_BQUOTE;
	v->a[120277] = actions(5964);
	v->a[120278] = 1;
	v->a[120279] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6014(v);
}

void	small_parse_table_6014(t_small_parse_table_array *v)
{
	v->a[120280] = actions(6941);
	v->a[120281] = 1;
	v->a[120282] = sym_word;
	v->a[120283] = actions(6943);
	v->a[120284] = 1;
	v->a[120285] = sym__special_character;
	v->a[120286] = actions(6947);
	v->a[120287] = 1;
	v->a[120288] = sym__comment_word;
	v->a[120289] = actions(7007);
	v->a[120290] = 1;
	v->a[120291] = anon_sym_DOLLAR;
	v->a[120292] = actions(6945);
	v->a[120293] = 3;
	v->a[120294] = sym_test_operator;
	v->a[120295] = sym__bare_dollar;
	v->a[120296] = sym_raw_string;
	v->a[120297] = state(1236);
	v->a[120298] = 7;
	v->a[120299] = sym_arithmetic_expansion;
	small_parse_table_6015(v);
}

/* EOF small_parse_table_1202.c */
