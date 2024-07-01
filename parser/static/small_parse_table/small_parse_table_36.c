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
	v->a[3600] = sym__variable_assignments;
	v->a[3601] = 33;
	v->a[3602] = actions(3);
	v->a[3603] = 1;
	v->a[3604] = sym_comment;
	v->a[3605] = actions(85);
	v->a[3606] = 1;
	v->a[3607] = anon_sym_LF;
	v->a[3608] = actions(87);
	v->a[3609] = 1;
	v->a[3610] = sym_word;
	v->a[3611] = actions(89);
	v->a[3612] = 1;
	v->a[3613] = anon_sym_for;
	v->a[3614] = actions(93);
	v->a[3615] = 1;
	v->a[3616] = anon_sym_if;
	v->a[3617] = actions(95);
	v->a[3618] = 1;
	v->a[3619] = anon_sym_case;
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = actions(97);
	v->a[3621] = 1;
	v->a[3622] = anon_sym_LPAREN;
	v->a[3623] = actions(101);
	v->a[3624] = 1;
	v->a[3625] = anon_sym_LBRACE;
	v->a[3626] = actions(103);
	v->a[3627] = 1;
	v->a[3628] = anon_sym_BANG;
	v->a[3629] = actions(107);
	v->a[3630] = 1;
	v->a[3631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3632] = actions(109);
	v->a[3633] = 1;
	v->a[3634] = anon_sym_DOLLAR;
	v->a[3635] = actions(111);
	v->a[3636] = 1;
	v->a[3637] = anon_sym_DQUOTE;
	v->a[3638] = actions(115);
	v->a[3639] = 1;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = anon_sym_DOLLAR_LBRACE;
	v->a[3641] = actions(117);
	v->a[3642] = 1;
	v->a[3643] = anon_sym_DOLLAR_LPAREN;
	v->a[3644] = actions(119);
	v->a[3645] = 1;
	v->a[3646] = anon_sym_BQUOTE;
	v->a[3647] = actions(121);
	v->a[3648] = 1;
	v->a[3649] = sym_file_descriptor;
	v->a[3650] = actions(123);
	v->a[3651] = 1;
	v->a[3652] = sym_variable_name;
	v->a[3653] = state(127);
	v->a[3654] = 1;
	v->a[3655] = aux_sym__statements_repeat1;
	v->a[3656] = state(178);
	v->a[3657] = 1;
	v->a[3658] = sym_command_name;
	v->a[3659] = state(228);
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = 1;
	v->a[3661] = sym_variable_assignment;
	v->a[3662] = state(592);
	v->a[3663] = 1;
	v->a[3664] = sym_concatenation;
	v->a[3665] = state(641);
	v->a[3666] = 1;
	v->a[3667] = sym_file_redirect;
	v->a[3668] = state(657);
	v->a[3669] = 1;
	v->a[3670] = aux_sym__case_item_last_repeat2;
	v->a[3671] = state(662);
	v->a[3672] = 1;
	v->a[3673] = aux_sym_command_repeat1;
	v->a[3674] = state(1017);
	v->a[3675] = 1;
	v->a[3676] = sym_pipeline;
	v->a[3677] = state(1168);
	v->a[3678] = 1;
	v->a[3679] = aux_sym_redirected_statement_repeat2;
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = state(1896);
	v->a[3681] = 1;
	v->a[3682] = sym__statements;
	v->a[3683] = state(1901);
	v->a[3684] = 1;
	v->a[3685] = sym__statement_not_pipeline;
	v->a[3686] = actions(91);
	v->a[3687] = 2;
	v->a[3688] = anon_sym_while;
	v->a[3689] = anon_sym_until;
	v->a[3690] = actions(113);
	v->a[3691] = 2;
	v->a[3692] = sym_raw_string;
	v->a[3693] = sym_number;
	v->a[3694] = state(359);
	v->a[3695] = 5;
	v->a[3696] = sym_arithmetic_expansion;
	v->a[3697] = sym_string;
	v->a[3698] = sym_simple_expansion;
	v->a[3699] = sym_expansion;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
