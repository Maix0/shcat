/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_458.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2290(t_small_parse_table_array *v)
{
	v->a[45800] = anon_sym_BQUOTE;
	v->a[45801] = state(732);
	v->a[45802] = 2;
	v->a[45803] = sym_concatenation;
	v->a[45804] = aux_sym_for_statement_repeat1;
	v->a[45805] = actions(1586);
	v->a[45806] = 3;
	v->a[45807] = sym_raw_string;
	v->a[45808] = sym_number;
	v->a[45809] = sym_word;
	v->a[45810] = state(915);
	v->a[45811] = 5;
	v->a[45812] = sym_arithmetic_expansion;
	v->a[45813] = sym_string;
	v->a[45814] = sym_simple_expansion;
	v->a[45815] = sym_expansion;
	v->a[45816] = sym_command_substitution;
	v->a[45817] = actions(497);
	v->a[45818] = 10;
	v->a[45819] = anon_sym_AMP_AMP;
	small_parse_table_2291(v);
}

void	small_parse_table_2291(t_small_parse_table_array *v)
{
	v->a[45820] = anon_sym_PIPE_PIPE;
	v->a[45821] = anon_sym_LT;
	v->a[45822] = anon_sym_GT;
	v->a[45823] = anon_sym_GT_GT;
	v->a[45824] = anon_sym_LT_AMP;
	v->a[45825] = anon_sym_GT_AMP;
	v->a[45826] = anon_sym_GT_PIPE;
	v->a[45827] = anon_sym_LT_GT;
	v->a[45828] = aux_sym_heredoc_redirect_token1;
	v->a[45829] = 16;
	v->a[45830] = actions(664);
	v->a[45831] = 1;
	v->a[45832] = sym_comment;
	v->a[45833] = actions(1560);
	v->a[45834] = 1;
	v->a[45835] = anon_sym_LPAREN;
	v->a[45836] = actions(1562);
	v->a[45837] = 1;
	v->a[45838] = anon_sym_BANG;
	v->a[45839] = actions(1570);
	small_parse_table_2292(v);
}

void	small_parse_table_2292(t_small_parse_table_array *v)
{
	v->a[45840] = 1;
	v->a[45841] = anon_sym_TILDE;
	v->a[45842] = actions(1572);
	v->a[45843] = 1;
	v->a[45844] = anon_sym_DOLLAR;
	v->a[45845] = actions(1574);
	v->a[45846] = 1;
	v->a[45847] = anon_sym_DQUOTE;
	v->a[45848] = actions(1578);
	v->a[45849] = 1;
	v->a[45850] = anon_sym_DOLLAR_LBRACE;
	v->a[45851] = actions(1580);
	v->a[45852] = 1;
	v->a[45853] = anon_sym_DOLLAR_LPAREN;
	v->a[45854] = actions(1582);
	v->a[45855] = 1;
	v->a[45856] = anon_sym_BQUOTE;
	v->a[45857] = actions(1584);
	v->a[45858] = 1;
	v->a[45859] = sym_variable_name;
	small_parse_table_2293(v);
}

void	small_parse_table_2293(t_small_parse_table_array *v)
{
	v->a[45860] = actions(1693);
	v->a[45861] = 1;
	v->a[45862] = anon_sym_RPAREN_RPAREN;
	v->a[45863] = actions(1566);
	v->a[45864] = 2;
	v->a[45865] = anon_sym_PLUS_PLUS;
	v->a[45866] = anon_sym_DASH_DASH;
	v->a[45867] = actions(1568);
	v->a[45868] = 2;
	v->a[45869] = anon_sym_DASH2;
	v->a[45870] = anon_sym_PLUS2;
	v->a[45871] = actions(1576);
	v->a[45872] = 2;
	v->a[45873] = sym_number;
	v->a[45874] = aux_sym__simple_variable_name_token1;
	v->a[45875] = state(255);
	v->a[45876] = 3;
	v->a[45877] = sym_string;
	v->a[45878] = sym_simple_expansion;
	v->a[45879] = sym_expansion;
	small_parse_table_2294(v);
}

void	small_parse_table_2294(t_small_parse_table_array *v)
{
	v->a[45880] = state(311);
	v->a[45881] = 8;
	v->a[45882] = sym__arithmetic_expression;
	v->a[45883] = sym_arithmetic_literal;
	v->a[45884] = sym_arithmetic_binary_expression;
	v->a[45885] = sym_arithmetic_ternary_expression;
	v->a[45886] = sym_arithmetic_unary_expression;
	v->a[45887] = sym_arithmetic_postfix_expression;
	v->a[45888] = sym_arithmetic_parenthesized_expression;
	v->a[45889] = sym_command_substitution;
	v->a[45890] = 16;
	v->a[45891] = actions(664);
	v->a[45892] = 1;
	v->a[45893] = sym_comment;
	v->a[45894] = actions(1560);
	v->a[45895] = 1;
	v->a[45896] = anon_sym_LPAREN;
	v->a[45897] = actions(1562);
	v->a[45898] = 1;
	v->a[45899] = anon_sym_BANG;
	small_parse_table_2295(v);
}

/* EOF small_parse_table_458.c */
