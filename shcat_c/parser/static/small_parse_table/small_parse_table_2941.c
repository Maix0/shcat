/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2941.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14705(t_small_parse_table_array *v)
{
	v->a[294100] = anon_sym__;
	v->a[294101] = actions(13050);
	v->a[294102] = 6;
	v->a[294103] = anon_sym_DASH;
	v->a[294104] = anon_sym_STAR;
	v->a[294105] = anon_sym_BANG;
	v->a[294106] = anon_sym_QMARK;
	v->a[294107] = anon_sym_POUND;
	v->a[294108] = anon_sym_AT2;
	v->a[294109] = 3;
	v->a[294110] = actions(3);
	v->a[294111] = 1;
	v->a[294112] = sym_comment;
	v->a[294113] = actions(1263);
	v->a[294114] = 2;
	v->a[294115] = sym_file_descriptor;
	v->a[294116] = aux_sym_heredoc_redirect_token1;
	v->a[294117] = actions(1261);
	v->a[294118] = 14;
	v->a[294119] = anon_sym_PIPE_PIPE;
	small_parse_table_14706(v);
}

void	small_parse_table_14706(t_small_parse_table_array *v)
{
	v->a[294120] = anon_sym_AMP_AMP;
	v->a[294121] = anon_sym_LT;
	v->a[294122] = anon_sym_GT;
	v->a[294123] = anon_sym_GT_GT;
	v->a[294124] = anon_sym_AMP_GT;
	v->a[294125] = anon_sym_AMP_GT_GT;
	v->a[294126] = anon_sym_LT_AMP;
	v->a[294127] = anon_sym_GT_AMP;
	v->a[294128] = anon_sym_GT_PIPE;
	v->a[294129] = anon_sym_LT_AMP_DASH;
	v->a[294130] = anon_sym_GT_AMP_DASH;
	v->a[294131] = anon_sym_LT_LT_LT;
	v->a[294132] = sym__special_character;
	v->a[294133] = 12;
	v->a[294134] = actions(3);
	v->a[294135] = 1;
	v->a[294136] = sym_comment;
	v->a[294137] = actions(13060);
	v->a[294138] = 1;
	v->a[294139] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_14707(v);
}

void	small_parse_table_14707(t_small_parse_table_array *v)
{
	v->a[294140] = actions(13062);
	v->a[294141] = 1;
	v->a[294142] = anon_sym_DOLLAR;
	v->a[294143] = actions(13064);
	v->a[294144] = 1;
	v->a[294145] = anon_sym_DQUOTE;
	v->a[294146] = actions(13066);
	v->a[294147] = 1;
	v->a[294148] = sym_string_content;
	v->a[294149] = actions(13068);
	v->a[294150] = 1;
	v->a[294151] = anon_sym_DOLLAR_LBRACE;
	v->a[294152] = actions(13070);
	v->a[294153] = 1;
	v->a[294154] = anon_sym_DOLLAR_LPAREN;
	v->a[294155] = actions(13072);
	v->a[294156] = 1;
	v->a[294157] = anon_sym_BQUOTE;
	v->a[294158] = actions(13074);
	v->a[294159] = 1;
	small_parse_table_14708(v);
}

void	small_parse_table_14708(t_small_parse_table_array *v)
{
	v->a[294160] = anon_sym_DOLLAR_BQUOTE;
	v->a[294161] = state(5768);
	v->a[294162] = 1;
	v->a[294163] = aux_sym_string_repeat1;
	v->a[294164] = actions(13058);
	v->a[294165] = 2;
	v->a[294166] = anon_sym_LPAREN_LPAREN;
	v->a[294167] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[294168] = state(6127);
	v->a[294169] = 4;
	v->a[294170] = sym_arithmetic_expansion;
	v->a[294171] = sym_simple_expansion;
	v->a[294172] = sym_expansion;
	v->a[294173] = sym_command_substitution;
	v->a[294174] = 12;
	v->a[294175] = actions(3);
	v->a[294176] = 1;
	v->a[294177] = sym_comment;
	v->a[294178] = actions(13060);
	v->a[294179] = 1;
	small_parse_table_14709(v);
}

void	small_parse_table_14709(t_small_parse_table_array *v)
{
	v->a[294180] = anon_sym_DOLLAR_LBRACK;
	v->a[294181] = actions(13066);
	v->a[294182] = 1;
	v->a[294183] = sym_string_content;
	v->a[294184] = actions(13068);
	v->a[294185] = 1;
	v->a[294186] = anon_sym_DOLLAR_LBRACE;
	v->a[294187] = actions(13070);
	v->a[294188] = 1;
	v->a[294189] = anon_sym_DOLLAR_LPAREN;
	v->a[294190] = actions(13072);
	v->a[294191] = 1;
	v->a[294192] = anon_sym_BQUOTE;
	v->a[294193] = actions(13074);
	v->a[294194] = 1;
	v->a[294195] = anon_sym_DOLLAR_BQUOTE;
	v->a[294196] = actions(13076);
	v->a[294197] = 1;
	v->a[294198] = anon_sym_DOLLAR;
	v->a[294199] = actions(13078);
	small_parse_table_14710(v);
}

/* EOF small_parse_table_2941.c */
