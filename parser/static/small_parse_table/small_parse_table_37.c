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
	v->a[3701] = actions(725);
	v->a[3702] = 20;
	v->a[3703] = anon_sym_PIPE;
	v->a[3704] = anon_sym_RPAREN;
	v->a[3705] = anon_sym_SEMI_SEMI;
	v->a[3706] = anon_sym_PIPE_AMP;
	v->a[3707] = anon_sym_AMP_AMP;
	v->a[3708] = anon_sym_PIPE_PIPE;
	v->a[3709] = anon_sym_LT;
	v->a[3710] = anon_sym_GT;
	v->a[3711] = anon_sym_GT_GT;
	v->a[3712] = anon_sym_AMP_GT;
	v->a[3713] = anon_sym_AMP_GT_GT;
	v->a[3714] = anon_sym_LT_AMP;
	v->a[3715] = anon_sym_GT_AMP;
	v->a[3716] = anon_sym_GT_PIPE;
	v->a[3717] = anon_sym_LT_AMP_DASH;
	v->a[3718] = anon_sym_GT_AMP_DASH;
	v->a[3719] = anon_sym_LT_LT;
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = anon_sym_LT_LT_DASH;
	v->a[3721] = anon_sym_AMP;
	v->a[3722] = anon_sym_SEMI;
	v->a[3723] = 6;
	v->a[3724] = actions(3);
	v->a[3725] = 1;
	v->a[3726] = sym_comment;
	v->a[3727] = actions(1335);
	v->a[3728] = 1;
	v->a[3729] = sym_variable_name;
	v->a[3730] = actions(1333);
	v->a[3731] = 2;
	v->a[3732] = aux_sym__simple_variable_name_token1;
	v->a[3733] = aux_sym__multiline_variable_name_token1;
	v->a[3734] = actions(828);
	v->a[3735] = 3;
	v->a[3736] = sym_file_descriptor;
	v->a[3737] = sym_test_operator;
	v->a[3738] = sym__brace_start;
	v->a[3739] = actions(1331);
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = 9;
	v->a[3741] = anon_sym_BANG;
	v->a[3742] = anon_sym_DASH;
	v->a[3743] = anon_sym_STAR;
	v->a[3744] = anon_sym_QMARK;
	v->a[3745] = anon_sym_DOLLAR;
	v->a[3746] = anon_sym_POUND;
	v->a[3747] = anon_sym_AT;
	v->a[3748] = anon_sym_0;
	v->a[3749] = anon_sym__;
	v->a[3750] = actions(826);
	v->a[3751] = 34;
	v->a[3752] = anon_sym_esac;
	v->a[3753] = anon_sym_PIPE;
	v->a[3754] = anon_sym_SEMI_SEMI;
	v->a[3755] = anon_sym_SEMI_AMP;
	v->a[3756] = anon_sym_SEMI_SEMI_AMP;
	v->a[3757] = anon_sym_PIPE_AMP;
	v->a[3758] = anon_sym_AMP_AMP;
	v->a[3759] = anon_sym_PIPE_PIPE;
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
	v->a[3768] = anon_sym_LT_AMP_DASH;
	v->a[3769] = anon_sym_GT_AMP_DASH;
	v->a[3770] = anon_sym_LT_LT;
	v->a[3771] = anon_sym_LT_LT_DASH;
	v->a[3772] = aux_sym_heredoc_redirect_token1;
	v->a[3773] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3774] = anon_sym_AMP;
	v->a[3775] = sym__special_character;
	v->a[3776] = anon_sym_DQUOTE;
	v->a[3777] = sym_raw_string;
	v->a[3778] = aux_sym_number_token1;
	v->a[3779] = aux_sym_number_token2;
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = anon_sym_DOLLAR_LBRACE;
	v->a[3781] = anon_sym_DOLLAR_LPAREN;
	v->a[3782] = anon_sym_BQUOTE;
	v->a[3783] = anon_sym_DOLLAR_BQUOTE;
	v->a[3784] = sym_word;
	v->a[3785] = anon_sym_SEMI;
	v->a[3786] = 21;
	v->a[3787] = actions(3);
	v->a[3788] = 1;
	v->a[3789] = sym_comment;
	v->a[3790] = actions(1346);
	v->a[3791] = 1;
	v->a[3792] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3793] = actions(1349);
	v->a[3794] = 1;
	v->a[3795] = anon_sym_DOLLAR;
	v->a[3796] = actions(1352);
	v->a[3797] = 1;
	v->a[3798] = sym__special_character;
	v->a[3799] = actions(1355);
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
