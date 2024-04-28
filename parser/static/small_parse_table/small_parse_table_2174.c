/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2174.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10870(t_small_parse_table_array *v)
{
	v->a[217400] = 3;
	v->a[217401] = sym__bare_dollar;
	v->a[217402] = sym_raw_string;
	v->a[217403] = sym_ansi_c_string;
	v->a[217404] = state(1462);
	v->a[217405] = 9;
	v->a[217406] = sym_arithmetic_expansion;
	v->a[217407] = sym_brace_expression;
	v->a[217408] = sym_string;
	v->a[217409] = sym_translated_string;
	v->a[217410] = sym_number;
	v->a[217411] = sym_simple_expansion;
	v->a[217412] = sym_expansion;
	v->a[217413] = sym_command_substitution;
	v->a[217414] = sym_process_substitution;
	v->a[217415] = 18;
	v->a[217416] = actions(3);
	v->a[217417] = 1;
	v->a[217418] = sym_comment;
	v->a[217419] = actions(3481);
	small_parse_table_10871(v);
}

void	small_parse_table_10871(t_small_parse_table_array *v)
{
	v->a[217420] = 1;
	v->a[217421] = aux_sym_number_token1;
	v->a[217422] = actions(3483);
	v->a[217423] = 1;
	v->a[217424] = aux_sym_number_token2;
	v->a[217425] = actions(3487);
	v->a[217426] = 1;
	v->a[217427] = anon_sym_DOLLAR_LPAREN;
	v->a[217428] = actions(3497);
	v->a[217429] = 1;
	v->a[217430] = sym__brace_start;
	v->a[217431] = actions(8906);
	v->a[217432] = 1;
	v->a[217433] = anon_sym_DOLLAR_LBRACK;
	v->a[217434] = actions(8910);
	v->a[217435] = 1;
	v->a[217436] = anon_sym_DQUOTE;
	v->a[217437] = actions(8914);
	v->a[217438] = 1;
	v->a[217439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10872(v);
}

void	small_parse_table_10872(t_small_parse_table_array *v)
{
	v->a[217440] = actions(8916);
	v->a[217441] = 1;
	v->a[217442] = anon_sym_BQUOTE;
	v->a[217443] = actions(8918);
	v->a[217444] = 1;
	v->a[217445] = anon_sym_DOLLAR_BQUOTE;
	v->a[217446] = actions(9850);
	v->a[217447] = 1;
	v->a[217448] = sym_word;
	v->a[217449] = actions(9856);
	v->a[217450] = 1;
	v->a[217451] = sym__comment_word;
	v->a[217452] = actions(10366);
	v->a[217453] = 1;
	v->a[217454] = anon_sym_DOLLAR;
	v->a[217455] = actions(8904);
	v->a[217456] = 2;
	v->a[217457] = anon_sym_LPAREN_LPAREN;
	v->a[217458] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217459] = actions(8920);
	small_parse_table_10873(v);
}

void	small_parse_table_10873(t_small_parse_table_array *v)
{
	v->a[217460] = 2;
	v->a[217461] = anon_sym_LT_LPAREN;
	v->a[217462] = anon_sym_GT_LPAREN;
	v->a[217463] = actions(9852);
	v->a[217464] = 2;
	v->a[217465] = sym_test_operator;
	v->a[217466] = sym__special_character;
	v->a[217467] = actions(9854);
	v->a[217468] = 3;
	v->a[217469] = sym__bare_dollar;
	v->a[217470] = sym_raw_string;
	v->a[217471] = sym_ansi_c_string;
	v->a[217472] = state(1921);
	v->a[217473] = 9;
	v->a[217474] = sym_arithmetic_expansion;
	v->a[217475] = sym_brace_expression;
	v->a[217476] = sym_string;
	v->a[217477] = sym_translated_string;
	v->a[217478] = sym_number;
	v->a[217479] = sym_simple_expansion;
	small_parse_table_10874(v);
}

void	small_parse_table_10874(t_small_parse_table_array *v)
{
	v->a[217480] = sym_expansion;
	v->a[217481] = sym_command_substitution;
	v->a[217482] = sym_process_substitution;
	v->a[217483] = 20;
	v->a[217484] = actions(71);
	v->a[217485] = 1;
	v->a[217486] = sym_comment;
	v->a[217487] = actions(3675);
	v->a[217488] = 1;
	v->a[217489] = anon_sym_DOLLAR;
	v->a[217490] = actions(3681);
	v->a[217491] = 1;
	v->a[217492] = aux_sym_number_token1;
	v->a[217493] = actions(3683);
	v->a[217494] = 1;
	v->a[217495] = aux_sym_number_token2;
	v->a[217496] = actions(3687);
	v->a[217497] = 1;
	v->a[217498] = anon_sym_DOLLAR_LPAREN;
	v->a[217499] = actions(3697);
	small_parse_table_10875(v);
}

/* EOF small_parse_table_2174.c */
