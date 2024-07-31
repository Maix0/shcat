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
	v->a[3700] = state(941);
	v->a[3701] = 1;
	v->a[3702] = sym_pipeline;
	v->a[3703] = state(1015);
	v->a[3704] = 1;
	v->a[3705] = aux_sym_redirected_statement_repeat2;
	v->a[3706] = state(1610);
	v->a[3707] = 1;
	v->a[3708] = sym__statement_not_pipeline;
	v->a[3709] = state(1618);
	v->a[3710] = 1;
	v->a[3711] = sym__statements;
	v->a[3712] = actions(83);
	v->a[3713] = 2;
	v->a[3714] = anon_sym_while;
	v->a[3715] = anon_sym_until;
	v->a[3716] = actions(105);
	v->a[3717] = 2;
	v->a[3718] = sym_raw_string;
	v->a[3719] = sym_number;
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = state(341);
	v->a[3721] = 5;
	v->a[3722] = sym_arithmetic_expansion;
	v->a[3723] = sym_string;
	v->a[3724] = sym_simple_expansion;
	v->a[3725] = sym_expansion;
	v->a[3726] = sym_command_substitution;
	v->a[3727] = actions(97);
	v->a[3728] = 7;
	v->a[3729] = anon_sym_LT;
	v->a[3730] = anon_sym_GT;
	v->a[3731] = anon_sym_GT_GT;
	v->a[3732] = anon_sym_LT_AMP;
	v->a[3733] = anon_sym_GT_AMP;
	v->a[3734] = anon_sym_GT_PIPE;
	v->a[3735] = anon_sym_LT_GT;
	v->a[3736] = state(819);
	v->a[3737] = 12;
	v->a[3738] = sym_redirected_statement;
	v->a[3739] = sym_for_statement;
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = sym_while_statement;
	v->a[3741] = sym_if_statement;
	v->a[3742] = sym_case_statement;
	v->a[3743] = sym_function_definition;
	v->a[3744] = sym_compound_statement;
	v->a[3745] = sym_subshell;
	v->a[3746] = sym_list;
	v->a[3747] = sym_negated_command;
	v->a[3748] = sym_command;
	v->a[3749] = sym__variable_assignments;
	v->a[3750] = 32;
	v->a[3751] = actions(3);
	v->a[3752] = 1;
	v->a[3753] = sym_comment;
	v->a[3754] = actions(79);
	v->a[3755] = 1;
	v->a[3756] = sym_word;
	v->a[3757] = actions(81);
	v->a[3758] = 1;
	v->a[3759] = anon_sym_for;
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = actions(85);
	v->a[3761] = 1;
	v->a[3762] = anon_sym_if;
	v->a[3763] = actions(87);
	v->a[3764] = 1;
	v->a[3765] = anon_sym_case;
	v->a[3766] = actions(89);
	v->a[3767] = 1;
	v->a[3768] = anon_sym_LPAREN;
	v->a[3769] = actions(93);
	v->a[3770] = 1;
	v->a[3771] = anon_sym_LBRACE;
	v->a[3772] = actions(95);
	v->a[3773] = 1;
	v->a[3774] = anon_sym_BANG;
	v->a[3775] = actions(99);
	v->a[3776] = 1;
	v->a[3777] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3778] = actions(101);
	v->a[3779] = 1;
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = anon_sym_DOLLAR;
	v->a[3781] = actions(103);
	v->a[3782] = 1;
	v->a[3783] = anon_sym_DQUOTE;
	v->a[3784] = actions(107);
	v->a[3785] = 1;
	v->a[3786] = anon_sym_DOLLAR_LBRACE;
	v->a[3787] = actions(109);
	v->a[3788] = 1;
	v->a[3789] = anon_sym_DOLLAR_LPAREN;
	v->a[3790] = actions(111);
	v->a[3791] = 1;
	v->a[3792] = anon_sym_BQUOTE;
	v->a[3793] = actions(113);
	v->a[3794] = 1;
	v->a[3795] = sym_variable_name;
	v->a[3796] = actions(115);
	v->a[3797] = 1;
	v->a[3798] = anon_sym_LF;
	v->a[3799] = state(112);
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
