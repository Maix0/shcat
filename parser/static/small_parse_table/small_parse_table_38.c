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
	v->a[3801] = anon_sym_DQUOTE;
	v->a[3802] = actions(1358);
	v->a[3803] = 1;
	v->a[3804] = aux_sym_number_token1;
	v->a[3805] = actions(1361);
	v->a[3806] = 1;
	v->a[3807] = aux_sym_number_token2;
	v->a[3808] = actions(1364);
	v->a[3809] = 1;
	v->a[3810] = anon_sym_DOLLAR_LBRACE;
	v->a[3811] = actions(1367);
	v->a[3812] = 1;
	v->a[3813] = anon_sym_DOLLAR_LPAREN;
	v->a[3814] = actions(1370);
	v->a[3815] = 1;
	v->a[3816] = anon_sym_BQUOTE;
	v->a[3817] = actions(1373);
	v->a[3818] = 1;
	v->a[3819] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_191(v);
}

void	small_parse_table_191(t_small_parse_table_array *v)
{
	v->a[3820] = actions(1376);
	v->a[3821] = 1;
	v->a[3822] = aux_sym__simple_variable_name_token1;
	v->a[3823] = actions(1379);
	v->a[3824] = 1;
	v->a[3825] = sym_variable_name;
	v->a[3826] = actions(1382);
	v->a[3827] = 1;
	v->a[3828] = sym_test_operator;
	v->a[3829] = actions(1385);
	v->a[3830] = 1;
	v->a[3831] = sym__brace_start;
	v->a[3832] = state(1024);
	v->a[3833] = 1;
	v->a[3834] = aux_sym__literal_repeat1;
	v->a[3835] = actions(766);
	v->a[3836] = 2;
	v->a[3837] = sym_file_descriptor;
	v->a[3838] = aux_sym_heredoc_redirect_token1;
	v->a[3839] = actions(1343);
	small_parse_table_192(v);
}

void	small_parse_table_192(t_small_parse_table_array *v)
{
	v->a[3840] = 2;
	v->a[3841] = sym_raw_string;
	v->a[3842] = sym_word;
	v->a[3843] = state(304);
	v->a[3844] = 3;
	v->a[3845] = sym_variable_assignment;
	v->a[3846] = sym_concatenation;
	v->a[3847] = aux_sym_declaration_command_repeat1;
	v->a[3848] = state(656);
	v->a[3849] = 7;
	v->a[3850] = sym_arithmetic_expansion;
	v->a[3851] = sym_brace_expression;
	v->a[3852] = sym_string;
	v->a[3853] = sym_number;
	v->a[3854] = sym_simple_expansion;
	v->a[3855] = sym_expansion;
	v->a[3856] = sym_command_substitution;
	v->a[3857] = actions(764);
	v->a[3858] = 20;
	v->a[3859] = anon_sym_PIPE;
	small_parse_table_193(v);
}

void	small_parse_table_193(t_small_parse_table_array *v)
{
	v->a[3860] = anon_sym_RPAREN;
	v->a[3861] = anon_sym_SEMI_SEMI;
	v->a[3862] = anon_sym_PIPE_AMP;
	v->a[3863] = anon_sym_AMP_AMP;
	v->a[3864] = anon_sym_PIPE_PIPE;
	v->a[3865] = anon_sym_LT;
	v->a[3866] = anon_sym_GT;
	v->a[3867] = anon_sym_GT_GT;
	v->a[3868] = anon_sym_AMP_GT;
	v->a[3869] = anon_sym_AMP_GT_GT;
	v->a[3870] = anon_sym_LT_AMP;
	v->a[3871] = anon_sym_GT_AMP;
	v->a[3872] = anon_sym_GT_PIPE;
	v->a[3873] = anon_sym_LT_AMP_DASH;
	v->a[3874] = anon_sym_GT_AMP_DASH;
	v->a[3875] = anon_sym_LT_LT;
	v->a[3876] = anon_sym_LT_LT_DASH;
	v->a[3877] = anon_sym_AMP;
	v->a[3878] = anon_sym_SEMI;
	v->a[3879] = 6;
	small_parse_table_194(v);
}

void	small_parse_table_194(t_small_parse_table_array *v)
{
	v->a[3880] = actions(3);
	v->a[3881] = 1;
	v->a[3882] = sym_comment;
	v->a[3883] = state(864);
	v->a[3884] = 1;
	v->a[3885] = aux_sym__literal_repeat1;
	v->a[3886] = state(297);
	v->a[3887] = 2;
	v->a[3888] = sym_concatenation;
	v->a[3889] = aux_sym_for_statement_repeat1;
	v->a[3890] = actions(1390);
	v->a[3891] = 5;
	v->a[3892] = sym_file_descriptor;
	v->a[3893] = sym_variable_name;
	v->a[3894] = sym_test_operator;
	v->a[3895] = sym__brace_start;
	v->a[3896] = aux_sym_heredoc_redirect_token1;
	v->a[3897] = state(577);
	v->a[3898] = 7;
	v->a[3899] = sym_arithmetic_expansion;
	small_parse_table_195(v);
}

/* EOF small_parse_table_38.c */
