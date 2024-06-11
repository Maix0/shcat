/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_128.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_640(t_small_parse_table_array *v)
{
	v->a[12800] = sym_list;
	v->a[12801] = sym_negated_command;
	v->a[12802] = sym_command;
	v->a[12803] = sym_variable_assignments;
	v->a[12804] = 32;
	v->a[12805] = actions(3);
	v->a[12806] = 1;
	v->a[12807] = sym_comment;
	v->a[12808] = actions(9);
	v->a[12809] = 1;
	v->a[12810] = anon_sym_for;
	v->a[12811] = actions(13);
	v->a[12812] = 1;
	v->a[12813] = anon_sym_if;
	v->a[12814] = actions(15);
	v->a[12815] = 1;
	v->a[12816] = anon_sym_case;
	v->a[12817] = actions(17);
	v->a[12818] = 1;
	v->a[12819] = anon_sym_LPAREN;
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = actions(19);
	v->a[12821] = 1;
	v->a[12822] = anon_sym_LBRACE;
	v->a[12823] = actions(59);
	v->a[12824] = 1;
	v->a[12825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12826] = actions(61);
	v->a[12827] = 1;
	v->a[12828] = anon_sym_DOLLAR;
	v->a[12829] = actions(63);
	v->a[12830] = 1;
	v->a[12831] = anon_sym_DQUOTE;
	v->a[12832] = actions(67);
	v->a[12833] = 1;
	v->a[12834] = anon_sym_DOLLAR_LBRACE;
	v->a[12835] = actions(69);
	v->a[12836] = 1;
	v->a[12837] = anon_sym_DOLLAR_LPAREN;
	v->a[12838] = actions(71);
	v->a[12839] = 1;
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = anon_sym_BQUOTE;
	v->a[12841] = actions(73);
	v->a[12842] = 1;
	v->a[12843] = sym_file_descriptor;
	v->a[12844] = actions(75);
	v->a[12845] = 1;
	v->a[12846] = sym_variable_name;
	v->a[12847] = actions(236);
	v->a[12848] = 1;
	v->a[12849] = sym_word;
	v->a[12850] = actions(238);
	v->a[12851] = 1;
	v->a[12852] = anon_sym_BANG;
	v->a[12853] = state(140);
	v->a[12854] = 1;
	v->a[12855] = aux_sym__statements_repeat1;
	v->a[12856] = state(189);
	v->a[12857] = 1;
	v->a[12858] = sym_command_name;
	v->a[12859] = state(286);
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = 1;
	v->a[12861] = sym_variable_assignment;
	v->a[12862] = state(647);
	v->a[12863] = 1;
	v->a[12864] = sym_concatenation;
	v->a[12865] = state(746);
	v->a[12866] = 1;
	v->a[12867] = aux_sym_command_repeat1;
	v->a[12868] = state(905);
	v->a[12869] = 1;
	v->a[12870] = sym_file_redirect;
	v->a[12871] = state(1422);
	v->a[12872] = 1;
	v->a[12873] = sym_pipeline;
	v->a[12874] = state(1429);
	v->a[12875] = 1;
	v->a[12876] = aux_sym_redirected_statement_repeat2;
	v->a[12877] = state(2271);
	v->a[12878] = 1;
	v->a[12879] = sym__statement_not_pipeline;
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = state(2469);
	v->a[12881] = 1;
	v->a[12882] = sym__statements;
	v->a[12883] = actions(11);
	v->a[12884] = 2;
	v->a[12885] = anon_sym_while;
	v->a[12886] = anon_sym_until;
	v->a[12887] = actions(57);
	v->a[12888] = 2;
	v->a[12889] = anon_sym_LT_AMP_DASH;
	v->a[12890] = anon_sym_GT_AMP_DASH;
	v->a[12891] = actions(65);
	v->a[12892] = 2;
	v->a[12893] = sym_raw_string;
	v->a[12894] = sym_number;
	v->a[12895] = state(394);
	v->a[12896] = 5;
	v->a[12897] = sym_arithmetic_expansion;
	v->a[12898] = sym_string;
	v->a[12899] = sym_simple_expansion;
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
