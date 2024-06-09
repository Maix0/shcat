/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_594.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2970(t_small_parse_table_array *v)
{
	v->a[59400] = anon_sym_GT;
	v->a[59401] = anon_sym_GT_GT;
	v->a[59402] = anon_sym_AMP_GT;
	v->a[59403] = anon_sym_AMP_GT_GT;
	v->a[59404] = anon_sym_LT_AMP;
	v->a[59405] = anon_sym_GT_AMP;
	v->a[59406] = anon_sym_GT_PIPE;
	v->a[59407] = anon_sym_LT_AMP_DASH;
	v->a[59408] = anon_sym_GT_AMP_DASH;
	v->a[59409] = anon_sym_LT_LT;
	v->a[59410] = anon_sym_LT_LT_DASH;
	v->a[59411] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59412] = aux_sym_concatenation_token1;
	v->a[59413] = anon_sym_DOLLAR;
	v->a[59414] = anon_sym_DQUOTE;
	v->a[59415] = sym_raw_string;
	v->a[59416] = aux_sym_number_token1;
	v->a[59417] = aux_sym_number_token2;
	v->a[59418] = anon_sym_DOLLAR_LBRACE;
	v->a[59419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2971(v);
}

void	small_parse_table_2971(t_small_parse_table_array *v)
{
	v->a[59420] = anon_sym_BQUOTE;
	v->a[59421] = sym_word;
	v->a[59422] = 17;
	v->a[59423] = actions(1404);
	v->a[59424] = 1;
	v->a[59425] = sym_comment;
	v->a[59426] = actions(2077);
	v->a[59427] = 1;
	v->a[59428] = anon_sym_LPAREN;
	v->a[59429] = actions(2079);
	v->a[59430] = 1;
	v->a[59431] = anon_sym_BANG;
	v->a[59432] = actions(2085);
	v->a[59433] = 1;
	v->a[59434] = anon_sym_TILDE;
	v->a[59435] = actions(2087);
	v->a[59436] = 1;
	v->a[59437] = anon_sym_DOLLAR;
	v->a[59438] = actions(2089);
	v->a[59439] = 1;
	small_parse_table_2972(v);
}

void	small_parse_table_2972(t_small_parse_table_array *v)
{
	v->a[59440] = anon_sym_DQUOTE;
	v->a[59441] = actions(2091);
	v->a[59442] = 1;
	v->a[59443] = aux_sym_number_token1;
	v->a[59444] = actions(2093);
	v->a[59445] = 1;
	v->a[59446] = aux_sym_number_token2;
	v->a[59447] = actions(2095);
	v->a[59448] = 1;
	v->a[59449] = anon_sym_DOLLAR_LBRACE;
	v->a[59450] = actions(2097);
	v->a[59451] = 1;
	v->a[59452] = anon_sym_DOLLAR_LPAREN;
	v->a[59453] = actions(2099);
	v->a[59454] = 1;
	v->a[59455] = anon_sym_BQUOTE;
	v->a[59456] = actions(2101);
	v->a[59457] = 1;
	v->a[59458] = aux_sym__simple_variable_name_token1;
	v->a[59459] = actions(2103);
	small_parse_table_2973(v);
}

void	small_parse_table_2973(t_small_parse_table_array *v)
{
	v->a[59460] = 1;
	v->a[59461] = sym_variable_name;
	v->a[59462] = actions(2081);
	v->a[59463] = 2;
	v->a[59464] = anon_sym_PLUS_PLUS;
	v->a[59465] = anon_sym_DASH_DASH;
	v->a[59466] = actions(2083);
	v->a[59467] = 2;
	v->a[59468] = anon_sym_DASH2;
	v->a[59469] = anon_sym_PLUS2;
	v->a[59470] = state(588);
	v->a[59471] = 4;
	v->a[59472] = sym_string;
	v->a[59473] = sym_number;
	v->a[59474] = sym_simple_expansion;
	v->a[59475] = sym_expansion;
	v->a[59476] = state(610);
	v->a[59477] = 8;
	v->a[59478] = sym__arithmetic_expression;
	v->a[59479] = sym_arithmetic_literal;
	small_parse_table_2974(v);
}

void	small_parse_table_2974(t_small_parse_table_array *v)
{
	v->a[59480] = sym_arithmetic_binary_expression;
	v->a[59481] = sym_arithmetic_ternary_expression;
	v->a[59482] = sym_arithmetic_unary_expression;
	v->a[59483] = sym_arithmetic_postfix_expression;
	v->a[59484] = sym_arithmetic_parenthesized_expression;
	v->a[59485] = sym_command_substitution;
	v->a[59486] = 3;
	v->a[59487] = actions(3);
	v->a[59488] = 1;
	v->a[59489] = sym_comment;
	v->a[59490] = actions(1241);
	v->a[59491] = 2;
	v->a[59492] = sym_file_descriptor;
	v->a[59493] = sym__concat;
	v->a[59494] = actions(1239);
	v->a[59495] = 26;
	v->a[59496] = anon_sym_PIPE;
	v->a[59497] = anon_sym_AMP_AMP;
	v->a[59498] = anon_sym_PIPE_PIPE;
	v->a[59499] = anon_sym_LT;
	small_parse_table_2975(v);
}

/* EOF small_parse_table_594.c */
