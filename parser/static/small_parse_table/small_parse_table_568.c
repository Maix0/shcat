/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_568.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2840(t_small_parse_table_array *v)
{
	v->a[56800] = sym_arithmetic_postfix_expression;
	v->a[56801] = sym_arithmetic_parenthesized_expression;
	v->a[56802] = sym_command_substitution;
	v->a[56803] = 15;
	v->a[56804] = actions(870);
	v->a[56805] = 1;
	v->a[56806] = sym_comment;
	v->a[56807] = actions(1744);
	v->a[56808] = 1;
	v->a[56809] = anon_sym_LPAREN;
	v->a[56810] = actions(1746);
	v->a[56811] = 1;
	v->a[56812] = anon_sym_BANG;
	v->a[56813] = actions(1754);
	v->a[56814] = 1;
	v->a[56815] = anon_sym_TILDE;
	v->a[56816] = actions(1756);
	v->a[56817] = 1;
	v->a[56818] = anon_sym_DOLLAR;
	v->a[56819] = actions(1758);
	small_parse_table_2841(v);
}

void	small_parse_table_2841(t_small_parse_table_array *v)
{
	v->a[56820] = 1;
	v->a[56821] = anon_sym_DQUOTE;
	v->a[56822] = actions(1762);
	v->a[56823] = 1;
	v->a[56824] = anon_sym_DOLLAR_LBRACE;
	v->a[56825] = actions(1764);
	v->a[56826] = 1;
	v->a[56827] = anon_sym_DOLLAR_LPAREN;
	v->a[56828] = actions(1766);
	v->a[56829] = 1;
	v->a[56830] = anon_sym_BQUOTE;
	v->a[56831] = actions(1768);
	v->a[56832] = 1;
	v->a[56833] = sym_variable_name;
	v->a[56834] = actions(1750);
	v->a[56835] = 2;
	v->a[56836] = anon_sym_PLUS_PLUS;
	v->a[56837] = anon_sym_DASH_DASH;
	v->a[56838] = actions(1752);
	v->a[56839] = 2;
	small_parse_table_2842(v);
}

void	small_parse_table_2842(t_small_parse_table_array *v)
{
	v->a[56840] = anon_sym_DASH2;
	v->a[56841] = anon_sym_PLUS2;
	v->a[56842] = actions(1760);
	v->a[56843] = 2;
	v->a[56844] = sym_number;
	v->a[56845] = aux_sym__simple_variable_name_token1;
	v->a[56846] = state(271);
	v->a[56847] = 3;
	v->a[56848] = sym_string;
	v->a[56849] = sym_simple_expansion;
	v->a[56850] = sym_expansion;
	v->a[56851] = state(290);
	v->a[56852] = 8;
	v->a[56853] = sym__arithmetic_expression;
	v->a[56854] = sym_arithmetic_literal;
	v->a[56855] = sym_arithmetic_binary_expression;
	v->a[56856] = sym_arithmetic_ternary_expression;
	v->a[56857] = sym_arithmetic_unary_expression;
	v->a[56858] = sym_arithmetic_postfix_expression;
	v->a[56859] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2843(v);
}

void	small_parse_table_2843(t_small_parse_table_array *v)
{
	v->a[56860] = sym_command_substitution;
	v->a[56861] = 15;
	v->a[56862] = actions(870);
	v->a[56863] = 1;
	v->a[56864] = sym_comment;
	v->a[56865] = actions(1921);
	v->a[56866] = 1;
	v->a[56867] = anon_sym_LPAREN;
	v->a[56868] = actions(1923);
	v->a[56869] = 1;
	v->a[56870] = anon_sym_BANG;
	v->a[56871] = actions(1929);
	v->a[56872] = 1;
	v->a[56873] = anon_sym_TILDE;
	v->a[56874] = actions(1931);
	v->a[56875] = 1;
	v->a[56876] = anon_sym_DOLLAR;
	v->a[56877] = actions(1933);
	v->a[56878] = 1;
	v->a[56879] = anon_sym_DQUOTE;
	small_parse_table_2844(v);
}

void	small_parse_table_2844(t_small_parse_table_array *v)
{
	v->a[56880] = actions(1937);
	v->a[56881] = 1;
	v->a[56882] = anon_sym_DOLLAR_LBRACE;
	v->a[56883] = actions(1939);
	v->a[56884] = 1;
	v->a[56885] = anon_sym_DOLLAR_LPAREN;
	v->a[56886] = actions(1941);
	v->a[56887] = 1;
	v->a[56888] = anon_sym_BQUOTE;
	v->a[56889] = actions(1943);
	v->a[56890] = 1;
	v->a[56891] = sym_variable_name;
	v->a[56892] = actions(1925);
	v->a[56893] = 2;
	v->a[56894] = anon_sym_PLUS_PLUS;
	v->a[56895] = anon_sym_DASH_DASH;
	v->a[56896] = actions(1927);
	v->a[56897] = 2;
	v->a[56898] = anon_sym_DASH2;
	v->a[56899] = anon_sym_PLUS2;
	small_parse_table_2845(v);
}

/* EOF small_parse_table_568.c */
