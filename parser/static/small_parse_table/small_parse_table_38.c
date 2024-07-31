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
	v->a[3800] = 1;
	v->a[3801] = aux_sym__statements_repeat1;
	v->a[3802] = state(185);
	v->a[3803] = 1;
	v->a[3804] = sym_command_name;
	v->a[3805] = state(255);
	v->a[3806] = 1;
	v->a[3807] = sym_variable_assignment;
	v->a[3808] = state(491);
	v->a[3809] = 1;
	v->a[3810] = aux_sym_command_repeat1;
	v->a[3811] = state(511);
	v->a[3812] = 1;
	v->a[3813] = aux_sym__case_item_last_repeat2;
	v->a[3814] = state(599);
	v->a[3815] = 1;
	v->a[3816] = sym_concatenation;
	v->a[3817] = state(615);
	v->a[3818] = 1;
	v->a[3819] = sym_file_redirect;
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = state(941);
	v->a[3821] = 1;
	v->a[3822] = sym_pipeline;
	v->a[3823] = state(1015);
	v->a[3824] = 1;
	v->a[3825] = aux_sym_redirected_statement_repeat2;
	v->a[3826] = state(1610);
	v->a[3827] = 1;
	v->a[3828] = sym__statement_not_pipeline;
	v->a[3829] = state(1625);
	v->a[3830] = 1;
	v->a[3831] = sym__statements;
	v->a[3832] = actions(83);
	v->a[3833] = 2;
	v->a[3834] = anon_sym_while;
	v->a[3835] = anon_sym_until;
	v->a[3836] = actions(105);
	v->a[3837] = 2;
	v->a[3838] = sym_raw_string;
	v->a[3839] = sym_number;
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = state(341);
	v->a[3841] = 5;
	v->a[3842] = sym_arithmetic_expansion;
	v->a[3843] = sym_string;
	v->a[3844] = sym_simple_expansion;
	v->a[3845] = sym_expansion;
	v->a[3846] = sym_command_substitution;
	v->a[3847] = actions(97);
	v->a[3848] = 7;
	v->a[3849] = anon_sym_LT;
	v->a[3850] = anon_sym_GT;
	v->a[3851] = anon_sym_GT_GT;
	v->a[3852] = anon_sym_LT_AMP;
	v->a[3853] = anon_sym_GT_AMP;
	v->a[3854] = anon_sym_GT_PIPE;
	v->a[3855] = anon_sym_LT_GT;
	v->a[3856] = state(819);
	v->a[3857] = 12;
	v->a[3858] = sym_redirected_statement;
	v->a[3859] = sym_for_statement;
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = sym_while_statement;
	v->a[3861] = sym_if_statement;
	v->a[3862] = sym_case_statement;
	v->a[3863] = sym_function_definition;
	v->a[3864] = sym_compound_statement;
	v->a[3865] = sym_subshell;
	v->a[3866] = sym_list;
	v->a[3867] = sym_negated_command;
	v->a[3868] = sym_command;
	v->a[3869] = sym__variable_assignments;
	v->a[3870] = 32;
	v->a[3871] = actions(3);
	v->a[3872] = 1;
	v->a[3873] = sym_comment;
	v->a[3874] = actions(79);
	v->a[3875] = 1;
	v->a[3876] = sym_word;
	v->a[3877] = actions(81);
	v->a[3878] = 1;
	v->a[3879] = anon_sym_for;
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = actions(85);
	v->a[3881] = 1;
	v->a[3882] = anon_sym_if;
	v->a[3883] = actions(87);
	v->a[3884] = 1;
	v->a[3885] = anon_sym_case;
	v->a[3886] = actions(89);
	v->a[3887] = 1;
	v->a[3888] = anon_sym_LPAREN;
	v->a[3889] = actions(93);
	v->a[3890] = 1;
	v->a[3891] = anon_sym_LBRACE;
	v->a[3892] = actions(95);
	v->a[3893] = 1;
	v->a[3894] = anon_sym_BANG;
	v->a[3895] = actions(99);
	v->a[3896] = 1;
	v->a[3897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3898] = actions(101);
	v->a[3899] = 1;
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
