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
	v->a[3800] = actions(11);
	v->a[3801] = 2;
	v->a[3802] = anon_sym_while;
	v->a[3803] = anon_sym_until;
	v->a[3804] = actions(61);
	v->a[3805] = 2;
	v->a[3806] = sym_raw_string;
	v->a[3807] = sym_number;
	v->a[3808] = actions(201);
	v->a[3809] = 3;
	v->a[3810] = anon_sym_fi;
	v->a[3811] = anon_sym_elif;
	v->a[3812] = anon_sym_else;
	v->a[3813] = state(436);
	v->a[3814] = 5;
	v->a[3815] = sym_arithmetic_expansion;
	v->a[3816] = sym_string;
	v->a[3817] = sym_simple_expansion;
	v->a[3818] = sym_expansion;
	v->a[3819] = sym_command_substitution;
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = actions(53);
	v->a[3821] = 7;
	v->a[3822] = anon_sym_LT;
	v->a[3823] = anon_sym_GT;
	v->a[3824] = anon_sym_GT_GT;
	v->a[3825] = anon_sym_LT_AMP;
	v->a[3826] = anon_sym_GT_AMP;
	v->a[3827] = anon_sym_GT_PIPE;
	v->a[3828] = anon_sym_LT_GT;
	v->a[3829] = state(1079);
	v->a[3830] = 12;
	v->a[3831] = sym_redirected_statement;
	v->a[3832] = sym_for_statement;
	v->a[3833] = sym_while_statement;
	v->a[3834] = sym_if_statement;
	v->a[3835] = sym_case_statement;
	v->a[3836] = sym_function_definition;
	v->a[3837] = sym_compound_statement;
	v->a[3838] = sym_subshell;
	v->a[3839] = sym_list;
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = sym_negated_command;
	v->a[3841] = sym_command;
	v->a[3842] = sym__variable_assignments;
	v->a[3843] = 33;
	v->a[3844] = actions(3);
	v->a[3845] = 1;
	v->a[3846] = sym_comment;
	v->a[3847] = actions(9);
	v->a[3848] = 1;
	v->a[3849] = anon_sym_for;
	v->a[3850] = actions(13);
	v->a[3851] = 1;
	v->a[3852] = anon_sym_if;
	v->a[3853] = actions(15);
	v->a[3854] = 1;
	v->a[3855] = anon_sym_case;
	v->a[3856] = actions(17);
	v->a[3857] = 1;
	v->a[3858] = anon_sym_LPAREN;
	v->a[3859] = actions(19);
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = 1;
	v->a[3861] = anon_sym_LBRACE;
	v->a[3862] = actions(43);
	v->a[3863] = 1;
	v->a[3864] = sym_word;
	v->a[3865] = actions(51);
	v->a[3866] = 1;
	v->a[3867] = anon_sym_BANG;
	v->a[3868] = actions(55);
	v->a[3869] = 1;
	v->a[3870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3871] = actions(57);
	v->a[3872] = 1;
	v->a[3873] = anon_sym_DOLLAR;
	v->a[3874] = actions(59);
	v->a[3875] = 1;
	v->a[3876] = anon_sym_DQUOTE;
	v->a[3877] = actions(63);
	v->a[3878] = 1;
	v->a[3879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = actions(65);
	v->a[3881] = 1;
	v->a[3882] = anon_sym_DOLLAR_LPAREN;
	v->a[3883] = actions(67);
	v->a[3884] = 1;
	v->a[3885] = anon_sym_BQUOTE;
	v->a[3886] = actions(69);
	v->a[3887] = 1;
	v->a[3888] = sym_file_descriptor;
	v->a[3889] = actions(71);
	v->a[3890] = 1;
	v->a[3891] = sym_variable_name;
	v->a[3892] = actions(85);
	v->a[3893] = 1;
	v->a[3894] = anon_sym_LF;
	v->a[3895] = state(128);
	v->a[3896] = 1;
	v->a[3897] = aux_sym__statements_repeat1;
	v->a[3898] = state(183);
	v->a[3899] = 1;
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
