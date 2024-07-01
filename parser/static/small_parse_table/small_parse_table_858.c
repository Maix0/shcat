/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_858.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4290(t_small_parse_table_array *v)
{
	v->a[85800] = 1;
	v->a[85801] = sym_variable_name;
	v->a[85802] = actions(3410);
	v->a[85803] = 1;
	v->a[85804] = anon_sym_RBRACE;
	v->a[85805] = state(2142);
	v->a[85806] = 1;
	v->a[85807] = sym__expansion_body;
	v->a[85808] = actions(3338);
	v->a[85809] = 2;
	v->a[85810] = anon_sym_0;
	v->a[85811] = anon_sym__;
	v->a[85812] = actions(3334);
	v->a[85813] = 7;
	v->a[85814] = anon_sym_BANG;
	v->a[85815] = anon_sym_DASH;
	v->a[85816] = anon_sym_STAR;
	v->a[85817] = anon_sym_QMARK;
	v->a[85818] = anon_sym_DOLLAR;
	v->a[85819] = anon_sym_POUND;
	small_parse_table_4291(v);
}

void	small_parse_table_4291(t_small_parse_table_array *v)
{
	v->a[85820] = anon_sym_AT;
	v->a[85821] = 7;
	v->a[85822] = actions(3);
	v->a[85823] = 1;
	v->a[85824] = sym_comment;
	v->a[85825] = actions(3336);
	v->a[85826] = 1;
	v->a[85827] = aux_sym__simple_variable_name_token1;
	v->a[85828] = actions(3340);
	v->a[85829] = 1;
	v->a[85830] = sym_variable_name;
	v->a[85831] = actions(3412);
	v->a[85832] = 1;
	v->a[85833] = anon_sym_RBRACE;
	v->a[85834] = state(2254);
	v->a[85835] = 1;
	v->a[85836] = sym__expansion_body;
	v->a[85837] = actions(3338);
	v->a[85838] = 2;
	v->a[85839] = anon_sym_0;
	small_parse_table_4292(v);
}

void	small_parse_table_4292(t_small_parse_table_array *v)
{
	v->a[85840] = anon_sym__;
	v->a[85841] = actions(3334);
	v->a[85842] = 7;
	v->a[85843] = anon_sym_BANG;
	v->a[85844] = anon_sym_DASH;
	v->a[85845] = anon_sym_STAR;
	v->a[85846] = anon_sym_QMARK;
	v->a[85847] = anon_sym_DOLLAR;
	v->a[85848] = anon_sym_POUND;
	v->a[85849] = anon_sym_AT;
	v->a[85850] = 4;
	v->a[85851] = actions(3);
	v->a[85852] = 1;
	v->a[85853] = sym_comment;
	v->a[85854] = actions(1435);
	v->a[85855] = 1;
	v->a[85856] = sym_variable_name;
	v->a[85857] = actions(1433);
	v->a[85858] = 2;
	v->a[85859] = aux_sym__simple_variable_name_token1;
	small_parse_table_4293(v);
}

void	small_parse_table_4293(t_small_parse_table_array *v)
{
	v->a[85860] = aux_sym__multiline_variable_name_token1;
	v->a[85861] = actions(1431);
	v->a[85862] = 9;
	v->a[85863] = anon_sym_BANG;
	v->a[85864] = anon_sym_DASH;
	v->a[85865] = anon_sym_STAR;
	v->a[85866] = anon_sym_QMARK;
	v->a[85867] = anon_sym_DOLLAR;
	v->a[85868] = anon_sym_POUND;
	v->a[85869] = anon_sym_AT;
	v->a[85870] = anon_sym_0;
	v->a[85871] = anon_sym__;
	v->a[85872] = 10;
	v->a[85873] = actions(3);
	v->a[85874] = 1;
	v->a[85875] = sym_comment;
	v->a[85876] = actions(3414);
	v->a[85877] = 1;
	v->a[85878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85879] = actions(3416);
	small_parse_table_4294(v);
}

void	small_parse_table_4294(t_small_parse_table_array *v)
{
	v->a[85880] = 1;
	v->a[85881] = anon_sym_DOLLAR;
	v->a[85882] = actions(3418);
	v->a[85883] = 1;
	v->a[85884] = anon_sym_DQUOTE;
	v->a[85885] = actions(3420);
	v->a[85886] = 1;
	v->a[85887] = sym_string_content;
	v->a[85888] = actions(3422);
	v->a[85889] = 1;
	v->a[85890] = anon_sym_DOLLAR_LBRACE;
	v->a[85891] = actions(3424);
	v->a[85892] = 1;
	v->a[85893] = anon_sym_DOLLAR_LPAREN;
	v->a[85894] = actions(3426);
	v->a[85895] = 1;
	v->a[85896] = anon_sym_BQUOTE;
	v->a[85897] = state(1906);
	v->a[85898] = 1;
	v->a[85899] = aux_sym_string_repeat1;
	small_parse_table_4295(v);
}

/* EOF small_parse_table_858.c */
