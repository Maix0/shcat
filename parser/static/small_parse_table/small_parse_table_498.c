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
	v->a[49800] = actions(1590);
	v->a[49801] = 2;
	v->a[49802] = sym_number;
	v->a[49803] = aux_sym__simple_variable_name_token1;
	v->a[49804] = state(238);
	v->a[49805] = 3;
	v->a[49806] = sym_string;
	v->a[49807] = sym_simple_expansion;
	v->a[49808] = sym_expansion;
	v->a[49809] = state(254);
	v->a[49810] = 8;
	v->a[49811] = sym__arithmetic_expression;
	v->a[49812] = sym_arithmetic_literal;
	v->a[49813] = sym_arithmetic_binary_expression;
	v->a[49814] = sym_arithmetic_ternary_expression;
	v->a[49815] = sym_arithmetic_unary_expression;
	v->a[49816] = sym_arithmetic_postfix_expression;
	v->a[49817] = sym_arithmetic_parenthesized_expression;
	v->a[49818] = sym_command_substitution;
	v->a[49819] = 15;
	small_parse_table_2491(v);
}

void	small_parse_table_2491(t_small_parse_table_array *v)
{
	v->a[49820] = actions(680);
	v->a[49821] = 1;
	v->a[49822] = sym_comment;
	v->a[49823] = actions(1574);
	v->a[49824] = 1;
	v->a[49825] = anon_sym_LPAREN;
	v->a[49826] = actions(1576);
	v->a[49827] = 1;
	v->a[49828] = anon_sym_BANG;
	v->a[49829] = actions(1584);
	v->a[49830] = 1;
	v->a[49831] = anon_sym_TILDE;
	v->a[49832] = actions(1586);
	v->a[49833] = 1;
	v->a[49834] = anon_sym_DOLLAR;
	v->a[49835] = actions(1588);
	v->a[49836] = 1;
	v->a[49837] = anon_sym_DQUOTE;
	v->a[49838] = actions(1592);
	v->a[49839] = 1;
	small_parse_table_2492(v);
}

void	small_parse_table_2492(t_small_parse_table_array *v)
{
	v->a[49840] = anon_sym_DOLLAR_LBRACE;
	v->a[49841] = actions(1594);
	v->a[49842] = 1;
	v->a[49843] = anon_sym_DOLLAR_LPAREN;
	v->a[49844] = actions(1596);
	v->a[49845] = 1;
	v->a[49846] = anon_sym_BQUOTE;
	v->a[49847] = actions(1598);
	v->a[49848] = 1;
	v->a[49849] = sym_variable_name;
	v->a[49850] = actions(1580);
	v->a[49851] = 2;
	v->a[49852] = anon_sym_PLUS_PLUS;
	v->a[49853] = anon_sym_DASH_DASH;
	v->a[49854] = actions(1582);
	v->a[49855] = 2;
	v->a[49856] = anon_sym_DASH2;
	v->a[49857] = anon_sym_PLUS2;
	v->a[49858] = actions(1590);
	v->a[49859] = 2;
	small_parse_table_2493(v);
}

void	small_parse_table_2493(t_small_parse_table_array *v)
{
	v->a[49860] = sym_number;
	v->a[49861] = aux_sym__simple_variable_name_token1;
	v->a[49862] = state(238);
	v->a[49863] = 3;
	v->a[49864] = sym_string;
	v->a[49865] = sym_simple_expansion;
	v->a[49866] = sym_expansion;
	v->a[49867] = state(218);
	v->a[49868] = 8;
	v->a[49869] = sym__arithmetic_expression;
	v->a[49870] = sym_arithmetic_literal;
	v->a[49871] = sym_arithmetic_binary_expression;
	v->a[49872] = sym_arithmetic_ternary_expression;
	v->a[49873] = sym_arithmetic_unary_expression;
	v->a[49874] = sym_arithmetic_postfix_expression;
	v->a[49875] = sym_arithmetic_parenthesized_expression;
	v->a[49876] = sym_command_substitution;
	v->a[49877] = 4;
	v->a[49878] = actions(3);
	v->a[49879] = 1;
	small_parse_table_2494(v);
}

void	small_parse_table_2494(t_small_parse_table_array *v)
{
	v->a[49880] = sym_comment;
	v->a[49881] = actions(1424);
	v->a[49882] = 1;
	v->a[49883] = anon_sym_BQUOTE;
	v->a[49884] = actions(1426);
	v->a[49885] = 2;
	v->a[49886] = sym_file_descriptor;
	v->a[49887] = sym_variable_name;
	v->a[49888] = actions(1422);
	v->a[49889] = 23;
	v->a[49890] = anon_sym_for;
	v->a[49891] = anon_sym_while;
	v->a[49892] = anon_sym_until;
	v->a[49893] = anon_sym_if;
	v->a[49894] = anon_sym_case;
	v->a[49895] = anon_sym_LPAREN;
	v->a[49896] = anon_sym_LBRACE;
	v->a[49897] = anon_sym_BANG;
	v->a[49898] = anon_sym_LT;
	v->a[49899] = anon_sym_GT;
	small_parse_table_2495(v);
}

/* EOF small_parse_table_498.c */
