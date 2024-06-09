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
	v->a[54800] = actions(1993);
	v->a[54801] = 1;
	v->a[54802] = anon_sym_DQUOTE;
	v->a[54803] = actions(1995);
	v->a[54804] = 1;
	v->a[54805] = aux_sym_number_token1;
	v->a[54806] = actions(1997);
	v->a[54807] = 1;
	v->a[54808] = aux_sym_number_token2;
	v->a[54809] = actions(1999);
	v->a[54810] = 1;
	v->a[54811] = anon_sym_DOLLAR_LBRACE;
	v->a[54812] = actions(2001);
	v->a[54813] = 1;
	v->a[54814] = anon_sym_DOLLAR_LPAREN;
	v->a[54815] = actions(2003);
	v->a[54816] = 1;
	v->a[54817] = anon_sym_BQUOTE;
	v->a[54818] = actions(2005);
	v->a[54819] = 1;
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = aux_sym__simple_variable_name_token1;
	v->a[54821] = actions(2007);
	v->a[54822] = 1;
	v->a[54823] = sym_variable_name;
	v->a[54824] = actions(2035);
	v->a[54825] = 1;
	v->a[54826] = anon_sym_RPAREN_RPAREN;
	v->a[54827] = actions(1985);
	v->a[54828] = 2;
	v->a[54829] = anon_sym_PLUS_PLUS;
	v->a[54830] = anon_sym_DASH_DASH;
	v->a[54831] = actions(1987);
	v->a[54832] = 2;
	v->a[54833] = anon_sym_DASH2;
	v->a[54834] = anon_sym_PLUS2;
	v->a[54835] = state(530);
	v->a[54836] = 4;
	v->a[54837] = sym_string;
	v->a[54838] = sym_number;
	v->a[54839] = sym_simple_expansion;
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = sym_expansion;
	v->a[54841] = state(623);
	v->a[54842] = 8;
	v->a[54843] = sym__arithmetic_expression;
	v->a[54844] = sym_arithmetic_literal;
	v->a[54845] = sym_arithmetic_binary_expression;
	v->a[54846] = sym_arithmetic_ternary_expression;
	v->a[54847] = sym_arithmetic_unary_expression;
	v->a[54848] = sym_arithmetic_postfix_expression;
	v->a[54849] = sym_arithmetic_parenthesized_expression;
	v->a[54850] = sym_command_substitution;
	v->a[54851] = 3;
	v->a[54852] = actions(3);
	v->a[54853] = 1;
	v->a[54854] = sym_comment;
	v->a[54855] = actions(1112);
	v->a[54856] = 3;
	v->a[54857] = sym_file_descriptor;
	v->a[54858] = sym__concat;
	v->a[54859] = sym_variable_name;
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = actions(1114);
	v->a[54861] = 26;
	v->a[54862] = anon_sym_PIPE;
	v->a[54863] = anon_sym_AMP_AMP;
	v->a[54864] = anon_sym_PIPE_PIPE;
	v->a[54865] = anon_sym_LT;
	v->a[54866] = anon_sym_GT;
	v->a[54867] = anon_sym_GT_GT;
	v->a[54868] = anon_sym_AMP_GT;
	v->a[54869] = anon_sym_AMP_GT_GT;
	v->a[54870] = anon_sym_LT_AMP;
	v->a[54871] = anon_sym_GT_AMP;
	v->a[54872] = anon_sym_GT_PIPE;
	v->a[54873] = anon_sym_LT_AMP_DASH;
	v->a[54874] = anon_sym_GT_AMP_DASH;
	v->a[54875] = anon_sym_LT_LT;
	v->a[54876] = anon_sym_LT_LT_DASH;
	v->a[54877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54878] = aux_sym_concatenation_token1;
	v->a[54879] = anon_sym_DOLLAR;
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = anon_sym_DQUOTE;
	v->a[54881] = sym_raw_string;
	v->a[54882] = aux_sym_number_token1;
	v->a[54883] = aux_sym_number_token2;
	v->a[54884] = anon_sym_DOLLAR_LBRACE;
	v->a[54885] = anon_sym_DOLLAR_LPAREN;
	v->a[54886] = anon_sym_BQUOTE;
	v->a[54887] = sym_word;
	v->a[54888] = 3;
	v->a[54889] = actions(3);
	v->a[54890] = 1;
	v->a[54891] = sym_comment;
	v->a[54892] = actions(1243);
	v->a[54893] = 3;
	v->a[54894] = sym_file_descriptor;
	v->a[54895] = sym__concat;
	v->a[54896] = sym_variable_name;
	v->a[54897] = actions(1245);
	v->a[54898] = 26;
	v->a[54899] = anon_sym_PIPE;
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
