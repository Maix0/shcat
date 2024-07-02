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
	v->a[3500] = 1;
	v->a[3501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3502] = actions(57);
	v->a[3503] = 1;
	v->a[3504] = anon_sym_DOLLAR;
	v->a[3505] = actions(59);
	v->a[3506] = 1;
	v->a[3507] = anon_sym_DQUOTE;
	v->a[3508] = actions(63);
	v->a[3509] = 1;
	v->a[3510] = anon_sym_DOLLAR_LBRACE;
	v->a[3511] = actions(65);
	v->a[3512] = 1;
	v->a[3513] = anon_sym_DOLLAR_LPAREN;
	v->a[3514] = actions(67);
	v->a[3515] = 1;
	v->a[3516] = anon_sym_BQUOTE;
	v->a[3517] = actions(69);
	v->a[3518] = 1;
	v->a[3519] = sym_file_descriptor;
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = actions(71);
	v->a[3521] = 1;
	v->a[3522] = sym_variable_name;
	v->a[3523] = actions(199);
	v->a[3524] = 1;
	v->a[3525] = anon_sym_LF;
	v->a[3526] = state(15);
	v->a[3527] = 1;
	v->a[3528] = aux_sym__case_item_last_repeat2;
	v->a[3529] = state(129);
	v->a[3530] = 1;
	v->a[3531] = aux_sym__statements_repeat1;
	v->a[3532] = state(182);
	v->a[3533] = 1;
	v->a[3534] = sym_command_name;
	v->a[3535] = state(261);
	v->a[3536] = 1;
	v->a[3537] = sym_variable_assignment;
	v->a[3538] = state(584);
	v->a[3539] = 1;
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = sym_concatenation;
	v->a[3541] = state(620);
	v->a[3542] = 1;
	v->a[3543] = sym_file_redirect;
	v->a[3544] = state(623);
	v->a[3545] = 1;
	v->a[3546] = aux_sym_command_repeat1;
	v->a[3547] = state(1114);
	v->a[3548] = 1;
	v->a[3549] = sym_pipeline;
	v->a[3550] = state(1201);
	v->a[3551] = 1;
	v->a[3552] = aux_sym_redirected_statement_repeat2;
	v->a[3553] = state(1911);
	v->a[3554] = 1;
	v->a[3555] = sym__statement_not_pipeline;
	v->a[3556] = state(2022);
	v->a[3557] = 1;
	v->a[3558] = sym__statements;
	v->a[3559] = actions(11);
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = 2;
	v->a[3561] = anon_sym_while;
	v->a[3562] = anon_sym_until;
	v->a[3563] = actions(61);
	v->a[3564] = 2;
	v->a[3565] = sym_raw_string;
	v->a[3566] = sym_number;
	v->a[3567] = state(433);
	v->a[3568] = 5;
	v->a[3569] = sym_arithmetic_expansion;
	v->a[3570] = sym_string;
	v->a[3571] = sym_simple_expansion;
	v->a[3572] = sym_expansion;
	v->a[3573] = sym_command_substitution;
	v->a[3574] = actions(53);
	v->a[3575] = 7;
	v->a[3576] = anon_sym_LT;
	v->a[3577] = anon_sym_GT;
	v->a[3578] = anon_sym_GT_GT;
	v->a[3579] = anon_sym_LT_AMP;
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = anon_sym_GT_AMP;
	v->a[3581] = anon_sym_GT_PIPE;
	v->a[3582] = anon_sym_LT_GT;
	v->a[3583] = state(1088);
	v->a[3584] = 12;
	v->a[3585] = sym_redirected_statement;
	v->a[3586] = sym_for_statement;
	v->a[3587] = sym_while_statement;
	v->a[3588] = sym_if_statement;
	v->a[3589] = sym_case_statement;
	v->a[3590] = sym_function_definition;
	v->a[3591] = sym_compound_statement;
	v->a[3592] = sym_subshell;
	v->a[3593] = sym_list;
	v->a[3594] = sym_negated_command;
	v->a[3595] = sym_command;
	v->a[3596] = sym__variable_assignments;
	v->a[3597] = 33;
	v->a[3598] = actions(3);
	v->a[3599] = 1;
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
