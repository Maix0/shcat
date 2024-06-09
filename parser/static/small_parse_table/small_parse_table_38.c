/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_38.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_190(t_small_parse_table_array *v)
{
	v->a[3800] = anon_sym_LPAREN;
	v->a[3801] = actions(109);
	v->a[3802] = 1;
	v->a[3803] = anon_sym_LBRACE;
	v->a[3804] = actions(111);
	v->a[3805] = 1;
	v->a[3806] = anon_sym_BANG;
	v->a[3807] = actions(117);
	v->a[3808] = 1;
	v->a[3809] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3810] = actions(119);
	v->a[3811] = 1;
	v->a[3812] = anon_sym_DOLLAR;
	v->a[3813] = actions(121);
	v->a[3814] = 1;
	v->a[3815] = anon_sym_DQUOTE;
	v->a[3816] = actions(123);
	v->a[3817] = 1;
	v->a[3818] = sym_raw_string;
	v->a[3819] = actions(125);
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = 1;
	v->a[3821] = aux_sym_number_token1;
	v->a[3822] = actions(127);
	v->a[3823] = 1;
	v->a[3824] = aux_sym_number_token2;
	v->a[3825] = actions(129);
	v->a[3826] = 1;
	v->a[3827] = anon_sym_DOLLAR_LBRACE;
	v->a[3828] = actions(131);
	v->a[3829] = 1;
	v->a[3830] = anon_sym_DOLLAR_LPAREN;
	v->a[3831] = actions(133);
	v->a[3832] = 1;
	v->a[3833] = anon_sym_BQUOTE;
	v->a[3834] = actions(135);
	v->a[3835] = 1;
	v->a[3836] = sym_file_descriptor;
	v->a[3837] = actions(137);
	v->a[3838] = 1;
	v->a[3839] = sym_variable_name;
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = actions(224);
	v->a[3841] = 1;
	v->a[3842] = anon_sym_LF;
	v->a[3843] = state(16);
	v->a[3844] = 1;
	v->a[3845] = aux_sym__case_item_last_repeat2;
	v->a[3846] = state(139);
	v->a[3847] = 1;
	v->a[3848] = aux_sym__statements_repeat1;
	v->a[3849] = state(173);
	v->a[3850] = 1;
	v->a[3851] = sym_command_name;
	v->a[3852] = state(269);
	v->a[3853] = 1;
	v->a[3854] = sym_variable_assignment;
	v->a[3855] = state(663);
	v->a[3856] = 1;
	v->a[3857] = aux_sym_command_repeat1;
	v->a[3858] = state(665);
	v->a[3859] = 1;
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = sym_concatenation;
	v->a[3861] = state(749);
	v->a[3862] = 1;
	v->a[3863] = sym_file_redirect;
	v->a[3864] = state(1145);
	v->a[3865] = 1;
	v->a[3866] = aux_sym_redirected_statement_repeat2;
	v->a[3867] = state(1190);
	v->a[3868] = 1;
	v->a[3869] = sym_pipeline;
	v->a[3870] = state(2033);
	v->a[3871] = 1;
	v->a[3872] = sym__statements;
	v->a[3873] = state(2040);
	v->a[3874] = 1;
	v->a[3875] = sym__statement_not_pipeline;
	v->a[3876] = actions(99);
	v->a[3877] = 2;
	v->a[3878] = anon_sym_while;
	v->a[3879] = anon_sym_until;
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = actions(115);
	v->a[3881] = 2;
	v->a[3882] = anon_sym_LT_AMP_DASH;
	v->a[3883] = anon_sym_GT_AMP_DASH;
	v->a[3884] = state(282);
	v->a[3885] = 6;
	v->a[3886] = sym_arithmetic_expansion;
	v->a[3887] = sym_string;
	v->a[3888] = sym_number;
	v->a[3889] = sym_simple_expansion;
	v->a[3890] = sym_expansion;
	v->a[3891] = sym_command_substitution;
	v->a[3892] = actions(113);
	v->a[3893] = 8;
	v->a[3894] = anon_sym_LT;
	v->a[3895] = anon_sym_GT;
	v->a[3896] = anon_sym_GT_GT;
	v->a[3897] = anon_sym_AMP_GT;
	v->a[3898] = anon_sym_AMP_GT_GT;
	v->a[3899] = anon_sym_LT_AMP;
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
