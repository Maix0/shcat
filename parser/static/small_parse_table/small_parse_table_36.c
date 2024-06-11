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
	v->a[3600] = anon_sym_LT;
	v->a[3601] = anon_sym_GT;
	v->a[3602] = anon_sym_GT_GT;
	v->a[3603] = anon_sym_AMP_GT;
	v->a[3604] = anon_sym_AMP_GT_GT;
	v->a[3605] = anon_sym_LT_AMP;
	v->a[3606] = anon_sym_GT_AMP;
	v->a[3607] = anon_sym_GT_PIPE;
	v->a[3608] = state(1434);
	v->a[3609] = 12;
	v->a[3610] = sym_redirected_statement;
	v->a[3611] = sym_for_statement;
	v->a[3612] = sym_while_statement;
	v->a[3613] = sym_if_statement;
	v->a[3614] = sym_case_statement;
	v->a[3615] = sym_function_definition;
	v->a[3616] = sym_compound_statement;
	v->a[3617] = sym_subshell;
	v->a[3618] = sym_list;
	v->a[3619] = sym_negated_command;
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = sym_command;
	v->a[3621] = sym_variable_assignments;
	v->a[3622] = 32;
	v->a[3623] = actions(3);
	v->a[3624] = 1;
	v->a[3625] = sym_comment;
	v->a[3626] = actions(9);
	v->a[3627] = 1;
	v->a[3628] = anon_sym_for;
	v->a[3629] = actions(13);
	v->a[3630] = 1;
	v->a[3631] = anon_sym_if;
	v->a[3632] = actions(15);
	v->a[3633] = 1;
	v->a[3634] = anon_sym_case;
	v->a[3635] = actions(17);
	v->a[3636] = 1;
	v->a[3637] = anon_sym_LPAREN;
	v->a[3638] = actions(19);
	v->a[3639] = 1;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = anon_sym_LBRACE;
	v->a[3641] = actions(45);
	v->a[3642] = 1;
	v->a[3643] = sym_word;
	v->a[3644] = actions(53);
	v->a[3645] = 1;
	v->a[3646] = anon_sym_BANG;
	v->a[3647] = actions(59);
	v->a[3648] = 1;
	v->a[3649] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3650] = actions(61);
	v->a[3651] = 1;
	v->a[3652] = anon_sym_DOLLAR;
	v->a[3653] = actions(63);
	v->a[3654] = 1;
	v->a[3655] = anon_sym_DQUOTE;
	v->a[3656] = actions(67);
	v->a[3657] = 1;
	v->a[3658] = anon_sym_DOLLAR_LBRACE;
	v->a[3659] = actions(69);
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = 1;
	v->a[3661] = anon_sym_DOLLAR_LPAREN;
	v->a[3662] = actions(71);
	v->a[3663] = 1;
	v->a[3664] = anon_sym_BQUOTE;
	v->a[3665] = actions(73);
	v->a[3666] = 1;
	v->a[3667] = sym_file_descriptor;
	v->a[3668] = actions(75);
	v->a[3669] = 1;
	v->a[3670] = sym_variable_name;
	v->a[3671] = state(23);
	v->a[3672] = 1;
	v->a[3673] = aux_sym__terminated_statement;
	v->a[3674] = state(187);
	v->a[3675] = 1;
	v->a[3676] = sym_command_name;
	v->a[3677] = state(288);
	v->a[3678] = 1;
	v->a[3679] = sym_variable_assignment;
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = state(647);
	v->a[3681] = 1;
	v->a[3682] = sym_concatenation;
	v->a[3683] = state(736);
	v->a[3684] = 1;
	v->a[3685] = aux_sym_command_repeat1;
	v->a[3686] = state(738);
	v->a[3687] = 1;
	v->a[3688] = sym_file_redirect;
	v->a[3689] = state(1443);
	v->a[3690] = 1;
	v->a[3691] = sym_pipeline;
	v->a[3692] = state(1460);
	v->a[3693] = 1;
	v->a[3694] = aux_sym_redirected_statement_repeat2;
	v->a[3695] = state(2269);
	v->a[3696] = 1;
	v->a[3697] = sym__statement_not_pipeline;
	v->a[3698] = actions(11);
	v->a[3699] = 2;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
