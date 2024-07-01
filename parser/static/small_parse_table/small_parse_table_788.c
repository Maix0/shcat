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
	v->a[78800] = anon_sym_GT;
	v->a[78801] = anon_sym_LT_AMP;
	v->a[78802] = anon_sym_GT_AMP;
	v->a[78803] = 10;
	v->a[78804] = actions(3);
	v->a[78805] = 1;
	v->a[78806] = sym_comment;
	v->a[78807] = actions(2850);
	v->a[78808] = 1;
	v->a[78809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78810] = actions(2852);
	v->a[78811] = 1;
	v->a[78812] = anon_sym_DOLLAR;
	v->a[78813] = actions(2854);
	v->a[78814] = 1;
	v->a[78815] = anon_sym_DQUOTE;
	v->a[78816] = actions(2856);
	v->a[78817] = 1;
	v->a[78818] = anon_sym_DOLLAR_LBRACE;
	v->a[78819] = actions(2858);
	small_parse_table_3941(v);
}

void	small_parse_table_3941(t_small_parse_table_array *v)
{
	v->a[78820] = 1;
	v->a[78821] = anon_sym_DOLLAR_LPAREN;
	v->a[78822] = actions(2860);
	v->a[78823] = 1;
	v->a[78824] = anon_sym_BQUOTE;
	v->a[78825] = state(197);
	v->a[78826] = 2;
	v->a[78827] = sym_concatenation;
	v->a[78828] = aux_sym_for_statement_repeat1;
	v->a[78829] = actions(3067);
	v->a[78830] = 3;
	v->a[78831] = sym_raw_string;
	v->a[78832] = sym_number;
	v->a[78833] = sym_word;
	v->a[78834] = state(462);
	v->a[78835] = 5;
	v->a[78836] = sym_arithmetic_expansion;
	v->a[78837] = sym_string;
	v->a[78838] = sym_simple_expansion;
	v->a[78839] = sym_expansion;
	small_parse_table_3942(v);
}

void	small_parse_table_3942(t_small_parse_table_array *v)
{
	v->a[78840] = sym_command_substitution;
	v->a[78841] = 8;
	v->a[78842] = actions(870);
	v->a[78843] = 1;
	v->a[78844] = sym_comment;
	v->a[78845] = actions(3041);
	v->a[78846] = 1;
	v->a[78847] = sym_file_descriptor;
	v->a[78848] = actions(2224);
	v->a[78849] = 2;
	v->a[78850] = anon_sym_PIPE;
	v->a[78851] = anon_sym_LT_LT;
	v->a[78852] = actions(2986);
	v->a[78853] = 2;
	v->a[78854] = anon_sym_GT_GT;
	v->a[78855] = anon_sym_GT_PIPE;
	v->a[78856] = actions(2988);
	v->a[78857] = 2;
	v->a[78858] = anon_sym_LT_AMP_DASH;
	v->a[78859] = anon_sym_GT_AMP_DASH;
	small_parse_table_3943(v);
}

void	small_parse_table_3943(t_small_parse_table_array *v)
{
	v->a[78860] = state(1596);
	v->a[78861] = 2;
	v->a[78862] = sym_file_redirect;
	v->a[78863] = aux_sym_redirected_statement_repeat2;
	v->a[78864] = actions(2222);
	v->a[78865] = 3;
	v->a[78866] = anon_sym_AMP_AMP;
	v->a[78867] = anon_sym_PIPE_PIPE;
	v->a[78868] = anon_sym_LT_LT_DASH;
	v->a[78869] = actions(2984);
	v->a[78870] = 4;
	v->a[78871] = anon_sym_LT;
	v->a[78872] = anon_sym_GT;
	v->a[78873] = anon_sym_LT_AMP;
	v->a[78874] = anon_sym_GT_AMP;
	v->a[78875] = 10;
	v->a[78876] = actions(3);
	v->a[78877] = 1;
	v->a[78878] = sym_comment;
	v->a[78879] = actions(2850);
	small_parse_table_3944(v);
}

void	small_parse_table_3944(t_small_parse_table_array *v)
{
	v->a[78880] = 1;
	v->a[78881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78882] = actions(2852);
	v->a[78883] = 1;
	v->a[78884] = anon_sym_DOLLAR;
	v->a[78885] = actions(2854);
	v->a[78886] = 1;
	v->a[78887] = anon_sym_DQUOTE;
	v->a[78888] = actions(2856);
	v->a[78889] = 1;
	v->a[78890] = anon_sym_DOLLAR_LBRACE;
	v->a[78891] = actions(2858);
	v->a[78892] = 1;
	v->a[78893] = anon_sym_DOLLAR_LPAREN;
	v->a[78894] = actions(2860);
	v->a[78895] = 1;
	v->a[78896] = anon_sym_BQUOTE;
	v->a[78897] = state(202);
	v->a[78898] = 2;
	v->a[78899] = sym_concatenation;
	small_parse_table_3945(v);
}

/* EOF small_parse_table_788.c */
