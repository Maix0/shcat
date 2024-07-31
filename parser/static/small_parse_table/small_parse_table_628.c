/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_628.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3140(t_small_parse_table_array *v)
{
	v->a[62800] = sym_comment;
	v->a[62801] = actions(2548);
	v->a[62802] = 1;
	v->a[62803] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62804] = actions(2554);
	v->a[62805] = 1;
	v->a[62806] = sym_string_content;
	v->a[62807] = actions(2556);
	v->a[62808] = 1;
	v->a[62809] = anon_sym_DOLLAR_LBRACE;
	v->a[62810] = actions(2558);
	v->a[62811] = 1;
	v->a[62812] = anon_sym_DOLLAR_LPAREN;
	v->a[62813] = actions(2560);
	v->a[62814] = 1;
	v->a[62815] = anon_sym_BQUOTE;
	v->a[62816] = actions(2713);
	v->a[62817] = 1;
	v->a[62818] = anon_sym_DOLLAR;
	v->a[62819] = actions(2715);
	small_parse_table_3141(v);
}

void	small_parse_table_3141(t_small_parse_table_array *v)
{
	v->a[62820] = 1;
	v->a[62821] = anon_sym_DQUOTE;
	v->a[62822] = state(1370);
	v->a[62823] = 1;
	v->a[62824] = aux_sym_string_repeat1;
	v->a[62825] = state(1477);
	v->a[62826] = 4;
	v->a[62827] = sym_arithmetic_expansion;
	v->a[62828] = sym_simple_expansion;
	v->a[62829] = sym_expansion;
	v->a[62830] = sym_command_substitution;
	v->a[62831] = 10;
	v->a[62832] = actions(3);
	v->a[62833] = 1;
	v->a[62834] = sym_comment;
	v->a[62835] = actions(2548);
	v->a[62836] = 1;
	v->a[62837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62838] = actions(2554);
	v->a[62839] = 1;
	small_parse_table_3142(v);
}

void	small_parse_table_3142(t_small_parse_table_array *v)
{
	v->a[62840] = sym_string_content;
	v->a[62841] = actions(2556);
	v->a[62842] = 1;
	v->a[62843] = anon_sym_DOLLAR_LBRACE;
	v->a[62844] = actions(2558);
	v->a[62845] = 1;
	v->a[62846] = anon_sym_DOLLAR_LPAREN;
	v->a[62847] = actions(2560);
	v->a[62848] = 1;
	v->a[62849] = anon_sym_BQUOTE;
	v->a[62850] = actions(2717);
	v->a[62851] = 1;
	v->a[62852] = anon_sym_DOLLAR;
	v->a[62853] = actions(2719);
	v->a[62854] = 1;
	v->a[62855] = anon_sym_DQUOTE;
	v->a[62856] = state(1354);
	v->a[62857] = 1;
	v->a[62858] = aux_sym_string_repeat1;
	v->a[62859] = state(1477);
	small_parse_table_3143(v);
}

void	small_parse_table_3143(t_small_parse_table_array *v)
{
	v->a[62860] = 4;
	v->a[62861] = sym_arithmetic_expansion;
	v->a[62862] = sym_simple_expansion;
	v->a[62863] = sym_expansion;
	v->a[62864] = sym_command_substitution;
	v->a[62865] = 10;
	v->a[62866] = actions(3);
	v->a[62867] = 1;
	v->a[62868] = sym_comment;
	v->a[62869] = actions(2548);
	v->a[62870] = 1;
	v->a[62871] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62872] = actions(2554);
	v->a[62873] = 1;
	v->a[62874] = sym_string_content;
	v->a[62875] = actions(2556);
	v->a[62876] = 1;
	v->a[62877] = anon_sym_DOLLAR_LBRACE;
	v->a[62878] = actions(2558);
	v->a[62879] = 1;
	small_parse_table_3144(v);
}

void	small_parse_table_3144(t_small_parse_table_array *v)
{
	v->a[62880] = anon_sym_DOLLAR_LPAREN;
	v->a[62881] = actions(2560);
	v->a[62882] = 1;
	v->a[62883] = anon_sym_BQUOTE;
	v->a[62884] = actions(2721);
	v->a[62885] = 1;
	v->a[62886] = anon_sym_DOLLAR;
	v->a[62887] = actions(2723);
	v->a[62888] = 1;
	v->a[62889] = anon_sym_DQUOTE;
	v->a[62890] = state(1303);
	v->a[62891] = 1;
	v->a[62892] = aux_sym_string_repeat1;
	v->a[62893] = state(1477);
	v->a[62894] = 4;
	v->a[62895] = sym_arithmetic_expansion;
	v->a[62896] = sym_simple_expansion;
	v->a[62897] = sym_expansion;
	v->a[62898] = sym_command_substitution;
	v->a[62899] = 8;
	small_parse_table_3145(v);
}

/* EOF small_parse_table_628.c */
