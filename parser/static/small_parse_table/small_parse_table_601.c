/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_601.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3005(t_small_parse_table_array *v)
{
	v->a[60100] = 6;
	v->a[60101] = actions(3);
	v->a[60102] = 1;
	v->a[60103] = sym_comment;
	v->a[60104] = actions(2431);
	v->a[60105] = 1;
	v->a[60106] = sym_string_content;
	v->a[60107] = actions(2435);
	v->a[60108] = 1;
	v->a[60109] = sym_variable_name;
	v->a[60110] = actions(2455);
	v->a[60111] = 1;
	v->a[60112] = anon_sym_DQUOTE;
	v->a[60113] = actions(2433);
	v->a[60114] = 2;
	v->a[60115] = aux_sym__simple_variable_name_token1;
	v->a[60116] = aux_sym__multiline_variable_name_token1;
	v->a[60117] = actions(2427);
	v->a[60118] = 8;
	v->a[60119] = anon_sym_BANG;
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = anon_sym_DASH;
	v->a[60121] = anon_sym_STAR;
	v->a[60122] = anon_sym_QMARK;
	v->a[60123] = anon_sym_DOLLAR;
	v->a[60124] = anon_sym_POUND;
	v->a[60125] = anon_sym_AT;
	v->a[60126] = anon_sym_0;
	v->a[60127] = 6;
	v->a[60128] = actions(3);
	v->a[60129] = 1;
	v->a[60130] = sym_comment;
	v->a[60131] = actions(2431);
	v->a[60132] = 1;
	v->a[60133] = sym_string_content;
	v->a[60134] = actions(2435);
	v->a[60135] = 1;
	v->a[60136] = sym_variable_name;
	v->a[60137] = actions(2457);
	v->a[60138] = 1;
	v->a[60139] = anon_sym_DQUOTE;
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = actions(2433);
	v->a[60141] = 2;
	v->a[60142] = aux_sym__simple_variable_name_token1;
	v->a[60143] = aux_sym__multiline_variable_name_token1;
	v->a[60144] = actions(2427);
	v->a[60145] = 8;
	v->a[60146] = anon_sym_BANG;
	v->a[60147] = anon_sym_DASH;
	v->a[60148] = anon_sym_STAR;
	v->a[60149] = anon_sym_QMARK;
	v->a[60150] = anon_sym_DOLLAR;
	v->a[60151] = anon_sym_POUND;
	v->a[60152] = anon_sym_AT;
	v->a[60153] = anon_sym_0;
	v->a[60154] = 5;
	v->a[60155] = actions(3);
	v->a[60156] = 1;
	v->a[60157] = sym_comment;
	v->a[60158] = actions(2463);
	v->a[60159] = 1;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = sym_variable_name;
	v->a[60161] = actions(345);
	v->a[60162] = 2;
	v->a[60163] = anon_sym_PIPE;
	v->a[60164] = anon_sym_RPAREN;
	v->a[60165] = actions(2461);
	v->a[60166] = 2;
	v->a[60167] = aux_sym__simple_variable_name_token1;
	v->a[60168] = aux_sym__multiline_variable_name_token1;
	v->a[60169] = actions(2459);
	v->a[60170] = 8;
	v->a[60171] = anon_sym_BANG;
	v->a[60172] = anon_sym_DASH;
	v->a[60173] = anon_sym_STAR;
	v->a[60174] = anon_sym_QMARK;
	v->a[60175] = anon_sym_DOLLAR;
	v->a[60176] = anon_sym_POUND;
	v->a[60177] = anon_sym_AT;
	v->a[60178] = anon_sym_0;
	v->a[60179] = 6;
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = actions(3);
	v->a[60181] = 1;
	v->a[60182] = sym_comment;
	v->a[60183] = actions(2431);
	v->a[60184] = 1;
	v->a[60185] = sym_string_content;
	v->a[60186] = actions(2435);
	v->a[60187] = 1;
	v->a[60188] = sym_variable_name;
	v->a[60189] = actions(2465);
	v->a[60190] = 1;
	v->a[60191] = anon_sym_DQUOTE;
	v->a[60192] = actions(2433);
	v->a[60193] = 2;
	v->a[60194] = aux_sym__simple_variable_name_token1;
	v->a[60195] = aux_sym__multiline_variable_name_token1;
	v->a[60196] = actions(2427);
	v->a[60197] = 8;
	v->a[60198] = anon_sym_BANG;
	v->a[60199] = anon_sym_DASH;
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
