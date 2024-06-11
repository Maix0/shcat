/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_944.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4720(t_small_parse_table_array *v)
{
	v->a[94400] = actions(3784);
	v->a[94401] = 1;
	v->a[94402] = sym_variable_name;
	v->a[94403] = actions(3854);
	v->a[94404] = 1;
	v->a[94405] = anon_sym_RBRACE;
	v->a[94406] = state(2375);
	v->a[94407] = 1;
	v->a[94408] = sym__expansion_body;
	v->a[94409] = actions(3782);
	v->a[94410] = 2;
	v->a[94411] = anon_sym_0;
	v->a[94412] = anon_sym__;
	v->a[94413] = actions(3778);
	v->a[94414] = 7;
	v->a[94415] = anon_sym_BANG;
	v->a[94416] = anon_sym_DASH;
	v->a[94417] = anon_sym_STAR;
	v->a[94418] = anon_sym_QMARK;
	v->a[94419] = anon_sym_DOLLAR;
	small_parse_table_4721(v);
}

void	small_parse_table_4721(t_small_parse_table_array *v)
{
	v->a[94420] = anon_sym_POUND;
	v->a[94421] = anon_sym_AT;
	v->a[94422] = 4;
	v->a[94423] = actions(3);
	v->a[94424] = 1;
	v->a[94425] = sym_comment;
	v->a[94426] = actions(553);
	v->a[94427] = 1;
	v->a[94428] = sym_variable_name;
	v->a[94429] = actions(551);
	v->a[94430] = 2;
	v->a[94431] = aux_sym__simple_variable_name_token1;
	v->a[94432] = aux_sym__multiline_variable_name_token1;
	v->a[94433] = actions(549);
	v->a[94434] = 9;
	v->a[94435] = anon_sym_BANG;
	v->a[94436] = anon_sym_DASH;
	v->a[94437] = anon_sym_STAR;
	v->a[94438] = anon_sym_QMARK;
	v->a[94439] = anon_sym_DOLLAR;
	small_parse_table_4722(v);
}

void	small_parse_table_4722(t_small_parse_table_array *v)
{
	v->a[94440] = anon_sym_POUND;
	v->a[94441] = anon_sym_AT;
	v->a[94442] = anon_sym_0;
	v->a[94443] = anon_sym__;
	v->a[94444] = 10;
	v->a[94445] = actions(3);
	v->a[94446] = 1;
	v->a[94447] = sym_comment;
	v->a[94448] = actions(3856);
	v->a[94449] = 1;
	v->a[94450] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94451] = actions(3858);
	v->a[94452] = 1;
	v->a[94453] = anon_sym_DOLLAR;
	v->a[94454] = actions(3860);
	v->a[94455] = 1;
	v->a[94456] = anon_sym_DQUOTE;
	v->a[94457] = actions(3862);
	v->a[94458] = 1;
	v->a[94459] = sym_string_content;
	small_parse_table_4723(v);
}

void	small_parse_table_4723(t_small_parse_table_array *v)
{
	v->a[94460] = actions(3864);
	v->a[94461] = 1;
	v->a[94462] = anon_sym_DOLLAR_LBRACE;
	v->a[94463] = actions(3866);
	v->a[94464] = 1;
	v->a[94465] = anon_sym_DOLLAR_LPAREN;
	v->a[94466] = actions(3868);
	v->a[94467] = 1;
	v->a[94468] = anon_sym_BQUOTE;
	v->a[94469] = state(1987);
	v->a[94470] = 1;
	v->a[94471] = aux_sym_string_repeat1;
	v->a[94472] = state(2107);
	v->a[94473] = 4;
	v->a[94474] = sym_arithmetic_expansion;
	v->a[94475] = sym_simple_expansion;
	v->a[94476] = sym_expansion;
	v->a[94477] = sym_command_substitution;
	v->a[94478] = 10;
	v->a[94479] = actions(3);
	small_parse_table_4724(v);
}

void	small_parse_table_4724(t_small_parse_table_array *v)
{
	v->a[94480] = 1;
	v->a[94481] = sym_comment;
	v->a[94482] = actions(3856);
	v->a[94483] = 1;
	v->a[94484] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94485] = actions(3862);
	v->a[94486] = 1;
	v->a[94487] = sym_string_content;
	v->a[94488] = actions(3864);
	v->a[94489] = 1;
	v->a[94490] = anon_sym_DOLLAR_LBRACE;
	v->a[94491] = actions(3866);
	v->a[94492] = 1;
	v->a[94493] = anon_sym_DOLLAR_LPAREN;
	v->a[94494] = actions(3868);
	v->a[94495] = 1;
	v->a[94496] = anon_sym_BQUOTE;
	v->a[94497] = actions(3870);
	v->a[94498] = 1;
	v->a[94499] = anon_sym_DOLLAR;
	small_parse_table_4725(v);
}

/* EOF small_parse_table_944.c */
