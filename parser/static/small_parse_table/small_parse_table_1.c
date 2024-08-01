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
	v->a[100] = anon_sym_GT;
	v->a[101] = anon_sym_GT_GT;
	v->a[102] = state(401);
	v->a[103] = 5;
	v->a[104] = sym_arithmetic_expansion;
	v->a[105] = sym_string;
	v->a[106] = sym_simple_expansion;
	v->a[107] = sym_expansion;
	v->a[108] = sym_command_substitution;
	v->a[109] = state(905);
	v->a[110] = 12;
	v->a[111] = sym_redirected_statement;
	v->a[112] = sym_for_statement;
	v->a[113] = sym_while_statement;
	v->a[114] = sym_if_statement;
	v->a[115] = sym_case_statement;
	v->a[116] = sym_function_definition;
	v->a[117] = sym_compound_statement;
	v->a[118] = sym_subshell;
	v->a[119] = sym_list;
	small_parse_table_6(v);
}

void	small_parse_table_6(t_small_parse_table_array *v)
{
	v->a[120] = sym_negated_command;
	v->a[121] = sym_command;
	v->a[122] = sym__variable_assignments;
	v->a[123] = 34;
	v->a[124] = actions(3);
	v->a[125] = 1;
	v->a[126] = sym_comment;
	v->a[127] = actions(9);
	v->a[128] = 1;
	v->a[129] = anon_sym_for;
	v->a[130] = actions(13);
	v->a[131] = 1;
	v->a[132] = anon_sym_if;
	v->a[133] = actions(15);
	v->a[134] = 1;
	v->a[135] = anon_sym_case;
	v->a[136] = actions(17);
	v->a[137] = 1;
	v->a[138] = anon_sym_LPAREN;
	v->a[139] = actions(19);
	small_parse_table_7(v);
}

void	small_parse_table_7(t_small_parse_table_array *v)
{
	v->a[140] = 1;
	v->a[141] = anon_sym_LBRACE;
	v->a[142] = actions(41);
	v->a[143] = 1;
	v->a[144] = sym_word;
	v->a[145] = actions(45);
	v->a[146] = 1;
	v->a[147] = anon_sym_elif;
	v->a[148] = actions(47);
	v->a[149] = 1;
	v->a[150] = anon_sym_else;
	v->a[151] = actions(49);
	v->a[152] = 1;
	v->a[153] = anon_sym_BANG;
	v->a[154] = actions(53);
	v->a[155] = 1;
	v->a[156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[157] = actions(55);
	v->a[158] = 1;
	v->a[159] = anon_sym_DOLLAR;
	small_parse_table_8(v);
}

void	small_parse_table_8(t_small_parse_table_array *v)
{
	v->a[160] = actions(57);
	v->a[161] = 1;
	v->a[162] = anon_sym_DQUOTE;
	v->a[163] = actions(61);
	v->a[164] = 1;
	v->a[165] = anon_sym_DOLLAR_LBRACE;
	v->a[166] = actions(63);
	v->a[167] = 1;
	v->a[168] = anon_sym_DOLLAR_LPAREN;
	v->a[169] = actions(65);
	v->a[170] = 1;
	v->a[171] = anon_sym_BQUOTE;
	v->a[172] = actions(67);
	v->a[173] = 1;
	v->a[174] = sym_variable_name;
	v->a[175] = actions(69);
	v->a[176] = 1;
	v->a[177] = anon_sym_fi;
	v->a[178] = state(2);
	v->a[179] = 1;
	small_parse_table_9(v);
}

void	small_parse_table_9(t_small_parse_table_array *v)
{
	v->a[180] = aux_sym__terminated_statement;
	v->a[181] = state(185);
	v->a[182] = 1;
	v->a[183] = sym_command_name;
	v->a[184] = state(231);
	v->a[185] = 1;
	v->a[186] = sym_variable_assignment;
	v->a[187] = state(411);
	v->a[188] = 1;
	v->a[189] = aux_sym_command_repeat1;
	v->a[190] = state(551);
	v->a[191] = 1;
	v->a[192] = sym_file_redirect;
	v->a[193] = state(555);
	v->a[194] = 1;
	v->a[195] = sym_concatenation;
	v->a[196] = state(1070);
	v->a[197] = 1;
	v->a[198] = sym_pipeline;
	v->a[199] = state(1126);
	small_parse_table_10(v);
}

/* EOF small_parse_table_1.c */
