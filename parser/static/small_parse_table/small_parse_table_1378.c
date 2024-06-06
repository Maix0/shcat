/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1378.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6890(t_small_parse_table_array *v)
{
	v->a[137800] = actions(7768);
	v->a[137801] = 1;
	v->a[137802] = anon_sym_DOLLAR_LBRACE;
	v->a[137803] = actions(7770);
	v->a[137804] = 1;
	v->a[137805] = anon_sym_DOLLAR_LPAREN;
	v->a[137806] = actions(7772);
	v->a[137807] = 1;
	v->a[137808] = anon_sym_BQUOTE;
	v->a[137809] = actions(7774);
	v->a[137810] = 1;
	v->a[137811] = anon_sym_DOLLAR_BQUOTE;
	v->a[137812] = actions(8047);
	v->a[137813] = 1;
	v->a[137814] = anon_sym_DOLLAR;
	v->a[137815] = actions(8049);
	v->a[137816] = 1;
	v->a[137817] = anon_sym_DQUOTE;
	v->a[137818] = state(3090);
	v->a[137819] = 1;
	small_parse_table_6891(v);
}

void	small_parse_table_6891(t_small_parse_table_array *v)
{
	v->a[137820] = aux_sym_string_repeat1;
	v->a[137821] = state(3218);
	v->a[137822] = 4;
	v->a[137823] = sym_arithmetic_expansion;
	v->a[137824] = sym_simple_expansion;
	v->a[137825] = sym_expansion;
	v->a[137826] = sym_command_substitution;
	v->a[137827] = 11;
	v->a[137828] = actions(3);
	v->a[137829] = 1;
	v->a[137830] = sym_comment;
	v->a[137831] = actions(7760);
	v->a[137832] = 1;
	v->a[137833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[137834] = actions(7766);
	v->a[137835] = 1;
	v->a[137836] = sym_string_content;
	v->a[137837] = actions(7768);
	v->a[137838] = 1;
	v->a[137839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6892(v);
}

void	small_parse_table_6892(t_small_parse_table_array *v)
{
	v->a[137840] = actions(7770);
	v->a[137841] = 1;
	v->a[137842] = anon_sym_DOLLAR_LPAREN;
	v->a[137843] = actions(7772);
	v->a[137844] = 1;
	v->a[137845] = anon_sym_BQUOTE;
	v->a[137846] = actions(7774);
	v->a[137847] = 1;
	v->a[137848] = anon_sym_DOLLAR_BQUOTE;
	v->a[137849] = actions(8051);
	v->a[137850] = 1;
	v->a[137851] = anon_sym_DOLLAR;
	v->a[137852] = actions(8053);
	v->a[137853] = 1;
	v->a[137854] = anon_sym_DQUOTE;
	v->a[137855] = state(3096);
	v->a[137856] = 1;
	v->a[137857] = aux_sym_string_repeat1;
	v->a[137858] = state(3218);
	v->a[137859] = 4;
	small_parse_table_6893(v);
}

void	small_parse_table_6893(t_small_parse_table_array *v)
{
	v->a[137860] = sym_arithmetic_expansion;
	v->a[137861] = sym_simple_expansion;
	v->a[137862] = sym_expansion;
	v->a[137863] = sym_command_substitution;
	v->a[137864] = 7;
	v->a[137865] = actions(3);
	v->a[137866] = 1;
	v->a[137867] = sym_comment;
	v->a[137868] = actions(7754);
	v->a[137869] = 1;
	v->a[137870] = aux_sym__simple_variable_name_token1;
	v->a[137871] = actions(7758);
	v->a[137872] = 1;
	v->a[137873] = sym_variable_name;
	v->a[137874] = actions(8055);
	v->a[137875] = 1;
	v->a[137876] = anon_sym_RBRACE3;
	v->a[137877] = state(3650);
	v->a[137878] = 1;
	v->a[137879] = sym__expansion_body;
	small_parse_table_6894(v);
}

void	small_parse_table_6894(t_small_parse_table_array *v)
{
	v->a[137880] = actions(7756);
	v->a[137881] = 2;
	v->a[137882] = anon_sym_0;
	v->a[137883] = anon_sym__;
	v->a[137884] = actions(7750);
	v->a[137885] = 7;
	v->a[137886] = anon_sym_BANG;
	v->a[137887] = anon_sym_DASH;
	v->a[137888] = anon_sym_STAR;
	v->a[137889] = anon_sym_QMARK;
	v->a[137890] = anon_sym_DOLLAR;
	v->a[137891] = anon_sym_POUND;
	v->a[137892] = anon_sym_AT;
	v->a[137893] = 11;
	v->a[137894] = actions(3);
	v->a[137895] = 1;
	v->a[137896] = sym_comment;
	v->a[137897] = actions(7624);
	v->a[137898] = 1;
	v->a[137899] = anon_sym_DQUOTE;
	small_parse_table_6895(v);
}

/* EOF small_parse_table_1378.c */
