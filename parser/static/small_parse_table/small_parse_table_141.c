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
	v->a[14101] = sym_concatenation;
	v->a[14102] = state(712);
	v->a[14103] = 1;
	v->a[14104] = sym_file_redirect;
	v->a[14105] = state(713);
	v->a[14106] = 1;
	v->a[14107] = aux_sym_command_repeat1;
	v->a[14108] = state(1215);
	v->a[14109] = 1;
	v->a[14110] = sym_pipeline;
	v->a[14111] = state(1333);
	v->a[14112] = 1;
	v->a[14113] = aux_sym_redirected_statement_repeat2;
	v->a[14114] = state(2103);
	v->a[14115] = 1;
	v->a[14116] = sym__statement_not_pipeline;
	v->a[14117] = actions(95);
	v->a[14118] = 2;
	v->a[14119] = anon_sym_while;
	small_parse_table_706(v);
}

void	small_parse_table_706(t_small_parse_table_array *v)
{
	v->a[14120] = anon_sym_until;
	v->a[14121] = actions(118);
	v->a[14122] = 2;
	v->a[14123] = anon_sym_LT_AMP_DASH;
	v->a[14124] = anon_sym_GT_AMP_DASH;
	v->a[14125] = actions(130);
	v->a[14126] = 2;
	v->a[14127] = sym_raw_string;
	v->a[14128] = sym_number;
	v->a[14129] = state(443);
	v->a[14130] = 5;
	v->a[14131] = sym_arithmetic_expansion;
	v->a[14132] = sym_string;
	v->a[14133] = sym_simple_expansion;
	v->a[14134] = sym_expansion;
	v->a[14135] = sym_command_substitution;
	v->a[14136] = actions(115);
	v->a[14137] = 6;
	v->a[14138] = anon_sym_LT;
	v->a[14139] = anon_sym_GT;
	small_parse_table_707(v);
}

void	small_parse_table_707(t_small_parse_table_array *v)
{
	v->a[14140] = anon_sym_GT_GT;
	v->a[14141] = anon_sym_LT_AMP;
	v->a[14142] = anon_sym_GT_AMP;
	v->a[14143] = anon_sym_GT_PIPE;
	v->a[14144] = state(1170);
	v->a[14145] = 12;
	v->a[14146] = sym_redirected_statement;
	v->a[14147] = sym_for_statement;
	v->a[14148] = sym_while_statement;
	v->a[14149] = sym_if_statement;
	v->a[14150] = sym_case_statement;
	v->a[14151] = sym_function_definition;
	v->a[14152] = sym_compound_statement;
	v->a[14153] = sym_subshell;
	v->a[14154] = sym_list;
	v->a[14155] = sym_negated_command;
	v->a[14156] = sym_command;
	v->a[14157] = sym__variable_assignments;
	v->a[14158] = 32;
	v->a[14159] = actions(3);
	small_parse_table_708(v);
}

void	small_parse_table_708(t_small_parse_table_array *v)
{
	v->a[14160] = 1;
	v->a[14161] = sym_comment;
	v->a[14162] = actions(9);
	v->a[14163] = 1;
	v->a[14164] = anon_sym_for;
	v->a[14165] = actions(13);
	v->a[14166] = 1;
	v->a[14167] = anon_sym_if;
	v->a[14168] = actions(15);
	v->a[14169] = 1;
	v->a[14170] = anon_sym_case;
	v->a[14171] = actions(17);
	v->a[14172] = 1;
	v->a[14173] = anon_sym_LPAREN;
	v->a[14174] = actions(19);
	v->a[14175] = 1;
	v->a[14176] = anon_sym_LBRACE;
	v->a[14177] = actions(59);
	v->a[14178] = 1;
	v->a[14179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_709(v);
}

void	small_parse_table_709(t_small_parse_table_array *v)
{
	v->a[14180] = actions(61);
	v->a[14181] = 1;
	v->a[14182] = anon_sym_DOLLAR;
	v->a[14183] = actions(63);
	v->a[14184] = 1;
	v->a[14185] = anon_sym_DQUOTE;
	v->a[14186] = actions(67);
	v->a[14187] = 1;
	v->a[14188] = anon_sym_DOLLAR_LBRACE;
	v->a[14189] = actions(69);
	v->a[14190] = 1;
	v->a[14191] = anon_sym_DOLLAR_LPAREN;
	v->a[14192] = actions(71);
	v->a[14193] = 1;
	v->a[14194] = anon_sym_BQUOTE;
	v->a[14195] = actions(73);
	v->a[14196] = 1;
	v->a[14197] = sym_file_descriptor;
	v->a[14198] = actions(75);
	v->a[14199] = 1;
	small_parse_table_710(v);
}

/* EOF small_parse_table_141.c */
