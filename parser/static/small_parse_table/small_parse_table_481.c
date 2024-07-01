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
	v->a[48100] = aux_sym_command_repeat1;
	v->a[48101] = actions(182);
	v->a[48102] = 3;
	v->a[48103] = sym_raw_string;
	v->a[48104] = sym_number;
	v->a[48105] = sym_word;
	v->a[48106] = state(385);
	v->a[48107] = 5;
	v->a[48108] = sym_arithmetic_expansion;
	v->a[48109] = sym_string;
	v->a[48110] = sym_simple_expansion;
	v->a[48111] = sym_expansion;
	v->a[48112] = sym_command_substitution;
	v->a[48113] = actions(1252);
	v->a[48114] = 6;
	v->a[48115] = anon_sym_LT;
	v->a[48116] = anon_sym_GT;
	v->a[48117] = anon_sym_GT_GT;
	v->a[48118] = anon_sym_LT_AMP;
	v->a[48119] = anon_sym_GT_AMP;
	small_parse_table_2406(v);
}

void	small_parse_table_2406(t_small_parse_table_array *v)
{
	v->a[48120] = anon_sym_GT_PIPE;
	v->a[48121] = 7;
	v->a[48122] = actions(3);
	v->a[48123] = 1;
	v->a[48124] = sym_comment;
	v->a[48125] = actions(1530);
	v->a[48126] = 1;
	v->a[48127] = sym_file_descriptor;
	v->a[48128] = actions(1533);
	v->a[48129] = 1;
	v->a[48130] = sym_variable_name;
	v->a[48131] = actions(1666);
	v->a[48132] = 1;
	v->a[48133] = anon_sym_RPAREN;
	v->a[48134] = actions(1527);
	v->a[48135] = 8;
	v->a[48136] = anon_sym_LT;
	v->a[48137] = anon_sym_GT;
	v->a[48138] = anon_sym_GT_GT;
	v->a[48139] = anon_sym_LT_AMP;
	small_parse_table_2407(v);
}

void	small_parse_table_2407(t_small_parse_table_array *v)
{
	v->a[48140] = anon_sym_GT_AMP;
	v->a[48141] = anon_sym_GT_PIPE;
	v->a[48142] = anon_sym_LT_AMP_DASH;
	v->a[48143] = anon_sym_GT_AMP_DASH;
	v->a[48144] = actions(1520);
	v->a[48145] = 9;
	v->a[48146] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48147] = anon_sym_DOLLAR;
	v->a[48148] = anon_sym_DQUOTE;
	v->a[48149] = sym_raw_string;
	v->a[48150] = sym_number;
	v->a[48151] = anon_sym_DOLLAR_LBRACE;
	v->a[48152] = anon_sym_DOLLAR_LPAREN;
	v->a[48153] = anon_sym_BQUOTE;
	v->a[48154] = sym_word;
	v->a[48155] = actions(1522);
	v->a[48156] = 9;
	v->a[48157] = anon_sym_PIPE;
	v->a[48158] = anon_sym_SEMI_SEMI;
	v->a[48159] = anon_sym_AMP_AMP;
	small_parse_table_2408(v);
}

void	small_parse_table_2408(t_small_parse_table_array *v)
{
	v->a[48160] = anon_sym_PIPE_PIPE;
	v->a[48161] = anon_sym_LT_LT;
	v->a[48162] = anon_sym_LT_LT_DASH;
	v->a[48163] = aux_sym_heredoc_redirect_token1;
	v->a[48164] = anon_sym_AMP;
	v->a[48165] = anon_sym_SEMI;
	v->a[48166] = 3;
	v->a[48167] = actions(3);
	v->a[48168] = 1;
	v->a[48169] = sym_comment;
	v->a[48170] = actions(602);
	v->a[48171] = 3;
	v->a[48172] = sym_file_descriptor;
	v->a[48173] = sym_variable_name;
	v->a[48174] = ts_builtin_sym_end;
	v->a[48175] = actions(604);
	v->a[48176] = 26;
	v->a[48177] = anon_sym_PIPE;
	v->a[48178] = anon_sym_SEMI_SEMI;
	v->a[48179] = anon_sym_AMP_AMP;
	small_parse_table_2409(v);
}

void	small_parse_table_2409(t_small_parse_table_array *v)
{
	v->a[48180] = anon_sym_PIPE_PIPE;
	v->a[48181] = anon_sym_LT;
	v->a[48182] = anon_sym_GT;
	v->a[48183] = anon_sym_GT_GT;
	v->a[48184] = anon_sym_LT_AMP;
	v->a[48185] = anon_sym_GT_AMP;
	v->a[48186] = anon_sym_GT_PIPE;
	v->a[48187] = anon_sym_LT_AMP_DASH;
	v->a[48188] = anon_sym_GT_AMP_DASH;
	v->a[48189] = anon_sym_LT_LT;
	v->a[48190] = anon_sym_LT_LT_DASH;
	v->a[48191] = aux_sym_heredoc_redirect_token1;
	v->a[48192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48193] = anon_sym_AMP;
	v->a[48194] = anon_sym_DOLLAR;
	v->a[48195] = anon_sym_DQUOTE;
	v->a[48196] = sym_raw_string;
	v->a[48197] = sym_number;
	v->a[48198] = anon_sym_DOLLAR_LBRACE;
	v->a[48199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2410(v);
}

/* EOF small_parse_table_481.c */
