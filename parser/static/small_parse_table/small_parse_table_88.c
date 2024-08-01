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
	v->a[8800] = sym_string;
	v->a[8801] = sym_simple_expansion;
	v->a[8802] = sym_expansion;
	v->a[8803] = sym_command_substitution;
	v->a[8804] = state(877);
	v->a[8805] = 12;
	v->a[8806] = sym_redirected_statement;
	v->a[8807] = sym_for_statement;
	v->a[8808] = sym_while_statement;
	v->a[8809] = sym_if_statement;
	v->a[8810] = sym_case_statement;
	v->a[8811] = sym_function_definition;
	v->a[8812] = sym_compound_statement;
	v->a[8813] = sym_subshell;
	v->a[8814] = sym_list;
	v->a[8815] = sym_negated_command;
	v->a[8816] = sym_command;
	v->a[8817] = sym__variable_assignments;
	v->a[8818] = 30;
	v->a[8819] = actions(3);
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = 1;
	v->a[8821] = sym_comment;
	v->a[8822] = actions(9);
	v->a[8823] = 1;
	v->a[8824] = anon_sym_for;
	v->a[8825] = actions(13);
	v->a[8826] = 1;
	v->a[8827] = anon_sym_if;
	v->a[8828] = actions(15);
	v->a[8829] = 1;
	v->a[8830] = anon_sym_case;
	v->a[8831] = actions(17);
	v->a[8832] = 1;
	v->a[8833] = anon_sym_LPAREN;
	v->a[8834] = actions(19);
	v->a[8835] = 1;
	v->a[8836] = anon_sym_LBRACE;
	v->a[8837] = actions(53);
	v->a[8838] = 1;
	v->a[8839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = actions(55);
	v->a[8841] = 1;
	v->a[8842] = anon_sym_DOLLAR;
	v->a[8843] = actions(57);
	v->a[8844] = 1;
	v->a[8845] = anon_sym_DQUOTE;
	v->a[8846] = actions(61);
	v->a[8847] = 1;
	v->a[8848] = anon_sym_DOLLAR_LBRACE;
	v->a[8849] = actions(63);
	v->a[8850] = 1;
	v->a[8851] = anon_sym_DOLLAR_LPAREN;
	v->a[8852] = actions(65);
	v->a[8853] = 1;
	v->a[8854] = anon_sym_BQUOTE;
	v->a[8855] = actions(67);
	v->a[8856] = 1;
	v->a[8857] = sym_variable_name;
	v->a[8858] = actions(204);
	v->a[8859] = 1;
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = sym_word;
	v->a[8861] = actions(206);
	v->a[8862] = 1;
	v->a[8863] = anon_sym_BANG;
	v->a[8864] = state(116);
	v->a[8865] = 1;
	v->a[8866] = aux_sym__statements_repeat1;
	v->a[8867] = state(179);
	v->a[8868] = 1;
	v->a[8869] = sym_command_name;
	v->a[8870] = state(208);
	v->a[8871] = 1;
	v->a[8872] = sym_variable_assignment;
	v->a[8873] = state(385);
	v->a[8874] = 1;
	v->a[8875] = aux_sym_command_repeat1;
	v->a[8876] = state(555);
	v->a[8877] = 1;
	v->a[8878] = sym_concatenation;
	v->a[8879] = state(599);
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = 1;
	v->a[8881] = sym_file_redirect;
	v->a[8882] = state(969);
	v->a[8883] = 1;
	v->a[8884] = sym_pipeline;
	v->a[8885] = state(1006);
	v->a[8886] = 1;
	v->a[8887] = aux_sym_redirected_statement_repeat2;
	v->a[8888] = state(1560);
	v->a[8889] = 1;
	v->a[8890] = sym__statement_not_pipeline;
	v->a[8891] = state(1709);
	v->a[8892] = 1;
	v->a[8893] = sym__statements;
	v->a[8894] = actions(11);
	v->a[8895] = 2;
	v->a[8896] = anon_sym_while;
	v->a[8897] = anon_sym_until;
	v->a[8898] = actions(59);
	v->a[8899] = 2;
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
