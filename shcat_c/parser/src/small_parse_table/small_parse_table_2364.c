/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2364.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11820(t_small_parse_table_array *v)
{
	v->a[236400] = actions(3793);
	v->a[236401] = 1;
	v->a[236402] = aux_sym_number_token1;
	v->a[236403] = actions(3795);
	v->a[236404] = 1;
	v->a[236405] = aux_sym_number_token2;
	v->a[236406] = actions(3799);
	v->a[236407] = 1;
	v->a[236408] = anon_sym_DOLLAR_LPAREN;
	v->a[236409] = actions(3809);
	v->a[236410] = 1;
	v->a[236411] = sym__brace_start;
	v->a[236412] = actions(9636);
	v->a[236413] = 1;
	v->a[236414] = anon_sym_DOLLAR_LBRACK;
	v->a[236415] = actions(9640);
	v->a[236416] = 1;
	v->a[236417] = anon_sym_DQUOTE;
	v->a[236418] = actions(9644);
	v->a[236419] = 1;
	small_parse_table_11821(v);
}

void	small_parse_table_11821(t_small_parse_table_array *v)
{
	v->a[236420] = anon_sym_DOLLAR_LBRACE;
	v->a[236421] = actions(9646);
	v->a[236422] = 1;
	v->a[236423] = anon_sym_BQUOTE;
	v->a[236424] = actions(9648);
	v->a[236425] = 1;
	v->a[236426] = anon_sym_DOLLAR_BQUOTE;
	v->a[236427] = actions(11122);
	v->a[236428] = 1;
	v->a[236429] = sym__special_character;
	v->a[236430] = actions(11134);
	v->a[236431] = 1;
	v->a[236432] = sym_word;
	v->a[236433] = actions(11138);
	v->a[236434] = 1;
	v->a[236435] = sym_test_operator;
	v->a[236436] = state(4347);
	v->a[236437] = 1;
	v->a[236438] = aux_sym__literal_repeat1;
	v->a[236439] = state(4617);
	small_parse_table_11822(v);
}

void	small_parse_table_11822(t_small_parse_table_array *v)
{
	v->a[236440] = 1;
	v->a[236441] = sym_concatenation;
	v->a[236442] = actions(9634);
	v->a[236443] = 2;
	v->a[236444] = anon_sym_LPAREN_LPAREN;
	v->a[236445] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[236446] = actions(9650);
	v->a[236447] = 2;
	v->a[236448] = anon_sym_LT_LPAREN;
	v->a[236449] = anon_sym_GT_LPAREN;
	v->a[236450] = actions(11136);
	v->a[236451] = 2;
	v->a[236452] = sym_raw_string;
	v->a[236453] = sym_ansi_c_string;
	v->a[236454] = state(4513);
	v->a[236455] = 9;
	v->a[236456] = sym_arithmetic_expansion;
	v->a[236457] = sym_brace_expression;
	v->a[236458] = sym_string;
	v->a[236459] = sym_translated_string;
	small_parse_table_11823(v);
}

void	small_parse_table_11823(t_small_parse_table_array *v)
{
	v->a[236460] = sym_number;
	v->a[236461] = sym_simple_expansion;
	v->a[236462] = sym_expansion;
	v->a[236463] = sym_command_substitution;
	v->a[236464] = sym_process_substitution;
	v->a[236465] = 21;
	v->a[236466] = actions(71);
	v->a[236467] = 1;
	v->a[236468] = sym_comment;
	v->a[236469] = actions(3064);
	v->a[236470] = 1;
	v->a[236471] = sym_variable_name;
	v->a[236472] = actions(9278);
	v->a[236473] = 1;
	v->a[236474] = anon_sym_LPAREN;
	v->a[236475] = actions(9280);
	v->a[236476] = 1;
	v->a[236477] = anon_sym_BANG;
	v->a[236478] = actions(9286);
	v->a[236479] = 1;
	small_parse_table_11824(v);
}

void	small_parse_table_11824(t_small_parse_table_array *v)
{
	v->a[236480] = anon_sym_TILDE;
	v->a[236481] = actions(9288);
	v->a[236482] = 1;
	v->a[236483] = anon_sym_DOLLAR;
	v->a[236484] = actions(9290);
	v->a[236485] = 1;
	v->a[236486] = anon_sym_DQUOTE;
	v->a[236487] = actions(9292);
	v->a[236488] = 1;
	v->a[236489] = aux_sym_number_token1;
	v->a[236490] = actions(9294);
	v->a[236491] = 1;
	v->a[236492] = aux_sym_number_token2;
	v->a[236493] = actions(9296);
	v->a[236494] = 1;
	v->a[236495] = anon_sym_DOLLAR_LBRACE;
	v->a[236496] = actions(9298);
	v->a[236497] = 1;
	v->a[236498] = anon_sym_DOLLAR_LPAREN;
	v->a[236499] = actions(9300);
	small_parse_table_11825(v);
}

/* EOF small_parse_table_2364.c */
