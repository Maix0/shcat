/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1143.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5715(t_small_parse_table_array *v)
{
	v->a[114300] = sym_comment;
	v->a[114301] = actions(1867);
	v->a[114302] = 1;
	v->a[114303] = aux_sym_number_token1;
	v->a[114304] = actions(1869);
	v->a[114305] = 1;
	v->a[114306] = aux_sym_number_token2;
	v->a[114307] = actions(1873);
	v->a[114308] = 1;
	v->a[114309] = anon_sym_DOLLAR_LPAREN;
	v->a[114310] = actions(1883);
	v->a[114311] = 1;
	v->a[114312] = sym__brace_start;
	v->a[114313] = actions(6575);
	v->a[114314] = 1;
	v->a[114315] = sym_word;
	v->a[114316] = actions(6577);
	v->a[114317] = 1;
	v->a[114318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114319] = actions(6579);
	small_parse_table_5716(v);
}

void	small_parse_table_5716(t_small_parse_table_array *v)
{
	v->a[114320] = 1;
	v->a[114321] = sym__special_character;
	v->a[114322] = actions(6581);
	v->a[114323] = 1;
	v->a[114324] = anon_sym_DQUOTE;
	v->a[114325] = actions(6585);
	v->a[114326] = 1;
	v->a[114327] = anon_sym_DOLLAR_LBRACE;
	v->a[114328] = actions(6587);
	v->a[114329] = 1;
	v->a[114330] = anon_sym_BQUOTE;
	v->a[114331] = actions(6589);
	v->a[114332] = 1;
	v->a[114333] = anon_sym_DOLLAR_BQUOTE;
	v->a[114334] = actions(6591);
	v->a[114335] = 1;
	v->a[114336] = sym__comment_word;
	v->a[114337] = actions(6635);
	v->a[114338] = 1;
	v->a[114339] = anon_sym_DOLLAR;
	small_parse_table_5717(v);
}

void	small_parse_table_5717(t_small_parse_table_array *v)
{
	v->a[114340] = actions(6583);
	v->a[114341] = 3;
	v->a[114342] = sym_test_operator;
	v->a[114343] = sym__bare_dollar;
	v->a[114344] = sym_raw_string;
	v->a[114345] = state(1054);
	v->a[114346] = 7;
	v->a[114347] = sym_arithmetic_expansion;
	v->a[114348] = sym_brace_expression;
	v->a[114349] = sym_string;
	v->a[114350] = sym_number;
	v->a[114351] = sym_simple_expansion;
	v->a[114352] = sym_expansion;
	v->a[114353] = sym_command_substitution;
	v->a[114354] = 16;
	v->a[114355] = actions(3);
	v->a[114356] = 1;
	v->a[114357] = sym_comment;
	v->a[114358] = actions(5453);
	v->a[114359] = 1;
	small_parse_table_5718(v);
}

void	small_parse_table_5718(t_small_parse_table_array *v)
{
	v->a[114360] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114361] = actions(5455);
	v->a[114362] = 1;
	v->a[114363] = anon_sym_DOLLAR;
	v->a[114364] = actions(5459);
	v->a[114365] = 1;
	v->a[114366] = anon_sym_DQUOTE;
	v->a[114367] = actions(5463);
	v->a[114368] = 1;
	v->a[114369] = aux_sym_number_token1;
	v->a[114370] = actions(5465);
	v->a[114371] = 1;
	v->a[114372] = aux_sym_number_token2;
	v->a[114373] = actions(5467);
	v->a[114374] = 1;
	v->a[114375] = anon_sym_DOLLAR_LBRACE;
	v->a[114376] = actions(5469);
	v->a[114377] = 1;
	v->a[114378] = anon_sym_DOLLAR_LPAREN;
	v->a[114379] = actions(5471);
	small_parse_table_5719(v);
}

void	small_parse_table_5719(t_small_parse_table_array *v)
{
	v->a[114380] = 1;
	v->a[114381] = anon_sym_BQUOTE;
	v->a[114382] = actions(5473);
	v->a[114383] = 1;
	v->a[114384] = anon_sym_DOLLAR_BQUOTE;
	v->a[114385] = actions(5479);
	v->a[114386] = 1;
	v->a[114387] = sym__brace_start;
	v->a[114388] = actions(6637);
	v->a[114389] = 1;
	v->a[114390] = sym_word;
	v->a[114391] = actions(6639);
	v->a[114392] = 1;
	v->a[114393] = sym__special_character;
	v->a[114394] = actions(6643);
	v->a[114395] = 1;
	v->a[114396] = sym__comment_word;
	v->a[114397] = actions(6641);
	v->a[114398] = 3;
	v->a[114399] = sym_test_operator;
	small_parse_table_5720(v);
}

/* EOF small_parse_table_1143.c */
