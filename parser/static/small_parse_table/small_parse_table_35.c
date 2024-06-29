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
	v->a[3500] = actions(93);
	v->a[3501] = 1;
	v->a[3502] = anon_sym_if;
	v->a[3503] = actions(95);
	v->a[3504] = 1;
	v->a[3505] = anon_sym_case;
	v->a[3506] = actions(97);
	v->a[3507] = 1;
	v->a[3508] = anon_sym_LPAREN;
	v->a[3509] = actions(101);
	v->a[3510] = 1;
	v->a[3511] = anon_sym_LBRACE;
	v->a[3512] = actions(103);
	v->a[3513] = 1;
	v->a[3514] = anon_sym_BANG;
	v->a[3515] = actions(109);
	v->a[3516] = 1;
	v->a[3517] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3518] = actions(111);
	v->a[3519] = 1;
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = anon_sym_DOLLAR;
	v->a[3521] = actions(113);
	v->a[3522] = 1;
	v->a[3523] = anon_sym_DQUOTE;
	v->a[3524] = actions(117);
	v->a[3525] = 1;
	v->a[3526] = anon_sym_DOLLAR_LBRACE;
	v->a[3527] = actions(119);
	v->a[3528] = 1;
	v->a[3529] = anon_sym_DOLLAR_LPAREN;
	v->a[3530] = actions(121);
	v->a[3531] = 1;
	v->a[3532] = anon_sym_BQUOTE;
	v->a[3533] = actions(123);
	v->a[3534] = 1;
	v->a[3535] = sym_file_descriptor;
	v->a[3536] = actions(125);
	v->a[3537] = 1;
	v->a[3538] = sym_variable_name;
	v->a[3539] = actions(206);
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = 1;
	v->a[3541] = anon_sym_LF;
	v->a[3542] = state(22);
	v->a[3543] = 1;
	v->a[3544] = aux_sym__case_item_last_repeat2;
	v->a[3545] = state(134);
	v->a[3546] = 1;
	v->a[3547] = aux_sym__statements_repeat1;
	v->a[3548] = state(184);
	v->a[3549] = 1;
	v->a[3550] = sym_command_name;
	v->a[3551] = state(229);
	v->a[3552] = 1;
	v->a[3553] = sym_variable_assignment;
	v->a[3554] = state(622);
	v->a[3555] = 1;
	v->a[3556] = sym_concatenation;
	v->a[3557] = state(727);
	v->a[3558] = 1;
	v->a[3559] = aux_sym_command_repeat1;
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = state(744);
	v->a[3561] = 1;
	v->a[3562] = sym_file_redirect;
	v->a[3563] = state(1096);
	v->a[3564] = 1;
	v->a[3565] = sym_pipeline;
	v->a[3566] = state(1215);
	v->a[3567] = 1;
	v->a[3568] = aux_sym_redirected_statement_repeat2;
	v->a[3569] = state(2109);
	v->a[3570] = 1;
	v->a[3571] = sym__statements;
	v->a[3572] = state(2122);
	v->a[3573] = 1;
	v->a[3574] = sym__statement_not_pipeline;
	v->a[3575] = actions(91);
	v->a[3576] = 2;
	v->a[3577] = anon_sym_while;
	v->a[3578] = anon_sym_until;
	v->a[3579] = actions(107);
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = 2;
	v->a[3581] = anon_sym_LT_AMP_DASH;
	v->a[3582] = anon_sym_GT_AMP_DASH;
	v->a[3583] = actions(115);
	v->a[3584] = 2;
	v->a[3585] = sym_raw_string;
	v->a[3586] = sym_number;
	v->a[3587] = state(289);
	v->a[3588] = 5;
	v->a[3589] = sym_arithmetic_expansion;
	v->a[3590] = sym_string;
	v->a[3591] = sym_simple_expansion;
	v->a[3592] = sym_expansion;
	v->a[3593] = sym_command_substitution;
	v->a[3594] = actions(105);
	v->a[3595] = 8;
	v->a[3596] = anon_sym_LT;
	v->a[3597] = anon_sym_GT;
	v->a[3598] = anon_sym_GT_GT;
	v->a[3599] = anon_sym_AMP_GT;
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
