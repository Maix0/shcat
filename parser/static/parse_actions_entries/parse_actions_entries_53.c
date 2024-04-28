/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_53.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_265(t_parse_actions_entries_array *v)
{
	v->a[5300] = shift(5359);
	v->a[5301] = entry(1, false);
	v->a[5302] = shift(5293);
	v->a[5303] = entry(1, false);
	v->a[5304] = shift(5206);
	v->a[5305] = entry(1, true);
	v->a[5306] = shift(5305);
	v->a[5307] = entry(1, false);
	v->a[5308] = shift(5398);
	v->a[5309] = entry(1, true);
	v->a[5310] = shift(5318);
	v->a[5311] = entry(1, false);
	v->a[5312] = shift(5379);
	v->a[5313] = entry(1, true);
	v->a[5314] = shift(3974);
	v->a[5315] = entry(1, true);
	v->a[5316] = shift(3973);
	v->a[5317] = entry(1, false);
	v->a[5318] = shift(5919);
	v->a[5319] = entry(1, false);
	parse_actions_entries_266(v);
}

void	parse_actions_entries_266(t_parse_actions_entries_array *v)
{
	v->a[5320] = shift(5174);
	v->a[5321] = entry(1, true);
	v->a[5322] = shift(5761);
	v->a[5323] = entry(1, true);
	v->a[5324] = shift(5379);
	v->a[5325] = entry(1, false);
	v->a[5326] = shift(5463);
	v->a[5327] = entry(1, false);
	v->a[5328] = shift(6322);
	v->a[5329] = entry(1, true);
	v->a[5330] = shift(4832);
	v->a[5331] = entry(1, false);
	v->a[5332] = shift(164);
	v->a[5333] = entry(1, true);
	v->a[5334] = shift(168);
	v->a[5335] = entry(1, true);
	v->a[5336] = shift(169);
	v->a[5337] = entry(1, true);
	v->a[5338] = shift(109);
	v->a[5339] = entry(1, true);
	parse_actions_entries_267(v);
}

void	parse_actions_entries_267(t_parse_actions_entries_array *v)
{
	v->a[5340] = shift(5371);
	v->a[5341] = entry(1, true);
	v->a[5342] = shift(7638);
	v->a[5343] = entry(1, false);
	v->a[5344] = shift(5331);
	v->a[5345] = entry(1, true);
	v->a[5346] = shift(5331);
	v->a[5347] = entry(1, true);
	v->a[5348] = shift(5377);
	v->a[5349] = entry(1, true);
	v->a[5350] = shift(3867);
	v->a[5351] = entry(1, true);
	v->a[5352] = shift(3834);
	v->a[5353] = entry(1, false);
	v->a[5354] = shift(810);
	v->a[5355] = entry(1, false);
	v->a[5356] = shift(449);
	v->a[5357] = entry(1, true);
	v->a[5358] = shift(810);
	v->a[5359] = entry(1, false);
	parse_actions_entries_268(v);
}

void	parse_actions_entries_268(t_parse_actions_entries_array *v)
{
	v->a[5360] = shift(2879);
	v->a[5361] = entry(1, false);
	v->a[5362] = shift(5837);
	v->a[5363] = entry(1, false);
	v->a[5364] = shift(2877);
	v->a[5365] = entry(1, true);
	v->a[5366] = shift(2877);
	v->a[5367] = entry(2, false);
	v->a[5368] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5369] = shift_repeat(4034);
	v->a[5370] = entry(2, true);
	v->a[5371] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5372] = shift_repeat(4034);
	v->a[5373] = entry(1, false);
	v->a[5374] = reduce(sym_variable_assignment, 3, 0, 24);
	v->a[5375] = entry(1, true);
	v->a[5376] = reduce(sym_variable_assignment, 3, 0, 24);
	v->a[5377] = entry(1, false);
	v->a[5378] = shift(812);
	v->a[5379] = entry(1, true);
	parse_actions_entries_269(v);
}

void	parse_actions_entries_269(t_parse_actions_entries_array *v)
{
	v->a[5380] = shift(812);
	v->a[5381] = entry(1, false);
	v->a[5382] = shift(599);
	v->a[5383] = entry(1, true);
	v->a[5384] = shift(599);
	v->a[5385] = entry(1, false);
	v->a[5386] = shift(802);
	v->a[5387] = entry(1, true);
	v->a[5388] = shift(802);
	v->a[5389] = entry(1, false);
	v->a[5390] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[5391] = entry(1, true);
	v->a[5392] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[5393] = entry(1, false);
	v->a[5394] = reduce(aux_sym_for_statement_repeat1, 1, 0, 1);
	v->a[5395] = entry(1, true);
	v->a[5396] = reduce(aux_sym_for_statement_repeat1, 1, 0, 1);
	v->a[5397] = entry(1, false);
	v->a[5398] = shift(3943);
	v->a[5399] = entry(1, true);
	parse_actions_entries_270(v);
}

/* EOF parse_actions_entries_53.c */
