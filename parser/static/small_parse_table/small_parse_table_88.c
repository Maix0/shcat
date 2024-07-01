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
	v->a[8800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8801] = actions(57);
	v->a[8802] = 1;
	v->a[8803] = anon_sym_DOLLAR;
	v->a[8804] = actions(59);
	v->a[8805] = 1;
	v->a[8806] = anon_sym_DQUOTE;
	v->a[8807] = actions(63);
	v->a[8808] = 1;
	v->a[8809] = anon_sym_DOLLAR_LBRACE;
	v->a[8810] = actions(65);
	v->a[8811] = 1;
	v->a[8812] = anon_sym_DOLLAR_LPAREN;
	v->a[8813] = actions(67);
	v->a[8814] = 1;
	v->a[8815] = anon_sym_BQUOTE;
	v->a[8816] = actions(69);
	v->a[8817] = 1;
	v->a[8818] = sym_file_descriptor;
	v->a[8819] = actions(71);
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = 1;
	v->a[8821] = sym_variable_name;
	v->a[8822] = actions(229);
	v->a[8823] = 1;
	v->a[8824] = sym_word;
	v->a[8825] = actions(231);
	v->a[8826] = 1;
	v->a[8827] = anon_sym_BANG;
	v->a[8828] = state(122);
	v->a[8829] = 1;
	v->a[8830] = aux_sym__statements_repeat1;
	v->a[8831] = state(179);
	v->a[8832] = 1;
	v->a[8833] = sym_command_name;
	v->a[8834] = state(302);
	v->a[8835] = 1;
	v->a[8836] = sym_variable_assignment;
	v->a[8837] = state(603);
	v->a[8838] = 1;
	v->a[8839] = sym_concatenation;
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = state(658);
	v->a[8841] = 1;
	v->a[8842] = aux_sym_command_repeat1;
	v->a[8843] = state(764);
	v->a[8844] = 1;
	v->a[8845] = sym_file_redirect;
	v->a[8846] = state(1052);
	v->a[8847] = 1;
	v->a[8848] = sym_pipeline;
	v->a[8849] = state(1190);
	v->a[8850] = 1;
	v->a[8851] = aux_sym_redirected_statement_repeat2;
	v->a[8852] = state(1890);
	v->a[8853] = 1;
	v->a[8854] = sym__statement_not_pipeline;
	v->a[8855] = state(2002);
	v->a[8856] = 1;
	v->a[8857] = sym__statements;
	v->a[8858] = actions(11);
	v->a[8859] = 2;
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = anon_sym_while;
	v->a[8861] = anon_sym_until;
	v->a[8862] = actions(61);
	v->a[8863] = 2;
	v->a[8864] = sym_raw_string;
	v->a[8865] = sym_number;
	v->a[8866] = state(436);
	v->a[8867] = 5;
	v->a[8868] = sym_arithmetic_expansion;
	v->a[8869] = sym_string;
	v->a[8870] = sym_simple_expansion;
	v->a[8871] = sym_expansion;
	v->a[8872] = sym_command_substitution;
	v->a[8873] = actions(53);
	v->a[8874] = 7;
	v->a[8875] = anon_sym_LT;
	v->a[8876] = anon_sym_GT;
	v->a[8877] = anon_sym_GT_GT;
	v->a[8878] = anon_sym_LT_AMP;
	v->a[8879] = anon_sym_GT_AMP;
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = anon_sym_GT_PIPE;
	v->a[8881] = anon_sym_LT_GT;
	v->a[8882] = state(967);
	v->a[8883] = 12;
	v->a[8884] = sym_redirected_statement;
	v->a[8885] = sym_for_statement;
	v->a[8886] = sym_while_statement;
	v->a[8887] = sym_if_statement;
	v->a[8888] = sym_case_statement;
	v->a[8889] = sym_function_definition;
	v->a[8890] = sym_compound_statement;
	v->a[8891] = sym_subshell;
	v->a[8892] = sym_list;
	v->a[8893] = sym_negated_command;
	v->a[8894] = sym_command;
	v->a[8895] = sym__variable_assignments;
	v->a[8896] = 31;
	v->a[8897] = actions(3);
	v->a[8898] = 1;
	v->a[8899] = sym_comment;
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
