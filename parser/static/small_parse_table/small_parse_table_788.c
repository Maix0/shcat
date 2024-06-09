/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_788.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3940(t_small_parse_table_array *v)
{
	v->a[78800] = aux_sym_number_token2;
	v->a[78801] = actions(1628);
	v->a[78802] = 1;
	v->a[78803] = anon_sym_DOLLAR_LBRACE;
	v->a[78804] = actions(1630);
	v->a[78805] = 1;
	v->a[78806] = anon_sym_DOLLAR_LPAREN;
	v->a[78807] = actions(1632);
	v->a[78808] = 1;
	v->a[78809] = anon_sym_BQUOTE;
	v->a[78810] = actions(3156);
	v->a[78811] = 1;
	v->a[78812] = sym__bare_dollar;
	v->a[78813] = actions(3152);
	v->a[78814] = 3;
	v->a[78815] = sym_raw_string;
	v->a[78816] = sym__comment_word;
	v->a[78817] = sym_word;
	v->a[78818] = state(1436);
	v->a[78819] = 6;
	small_parse_table_3941(v);
}

void	small_parse_table_3941(t_small_parse_table_array *v)
{
	v->a[78820] = sym_arithmetic_expansion;
	v->a[78821] = sym_string;
	v->a[78822] = sym_number;
	v->a[78823] = sym_simple_expansion;
	v->a[78824] = sym_expansion;
	v->a[78825] = sym_command_substitution;
	v->a[78826] = 3;
	v->a[78827] = actions(1404);
	v->a[78828] = 1;
	v->a[78829] = sym_comment;
	v->a[78830] = actions(1245);
	v->a[78831] = 7;
	v->a[78832] = anon_sym_PIPE;
	v->a[78833] = anon_sym_LT;
	v->a[78834] = anon_sym_GT;
	v->a[78835] = anon_sym_AMP_GT;
	v->a[78836] = anon_sym_LT_AMP;
	v->a[78837] = anon_sym_GT_AMP;
	v->a[78838] = anon_sym_LT_LT;
	v->a[78839] = actions(1243);
	small_parse_table_3942(v);
}

void	small_parse_table_3942(t_small_parse_table_array *v)
{
	v->a[78840] = 11;
	v->a[78841] = sym_file_descriptor;
	v->a[78842] = sym__concat;
	v->a[78843] = anon_sym_AMP_AMP;
	v->a[78844] = anon_sym_PIPE_PIPE;
	v->a[78845] = anon_sym_GT_GT;
	v->a[78846] = anon_sym_AMP_GT_GT;
	v->a[78847] = anon_sym_GT_PIPE;
	v->a[78848] = anon_sym_LT_AMP_DASH;
	v->a[78849] = anon_sym_GT_AMP_DASH;
	v->a[78850] = anon_sym_LT_LT_DASH;
	v->a[78851] = aux_sym_concatenation_token1;
	v->a[78852] = 12;
	v->a[78853] = actions(3);
	v->a[78854] = 1;
	v->a[78855] = sym_comment;
	v->a[78856] = actions(1479);
	v->a[78857] = 1;
	v->a[78858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78859] = actions(1483);
	small_parse_table_3943(v);
}

void	small_parse_table_3943(t_small_parse_table_array *v)
{
	v->a[78860] = 1;
	v->a[78861] = anon_sym_DQUOTE;
	v->a[78862] = actions(1485);
	v->a[78863] = 1;
	v->a[78864] = aux_sym_number_token1;
	v->a[78865] = actions(1487);
	v->a[78866] = 1;
	v->a[78867] = aux_sym_number_token2;
	v->a[78868] = actions(1489);
	v->a[78869] = 1;
	v->a[78870] = anon_sym_DOLLAR_LBRACE;
	v->a[78871] = actions(1491);
	v->a[78872] = 1;
	v->a[78873] = anon_sym_DOLLAR_LPAREN;
	v->a[78874] = actions(1493);
	v->a[78875] = 1;
	v->a[78876] = anon_sym_BQUOTE;
	v->a[78877] = actions(3230);
	v->a[78878] = 1;
	v->a[78879] = anon_sym_DOLLAR;
	small_parse_table_3944(v);
}

void	small_parse_table_3944(t_small_parse_table_array *v)
{
	v->a[78880] = actions(3232);
	v->a[78881] = 1;
	v->a[78882] = sym__bare_dollar;
	v->a[78883] = actions(3228);
	v->a[78884] = 3;
	v->a[78885] = sym_raw_string;
	v->a[78886] = sym__comment_word;
	v->a[78887] = sym_word;
	v->a[78888] = state(891);
	v->a[78889] = 6;
	v->a[78890] = sym_arithmetic_expansion;
	v->a[78891] = sym_string;
	v->a[78892] = sym_number;
	v->a[78893] = sym_simple_expansion;
	v->a[78894] = sym_expansion;
	v->a[78895] = sym_command_substitution;
	v->a[78896] = 3;
	v->a[78897] = actions(1404);
	v->a[78898] = 1;
	v->a[78899] = sym_comment;
	small_parse_table_3945(v);
}

/* EOF small_parse_table_788.c */
