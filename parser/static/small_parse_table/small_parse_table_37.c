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
	v->a[3700] = anon_sym_case;
	v->a[3701] = actions(17);
	v->a[3702] = 1;
	v->a[3703] = anon_sym_LPAREN;
	v->a[3704] = actions(19);
	v->a[3705] = 1;
	v->a[3706] = anon_sym_LBRACE;
	v->a[3707] = actions(45);
	v->a[3708] = 1;
	v->a[3709] = sym_word;
	v->a[3710] = actions(53);
	v->a[3711] = 1;
	v->a[3712] = anon_sym_BANG;
	v->a[3713] = actions(59);
	v->a[3714] = 1;
	v->a[3715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3716] = actions(61);
	v->a[3717] = 1;
	v->a[3718] = anon_sym_DOLLAR;
	v->a[3719] = actions(63);
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = 1;
	v->a[3721] = anon_sym_DQUOTE;
	v->a[3722] = actions(67);
	v->a[3723] = 1;
	v->a[3724] = anon_sym_DOLLAR_LBRACE;
	v->a[3725] = actions(69);
	v->a[3726] = 1;
	v->a[3727] = anon_sym_DOLLAR_LPAREN;
	v->a[3728] = actions(71);
	v->a[3729] = 1;
	v->a[3730] = anon_sym_BQUOTE;
	v->a[3731] = actions(73);
	v->a[3732] = 1;
	v->a[3733] = sym_file_descriptor;
	v->a[3734] = actions(75);
	v->a[3735] = 1;
	v->a[3736] = sym_variable_name;
	v->a[3737] = actions(208);
	v->a[3738] = 1;
	v->a[3739] = anon_sym_LF;
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = state(10);
	v->a[3741] = 1;
	v->a[3742] = aux_sym__case_item_last_repeat2;
	v->a[3743] = state(135);
	v->a[3744] = 1;
	v->a[3745] = aux_sym__statements_repeat1;
	v->a[3746] = state(189);
	v->a[3747] = 1;
	v->a[3748] = sym_command_name;
	v->a[3749] = state(303);
	v->a[3750] = 1;
	v->a[3751] = sym_variable_assignment;
	v->a[3752] = state(650);
	v->a[3753] = 1;
	v->a[3754] = sym_concatenation;
	v->a[3755] = state(712);
	v->a[3756] = 1;
	v->a[3757] = sym_file_redirect;
	v->a[3758] = state(713);
	v->a[3759] = 1;
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = aux_sym_command_repeat1;
	v->a[3761] = state(1227);
	v->a[3762] = 1;
	v->a[3763] = sym_pipeline;
	v->a[3764] = state(1333);
	v->a[3765] = 1;
	v->a[3766] = aux_sym_redirected_statement_repeat2;
	v->a[3767] = state(2103);
	v->a[3768] = 1;
	v->a[3769] = sym__statement_not_pipeline;
	v->a[3770] = state(2195);
	v->a[3771] = 1;
	v->a[3772] = sym__statements;
	v->a[3773] = actions(11);
	v->a[3774] = 2;
	v->a[3775] = anon_sym_while;
	v->a[3776] = anon_sym_until;
	v->a[3777] = actions(57);
	v->a[3778] = 2;
	v->a[3779] = anon_sym_LT_AMP_DASH;
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = anon_sym_GT_AMP_DASH;
	v->a[3781] = actions(65);
	v->a[3782] = 2;
	v->a[3783] = sym_raw_string;
	v->a[3784] = sym_number;
	v->a[3785] = state(443);
	v->a[3786] = 5;
	v->a[3787] = sym_arithmetic_expansion;
	v->a[3788] = sym_string;
	v->a[3789] = sym_simple_expansion;
	v->a[3790] = sym_expansion;
	v->a[3791] = sym_command_substitution;
	v->a[3792] = actions(55);
	v->a[3793] = 6;
	v->a[3794] = anon_sym_LT;
	v->a[3795] = anon_sym_GT;
	v->a[3796] = anon_sym_GT_GT;
	v->a[3797] = anon_sym_LT_AMP;
	v->a[3798] = anon_sym_GT_AMP;
	v->a[3799] = anon_sym_GT_PIPE;
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
