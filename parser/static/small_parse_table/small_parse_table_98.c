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
	v->a[9800] = anon_sym_while;
	v->a[9801] = anon_sym_until;
	v->a[9802] = actions(61);
	v->a[9803] = 2;
	v->a[9804] = anon_sym_LT_AMP_DASH;
	v->a[9805] = anon_sym_GT_AMP_DASH;
	v->a[9806] = state(397);
	v->a[9807] = 6;
	v->a[9808] = sym_arithmetic_expansion;
	v->a[9809] = sym_string;
	v->a[9810] = sym_number;
	v->a[9811] = sym_simple_expansion;
	v->a[9812] = sym_expansion;
	v->a[9813] = sym_command_substitution;
	v->a[9814] = actions(59);
	v->a[9815] = 8;
	v->a[9816] = anon_sym_LT;
	v->a[9817] = anon_sym_GT;
	v->a[9818] = anon_sym_GT_GT;
	v->a[9819] = anon_sym_AMP_GT;
	small_parse_table_491(v);
}

void	small_parse_table_491(t_small_parse_table_array *v)
{
	v->a[9820] = anon_sym_AMP_GT_GT;
	v->a[9821] = anon_sym_LT_AMP;
	v->a[9822] = anon_sym_GT_AMP;
	v->a[9823] = anon_sym_GT_PIPE;
	v->a[9824] = state(1137);
	v->a[9825] = 12;
	v->a[9826] = sym_redirected_statement;
	v->a[9827] = sym_for_statement;
	v->a[9828] = sym_while_statement;
	v->a[9829] = sym_if_statement;
	v->a[9830] = sym_case_statement;
	v->a[9831] = sym_function_definition;
	v->a[9832] = sym_compound_statement;
	v->a[9833] = sym_subshell;
	v->a[9834] = sym_list;
	v->a[9835] = sym_negated_command;
	v->a[9836] = sym_command;
	v->a[9837] = sym_variable_assignments;
	v->a[9838] = 34;
	v->a[9839] = actions(3);
	small_parse_table_492(v);
}

void	small_parse_table_492(t_small_parse_table_array *v)
{
	v->a[9840] = 1;
	v->a[9841] = sym_comment;
	v->a[9842] = actions(9);
	v->a[9843] = 1;
	v->a[9844] = anon_sym_for;
	v->a[9845] = actions(13);
	v->a[9846] = 1;
	v->a[9847] = anon_sym_if;
	v->a[9848] = actions(15);
	v->a[9849] = 1;
	v->a[9850] = anon_sym_case;
	v->a[9851] = actions(17);
	v->a[9852] = 1;
	v->a[9853] = anon_sym_LPAREN;
	v->a[9854] = actions(19);
	v->a[9855] = 1;
	v->a[9856] = anon_sym_LBRACE;
	v->a[9857] = actions(63);
	v->a[9858] = 1;
	v->a[9859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_493(v);
}

void	small_parse_table_493(t_small_parse_table_array *v)
{
	v->a[9860] = actions(65);
	v->a[9861] = 1;
	v->a[9862] = anon_sym_DOLLAR;
	v->a[9863] = actions(67);
	v->a[9864] = 1;
	v->a[9865] = anon_sym_DQUOTE;
	v->a[9866] = actions(71);
	v->a[9867] = 1;
	v->a[9868] = aux_sym_number_token1;
	v->a[9869] = actions(73);
	v->a[9870] = 1;
	v->a[9871] = aux_sym_number_token2;
	v->a[9872] = actions(75);
	v->a[9873] = 1;
	v->a[9874] = anon_sym_DOLLAR_LBRACE;
	v->a[9875] = actions(77);
	v->a[9876] = 1;
	v->a[9877] = anon_sym_DOLLAR_LPAREN;
	v->a[9878] = actions(79);
	v->a[9879] = 1;
	small_parse_table_494(v);
}

void	small_parse_table_494(t_small_parse_table_array *v)
{
	v->a[9880] = anon_sym_BQUOTE;
	v->a[9881] = actions(248);
	v->a[9882] = 1;
	v->a[9883] = sym_word;
	v->a[9884] = actions(250);
	v->a[9885] = 1;
	v->a[9886] = anon_sym_BANG;
	v->a[9887] = actions(256);
	v->a[9888] = 1;
	v->a[9889] = sym_raw_string;
	v->a[9890] = actions(258);
	v->a[9891] = 1;
	v->a[9892] = sym_file_descriptor;
	v->a[9893] = actions(260);
	v->a[9894] = 1;
	v->a[9895] = sym_variable_name;
	v->a[9896] = state(141);
	v->a[9897] = 1;
	v->a[9898] = aux_sym__statements_repeat1;
	v->a[9899] = state(175);
	small_parse_table_495(v);
}

/* EOF small_parse_table_98.c */
