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
	v->a[100] = sym_string;
	v->a[101] = sym_simple_expansion;
	v->a[102] = sym_expansion;
	v->a[103] = sym_command_substitution;
	v->a[104] = actions(51);
	v->a[105] = 7;
	v->a[106] = anon_sym_LT;
	v->a[107] = anon_sym_GT;
	v->a[108] = anon_sym_GT_GT;
	v->a[109] = anon_sym_LT_AMP;
	v->a[110] = anon_sym_GT_AMP;
	v->a[111] = anon_sym_GT_PIPE;
	v->a[112] = anon_sym_LT_GT;
	v->a[113] = state(949);
	v->a[114] = 12;
	v->a[115] = sym_redirected_statement;
	v->a[116] = sym_for_statement;
	v->a[117] = sym_while_statement;
	v->a[118] = sym_if_statement;
	v->a[119] = sym_case_statement;
	small_parse_table_6(v);
}

void	small_parse_table_6(t_small_parse_table_array *v)
{
	v->a[120] = sym_function_definition;
	v->a[121] = sym_compound_statement;
	v->a[122] = sym_subshell;
	v->a[123] = sym_list;
	v->a[124] = sym_negated_command;
	v->a[125] = sym_command;
	v->a[126] = sym__variable_assignments;
	v->a[127] = 34;
	v->a[128] = actions(3);
	v->a[129] = 1;
	v->a[130] = sym_comment;
	v->a[131] = actions(9);
	v->a[132] = 1;
	v->a[133] = anon_sym_for;
	v->a[134] = actions(13);
	v->a[135] = 1;
	v->a[136] = anon_sym_if;
	v->a[137] = actions(15);
	v->a[138] = 1;
	v->a[139] = anon_sym_case;
	small_parse_table_7(v);
}

void	small_parse_table_7(t_small_parse_table_array *v)
{
	v->a[140] = actions(17);
	v->a[141] = 1;
	v->a[142] = anon_sym_LPAREN;
	v->a[143] = actions(19);
	v->a[144] = 1;
	v->a[145] = anon_sym_LBRACE;
	v->a[146] = actions(41);
	v->a[147] = 1;
	v->a[148] = sym_word;
	v->a[149] = actions(45);
	v->a[150] = 1;
	v->a[151] = anon_sym_elif;
	v->a[152] = actions(47);
	v->a[153] = 1;
	v->a[154] = anon_sym_else;
	v->a[155] = actions(49);
	v->a[156] = 1;
	v->a[157] = anon_sym_BANG;
	v->a[158] = actions(53);
	v->a[159] = 1;
	small_parse_table_8(v);
}

void	small_parse_table_8(t_small_parse_table_array *v)
{
	v->a[160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[161] = actions(55);
	v->a[162] = 1;
	v->a[163] = anon_sym_DOLLAR;
	v->a[164] = actions(57);
	v->a[165] = 1;
	v->a[166] = anon_sym_DQUOTE;
	v->a[167] = actions(61);
	v->a[168] = 1;
	v->a[169] = anon_sym_DOLLAR_LBRACE;
	v->a[170] = actions(63);
	v->a[171] = 1;
	v->a[172] = anon_sym_DOLLAR_LPAREN;
	v->a[173] = actions(65);
	v->a[174] = 1;
	v->a[175] = anon_sym_BQUOTE;
	v->a[176] = actions(67);
	v->a[177] = 1;
	v->a[178] = sym_variable_name;
	v->a[179] = actions(69);
	small_parse_table_9(v);
}

void	small_parse_table_9(t_small_parse_table_array *v)
{
	v->a[180] = 1;
	v->a[181] = anon_sym_fi;
	v->a[182] = state(24);
	v->a[183] = 1;
	v->a[184] = aux_sym__terminated_statement;
	v->a[185] = state(271);
	v->a[186] = 1;
	v->a[187] = sym_command_name;
	v->a[188] = state(291);
	v->a[189] = 1;
	v->a[190] = sym_variable_assignment;
	v->a[191] = state(482);
	v->a[192] = 1;
	v->a[193] = aux_sym_command_repeat1;
	v->a[194] = state(600);
	v->a[195] = 1;
	v->a[196] = sym_file_redirect;
	v->a[197] = state(602);
	v->a[198] = 1;
	v->a[199] = sym_concatenation;
	small_parse_table_10(v);
}

/* EOF small_parse_table_1.c */
