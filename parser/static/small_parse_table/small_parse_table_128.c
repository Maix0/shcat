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
	v->a[12800] = actions(219);
	v->a[12801] = 1;
	v->a[12802] = sym_file_descriptor;
	v->a[12803] = actions(221);
	v->a[12804] = 1;
	v->a[12805] = sym_variable_name;
	v->a[12806] = state(120);
	v->a[12807] = 1;
	v->a[12808] = aux_sym__statements_repeat1;
	v->a[12809] = state(177);
	v->a[12810] = 1;
	v->a[12811] = sym_command_name;
	v->a[12812] = state(208);
	v->a[12813] = 1;
	v->a[12814] = sym_variable_assignment;
	v->a[12815] = state(584);
	v->a[12816] = 1;
	v->a[12817] = sym_concatenation;
	v->a[12818] = state(639);
	v->a[12819] = 1;
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = aux_sym_command_repeat1;
	v->a[12821] = state(687);
	v->a[12822] = 1;
	v->a[12823] = sym_file_redirect;
	v->a[12824] = state(1073);
	v->a[12825] = 1;
	v->a[12826] = sym_pipeline;
	v->a[12827] = state(1158);
	v->a[12828] = 1;
	v->a[12829] = aux_sym_redirected_statement_repeat2;
	v->a[12830] = state(1906);
	v->a[12831] = 1;
	v->a[12832] = sym__statement_not_pipeline;
	v->a[12833] = state(1959);
	v->a[12834] = 1;
	v->a[12835] = sym__statements;
	v->a[12836] = actions(11);
	v->a[12837] = 2;
	v->a[12838] = anon_sym_while;
	v->a[12839] = anon_sym_until;
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = actions(217);
	v->a[12841] = 2;
	v->a[12842] = sym_raw_string;
	v->a[12843] = sym_number;
	v->a[12844] = state(347);
	v->a[12845] = 5;
	v->a[12846] = sym_arithmetic_expansion;
	v->a[12847] = sym_string;
	v->a[12848] = sym_simple_expansion;
	v->a[12849] = sym_expansion;
	v->a[12850] = sym_command_substitution;
	v->a[12851] = actions(215);
	v->a[12852] = 7;
	v->a[12853] = anon_sym_LT;
	v->a[12854] = anon_sym_GT;
	v->a[12855] = anon_sym_GT_GT;
	v->a[12856] = anon_sym_LT_AMP;
	v->a[12857] = anon_sym_GT_AMP;
	v->a[12858] = anon_sym_GT_PIPE;
	v->a[12859] = anon_sym_LT_GT;
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = state(958);
	v->a[12861] = 12;
	v->a[12862] = sym_redirected_statement;
	v->a[12863] = sym_for_statement;
	v->a[12864] = sym_while_statement;
	v->a[12865] = sym_if_statement;
	v->a[12866] = sym_case_statement;
	v->a[12867] = sym_function_definition;
	v->a[12868] = sym_compound_statement;
	v->a[12869] = sym_subshell;
	v->a[12870] = sym_list;
	v->a[12871] = sym_negated_command;
	v->a[12872] = sym_command;
	v->a[12873] = sym__variable_assignments;
	v->a[12874] = 31;
	v->a[12875] = actions(3);
	v->a[12876] = 1;
	v->a[12877] = sym_comment;
	v->a[12878] = actions(9);
	v->a[12879] = 1;
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = anon_sym_for;
	v->a[12881] = actions(13);
	v->a[12882] = 1;
	v->a[12883] = anon_sym_if;
	v->a[12884] = actions(15);
	v->a[12885] = 1;
	v->a[12886] = anon_sym_case;
	v->a[12887] = actions(17);
	v->a[12888] = 1;
	v->a[12889] = anon_sym_LPAREN;
	v->a[12890] = actions(19);
	v->a[12891] = 1;
	v->a[12892] = anon_sym_LBRACE;
	v->a[12893] = actions(55);
	v->a[12894] = 1;
	v->a[12895] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12896] = actions(57);
	v->a[12897] = 1;
	v->a[12898] = anon_sym_DOLLAR;
	v->a[12899] = actions(59);
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
