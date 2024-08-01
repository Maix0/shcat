/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_358.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1790(t_small_parse_table_array *v)
{
	v->a[35800] = 7;
	v->a[35801] = sym__arithmetic_expression;
	v->a[35802] = sym_arithmetic_literal;
	v->a[35803] = sym_arithmetic_binary_expression;
	v->a[35804] = sym_arithmetic_ternary_expression;
	v->a[35805] = sym_arithmetic_unary_expression;
	v->a[35806] = sym_arithmetic_postfix_expression;
	v->a[35807] = sym_arithmetic_parenthesized_expression;
	v->a[35808] = 10;
	v->a[35809] = actions(1424);
	v->a[35810] = 1;
	v->a[35811] = anon_sym_LPAREN;
	v->a[35812] = actions(1428);
	v->a[35813] = 1;
	v->a[35814] = anon_sym_DOLLAR;
	v->a[35815] = actions(1430);
	v->a[35816] = 1;
	v->a[35817] = anon_sym_DQUOTE;
	v->a[35818] = actions(1434);
	v->a[35819] = 1;
	small_parse_table_1791(v);
}

void	small_parse_table_1791(t_small_parse_table_array *v)
{
	v->a[35820] = anon_sym_DOLLAR_LBRACE;
	v->a[35821] = actions(1436);
	v->a[35822] = 1;
	v->a[35823] = sym_comment;
	v->a[35824] = actions(1438);
	v->a[35825] = 1;
	v->a[35826] = sym_variable_name;
	v->a[35827] = actions(1426);
	v->a[35828] = 2;
	v->a[35829] = anon_sym_DASH2;
	v->a[35830] = anon_sym_PLUS2;
	v->a[35831] = actions(1432);
	v->a[35832] = 2;
	v->a[35833] = sym_number;
	v->a[35834] = aux_sym__simple_variable_name_token1;
	v->a[35835] = state(1312);
	v->a[35836] = 3;
	v->a[35837] = sym_string;
	v->a[35838] = sym_simple_expansion;
	v->a[35839] = sym_expansion;
	small_parse_table_1792(v);
}

void	small_parse_table_1792(t_small_parse_table_array *v)
{
	v->a[35840] = state(1305);
	v->a[35841] = 7;
	v->a[35842] = sym__arithmetic_expression;
	v->a[35843] = sym_arithmetic_literal;
	v->a[35844] = sym_arithmetic_binary_expression;
	v->a[35845] = sym_arithmetic_ternary_expression;
	v->a[35846] = sym_arithmetic_unary_expression;
	v->a[35847] = sym_arithmetic_postfix_expression;
	v->a[35848] = sym_arithmetic_parenthesized_expression;
	v->a[35849] = 3;
	v->a[35850] = actions(3);
	v->a[35851] = 1;
	v->a[35852] = sym_comment;
	v->a[35853] = actions(1050);
	v->a[35854] = 2;
	v->a[35855] = sym__concat;
	v->a[35856] = sym__bare_dollar;
	v->a[35857] = actions(1052);
	v->a[35858] = 17;
	v->a[35859] = anon_sym_PIPE;
	small_parse_table_1793(v);
}

void	small_parse_table_1793(t_small_parse_table_array *v)
{
	v->a[35860] = anon_sym_AMP_AMP;
	v->a[35861] = anon_sym_PIPE_PIPE;
	v->a[35862] = anon_sym_LT;
	v->a[35863] = anon_sym_GT;
	v->a[35864] = anon_sym_GT_GT;
	v->a[35865] = anon_sym_LT_LT;
	v->a[35866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35867] = aux_sym_concatenation_token1;
	v->a[35868] = anon_sym_DOLLAR;
	v->a[35869] = anon_sym_DQUOTE;
	v->a[35870] = sym_raw_string;
	v->a[35871] = sym_number;
	v->a[35872] = anon_sym_DOLLAR_LBRACE;
	v->a[35873] = anon_sym_DOLLAR_LPAREN;
	v->a[35874] = anon_sym_BQUOTE;
	v->a[35875] = sym_word;
	v->a[35876] = 3;
	v->a[35877] = actions(3);
	v->a[35878] = 1;
	v->a[35879] = sym_comment;
	small_parse_table_1794(v);
}

void	small_parse_table_1794(t_small_parse_table_array *v)
{
	v->a[35880] = actions(1050);
	v->a[35881] = 1;
	v->a[35882] = sym__concat;
	v->a[35883] = actions(1052);
	v->a[35884] = 18;
	v->a[35885] = anon_sym_SEMI_SEMI;
	v->a[35886] = anon_sym_AMP_AMP;
	v->a[35887] = anon_sym_PIPE_PIPE;
	v->a[35888] = anon_sym_LT;
	v->a[35889] = anon_sym_GT;
	v->a[35890] = anon_sym_GT_GT;
	v->a[35891] = aux_sym_heredoc_redirect_token1;
	v->a[35892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[35893] = aux_sym_concatenation_token1;
	v->a[35894] = anon_sym_DOLLAR;
	v->a[35895] = anon_sym_DQUOTE;
	v->a[35896] = sym_raw_string;
	v->a[35897] = sym_number;
	v->a[35898] = anon_sym_DOLLAR_LBRACE;
	v->a[35899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1795(v);
}

/* EOF small_parse_table_358.c */
