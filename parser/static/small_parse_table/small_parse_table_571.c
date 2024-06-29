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
	v->a[57100] = actions(1855);
	v->a[57101] = 1;
	v->a[57102] = sym_variable_name;
	v->a[57103] = actions(1933);
	v->a[57104] = 1;
	v->a[57105] = anon_sym_RPAREN_RPAREN;
	v->a[57106] = actions(1837);
	v->a[57107] = 2;
	v->a[57108] = anon_sym_PLUS_PLUS;
	v->a[57109] = anon_sym_DASH_DASH;
	v->a[57110] = actions(1839);
	v->a[57111] = 2;
	v->a[57112] = anon_sym_DASH2;
	v->a[57113] = anon_sym_PLUS2;
	v->a[57114] = actions(1847);
	v->a[57115] = 2;
	v->a[57116] = sym_number;
	v->a[57117] = aux_sym__simple_variable_name_token1;
	v->a[57118] = state(370);
	v->a[57119] = 3;
	small_parse_table_2856(v);
}

void	small_parse_table_2856(t_small_parse_table_array *v)
{
	v->a[57120] = sym_string;
	v->a[57121] = sym_simple_expansion;
	v->a[57122] = sym_expansion;
	v->a[57123] = state(452);
	v->a[57124] = 8;
	v->a[57125] = sym__arithmetic_expression;
	v->a[57126] = sym_arithmetic_literal;
	v->a[57127] = sym_arithmetic_binary_expression;
	v->a[57128] = sym_arithmetic_ternary_expression;
	v->a[57129] = sym_arithmetic_unary_expression;
	v->a[57130] = sym_arithmetic_postfix_expression;
	v->a[57131] = sym_arithmetic_parenthesized_expression;
	v->a[57132] = sym_command_substitution;
	v->a[57133] = 16;
	v->a[57134] = actions(1074);
	v->a[57135] = 1;
	v->a[57136] = sym_comment;
	v->a[57137] = actions(1831);
	v->a[57138] = 1;
	v->a[57139] = anon_sym_LPAREN;
	small_parse_table_2857(v);
}

void	small_parse_table_2857(t_small_parse_table_array *v)
{
	v->a[57140] = actions(1833);
	v->a[57141] = 1;
	v->a[57142] = anon_sym_BANG;
	v->a[57143] = actions(1841);
	v->a[57144] = 1;
	v->a[57145] = anon_sym_TILDE;
	v->a[57146] = actions(1843);
	v->a[57147] = 1;
	v->a[57148] = anon_sym_DOLLAR;
	v->a[57149] = actions(1845);
	v->a[57150] = 1;
	v->a[57151] = anon_sym_DQUOTE;
	v->a[57152] = actions(1849);
	v->a[57153] = 1;
	v->a[57154] = anon_sym_DOLLAR_LBRACE;
	v->a[57155] = actions(1851);
	v->a[57156] = 1;
	v->a[57157] = anon_sym_DOLLAR_LPAREN;
	v->a[57158] = actions(1853);
	v->a[57159] = 1;
	small_parse_table_2858(v);
}

void	small_parse_table_2858(t_small_parse_table_array *v)
{
	v->a[57160] = anon_sym_BQUOTE;
	v->a[57161] = actions(1855);
	v->a[57162] = 1;
	v->a[57163] = sym_variable_name;
	v->a[57164] = actions(1935);
	v->a[57165] = 1;
	v->a[57166] = anon_sym_RPAREN_RPAREN;
	v->a[57167] = actions(1837);
	v->a[57168] = 2;
	v->a[57169] = anon_sym_PLUS_PLUS;
	v->a[57170] = anon_sym_DASH_DASH;
	v->a[57171] = actions(1839);
	v->a[57172] = 2;
	v->a[57173] = anon_sym_DASH2;
	v->a[57174] = anon_sym_PLUS2;
	v->a[57175] = actions(1847);
	v->a[57176] = 2;
	v->a[57177] = sym_number;
	v->a[57178] = aux_sym__simple_variable_name_token1;
	v->a[57179] = state(370);
	small_parse_table_2859(v);
}

void	small_parse_table_2859(t_small_parse_table_array *v)
{
	v->a[57180] = 3;
	v->a[57181] = sym_string;
	v->a[57182] = sym_simple_expansion;
	v->a[57183] = sym_expansion;
	v->a[57184] = state(585);
	v->a[57185] = 8;
	v->a[57186] = sym__arithmetic_expression;
	v->a[57187] = sym_arithmetic_literal;
	v->a[57188] = sym_arithmetic_binary_expression;
	v->a[57189] = sym_arithmetic_ternary_expression;
	v->a[57190] = sym_arithmetic_unary_expression;
	v->a[57191] = sym_arithmetic_postfix_expression;
	v->a[57192] = sym_arithmetic_parenthesized_expression;
	v->a[57193] = sym_command_substitution;
	v->a[57194] = 16;
	v->a[57195] = actions(1074);
	v->a[57196] = 1;
	v->a[57197] = sym_comment;
	v->a[57198] = actions(1831);
	v->a[57199] = 1;
	small_parse_table_2860(v);
}

/* EOF small_parse_table_571.c */
