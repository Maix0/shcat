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
	v->a[3700] = 1;
	v->a[3701] = aux_sym_redirected_statement_repeat2;
	v->a[3702] = state(1561);
	v->a[3703] = 1;
	v->a[3704] = sym__statement_not_pipeline;
	v->a[3705] = state(1607);
	v->a[3706] = 1;
	v->a[3707] = sym__statements;
	v->a[3708] = actions(11);
	v->a[3709] = 2;
	v->a[3710] = anon_sym_while;
	v->a[3711] = anon_sym_until;
	v->a[3712] = actions(59);
	v->a[3713] = 2;
	v->a[3714] = sym_raw_string;
	v->a[3715] = sym_number;
	v->a[3716] = actions(51);
	v->a[3717] = 3;
	v->a[3718] = anon_sym_LT;
	v->a[3719] = anon_sym_GT;
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = anon_sym_GT_GT;
	v->a[3721] = state(401);
	v->a[3722] = 5;
	v->a[3723] = sym_arithmetic_expansion;
	v->a[3724] = sym_string;
	v->a[3725] = sym_simple_expansion;
	v->a[3726] = sym_expansion;
	v->a[3727] = sym_command_substitution;
	v->a[3728] = state(972);
	v->a[3729] = 12;
	v->a[3730] = sym_redirected_statement;
	v->a[3731] = sym_for_statement;
	v->a[3732] = sym_while_statement;
	v->a[3733] = sym_if_statement;
	v->a[3734] = sym_case_statement;
	v->a[3735] = sym_function_definition;
	v->a[3736] = sym_compound_statement;
	v->a[3737] = sym_subshell;
	v->a[3738] = sym_list;
	v->a[3739] = sym_negated_command;
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = sym_command;
	v->a[3741] = sym__variable_assignments;
	v->a[3742] = 32;
	v->a[3743] = actions(3);
	v->a[3744] = 1;
	v->a[3745] = sym_comment;
	v->a[3746] = actions(79);
	v->a[3747] = 1;
	v->a[3748] = sym_word;
	v->a[3749] = actions(81);
	v->a[3750] = 1;
	v->a[3751] = anon_sym_for;
	v->a[3752] = actions(85);
	v->a[3753] = 1;
	v->a[3754] = anon_sym_if;
	v->a[3755] = actions(87);
	v->a[3756] = 1;
	v->a[3757] = anon_sym_case;
	v->a[3758] = actions(89);
	v->a[3759] = 1;
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = anon_sym_LPAREN;
	v->a[3761] = actions(93);
	v->a[3762] = 1;
	v->a[3763] = anon_sym_LBRACE;
	v->a[3764] = actions(95);
	v->a[3765] = 1;
	v->a[3766] = anon_sym_BANG;
	v->a[3767] = actions(99);
	v->a[3768] = 1;
	v->a[3769] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3770] = actions(101);
	v->a[3771] = 1;
	v->a[3772] = anon_sym_DOLLAR;
	v->a[3773] = actions(103);
	v->a[3774] = 1;
	v->a[3775] = anon_sym_DQUOTE;
	v->a[3776] = actions(107);
	v->a[3777] = 1;
	v->a[3778] = anon_sym_DOLLAR_LBRACE;
	v->a[3779] = actions(109);
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = 1;
	v->a[3781] = anon_sym_DOLLAR_LPAREN;
	v->a[3782] = actions(111);
	v->a[3783] = 1;
	v->a[3784] = anon_sym_BQUOTE;
	v->a[3785] = actions(113);
	v->a[3786] = 1;
	v->a[3787] = sym_variable_name;
	v->a[3788] = actions(115);
	v->a[3789] = 1;
	v->a[3790] = anon_sym_LF;
	v->a[3791] = state(104);
	v->a[3792] = 1;
	v->a[3793] = aux_sym__statements_repeat1;
	v->a[3794] = state(170);
	v->a[3795] = 1;
	v->a[3796] = sym_command_name;
	v->a[3797] = state(177);
	v->a[3798] = 1;
	v->a[3799] = sym_variable_assignment;
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
