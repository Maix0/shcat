/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_141.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_705(t_small_parse_table_array *v)
{
	v->a[14100] = sym_command;
	v->a[14101] = sym__variable_assignments;
	v->a[14102] = 28;
	v->a[14103] = actions(3);
	v->a[14104] = 1;
	v->a[14105] = sym_comment;
	v->a[14106] = actions(9);
	v->a[14107] = 1;
	v->a[14108] = anon_sym_for;
	v->a[14109] = actions(13);
	v->a[14110] = 1;
	v->a[14111] = anon_sym_if;
	v->a[14112] = actions(15);
	v->a[14113] = 1;
	v->a[14114] = anon_sym_case;
	v->a[14115] = actions(17);
	v->a[14116] = 1;
	v->a[14117] = anon_sym_LPAREN;
	v->a[14118] = actions(19);
	v->a[14119] = 1;
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = anon_sym_LBRACE;
	v->a[14121] = actions(41);
	v->a[14122] = 1;
	v->a[14123] = sym_word;
	v->a[14124] = actions(49);
	v->a[14125] = 1;
	v->a[14126] = anon_sym_BANG;
	v->a[14127] = actions(53);
	v->a[14128] = 1;
	v->a[14129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14130] = actions(55);
	v->a[14131] = 1;
	v->a[14132] = anon_sym_DOLLAR;
	v->a[14133] = actions(57);
	v->a[14134] = 1;
	v->a[14135] = anon_sym_DQUOTE;
	v->a[14136] = actions(61);
	v->a[14137] = 1;
	v->a[14138] = anon_sym_DOLLAR_LBRACE;
	v->a[14139] = actions(63);
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = 1;
	v->a[14141] = anon_sym_DOLLAR_LPAREN;
	v->a[14142] = actions(65);
	v->a[14143] = 1;
	v->a[14144] = anon_sym_BQUOTE;
	v->a[14145] = actions(67);
	v->a[14146] = 1;
	v->a[14147] = sym_variable_name;
	v->a[14148] = state(185);
	v->a[14149] = 1;
	v->a[14150] = sym_command_name;
	v->a[14151] = state(246);
	v->a[14152] = 1;
	v->a[14153] = sym_variable_assignment;
	v->a[14154] = state(411);
	v->a[14155] = 1;
	v->a[14156] = aux_sym_command_repeat1;
	v->a[14157] = state(551);
	v->a[14158] = 1;
	v->a[14159] = sym_file_redirect;
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = state(555);
	v->a[14161] = 1;
	v->a[14162] = sym_concatenation;
	v->a[14163] = state(1035);
	v->a[14164] = 1;
	v->a[14165] = sym_pipeline;
	v->a[14166] = state(1126);
	v->a[14167] = 1;
	v->a[14168] = aux_sym_redirected_statement_repeat2;
	v->a[14169] = state(1561);
	v->a[14170] = 1;
	v->a[14171] = sym__statement_not_pipeline;
	v->a[14172] = actions(11);
	v->a[14173] = 2;
	v->a[14174] = anon_sym_while;
	v->a[14175] = anon_sym_until;
	v->a[14176] = actions(59);
	v->a[14177] = 2;
	v->a[14178] = sym_raw_string;
	v->a[14179] = sym_number;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = actions(51);
	v->a[14181] = 3;
	v->a[14182] = anon_sym_LT;
	v->a[14183] = anon_sym_GT;
	v->a[14184] = anon_sym_GT_GT;
	v->a[14185] = state(401);
	v->a[14186] = 5;
	v->a[14187] = sym_arithmetic_expansion;
	v->a[14188] = sym_string;
	v->a[14189] = sym_simple_expansion;
	v->a[14190] = sym_expansion;
	v->a[14191] = sym_command_substitution;
	v->a[14192] = state(1037);
	v->a[14193] = 12;
	v->a[14194] = sym_redirected_statement;
	v->a[14195] = sym_for_statement;
	v->a[14196] = sym_while_statement;
	v->a[14197] = sym_if_statement;
	v->a[14198] = sym_case_statement;
	v->a[14199] = sym_function_definition;
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
