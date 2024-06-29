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
	v->a[3700] = state(2122);
	v->a[3701] = 1;
	v->a[3702] = sym__statement_not_pipeline;
	v->a[3703] = actions(91);
	v->a[3704] = 2;
	v->a[3705] = anon_sym_while;
	v->a[3706] = anon_sym_until;
	v->a[3707] = actions(107);
	v->a[3708] = 2;
	v->a[3709] = anon_sym_LT_AMP_DASH;
	v->a[3710] = anon_sym_GT_AMP_DASH;
	v->a[3711] = actions(115);
	v->a[3712] = 2;
	v->a[3713] = sym_raw_string;
	v->a[3714] = sym_number;
	v->a[3715] = state(289);
	v->a[3716] = 5;
	v->a[3717] = sym_arithmetic_expansion;
	v->a[3718] = sym_string;
	v->a[3719] = sym_simple_expansion;
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = sym_expansion;
	v->a[3721] = sym_command_substitution;
	v->a[3722] = actions(105);
	v->a[3723] = 8;
	v->a[3724] = anon_sym_LT;
	v->a[3725] = anon_sym_GT;
	v->a[3726] = anon_sym_GT_GT;
	v->a[3727] = anon_sym_AMP_GT;
	v->a[3728] = anon_sym_AMP_GT_GT;
	v->a[3729] = anon_sym_LT_AMP;
	v->a[3730] = anon_sym_GT_AMP;
	v->a[3731] = anon_sym_GT_PIPE;
	v->a[3732] = state(1086);
	v->a[3733] = 12;
	v->a[3734] = sym_redirected_statement;
	v->a[3735] = sym_for_statement;
	v->a[3736] = sym_while_statement;
	v->a[3737] = sym_if_statement;
	v->a[3738] = sym_case_statement;
	v->a[3739] = sym_function_definition;
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = sym_compound_statement;
	v->a[3741] = sym_subshell;
	v->a[3742] = sym_list;
	v->a[3743] = sym_negated_command;
	v->a[3744] = sym_command;
	v->a[3745] = sym__variable_assignments;
	v->a[3746] = 34;
	v->a[3747] = actions(3);
	v->a[3748] = 1;
	v->a[3749] = sym_comment;
	v->a[3750] = actions(87);
	v->a[3751] = 1;
	v->a[3752] = sym_word;
	v->a[3753] = actions(89);
	v->a[3754] = 1;
	v->a[3755] = anon_sym_for;
	v->a[3756] = actions(93);
	v->a[3757] = 1;
	v->a[3758] = anon_sym_if;
	v->a[3759] = actions(95);
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = 1;
	v->a[3761] = anon_sym_case;
	v->a[3762] = actions(97);
	v->a[3763] = 1;
	v->a[3764] = anon_sym_LPAREN;
	v->a[3765] = actions(101);
	v->a[3766] = 1;
	v->a[3767] = anon_sym_LBRACE;
	v->a[3768] = actions(103);
	v->a[3769] = 1;
	v->a[3770] = anon_sym_BANG;
	v->a[3771] = actions(109);
	v->a[3772] = 1;
	v->a[3773] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3774] = actions(111);
	v->a[3775] = 1;
	v->a[3776] = anon_sym_DOLLAR;
	v->a[3777] = actions(113);
	v->a[3778] = 1;
	v->a[3779] = anon_sym_DQUOTE;
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = actions(117);
	v->a[3781] = 1;
	v->a[3782] = anon_sym_DOLLAR_LBRACE;
	v->a[3783] = actions(119);
	v->a[3784] = 1;
	v->a[3785] = anon_sym_DOLLAR_LPAREN;
	v->a[3786] = actions(121);
	v->a[3787] = 1;
	v->a[3788] = anon_sym_BQUOTE;
	v->a[3789] = actions(123);
	v->a[3790] = 1;
	v->a[3791] = sym_file_descriptor;
	v->a[3792] = actions(125);
	v->a[3793] = 1;
	v->a[3794] = sym_variable_name;
	v->a[3795] = actions(208);
	v->a[3796] = 1;
	v->a[3797] = anon_sym_LF;
	v->a[3798] = state(26);
	v->a[3799] = 1;
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
