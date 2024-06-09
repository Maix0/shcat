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
	v->a[3601] = aux_sym_redirected_statement_repeat2;
	v->a[3602] = state(2035);
	v->a[3603] = 1;
	v->a[3604] = sym__statement_not_pipeline;
	v->a[3605] = state(2083);
	v->a[3606] = 1;
	v->a[3607] = sym__statements;
	v->a[3608] = actions(11);
	v->a[3609] = 2;
	v->a[3610] = anon_sym_while;
	v->a[3611] = anon_sym_until;
	v->a[3612] = actions(61);
	v->a[3613] = 2;
	v->a[3614] = anon_sym_LT_AMP_DASH;
	v->a[3615] = anon_sym_GT_AMP_DASH;
	v->a[3616] = state(397);
	v->a[3617] = 6;
	v->a[3618] = sym_arithmetic_expansion;
	v->a[3619] = sym_string;
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = sym_number;
	v->a[3621] = sym_simple_expansion;
	v->a[3622] = sym_expansion;
	v->a[3623] = sym_command_substitution;
	v->a[3624] = actions(59);
	v->a[3625] = 8;
	v->a[3626] = anon_sym_LT;
	v->a[3627] = anon_sym_GT;
	v->a[3628] = anon_sym_GT_GT;
	v->a[3629] = anon_sym_AMP_GT;
	v->a[3630] = anon_sym_AMP_GT_GT;
	v->a[3631] = anon_sym_LT_AMP;
	v->a[3632] = anon_sym_GT_AMP;
	v->a[3633] = anon_sym_GT_PIPE;
	v->a[3634] = state(1140);
	v->a[3635] = 12;
	v->a[3636] = sym_redirected_statement;
	v->a[3637] = sym_for_statement;
	v->a[3638] = sym_while_statement;
	v->a[3639] = sym_if_statement;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = sym_case_statement;
	v->a[3641] = sym_function_definition;
	v->a[3642] = sym_compound_statement;
	v->a[3643] = sym_subshell;
	v->a[3644] = sym_list;
	v->a[3645] = sym_negated_command;
	v->a[3646] = sym_command;
	v->a[3647] = sym_variable_assignments;
	v->a[3648] = 36;
	v->a[3649] = actions(3);
	v->a[3650] = 1;
	v->a[3651] = sym_comment;
	v->a[3652] = actions(9);
	v->a[3653] = 1;
	v->a[3654] = anon_sym_for;
	v->a[3655] = actions(13);
	v->a[3656] = 1;
	v->a[3657] = anon_sym_if;
	v->a[3658] = actions(15);
	v->a[3659] = 1;
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = anon_sym_case;
	v->a[3661] = actions(17);
	v->a[3662] = 1;
	v->a[3663] = anon_sym_LPAREN;
	v->a[3664] = actions(19);
	v->a[3665] = 1;
	v->a[3666] = anon_sym_LBRACE;
	v->a[3667] = actions(49);
	v->a[3668] = 1;
	v->a[3669] = sym_word;
	v->a[3670] = actions(57);
	v->a[3671] = 1;
	v->a[3672] = anon_sym_BANG;
	v->a[3673] = actions(63);
	v->a[3674] = 1;
	v->a[3675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3676] = actions(65);
	v->a[3677] = 1;
	v->a[3678] = anon_sym_DOLLAR;
	v->a[3679] = actions(67);
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = 1;
	v->a[3681] = anon_sym_DQUOTE;
	v->a[3682] = actions(69);
	v->a[3683] = 1;
	v->a[3684] = sym_raw_string;
	v->a[3685] = actions(71);
	v->a[3686] = 1;
	v->a[3687] = aux_sym_number_token1;
	v->a[3688] = actions(73);
	v->a[3689] = 1;
	v->a[3690] = aux_sym_number_token2;
	v->a[3691] = actions(75);
	v->a[3692] = 1;
	v->a[3693] = anon_sym_DOLLAR_LBRACE;
	v->a[3694] = actions(77);
	v->a[3695] = 1;
	v->a[3696] = anon_sym_DOLLAR_LPAREN;
	v->a[3697] = actions(79);
	v->a[3698] = 1;
	v->a[3699] = anon_sym_BQUOTE;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
