/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2401.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12005(t_small_parse_table_array *v)
{
	v->a[240100] = anon_sym_esac;
	v->a[240101] = anon_sym_SEMI_SEMI;
	v->a[240102] = anon_sym_SEMI_AMP;
	v->a[240103] = anon_sym_SEMI_SEMI_AMP;
	v->a[240104] = anon_sym_PIPE_AMP;
	v->a[240105] = anon_sym_AMP_GT;
	v->a[240106] = anon_sym_AMP_GT_GT;
	v->a[240107] = anon_sym_LT_AMP;
	v->a[240108] = anon_sym_GT_AMP;
	v->a[240109] = anon_sym_GT_PIPE;
	v->a[240110] = anon_sym_LT_AMP_DASH;
	v->a[240111] = anon_sym_GT_AMP_DASH;
	v->a[240112] = anon_sym_LT_LT_DASH;
	v->a[240113] = 8;
	v->a[240114] = actions(3);
	v->a[240115] = 1;
	v->a[240116] = sym_comment;
	v->a[240117] = actions(1241);
	v->a[240118] = 1;
	v->a[240119] = sym_file_descriptor;
	small_parse_table_12006(v);
}

void	small_parse_table_12006(t_small_parse_table_array *v)
{
	v->a[240120] = actions(5874);
	v->a[240121] = 1;
	v->a[240122] = anon_sym_DQUOTE;
	v->a[240123] = actions(11244);
	v->a[240124] = 1;
	v->a[240125] = sym_variable_name;
	v->a[240126] = state(5696);
	v->a[240127] = 1;
	v->a[240128] = sym_string;
	v->a[240129] = actions(11242);
	v->a[240130] = 2;
	v->a[240131] = aux_sym__simple_variable_name_token1;
	v->a[240132] = aux_sym__multiline_variable_name_token1;
	v->a[240133] = actions(11240);
	v->a[240134] = 9;
	v->a[240135] = anon_sym_DASH;
	v->a[240136] = anon_sym_STAR;
	v->a[240137] = anon_sym_BANG;
	v->a[240138] = anon_sym_QMARK;
	v->a[240139] = anon_sym_DOLLAR;
	small_parse_table_12007(v);
}

void	small_parse_table_12007(t_small_parse_table_array *v)
{
	v->a[240140] = anon_sym_POUND;
	v->a[240141] = anon_sym_AT2;
	v->a[240142] = anon_sym_0;
	v->a[240143] = anon_sym__;
	v->a[240144] = actions(1239);
	v->a[240145] = 14;
	v->a[240146] = anon_sym_PIPE_PIPE;
	v->a[240147] = anon_sym_AMP_AMP;
	v->a[240148] = anon_sym_LT;
	v->a[240149] = anon_sym_GT;
	v->a[240150] = anon_sym_GT_GT;
	v->a[240151] = anon_sym_AMP_GT;
	v->a[240152] = anon_sym_AMP_GT_GT;
	v->a[240153] = anon_sym_LT_AMP;
	v->a[240154] = anon_sym_GT_AMP;
	v->a[240155] = anon_sym_GT_PIPE;
	v->a[240156] = anon_sym_LT_AMP_DASH;
	v->a[240157] = anon_sym_GT_AMP_DASH;
	v->a[240158] = aux_sym_heredoc_redirect_token1;
	v->a[240159] = anon_sym_LT_LT_LT;
	small_parse_table_12008(v);
}

void	small_parse_table_12008(t_small_parse_table_array *v)
{
	v->a[240160] = 6;
	v->a[240161] = actions(3);
	v->a[240162] = 1;
	v->a[240163] = sym_comment;
	v->a[240164] = actions(11276);
	v->a[240165] = 1;
	v->a[240166] = aux_sym_concatenation_token1;
	v->a[240167] = actions(11278);
	v->a[240168] = 1;
	v->a[240169] = sym__concat;
	v->a[240170] = state(4251);
	v->a[240171] = 1;
	v->a[240172] = aux_sym_concatenation_repeat1;
	v->a[240173] = actions(5069);
	v->a[240174] = 3;
	v->a[240175] = sym_file_descriptor;
	v->a[240176] = sym_variable_name;
	v->a[240177] = aux_sym_heredoc_redirect_token1;
	v->a[240178] = actions(5067);
	v->a[240179] = 22;
	small_parse_table_12009(v);
}

void	small_parse_table_12009(t_small_parse_table_array *v)
{
	v->a[240180] = anon_sym_SEMI;
	v->a[240181] = anon_sym_PIPE_PIPE;
	v->a[240182] = anon_sym_AMP_AMP;
	v->a[240183] = anon_sym_PIPE;
	v->a[240184] = anon_sym_AMP;
	v->a[240185] = anon_sym_LT;
	v->a[240186] = anon_sym_GT;
	v->a[240187] = anon_sym_LT_LT;
	v->a[240188] = anon_sym_GT_GT;
	v->a[240189] = anon_sym_esac;
	v->a[240190] = anon_sym_SEMI_SEMI;
	v->a[240191] = anon_sym_SEMI_AMP;
	v->a[240192] = anon_sym_SEMI_SEMI_AMP;
	v->a[240193] = anon_sym_PIPE_AMP;
	v->a[240194] = anon_sym_AMP_GT;
	v->a[240195] = anon_sym_AMP_GT_GT;
	v->a[240196] = anon_sym_LT_AMP;
	v->a[240197] = anon_sym_GT_AMP;
	v->a[240198] = anon_sym_GT_PIPE;
	v->a[240199] = anon_sym_LT_AMP_DASH;
	small_parse_table_12010(v);
}

/* EOF small_parse_table_2401.c */
