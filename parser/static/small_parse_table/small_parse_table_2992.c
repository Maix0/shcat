/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2992.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14960(t_small_parse_table_array *v)
{
	v->a[299200] = 1;
	v->a[299201] = anon_sym_DOLLAR_LPAREN;
	v->a[299202] = actions(13072);
	v->a[299203] = 1;
	v->a[299204] = anon_sym_BQUOTE;
	v->a[299205] = actions(13074);
	v->a[299206] = 1;
	v->a[299207] = anon_sym_DOLLAR_BQUOTE;
	v->a[299208] = actions(13578);
	v->a[299209] = 1;
	v->a[299210] = anon_sym_DOLLAR;
	v->a[299211] = actions(13580);
	v->a[299212] = 1;
	v->a[299213] = anon_sym_DQUOTE;
	v->a[299214] = state(5826);
	v->a[299215] = 1;
	v->a[299216] = aux_sym_string_repeat1;
	v->a[299217] = actions(13058);
	v->a[299218] = 2;
	v->a[299219] = anon_sym_LPAREN_LPAREN;
	small_parse_table_14961(v);
}

void	small_parse_table_14961(t_small_parse_table_array *v)
{
	v->a[299220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299221] = state(6127);
	v->a[299222] = 4;
	v->a[299223] = sym_arithmetic_expansion;
	v->a[299224] = sym_simple_expansion;
	v->a[299225] = sym_expansion;
	v->a[299226] = sym_command_substitution;
	v->a[299227] = 12;
	v->a[299228] = actions(3);
	v->a[299229] = 1;
	v->a[299230] = sym_comment;
	v->a[299231] = actions(13060);
	v->a[299232] = 1;
	v->a[299233] = anon_sym_DOLLAR_LBRACK;
	v->a[299234] = actions(13066);
	v->a[299235] = 1;
	v->a[299236] = sym_string_content;
	v->a[299237] = actions(13068);
	v->a[299238] = 1;
	v->a[299239] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_14962(v);
}

void	small_parse_table_14962(t_small_parse_table_array *v)
{
	v->a[299240] = actions(13070);
	v->a[299241] = 1;
	v->a[299242] = anon_sym_DOLLAR_LPAREN;
	v->a[299243] = actions(13072);
	v->a[299244] = 1;
	v->a[299245] = anon_sym_BQUOTE;
	v->a[299246] = actions(13074);
	v->a[299247] = 1;
	v->a[299248] = anon_sym_DOLLAR_BQUOTE;
	v->a[299249] = actions(13582);
	v->a[299250] = 1;
	v->a[299251] = anon_sym_DOLLAR;
	v->a[299252] = actions(13584);
	v->a[299253] = 1;
	v->a[299254] = anon_sym_DQUOTE;
	v->a[299255] = state(5768);
	v->a[299256] = 1;
	v->a[299257] = aux_sym_string_repeat1;
	v->a[299258] = actions(13058);
	v->a[299259] = 2;
	small_parse_table_14963(v);
}

void	small_parse_table_14963(t_small_parse_table_array *v)
{
	v->a[299260] = anon_sym_LPAREN_LPAREN;
	v->a[299261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299262] = state(6127);
	v->a[299263] = 4;
	v->a[299264] = sym_arithmetic_expansion;
	v->a[299265] = sym_simple_expansion;
	v->a[299266] = sym_expansion;
	v->a[299267] = sym_command_substitution;
	v->a[299268] = 12;
	v->a[299269] = actions(3);
	v->a[299270] = 1;
	v->a[299271] = sym_comment;
	v->a[299272] = actions(13060);
	v->a[299273] = 1;
	v->a[299274] = anon_sym_DOLLAR_LBRACK;
	v->a[299275] = actions(13066);
	v->a[299276] = 1;
	v->a[299277] = sym_string_content;
	v->a[299278] = actions(13068);
	v->a[299279] = 1;
	small_parse_table_14964(v);
}

void	small_parse_table_14964(t_small_parse_table_array *v)
{
	v->a[299280] = anon_sym_DOLLAR_LBRACE;
	v->a[299281] = actions(13070);
	v->a[299282] = 1;
	v->a[299283] = anon_sym_DOLLAR_LPAREN;
	v->a[299284] = actions(13072);
	v->a[299285] = 1;
	v->a[299286] = anon_sym_BQUOTE;
	v->a[299287] = actions(13074);
	v->a[299288] = 1;
	v->a[299289] = anon_sym_DOLLAR_BQUOTE;
	v->a[299290] = actions(13586);
	v->a[299291] = 1;
	v->a[299292] = anon_sym_DOLLAR;
	v->a[299293] = actions(13588);
	v->a[299294] = 1;
	v->a[299295] = anon_sym_DQUOTE;
	v->a[299296] = state(5768);
	v->a[299297] = 1;
	v->a[299298] = aux_sym_string_repeat1;
	v->a[299299] = actions(13058);
	small_parse_table_14965(v);
}

/* EOF small_parse_table_2992.c */
