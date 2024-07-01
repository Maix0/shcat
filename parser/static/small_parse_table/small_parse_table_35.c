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
	v->a[3500] = anon_sym_LBRACE;
	v->a[3501] = actions(43);
	v->a[3502] = 1;
	v->a[3503] = sym_word;
	v->a[3504] = actions(51);
	v->a[3505] = 1;
	v->a[3506] = anon_sym_BANG;
	v->a[3507] = actions(55);
	v->a[3508] = 1;
	v->a[3509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3510] = actions(57);
	v->a[3511] = 1;
	v->a[3512] = anon_sym_DOLLAR;
	v->a[3513] = actions(59);
	v->a[3514] = 1;
	v->a[3515] = anon_sym_DQUOTE;
	v->a[3516] = actions(63);
	v->a[3517] = 1;
	v->a[3518] = anon_sym_DOLLAR_LBRACE;
	v->a[3519] = actions(65);
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = 1;
	v->a[3521] = anon_sym_DOLLAR_LPAREN;
	v->a[3522] = actions(67);
	v->a[3523] = 1;
	v->a[3524] = anon_sym_BQUOTE;
	v->a[3525] = actions(69);
	v->a[3526] = 1;
	v->a[3527] = sym_file_descriptor;
	v->a[3528] = actions(71);
	v->a[3529] = 1;
	v->a[3530] = sym_variable_name;
	v->a[3531] = state(27);
	v->a[3532] = 1;
	v->a[3533] = aux_sym__terminated_statement;
	v->a[3534] = state(183);
	v->a[3535] = 1;
	v->a[3536] = sym_command_name;
	v->a[3537] = state(274);
	v->a[3538] = 1;
	v->a[3539] = sym_variable_assignment;
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = state(603);
	v->a[3541] = 1;
	v->a[3542] = sym_concatenation;
	v->a[3543] = state(639);
	v->a[3544] = 1;
	v->a[3545] = aux_sym_command_repeat1;
	v->a[3546] = state(644);
	v->a[3547] = 1;
	v->a[3548] = sym_file_redirect;
	v->a[3549] = state(1170);
	v->a[3550] = 1;
	v->a[3551] = sym_pipeline;
	v->a[3552] = state(1196);
	v->a[3553] = 1;
	v->a[3554] = aux_sym_redirected_statement_repeat2;
	v->a[3555] = state(1910);
	v->a[3556] = 1;
	v->a[3557] = sym__statement_not_pipeline;
	v->a[3558] = actions(11);
	v->a[3559] = 2;
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = anon_sym_while;
	v->a[3561] = anon_sym_until;
	v->a[3562] = actions(61);
	v->a[3563] = 2;
	v->a[3564] = sym_raw_string;
	v->a[3565] = sym_number;
	v->a[3566] = actions(199);
	v->a[3567] = 3;
	v->a[3568] = anon_sym_fi;
	v->a[3569] = anon_sym_elif;
	v->a[3570] = anon_sym_else;
	v->a[3571] = state(436);
	v->a[3572] = 5;
	v->a[3573] = sym_arithmetic_expansion;
	v->a[3574] = sym_string;
	v->a[3575] = sym_simple_expansion;
	v->a[3576] = sym_expansion;
	v->a[3577] = sym_command_substitution;
	v->a[3578] = actions(53);
	v->a[3579] = 7;
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = anon_sym_LT;
	v->a[3581] = anon_sym_GT;
	v->a[3582] = anon_sym_GT_GT;
	v->a[3583] = anon_sym_LT_AMP;
	v->a[3584] = anon_sym_GT_AMP;
	v->a[3585] = anon_sym_GT_PIPE;
	v->a[3586] = anon_sym_LT_GT;
	v->a[3587] = state(1079);
	v->a[3588] = 12;
	v->a[3589] = sym_redirected_statement;
	v->a[3590] = sym_for_statement;
	v->a[3591] = sym_while_statement;
	v->a[3592] = sym_if_statement;
	v->a[3593] = sym_case_statement;
	v->a[3594] = sym_function_definition;
	v->a[3595] = sym_compound_statement;
	v->a[3596] = sym_subshell;
	v->a[3597] = sym_list;
	v->a[3598] = sym_negated_command;
	v->a[3599] = sym_command;
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
