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
	v->a[9800] = state(884);
	v->a[9801] = 12;
	v->a[9802] = sym_redirected_statement;
	v->a[9803] = sym_for_statement;
	v->a[9804] = sym_while_statement;
	v->a[9805] = sym_if_statement;
	v->a[9806] = sym_case_statement;
	v->a[9807] = sym_function_definition;
	v->a[9808] = sym_compound_statement;
	v->a[9809] = sym_subshell;
	v->a[9810] = sym_list;
	v->a[9811] = sym_negated_command;
	v->a[9812] = sym_command;
	v->a[9813] = sym__variable_assignments;
	v->a[9814] = 30;
	v->a[9815] = actions(3);
	v->a[9816] = 1;
	v->a[9817] = sym_comment;
	v->a[9818] = actions(9);
	v->a[9819] = 1;
	small_parse_table_491(v);
}

void	small_parse_table_491(t_small_parse_table_array *v)
{
	v->a[9820] = anon_sym_for;
	v->a[9821] = actions(13);
	v->a[9822] = 1;
	v->a[9823] = anon_sym_if;
	v->a[9824] = actions(15);
	v->a[9825] = 1;
	v->a[9826] = anon_sym_case;
	v->a[9827] = actions(17);
	v->a[9828] = 1;
	v->a[9829] = anon_sym_LPAREN;
	v->a[9830] = actions(19);
	v->a[9831] = 1;
	v->a[9832] = anon_sym_LBRACE;
	v->a[9833] = actions(53);
	v->a[9834] = 1;
	v->a[9835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9836] = actions(55);
	v->a[9837] = 1;
	v->a[9838] = anon_sym_DOLLAR;
	v->a[9839] = actions(57);
	small_parse_table_492(v);
}

void	small_parse_table_492(t_small_parse_table_array *v)
{
	v->a[9840] = 1;
	v->a[9841] = anon_sym_DQUOTE;
	v->a[9842] = actions(61);
	v->a[9843] = 1;
	v->a[9844] = anon_sym_DOLLAR_LBRACE;
	v->a[9845] = actions(63);
	v->a[9846] = 1;
	v->a[9847] = anon_sym_DOLLAR_LPAREN;
	v->a[9848] = actions(65);
	v->a[9849] = 1;
	v->a[9850] = anon_sym_BQUOTE;
	v->a[9851] = actions(67);
	v->a[9852] = 1;
	v->a[9853] = sym_variable_name;
	v->a[9854] = actions(202);
	v->a[9855] = 1;
	v->a[9856] = sym_word;
	v->a[9857] = actions(204);
	v->a[9858] = 1;
	v->a[9859] = anon_sym_BANG;
	small_parse_table_493(v);
}

void	small_parse_table_493(t_small_parse_table_array *v)
{
	v->a[9860] = state(119);
	v->a[9861] = 1;
	v->a[9862] = aux_sym__statements_repeat1;
	v->a[9863] = state(272);
	v->a[9864] = 1;
	v->a[9865] = sym_command_name;
	v->a[9866] = state(283);
	v->a[9867] = 1;
	v->a[9868] = sym_variable_assignment;
	v->a[9869] = state(486);
	v->a[9870] = 1;
	v->a[9871] = aux_sym_command_repeat1;
	v->a[9872] = state(602);
	v->a[9873] = 1;
	v->a[9874] = sym_concatenation;
	v->a[9875] = state(636);
	v->a[9876] = 1;
	v->a[9877] = sym_file_redirect;
	v->a[9878] = state(951);
	v->a[9879] = 1;
	small_parse_table_494(v);
}

void	small_parse_table_494(t_small_parse_table_array *v)
{
	v->a[9880] = sym_pipeline;
	v->a[9881] = state(1006);
	v->a[9882] = 1;
	v->a[9883] = aux_sym_redirected_statement_repeat2;
	v->a[9884] = state(1605);
	v->a[9885] = 1;
	v->a[9886] = sym__statement_not_pipeline;
	v->a[9887] = state(1693);
	v->a[9888] = 1;
	v->a[9889] = sym__statements;
	v->a[9890] = actions(11);
	v->a[9891] = 2;
	v->a[9892] = anon_sym_while;
	v->a[9893] = anon_sym_until;
	v->a[9894] = actions(59);
	v->a[9895] = 2;
	v->a[9896] = sym_raw_string;
	v->a[9897] = sym_number;
	v->a[9898] = state(425);
	v->a[9899] = 5;
	small_parse_table_495(v);
}

/* EOF small_parse_table_98.c */
