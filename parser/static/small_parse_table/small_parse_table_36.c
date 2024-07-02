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
	v->a[3600] = sym_comment;
	v->a[3601] = actions(9);
	v->a[3602] = 1;
	v->a[3603] = anon_sym_for;
	v->a[3604] = actions(13);
	v->a[3605] = 1;
	v->a[3606] = anon_sym_if;
	v->a[3607] = actions(15);
	v->a[3608] = 1;
	v->a[3609] = anon_sym_case;
	v->a[3610] = actions(17);
	v->a[3611] = 1;
	v->a[3612] = anon_sym_LPAREN;
	v->a[3613] = actions(19);
	v->a[3614] = 1;
	v->a[3615] = anon_sym_LBRACE;
	v->a[3616] = actions(43);
	v->a[3617] = 1;
	v->a[3618] = sym_word;
	v->a[3619] = actions(51);
	small_parse_table_181(v);
}

void	small_parse_table_181(t_small_parse_table_array *v)
{
	v->a[3620] = 1;
	v->a[3621] = anon_sym_BANG;
	v->a[3622] = actions(55);
	v->a[3623] = 1;
	v->a[3624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3625] = actions(57);
	v->a[3626] = 1;
	v->a[3627] = anon_sym_DOLLAR;
	v->a[3628] = actions(59);
	v->a[3629] = 1;
	v->a[3630] = anon_sym_DQUOTE;
	v->a[3631] = actions(63);
	v->a[3632] = 1;
	v->a[3633] = anon_sym_DOLLAR_LBRACE;
	v->a[3634] = actions(65);
	v->a[3635] = 1;
	v->a[3636] = anon_sym_DOLLAR_LPAREN;
	v->a[3637] = actions(67);
	v->a[3638] = 1;
	v->a[3639] = anon_sym_BQUOTE;
	small_parse_table_182(v);
}

void	small_parse_table_182(t_small_parse_table_array *v)
{
	v->a[3640] = actions(69);
	v->a[3641] = 1;
	v->a[3642] = sym_file_descriptor;
	v->a[3643] = actions(71);
	v->a[3644] = 1;
	v->a[3645] = sym_variable_name;
	v->a[3646] = actions(201);
	v->a[3647] = 1;
	v->a[3648] = anon_sym_LF;
	v->a[3649] = state(16);
	v->a[3650] = 1;
	v->a[3651] = aux_sym__case_item_last_repeat2;
	v->a[3652] = state(129);
	v->a[3653] = 1;
	v->a[3654] = aux_sym__statements_repeat1;
	v->a[3655] = state(182);
	v->a[3656] = 1;
	v->a[3657] = sym_command_name;
	v->a[3658] = state(261);
	v->a[3659] = 1;
	small_parse_table_183(v);
}

void	small_parse_table_183(t_small_parse_table_array *v)
{
	v->a[3660] = sym_variable_assignment;
	v->a[3661] = state(584);
	v->a[3662] = 1;
	v->a[3663] = sym_concatenation;
	v->a[3664] = state(620);
	v->a[3665] = 1;
	v->a[3666] = sym_file_redirect;
	v->a[3667] = state(623);
	v->a[3668] = 1;
	v->a[3669] = aux_sym_command_repeat1;
	v->a[3670] = state(1114);
	v->a[3671] = 1;
	v->a[3672] = sym_pipeline;
	v->a[3673] = state(1201);
	v->a[3674] = 1;
	v->a[3675] = aux_sym_redirected_statement_repeat2;
	v->a[3676] = state(1911);
	v->a[3677] = 1;
	v->a[3678] = sym__statement_not_pipeline;
	v->a[3679] = state(2026);
	small_parse_table_184(v);
}

void	small_parse_table_184(t_small_parse_table_array *v)
{
	v->a[3680] = 1;
	v->a[3681] = sym__statements;
	v->a[3682] = actions(11);
	v->a[3683] = 2;
	v->a[3684] = anon_sym_while;
	v->a[3685] = anon_sym_until;
	v->a[3686] = actions(61);
	v->a[3687] = 2;
	v->a[3688] = sym_raw_string;
	v->a[3689] = sym_number;
	v->a[3690] = state(433);
	v->a[3691] = 5;
	v->a[3692] = sym_arithmetic_expansion;
	v->a[3693] = sym_string;
	v->a[3694] = sym_simple_expansion;
	v->a[3695] = sym_expansion;
	v->a[3696] = sym_command_substitution;
	v->a[3697] = actions(53);
	v->a[3698] = 7;
	v->a[3699] = anon_sym_LT;
	small_parse_table_185(v);
}

/* EOF small_parse_table_36.c */
