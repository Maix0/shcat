/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_98.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_490(t_small_parse_table_array *v)
{
	v->a[9800] = sym__brace_start;
	v->a[9801] = ts_builtin_sym_end;
	v->a[9802] = actions(2100);
	v->a[9803] = 9;
	v->a[9804] = anon_sym_BANG;
	v->a[9805] = anon_sym_DASH;
	v->a[9806] = anon_sym_STAR;
	v->a[9807] = anon_sym_QMARK;
	v->a[9808] = anon_sym_DOLLAR;
	v->a[9809] = anon_sym_POUND;
	v->a[9810] = anon_sym_AT;
	v->a[9811] = anon_sym_0;
	v->a[9812] = anon_sym__;
	v->a[9813] = actions(826);
	v->a[9814] = 31;
	v->a[9815] = anon_sym_PIPE;
	v->a[9816] = anon_sym_SEMI_SEMI;
	v->a[9817] = anon_sym_PIPE_AMP;
	v->a[9818] = anon_sym_AMP_AMP;
	v->a[9819] = anon_sym_PIPE_PIPE;
	small_parse_table_491(v);
}

void	small_parse_table_491(t_small_parse_table_array *v)
{
	v->a[9820] = anon_sym_LT;
	v->a[9821] = anon_sym_GT;
	v->a[9822] = anon_sym_GT_GT;
	v->a[9823] = anon_sym_AMP_GT;
	v->a[9824] = anon_sym_AMP_GT_GT;
	v->a[9825] = anon_sym_LT_AMP;
	v->a[9826] = anon_sym_GT_AMP;
	v->a[9827] = anon_sym_GT_PIPE;
	v->a[9828] = anon_sym_LT_AMP_DASH;
	v->a[9829] = anon_sym_GT_AMP_DASH;
	v->a[9830] = anon_sym_LT_LT;
	v->a[9831] = anon_sym_LT_LT_DASH;
	v->a[9832] = aux_sym_heredoc_redirect_token1;
	v->a[9833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9834] = anon_sym_AMP;
	v->a[9835] = sym__special_character;
	v->a[9836] = anon_sym_DQUOTE;
	v->a[9837] = sym_raw_string;
	v->a[9838] = aux_sym_number_token1;
	v->a[9839] = aux_sym_number_token2;
	small_parse_table_492(v);
}

void	small_parse_table_492(t_small_parse_table_array *v)
{
	v->a[9840] = anon_sym_DOLLAR_LBRACE;
	v->a[9841] = anon_sym_DOLLAR_LPAREN;
	v->a[9842] = anon_sym_BQUOTE;
	v->a[9843] = anon_sym_DOLLAR_BQUOTE;
	v->a[9844] = sym_word;
	v->a[9845] = anon_sym_SEMI;
	v->a[9846] = 6;
	v->a[9847] = actions(3);
	v->a[9848] = 1;
	v->a[9849] = sym_comment;
	v->a[9850] = state(1240);
	v->a[9851] = 1;
	v->a[9852] = aux_sym__literal_repeat1;
	v->a[9853] = state(350);
	v->a[9854] = 2;
	v->a[9855] = sym_concatenation;
	v->a[9856] = aux_sym_for_statement_repeat1;
	v->a[9857] = actions(1390);
	v->a[9858] = 6;
	v->a[9859] = sym_file_descriptor;
	small_parse_table_493(v);
}

void	small_parse_table_493(t_small_parse_table_array *v)
{
	v->a[9860] = sym_variable_name;
	v->a[9861] = sym_test_operator;
	v->a[9862] = sym__brace_start;
	v->a[9863] = ts_builtin_sym_end;
	v->a[9864] = aux_sym_heredoc_redirect_token1;
	v->a[9865] = state(776);
	v->a[9866] = 7;
	v->a[9867] = sym_arithmetic_expansion;
	v->a[9868] = sym_brace_expression;
	v->a[9869] = sym_string;
	v->a[9870] = sym_number;
	v->a[9871] = sym_simple_expansion;
	v->a[9872] = sym_expansion;
	v->a[9873] = sym_command_substitution;
	v->a[9874] = actions(1388);
	v->a[9875] = 31;
	v->a[9876] = anon_sym_PIPE;
	v->a[9877] = anon_sym_SEMI_SEMI;
	v->a[9878] = anon_sym_PIPE_AMP;
	v->a[9879] = anon_sym_AMP_AMP;
	small_parse_table_494(v);
}

void	small_parse_table_494(t_small_parse_table_array *v)
{
	v->a[9880] = anon_sym_PIPE_PIPE;
	v->a[9881] = anon_sym_LT;
	v->a[9882] = anon_sym_GT;
	v->a[9883] = anon_sym_GT_GT;
	v->a[9884] = anon_sym_AMP_GT;
	v->a[9885] = anon_sym_AMP_GT_GT;
	v->a[9886] = anon_sym_LT_AMP;
	v->a[9887] = anon_sym_GT_AMP;
	v->a[9888] = anon_sym_GT_PIPE;
	v->a[9889] = anon_sym_LT_AMP_DASH;
	v->a[9890] = anon_sym_GT_AMP_DASH;
	v->a[9891] = anon_sym_LT_LT;
	v->a[9892] = anon_sym_LT_LT_DASH;
	v->a[9893] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9894] = anon_sym_AMP;
	v->a[9895] = anon_sym_DOLLAR;
	v->a[9896] = sym__special_character;
	v->a[9897] = anon_sym_DQUOTE;
	v->a[9898] = sym_raw_string;
	v->a[9899] = aux_sym_number_token1;
	small_parse_table_495(v);
}

/* EOF small_parse_table_98.c */
