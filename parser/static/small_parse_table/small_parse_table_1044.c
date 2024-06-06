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
	v->a[104400] = anon_sym_PIPE_PIPE;
	v->a[104401] = anon_sym_LT;
	v->a[104402] = anon_sym_GT;
	v->a[104403] = anon_sym_GT_GT;
	v->a[104404] = anon_sym_AMP_GT;
	v->a[104405] = anon_sym_AMP_GT_GT;
	v->a[104406] = anon_sym_LT_AMP;
	v->a[104407] = anon_sym_GT_AMP;
	v->a[104408] = anon_sym_GT_PIPE;
	v->a[104409] = anon_sym_LT_AMP_DASH;
	v->a[104410] = anon_sym_GT_AMP_DASH;
	v->a[104411] = anon_sym_LT_LT;
	v->a[104412] = anon_sym_LT_LT_DASH;
	v->a[104413] = anon_sym_AMP;
	v->a[104414] = anon_sym_SEMI;
	v->a[104415] = 17;
	v->a[104416] = actions(57);
	v->a[104417] = 1;
	v->a[104418] = sym_comment;
	v->a[104419] = actions(2150);
	small_parse_table_5221(v);
}

void	small_parse_table_5221(t_small_parse_table_array *v)
{
	v->a[104420] = 1;
	v->a[104421] = sym_word;
	v->a[104422] = actions(2154);
	v->a[104423] = 1;
	v->a[104424] = anon_sym_DOLLAR;
	v->a[104425] = actions(2160);
	v->a[104426] = 1;
	v->a[104427] = aux_sym_number_token1;
	v->a[104428] = actions(2162);
	v->a[104429] = 1;
	v->a[104430] = aux_sym_number_token2;
	v->a[104431] = actions(2166);
	v->a[104432] = 1;
	v->a[104433] = anon_sym_DOLLAR_LPAREN;
	v->a[104434] = actions(2174);
	v->a[104435] = 1;
	v->a[104436] = sym__brace_start;
	v->a[104437] = actions(5989);
	v->a[104438] = 1;
	v->a[104439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5222(v);
}

void	small_parse_table_5222(t_small_parse_table_array *v)
{
	v->a[104440] = actions(5991);
	v->a[104441] = 1;
	v->a[104442] = sym__special_character;
	v->a[104443] = actions(5993);
	v->a[104444] = 1;
	v->a[104445] = anon_sym_DQUOTE;
	v->a[104446] = actions(5995);
	v->a[104447] = 1;
	v->a[104448] = anon_sym_DOLLAR_LBRACE;
	v->a[104449] = actions(5997);
	v->a[104450] = 1;
	v->a[104451] = anon_sym_BQUOTE;
	v->a[104452] = actions(5999);
	v->a[104453] = 1;
	v->a[104454] = anon_sym_DOLLAR_BQUOTE;
	v->a[104455] = state(1270);
	v->a[104456] = 1;
	v->a[104457] = aux_sym__literal_repeat1;
	v->a[104458] = actions(2172);
	v->a[104459] = 2;
	small_parse_table_5223(v);
}

void	small_parse_table_5223(t_small_parse_table_array *v)
{
	v->a[104460] = sym_test_operator;
	v->a[104461] = sym_raw_string;
	v->a[104462] = state(391);
	v->a[104463] = 2;
	v->a[104464] = sym_concatenation;
	v->a[104465] = aux_sym_for_statement_repeat1;
	v->a[104466] = state(1069);
	v->a[104467] = 7;
	v->a[104468] = sym_arithmetic_expansion;
	v->a[104469] = sym_brace_expression;
	v->a[104470] = sym_string;
	v->a[104471] = sym_number;
	v->a[104472] = sym_simple_expansion;
	v->a[104473] = sym_expansion;
	v->a[104474] = sym_command_substitution;
	v->a[104475] = 17;
	v->a[104476] = actions(57);
	v->a[104477] = 1;
	v->a[104478] = sym_comment;
	v->a[104479] = actions(2154);
	small_parse_table_5224(v);
}

void	small_parse_table_5224(t_small_parse_table_array *v)
{
	v->a[104480] = 1;
	v->a[104481] = anon_sym_DOLLAR;
	v->a[104482] = actions(2160);
	v->a[104483] = 1;
	v->a[104484] = aux_sym_number_token1;
	v->a[104485] = actions(2162);
	v->a[104486] = 1;
	v->a[104487] = aux_sym_number_token2;
	v->a[104488] = actions(2166);
	v->a[104489] = 1;
	v->a[104490] = anon_sym_DOLLAR_LPAREN;
	v->a[104491] = actions(2174);
	v->a[104492] = 1;
	v->a[104493] = sym__brace_start;
	v->a[104494] = actions(2384);
	v->a[104495] = 1;
	v->a[104496] = sym_word;
	v->a[104497] = actions(5989);
	v->a[104498] = 1;
	v->a[104499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5225(v);
}

/* EOF small_parse_table_1044.c */
