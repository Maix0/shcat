/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_36.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_180(t_small_parse_table_array *v)
{
	v->a[3600] = sym_brace_expression;
	v->a[3601] = sym_string;
	v->a[3602] = sym_number;
	v->a[3603] = sym_simple_expansion;
	v->a[3604] = sym_expansion;
	v->a[3605] = sym_command_substitution;
	v->a[3606] = actions(1337);
	v->a[3607] = 22;
	v->a[3608] = anon_sym_esac;
	v->a[3609] = anon_sym_PIPE;
	v->a[3610] = anon_sym_SEMI_SEMI;
	v->a[3611] = anon_sym_SEMI_AMP;
	v->a[3612] = anon_sym_SEMI_SEMI_AMP;
	v->a[3613] = anon_sym_PIPE_AMP;
	v->a[3614] = anon_sym_AMP_AMP;
	v->a[3615] = anon_sym_PIPE_PIPE;
	v->a[3616] = anon_sym_LT;
	v->a[3617] = anon_sym_GT;
	v->a[3618] = anon_sym_GT_GT;
	v->a[3619] = anon_sym_AMP_GT;
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = anon_sym_AMP_GT_GT;
	v->a[3621] = anon_sym_LT_AMP;
	v->a[3622] = anon_sym_GT_AMP;
	v->a[3623] = anon_sym_GT_PIPE;
	v->a[3624] = anon_sym_LT_AMP_DASH;
	v->a[3625] = anon_sym_GT_AMP_DASH;
	v->a[3626] = anon_sym_LT_LT;
	v->a[3627] = anon_sym_LT_LT_DASH;
	v->a[3628] = anon_sym_AMP;
	v->a[3629] = anon_sym_SEMI;
	v->a[3630] = 21;
	v->a[3631] = actions(3);
	v->a[3632] = 1;
	v->a[3633] = sym_comment;
	v->a[3634] = actions(1009);
	v->a[3635] = 1;
	v->a[3636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3637] = actions(1011);
	v->a[3638] = 1;
	v->a[3639] = anon_sym_DOLLAR;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = actions(1013);
	v->a[3641] = 1;
	v->a[3642] = sym__special_character;
	v->a[3643] = actions(1015);
	v->a[3644] = 1;
	v->a[3645] = anon_sym_DQUOTE;
	v->a[3646] = actions(1017);
	v->a[3647] = 1;
	v->a[3648] = aux_sym_number_token1;
	v->a[3649] = actions(1019);
	v->a[3650] = 1;
	v->a[3651] = aux_sym_number_token2;
	v->a[3652] = actions(1021);
	v->a[3653] = 1;
	v->a[3654] = anon_sym_DOLLAR_LBRACE;
	v->a[3655] = actions(1023);
	v->a[3656] = 1;
	v->a[3657] = anon_sym_DOLLAR_LPAREN;
	v->a[3658] = actions(1025);
	v->a[3659] = 1;
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = anon_sym_BQUOTE;
	v->a[3661] = actions(1027);
	v->a[3662] = 1;
	v->a[3663] = anon_sym_DOLLAR_BQUOTE;
	v->a[3664] = actions(1031);
	v->a[3665] = 1;
	v->a[3666] = sym_variable_name;
	v->a[3667] = actions(1033);
	v->a[3668] = 1;
	v->a[3669] = sym_test_operator;
	v->a[3670] = actions(1035);
	v->a[3671] = 1;
	v->a[3672] = sym__brace_start;
	v->a[3673] = actions(1341);
	v->a[3674] = 1;
	v->a[3675] = aux_sym__simple_variable_name_token1;
	v->a[3676] = state(1024);
	v->a[3677] = 1;
	v->a[3678] = aux_sym__literal_repeat1;
	v->a[3679] = actions(727);
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = 2;
	v->a[3681] = sym_file_descriptor;
	v->a[3682] = aux_sym_heredoc_redirect_token1;
	v->a[3683] = actions(1007);
	v->a[3684] = 2;
	v->a[3685] = sym_raw_string;
	v->a[3686] = sym_word;
	v->a[3687] = state(304);
	v->a[3688] = 3;
	v->a[3689] = sym_variable_assignment;
	v->a[3690] = sym_concatenation;
	v->a[3691] = aux_sym_declaration_command_repeat1;
	v->a[3692] = state(656);
	v->a[3693] = 7;
	v->a[3694] = sym_arithmetic_expansion;
	v->a[3695] = sym_brace_expression;
	v->a[3696] = sym_string;
	v->a[3697] = sym_number;
	v->a[3698] = sym_simple_expansion;
	v->a[3699] = sym_expansion;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
