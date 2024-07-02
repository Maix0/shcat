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
	v->a[3700] = anon_sym_GT;
	v->a[3701] = anon_sym_GT_GT;
	v->a[3702] = anon_sym_LT_AMP;
	v->a[3703] = anon_sym_GT_AMP;
	v->a[3704] = anon_sym_GT_PIPE;
	v->a[3705] = anon_sym_LT_GT;
	v->a[3706] = state(1088);
	v->a[3707] = 12;
	v->a[3708] = sym_redirected_statement;
	v->a[3709] = sym_for_statement;
	v->a[3710] = sym_while_statement;
	v->a[3711] = sym_if_statement;
	v->a[3712] = sym_case_statement;
	v->a[3713] = sym_function_definition;
	v->a[3714] = sym_compound_statement;
	v->a[3715] = sym_subshell;
	v->a[3716] = sym_list;
	v->a[3717] = sym_negated_command;
	v->a[3718] = sym_command;
	v->a[3719] = sym__variable_assignments;
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = 33;
	v->a[3721] = actions(3);
	v->a[3722] = 1;
	v->a[3723] = sym_comment;
	v->a[3724] = actions(9);
	v->a[3725] = 1;
	v->a[3726] = anon_sym_for;
	v->a[3727] = actions(13);
	v->a[3728] = 1;
	v->a[3729] = anon_sym_if;
	v->a[3730] = actions(15);
	v->a[3731] = 1;
	v->a[3732] = anon_sym_case;
	v->a[3733] = actions(17);
	v->a[3734] = 1;
	v->a[3735] = anon_sym_LPAREN;
	v->a[3736] = actions(19);
	v->a[3737] = 1;
	v->a[3738] = anon_sym_LBRACE;
	v->a[3739] = actions(43);
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = 1;
	v->a[3741] = sym_word;
	v->a[3742] = actions(51);
	v->a[3743] = 1;
	v->a[3744] = anon_sym_BANG;
	v->a[3745] = actions(55);
	v->a[3746] = 1;
	v->a[3747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3748] = actions(57);
	v->a[3749] = 1;
	v->a[3750] = anon_sym_DOLLAR;
	v->a[3751] = actions(59);
	v->a[3752] = 1;
	v->a[3753] = anon_sym_DQUOTE;
	v->a[3754] = actions(63);
	v->a[3755] = 1;
	v->a[3756] = anon_sym_DOLLAR_LBRACE;
	v->a[3757] = actions(65);
	v->a[3758] = 1;
	v->a[3759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = actions(67);
	v->a[3761] = 1;
	v->a[3762] = anon_sym_BQUOTE;
	v->a[3763] = actions(69);
	v->a[3764] = 1;
	v->a[3765] = sym_file_descriptor;
	v->a[3766] = actions(71);
	v->a[3767] = 1;
	v->a[3768] = sym_variable_name;
	v->a[3769] = actions(95);
	v->a[3770] = 1;
	v->a[3771] = anon_sym_LF;
	v->a[3772] = state(129);
	v->a[3773] = 1;
	v->a[3774] = aux_sym__statements_repeat1;
	v->a[3775] = state(182);
	v->a[3776] = 1;
	v->a[3777] = sym_command_name;
	v->a[3778] = state(261);
	v->a[3779] = 1;
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = sym_variable_assignment;
	v->a[3781] = state(584);
	v->a[3782] = 1;
	v->a[3783] = sym_concatenation;
	v->a[3784] = state(620);
	v->a[3785] = 1;
	v->a[3786] = sym_file_redirect;
	v->a[3787] = state(623);
	v->a[3788] = 1;
	v->a[3789] = aux_sym_command_repeat1;
	v->a[3790] = state(672);
	v->a[3791] = 1;
	v->a[3792] = aux_sym__case_item_last_repeat2;
	v->a[3793] = state(1114);
	v->a[3794] = 1;
	v->a[3795] = sym_pipeline;
	v->a[3796] = state(1201);
	v->a[3797] = 1;
	v->a[3798] = aux_sym_redirected_statement_repeat2;
	v->a[3799] = state(1911);
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
