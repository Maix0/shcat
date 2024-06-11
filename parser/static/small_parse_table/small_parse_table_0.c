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
	v->a[0] = 36;
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
	v->a[19] = actions(45);
	small_parse_table_1(v);
}

void	small_parse_table_1(t_small_parse_table_array *v)
{
	v->a[20] = 1;
	v->a[21] = sym_word;
	v->a[22] = actions(47);
	v->a[23] = 1;
	v->a[24] = anon_sym_fi;
	v->a[25] = actions(49);
	v->a[26] = 1;
	v->a[27] = anon_sym_elif;
	v->a[28] = actions(51);
	v->a[29] = 1;
	v->a[30] = anon_sym_else;
	v->a[31] = actions(53);
	v->a[32] = 1;
	v->a[33] = anon_sym_BANG;
	v->a[34] = actions(59);
	v->a[35] = 1;
	v->a[36] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37] = actions(61);
	v->a[38] = 1;
	v->a[39] = anon_sym_DOLLAR;
	small_parse_table_2(v);
}

void	small_parse_table_2(t_small_parse_table_array *v)
{
	v->a[40] = actions(63);
	v->a[41] = 1;
	v->a[42] = anon_sym_DQUOTE;
	v->a[43] = actions(67);
	v->a[44] = 1;
	v->a[45] = anon_sym_DOLLAR_LBRACE;
	v->a[46] = actions(69);
	v->a[47] = 1;
	v->a[48] = anon_sym_DOLLAR_LPAREN;
	v->a[49] = actions(71);
	v->a[50] = 1;
	v->a[51] = anon_sym_BQUOTE;
	v->a[52] = actions(73);
	v->a[53] = 1;
	v->a[54] = sym_file_descriptor;
	v->a[55] = actions(75);
	v->a[56] = 1;
	v->a[57] = sym_variable_name;
	v->a[58] = state(7);
	v->a[59] = 1;
	small_parse_table_3(v);
}

void	small_parse_table_3(t_small_parse_table_array *v)
{
	v->a[60] = aux_sym__terminated_statement;
	v->a[61] = state(187);
	v->a[62] = 1;
	v->a[63] = sym_command_name;
	v->a[64] = state(288);
	v->a[65] = 1;
	v->a[66] = sym_variable_assignment;
	v->a[67] = state(647);
	v->a[68] = 1;
	v->a[69] = sym_concatenation;
	v->a[70] = state(736);
	v->a[71] = 1;
	v->a[72] = aux_sym_command_repeat1;
	v->a[73] = state(738);
	v->a[74] = 1;
	v->a[75] = sym_file_redirect;
	v->a[76] = state(1443);
	v->a[77] = 1;
	v->a[78] = sym_pipeline;
	v->a[79] = state(1460);
	small_parse_table_4(v);
}

void	small_parse_table_4(t_small_parse_table_array *v)
{
	v->a[80] = 1;
	v->a[81] = aux_sym_redirected_statement_repeat2;
	v->a[82] = state(2269);
	v->a[83] = 1;
	v->a[84] = sym__statement_not_pipeline;
	v->a[85] = state(2319);
	v->a[86] = 1;
	v->a[87] = sym_else_clause;
	v->a[88] = actions(11);
	v->a[89] = 2;
	v->a[90] = anon_sym_while;
	v->a[91] = anon_sym_until;
	v->a[92] = actions(57);
	v->a[93] = 2;
	v->a[94] = anon_sym_LT_AMP_DASH;
	v->a[95] = anon_sym_GT_AMP_DASH;
	v->a[96] = actions(65);
	v->a[97] = 2;
	v->a[98] = sym_raw_string;
	v->a[99] = sym_number;
	small_parse_table_5(v);
}

/* EOF small_parse_table_0.c */
