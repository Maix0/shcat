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
	v->a[12801] = anon_sym_DOLLAR;
	v->a[12802] = actions(1149);
	v->a[12803] = 1;
	v->a[12804] = anon_sym_DQUOTE;
	v->a[12805] = actions(1153);
	v->a[12806] = 1;
	v->a[12807] = aux_sym_number_token1;
	v->a[12808] = actions(1155);
	v->a[12809] = 1;
	v->a[12810] = aux_sym_number_token2;
	v->a[12811] = actions(1157);
	v->a[12812] = 1;
	v->a[12813] = anon_sym_DOLLAR_LBRACE;
	v->a[12814] = actions(1159);
	v->a[12815] = 1;
	v->a[12816] = anon_sym_DOLLAR_LPAREN;
	v->a[12817] = actions(1163);
	v->a[12818] = 1;
	v->a[12819] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_641(v);
}

void	small_parse_table_641(t_small_parse_table_array *v)
{
	v->a[12820] = actions(1169);
	v->a[12821] = 1;
	v->a[12822] = sym__brace_start;
	v->a[12823] = actions(1171);
	v->a[12824] = 1;
	v->a[12825] = sym_word;
	v->a[12826] = actions(1181);
	v->a[12827] = 1;
	v->a[12828] = sym__special_character;
	v->a[12829] = actions(1185);
	v->a[12830] = 1;
	v->a[12831] = sym_test_operator;
	v->a[12832] = actions(3050);
	v->a[12833] = 1;
	v->a[12834] = anon_sym_LPAREN;
	v->a[12835] = actions(3052);
	v->a[12836] = 1;
	v->a[12837] = anon_sym_BANG;
	v->a[12838] = actions(3058);
	v->a[12839] = 1;
	small_parse_table_642(v);
}

void	small_parse_table_642(t_small_parse_table_array *v)
{
	v->a[12840] = anon_sym_TILDE;
	v->a[12841] = actions(3060);
	v->a[12842] = 1;
	v->a[12843] = anon_sym_BQUOTE;
	v->a[12844] = actions(3064);
	v->a[12845] = 1;
	v->a[12846] = sym_variable_name;
	v->a[12847] = actions(3111);
	v->a[12848] = 1;
	v->a[12849] = aux_sym__simple_variable_name_token1;
	v->a[12850] = state(2387);
	v->a[12851] = 1;
	v->a[12852] = sym_command_substitution;
	v->a[12853] = state(2484);
	v->a[12854] = 1;
	v->a[12855] = aux_sym__literal_repeat1;
	v->a[12856] = state(2801);
	v->a[12857] = 1;
	v->a[12858] = sym__arithmetic_binary_expression;
	v->a[12859] = state(2803);
	small_parse_table_643(v);
}

void	small_parse_table_643(t_small_parse_table_array *v)
{
	v->a[12860] = 1;
	v->a[12861] = sym__arithmetic_ternary_expression;
	v->a[12862] = state(2809);
	v->a[12863] = 1;
	v->a[12864] = sym__arithmetic_unary_expression;
	v->a[12865] = state(2825);
	v->a[12866] = 1;
	v->a[12867] = sym__arithmetic_postfix_expression;
	v->a[12868] = state(3158);
	v->a[12869] = 1;
	v->a[12870] = sym__expression;
	v->a[12871] = actions(1129);
	v->a[12872] = 2;
	v->a[12873] = anon_sym_LPAREN_LPAREN;
	v->a[12874] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12875] = actions(1165);
	v->a[12876] = 2;
	v->a[12877] = anon_sym_LT_LPAREN;
	v->a[12878] = anon_sym_GT_LPAREN;
	v->a[12879] = actions(1183);
	small_parse_table_644(v);
}

void	small_parse_table_644(t_small_parse_table_array *v)
{
	v->a[12880] = 2;
	v->a[12881] = sym_raw_string;
	v->a[12882] = sym_ansi_c_string;
	v->a[12883] = actions(3054);
	v->a[12884] = 2;
	v->a[12885] = anon_sym_PLUS_PLUS2;
	v->a[12886] = anon_sym_DASH_DASH2;
	v->a[12887] = actions(3056);
	v->a[12888] = 2;
	v->a[12889] = anon_sym_DASH2;
	v->a[12890] = anon_sym_PLUS2;
	v->a[12891] = state(2397);
	v->a[12892] = 4;
	v->a[12893] = sym_string;
	v->a[12894] = sym_number;
	v->a[12895] = sym_simple_expansion;
	v->a[12896] = sym_expansion;
	v->a[12897] = state(2456);
	v->a[12898] = 4;
	v->a[12899] = sym_arithmetic_expansion;
	small_parse_table_645(v);
}

/* EOF small_parse_table_128.c */
