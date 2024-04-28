/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3012.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15060(t_small_parse_table_array *v)
{
	v->a[301200] = 1;
	v->a[301201] = sym_string_content;
	v->a[301202] = actions(13736);
	v->a[301203] = 1;
	v->a[301204] = sym_variable_name;
	v->a[301205] = actions(13734);
	v->a[301206] = 2;
	v->a[301207] = aux_sym__simple_variable_name_token1;
	v->a[301208] = aux_sym__multiline_variable_name_token1;
	v->a[301209] = actions(13730);
	v->a[301210] = 9;
	v->a[301211] = anon_sym_DASH;
	v->a[301212] = anon_sym_STAR;
	v->a[301213] = anon_sym_BANG;
	v->a[301214] = anon_sym_QMARK;
	v->a[301215] = anon_sym_DOLLAR;
	v->a[301216] = anon_sym_POUND;
	v->a[301217] = anon_sym_AT2;
	v->a[301218] = anon_sym_0;
	v->a[301219] = anon_sym__;
	small_parse_table_15061(v);
}

void	small_parse_table_15061(t_small_parse_table_array *v)
{
	v->a[301220] = 6;
	v->a[301221] = actions(3);
	v->a[301222] = 1;
	v->a[301223] = sym_comment;
	v->a[301224] = actions(13190);
	v->a[301225] = 1;
	v->a[301226] = anon_sym_DQUOTE;
	v->a[301227] = actions(13732);
	v->a[301228] = 1;
	v->a[301229] = sym_string_content;
	v->a[301230] = actions(13736);
	v->a[301231] = 1;
	v->a[301232] = sym_variable_name;
	v->a[301233] = actions(13734);
	v->a[301234] = 2;
	v->a[301235] = aux_sym__simple_variable_name_token1;
	v->a[301236] = aux_sym__multiline_variable_name_token1;
	v->a[301237] = actions(13730);
	v->a[301238] = 9;
	v->a[301239] = anon_sym_DASH;
	small_parse_table_15062(v);
}

void	small_parse_table_15062(t_small_parse_table_array *v)
{
	v->a[301240] = anon_sym_STAR;
	v->a[301241] = anon_sym_BANG;
	v->a[301242] = anon_sym_QMARK;
	v->a[301243] = anon_sym_DOLLAR;
	v->a[301244] = anon_sym_POUND;
	v->a[301245] = anon_sym_AT2;
	v->a[301246] = anon_sym_0;
	v->a[301247] = anon_sym__;
	v->a[301248] = 6;
	v->a[301249] = actions(3);
	v->a[301250] = 1;
	v->a[301251] = sym_comment;
	v->a[301252] = actions(4558);
	v->a[301253] = 1;
	v->a[301254] = anon_sym_DQUOTE;
	v->a[301255] = actions(4562);
	v->a[301256] = 1;
	v->a[301257] = sym_variable_name;
	v->a[301258] = state(2447);
	v->a[301259] = 1;
	small_parse_table_15063(v);
}

void	small_parse_table_15063(t_small_parse_table_array *v)
{
	v->a[301260] = sym_string;
	v->a[301261] = actions(4560);
	v->a[301262] = 2;
	v->a[301263] = aux_sym__simple_variable_name_token1;
	v->a[301264] = aux_sym__multiline_variable_name_token1;
	v->a[301265] = actions(4556);
	v->a[301266] = 9;
	v->a[301267] = anon_sym_DASH;
	v->a[301268] = anon_sym_STAR;
	v->a[301269] = anon_sym_BANG;
	v->a[301270] = anon_sym_QMARK;
	v->a[301271] = anon_sym_DOLLAR;
	v->a[301272] = anon_sym_POUND;
	v->a[301273] = anon_sym_AT2;
	v->a[301274] = anon_sym_0;
	v->a[301275] = anon_sym__;
	v->a[301276] = 6;
	v->a[301277] = actions(3);
	v->a[301278] = 1;
	v->a[301279] = sym_comment;
	small_parse_table_15064(v);
}

void	small_parse_table_15064(t_small_parse_table_array *v)
{
	v->a[301280] = actions(1591);
	v->a[301281] = 1;
	v->a[301282] = anon_sym_DQUOTE;
	v->a[301283] = actions(2155);
	v->a[301284] = 1;
	v->a[301285] = sym_variable_name;
	v->a[301286] = state(1282);
	v->a[301287] = 1;
	v->a[301288] = sym_string;
	v->a[301289] = actions(2153);
	v->a[301290] = 2;
	v->a[301291] = aux_sym__simple_variable_name_token1;
	v->a[301292] = aux_sym__multiline_variable_name_token1;
	v->a[301293] = actions(2151);
	v->a[301294] = 9;
	v->a[301295] = anon_sym_DASH;
	v->a[301296] = anon_sym_STAR;
	v->a[301297] = anon_sym_BANG;
	v->a[301298] = anon_sym_QMARK;
	v->a[301299] = anon_sym_DOLLAR;
	small_parse_table_15065(v);
}

/* EOF small_parse_table_3012.c */
