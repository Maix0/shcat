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
	v->a[50100] = anon_sym_PIPE;
	v->a[50101] = anon_sym_RPAREN;
	v->a[50102] = anon_sym_SEMI_SEMI;
	v->a[50103] = anon_sym_AMP_AMP;
	v->a[50104] = anon_sym_PIPE_PIPE;
	v->a[50105] = anon_sym_LT;
	v->a[50106] = anon_sym_GT;
	v->a[50107] = anon_sym_GT_GT;
	v->a[50108] = anon_sym_AMP_GT;
	v->a[50109] = anon_sym_AMP_GT_GT;
	v->a[50110] = anon_sym_LT_AMP;
	v->a[50111] = anon_sym_GT_AMP;
	v->a[50112] = anon_sym_GT_PIPE;
	v->a[50113] = anon_sym_LT_AMP_DASH;
	v->a[50114] = anon_sym_GT_AMP_DASH;
	v->a[50115] = anon_sym_LT_LT;
	v->a[50116] = anon_sym_LT_LT_DASH;
	v->a[50117] = aux_sym_heredoc_redirect_token1;
	v->a[50118] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50119] = anon_sym_AMP;
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = anon_sym_DOLLAR;
	v->a[50121] = anon_sym_DQUOTE;
	v->a[50122] = sym_raw_string;
	v->a[50123] = sym_number;
	v->a[50124] = anon_sym_DOLLAR_LBRACE;
	v->a[50125] = anon_sym_DOLLAR_LPAREN;
	v->a[50126] = anon_sym_BQUOTE;
	v->a[50127] = sym_word;
	v->a[50128] = anon_sym_SEMI;
	v->a[50129] = 6;
	v->a[50130] = actions(3);
	v->a[50131] = 1;
	v->a[50132] = sym_comment;
	v->a[50133] = actions(1092);
	v->a[50134] = 1;
	v->a[50135] = aux_sym_concatenation_token1;
	v->a[50136] = actions(1686);
	v->a[50137] = 1;
	v->a[50138] = sym__concat;
	v->a[50139] = state(338);
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = 1;
	v->a[50141] = aux_sym_concatenation_repeat1;
	v->a[50142] = actions(961);
	v->a[50143] = 2;
	v->a[50144] = sym_file_descriptor;
	v->a[50145] = sym_variable_name;
	v->a[50146] = actions(957);
	v->a[50147] = 25;
	v->a[50148] = anon_sym_PIPE;
	v->a[50149] = anon_sym_AMP_AMP;
	v->a[50150] = anon_sym_PIPE_PIPE;
	v->a[50151] = anon_sym_LT;
	v->a[50152] = anon_sym_GT;
	v->a[50153] = anon_sym_GT_GT;
	v->a[50154] = anon_sym_AMP_GT;
	v->a[50155] = anon_sym_AMP_GT_GT;
	v->a[50156] = anon_sym_LT_AMP;
	v->a[50157] = anon_sym_GT_AMP;
	v->a[50158] = anon_sym_GT_PIPE;
	v->a[50159] = anon_sym_LT_AMP_DASH;
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = anon_sym_GT_AMP_DASH;
	v->a[50161] = anon_sym_LT_LT;
	v->a[50162] = anon_sym_LT_LT_DASH;
	v->a[50163] = aux_sym_heredoc_redirect_token1;
	v->a[50164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50165] = anon_sym_DOLLAR;
	v->a[50166] = anon_sym_DQUOTE;
	v->a[50167] = sym_raw_string;
	v->a[50168] = sym_number;
	v->a[50169] = anon_sym_DOLLAR_LBRACE;
	v->a[50170] = anon_sym_DOLLAR_LPAREN;
	v->a[50171] = anon_sym_BQUOTE;
	v->a[50172] = sym_word;
	v->a[50173] = 4;
	v->a[50174] = actions(3);
	v->a[50175] = 1;
	v->a[50176] = sym_comment;
	v->a[50177] = actions(1688);
	v->a[50178] = 1;
	v->a[50179] = ts_builtin_sym_end;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = actions(1524);
	v->a[50181] = 2;
	v->a[50182] = sym_file_descriptor;
	v->a[50183] = sym_variable_name;
	v->a[50184] = actions(1520);
	v->a[50185] = 27;
	v->a[50186] = anon_sym_for;
	v->a[50187] = anon_sym_while;
	v->a[50188] = anon_sym_until;
	v->a[50189] = anon_sym_if;
	v->a[50190] = anon_sym_case;
	v->a[50191] = anon_sym_LPAREN;
	v->a[50192] = anon_sym_LBRACE;
	v->a[50193] = anon_sym_BANG;
	v->a[50194] = anon_sym_LT;
	v->a[50195] = anon_sym_GT;
	v->a[50196] = anon_sym_GT_GT;
	v->a[50197] = anon_sym_AMP_GT;
	v->a[50198] = anon_sym_AMP_GT_GT;
	v->a[50199] = anon_sym_LT_AMP;
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
