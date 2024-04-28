/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1044.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5220(t_small_parse_table_array *v)
{
	v->a[104400] = sym_ansi_c_string;
	v->a[104401] = aux_sym_number_token1;
	v->a[104402] = aux_sym_number_token2;
	v->a[104403] = anon_sym_DOLLAR_LBRACE;
	v->a[104404] = anon_sym_DOLLAR_LPAREN;
	v->a[104405] = anon_sym_BQUOTE;
	v->a[104406] = anon_sym_DOLLAR_BQUOTE;
	v->a[104407] = anon_sym_LT_LPAREN;
	v->a[104408] = anon_sym_GT_LPAREN;
	v->a[104409] = sym_word;
	v->a[104410] = 27;
	v->a[104411] = actions(71);
	v->a[104412] = 1;
	v->a[104413] = sym_comment;
	v->a[104414] = actions(363);
	v->a[104415] = 1;
	v->a[104416] = anon_sym_DOLLAR_LBRACK;
	v->a[104417] = actions(367);
	v->a[104418] = 1;
	v->a[104419] = anon_sym_DOLLAR;
	small_parse_table_5221(v);
}

void	small_parse_table_5221(t_small_parse_table_array *v)
{
	v->a[104420] = actions(371);
	v->a[104421] = 1;
	v->a[104422] = anon_sym_DQUOTE;
	v->a[104423] = actions(375);
	v->a[104424] = 1;
	v->a[104425] = aux_sym_number_token1;
	v->a[104426] = actions(377);
	v->a[104427] = 1;
	v->a[104428] = aux_sym_number_token2;
	v->a[104429] = actions(379);
	v->a[104430] = 1;
	v->a[104431] = anon_sym_DOLLAR_LBRACE;
	v->a[104432] = actions(381);
	v->a[104433] = 1;
	v->a[104434] = anon_sym_DOLLAR_LPAREN;
	v->a[104435] = actions(385);
	v->a[104436] = 1;
	v->a[104437] = anon_sym_DOLLAR_BQUOTE;
	v->a[104438] = actions(391);
	v->a[104439] = 1;
	small_parse_table_5222(v);
}

void	small_parse_table_5222(t_small_parse_table_array *v)
{
	v->a[104440] = sym__brace_start;
	v->a[104441] = actions(1093);
	v->a[104442] = 1;
	v->a[104443] = anon_sym_LPAREN;
	v->a[104444] = actions(1095);
	v->a[104445] = 1;
	v->a[104446] = anon_sym_BANG;
	v->a[104447] = actions(1103);
	v->a[104448] = 1;
	v->a[104449] = anon_sym_TILDE;
	v->a[104450] = actions(5809);
	v->a[104451] = 1;
	v->a[104452] = anon_sym_BQUOTE;
	v->a[104453] = actions(5916);
	v->a[104454] = 1;
	v->a[104455] = sym__special_character;
	v->a[104456] = actions(6138);
	v->a[104457] = 1;
	v->a[104458] = sym_word;
	v->a[104459] = actions(6142);
	small_parse_table_5223(v);
}

void	small_parse_table_5223(t_small_parse_table_array *v)
{
	v->a[104460] = 1;
	v->a[104461] = sym_test_operator;
	v->a[104462] = state(2561);
	v->a[104463] = 1;
	v->a[104464] = aux_sym__literal_repeat1;
	v->a[104465] = state(3397);
	v->a[104466] = 1;
	v->a[104467] = sym__expression;
	v->a[104468] = actions(352);
	v->a[104469] = 2;
	v->a[104470] = anon_sym_LPAREN_LPAREN;
	v->a[104471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104472] = actions(387);
	v->a[104473] = 2;
	v->a[104474] = anon_sym_LT_LPAREN;
	v->a[104475] = anon_sym_GT_LPAREN;
	v->a[104476] = actions(1099);
	v->a[104477] = 2;
	v->a[104478] = anon_sym_PLUS_PLUS2;
	v->a[104479] = anon_sym_DASH_DASH2;
	small_parse_table_5224(v);
}

void	small_parse_table_5224(t_small_parse_table_array *v)
{
	v->a[104480] = actions(1101);
	v->a[104481] = 2;
	v->a[104482] = anon_sym_DASH2;
	v->a[104483] = anon_sym_PLUS2;
	v->a[104484] = actions(6140);
	v->a[104485] = 2;
	v->a[104486] = sym_raw_string;
	v->a[104487] = sym_ansi_c_string;
	v->a[104488] = state(2594);
	v->a[104489] = 2;
	v->a[104490] = sym_ternary_expression;
	v->a[104491] = sym_postfix_expression;
	v->a[104492] = state(2874);
	v->a[104493] = 4;
	v->a[104494] = sym_binary_expression;
	v->a[104495] = sym_unary_expression;
	v->a[104496] = sym_parenthesized_expression;
	v->a[104497] = sym_concatenation;
	v->a[104498] = state(2563);
	v->a[104499] = 9;
	small_parse_table_5225(v);
}

/* EOF small_parse_table_1044.c */
