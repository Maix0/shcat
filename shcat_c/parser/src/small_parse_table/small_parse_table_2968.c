/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2968.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14840(t_small_parse_table_array *v)
{
	v->a[296800] = sym_string_content;
	v->a[296801] = actions(13338);
	v->a[296802] = 1;
	v->a[296803] = anon_sym_DOLLAR_LBRACE;
	v->a[296804] = actions(13341);
	v->a[296805] = 1;
	v->a[296806] = anon_sym_DOLLAR_LPAREN;
	v->a[296807] = actions(13344);
	v->a[296808] = 1;
	v->a[296809] = anon_sym_BQUOTE;
	v->a[296810] = actions(13347);
	v->a[296811] = 1;
	v->a[296812] = anon_sym_DOLLAR_BQUOTE;
	v->a[296813] = state(5768);
	v->a[296814] = 1;
	v->a[296815] = aux_sym_string_repeat1;
	v->a[296816] = actions(13324);
	v->a[296817] = 2;
	v->a[296818] = anon_sym_LPAREN_LPAREN;
	v->a[296819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_14841(v);
}

void	small_parse_table_14841(t_small_parse_table_array *v)
{
	v->a[296820] = state(6127);
	v->a[296821] = 4;
	v->a[296822] = sym_arithmetic_expansion;
	v->a[296823] = sym_simple_expansion;
	v->a[296824] = sym_expansion;
	v->a[296825] = sym_command_substitution;
	v->a[296826] = 12;
	v->a[296827] = actions(3);
	v->a[296828] = 1;
	v->a[296829] = sym_comment;
	v->a[296830] = actions(13060);
	v->a[296831] = 1;
	v->a[296832] = anon_sym_DOLLAR_LBRACK;
	v->a[296833] = actions(13066);
	v->a[296834] = 1;
	v->a[296835] = sym_string_content;
	v->a[296836] = actions(13068);
	v->a[296837] = 1;
	v->a[296838] = anon_sym_DOLLAR_LBRACE;
	v->a[296839] = actions(13070);
	small_parse_table_14842(v);
}

void	small_parse_table_14842(t_small_parse_table_array *v)
{
	v->a[296840] = 1;
	v->a[296841] = anon_sym_DOLLAR_LPAREN;
	v->a[296842] = actions(13072);
	v->a[296843] = 1;
	v->a[296844] = anon_sym_BQUOTE;
	v->a[296845] = actions(13074);
	v->a[296846] = 1;
	v->a[296847] = anon_sym_DOLLAR_BQUOTE;
	v->a[296848] = actions(13350);
	v->a[296849] = 1;
	v->a[296850] = anon_sym_DOLLAR;
	v->a[296851] = actions(13352);
	v->a[296852] = 1;
	v->a[296853] = anon_sym_DQUOTE;
	v->a[296854] = state(5770);
	v->a[296855] = 1;
	v->a[296856] = aux_sym_string_repeat1;
	v->a[296857] = actions(13058);
	v->a[296858] = 2;
	v->a[296859] = anon_sym_LPAREN_LPAREN;
	small_parse_table_14843(v);
}

void	small_parse_table_14843(t_small_parse_table_array *v)
{
	v->a[296860] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296861] = state(6127);
	v->a[296862] = 4;
	v->a[296863] = sym_arithmetic_expansion;
	v->a[296864] = sym_simple_expansion;
	v->a[296865] = sym_expansion;
	v->a[296866] = sym_command_substitution;
	v->a[296867] = 12;
	v->a[296868] = actions(3);
	v->a[296869] = 1;
	v->a[296870] = sym_comment;
	v->a[296871] = actions(13060);
	v->a[296872] = 1;
	v->a[296873] = anon_sym_DOLLAR_LBRACK;
	v->a[296874] = actions(13066);
	v->a[296875] = 1;
	v->a[296876] = sym_string_content;
	v->a[296877] = actions(13068);
	v->a[296878] = 1;
	v->a[296879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_14844(v);
}

void	small_parse_table_14844(t_small_parse_table_array *v)
{
	v->a[296880] = actions(13070);
	v->a[296881] = 1;
	v->a[296882] = anon_sym_DOLLAR_LPAREN;
	v->a[296883] = actions(13072);
	v->a[296884] = 1;
	v->a[296885] = anon_sym_BQUOTE;
	v->a[296886] = actions(13074);
	v->a[296887] = 1;
	v->a[296888] = anon_sym_DOLLAR_BQUOTE;
	v->a[296889] = actions(13354);
	v->a[296890] = 1;
	v->a[296891] = anon_sym_DOLLAR;
	v->a[296892] = actions(13356);
	v->a[296893] = 1;
	v->a[296894] = anon_sym_DQUOTE;
	v->a[296895] = state(5768);
	v->a[296896] = 1;
	v->a[296897] = aux_sym_string_repeat1;
	v->a[296898] = actions(13058);
	v->a[296899] = 2;
	small_parse_table_14845(v);
}

/* EOF small_parse_table_2968.c */
