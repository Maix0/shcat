/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2074.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10370(t_small_parse_table_array *v)
{
	v->a[207400] = anon_sym_DOLLAR_LBRACK;
	v->a[207401] = actions(9638);
	v->a[207402] = 1;
	v->a[207403] = sym__special_character;
	v->a[207404] = actions(9640);
	v->a[207405] = 1;
	v->a[207406] = anon_sym_DQUOTE;
	v->a[207407] = actions(9644);
	v->a[207408] = 1;
	v->a[207409] = anon_sym_DOLLAR_LBRACE;
	v->a[207410] = actions(9646);
	v->a[207411] = 1;
	v->a[207412] = anon_sym_BQUOTE;
	v->a[207413] = actions(9648);
	v->a[207414] = 1;
	v->a[207415] = anon_sym_DOLLAR_BQUOTE;
	v->a[207416] = actions(9660);
	v->a[207417] = 1;
	v->a[207418] = sym_word;
	v->a[207419] = actions(9664);
	small_parse_table_10371(v);
}

void	small_parse_table_10371(t_small_parse_table_array *v)
{
	v->a[207420] = 1;
	v->a[207421] = sym_test_operator;
	v->a[207422] = state(4294);
	v->a[207423] = 1;
	v->a[207424] = aux_sym__literal_repeat1;
	v->a[207425] = state(4861);
	v->a[207426] = 1;
	v->a[207427] = sym_concatenation;
	v->a[207428] = actions(9634);
	v->a[207429] = 2;
	v->a[207430] = anon_sym_LPAREN_LPAREN;
	v->a[207431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207432] = actions(9650);
	v->a[207433] = 2;
	v->a[207434] = anon_sym_LT_LPAREN;
	v->a[207435] = anon_sym_GT_LPAREN;
	v->a[207436] = actions(9662);
	v->a[207437] = 2;
	v->a[207438] = sym_raw_string;
	v->a[207439] = sym_ansi_c_string;
	small_parse_table_10372(v);
}

void	small_parse_table_10372(t_small_parse_table_array *v)
{
	v->a[207440] = state(4477);
	v->a[207441] = 9;
	v->a[207442] = sym_arithmetic_expansion;
	v->a[207443] = sym_brace_expression;
	v->a[207444] = sym_string;
	v->a[207445] = sym_translated_string;
	v->a[207446] = sym_number;
	v->a[207447] = sym_simple_expansion;
	v->a[207448] = sym_expansion;
	v->a[207449] = sym_command_substitution;
	v->a[207450] = sym_process_substitution;
	v->a[207451] = 21;
	v->a[207452] = actions(71);
	v->a[207453] = 1;
	v->a[207454] = sym_comment;
	v->a[207455] = actions(3064);
	v->a[207456] = 1;
	v->a[207457] = sym_variable_name;
	v->a[207458] = actions(9278);
	v->a[207459] = 1;
	small_parse_table_10373(v);
}

void	small_parse_table_10373(t_small_parse_table_array *v)
{
	v->a[207460] = anon_sym_LPAREN;
	v->a[207461] = actions(9280);
	v->a[207462] = 1;
	v->a[207463] = anon_sym_BANG;
	v->a[207464] = actions(9286);
	v->a[207465] = 1;
	v->a[207466] = anon_sym_TILDE;
	v->a[207467] = actions(9288);
	v->a[207468] = 1;
	v->a[207469] = anon_sym_DOLLAR;
	v->a[207470] = actions(9290);
	v->a[207471] = 1;
	v->a[207472] = anon_sym_DQUOTE;
	v->a[207473] = actions(9292);
	v->a[207474] = 1;
	v->a[207475] = aux_sym_number_token1;
	v->a[207476] = actions(9294);
	v->a[207477] = 1;
	v->a[207478] = aux_sym_number_token2;
	v->a[207479] = actions(9296);
	small_parse_table_10374(v);
}

void	small_parse_table_10374(t_small_parse_table_array *v)
{
	v->a[207480] = 1;
	v->a[207481] = anon_sym_DOLLAR_LBRACE;
	v->a[207482] = actions(9298);
	v->a[207483] = 1;
	v->a[207484] = anon_sym_DOLLAR_LPAREN;
	v->a[207485] = actions(9300);
	v->a[207486] = 1;
	v->a[207487] = anon_sym_BQUOTE;
	v->a[207488] = actions(9302);
	v->a[207489] = 1;
	v->a[207490] = anon_sym_DOLLAR_BQUOTE;
	v->a[207491] = actions(9666);
	v->a[207492] = 1;
	v->a[207493] = aux_sym__simple_variable_name_token1;
	v->a[207494] = state(2801);
	v->a[207495] = 1;
	v->a[207496] = sym__arithmetic_binary_expression;
	v->a[207497] = state(2803);
	v->a[207498] = 1;
	v->a[207499] = sym__arithmetic_ternary_expression;
	small_parse_table_10375(v);
}

/* EOF small_parse_table_2074.c */
