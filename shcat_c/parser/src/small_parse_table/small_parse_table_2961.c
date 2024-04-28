/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2961.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14805(t_small_parse_table_array *v)
{
	v->a[296100] = anon_sym_DOLLAR_LBRACE;
	v->a[296101] = actions(13070);
	v->a[296102] = 1;
	v->a[296103] = anon_sym_DOLLAR_LPAREN;
	v->a[296104] = actions(13072);
	v->a[296105] = 1;
	v->a[296106] = anon_sym_BQUOTE;
	v->a[296107] = actions(13074);
	v->a[296108] = 1;
	v->a[296109] = anon_sym_DOLLAR_BQUOTE;
	v->a[296110] = actions(13256);
	v->a[296111] = 1;
	v->a[296112] = anon_sym_DOLLAR;
	v->a[296113] = actions(13258);
	v->a[296114] = 1;
	v->a[296115] = anon_sym_DQUOTE;
	v->a[296116] = state(5768);
	v->a[296117] = 1;
	v->a[296118] = aux_sym_string_repeat1;
	v->a[296119] = actions(13058);
	small_parse_table_14806(v);
}

void	small_parse_table_14806(t_small_parse_table_array *v)
{
	v->a[296120] = 2;
	v->a[296121] = anon_sym_LPAREN_LPAREN;
	v->a[296122] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296123] = state(6127);
	v->a[296124] = 4;
	v->a[296125] = sym_arithmetic_expansion;
	v->a[296126] = sym_simple_expansion;
	v->a[296127] = sym_expansion;
	v->a[296128] = sym_command_substitution;
	v->a[296129] = 12;
	v->a[296130] = actions(3);
	v->a[296131] = 1;
	v->a[296132] = sym_comment;
	v->a[296133] = actions(13060);
	v->a[296134] = 1;
	v->a[296135] = anon_sym_DOLLAR_LBRACK;
	v->a[296136] = actions(13066);
	v->a[296137] = 1;
	v->a[296138] = sym_string_content;
	v->a[296139] = actions(13068);
	small_parse_table_14807(v);
}

void	small_parse_table_14807(t_small_parse_table_array *v)
{
	v->a[296140] = 1;
	v->a[296141] = anon_sym_DOLLAR_LBRACE;
	v->a[296142] = actions(13070);
	v->a[296143] = 1;
	v->a[296144] = anon_sym_DOLLAR_LPAREN;
	v->a[296145] = actions(13072);
	v->a[296146] = 1;
	v->a[296147] = anon_sym_BQUOTE;
	v->a[296148] = actions(13074);
	v->a[296149] = 1;
	v->a[296150] = anon_sym_DOLLAR_BQUOTE;
	v->a[296151] = actions(13260);
	v->a[296152] = 1;
	v->a[296153] = anon_sym_DOLLAR;
	v->a[296154] = actions(13262);
	v->a[296155] = 1;
	v->a[296156] = anon_sym_DQUOTE;
	v->a[296157] = state(5768);
	v->a[296158] = 1;
	v->a[296159] = aux_sym_string_repeat1;
	small_parse_table_14808(v);
}

void	small_parse_table_14808(t_small_parse_table_array *v)
{
	v->a[296160] = actions(13058);
	v->a[296161] = 2;
	v->a[296162] = anon_sym_LPAREN_LPAREN;
	v->a[296163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296164] = state(6127);
	v->a[296165] = 4;
	v->a[296166] = sym_arithmetic_expansion;
	v->a[296167] = sym_simple_expansion;
	v->a[296168] = sym_expansion;
	v->a[296169] = sym_command_substitution;
	v->a[296170] = 12;
	v->a[296171] = actions(3);
	v->a[296172] = 1;
	v->a[296173] = sym_comment;
	v->a[296174] = actions(13060);
	v->a[296175] = 1;
	v->a[296176] = anon_sym_DOLLAR_LBRACK;
	v->a[296177] = actions(13066);
	v->a[296178] = 1;
	v->a[296179] = sym_string_content;
	small_parse_table_14809(v);
}

void	small_parse_table_14809(t_small_parse_table_array *v)
{
	v->a[296180] = actions(13068);
	v->a[296181] = 1;
	v->a[296182] = anon_sym_DOLLAR_LBRACE;
	v->a[296183] = actions(13070);
	v->a[296184] = 1;
	v->a[296185] = anon_sym_DOLLAR_LPAREN;
	v->a[296186] = actions(13072);
	v->a[296187] = 1;
	v->a[296188] = anon_sym_BQUOTE;
	v->a[296189] = actions(13074);
	v->a[296190] = 1;
	v->a[296191] = anon_sym_DOLLAR_BQUOTE;
	v->a[296192] = actions(13264);
	v->a[296193] = 1;
	v->a[296194] = anon_sym_DOLLAR;
	v->a[296195] = actions(13266);
	v->a[296196] = 1;
	v->a[296197] = anon_sym_DQUOTE;
	v->a[296198] = state(5760);
	v->a[296199] = 1;
	small_parse_table_14810(v);
}

/* EOF small_parse_table_2961.c */
