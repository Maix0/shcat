/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_754.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3770(t_small_parse_table_array *v)
{
	v->a[75400] = actions(3136);
	v->a[75401] = 1;
	v->a[75402] = anon_sym_RBRACE;
	v->a[75403] = state(2136);
	v->a[75404] = 1;
	v->a[75405] = sym__expansion_body;
	v->a[75406] = actions(3038);
	v->a[75407] = 6;
	v->a[75408] = anon_sym_BANG;
	v->a[75409] = anon_sym_DASH;
	v->a[75410] = anon_sym_STAR;
	v->a[75411] = anon_sym_QMARK;
	v->a[75412] = anon_sym_DOLLAR;
	v->a[75413] = anon_sym_AT;
	v->a[75414] = 10;
	v->a[75415] = actions(3);
	v->a[75416] = 1;
	v->a[75417] = sym_comment;
	v->a[75418] = actions(3058);
	v->a[75419] = 1;
	small_parse_table_3771(v);
}

void	small_parse_table_3771(t_small_parse_table_array *v)
{
	v->a[75420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75421] = actions(3064);
	v->a[75422] = 1;
	v->a[75423] = sym_string_content;
	v->a[75424] = actions(3066);
	v->a[75425] = 1;
	v->a[75426] = anon_sym_DOLLAR_LBRACE;
	v->a[75427] = actions(3068);
	v->a[75428] = 1;
	v->a[75429] = anon_sym_DOLLAR_LPAREN;
	v->a[75430] = actions(3070);
	v->a[75431] = 1;
	v->a[75432] = anon_sym_BQUOTE;
	v->a[75433] = actions(3138);
	v->a[75434] = 1;
	v->a[75435] = anon_sym_DOLLAR;
	v->a[75436] = actions(3140);
	v->a[75437] = 1;
	v->a[75438] = anon_sym_DQUOTE;
	v->a[75439] = state(1597);
	small_parse_table_3772(v);
}

void	small_parse_table_3772(t_small_parse_table_array *v)
{
	v->a[75440] = 1;
	v->a[75441] = aux_sym_string_repeat1;
	v->a[75442] = state(1748);
	v->a[75443] = 4;
	v->a[75444] = sym_arithmetic_expansion;
	v->a[75445] = sym_simple_expansion;
	v->a[75446] = sym_expansion;
	v->a[75447] = sym_command_substitution;
	v->a[75448] = 8;
	v->a[75449] = actions(3);
	v->a[75450] = 1;
	v->a[75451] = sym_comment;
	v->a[75452] = actions(3040);
	v->a[75453] = 1;
	v->a[75454] = anon_sym_POUND;
	v->a[75455] = actions(3042);
	v->a[75456] = 1;
	v->a[75457] = aux_sym__simple_variable_name_token1;
	v->a[75458] = actions(3044);
	v->a[75459] = 1;
	small_parse_table_3773(v);
}

void	small_parse_table_3773(t_small_parse_table_array *v)
{
	v->a[75460] = anon_sym_0;
	v->a[75461] = actions(3046);
	v->a[75462] = 1;
	v->a[75463] = sym_variable_name;
	v->a[75464] = actions(3142);
	v->a[75465] = 1;
	v->a[75466] = anon_sym_RBRACE;
	v->a[75467] = state(2106);
	v->a[75468] = 1;
	v->a[75469] = sym__expansion_body;
	v->a[75470] = actions(3038);
	v->a[75471] = 6;
	v->a[75472] = anon_sym_BANG;
	v->a[75473] = anon_sym_DASH;
	v->a[75474] = anon_sym_STAR;
	v->a[75475] = anon_sym_QMARK;
	v->a[75476] = anon_sym_DOLLAR;
	v->a[75477] = anon_sym_AT;
	v->a[75478] = 10;
	v->a[75479] = actions(3);
	small_parse_table_3774(v);
}

void	small_parse_table_3774(t_small_parse_table_array *v)
{
	v->a[75480] = 1;
	v->a[75481] = sym_comment;
	v->a[75482] = actions(3058);
	v->a[75483] = 1;
	v->a[75484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75485] = actions(3064);
	v->a[75486] = 1;
	v->a[75487] = sym_string_content;
	v->a[75488] = actions(3066);
	v->a[75489] = 1;
	v->a[75490] = anon_sym_DOLLAR_LBRACE;
	v->a[75491] = actions(3068);
	v->a[75492] = 1;
	v->a[75493] = anon_sym_DOLLAR_LPAREN;
	v->a[75494] = actions(3070);
	v->a[75495] = 1;
	v->a[75496] = anon_sym_BQUOTE;
	v->a[75497] = actions(3144);
	v->a[75498] = 1;
	v->a[75499] = anon_sym_DOLLAR;
	small_parse_table_3775(v);
}

/* EOF small_parse_table_754.c */
