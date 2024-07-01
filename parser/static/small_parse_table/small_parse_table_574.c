/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_574.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2870(t_small_parse_table_array *v)
{
	v->a[57400] = 1;
	v->a[57401] = anon_sym_DQUOTE;
	v->a[57402] = actions(1762);
	v->a[57403] = 1;
	v->a[57404] = anon_sym_DOLLAR_LBRACE;
	v->a[57405] = actions(1764);
	v->a[57406] = 1;
	v->a[57407] = anon_sym_DOLLAR_LPAREN;
	v->a[57408] = actions(1766);
	v->a[57409] = 1;
	v->a[57410] = anon_sym_BQUOTE;
	v->a[57411] = actions(1768);
	v->a[57412] = 1;
	v->a[57413] = sym_variable_name;
	v->a[57414] = actions(1750);
	v->a[57415] = 2;
	v->a[57416] = anon_sym_PLUS_PLUS;
	v->a[57417] = anon_sym_DASH_DASH;
	v->a[57418] = actions(1752);
	v->a[57419] = 2;
	small_parse_table_2871(v);
}

void	small_parse_table_2871(t_small_parse_table_array *v)
{
	v->a[57420] = anon_sym_DASH2;
	v->a[57421] = anon_sym_PLUS2;
	v->a[57422] = actions(1760);
	v->a[57423] = 2;
	v->a[57424] = sym_number;
	v->a[57425] = aux_sym__simple_variable_name_token1;
	v->a[57426] = state(271);
	v->a[57427] = 3;
	v->a[57428] = sym_string;
	v->a[57429] = sym_simple_expansion;
	v->a[57430] = sym_expansion;
	v->a[57431] = state(282);
	v->a[57432] = 8;
	v->a[57433] = sym__arithmetic_expression;
	v->a[57434] = sym_arithmetic_literal;
	v->a[57435] = sym_arithmetic_binary_expression;
	v->a[57436] = sym_arithmetic_ternary_expression;
	v->a[57437] = sym_arithmetic_unary_expression;
	v->a[57438] = sym_arithmetic_postfix_expression;
	v->a[57439] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2872(v);
}

void	small_parse_table_2872(t_small_parse_table_array *v)
{
	v->a[57440] = sym_command_substitution;
	v->a[57441] = 15;
	v->a[57442] = actions(870);
	v->a[57443] = 1;
	v->a[57444] = sym_comment;
	v->a[57445] = actions(1744);
	v->a[57446] = 1;
	v->a[57447] = anon_sym_LPAREN;
	v->a[57448] = actions(1746);
	v->a[57449] = 1;
	v->a[57450] = anon_sym_BANG;
	v->a[57451] = actions(1754);
	v->a[57452] = 1;
	v->a[57453] = anon_sym_TILDE;
	v->a[57454] = actions(1756);
	v->a[57455] = 1;
	v->a[57456] = anon_sym_DOLLAR;
	v->a[57457] = actions(1758);
	v->a[57458] = 1;
	v->a[57459] = anon_sym_DQUOTE;
	small_parse_table_2873(v);
}

void	small_parse_table_2873(t_small_parse_table_array *v)
{
	v->a[57460] = actions(1762);
	v->a[57461] = 1;
	v->a[57462] = anon_sym_DOLLAR_LBRACE;
	v->a[57463] = actions(1764);
	v->a[57464] = 1;
	v->a[57465] = anon_sym_DOLLAR_LPAREN;
	v->a[57466] = actions(1766);
	v->a[57467] = 1;
	v->a[57468] = anon_sym_BQUOTE;
	v->a[57469] = actions(1768);
	v->a[57470] = 1;
	v->a[57471] = sym_variable_name;
	v->a[57472] = actions(1750);
	v->a[57473] = 2;
	v->a[57474] = anon_sym_PLUS_PLUS;
	v->a[57475] = anon_sym_DASH_DASH;
	v->a[57476] = actions(1752);
	v->a[57477] = 2;
	v->a[57478] = anon_sym_DASH2;
	v->a[57479] = anon_sym_PLUS2;
	small_parse_table_2874(v);
}

void	small_parse_table_2874(t_small_parse_table_array *v)
{
	v->a[57480] = actions(1760);
	v->a[57481] = 2;
	v->a[57482] = sym_number;
	v->a[57483] = aux_sym__simple_variable_name_token1;
	v->a[57484] = state(271);
	v->a[57485] = 3;
	v->a[57486] = sym_string;
	v->a[57487] = sym_simple_expansion;
	v->a[57488] = sym_expansion;
	v->a[57489] = state(283);
	v->a[57490] = 8;
	v->a[57491] = sym__arithmetic_expression;
	v->a[57492] = sym_arithmetic_literal;
	v->a[57493] = sym_arithmetic_binary_expression;
	v->a[57494] = sym_arithmetic_ternary_expression;
	v->a[57495] = sym_arithmetic_unary_expression;
	v->a[57496] = sym_arithmetic_postfix_expression;
	v->a[57497] = sym_arithmetic_parenthesized_expression;
	v->a[57498] = sym_command_substitution;
	v->a[57499] = 15;
	small_parse_table_2875(v);
}

/* EOF small_parse_table_574.c */
