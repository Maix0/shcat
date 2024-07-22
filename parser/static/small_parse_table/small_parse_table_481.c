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
	v->a[48100] = sym_word;
	v->a[48101] = 3;
	v->a[48102] = actions(3);
	v->a[48103] = 1;
	v->a[48104] = sym_comment;
	v->a[48105] = actions(694);
	v->a[48106] = 3;
	v->a[48107] = sym_file_descriptor;
	v->a[48108] = sym__concat;
	v->a[48109] = sym__bare_dollar;
	v->a[48110] = actions(692);
	v->a[48111] = 23;
	v->a[48112] = anon_sym_LPAREN;
	v->a[48113] = anon_sym_PIPE;
	v->a[48114] = anon_sym_AMP_AMP;
	v->a[48115] = anon_sym_PIPE_PIPE;
	v->a[48116] = anon_sym_LT;
	v->a[48117] = anon_sym_GT;
	v->a[48118] = anon_sym_GT_GT;
	v->a[48119] = anon_sym_LT_AMP;
	small_parse_table_2406(v);
}

void	small_parse_table_2406(t_small_parse_table_array *v)
{
	v->a[48120] = anon_sym_GT_AMP;
	v->a[48121] = anon_sym_GT_PIPE;
	v->a[48122] = anon_sym_LT_GT;
	v->a[48123] = anon_sym_LT_LT;
	v->a[48124] = anon_sym_LT_LT_DASH;
	v->a[48125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48126] = aux_sym_concatenation_token1;
	v->a[48127] = anon_sym_DOLLAR;
	v->a[48128] = anon_sym_DQUOTE;
	v->a[48129] = sym_raw_string;
	v->a[48130] = sym_number;
	v->a[48131] = anon_sym_DOLLAR_LBRACE;
	v->a[48132] = anon_sym_DOLLAR_LPAREN;
	v->a[48133] = anon_sym_BQUOTE;
	v->a[48134] = sym_word;
	v->a[48135] = 15;
	v->a[48136] = actions(501);
	v->a[48137] = 1;
	v->a[48138] = sym_comment;
	v->a[48139] = actions(1692);
	small_parse_table_2407(v);
}

void	small_parse_table_2407(t_small_parse_table_array *v)
{
	v->a[48140] = 1;
	v->a[48141] = anon_sym_LPAREN;
	v->a[48142] = actions(1694);
	v->a[48143] = 1;
	v->a[48144] = anon_sym_BANG;
	v->a[48145] = actions(1700);
	v->a[48146] = 1;
	v->a[48147] = anon_sym_TILDE;
	v->a[48148] = actions(1702);
	v->a[48149] = 1;
	v->a[48150] = anon_sym_DOLLAR;
	v->a[48151] = actions(1704);
	v->a[48152] = 1;
	v->a[48153] = anon_sym_DQUOTE;
	v->a[48154] = actions(1708);
	v->a[48155] = 1;
	v->a[48156] = anon_sym_DOLLAR_LBRACE;
	v->a[48157] = actions(1710);
	v->a[48158] = 1;
	v->a[48159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2408(v);
}

void	small_parse_table_2408(t_small_parse_table_array *v)
{
	v->a[48160] = actions(1712);
	v->a[48161] = 1;
	v->a[48162] = anon_sym_BQUOTE;
	v->a[48163] = actions(1714);
	v->a[48164] = 1;
	v->a[48165] = sym_variable_name;
	v->a[48166] = actions(1696);
	v->a[48167] = 2;
	v->a[48168] = anon_sym_PLUS_PLUS;
	v->a[48169] = anon_sym_DASH_DASH;
	v->a[48170] = actions(1698);
	v->a[48171] = 2;
	v->a[48172] = anon_sym_DASH2;
	v->a[48173] = anon_sym_PLUS2;
	v->a[48174] = actions(1706);
	v->a[48175] = 2;
	v->a[48176] = sym_number;
	v->a[48177] = aux_sym__simple_variable_name_token1;
	v->a[48178] = state(238);
	v->a[48179] = 3;
	small_parse_table_2409(v);
}

void	small_parse_table_2409(t_small_parse_table_array *v)
{
	v->a[48180] = sym_string;
	v->a[48181] = sym_simple_expansion;
	v->a[48182] = sym_expansion;
	v->a[48183] = state(266);
	v->a[48184] = 8;
	v->a[48185] = sym__arithmetic_expression;
	v->a[48186] = sym_arithmetic_literal;
	v->a[48187] = sym_arithmetic_binary_expression;
	v->a[48188] = sym_arithmetic_ternary_expression;
	v->a[48189] = sym_arithmetic_unary_expression;
	v->a[48190] = sym_arithmetic_postfix_expression;
	v->a[48191] = sym_arithmetic_parenthesized_expression;
	v->a[48192] = sym_command_substitution;
	v->a[48193] = 18;
	v->a[48194] = actions(3);
	v->a[48195] = 1;
	v->a[48196] = sym_comment;
	v->a[48197] = actions(1720);
	v->a[48198] = 1;
	v->a[48199] = anon_sym_LPAREN;
	small_parse_table_2410(v);
}

/* EOF small_parse_table_481.c */
