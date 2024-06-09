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
	v->a[80100] = 1;
	v->a[80101] = sym_comment;
	v->a[80102] = actions(2873);
	v->a[80103] = 1;
	v->a[80104] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80105] = actions(2877);
	v->a[80106] = 1;
	v->a[80107] = anon_sym_DQUOTE;
	v->a[80108] = actions(2879);
	v->a[80109] = 1;
	v->a[80110] = aux_sym_number_token1;
	v->a[80111] = actions(2881);
	v->a[80112] = 1;
	v->a[80113] = aux_sym_number_token2;
	v->a[80114] = actions(2883);
	v->a[80115] = 1;
	v->a[80116] = anon_sym_DOLLAR_LBRACE;
	v->a[80117] = actions(2885);
	v->a[80118] = 1;
	v->a[80119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4006(v);
}

void	small_parse_table_4006(t_small_parse_table_array *v)
{
	v->a[80120] = actions(2887);
	v->a[80121] = 1;
	v->a[80122] = anon_sym_BQUOTE;
	v->a[80123] = actions(3073);
	v->a[80124] = 1;
	v->a[80125] = sym__bare_dollar;
	v->a[80126] = actions(3318);
	v->a[80127] = 1;
	v->a[80128] = anon_sym_DOLLAR;
	v->a[80129] = actions(3071);
	v->a[80130] = 3;
	v->a[80131] = sym_raw_string;
	v->a[80132] = sym__comment_word;
	v->a[80133] = sym_word;
	v->a[80134] = state(956);
	v->a[80135] = 6;
	v->a[80136] = sym_arithmetic_expansion;
	v->a[80137] = sym_string;
	v->a[80138] = sym_number;
	v->a[80139] = sym_simple_expansion;
	small_parse_table_4007(v);
}

void	small_parse_table_4007(t_small_parse_table_array *v)
{
	v->a[80140] = sym_expansion;
	v->a[80141] = sym_command_substitution;
	v->a[80142] = 12;
	v->a[80143] = actions(3);
	v->a[80144] = 1;
	v->a[80145] = sym_comment;
	v->a[80146] = actions(485);
	v->a[80147] = 1;
	v->a[80148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80149] = actions(489);
	v->a[80150] = 1;
	v->a[80151] = anon_sym_DQUOTE;
	v->a[80152] = actions(491);
	v->a[80153] = 1;
	v->a[80154] = aux_sym_number_token1;
	v->a[80155] = actions(493);
	v->a[80156] = 1;
	v->a[80157] = aux_sym_number_token2;
	v->a[80158] = actions(495);
	v->a[80159] = 1;
	small_parse_table_4008(v);
}

void	small_parse_table_4008(t_small_parse_table_array *v)
{
	v->a[80160] = anon_sym_DOLLAR_LBRACE;
	v->a[80161] = actions(497);
	v->a[80162] = 1;
	v->a[80163] = anon_sym_DOLLAR_LPAREN;
	v->a[80164] = actions(499);
	v->a[80165] = 1;
	v->a[80166] = anon_sym_BQUOTE;
	v->a[80167] = actions(3280);
	v->a[80168] = 1;
	v->a[80169] = sym__bare_dollar;
	v->a[80170] = actions(3320);
	v->a[80171] = 1;
	v->a[80172] = anon_sym_DOLLAR;
	v->a[80173] = actions(3276);
	v->a[80174] = 3;
	v->a[80175] = sym_raw_string;
	v->a[80176] = sym__comment_word;
	v->a[80177] = sym_word;
	v->a[80178] = state(522);
	v->a[80179] = 6;
	small_parse_table_4009(v);
}

void	small_parse_table_4009(t_small_parse_table_array *v)
{
	v->a[80180] = sym_arithmetic_expansion;
	v->a[80181] = sym_string;
	v->a[80182] = sym_number;
	v->a[80183] = sym_simple_expansion;
	v->a[80184] = sym_expansion;
	v->a[80185] = sym_command_substitution;
	v->a[80186] = 12;
	v->a[80187] = actions(3);
	v->a[80188] = 1;
	v->a[80189] = sym_comment;
	v->a[80190] = actions(2851);
	v->a[80191] = 1;
	v->a[80192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80193] = actions(2853);
	v->a[80194] = 1;
	v->a[80195] = anon_sym_DOLLAR;
	v->a[80196] = actions(2855);
	v->a[80197] = 1;
	v->a[80198] = anon_sym_DQUOTE;
	v->a[80199] = actions(2857);
	small_parse_table_4010(v);
}

/* EOF small_parse_table_801.c */
