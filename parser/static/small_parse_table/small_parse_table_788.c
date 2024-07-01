/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_788.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3940(t_small_parse_table_array *v)
{
	v->a[78800] = actions(3375);
	v->a[78801] = 1;
	v->a[78802] = anon_sym_DOLLAR;
	v->a[78803] = actions(3377);
	v->a[78804] = 1;
	v->a[78805] = anon_sym_DQUOTE;
	v->a[78806] = state(1681);
	v->a[78807] = 1;
	v->a[78808] = aux_sym_string_repeat1;
	v->a[78809] = state(1739);
	v->a[78810] = 4;
	v->a[78811] = sym_arithmetic_expansion;
	v->a[78812] = sym_simple_expansion;
	v->a[78813] = sym_expansion;
	v->a[78814] = sym_command_substitution;
	v->a[78815] = 4;
	v->a[78816] = actions(3);
	v->a[78817] = 1;
	v->a[78818] = sym_comment;
	v->a[78819] = actions(369);
	small_parse_table_3941(v);
}

void	small_parse_table_3941(t_small_parse_table_array *v)
{
	v->a[78820] = 1;
	v->a[78821] = sym_variable_name;
	v->a[78822] = actions(365);
	v->a[78823] = 2;
	v->a[78824] = aux_sym__simple_variable_name_token1;
	v->a[78825] = aux_sym__multiline_variable_name_token1;
	v->a[78826] = actions(363);
	v->a[78827] = 9;
	v->a[78828] = anon_sym_BANG;
	v->a[78829] = anon_sym_DASH;
	v->a[78830] = anon_sym_STAR;
	v->a[78831] = anon_sym_QMARK;
	v->a[78832] = anon_sym_DOLLAR;
	v->a[78833] = anon_sym_POUND;
	v->a[78834] = anon_sym_AT;
	v->a[78835] = anon_sym_0;
	v->a[78836] = anon_sym__;
	v->a[78837] = 10;
	v->a[78838] = actions(3);
	v->a[78839] = 1;
	small_parse_table_3942(v);
}

void	small_parse_table_3942(t_small_parse_table_array *v)
{
	v->a[78840] = sym_comment;
	v->a[78841] = actions(3071);
	v->a[78842] = 1;
	v->a[78843] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78844] = actions(3077);
	v->a[78845] = 1;
	v->a[78846] = sym_string_content;
	v->a[78847] = actions(3079);
	v->a[78848] = 1;
	v->a[78849] = anon_sym_DOLLAR_LBRACE;
	v->a[78850] = actions(3081);
	v->a[78851] = 1;
	v->a[78852] = anon_sym_DOLLAR_LPAREN;
	v->a[78853] = actions(3083);
	v->a[78854] = 1;
	v->a[78855] = anon_sym_BQUOTE;
	v->a[78856] = actions(3379);
	v->a[78857] = 1;
	v->a[78858] = anon_sym_DOLLAR;
	v->a[78859] = actions(3381);
	small_parse_table_3943(v);
}

void	small_parse_table_3943(t_small_parse_table_array *v)
{
	v->a[78860] = 1;
	v->a[78861] = anon_sym_DQUOTE;
	v->a[78862] = state(1704);
	v->a[78863] = 1;
	v->a[78864] = aux_sym_string_repeat1;
	v->a[78865] = state(1739);
	v->a[78866] = 4;
	v->a[78867] = sym_arithmetic_expansion;
	v->a[78868] = sym_simple_expansion;
	v->a[78869] = sym_expansion;
	v->a[78870] = sym_command_substitution;
	v->a[78871] = 10;
	v->a[78872] = actions(3);
	v->a[78873] = 1;
	v->a[78874] = sym_comment;
	v->a[78875] = actions(3071);
	v->a[78876] = 1;
	v->a[78877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78878] = actions(3077);
	v->a[78879] = 1;
	small_parse_table_3944(v);
}

void	small_parse_table_3944(t_small_parse_table_array *v)
{
	v->a[78880] = sym_string_content;
	v->a[78881] = actions(3079);
	v->a[78882] = 1;
	v->a[78883] = anon_sym_DOLLAR_LBRACE;
	v->a[78884] = actions(3081);
	v->a[78885] = 1;
	v->a[78886] = anon_sym_DOLLAR_LPAREN;
	v->a[78887] = actions(3083);
	v->a[78888] = 1;
	v->a[78889] = anon_sym_BQUOTE;
	v->a[78890] = actions(3383);
	v->a[78891] = 1;
	v->a[78892] = anon_sym_DOLLAR;
	v->a[78893] = actions(3385);
	v->a[78894] = 1;
	v->a[78895] = anon_sym_DQUOTE;
	v->a[78896] = state(1698);
	v->a[78897] = 1;
	v->a[78898] = aux_sym_string_repeat1;
	v->a[78899] = state(1739);
	small_parse_table_3945(v);
}

/* EOF small_parse_table_788.c */
