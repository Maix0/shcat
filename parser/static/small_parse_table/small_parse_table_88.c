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
	v->a[8800] = state(1031);
	v->a[8801] = 12;
	v->a[8802] = sym_redirected_statement;
	v->a[8803] = sym_for_statement;
	v->a[8804] = sym_while_statement;
	v->a[8805] = sym_if_statement;
	v->a[8806] = sym_case_statement;
	v->a[8807] = sym_function_definition;
	v->a[8808] = sym_compound_statement;
	v->a[8809] = sym_subshell;
	v->a[8810] = sym_list;
	v->a[8811] = sym_negated_command;
	v->a[8812] = sym_command;
	v->a[8813] = sym_variable_assignments;
	v->a[8814] = 34;
	v->a[8815] = actions(3);
	v->a[8816] = 1;
	v->a[8817] = sym_comment;
	v->a[8818] = actions(9);
	v->a[8819] = 1;
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = anon_sym_for;
	v->a[8821] = actions(13);
	v->a[8822] = 1;
	v->a[8823] = anon_sym_if;
	v->a[8824] = actions(15);
	v->a[8825] = 1;
	v->a[8826] = anon_sym_case;
	v->a[8827] = actions(17);
	v->a[8828] = 1;
	v->a[8829] = anon_sym_LPAREN;
	v->a[8830] = actions(19);
	v->a[8831] = 1;
	v->a[8832] = anon_sym_LBRACE;
	v->a[8833] = actions(49);
	v->a[8834] = 1;
	v->a[8835] = sym_word;
	v->a[8836] = actions(57);
	v->a[8837] = 1;
	v->a[8838] = anon_sym_BANG;
	v->a[8839] = actions(63);
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = 1;
	v->a[8841] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8842] = actions(65);
	v->a[8843] = 1;
	v->a[8844] = anon_sym_DOLLAR;
	v->a[8845] = actions(67);
	v->a[8846] = 1;
	v->a[8847] = anon_sym_DQUOTE;
	v->a[8848] = actions(69);
	v->a[8849] = 1;
	v->a[8850] = sym_raw_string;
	v->a[8851] = actions(71);
	v->a[8852] = 1;
	v->a[8853] = aux_sym_number_token1;
	v->a[8854] = actions(73);
	v->a[8855] = 1;
	v->a[8856] = aux_sym_number_token2;
	v->a[8857] = actions(75);
	v->a[8858] = 1;
	v->a[8859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = actions(77);
	v->a[8861] = 1;
	v->a[8862] = anon_sym_DOLLAR_LPAREN;
	v->a[8863] = actions(79);
	v->a[8864] = 1;
	v->a[8865] = anon_sym_BQUOTE;
	v->a[8866] = actions(81);
	v->a[8867] = 1;
	v->a[8868] = sym_file_descriptor;
	v->a[8869] = actions(83);
	v->a[8870] = 1;
	v->a[8871] = sym_variable_name;
	v->a[8872] = actions(268);
	v->a[8873] = 1;
	v->a[8874] = anon_sym_fi;
	v->a[8875] = state(86);
	v->a[8876] = 1;
	v->a[8877] = aux_sym__terminated_statement;
	v->a[8878] = state(190);
	v->a[8879] = 1;
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = sym_command_name;
	v->a[8881] = state(307);
	v->a[8882] = 1;
	v->a[8883] = sym_variable_assignment;
	v->a[8884] = state(582);
	v->a[8885] = 1;
	v->a[8886] = sym_concatenation;
	v->a[8887] = state(587);
	v->a[8888] = 1;
	v->a[8889] = aux_sym_command_repeat1;
	v->a[8890] = state(718);
	v->a[8891] = 1;
	v->a[8892] = sym_file_redirect;
	v->a[8893] = state(1213);
	v->a[8894] = 1;
	v->a[8895] = aux_sym_redirected_statement_repeat2;
	v->a[8896] = state(1238);
	v->a[8897] = 1;
	v->a[8898] = sym_pipeline;
	v->a[8899] = state(2035);
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
