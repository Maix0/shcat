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
	v->a[3800] = aux_sym__case_item_last_repeat2;
	v->a[3801] = state(129);
	v->a[3802] = 1;
	v->a[3803] = aux_sym__statements_repeat1;
	v->a[3804] = state(182);
	v->a[3805] = 1;
	v->a[3806] = sym_command_name;
	v->a[3807] = state(271);
	v->a[3808] = 1;
	v->a[3809] = sym_variable_assignment;
	v->a[3810] = state(621);
	v->a[3811] = 1;
	v->a[3812] = sym_concatenation;
	v->a[3813] = state(692);
	v->a[3814] = 1;
	v->a[3815] = sym_file_redirect;
	v->a[3816] = state(810);
	v->a[3817] = 1;
	v->a[3818] = aux_sym_command_repeat1;
	v->a[3819] = state(1321);
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = 1;
	v->a[3821] = sym_pipeline;
	v->a[3822] = state(1432);
	v->a[3823] = 1;
	v->a[3824] = aux_sym_redirected_statement_repeat2;
	v->a[3825] = state(2254);
	v->a[3826] = 1;
	v->a[3827] = sym__statement_not_pipeline;
	v->a[3828] = state(2267);
	v->a[3829] = 1;
	v->a[3830] = sym__statements;
	v->a[3831] = actions(93);
	v->a[3832] = 2;
	v->a[3833] = anon_sym_while;
	v->a[3834] = anon_sym_until;
	v->a[3835] = actions(107);
	v->a[3836] = 2;
	v->a[3837] = anon_sym_LT_AMP_DASH;
	v->a[3838] = anon_sym_GT_AMP_DASH;
	v->a[3839] = actions(115);
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = 2;
	v->a[3841] = sym_raw_string;
	v->a[3842] = sym_number;
	v->a[3843] = state(282);
	v->a[3844] = 5;
	v->a[3845] = sym_arithmetic_expansion;
	v->a[3846] = sym_string;
	v->a[3847] = sym_simple_expansion;
	v->a[3848] = sym_expansion;
	v->a[3849] = sym_command_substitution;
	v->a[3850] = actions(105);
	v->a[3851] = 8;
	v->a[3852] = anon_sym_LT;
	v->a[3853] = anon_sym_GT;
	v->a[3854] = anon_sym_GT_GT;
	v->a[3855] = anon_sym_AMP_GT;
	v->a[3856] = anon_sym_AMP_GT_GT;
	v->a[3857] = anon_sym_LT_AMP;
	v->a[3858] = anon_sym_GT_AMP;
	v->a[3859] = anon_sym_GT_PIPE;
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = state(1296);
	v->a[3861] = 12;
	v->a[3862] = sym_redirected_statement;
	v->a[3863] = sym_for_statement;
	v->a[3864] = sym_while_statement;
	v->a[3865] = sym_if_statement;
	v->a[3866] = sym_case_statement;
	v->a[3867] = sym_function_definition;
	v->a[3868] = sym_compound_statement;
	v->a[3869] = sym_subshell;
	v->a[3870] = sym_list;
	v->a[3871] = sym_negated_command;
	v->a[3872] = sym_command;
	v->a[3873] = sym_variable_assignments;
	v->a[3874] = 34;
	v->a[3875] = actions(3);
	v->a[3876] = 1;
	v->a[3877] = sym_comment;
	v->a[3878] = actions(87);
	v->a[3879] = 1;
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = anon_sym_LF;
	v->a[3881] = actions(89);
	v->a[3882] = 1;
	v->a[3883] = sym_word;
	v->a[3884] = actions(91);
	v->a[3885] = 1;
	v->a[3886] = anon_sym_for;
	v->a[3887] = actions(95);
	v->a[3888] = 1;
	v->a[3889] = anon_sym_if;
	v->a[3890] = actions(97);
	v->a[3891] = 1;
	v->a[3892] = anon_sym_case;
	v->a[3893] = actions(99);
	v->a[3894] = 1;
	v->a[3895] = anon_sym_LPAREN;
	v->a[3896] = actions(101);
	v->a[3897] = 1;
	v->a[3898] = anon_sym_LBRACE;
	v->a[3899] = actions(103);
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
