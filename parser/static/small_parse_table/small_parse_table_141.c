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
	v->a[14100] = actions(61);
	v->a[14101] = 1;
	v->a[14102] = anon_sym_DOLLAR_LBRACE;
	v->a[14103] = actions(63);
	v->a[14104] = 1;
	v->a[14105] = anon_sym_DOLLAR_LPAREN;
	v->a[14106] = actions(65);
	v->a[14107] = 1;
	v->a[14108] = anon_sym_BQUOTE;
	v->a[14109] = actions(67);
	v->a[14110] = 1;
	v->a[14111] = sym_variable_name;
	v->a[14112] = actions(202);
	v->a[14113] = 1;
	v->a[14114] = sym_word;
	v->a[14115] = actions(204);
	v->a[14116] = 1;
	v->a[14117] = anon_sym_BANG;
	v->a[14118] = state(272);
	v->a[14119] = 1;
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = sym_command_name;
	v->a[14121] = state(313);
	v->a[14122] = 1;
	v->a[14123] = sym_variable_assignment;
	v->a[14124] = state(486);
	v->a[14125] = 1;
	v->a[14126] = aux_sym_command_repeat1;
	v->a[14127] = state(602);
	v->a[14128] = 1;
	v->a[14129] = sym_concatenation;
	v->a[14130] = state(636);
	v->a[14131] = 1;
	v->a[14132] = sym_file_redirect;
	v->a[14133] = state(964);
	v->a[14134] = 1;
	v->a[14135] = sym_pipeline;
	v->a[14136] = state(1006);
	v->a[14137] = 1;
	v->a[14138] = aux_sym_redirected_statement_repeat2;
	v->a[14139] = state(1605);
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = 1;
	v->a[14141] = sym__statement_not_pipeline;
	v->a[14142] = actions(11);
	v->a[14143] = 2;
	v->a[14144] = anon_sym_while;
	v->a[14145] = anon_sym_until;
	v->a[14146] = actions(59);
	v->a[14147] = 2;
	v->a[14148] = sym_raw_string;
	v->a[14149] = sym_number;
	v->a[14150] = state(425);
	v->a[14151] = 5;
	v->a[14152] = sym_arithmetic_expansion;
	v->a[14153] = sym_string;
	v->a[14154] = sym_simple_expansion;
	v->a[14155] = sym_expansion;
	v->a[14156] = sym_command_substitution;
	v->a[14157] = actions(51);
	v->a[14158] = 7;
	v->a[14159] = anon_sym_LT;
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = anon_sym_GT;
	v->a[14161] = anon_sym_GT_GT;
	v->a[14162] = anon_sym_LT_AMP;
	v->a[14163] = anon_sym_GT_AMP;
	v->a[14164] = anon_sym_GT_PIPE;
	v->a[14165] = anon_sym_LT_GT;
	v->a[14166] = state(967);
	v->a[14167] = 12;
	v->a[14168] = sym_redirected_statement;
	v->a[14169] = sym_for_statement;
	v->a[14170] = sym_while_statement;
	v->a[14171] = sym_if_statement;
	v->a[14172] = sym_case_statement;
	v->a[14173] = sym_function_definition;
	v->a[14174] = sym_compound_statement;
	v->a[14175] = sym_subshell;
	v->a[14176] = sym_list;
	v->a[14177] = sym_negated_command;
	v->a[14178] = sym_command;
	v->a[14179] = sym__variable_assignments;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = 27;
	v->a[14181] = actions(3);
	v->a[14182] = 1;
	v->a[14183] = sym_comment;
	v->a[14184] = actions(7);
	v->a[14185] = 1;
	v->a[14186] = sym_word;
	v->a[14187] = actions(9);
	v->a[14188] = 1;
	v->a[14189] = anon_sym_for;
	v->a[14190] = actions(13);
	v->a[14191] = 1;
	v->a[14192] = anon_sym_if;
	v->a[14193] = actions(15);
	v->a[14194] = 1;
	v->a[14195] = anon_sym_case;
	v->a[14196] = actions(17);
	v->a[14197] = 1;
	v->a[14198] = anon_sym_LPAREN;
	v->a[14199] = actions(19);
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
