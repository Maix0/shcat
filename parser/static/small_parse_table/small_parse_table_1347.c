/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1347.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6735(t_small_parse_table_array *v)
{
	v->a[134700] = 1;
	v->a[134701] = anon_sym_DOLLAR_LPAREN;
	v->a[134702] = actions(7772);
	v->a[134703] = 1;
	v->a[134704] = anon_sym_BQUOTE;
	v->a[134705] = actions(7774);
	v->a[134706] = 1;
	v->a[134707] = anon_sym_DOLLAR_BQUOTE;
	v->a[134708] = actions(7792);
	v->a[134709] = 1;
	v->a[134710] = anon_sym_DOLLAR;
	v->a[134711] = state(3061);
	v->a[134712] = 1;
	v->a[134713] = aux_sym_string_repeat1;
	v->a[134714] = state(3218);
	v->a[134715] = 4;
	v->a[134716] = sym_arithmetic_expansion;
	v->a[134717] = sym_simple_expansion;
	v->a[134718] = sym_expansion;
	v->a[134719] = sym_command_substitution;
	small_parse_table_6736(v);
}

void	small_parse_table_6736(t_small_parse_table_array *v)
{
	v->a[134720] = 7;
	v->a[134721] = actions(3);
	v->a[134722] = 1;
	v->a[134723] = sym_comment;
	v->a[134724] = actions(7754);
	v->a[134725] = 1;
	v->a[134726] = aux_sym__simple_variable_name_token1;
	v->a[134727] = actions(7758);
	v->a[134728] = 1;
	v->a[134729] = sym_variable_name;
	v->a[134730] = actions(7794);
	v->a[134731] = 1;
	v->a[134732] = anon_sym_RBRACE3;
	v->a[134733] = state(3719);
	v->a[134734] = 1;
	v->a[134735] = sym__expansion_body;
	v->a[134736] = actions(7756);
	v->a[134737] = 2;
	v->a[134738] = anon_sym_0;
	v->a[134739] = anon_sym__;
	small_parse_table_6737(v);
}

void	small_parse_table_6737(t_small_parse_table_array *v)
{
	v->a[134740] = actions(7750);
	v->a[134741] = 7;
	v->a[134742] = anon_sym_BANG;
	v->a[134743] = anon_sym_DASH;
	v->a[134744] = anon_sym_STAR;
	v->a[134745] = anon_sym_QMARK;
	v->a[134746] = anon_sym_DOLLAR;
	v->a[134747] = anon_sym_POUND;
	v->a[134748] = anon_sym_AT;
	v->a[134749] = 7;
	v->a[134750] = actions(3);
	v->a[134751] = 1;
	v->a[134752] = sym_comment;
	v->a[134753] = actions(7754);
	v->a[134754] = 1;
	v->a[134755] = aux_sym__simple_variable_name_token1;
	v->a[134756] = actions(7758);
	v->a[134757] = 1;
	v->a[134758] = sym_variable_name;
	v->a[134759] = actions(7796);
	small_parse_table_6738(v);
}

void	small_parse_table_6738(t_small_parse_table_array *v)
{
	v->a[134760] = 1;
	v->a[134761] = anon_sym_RBRACE3;
	v->a[134762] = state(4037);
	v->a[134763] = 1;
	v->a[134764] = sym__expansion_body;
	v->a[134765] = actions(7756);
	v->a[134766] = 2;
	v->a[134767] = anon_sym_0;
	v->a[134768] = anon_sym__;
	v->a[134769] = actions(7750);
	v->a[134770] = 7;
	v->a[134771] = anon_sym_BANG;
	v->a[134772] = anon_sym_DASH;
	v->a[134773] = anon_sym_STAR;
	v->a[134774] = anon_sym_QMARK;
	v->a[134775] = anon_sym_DOLLAR;
	v->a[134776] = anon_sym_POUND;
	v->a[134777] = anon_sym_AT;
	v->a[134778] = 11;
	v->a[134779] = actions(3);
	small_parse_table_6739(v);
}

void	small_parse_table_6739(t_small_parse_table_array *v)
{
	v->a[134780] = 1;
	v->a[134781] = sym_comment;
	v->a[134782] = actions(7760);
	v->a[134783] = 1;
	v->a[134784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134785] = actions(7766);
	v->a[134786] = 1;
	v->a[134787] = sym_string_content;
	v->a[134788] = actions(7768);
	v->a[134789] = 1;
	v->a[134790] = anon_sym_DOLLAR_LBRACE;
	v->a[134791] = actions(7770);
	v->a[134792] = 1;
	v->a[134793] = anon_sym_DOLLAR_LPAREN;
	v->a[134794] = actions(7772);
	v->a[134795] = 1;
	v->a[134796] = anon_sym_BQUOTE;
	v->a[134797] = actions(7774);
	v->a[134798] = 1;
	v->a[134799] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6740(v);
}

/* EOF small_parse_table_1347.c */
