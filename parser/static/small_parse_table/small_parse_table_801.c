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
	v->a[80100] = 10;
	v->a[80101] = actions(3);
	v->a[80102] = 1;
	v->a[80103] = sym_comment;
	v->a[80104] = actions(718);
	v->a[80105] = 1;
	v->a[80106] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80107] = actions(722);
	v->a[80108] = 1;
	v->a[80109] = anon_sym_DQUOTE;
	v->a[80110] = actions(724);
	v->a[80111] = 1;
	v->a[80112] = anon_sym_DOLLAR_LBRACE;
	v->a[80113] = actions(726);
	v->a[80114] = 1;
	v->a[80115] = anon_sym_DOLLAR_LPAREN;
	v->a[80116] = actions(728);
	v->a[80117] = 1;
	v->a[80118] = anon_sym_BQUOTE;
	v->a[80119] = actions(2975);
	small_parse_table_4006(v);
}

void	small_parse_table_4006(t_small_parse_table_array *v)
{
	v->a[80120] = 1;
	v->a[80121] = anon_sym_DOLLAR;
	v->a[80122] = actions(2977);
	v->a[80123] = 1;
	v->a[80124] = sym__bare_dollar;
	v->a[80125] = actions(2973);
	v->a[80126] = 5;
	v->a[80127] = aux_sym_concatenation_token1;
	v->a[80128] = sym_raw_string;
	v->a[80129] = sym_number;
	v->a[80130] = sym__comment_word;
	v->a[80131] = sym_word;
	v->a[80132] = state(625);
	v->a[80133] = 5;
	v->a[80134] = sym_arithmetic_expansion;
	v->a[80135] = sym_string;
	v->a[80136] = sym_simple_expansion;
	v->a[80137] = sym_expansion;
	v->a[80138] = sym_command_substitution;
	v->a[80139] = 10;
	small_parse_table_4007(v);
}

void	small_parse_table_4007(t_small_parse_table_array *v)
{
	v->a[80140] = actions(3);
	v->a[80141] = 1;
	v->a[80142] = sym_comment;
	v->a[80143] = actions(497);
	v->a[80144] = 1;
	v->a[80145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80146] = actions(501);
	v->a[80147] = 1;
	v->a[80148] = anon_sym_DQUOTE;
	v->a[80149] = actions(503);
	v->a[80150] = 1;
	v->a[80151] = anon_sym_DOLLAR_LBRACE;
	v->a[80152] = actions(505);
	v->a[80153] = 1;
	v->a[80154] = anon_sym_DOLLAR_LPAREN;
	v->a[80155] = actions(507);
	v->a[80156] = 1;
	v->a[80157] = anon_sym_BQUOTE;
	v->a[80158] = actions(2981);
	v->a[80159] = 1;
	small_parse_table_4008(v);
}

void	small_parse_table_4008(t_small_parse_table_array *v)
{
	v->a[80160] = anon_sym_DOLLAR;
	v->a[80161] = actions(2983);
	v->a[80162] = 1;
	v->a[80163] = sym__bare_dollar;
	v->a[80164] = actions(2979);
	v->a[80165] = 5;
	v->a[80166] = aux_sym_concatenation_token1;
	v->a[80167] = sym_raw_string;
	v->a[80168] = sym_number;
	v->a[80169] = sym__comment_word;
	v->a[80170] = sym_word;
	v->a[80171] = state(546);
	v->a[80172] = 5;
	v->a[80173] = sym_arithmetic_expansion;
	v->a[80174] = sym_string;
	v->a[80175] = sym_simple_expansion;
	v->a[80176] = sym_expansion;
	v->a[80177] = sym_command_substitution;
	v->a[80178] = 10;
	v->a[80179] = actions(3);
	small_parse_table_4009(v);
}

void	small_parse_table_4009(t_small_parse_table_array *v)
{
	v->a[80180] = 1;
	v->a[80181] = sym_comment;
	v->a[80182] = actions(1483);
	v->a[80183] = 1;
	v->a[80184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80185] = actions(1485);
	v->a[80186] = 1;
	v->a[80187] = anon_sym_DOLLAR;
	v->a[80188] = actions(1487);
	v->a[80189] = 1;
	v->a[80190] = anon_sym_DQUOTE;
	v->a[80191] = actions(1489);
	v->a[80192] = 1;
	v->a[80193] = anon_sym_DOLLAR_LBRACE;
	v->a[80194] = actions(1491);
	v->a[80195] = 1;
	v->a[80196] = anon_sym_DOLLAR_LPAREN;
	v->a[80197] = actions(1493);
	v->a[80198] = 1;
	v->a[80199] = anon_sym_BQUOTE;
	small_parse_table_4010(v);
}

/* EOF small_parse_table_801.c */
