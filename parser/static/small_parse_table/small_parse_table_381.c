/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_381.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1905(t_small_parse_table_array *v)
{
	v->a[38100] = anon_sym_DOLLAR;
	v->a[38101] = anon_sym_DQUOTE;
	v->a[38102] = sym_raw_string;
	v->a[38103] = sym_number;
	v->a[38104] = anon_sym_DOLLAR_LBRACE;
	v->a[38105] = anon_sym_DOLLAR_LPAREN;
	v->a[38106] = anon_sym_BQUOTE;
	v->a[38107] = sym_word;
	v->a[38108] = anon_sym_SEMI;
	v->a[38109] = 17;
	v->a[38110] = actions(1074);
	v->a[38111] = 1;
	v->a[38112] = sym_comment;
	v->a[38113] = actions(1136);
	v->a[38114] = 1;
	v->a[38115] = anon_sym_PIPE;
	v->a[38116] = actions(1138);
	v->a[38117] = 1;
	v->a[38118] = anon_sym_AMP_AMP;
	v->a[38119] = actions(1140);
	small_parse_table_1906(v);
}

void	small_parse_table_1906(t_small_parse_table_array *v)
{
	v->a[38120] = 1;
	v->a[38121] = anon_sym_PIPE_PIPE;
	v->a[38122] = actions(1150);
	v->a[38123] = 1;
	v->a[38124] = anon_sym_CARET;
	v->a[38125] = actions(1152);
	v->a[38126] = 1;
	v->a[38127] = anon_sym_AMP;
	v->a[38128] = actions(1239);
	v->a[38129] = 1;
	v->a[38130] = anon_sym_EQ;
	v->a[38131] = actions(1241);
	v->a[38132] = 1;
	v->a[38133] = anon_sym_QMARK;
	v->a[38134] = actions(1392);
	v->a[38135] = 1;
	v->a[38136] = anon_sym_RPAREN_RPAREN;
	v->a[38137] = actions(1144);
	v->a[38138] = 2;
	v->a[38139] = anon_sym_LT;
	small_parse_table_1907(v);
}

void	small_parse_table_1907(t_small_parse_table_array *v)
{
	v->a[38140] = anon_sym_GT;
	v->a[38141] = actions(1146);
	v->a[38142] = 2;
	v->a[38143] = anon_sym_GT_GT;
	v->a[38144] = anon_sym_LT_LT;
	v->a[38145] = actions(1154);
	v->a[38146] = 2;
	v->a[38147] = anon_sym_EQ_EQ;
	v->a[38148] = anon_sym_BANG_EQ;
	v->a[38149] = actions(1156);
	v->a[38150] = 2;
	v->a[38151] = anon_sym_LT_EQ;
	v->a[38152] = anon_sym_GT_EQ;
	v->a[38153] = actions(1158);
	v->a[38154] = 2;
	v->a[38155] = anon_sym_PLUS;
	v->a[38156] = anon_sym_DASH;
	v->a[38157] = actions(1162);
	v->a[38158] = 2;
	v->a[38159] = anon_sym_PLUS_PLUS2;
	small_parse_table_1908(v);
}

void	small_parse_table_1908(t_small_parse_table_array *v)
{
	v->a[38160] = anon_sym_DASH_DASH2;
	v->a[38161] = actions(1160);
	v->a[38162] = 3;
	v->a[38163] = anon_sym_STAR;
	v->a[38164] = anon_sym_SLASH;
	v->a[38165] = anon_sym_PERCENT;
	v->a[38166] = actions(1252);
	v->a[38167] = 10;
	v->a[38168] = anon_sym_PLUS_EQ;
	v->a[38169] = anon_sym_DASH_EQ;
	v->a[38170] = anon_sym_STAR_EQ;
	v->a[38171] = anon_sym_SLASH_EQ;
	v->a[38172] = anon_sym_PERCENT_EQ;
	v->a[38173] = anon_sym_LT_LT_EQ;
	v->a[38174] = anon_sym_GT_GT_EQ;
	v->a[38175] = anon_sym_AMP_EQ;
	v->a[38176] = anon_sym_CARET_EQ;
	v->a[38177] = anon_sym_PIPE_EQ;
	v->a[38178] = 6;
	v->a[38179] = actions(3);
	small_parse_table_1909(v);
}

void	small_parse_table_1909(t_small_parse_table_array *v)
{
	v->a[38180] = 1;
	v->a[38181] = sym_comment;
	v->a[38182] = actions(1174);
	v->a[38183] = 1;
	v->a[38184] = sym_file_descriptor;
	v->a[38185] = actions(1254);
	v->a[38186] = 1;
	v->a[38187] = aux_sym_concatenation_token1;
	v->a[38188] = actions(1394);
	v->a[38189] = 1;
	v->a[38190] = sym__concat;
	v->a[38191] = state(428);
	v->a[38192] = 1;
	v->a[38193] = aux_sym_concatenation_repeat1;
	v->a[38194] = actions(1172);
	v->a[38195] = 29;
	v->a[38196] = anon_sym_esac;
	v->a[38197] = anon_sym_PIPE;
	v->a[38198] = anon_sym_SEMI_SEMI;
	v->a[38199] = anon_sym_AMP_AMP;
	small_parse_table_1910(v);
}

/* EOF small_parse_table_381.c */
