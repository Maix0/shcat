/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_35.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_175(t_small_parse_table_array *v)
{
	v->a[3500] = anon_sym_for;
	v->a[3501] = actions(13);
	v->a[3502] = 1;
	v->a[3503] = anon_sym_if;
	v->a[3504] = actions(15);
	v->a[3505] = 1;
	v->a[3506] = anon_sym_case;
	v->a[3507] = actions(17);
	v->a[3508] = 1;
	v->a[3509] = anon_sym_LPAREN;
	v->a[3510] = actions(19);
	v->a[3511] = 1;
	v->a[3512] = anon_sym_LBRACE;
	v->a[3513] = actions(45);
	v->a[3514] = 1;
	v->a[3515] = sym_word;
	v->a[3516] = actions(53);
	v->a[3517] = 1;
	v->a[3518] = anon_sym_BANG;
	v->a[3519] = actions(59);
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = 1;
	v->a[3521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3522] = actions(61);
	v->a[3523] = 1;
	v->a[3524] = anon_sym_DOLLAR;
	v->a[3525] = actions(63);
	v->a[3526] = 1;
	v->a[3527] = anon_sym_DQUOTE;
	v->a[3528] = actions(67);
	v->a[3529] = 1;
	v->a[3530] = anon_sym_DOLLAR_LBRACE;
	v->a[3531] = actions(69);
	v->a[3532] = 1;
	v->a[3533] = anon_sym_DOLLAR_LPAREN;
	v->a[3534] = actions(71);
	v->a[3535] = 1;
	v->a[3536] = anon_sym_BQUOTE;
	v->a[3537] = actions(73);
	v->a[3538] = 1;
	v->a[3539] = sym_file_descriptor;
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = actions(75);
	v->a[3541] = 1;
	v->a[3542] = sym_variable_name;
	v->a[3543] = actions(87);
	v->a[3544] = 1;
	v->a[3545] = anon_sym_LF;
	v->a[3546] = state(136);
	v->a[3547] = 1;
	v->a[3548] = aux_sym__statements_repeat1;
	v->a[3549] = state(187);
	v->a[3550] = 1;
	v->a[3551] = sym_command_name;
	v->a[3552] = state(275);
	v->a[3553] = 1;
	v->a[3554] = sym_variable_assignment;
	v->a[3555] = state(647);
	v->a[3556] = 1;
	v->a[3557] = sym_concatenation;
	v->a[3558] = state(736);
	v->a[3559] = 1;
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = aux_sym_command_repeat1;
	v->a[3561] = state(738);
	v->a[3562] = 1;
	v->a[3563] = sym_file_redirect;
	v->a[3564] = state(767);
	v->a[3565] = 1;
	v->a[3566] = aux_sym__case_item_last_repeat2;
	v->a[3567] = state(1450);
	v->a[3568] = 1;
	v->a[3569] = sym_pipeline;
	v->a[3570] = state(1460);
	v->a[3571] = 1;
	v->a[3572] = aux_sym_redirected_statement_repeat2;
	v->a[3573] = state(2269);
	v->a[3574] = 1;
	v->a[3575] = sym__statement_not_pipeline;
	v->a[3576] = state(2443);
	v->a[3577] = 1;
	v->a[3578] = sym__statements;
	v->a[3579] = actions(11);
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = 2;
	v->a[3581] = anon_sym_while;
	v->a[3582] = anon_sym_until;
	v->a[3583] = actions(57);
	v->a[3584] = 2;
	v->a[3585] = anon_sym_LT_AMP_DASH;
	v->a[3586] = anon_sym_GT_AMP_DASH;
	v->a[3587] = actions(65);
	v->a[3588] = 2;
	v->a[3589] = sym_raw_string;
	v->a[3590] = sym_number;
	v->a[3591] = state(394);
	v->a[3592] = 5;
	v->a[3593] = sym_arithmetic_expansion;
	v->a[3594] = sym_string;
	v->a[3595] = sym_simple_expansion;
	v->a[3596] = sym_expansion;
	v->a[3597] = sym_command_substitution;
	v->a[3598] = actions(55);
	v->a[3599] = 8;
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
