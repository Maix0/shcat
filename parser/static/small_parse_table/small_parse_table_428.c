/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_428.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2140(t_small_parse_table_array *v)
{
	v->a[42800] = 3;
	v->a[42801] = sym_string;
	v->a[42802] = sym_simple_expansion;
	v->a[42803] = sym_expansion;
	v->a[42804] = state(166);
	v->a[42805] = 7;
	v->a[42806] = sym__arithmetic_expression;
	v->a[42807] = sym_arithmetic_literal;
	v->a[42808] = sym_arithmetic_binary_expression;
	v->a[42809] = sym_arithmetic_ternary_expression;
	v->a[42810] = sym_arithmetic_unary_expression;
	v->a[42811] = sym_arithmetic_postfix_expression;
	v->a[42812] = sym_arithmetic_parenthesized_expression;
	v->a[42813] = 12;
	v->a[42814] = actions(407);
	v->a[42815] = 1;
	v->a[42816] = sym_comment;
	v->a[42817] = actions(1540);
	v->a[42818] = 1;
	v->a[42819] = anon_sym_LPAREN;
	small_parse_table_2141(v);
}

void	small_parse_table_2141(t_small_parse_table_array *v)
{
	v->a[42820] = actions(1542);
	v->a[42821] = 1;
	v->a[42822] = anon_sym_BANG;
	v->a[42823] = actions(1548);
	v->a[42824] = 1;
	v->a[42825] = anon_sym_DOLLAR;
	v->a[42826] = actions(1550);
	v->a[42827] = 1;
	v->a[42828] = anon_sym_DQUOTE;
	v->a[42829] = actions(1554);
	v->a[42830] = 1;
	v->a[42831] = anon_sym_DOLLAR_LBRACE;
	v->a[42832] = actions(1556);
	v->a[42833] = 1;
	v->a[42834] = sym_variable_name;
	v->a[42835] = actions(1544);
	v->a[42836] = 2;
	v->a[42837] = anon_sym_PLUS_PLUS;
	v->a[42838] = anon_sym_DASH_DASH;
	v->a[42839] = actions(1546);
	small_parse_table_2142(v);
}

void	small_parse_table_2142(t_small_parse_table_array *v)
{
	v->a[42840] = 2;
	v->a[42841] = anon_sym_DASH2;
	v->a[42842] = anon_sym_PLUS2;
	v->a[42843] = actions(1552);
	v->a[42844] = 2;
	v->a[42845] = sym_number;
	v->a[42846] = aux_sym__simple_variable_name_token1;
	v->a[42847] = state(157);
	v->a[42848] = 3;
	v->a[42849] = sym_string;
	v->a[42850] = sym_simple_expansion;
	v->a[42851] = sym_expansion;
	v->a[42852] = state(243);
	v->a[42853] = 7;
	v->a[42854] = sym__arithmetic_expression;
	v->a[42855] = sym_arithmetic_literal;
	v->a[42856] = sym_arithmetic_binary_expression;
	v->a[42857] = sym_arithmetic_ternary_expression;
	v->a[42858] = sym_arithmetic_unary_expression;
	v->a[42859] = sym_arithmetic_postfix_expression;
	small_parse_table_2143(v);
}

void	small_parse_table_2143(t_small_parse_table_array *v)
{
	v->a[42860] = sym_arithmetic_parenthesized_expression;
	v->a[42861] = 12;
	v->a[42862] = actions(407);
	v->a[42863] = 1;
	v->a[42864] = sym_comment;
	v->a[42865] = actions(1540);
	v->a[42866] = 1;
	v->a[42867] = anon_sym_LPAREN;
	v->a[42868] = actions(1542);
	v->a[42869] = 1;
	v->a[42870] = anon_sym_BANG;
	v->a[42871] = actions(1548);
	v->a[42872] = 1;
	v->a[42873] = anon_sym_DOLLAR;
	v->a[42874] = actions(1550);
	v->a[42875] = 1;
	v->a[42876] = anon_sym_DQUOTE;
	v->a[42877] = actions(1554);
	v->a[42878] = 1;
	v->a[42879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2144(v);
}

void	small_parse_table_2144(t_small_parse_table_array *v)
{
	v->a[42880] = actions(1556);
	v->a[42881] = 1;
	v->a[42882] = sym_variable_name;
	v->a[42883] = actions(1544);
	v->a[42884] = 2;
	v->a[42885] = anon_sym_PLUS_PLUS;
	v->a[42886] = anon_sym_DASH_DASH;
	v->a[42887] = actions(1546);
	v->a[42888] = 2;
	v->a[42889] = anon_sym_DASH2;
	v->a[42890] = anon_sym_PLUS2;
	v->a[42891] = actions(1552);
	v->a[42892] = 2;
	v->a[42893] = sym_number;
	v->a[42894] = aux_sym__simple_variable_name_token1;
	v->a[42895] = state(157);
	v->a[42896] = 3;
	v->a[42897] = sym_string;
	v->a[42898] = sym_simple_expansion;
	v->a[42899] = sym_expansion;
	small_parse_table_2145(v);
}

/* EOF small_parse_table_428.c */
