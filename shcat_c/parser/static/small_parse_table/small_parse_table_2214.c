/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2214.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11070(t_small_parse_table_array *v)
{
	v->a[221400] = aux_sym__literal_repeat1;
	v->a[221401] = state(3547);
	v->a[221402] = 1;
	v->a[221403] = sym_concatenation;
	v->a[221404] = actions(7992);
	v->a[221405] = 2;
	v->a[221406] = anon_sym_LPAREN_LPAREN;
	v->a[221407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221408] = actions(8018);
	v->a[221409] = 2;
	v->a[221410] = anon_sym_LT_LPAREN;
	v->a[221411] = anon_sym_GT_LPAREN;
	v->a[221412] = actions(10592);
	v->a[221413] = 2;
	v->a[221414] = sym_raw_string;
	v->a[221415] = sym_ansi_c_string;
	v->a[221416] = state(3467);
	v->a[221417] = 9;
	v->a[221418] = sym_arithmetic_expansion;
	v->a[221419] = sym_brace_expression;
	small_parse_table_11071(v);
}

void	small_parse_table_11071(t_small_parse_table_array *v)
{
	v->a[221420] = sym_string;
	v->a[221421] = sym_translated_string;
	v->a[221422] = sym_number;
	v->a[221423] = sym_simple_expansion;
	v->a[221424] = sym_expansion;
	v->a[221425] = sym_command_substitution;
	v->a[221426] = sym_process_substitution;
	v->a[221427] = 18;
	v->a[221428] = actions(3);
	v->a[221429] = 1;
	v->a[221430] = sym_comment;
	v->a[221431] = actions(3793);
	v->a[221432] = 1;
	v->a[221433] = aux_sym_number_token1;
	v->a[221434] = actions(3795);
	v->a[221435] = 1;
	v->a[221436] = aux_sym_number_token2;
	v->a[221437] = actions(3799);
	v->a[221438] = 1;
	v->a[221439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11072(v);
}

void	small_parse_table_11072(t_small_parse_table_array *v)
{
	v->a[221440] = actions(3809);
	v->a[221441] = 1;
	v->a[221442] = sym__brace_start;
	v->a[221443] = actions(9636);
	v->a[221444] = 1;
	v->a[221445] = anon_sym_DOLLAR_LBRACK;
	v->a[221446] = actions(9640);
	v->a[221447] = 1;
	v->a[221448] = anon_sym_DQUOTE;
	v->a[221449] = actions(9644);
	v->a[221450] = 1;
	v->a[221451] = anon_sym_DOLLAR_LBRACE;
	v->a[221452] = actions(9646);
	v->a[221453] = 1;
	v->a[221454] = anon_sym_BQUOTE;
	v->a[221455] = actions(9648);
	v->a[221456] = 1;
	v->a[221457] = anon_sym_DOLLAR_BQUOTE;
	v->a[221458] = actions(9872);
	v->a[221459] = 1;
	small_parse_table_11073(v);
}

void	small_parse_table_11073(t_small_parse_table_array *v)
{
	v->a[221460] = sym_word;
	v->a[221461] = actions(9880);
	v->a[221462] = 1;
	v->a[221463] = sym__comment_word;
	v->a[221464] = actions(10596);
	v->a[221465] = 1;
	v->a[221466] = anon_sym_DOLLAR;
	v->a[221467] = actions(9634);
	v->a[221468] = 2;
	v->a[221469] = anon_sym_LPAREN_LPAREN;
	v->a[221470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221471] = actions(9650);
	v->a[221472] = 2;
	v->a[221473] = anon_sym_LT_LPAREN;
	v->a[221474] = anon_sym_GT_LPAREN;
	v->a[221475] = actions(9876);
	v->a[221476] = 2;
	v->a[221477] = sym_test_operator;
	v->a[221478] = sym__special_character;
	v->a[221479] = actions(9878);
	small_parse_table_11074(v);
}

void	small_parse_table_11074(t_small_parse_table_array *v)
{
	v->a[221480] = 3;
	v->a[221481] = sym__bare_dollar;
	v->a[221482] = sym_raw_string;
	v->a[221483] = sym_ansi_c_string;
	v->a[221484] = state(4337);
	v->a[221485] = 9;
	v->a[221486] = sym_arithmetic_expansion;
	v->a[221487] = sym_brace_expression;
	v->a[221488] = sym_string;
	v->a[221489] = sym_translated_string;
	v->a[221490] = sym_number;
	v->a[221491] = sym_simple_expansion;
	v->a[221492] = sym_expansion;
	v->a[221493] = sym_command_substitution;
	v->a[221494] = sym_process_substitution;
	v->a[221495] = 20;
	v->a[221496] = actions(71);
	v->a[221497] = 1;
	v->a[221498] = sym_comment;
	v->a[221499] = actions(7996);
	small_parse_table_11075(v);
}

/* EOF small_parse_table_2214.c */
