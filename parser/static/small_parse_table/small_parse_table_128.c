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
	v->a[12800] = anon_sym_until;
	v->a[12801] = actions(57);
	v->a[12802] = 2;
	v->a[12803] = anon_sym_LT_AMP_DASH;
	v->a[12804] = anon_sym_GT_AMP_DASH;
	v->a[12805] = actions(65);
	v->a[12806] = 2;
	v->a[12807] = sym_raw_string;
	v->a[12808] = sym_number;
	v->a[12809] = state(443);
	v->a[12810] = 5;
	v->a[12811] = sym_arithmetic_expansion;
	v->a[12812] = sym_string;
	v->a[12813] = sym_simple_expansion;
	v->a[12814] = sym_expansion;
	v->a[12815] = sym_command_substitution;
	v->a[12816] = actions(55);
	v->a[12817] = 6;
	v->a[12818] = anon_sym_LT;
	v->a[12819] = anon_sym_GT;
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = anon_sym_GT_GT;
	v->a[12821] = anon_sym_LT_AMP;
	v->a[12822] = anon_sym_GT_AMP;
	v->a[12823] = anon_sym_GT_PIPE;
	v->a[12824] = state(1030);
	v->a[12825] = 12;
	v->a[12826] = sym_redirected_statement;
	v->a[12827] = sym_for_statement;
	v->a[12828] = sym_while_statement;
	v->a[12829] = sym_if_statement;
	v->a[12830] = sym_case_statement;
	v->a[12831] = sym_function_definition;
	v->a[12832] = sym_compound_statement;
	v->a[12833] = sym_subshell;
	v->a[12834] = sym_list;
	v->a[12835] = sym_negated_command;
	v->a[12836] = sym_command;
	v->a[12837] = sym__variable_assignments;
	v->a[12838] = 32;
	v->a[12839] = actions(3);
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = 1;
	v->a[12841] = sym_comment;
	v->a[12842] = actions(9);
	v->a[12843] = 1;
	v->a[12844] = anon_sym_for;
	v->a[12845] = actions(13);
	v->a[12846] = 1;
	v->a[12847] = anon_sym_if;
	v->a[12848] = actions(15);
	v->a[12849] = 1;
	v->a[12850] = anon_sym_case;
	v->a[12851] = actions(17);
	v->a[12852] = 1;
	v->a[12853] = anon_sym_LPAREN;
	v->a[12854] = actions(19);
	v->a[12855] = 1;
	v->a[12856] = anon_sym_LBRACE;
	v->a[12857] = actions(59);
	v->a[12858] = 1;
	v->a[12859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = actions(61);
	v->a[12861] = 1;
	v->a[12862] = anon_sym_DOLLAR;
	v->a[12863] = actions(63);
	v->a[12864] = 1;
	v->a[12865] = anon_sym_DQUOTE;
	v->a[12866] = actions(67);
	v->a[12867] = 1;
	v->a[12868] = anon_sym_DOLLAR_LBRACE;
	v->a[12869] = actions(69);
	v->a[12870] = 1;
	v->a[12871] = anon_sym_DOLLAR_LPAREN;
	v->a[12872] = actions(71);
	v->a[12873] = 1;
	v->a[12874] = anon_sym_BQUOTE;
	v->a[12875] = actions(220);
	v->a[12876] = 1;
	v->a[12877] = sym_word;
	v->a[12878] = actions(222);
	v->a[12879] = 1;
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = anon_sym_BANG;
	v->a[12881] = actions(230);
	v->a[12882] = 1;
	v->a[12883] = sym_file_descriptor;
	v->a[12884] = actions(232);
	v->a[12885] = 1;
	v->a[12886] = sym_variable_name;
	v->a[12887] = state(133);
	v->a[12888] = 1;
	v->a[12889] = aux_sym__statements_repeat1;
	v->a[12890] = state(180);
	v->a[12891] = 1;
	v->a[12892] = sym_command_name;
	v->a[12893] = state(231);
	v->a[12894] = 1;
	v->a[12895] = sym_variable_assignment;
	v->a[12896] = state(650);
	v->a[12897] = 1;
	v->a[12898] = sym_concatenation;
	v->a[12899] = state(710);
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
