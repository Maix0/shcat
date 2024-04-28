/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2084.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10420(t_small_parse_table_array *v)
{
	v->a[208400] = state(1380);
	v->a[208401] = 1;
	v->a[208402] = aux_sym__literal_repeat1;
	v->a[208403] = state(1629);
	v->a[208404] = 1;
	v->a[208405] = sym_concatenation;
	v->a[208406] = actions(8098);
	v->a[208407] = 2;
	v->a[208408] = anon_sym_LPAREN_LPAREN;
	v->a[208409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208410] = actions(8124);
	v->a[208411] = 2;
	v->a[208412] = anon_sym_LT_LPAREN;
	v->a[208413] = anon_sym_GT_LPAREN;
	v->a[208414] = actions(9788);
	v->a[208415] = 2;
	v->a[208416] = sym_raw_string;
	v->a[208417] = sym_ansi_c_string;
	v->a[208418] = state(1162);
	v->a[208419] = 9;
	small_parse_table_10421(v);
}

void	small_parse_table_10421(t_small_parse_table_array *v)
{
	v->a[208420] = sym_arithmetic_expansion;
	v->a[208421] = sym_brace_expression;
	v->a[208422] = sym_string;
	v->a[208423] = sym_translated_string;
	v->a[208424] = sym_number;
	v->a[208425] = sym_simple_expansion;
	v->a[208426] = sym_expansion;
	v->a[208427] = sym_command_substitution;
	v->a[208428] = sym_process_substitution;
	v->a[208429] = 18;
	v->a[208430] = actions(3);
	v->a[208431] = 1;
	v->a[208432] = sym_comment;
	v->a[208433] = actions(4080);
	v->a[208434] = 1;
	v->a[208435] = anon_sym_DOLLAR;
	v->a[208436] = actions(4086);
	v->a[208437] = 1;
	v->a[208438] = aux_sym_number_token1;
	v->a[208439] = actions(4088);
	small_parse_table_10422(v);
}

void	small_parse_table_10422(t_small_parse_table_array *v)
{
	v->a[208440] = 1;
	v->a[208441] = aux_sym_number_token2;
	v->a[208442] = actions(4092);
	v->a[208443] = 1;
	v->a[208444] = anon_sym_DOLLAR_LPAREN;
	v->a[208445] = actions(4102);
	v->a[208446] = 1;
	v->a[208447] = sym__brace_start;
	v->a[208448] = actions(9306);
	v->a[208449] = 1;
	v->a[208450] = sym_word;
	v->a[208451] = actions(9310);
	v->a[208452] = 1;
	v->a[208453] = anon_sym_DOLLAR_LBRACK;
	v->a[208454] = actions(9316);
	v->a[208455] = 1;
	v->a[208456] = anon_sym_DQUOTE;
	v->a[208457] = actions(9320);
	v->a[208458] = 1;
	v->a[208459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10423(v);
}

void	small_parse_table_10423(t_small_parse_table_array *v)
{
	v->a[208460] = actions(9322);
	v->a[208461] = 1;
	v->a[208462] = anon_sym_BQUOTE;
	v->a[208463] = actions(9324);
	v->a[208464] = 1;
	v->a[208465] = anon_sym_DOLLAR_BQUOTE;
	v->a[208466] = actions(9328);
	v->a[208467] = 1;
	v->a[208468] = sym__comment_word;
	v->a[208469] = actions(9308);
	v->a[208470] = 2;
	v->a[208471] = anon_sym_LPAREN_LPAREN;
	v->a[208472] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208473] = actions(9314);
	v->a[208474] = 2;
	v->a[208475] = sym_test_operator;
	v->a[208476] = sym__special_character;
	v->a[208477] = actions(9326);
	v->a[208478] = 2;
	v->a[208479] = anon_sym_LT_LPAREN;
	small_parse_table_10424(v);
}

void	small_parse_table_10424(t_small_parse_table_array *v)
{
	v->a[208480] = anon_sym_GT_LPAREN;
	v->a[208481] = actions(9318);
	v->a[208482] = 3;
	v->a[208483] = sym__bare_dollar;
	v->a[208484] = sym_raw_string;
	v->a[208485] = sym_ansi_c_string;
	v->a[208486] = state(4566);
	v->a[208487] = 9;
	v->a[208488] = sym_arithmetic_expansion;
	v->a[208489] = sym_brace_expression;
	v->a[208490] = sym_string;
	v->a[208491] = sym_translated_string;
	v->a[208492] = sym_number;
	v->a[208493] = sym_simple_expansion;
	v->a[208494] = sym_expansion;
	v->a[208495] = sym_command_substitution;
	v->a[208496] = sym_process_substitution;
	v->a[208497] = 20;
	v->a[208498] = actions(71);
	v->a[208499] = 1;
	small_parse_table_10425(v);
}

/* EOF small_parse_table_2084.c */
