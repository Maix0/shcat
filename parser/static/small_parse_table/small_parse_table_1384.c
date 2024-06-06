/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1384.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6920(t_small_parse_table_array *v)
{
	v->a[138400] = 1;
	v->a[138401] = aux_sym_string_repeat1;
	v->a[138402] = state(3218);
	v->a[138403] = 4;
	v->a[138404] = sym_arithmetic_expansion;
	v->a[138405] = sym_simple_expansion;
	v->a[138406] = sym_expansion;
	v->a[138407] = sym_command_substitution;
	v->a[138408] = 7;
	v->a[138409] = actions(3);
	v->a[138410] = 1;
	v->a[138411] = sym_comment;
	v->a[138412] = actions(7754);
	v->a[138413] = 1;
	v->a[138414] = aux_sym__simple_variable_name_token1;
	v->a[138415] = actions(7758);
	v->a[138416] = 1;
	v->a[138417] = sym_variable_name;
	v->a[138418] = actions(8097);
	v->a[138419] = 1;
	small_parse_table_6921(v);
}

void	small_parse_table_6921(t_small_parse_table_array *v)
{
	v->a[138420] = anon_sym_RBRACE3;
	v->a[138421] = state(3642);
	v->a[138422] = 1;
	v->a[138423] = sym__expansion_body;
	v->a[138424] = actions(7756);
	v->a[138425] = 2;
	v->a[138426] = anon_sym_0;
	v->a[138427] = anon_sym__;
	v->a[138428] = actions(7750);
	v->a[138429] = 7;
	v->a[138430] = anon_sym_BANG;
	v->a[138431] = anon_sym_DASH;
	v->a[138432] = anon_sym_STAR;
	v->a[138433] = anon_sym_QMARK;
	v->a[138434] = anon_sym_DOLLAR;
	v->a[138435] = anon_sym_POUND;
	v->a[138436] = anon_sym_AT;
	v->a[138437] = 11;
	v->a[138438] = actions(3);
	v->a[138439] = 1;
	small_parse_table_6922(v);
}

void	small_parse_table_6922(t_small_parse_table_array *v)
{
	v->a[138440] = sym_comment;
	v->a[138441] = actions(7760);
	v->a[138442] = 1;
	v->a[138443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138444] = actions(7766);
	v->a[138445] = 1;
	v->a[138446] = sym_string_content;
	v->a[138447] = actions(7768);
	v->a[138448] = 1;
	v->a[138449] = anon_sym_DOLLAR_LBRACE;
	v->a[138450] = actions(7770);
	v->a[138451] = 1;
	v->a[138452] = anon_sym_DOLLAR_LPAREN;
	v->a[138453] = actions(7772);
	v->a[138454] = 1;
	v->a[138455] = anon_sym_BQUOTE;
	v->a[138456] = actions(7774);
	v->a[138457] = 1;
	v->a[138458] = anon_sym_DOLLAR_BQUOTE;
	v->a[138459] = actions(8099);
	small_parse_table_6923(v);
}

void	small_parse_table_6923(t_small_parse_table_array *v)
{
	v->a[138460] = 1;
	v->a[138461] = anon_sym_DOLLAR;
	v->a[138462] = actions(8101);
	v->a[138463] = 1;
	v->a[138464] = anon_sym_DQUOTE;
	v->a[138465] = state(3079);
	v->a[138466] = 1;
	v->a[138467] = aux_sym_string_repeat1;
	v->a[138468] = state(3218);
	v->a[138469] = 4;
	v->a[138470] = sym_arithmetic_expansion;
	v->a[138471] = sym_simple_expansion;
	v->a[138472] = sym_expansion;
	v->a[138473] = sym_command_substitution;
	v->a[138474] = 11;
	v->a[138475] = actions(3);
	v->a[138476] = 1;
	v->a[138477] = sym_comment;
	v->a[138478] = actions(7594);
	v->a[138479] = 1;
	small_parse_table_6924(v);
}

void	small_parse_table_6924(t_small_parse_table_array *v)
{
	v->a[138480] = anon_sym_DQUOTE;
	v->a[138481] = actions(7760);
	v->a[138482] = 1;
	v->a[138483] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[138484] = actions(7766);
	v->a[138485] = 1;
	v->a[138486] = sym_string_content;
	v->a[138487] = actions(7768);
	v->a[138488] = 1;
	v->a[138489] = anon_sym_DOLLAR_LBRACE;
	v->a[138490] = actions(7770);
	v->a[138491] = 1;
	v->a[138492] = anon_sym_DOLLAR_LPAREN;
	v->a[138493] = actions(7772);
	v->a[138494] = 1;
	v->a[138495] = anon_sym_BQUOTE;
	v->a[138496] = actions(7774);
	v->a[138497] = 1;
	v->a[138498] = anon_sym_DOLLAR_BQUOTE;
	v->a[138499] = actions(8103);
	small_parse_table_6925(v);
}

/* EOF small_parse_table_1384.c */
