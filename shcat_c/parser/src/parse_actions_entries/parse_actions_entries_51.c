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
	v->a[5100] = shift(444);
	v->a[5101] = entry(1, true);
	v->a[5102] = shift(780);
	v->a[5103] = entry(2, true);
	v->a[5104] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[5105] = shift(6604);
	v->a[5106] = entry(1, true);
	v->a[5107] = shift(3745);
	v->a[5108] = entry(1, false);
	v->a[5109] = shift(2613);
	v->a[5110] = entry(1, true);
	v->a[5111] = shift(3835);
	v->a[5112] = entry(1, true);
	v->a[5113] = shift(3818);
	v->a[5114] = entry(1, false);
	v->a[5115] = shift(6082);
	v->a[5116] = entry(1, true);
	v->a[5117] = shift(2632);
	v->a[5118] = entry(1, true);
	v->a[5119] = shift(5837);
	parse_actions_entries_256(v);
}

void	parse_actions_entries_256(t_parse_actions_entries_array *v)
{
	v->a[5120] = entry(1, true);
	v->a[5121] = shift(2613);
	v->a[5122] = entry(1, false);
	v->a[5123] = shift(2869);
	v->a[5124] = entry(1, false);
	v->a[5125] = shift(6366);
	v->a[5126] = entry(1, true);
	v->a[5127] = shift(4737);
	v->a[5128] = entry(1, false);
	v->a[5129] = shift(384);
	v->a[5130] = entry(1, true);
	v->a[5131] = shift(383);
	v->a[5132] = entry(1, true);
	v->a[5133] = shift(382);
	v->a[5134] = entry(1, true);
	v->a[5135] = shift(210);
	v->a[5136] = entry(1, true);
	v->a[5137] = shift(2612);
	v->a[5138] = entry(1, true);
	v->a[5139] = shift(7647);
	parse_actions_entries_257(v);
}

void	parse_actions_entries_257(t_parse_actions_entries_array *v)
{
	v->a[5140] = entry(1, false);
	v->a[5141] = shift(827);
	v->a[5142] = entry(1, true);
	v->a[5143] = shift(827);
	v->a[5144] = entry(1, false);
	v->a[5145] = shift(4034);
	v->a[5146] = entry(1, true);
	v->a[5147] = shift(4034);
	v->a[5148] = entry(1, true);
	v->a[5149] = shift(3750);
	v->a[5150] = entry(1, false);
	v->a[5151] = shift(2468);
	v->a[5152] = entry(1, false);
	v->a[5153] = shift(5754);
	v->a[5154] = entry(1, false);
	v->a[5155] = shift(2467);
	v->a[5156] = entry(1, true);
	v->a[5157] = shift(2467);
	v->a[5158] = entry(1, false);
	v->a[5159] = shift(2625);
	parse_actions_entries_258(v);
}

void	parse_actions_entries_258(t_parse_actions_entries_array *v)
{
	v->a[5160] = entry(1, false);
	v->a[5161] = shift(2624);
	v->a[5162] = entry(1, true);
	v->a[5163] = shift(2624);
	v->a[5164] = entry(1, true);
	v->a[5165] = shift(4019);
	v->a[5166] = entry(1, true);
	v->a[5167] = shift(4020);
	v->a[5168] = entry(2, false);
	v->a[5169] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5170] = shift_repeat(3733);
	v->a[5171] = entry(2, true);
	v->a[5172] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5173] = shift_repeat(3733);
	v->a[5174] = entry(1, false);
	v->a[5175] = reduce(aux_sym_declaration_command_repeat1, 1, 0, 0);
	v->a[5176] = entry(1, true);
	v->a[5177] = reduce(aux_sym_declaration_command_repeat1, 1, 0, 0);
	v->a[5178] = entry(1, false);
	v->a[5179] = reduce(aux_sym_declaration_command_repeat1, 1, 0, 1);
	parse_actions_entries_259(v);
}

void	parse_actions_entries_259(t_parse_actions_entries_array *v)
{
	v->a[5180] = entry(1, true);
	v->a[5181] = reduce(aux_sym_declaration_command_repeat1, 1, 0, 1);
	v->a[5182] = entry(1, false);
	v->a[5183] = shift(3891);
	v->a[5184] = entry(1, true);
	v->a[5185] = shift(3752);
	v->a[5186] = entry(1, true);
	v->a[5187] = shift(3756);
	v->a[5188] = entry(2, false);
	v->a[5189] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5190] = shift_repeat(2613);
	v->a[5191] = entry(2, true);
	v->a[5192] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5193] = shift_repeat(3835);
	v->a[5194] = entry(2, true);
	v->a[5195] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5196] = shift_repeat(3818);
	v->a[5197] = entry(2, false);
	v->a[5198] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[5199] = shift_repeat(6082);
	parse_actions_entries_260(v);
}

/* EOF parse_actions_entries_51.c */
