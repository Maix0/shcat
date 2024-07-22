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
	v->a[77400] = anon_sym_esac;
	v->a[77401] = actions(3358);
	v->a[77402] = 1;
	v->a[77403] = sym_extglob_pattern;
	v->a[77404] = actions(3354);
	v->a[77405] = 10;
	v->a[77406] = anon_sym_LPAREN;
	v->a[77407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77408] = anon_sym_DOLLAR;
	v->a[77409] = anon_sym_DQUOTE;
	v->a[77410] = sym_raw_string;
	v->a[77411] = sym_number;
	v->a[77412] = anon_sym_DOLLAR_LBRACE;
	v->a[77413] = anon_sym_DOLLAR_LPAREN;
	v->a[77414] = anon_sym_BQUOTE;
	v->a[77415] = sym_word;
	v->a[77416] = 10;
	v->a[77417] = actions(3);
	v->a[77418] = 1;
	v->a[77419] = sym_comment;
	small_parse_table_3871(v);
}

void	small_parse_table_3871(t_small_parse_table_array *v)
{
	v->a[77420] = actions(3058);
	v->a[77421] = 1;
	v->a[77422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77423] = actions(3064);
	v->a[77424] = 1;
	v->a[77425] = sym_string_content;
	v->a[77426] = actions(3066);
	v->a[77427] = 1;
	v->a[77428] = anon_sym_DOLLAR_LBRACE;
	v->a[77429] = actions(3068);
	v->a[77430] = 1;
	v->a[77431] = anon_sym_DOLLAR_LPAREN;
	v->a[77432] = actions(3070);
	v->a[77433] = 1;
	v->a[77434] = anon_sym_BQUOTE;
	v->a[77435] = actions(3364);
	v->a[77436] = 1;
	v->a[77437] = anon_sym_DOLLAR;
	v->a[77438] = actions(3366);
	v->a[77439] = 1;
	small_parse_table_3872(v);
}

void	small_parse_table_3872(t_small_parse_table_array *v)
{
	v->a[77440] = anon_sym_DQUOTE;
	v->a[77441] = state(1673);
	v->a[77442] = 1;
	v->a[77443] = aux_sym_string_repeat1;
	v->a[77444] = state(1748);
	v->a[77445] = 4;
	v->a[77446] = sym_arithmetic_expansion;
	v->a[77447] = sym_simple_expansion;
	v->a[77448] = sym_expansion;
	v->a[77449] = sym_command_substitution;
	v->a[77450] = 8;
	v->a[77451] = actions(3);
	v->a[77452] = 1;
	v->a[77453] = sym_comment;
	v->a[77454] = actions(3040);
	v->a[77455] = 1;
	v->a[77456] = anon_sym_POUND;
	v->a[77457] = actions(3042);
	v->a[77458] = 1;
	v->a[77459] = aux_sym__simple_variable_name_token1;
	small_parse_table_3873(v);
}

void	small_parse_table_3873(t_small_parse_table_array *v)
{
	v->a[77460] = actions(3044);
	v->a[77461] = 1;
	v->a[77462] = anon_sym_0;
	v->a[77463] = actions(3046);
	v->a[77464] = 1;
	v->a[77465] = sym_variable_name;
	v->a[77466] = actions(3368);
	v->a[77467] = 1;
	v->a[77468] = anon_sym_RBRACE;
	v->a[77469] = state(1977);
	v->a[77470] = 1;
	v->a[77471] = sym__expansion_body;
	v->a[77472] = actions(3038);
	v->a[77473] = 6;
	v->a[77474] = anon_sym_BANG;
	v->a[77475] = anon_sym_DASH;
	v->a[77476] = anon_sym_STAR;
	v->a[77477] = anon_sym_QMARK;
	v->a[77478] = anon_sym_DOLLAR;
	v->a[77479] = anon_sym_AT;
	small_parse_table_3874(v);
}

void	small_parse_table_3874(t_small_parse_table_array *v)
{
	v->a[77480] = 10;
	v->a[77481] = actions(3);
	v->a[77482] = 1;
	v->a[77483] = sym_comment;
	v->a[77484] = actions(3058);
	v->a[77485] = 1;
	v->a[77486] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77487] = actions(3064);
	v->a[77488] = 1;
	v->a[77489] = sym_string_content;
	v->a[77490] = actions(3066);
	v->a[77491] = 1;
	v->a[77492] = anon_sym_DOLLAR_LBRACE;
	v->a[77493] = actions(3068);
	v->a[77494] = 1;
	v->a[77495] = anon_sym_DOLLAR_LPAREN;
	v->a[77496] = actions(3070);
	v->a[77497] = 1;
	v->a[77498] = anon_sym_BQUOTE;
	v->a[77499] = actions(3370);
	small_parse_table_3875(v);
}

/* EOF small_parse_table_774.c */
