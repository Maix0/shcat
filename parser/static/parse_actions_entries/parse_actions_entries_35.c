/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_35.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_175(t_parse_actions_entries_array *v)
{
	v->a[3500] = shift(60);
	v->a[3501] = entry(1, true);
	v->a[3502] = shift(61);
	v->a[3503] = entry(1, true);
	v->a[3504] = shift(62);
	v->a[3505] = entry(1, true);
	v->a[3506] = shift(4074);
	v->a[3507] = entry(1, false);
	v->a[3508] = shift(2638);
	v->a[3509] = entry(1, true);
	v->a[3510] = shift(2638);
	v->a[3511] = entry(2, false);
	v->a[3512] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3513] = shift_repeat(2564);
	v->a[3514] = entry(2, true);
	v->a[3515] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3516] = shift_repeat(2564);
	v->a[3517] = entry(1, false);
	v->a[3518] = reduce(aux_sym_for_statement_repeat1, 1, 0, 3);
	v->a[3519] = entry(1, true);
	parse_actions_entries_176(v);
}

void	parse_actions_entries_176(t_parse_actions_entries_array *v)
{
	v->a[3520] = reduce(aux_sym_for_statement_repeat1, 1, 0, 3);
	v->a[3521] = entry(1, false);
	v->a[3522] = shift(1011);
	v->a[3523] = entry(1, true);
	v->a[3524] = shift(2445);
	v->a[3525] = entry(1, true);
	v->a[3526] = shift(2534);
	v->a[3527] = entry(1, false);
	v->a[3528] = reduce(aux_sym_unset_command_repeat1, 1, 0, 3);
	v->a[3529] = entry(1, true);
	v->a[3530] = reduce(aux_sym_unset_command_repeat1, 1, 0, 3);
	v->a[3531] = entry(1, false);
	v->a[3532] = shift(1159);
	v->a[3533] = entry(1, true);
	v->a[3534] = shift(2441);
	v->a[3535] = entry(2, false);
	v->a[3536] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3537] = shift_repeat(2437);
	v->a[3538] = entry(2, true);
	v->a[3539] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_177(v);
}

void	parse_actions_entries_177(t_parse_actions_entries_array *v)
{
	v->a[3540] = shift_repeat(2437);
	v->a[3541] = entry(1, false);
	v->a[3542] = reduce(sym_file_redirect, 3, 0, 19);
	v->a[3543] = entry(1, true);
	v->a[3544] = reduce(sym_file_redirect, 3, 0, 19);
	v->a[3545] = entry(1, true);
	v->a[3546] = shift(2439);
	v->a[3547] = entry(1, false);
	v->a[3548] = reduce(sym_file_redirect, 2, 0, 6);
	v->a[3549] = entry(1, true);
	v->a[3550] = reduce(sym_file_redirect, 2, 0, 6);
	v->a[3551] = entry(2, false);
	v->a[3552] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[3553] = shift_repeat(1159);
	v->a[3554] = entry(1, true);
	v->a[3555] = shift(2438);
	v->a[3556] = entry(2, false);
	v->a[3557] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3558] = shift_repeat(2426);
	v->a[3559] = entry(2, true);
	parse_actions_entries_178(v);
}

void	parse_actions_entries_178(t_parse_actions_entries_array *v)
{
	v->a[3560] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3561] = shift_repeat(2426);
	v->a[3562] = entry(1, true);
	v->a[3563] = shift(2429);
	v->a[3564] = entry(1, false);
	v->a[3565] = reduce(aux_sym_command_repeat2, 1, 0, 15);
	v->a[3566] = entry(1, true);
	v->a[3567] = reduce(aux_sym_command_repeat2, 1, 0, 15);
	v->a[3568] = entry(1, false);
	v->a[3569] = shift(993);
	v->a[3570] = entry(1, true);
	v->a[3571] = shift(2428);
	v->a[3572] = entry(1, true);
	v->a[3573] = shift(2564);
	v->a[3574] = entry(1, true);
	v->a[3575] = shift(2553);
	v->a[3576] = entry(2, false);
	v->a[3577] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3578] = shift_repeat(2414);
	v->a[3579] = entry(2, true);
	parse_actions_entries_179(v);
}

void	parse_actions_entries_179(t_parse_actions_entries_array *v)
{
	v->a[3580] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3581] = shift_repeat(2414);
	v->a[3582] = entry(1, true);
	v->a[3583] = shift(2425);
	v->a[3584] = entry(1, true);
	v->a[3585] = shift(2424);
	v->a[3586] = entry(2, false);
	v->a[3587] = reduce(sym_command_name, 1, 0, 0);
	v->a[3588] = shift(3842);
	v->a[3589] = entry(1, true);
	v->a[3590] = shift(2427);
	v->a[3591] = entry(1, true);
	v->a[3592] = shift(2422);
	v->a[3593] = entry(1, false);
	v->a[3594] = shift(1139);
	v->a[3595] = entry(2, false);
	v->a[3596] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3597] = shift_repeat(2496);
	v->a[3598] = entry(2, true);
	v->a[3599] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_180(v);
}

/* EOF parse_actions_entries_35.c */
