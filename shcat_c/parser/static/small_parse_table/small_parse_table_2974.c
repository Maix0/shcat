/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2974.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14870(t_small_parse_table_array *v)
{
	v->a[297400] = 12;
	v->a[297401] = actions(3);
	v->a[297402] = 1;
	v->a[297403] = sym_comment;
	v->a[297404] = actions(13060);
	v->a[297405] = 1;
	v->a[297406] = anon_sym_DOLLAR_LBRACK;
	v->a[297407] = actions(13066);
	v->a[297408] = 1;
	v->a[297409] = sym_string_content;
	v->a[297410] = actions(13068);
	v->a[297411] = 1;
	v->a[297412] = anon_sym_DOLLAR_LBRACE;
	v->a[297413] = actions(13070);
	v->a[297414] = 1;
	v->a[297415] = anon_sym_DOLLAR_LPAREN;
	v->a[297416] = actions(13072);
	v->a[297417] = 1;
	v->a[297418] = anon_sym_BQUOTE;
	v->a[297419] = actions(13074);
	small_parse_table_14871(v);
}

void	small_parse_table_14871(t_small_parse_table_array *v)
{
	v->a[297420] = 1;
	v->a[297421] = anon_sym_DOLLAR_BQUOTE;
	v->a[297422] = actions(13406);
	v->a[297423] = 1;
	v->a[297424] = anon_sym_DOLLAR;
	v->a[297425] = actions(13408);
	v->a[297426] = 1;
	v->a[297427] = anon_sym_DQUOTE;
	v->a[297428] = state(5714);
	v->a[297429] = 1;
	v->a[297430] = aux_sym_string_repeat1;
	v->a[297431] = actions(13058);
	v->a[297432] = 2;
	v->a[297433] = anon_sym_LPAREN_LPAREN;
	v->a[297434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[297435] = state(6127);
	v->a[297436] = 4;
	v->a[297437] = sym_arithmetic_expansion;
	v->a[297438] = sym_simple_expansion;
	v->a[297439] = sym_expansion;
	small_parse_table_14872(v);
}

void	small_parse_table_14872(t_small_parse_table_array *v)
{
	v->a[297440] = sym_command_substitution;
	v->a[297441] = 12;
	v->a[297442] = actions(3);
	v->a[297443] = 1;
	v->a[297444] = sym_comment;
	v->a[297445] = actions(13060);
	v->a[297446] = 1;
	v->a[297447] = anon_sym_DOLLAR_LBRACK;
	v->a[297448] = actions(13066);
	v->a[297449] = 1;
	v->a[297450] = sym_string_content;
	v->a[297451] = actions(13068);
	v->a[297452] = 1;
	v->a[297453] = anon_sym_DOLLAR_LBRACE;
	v->a[297454] = actions(13070);
	v->a[297455] = 1;
	v->a[297456] = anon_sym_DOLLAR_LPAREN;
	v->a[297457] = actions(13072);
	v->a[297458] = 1;
	v->a[297459] = anon_sym_BQUOTE;
	small_parse_table_14873(v);
}

void	small_parse_table_14873(t_small_parse_table_array *v)
{
	v->a[297460] = actions(13074);
	v->a[297461] = 1;
	v->a[297462] = anon_sym_DOLLAR_BQUOTE;
	v->a[297463] = actions(13410);
	v->a[297464] = 1;
	v->a[297465] = anon_sym_DOLLAR;
	v->a[297466] = actions(13412);
	v->a[297467] = 1;
	v->a[297468] = anon_sym_DQUOTE;
	v->a[297469] = state(5703);
	v->a[297470] = 1;
	v->a[297471] = aux_sym_string_repeat1;
	v->a[297472] = actions(13058);
	v->a[297473] = 2;
	v->a[297474] = anon_sym_LPAREN_LPAREN;
	v->a[297475] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[297476] = state(6127);
	v->a[297477] = 4;
	v->a[297478] = sym_arithmetic_expansion;
	v->a[297479] = sym_simple_expansion;
	small_parse_table_14874(v);
}

void	small_parse_table_14874(t_small_parse_table_array *v)
{
	v->a[297480] = sym_expansion;
	v->a[297481] = sym_command_substitution;
	v->a[297482] = 12;
	v->a[297483] = actions(3);
	v->a[297484] = 1;
	v->a[297485] = sym_comment;
	v->a[297486] = actions(13060);
	v->a[297487] = 1;
	v->a[297488] = anon_sym_DOLLAR_LBRACK;
	v->a[297489] = actions(13066);
	v->a[297490] = 1;
	v->a[297491] = sym_string_content;
	v->a[297492] = actions(13068);
	v->a[297493] = 1;
	v->a[297494] = anon_sym_DOLLAR_LBRACE;
	v->a[297495] = actions(13070);
	v->a[297496] = 1;
	v->a[297497] = anon_sym_DOLLAR_LPAREN;
	v->a[297498] = actions(13072);
	v->a[297499] = 1;
	small_parse_table_14875(v);
}

/* EOF small_parse_table_2974.c */
