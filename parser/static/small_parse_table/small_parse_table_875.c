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
	v->a[87500] = actions(3720);
	v->a[87501] = 1;
	v->a[87502] = anon_sym_DOLLAR_LPAREN;
	v->a[87503] = actions(3722);
	v->a[87504] = 1;
	v->a[87505] = anon_sym_BQUOTE;
	v->a[87506] = actions(3724);
	v->a[87507] = 1;
	v->a[87508] = anon_sym_DOLLAR;
	v->a[87509] = actions(3726);
	v->a[87510] = 1;
	v->a[87511] = anon_sym_DQUOTE;
	v->a[87512] = state(1720);
	v->a[87513] = 1;
	v->a[87514] = aux_sym_string_repeat1;
	v->a[87515] = state(1869);
	v->a[87516] = 4;
	v->a[87517] = sym_arithmetic_expansion;
	v->a[87518] = sym_simple_expansion;
	v->a[87519] = sym_expansion;
	small_parse_table_4376(v);
}

void	small_parse_table_4376(t_small_parse_table_array *v)
{
	v->a[87520] = sym_command_substitution;
	v->a[87521] = 10;
	v->a[87522] = actions(3);
	v->a[87523] = 1;
	v->a[87524] = sym_comment;
	v->a[87525] = actions(3712);
	v->a[87526] = 1;
	v->a[87527] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87528] = actions(3716);
	v->a[87529] = 1;
	v->a[87530] = sym_string_content;
	v->a[87531] = actions(3718);
	v->a[87532] = 1;
	v->a[87533] = anon_sym_DOLLAR_LBRACE;
	v->a[87534] = actions(3720);
	v->a[87535] = 1;
	v->a[87536] = anon_sym_DOLLAR_LPAREN;
	v->a[87537] = actions(3722);
	v->a[87538] = 1;
	v->a[87539] = anon_sym_BQUOTE;
	small_parse_table_4377(v);
}

void	small_parse_table_4377(t_small_parse_table_array *v)
{
	v->a[87540] = actions(3728);
	v->a[87541] = 1;
	v->a[87542] = anon_sym_DOLLAR;
	v->a[87543] = actions(3730);
	v->a[87544] = 1;
	v->a[87545] = anon_sym_DQUOTE;
	v->a[87546] = state(1827);
	v->a[87547] = 1;
	v->a[87548] = aux_sym_string_repeat1;
	v->a[87549] = state(1869);
	v->a[87550] = 4;
	v->a[87551] = sym_arithmetic_expansion;
	v->a[87552] = sym_simple_expansion;
	v->a[87553] = sym_expansion;
	v->a[87554] = sym_command_substitution;
	v->a[87555] = 10;
	v->a[87556] = actions(3);
	v->a[87557] = 1;
	v->a[87558] = sym_comment;
	v->a[87559] = actions(3550);
	small_parse_table_4378(v);
}

void	small_parse_table_4378(t_small_parse_table_array *v)
{
	v->a[87560] = 1;
	v->a[87561] = anon_sym_DQUOTE;
	v->a[87562] = actions(3712);
	v->a[87563] = 1;
	v->a[87564] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87565] = actions(3716);
	v->a[87566] = 1;
	v->a[87567] = sym_string_content;
	v->a[87568] = actions(3718);
	v->a[87569] = 1;
	v->a[87570] = anon_sym_DOLLAR_LBRACE;
	v->a[87571] = actions(3720);
	v->a[87572] = 1;
	v->a[87573] = anon_sym_DOLLAR_LPAREN;
	v->a[87574] = actions(3722);
	v->a[87575] = 1;
	v->a[87576] = anon_sym_BQUOTE;
	v->a[87577] = actions(3732);
	v->a[87578] = 1;
	v->a[87579] = anon_sym_DOLLAR;
	small_parse_table_4379(v);
}

void	small_parse_table_4379(t_small_parse_table_array *v)
{
	v->a[87580] = state(1738);
	v->a[87581] = 1;
	v->a[87582] = aux_sym_string_repeat1;
	v->a[87583] = state(1869);
	v->a[87584] = 4;
	v->a[87585] = sym_arithmetic_expansion;
	v->a[87586] = sym_simple_expansion;
	v->a[87587] = sym_expansion;
	v->a[87588] = sym_command_substitution;
	v->a[87589] = 4;
	v->a[87590] = actions(3);
	v->a[87591] = 1;
	v->a[87592] = sym_comment;
	v->a[87593] = actions(513);
	v->a[87594] = 1;
	v->a[87595] = sym_variable_name;
	v->a[87596] = actions(511);
	v->a[87597] = 2;
	v->a[87598] = aux_sym__simple_variable_name_token1;
	v->a[87599] = aux_sym__multiline_variable_name_token1;
	small_parse_table_4380(v);
}

/* EOF small_parse_table_875.c */
