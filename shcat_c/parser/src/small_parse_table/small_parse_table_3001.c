/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3001.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15005(t_small_parse_table_array *v)
{
	v->a[300100] = anon_sym_DOLLAR_LBRACE;
	v->a[300101] = actions(13070);
	v->a[300102] = 1;
	v->a[300103] = anon_sym_DOLLAR_LPAREN;
	v->a[300104] = actions(13072);
	v->a[300105] = 1;
	v->a[300106] = anon_sym_BQUOTE;
	v->a[300107] = actions(13074);
	v->a[300108] = 1;
	v->a[300109] = anon_sym_DOLLAR_BQUOTE;
	v->a[300110] = actions(13666);
	v->a[300111] = 1;
	v->a[300112] = anon_sym_DOLLAR;
	v->a[300113] = actions(13668);
	v->a[300114] = 1;
	v->a[300115] = anon_sym_DQUOTE;
	v->a[300116] = state(5781);
	v->a[300117] = 1;
	v->a[300118] = aux_sym_string_repeat1;
	v->a[300119] = actions(13058);
	small_parse_table_15006(v);
}

void	small_parse_table_15006(t_small_parse_table_array *v)
{
	v->a[300120] = 2;
	v->a[300121] = anon_sym_LPAREN_LPAREN;
	v->a[300122] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300123] = state(6127);
	v->a[300124] = 4;
	v->a[300125] = sym_arithmetic_expansion;
	v->a[300126] = sym_simple_expansion;
	v->a[300127] = sym_expansion;
	v->a[300128] = sym_command_substitution;
	v->a[300129] = 12;
	v->a[300130] = actions(3);
	v->a[300131] = 1;
	v->a[300132] = sym_comment;
	v->a[300133] = actions(13060);
	v->a[300134] = 1;
	v->a[300135] = anon_sym_DOLLAR_LBRACK;
	v->a[300136] = actions(13066);
	v->a[300137] = 1;
	v->a[300138] = sym_string_content;
	v->a[300139] = actions(13068);
	small_parse_table_15007(v);
}

void	small_parse_table_15007(t_small_parse_table_array *v)
{
	v->a[300140] = 1;
	v->a[300141] = anon_sym_DOLLAR_LBRACE;
	v->a[300142] = actions(13070);
	v->a[300143] = 1;
	v->a[300144] = anon_sym_DOLLAR_LPAREN;
	v->a[300145] = actions(13072);
	v->a[300146] = 1;
	v->a[300147] = anon_sym_BQUOTE;
	v->a[300148] = actions(13074);
	v->a[300149] = 1;
	v->a[300150] = anon_sym_DOLLAR_BQUOTE;
	v->a[300151] = actions(13670);
	v->a[300152] = 1;
	v->a[300153] = anon_sym_DOLLAR;
	v->a[300154] = actions(13672);
	v->a[300155] = 1;
	v->a[300156] = anon_sym_DQUOTE;
	v->a[300157] = state(5847);
	v->a[300158] = 1;
	v->a[300159] = aux_sym_string_repeat1;
	small_parse_table_15008(v);
}

void	small_parse_table_15008(t_small_parse_table_array *v)
{
	v->a[300160] = actions(13058);
	v->a[300161] = 2;
	v->a[300162] = anon_sym_LPAREN_LPAREN;
	v->a[300163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300164] = state(6127);
	v->a[300165] = 4;
	v->a[300166] = sym_arithmetic_expansion;
	v->a[300167] = sym_simple_expansion;
	v->a[300168] = sym_expansion;
	v->a[300169] = sym_command_substitution;
	v->a[300170] = 12;
	v->a[300171] = actions(3);
	v->a[300172] = 1;
	v->a[300173] = sym_comment;
	v->a[300174] = actions(13060);
	v->a[300175] = 1;
	v->a[300176] = anon_sym_DOLLAR_LBRACK;
	v->a[300177] = actions(13066);
	v->a[300178] = 1;
	v->a[300179] = sym_string_content;
	small_parse_table_15009(v);
}

void	small_parse_table_15009(t_small_parse_table_array *v)
{
	v->a[300180] = actions(13068);
	v->a[300181] = 1;
	v->a[300182] = anon_sym_DOLLAR_LBRACE;
	v->a[300183] = actions(13070);
	v->a[300184] = 1;
	v->a[300185] = anon_sym_DOLLAR_LPAREN;
	v->a[300186] = actions(13072);
	v->a[300187] = 1;
	v->a[300188] = anon_sym_BQUOTE;
	v->a[300189] = actions(13074);
	v->a[300190] = 1;
	v->a[300191] = anon_sym_DOLLAR_BQUOTE;
	v->a[300192] = actions(13674);
	v->a[300193] = 1;
	v->a[300194] = anon_sym_DOLLAR;
	v->a[300195] = actions(13676);
	v->a[300196] = 1;
	v->a[300197] = anon_sym_DQUOTE;
	v->a[300198] = state(5857);
	v->a[300199] = 1;
	small_parse_table_15010(v);
}

/* EOF small_parse_table_3001.c */
