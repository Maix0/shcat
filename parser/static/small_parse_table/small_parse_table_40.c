/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_40.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_200(t_small_parse_table_array *v)
{
	v->a[4000] = anon_sym_BQUOTE;
	v->a[4001] = anon_sym_DOLLAR_BQUOTE;
	v->a[4002] = sym_word;
	v->a[4003] = anon_sym_SEMI;
	v->a[4004] = 20;
	v->a[4005] = actions(3);
	v->a[4006] = 1;
	v->a[4007] = sym_comment;
	v->a[4008] = actions(1394);
	v->a[4009] = 1;
	v->a[4010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4011] = actions(1396);
	v->a[4012] = 1;
	v->a[4013] = anon_sym_DOLLAR;
	v->a[4014] = actions(1398);
	v->a[4015] = 1;
	v->a[4016] = sym__special_character;
	v->a[4017] = actions(1400);
	v->a[4018] = 1;
	v->a[4019] = anon_sym_DQUOTE;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = actions(1402);
	v->a[4021] = 1;
	v->a[4022] = aux_sym_number_token1;
	v->a[4023] = actions(1404);
	v->a[4024] = 1;
	v->a[4025] = aux_sym_number_token2;
	v->a[4026] = actions(1406);
	v->a[4027] = 1;
	v->a[4028] = anon_sym_DOLLAR_LBRACE;
	v->a[4029] = actions(1408);
	v->a[4030] = 1;
	v->a[4031] = anon_sym_DOLLAR_LPAREN;
	v->a[4032] = actions(1410);
	v->a[4033] = 1;
	v->a[4034] = anon_sym_BQUOTE;
	v->a[4035] = actions(1412);
	v->a[4036] = 1;
	v->a[4037] = anon_sym_DOLLAR_BQUOTE;
	v->a[4038] = actions(1414);
	v->a[4039] = 1;
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = aux_sym__simple_variable_name_token1;
	v->a[4041] = actions(1416);
	v->a[4042] = 1;
	v->a[4043] = sym_test_operator;
	v->a[4044] = actions(1418);
	v->a[4045] = 1;
	v->a[4046] = sym__brace_start;
	v->a[4047] = state(1021);
	v->a[4048] = 1;
	v->a[4049] = aux_sym__literal_repeat1;
	v->a[4050] = actions(1041);
	v->a[4051] = 2;
	v->a[4052] = sym_file_descriptor;
	v->a[4053] = aux_sym_heredoc_redirect_token1;
	v->a[4054] = actions(1392);
	v->a[4055] = 2;
	v->a[4056] = sym_raw_string;
	v->a[4057] = sym_word;
	v->a[4058] = state(315);
	v->a[4059] = 2;
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = sym_concatenation;
	v->a[4061] = aux_sym_unset_command_repeat1;
	v->a[4062] = state(742);
	v->a[4063] = 7;
	v->a[4064] = sym_arithmetic_expansion;
	v->a[4065] = sym_brace_expression;
	v->a[4066] = sym_string;
	v->a[4067] = sym_number;
	v->a[4068] = sym_simple_expansion;
	v->a[4069] = sym_expansion;
	v->a[4070] = sym_command_substitution;
	v->a[4071] = actions(1039);
	v->a[4072] = 21;
	v->a[4073] = anon_sym_PIPE;
	v->a[4074] = anon_sym_SEMI_SEMI;
	v->a[4075] = anon_sym_SEMI_AMP;
	v->a[4076] = anon_sym_SEMI_SEMI_AMP;
	v->a[4077] = anon_sym_PIPE_AMP;
	v->a[4078] = anon_sym_AMP_AMP;
	v->a[4079] = anon_sym_PIPE_PIPE;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = anon_sym_LT;
	v->a[4081] = anon_sym_GT;
	v->a[4082] = anon_sym_GT_GT;
	v->a[4083] = anon_sym_AMP_GT;
	v->a[4084] = anon_sym_AMP_GT_GT;
	v->a[4085] = anon_sym_LT_AMP;
	v->a[4086] = anon_sym_GT_AMP;
	v->a[4087] = anon_sym_GT_PIPE;
	v->a[4088] = anon_sym_LT_AMP_DASH;
	v->a[4089] = anon_sym_GT_AMP_DASH;
	v->a[4090] = anon_sym_LT_LT;
	v->a[4091] = anon_sym_LT_LT_DASH;
	v->a[4092] = anon_sym_AMP;
	v->a[4093] = anon_sym_SEMI;
	v->a[4094] = 6;
	v->a[4095] = actions(3);
	v->a[4096] = 1;
	v->a[4097] = sym_comment;
	v->a[4098] = actions(1424);
	v->a[4099] = 1;
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
