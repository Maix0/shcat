/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_774.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3870(t_small_parse_table_array *v)
{
	v->a[77400] = sym_word;
	v->a[77401] = state(905);
	v->a[77402] = 5;
	v->a[77403] = sym_arithmetic_expansion;
	v->a[77404] = sym_string;
	v->a[77405] = sym_simple_expansion;
	v->a[77406] = sym_expansion;
	v->a[77407] = sym_command_substitution;
	v->a[77408] = 10;
	v->a[77409] = actions(3);
	v->a[77410] = 1;
	v->a[77411] = sym_comment;
	v->a[77412] = actions(459);
	v->a[77413] = 1;
	v->a[77414] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77415] = actions(461);
	v->a[77416] = 1;
	v->a[77417] = anon_sym_DOLLAR;
	v->a[77418] = actions(463);
	v->a[77419] = 1;
	small_parse_table_3871(v);
}

void	small_parse_table_3871(t_small_parse_table_array *v)
{
	v->a[77420] = anon_sym_DQUOTE;
	v->a[77421] = actions(465);
	v->a[77422] = 1;
	v->a[77423] = anon_sym_DOLLAR_LBRACE;
	v->a[77424] = actions(467);
	v->a[77425] = 1;
	v->a[77426] = anon_sym_DOLLAR_LPAREN;
	v->a[77427] = actions(469);
	v->a[77428] = 1;
	v->a[77429] = anon_sym_BQUOTE;
	v->a[77430] = actions(2583);
	v->a[77431] = 1;
	v->a[77432] = sym__bare_dollar;
	v->a[77433] = actions(2579);
	v->a[77434] = 5;
	v->a[77435] = aux_sym_concatenation_token1;
	v->a[77436] = sym_raw_string;
	v->a[77437] = sym_number;
	v->a[77438] = sym__comment_word;
	v->a[77439] = sym_word;
	small_parse_table_3872(v);
}

void	small_parse_table_3872(t_small_parse_table_array *v)
{
	v->a[77440] = state(531);
	v->a[77441] = 5;
	v->a[77442] = sym_arithmetic_expansion;
	v->a[77443] = sym_string;
	v->a[77444] = sym_simple_expansion;
	v->a[77445] = sym_expansion;
	v->a[77446] = sym_command_substitution;
	v->a[77447] = 10;
	v->a[77448] = actions(3);
	v->a[77449] = 1;
	v->a[77450] = sym_comment;
	v->a[77451] = actions(497);
	v->a[77452] = 1;
	v->a[77453] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77454] = actions(501);
	v->a[77455] = 1;
	v->a[77456] = anon_sym_DQUOTE;
	v->a[77457] = actions(503);
	v->a[77458] = 1;
	v->a[77459] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3873(v);
}

void	small_parse_table_3873(t_small_parse_table_array *v)
{
	v->a[77460] = actions(505);
	v->a[77461] = 1;
	v->a[77462] = anon_sym_DOLLAR_LPAREN;
	v->a[77463] = actions(507);
	v->a[77464] = 1;
	v->a[77465] = anon_sym_BQUOTE;
	v->a[77466] = actions(2838);
	v->a[77467] = 1;
	v->a[77468] = sym__bare_dollar;
	v->a[77469] = actions(2966);
	v->a[77470] = 1;
	v->a[77471] = anon_sym_DOLLAR;
	v->a[77472] = actions(2836);
	v->a[77473] = 5;
	v->a[77474] = aux_sym_concatenation_token1;
	v->a[77475] = sym_raw_string;
	v->a[77476] = sym_number;
	v->a[77477] = sym__comment_word;
	v->a[77478] = sym_word;
	v->a[77479] = state(499);
	small_parse_table_3874(v);
}

void	small_parse_table_3874(t_small_parse_table_array *v)
{
	v->a[77480] = 5;
	v->a[77481] = sym_arithmetic_expansion;
	v->a[77482] = sym_string;
	v->a[77483] = sym_simple_expansion;
	v->a[77484] = sym_expansion;
	v->a[77485] = sym_command_substitution;
	v->a[77486] = 10;
	v->a[77487] = actions(3);
	v->a[77488] = 1;
	v->a[77489] = sym_comment;
	v->a[77490] = actions(59);
	v->a[77491] = 1;
	v->a[77492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77493] = actions(63);
	v->a[77494] = 1;
	v->a[77495] = anon_sym_DQUOTE;
	v->a[77496] = actions(67);
	v->a[77497] = 1;
	v->a[77498] = anon_sym_DOLLAR_LBRACE;
	v->a[77499] = actions(69);
	small_parse_table_3875(v);
}

/* EOF small_parse_table_774.c */
