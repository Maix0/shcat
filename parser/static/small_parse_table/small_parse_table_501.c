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
	v->a[50100] = actions(1719);
	v->a[50101] = 1;
	v->a[50102] = aux_sym_heredoc_redirect_token1;
	v->a[50103] = state(622);
	v->a[50104] = 1;
	v->a[50105] = sym_terminator;
	v->a[50106] = actions(850);
	v->a[50107] = 2;
	v->a[50108] = anon_sym_LT_LT;
	v->a[50109] = anon_sym_LT_LT_DASH;
	v->a[50110] = actions(898);
	v->a[50111] = 2;
	v->a[50112] = anon_sym_AMP_AMP;
	v->a[50113] = anon_sym_PIPE_PIPE;
	v->a[50114] = actions(914);
	v->a[50115] = 2;
	v->a[50116] = anon_sym_SEMI_SEMI;
	v->a[50117] = anon_sym_SEMI;
	v->a[50118] = state(984);
	v->a[50119] = 3;
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = sym_file_redirect;
	v->a[50121] = sym_heredoc_redirect;
	v->a[50122] = aux_sym_redirected_statement_repeat1;
	v->a[50123] = actions(1676);
	v->a[50124] = 7;
	v->a[50125] = anon_sym_LT;
	v->a[50126] = anon_sym_GT;
	v->a[50127] = anon_sym_GT_GT;
	v->a[50128] = anon_sym_LT_AMP;
	v->a[50129] = anon_sym_GT_AMP;
	v->a[50130] = anon_sym_GT_PIPE;
	v->a[50131] = anon_sym_LT_GT;
	v->a[50132] = 9;
	v->a[50133] = actions(3);
	v->a[50134] = 1;
	v->a[50135] = sym_comment;
	v->a[50136] = actions(746);
	v->a[50137] = 1;
	v->a[50138] = anon_sym_PIPE;
	v->a[50139] = actions(1721);
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = 1;
	v->a[50141] = aux_sym_heredoc_redirect_token1;
	v->a[50142] = state(562);
	v->a[50143] = 1;
	v->a[50144] = sym_terminator;
	v->a[50145] = actions(850);
	v->a[50146] = 2;
	v->a[50147] = anon_sym_LT_LT;
	v->a[50148] = anon_sym_LT_LT_DASH;
	v->a[50149] = actions(898);
	v->a[50150] = 2;
	v->a[50151] = anon_sym_AMP_AMP;
	v->a[50152] = anon_sym_PIPE_PIPE;
	v->a[50153] = actions(956);
	v->a[50154] = 2;
	v->a[50155] = anon_sym_SEMI_SEMI;
	v->a[50156] = anon_sym_SEMI;
	v->a[50157] = state(984);
	v->a[50158] = 3;
	v->a[50159] = sym_file_redirect;
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = sym_heredoc_redirect;
	v->a[50161] = aux_sym_redirected_statement_repeat1;
	v->a[50162] = actions(1676);
	v->a[50163] = 7;
	v->a[50164] = anon_sym_LT;
	v->a[50165] = anon_sym_GT;
	v->a[50166] = anon_sym_GT_GT;
	v->a[50167] = anon_sym_LT_AMP;
	v->a[50168] = anon_sym_GT_AMP;
	v->a[50169] = anon_sym_GT_PIPE;
	v->a[50170] = anon_sym_LT_GT;
	v->a[50171] = 9;
	v->a[50172] = actions(3);
	v->a[50173] = 1;
	v->a[50174] = sym_comment;
	v->a[50175] = actions(865);
	v->a[50176] = 1;
	v->a[50177] = ts_builtin_sym_end;
	v->a[50178] = actions(1605);
	v->a[50179] = 1;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = aux_sym_heredoc_redirect_token1;
	v->a[50181] = state(625);
	v->a[50182] = 1;
	v->a[50183] = sym_terminator;
	v->a[50184] = actions(846);
	v->a[50185] = 2;
	v->a[50186] = anon_sym_SEMI_SEMI;
	v->a[50187] = anon_sym_SEMI;
	v->a[50188] = actions(848);
	v->a[50189] = 2;
	v->a[50190] = anon_sym_AMP_AMP;
	v->a[50191] = anon_sym_PIPE_PIPE;
	v->a[50192] = actions(850);
	v->a[50193] = 2;
	v->a[50194] = anon_sym_LT_LT;
	v->a[50195] = anon_sym_LT_LT_DASH;
	v->a[50196] = state(924);
	v->a[50197] = 3;
	v->a[50198] = sym_file_redirect;
	v->a[50199] = sym_heredoc_redirect;
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
