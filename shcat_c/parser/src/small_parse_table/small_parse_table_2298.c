/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2298.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11490(t_small_parse_table_array *v)
{
	v->a[229800] = anon_sym_DOLLAR;
	v->a[229801] = actions(8567);
	v->a[229802] = 2;
	v->a[229803] = anon_sym_LPAREN_LPAREN;
	v->a[229804] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[229805] = actions(8593);
	v->a[229806] = 2;
	v->a[229807] = anon_sym_LT_LPAREN;
	v->a[229808] = anon_sym_GT_LPAREN;
	v->a[229809] = actions(10016);
	v->a[229810] = 2;
	v->a[229811] = sym_test_operator;
	v->a[229812] = sym__special_character;
	v->a[229813] = actions(10018);
	v->a[229814] = 3;
	v->a[229815] = sym__bare_dollar;
	v->a[229816] = sym_raw_string;
	v->a[229817] = sym_ansi_c_string;
	v->a[229818] = state(5199);
	v->a[229819] = 9;
	small_parse_table_11491(v);
}

void	small_parse_table_11491(t_small_parse_table_array *v)
{
	v->a[229820] = sym_arithmetic_expansion;
	v->a[229821] = sym_brace_expression;
	v->a[229822] = sym_string;
	v->a[229823] = sym_translated_string;
	v->a[229824] = sym_number;
	v->a[229825] = sym_simple_expansion;
	v->a[229826] = sym_expansion;
	v->a[229827] = sym_command_substitution;
	v->a[229828] = sym_process_substitution;
	v->a[229829] = 21;
	v->a[229830] = actions(71);
	v->a[229831] = 1;
	v->a[229832] = sym_comment;
	v->a[229833] = actions(3064);
	v->a[229834] = 1;
	v->a[229835] = sym_variable_name;
	v->a[229836] = actions(9278);
	v->a[229837] = 1;
	v->a[229838] = anon_sym_LPAREN;
	v->a[229839] = actions(9280);
	small_parse_table_11492(v);
}

void	small_parse_table_11492(t_small_parse_table_array *v)
{
	v->a[229840] = 1;
	v->a[229841] = anon_sym_BANG;
	v->a[229842] = actions(9286);
	v->a[229843] = 1;
	v->a[229844] = anon_sym_TILDE;
	v->a[229845] = actions(9288);
	v->a[229846] = 1;
	v->a[229847] = anon_sym_DOLLAR;
	v->a[229848] = actions(9290);
	v->a[229849] = 1;
	v->a[229850] = anon_sym_DQUOTE;
	v->a[229851] = actions(9292);
	v->a[229852] = 1;
	v->a[229853] = aux_sym_number_token1;
	v->a[229854] = actions(9294);
	v->a[229855] = 1;
	v->a[229856] = aux_sym_number_token2;
	v->a[229857] = actions(9296);
	v->a[229858] = 1;
	v->a[229859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11493(v);
}

void	small_parse_table_11493(t_small_parse_table_array *v)
{
	v->a[229860] = actions(9298);
	v->a[229861] = 1;
	v->a[229862] = anon_sym_DOLLAR_LPAREN;
	v->a[229863] = actions(9300);
	v->a[229864] = 1;
	v->a[229865] = anon_sym_BQUOTE;
	v->a[229866] = actions(9302);
	v->a[229867] = 1;
	v->a[229868] = anon_sym_DOLLAR_BQUOTE;
	v->a[229869] = actions(10886);
	v->a[229870] = 1;
	v->a[229871] = aux_sym__simple_variable_name_token1;
	v->a[229872] = state(2801);
	v->a[229873] = 1;
	v->a[229874] = sym__arithmetic_binary_expression;
	v->a[229875] = state(2803);
	v->a[229876] = 1;
	v->a[229877] = sym__arithmetic_ternary_expression;
	v->a[229878] = state(2809);
	v->a[229879] = 1;
	small_parse_table_11494(v);
}

void	small_parse_table_11494(t_small_parse_table_array *v)
{
	v->a[229880] = sym__arithmetic_unary_expression;
	v->a[229881] = state(2825);
	v->a[229882] = 1;
	v->a[229883] = sym__arithmetic_postfix_expression;
	v->a[229884] = actions(9282);
	v->a[229885] = 2;
	v->a[229886] = anon_sym_PLUS_PLUS2;
	v->a[229887] = anon_sym_DASH_DASH2;
	v->a[229888] = actions(9284);
	v->a[229889] = 2;
	v->a[229890] = anon_sym_DASH2;
	v->a[229891] = anon_sym_PLUS2;
	v->a[229892] = state(2778);
	v->a[229893] = 9;
	v->a[229894] = sym_subscript;
	v->a[229895] = sym__arithmetic_expression;
	v->a[229896] = sym__arithmetic_literal;
	v->a[229897] = sym__arithmetic_parenthesized_expression;
	v->a[229898] = sym_string;
	v->a[229899] = sym_number;
	small_parse_table_11495(v);
}

/* EOF small_parse_table_2298.c */
