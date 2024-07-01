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
	v->a[3601] = anon_sym_DOLLAR_LBRACE;
	v->a[3602] = actions(186);
	v->a[3603] = 1;
	v->a[3604] = anon_sym_DOLLAR_LPAREN;
	v->a[3605] = actions(188);
	v->a[3606] = 1;
	v->a[3607] = anon_sym_BQUOTE;
	v->a[3608] = actions(190);
	v->a[3609] = 1;
	v->a[3610] = sym_file_descriptor;
	v->a[3611] = actions(192);
	v->a[3612] = 1;
	v->a[3613] = sym_variable_name;
	v->a[3614] = state(140);
	v->a[3615] = 1;
	v->a[3616] = aux_sym__statements_repeat1;
	v->a[3617] = state(186);
	v->a[3618] = 1;
	v->a[3619] = sym_command_name;
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = state(213);
	v->a[3621] = 1;
	v->a[3622] = sym_variable_assignment;
	v->a[3623] = state(636);
	v->a[3624] = 1;
	v->a[3625] = sym_concatenation;
	v->a[3626] = state(677);
	v->a[3627] = 1;
	v->a[3628] = sym_file_redirect;
	v->a[3629] = state(678);
	v->a[3630] = 1;
	v->a[3631] = aux_sym__case_item_last_repeat2;
	v->a[3632] = state(752);
	v->a[3633] = 1;
	v->a[3634] = aux_sym_command_repeat1;
	v->a[3635] = state(1133);
	v->a[3636] = 1;
	v->a[3637] = sym_pipeline;
	v->a[3638] = state(1226);
	v->a[3639] = 1;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = aux_sym_redirected_statement_repeat2;
	v->a[3641] = state(2111);
	v->a[3642] = 1;
	v->a[3643] = sym__statement_not_pipeline;
	v->a[3644] = state(2116);
	v->a[3645] = 1;
	v->a[3646] = sym__statements;
	v->a[3647] = actions(160);
	v->a[3648] = 2;
	v->a[3649] = anon_sym_while;
	v->a[3650] = anon_sym_until;
	v->a[3651] = actions(174);
	v->a[3652] = 2;
	v->a[3653] = anon_sym_LT_AMP_DASH;
	v->a[3654] = anon_sym_GT_AMP_DASH;
	v->a[3655] = actions(182);
	v->a[3656] = 2;
	v->a[3657] = sym_raw_string;
	v->a[3658] = sym_number;
	v->a[3659] = state(385);
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = 5;
	v->a[3661] = sym_arithmetic_expansion;
	v->a[3662] = sym_string;
	v->a[3663] = sym_simple_expansion;
	v->a[3664] = sym_expansion;
	v->a[3665] = sym_command_substitution;
	v->a[3666] = actions(172);
	v->a[3667] = 6;
	v->a[3668] = anon_sym_LT;
	v->a[3669] = anon_sym_GT;
	v->a[3670] = anon_sym_GT_GT;
	v->a[3671] = anon_sym_LT_AMP;
	v->a[3672] = anon_sym_GT_AMP;
	v->a[3673] = anon_sym_GT_PIPE;
	v->a[3674] = state(1075);
	v->a[3675] = 12;
	v->a[3676] = sym_redirected_statement;
	v->a[3677] = sym_for_statement;
	v->a[3678] = sym_while_statement;
	v->a[3679] = sym_if_statement;
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = sym_case_statement;
	v->a[3681] = sym_function_definition;
	v->a[3682] = sym_compound_statement;
	v->a[3683] = sym_subshell;
	v->a[3684] = sym_list;
	v->a[3685] = sym_negated_command;
	v->a[3686] = sym_command;
	v->a[3687] = sym__variable_assignments;
	v->a[3688] = 34;
	v->a[3689] = actions(3);
	v->a[3690] = 1;
	v->a[3691] = sym_comment;
	v->a[3692] = actions(9);
	v->a[3693] = 1;
	v->a[3694] = anon_sym_for;
	v->a[3695] = actions(13);
	v->a[3696] = 1;
	v->a[3697] = anon_sym_if;
	v->a[3698] = actions(15);
	v->a[3699] = 1;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
