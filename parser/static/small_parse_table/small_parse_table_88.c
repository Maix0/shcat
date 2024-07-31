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
	v->a[8800] = anon_sym_case;
	v->a[8801] = actions(17);
	v->a[8802] = 1;
	v->a[8803] = anon_sym_LPAREN;
	v->a[8804] = actions(19);
	v->a[8805] = 1;
	v->a[8806] = anon_sym_LBRACE;
	v->a[8807] = actions(41);
	v->a[8808] = 1;
	v->a[8809] = sym_word;
	v->a[8810] = actions(49);
	v->a[8811] = 1;
	v->a[8812] = anon_sym_BANG;
	v->a[8813] = actions(53);
	v->a[8814] = 1;
	v->a[8815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8816] = actions(55);
	v->a[8817] = 1;
	v->a[8818] = anon_sym_DOLLAR;
	v->a[8819] = actions(57);
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = 1;
	v->a[8821] = anon_sym_DQUOTE;
	v->a[8822] = actions(61);
	v->a[8823] = 1;
	v->a[8824] = anon_sym_DOLLAR_LBRACE;
	v->a[8825] = actions(63);
	v->a[8826] = 1;
	v->a[8827] = anon_sym_DOLLAR_LPAREN;
	v->a[8828] = actions(65);
	v->a[8829] = 1;
	v->a[8830] = anon_sym_BQUOTE;
	v->a[8831] = actions(67);
	v->a[8832] = 1;
	v->a[8833] = sym_variable_name;
	v->a[8834] = actions(230);
	v->a[8835] = 1;
	v->a[8836] = anon_sym_RBRACE;
	v->a[8837] = state(95);
	v->a[8838] = 1;
	v->a[8839] = aux_sym__terminated_statement;
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = state(271);
	v->a[8841] = 1;
	v->a[8842] = sym_command_name;
	v->a[8843] = state(302);
	v->a[8844] = 1;
	v->a[8845] = sym_variable_assignment;
	v->a[8846] = state(482);
	v->a[8847] = 1;
	v->a[8848] = aux_sym_command_repeat1;
	v->a[8849] = state(600);
	v->a[8850] = 1;
	v->a[8851] = sym_file_redirect;
	v->a[8852] = state(602);
	v->a[8853] = 1;
	v->a[8854] = sym_concatenation;
	v->a[8855] = state(980);
	v->a[8856] = 1;
	v->a[8857] = sym_pipeline;
	v->a[8858] = state(1068);
	v->a[8859] = 1;
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = aux_sym_redirected_statement_repeat2;
	v->a[8861] = state(1609);
	v->a[8862] = 1;
	v->a[8863] = sym__statement_not_pipeline;
	v->a[8864] = actions(11);
	v->a[8865] = 2;
	v->a[8866] = anon_sym_while;
	v->a[8867] = anon_sym_until;
	v->a[8868] = actions(59);
	v->a[8869] = 2;
	v->a[8870] = sym_raw_string;
	v->a[8871] = sym_number;
	v->a[8872] = state(425);
	v->a[8873] = 5;
	v->a[8874] = sym_arithmetic_expansion;
	v->a[8875] = sym_string;
	v->a[8876] = sym_simple_expansion;
	v->a[8877] = sym_expansion;
	v->a[8878] = sym_command_substitution;
	v->a[8879] = actions(51);
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = 7;
	v->a[8881] = anon_sym_LT;
	v->a[8882] = anon_sym_GT;
	v->a[8883] = anon_sym_GT_GT;
	v->a[8884] = anon_sym_LT_AMP;
	v->a[8885] = anon_sym_GT_AMP;
	v->a[8886] = anon_sym_GT_PIPE;
	v->a[8887] = anon_sym_LT_GT;
	v->a[8888] = state(956);
	v->a[8889] = 12;
	v->a[8890] = sym_redirected_statement;
	v->a[8891] = sym_for_statement;
	v->a[8892] = sym_while_statement;
	v->a[8893] = sym_if_statement;
	v->a[8894] = sym_case_statement;
	v->a[8895] = sym_function_definition;
	v->a[8896] = sym_compound_statement;
	v->a[8897] = sym_subshell;
	v->a[8898] = sym_list;
	v->a[8899] = sym_negated_command;
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
