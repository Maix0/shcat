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
	v->a[48100] = anon_sym_PIPE_AMP;
	v->a[48101] = anon_sym_AMP_AMP;
	v->a[48102] = anon_sym_PIPE_PIPE;
	v->a[48103] = anon_sym_LT;
	v->a[48104] = anon_sym_GT;
	v->a[48105] = anon_sym_GT_GT;
	v->a[48106] = anon_sym_AMP_GT;
	v->a[48107] = anon_sym_AMP_GT_GT;
	v->a[48108] = anon_sym_LT_AMP;
	v->a[48109] = anon_sym_GT_AMP;
	v->a[48110] = anon_sym_GT_PIPE;
	v->a[48111] = anon_sym_LT_AMP_DASH;
	v->a[48112] = anon_sym_GT_AMP_DASH;
	v->a[48113] = anon_sym_LT_LT;
	v->a[48114] = anon_sym_LT_LT_DASH;
	v->a[48115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48116] = anon_sym_AMP;
	v->a[48117] = aux_sym_concatenation_token1;
	v->a[48118] = anon_sym_DOLLAR;
	v->a[48119] = sym__special_character;
	small_parse_table_2406(v);
}

void	small_parse_table_2406(t_small_parse_table_array *v)
{
	v->a[48120] = anon_sym_DQUOTE;
	v->a[48121] = sym_raw_string;
	v->a[48122] = aux_sym_number_token1;
	v->a[48123] = aux_sym_number_token2;
	v->a[48124] = anon_sym_DOLLAR_LBRACE;
	v->a[48125] = anon_sym_DOLLAR_LPAREN;
	v->a[48126] = anon_sym_BQUOTE;
	v->a[48127] = anon_sym_DOLLAR_BQUOTE;
	v->a[48128] = sym_word;
	v->a[48129] = anon_sym_SEMI;
	v->a[48130] = 6;
	v->a[48131] = actions(3);
	v->a[48132] = 1;
	v->a[48133] = sym_comment;
	v->a[48134] = actions(3672);
	v->a[48135] = 1;
	v->a[48136] = sym_variable_name;
	v->a[48137] = actions(3670);
	v->a[48138] = 2;
	v->a[48139] = aux_sym__simple_variable_name_token1;
	small_parse_table_2407(v);
}

void	small_parse_table_2407(t_small_parse_table_array *v)
{
	v->a[48140] = aux_sym__multiline_variable_name_token1;
	v->a[48141] = actions(828);
	v->a[48142] = 3;
	v->a[48143] = sym_file_descriptor;
	v->a[48144] = sym_test_operator;
	v->a[48145] = sym__brace_start;
	v->a[48146] = actions(3668);
	v->a[48147] = 9;
	v->a[48148] = anon_sym_BANG;
	v->a[48149] = anon_sym_DASH;
	v->a[48150] = anon_sym_STAR;
	v->a[48151] = anon_sym_QMARK;
	v->a[48152] = anon_sym_DOLLAR;
	v->a[48153] = anon_sym_POUND;
	v->a[48154] = anon_sym_AT;
	v->a[48155] = anon_sym_0;
	v->a[48156] = anon_sym__;
	v->a[48157] = actions(826);
	v->a[48158] = 24;
	v->a[48159] = anon_sym_AMP_AMP;
	small_parse_table_2408(v);
}

void	small_parse_table_2408(t_small_parse_table_array *v)
{
	v->a[48160] = anon_sym_PIPE_PIPE;
	v->a[48161] = anon_sym_LT;
	v->a[48162] = anon_sym_GT;
	v->a[48163] = anon_sym_GT_GT;
	v->a[48164] = anon_sym_AMP_GT;
	v->a[48165] = anon_sym_AMP_GT_GT;
	v->a[48166] = anon_sym_LT_AMP;
	v->a[48167] = anon_sym_GT_AMP;
	v->a[48168] = anon_sym_GT_PIPE;
	v->a[48169] = anon_sym_LT_AMP_DASH;
	v->a[48170] = anon_sym_GT_AMP_DASH;
	v->a[48171] = aux_sym_heredoc_redirect_token1;
	v->a[48172] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48173] = sym__special_character;
	v->a[48174] = anon_sym_DQUOTE;
	v->a[48175] = sym_raw_string;
	v->a[48176] = aux_sym_number_token1;
	v->a[48177] = aux_sym_number_token2;
	v->a[48178] = anon_sym_DOLLAR_LBRACE;
	v->a[48179] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2409(v);
}

void	small_parse_table_2409(t_small_parse_table_array *v)
{
	v->a[48180] = anon_sym_BQUOTE;
	v->a[48181] = anon_sym_DOLLAR_BQUOTE;
	v->a[48182] = sym_word;
	v->a[48183] = 3;
	v->a[48184] = actions(3);
	v->a[48185] = 1;
	v->a[48186] = sym_comment;
	v->a[48187] = actions(2908);
	v->a[48188] = 6;
	v->a[48189] = sym_file_descriptor;
	v->a[48190] = sym__concat;
	v->a[48191] = sym_test_operator;
	v->a[48192] = sym__brace_start;
	v->a[48193] = ts_builtin_sym_end;
	v->a[48194] = aux_sym_heredoc_redirect_token1;
	v->a[48195] = actions(2906);
	v->a[48196] = 33;
	v->a[48197] = anon_sym_PIPE;
	v->a[48198] = anon_sym_SEMI_SEMI;
	v->a[48199] = anon_sym_PIPE_AMP;
	small_parse_table_2410(v);
}

/* EOF small_parse_table_481.c */
