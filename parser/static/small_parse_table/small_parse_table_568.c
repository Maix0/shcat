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
	v->a[56800] = sym_number;
	v->a[56801] = sym_simple_expansion;
	v->a[56802] = sym_expansion;
	v->a[56803] = state(624);
	v->a[56804] = 8;
	v->a[56805] = sym__arithmetic_expression;
	v->a[56806] = sym_arithmetic_literal;
	v->a[56807] = sym_arithmetic_binary_expression;
	v->a[56808] = sym_arithmetic_ternary_expression;
	v->a[56809] = sym_arithmetic_unary_expression;
	v->a[56810] = sym_arithmetic_postfix_expression;
	v->a[56811] = sym_arithmetic_parenthesized_expression;
	v->a[56812] = sym_command_substitution;
	v->a[56813] = 18;
	v->a[56814] = actions(1404);
	v->a[56815] = 1;
	v->a[56816] = sym_comment;
	v->a[56817] = actions(1979);
	v->a[56818] = 1;
	v->a[56819] = anon_sym_LPAREN;
	small_parse_table_2841(v);
}

void	small_parse_table_2841(t_small_parse_table_array *v)
{
	v->a[56820] = actions(1981);
	v->a[56821] = 1;
	v->a[56822] = anon_sym_BANG;
	v->a[56823] = actions(1989);
	v->a[56824] = 1;
	v->a[56825] = anon_sym_TILDE;
	v->a[56826] = actions(1991);
	v->a[56827] = 1;
	v->a[56828] = anon_sym_DOLLAR;
	v->a[56829] = actions(1993);
	v->a[56830] = 1;
	v->a[56831] = anon_sym_DQUOTE;
	v->a[56832] = actions(1995);
	v->a[56833] = 1;
	v->a[56834] = aux_sym_number_token1;
	v->a[56835] = actions(1997);
	v->a[56836] = 1;
	v->a[56837] = aux_sym_number_token2;
	v->a[56838] = actions(1999);
	v->a[56839] = 1;
	small_parse_table_2842(v);
}

void	small_parse_table_2842(t_small_parse_table_array *v)
{
	v->a[56840] = anon_sym_DOLLAR_LBRACE;
	v->a[56841] = actions(2001);
	v->a[56842] = 1;
	v->a[56843] = anon_sym_DOLLAR_LPAREN;
	v->a[56844] = actions(2003);
	v->a[56845] = 1;
	v->a[56846] = anon_sym_BQUOTE;
	v->a[56847] = actions(2005);
	v->a[56848] = 1;
	v->a[56849] = aux_sym__simple_variable_name_token1;
	v->a[56850] = actions(2007);
	v->a[56851] = 1;
	v->a[56852] = sym_variable_name;
	v->a[56853] = actions(2075);
	v->a[56854] = 1;
	v->a[56855] = anon_sym_RPAREN_RPAREN;
	v->a[56856] = actions(1985);
	v->a[56857] = 2;
	v->a[56858] = anon_sym_PLUS_PLUS;
	v->a[56859] = anon_sym_DASH_DASH;
	small_parse_table_2843(v);
}

void	small_parse_table_2843(t_small_parse_table_array *v)
{
	v->a[56860] = actions(1987);
	v->a[56861] = 2;
	v->a[56862] = anon_sym_DASH2;
	v->a[56863] = anon_sym_PLUS2;
	v->a[56864] = state(530);
	v->a[56865] = 4;
	v->a[56866] = sym_string;
	v->a[56867] = sym_number;
	v->a[56868] = sym_simple_expansion;
	v->a[56869] = sym_expansion;
	v->a[56870] = state(630);
	v->a[56871] = 8;
	v->a[56872] = sym__arithmetic_expression;
	v->a[56873] = sym_arithmetic_literal;
	v->a[56874] = sym_arithmetic_binary_expression;
	v->a[56875] = sym_arithmetic_ternary_expression;
	v->a[56876] = sym_arithmetic_unary_expression;
	v->a[56877] = sym_arithmetic_postfix_expression;
	v->a[56878] = sym_arithmetic_parenthesized_expression;
	v->a[56879] = sym_command_substitution;
	small_parse_table_2844(v);
}

void	small_parse_table_2844(t_small_parse_table_array *v)
{
	v->a[56880] = 3;
	v->a[56881] = actions(3);
	v->a[56882] = 1;
	v->a[56883] = sym_comment;
	v->a[56884] = actions(1301);
	v->a[56885] = 3;
	v->a[56886] = sym_file_descriptor;
	v->a[56887] = sym__concat;
	v->a[56888] = sym_variable_name;
	v->a[56889] = actions(1299);
	v->a[56890] = 26;
	v->a[56891] = anon_sym_PIPE;
	v->a[56892] = anon_sym_AMP_AMP;
	v->a[56893] = anon_sym_PIPE_PIPE;
	v->a[56894] = anon_sym_LT;
	v->a[56895] = anon_sym_GT;
	v->a[56896] = anon_sym_GT_GT;
	v->a[56897] = anon_sym_AMP_GT;
	v->a[56898] = anon_sym_AMP_GT_GT;
	v->a[56899] = anon_sym_LT_AMP;
	small_parse_table_2845(v);
}

/* EOF small_parse_table_568.c */
