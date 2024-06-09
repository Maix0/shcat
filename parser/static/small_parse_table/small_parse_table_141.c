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
	v->a[14100] = 1;
	v->a[14101] = anon_sym_DOLLAR_LPAREN;
	v->a[14102] = actions(79);
	v->a[14103] = 1;
	v->a[14104] = anon_sym_BQUOTE;
	v->a[14105] = actions(248);
	v->a[14106] = 1;
	v->a[14107] = sym_word;
	v->a[14108] = actions(250);
	v->a[14109] = 1;
	v->a[14110] = anon_sym_BANG;
	v->a[14111] = actions(256);
	v->a[14112] = 1;
	v->a[14113] = sym_raw_string;
	v->a[14114] = actions(258);
	v->a[14115] = 1;
	v->a[14116] = sym_file_descriptor;
	v->a[14117] = actions(260);
	v->a[14118] = 1;
	v->a[14119] = sym_variable_name;
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = state(141);
	v->a[14121] = 1;
	v->a[14122] = aux_sym__statements_repeat1;
	v->a[14123] = state(175);
	v->a[14124] = 1;
	v->a[14125] = sym_command_name;
	v->a[14126] = state(278);
	v->a[14127] = 1;
	v->a[14128] = sym_variable_assignment;
	v->a[14129] = state(567);
	v->a[14130] = 1;
	v->a[14131] = aux_sym_command_repeat1;
	v->a[14132] = state(582);
	v->a[14133] = 1;
	v->a[14134] = sym_concatenation;
	v->a[14135] = state(713);
	v->a[14136] = 1;
	v->a[14137] = sym_file_redirect;
	v->a[14138] = state(1100);
	v->a[14139] = 1;
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = sym_pipeline;
	v->a[14141] = state(1196);
	v->a[14142] = 1;
	v->a[14143] = aux_sym_redirected_statement_repeat2;
	v->a[14144] = state(2037);
	v->a[14145] = 1;
	v->a[14146] = sym__statement_not_pipeline;
	v->a[14147] = state(2107);
	v->a[14148] = 1;
	v->a[14149] = sym__statements;
	v->a[14150] = actions(11);
	v->a[14151] = 2;
	v->a[14152] = anon_sym_while;
	v->a[14153] = anon_sym_until;
	v->a[14154] = actions(254);
	v->a[14155] = 2;
	v->a[14156] = anon_sym_LT_AMP_DASH;
	v->a[14157] = anon_sym_GT_AMP_DASH;
	v->a[14158] = state(295);
	v->a[14159] = 6;
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = sym_arithmetic_expansion;
	v->a[14161] = sym_string;
	v->a[14162] = sym_number;
	v->a[14163] = sym_simple_expansion;
	v->a[14164] = sym_expansion;
	v->a[14165] = sym_command_substitution;
	v->a[14166] = actions(252);
	v->a[14167] = 8;
	v->a[14168] = anon_sym_LT;
	v->a[14169] = anon_sym_GT;
	v->a[14170] = anon_sym_GT_GT;
	v->a[14171] = anon_sym_AMP_GT;
	v->a[14172] = anon_sym_AMP_GT_GT;
	v->a[14173] = anon_sym_LT_AMP;
	v->a[14174] = anon_sym_GT_AMP;
	v->a[14175] = anon_sym_GT_PIPE;
	v->a[14176] = state(1031);
	v->a[14177] = 12;
	v->a[14178] = sym_redirected_statement;
	v->a[14179] = sym_for_statement;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = sym_while_statement;
	v->a[14181] = sym_if_statement;
	v->a[14182] = sym_case_statement;
	v->a[14183] = sym_function_definition;
	v->a[14184] = sym_compound_statement;
	v->a[14185] = sym_subshell;
	v->a[14186] = sym_list;
	v->a[14187] = sym_negated_command;
	v->a[14188] = sym_command;
	v->a[14189] = sym_variable_assignments;
	v->a[14190] = 34;
	v->a[14191] = actions(3);
	v->a[14192] = 1;
	v->a[14193] = sym_comment;
	v->a[14194] = actions(9);
	v->a[14195] = 1;
	v->a[14196] = anon_sym_for;
	v->a[14197] = actions(13);
	v->a[14198] = 1;
	v->a[14199] = anon_sym_if;
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
