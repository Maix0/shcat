/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_338.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1690(t_small_parse_table_array *v)
{
	v->a[33800] = 10;
	v->a[33801] = actions(1424);
	v->a[33802] = 1;
	v->a[33803] = anon_sym_LPAREN;
	v->a[33804] = actions(1428);
	v->a[33805] = 1;
	v->a[33806] = anon_sym_DOLLAR;
	v->a[33807] = actions(1430);
	v->a[33808] = 1;
	v->a[33809] = anon_sym_DQUOTE;
	v->a[33810] = actions(1434);
	v->a[33811] = 1;
	v->a[33812] = anon_sym_DOLLAR_LBRACE;
	v->a[33813] = actions(1436);
	v->a[33814] = 1;
	v->a[33815] = sym_comment;
	v->a[33816] = actions(1438);
	v->a[33817] = 1;
	v->a[33818] = sym_variable_name;
	v->a[33819] = actions(1426);
	small_parse_table_1691(v);
}

void	small_parse_table_1691(t_small_parse_table_array *v)
{
	v->a[33820] = 2;
	v->a[33821] = anon_sym_DASH2;
	v->a[33822] = anon_sym_PLUS2;
	v->a[33823] = actions(1432);
	v->a[33824] = 2;
	v->a[33825] = sym_number;
	v->a[33826] = aux_sym__simple_variable_name_token1;
	v->a[33827] = state(1312);
	v->a[33828] = 3;
	v->a[33829] = sym_string;
	v->a[33830] = sym_simple_expansion;
	v->a[33831] = sym_expansion;
	v->a[33832] = state(1366);
	v->a[33833] = 7;
	v->a[33834] = sym__arithmetic_expression;
	v->a[33835] = sym_arithmetic_literal;
	v->a[33836] = sym_arithmetic_binary_expression;
	v->a[33837] = sym_arithmetic_ternary_expression;
	v->a[33838] = sym_arithmetic_unary_expression;
	v->a[33839] = sym_arithmetic_postfix_expression;
	small_parse_table_1692(v);
}

void	small_parse_table_1692(t_small_parse_table_array *v)
{
	v->a[33840] = sym_arithmetic_parenthesized_expression;
	v->a[33841] = 10;
	v->a[33842] = actions(1424);
	v->a[33843] = 1;
	v->a[33844] = anon_sym_LPAREN;
	v->a[33845] = actions(1428);
	v->a[33846] = 1;
	v->a[33847] = anon_sym_DOLLAR;
	v->a[33848] = actions(1430);
	v->a[33849] = 1;
	v->a[33850] = anon_sym_DQUOTE;
	v->a[33851] = actions(1434);
	v->a[33852] = 1;
	v->a[33853] = anon_sym_DOLLAR_LBRACE;
	v->a[33854] = actions(1436);
	v->a[33855] = 1;
	v->a[33856] = sym_comment;
	v->a[33857] = actions(1438);
	v->a[33858] = 1;
	v->a[33859] = sym_variable_name;
	small_parse_table_1693(v);
}

void	small_parse_table_1693(t_small_parse_table_array *v)
{
	v->a[33860] = actions(1426);
	v->a[33861] = 2;
	v->a[33862] = anon_sym_DASH2;
	v->a[33863] = anon_sym_PLUS2;
	v->a[33864] = actions(1432);
	v->a[33865] = 2;
	v->a[33866] = sym_number;
	v->a[33867] = aux_sym__simple_variable_name_token1;
	v->a[33868] = state(1312);
	v->a[33869] = 3;
	v->a[33870] = sym_string;
	v->a[33871] = sym_simple_expansion;
	v->a[33872] = sym_expansion;
	v->a[33873] = state(1342);
	v->a[33874] = 7;
	v->a[33875] = sym__arithmetic_expression;
	v->a[33876] = sym_arithmetic_literal;
	v->a[33877] = sym_arithmetic_binary_expression;
	v->a[33878] = sym_arithmetic_ternary_expression;
	v->a[33879] = sym_arithmetic_unary_expression;
	small_parse_table_1694(v);
}

void	small_parse_table_1694(t_small_parse_table_array *v)
{
	v->a[33880] = sym_arithmetic_postfix_expression;
	v->a[33881] = sym_arithmetic_parenthesized_expression;
	v->a[33882] = 10;
	v->a[33883] = actions(1424);
	v->a[33884] = 1;
	v->a[33885] = anon_sym_LPAREN;
	v->a[33886] = actions(1428);
	v->a[33887] = 1;
	v->a[33888] = anon_sym_DOLLAR;
	v->a[33889] = actions(1430);
	v->a[33890] = 1;
	v->a[33891] = anon_sym_DQUOTE;
	v->a[33892] = actions(1434);
	v->a[33893] = 1;
	v->a[33894] = anon_sym_DOLLAR_LBRACE;
	v->a[33895] = actions(1436);
	v->a[33896] = 1;
	v->a[33897] = sym_comment;
	v->a[33898] = actions(1438);
	v->a[33899] = 1;
	small_parse_table_1695(v);
}

/* EOF small_parse_table_338.c */
