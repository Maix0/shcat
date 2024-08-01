/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_348.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1740(t_small_parse_table_array *v)
{
	v->a[34800] = 3;
	v->a[34801] = actions(3);
	v->a[34802] = 1;
	v->a[34803] = sym_comment;
	v->a[34804] = actions(1097);
	v->a[34805] = 2;
	v->a[34806] = sym__concat;
	v->a[34807] = sym_variable_name;
	v->a[34808] = actions(1095);
	v->a[34809] = 17;
	v->a[34810] = anon_sym_PIPE;
	v->a[34811] = anon_sym_AMP_AMP;
	v->a[34812] = anon_sym_PIPE_PIPE;
	v->a[34813] = anon_sym_LT;
	v->a[34814] = anon_sym_GT;
	v->a[34815] = anon_sym_GT_GT;
	v->a[34816] = anon_sym_LT_LT;
	v->a[34817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34818] = aux_sym_concatenation_token1;
	v->a[34819] = anon_sym_DOLLAR;
	small_parse_table_1741(v);
}

void	small_parse_table_1741(t_small_parse_table_array *v)
{
	v->a[34820] = anon_sym_DQUOTE;
	v->a[34821] = sym_raw_string;
	v->a[34822] = sym_number;
	v->a[34823] = anon_sym_DOLLAR_LBRACE;
	v->a[34824] = anon_sym_DOLLAR_LPAREN;
	v->a[34825] = anon_sym_BQUOTE;
	v->a[34826] = sym_word;
	v->a[34827] = 10;
	v->a[34828] = actions(1424);
	v->a[34829] = 1;
	v->a[34830] = anon_sym_LPAREN;
	v->a[34831] = actions(1428);
	v->a[34832] = 1;
	v->a[34833] = anon_sym_DOLLAR;
	v->a[34834] = actions(1430);
	v->a[34835] = 1;
	v->a[34836] = anon_sym_DQUOTE;
	v->a[34837] = actions(1434);
	v->a[34838] = 1;
	v->a[34839] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1742(v);
}

void	small_parse_table_1742(t_small_parse_table_array *v)
{
	v->a[34840] = actions(1436);
	v->a[34841] = 1;
	v->a[34842] = sym_comment;
	v->a[34843] = actions(1438);
	v->a[34844] = 1;
	v->a[34845] = sym_variable_name;
	v->a[34846] = actions(1426);
	v->a[34847] = 2;
	v->a[34848] = anon_sym_DASH2;
	v->a[34849] = anon_sym_PLUS2;
	v->a[34850] = actions(1432);
	v->a[34851] = 2;
	v->a[34852] = sym_number;
	v->a[34853] = aux_sym__simple_variable_name_token1;
	v->a[34854] = state(1312);
	v->a[34855] = 3;
	v->a[34856] = sym_string;
	v->a[34857] = sym_simple_expansion;
	v->a[34858] = sym_expansion;
	v->a[34859] = state(1354);
	small_parse_table_1743(v);
}

void	small_parse_table_1743(t_small_parse_table_array *v)
{
	v->a[34860] = 7;
	v->a[34861] = sym__arithmetic_expression;
	v->a[34862] = sym_arithmetic_literal;
	v->a[34863] = sym_arithmetic_binary_expression;
	v->a[34864] = sym_arithmetic_ternary_expression;
	v->a[34865] = sym_arithmetic_unary_expression;
	v->a[34866] = sym_arithmetic_postfix_expression;
	v->a[34867] = sym_arithmetic_parenthesized_expression;
	v->a[34868] = 10;
	v->a[34869] = actions(1424);
	v->a[34870] = 1;
	v->a[34871] = anon_sym_LPAREN;
	v->a[34872] = actions(1428);
	v->a[34873] = 1;
	v->a[34874] = anon_sym_DOLLAR;
	v->a[34875] = actions(1430);
	v->a[34876] = 1;
	v->a[34877] = anon_sym_DQUOTE;
	v->a[34878] = actions(1434);
	v->a[34879] = 1;
	small_parse_table_1744(v);
}

void	small_parse_table_1744(t_small_parse_table_array *v)
{
	v->a[34880] = anon_sym_DOLLAR_LBRACE;
	v->a[34881] = actions(1436);
	v->a[34882] = 1;
	v->a[34883] = sym_comment;
	v->a[34884] = actions(1438);
	v->a[34885] = 1;
	v->a[34886] = sym_variable_name;
	v->a[34887] = actions(1426);
	v->a[34888] = 2;
	v->a[34889] = anon_sym_DASH2;
	v->a[34890] = anon_sym_PLUS2;
	v->a[34891] = actions(1432);
	v->a[34892] = 2;
	v->a[34893] = sym_number;
	v->a[34894] = aux_sym__simple_variable_name_token1;
	v->a[34895] = state(1312);
	v->a[34896] = 3;
	v->a[34897] = sym_string;
	v->a[34898] = sym_simple_expansion;
	v->a[34899] = sym_expansion;
	small_parse_table_1745(v);
}

/* EOF small_parse_table_348.c */
