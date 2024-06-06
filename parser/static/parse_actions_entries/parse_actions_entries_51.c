/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_51.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_255(t_parse_actions_entries_array *v)
{
	v->a[5100] = shift_repeat(3311);
	v->a[5101] = entry(2, true);
	v->a[5102] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5103] = shift_repeat(2120);
	v->a[5104] = entry(2, true);
	v->a[5105] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5106] = shift_repeat(1830);
	v->a[5107] = entry(2, false);
	v->a[5108] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5109] = shift_repeat(3144);
	v->a[5110] = entry(2, true);
	v->a[5111] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5112] = shift_repeat(3344);
	v->a[5113] = entry(2, true);
	v->a[5114] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5115] = shift_repeat(3013);
	v->a[5116] = entry(2, true);
	v->a[5117] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5118] = shift_repeat(3311);
	v->a[5119] = entry(2, false);
	parse_actions_entries_256(v);
}

void	parse_actions_entries_256(t_parse_actions_entries_array *v)
{
	v->a[5120] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5121] = shift_repeat(3443);
	v->a[5122] = entry(2, false);
	v->a[5123] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5124] = shift_repeat(3329);
	v->a[5125] = entry(2, true);
	v->a[5126] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5127] = shift_repeat(3001);
	v->a[5128] = entry(2, false);
	v->a[5129] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5130] = shift_repeat(215);
	v->a[5131] = entry(2, true);
	v->a[5132] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5133] = shift_repeat(222);
	v->a[5134] = entry(2, true);
	v->a[5135] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5136] = shift_repeat(218);
	v->a[5137] = entry(2, true);
	v->a[5138] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5139] = shift_repeat(3203);
	parse_actions_entries_257(v);
}

void	parse_actions_entries_257(t_parse_actions_entries_array *v)
{
	v->a[5140] = entry(2, true);
	v->a[5141] = reduce(aux_sym_case_statement_repeat1, 2, 0, 0);
	v->a[5142] = shift_repeat(4059);
	v->a[5143] = entry(1, false);
	v->a[5144] = reduce(sym_variable_assignments, 2, 0, 0);
	v->a[5145] = entry(1, true);
	v->a[5146] = reduce(sym_variable_assignments, 2, 0, 0);
	v->a[5147] = entry(1, true);
	v->a[5148] = shift(3659);
	v->a[5149] = entry(1, true);
	v->a[5150] = shift(1957);
	v->a[5151] = entry(1, false);
	v->a[5152] = reduce(sym_redirected_statement, 2, -1, 12);
	v->a[5153] = entry(1, false);
	v->a[5154] = shift(2239);
	v->a[5155] = entry(1, false);
	v->a[5156] = shift(358);
	v->a[5157] = entry(1, true);
	v->a[5158] = reduce(sym_redirected_statement, 2, -1, 12);
	v->a[5159] = entry(1, true);
	parse_actions_entries_258(v);
}

void	parse_actions_entries_258(t_parse_actions_entries_array *v)
{
	v->a[5160] = shift(3171);
	v->a[5161] = entry(1, false);
	v->a[5162] = shift(2423);
	v->a[5163] = entry(1, true);
	v->a[5164] = shift(2423);
	v->a[5165] = entry(1, false);
	v->a[5166] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[5167] = entry(2, false);
	v->a[5168] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[5169] = shift_repeat(2239);
	v->a[5170] = entry(2, false);
	v->a[5171] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[5172] = shift_repeat(358);
	v->a[5173] = entry(2, false);
	v->a[5174] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[5175] = shift_repeat(3903);
	v->a[5176] = entry(1, true);
	v->a[5177] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[5178] = entry(2, true);
	v->a[5179] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_259(v);
}

void	parse_actions_entries_259(t_parse_actions_entries_array *v)
{
	v->a[5180] = shift_repeat(3171);
	v->a[5181] = entry(1, false);
	v->a[5182] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[5183] = entry(1, true);
	v->a[5184] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[5185] = entry(2, true);
	v->a[5186] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[5187] = shift_repeat(3659);
	v->a[5188] = entry(2, false);
	v->a[5189] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5190] = shift_repeat(2022);
	v->a[5191] = entry(1, false);
	v->a[5192] = shift(2512);
	v->a[5193] = entry(1, true);
	v->a[5194] = shift(2512);
	v->a[5195] = entry(2, false);
	v->a[5196] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5197] = shift_repeat(2456);
	v->a[5198] = entry(2, true);
	v->a[5199] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_260(v);
}

/* EOF parse_actions_entries_51.c */
