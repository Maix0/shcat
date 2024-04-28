/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3011.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15055(t_small_parse_table_array *v)
{
	v->a[301100] = anon_sym_STAR;
	v->a[301101] = anon_sym_BANG;
	v->a[301102] = anon_sym_QMARK;
	v->a[301103] = anon_sym_DOLLAR;
	v->a[301104] = anon_sym_POUND;
	v->a[301105] = anon_sym_AT2;
	v->a[301106] = anon_sym_0;
	v->a[301107] = anon_sym__;
	v->a[301108] = 6;
	v->a[301109] = actions(3);
	v->a[301110] = 1;
	v->a[301111] = sym_comment;
	v->a[301112] = actions(13114);
	v->a[301113] = 1;
	v->a[301114] = anon_sym_DQUOTE;
	v->a[301115] = actions(13732);
	v->a[301116] = 1;
	v->a[301117] = sym_string_content;
	v->a[301118] = actions(13736);
	v->a[301119] = 1;
	small_parse_table_15056(v);
}

void	small_parse_table_15056(t_small_parse_table_array *v)
{
	v->a[301120] = sym_variable_name;
	v->a[301121] = actions(13734);
	v->a[301122] = 2;
	v->a[301123] = aux_sym__simple_variable_name_token1;
	v->a[301124] = aux_sym__multiline_variable_name_token1;
	v->a[301125] = actions(13730);
	v->a[301126] = 9;
	v->a[301127] = anon_sym_DASH;
	v->a[301128] = anon_sym_STAR;
	v->a[301129] = anon_sym_BANG;
	v->a[301130] = anon_sym_QMARK;
	v->a[301131] = anon_sym_DOLLAR;
	v->a[301132] = anon_sym_POUND;
	v->a[301133] = anon_sym_AT2;
	v->a[301134] = anon_sym_0;
	v->a[301135] = anon_sym__;
	v->a[301136] = 6;
	v->a[301137] = actions(3);
	v->a[301138] = 1;
	v->a[301139] = sym_comment;
	small_parse_table_15057(v);
}

void	small_parse_table_15057(t_small_parse_table_array *v)
{
	v->a[301140] = actions(5061);
	v->a[301141] = 1;
	v->a[301142] = anon_sym_DQUOTE;
	v->a[301143] = actions(5065);
	v->a[301144] = 1;
	v->a[301145] = sym_variable_name;
	v->a[301146] = state(2712);
	v->a[301147] = 1;
	v->a[301148] = sym_string;
	v->a[301149] = actions(5063);
	v->a[301150] = 2;
	v->a[301151] = aux_sym__simple_variable_name_token1;
	v->a[301152] = aux_sym__multiline_variable_name_token1;
	v->a[301153] = actions(5059);
	v->a[301154] = 9;
	v->a[301155] = anon_sym_DASH;
	v->a[301156] = anon_sym_STAR;
	v->a[301157] = anon_sym_BANG;
	v->a[301158] = anon_sym_QMARK;
	v->a[301159] = anon_sym_DOLLAR;
	small_parse_table_15058(v);
}

void	small_parse_table_15058(t_small_parse_table_array *v)
{
	v->a[301160] = anon_sym_POUND;
	v->a[301161] = anon_sym_AT2;
	v->a[301162] = anon_sym_0;
	v->a[301163] = anon_sym__;
	v->a[301164] = 6;
	v->a[301165] = actions(3);
	v->a[301166] = 1;
	v->a[301167] = sym_comment;
	v->a[301168] = actions(13134);
	v->a[301169] = 1;
	v->a[301170] = anon_sym_DQUOTE;
	v->a[301171] = actions(13732);
	v->a[301172] = 1;
	v->a[301173] = sym_string_content;
	v->a[301174] = actions(13736);
	v->a[301175] = 1;
	v->a[301176] = sym_variable_name;
	v->a[301177] = actions(13734);
	v->a[301178] = 2;
	v->a[301179] = aux_sym__simple_variable_name_token1;
	small_parse_table_15059(v);
}

void	small_parse_table_15059(t_small_parse_table_array *v)
{
	v->a[301180] = aux_sym__multiline_variable_name_token1;
	v->a[301181] = actions(13730);
	v->a[301182] = 9;
	v->a[301183] = anon_sym_DASH;
	v->a[301184] = anon_sym_STAR;
	v->a[301185] = anon_sym_BANG;
	v->a[301186] = anon_sym_QMARK;
	v->a[301187] = anon_sym_DOLLAR;
	v->a[301188] = anon_sym_POUND;
	v->a[301189] = anon_sym_AT2;
	v->a[301190] = anon_sym_0;
	v->a[301191] = anon_sym__;
	v->a[301192] = 6;
	v->a[301193] = actions(3);
	v->a[301194] = 1;
	v->a[301195] = sym_comment;
	v->a[301196] = actions(13708);
	v->a[301197] = 1;
	v->a[301198] = anon_sym_DQUOTE;
	v->a[301199] = actions(13732);
	small_parse_table_15060(v);
}

/* EOF small_parse_table_3011.c */
