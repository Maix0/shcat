/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_88.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_440(t_small_parse_table_array *v)
{
	v->a[8800] = actions(61);
	v->a[8801] = 1;
	v->a[8802] = anon_sym_DOLLAR;
	v->a[8803] = actions(63);
	v->a[8804] = 1;
	v->a[8805] = anon_sym_DQUOTE;
	v->a[8806] = actions(67);
	v->a[8807] = 1;
	v->a[8808] = anon_sym_DOLLAR_LBRACE;
	v->a[8809] = actions(69);
	v->a[8810] = 1;
	v->a[8811] = anon_sym_DOLLAR_LPAREN;
	v->a[8812] = actions(71);
	v->a[8813] = 1;
	v->a[8814] = anon_sym_BQUOTE;
	v->a[8815] = actions(220);
	v->a[8816] = 1;
	v->a[8817] = sym_word;
	v->a[8818] = actions(222);
	v->a[8819] = 1;
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = anon_sym_BANG;
	v->a[8821] = actions(230);
	v->a[8822] = 1;
	v->a[8823] = sym_file_descriptor;
	v->a[8824] = actions(232);
	v->a[8825] = 1;
	v->a[8826] = sym_variable_name;
	v->a[8827] = state(126);
	v->a[8828] = 1;
	v->a[8829] = aux_sym__statements_repeat1;
	v->a[8830] = state(184);
	v->a[8831] = 1;
	v->a[8832] = sym_command_name;
	v->a[8833] = state(268);
	v->a[8834] = 1;
	v->a[8835] = sym_variable_assignment;
	v->a[8836] = state(647);
	v->a[8837] = 1;
	v->a[8838] = sym_concatenation;
	v->a[8839] = state(771);
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = 1;
	v->a[8841] = sym_file_redirect;
	v->a[8842] = state(828);
	v->a[8843] = 1;
	v->a[8844] = aux_sym_command_repeat1;
	v->a[8845] = state(1314);
	v->a[8846] = 1;
	v->a[8847] = sym_pipeline;
	v->a[8848] = state(1331);
	v->a[8849] = 1;
	v->a[8850] = aux_sym_redirected_statement_repeat2;
	v->a[8851] = state(2252);
	v->a[8852] = 1;
	v->a[8853] = sym__statement_not_pipeline;
	v->a[8854] = state(2369);
	v->a[8855] = 1;
	v->a[8856] = sym__statements;
	v->a[8857] = actions(11);
	v->a[8858] = 2;
	v->a[8859] = anon_sym_while;
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = anon_sym_until;
	v->a[8861] = actions(226);
	v->a[8862] = 2;
	v->a[8863] = anon_sym_LT_AMP_DASH;
	v->a[8864] = anon_sym_GT_AMP_DASH;
	v->a[8865] = actions(228);
	v->a[8866] = 2;
	v->a[8867] = sym_raw_string;
	v->a[8868] = sym_number;
	v->a[8869] = state(294);
	v->a[8870] = 5;
	v->a[8871] = sym_arithmetic_expansion;
	v->a[8872] = sym_string;
	v->a[8873] = sym_simple_expansion;
	v->a[8874] = sym_expansion;
	v->a[8875] = sym_command_substitution;
	v->a[8876] = actions(224);
	v->a[8877] = 8;
	v->a[8878] = anon_sym_LT;
	v->a[8879] = anon_sym_GT;
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = anon_sym_GT_GT;
	v->a[8881] = anon_sym_AMP_GT;
	v->a[8882] = anon_sym_AMP_GT_GT;
	v->a[8883] = anon_sym_LT_AMP;
	v->a[8884] = anon_sym_GT_AMP;
	v->a[8885] = anon_sym_GT_PIPE;
	v->a[8886] = state(1188);
	v->a[8887] = 12;
	v->a[8888] = sym_redirected_statement;
	v->a[8889] = sym_for_statement;
	v->a[8890] = sym_while_statement;
	v->a[8891] = sym_if_statement;
	v->a[8892] = sym_case_statement;
	v->a[8893] = sym_function_definition;
	v->a[8894] = sym_compound_statement;
	v->a[8895] = sym_subshell;
	v->a[8896] = sym_list;
	v->a[8897] = sym_negated_command;
	v->a[8898] = sym_command;
	v->a[8899] = sym__variable_assignments;
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
