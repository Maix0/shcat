/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_884.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4420(t_small_parse_table_array *v)
{
	v->a[88400] = state(1738);
	v->a[88401] = 1;
	v->a[88402] = aux_sym_string_repeat1;
	v->a[88403] = state(1869);
	v->a[88404] = 4;
	v->a[88405] = sym_arithmetic_expansion;
	v->a[88406] = sym_simple_expansion;
	v->a[88407] = sym_expansion;
	v->a[88408] = sym_command_substitution;
	v->a[88409] = 10;
	v->a[88410] = actions(3);
	v->a[88411] = 1;
	v->a[88412] = sym_comment;
	v->a[88413] = actions(3498);
	v->a[88414] = 1;
	v->a[88415] = anon_sym_DQUOTE;
	v->a[88416] = actions(3712);
	v->a[88417] = 1;
	v->a[88418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88419] = actions(3716);
	small_parse_table_4421(v);
}

void	small_parse_table_4421(t_small_parse_table_array *v)
{
	v->a[88420] = 1;
	v->a[88421] = sym_string_content;
	v->a[88422] = actions(3718);
	v->a[88423] = 1;
	v->a[88424] = anon_sym_DOLLAR_LBRACE;
	v->a[88425] = actions(3720);
	v->a[88426] = 1;
	v->a[88427] = anon_sym_DOLLAR_LPAREN;
	v->a[88428] = actions(3722);
	v->a[88429] = 1;
	v->a[88430] = anon_sym_BQUOTE;
	v->a[88431] = actions(3798);
	v->a[88432] = 1;
	v->a[88433] = anon_sym_DOLLAR;
	v->a[88434] = state(1738);
	v->a[88435] = 1;
	v->a[88436] = aux_sym_string_repeat1;
	v->a[88437] = state(1869);
	v->a[88438] = 4;
	v->a[88439] = sym_arithmetic_expansion;
	small_parse_table_4422(v);
}

void	small_parse_table_4422(t_small_parse_table_array *v)
{
	v->a[88440] = sym_simple_expansion;
	v->a[88441] = sym_expansion;
	v->a[88442] = sym_command_substitution;
	v->a[88443] = 4;
	v->a[88444] = actions(3);
	v->a[88445] = 1;
	v->a[88446] = sym_comment;
	v->a[88447] = actions(433);
	v->a[88448] = 1;
	v->a[88449] = sym_variable_name;
	v->a[88450] = actions(431);
	v->a[88451] = 2;
	v->a[88452] = aux_sym__simple_variable_name_token1;
	v->a[88453] = aux_sym__multiline_variable_name_token1;
	v->a[88454] = actions(429);
	v->a[88455] = 9;
	v->a[88456] = anon_sym_BANG;
	v->a[88457] = anon_sym_DASH;
	v->a[88458] = anon_sym_STAR;
	v->a[88459] = anon_sym_QMARK;
	small_parse_table_4423(v);
}

void	small_parse_table_4423(t_small_parse_table_array *v)
{
	v->a[88460] = anon_sym_DOLLAR;
	v->a[88461] = anon_sym_POUND;
	v->a[88462] = anon_sym_AT;
	v->a[88463] = anon_sym_0;
	v->a[88464] = anon_sym__;
	v->a[88465] = 10;
	v->a[88466] = actions(3);
	v->a[88467] = 1;
	v->a[88468] = sym_comment;
	v->a[88469] = actions(3712);
	v->a[88470] = 1;
	v->a[88471] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88472] = actions(3716);
	v->a[88473] = 1;
	v->a[88474] = sym_string_content;
	v->a[88475] = actions(3718);
	v->a[88476] = 1;
	v->a[88477] = anon_sym_DOLLAR_LBRACE;
	v->a[88478] = actions(3720);
	v->a[88479] = 1;
	small_parse_table_4424(v);
}

void	small_parse_table_4424(t_small_parse_table_array *v)
{
	v->a[88480] = anon_sym_DOLLAR_LPAREN;
	v->a[88481] = actions(3722);
	v->a[88482] = 1;
	v->a[88483] = anon_sym_BQUOTE;
	v->a[88484] = actions(3800);
	v->a[88485] = 1;
	v->a[88486] = anon_sym_DOLLAR;
	v->a[88487] = actions(3802);
	v->a[88488] = 1;
	v->a[88489] = anon_sym_DQUOTE;
	v->a[88490] = state(1751);
	v->a[88491] = 1;
	v->a[88492] = aux_sym_string_repeat1;
	v->a[88493] = state(1869);
	v->a[88494] = 4;
	v->a[88495] = sym_arithmetic_expansion;
	v->a[88496] = sym_simple_expansion;
	v->a[88497] = sym_expansion;
	v->a[88498] = sym_command_substitution;
	v->a[88499] = 10;
	small_parse_table_4425(v);
}

/* EOF small_parse_table_884.c */
