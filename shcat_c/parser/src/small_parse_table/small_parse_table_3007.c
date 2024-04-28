/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3007.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15035(t_small_parse_table_array *v)
{
	v->a[300700] = sym_simple_expansion;
	v->a[300701] = sym_expansion;
	v->a[300702] = sym_command_substitution;
	v->a[300703] = 12;
	v->a[300704] = actions(3);
	v->a[300705] = 1;
	v->a[300706] = sym_comment;
	v->a[300707] = actions(13060);
	v->a[300708] = 1;
	v->a[300709] = anon_sym_DOLLAR_LBRACK;
	v->a[300710] = actions(13066);
	v->a[300711] = 1;
	v->a[300712] = sym_string_content;
	v->a[300713] = actions(13068);
	v->a[300714] = 1;
	v->a[300715] = anon_sym_DOLLAR_LBRACE;
	v->a[300716] = actions(13070);
	v->a[300717] = 1;
	v->a[300718] = anon_sym_DOLLAR_LPAREN;
	v->a[300719] = actions(13072);
	small_parse_table_15036(v);
}

void	small_parse_table_15036(t_small_parse_table_array *v)
{
	v->a[300720] = 1;
	v->a[300721] = anon_sym_BQUOTE;
	v->a[300722] = actions(13074);
	v->a[300723] = 1;
	v->a[300724] = anon_sym_DOLLAR_BQUOTE;
	v->a[300725] = actions(13726);
	v->a[300726] = 1;
	v->a[300727] = anon_sym_DOLLAR;
	v->a[300728] = actions(13728);
	v->a[300729] = 1;
	v->a[300730] = anon_sym_DQUOTE;
	v->a[300731] = state(5768);
	v->a[300732] = 1;
	v->a[300733] = aux_sym_string_repeat1;
	v->a[300734] = actions(13058);
	v->a[300735] = 2;
	v->a[300736] = anon_sym_LPAREN_LPAREN;
	v->a[300737] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300738] = state(6127);
	v->a[300739] = 4;
	small_parse_table_15037(v);
}

void	small_parse_table_15037(t_small_parse_table_array *v)
{
	v->a[300740] = sym_arithmetic_expansion;
	v->a[300741] = sym_simple_expansion;
	v->a[300742] = sym_expansion;
	v->a[300743] = sym_command_substitution;
	v->a[300744] = 6;
	v->a[300745] = actions(3);
	v->a[300746] = 1;
	v->a[300747] = sym_comment;
	v->a[300748] = actions(3775);
	v->a[300749] = 1;
	v->a[300750] = anon_sym_DQUOTE;
	v->a[300751] = actions(3779);
	v->a[300752] = 1;
	v->a[300753] = sym_variable_name;
	v->a[300754] = state(2093);
	v->a[300755] = 1;
	v->a[300756] = sym_string;
	v->a[300757] = actions(3777);
	v->a[300758] = 2;
	v->a[300759] = aux_sym__simple_variable_name_token1;
	small_parse_table_15038(v);
}

void	small_parse_table_15038(t_small_parse_table_array *v)
{
	v->a[300760] = aux_sym__multiline_variable_name_token1;
	v->a[300761] = actions(3773);
	v->a[300762] = 9;
	v->a[300763] = anon_sym_DASH;
	v->a[300764] = anon_sym_STAR;
	v->a[300765] = anon_sym_BANG;
	v->a[300766] = anon_sym_QMARK;
	v->a[300767] = anon_sym_DOLLAR;
	v->a[300768] = anon_sym_POUND;
	v->a[300769] = anon_sym_AT2;
	v->a[300770] = anon_sym_0;
	v->a[300771] = anon_sym__;
	v->a[300772] = 6;
	v->a[300773] = actions(3);
	v->a[300774] = 1;
	v->a[300775] = sym_comment;
	v->a[300776] = actions(13170);
	v->a[300777] = 1;
	v->a[300778] = anon_sym_DQUOTE;
	v->a[300779] = actions(13732);
	small_parse_table_15039(v);
}

void	small_parse_table_15039(t_small_parse_table_array *v)
{
	v->a[300780] = 1;
	v->a[300781] = sym_string_content;
	v->a[300782] = actions(13736);
	v->a[300783] = 1;
	v->a[300784] = sym_variable_name;
	v->a[300785] = actions(13734);
	v->a[300786] = 2;
	v->a[300787] = aux_sym__simple_variable_name_token1;
	v->a[300788] = aux_sym__multiline_variable_name_token1;
	v->a[300789] = actions(13730);
	v->a[300790] = 9;
	v->a[300791] = anon_sym_DASH;
	v->a[300792] = anon_sym_STAR;
	v->a[300793] = anon_sym_BANG;
	v->a[300794] = anon_sym_QMARK;
	v->a[300795] = anon_sym_DOLLAR;
	v->a[300796] = anon_sym_POUND;
	v->a[300797] = anon_sym_AT2;
	v->a[300798] = anon_sym_0;
	v->a[300799] = anon_sym__;
	small_parse_table_15040(v);
}

/* EOF small_parse_table_3007.c */
