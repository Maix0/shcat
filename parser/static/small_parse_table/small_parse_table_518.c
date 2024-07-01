/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_518.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2590(t_small_parse_table_array *v)
{
	v->a[51800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51801] = aux_sym_concatenation_token1;
	v->a[51802] = anon_sym_DOLLAR;
	v->a[51803] = anon_sym_DQUOTE;
	v->a[51804] = sym_raw_string;
	v->a[51805] = sym_number;
	v->a[51806] = anon_sym_DOLLAR_LBRACE;
	v->a[51807] = anon_sym_DOLLAR_LPAREN;
	v->a[51808] = anon_sym_BQUOTE;
	v->a[51809] = sym_word;
	v->a[51810] = 16;
	v->a[51811] = actions(870);
	v->a[51812] = 1;
	v->a[51813] = sym_comment;
	v->a[51814] = actions(1744);
	v->a[51815] = 1;
	v->a[51816] = anon_sym_LPAREN;
	v->a[51817] = actions(1746);
	v->a[51818] = 1;
	v->a[51819] = anon_sym_BANG;
	small_parse_table_2591(v);
}

void	small_parse_table_2591(t_small_parse_table_array *v)
{
	v->a[51820] = actions(1754);
	v->a[51821] = 1;
	v->a[51822] = anon_sym_TILDE;
	v->a[51823] = actions(1756);
	v->a[51824] = 1;
	v->a[51825] = anon_sym_DOLLAR;
	v->a[51826] = actions(1758);
	v->a[51827] = 1;
	v->a[51828] = anon_sym_DQUOTE;
	v->a[51829] = actions(1762);
	v->a[51830] = 1;
	v->a[51831] = anon_sym_DOLLAR_LBRACE;
	v->a[51832] = actions(1764);
	v->a[51833] = 1;
	v->a[51834] = anon_sym_DOLLAR_LPAREN;
	v->a[51835] = actions(1766);
	v->a[51836] = 1;
	v->a[51837] = anon_sym_BQUOTE;
	v->a[51838] = actions(1768);
	v->a[51839] = 1;
	small_parse_table_2592(v);
}

void	small_parse_table_2592(t_small_parse_table_array *v)
{
	v->a[51840] = sym_variable_name;
	v->a[51841] = actions(1828);
	v->a[51842] = 1;
	v->a[51843] = anon_sym_RPAREN_RPAREN;
	v->a[51844] = actions(1750);
	v->a[51845] = 2;
	v->a[51846] = anon_sym_PLUS_PLUS;
	v->a[51847] = anon_sym_DASH_DASH;
	v->a[51848] = actions(1752);
	v->a[51849] = 2;
	v->a[51850] = anon_sym_DASH2;
	v->a[51851] = anon_sym_PLUS2;
	v->a[51852] = actions(1760);
	v->a[51853] = 2;
	v->a[51854] = sym_number;
	v->a[51855] = aux_sym__simple_variable_name_token1;
	v->a[51856] = state(271);
	v->a[51857] = 3;
	v->a[51858] = sym_string;
	v->a[51859] = sym_simple_expansion;
	small_parse_table_2593(v);
}

void	small_parse_table_2593(t_small_parse_table_array *v)
{
	v->a[51860] = sym_expansion;
	v->a[51861] = state(322);
	v->a[51862] = 8;
	v->a[51863] = sym__arithmetic_expression;
	v->a[51864] = sym_arithmetic_literal;
	v->a[51865] = sym_arithmetic_binary_expression;
	v->a[51866] = sym_arithmetic_ternary_expression;
	v->a[51867] = sym_arithmetic_unary_expression;
	v->a[51868] = sym_arithmetic_postfix_expression;
	v->a[51869] = sym_arithmetic_parenthesized_expression;
	v->a[51870] = sym_command_substitution;
	v->a[51871] = 16;
	v->a[51872] = actions(870);
	v->a[51873] = 1;
	v->a[51874] = sym_comment;
	v->a[51875] = actions(1744);
	v->a[51876] = 1;
	v->a[51877] = anon_sym_LPAREN;
	v->a[51878] = actions(1746);
	v->a[51879] = 1;
	small_parse_table_2594(v);
}

void	small_parse_table_2594(t_small_parse_table_array *v)
{
	v->a[51880] = anon_sym_BANG;
	v->a[51881] = actions(1754);
	v->a[51882] = 1;
	v->a[51883] = anon_sym_TILDE;
	v->a[51884] = actions(1756);
	v->a[51885] = 1;
	v->a[51886] = anon_sym_DOLLAR;
	v->a[51887] = actions(1758);
	v->a[51888] = 1;
	v->a[51889] = anon_sym_DQUOTE;
	v->a[51890] = actions(1762);
	v->a[51891] = 1;
	v->a[51892] = anon_sym_DOLLAR_LBRACE;
	v->a[51893] = actions(1764);
	v->a[51894] = 1;
	v->a[51895] = anon_sym_DOLLAR_LPAREN;
	v->a[51896] = actions(1766);
	v->a[51897] = 1;
	v->a[51898] = anon_sym_BQUOTE;
	v->a[51899] = actions(1768);
	small_parse_table_2595(v);
}

/* EOF small_parse_table_518.c */
