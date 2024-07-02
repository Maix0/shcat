/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_468.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2340(t_small_parse_table_array *v)
{
	v->a[46800] = actions(1560);
	v->a[46801] = 3;
	v->a[46802] = sym_raw_string;
	v->a[46803] = sym_number;
	v->a[46804] = sym_word;
	v->a[46805] = state(917);
	v->a[46806] = 5;
	v->a[46807] = sym_arithmetic_expansion;
	v->a[46808] = sym_string;
	v->a[46809] = sym_simple_expansion;
	v->a[46810] = sym_expansion;
	v->a[46811] = sym_command_substitution;
	v->a[46812] = actions(509);
	v->a[46813] = 10;
	v->a[46814] = anon_sym_AMP_AMP;
	v->a[46815] = anon_sym_PIPE_PIPE;
	v->a[46816] = anon_sym_LT;
	v->a[46817] = anon_sym_GT;
	v->a[46818] = anon_sym_GT_GT;
	v->a[46819] = anon_sym_LT_AMP;
	small_parse_table_2341(v);
}

void	small_parse_table_2341(t_small_parse_table_array *v)
{
	v->a[46820] = anon_sym_GT_AMP;
	v->a[46821] = anon_sym_GT_PIPE;
	v->a[46822] = anon_sym_LT_GT;
	v->a[46823] = aux_sym_heredoc_redirect_token1;
	v->a[46824] = 16;
	v->a[46825] = actions(680);
	v->a[46826] = 1;
	v->a[46827] = sym_comment;
	v->a[46828] = actions(1574);
	v->a[46829] = 1;
	v->a[46830] = anon_sym_LPAREN;
	v->a[46831] = actions(1576);
	v->a[46832] = 1;
	v->a[46833] = anon_sym_BANG;
	v->a[46834] = actions(1584);
	v->a[46835] = 1;
	v->a[46836] = anon_sym_TILDE;
	v->a[46837] = actions(1586);
	v->a[46838] = 1;
	v->a[46839] = anon_sym_DOLLAR;
	small_parse_table_2342(v);
}

void	small_parse_table_2342(t_small_parse_table_array *v)
{
	v->a[46840] = actions(1588);
	v->a[46841] = 1;
	v->a[46842] = anon_sym_DQUOTE;
	v->a[46843] = actions(1592);
	v->a[46844] = 1;
	v->a[46845] = anon_sym_DOLLAR_LBRACE;
	v->a[46846] = actions(1594);
	v->a[46847] = 1;
	v->a[46848] = anon_sym_DOLLAR_LPAREN;
	v->a[46849] = actions(1596);
	v->a[46850] = 1;
	v->a[46851] = anon_sym_BQUOTE;
	v->a[46852] = actions(1598);
	v->a[46853] = 1;
	v->a[46854] = sym_variable_name;
	v->a[46855] = actions(1691);
	v->a[46856] = 1;
	v->a[46857] = anon_sym_RPAREN_RPAREN;
	v->a[46858] = actions(1580);
	v->a[46859] = 2;
	small_parse_table_2343(v);
}

void	small_parse_table_2343(t_small_parse_table_array *v)
{
	v->a[46860] = anon_sym_PLUS_PLUS;
	v->a[46861] = anon_sym_DASH_DASH;
	v->a[46862] = actions(1582);
	v->a[46863] = 2;
	v->a[46864] = anon_sym_DASH2;
	v->a[46865] = anon_sym_PLUS2;
	v->a[46866] = actions(1590);
	v->a[46867] = 2;
	v->a[46868] = sym_number;
	v->a[46869] = aux_sym__simple_variable_name_token1;
	v->a[46870] = state(238);
	v->a[46871] = 3;
	v->a[46872] = sym_string;
	v->a[46873] = sym_simple_expansion;
	v->a[46874] = sym_expansion;
	v->a[46875] = state(306);
	v->a[46876] = 8;
	v->a[46877] = sym__arithmetic_expression;
	v->a[46878] = sym_arithmetic_literal;
	v->a[46879] = sym_arithmetic_binary_expression;
	small_parse_table_2344(v);
}

void	small_parse_table_2344(t_small_parse_table_array *v)
{
	v->a[46880] = sym_arithmetic_ternary_expression;
	v->a[46881] = sym_arithmetic_unary_expression;
	v->a[46882] = sym_arithmetic_postfix_expression;
	v->a[46883] = sym_arithmetic_parenthesized_expression;
	v->a[46884] = sym_command_substitution;
	v->a[46885] = 16;
	v->a[46886] = actions(680);
	v->a[46887] = 1;
	v->a[46888] = sym_comment;
	v->a[46889] = actions(1574);
	v->a[46890] = 1;
	v->a[46891] = anon_sym_LPAREN;
	v->a[46892] = actions(1576);
	v->a[46893] = 1;
	v->a[46894] = anon_sym_BANG;
	v->a[46895] = actions(1584);
	v->a[46896] = 1;
	v->a[46897] = anon_sym_TILDE;
	v->a[46898] = actions(1586);
	v->a[46899] = 1;
	small_parse_table_2345(v);
}

/* EOF small_parse_table_468.c */
