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
	v->a[3600] = actions(97);
	v->a[3601] = 3;
	v->a[3602] = anon_sym_LT;
	v->a[3603] = anon_sym_GT;
	v->a[3604] = anon_sym_GT_GT;
	v->a[3605] = state(276);
	v->a[3606] = 5;
	v->a[3607] = sym_arithmetic_expansion;
	v->a[3608] = sym_string;
	v->a[3609] = sym_simple_expansion;
	v->a[3610] = sym_expansion;
	v->a[3611] = sym_command_substitution;
	v->a[3612] = state(867);
	v->a[3613] = 12;
	v->a[3614] = sym_redirected_statement;
	v->a[3615] = sym_for_statement;
	v->a[3616] = sym_while_statement;
	v->a[3617] = sym_if_statement;
	v->a[3618] = sym_case_statement;
	v->a[3619] = sym_function_definition;
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = sym_compound_statement;
	v->a[3621] = sym_subshell;
	v->a[3622] = sym_list;
	v->a[3623] = sym_negated_command;
	v->a[3624] = sym_command;
	v->a[3625] = sym__variable_assignments;
	v->a[3626] = 32;
	v->a[3627] = actions(3);
	v->a[3628] = 1;
	v->a[3629] = sym_comment;
	v->a[3630] = actions(9);
	v->a[3631] = 1;
	v->a[3632] = anon_sym_for;
	v->a[3633] = actions(13);
	v->a[3634] = 1;
	v->a[3635] = anon_sym_if;
	v->a[3636] = actions(15);
	v->a[3637] = 1;
	v->a[3638] = anon_sym_case;
	v->a[3639] = actions(17);
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = 1;
	v->a[3641] = anon_sym_LPAREN;
	v->a[3642] = actions(19);
	v->a[3643] = 1;
	v->a[3644] = anon_sym_LBRACE;
	v->a[3645] = actions(41);
	v->a[3646] = 1;
	v->a[3647] = sym_word;
	v->a[3648] = actions(49);
	v->a[3649] = 1;
	v->a[3650] = anon_sym_BANG;
	v->a[3651] = actions(53);
	v->a[3652] = 1;
	v->a[3653] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3654] = actions(55);
	v->a[3655] = 1;
	v->a[3656] = anon_sym_DOLLAR;
	v->a[3657] = actions(57);
	v->a[3658] = 1;
	v->a[3659] = anon_sym_DQUOTE;
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = actions(61);
	v->a[3661] = 1;
	v->a[3662] = anon_sym_DOLLAR_LBRACE;
	v->a[3663] = actions(63);
	v->a[3664] = 1;
	v->a[3665] = anon_sym_DOLLAR_LPAREN;
	v->a[3666] = actions(65);
	v->a[3667] = 1;
	v->a[3668] = anon_sym_BQUOTE;
	v->a[3669] = actions(67);
	v->a[3670] = 1;
	v->a[3671] = sym_variable_name;
	v->a[3672] = actions(194);
	v->a[3673] = 1;
	v->a[3674] = anon_sym_LF;
	v->a[3675] = state(24);
	v->a[3676] = 1;
	v->a[3677] = aux_sym__case_item_last_repeat2;
	v->a[3678] = state(118);
	v->a[3679] = 1;
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = aux_sym__statements_repeat1;
	v->a[3681] = state(185);
	v->a[3682] = 1;
	v->a[3683] = sym_command_name;
	v->a[3684] = state(216);
	v->a[3685] = 1;
	v->a[3686] = sym_variable_assignment;
	v->a[3687] = state(411);
	v->a[3688] = 1;
	v->a[3689] = aux_sym_command_repeat1;
	v->a[3690] = state(551);
	v->a[3691] = 1;
	v->a[3692] = sym_file_redirect;
	v->a[3693] = state(555);
	v->a[3694] = 1;
	v->a[3695] = sym_concatenation;
	v->a[3696] = state(991);
	v->a[3697] = 1;
	v->a[3698] = sym_pipeline;
	v->a[3699] = state(1126);
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
