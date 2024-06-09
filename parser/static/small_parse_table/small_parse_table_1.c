/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5(t_small_parse_table_array *v)
{
	v->a[100] = anon_sym_until;
	v->a[101] = actions(61);
	v->a[102] = 2;
	v->a[103] = anon_sym_LT_AMP_DASH;
	v->a[104] = anon_sym_GT_AMP_DASH;
	v->a[105] = state(1905);
	v->a[106] = 2;
	v->a[107] = sym_elif_clause;
	v->a[108] = aux_sym_if_statement_repeat1;
	v->a[109] = state(397);
	v->a[110] = 6;
	v->a[111] = sym_arithmetic_expansion;
	v->a[112] = sym_string;
	v->a[113] = sym_number;
	v->a[114] = sym_simple_expansion;
	v->a[115] = sym_expansion;
	v->a[116] = sym_command_substitution;
	v->a[117] = actions(59);
	v->a[118] = 8;
	v->a[119] = anon_sym_LT;
	small_parse_table_6(v);
}

void	small_parse_table_6(t_small_parse_table_array *v)
{
	v->a[120] = anon_sym_GT;
	v->a[121] = anon_sym_GT_GT;
	v->a[122] = anon_sym_AMP_GT;
	v->a[123] = anon_sym_AMP_GT_GT;
	v->a[124] = anon_sym_LT_AMP;
	v->a[125] = anon_sym_GT_AMP;
	v->a[126] = anon_sym_GT_PIPE;
	v->a[127] = state(1183);
	v->a[128] = 12;
	v->a[129] = sym_redirected_statement;
	v->a[130] = sym_for_statement;
	v->a[131] = sym_while_statement;
	v->a[132] = sym_if_statement;
	v->a[133] = sym_case_statement;
	v->a[134] = sym_function_definition;
	v->a[135] = sym_compound_statement;
	v->a[136] = sym_subshell;
	v->a[137] = sym_list;
	v->a[138] = sym_negated_command;
	v->a[139] = sym_command;
	small_parse_table_7(v);
}

void	small_parse_table_7(t_small_parse_table_array *v)
{
	v->a[140] = sym_variable_assignments;
	v->a[141] = 38;
	v->a[142] = actions(3);
	v->a[143] = 1;
	v->a[144] = sym_comment;
	v->a[145] = actions(9);
	v->a[146] = 1;
	v->a[147] = anon_sym_for;
	v->a[148] = actions(13);
	v->a[149] = 1;
	v->a[150] = anon_sym_if;
	v->a[151] = actions(15);
	v->a[152] = 1;
	v->a[153] = anon_sym_case;
	v->a[154] = actions(17);
	v->a[155] = 1;
	v->a[156] = anon_sym_LPAREN;
	v->a[157] = actions(19);
	v->a[158] = 1;
	v->a[159] = anon_sym_LBRACE;
	small_parse_table_8(v);
}

void	small_parse_table_8(t_small_parse_table_array *v)
{
	v->a[160] = actions(49);
	v->a[161] = 1;
	v->a[162] = sym_word;
	v->a[163] = actions(53);
	v->a[164] = 1;
	v->a[165] = anon_sym_elif;
	v->a[166] = actions(55);
	v->a[167] = 1;
	v->a[168] = anon_sym_else;
	v->a[169] = actions(57);
	v->a[170] = 1;
	v->a[171] = anon_sym_BANG;
	v->a[172] = actions(63);
	v->a[173] = 1;
	v->a[174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[175] = actions(65);
	v->a[176] = 1;
	v->a[177] = anon_sym_DOLLAR;
	v->a[178] = actions(67);
	v->a[179] = 1;
	small_parse_table_9(v);
}

void	small_parse_table_9(t_small_parse_table_array *v)
{
	v->a[180] = anon_sym_DQUOTE;
	v->a[181] = actions(69);
	v->a[182] = 1;
	v->a[183] = sym_raw_string;
	v->a[184] = actions(71);
	v->a[185] = 1;
	v->a[186] = aux_sym_number_token1;
	v->a[187] = actions(73);
	v->a[188] = 1;
	v->a[189] = aux_sym_number_token2;
	v->a[190] = actions(75);
	v->a[191] = 1;
	v->a[192] = anon_sym_DOLLAR_LBRACE;
	v->a[193] = actions(77);
	v->a[194] = 1;
	v->a[195] = anon_sym_DOLLAR_LPAREN;
	v->a[196] = actions(79);
	v->a[197] = 1;
	v->a[198] = anon_sym_BQUOTE;
	v->a[199] = actions(81);
	small_parse_table_10(v);
}

/* EOF small_parse_table_1.c */
