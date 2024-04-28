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
	v->a[8800] = 1;
	v->a[8801] = anon_sym_LPAREN;
	v->a[8802] = actions(33);
	v->a[8803] = 1;
	v->a[8804] = anon_sym_LBRACK;
	v->a[8805] = actions(35);
	v->a[8806] = 1;
	v->a[8807] = anon_sym_LBRACK_LBRACK;
	v->a[8808] = actions(45);
	v->a[8809] = 1;
	v->a[8810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8811] = actions(47);
	v->a[8812] = 1;
	v->a[8813] = anon_sym_DOLLAR_LBRACK;
	v->a[8814] = actions(49);
	v->a[8815] = 1;
	v->a[8816] = anon_sym_DOLLAR;
	v->a[8817] = actions(51);
	v->a[8818] = 1;
	v->a[8819] = sym__special_character;
	small_parse_table_441(v);
}

void	small_parse_table_441(t_small_parse_table_array *v)
{
	v->a[8820] = actions(53);
	v->a[8821] = 1;
	v->a[8822] = anon_sym_DQUOTE;
	v->a[8823] = actions(57);
	v->a[8824] = 1;
	v->a[8825] = aux_sym_number_token1;
	v->a[8826] = actions(59);
	v->a[8827] = 1;
	v->a[8828] = aux_sym_number_token2;
	v->a[8829] = actions(61);
	v->a[8830] = 1;
	v->a[8831] = anon_sym_DOLLAR_LBRACE;
	v->a[8832] = actions(63);
	v->a[8833] = 1;
	v->a[8834] = anon_sym_DOLLAR_LPAREN;
	v->a[8835] = actions(65);
	v->a[8836] = 1;
	v->a[8837] = anon_sym_BQUOTE;
	v->a[8838] = actions(67);
	v->a[8839] = 1;
	small_parse_table_442(v);
}

void	small_parse_table_442(t_small_parse_table_array *v)
{
	v->a[8840] = anon_sym_DOLLAR_BQUOTE;
	v->a[8841] = actions(71);
	v->a[8842] = 1;
	v->a[8843] = sym_comment;
	v->a[8844] = actions(75);
	v->a[8845] = 1;
	v->a[8846] = sym_variable_name;
	v->a[8847] = actions(77);
	v->a[8848] = 1;
	v->a[8849] = sym_test_operator;
	v->a[8850] = actions(79);
	v->a[8851] = 1;
	v->a[8852] = sym__brace_start;
	v->a[8853] = actions(1394);
	v->a[8854] = 1;
	v->a[8855] = anon_sym_LT_LT_LT;
	v->a[8856] = actions(1396);
	v->a[8857] = 1;
	v->a[8858] = sym_file_descriptor;
	v->a[8859] = actions(2666);
	small_parse_table_443(v);
}

void	small_parse_table_443(t_small_parse_table_array *v)
{
	v->a[8860] = 1;
	v->a[8861] = sym_word;
	v->a[8862] = state(534);
	v->a[8863] = 1;
	v->a[8864] = sym_command_name;
	v->a[8865] = state(937);
	v->a[8866] = 1;
	v->a[8867] = aux_sym_command_repeat1;
	v->a[8868] = state(1212);
	v->a[8869] = 1;
	v->a[8870] = aux_sym__literal_repeat1;
	v->a[8871] = state(1386);
	v->a[8872] = 1;
	v->a[8873] = sym_concatenation;
	v->a[8874] = state(2122);
	v->a[8875] = 1;
	v->a[8876] = sym_variable_assignment;
	v->a[8877] = state(5026);
	v->a[8878] = 1;
	v->a[8879] = sym_command;
	small_parse_table_444(v);
}

void	small_parse_table_444(t_small_parse_table_array *v)
{
	v->a[8880] = state(6774);
	v->a[8881] = 1;
	v->a[8882] = sym_subscript;
	v->a[8883] = actions(55);
	v->a[8884] = 2;
	v->a[8885] = sym_raw_string;
	v->a[8886] = sym_ansi_c_string;
	v->a[8887] = actions(69);
	v->a[8888] = 2;
	v->a[8889] = anon_sym_LT_LPAREN;
	v->a[8890] = anon_sym_GT_LPAREN;
	v->a[8891] = actions(1392);
	v->a[8892] = 2;
	v->a[8893] = anon_sym_LT_AMP_DASH;
	v->a[8894] = anon_sym_GT_AMP_DASH;
	v->a[8895] = state(3581);
	v->a[8896] = 2;
	v->a[8897] = sym_file_redirect;
	v->a[8898] = sym_herestring_redirect;
	v->a[8899] = state(5014);
	small_parse_table_445(v);
}

/* EOF small_parse_table_88.c */
