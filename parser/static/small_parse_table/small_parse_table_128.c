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
	v->a[12800] = anon_sym_SEMI_SEMI;
	v->a[12801] = anon_sym_PIPE_AMP;
	v->a[12802] = anon_sym_AMP_AMP;
	v->a[12803] = anon_sym_PIPE_PIPE;
	v->a[12804] = anon_sym_LT;
	v->a[12805] = anon_sym_GT;
	v->a[12806] = anon_sym_GT_GT;
	v->a[12807] = anon_sym_AMP_GT;
	v->a[12808] = anon_sym_AMP_GT_GT;
	v->a[12809] = anon_sym_LT_AMP;
	v->a[12810] = anon_sym_GT_AMP;
	v->a[12811] = anon_sym_GT_PIPE;
	v->a[12812] = anon_sym_LT_AMP_DASH;
	v->a[12813] = anon_sym_GT_AMP_DASH;
	v->a[12814] = anon_sym_LT_LT;
	v->a[12815] = anon_sym_LT_LT_DASH;
	v->a[12816] = anon_sym_AMP;
	v->a[12817] = anon_sym_SEMI;
	v->a[12818] = 6;
	v->a[12819] = actions(3);
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = 1;
	v->a[12821] = sym_comment;
	v->a[12822] = state(1230);
	v->a[12823] = 1;
	v->a[12824] = aux_sym__literal_repeat1;
	v->a[12825] = state(1259);
	v->a[12826] = 1;
	v->a[12827] = sym_concatenation;
	v->a[12828] = actions(1534);
	v->a[12829] = 5;
	v->a[12830] = sym_file_descriptor;
	v->a[12831] = sym_variable_name;
	v->a[12832] = sym_test_operator;
	v->a[12833] = sym__brace_start;
	v->a[12834] = aux_sym_heredoc_redirect_token1;
	v->a[12835] = state(1110);
	v->a[12836] = 7;
	v->a[12837] = sym_arithmetic_expansion;
	v->a[12838] = sym_brace_expression;
	v->a[12839] = sym_string;
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = sym_number;
	v->a[12841] = sym_simple_expansion;
	v->a[12842] = sym_expansion;
	v->a[12843] = sym_command_substitution;
	v->a[12844] = actions(1532);
	v->a[12845] = 31;
	v->a[12846] = anon_sym_PIPE;
	v->a[12847] = anon_sym_SEMI_SEMI;
	v->a[12848] = anon_sym_PIPE_AMP;
	v->a[12849] = anon_sym_AMP_AMP;
	v->a[12850] = anon_sym_PIPE_PIPE;
	v->a[12851] = anon_sym_LT;
	v->a[12852] = anon_sym_GT;
	v->a[12853] = anon_sym_GT_GT;
	v->a[12854] = anon_sym_AMP_GT;
	v->a[12855] = anon_sym_AMP_GT_GT;
	v->a[12856] = anon_sym_LT_AMP;
	v->a[12857] = anon_sym_GT_AMP;
	v->a[12858] = anon_sym_GT_PIPE;
	v->a[12859] = anon_sym_LT_AMP_DASH;
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = anon_sym_GT_AMP_DASH;
	v->a[12861] = anon_sym_LT_LT;
	v->a[12862] = anon_sym_LT_LT_DASH;
	v->a[12863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12864] = anon_sym_AMP;
	v->a[12865] = anon_sym_DOLLAR;
	v->a[12866] = sym__special_character;
	v->a[12867] = anon_sym_DQUOTE;
	v->a[12868] = sym_raw_string;
	v->a[12869] = aux_sym_number_token1;
	v->a[12870] = aux_sym_number_token2;
	v->a[12871] = anon_sym_DOLLAR_LBRACE;
	v->a[12872] = anon_sym_DOLLAR_LPAREN;
	v->a[12873] = anon_sym_BQUOTE;
	v->a[12874] = anon_sym_DOLLAR_BQUOTE;
	v->a[12875] = sym_word;
	v->a[12876] = anon_sym_SEMI;
	v->a[12877] = 23;
	v->a[12878] = actions(3);
	v->a[12879] = 1;
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = sym_comment;
	v->a[12881] = actions(1146);
	v->a[12882] = 1;
	v->a[12883] = anon_sym_LPAREN;
	v->a[12884] = actions(1252);
	v->a[12885] = 1;
	v->a[12886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12887] = actions(1254);
	v->a[12888] = 1;
	v->a[12889] = anon_sym_DOLLAR;
	v->a[12890] = actions(1258);
	v->a[12891] = 1;
	v->a[12892] = anon_sym_DQUOTE;
	v->a[12893] = actions(1260);
	v->a[12894] = 1;
	v->a[12895] = aux_sym_number_token1;
	v->a[12896] = actions(1262);
	v->a[12897] = 1;
	v->a[12898] = aux_sym_number_token2;
	v->a[12899] = actions(1264);
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
