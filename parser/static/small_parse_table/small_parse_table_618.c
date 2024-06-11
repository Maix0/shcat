/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_618.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3090(t_small_parse_table_array *v)
{
	v->a[61800] = anon_sym_PLUS_PLUS;
	v->a[61801] = anon_sym_DASH_DASH;
	v->a[61802] = actions(1877);
	v->a[61803] = 2;
	v->a[61804] = anon_sym_DASH2;
	v->a[61805] = anon_sym_PLUS2;
	v->a[61806] = actions(1885);
	v->a[61807] = 2;
	v->a[61808] = sym_number;
	v->a[61809] = aux_sym__simple_variable_name_token1;
	v->a[61810] = state(365);
	v->a[61811] = 3;
	v->a[61812] = sym_string;
	v->a[61813] = sym_simple_expansion;
	v->a[61814] = sym_expansion;
	v->a[61815] = state(510);
	v->a[61816] = 8;
	v->a[61817] = sym__arithmetic_expression;
	v->a[61818] = sym_arithmetic_literal;
	v->a[61819] = sym_arithmetic_binary_expression;
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = sym_arithmetic_ternary_expression;
	v->a[61821] = sym_arithmetic_unary_expression;
	v->a[61822] = sym_arithmetic_postfix_expression;
	v->a[61823] = sym_arithmetic_parenthesized_expression;
	v->a[61824] = sym_command_substitution;
	v->a[61825] = 16;
	v->a[61826] = actions(1094);
	v->a[61827] = 1;
	v->a[61828] = sym_comment;
	v->a[61829] = actions(1869);
	v->a[61830] = 1;
	v->a[61831] = anon_sym_LPAREN;
	v->a[61832] = actions(1871);
	v->a[61833] = 1;
	v->a[61834] = anon_sym_BANG;
	v->a[61835] = actions(1879);
	v->a[61836] = 1;
	v->a[61837] = anon_sym_TILDE;
	v->a[61838] = actions(1881);
	v->a[61839] = 1;
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = anon_sym_DOLLAR;
	v->a[61841] = actions(1883);
	v->a[61842] = 1;
	v->a[61843] = anon_sym_DQUOTE;
	v->a[61844] = actions(1887);
	v->a[61845] = 1;
	v->a[61846] = anon_sym_DOLLAR_LBRACE;
	v->a[61847] = actions(1889);
	v->a[61848] = 1;
	v->a[61849] = anon_sym_DOLLAR_LPAREN;
	v->a[61850] = actions(1891);
	v->a[61851] = 1;
	v->a[61852] = anon_sym_BQUOTE;
	v->a[61853] = actions(1893);
	v->a[61854] = 1;
	v->a[61855] = sym_variable_name;
	v->a[61856] = actions(1921);
	v->a[61857] = 1;
	v->a[61858] = anon_sym_RPAREN_RPAREN;
	v->a[61859] = actions(1875);
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = 2;
	v->a[61861] = anon_sym_PLUS_PLUS;
	v->a[61862] = anon_sym_DASH_DASH;
	v->a[61863] = actions(1877);
	v->a[61864] = 2;
	v->a[61865] = anon_sym_DASH2;
	v->a[61866] = anon_sym_PLUS2;
	v->a[61867] = actions(1885);
	v->a[61868] = 2;
	v->a[61869] = sym_number;
	v->a[61870] = aux_sym__simple_variable_name_token1;
	v->a[61871] = state(365);
	v->a[61872] = 3;
	v->a[61873] = sym_string;
	v->a[61874] = sym_simple_expansion;
	v->a[61875] = sym_expansion;
	v->a[61876] = state(476);
	v->a[61877] = 8;
	v->a[61878] = sym__arithmetic_expression;
	v->a[61879] = sym_arithmetic_literal;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = sym_arithmetic_binary_expression;
	v->a[61881] = sym_arithmetic_ternary_expression;
	v->a[61882] = sym_arithmetic_unary_expression;
	v->a[61883] = sym_arithmetic_postfix_expression;
	v->a[61884] = sym_arithmetic_parenthesized_expression;
	v->a[61885] = sym_command_substitution;
	v->a[61886] = 16;
	v->a[61887] = actions(1094);
	v->a[61888] = 1;
	v->a[61889] = sym_comment;
	v->a[61890] = actions(1869);
	v->a[61891] = 1;
	v->a[61892] = anon_sym_LPAREN;
	v->a[61893] = actions(1871);
	v->a[61894] = 1;
	v->a[61895] = anon_sym_BANG;
	v->a[61896] = actions(1879);
	v->a[61897] = 1;
	v->a[61898] = anon_sym_TILDE;
	v->a[61899] = actions(1881);
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */
