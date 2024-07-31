/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_618.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3090(t_small_parse_table_array *v)
{
	v->a[61800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61801] = anon_sym_DOLLAR;
	v->a[61802] = anon_sym_DQUOTE;
	v->a[61803] = sym_raw_string;
	v->a[61804] = sym_number;
	v->a[61805] = anon_sym_DOLLAR_LBRACE;
	v->a[61806] = anon_sym_DOLLAR_LPAREN;
	v->a[61807] = anon_sym_BQUOTE;
	v->a[61808] = sym_word;
	v->a[61809] = 8;
	v->a[61810] = actions(3);
	v->a[61811] = 1;
	v->a[61812] = sym_comment;
	v->a[61813] = actions(2566);
	v->a[61814] = 1;
	v->a[61815] = anon_sym_POUND;
	v->a[61816] = actions(2568);
	v->a[61817] = 1;
	v->a[61818] = aux_sym__simple_variable_name_token1;
	v->a[61819] = actions(2570);
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = 1;
	v->a[61821] = anon_sym_0;
	v->a[61822] = actions(2572);
	v->a[61823] = 1;
	v->a[61824] = sym_variable_name;
	v->a[61825] = actions(2617);
	v->a[61826] = 1;
	v->a[61827] = anon_sym_RBRACE;
	v->a[61828] = state(1629);
	v->a[61829] = 1;
	v->a[61830] = sym__expansion_body;
	v->a[61831] = actions(2564);
	v->a[61832] = 6;
	v->a[61833] = anon_sym_BANG;
	v->a[61834] = anon_sym_DASH;
	v->a[61835] = anon_sym_STAR;
	v->a[61836] = anon_sym_QMARK;
	v->a[61837] = anon_sym_DOLLAR;
	v->a[61838] = anon_sym_AT;
	v->a[61839] = 10;
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = actions(3);
	v->a[61841] = 1;
	v->a[61842] = sym_comment;
	v->a[61843] = actions(2548);
	v->a[61844] = 1;
	v->a[61845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61846] = actions(2554);
	v->a[61847] = 1;
	v->a[61848] = sym_string_content;
	v->a[61849] = actions(2556);
	v->a[61850] = 1;
	v->a[61851] = anon_sym_DOLLAR_LBRACE;
	v->a[61852] = actions(2558);
	v->a[61853] = 1;
	v->a[61854] = anon_sym_DOLLAR_LPAREN;
	v->a[61855] = actions(2560);
	v->a[61856] = 1;
	v->a[61857] = anon_sym_BQUOTE;
	v->a[61858] = actions(2619);
	v->a[61859] = 1;
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = anon_sym_DOLLAR;
	v->a[61861] = actions(2621);
	v->a[61862] = 1;
	v->a[61863] = anon_sym_DQUOTE;
	v->a[61864] = state(1370);
	v->a[61865] = 1;
	v->a[61866] = aux_sym_string_repeat1;
	v->a[61867] = state(1477);
	v->a[61868] = 4;
	v->a[61869] = sym_arithmetic_expansion;
	v->a[61870] = sym_simple_expansion;
	v->a[61871] = sym_expansion;
	v->a[61872] = sym_command_substitution;
	v->a[61873] = 8;
	v->a[61874] = actions(3);
	v->a[61875] = 1;
	v->a[61876] = sym_comment;
	v->a[61877] = actions(2566);
	v->a[61878] = 1;
	v->a[61879] = anon_sym_POUND;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = actions(2568);
	v->a[61881] = 1;
	v->a[61882] = aux_sym__simple_variable_name_token1;
	v->a[61883] = actions(2570);
	v->a[61884] = 1;
	v->a[61885] = anon_sym_0;
	v->a[61886] = actions(2572);
	v->a[61887] = 1;
	v->a[61888] = sym_variable_name;
	v->a[61889] = actions(2623);
	v->a[61890] = 1;
	v->a[61891] = anon_sym_RBRACE;
	v->a[61892] = state(1728);
	v->a[61893] = 1;
	v->a[61894] = sym__expansion_body;
	v->a[61895] = actions(2564);
	v->a[61896] = 6;
	v->a[61897] = anon_sym_BANG;
	v->a[61898] = anon_sym_DASH;
	v->a[61899] = anon_sym_STAR;
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */
