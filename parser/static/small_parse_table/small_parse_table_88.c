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
	v->a[8800] = anon_sym_BQUOTE;
	v->a[8801] = actions(73);
	v->a[8802] = 1;
	v->a[8803] = sym_file_descriptor;
	v->a[8804] = actions(75);
	v->a[8805] = 1;
	v->a[8806] = sym_variable_name;
	v->a[8807] = actions(256);
	v->a[8808] = 1;
	v->a[8809] = anon_sym_done;
	v->a[8810] = state(35);
	v->a[8811] = 1;
	v->a[8812] = aux_sym__terminated_statement;
	v->a[8813] = state(189);
	v->a[8814] = 1;
	v->a[8815] = sym_command_name;
	v->a[8816] = state(291);
	v->a[8817] = 1;
	v->a[8818] = sym_variable_assignment;
	v->a[8819] = state(650);
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = 1;
	v->a[8821] = sym_concatenation;
	v->a[8822] = state(712);
	v->a[8823] = 1;
	v->a[8824] = sym_file_redirect;
	v->a[8825] = state(713);
	v->a[8826] = 1;
	v->a[8827] = aux_sym_command_repeat1;
	v->a[8828] = state(1251);
	v->a[8829] = 1;
	v->a[8830] = sym_pipeline;
	v->a[8831] = state(1333);
	v->a[8832] = 1;
	v->a[8833] = aux_sym_redirected_statement_repeat2;
	v->a[8834] = state(2103);
	v->a[8835] = 1;
	v->a[8836] = sym__statement_not_pipeline;
	v->a[8837] = actions(11);
	v->a[8838] = 2;
	v->a[8839] = anon_sym_while;
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = anon_sym_until;
	v->a[8841] = actions(57);
	v->a[8842] = 2;
	v->a[8843] = anon_sym_LT_AMP_DASH;
	v->a[8844] = anon_sym_GT_AMP_DASH;
	v->a[8845] = actions(65);
	v->a[8846] = 2;
	v->a[8847] = sym_raw_string;
	v->a[8848] = sym_number;
	v->a[8849] = state(443);
	v->a[8850] = 5;
	v->a[8851] = sym_arithmetic_expansion;
	v->a[8852] = sym_string;
	v->a[8853] = sym_simple_expansion;
	v->a[8854] = sym_expansion;
	v->a[8855] = sym_command_substitution;
	v->a[8856] = actions(55);
	v->a[8857] = 6;
	v->a[8858] = anon_sym_LT;
	v->a[8859] = anon_sym_GT;
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = anon_sym_GT_GT;
	v->a[8861] = anon_sym_LT_AMP;
	v->a[8862] = anon_sym_GT_AMP;
	v->a[8863] = anon_sym_GT_PIPE;
	v->a[8864] = state(1094);
	v->a[8865] = 12;
	v->a[8866] = sym_redirected_statement;
	v->a[8867] = sym_for_statement;
	v->a[8868] = sym_while_statement;
	v->a[8869] = sym_if_statement;
	v->a[8870] = sym_case_statement;
	v->a[8871] = sym_function_definition;
	v->a[8872] = sym_compound_statement;
	v->a[8873] = sym_subshell;
	v->a[8874] = sym_list;
	v->a[8875] = sym_negated_command;
	v->a[8876] = sym_command;
	v->a[8877] = sym__variable_assignments;
	v->a[8878] = 32;
	v->a[8879] = actions(3);
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = 1;
	v->a[8881] = sym_comment;
	v->a[8882] = actions(9);
	v->a[8883] = 1;
	v->a[8884] = anon_sym_for;
	v->a[8885] = actions(13);
	v->a[8886] = 1;
	v->a[8887] = anon_sym_if;
	v->a[8888] = actions(15);
	v->a[8889] = 1;
	v->a[8890] = anon_sym_case;
	v->a[8891] = actions(17);
	v->a[8892] = 1;
	v->a[8893] = anon_sym_LPAREN;
	v->a[8894] = actions(19);
	v->a[8895] = 1;
	v->a[8896] = anon_sym_LBRACE;
	v->a[8897] = actions(59);
	v->a[8898] = 1;
	v->a[8899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
