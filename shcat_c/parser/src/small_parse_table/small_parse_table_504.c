/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_504.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2520(t_small_parse_table_array *v)
{
	v->a[50400] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50401] = anon_sym_DOLLAR_LBRACK;
	v->a[50402] = anon_sym_DOLLAR;
	v->a[50403] = sym__special_character;
	v->a[50404] = anon_sym_DQUOTE;
	v->a[50405] = sym_raw_string;
	v->a[50406] = sym_ansi_c_string;
	v->a[50407] = aux_sym_number_token1;
	v->a[50408] = aux_sym_number_token2;
	v->a[50409] = anon_sym_DOLLAR_LBRACE;
	v->a[50410] = anon_sym_DOLLAR_LPAREN;
	v->a[50411] = anon_sym_BQUOTE;
	v->a[50412] = anon_sym_DOLLAR_BQUOTE;
	v->a[50413] = anon_sym_LT_LPAREN;
	v->a[50414] = anon_sym_GT_LPAREN;
	v->a[50415] = aux_sym__simple_variable_name_token1;
	v->a[50416] = sym_word;
	v->a[50417] = 22;
	v->a[50418] = actions(71);
	v->a[50419] = 1;
	small_parse_table_2521(v);
}

void	small_parse_table_2521(t_small_parse_table_array *v)
{
	v->a[50420] = sym_comment;
	v->a[50421] = actions(5401);
	v->a[50422] = 1;
	v->a[50423] = sym_word;
	v->a[50424] = actions(5405);
	v->a[50425] = 1;
	v->a[50426] = anon_sym_DOLLAR_LBRACK;
	v->a[50427] = actions(5407);
	v->a[50428] = 1;
	v->a[50429] = anon_sym_DOLLAR;
	v->a[50430] = actions(5409);
	v->a[50431] = 1;
	v->a[50432] = sym__special_character;
	v->a[50433] = actions(5411);
	v->a[50434] = 1;
	v->a[50435] = anon_sym_DQUOTE;
	v->a[50436] = actions(5415);
	v->a[50437] = 1;
	v->a[50438] = aux_sym_number_token1;
	v->a[50439] = actions(5417);
	small_parse_table_2522(v);
}

void	small_parse_table_2522(t_small_parse_table_array *v)
{
	v->a[50440] = 1;
	v->a[50441] = aux_sym_number_token2;
	v->a[50442] = actions(5419);
	v->a[50443] = 1;
	v->a[50444] = anon_sym_DOLLAR_LBRACE;
	v->a[50445] = actions(5421);
	v->a[50446] = 1;
	v->a[50447] = anon_sym_DOLLAR_LPAREN;
	v->a[50448] = actions(5423);
	v->a[50449] = 1;
	v->a[50450] = anon_sym_BQUOTE;
	v->a[50451] = actions(5425);
	v->a[50452] = 1;
	v->a[50453] = anon_sym_DOLLAR_BQUOTE;
	v->a[50454] = actions(5429);
	v->a[50455] = 1;
	v->a[50456] = sym_test_operator;
	v->a[50457] = actions(5431);
	v->a[50458] = 1;
	v->a[50459] = sym__brace_start;
	small_parse_table_2523(v);
}

void	small_parse_table_2523(t_small_parse_table_array *v)
{
	v->a[50460] = state(5532);
	v->a[50461] = 1;
	v->a[50462] = aux_sym__literal_repeat1;
	v->a[50463] = state(5692);
	v->a[50464] = 1;
	v->a[50465] = sym_concatenation;
	v->a[50466] = actions(5403);
	v->a[50467] = 2;
	v->a[50468] = anon_sym_LPAREN_LPAREN;
	v->a[50469] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50470] = actions(5413);
	v->a[50471] = 2;
	v->a[50472] = sym_raw_string;
	v->a[50473] = sym_ansi_c_string;
	v->a[50474] = actions(5427);
	v->a[50475] = 2;
	v->a[50476] = anon_sym_LT_LPAREN;
	v->a[50477] = anon_sym_GT_LPAREN;
	v->a[50478] = actions(2498);
	v->a[50479] = 7;
	small_parse_table_2524(v);
}

void	small_parse_table_2524(t_small_parse_table_array *v)
{
	v->a[50480] = anon_sym_PIPE;
	v->a[50481] = anon_sym_LT;
	v->a[50482] = anon_sym_GT;
	v->a[50483] = anon_sym_LT_LT;
	v->a[50484] = anon_sym_AMP_GT;
	v->a[50485] = anon_sym_LT_AMP;
	v->a[50486] = anon_sym_GT_AMP;
	v->a[50487] = state(5418);
	v->a[50488] = 9;
	v->a[50489] = sym_arithmetic_expansion;
	v->a[50490] = sym_brace_expression;
	v->a[50491] = sym_string;
	v->a[50492] = sym_translated_string;
	v->a[50493] = sym_number;
	v->a[50494] = sym_simple_expansion;
	v->a[50495] = sym_expansion;
	v->a[50496] = sym_command_substitution;
	v->a[50497] = sym_process_substitution;
	v->a[50498] = actions(2500);
	v->a[50499] = 10;
	small_parse_table_2525(v);
}

/* EOF small_parse_table_504.c */
