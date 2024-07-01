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
	v->a[88400] = anon_sym_DOLLAR_LBRACE;
	v->a[88401] = anon_sym_DOLLAR_LPAREN;
	v->a[88402] = anon_sym_BQUOTE;
	v->a[88403] = sym_word;
	v->a[88404] = 4;
	v->a[88405] = actions(3);
	v->a[88406] = 1;
	v->a[88407] = sym_comment;
	v->a[88408] = actions(399);
	v->a[88409] = 1;
	v->a[88410] = sym_variable_name;
	v->a[88411] = actions(397);
	v->a[88412] = 2;
	v->a[88413] = aux_sym__simple_variable_name_token1;
	v->a[88414] = aux_sym__multiline_variable_name_token1;
	v->a[88415] = actions(395);
	v->a[88416] = 9;
	v->a[88417] = anon_sym_BANG;
	v->a[88418] = anon_sym_DASH;
	v->a[88419] = anon_sym_STAR;
	small_parse_table_4421(v);
}

void	small_parse_table_4421(t_small_parse_table_array *v)
{
	v->a[88420] = anon_sym_QMARK;
	v->a[88421] = anon_sym_DOLLAR;
	v->a[88422] = anon_sym_POUND;
	v->a[88423] = anon_sym_AT;
	v->a[88424] = anon_sym_0;
	v->a[88425] = anon_sym__;
	v->a[88426] = 10;
	v->a[88427] = actions(3);
	v->a[88428] = 1;
	v->a[88429] = sym_comment;
	v->a[88430] = actions(3414);
	v->a[88431] = 1;
	v->a[88432] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88433] = actions(3420);
	v->a[88434] = 1;
	v->a[88435] = sym_string_content;
	v->a[88436] = actions(3422);
	v->a[88437] = 1;
	v->a[88438] = anon_sym_DOLLAR_LBRACE;
	v->a[88439] = actions(3424);
	small_parse_table_4422(v);
}

void	small_parse_table_4422(t_small_parse_table_array *v)
{
	v->a[88440] = 1;
	v->a[88441] = anon_sym_DOLLAR_LPAREN;
	v->a[88442] = actions(3426);
	v->a[88443] = 1;
	v->a[88444] = anon_sym_BQUOTE;
	v->a[88445] = actions(3680);
	v->a[88446] = 1;
	v->a[88447] = anon_sym_DOLLAR;
	v->a[88448] = actions(3682);
	v->a[88449] = 1;
	v->a[88450] = anon_sym_DQUOTE;
	v->a[88451] = state(1897);
	v->a[88452] = 1;
	v->a[88453] = aux_sym_string_repeat1;
	v->a[88454] = state(1959);
	v->a[88455] = 4;
	v->a[88456] = sym_arithmetic_expansion;
	v->a[88457] = sym_simple_expansion;
	v->a[88458] = sym_expansion;
	v->a[88459] = sym_command_substitution;
	small_parse_table_4423(v);
}

void	small_parse_table_4423(t_small_parse_table_array *v)
{
	v->a[88460] = 10;
	v->a[88461] = actions(3);
	v->a[88462] = 1;
	v->a[88463] = sym_comment;
	v->a[88464] = actions(3414);
	v->a[88465] = 1;
	v->a[88466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88467] = actions(3420);
	v->a[88468] = 1;
	v->a[88469] = sym_string_content;
	v->a[88470] = actions(3422);
	v->a[88471] = 1;
	v->a[88472] = anon_sym_DOLLAR_LBRACE;
	v->a[88473] = actions(3424);
	v->a[88474] = 1;
	v->a[88475] = anon_sym_DOLLAR_LPAREN;
	v->a[88476] = actions(3426);
	v->a[88477] = 1;
	v->a[88478] = anon_sym_BQUOTE;
	v->a[88479] = actions(3684);
	small_parse_table_4424(v);
}

void	small_parse_table_4424(t_small_parse_table_array *v)
{
	v->a[88480] = 1;
	v->a[88481] = anon_sym_DOLLAR;
	v->a[88482] = actions(3686);
	v->a[88483] = 1;
	v->a[88484] = anon_sym_DQUOTE;
	v->a[88485] = state(1914);
	v->a[88486] = 1;
	v->a[88487] = aux_sym_string_repeat1;
	v->a[88488] = state(1959);
	v->a[88489] = 4;
	v->a[88490] = sym_arithmetic_expansion;
	v->a[88491] = sym_simple_expansion;
	v->a[88492] = sym_expansion;
	v->a[88493] = sym_command_substitution;
	v->a[88494] = 4;
	v->a[88495] = actions(3);
	v->a[88496] = 1;
	v->a[88497] = sym_comment;
	v->a[88498] = actions(3676);
	v->a[88499] = 1;
	small_parse_table_4425(v);
}

/* EOF small_parse_table_884.c */
