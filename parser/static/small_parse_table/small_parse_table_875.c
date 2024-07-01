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
	v->a[87500] = anon_sym_DOLLAR_LBRACE;
	v->a[87501] = actions(3424);
	v->a[87502] = 1;
	v->a[87503] = anon_sym_DOLLAR_LPAREN;
	v->a[87504] = actions(3426);
	v->a[87505] = 1;
	v->a[87506] = anon_sym_BQUOTE;
	v->a[87507] = actions(3568);
	v->a[87508] = 1;
	v->a[87509] = anon_sym_DOLLAR;
	v->a[87510] = actions(3570);
	v->a[87511] = 1;
	v->a[87512] = anon_sym_DQUOTE;
	v->a[87513] = state(1906);
	v->a[87514] = 1;
	v->a[87515] = aux_sym_string_repeat1;
	v->a[87516] = state(1959);
	v->a[87517] = 4;
	v->a[87518] = sym_arithmetic_expansion;
	v->a[87519] = sym_simple_expansion;
	small_parse_table_4376(v);
}

void	small_parse_table_4376(t_small_parse_table_array *v)
{
	v->a[87520] = sym_expansion;
	v->a[87521] = sym_command_substitution;
	v->a[87522] = 3;
	v->a[87523] = actions(3);
	v->a[87524] = 1;
	v->a[87525] = sym_comment;
	v->a[87526] = actions(1401);
	v->a[87527] = 1;
	v->a[87528] = sym_extglob_pattern;
	v->a[87529] = actions(1399);
	v->a[87530] = 11;
	v->a[87531] = anon_sym_esac;
	v->a[87532] = anon_sym_LPAREN;
	v->a[87533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87534] = anon_sym_DOLLAR;
	v->a[87535] = anon_sym_DQUOTE;
	v->a[87536] = sym_raw_string;
	v->a[87537] = sym_number;
	v->a[87538] = anon_sym_DOLLAR_LBRACE;
	v->a[87539] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4377(v);
}

void	small_parse_table_4377(t_small_parse_table_array *v)
{
	v->a[87540] = anon_sym_BQUOTE;
	v->a[87541] = sym_word;
	v->a[87542] = 10;
	v->a[87543] = actions(3);
	v->a[87544] = 1;
	v->a[87545] = sym_comment;
	v->a[87546] = actions(3414);
	v->a[87547] = 1;
	v->a[87548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87549] = actions(3420);
	v->a[87550] = 1;
	v->a[87551] = sym_string_content;
	v->a[87552] = actions(3422);
	v->a[87553] = 1;
	v->a[87554] = anon_sym_DOLLAR_LBRACE;
	v->a[87555] = actions(3424);
	v->a[87556] = 1;
	v->a[87557] = anon_sym_DOLLAR_LPAREN;
	v->a[87558] = actions(3426);
	v->a[87559] = 1;
	small_parse_table_4378(v);
}

void	small_parse_table_4378(t_small_parse_table_array *v)
{
	v->a[87560] = anon_sym_BQUOTE;
	v->a[87561] = actions(3572);
	v->a[87562] = 1;
	v->a[87563] = anon_sym_DOLLAR;
	v->a[87564] = actions(3574);
	v->a[87565] = 1;
	v->a[87566] = anon_sym_DQUOTE;
	v->a[87567] = state(1906);
	v->a[87568] = 1;
	v->a[87569] = aux_sym_string_repeat1;
	v->a[87570] = state(1959);
	v->a[87571] = 4;
	v->a[87572] = sym_arithmetic_expansion;
	v->a[87573] = sym_simple_expansion;
	v->a[87574] = sym_expansion;
	v->a[87575] = sym_command_substitution;
	v->a[87576] = 10;
	v->a[87577] = actions(3);
	v->a[87578] = 1;
	v->a[87579] = sym_comment;
	small_parse_table_4379(v);
}

void	small_parse_table_4379(t_small_parse_table_array *v)
{
	v->a[87580] = actions(3414);
	v->a[87581] = 1;
	v->a[87582] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87583] = actions(3420);
	v->a[87584] = 1;
	v->a[87585] = sym_string_content;
	v->a[87586] = actions(3422);
	v->a[87587] = 1;
	v->a[87588] = anon_sym_DOLLAR_LBRACE;
	v->a[87589] = actions(3424);
	v->a[87590] = 1;
	v->a[87591] = anon_sym_DOLLAR_LPAREN;
	v->a[87592] = actions(3426);
	v->a[87593] = 1;
	v->a[87594] = anon_sym_BQUOTE;
	v->a[87595] = actions(3576);
	v->a[87596] = 1;
	v->a[87597] = anon_sym_DOLLAR;
	v->a[87598] = actions(3578);
	v->a[87599] = 1;
	small_parse_table_4380(v);
}

/* EOF small_parse_table_875.c */
