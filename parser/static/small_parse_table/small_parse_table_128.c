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
	v->a[12800] = 1;
	v->a[12801] = sym_comment;
	v->a[12802] = actions(79);
	v->a[12803] = 1;
	v->a[12804] = sym_word;
	v->a[12805] = actions(81);
	v->a[12806] = 1;
	v->a[12807] = anon_sym_for;
	v->a[12808] = actions(85);
	v->a[12809] = 1;
	v->a[12810] = anon_sym_if;
	v->a[12811] = actions(87);
	v->a[12812] = 1;
	v->a[12813] = anon_sym_case;
	v->a[12814] = actions(89);
	v->a[12815] = 1;
	v->a[12816] = anon_sym_LPAREN;
	v->a[12817] = actions(93);
	v->a[12818] = 1;
	v->a[12819] = anon_sym_LBRACE;
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = actions(95);
	v->a[12821] = 1;
	v->a[12822] = anon_sym_BANG;
	v->a[12823] = actions(99);
	v->a[12824] = 1;
	v->a[12825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12826] = actions(101);
	v->a[12827] = 1;
	v->a[12828] = anon_sym_DOLLAR;
	v->a[12829] = actions(103);
	v->a[12830] = 1;
	v->a[12831] = anon_sym_DQUOTE;
	v->a[12832] = actions(107);
	v->a[12833] = 1;
	v->a[12834] = anon_sym_DOLLAR_LBRACE;
	v->a[12835] = actions(109);
	v->a[12836] = 1;
	v->a[12837] = anon_sym_DOLLAR_LPAREN;
	v->a[12838] = actions(111);
	v->a[12839] = 1;
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = anon_sym_BQUOTE;
	v->a[12841] = actions(113);
	v->a[12842] = 1;
	v->a[12843] = sym_variable_name;
	v->a[12844] = state(105);
	v->a[12845] = 1;
	v->a[12846] = aux_sym__statements_repeat1;
	v->a[12847] = state(185);
	v->a[12848] = 1;
	v->a[12849] = sym_command_name;
	v->a[12850] = state(264);
	v->a[12851] = 1;
	v->a[12852] = sym_variable_assignment;
	v->a[12853] = state(491);
	v->a[12854] = 1;
	v->a[12855] = aux_sym_command_repeat1;
	v->a[12856] = state(599);
	v->a[12857] = 1;
	v->a[12858] = sym_concatenation;
	v->a[12859] = state(615);
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = 1;
	v->a[12861] = sym_file_redirect;
	v->a[12862] = state(815);
	v->a[12863] = 1;
	v->a[12864] = sym_function_definition;
	v->a[12865] = state(836);
	v->a[12866] = 1;
	v->a[12867] = sym__variable_assignments;
	v->a[12868] = state(840);
	v->a[12869] = 1;
	v->a[12870] = sym_redirected_statement;
	v->a[12871] = state(841);
	v->a[12872] = 1;
	v->a[12873] = sym_for_statement;
	v->a[12874] = state(844);
	v->a[12875] = 1;
	v->a[12876] = sym_while_statement;
	v->a[12877] = state(847);
	v->a[12878] = 1;
	v->a[12879] = sym_if_statement;
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = state(848);
	v->a[12881] = 1;
	v->a[12882] = sym_case_statement;
	v->a[12883] = state(850);
	v->a[12884] = 1;
	v->a[12885] = sym_compound_statement;
	v->a[12886] = state(857);
	v->a[12887] = 1;
	v->a[12888] = sym_subshell;
	v->a[12889] = state(869);
	v->a[12890] = 1;
	v->a[12891] = sym_list;
	v->a[12892] = state(874);
	v->a[12893] = 1;
	v->a[12894] = sym_negated_command;
	v->a[12895] = state(879);
	v->a[12896] = 1;
	v->a[12897] = sym_command;
	v->a[12898] = state(917);
	v->a[12899] = 1;
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
