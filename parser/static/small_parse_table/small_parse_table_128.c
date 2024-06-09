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
	v->a[12800] = anon_sym_LBRACE;
	v->a[12801] = actions(63);
	v->a[12802] = 1;
	v->a[12803] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12804] = actions(65);
	v->a[12805] = 1;
	v->a[12806] = anon_sym_DOLLAR;
	v->a[12807] = actions(67);
	v->a[12808] = 1;
	v->a[12809] = anon_sym_DQUOTE;
	v->a[12810] = actions(71);
	v->a[12811] = 1;
	v->a[12812] = aux_sym_number_token1;
	v->a[12813] = actions(73);
	v->a[12814] = 1;
	v->a[12815] = aux_sym_number_token2;
	v->a[12816] = actions(75);
	v->a[12817] = 1;
	v->a[12818] = anon_sym_DOLLAR_LBRACE;
	v->a[12819] = actions(77);
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = 1;
	v->a[12821] = anon_sym_DOLLAR_LPAREN;
	v->a[12822] = actions(79);
	v->a[12823] = 1;
	v->a[12824] = anon_sym_BQUOTE;
	v->a[12825] = actions(248);
	v->a[12826] = 1;
	v->a[12827] = sym_word;
	v->a[12828] = actions(250);
	v->a[12829] = 1;
	v->a[12830] = anon_sym_BANG;
	v->a[12831] = actions(256);
	v->a[12832] = 1;
	v->a[12833] = sym_raw_string;
	v->a[12834] = actions(258);
	v->a[12835] = 1;
	v->a[12836] = sym_file_descriptor;
	v->a[12837] = actions(260);
	v->a[12838] = 1;
	v->a[12839] = sym_variable_name;
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = state(141);
	v->a[12841] = 1;
	v->a[12842] = aux_sym__statements_repeat1;
	v->a[12843] = state(175);
	v->a[12844] = 1;
	v->a[12845] = sym_command_name;
	v->a[12846] = state(278);
	v->a[12847] = 1;
	v->a[12848] = sym_variable_assignment;
	v->a[12849] = state(567);
	v->a[12850] = 1;
	v->a[12851] = aux_sym_command_repeat1;
	v->a[12852] = state(582);
	v->a[12853] = 1;
	v->a[12854] = sym_concatenation;
	v->a[12855] = state(727);
	v->a[12856] = 1;
	v->a[12857] = sym_file_redirect;
	v->a[12858] = state(1100);
	v->a[12859] = 1;
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = sym_pipeline;
	v->a[12861] = state(1196);
	v->a[12862] = 1;
	v->a[12863] = aux_sym_redirected_statement_repeat2;
	v->a[12864] = state(2037);
	v->a[12865] = 1;
	v->a[12866] = sym__statement_not_pipeline;
	v->a[12867] = state(2137);
	v->a[12868] = 1;
	v->a[12869] = sym__statements;
	v->a[12870] = actions(11);
	v->a[12871] = 2;
	v->a[12872] = anon_sym_while;
	v->a[12873] = anon_sym_until;
	v->a[12874] = actions(254);
	v->a[12875] = 2;
	v->a[12876] = anon_sym_LT_AMP_DASH;
	v->a[12877] = anon_sym_GT_AMP_DASH;
	v->a[12878] = state(295);
	v->a[12879] = 6;
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = sym_arithmetic_expansion;
	v->a[12881] = sym_string;
	v->a[12882] = sym_number;
	v->a[12883] = sym_simple_expansion;
	v->a[12884] = sym_expansion;
	v->a[12885] = sym_command_substitution;
	v->a[12886] = actions(252);
	v->a[12887] = 8;
	v->a[12888] = anon_sym_LT;
	v->a[12889] = anon_sym_GT;
	v->a[12890] = anon_sym_GT_GT;
	v->a[12891] = anon_sym_AMP_GT;
	v->a[12892] = anon_sym_AMP_GT_GT;
	v->a[12893] = anon_sym_LT_AMP;
	v->a[12894] = anon_sym_GT_AMP;
	v->a[12895] = anon_sym_GT_PIPE;
	v->a[12896] = state(1031);
	v->a[12897] = 12;
	v->a[12898] = sym_redirected_statement;
	v->a[12899] = sym_for_statement;
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
