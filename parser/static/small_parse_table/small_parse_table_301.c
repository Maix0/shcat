/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_301.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1505(t_small_parse_table_array *v)
{
	v->a[30100] = sym_raw_string;
	v->a[30101] = sym_number;
	v->a[30102] = anon_sym_DOLLAR_LBRACE;
	v->a[30103] = anon_sym_DOLLAR_LPAREN;
	v->a[30104] = anon_sym_BQUOTE;
	v->a[30105] = sym_word;
	v->a[30106] = 3;
	v->a[30107] = actions(3);
	v->a[30108] = 1;
	v->a[30109] = sym_comment;
	v->a[30110] = actions(1050);
	v->a[30111] = 1;
	v->a[30112] = sym__concat;
	v->a[30113] = actions(1052);
	v->a[30114] = 21;
	v->a[30115] = anon_sym_PIPE;
	v->a[30116] = anon_sym_RPAREN;
	v->a[30117] = anon_sym_SEMI_SEMI;
	v->a[30118] = anon_sym_AMP_AMP;
	v->a[30119] = anon_sym_PIPE_PIPE;
	small_parse_table_1506(v);
}

void	small_parse_table_1506(t_small_parse_table_array *v)
{
	v->a[30120] = anon_sym_LT;
	v->a[30121] = anon_sym_GT;
	v->a[30122] = anon_sym_GT_GT;
	v->a[30123] = anon_sym_LT_LT;
	v->a[30124] = aux_sym_heredoc_redirect_token1;
	v->a[30125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30126] = aux_sym_concatenation_token1;
	v->a[30127] = anon_sym_DOLLAR;
	v->a[30128] = anon_sym_DQUOTE;
	v->a[30129] = sym_raw_string;
	v->a[30130] = sym_number;
	v->a[30131] = anon_sym_DOLLAR_LBRACE;
	v->a[30132] = anon_sym_DOLLAR_LPAREN;
	v->a[30133] = anon_sym_BQUOTE;
	v->a[30134] = sym_word;
	v->a[30135] = anon_sym_SEMI;
	v->a[30136] = 5;
	v->a[30137] = actions(3);
	v->a[30138] = 1;
	v->a[30139] = sym_comment;
	small_parse_table_1507(v);
}

void	small_parse_table_1507(t_small_parse_table_array *v)
{
	v->a[30140] = actions(865);
	v->a[30141] = 1;
	v->a[30142] = sym_variable_name;
	v->a[30143] = actions(863);
	v->a[30144] = 2;
	v->a[30145] = aux_sym__simple_variable_name_token1;
	v->a[30146] = aux_sym__multiline_variable_name_token1;
	v->a[30147] = actions(861);
	v->a[30148] = 8;
	v->a[30149] = anon_sym_BANG;
	v->a[30150] = anon_sym_DASH;
	v->a[30151] = anon_sym_STAR;
	v->a[30152] = anon_sym_QMARK;
	v->a[30153] = anon_sym_DOLLAR;
	v->a[30154] = anon_sym_POUND;
	v->a[30155] = anon_sym_AT;
	v->a[30156] = anon_sym_0;
	v->a[30157] = actions(343);
	v->a[30158] = 11;
	v->a[30159] = anon_sym_SEMI_SEMI;
	small_parse_table_1508(v);
}

void	small_parse_table_1508(t_small_parse_table_array *v)
{
	v->a[30160] = aux_sym_heredoc_redirect_token1;
	v->a[30161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30162] = anon_sym_DQUOTE;
	v->a[30163] = sym_raw_string;
	v->a[30164] = sym_number;
	v->a[30165] = anon_sym_DOLLAR_LBRACE;
	v->a[30166] = anon_sym_DOLLAR_LPAREN;
	v->a[30167] = anon_sym_BQUOTE;
	v->a[30168] = sym_word;
	v->a[30169] = anon_sym_SEMI;
	v->a[30170] = 3;
	v->a[30171] = actions(3);
	v->a[30172] = 1;
	v->a[30173] = sym_comment;
	v->a[30174] = actions(1126);
	v->a[30175] = 2;
	v->a[30176] = sym__concat;
	v->a[30177] = ts_builtin_sym_end;
	v->a[30178] = actions(1124);
	v->a[30179] = 20;
	small_parse_table_1509(v);
}

void	small_parse_table_1509(t_small_parse_table_array *v)
{
	v->a[30180] = anon_sym_PIPE;
	v->a[30181] = anon_sym_SEMI_SEMI;
	v->a[30182] = anon_sym_AMP_AMP;
	v->a[30183] = anon_sym_PIPE_PIPE;
	v->a[30184] = anon_sym_LT;
	v->a[30185] = anon_sym_GT;
	v->a[30186] = anon_sym_GT_GT;
	v->a[30187] = anon_sym_LT_LT;
	v->a[30188] = aux_sym_heredoc_redirect_token1;
	v->a[30189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30190] = aux_sym_concatenation_token1;
	v->a[30191] = anon_sym_DOLLAR;
	v->a[30192] = anon_sym_DQUOTE;
	v->a[30193] = sym_raw_string;
	v->a[30194] = sym_number;
	v->a[30195] = anon_sym_DOLLAR_LBRACE;
	v->a[30196] = anon_sym_DOLLAR_LPAREN;
	v->a[30197] = anon_sym_BQUOTE;
	v->a[30198] = sym_word;
	v->a[30199] = anon_sym_SEMI;
	small_parse_table_1510(v);
}

/* EOF small_parse_table_301.c */
