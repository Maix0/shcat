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
	v->a[3700] = anon_sym_DOLLAR_LBRACE;
	v->a[3701] = actions(1843);
	v->a[3702] = 1;
	v->a[3703] = anon_sym_DOLLAR_LPAREN;
	v->a[3704] = actions(1845);
	v->a[3705] = 1;
	v->a[3706] = anon_sym_BQUOTE;
	v->a[3707] = actions(1847);
	v->a[3708] = 1;
	v->a[3709] = anon_sym_DOLLAR_BQUOTE;
	v->a[3710] = actions(1853);
	v->a[3711] = 1;
	v->a[3712] = sym_variable_name;
	v->a[3713] = actions(1855);
	v->a[3714] = 1;
	v->a[3715] = sym_test_operator;
	v->a[3716] = actions(1857);
	v->a[3717] = 1;
	v->a[3718] = sym__brace_start;
	v->a[3719] = actions(1916);
	small_parse_table_186(v);
}

void	small_parse_table_186(t_small_parse_table_array *v)
{
	v->a[3720] = 1;
	v->a[3721] = aux_sym__simple_variable_name_token1;
	v->a[3722] = state(1699);
	v->a[3723] = 1;
	v->a[3724] = aux_sym__literal_repeat1;
	v->a[3725] = state(6769);
	v->a[3726] = 1;
	v->a[3727] = sym_subscript;
	v->a[3728] = actions(1757);
	v->a[3729] = 2;
	v->a[3730] = sym_file_descriptor;
	v->a[3731] = aux_sym_heredoc_redirect_token1;
	v->a[3732] = actions(1827);
	v->a[3733] = 2;
	v->a[3734] = anon_sym_LPAREN_LPAREN;
	v->a[3735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3736] = actions(1849);
	v->a[3737] = 2;
	v->a[3738] = anon_sym_LT_LPAREN;
	v->a[3739] = anon_sym_GT_LPAREN;
	small_parse_table_187(v);
}

void	small_parse_table_187(t_small_parse_table_array *v)
{
	v->a[3740] = actions(1825);
	v->a[3741] = 3;
	v->a[3742] = sym_raw_string;
	v->a[3743] = sym_ansi_c_string;
	v->a[3744] = sym_word;
	v->a[3745] = state(559);
	v->a[3746] = 3;
	v->a[3747] = sym_variable_assignment;
	v->a[3748] = sym_concatenation;
	v->a[3749] = aux_sym_declaration_command_repeat1;
	v->a[3750] = state(1171);
	v->a[3751] = 9;
	v->a[3752] = sym_arithmetic_expansion;
	v->a[3753] = sym_brace_expression;
	v->a[3754] = sym_string;
	v->a[3755] = sym_translated_string;
	v->a[3756] = sym_number;
	v->a[3757] = sym_simple_expansion;
	v->a[3758] = sym_expansion;
	v->a[3759] = sym_command_substitution;
	small_parse_table_188(v);
}

void	small_parse_table_188(t_small_parse_table_array *v)
{
	v->a[3760] = sym_process_substitution;
	v->a[3761] = actions(1755);
	v->a[3762] = 21;
	v->a[3763] = anon_sym_SEMI;
	v->a[3764] = anon_sym_PIPE_PIPE;
	v->a[3765] = anon_sym_AMP_AMP;
	v->a[3766] = anon_sym_PIPE;
	v->a[3767] = anon_sym_AMP;
	v->a[3768] = anon_sym_LT;
	v->a[3769] = anon_sym_GT;
	v->a[3770] = anon_sym_LT_LT;
	v->a[3771] = anon_sym_GT_GT;
	v->a[3772] = anon_sym_SEMI_SEMI;
	v->a[3773] = anon_sym_SEMI_AMP;
	v->a[3774] = anon_sym_SEMI_SEMI_AMP;
	v->a[3775] = anon_sym_PIPE_AMP;
	v->a[3776] = anon_sym_AMP_GT;
	v->a[3777] = anon_sym_AMP_GT_GT;
	v->a[3778] = anon_sym_LT_AMP;
	v->a[3779] = anon_sym_GT_AMP;
	small_parse_table_189(v);
}

void	small_parse_table_189(t_small_parse_table_array *v)
{
	v->a[3780] = anon_sym_GT_PIPE;
	v->a[3781] = anon_sym_LT_AMP_DASH;
	v->a[3782] = anon_sym_GT_AMP_DASH;
	v->a[3783] = anon_sym_LT_LT_DASH;
	v->a[3784] = 8;
	v->a[3785] = actions(3);
	v->a[3786] = 1;
	v->a[3787] = sym_comment;
	v->a[3788] = actions(1811);
	v->a[3789] = 1;
	v->a[3790] = anon_sym_DQUOTE;
	v->a[3791] = actions(1815);
	v->a[3792] = 1;
	v->a[3793] = sym_variable_name;
	v->a[3794] = state(1061);
	v->a[3795] = 1;
	v->a[3796] = sym_string;
	v->a[3797] = actions(1813);
	v->a[3798] = 2;
	v->a[3799] = aux_sym__simple_variable_name_token1;
	small_parse_table_190(v);
}

/* EOF small_parse_table_37.c */
