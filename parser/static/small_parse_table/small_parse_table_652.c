/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_652.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3260(t_small_parse_table_array *v)
{
	v->a[65200] = 1;
	v->a[65201] = sym_extglob_pattern;
	v->a[65202] = actions(2586);
	v->a[65203] = 10;
	v->a[65204] = anon_sym_LPAREN;
	v->a[65205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65206] = anon_sym_DOLLAR;
	v->a[65207] = anon_sym_DQUOTE;
	v->a[65208] = sym_raw_string;
	v->a[65209] = sym_number;
	v->a[65210] = anon_sym_DOLLAR_LBRACE;
	v->a[65211] = anon_sym_DOLLAR_LPAREN;
	v->a[65212] = anon_sym_BQUOTE;
	v->a[65213] = sym_word;
	v->a[65214] = 3;
	v->a[65215] = actions(3);
	v->a[65216] = 1;
	v->a[65217] = sym_comment;
	v->a[65218] = actions(2590);
	v->a[65219] = 1;
	small_parse_table_3261(v);
}

void	small_parse_table_3261(t_small_parse_table_array *v)
{
	v->a[65220] = sym_extglob_pattern;
	v->a[65221] = actions(2586);
	v->a[65222] = 10;
	v->a[65223] = anon_sym_LPAREN;
	v->a[65224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65225] = anon_sym_DOLLAR;
	v->a[65226] = anon_sym_DQUOTE;
	v->a[65227] = sym_raw_string;
	v->a[65228] = sym_number;
	v->a[65229] = anon_sym_DOLLAR_LBRACE;
	v->a[65230] = anon_sym_DOLLAR_LPAREN;
	v->a[65231] = anon_sym_BQUOTE;
	v->a[65232] = sym_word;
	v->a[65233] = 4;
	v->a[65234] = actions(3);
	v->a[65235] = 1;
	v->a[65236] = sym_comment;
	v->a[65237] = actions(952);
	v->a[65238] = 1;
	v->a[65239] = sym_variable_name;
	small_parse_table_3262(v);
}

void	small_parse_table_3262(t_small_parse_table_array *v)
{
	v->a[65240] = actions(950);
	v->a[65241] = 2;
	v->a[65242] = aux_sym__simple_variable_name_token1;
	v->a[65243] = aux_sym__multiline_variable_name_token1;
	v->a[65244] = actions(948);
	v->a[65245] = 8;
	v->a[65246] = anon_sym_BANG;
	v->a[65247] = anon_sym_DASH;
	v->a[65248] = anon_sym_STAR;
	v->a[65249] = anon_sym_QMARK;
	v->a[65250] = anon_sym_DOLLAR;
	v->a[65251] = anon_sym_POUND;
	v->a[65252] = anon_sym_AT;
	v->a[65253] = anon_sym_0;
	v->a[65254] = 4;
	v->a[65255] = actions(3);
	v->a[65256] = 1;
	v->a[65257] = sym_comment;
	v->a[65258] = actions(381);
	v->a[65259] = 1;
	small_parse_table_3263(v);
}

void	small_parse_table_3263(t_small_parse_table_array *v)
{
	v->a[65260] = sym_variable_name;
	v->a[65261] = actions(379);
	v->a[65262] = 2;
	v->a[65263] = aux_sym__simple_variable_name_token1;
	v->a[65264] = aux_sym__multiline_variable_name_token1;
	v->a[65265] = actions(377);
	v->a[65266] = 8;
	v->a[65267] = anon_sym_BANG;
	v->a[65268] = anon_sym_DASH;
	v->a[65269] = anon_sym_STAR;
	v->a[65270] = anon_sym_QMARK;
	v->a[65271] = anon_sym_DOLLAR;
	v->a[65272] = anon_sym_POUND;
	v->a[65273] = anon_sym_AT;
	v->a[65274] = anon_sym_0;
	v->a[65275] = 4;
	v->a[65276] = actions(3);
	v->a[65277] = 1;
	v->a[65278] = sym_comment;
	v->a[65279] = actions(2879);
	small_parse_table_3264(v);
}

void	small_parse_table_3264(t_small_parse_table_array *v)
{
	v->a[65280] = 1;
	v->a[65281] = sym_variable_name;
	v->a[65282] = actions(2877);
	v->a[65283] = 2;
	v->a[65284] = aux_sym__simple_variable_name_token1;
	v->a[65285] = aux_sym__multiline_variable_name_token1;
	v->a[65286] = actions(2875);
	v->a[65287] = 8;
	v->a[65288] = anon_sym_BANG;
	v->a[65289] = anon_sym_DASH;
	v->a[65290] = anon_sym_STAR;
	v->a[65291] = anon_sym_QMARK;
	v->a[65292] = anon_sym_DOLLAR;
	v->a[65293] = anon_sym_POUND;
	v->a[65294] = anon_sym_AT;
	v->a[65295] = anon_sym_0;
	v->a[65296] = 4;
	v->a[65297] = actions(3);
	v->a[65298] = 1;
	v->a[65299] = sym_comment;
	small_parse_table_3265(v);
}

/* EOF small_parse_table_652.c */
