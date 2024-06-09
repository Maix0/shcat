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
	v->a[57100] = anon_sym_STAR;
	v->a[57101] = anon_sym_QMARK;
	v->a[57102] = anon_sym_DOLLAR;
	v->a[57103] = anon_sym_POUND;
	v->a[57104] = anon_sym_AT;
	v->a[57105] = anon_sym_0;
	v->a[57106] = anon_sym__;
	v->a[57107] = actions(407);
	v->a[57108] = 15;
	v->a[57109] = anon_sym_PIPE;
	v->a[57110] = anon_sym_AMP_AMP;
	v->a[57111] = anon_sym_PIPE_PIPE;
	v->a[57112] = anon_sym_LT;
	v->a[57113] = anon_sym_GT;
	v->a[57114] = anon_sym_GT_GT;
	v->a[57115] = anon_sym_AMP_GT;
	v->a[57116] = anon_sym_AMP_GT_GT;
	v->a[57117] = anon_sym_LT_AMP;
	v->a[57118] = anon_sym_GT_AMP;
	v->a[57119] = anon_sym_GT_PIPE;
	small_parse_table_2856(v);
}

void	small_parse_table_2856(t_small_parse_table_array *v)
{
	v->a[57120] = anon_sym_LT_AMP_DASH;
	v->a[57121] = anon_sym_GT_AMP_DASH;
	v->a[57122] = anon_sym_LT_LT;
	v->a[57123] = anon_sym_LT_LT_DASH;
	v->a[57124] = 17;
	v->a[57125] = actions(1404);
	v->a[57126] = 1;
	v->a[57127] = sym_comment;
	v->a[57128] = actions(2077);
	v->a[57129] = 1;
	v->a[57130] = anon_sym_LPAREN;
	v->a[57131] = actions(2079);
	v->a[57132] = 1;
	v->a[57133] = anon_sym_BANG;
	v->a[57134] = actions(2085);
	v->a[57135] = 1;
	v->a[57136] = anon_sym_TILDE;
	v->a[57137] = actions(2087);
	v->a[57138] = 1;
	v->a[57139] = anon_sym_DOLLAR;
	small_parse_table_2857(v);
}

void	small_parse_table_2857(t_small_parse_table_array *v)
{
	v->a[57140] = actions(2089);
	v->a[57141] = 1;
	v->a[57142] = anon_sym_DQUOTE;
	v->a[57143] = actions(2091);
	v->a[57144] = 1;
	v->a[57145] = aux_sym_number_token1;
	v->a[57146] = actions(2093);
	v->a[57147] = 1;
	v->a[57148] = aux_sym_number_token2;
	v->a[57149] = actions(2095);
	v->a[57150] = 1;
	v->a[57151] = anon_sym_DOLLAR_LBRACE;
	v->a[57152] = actions(2097);
	v->a[57153] = 1;
	v->a[57154] = anon_sym_DOLLAR_LPAREN;
	v->a[57155] = actions(2099);
	v->a[57156] = 1;
	v->a[57157] = anon_sym_BQUOTE;
	v->a[57158] = actions(2101);
	v->a[57159] = 1;
	small_parse_table_2858(v);
}

void	small_parse_table_2858(t_small_parse_table_array *v)
{
	v->a[57160] = aux_sym__simple_variable_name_token1;
	v->a[57161] = actions(2103);
	v->a[57162] = 1;
	v->a[57163] = sym_variable_name;
	v->a[57164] = actions(2081);
	v->a[57165] = 2;
	v->a[57166] = anon_sym_PLUS_PLUS;
	v->a[57167] = anon_sym_DASH_DASH;
	v->a[57168] = actions(2083);
	v->a[57169] = 2;
	v->a[57170] = anon_sym_DASH2;
	v->a[57171] = anon_sym_PLUS2;
	v->a[57172] = state(588);
	v->a[57173] = 4;
	v->a[57174] = sym_string;
	v->a[57175] = sym_number;
	v->a[57176] = sym_simple_expansion;
	v->a[57177] = sym_expansion;
	v->a[57178] = state(622);
	v->a[57179] = 8;
	small_parse_table_2859(v);
}

void	small_parse_table_2859(t_small_parse_table_array *v)
{
	v->a[57180] = sym__arithmetic_expression;
	v->a[57181] = sym_arithmetic_literal;
	v->a[57182] = sym_arithmetic_binary_expression;
	v->a[57183] = sym_arithmetic_ternary_expression;
	v->a[57184] = sym_arithmetic_unary_expression;
	v->a[57185] = sym_arithmetic_postfix_expression;
	v->a[57186] = sym_arithmetic_parenthesized_expression;
	v->a[57187] = sym_command_substitution;
	v->a[57188] = 17;
	v->a[57189] = actions(1404);
	v->a[57190] = 1;
	v->a[57191] = sym_comment;
	v->a[57192] = actions(1979);
	v->a[57193] = 1;
	v->a[57194] = anon_sym_LPAREN;
	v->a[57195] = actions(1981);
	v->a[57196] = 1;
	v->a[57197] = anon_sym_BANG;
	v->a[57198] = actions(1989);
	v->a[57199] = 1;
	small_parse_table_2860(v);
}

/* EOF small_parse_table_571.c */
