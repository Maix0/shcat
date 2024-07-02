/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_481.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2405(t_small_parse_table_array *v)
{
	v->a[48100] = anon_sym_DOLLAR_LBRACE;
	v->a[48101] = actions(1748);
	v->a[48102] = 1;
	v->a[48103] = anon_sym_DOLLAR_LPAREN;
	v->a[48104] = actions(1750);
	v->a[48105] = 1;
	v->a[48106] = anon_sym_BQUOTE;
	v->a[48107] = actions(1752);
	v->a[48108] = 1;
	v->a[48109] = sym_variable_name;
	v->a[48110] = actions(1734);
	v->a[48111] = 2;
	v->a[48112] = anon_sym_PLUS_PLUS;
	v->a[48113] = anon_sym_DASH_DASH;
	v->a[48114] = actions(1736);
	v->a[48115] = 2;
	v->a[48116] = anon_sym_DASH2;
	v->a[48117] = anon_sym_PLUS2;
	v->a[48118] = actions(1744);
	v->a[48119] = 2;
	small_parse_table_2406(v);
}

void	small_parse_table_2406(t_small_parse_table_array *v)
{
	v->a[48120] = sym_number;
	v->a[48121] = aux_sym__simple_variable_name_token1;
	v->a[48122] = state(264);
	v->a[48123] = 3;
	v->a[48124] = sym_string;
	v->a[48125] = sym_simple_expansion;
	v->a[48126] = sym_expansion;
	v->a[48127] = state(299);
	v->a[48128] = 8;
	v->a[48129] = sym__arithmetic_expression;
	v->a[48130] = sym_arithmetic_literal;
	v->a[48131] = sym_arithmetic_binary_expression;
	v->a[48132] = sym_arithmetic_ternary_expression;
	v->a[48133] = sym_arithmetic_unary_expression;
	v->a[48134] = sym_arithmetic_postfix_expression;
	v->a[48135] = sym_arithmetic_parenthesized_expression;
	v->a[48136] = sym_command_substitution;
	v->a[48137] = 15;
	v->a[48138] = actions(680);
	v->a[48139] = 1;
	small_parse_table_2407(v);
}

void	small_parse_table_2407(t_small_parse_table_array *v)
{
	v->a[48140] = sym_comment;
	v->a[48141] = actions(1730);
	v->a[48142] = 1;
	v->a[48143] = anon_sym_LPAREN;
	v->a[48144] = actions(1732);
	v->a[48145] = 1;
	v->a[48146] = anon_sym_BANG;
	v->a[48147] = actions(1738);
	v->a[48148] = 1;
	v->a[48149] = anon_sym_TILDE;
	v->a[48150] = actions(1740);
	v->a[48151] = 1;
	v->a[48152] = anon_sym_DOLLAR;
	v->a[48153] = actions(1742);
	v->a[48154] = 1;
	v->a[48155] = anon_sym_DQUOTE;
	v->a[48156] = actions(1746);
	v->a[48157] = 1;
	v->a[48158] = anon_sym_DOLLAR_LBRACE;
	v->a[48159] = actions(1748);
	small_parse_table_2408(v);
}

void	small_parse_table_2408(t_small_parse_table_array *v)
{
	v->a[48160] = 1;
	v->a[48161] = anon_sym_DOLLAR_LPAREN;
	v->a[48162] = actions(1750);
	v->a[48163] = 1;
	v->a[48164] = anon_sym_BQUOTE;
	v->a[48165] = actions(1752);
	v->a[48166] = 1;
	v->a[48167] = sym_variable_name;
	v->a[48168] = actions(1734);
	v->a[48169] = 2;
	v->a[48170] = anon_sym_PLUS_PLUS;
	v->a[48171] = anon_sym_DASH_DASH;
	v->a[48172] = actions(1736);
	v->a[48173] = 2;
	v->a[48174] = anon_sym_DASH2;
	v->a[48175] = anon_sym_PLUS2;
	v->a[48176] = actions(1744);
	v->a[48177] = 2;
	v->a[48178] = sym_number;
	v->a[48179] = aux_sym__simple_variable_name_token1;
	small_parse_table_2409(v);
}

void	small_parse_table_2409(t_small_parse_table_array *v)
{
	v->a[48180] = state(264);
	v->a[48181] = 3;
	v->a[48182] = sym_string;
	v->a[48183] = sym_simple_expansion;
	v->a[48184] = sym_expansion;
	v->a[48185] = state(318);
	v->a[48186] = 8;
	v->a[48187] = sym__arithmetic_expression;
	v->a[48188] = sym_arithmetic_literal;
	v->a[48189] = sym_arithmetic_binary_expression;
	v->a[48190] = sym_arithmetic_ternary_expression;
	v->a[48191] = sym_arithmetic_unary_expression;
	v->a[48192] = sym_arithmetic_postfix_expression;
	v->a[48193] = sym_arithmetic_parenthesized_expression;
	v->a[48194] = sym_command_substitution;
	v->a[48195] = 15;
	v->a[48196] = actions(680);
	v->a[48197] = 1;
	v->a[48198] = sym_comment;
	v->a[48199] = actions(1730);
	small_parse_table_2410(v);
}

/* EOF small_parse_table_481.c */
