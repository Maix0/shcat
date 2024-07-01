/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_801.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4005(t_small_parse_table_array *v)
{
	v->a[80100] = anon_sym_DOLLAR;
	v->a[80101] = actions(898);
	v->a[80102] = 1;
	v->a[80103] = anon_sym_DQUOTE;
	v->a[80104] = actions(900);
	v->a[80105] = 1;
	v->a[80106] = anon_sym_DOLLAR_LBRACE;
	v->a[80107] = actions(902);
	v->a[80108] = 1;
	v->a[80109] = anon_sym_DOLLAR_LPAREN;
	v->a[80110] = actions(904);
	v->a[80111] = 1;
	v->a[80112] = anon_sym_BQUOTE;
	v->a[80113] = state(1231);
	v->a[80114] = 2;
	v->a[80115] = sym_concatenation;
	v->a[80116] = aux_sym_for_statement_repeat1;
	v->a[80117] = actions(2260);
	v->a[80118] = 3;
	v->a[80119] = sym_raw_string;
	small_parse_table_4006(v);
}

void	small_parse_table_4006(t_small_parse_table_array *v)
{
	v->a[80120] = sym_number;
	v->a[80121] = sym_word;
	v->a[80122] = state(1543);
	v->a[80123] = 5;
	v->a[80124] = sym_arithmetic_expansion;
	v->a[80125] = sym_string;
	v->a[80126] = sym_simple_expansion;
	v->a[80127] = sym_expansion;
	v->a[80128] = sym_command_substitution;
	v->a[80129] = 10;
	v->a[80130] = actions(3);
	v->a[80131] = 1;
	v->a[80132] = sym_comment;
	v->a[80133] = actions(699);
	v->a[80134] = 1;
	v->a[80135] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80136] = actions(701);
	v->a[80137] = 1;
	v->a[80138] = anon_sym_DOLLAR;
	v->a[80139] = actions(703);
	small_parse_table_4007(v);
}

void	small_parse_table_4007(t_small_parse_table_array *v)
{
	v->a[80140] = 1;
	v->a[80141] = anon_sym_DQUOTE;
	v->a[80142] = actions(705);
	v->a[80143] = 1;
	v->a[80144] = anon_sym_DOLLAR_LBRACE;
	v->a[80145] = actions(707);
	v->a[80146] = 1;
	v->a[80147] = anon_sym_DOLLAR_LPAREN;
	v->a[80148] = actions(709);
	v->a[80149] = 1;
	v->a[80150] = anon_sym_BQUOTE;
	v->a[80151] = state(495);
	v->a[80152] = 2;
	v->a[80153] = sym_concatenation;
	v->a[80154] = aux_sym_for_statement_repeat1;
	v->a[80155] = actions(1354);
	v->a[80156] = 3;
	v->a[80157] = sym_raw_string;
	v->a[80158] = sym_number;
	v->a[80159] = sym_word;
	small_parse_table_4008(v);
}

void	small_parse_table_4008(t_small_parse_table_array *v)
{
	v->a[80160] = state(884);
	v->a[80161] = 5;
	v->a[80162] = sym_arithmetic_expansion;
	v->a[80163] = sym_string;
	v->a[80164] = sym_simple_expansion;
	v->a[80165] = sym_expansion;
	v->a[80166] = sym_command_substitution;
	v->a[80167] = 10;
	v->a[80168] = actions(3);
	v->a[80169] = 1;
	v->a[80170] = sym_comment;
	v->a[80171] = actions(699);
	v->a[80172] = 1;
	v->a[80173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80174] = actions(701);
	v->a[80175] = 1;
	v->a[80176] = anon_sym_DOLLAR;
	v->a[80177] = actions(703);
	v->a[80178] = 1;
	v->a[80179] = anon_sym_DQUOTE;
	small_parse_table_4009(v);
}

void	small_parse_table_4009(t_small_parse_table_array *v)
{
	v->a[80180] = actions(705);
	v->a[80181] = 1;
	v->a[80182] = anon_sym_DOLLAR_LBRACE;
	v->a[80183] = actions(707);
	v->a[80184] = 1;
	v->a[80185] = anon_sym_DOLLAR_LPAREN;
	v->a[80186] = actions(709);
	v->a[80187] = 1;
	v->a[80188] = anon_sym_BQUOTE;
	v->a[80189] = state(275);
	v->a[80190] = 2;
	v->a[80191] = sym_concatenation;
	v->a[80192] = aux_sym_for_statement_repeat1;
	v->a[80193] = actions(1001);
	v->a[80194] = 3;
	v->a[80195] = sym_raw_string;
	v->a[80196] = sym_number;
	v->a[80197] = sym_word;
	v->a[80198] = state(628);
	v->a[80199] = 5;
	small_parse_table_4010(v);
}

/* EOF small_parse_table_801.c */
