/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_875.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4375(t_small_parse_table_array *v)
{
	v->a[87500] = actions(3196);
	v->a[87501] = 2;
	v->a[87502] = aux_sym__simple_variable_name_token1;
	v->a[87503] = aux_sym__multiline_variable_name_token1;
	v->a[87504] = actions(3190);
	v->a[87505] = 9;
	v->a[87506] = anon_sym_BANG;
	v->a[87507] = anon_sym_DASH;
	v->a[87508] = anon_sym_STAR;
	v->a[87509] = anon_sym_QMARK;
	v->a[87510] = anon_sym_DOLLAR;
	v->a[87511] = anon_sym_POUND;
	v->a[87512] = anon_sym_AT;
	v->a[87513] = anon_sym_0;
	v->a[87514] = anon_sym__;
	v->a[87515] = 6;
	v->a[87516] = actions(3);
	v->a[87517] = 1;
	v->a[87518] = sym_comment;
	v->a[87519] = actions(3194);
	small_parse_table_4376(v);
}

void	small_parse_table_4376(t_small_parse_table_array *v)
{
	v->a[87520] = 1;
	v->a[87521] = sym_string_content;
	v->a[87522] = actions(3198);
	v->a[87523] = 1;
	v->a[87524] = sym_variable_name;
	v->a[87525] = actions(3330);
	v->a[87526] = 1;
	v->a[87527] = anon_sym_DQUOTE;
	v->a[87528] = actions(3196);
	v->a[87529] = 2;
	v->a[87530] = aux_sym__simple_variable_name_token1;
	v->a[87531] = aux_sym__multiline_variable_name_token1;
	v->a[87532] = actions(3190);
	v->a[87533] = 9;
	v->a[87534] = anon_sym_BANG;
	v->a[87535] = anon_sym_DASH;
	v->a[87536] = anon_sym_STAR;
	v->a[87537] = anon_sym_QMARK;
	v->a[87538] = anon_sym_DOLLAR;
	v->a[87539] = anon_sym_POUND;
	small_parse_table_4377(v);
}

void	small_parse_table_4377(t_small_parse_table_array *v)
{
	v->a[87540] = anon_sym_AT;
	v->a[87541] = anon_sym_0;
	v->a[87542] = anon_sym__;
	v->a[87543] = 7;
	v->a[87544] = actions(3);
	v->a[87545] = 1;
	v->a[87546] = sym_comment;
	v->a[87547] = actions(3332);
	v->a[87548] = 1;
	v->a[87549] = anon_sym_RBRACE;
	v->a[87550] = actions(3336);
	v->a[87551] = 1;
	v->a[87552] = aux_sym__simple_variable_name_token1;
	v->a[87553] = actions(3340);
	v->a[87554] = 1;
	v->a[87555] = sym_variable_name;
	v->a[87556] = state(2299);
	v->a[87557] = 1;
	v->a[87558] = sym__expansion_body;
	v->a[87559] = actions(3338);
	small_parse_table_4378(v);
}

void	small_parse_table_4378(t_small_parse_table_array *v)
{
	v->a[87560] = 2;
	v->a[87561] = anon_sym_0;
	v->a[87562] = anon_sym__;
	v->a[87563] = actions(3334);
	v->a[87564] = 7;
	v->a[87565] = anon_sym_BANG;
	v->a[87566] = anon_sym_DASH;
	v->a[87567] = anon_sym_STAR;
	v->a[87568] = anon_sym_QMARK;
	v->a[87569] = anon_sym_DOLLAR;
	v->a[87570] = anon_sym_POUND;
	v->a[87571] = anon_sym_AT;
	v->a[87572] = 7;
	v->a[87573] = actions(3);
	v->a[87574] = 1;
	v->a[87575] = sym_comment;
	v->a[87576] = actions(3336);
	v->a[87577] = 1;
	v->a[87578] = aux_sym__simple_variable_name_token1;
	v->a[87579] = actions(3340);
	small_parse_table_4379(v);
}

void	small_parse_table_4379(t_small_parse_table_array *v)
{
	v->a[87580] = 1;
	v->a[87581] = sym_variable_name;
	v->a[87582] = actions(3342);
	v->a[87583] = 1;
	v->a[87584] = anon_sym_RBRACE;
	v->a[87585] = state(2193);
	v->a[87586] = 1;
	v->a[87587] = sym__expansion_body;
	v->a[87588] = actions(3338);
	v->a[87589] = 2;
	v->a[87590] = anon_sym_0;
	v->a[87591] = anon_sym__;
	v->a[87592] = actions(3334);
	v->a[87593] = 7;
	v->a[87594] = anon_sym_BANG;
	v->a[87595] = anon_sym_DASH;
	v->a[87596] = anon_sym_STAR;
	v->a[87597] = anon_sym_QMARK;
	v->a[87598] = anon_sym_DOLLAR;
	v->a[87599] = anon_sym_POUND;
	small_parse_table_4380(v);
}

/* EOF small_parse_table_875.c */
