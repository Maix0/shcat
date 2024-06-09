/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_0(t_small_parse_table_array *v)
{
	v->a[0] = 38;
	v->a[1] = actions(3);
	v->a[2] = 1;
	v->a[3] = sym_comment;
	v->a[4] = actions(9);
	v->a[5] = 1;
	v->a[6] = anon_sym_for;
	v->a[7] = actions(13);
	v->a[8] = 1;
	v->a[9] = anon_sym_if;
	v->a[10] = actions(15);
	v->a[11] = 1;
	v->a[12] = anon_sym_case;
	v->a[13] = actions(17);
	v->a[14] = 1;
	v->a[15] = anon_sym_LPAREN;
	v->a[16] = actions(19);
	v->a[17] = 1;
	v->a[18] = anon_sym_LBRACE;
	v->a[19] = actions(49);
	small_parse_table_1(v);
}

void	small_parse_table_1(t_small_parse_table_array *v)
{
	v->a[20] = 1;
	v->a[21] = sym_word;
	v->a[22] = actions(51);
	v->a[23] = 1;
	v->a[24] = anon_sym_fi;
	v->a[25] = actions(53);
	v->a[26] = 1;
	v->a[27] = anon_sym_elif;
	v->a[28] = actions(55);
	v->a[29] = 1;
	v->a[30] = anon_sym_else;
	v->a[31] = actions(57);
	v->a[32] = 1;
	v->a[33] = anon_sym_BANG;
	v->a[34] = actions(63);
	v->a[35] = 1;
	v->a[36] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37] = actions(65);
	v->a[38] = 1;
	v->a[39] = anon_sym_DOLLAR;
	small_parse_table_2(v);
}

void	small_parse_table_2(t_small_parse_table_array *v)
{
	v->a[40] = actions(67);
	v->a[41] = 1;
	v->a[42] = anon_sym_DQUOTE;
	v->a[43] = actions(69);
	v->a[44] = 1;
	v->a[45] = sym_raw_string;
	v->a[46] = actions(71);
	v->a[47] = 1;
	v->a[48] = aux_sym_number_token1;
	v->a[49] = actions(73);
	v->a[50] = 1;
	v->a[51] = aux_sym_number_token2;
	v->a[52] = actions(75);
	v->a[53] = 1;
	v->a[54] = anon_sym_DOLLAR_LBRACE;
	v->a[55] = actions(77);
	v->a[56] = 1;
	v->a[57] = anon_sym_DOLLAR_LPAREN;
	v->a[58] = actions(79);
	v->a[59] = 1;
	small_parse_table_3(v);
}

void	small_parse_table_3(t_small_parse_table_array *v)
{
	v->a[60] = anon_sym_BQUOTE;
	v->a[61] = actions(81);
	v->a[62] = 1;
	v->a[63] = sym_file_descriptor;
	v->a[64] = actions(83);
	v->a[65] = 1;
	v->a[66] = sym_variable_name;
	v->a[67] = state(4);
	v->a[68] = 1;
	v->a[69] = aux_sym__terminated_statement;
	v->a[70] = state(190);
	v->a[71] = 1;
	v->a[72] = sym_command_name;
	v->a[73] = state(299);
	v->a[74] = 1;
	v->a[75] = sym_variable_assignment;
	v->a[76] = state(582);
	v->a[77] = 1;
	v->a[78] = sym_concatenation;
	v->a[79] = state(587);
	small_parse_table_4(v);
}

void	small_parse_table_4(t_small_parse_table_array *v)
{
	v->a[80] = 1;
	v->a[81] = aux_sym_command_repeat1;
	v->a[82] = state(718);
	v->a[83] = 1;
	v->a[84] = sym_file_redirect;
	v->a[85] = state(1212);
	v->a[86] = 1;
	v->a[87] = sym_pipeline;
	v->a[88] = state(1213);
	v->a[89] = 1;
	v->a[90] = aux_sym_redirected_statement_repeat2;
	v->a[91] = state(2035);
	v->a[92] = 1;
	v->a[93] = sym__statement_not_pipeline;
	v->a[94] = state(2210);
	v->a[95] = 1;
	v->a[96] = sym_else_clause;
	v->a[97] = actions(11);
	v->a[98] = 2;
	v->a[99] = anon_sym_while;
	small_parse_table_5(v);
}

/* EOF small_parse_table_0.c */
