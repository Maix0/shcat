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
	v->a[100] = state(2151);
	v->a[101] = 2;
	v->a[102] = sym_elif_clause;
	v->a[103] = aux_sym_if_statement_repeat1;
	v->a[104] = state(394);
	v->a[105] = 5;
	v->a[106] = sym_arithmetic_expansion;
	v->a[107] = sym_string;
	v->a[108] = sym_simple_expansion;
	v->a[109] = sym_expansion;
	v->a[110] = sym_command_substitution;
	v->a[111] = actions(55);
	v->a[112] = 8;
	v->a[113] = anon_sym_LT;
	v->a[114] = anon_sym_GT;
	v->a[115] = anon_sym_GT_GT;
	v->a[116] = anon_sym_AMP_GT;
	v->a[117] = anon_sym_AMP_GT_GT;
	v->a[118] = anon_sym_LT_AMP;
	v->a[119] = anon_sym_GT_AMP;
	small_parse_table_6(v);
}

void	small_parse_table_6(t_small_parse_table_array *v)
{
	v->a[120] = anon_sym_GT_PIPE;
	v->a[121] = state(1413);
	v->a[122] = 12;
	v->a[123] = sym_redirected_statement;
	v->a[124] = sym_for_statement;
	v->a[125] = sym_while_statement;
	v->a[126] = sym_if_statement;
	v->a[127] = sym_case_statement;
	v->a[128] = sym_function_definition;
	v->a[129] = sym_compound_statement;
	v->a[130] = sym_subshell;
	v->a[131] = sym_list;
	v->a[132] = sym_negated_command;
	v->a[133] = sym_command;
	v->a[134] = sym_variable_assignments;
	v->a[135] = 36;
	v->a[136] = actions(3);
	v->a[137] = 1;
	v->a[138] = sym_comment;
	v->a[139] = actions(9);
	small_parse_table_7(v);
}

void	small_parse_table_7(t_small_parse_table_array *v)
{
	v->a[140] = 1;
	v->a[141] = anon_sym_for;
	v->a[142] = actions(13);
	v->a[143] = 1;
	v->a[144] = anon_sym_if;
	v->a[145] = actions(15);
	v->a[146] = 1;
	v->a[147] = anon_sym_case;
	v->a[148] = actions(17);
	v->a[149] = 1;
	v->a[150] = anon_sym_LPAREN;
	v->a[151] = actions(19);
	v->a[152] = 1;
	v->a[153] = anon_sym_LBRACE;
	v->a[154] = actions(45);
	v->a[155] = 1;
	v->a[156] = sym_word;
	v->a[157] = actions(49);
	v->a[158] = 1;
	v->a[159] = anon_sym_elif;
	small_parse_table_8(v);
}

void	small_parse_table_8(t_small_parse_table_array *v)
{
	v->a[160] = actions(51);
	v->a[161] = 1;
	v->a[162] = anon_sym_else;
	v->a[163] = actions(53);
	v->a[164] = 1;
	v->a[165] = anon_sym_BANG;
	v->a[166] = actions(59);
	v->a[167] = 1;
	v->a[168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[169] = actions(61);
	v->a[170] = 1;
	v->a[171] = anon_sym_DOLLAR;
	v->a[172] = actions(63);
	v->a[173] = 1;
	v->a[174] = anon_sym_DQUOTE;
	v->a[175] = actions(67);
	v->a[176] = 1;
	v->a[177] = anon_sym_DOLLAR_LBRACE;
	v->a[178] = actions(69);
	v->a[179] = 1;
	small_parse_table_9(v);
}

void	small_parse_table_9(t_small_parse_table_array *v)
{
	v->a[180] = anon_sym_DOLLAR_LPAREN;
	v->a[181] = actions(71);
	v->a[182] = 1;
	v->a[183] = anon_sym_BQUOTE;
	v->a[184] = actions(73);
	v->a[185] = 1;
	v->a[186] = sym_file_descriptor;
	v->a[187] = actions(75);
	v->a[188] = 1;
	v->a[189] = sym_variable_name;
	v->a[190] = actions(77);
	v->a[191] = 1;
	v->a[192] = anon_sym_fi;
	v->a[193] = state(4);
	v->a[194] = 1;
	v->a[195] = aux_sym__terminated_statement;
	v->a[196] = state(187);
	v->a[197] = 1;
	v->a[198] = sym_command_name;
	v->a[199] = state(288);
	small_parse_table_10(v);
}

/* EOF small_parse_table_1.c */
