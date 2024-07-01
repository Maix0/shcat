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
	v->a[3700] = sym_command_substitution;
	v->a[3701] = actions(105);
	v->a[3702] = 7;
	v->a[3703] = anon_sym_LT;
	v->a[3704] = anon_sym_GT;
	v->a[3705] = anon_sym_GT_GT;
	v->a[3706] = anon_sym_LT_AMP;
	v->a[3707] = anon_sym_GT_AMP;
	v->a[3708] = anon_sym_GT_PIPE;
	v->a[3709] = anon_sym_LT_GT;
	v->a[3710] = state(1005);
	v->a[3711] = 12;
	v->a[3712] = sym_redirected_statement;
	v->a[3713] = sym_for_statement;
	v->a[3714] = sym_while_statement;
	v->a[3715] = sym_if_statement;
	v->a[3716] = sym_case_statement;
	v->a[3717] = sym_function_definition;
	v->a[3718] = sym_compound_statement;
	v->a[3719] = sym_subshell;
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = sym_list;
	v->a[3721] = sym_negated_command;
	v->a[3722] = sym_command;
	v->a[3723] = sym__variable_assignments;
	v->a[3724] = 31;
	v->a[3725] = actions(3);
	v->a[3726] = 1;
	v->a[3727] = sym_comment;
	v->a[3728] = actions(9);
	v->a[3729] = 1;
	v->a[3730] = anon_sym_for;
	v->a[3731] = actions(13);
	v->a[3732] = 1;
	v->a[3733] = anon_sym_if;
	v->a[3734] = actions(15);
	v->a[3735] = 1;
	v->a[3736] = anon_sym_case;
	v->a[3737] = actions(17);
	v->a[3738] = 1;
	v->a[3739] = anon_sym_LPAREN;
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = actions(19);
	v->a[3741] = 1;
	v->a[3742] = anon_sym_LBRACE;
	v->a[3743] = actions(43);
	v->a[3744] = 1;
	v->a[3745] = sym_word;
	v->a[3746] = actions(51);
	v->a[3747] = 1;
	v->a[3748] = anon_sym_BANG;
	v->a[3749] = actions(55);
	v->a[3750] = 1;
	v->a[3751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3752] = actions(57);
	v->a[3753] = 1;
	v->a[3754] = anon_sym_DOLLAR;
	v->a[3755] = actions(59);
	v->a[3756] = 1;
	v->a[3757] = anon_sym_DQUOTE;
	v->a[3758] = actions(63);
	v->a[3759] = 1;
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = anon_sym_DOLLAR_LBRACE;
	v->a[3761] = actions(65);
	v->a[3762] = 1;
	v->a[3763] = anon_sym_DOLLAR_LPAREN;
	v->a[3764] = actions(67);
	v->a[3765] = 1;
	v->a[3766] = anon_sym_BQUOTE;
	v->a[3767] = actions(69);
	v->a[3768] = 1;
	v->a[3769] = sym_file_descriptor;
	v->a[3770] = actions(71);
	v->a[3771] = 1;
	v->a[3772] = sym_variable_name;
	v->a[3773] = state(30);
	v->a[3774] = 1;
	v->a[3775] = aux_sym__terminated_statement;
	v->a[3776] = state(183);
	v->a[3777] = 1;
	v->a[3778] = sym_command_name;
	v->a[3779] = state(274);
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = 1;
	v->a[3781] = sym_variable_assignment;
	v->a[3782] = state(603);
	v->a[3783] = 1;
	v->a[3784] = sym_concatenation;
	v->a[3785] = state(639);
	v->a[3786] = 1;
	v->a[3787] = aux_sym_command_repeat1;
	v->a[3788] = state(644);
	v->a[3789] = 1;
	v->a[3790] = sym_file_redirect;
	v->a[3791] = state(1170);
	v->a[3792] = 1;
	v->a[3793] = sym_pipeline;
	v->a[3794] = state(1196);
	v->a[3795] = 1;
	v->a[3796] = aux_sym_redirected_statement_repeat2;
	v->a[3797] = state(1910);
	v->a[3798] = 1;
	v->a[3799] = sym__statement_not_pipeline;
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
