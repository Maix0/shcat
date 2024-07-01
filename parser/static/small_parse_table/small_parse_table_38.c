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
	v->a[3800] = state(1179);
	v->a[3801] = 12;
	v->a[3802] = sym_redirected_statement;
	v->a[3803] = sym_for_statement;
	v->a[3804] = sym_while_statement;
	v->a[3805] = sym_if_statement;
	v->a[3806] = sym_case_statement;
	v->a[3807] = sym_function_definition;
	v->a[3808] = sym_compound_statement;
	v->a[3809] = sym_subshell;
	v->a[3810] = sym_list;
	v->a[3811] = sym_negated_command;
	v->a[3812] = sym_command;
	v->a[3813] = sym__variable_assignments;
	v->a[3814] = 34;
	v->a[3815] = actions(3);
	v->a[3816] = 1;
	v->a[3817] = sym_comment;
	v->a[3818] = actions(87);
	v->a[3819] = 1;
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = anon_sym_LF;
	v->a[3821] = actions(156);
	v->a[3822] = 1;
	v->a[3823] = sym_word;
	v->a[3824] = actions(158);
	v->a[3825] = 1;
	v->a[3826] = anon_sym_for;
	v->a[3827] = actions(162);
	v->a[3828] = 1;
	v->a[3829] = anon_sym_if;
	v->a[3830] = actions(164);
	v->a[3831] = 1;
	v->a[3832] = anon_sym_case;
	v->a[3833] = actions(166);
	v->a[3834] = 1;
	v->a[3835] = anon_sym_LPAREN;
	v->a[3836] = actions(168);
	v->a[3837] = 1;
	v->a[3838] = anon_sym_LBRACE;
	v->a[3839] = actions(170);
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = 1;
	v->a[3841] = anon_sym_BANG;
	v->a[3842] = actions(176);
	v->a[3843] = 1;
	v->a[3844] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3845] = actions(178);
	v->a[3846] = 1;
	v->a[3847] = anon_sym_DOLLAR;
	v->a[3848] = actions(180);
	v->a[3849] = 1;
	v->a[3850] = anon_sym_DQUOTE;
	v->a[3851] = actions(184);
	v->a[3852] = 1;
	v->a[3853] = anon_sym_DOLLAR_LBRACE;
	v->a[3854] = actions(186);
	v->a[3855] = 1;
	v->a[3856] = anon_sym_DOLLAR_LPAREN;
	v->a[3857] = actions(188);
	v->a[3858] = 1;
	v->a[3859] = anon_sym_BQUOTE;
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = actions(190);
	v->a[3861] = 1;
	v->a[3862] = sym_file_descriptor;
	v->a[3863] = actions(192);
	v->a[3864] = 1;
	v->a[3865] = sym_variable_name;
	v->a[3866] = state(140);
	v->a[3867] = 1;
	v->a[3868] = aux_sym__statements_repeat1;
	v->a[3869] = state(186);
	v->a[3870] = 1;
	v->a[3871] = sym_command_name;
	v->a[3872] = state(213);
	v->a[3873] = 1;
	v->a[3874] = sym_variable_assignment;
	v->a[3875] = state(636);
	v->a[3876] = 1;
	v->a[3877] = sym_concatenation;
	v->a[3878] = state(677);
	v->a[3879] = 1;
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = sym_file_redirect;
	v->a[3881] = state(678);
	v->a[3882] = 1;
	v->a[3883] = aux_sym__case_item_last_repeat2;
	v->a[3884] = state(752);
	v->a[3885] = 1;
	v->a[3886] = aux_sym_command_repeat1;
	v->a[3887] = state(1133);
	v->a[3888] = 1;
	v->a[3889] = sym_pipeline;
	v->a[3890] = state(1226);
	v->a[3891] = 1;
	v->a[3892] = aux_sym_redirected_statement_repeat2;
	v->a[3893] = state(2110);
	v->a[3894] = 1;
	v->a[3895] = sym__statements;
	v->a[3896] = state(2111);
	v->a[3897] = 1;
	v->a[3898] = sym__statement_not_pipeline;
	v->a[3899] = actions(160);
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
