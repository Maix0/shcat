/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_588.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2940(t_small_parse_table_array *v)
{
	v->a[58800] = sym_arithmetic_parenthesized_expression;
	v->a[58801] = sym_command_substitution;
	v->a[58802] = 17;
	v->a[58803] = actions(1404);
	v->a[58804] = 1;
	v->a[58805] = sym_comment;
	v->a[58806] = actions(1979);
	v->a[58807] = 1;
	v->a[58808] = anon_sym_LPAREN;
	v->a[58809] = actions(1981);
	v->a[58810] = 1;
	v->a[58811] = anon_sym_BANG;
	v->a[58812] = actions(1989);
	v->a[58813] = 1;
	v->a[58814] = anon_sym_TILDE;
	v->a[58815] = actions(1991);
	v->a[58816] = 1;
	v->a[58817] = anon_sym_DOLLAR;
	v->a[58818] = actions(1993);
	v->a[58819] = 1;
	small_parse_table_2941(v);
}

void	small_parse_table_2941(t_small_parse_table_array *v)
{
	v->a[58820] = anon_sym_DQUOTE;
	v->a[58821] = actions(1995);
	v->a[58822] = 1;
	v->a[58823] = aux_sym_number_token1;
	v->a[58824] = actions(1997);
	v->a[58825] = 1;
	v->a[58826] = aux_sym_number_token2;
	v->a[58827] = actions(1999);
	v->a[58828] = 1;
	v->a[58829] = anon_sym_DOLLAR_LBRACE;
	v->a[58830] = actions(2001);
	v->a[58831] = 1;
	v->a[58832] = anon_sym_DOLLAR_LPAREN;
	v->a[58833] = actions(2003);
	v->a[58834] = 1;
	v->a[58835] = anon_sym_BQUOTE;
	v->a[58836] = actions(2005);
	v->a[58837] = 1;
	v->a[58838] = aux_sym__simple_variable_name_token1;
	v->a[58839] = actions(2007);
	small_parse_table_2942(v);
}

void	small_parse_table_2942(t_small_parse_table_array *v)
{
	v->a[58840] = 1;
	v->a[58841] = sym_variable_name;
	v->a[58842] = actions(1985);
	v->a[58843] = 2;
	v->a[58844] = anon_sym_PLUS_PLUS;
	v->a[58845] = anon_sym_DASH_DASH;
	v->a[58846] = actions(1987);
	v->a[58847] = 2;
	v->a[58848] = anon_sym_DASH2;
	v->a[58849] = anon_sym_PLUS2;
	v->a[58850] = state(530);
	v->a[58851] = 4;
	v->a[58852] = sym_string;
	v->a[58853] = sym_number;
	v->a[58854] = sym_simple_expansion;
	v->a[58855] = sym_expansion;
	v->a[58856] = state(411);
	v->a[58857] = 8;
	v->a[58858] = sym__arithmetic_expression;
	v->a[58859] = sym_arithmetic_literal;
	small_parse_table_2943(v);
}

void	small_parse_table_2943(t_small_parse_table_array *v)
{
	v->a[58860] = sym_arithmetic_binary_expression;
	v->a[58861] = sym_arithmetic_ternary_expression;
	v->a[58862] = sym_arithmetic_unary_expression;
	v->a[58863] = sym_arithmetic_postfix_expression;
	v->a[58864] = sym_arithmetic_parenthesized_expression;
	v->a[58865] = sym_command_substitution;
	v->a[58866] = 17;
	v->a[58867] = actions(1404);
	v->a[58868] = 1;
	v->a[58869] = sym_comment;
	v->a[58870] = actions(2077);
	v->a[58871] = 1;
	v->a[58872] = anon_sym_LPAREN;
	v->a[58873] = actions(2079);
	v->a[58874] = 1;
	v->a[58875] = anon_sym_BANG;
	v->a[58876] = actions(2085);
	v->a[58877] = 1;
	v->a[58878] = anon_sym_TILDE;
	v->a[58879] = actions(2087);
	small_parse_table_2944(v);
}

void	small_parse_table_2944(t_small_parse_table_array *v)
{
	v->a[58880] = 1;
	v->a[58881] = anon_sym_DOLLAR;
	v->a[58882] = actions(2089);
	v->a[58883] = 1;
	v->a[58884] = anon_sym_DQUOTE;
	v->a[58885] = actions(2091);
	v->a[58886] = 1;
	v->a[58887] = aux_sym_number_token1;
	v->a[58888] = actions(2093);
	v->a[58889] = 1;
	v->a[58890] = aux_sym_number_token2;
	v->a[58891] = actions(2095);
	v->a[58892] = 1;
	v->a[58893] = anon_sym_DOLLAR_LBRACE;
	v->a[58894] = actions(2097);
	v->a[58895] = 1;
	v->a[58896] = anon_sym_DOLLAR_LPAREN;
	v->a[58897] = actions(2099);
	v->a[58898] = 1;
	v->a[58899] = anon_sym_BQUOTE;
	small_parse_table_2945(v);
}

/* EOF small_parse_table_588.c */
