/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1174.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5870(t_small_parse_table_array *v)
{
	v->a[117400] = 1;
	v->a[117401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117402] = actions(5413);
	v->a[117403] = 1;
	v->a[117404] = anon_sym_DQUOTE;
	v->a[117405] = actions(5417);
	v->a[117406] = 1;
	v->a[117407] = aux_sym_number_token1;
	v->a[117408] = actions(5419);
	v->a[117409] = 1;
	v->a[117410] = aux_sym_number_token2;
	v->a[117411] = actions(5421);
	v->a[117412] = 1;
	v->a[117413] = anon_sym_DOLLAR_LBRACE;
	v->a[117414] = actions(5423);
	v->a[117415] = 1;
	v->a[117416] = anon_sym_DOLLAR_LPAREN;
	v->a[117417] = actions(5425);
	v->a[117418] = 1;
	v->a[117419] = anon_sym_BQUOTE;
	small_parse_table_5871(v);
}

void	small_parse_table_5871(t_small_parse_table_array *v)
{
	v->a[117420] = actions(5427);
	v->a[117421] = 1;
	v->a[117422] = anon_sym_DOLLAR_BQUOTE;
	v->a[117423] = actions(5433);
	v->a[117424] = 1;
	v->a[117425] = sym__brace_start;
	v->a[117426] = actions(6625);
	v->a[117427] = 1;
	v->a[117428] = sym_word;
	v->a[117429] = actions(6627);
	v->a[117430] = 1;
	v->a[117431] = sym__special_character;
	v->a[117432] = actions(6631);
	v->a[117433] = 1;
	v->a[117434] = sym__comment_word;
	v->a[117435] = actions(6905);
	v->a[117436] = 1;
	v->a[117437] = anon_sym_DOLLAR;
	v->a[117438] = actions(6629);
	v->a[117439] = 3;
	small_parse_table_5872(v);
}

void	small_parse_table_5872(t_small_parse_table_array *v)
{
	v->a[117440] = sym_test_operator;
	v->a[117441] = sym__bare_dollar;
	v->a[117442] = sym_raw_string;
	v->a[117443] = state(1903);
	v->a[117444] = 7;
	v->a[117445] = sym_arithmetic_expansion;
	v->a[117446] = sym_brace_expression;
	v->a[117447] = sym_string;
	v->a[117448] = sym_number;
	v->a[117449] = sym_simple_expansion;
	v->a[117450] = sym_expansion;
	v->a[117451] = sym_command_substitution;
	v->a[117452] = 16;
	v->a[117453] = actions(3);
	v->a[117454] = 1;
	v->a[117455] = sym_comment;
	v->a[117456] = actions(2362);
	v->a[117457] = 1;
	v->a[117458] = aux_sym_number_token1;
	v->a[117459] = actions(2364);
	small_parse_table_5873(v);
}

void	small_parse_table_5873(t_small_parse_table_array *v)
{
	v->a[117460] = 1;
	v->a[117461] = aux_sym_number_token2;
	v->a[117462] = actions(2368);
	v->a[117463] = 1;
	v->a[117464] = anon_sym_DOLLAR_LPAREN;
	v->a[117465] = actions(2376);
	v->a[117466] = 1;
	v->a[117467] = sym__brace_start;
	v->a[117468] = actions(6811);
	v->a[117469] = 1;
	v->a[117470] = sym_word;
	v->a[117471] = actions(6813);
	v->a[117472] = 1;
	v->a[117473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117474] = actions(6815);
	v->a[117475] = 1;
	v->a[117476] = sym__special_character;
	v->a[117477] = actions(6817);
	v->a[117478] = 1;
	v->a[117479] = anon_sym_DQUOTE;
	small_parse_table_5874(v);
}

void	small_parse_table_5874(t_small_parse_table_array *v)
{
	v->a[117480] = actions(6821);
	v->a[117481] = 1;
	v->a[117482] = anon_sym_DOLLAR_LBRACE;
	v->a[117483] = actions(6823);
	v->a[117484] = 1;
	v->a[117485] = anon_sym_BQUOTE;
	v->a[117486] = actions(6825);
	v->a[117487] = 1;
	v->a[117488] = anon_sym_DOLLAR_BQUOTE;
	v->a[117489] = actions(6827);
	v->a[117490] = 1;
	v->a[117491] = sym__comment_word;
	v->a[117492] = actions(6907);
	v->a[117493] = 1;
	v->a[117494] = anon_sym_DOLLAR;
	v->a[117495] = actions(6819);
	v->a[117496] = 3;
	v->a[117497] = sym_test_operator;
	v->a[117498] = sym__bare_dollar;
	v->a[117499] = sym_raw_string;
	small_parse_table_5875(v);
}

/* EOF small_parse_table_1174.c */
