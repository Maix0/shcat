/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1154.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5770(t_small_parse_table_array *v)
{
	v->a[115400] = 1;
	v->a[115401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115402] = actions(5993);
	v->a[115403] = 1;
	v->a[115404] = anon_sym_DQUOTE;
	v->a[115405] = actions(5995);
	v->a[115406] = 1;
	v->a[115407] = anon_sym_DOLLAR_LBRACE;
	v->a[115408] = actions(5997);
	v->a[115409] = 1;
	v->a[115410] = anon_sym_BQUOTE;
	v->a[115411] = actions(5999);
	v->a[115412] = 1;
	v->a[115413] = anon_sym_DOLLAR_BQUOTE;
	v->a[115414] = actions(6432);
	v->a[115415] = 1;
	v->a[115416] = sym_word;
	v->a[115417] = actions(6436);
	v->a[115418] = 1;
	v->a[115419] = sym__special_character;
	small_parse_table_5771(v);
}

void	small_parse_table_5771(t_small_parse_table_array *v)
{
	v->a[115420] = actions(6440);
	v->a[115421] = 1;
	v->a[115422] = sym__comment_word;
	v->a[115423] = actions(6438);
	v->a[115424] = 3;
	v->a[115425] = sym_test_operator;
	v->a[115426] = sym__bare_dollar;
	v->a[115427] = sym_raw_string;
	v->a[115428] = state(1201);
	v->a[115429] = 7;
	v->a[115430] = sym_arithmetic_expansion;
	v->a[115431] = sym_brace_expression;
	v->a[115432] = sym_string;
	v->a[115433] = sym_number;
	v->a[115434] = sym_simple_expansion;
	v->a[115435] = sym_expansion;
	v->a[115436] = sym_command_substitution;
	v->a[115437] = 16;
	v->a[115438] = actions(3);
	v->a[115439] = 1;
	small_parse_table_5772(v);
}

void	small_parse_table_5772(t_small_parse_table_array *v)
{
	v->a[115440] = sym_comment;
	v->a[115441] = actions(1017);
	v->a[115442] = 1;
	v->a[115443] = aux_sym_number_token1;
	v->a[115444] = actions(1019);
	v->a[115445] = 1;
	v->a[115446] = aux_sym_number_token2;
	v->a[115447] = actions(1023);
	v->a[115448] = 1;
	v->a[115449] = anon_sym_DOLLAR_LPAREN;
	v->a[115450] = actions(1035);
	v->a[115451] = 1;
	v->a[115452] = sym__brace_start;
	v->a[115453] = actions(5763);
	v->a[115454] = 1;
	v->a[115455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115456] = actions(5767);
	v->a[115457] = 1;
	v->a[115458] = anon_sym_DQUOTE;
	v->a[115459] = actions(5771);
	small_parse_table_5773(v);
}

void	small_parse_table_5773(t_small_parse_table_array *v)
{
	v->a[115460] = 1;
	v->a[115461] = anon_sym_DOLLAR_LBRACE;
	v->a[115462] = actions(5773);
	v->a[115463] = 1;
	v->a[115464] = anon_sym_BQUOTE;
	v->a[115465] = actions(5775);
	v->a[115466] = 1;
	v->a[115467] = anon_sym_DOLLAR_BQUOTE;
	v->a[115468] = actions(6731);
	v->a[115469] = 1;
	v->a[115470] = sym_word;
	v->a[115471] = actions(6735);
	v->a[115472] = 1;
	v->a[115473] = sym__special_character;
	v->a[115474] = actions(6739);
	v->a[115475] = 1;
	v->a[115476] = sym__comment_word;
	v->a[115477] = actions(6761);
	v->a[115478] = 1;
	v->a[115479] = anon_sym_DOLLAR;
	small_parse_table_5774(v);
}

void	small_parse_table_5774(t_small_parse_table_array *v)
{
	v->a[115480] = actions(6737);
	v->a[115481] = 3;
	v->a[115482] = sym_test_operator;
	v->a[115483] = sym__bare_dollar;
	v->a[115484] = sym_raw_string;
	v->a[115485] = state(872);
	v->a[115486] = 7;
	v->a[115487] = sym_arithmetic_expansion;
	v->a[115488] = sym_brace_expression;
	v->a[115489] = sym_string;
	v->a[115490] = sym_number;
	v->a[115491] = sym_simple_expansion;
	v->a[115492] = sym_expansion;
	v->a[115493] = sym_command_substitution;
	v->a[115494] = 16;
	v->a[115495] = actions(3);
	v->a[115496] = 1;
	v->a[115497] = sym_comment;
	v->a[115498] = actions(3264);
	v->a[115499] = 1;
	small_parse_table_5775(v);
}

/* EOF small_parse_table_1154.c */
