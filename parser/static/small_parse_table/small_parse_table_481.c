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
	v->a[48100] = 8;
	v->a[48101] = actions(3);
	v->a[48102] = 1;
	v->a[48103] = sym_comment;
	v->a[48104] = actions(597);
	v->a[48105] = 1;
	v->a[48106] = anon_sym_LT_LT;
	v->a[48107] = actions(1926);
	v->a[48108] = 1;
	v->a[48109] = aux_sym_heredoc_redirect_token1;
	v->a[48110] = state(281);
	v->a[48111] = 1;
	v->a[48112] = sym_terminator;
	v->a[48113] = actions(769);
	v->a[48114] = 2;
	v->a[48115] = anon_sym_AMP_AMP;
	v->a[48116] = anon_sym_PIPE_PIPE;
	v->a[48117] = actions(823);
	v->a[48118] = 2;
	v->a[48119] = anon_sym_SEMI_SEMI;
	small_parse_table_2406(v);
}

void	small_parse_table_2406(t_small_parse_table_array *v)
{
	v->a[48120] = anon_sym_SEMI;
	v->a[48121] = actions(1924);
	v->a[48122] = 3;
	v->a[48123] = anon_sym_LT;
	v->a[48124] = anon_sym_GT;
	v->a[48125] = anon_sym_GT_GT;
	v->a[48126] = state(1040);
	v->a[48127] = 3;
	v->a[48128] = sym_file_redirect;
	v->a[48129] = sym_heredoc_redirect;
	v->a[48130] = aux_sym_redirected_statement_repeat1;
	v->a[48131] = 6;
	v->a[48132] = actions(3);
	v->a[48133] = 1;
	v->a[48134] = sym_comment;
	v->a[48135] = actions(2013);
	v->a[48136] = 1;
	v->a[48137] = sym_string_content;
	v->a[48138] = actions(2017);
	v->a[48139] = 1;
	small_parse_table_2407(v);
}

void	small_parse_table_2407(t_small_parse_table_array *v)
{
	v->a[48140] = sym_variable_name;
	v->a[48141] = actions(2233);
	v->a[48142] = 1;
	v->a[48143] = anon_sym_DQUOTE;
	v->a[48144] = actions(2015);
	v->a[48145] = 2;
	v->a[48146] = aux_sym__simple_variable_name_token1;
	v->a[48147] = aux_sym__multiline_variable_name_token1;
	v->a[48148] = actions(2009);
	v->a[48149] = 8;
	v->a[48150] = anon_sym_BANG;
	v->a[48151] = anon_sym_DASH;
	v->a[48152] = anon_sym_STAR;
	v->a[48153] = anon_sym_QMARK;
	v->a[48154] = anon_sym_DOLLAR;
	v->a[48155] = anon_sym_POUND;
	v->a[48156] = anon_sym_AT;
	v->a[48157] = anon_sym_0;
	v->a[48158] = 6;
	v->a[48159] = actions(3);
	small_parse_table_2408(v);
}

void	small_parse_table_2408(t_small_parse_table_array *v)
{
	v->a[48160] = 1;
	v->a[48161] = sym_comment;
	v->a[48162] = actions(2013);
	v->a[48163] = 1;
	v->a[48164] = sym_string_content;
	v->a[48165] = actions(2017);
	v->a[48166] = 1;
	v->a[48167] = sym_variable_name;
	v->a[48168] = actions(2235);
	v->a[48169] = 1;
	v->a[48170] = anon_sym_DQUOTE;
	v->a[48171] = actions(2015);
	v->a[48172] = 2;
	v->a[48173] = aux_sym__simple_variable_name_token1;
	v->a[48174] = aux_sym__multiline_variable_name_token1;
	v->a[48175] = actions(2009);
	v->a[48176] = 8;
	v->a[48177] = anon_sym_BANG;
	v->a[48178] = anon_sym_DASH;
	v->a[48179] = anon_sym_STAR;
	small_parse_table_2409(v);
}

void	small_parse_table_2409(t_small_parse_table_array *v)
{
	v->a[48180] = anon_sym_QMARK;
	v->a[48181] = anon_sym_DOLLAR;
	v->a[48182] = anon_sym_POUND;
	v->a[48183] = anon_sym_AT;
	v->a[48184] = anon_sym_0;
	v->a[48185] = 6;
	v->a[48186] = actions(3);
	v->a[48187] = 1;
	v->a[48188] = sym_comment;
	v->a[48189] = actions(2013);
	v->a[48190] = 1;
	v->a[48191] = sym_string_content;
	v->a[48192] = actions(2017);
	v->a[48193] = 1;
	v->a[48194] = sym_variable_name;
	v->a[48195] = actions(2237);
	v->a[48196] = 1;
	v->a[48197] = anon_sym_DQUOTE;
	v->a[48198] = actions(2015);
	v->a[48199] = 2;
	small_parse_table_2410(v);
}

/* EOF small_parse_table_481.c */
