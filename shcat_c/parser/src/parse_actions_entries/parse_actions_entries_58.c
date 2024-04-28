/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_58.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_290(t_parse_actions_entries_array *v)
{
	v->a[5800] = shift(411);
	v->a[5801] = entry(2, false);
	v->a[5802] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5803] = shift_repeat(1885);
	v->a[5804] = entry(2, false);
	v->a[5805] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5806] = shift_repeat(1844);
	v->a[5807] = entry(1, true);
	v->a[5808] = shift(2382);
	v->a[5809] = entry(1, true);
	v->a[5810] = shift(216);
	v->a[5811] = entry(1, true);
	v->a[5812] = shift(1603);
	v->a[5813] = entry(1, false);
	v->a[5814] = shift(3788);
	v->a[5815] = entry(1, true);
	v->a[5816] = shift(3788);
	v->a[5817] = entry(1, false);
	v->a[5818] = shift(1890);
	v->a[5819] = entry(1, false);
	parse_actions_entries_291(v);
}

void	parse_actions_entries_291(t_parse_actions_entries_array *v)
{
	v->a[5820] = reduce(aux_sym_command_repeat1, 1, 0, 3);
	v->a[5821] = entry(1, false);
	v->a[5822] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[5823] = entry(2, false);
	v->a[5824] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[5825] = reduce(aux_sym_command_repeat1, 1, 0, 3);
	v->a[5826] = entry(1, true);
	v->a[5827] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[5828] = entry(2, true);
	v->a[5829] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[5830] = reduce(aux_sym_command_repeat1, 1, 0, 3);
	v->a[5831] = entry(1, true);
	v->a[5832] = reduce(aux_sym_command_repeat1, 1, 0, 3);
	v->a[5833] = entry(1, true);
	v->a[5834] = shift(3906);
	v->a[5835] = entry(1, true);
	v->a[5836] = shift(3914);
	v->a[5837] = entry(1, true);
	v->a[5838] = shift(4158);
	v->a[5839] = entry(1, true);
	parse_actions_entries_292(v);
}

void	parse_actions_entries_292(t_parse_actions_entries_array *v)
{
	v->a[5840] = shift(4162);
	v->a[5841] = entry(2, false);
	v->a[5842] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[5843] = shift_repeat(1835);
	v->a[5844] = entry(1, false);
	v->a[5845] = shift(3766);
	v->a[5846] = entry(1, true);
	v->a[5847] = shift(3766);
	v->a[5848] = entry(1, true);
	v->a[5849] = shift(5842);
	v->a[5850] = entry(1, true);
	v->a[5851] = shift(4744);
	v->a[5852] = entry(1, true);
	v->a[5853] = shift(392);
	v->a[5854] = entry(1, true);
	v->a[5855] = shift(391);
	v->a[5856] = entry(1, true);
	v->a[5857] = shift(390);
	v->a[5858] = entry(2, false);
	v->a[5859] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_293(v);
}

void	parse_actions_entries_293(t_parse_actions_entries_array *v)
{
	v->a[5860] = shift_repeat(3788);
	v->a[5861] = entry(2, true);
	v->a[5862] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5863] = shift_repeat(3788);
	v->a[5864] = entry(1, false);
	v->a[5865] = shift(5608);
	v->a[5866] = entry(1, false);
	v->a[5867] = shift(3863);
	v->a[5868] = entry(1, false);
	v->a[5869] = shift(3862);
	v->a[5870] = entry(1, false);
	v->a[5871] = shift(5992);
	v->a[5872] = entry(1, false);
	v->a[5873] = shift(5518);
	v->a[5874] = entry(1, false);
	v->a[5875] = shift(5846);
	v->a[5876] = entry(1, false);
	v->a[5877] = shift(5625);
	v->a[5878] = entry(1, false);
	v->a[5879] = shift(6362);
	parse_actions_entries_294(v);
}

void	parse_actions_entries_294(t_parse_actions_entries_array *v)
{
	v->a[5880] = entry(1, false);
	v->a[5881] = shift(4752);
	v->a[5882] = entry(1, false);
	v->a[5883] = shift(400);
	v->a[5884] = entry(1, false);
	v->a[5885] = shift(399);
	v->a[5886] = entry(1, false);
	v->a[5887] = shift(398);
	v->a[5888] = entry(1, false);
	v->a[5889] = shift(172);
	v->a[5890] = entry(1, true);
	v->a[5891] = shift(5562);
	v->a[5892] = entry(1, true);
	v->a[5893] = shift(7645);
	v->a[5894] = entry(1, false);
	v->a[5895] = shift(1885);
	v->a[5896] = entry(2, false);
	v->a[5897] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[5898] = shift_repeat(3948);
	v->a[5899] = entry(2, true);
	parse_actions_entries_295(v);
}

/* EOF parse_actions_entries_58.c */
