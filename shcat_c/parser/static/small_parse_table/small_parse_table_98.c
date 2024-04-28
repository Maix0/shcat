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
	v->a[9800] = 9;
	v->a[9801] = sym_arithmetic_expansion;
	v->a[9802] = sym_brace_expression;
	v->a[9803] = sym_string;
	v->a[9804] = sym_translated_string;
	v->a[9805] = sym_number;
	v->a[9806] = sym_simple_expansion;
	v->a[9807] = sym_expansion;
	v->a[9808] = sym_command_substitution;
	v->a[9809] = sym_process_substitution;
	v->a[9810] = actions(2214);
	v->a[9811] = 21;
	v->a[9812] = anon_sym_SEMI;
	v->a[9813] = anon_sym_PIPE_PIPE;
	v->a[9814] = anon_sym_AMP_AMP;
	v->a[9815] = anon_sym_PIPE;
	v->a[9816] = anon_sym_AMP;
	v->a[9817] = anon_sym_LT;
	v->a[9818] = anon_sym_GT;
	v->a[9819] = anon_sym_LT_LT;
	small_parse_table_491(v);
}

void	small_parse_table_491(t_small_parse_table_array *v)
{
	v->a[9820] = anon_sym_GT_GT;
	v->a[9821] = anon_sym_RPAREN;
	v->a[9822] = anon_sym_SEMI_SEMI;
	v->a[9823] = anon_sym_PIPE_AMP;
	v->a[9824] = anon_sym_AMP_GT;
	v->a[9825] = anon_sym_AMP_GT_GT;
	v->a[9826] = anon_sym_LT_AMP;
	v->a[9827] = anon_sym_GT_AMP;
	v->a[9828] = anon_sym_GT_PIPE;
	v->a[9829] = anon_sym_LT_AMP_DASH;
	v->a[9830] = anon_sym_GT_AMP_DASH;
	v->a[9831] = anon_sym_LT_LT_DASH;
	v->a[9832] = anon_sym_LT_LT_LT;
	v->a[9833] = 8;
	v->a[9834] = actions(3);
	v->a[9835] = 1;
	v->a[9836] = sym_comment;
	v->a[9837] = actions(2608);
	v->a[9838] = 1;
	v->a[9839] = anon_sym_DQUOTE;
	small_parse_table_492(v);
}

void	small_parse_table_492(t_small_parse_table_array *v)
{
	v->a[9840] = actions(2778);
	v->a[9841] = 1;
	v->a[9842] = sym_variable_name;
	v->a[9843] = state(1525);
	v->a[9844] = 1;
	v->a[9845] = sym_string;
	v->a[9846] = actions(2776);
	v->a[9847] = 2;
	v->a[9848] = aux_sym__simple_variable_name_token1;
	v->a[9849] = aux_sym__multiline_variable_name_token1;
	v->a[9850] = actions(1241);
	v->a[9851] = 3;
	v->a[9852] = sym_file_descriptor;
	v->a[9853] = sym_test_operator;
	v->a[9854] = sym__brace_start;
	v->a[9855] = actions(2774);
	v->a[9856] = 9;
	v->a[9857] = anon_sym_DASH;
	v->a[9858] = anon_sym_STAR;
	v->a[9859] = anon_sym_BANG;
	small_parse_table_493(v);
}

void	small_parse_table_493(t_small_parse_table_array *v)
{
	v->a[9860] = anon_sym_QMARK;
	v->a[9861] = anon_sym_DOLLAR;
	v->a[9862] = anon_sym_POUND;
	v->a[9863] = anon_sym_AT2;
	v->a[9864] = anon_sym_0;
	v->a[9865] = anon_sym__;
	v->a[9866] = actions(1239);
	v->a[9867] = 38;
	v->a[9868] = anon_sym_LPAREN_LPAREN;
	v->a[9869] = anon_sym_SEMI;
	v->a[9870] = anon_sym_PIPE_PIPE;
	v->a[9871] = anon_sym_AMP_AMP;
	v->a[9872] = anon_sym_PIPE;
	v->a[9873] = anon_sym_AMP;
	v->a[9874] = anon_sym_LT;
	v->a[9875] = anon_sym_GT;
	v->a[9876] = anon_sym_LT_LT;
	v->a[9877] = anon_sym_GT_GT;
	v->a[9878] = anon_sym_esac;
	v->a[9879] = anon_sym_SEMI_SEMI;
	small_parse_table_494(v);
}

void	small_parse_table_494(t_small_parse_table_array *v)
{
	v->a[9880] = anon_sym_SEMI_AMP;
	v->a[9881] = anon_sym_SEMI_SEMI_AMP;
	v->a[9882] = anon_sym_PIPE_AMP;
	v->a[9883] = anon_sym_AMP_GT;
	v->a[9884] = anon_sym_AMP_GT_GT;
	v->a[9885] = anon_sym_LT_AMP;
	v->a[9886] = anon_sym_GT_AMP;
	v->a[9887] = anon_sym_GT_PIPE;
	v->a[9888] = anon_sym_LT_AMP_DASH;
	v->a[9889] = anon_sym_GT_AMP_DASH;
	v->a[9890] = anon_sym_LT_LT_DASH;
	v->a[9891] = aux_sym_heredoc_redirect_token1;
	v->a[9892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9893] = anon_sym_DOLLAR_LBRACK;
	v->a[9894] = sym__special_character;
	v->a[9895] = sym_raw_string;
	v->a[9896] = sym_ansi_c_string;
	v->a[9897] = aux_sym_number_token1;
	v->a[9898] = aux_sym_number_token2;
	v->a[9899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_495(v);
}

/* EOF small_parse_table_98.c */
