/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_37.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_185(t_small_parse_table_array *v)
{
	v->a[3700] = actions(81);
	v->a[3701] = 1;
	v->a[3702] = sym_file_descriptor;
	v->a[3703] = actions(83);
	v->a[3704] = 1;
	v->a[3705] = sym_variable_name;
	v->a[3706] = actions(141);
	v->a[3707] = 1;
	v->a[3708] = anon_sym_LF;
	v->a[3709] = state(131);
	v->a[3710] = 1;
	v->a[3711] = aux_sym__statements_repeat1;
	v->a[3712] = state(190);
	v->a[3713] = 1;
	v->a[3714] = sym_command_name;
	v->a[3715] = state(314);
	v->a[3716] = 1;
	v->a[3717] = sym_variable_assignment;
	v->a[3718] = state(582);
	v->a[3719] = 1;
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = sym_concatenation;
	v->a[3721] = state(587);
	v->a[3722] = 1;
	v->a[3723] = aux_sym_command_repeat1;
	v->a[3724] = state(689);
	v->a[3725] = 1;
	v->a[3726] = aux_sym__case_item_last_repeat2;
	v->a[3727] = state(718);
	v->a[3728] = 1;
	v->a[3729] = sym_file_redirect;
	v->a[3730] = state(1211);
	v->a[3731] = 1;
	v->a[3732] = sym_pipeline;
	v->a[3733] = state(1213);
	v->a[3734] = 1;
	v->a[3735] = aux_sym_redirected_statement_repeat2;
	v->a[3736] = state(2035);
	v->a[3737] = 1;
	v->a[3738] = sym__statement_not_pipeline;
	v->a[3739] = state(2063);
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = 1;
	v->a[3741] = sym__statements;
	v->a[3742] = actions(11);
	v->a[3743] = 2;
	v->a[3744] = anon_sym_while;
	v->a[3745] = anon_sym_until;
	v->a[3746] = actions(61);
	v->a[3747] = 2;
	v->a[3748] = anon_sym_LT_AMP_DASH;
	v->a[3749] = anon_sym_GT_AMP_DASH;
	v->a[3750] = state(397);
	v->a[3751] = 6;
	v->a[3752] = sym_arithmetic_expansion;
	v->a[3753] = sym_string;
	v->a[3754] = sym_number;
	v->a[3755] = sym_simple_expansion;
	v->a[3756] = sym_expansion;
	v->a[3757] = sym_command_substitution;
	v->a[3758] = actions(59);
	v->a[3759] = 8;
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = anon_sym_LT;
	v->a[3761] = anon_sym_GT;
	v->a[3762] = anon_sym_GT_GT;
	v->a[3763] = anon_sym_AMP_GT;
	v->a[3764] = anon_sym_AMP_GT_GT;
	v->a[3765] = anon_sym_LT_AMP;
	v->a[3766] = anon_sym_GT_AMP;
	v->a[3767] = anon_sym_GT_PIPE;
	v->a[3768] = state(1140);
	v->a[3769] = 12;
	v->a[3770] = sym_redirected_statement;
	v->a[3771] = sym_for_statement;
	v->a[3772] = sym_while_statement;
	v->a[3773] = sym_if_statement;
	v->a[3774] = sym_case_statement;
	v->a[3775] = sym_function_definition;
	v->a[3776] = sym_compound_statement;
	v->a[3777] = sym_subshell;
	v->a[3778] = sym_list;
	v->a[3779] = sym_negated_command;
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = sym_command;
	v->a[3781] = sym_variable_assignments;
	v->a[3782] = 36;
	v->a[3783] = actions(3);
	v->a[3784] = 1;
	v->a[3785] = sym_comment;
	v->a[3786] = actions(95);
	v->a[3787] = 1;
	v->a[3788] = sym_word;
	v->a[3789] = actions(97);
	v->a[3790] = 1;
	v->a[3791] = anon_sym_for;
	v->a[3792] = actions(101);
	v->a[3793] = 1;
	v->a[3794] = anon_sym_if;
	v->a[3795] = actions(103);
	v->a[3796] = 1;
	v->a[3797] = anon_sym_case;
	v->a[3798] = actions(105);
	v->a[3799] = 1;
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
