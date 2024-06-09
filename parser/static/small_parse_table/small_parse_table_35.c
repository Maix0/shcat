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
	v->a[3500] = state(1140);
	v->a[3501] = 12;
	v->a[3502] = sym_redirected_statement;
	v->a[3503] = sym_for_statement;
	v->a[3504] = sym_while_statement;
	v->a[3505] = sym_if_statement;
	v->a[3506] = sym_case_statement;
	v->a[3507] = sym_function_definition;
	v->a[3508] = sym_compound_statement;
	v->a[3509] = sym_subshell;
	v->a[3510] = sym_list;
	v->a[3511] = sym_negated_command;
	v->a[3512] = sym_command;
	v->a[3513] = sym_variable_assignments;
	v->a[3514] = 36;
	v->a[3515] = actions(3);
	v->a[3516] = 1;
	v->a[3517] = sym_comment;
	v->a[3518] = actions(9);
	v->a[3519] = 1;
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = anon_sym_for;
	v->a[3521] = actions(13);
	v->a[3522] = 1;
	v->a[3523] = anon_sym_if;
	v->a[3524] = actions(15);
	v->a[3525] = 1;
	v->a[3526] = anon_sym_case;
	v->a[3527] = actions(17);
	v->a[3528] = 1;
	v->a[3529] = anon_sym_LPAREN;
	v->a[3530] = actions(19);
	v->a[3531] = 1;
	v->a[3532] = anon_sym_LBRACE;
	v->a[3533] = actions(49);
	v->a[3534] = 1;
	v->a[3535] = sym_word;
	v->a[3536] = actions(57);
	v->a[3537] = 1;
	v->a[3538] = anon_sym_BANG;
	v->a[3539] = actions(63);
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = 1;
	v->a[3541] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3542] = actions(65);
	v->a[3543] = 1;
	v->a[3544] = anon_sym_DOLLAR;
	v->a[3545] = actions(67);
	v->a[3546] = 1;
	v->a[3547] = anon_sym_DQUOTE;
	v->a[3548] = actions(69);
	v->a[3549] = 1;
	v->a[3550] = sym_raw_string;
	v->a[3551] = actions(71);
	v->a[3552] = 1;
	v->a[3553] = aux_sym_number_token1;
	v->a[3554] = actions(73);
	v->a[3555] = 1;
	v->a[3556] = aux_sym_number_token2;
	v->a[3557] = actions(75);
	v->a[3558] = 1;
	v->a[3559] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = actions(77);
	v->a[3561] = 1;
	v->a[3562] = anon_sym_DOLLAR_LPAREN;
	v->a[3563] = actions(79);
	v->a[3564] = 1;
	v->a[3565] = anon_sym_BQUOTE;
	v->a[3566] = actions(81);
	v->a[3567] = 1;
	v->a[3568] = sym_file_descriptor;
	v->a[3569] = actions(83);
	v->a[3570] = 1;
	v->a[3571] = sym_variable_name;
	v->a[3572] = actions(222);
	v->a[3573] = 1;
	v->a[3574] = anon_sym_LF;
	v->a[3575] = state(20);
	v->a[3576] = 1;
	v->a[3577] = aux_sym__case_item_last_repeat2;
	v->a[3578] = state(131);
	v->a[3579] = 1;
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = aux_sym__statements_repeat1;
	v->a[3581] = state(190);
	v->a[3582] = 1;
	v->a[3583] = sym_command_name;
	v->a[3584] = state(314);
	v->a[3585] = 1;
	v->a[3586] = sym_variable_assignment;
	v->a[3587] = state(582);
	v->a[3588] = 1;
	v->a[3589] = sym_concatenation;
	v->a[3590] = state(587);
	v->a[3591] = 1;
	v->a[3592] = aux_sym_command_repeat1;
	v->a[3593] = state(718);
	v->a[3594] = 1;
	v->a[3595] = sym_file_redirect;
	v->a[3596] = state(1211);
	v->a[3597] = 1;
	v->a[3598] = sym_pipeline;
	v->a[3599] = state(1213);
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
