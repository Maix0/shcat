/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_496.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2480(t_small_parse_table_array *v)
{
	v->a[49600] = sym_arithmetic_expansion;
	v->a[49601] = sym_simple_expansion;
	v->a[49602] = sym_expansion;
	v->a[49603] = sym_command_substitution;
	v->a[49604] = 10;
	v->a[49605] = actions(3);
	v->a[49606] = 1;
	v->a[49607] = sym_comment;
	v->a[49608] = actions(2293);
	v->a[49609] = 1;
	v->a[49610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49611] = actions(2299);
	v->a[49612] = 1;
	v->a[49613] = sym_string_content;
	v->a[49614] = actions(2301);
	v->a[49615] = 1;
	v->a[49616] = anon_sym_DOLLAR_LBRACE;
	v->a[49617] = actions(2303);
	v->a[49618] = 1;
	v->a[49619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2481(v);
}

void	small_parse_table_2481(t_small_parse_table_array *v)
{
	v->a[49620] = actions(2305);
	v->a[49621] = 1;
	v->a[49622] = anon_sym_BQUOTE;
	v->a[49623] = actions(2408);
	v->a[49624] = 1;
	v->a[49625] = anon_sym_DOLLAR;
	v->a[49626] = actions(2410);
	v->a[49627] = 1;
	v->a[49628] = anon_sym_DQUOTE;
	v->a[49629] = state(1176);
	v->a[49630] = 1;
	v->a[49631] = aux_sym_string_repeat1;
	v->a[49632] = state(1394);
	v->a[49633] = 4;
	v->a[49634] = sym_arithmetic_expansion;
	v->a[49635] = sym_simple_expansion;
	v->a[49636] = sym_expansion;
	v->a[49637] = sym_command_substitution;
	v->a[49638] = 10;
	v->a[49639] = actions(3);
	small_parse_table_2482(v);
}

void	small_parse_table_2482(t_small_parse_table_array *v)
{
	v->a[49640] = 1;
	v->a[49641] = sym_comment;
	v->a[49642] = actions(2293);
	v->a[49643] = 1;
	v->a[49644] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49645] = actions(2299);
	v->a[49646] = 1;
	v->a[49647] = sym_string_content;
	v->a[49648] = actions(2301);
	v->a[49649] = 1;
	v->a[49650] = anon_sym_DOLLAR_LBRACE;
	v->a[49651] = actions(2303);
	v->a[49652] = 1;
	v->a[49653] = anon_sym_DOLLAR_LPAREN;
	v->a[49654] = actions(2305);
	v->a[49655] = 1;
	v->a[49656] = anon_sym_BQUOTE;
	v->a[49657] = actions(2412);
	v->a[49658] = 1;
	v->a[49659] = anon_sym_DOLLAR;
	small_parse_table_2483(v);
}

void	small_parse_table_2483(t_small_parse_table_array *v)
{
	v->a[49660] = actions(2414);
	v->a[49661] = 1;
	v->a[49662] = anon_sym_DQUOTE;
	v->a[49663] = state(1176);
	v->a[49664] = 1;
	v->a[49665] = aux_sym_string_repeat1;
	v->a[49666] = state(1394);
	v->a[49667] = 4;
	v->a[49668] = sym_arithmetic_expansion;
	v->a[49669] = sym_simple_expansion;
	v->a[49670] = sym_expansion;
	v->a[49671] = sym_command_substitution;
	v->a[49672] = 10;
	v->a[49673] = actions(3);
	v->a[49674] = 1;
	v->a[49675] = sym_comment;
	v->a[49676] = actions(2293);
	v->a[49677] = 1;
	v->a[49678] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49679] = actions(2299);
	small_parse_table_2484(v);
}

void	small_parse_table_2484(t_small_parse_table_array *v)
{
	v->a[49680] = 1;
	v->a[49681] = sym_string_content;
	v->a[49682] = actions(2301);
	v->a[49683] = 1;
	v->a[49684] = anon_sym_DOLLAR_LBRACE;
	v->a[49685] = actions(2303);
	v->a[49686] = 1;
	v->a[49687] = anon_sym_DOLLAR_LPAREN;
	v->a[49688] = actions(2305);
	v->a[49689] = 1;
	v->a[49690] = anon_sym_BQUOTE;
	v->a[49691] = actions(2416);
	v->a[49692] = 1;
	v->a[49693] = anon_sym_DOLLAR;
	v->a[49694] = actions(2418);
	v->a[49695] = 1;
	v->a[49696] = anon_sym_DQUOTE;
	v->a[49697] = state(1101);
	v->a[49698] = 1;
	v->a[49699] = aux_sym_string_repeat1;
	small_parse_table_2485(v);
}

/* EOF small_parse_table_496.c */
