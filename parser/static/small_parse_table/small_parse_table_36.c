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
	v->a[3600] = anon_sym_AMP_GT_GT;
	v->a[3601] = anon_sym_LT_AMP;
	v->a[3602] = anon_sym_GT_AMP;
	v->a[3603] = anon_sym_GT_PIPE;
	v->a[3604] = state(1086);
	v->a[3605] = 12;
	v->a[3606] = sym_redirected_statement;
	v->a[3607] = sym_for_statement;
	v->a[3608] = sym_while_statement;
	v->a[3609] = sym_if_statement;
	v->a[3610] = sym_case_statement;
	v->a[3611] = sym_function_definition;
	v->a[3612] = sym_compound_statement;
	v->a[3613] = sym_subshell;
	v->a[3614] = sym_list;
	v->a[3615] = sym_negated_command;
	v->a[3616] = sym_command;
	v->a[3617] = sym__variable_assignments;
	v->a[3618] = 34;
	v->a[3619] = actions(3);
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = 1;
	v->a[3621] = sym_comment;
	v->a[3622] = actions(87);
	v->a[3623] = 1;
	v->a[3624] = sym_word;
	v->a[3625] = actions(89);
	v->a[3626] = 1;
	v->a[3627] = anon_sym_for;
	v->a[3628] = actions(93);
	v->a[3629] = 1;
	v->a[3630] = anon_sym_if;
	v->a[3631] = actions(95);
	v->a[3632] = 1;
	v->a[3633] = anon_sym_case;
	v->a[3634] = actions(97);
	v->a[3635] = 1;
	v->a[3636] = anon_sym_LPAREN;
	v->a[3637] = actions(99);
	v->a[3638] = 1;
	v->a[3639] = anon_sym_LF;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = actions(101);
	v->a[3641] = 1;
	v->a[3642] = anon_sym_LBRACE;
	v->a[3643] = actions(103);
	v->a[3644] = 1;
	v->a[3645] = anon_sym_BANG;
	v->a[3646] = actions(109);
	v->a[3647] = 1;
	v->a[3648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3649] = actions(111);
	v->a[3650] = 1;
	v->a[3651] = anon_sym_DOLLAR;
	v->a[3652] = actions(113);
	v->a[3653] = 1;
	v->a[3654] = anon_sym_DQUOTE;
	v->a[3655] = actions(117);
	v->a[3656] = 1;
	v->a[3657] = anon_sym_DOLLAR_LBRACE;
	v->a[3658] = actions(119);
	v->a[3659] = 1;
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = anon_sym_DOLLAR_LPAREN;
	v->a[3661] = actions(121);
	v->a[3662] = 1;
	v->a[3663] = anon_sym_BQUOTE;
	v->a[3664] = actions(123);
	v->a[3665] = 1;
	v->a[3666] = sym_file_descriptor;
	v->a[3667] = actions(125);
	v->a[3668] = 1;
	v->a[3669] = sym_variable_name;
	v->a[3670] = state(134);
	v->a[3671] = 1;
	v->a[3672] = aux_sym__statements_repeat1;
	v->a[3673] = state(184);
	v->a[3674] = 1;
	v->a[3675] = sym_command_name;
	v->a[3676] = state(229);
	v->a[3677] = 1;
	v->a[3678] = sym_variable_assignment;
	v->a[3679] = state(622);
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = 1;
	v->a[3681] = sym_concatenation;
	v->a[3682] = state(709);
	v->a[3683] = 1;
	v->a[3684] = aux_sym__case_item_last_repeat2;
	v->a[3685] = state(727);
	v->a[3686] = 1;
	v->a[3687] = aux_sym_command_repeat1;
	v->a[3688] = state(744);
	v->a[3689] = 1;
	v->a[3690] = sym_file_redirect;
	v->a[3691] = state(1096);
	v->a[3692] = 1;
	v->a[3693] = sym_pipeline;
	v->a[3694] = state(1215);
	v->a[3695] = 1;
	v->a[3696] = aux_sym_redirected_statement_repeat2;
	v->a[3697] = state(2110);
	v->a[3698] = 1;
	v->a[3699] = sym__statements;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
