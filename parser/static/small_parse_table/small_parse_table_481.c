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
	v->a[48100] = anon_sym_BQUOTE;
	v->a[48101] = anon_sym_DOLLAR_BQUOTE;
	v->a[48102] = anon_sym_LT_LPAREN;
	v->a[48103] = anon_sym_GT_LPAREN;
	v->a[48104] = sym_word;
	v->a[48105] = 8;
	v->a[48106] = actions(3);
	v->a[48107] = 1;
	v->a[48108] = sym_comment;
	v->a[48109] = actions(1241);
	v->a[48110] = 1;
	v->a[48111] = sym_test_operator;
	v->a[48112] = actions(5086);
	v->a[48113] = 1;
	v->a[48114] = anon_sym_DQUOTE;
	v->a[48115] = actions(5090);
	v->a[48116] = 1;
	v->a[48117] = sym_variable_name;
	v->a[48118] = state(2442);
	v->a[48119] = 1;
	small_parse_table_2406(v);
}

void	small_parse_table_2406(t_small_parse_table_array *v)
{
	v->a[48120] = sym_string;
	v->a[48121] = actions(5088);
	v->a[48122] = 2;
	v->a[48123] = aux_sym__simple_variable_name_token1;
	v->a[48124] = aux_sym__multiline_variable_name_token1;
	v->a[48125] = actions(5084);
	v->a[48126] = 9;
	v->a[48127] = anon_sym_DASH;
	v->a[48128] = anon_sym_STAR;
	v->a[48129] = anon_sym_BANG;
	v->a[48130] = anon_sym_QMARK;
	v->a[48131] = anon_sym_DOLLAR;
	v->a[48132] = anon_sym_POUND;
	v->a[48133] = anon_sym_AT2;
	v->a[48134] = anon_sym_0;
	v->a[48135] = anon_sym__;
	v->a[48136] = actions(1239);
	v->a[48137] = 33;
	v->a[48138] = anon_sym_RPAREN_RPAREN;
	v->a[48139] = anon_sym_EQ;
	small_parse_table_2407(v);
}

void	small_parse_table_2407(t_small_parse_table_array *v)
{
	v->a[48140] = anon_sym_PLUS_PLUS;
	v->a[48141] = anon_sym_DASH_DASH;
	v->a[48142] = anon_sym_PLUS_EQ;
	v->a[48143] = anon_sym_DASH_EQ;
	v->a[48144] = anon_sym_STAR_EQ;
	v->a[48145] = anon_sym_SLASH_EQ;
	v->a[48146] = anon_sym_PERCENT_EQ;
	v->a[48147] = anon_sym_STAR_STAR_EQ;
	v->a[48148] = anon_sym_LT_LT_EQ;
	v->a[48149] = anon_sym_GT_GT_EQ;
	v->a[48150] = anon_sym_AMP_EQ;
	v->a[48151] = anon_sym_CARET_EQ;
	v->a[48152] = anon_sym_PIPE_EQ;
	v->a[48153] = anon_sym_PIPE_PIPE;
	v->a[48154] = anon_sym_AMP_AMP;
	v->a[48155] = anon_sym_PIPE;
	v->a[48156] = anon_sym_CARET;
	v->a[48157] = anon_sym_AMP;
	v->a[48158] = anon_sym_EQ_EQ;
	v->a[48159] = anon_sym_BANG_EQ;
	small_parse_table_2408(v);
}

void	small_parse_table_2408(t_small_parse_table_array *v)
{
	v->a[48160] = anon_sym_LT;
	v->a[48161] = anon_sym_GT;
	v->a[48162] = anon_sym_LT_EQ;
	v->a[48163] = anon_sym_GT_EQ;
	v->a[48164] = anon_sym_LT_LT;
	v->a[48165] = anon_sym_GT_GT;
	v->a[48166] = anon_sym_PLUS;
	v->a[48167] = anon_sym_SLASH;
	v->a[48168] = anon_sym_PERCENT;
	v->a[48169] = anon_sym_STAR_STAR;
	v->a[48170] = anon_sym_EQ_TILDE;
	v->a[48171] = 8;
	v->a[48172] = actions(3);
	v->a[48173] = 1;
	v->a[48174] = sym_comment;
	v->a[48175] = actions(5361);
	v->a[48176] = 1;
	v->a[48177] = anon_sym_DQUOTE;
	v->a[48178] = actions(5365);
	v->a[48179] = 1;
	small_parse_table_2409(v);
}

void	small_parse_table_2409(t_small_parse_table_array *v)
{
	v->a[48180] = sym_variable_name;
	v->a[48181] = state(2850);
	v->a[48182] = 1;
	v->a[48183] = sym_string;
	v->a[48184] = actions(5363);
	v->a[48185] = 2;
	v->a[48186] = aux_sym__simple_variable_name_token1;
	v->a[48187] = aux_sym__multiline_variable_name_token1;
	v->a[48188] = actions(1241);
	v->a[48189] = 3;
	v->a[48190] = sym_file_descriptor;
	v->a[48191] = sym_test_operator;
	v->a[48192] = sym__brace_start;
	v->a[48193] = actions(5359);
	v->a[48194] = 9;
	v->a[48195] = anon_sym_DASH;
	v->a[48196] = anon_sym_STAR;
	v->a[48197] = anon_sym_BANG;
	v->a[48198] = anon_sym_QMARK;
	v->a[48199] = anon_sym_DOLLAR;
	small_parse_table_2410(v);
}

/* EOF small_parse_table_481.c */
