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
	v->a[4000] = actions(15);
	v->a[4001] = 1;
	v->a[4002] = anon_sym_case;
	v->a[4003] = actions(17);
	v->a[4004] = 1;
	v->a[4005] = anon_sym_LPAREN;
	v->a[4006] = actions(19);
	v->a[4007] = 1;
	v->a[4008] = anon_sym_LBRACE;
	v->a[4009] = actions(41);
	v->a[4010] = 1;
	v->a[4011] = sym_word;
	v->a[4012] = actions(49);
	v->a[4013] = 1;
	v->a[4014] = anon_sym_BANG;
	v->a[4015] = actions(53);
	v->a[4016] = 1;
	v->a[4017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4018] = actions(55);
	v->a[4019] = 1;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = anon_sym_DOLLAR;
	v->a[4021] = actions(57);
	v->a[4022] = 1;
	v->a[4023] = anon_sym_DQUOTE;
	v->a[4024] = actions(61);
	v->a[4025] = 1;
	v->a[4026] = anon_sym_DOLLAR_LBRACE;
	v->a[4027] = actions(63);
	v->a[4028] = 1;
	v->a[4029] = anon_sym_DOLLAR_LPAREN;
	v->a[4030] = actions(65);
	v->a[4031] = 1;
	v->a[4032] = anon_sym_BQUOTE;
	v->a[4033] = actions(67);
	v->a[4034] = 1;
	v->a[4035] = sym_variable_name;
	v->a[4036] = actions(196);
	v->a[4037] = 1;
	v->a[4038] = anon_sym_do;
	v->a[4039] = state(96);
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = 1;
	v->a[4041] = aux_sym__terminated_statement;
	v->a[4042] = state(271);
	v->a[4043] = 1;
	v->a[4044] = sym_command_name;
	v->a[4045] = state(284);
	v->a[4046] = 1;
	v->a[4047] = sym_variable_assignment;
	v->a[4048] = state(482);
	v->a[4049] = 1;
	v->a[4050] = aux_sym_command_repeat1;
	v->a[4051] = state(600);
	v->a[4052] = 1;
	v->a[4053] = sym_file_redirect;
	v->a[4054] = state(602);
	v->a[4055] = 1;
	v->a[4056] = sym_concatenation;
	v->a[4057] = state(997);
	v->a[4058] = 1;
	v->a[4059] = sym_do_group;
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = state(1005);
	v->a[4061] = 1;
	v->a[4062] = sym_pipeline;
	v->a[4063] = state(1068);
	v->a[4064] = 1;
	v->a[4065] = aux_sym_redirected_statement_repeat2;
	v->a[4066] = state(1609);
	v->a[4067] = 1;
	v->a[4068] = sym__statement_not_pipeline;
	v->a[4069] = actions(11);
	v->a[4070] = 2;
	v->a[4071] = anon_sym_while;
	v->a[4072] = anon_sym_until;
	v->a[4073] = actions(59);
	v->a[4074] = 2;
	v->a[4075] = sym_raw_string;
	v->a[4076] = sym_number;
	v->a[4077] = state(425);
	v->a[4078] = 5;
	v->a[4079] = sym_arithmetic_expansion;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = sym_string;
	v->a[4081] = sym_simple_expansion;
	v->a[4082] = sym_expansion;
	v->a[4083] = sym_command_substitution;
	v->a[4084] = actions(51);
	v->a[4085] = 7;
	v->a[4086] = anon_sym_LT;
	v->a[4087] = anon_sym_GT;
	v->a[4088] = anon_sym_GT_GT;
	v->a[4089] = anon_sym_LT_AMP;
	v->a[4090] = anon_sym_GT_AMP;
	v->a[4091] = anon_sym_GT_PIPE;
	v->a[4092] = anon_sym_LT_GT;
	v->a[4093] = state(938);
	v->a[4094] = 12;
	v->a[4095] = sym_redirected_statement;
	v->a[4096] = sym_for_statement;
	v->a[4097] = sym_while_statement;
	v->a[4098] = sym_if_statement;
	v->a[4099] = sym_case_statement;
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
