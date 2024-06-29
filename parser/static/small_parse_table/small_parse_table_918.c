/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_918.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4590(t_small_parse_table_array *v)
{
	v->a[91800] = anon_sym_DQUOTE;
	v->a[91801] = state(1863);
	v->a[91802] = 1;
	v->a[91803] = aux_sym_string_repeat1;
	v->a[91804] = state(1963);
	v->a[91805] = 4;
	v->a[91806] = sym_arithmetic_expansion;
	v->a[91807] = sym_simple_expansion;
	v->a[91808] = sym_expansion;
	v->a[91809] = sym_command_substitution;
	v->a[91810] = 4;
	v->a[91811] = actions(3);
	v->a[91812] = 1;
	v->a[91813] = sym_comment;
	v->a[91814] = actions(1660);
	v->a[91815] = 1;
	v->a[91816] = sym_variable_name;
	v->a[91817] = actions(1658);
	v->a[91818] = 2;
	v->a[91819] = aux_sym__simple_variable_name_token1;
	small_parse_table_4591(v);
}

void	small_parse_table_4591(t_small_parse_table_array *v)
{
	v->a[91820] = aux_sym__multiline_variable_name_token1;
	v->a[91821] = actions(1656);
	v->a[91822] = 9;
	v->a[91823] = anon_sym_BANG;
	v->a[91824] = anon_sym_DASH;
	v->a[91825] = anon_sym_STAR;
	v->a[91826] = anon_sym_QMARK;
	v->a[91827] = anon_sym_DOLLAR;
	v->a[91828] = anon_sym_POUND;
	v->a[91829] = anon_sym_AT;
	v->a[91830] = anon_sym_0;
	v->a[91831] = anon_sym__;
	v->a[91832] = 4;
	v->a[91833] = actions(3);
	v->a[91834] = 1;
	v->a[91835] = sym_comment;
	v->a[91836] = actions(3810);
	v->a[91837] = 1;
	v->a[91838] = sym_variable_name;
	v->a[91839] = actions(3808);
	small_parse_table_4592(v);
}

void	small_parse_table_4592(t_small_parse_table_array *v)
{
	v->a[91840] = 2;
	v->a[91841] = aux_sym__simple_variable_name_token1;
	v->a[91842] = aux_sym__multiline_variable_name_token1;
	v->a[91843] = actions(3806);
	v->a[91844] = 9;
	v->a[91845] = anon_sym_BANG;
	v->a[91846] = anon_sym_DASH;
	v->a[91847] = anon_sym_STAR;
	v->a[91848] = anon_sym_QMARK;
	v->a[91849] = anon_sym_DOLLAR;
	v->a[91850] = anon_sym_POUND;
	v->a[91851] = anon_sym_AT;
	v->a[91852] = anon_sym_0;
	v->a[91853] = anon_sym__;
	v->a[91854] = 4;
	v->a[91855] = actions(3);
	v->a[91856] = 1;
	v->a[91857] = sym_comment;
	v->a[91858] = actions(829);
	v->a[91859] = 1;
	small_parse_table_4593(v);
}

void	small_parse_table_4593(t_small_parse_table_array *v)
{
	v->a[91860] = sym_variable_name;
	v->a[91861] = actions(827);
	v->a[91862] = 2;
	v->a[91863] = aux_sym__simple_variable_name_token1;
	v->a[91864] = aux_sym__multiline_variable_name_token1;
	v->a[91865] = actions(825);
	v->a[91866] = 9;
	v->a[91867] = anon_sym_BANG;
	v->a[91868] = anon_sym_DASH;
	v->a[91869] = anon_sym_STAR;
	v->a[91870] = anon_sym_QMARK;
	v->a[91871] = anon_sym_DOLLAR;
	v->a[91872] = anon_sym_POUND;
	v->a[91873] = anon_sym_AT;
	v->a[91874] = anon_sym_0;
	v->a[91875] = anon_sym__;
	v->a[91876] = 10;
	v->a[91877] = actions(3);
	v->a[91878] = 1;
	v->a[91879] = sym_comment;
	small_parse_table_4594(v);
}

void	small_parse_table_4594(t_small_parse_table_array *v)
{
	v->a[91880] = actions(3414);
	v->a[91881] = 1;
	v->a[91882] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91883] = actions(3420);
	v->a[91884] = 1;
	v->a[91885] = sym_string_content;
	v->a[91886] = actions(3422);
	v->a[91887] = 1;
	v->a[91888] = anon_sym_DOLLAR_LBRACE;
	v->a[91889] = actions(3424);
	v->a[91890] = 1;
	v->a[91891] = anon_sym_DOLLAR_LPAREN;
	v->a[91892] = actions(3426);
	v->a[91893] = 1;
	v->a[91894] = anon_sym_BQUOTE;
	v->a[91895] = actions(3812);
	v->a[91896] = 1;
	v->a[91897] = anon_sym_DOLLAR;
	v->a[91898] = actions(3814);
	v->a[91899] = 1;
	small_parse_table_4595(v);
}

/* EOF small_parse_table_918.c */
