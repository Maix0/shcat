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
	v->a[78800] = sym_variable_name;
	v->a[78801] = actions(433);
	v->a[78802] = 2;
	v->a[78803] = aux_sym__simple_variable_name_token1;
	v->a[78804] = aux_sym__multiline_variable_name_token1;
	v->a[78805] = actions(431);
	v->a[78806] = 9;
	v->a[78807] = anon_sym_BANG;
	v->a[78808] = anon_sym_DASH;
	v->a[78809] = anon_sym_STAR;
	v->a[78810] = anon_sym_QMARK;
	v->a[78811] = anon_sym_DOLLAR;
	v->a[78812] = anon_sym_POUND;
	v->a[78813] = anon_sym_AT;
	v->a[78814] = anon_sym_0;
	v->a[78815] = anon_sym__;
	v->a[78816] = 10;
	v->a[78817] = actions(3);
	v->a[78818] = 1;
	v->a[78819] = sym_comment;
	small_parse_table_3941(v);
}

void	small_parse_table_3941(t_small_parse_table_array *v)
{
	v->a[78820] = actions(3104);
	v->a[78821] = 1;
	v->a[78822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78823] = actions(3110);
	v->a[78824] = 1;
	v->a[78825] = sym_string_content;
	v->a[78826] = actions(3112);
	v->a[78827] = 1;
	v->a[78828] = anon_sym_DOLLAR_LBRACE;
	v->a[78829] = actions(3114);
	v->a[78830] = 1;
	v->a[78831] = anon_sym_DOLLAR_LPAREN;
	v->a[78832] = actions(3116);
	v->a[78833] = 1;
	v->a[78834] = anon_sym_BQUOTE;
	v->a[78835] = actions(3380);
	v->a[78836] = 1;
	v->a[78837] = anon_sym_DOLLAR;
	v->a[78838] = actions(3382);
	v->a[78839] = 1;
	small_parse_table_3942(v);
}

void	small_parse_table_3942(t_small_parse_table_array *v)
{
	v->a[78840] = anon_sym_DQUOTE;
	v->a[78841] = state(1661);
	v->a[78842] = 1;
	v->a[78843] = aux_sym_string_repeat1;
	v->a[78844] = state(1748);
	v->a[78845] = 4;
	v->a[78846] = sym_arithmetic_expansion;
	v->a[78847] = sym_simple_expansion;
	v->a[78848] = sym_expansion;
	v->a[78849] = sym_command_substitution;
	v->a[78850] = 10;
	v->a[78851] = actions(3);
	v->a[78852] = 1;
	v->a[78853] = sym_comment;
	v->a[78854] = actions(3104);
	v->a[78855] = 1;
	v->a[78856] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78857] = actions(3110);
	v->a[78858] = 1;
	v->a[78859] = sym_string_content;
	small_parse_table_3943(v);
}

void	small_parse_table_3943(t_small_parse_table_array *v)
{
	v->a[78860] = actions(3112);
	v->a[78861] = 1;
	v->a[78862] = anon_sym_DOLLAR_LBRACE;
	v->a[78863] = actions(3114);
	v->a[78864] = 1;
	v->a[78865] = anon_sym_DOLLAR_LPAREN;
	v->a[78866] = actions(3116);
	v->a[78867] = 1;
	v->a[78868] = anon_sym_BQUOTE;
	v->a[78869] = actions(3384);
	v->a[78870] = 1;
	v->a[78871] = anon_sym_DOLLAR;
	v->a[78872] = actions(3386);
	v->a[78873] = 1;
	v->a[78874] = anon_sym_DQUOTE;
	v->a[78875] = state(1661);
	v->a[78876] = 1;
	v->a[78877] = aux_sym_string_repeat1;
	v->a[78878] = state(1748);
	v->a[78879] = 4;
	small_parse_table_3944(v);
}

void	small_parse_table_3944(t_small_parse_table_array *v)
{
	v->a[78880] = sym_arithmetic_expansion;
	v->a[78881] = sym_simple_expansion;
	v->a[78882] = sym_expansion;
	v->a[78883] = sym_command_substitution;
	v->a[78884] = 10;
	v->a[78885] = actions(3);
	v->a[78886] = 1;
	v->a[78887] = sym_comment;
	v->a[78888] = actions(3104);
	v->a[78889] = 1;
	v->a[78890] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78891] = actions(3110);
	v->a[78892] = 1;
	v->a[78893] = sym_string_content;
	v->a[78894] = actions(3112);
	v->a[78895] = 1;
	v->a[78896] = anon_sym_DOLLAR_LBRACE;
	v->a[78897] = actions(3114);
	v->a[78898] = 1;
	v->a[78899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3945(v);
}

/* EOF small_parse_table_788.c */
