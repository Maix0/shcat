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
	v->a[77400] = anon_sym_DOLLAR_LBRACE;
	v->a[77401] = actions(3114);
	v->a[77402] = 1;
	v->a[77403] = anon_sym_DOLLAR_LPAREN;
	v->a[77404] = actions(3116);
	v->a[77405] = 1;
	v->a[77406] = anon_sym_BQUOTE;
	v->a[77407] = actions(3228);
	v->a[77408] = 1;
	v->a[77409] = anon_sym_DOLLAR;
	v->a[77410] = actions(3230);
	v->a[77411] = 1;
	v->a[77412] = anon_sym_DQUOTE;
	v->a[77413] = state(1654);
	v->a[77414] = 1;
	v->a[77415] = aux_sym_string_repeat1;
	v->a[77416] = state(1748);
	v->a[77417] = 4;
	v->a[77418] = sym_arithmetic_expansion;
	v->a[77419] = sym_simple_expansion;
	small_parse_table_3871(v);
}

void	small_parse_table_3871(t_small_parse_table_array *v)
{
	v->a[77420] = sym_expansion;
	v->a[77421] = sym_command_substitution;
	v->a[77422] = 10;
	v->a[77423] = actions(3);
	v->a[77424] = 1;
	v->a[77425] = sym_comment;
	v->a[77426] = actions(3104);
	v->a[77427] = 1;
	v->a[77428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77429] = actions(3110);
	v->a[77430] = 1;
	v->a[77431] = sym_string_content;
	v->a[77432] = actions(3112);
	v->a[77433] = 1;
	v->a[77434] = anon_sym_DOLLAR_LBRACE;
	v->a[77435] = actions(3114);
	v->a[77436] = 1;
	v->a[77437] = anon_sym_DOLLAR_LPAREN;
	v->a[77438] = actions(3116);
	v->a[77439] = 1;
	small_parse_table_3872(v);
}

void	small_parse_table_3872(t_small_parse_table_array *v)
{
	v->a[77440] = anon_sym_BQUOTE;
	v->a[77441] = actions(3232);
	v->a[77442] = 1;
	v->a[77443] = anon_sym_DOLLAR;
	v->a[77444] = actions(3234);
	v->a[77445] = 1;
	v->a[77446] = anon_sym_DQUOTE;
	v->a[77447] = state(1661);
	v->a[77448] = 1;
	v->a[77449] = aux_sym_string_repeat1;
	v->a[77450] = state(1748);
	v->a[77451] = 4;
	v->a[77452] = sym_arithmetic_expansion;
	v->a[77453] = sym_simple_expansion;
	v->a[77454] = sym_expansion;
	v->a[77455] = sym_command_substitution;
	v->a[77456] = 10;
	v->a[77457] = actions(3);
	v->a[77458] = 1;
	v->a[77459] = sym_comment;
	small_parse_table_3873(v);
}

void	small_parse_table_3873(t_small_parse_table_array *v)
{
	v->a[77460] = actions(3104);
	v->a[77461] = 1;
	v->a[77462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77463] = actions(3110);
	v->a[77464] = 1;
	v->a[77465] = sym_string_content;
	v->a[77466] = actions(3112);
	v->a[77467] = 1;
	v->a[77468] = anon_sym_DOLLAR_LBRACE;
	v->a[77469] = actions(3114);
	v->a[77470] = 1;
	v->a[77471] = anon_sym_DOLLAR_LPAREN;
	v->a[77472] = actions(3116);
	v->a[77473] = 1;
	v->a[77474] = anon_sym_BQUOTE;
	v->a[77475] = actions(3236);
	v->a[77476] = 1;
	v->a[77477] = anon_sym_DOLLAR;
	v->a[77478] = actions(3238);
	v->a[77479] = 1;
	small_parse_table_3874(v);
}

void	small_parse_table_3874(t_small_parse_table_array *v)
{
	v->a[77480] = anon_sym_DQUOTE;
	v->a[77481] = state(1649);
	v->a[77482] = 1;
	v->a[77483] = aux_sym_string_repeat1;
	v->a[77484] = state(1748);
	v->a[77485] = 4;
	v->a[77486] = sym_arithmetic_expansion;
	v->a[77487] = sym_simple_expansion;
	v->a[77488] = sym_expansion;
	v->a[77489] = sym_command_substitution;
	v->a[77490] = 4;
	v->a[77491] = actions(3);
	v->a[77492] = 1;
	v->a[77493] = sym_comment;
	v->a[77494] = actions(1827);
	v->a[77495] = 1;
	v->a[77496] = sym_variable_name;
	v->a[77497] = actions(1825);
	v->a[77498] = 2;
	v->a[77499] = aux_sym__simple_variable_name_token1;
	small_parse_table_3875(v);
}

/* EOF small_parse_table_774.c */
