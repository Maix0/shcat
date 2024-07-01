/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_571.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2855(t_small_parse_table_array *v)
{
	v->a[57100] = actions(1923);
	v->a[57101] = 1;
	v->a[57102] = anon_sym_BANG;
	v->a[57103] = actions(1929);
	v->a[57104] = 1;
	v->a[57105] = anon_sym_TILDE;
	v->a[57106] = actions(1931);
	v->a[57107] = 1;
	v->a[57108] = anon_sym_DOLLAR;
	v->a[57109] = actions(1933);
	v->a[57110] = 1;
	v->a[57111] = anon_sym_DQUOTE;
	v->a[57112] = actions(1937);
	v->a[57113] = 1;
	v->a[57114] = anon_sym_DOLLAR_LBRACE;
	v->a[57115] = actions(1939);
	v->a[57116] = 1;
	v->a[57117] = anon_sym_DOLLAR_LPAREN;
	v->a[57118] = actions(1941);
	v->a[57119] = 1;
	small_parse_table_2856(v);
}

void	small_parse_table_2856(t_small_parse_table_array *v)
{
	v->a[57120] = anon_sym_BQUOTE;
	v->a[57121] = actions(1943);
	v->a[57122] = 1;
	v->a[57123] = sym_variable_name;
	v->a[57124] = actions(1925);
	v->a[57125] = 2;
	v->a[57126] = anon_sym_PLUS_PLUS;
	v->a[57127] = anon_sym_DASH_DASH;
	v->a[57128] = actions(1927);
	v->a[57129] = 2;
	v->a[57130] = anon_sym_DASH2;
	v->a[57131] = anon_sym_PLUS2;
	v->a[57132] = actions(1935);
	v->a[57133] = 2;
	v->a[57134] = sym_number;
	v->a[57135] = aux_sym__simple_variable_name_token1;
	v->a[57136] = state(334);
	v->a[57137] = 3;
	v->a[57138] = sym_string;
	v->a[57139] = sym_simple_expansion;
	small_parse_table_2857(v);
}

void	small_parse_table_2857(t_small_parse_table_array *v)
{
	v->a[57140] = sym_expansion;
	v->a[57141] = state(349);
	v->a[57142] = 8;
	v->a[57143] = sym__arithmetic_expression;
	v->a[57144] = sym_arithmetic_literal;
	v->a[57145] = sym_arithmetic_binary_expression;
	v->a[57146] = sym_arithmetic_ternary_expression;
	v->a[57147] = sym_arithmetic_unary_expression;
	v->a[57148] = sym_arithmetic_postfix_expression;
	v->a[57149] = sym_arithmetic_parenthesized_expression;
	v->a[57150] = sym_command_substitution;
	v->a[57151] = 15;
	v->a[57152] = actions(870);
	v->a[57153] = 1;
	v->a[57154] = sym_comment;
	v->a[57155] = actions(1921);
	v->a[57156] = 1;
	v->a[57157] = anon_sym_LPAREN;
	v->a[57158] = actions(1923);
	v->a[57159] = 1;
	small_parse_table_2858(v);
}

void	small_parse_table_2858(t_small_parse_table_array *v)
{
	v->a[57160] = anon_sym_BANG;
	v->a[57161] = actions(1929);
	v->a[57162] = 1;
	v->a[57163] = anon_sym_TILDE;
	v->a[57164] = actions(1931);
	v->a[57165] = 1;
	v->a[57166] = anon_sym_DOLLAR;
	v->a[57167] = actions(1933);
	v->a[57168] = 1;
	v->a[57169] = anon_sym_DQUOTE;
	v->a[57170] = actions(1937);
	v->a[57171] = 1;
	v->a[57172] = anon_sym_DOLLAR_LBRACE;
	v->a[57173] = actions(1939);
	v->a[57174] = 1;
	v->a[57175] = anon_sym_DOLLAR_LPAREN;
	v->a[57176] = actions(1941);
	v->a[57177] = 1;
	v->a[57178] = anon_sym_BQUOTE;
	v->a[57179] = actions(1943);
	small_parse_table_2859(v);
}

void	small_parse_table_2859(t_small_parse_table_array *v)
{
	v->a[57180] = 1;
	v->a[57181] = sym_variable_name;
	v->a[57182] = actions(1925);
	v->a[57183] = 2;
	v->a[57184] = anon_sym_PLUS_PLUS;
	v->a[57185] = anon_sym_DASH_DASH;
	v->a[57186] = actions(1927);
	v->a[57187] = 2;
	v->a[57188] = anon_sym_DASH2;
	v->a[57189] = anon_sym_PLUS2;
	v->a[57190] = actions(1935);
	v->a[57191] = 2;
	v->a[57192] = sym_number;
	v->a[57193] = aux_sym__simple_variable_name_token1;
	v->a[57194] = state(334);
	v->a[57195] = 3;
	v->a[57196] = sym_string;
	v->a[57197] = sym_simple_expansion;
	v->a[57198] = sym_expansion;
	v->a[57199] = state(348);
	small_parse_table_2860(v);
}

/* EOF small_parse_table_571.c */
