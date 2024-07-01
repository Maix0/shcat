/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_548.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2740(t_small_parse_table_array *v)
{
	v->a[54800] = anon_sym_GT;
	v->a[54801] = anon_sym_GT_GT;
	v->a[54802] = anon_sym_LT_AMP;
	v->a[54803] = anon_sym_GT_AMP;
	v->a[54804] = anon_sym_GT_PIPE;
	v->a[54805] = anon_sym_LT_AMP_DASH;
	v->a[54806] = anon_sym_GT_AMP_DASH;
	v->a[54807] = anon_sym_LT_LT;
	v->a[54808] = anon_sym_LT_LT_DASH;
	v->a[54809] = 15;
	v->a[54810] = actions(870);
	v->a[54811] = 1;
	v->a[54812] = sym_comment;
	v->a[54813] = actions(1921);
	v->a[54814] = 1;
	v->a[54815] = anon_sym_LPAREN;
	v->a[54816] = actions(1923);
	v->a[54817] = 1;
	v->a[54818] = anon_sym_BANG;
	v->a[54819] = actions(1929);
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = 1;
	v->a[54821] = anon_sym_TILDE;
	v->a[54822] = actions(1931);
	v->a[54823] = 1;
	v->a[54824] = anon_sym_DOLLAR;
	v->a[54825] = actions(1933);
	v->a[54826] = 1;
	v->a[54827] = anon_sym_DQUOTE;
	v->a[54828] = actions(1937);
	v->a[54829] = 1;
	v->a[54830] = anon_sym_DOLLAR_LBRACE;
	v->a[54831] = actions(1939);
	v->a[54832] = 1;
	v->a[54833] = anon_sym_DOLLAR_LPAREN;
	v->a[54834] = actions(1941);
	v->a[54835] = 1;
	v->a[54836] = anon_sym_BQUOTE;
	v->a[54837] = actions(1943);
	v->a[54838] = 1;
	v->a[54839] = sym_variable_name;
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = actions(1925);
	v->a[54841] = 2;
	v->a[54842] = anon_sym_PLUS_PLUS;
	v->a[54843] = anon_sym_DASH_DASH;
	v->a[54844] = actions(1927);
	v->a[54845] = 2;
	v->a[54846] = anon_sym_DASH2;
	v->a[54847] = anon_sym_PLUS2;
	v->a[54848] = actions(1935);
	v->a[54849] = 2;
	v->a[54850] = sym_number;
	v->a[54851] = aux_sym__simple_variable_name_token1;
	v->a[54852] = state(334);
	v->a[54853] = 3;
	v->a[54854] = sym_string;
	v->a[54855] = sym_simple_expansion;
	v->a[54856] = sym_expansion;
	v->a[54857] = state(365);
	v->a[54858] = 8;
	v->a[54859] = sym__arithmetic_expression;
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = sym_arithmetic_literal;
	v->a[54861] = sym_arithmetic_binary_expression;
	v->a[54862] = sym_arithmetic_ternary_expression;
	v->a[54863] = sym_arithmetic_unary_expression;
	v->a[54864] = sym_arithmetic_postfix_expression;
	v->a[54865] = sym_arithmetic_parenthesized_expression;
	v->a[54866] = sym_command_substitution;
	v->a[54867] = 5;
	v->a[54868] = actions(3);
	v->a[54869] = 1;
	v->a[54870] = sym_comment;
	v->a[54871] = actions(575);
	v->a[54872] = 2;
	v->a[54873] = sym_file_descriptor;
	v->a[54874] = sym_variable_name;
	v->a[54875] = state(892);
	v->a[54876] = 2;
	v->a[54877] = sym_concatenation;
	v->a[54878] = aux_sym_for_statement_repeat1;
	v->a[54879] = state(1118);
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = 5;
	v->a[54881] = sym_arithmetic_expansion;
	v->a[54882] = sym_string;
	v->a[54883] = sym_simple_expansion;
	v->a[54884] = sym_expansion;
	v->a[54885] = sym_command_substitution;
	v->a[54886] = actions(573);
	v->a[54887] = 17;
	v->a[54888] = anon_sym_LT;
	v->a[54889] = anon_sym_GT;
	v->a[54890] = anon_sym_GT_GT;
	v->a[54891] = anon_sym_LT_AMP;
	v->a[54892] = anon_sym_GT_AMP;
	v->a[54893] = anon_sym_GT_PIPE;
	v->a[54894] = anon_sym_LT_AMP_DASH;
	v->a[54895] = anon_sym_GT_AMP_DASH;
	v->a[54896] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54897] = anon_sym_DOLLAR;
	v->a[54898] = anon_sym_DQUOTE;
	v->a[54899] = sym_raw_string;
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
