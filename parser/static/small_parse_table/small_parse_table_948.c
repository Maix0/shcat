/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_948.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4740(t_small_parse_table_array *v)
{
	v->a[94800] = 1;
	v->a[94801] = aux_sym_string_repeat1;
	v->a[94802] = state(2107);
	v->a[94803] = 4;
	v->a[94804] = sym_arithmetic_expansion;
	v->a[94805] = sym_simple_expansion;
	v->a[94806] = sym_expansion;
	v->a[94807] = sym_command_substitution;
	v->a[94808] = 4;
	v->a[94809] = actions(3);
	v->a[94810] = 1;
	v->a[94811] = sym_comment;
	v->a[94812] = actions(435);
	v->a[94813] = 1;
	v->a[94814] = sym_variable_name;
	v->a[94815] = actions(433);
	v->a[94816] = 2;
	v->a[94817] = aux_sym__simple_variable_name_token1;
	v->a[94818] = aux_sym__multiline_variable_name_token1;
	v->a[94819] = actions(431);
	small_parse_table_4741(v);
}

void	small_parse_table_4741(t_small_parse_table_array *v)
{
	v->a[94820] = 9;
	v->a[94821] = anon_sym_BANG;
	v->a[94822] = anon_sym_DASH;
	v->a[94823] = anon_sym_STAR;
	v->a[94824] = anon_sym_QMARK;
	v->a[94825] = anon_sym_DOLLAR;
	v->a[94826] = anon_sym_POUND;
	v->a[94827] = anon_sym_AT;
	v->a[94828] = anon_sym_0;
	v->a[94829] = anon_sym__;
	v->a[94830] = 10;
	v->a[94831] = actions(3);
	v->a[94832] = 1;
	v->a[94833] = sym_comment;
	v->a[94834] = actions(3856);
	v->a[94835] = 1;
	v->a[94836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94837] = actions(3862);
	v->a[94838] = 1;
	v->a[94839] = sym_string_content;
	small_parse_table_4742(v);
}

void	small_parse_table_4742(t_small_parse_table_array *v)
{
	v->a[94840] = actions(3864);
	v->a[94841] = 1;
	v->a[94842] = anon_sym_DOLLAR_LBRACE;
	v->a[94843] = actions(3866);
	v->a[94844] = 1;
	v->a[94845] = anon_sym_DOLLAR_LPAREN;
	v->a[94846] = actions(3868);
	v->a[94847] = 1;
	v->a[94848] = anon_sym_BQUOTE;
	v->a[94849] = actions(3914);
	v->a[94850] = 1;
	v->a[94851] = anon_sym_DOLLAR;
	v->a[94852] = actions(3916);
	v->a[94853] = 1;
	v->a[94854] = anon_sym_DQUOTE;
	v->a[94855] = state(1970);
	v->a[94856] = 1;
	v->a[94857] = aux_sym_string_repeat1;
	v->a[94858] = state(2107);
	v->a[94859] = 4;
	small_parse_table_4743(v);
}

void	small_parse_table_4743(t_small_parse_table_array *v)
{
	v->a[94860] = sym_arithmetic_expansion;
	v->a[94861] = sym_simple_expansion;
	v->a[94862] = sym_expansion;
	v->a[94863] = sym_command_substitution;
	v->a[94864] = 4;
	v->a[94865] = actions(3);
	v->a[94866] = 1;
	v->a[94867] = sym_comment;
	v->a[94868] = actions(1390);
	v->a[94869] = 1;
	v->a[94870] = sym_variable_name;
	v->a[94871] = actions(1388);
	v->a[94872] = 2;
	v->a[94873] = aux_sym__simple_variable_name_token1;
	v->a[94874] = aux_sym__multiline_variable_name_token1;
	v->a[94875] = actions(1386);
	v->a[94876] = 9;
	v->a[94877] = anon_sym_BANG;
	v->a[94878] = anon_sym_DASH;
	v->a[94879] = anon_sym_STAR;
	small_parse_table_4744(v);
}

void	small_parse_table_4744(t_small_parse_table_array *v)
{
	v->a[94880] = anon_sym_QMARK;
	v->a[94881] = anon_sym_DOLLAR;
	v->a[94882] = anon_sym_POUND;
	v->a[94883] = anon_sym_AT;
	v->a[94884] = anon_sym_0;
	v->a[94885] = anon_sym__;
	v->a[94886] = 10;
	v->a[94887] = actions(3);
	v->a[94888] = 1;
	v->a[94889] = sym_comment;
	v->a[94890] = actions(3856);
	v->a[94891] = 1;
	v->a[94892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94893] = actions(3862);
	v->a[94894] = 1;
	v->a[94895] = sym_string_content;
	v->a[94896] = actions(3864);
	v->a[94897] = 1;
	v->a[94898] = anon_sym_DOLLAR_LBRACE;
	v->a[94899] = actions(3866);
	small_parse_table_4745(v);
}

/* EOF small_parse_table_948.c */
