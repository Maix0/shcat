/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_498.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2490(t_small_parse_table_array *v)
{
	v->a[49800] = actions(1633);
	v->a[49801] = 1;
	v->a[49802] = anon_sym_LF;
	v->a[49803] = state(767);
	v->a[49804] = 1;
	v->a[49805] = aux_sym__case_item_last_repeat2;
	v->a[49806] = actions(1636);
	v->a[49807] = 2;
	v->a[49808] = sym_file_descriptor;
	v->a[49809] = sym_variable_name;
	v->a[49810] = actions(1631);
	v->a[49811] = 27;
	v->a[49812] = anon_sym_for;
	v->a[49813] = anon_sym_while;
	v->a[49814] = anon_sym_until;
	v->a[49815] = anon_sym_if;
	v->a[49816] = anon_sym_case;
	v->a[49817] = anon_sym_LPAREN;
	v->a[49818] = anon_sym_LBRACE;
	v->a[49819] = anon_sym_BANG;
	small_parse_table_2491(v);
}

void	small_parse_table_2491(t_small_parse_table_array *v)
{
	v->a[49820] = anon_sym_LT;
	v->a[49821] = anon_sym_GT;
	v->a[49822] = anon_sym_GT_GT;
	v->a[49823] = anon_sym_AMP_GT;
	v->a[49824] = anon_sym_AMP_GT_GT;
	v->a[49825] = anon_sym_LT_AMP;
	v->a[49826] = anon_sym_GT_AMP;
	v->a[49827] = anon_sym_GT_PIPE;
	v->a[49828] = anon_sym_LT_AMP_DASH;
	v->a[49829] = anon_sym_GT_AMP_DASH;
	v->a[49830] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49831] = anon_sym_DOLLAR;
	v->a[49832] = anon_sym_DQUOTE;
	v->a[49833] = sym_raw_string;
	v->a[49834] = sym_number;
	v->a[49835] = anon_sym_DOLLAR_LBRACE;
	v->a[49836] = anon_sym_DOLLAR_LPAREN;
	v->a[49837] = anon_sym_BQUOTE;
	v->a[49838] = sym_word;
	v->a[49839] = 17;
	small_parse_table_2492(v);
}

void	small_parse_table_2492(t_small_parse_table_array *v)
{
	v->a[49840] = actions(3);
	v->a[49841] = 1;
	v->a[49842] = sym_comment;
	v->a[49843] = actions(59);
	v->a[49844] = 1;
	v->a[49845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49846] = actions(61);
	v->a[49847] = 1;
	v->a[49848] = anon_sym_DOLLAR;
	v->a[49849] = actions(63);
	v->a[49850] = 1;
	v->a[49851] = anon_sym_DQUOTE;
	v->a[49852] = actions(67);
	v->a[49853] = 1;
	v->a[49854] = anon_sym_DOLLAR_LBRACE;
	v->a[49855] = actions(69);
	v->a[49856] = 1;
	v->a[49857] = anon_sym_DOLLAR_LPAREN;
	v->a[49858] = actions(71);
	v->a[49859] = 1;
	small_parse_table_2493(v);
}

void	small_parse_table_2493(t_small_parse_table_array *v)
{
	v->a[49860] = anon_sym_BQUOTE;
	v->a[49861] = actions(377);
	v->a[49862] = 1;
	v->a[49863] = sym_variable_name;
	v->a[49864] = actions(1201);
	v->a[49865] = 1;
	v->a[49866] = sym_file_descriptor;
	v->a[49867] = state(254);
	v->a[49868] = 1;
	v->a[49869] = sym_command_name;
	v->a[49870] = state(647);
	v->a[49871] = 1;
	v->a[49872] = sym_concatenation;
	v->a[49873] = state(1477);
	v->a[49874] = 1;
	v->a[49875] = sym_file_redirect;
	v->a[49876] = actions(1199);
	v->a[49877] = 2;
	v->a[49878] = anon_sym_LT_AMP_DASH;
	v->a[49879] = anon_sym_GT_AMP_DASH;
	small_parse_table_2494(v);
}

void	small_parse_table_2494(t_small_parse_table_array *v)
{
	v->a[49880] = state(1241);
	v->a[49881] = 2;
	v->a[49882] = sym_variable_assignment;
	v->a[49883] = aux_sym_command_repeat1;
	v->a[49884] = actions(371);
	v->a[49885] = 3;
	v->a[49886] = sym_raw_string;
	v->a[49887] = sym_number;
	v->a[49888] = sym_word;
	v->a[49889] = state(790);
	v->a[49890] = 5;
	v->a[49891] = sym_arithmetic_expansion;
	v->a[49892] = sym_string;
	v->a[49893] = sym_simple_expansion;
	v->a[49894] = sym_expansion;
	v->a[49895] = sym_command_substitution;
	v->a[49896] = actions(1197);
	v->a[49897] = 8;
	v->a[49898] = anon_sym_LT;
	v->a[49899] = anon_sym_GT;
	small_parse_table_2495(v);
}

/* EOF small_parse_table_498.c */
