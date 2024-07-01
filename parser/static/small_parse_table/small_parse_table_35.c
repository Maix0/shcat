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
	v->a[3500] = state(636);
	v->a[3501] = 1;
	v->a[3502] = sym_concatenation;
	v->a[3503] = state(677);
	v->a[3504] = 1;
	v->a[3505] = sym_file_redirect;
	v->a[3506] = state(752);
	v->a[3507] = 1;
	v->a[3508] = aux_sym_command_repeat1;
	v->a[3509] = state(1133);
	v->a[3510] = 1;
	v->a[3511] = sym_pipeline;
	v->a[3512] = state(1226);
	v->a[3513] = 1;
	v->a[3514] = aux_sym_redirected_statement_repeat2;
	v->a[3515] = state(2105);
	v->a[3516] = 1;
	v->a[3517] = sym__statements;
	v->a[3518] = state(2111);
	v->a[3519] = 1;
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = sym__statement_not_pipeline;
	v->a[3521] = actions(160);
	v->a[3522] = 2;
	v->a[3523] = anon_sym_while;
	v->a[3524] = anon_sym_until;
	v->a[3525] = actions(174);
	v->a[3526] = 2;
	v->a[3527] = anon_sym_LT_AMP_DASH;
	v->a[3528] = anon_sym_GT_AMP_DASH;
	v->a[3529] = actions(182);
	v->a[3530] = 2;
	v->a[3531] = sym_raw_string;
	v->a[3532] = sym_number;
	v->a[3533] = state(385);
	v->a[3534] = 5;
	v->a[3535] = sym_arithmetic_expansion;
	v->a[3536] = sym_string;
	v->a[3537] = sym_simple_expansion;
	v->a[3538] = sym_expansion;
	v->a[3539] = sym_command_substitution;
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = actions(172);
	v->a[3541] = 6;
	v->a[3542] = anon_sym_LT;
	v->a[3543] = anon_sym_GT;
	v->a[3544] = anon_sym_GT_GT;
	v->a[3545] = anon_sym_LT_AMP;
	v->a[3546] = anon_sym_GT_AMP;
	v->a[3547] = anon_sym_GT_PIPE;
	v->a[3548] = state(1075);
	v->a[3549] = 12;
	v->a[3550] = sym_redirected_statement;
	v->a[3551] = sym_for_statement;
	v->a[3552] = sym_while_statement;
	v->a[3553] = sym_if_statement;
	v->a[3554] = sym_case_statement;
	v->a[3555] = sym_function_definition;
	v->a[3556] = sym_compound_statement;
	v->a[3557] = sym_subshell;
	v->a[3558] = sym_list;
	v->a[3559] = sym_negated_command;
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = sym_command;
	v->a[3561] = sym__variable_assignments;
	v->a[3562] = 34;
	v->a[3563] = actions(3);
	v->a[3564] = 1;
	v->a[3565] = sym_comment;
	v->a[3566] = actions(87);
	v->a[3567] = 1;
	v->a[3568] = anon_sym_LF;
	v->a[3569] = actions(156);
	v->a[3570] = 1;
	v->a[3571] = sym_word;
	v->a[3572] = actions(158);
	v->a[3573] = 1;
	v->a[3574] = anon_sym_for;
	v->a[3575] = actions(162);
	v->a[3576] = 1;
	v->a[3577] = anon_sym_if;
	v->a[3578] = actions(164);
	v->a[3579] = 1;
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = anon_sym_case;
	v->a[3581] = actions(166);
	v->a[3582] = 1;
	v->a[3583] = anon_sym_LPAREN;
	v->a[3584] = actions(168);
	v->a[3585] = 1;
	v->a[3586] = anon_sym_LBRACE;
	v->a[3587] = actions(170);
	v->a[3588] = 1;
	v->a[3589] = anon_sym_BANG;
	v->a[3590] = actions(176);
	v->a[3591] = 1;
	v->a[3592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3593] = actions(178);
	v->a[3594] = 1;
	v->a[3595] = anon_sym_DOLLAR;
	v->a[3596] = actions(180);
	v->a[3597] = 1;
	v->a[3598] = anon_sym_DQUOTE;
	v->a[3599] = actions(184);
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
