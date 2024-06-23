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
	v->a[9800] = actions(232);
	v->a[9801] = 1;
	v->a[9802] = sym_variable_name;
	v->a[9803] = state(126);
	v->a[9804] = 1;
	v->a[9805] = aux_sym__statements_repeat1;
	v->a[9806] = state(184);
	v->a[9807] = 1;
	v->a[9808] = sym_command_name;
	v->a[9809] = state(268);
	v->a[9810] = 1;
	v->a[9811] = sym_variable_assignment;
	v->a[9812] = state(647);
	v->a[9813] = 1;
	v->a[9814] = sym_concatenation;
	v->a[9815] = state(783);
	v->a[9816] = 1;
	v->a[9817] = sym_file_redirect;
	v->a[9818] = state(828);
	v->a[9819] = 1;
	small_parse_table_491(v);
}

void	small_parse_table_491(t_small_parse_table_array *v)
{
	v->a[9820] = aux_sym_command_repeat1;
	v->a[9821] = state(1314);
	v->a[9822] = 1;
	v->a[9823] = sym_pipeline;
	v->a[9824] = state(1331);
	v->a[9825] = 1;
	v->a[9826] = aux_sym_redirected_statement_repeat2;
	v->a[9827] = state(2252);
	v->a[9828] = 1;
	v->a[9829] = sym__statement_not_pipeline;
	v->a[9830] = state(2414);
	v->a[9831] = 1;
	v->a[9832] = sym__statements;
	v->a[9833] = actions(11);
	v->a[9834] = 2;
	v->a[9835] = anon_sym_while;
	v->a[9836] = anon_sym_until;
	v->a[9837] = actions(226);
	v->a[9838] = 2;
	v->a[9839] = anon_sym_LT_AMP_DASH;
	small_parse_table_492(v);
}

void	small_parse_table_492(t_small_parse_table_array *v)
{
	v->a[9840] = anon_sym_GT_AMP_DASH;
	v->a[9841] = actions(228);
	v->a[9842] = 2;
	v->a[9843] = sym_raw_string;
	v->a[9844] = sym_number;
	v->a[9845] = state(294);
	v->a[9846] = 5;
	v->a[9847] = sym_arithmetic_expansion;
	v->a[9848] = sym_string;
	v->a[9849] = sym_simple_expansion;
	v->a[9850] = sym_expansion;
	v->a[9851] = sym_command_substitution;
	v->a[9852] = actions(224);
	v->a[9853] = 8;
	v->a[9854] = anon_sym_LT;
	v->a[9855] = anon_sym_GT;
	v->a[9856] = anon_sym_GT_GT;
	v->a[9857] = anon_sym_AMP_GT;
	v->a[9858] = anon_sym_AMP_GT_GT;
	v->a[9859] = anon_sym_LT_AMP;
	small_parse_table_493(v);
}

void	small_parse_table_493(t_small_parse_table_array *v)
{
	v->a[9860] = anon_sym_GT_AMP;
	v->a[9861] = anon_sym_GT_PIPE;
	v->a[9862] = state(1188);
	v->a[9863] = 12;
	v->a[9864] = sym_redirected_statement;
	v->a[9865] = sym_for_statement;
	v->a[9866] = sym_while_statement;
	v->a[9867] = sym_if_statement;
	v->a[9868] = sym_case_statement;
	v->a[9869] = sym_function_definition;
	v->a[9870] = sym_compound_statement;
	v->a[9871] = sym_subshell;
	v->a[9872] = sym_list;
	v->a[9873] = sym_negated_command;
	v->a[9874] = sym_command;
	v->a[9875] = sym__variable_assignments;
	v->a[9876] = 32;
	v->a[9877] = actions(3);
	v->a[9878] = 1;
	v->a[9879] = sym_comment;
	small_parse_table_494(v);
}

void	small_parse_table_494(t_small_parse_table_array *v)
{
	v->a[9880] = actions(9);
	v->a[9881] = 1;
	v->a[9882] = anon_sym_for;
	v->a[9883] = actions(13);
	v->a[9884] = 1;
	v->a[9885] = anon_sym_if;
	v->a[9886] = actions(15);
	v->a[9887] = 1;
	v->a[9888] = anon_sym_case;
	v->a[9889] = actions(17);
	v->a[9890] = 1;
	v->a[9891] = anon_sym_LPAREN;
	v->a[9892] = actions(19);
	v->a[9893] = 1;
	v->a[9894] = anon_sym_LBRACE;
	v->a[9895] = actions(59);
	v->a[9896] = 1;
	v->a[9897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9898] = actions(61);
	v->a[9899] = 1;
	small_parse_table_495(v);
}

/* EOF small_parse_table_98.c */
