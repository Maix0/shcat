/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1904.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9520(t_small_parse_table_array *v)
{
	v->a[190400] = 1;
	v->a[190401] = sym_comment;
	v->a[190402] = actions(8300);
	v->a[190403] = 1;
	v->a[190404] = sym_word;
	v->a[190405] = actions(8304);
	v->a[190406] = 1;
	v->a[190407] = anon_sym_LPAREN;
	v->a[190408] = actions(8306);
	v->a[190409] = 1;
	v->a[190410] = anon_sym_DOLLAR_LBRACK;
	v->a[190411] = actions(8308);
	v->a[190412] = 1;
	v->a[190413] = anon_sym_DOLLAR;
	v->a[190414] = actions(8310);
	v->a[190415] = 1;
	v->a[190416] = sym__special_character;
	v->a[190417] = actions(8312);
	v->a[190418] = 1;
	v->a[190419] = anon_sym_DQUOTE;
	small_parse_table_9521(v);
}

void	small_parse_table_9521(t_small_parse_table_array *v)
{
	v->a[190420] = actions(8316);
	v->a[190421] = 1;
	v->a[190422] = aux_sym_number_token1;
	v->a[190423] = actions(8318);
	v->a[190424] = 1;
	v->a[190425] = aux_sym_number_token2;
	v->a[190426] = actions(8320);
	v->a[190427] = 1;
	v->a[190428] = anon_sym_DOLLAR_LBRACE;
	v->a[190429] = actions(8322);
	v->a[190430] = 1;
	v->a[190431] = anon_sym_DOLLAR_LPAREN;
	v->a[190432] = actions(8324);
	v->a[190433] = 1;
	v->a[190434] = anon_sym_BQUOTE;
	v->a[190435] = actions(8326);
	v->a[190436] = 1;
	v->a[190437] = anon_sym_DOLLAR_BQUOTE;
	v->a[190438] = actions(8330);
	v->a[190439] = 1;
	small_parse_table_9522(v);
}

void	small_parse_table_9522(t_small_parse_table_array *v)
{
	v->a[190440] = sym__comment_word;
	v->a[190441] = actions(8332);
	v->a[190442] = 1;
	v->a[190443] = sym__empty_value;
	v->a[190444] = actions(8334);
	v->a[190445] = 1;
	v->a[190446] = sym_test_operator;
	v->a[190447] = actions(8336);
	v->a[190448] = 1;
	v->a[190449] = sym__brace_start;
	v->a[190450] = state(5408);
	v->a[190451] = 1;
	v->a[190452] = aux_sym__literal_repeat1;
	v->a[190453] = actions(8302);
	v->a[190454] = 2;
	v->a[190455] = anon_sym_LPAREN_LPAREN;
	v->a[190456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190457] = actions(8314);
	v->a[190458] = 2;
	v->a[190459] = sym_raw_string;
	small_parse_table_9523(v);
}

void	small_parse_table_9523(t_small_parse_table_array *v)
{
	v->a[190460] = sym_ansi_c_string;
	v->a[190461] = actions(8328);
	v->a[190462] = 2;
	v->a[190463] = anon_sym_LT_LPAREN;
	v->a[190464] = anon_sym_GT_LPAREN;
	v->a[190465] = state(5566);
	v->a[190466] = 2;
	v->a[190467] = sym_concatenation;
	v->a[190468] = sym_array;
	v->a[190469] = state(5253);
	v->a[190470] = 9;
	v->a[190471] = sym_arithmetic_expansion;
	v->a[190472] = sym_brace_expression;
	v->a[190473] = sym_string;
	v->a[190474] = sym_translated_string;
	v->a[190475] = sym_number;
	v->a[190476] = sym_simple_expansion;
	v->a[190477] = sym_expansion;
	v->a[190478] = sym_command_substitution;
	v->a[190479] = sym_process_substitution;
	small_parse_table_9524(v);
}

void	small_parse_table_9524(t_small_parse_table_array *v)
{
	v->a[190480] = 23;
	v->a[190481] = actions(3);
	v->a[190482] = 1;
	v->a[190483] = sym_comment;
	v->a[190484] = actions(2038);
	v->a[190485] = 1;
	v->a[190486] = anon_sym_DOLLAR;
	v->a[190487] = actions(2044);
	v->a[190488] = 1;
	v->a[190489] = aux_sym_number_token1;
	v->a[190490] = actions(2046);
	v->a[190491] = 1;
	v->a[190492] = aux_sym_number_token2;
	v->a[190493] = actions(2050);
	v->a[190494] = 1;
	v->a[190495] = anon_sym_DOLLAR_LPAREN;
	v->a[190496] = actions(2064);
	v->a[190497] = 1;
	v->a[190498] = sym__brace_start;
	v->a[190499] = actions(8338);
	small_parse_table_9525(v);
}

/* EOF small_parse_table_1904.c */
