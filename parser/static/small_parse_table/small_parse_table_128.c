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
	v->a[12800] = sym_case_statement;
	v->a[12801] = sym_function_definition;
	v->a[12802] = sym_compound_statement;
	v->a[12803] = sym_subshell;
	v->a[12804] = sym_list;
	v->a[12805] = sym_negated_command;
	v->a[12806] = sym_command;
	v->a[12807] = sym__variable_assignments;
	v->a[12808] = 40;
	v->a[12809] = actions(3);
	v->a[12810] = 1;
	v->a[12811] = sym_comment;
	v->a[12812] = actions(9);
	v->a[12813] = 1;
	v->a[12814] = anon_sym_for;
	v->a[12815] = actions(13);
	v->a[12816] = 1;
	v->a[12817] = anon_sym_if;
	v->a[12818] = actions(15);
	v->a[12819] = 1;
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = anon_sym_case;
	v->a[12821] = actions(17);
	v->a[12822] = 1;
	v->a[12823] = anon_sym_LPAREN;
	v->a[12824] = actions(19);
	v->a[12825] = 1;
	v->a[12826] = anon_sym_LBRACE;
	v->a[12827] = actions(53);
	v->a[12828] = 1;
	v->a[12829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12830] = actions(55);
	v->a[12831] = 1;
	v->a[12832] = anon_sym_DOLLAR;
	v->a[12833] = actions(57);
	v->a[12834] = 1;
	v->a[12835] = anon_sym_DQUOTE;
	v->a[12836] = actions(61);
	v->a[12837] = 1;
	v->a[12838] = anon_sym_DOLLAR_LBRACE;
	v->a[12839] = actions(63);
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = 1;
	v->a[12841] = anon_sym_DOLLAR_LPAREN;
	v->a[12842] = actions(65);
	v->a[12843] = 1;
	v->a[12844] = anon_sym_BQUOTE;
	v->a[12845] = actions(67);
	v->a[12846] = 1;
	v->a[12847] = sym_variable_name;
	v->a[12848] = actions(204);
	v->a[12849] = 1;
	v->a[12850] = sym_word;
	v->a[12851] = actions(206);
	v->a[12852] = 1;
	v->a[12853] = anon_sym_BANG;
	v->a[12854] = state(109);
	v->a[12855] = 1;
	v->a[12856] = aux_sym__statements_repeat1;
	v->a[12857] = state(179);
	v->a[12858] = 1;
	v->a[12859] = sym_command_name;
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = state(239);
	v->a[12861] = 1;
	v->a[12862] = sym_variable_assignment;
	v->a[12863] = state(385);
	v->a[12864] = 1;
	v->a[12865] = aux_sym_command_repeat1;
	v->a[12866] = state(555);
	v->a[12867] = 1;
	v->a[12868] = sym_concatenation;
	v->a[12869] = state(599);
	v->a[12870] = 1;
	v->a[12871] = sym_file_redirect;
	v->a[12872] = state(835);
	v->a[12873] = 1;
	v->a[12874] = sym__variable_assignments;
	v->a[12875] = state(840);
	v->a[12876] = 1;
	v->a[12877] = sym_command;
	v->a[12878] = state(841);
	v->a[12879] = 1;
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = sym_negated_command;
	v->a[12881] = state(842);
	v->a[12882] = 1;
	v->a[12883] = sym_list;
	v->a[12884] = state(845);
	v->a[12885] = 1;
	v->a[12886] = sym_subshell;
	v->a[12887] = state(848);
	v->a[12888] = 1;
	v->a[12889] = sym_compound_statement;
	v->a[12890] = state(849);
	v->a[12891] = 1;
	v->a[12892] = sym_function_definition;
	v->a[12893] = state(850);
	v->a[12894] = 1;
	v->a[12895] = sym_case_statement;
	v->a[12896] = state(851);
	v->a[12897] = 1;
	v->a[12898] = sym_if_statement;
	v->a[12899] = state(855);
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
