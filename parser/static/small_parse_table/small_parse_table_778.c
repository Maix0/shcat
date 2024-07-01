/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_778.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3890(t_small_parse_table_array *v)
{
	v->a[77800] = 1;
	v->a[77801] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77802] = actions(3077);
	v->a[77803] = 1;
	v->a[77804] = sym_string_content;
	v->a[77805] = actions(3079);
	v->a[77806] = 1;
	v->a[77807] = anon_sym_DOLLAR_LBRACE;
	v->a[77808] = actions(3081);
	v->a[77809] = 1;
	v->a[77810] = anon_sym_DOLLAR_LPAREN;
	v->a[77811] = actions(3083);
	v->a[77812] = 1;
	v->a[77813] = anon_sym_BQUOTE;
	v->a[77814] = actions(3251);
	v->a[77815] = 1;
	v->a[77816] = anon_sym_DOLLAR;
	v->a[77817] = actions(3253);
	v->a[77818] = 1;
	v->a[77819] = anon_sym_DQUOTE;
	small_parse_table_3891(v);
}

void	small_parse_table_3891(t_small_parse_table_array *v)
{
	v->a[77820] = state(1659);
	v->a[77821] = 1;
	v->a[77822] = aux_sym_string_repeat1;
	v->a[77823] = state(1739);
	v->a[77824] = 4;
	v->a[77825] = sym_arithmetic_expansion;
	v->a[77826] = sym_simple_expansion;
	v->a[77827] = sym_expansion;
	v->a[77828] = sym_command_substitution;
	v->a[77829] = 4;
	v->a[77830] = actions(3);
	v->a[77831] = 1;
	v->a[77832] = sym_comment;
	v->a[77833] = actions(411);
	v->a[77834] = 1;
	v->a[77835] = sym_variable_name;
	v->a[77836] = actions(409);
	v->a[77837] = 2;
	v->a[77838] = aux_sym__simple_variable_name_token1;
	v->a[77839] = aux_sym__multiline_variable_name_token1;
	small_parse_table_3892(v);
}

void	small_parse_table_3892(t_small_parse_table_array *v)
{
	v->a[77840] = actions(407);
	v->a[77841] = 9;
	v->a[77842] = anon_sym_BANG;
	v->a[77843] = anon_sym_DASH;
	v->a[77844] = anon_sym_STAR;
	v->a[77845] = anon_sym_QMARK;
	v->a[77846] = anon_sym_DOLLAR;
	v->a[77847] = anon_sym_POUND;
	v->a[77848] = anon_sym_AT;
	v->a[77849] = anon_sym_0;
	v->a[77850] = anon_sym__;
	v->a[77851] = 10;
	v->a[77852] = actions(3);
	v->a[77853] = 1;
	v->a[77854] = sym_comment;
	v->a[77855] = actions(3071);
	v->a[77856] = 1;
	v->a[77857] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77858] = actions(3077);
	v->a[77859] = 1;
	small_parse_table_3893(v);
}

void	small_parse_table_3893(t_small_parse_table_array *v)
{
	v->a[77860] = sym_string_content;
	v->a[77861] = actions(3079);
	v->a[77862] = 1;
	v->a[77863] = anon_sym_DOLLAR_LBRACE;
	v->a[77864] = actions(3081);
	v->a[77865] = 1;
	v->a[77866] = anon_sym_DOLLAR_LPAREN;
	v->a[77867] = actions(3083);
	v->a[77868] = 1;
	v->a[77869] = anon_sym_BQUOTE;
	v->a[77870] = actions(3255);
	v->a[77871] = 1;
	v->a[77872] = anon_sym_DOLLAR;
	v->a[77873] = actions(3257);
	v->a[77874] = 1;
	v->a[77875] = anon_sym_DQUOTE;
	v->a[77876] = state(1681);
	v->a[77877] = 1;
	v->a[77878] = aux_sym_string_repeat1;
	v->a[77879] = state(1739);
	small_parse_table_3894(v);
}

void	small_parse_table_3894(t_small_parse_table_array *v)
{
	v->a[77880] = 4;
	v->a[77881] = sym_arithmetic_expansion;
	v->a[77882] = sym_simple_expansion;
	v->a[77883] = sym_expansion;
	v->a[77884] = sym_command_substitution;
	v->a[77885] = 10;
	v->a[77886] = actions(3);
	v->a[77887] = 1;
	v->a[77888] = sym_comment;
	v->a[77889] = actions(3071);
	v->a[77890] = 1;
	v->a[77891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77892] = actions(3077);
	v->a[77893] = 1;
	v->a[77894] = sym_string_content;
	v->a[77895] = actions(3079);
	v->a[77896] = 1;
	v->a[77897] = anon_sym_DOLLAR_LBRACE;
	v->a[77898] = actions(3081);
	v->a[77899] = 1;
	small_parse_table_3895(v);
}

/* EOF small_parse_table_778.c */
