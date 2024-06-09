/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_544.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2720(t_small_parse_table_array *v)
{
	v->a[54400] = anon_sym_BQUOTE;
	v->a[54401] = actions(2005);
	v->a[54402] = 1;
	v->a[54403] = aux_sym__simple_variable_name_token1;
	v->a[54404] = actions(2007);
	v->a[54405] = 1;
	v->a[54406] = sym_variable_name;
	v->a[54407] = actions(2025);
	v->a[54408] = 1;
	v->a[54409] = anon_sym_RPAREN_RPAREN;
	v->a[54410] = actions(1985);
	v->a[54411] = 2;
	v->a[54412] = anon_sym_PLUS_PLUS;
	v->a[54413] = anon_sym_DASH_DASH;
	v->a[54414] = actions(1987);
	v->a[54415] = 2;
	v->a[54416] = anon_sym_DASH2;
	v->a[54417] = anon_sym_PLUS2;
	v->a[54418] = state(530);
	v->a[54419] = 4;
	small_parse_table_2721(v);
}

void	small_parse_table_2721(t_small_parse_table_array *v)
{
	v->a[54420] = sym_string;
	v->a[54421] = sym_number;
	v->a[54422] = sym_simple_expansion;
	v->a[54423] = sym_expansion;
	v->a[54424] = state(685);
	v->a[54425] = 8;
	v->a[54426] = sym__arithmetic_expression;
	v->a[54427] = sym_arithmetic_literal;
	v->a[54428] = sym_arithmetic_binary_expression;
	v->a[54429] = sym_arithmetic_ternary_expression;
	v->a[54430] = sym_arithmetic_unary_expression;
	v->a[54431] = sym_arithmetic_postfix_expression;
	v->a[54432] = sym_arithmetic_parenthesized_expression;
	v->a[54433] = sym_command_substitution;
	v->a[54434] = 5;
	v->a[54435] = actions(3);
	v->a[54436] = 1;
	v->a[54437] = sym_comment;
	v->a[54438] = state(1239);
	v->a[54439] = 1;
	small_parse_table_2722(v);
}

void	small_parse_table_2722(t_small_parse_table_array *v)
{
	v->a[54440] = sym_concatenation;
	v->a[54441] = actions(755);
	v->a[54442] = 2;
	v->a[54443] = sym_file_descriptor;
	v->a[54444] = sym_variable_name;
	v->a[54445] = state(1005);
	v->a[54446] = 6;
	v->a[54447] = sym_arithmetic_expansion;
	v->a[54448] = sym_string;
	v->a[54449] = sym_number;
	v->a[54450] = sym_simple_expansion;
	v->a[54451] = sym_expansion;
	v->a[54452] = sym_command_substitution;
	v->a[54453] = actions(757);
	v->a[54454] = 20;
	v->a[54455] = anon_sym_LT;
	v->a[54456] = anon_sym_GT;
	v->a[54457] = anon_sym_GT_GT;
	v->a[54458] = anon_sym_AMP_GT;
	v->a[54459] = anon_sym_AMP_GT_GT;
	small_parse_table_2723(v);
}

void	small_parse_table_2723(t_small_parse_table_array *v)
{
	v->a[54460] = anon_sym_LT_AMP;
	v->a[54461] = anon_sym_GT_AMP;
	v->a[54462] = anon_sym_GT_PIPE;
	v->a[54463] = anon_sym_LT_AMP_DASH;
	v->a[54464] = anon_sym_GT_AMP_DASH;
	v->a[54465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54466] = anon_sym_DOLLAR;
	v->a[54467] = anon_sym_DQUOTE;
	v->a[54468] = sym_raw_string;
	v->a[54469] = aux_sym_number_token1;
	v->a[54470] = aux_sym_number_token2;
	v->a[54471] = anon_sym_DOLLAR_LBRACE;
	v->a[54472] = anon_sym_DOLLAR_LPAREN;
	v->a[54473] = anon_sym_BQUOTE;
	v->a[54474] = sym_word;
	v->a[54475] = 18;
	v->a[54476] = actions(1404);
	v->a[54477] = 1;
	v->a[54478] = sym_comment;
	v->a[54479] = actions(1979);
	small_parse_table_2724(v);
}

void	small_parse_table_2724(t_small_parse_table_array *v)
{
	v->a[54480] = 1;
	v->a[54481] = anon_sym_LPAREN;
	v->a[54482] = actions(1981);
	v->a[54483] = 1;
	v->a[54484] = anon_sym_BANG;
	v->a[54485] = actions(1989);
	v->a[54486] = 1;
	v->a[54487] = anon_sym_TILDE;
	v->a[54488] = actions(1991);
	v->a[54489] = 1;
	v->a[54490] = anon_sym_DOLLAR;
	v->a[54491] = actions(1993);
	v->a[54492] = 1;
	v->a[54493] = anon_sym_DQUOTE;
	v->a[54494] = actions(1995);
	v->a[54495] = 1;
	v->a[54496] = aux_sym_number_token1;
	v->a[54497] = actions(1997);
	v->a[54498] = 1;
	v->a[54499] = aux_sym_number_token2;
	small_parse_table_2725(v);
}

/* EOF small_parse_table_544.c */
