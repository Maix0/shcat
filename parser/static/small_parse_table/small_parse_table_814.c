/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_814.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4070(t_small_parse_table_array *v)
{
	v->a[81400] = 1;
	v->a[81401] = sym__bare_dollar;
	v->a[81402] = actions(3356);
	v->a[81403] = 1;
	v->a[81404] = anon_sym_DOLLAR;
	v->a[81405] = actions(3270);
	v->a[81406] = 3;
	v->a[81407] = sym_raw_string;
	v->a[81408] = sym__comment_word;
	v->a[81409] = sym_word;
	v->a[81410] = state(532);
	v->a[81411] = 6;
	v->a[81412] = sym_arithmetic_expansion;
	v->a[81413] = sym_string;
	v->a[81414] = sym_number;
	v->a[81415] = sym_simple_expansion;
	v->a[81416] = sym_expansion;
	v->a[81417] = sym_command_substitution;
	v->a[81418] = 12;
	v->a[81419] = actions(3);
	small_parse_table_4071(v);
}

void	small_parse_table_4071(t_small_parse_table_array *v)
{
	v->a[81420] = 1;
	v->a[81421] = sym_comment;
	v->a[81422] = actions(485);
	v->a[81423] = 1;
	v->a[81424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81425] = actions(487);
	v->a[81426] = 1;
	v->a[81427] = anon_sym_DOLLAR;
	v->a[81428] = actions(489);
	v->a[81429] = 1;
	v->a[81430] = anon_sym_DQUOTE;
	v->a[81431] = actions(491);
	v->a[81432] = 1;
	v->a[81433] = aux_sym_number_token1;
	v->a[81434] = actions(493);
	v->a[81435] = 1;
	v->a[81436] = aux_sym_number_token2;
	v->a[81437] = actions(495);
	v->a[81438] = 1;
	v->a[81439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4072(v);
}

void	small_parse_table_4072(t_small_parse_table_array *v)
{
	v->a[81440] = actions(497);
	v->a[81441] = 1;
	v->a[81442] = anon_sym_DOLLAR_LPAREN;
	v->a[81443] = actions(499);
	v->a[81444] = 1;
	v->a[81445] = anon_sym_BQUOTE;
	v->a[81446] = actions(3280);
	v->a[81447] = 1;
	v->a[81448] = sym__bare_dollar;
	v->a[81449] = actions(3276);
	v->a[81450] = 3;
	v->a[81451] = sym_raw_string;
	v->a[81452] = sym__comment_word;
	v->a[81453] = sym_word;
	v->a[81454] = state(522);
	v->a[81455] = 6;
	v->a[81456] = sym_arithmetic_expansion;
	v->a[81457] = sym_string;
	v->a[81458] = sym_number;
	v->a[81459] = sym_simple_expansion;
	small_parse_table_4073(v);
}

void	small_parse_table_4073(t_small_parse_table_array *v)
{
	v->a[81460] = sym_expansion;
	v->a[81461] = sym_command_substitution;
	v->a[81462] = 12;
	v->a[81463] = actions(3);
	v->a[81464] = 1;
	v->a[81465] = sym_comment;
	v->a[81466] = actions(63);
	v->a[81467] = 1;
	v->a[81468] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81469] = actions(67);
	v->a[81470] = 1;
	v->a[81471] = anon_sym_DQUOTE;
	v->a[81472] = actions(71);
	v->a[81473] = 1;
	v->a[81474] = aux_sym_number_token1;
	v->a[81475] = actions(73);
	v->a[81476] = 1;
	v->a[81477] = aux_sym_number_token2;
	v->a[81478] = actions(75);
	v->a[81479] = 1;
	small_parse_table_4074(v);
}

void	small_parse_table_4074(t_small_parse_table_array *v)
{
	v->a[81480] = anon_sym_DOLLAR_LBRACE;
	v->a[81481] = actions(77);
	v->a[81482] = 1;
	v->a[81483] = anon_sym_DOLLAR_LPAREN;
	v->a[81484] = actions(79);
	v->a[81485] = 1;
	v->a[81486] = anon_sym_BQUOTE;
	v->a[81487] = actions(3160);
	v->a[81488] = 1;
	v->a[81489] = sym__bare_dollar;
	v->a[81490] = actions(3358);
	v->a[81491] = 1;
	v->a[81492] = anon_sym_DOLLAR;
	v->a[81493] = actions(3158);
	v->a[81494] = 3;
	v->a[81495] = sym_raw_string;
	v->a[81496] = sym__comment_word;
	v->a[81497] = sym_word;
	v->a[81498] = state(354);
	v->a[81499] = 6;
	small_parse_table_4075(v);
}

/* EOF small_parse_table_814.c */
