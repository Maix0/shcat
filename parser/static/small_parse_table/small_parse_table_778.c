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
	v->a[77800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77801] = actions(3271);
	v->a[77802] = 1;
	v->a[77803] = anon_sym_DOLLAR;
	v->a[77804] = actions(3274);
	v->a[77805] = 1;
	v->a[77806] = anon_sym_DQUOTE;
	v->a[77807] = actions(3276);
	v->a[77808] = 1;
	v->a[77809] = sym_string_content;
	v->a[77810] = actions(3279);
	v->a[77811] = 1;
	v->a[77812] = anon_sym_DOLLAR_LBRACE;
	v->a[77813] = actions(3282);
	v->a[77814] = 1;
	v->a[77815] = anon_sym_DOLLAR_LPAREN;
	v->a[77816] = actions(3285);
	v->a[77817] = 1;
	v->a[77818] = anon_sym_BQUOTE;
	v->a[77819] = state(1661);
	small_parse_table_3891(v);
}

void	small_parse_table_3891(t_small_parse_table_array *v)
{
	v->a[77820] = 1;
	v->a[77821] = aux_sym_string_repeat1;
	v->a[77822] = state(1748);
	v->a[77823] = 4;
	v->a[77824] = sym_arithmetic_expansion;
	v->a[77825] = sym_simple_expansion;
	v->a[77826] = sym_expansion;
	v->a[77827] = sym_command_substitution;
	v->a[77828] = 10;
	v->a[77829] = actions(3);
	v->a[77830] = 1;
	v->a[77831] = sym_comment;
	v->a[77832] = actions(3104);
	v->a[77833] = 1;
	v->a[77834] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77835] = actions(3110);
	v->a[77836] = 1;
	v->a[77837] = sym_string_content;
	v->a[77838] = actions(3112);
	v->a[77839] = 1;
	small_parse_table_3892(v);
}

void	small_parse_table_3892(t_small_parse_table_array *v)
{
	v->a[77840] = anon_sym_DOLLAR_LBRACE;
	v->a[77841] = actions(3114);
	v->a[77842] = 1;
	v->a[77843] = anon_sym_DOLLAR_LPAREN;
	v->a[77844] = actions(3116);
	v->a[77845] = 1;
	v->a[77846] = anon_sym_BQUOTE;
	v->a[77847] = actions(3288);
	v->a[77848] = 1;
	v->a[77849] = anon_sym_DOLLAR;
	v->a[77850] = actions(3290);
	v->a[77851] = 1;
	v->a[77852] = anon_sym_DQUOTE;
	v->a[77853] = state(1657);
	v->a[77854] = 1;
	v->a[77855] = aux_sym_string_repeat1;
	v->a[77856] = state(1748);
	v->a[77857] = 4;
	v->a[77858] = sym_arithmetic_expansion;
	v->a[77859] = sym_simple_expansion;
	small_parse_table_3893(v);
}

void	small_parse_table_3893(t_small_parse_table_array *v)
{
	v->a[77860] = sym_expansion;
	v->a[77861] = sym_command_substitution;
	v->a[77862] = 4;
	v->a[77863] = actions(3);
	v->a[77864] = 1;
	v->a[77865] = sym_comment;
	v->a[77866] = actions(423);
	v->a[77867] = 1;
	v->a[77868] = sym_variable_name;
	v->a[77869] = actions(421);
	v->a[77870] = 2;
	v->a[77871] = aux_sym__simple_variable_name_token1;
	v->a[77872] = aux_sym__multiline_variable_name_token1;
	v->a[77873] = actions(419);
	v->a[77874] = 9;
	v->a[77875] = anon_sym_BANG;
	v->a[77876] = anon_sym_DASH;
	v->a[77877] = anon_sym_STAR;
	v->a[77878] = anon_sym_QMARK;
	v->a[77879] = anon_sym_DOLLAR;
	small_parse_table_3894(v);
}

void	small_parse_table_3894(t_small_parse_table_array *v)
{
	v->a[77880] = anon_sym_POUND;
	v->a[77881] = anon_sym_AT;
	v->a[77882] = anon_sym_0;
	v->a[77883] = anon_sym__;
	v->a[77884] = 4;
	v->a[77885] = actions(3);
	v->a[77886] = 1;
	v->a[77887] = sym_comment;
	v->a[77888] = actions(411);
	v->a[77889] = 1;
	v->a[77890] = sym_variable_name;
	v->a[77891] = actions(409);
	v->a[77892] = 2;
	v->a[77893] = aux_sym__simple_variable_name_token1;
	v->a[77894] = aux_sym__multiline_variable_name_token1;
	v->a[77895] = actions(407);
	v->a[77896] = 9;
	v->a[77897] = anon_sym_BANG;
	v->a[77898] = anon_sym_DASH;
	v->a[77899] = anon_sym_STAR;
	small_parse_table_3895(v);
}

/* EOF small_parse_table_778.c */
