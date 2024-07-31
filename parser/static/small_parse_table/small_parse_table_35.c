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
	v->a[3500] = sym_while_statement;
	v->a[3501] = sym_if_statement;
	v->a[3502] = sym_case_statement;
	v->a[3503] = sym_function_definition;
	v->a[3504] = sym_compound_statement;
	v->a[3505] = sym_subshell;
	v->a[3506] = sym_list;
	v->a[3507] = sym_negated_command;
	v->a[3508] = sym_command;
	v->a[3509] = sym__variable_assignments;
	v->a[3510] = 32;
	v->a[3511] = actions(3);
	v->a[3512] = 1;
	v->a[3513] = sym_comment;
	v->a[3514] = actions(9);
	v->a[3515] = 1;
	v->a[3516] = anon_sym_for;
	v->a[3517] = actions(13);
	v->a[3518] = 1;
	v->a[3519] = anon_sym_if;
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = actions(15);
	v->a[3521] = 1;
	v->a[3522] = anon_sym_case;
	v->a[3523] = actions(17);
	v->a[3524] = 1;
	v->a[3525] = anon_sym_LPAREN;
	v->a[3526] = actions(19);
	v->a[3527] = 1;
	v->a[3528] = anon_sym_LBRACE;
	v->a[3529] = actions(41);
	v->a[3530] = 1;
	v->a[3531] = sym_word;
	v->a[3532] = actions(49);
	v->a[3533] = 1;
	v->a[3534] = anon_sym_BANG;
	v->a[3535] = actions(53);
	v->a[3536] = 1;
	v->a[3537] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3538] = actions(55);
	v->a[3539] = 1;
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = anon_sym_DOLLAR;
	v->a[3541] = actions(57);
	v->a[3542] = 1;
	v->a[3543] = anon_sym_DQUOTE;
	v->a[3544] = actions(61);
	v->a[3545] = 1;
	v->a[3546] = anon_sym_DOLLAR_LBRACE;
	v->a[3547] = actions(63);
	v->a[3548] = 1;
	v->a[3549] = anon_sym_DOLLAR_LPAREN;
	v->a[3550] = actions(65);
	v->a[3551] = 1;
	v->a[3552] = anon_sym_BQUOTE;
	v->a[3553] = actions(67);
	v->a[3554] = 1;
	v->a[3555] = sym_variable_name;
	v->a[3556] = actions(194);
	v->a[3557] = 1;
	v->a[3558] = anon_sym_LF;
	v->a[3559] = state(25);
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = 1;
	v->a[3561] = aux_sym__case_item_last_repeat2;
	v->a[3562] = state(117);
	v->a[3563] = 1;
	v->a[3564] = aux_sym__statements_repeat1;
	v->a[3565] = state(271);
	v->a[3566] = 1;
	v->a[3567] = sym_command_name;
	v->a[3568] = state(288);
	v->a[3569] = 1;
	v->a[3570] = sym_variable_assignment;
	v->a[3571] = state(482);
	v->a[3572] = 1;
	v->a[3573] = aux_sym_command_repeat1;
	v->a[3574] = state(600);
	v->a[3575] = 1;
	v->a[3576] = sym_file_redirect;
	v->a[3577] = state(602);
	v->a[3578] = 1;
	v->a[3579] = sym_concatenation;
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = state(1014);
	v->a[3581] = 1;
	v->a[3582] = sym_pipeline;
	v->a[3583] = state(1068);
	v->a[3584] = 1;
	v->a[3585] = aux_sym_redirected_statement_repeat2;
	v->a[3586] = state(1609);
	v->a[3587] = 1;
	v->a[3588] = sym__statement_not_pipeline;
	v->a[3589] = state(1735);
	v->a[3590] = 1;
	v->a[3591] = sym__statements;
	v->a[3592] = actions(11);
	v->a[3593] = 2;
	v->a[3594] = anon_sym_while;
	v->a[3595] = anon_sym_until;
	v->a[3596] = actions(59);
	v->a[3597] = 2;
	v->a[3598] = sym_raw_string;
	v->a[3599] = sym_number;
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
