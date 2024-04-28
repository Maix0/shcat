/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2314.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11570(t_small_parse_table_array *v)
{
	v->a[231400] = sym_comment;
	v->a[231401] = actions(2792);
	v->a[231402] = 1;
	v->a[231403] = aux_sym_number_token1;
	v->a[231404] = actions(2794);
	v->a[231405] = 1;
	v->a[231406] = aux_sym_number_token2;
	v->a[231407] = actions(2798);
	v->a[231408] = 1;
	v->a[231409] = anon_sym_DOLLAR_LPAREN;
	v->a[231410] = actions(2810);
	v->a[231411] = 1;
	v->a[231412] = sym__brace_start;
	v->a[231413] = actions(10500);
	v->a[231414] = 1;
	v->a[231415] = sym_word;
	v->a[231416] = actions(10504);
	v->a[231417] = 1;
	v->a[231418] = anon_sym_DOLLAR_LBRACK;
	v->a[231419] = actions(10508);
	small_parse_table_11571(v);
}

void	small_parse_table_11571(t_small_parse_table_array *v)
{
	v->a[231420] = 1;
	v->a[231421] = anon_sym_DQUOTE;
	v->a[231422] = actions(10512);
	v->a[231423] = 1;
	v->a[231424] = anon_sym_DOLLAR_LBRACE;
	v->a[231425] = actions(10514);
	v->a[231426] = 1;
	v->a[231427] = anon_sym_BQUOTE;
	v->a[231428] = actions(10516);
	v->a[231429] = 1;
	v->a[231430] = anon_sym_DOLLAR_BQUOTE;
	v->a[231431] = actions(10520);
	v->a[231432] = 1;
	v->a[231433] = sym__comment_word;
	v->a[231434] = actions(10926);
	v->a[231435] = 1;
	v->a[231436] = anon_sym_DOLLAR;
	v->a[231437] = actions(10502);
	v->a[231438] = 2;
	v->a[231439] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11572(v);
}

void	small_parse_table_11572(t_small_parse_table_array *v)
{
	v->a[231440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[231441] = actions(10506);
	v->a[231442] = 2;
	v->a[231443] = sym_test_operator;
	v->a[231444] = sym__special_character;
	v->a[231445] = actions(10518);
	v->a[231446] = 2;
	v->a[231447] = anon_sym_LT_LPAREN;
	v->a[231448] = anon_sym_GT_LPAREN;
	v->a[231449] = actions(10510);
	v->a[231450] = 3;
	v->a[231451] = sym__bare_dollar;
	v->a[231452] = sym_raw_string;
	v->a[231453] = sym_ansi_c_string;
	v->a[231454] = state(1569);
	v->a[231455] = 9;
	v->a[231456] = sym_arithmetic_expansion;
	v->a[231457] = sym_brace_expression;
	v->a[231458] = sym_string;
	v->a[231459] = sym_translated_string;
	small_parse_table_11573(v);
}

void	small_parse_table_11573(t_small_parse_table_array *v)
{
	v->a[231460] = sym_number;
	v->a[231461] = sym_simple_expansion;
	v->a[231462] = sym_expansion;
	v->a[231463] = sym_command_substitution;
	v->a[231464] = sym_process_substitution;
	v->a[231465] = 18;
	v->a[231466] = actions(3);
	v->a[231467] = 1;
	v->a[231468] = sym_comment;
	v->a[231469] = actions(7996);
	v->a[231470] = 1;
	v->a[231471] = anon_sym_DOLLAR_LBRACK;
	v->a[231472] = actions(8002);
	v->a[231473] = 1;
	v->a[231474] = anon_sym_DQUOTE;
	v->a[231475] = actions(8006);
	v->a[231476] = 1;
	v->a[231477] = aux_sym_number_token1;
	v->a[231478] = actions(8008);
	v->a[231479] = 1;
	small_parse_table_11574(v);
}

void	small_parse_table_11574(t_small_parse_table_array *v)
{
	v->a[231480] = aux_sym_number_token2;
	v->a[231481] = actions(8010);
	v->a[231482] = 1;
	v->a[231483] = anon_sym_DOLLAR_LBRACE;
	v->a[231484] = actions(8012);
	v->a[231485] = 1;
	v->a[231486] = anon_sym_DOLLAR_LPAREN;
	v->a[231487] = actions(8014);
	v->a[231488] = 1;
	v->a[231489] = anon_sym_BQUOTE;
	v->a[231490] = actions(8016);
	v->a[231491] = 1;
	v->a[231492] = anon_sym_DOLLAR_BQUOTE;
	v->a[231493] = actions(8026);
	v->a[231494] = 1;
	v->a[231495] = sym__brace_start;
	v->a[231496] = actions(9356);
	v->a[231497] = 1;
	v->a[231498] = sym_word;
	v->a[231499] = actions(9362);
	small_parse_table_11575(v);
}

/* EOF small_parse_table_2314.c */
