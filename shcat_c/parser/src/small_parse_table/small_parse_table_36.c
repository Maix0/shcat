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
	v->a[3600] = 1;
	v->a[3601] = anon_sym_DOLLAR_BQUOTE;
	v->a[3602] = actions(1904);
	v->a[3603] = 1;
	v->a[3604] = sym_file_descriptor;
	v->a[3605] = actions(1907);
	v->a[3606] = 1;
	v->a[3607] = sym_test_operator;
	v->a[3608] = actions(1910);
	v->a[3609] = 1;
	v->a[3610] = sym__bare_dollar;
	v->a[3611] = actions(1913);
	v->a[3612] = 1;
	v->a[3613] = sym__brace_start;
	v->a[3614] = state(562);
	v->a[3615] = 1;
	v->a[3616] = aux_sym_command_repeat2;
	v->a[3617] = state(1321);
	v->a[3618] = 1;
	v->a[3619] = aux_sym__literal_repeat1;
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = state(1712);
	v->a[3621] = 1;
	v->a[3622] = sym_herestring_redirect;
	v->a[3623] = state(1716);
	v->a[3624] = 1;
	v->a[3625] = sym_concatenation;
	v->a[3626] = actions(1862);
	v->a[3627] = 2;
	v->a[3628] = anon_sym_LPAREN_LPAREN;
	v->a[3629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3630] = actions(1865);
	v->a[3631] = 2;
	v->a[3632] = anon_sym_EQ_EQ;
	v->a[3633] = anon_sym_EQ_TILDE;
	v->a[3634] = actions(1901);
	v->a[3635] = 2;
	v->a[3636] = anon_sym_LT_LPAREN;
	v->a[3637] = anon_sym_GT_LPAREN;
	v->a[3638] = actions(1859);
	v->a[3639] = 3;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = sym_raw_string;
	v->a[3641] = sym_ansi_c_string;
	v->a[3642] = sym_word;
	v->a[3643] = state(1023);
	v->a[3644] = 9;
	v->a[3645] = sym_arithmetic_expansion;
	v->a[3646] = sym_brace_expression;
	v->a[3647] = sym_string;
	v->a[3648] = sym_translated_string;
	v->a[3649] = sym_number;
	v->a[3650] = sym_simple_expansion;
	v->a[3651] = sym_expansion;
	v->a[3652] = sym_command_substitution;
	v->a[3653] = sym_process_substitution;
	v->a[3654] = actions(1486);
	v->a[3655] = 20;
	v->a[3656] = anon_sym_SEMI;
	v->a[3657] = anon_sym_PIPE_PIPE;
	v->a[3658] = anon_sym_AMP_AMP;
	v->a[3659] = anon_sym_PIPE;
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = anon_sym_AMP;
	v->a[3661] = anon_sym_LT;
	v->a[3662] = anon_sym_GT;
	v->a[3663] = anon_sym_LT_LT;
	v->a[3664] = anon_sym_GT_GT;
	v->a[3665] = anon_sym_RPAREN;
	v->a[3666] = anon_sym_SEMI_SEMI;
	v->a[3667] = anon_sym_PIPE_AMP;
	v->a[3668] = anon_sym_AMP_GT;
	v->a[3669] = anon_sym_AMP_GT_GT;
	v->a[3670] = anon_sym_LT_AMP;
	v->a[3671] = anon_sym_GT_AMP;
	v->a[3672] = anon_sym_GT_PIPE;
	v->a[3673] = anon_sym_LT_AMP_DASH;
	v->a[3674] = anon_sym_GT_AMP_DASH;
	v->a[3675] = anon_sym_LT_LT_DASH;
	v->a[3676] = 24;
	v->a[3677] = actions(3);
	v->a[3678] = 1;
	v->a[3679] = sym_comment;
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = actions(1829);
	v->a[3681] = 1;
	v->a[3682] = anon_sym_DOLLAR_LBRACK;
	v->a[3683] = actions(1831);
	v->a[3684] = 1;
	v->a[3685] = anon_sym_DOLLAR;
	v->a[3686] = actions(1833);
	v->a[3687] = 1;
	v->a[3688] = sym__special_character;
	v->a[3689] = actions(1835);
	v->a[3690] = 1;
	v->a[3691] = anon_sym_DQUOTE;
	v->a[3692] = actions(1837);
	v->a[3693] = 1;
	v->a[3694] = aux_sym_number_token1;
	v->a[3695] = actions(1839);
	v->a[3696] = 1;
	v->a[3697] = aux_sym_number_token2;
	v->a[3698] = actions(1841);
	v->a[3699] = 1;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
