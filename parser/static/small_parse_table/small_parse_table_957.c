/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_957.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4785(t_small_parse_table_array *v)
{
	v->a[95700] = anon_sym_DQUOTE;
	v->a[95701] = state(1986);
	v->a[95702] = 1;
	v->a[95703] = aux_sym_string_repeat1;
	v->a[95704] = state(2107);
	v->a[95705] = 4;
	v->a[95706] = sym_arithmetic_expansion;
	v->a[95707] = sym_simple_expansion;
	v->a[95708] = sym_expansion;
	v->a[95709] = sym_command_substitution;
	v->a[95710] = 4;
	v->a[95711] = actions(3);
	v->a[95712] = 1;
	v->a[95713] = sym_comment;
	v->a[95714] = actions(4040);
	v->a[95715] = 1;
	v->a[95716] = sym_variable_name;
	v->a[95717] = actions(4038);
	v->a[95718] = 2;
	v->a[95719] = aux_sym__simple_variable_name_token1;
	small_parse_table_4786(v);
}

void	small_parse_table_4786(t_small_parse_table_array *v)
{
	v->a[95720] = aux_sym__multiline_variable_name_token1;
	v->a[95721] = actions(4036);
	v->a[95722] = 9;
	v->a[95723] = anon_sym_BANG;
	v->a[95724] = anon_sym_DASH;
	v->a[95725] = anon_sym_STAR;
	v->a[95726] = anon_sym_QMARK;
	v->a[95727] = anon_sym_DOLLAR;
	v->a[95728] = anon_sym_POUND;
	v->a[95729] = anon_sym_AT;
	v->a[95730] = anon_sym_0;
	v->a[95731] = anon_sym__;
	v->a[95732] = 10;
	v->a[95733] = actions(3);
	v->a[95734] = 1;
	v->a[95735] = sym_comment;
	v->a[95736] = actions(3856);
	v->a[95737] = 1;
	v->a[95738] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95739] = actions(3862);
	small_parse_table_4787(v);
}

void	small_parse_table_4787(t_small_parse_table_array *v)
{
	v->a[95740] = 1;
	v->a[95741] = sym_string_content;
	v->a[95742] = actions(3864);
	v->a[95743] = 1;
	v->a[95744] = anon_sym_DOLLAR_LBRACE;
	v->a[95745] = actions(3866);
	v->a[95746] = 1;
	v->a[95747] = anon_sym_DOLLAR_LPAREN;
	v->a[95748] = actions(3868);
	v->a[95749] = 1;
	v->a[95750] = anon_sym_BQUOTE;
	v->a[95751] = actions(4042);
	v->a[95752] = 1;
	v->a[95753] = anon_sym_DOLLAR;
	v->a[95754] = actions(4044);
	v->a[95755] = 1;
	v->a[95756] = anon_sym_DQUOTE;
	v->a[95757] = state(1987);
	v->a[95758] = 1;
	v->a[95759] = aux_sym_string_repeat1;
	small_parse_table_4788(v);
}

void	small_parse_table_4788(t_small_parse_table_array *v)
{
	v->a[95760] = state(2107);
	v->a[95761] = 4;
	v->a[95762] = sym_arithmetic_expansion;
	v->a[95763] = sym_simple_expansion;
	v->a[95764] = sym_expansion;
	v->a[95765] = sym_command_substitution;
	v->a[95766] = 10;
	v->a[95767] = actions(3);
	v->a[95768] = 1;
	v->a[95769] = sym_comment;
	v->a[95770] = actions(3856);
	v->a[95771] = 1;
	v->a[95772] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95773] = actions(3862);
	v->a[95774] = 1;
	v->a[95775] = sym_string_content;
	v->a[95776] = actions(3864);
	v->a[95777] = 1;
	v->a[95778] = anon_sym_DOLLAR_LBRACE;
	v->a[95779] = actions(3866);
	small_parse_table_4789(v);
}

void	small_parse_table_4789(t_small_parse_table_array *v)
{
	v->a[95780] = 1;
	v->a[95781] = anon_sym_DOLLAR_LPAREN;
	v->a[95782] = actions(3868);
	v->a[95783] = 1;
	v->a[95784] = anon_sym_BQUOTE;
	v->a[95785] = actions(4046);
	v->a[95786] = 1;
	v->a[95787] = anon_sym_DOLLAR;
	v->a[95788] = actions(4048);
	v->a[95789] = 1;
	v->a[95790] = anon_sym_DQUOTE;
	v->a[95791] = state(2003);
	v->a[95792] = 1;
	v->a[95793] = aux_sym_string_repeat1;
	v->a[95794] = state(2107);
	v->a[95795] = 4;
	v->a[95796] = sym_arithmetic_expansion;
	v->a[95797] = sym_simple_expansion;
	v->a[95798] = sym_expansion;
	v->a[95799] = sym_command_substitution;
	small_parse_table_4790(v);
}

/* EOF small_parse_table_957.c */
