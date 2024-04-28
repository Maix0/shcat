/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3068.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15340(t_small_parse_table_array *v)
{
	v->a[306800] = 1;
	v->a[306801] = sym_variable_name;
	v->a[306802] = actions(13900);
	v->a[306803] = 1;
	v->a[306804] = anon_sym_DQUOTE;
	v->a[306805] = actions(13734);
	v->a[306806] = 2;
	v->a[306807] = aux_sym__simple_variable_name_token1;
	v->a[306808] = aux_sym__multiline_variable_name_token1;
	v->a[306809] = actions(13730);
	v->a[306810] = 9;
	v->a[306811] = anon_sym_DASH;
	v->a[306812] = anon_sym_STAR;
	v->a[306813] = anon_sym_BANG;
	v->a[306814] = anon_sym_QMARK;
	v->a[306815] = anon_sym_DOLLAR;
	v->a[306816] = anon_sym_POUND;
	v->a[306817] = anon_sym_AT2;
	v->a[306818] = anon_sym_0;
	v->a[306819] = anon_sym__;
	small_parse_table_15341(v);
}

void	small_parse_table_15341(t_small_parse_table_array *v)
{
	v->a[306820] = 6;
	v->a[306821] = actions(3);
	v->a[306822] = 1;
	v->a[306823] = sym_comment;
	v->a[306824] = actions(5361);
	v->a[306825] = 1;
	v->a[306826] = anon_sym_DQUOTE;
	v->a[306827] = actions(5365);
	v->a[306828] = 1;
	v->a[306829] = sym_variable_name;
	v->a[306830] = state(2850);
	v->a[306831] = 1;
	v->a[306832] = sym_string;
	v->a[306833] = actions(5363);
	v->a[306834] = 2;
	v->a[306835] = aux_sym__simple_variable_name_token1;
	v->a[306836] = aux_sym__multiline_variable_name_token1;
	v->a[306837] = actions(5359);
	v->a[306838] = 9;
	v->a[306839] = anon_sym_DASH;
	small_parse_table_15342(v);
}

void	small_parse_table_15342(t_small_parse_table_array *v)
{
	v->a[306840] = anon_sym_STAR;
	v->a[306841] = anon_sym_BANG;
	v->a[306842] = anon_sym_QMARK;
	v->a[306843] = anon_sym_DOLLAR;
	v->a[306844] = anon_sym_POUND;
	v->a[306845] = anon_sym_AT2;
	v->a[306846] = anon_sym_0;
	v->a[306847] = anon_sym__;
	v->a[306848] = 6;
	v->a[306849] = actions(3);
	v->a[306850] = 1;
	v->a[306851] = sym_comment;
	v->a[306852] = actions(13596);
	v->a[306853] = 1;
	v->a[306854] = anon_sym_DQUOTE;
	v->a[306855] = actions(13732);
	v->a[306856] = 1;
	v->a[306857] = sym_string_content;
	v->a[306858] = actions(13736);
	v->a[306859] = 1;
	small_parse_table_15343(v);
}

void	small_parse_table_15343(t_small_parse_table_array *v)
{
	v->a[306860] = sym_variable_name;
	v->a[306861] = actions(13734);
	v->a[306862] = 2;
	v->a[306863] = aux_sym__simple_variable_name_token1;
	v->a[306864] = aux_sym__multiline_variable_name_token1;
	v->a[306865] = actions(13730);
	v->a[306866] = 9;
	v->a[306867] = anon_sym_DASH;
	v->a[306868] = anon_sym_STAR;
	v->a[306869] = anon_sym_BANG;
	v->a[306870] = anon_sym_QMARK;
	v->a[306871] = anon_sym_DOLLAR;
	v->a[306872] = anon_sym_POUND;
	v->a[306873] = anon_sym_AT2;
	v->a[306874] = anon_sym_0;
	v->a[306875] = anon_sym__;
	v->a[306876] = 6;
	v->a[306877] = actions(3);
	v->a[306878] = 1;
	v->a[306879] = sym_comment;
	small_parse_table_15344(v);
}

void	small_parse_table_15344(t_small_parse_table_array *v)
{
	v->a[306880] = actions(2965);
	v->a[306881] = 1;
	v->a[306882] = anon_sym_DQUOTE;
	v->a[306883] = actions(2969);
	v->a[306884] = 1;
	v->a[306885] = sym_variable_name;
	v->a[306886] = state(1454);
	v->a[306887] = 1;
	v->a[306888] = sym_string;
	v->a[306889] = actions(2967);
	v->a[306890] = 2;
	v->a[306891] = aux_sym__simple_variable_name_token1;
	v->a[306892] = aux_sym__multiline_variable_name_token1;
	v->a[306893] = actions(2963);
	v->a[306894] = 9;
	v->a[306895] = anon_sym_DASH;
	v->a[306896] = anon_sym_STAR;
	v->a[306897] = anon_sym_BANG;
	v->a[306898] = anon_sym_QMARK;
	v->a[306899] = anon_sym_DOLLAR;
	small_parse_table_15345(v);
}

/* EOF small_parse_table_3068.c */
