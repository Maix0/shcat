/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1531.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7655(t_small_parse_table_array *v)
{
	v->a[153100] = anon_sym_GT_AMP;
	v->a[153101] = anon_sym_GT_PIPE;
	v->a[153102] = anon_sym_LT_AMP_DASH;
	v->a[153103] = anon_sym_GT_AMP_DASH;
	v->a[153104] = anon_sym_LT_LT_DASH;
	v->a[153105] = aux_sym_heredoc_redirect_token1;
	v->a[153106] = 8;
	v->a[153107] = actions(3);
	v->a[153108] = 1;
	v->a[153109] = sym_comment;
	v->a[153110] = actions(1241);
	v->a[153111] = 1;
	v->a[153112] = sym_file_descriptor;
	v->a[153113] = actions(7143);
	v->a[153114] = 1;
	v->a[153115] = anon_sym_DQUOTE;
	v->a[153116] = actions(7147);
	v->a[153117] = 1;
	v->a[153118] = sym_variable_name;
	v->a[153119] = state(4322);
	small_parse_table_7656(v);
}

void	small_parse_table_7656(t_small_parse_table_array *v)
{
	v->a[153120] = 1;
	v->a[153121] = sym_string;
	v->a[153122] = actions(7145);
	v->a[153123] = 2;
	v->a[153124] = aux_sym__simple_variable_name_token1;
	v->a[153125] = aux_sym__multiline_variable_name_token1;
	v->a[153126] = actions(7141);
	v->a[153127] = 9;
	v->a[153128] = anon_sym_DASH;
	v->a[153129] = anon_sym_STAR;
	v->a[153130] = anon_sym_BANG;
	v->a[153131] = anon_sym_QMARK;
	v->a[153132] = anon_sym_DOLLAR;
	v->a[153133] = anon_sym_POUND;
	v->a[153134] = anon_sym_AT2;
	v->a[153135] = anon_sym_0;
	v->a[153136] = anon_sym__;
	v->a[153137] = actions(1239);
	v->a[153138] = 23;
	v->a[153139] = anon_sym_SEMI;
	small_parse_table_7657(v);
}

void	small_parse_table_7657(t_small_parse_table_array *v)
{
	v->a[153140] = anon_sym_PIPE_PIPE;
	v->a[153141] = anon_sym_AMP_AMP;
	v->a[153142] = anon_sym_PIPE;
	v->a[153143] = anon_sym_AMP;
	v->a[153144] = anon_sym_LT;
	v->a[153145] = anon_sym_GT;
	v->a[153146] = anon_sym_LT_LT;
	v->a[153147] = anon_sym_GT_GT;
	v->a[153148] = anon_sym_esac;
	v->a[153149] = anon_sym_SEMI_SEMI;
	v->a[153150] = anon_sym_SEMI_AMP;
	v->a[153151] = anon_sym_SEMI_SEMI_AMP;
	v->a[153152] = anon_sym_PIPE_AMP;
	v->a[153153] = anon_sym_AMP_GT;
	v->a[153154] = anon_sym_AMP_GT_GT;
	v->a[153155] = anon_sym_LT_AMP;
	v->a[153156] = anon_sym_GT_AMP;
	v->a[153157] = anon_sym_GT_PIPE;
	v->a[153158] = anon_sym_LT_AMP_DASH;
	v->a[153159] = anon_sym_GT_AMP_DASH;
	small_parse_table_7658(v);
}

void	small_parse_table_7658(t_small_parse_table_array *v)
{
	v->a[153160] = anon_sym_LT_LT_DASH;
	v->a[153161] = aux_sym_heredoc_redirect_token1;
	v->a[153162] = 3;
	v->a[153163] = actions(71);
	v->a[153164] = 1;
	v->a[153165] = sym_comment;
	v->a[153166] = actions(6807);
	v->a[153167] = 14;
	v->a[153168] = anon_sym_EQ;
	v->a[153169] = anon_sym_PIPE;
	v->a[153170] = anon_sym_CARET;
	v->a[153171] = anon_sym_AMP;
	v->a[153172] = anon_sym_LT;
	v->a[153173] = anon_sym_GT;
	v->a[153174] = anon_sym_LT_LT;
	v->a[153175] = anon_sym_GT_GT;
	v->a[153176] = anon_sym_PLUS;
	v->a[153177] = anon_sym_DASH;
	v->a[153178] = anon_sym_STAR;
	v->a[153179] = anon_sym_SLASH;
	small_parse_table_7659(v);
}

void	small_parse_table_7659(t_small_parse_table_array *v)
{
	v->a[153180] = anon_sym_PERCENT;
	v->a[153181] = anon_sym_STAR_STAR;
	v->a[153182] = actions(6805);
	v->a[153183] = 24;
	v->a[153184] = sym__concat;
	v->a[153185] = sym_test_operator;
	v->a[153186] = anon_sym_PLUS_PLUS;
	v->a[153187] = anon_sym_DASH_DASH;
	v->a[153188] = anon_sym_PLUS_EQ;
	v->a[153189] = anon_sym_DASH_EQ;
	v->a[153190] = anon_sym_STAR_EQ;
	v->a[153191] = anon_sym_SLASH_EQ;
	v->a[153192] = anon_sym_PERCENT_EQ;
	v->a[153193] = anon_sym_STAR_STAR_EQ;
	v->a[153194] = anon_sym_LT_LT_EQ;
	v->a[153195] = anon_sym_GT_GT_EQ;
	v->a[153196] = anon_sym_AMP_EQ;
	v->a[153197] = anon_sym_CARET_EQ;
	v->a[153198] = anon_sym_PIPE_EQ;
	v->a[153199] = anon_sym_PIPE_PIPE;
	small_parse_table_7660(v);
}

/* EOF small_parse_table_1531.c */
