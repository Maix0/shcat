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
	v->a[3800] = state(326);
	v->a[3801] = 1;
	v->a[3802] = aux_sym__case_item_last_repeat2;
	v->a[3803] = state(408);
	v->a[3804] = 1;
	v->a[3805] = aux_sym_command_repeat1;
	v->a[3806] = state(541);
	v->a[3807] = 1;
	v->a[3808] = sym_file_redirect;
	v->a[3809] = state(546);
	v->a[3810] = 1;
	v->a[3811] = sym_concatenation;
	v->a[3812] = state(913);
	v->a[3813] = 1;
	v->a[3814] = sym_pipeline;
	v->a[3815] = state(990);
	v->a[3816] = 1;
	v->a[3817] = aux_sym_redirected_statement_repeat2;
	v->a[3818] = state(1564);
	v->a[3819] = 1;
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = sym__statement_not_pipeline;
	v->a[3821] = state(1573);
	v->a[3822] = 1;
	v->a[3823] = sym__statements;
	v->a[3824] = actions(83);
	v->a[3825] = 2;
	v->a[3826] = anon_sym_while;
	v->a[3827] = anon_sym_until;
	v->a[3828] = actions(105);
	v->a[3829] = 2;
	v->a[3830] = sym_raw_string;
	v->a[3831] = sym_number;
	v->a[3832] = actions(97);
	v->a[3833] = 3;
	v->a[3834] = anon_sym_LT;
	v->a[3835] = anon_sym_GT;
	v->a[3836] = anon_sym_GT_GT;
	v->a[3837] = state(276);
	v->a[3838] = 5;
	v->a[3839] = sym_arithmetic_expansion;
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = sym_string;
	v->a[3841] = sym_simple_expansion;
	v->a[3842] = sym_expansion;
	v->a[3843] = sym_command_substitution;
	v->a[3844] = state(867);
	v->a[3845] = 12;
	v->a[3846] = sym_redirected_statement;
	v->a[3847] = sym_for_statement;
	v->a[3848] = sym_while_statement;
	v->a[3849] = sym_if_statement;
	v->a[3850] = sym_case_statement;
	v->a[3851] = sym_function_definition;
	v->a[3852] = sym_compound_statement;
	v->a[3853] = sym_subshell;
	v->a[3854] = sym_list;
	v->a[3855] = sym_negated_command;
	v->a[3856] = sym_command;
	v->a[3857] = sym__variable_assignments;
	v->a[3858] = 31;
	v->a[3859] = actions(3);
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = 1;
	v->a[3861] = sym_comment;
	v->a[3862] = actions(9);
	v->a[3863] = 1;
	v->a[3864] = anon_sym_for;
	v->a[3865] = actions(13);
	v->a[3866] = 1;
	v->a[3867] = anon_sym_if;
	v->a[3868] = actions(15);
	v->a[3869] = 1;
	v->a[3870] = anon_sym_case;
	v->a[3871] = actions(17);
	v->a[3872] = 1;
	v->a[3873] = anon_sym_LPAREN;
	v->a[3874] = actions(19);
	v->a[3875] = 1;
	v->a[3876] = anon_sym_LBRACE;
	v->a[3877] = actions(41);
	v->a[3878] = 1;
	v->a[3879] = sym_word;
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = actions(49);
	v->a[3881] = 1;
	v->a[3882] = anon_sym_BANG;
	v->a[3883] = actions(53);
	v->a[3884] = 1;
	v->a[3885] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3886] = actions(55);
	v->a[3887] = 1;
	v->a[3888] = anon_sym_DOLLAR;
	v->a[3889] = actions(57);
	v->a[3890] = 1;
	v->a[3891] = anon_sym_DQUOTE;
	v->a[3892] = actions(61);
	v->a[3893] = 1;
	v->a[3894] = anon_sym_DOLLAR_LBRACE;
	v->a[3895] = actions(63);
	v->a[3896] = 1;
	v->a[3897] = anon_sym_DOLLAR_LPAREN;
	v->a[3898] = actions(65);
	v->a[3899] = 1;
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
