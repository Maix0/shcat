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
	v->a[54400] = actions(1912);
	v->a[54401] = 1;
	v->a[54402] = anon_sym_DOLLAR_LBRACE;
	v->a[54403] = actions(1915);
	v->a[54404] = 1;
	v->a[54405] = anon_sym_DOLLAR_LPAREN;
	v->a[54406] = actions(1918);
	v->a[54407] = 1;
	v->a[54408] = anon_sym_BQUOTE;
	v->a[54409] = actions(577);
	v->a[54410] = 2;
	v->a[54411] = sym_file_descriptor;
	v->a[54412] = sym_variable_name;
	v->a[54413] = state(892);
	v->a[54414] = 2;
	v->a[54415] = sym_concatenation;
	v->a[54416] = aux_sym_for_statement_repeat1;
	v->a[54417] = actions(1900);
	v->a[54418] = 3;
	v->a[54419] = sym_raw_string;
	small_parse_table_2721(v);
}

void	small_parse_table_2721(t_small_parse_table_array *v)
{
	v->a[54420] = sym_number;
	v->a[54421] = sym_word;
	v->a[54422] = state(1118);
	v->a[54423] = 5;
	v->a[54424] = sym_arithmetic_expansion;
	v->a[54425] = sym_string;
	v->a[54426] = sym_simple_expansion;
	v->a[54427] = sym_expansion;
	v->a[54428] = sym_command_substitution;
	v->a[54429] = actions(582);
	v->a[54430] = 8;
	v->a[54431] = anon_sym_LT;
	v->a[54432] = anon_sym_GT;
	v->a[54433] = anon_sym_GT_GT;
	v->a[54434] = anon_sym_LT_AMP;
	v->a[54435] = anon_sym_GT_AMP;
	v->a[54436] = anon_sym_GT_PIPE;
	v->a[54437] = anon_sym_LT_AMP_DASH;
	v->a[54438] = anon_sym_GT_AMP_DASH;
	v->a[54439] = 15;
	small_parse_table_2722(v);
}

void	small_parse_table_2722(t_small_parse_table_array *v)
{
	v->a[54440] = actions(870);
	v->a[54441] = 1;
	v->a[54442] = sym_comment;
	v->a[54443] = actions(1921);
	v->a[54444] = 1;
	v->a[54445] = anon_sym_LPAREN;
	v->a[54446] = actions(1923);
	v->a[54447] = 1;
	v->a[54448] = anon_sym_BANG;
	v->a[54449] = actions(1929);
	v->a[54450] = 1;
	v->a[54451] = anon_sym_TILDE;
	v->a[54452] = actions(1931);
	v->a[54453] = 1;
	v->a[54454] = anon_sym_DOLLAR;
	v->a[54455] = actions(1933);
	v->a[54456] = 1;
	v->a[54457] = anon_sym_DQUOTE;
	v->a[54458] = actions(1937);
	v->a[54459] = 1;
	small_parse_table_2723(v);
}

void	small_parse_table_2723(t_small_parse_table_array *v)
{
	v->a[54460] = anon_sym_DOLLAR_LBRACE;
	v->a[54461] = actions(1939);
	v->a[54462] = 1;
	v->a[54463] = anon_sym_DOLLAR_LPAREN;
	v->a[54464] = actions(1941);
	v->a[54465] = 1;
	v->a[54466] = anon_sym_BQUOTE;
	v->a[54467] = actions(1943);
	v->a[54468] = 1;
	v->a[54469] = sym_variable_name;
	v->a[54470] = actions(1925);
	v->a[54471] = 2;
	v->a[54472] = anon_sym_PLUS_PLUS;
	v->a[54473] = anon_sym_DASH_DASH;
	v->a[54474] = actions(1927);
	v->a[54475] = 2;
	v->a[54476] = anon_sym_DASH2;
	v->a[54477] = anon_sym_PLUS2;
	v->a[54478] = actions(1935);
	v->a[54479] = 2;
	small_parse_table_2724(v);
}

void	small_parse_table_2724(t_small_parse_table_array *v)
{
	v->a[54480] = sym_number;
	v->a[54481] = aux_sym__simple_variable_name_token1;
	v->a[54482] = state(334);
	v->a[54483] = 3;
	v->a[54484] = sym_string;
	v->a[54485] = sym_simple_expansion;
	v->a[54486] = sym_expansion;
	v->a[54487] = state(378);
	v->a[54488] = 8;
	v->a[54489] = sym__arithmetic_expression;
	v->a[54490] = sym_arithmetic_literal;
	v->a[54491] = sym_arithmetic_binary_expression;
	v->a[54492] = sym_arithmetic_ternary_expression;
	v->a[54493] = sym_arithmetic_unary_expression;
	v->a[54494] = sym_arithmetic_postfix_expression;
	v->a[54495] = sym_arithmetic_parenthesized_expression;
	v->a[54496] = sym_command_substitution;
	v->a[54497] = 15;
	v->a[54498] = actions(870);
	v->a[54499] = 1;
	small_parse_table_2725(v);
}

/* EOF small_parse_table_544.c */
