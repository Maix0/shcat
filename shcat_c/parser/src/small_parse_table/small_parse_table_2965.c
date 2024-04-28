/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2965.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14825(t_small_parse_table_array *v)
{
	v->a[296500] = 1;
	v->a[296501] = sym_comment;
	v->a[296502] = actions(13060);
	v->a[296503] = 1;
	v->a[296504] = anon_sym_DOLLAR_LBRACK;
	v->a[296505] = actions(13066);
	v->a[296506] = 1;
	v->a[296507] = sym_string_content;
	v->a[296508] = actions(13068);
	v->a[296509] = 1;
	v->a[296510] = anon_sym_DOLLAR_LBRACE;
	v->a[296511] = actions(13070);
	v->a[296512] = 1;
	v->a[296513] = anon_sym_DOLLAR_LPAREN;
	v->a[296514] = actions(13072);
	v->a[296515] = 1;
	v->a[296516] = anon_sym_BQUOTE;
	v->a[296517] = actions(13074);
	v->a[296518] = 1;
	v->a[296519] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_14826(v);
}

void	small_parse_table_14826(t_small_parse_table_array *v)
{
	v->a[296520] = actions(13296);
	v->a[296521] = 1;
	v->a[296522] = anon_sym_DOLLAR;
	v->a[296523] = actions(13298);
	v->a[296524] = 1;
	v->a[296525] = anon_sym_DQUOTE;
	v->a[296526] = state(5767);
	v->a[296527] = 1;
	v->a[296528] = aux_sym_string_repeat1;
	v->a[296529] = actions(13058);
	v->a[296530] = 2;
	v->a[296531] = anon_sym_LPAREN_LPAREN;
	v->a[296532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296533] = state(6127);
	v->a[296534] = 4;
	v->a[296535] = sym_arithmetic_expansion;
	v->a[296536] = sym_simple_expansion;
	v->a[296537] = sym_expansion;
	v->a[296538] = sym_command_substitution;
	v->a[296539] = 12;
	small_parse_table_14827(v);
}

void	small_parse_table_14827(t_small_parse_table_array *v)
{
	v->a[296540] = actions(3);
	v->a[296541] = 1;
	v->a[296542] = sym_comment;
	v->a[296543] = actions(13060);
	v->a[296544] = 1;
	v->a[296545] = anon_sym_DOLLAR_LBRACK;
	v->a[296546] = actions(13066);
	v->a[296547] = 1;
	v->a[296548] = sym_string_content;
	v->a[296549] = actions(13068);
	v->a[296550] = 1;
	v->a[296551] = anon_sym_DOLLAR_LBRACE;
	v->a[296552] = actions(13070);
	v->a[296553] = 1;
	v->a[296554] = anon_sym_DOLLAR_LPAREN;
	v->a[296555] = actions(13072);
	v->a[296556] = 1;
	v->a[296557] = anon_sym_BQUOTE;
	v->a[296558] = actions(13074);
	v->a[296559] = 1;
	small_parse_table_14828(v);
}

void	small_parse_table_14828(t_small_parse_table_array *v)
{
	v->a[296560] = anon_sym_DOLLAR_BQUOTE;
	v->a[296561] = actions(13300);
	v->a[296562] = 1;
	v->a[296563] = anon_sym_DOLLAR;
	v->a[296564] = actions(13302);
	v->a[296565] = 1;
	v->a[296566] = anon_sym_DQUOTE;
	v->a[296567] = state(5756);
	v->a[296568] = 1;
	v->a[296569] = aux_sym_string_repeat1;
	v->a[296570] = actions(13058);
	v->a[296571] = 2;
	v->a[296572] = anon_sym_LPAREN_LPAREN;
	v->a[296573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296574] = state(6127);
	v->a[296575] = 4;
	v->a[296576] = sym_arithmetic_expansion;
	v->a[296577] = sym_simple_expansion;
	v->a[296578] = sym_expansion;
	v->a[296579] = sym_command_substitution;
	small_parse_table_14829(v);
}

void	small_parse_table_14829(t_small_parse_table_array *v)
{
	v->a[296580] = 12;
	v->a[296581] = actions(3);
	v->a[296582] = 1;
	v->a[296583] = sym_comment;
	v->a[296584] = actions(13060);
	v->a[296585] = 1;
	v->a[296586] = anon_sym_DOLLAR_LBRACK;
	v->a[296587] = actions(13066);
	v->a[296588] = 1;
	v->a[296589] = sym_string_content;
	v->a[296590] = actions(13068);
	v->a[296591] = 1;
	v->a[296592] = anon_sym_DOLLAR_LBRACE;
	v->a[296593] = actions(13070);
	v->a[296594] = 1;
	v->a[296595] = anon_sym_DOLLAR_LPAREN;
	v->a[296596] = actions(13072);
	v->a[296597] = 1;
	v->a[296598] = anon_sym_BQUOTE;
	v->a[296599] = actions(13074);
	small_parse_table_14830(v);
}

/* EOF small_parse_table_2965.c */
