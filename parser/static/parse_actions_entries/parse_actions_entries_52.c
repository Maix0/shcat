/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_52.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_260(t_parse_actions_entries_array *v)
{
	v->a[5200] = shift_repeat(2456);
	v->a[5201] = entry(1, false);
	v->a[5202] = shift(1953);
	v->a[5203] = entry(2, false);
	v->a[5204] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5205] = shift_repeat(2443);
	v->a[5206] = entry(2, true);
	v->a[5207] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5208] = shift_repeat(2443);
	v->a[5209] = entry(1, true);
	v->a[5210] = shift(2531);
	v->a[5211] = entry(1, true);
	v->a[5212] = shift(2377);
	v->a[5213] = entry(1, true);
	v->a[5214] = shift(2516);
	v->a[5215] = entry(1, true);
	v->a[5216] = shift(2373);
	v->a[5217] = entry(1, false);
	v->a[5218] = shift(2022);
	v->a[5219] = entry(2, false);
	parse_actions_entries_261(v);
}

void	parse_actions_entries_261(t_parse_actions_entries_array *v)
{
	v->a[5220] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5221] = shift_repeat(2515);
	v->a[5222] = entry(2, true);
	v->a[5223] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5224] = shift_repeat(2515);
	v->a[5225] = entry(2, false);
	v->a[5226] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5227] = shift_repeat(1953);
	v->a[5228] = entry(2, true);
	v->a[5229] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5230] = shift_repeat(1957);
	v->a[5231] = entry(1, true);
	v->a[5232] = shift(2481);
	v->a[5233] = entry(1, true);
	v->a[5234] = shift(2543);
	v->a[5235] = entry(1, true);
	v->a[5236] = shift(2545);
	v->a[5237] = entry(1, false);
	v->a[5238] = shift(2100);
	v->a[5239] = entry(1, false);
	parse_actions_entries_262(v);
}

void	parse_actions_entries_262(t_parse_actions_entries_array *v)
{
	v->a[5240] = shift(2280);
	v->a[5241] = entry(1, false);
	v->a[5242] = shift(392);
	v->a[5243] = entry(1, true);
	v->a[5244] = shift(3192);
	v->a[5245] = entry(2, false);
	v->a[5246] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5247] = shift_repeat(2100);
	v->a[5248] = entry(1, false);
	v->a[5249] = shift(2864);
	v->a[5250] = entry(1, false);
	v->a[5251] = shift(2814);
	v->a[5252] = entry(1, true);
	v->a[5253] = shift(2814);
	v->a[5254] = entry(1, false);
	v->a[5255] = reduce(sym_redirected_statement, 1, -1, 2);
	v->a[5256] = entry(1, true);
	v->a[5257] = reduce(sym_redirected_statement, 1, -1, 2);
	v->a[5258] = entry(1, true);
	v->a[5259] = shift(3213);
	parse_actions_entries_263(v);
}

void	parse_actions_entries_263(t_parse_actions_entries_array *v)
{
	v->a[5260] = entry(1, true);
	v->a[5261] = shift(2442);
	v->a[5262] = entry(1, false);
	v->a[5263] = shift(2153);
	v->a[5264] = entry(2, false);
	v->a[5265] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5266] = shift_repeat(2087);
	v->a[5267] = entry(1, false);
	v->a[5268] = shift(2456);
	v->a[5269] = entry(1, true);
	v->a[5270] = shift(2456);
	v->a[5271] = entry(1, true);
	v->a[5272] = shift(3677);
	v->a[5273] = entry(1, false);
	v->a[5274] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[5275] = entry(2, false);
	v->a[5276] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[5277] = shift_repeat(2239);
	v->a[5278] = entry(2, false);
	v->a[5279] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	parse_actions_entries_264(v);
}

void	parse_actions_entries_264(t_parse_actions_entries_array *v)
{
	v->a[5280] = shift_repeat(358);
	v->a[5281] = entry(1, true);
	v->a[5282] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[5283] = entry(2, true);
	v->a[5284] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[5285] = shift_repeat(3213);
	v->a[5286] = entry(2, false);
	v->a[5287] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5288] = shift_repeat(2512);
	v->a[5289] = entry(2, true);
	v->a[5290] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5291] = shift_repeat(2512);
	v->a[5292] = entry(1, false);
	v->a[5293] = shift(2087);
	v->a[5294] = entry(1, true);
	v->a[5295] = shift(2395);
	v->a[5296] = entry(1, true);
	v->a[5297] = shift(2404);
	v->a[5298] = entry(1, true);
	v->a[5299] = shift(2579);
	parse_actions_entries_265(v);
}

/* EOF parse_actions_entries_52.c */
