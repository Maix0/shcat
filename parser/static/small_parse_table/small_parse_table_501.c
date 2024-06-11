/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_501.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2505(t_small_parse_table_array *v)
{
	v->a[50100] = sym_file_descriptor;
	v->a[50101] = actions(1568);
	v->a[50102] = 1;
	v->a[50103] = sym_variable_name;
	v->a[50104] = actions(1650);
	v->a[50105] = 1;
	v->a[50106] = anon_sym_RPAREN;
	v->a[50107] = actions(1558);
	v->a[50108] = 9;
	v->a[50109] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50110] = anon_sym_DOLLAR;
	v->a[50111] = anon_sym_DQUOTE;
	v->a[50112] = sym_raw_string;
	v->a[50113] = sym_number;
	v->a[50114] = anon_sym_DOLLAR_LBRACE;
	v->a[50115] = anon_sym_DOLLAR_LPAREN;
	v->a[50116] = anon_sym_BQUOTE;
	v->a[50117] = sym_word;
	v->a[50118] = actions(1560);
	v->a[50119] = 9;
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = anon_sym_PIPE;
	v->a[50121] = anon_sym_SEMI_SEMI;
	v->a[50122] = anon_sym_AMP_AMP;
	v->a[50123] = anon_sym_PIPE_PIPE;
	v->a[50124] = anon_sym_LT_LT;
	v->a[50125] = anon_sym_LT_LT_DASH;
	v->a[50126] = aux_sym_heredoc_redirect_token1;
	v->a[50127] = anon_sym_AMP;
	v->a[50128] = anon_sym_SEMI;
	v->a[50129] = actions(1562);
	v->a[50130] = 10;
	v->a[50131] = anon_sym_LT;
	v->a[50132] = anon_sym_GT;
	v->a[50133] = anon_sym_GT_GT;
	v->a[50134] = anon_sym_AMP_GT;
	v->a[50135] = anon_sym_AMP_GT_GT;
	v->a[50136] = anon_sym_LT_AMP;
	v->a[50137] = anon_sym_GT_AMP;
	v->a[50138] = anon_sym_GT_PIPE;
	v->a[50139] = anon_sym_LT_AMP_DASH;
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = anon_sym_GT_AMP_DASH;
	v->a[50141] = 4;
	v->a[50142] = actions(3);
	v->a[50143] = 1;
	v->a[50144] = sym_comment;
	v->a[50145] = actions(1554);
	v->a[50146] = 2;
	v->a[50147] = anon_sym_RPAREN;
	v->a[50148] = anon_sym_SEMI_SEMI;
	v->a[50149] = actions(1556);
	v->a[50150] = 2;
	v->a[50151] = sym_file_descriptor;
	v->a[50152] = sym_variable_name;
	v->a[50153] = actions(1552);
	v->a[50154] = 27;
	v->a[50155] = anon_sym_for;
	v->a[50156] = anon_sym_while;
	v->a[50157] = anon_sym_until;
	v->a[50158] = anon_sym_if;
	v->a[50159] = anon_sym_case;
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = anon_sym_LPAREN;
	v->a[50161] = anon_sym_LBRACE;
	v->a[50162] = anon_sym_BANG;
	v->a[50163] = anon_sym_LT;
	v->a[50164] = anon_sym_GT;
	v->a[50165] = anon_sym_GT_GT;
	v->a[50166] = anon_sym_AMP_GT;
	v->a[50167] = anon_sym_AMP_GT_GT;
	v->a[50168] = anon_sym_LT_AMP;
	v->a[50169] = anon_sym_GT_AMP;
	v->a[50170] = anon_sym_GT_PIPE;
	v->a[50171] = anon_sym_LT_AMP_DASH;
	v->a[50172] = anon_sym_GT_AMP_DASH;
	v->a[50173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50174] = anon_sym_DOLLAR;
	v->a[50175] = anon_sym_DQUOTE;
	v->a[50176] = sym_raw_string;
	v->a[50177] = sym_number;
	v->a[50178] = anon_sym_DOLLAR_LBRACE;
	v->a[50179] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = anon_sym_BQUOTE;
	v->a[50181] = sym_word;
	v->a[50182] = 7;
	v->a[50183] = actions(3);
	v->a[50184] = 1;
	v->a[50185] = sym_comment;
	v->a[50186] = actions(989);
	v->a[50187] = 1;
	v->a[50188] = aux_sym_concatenation_token1;
	v->a[50189] = actions(993);
	v->a[50190] = 1;
	v->a[50191] = sym__concat;
	v->a[50192] = actions(1653);
	v->a[50193] = 1;
	v->a[50194] = anon_sym_LPAREN;
	v->a[50195] = state(826);
	v->a[50196] = 1;
	v->a[50197] = aux_sym_concatenation_repeat1;
	v->a[50198] = actions(991);
	v->a[50199] = 2;
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
