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
	v->a[4000] = 1;
	v->a[4001] = anon_sym_DOLLAR;
	v->a[4002] = actions(57);
	v->a[4003] = 1;
	v->a[4004] = anon_sym_DQUOTE;
	v->a[4005] = actions(61);
	v->a[4006] = 1;
	v->a[4007] = anon_sym_DOLLAR_LBRACE;
	v->a[4008] = actions(63);
	v->a[4009] = 1;
	v->a[4010] = anon_sym_DOLLAR_LPAREN;
	v->a[4011] = actions(65);
	v->a[4012] = 1;
	v->a[4013] = anon_sym_BQUOTE;
	v->a[4014] = actions(67);
	v->a[4015] = 1;
	v->a[4016] = sym_variable_name;
	v->a[4017] = actions(198);
	v->a[4018] = 1;
	v->a[4019] = anon_sym_do;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = state(103);
	v->a[4021] = 1;
	v->a[4022] = aux_sym__terminated_statement;
	v->a[4023] = state(185);
	v->a[4024] = 1;
	v->a[4025] = sym_command_name;
	v->a[4026] = state(238);
	v->a[4027] = 1;
	v->a[4028] = sym_variable_assignment;
	v->a[4029] = state(411);
	v->a[4030] = 1;
	v->a[4031] = aux_sym_command_repeat1;
	v->a[4032] = state(551);
	v->a[4033] = 1;
	v->a[4034] = sym_file_redirect;
	v->a[4035] = state(555);
	v->a[4036] = 1;
	v->a[4037] = sym_concatenation;
	v->a[4038] = state(1001);
	v->a[4039] = 1;
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = sym_pipeline;
	v->a[4041] = state(1126);
	v->a[4042] = 1;
	v->a[4043] = aux_sym_redirected_statement_repeat2;
	v->a[4044] = state(1422);
	v->a[4045] = 1;
	v->a[4046] = sym_do_group;
	v->a[4047] = state(1561);
	v->a[4048] = 1;
	v->a[4049] = sym__statement_not_pipeline;
	v->a[4050] = actions(11);
	v->a[4051] = 2;
	v->a[4052] = anon_sym_while;
	v->a[4053] = anon_sym_until;
	v->a[4054] = actions(59);
	v->a[4055] = 2;
	v->a[4056] = sym_raw_string;
	v->a[4057] = sym_number;
	v->a[4058] = actions(51);
	v->a[4059] = 3;
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = anon_sym_LT;
	v->a[4061] = anon_sym_GT;
	v->a[4062] = anon_sym_GT_GT;
	v->a[4063] = state(401);
	v->a[4064] = 5;
	v->a[4065] = sym_arithmetic_expansion;
	v->a[4066] = sym_string;
	v->a[4067] = sym_simple_expansion;
	v->a[4068] = sym_expansion;
	v->a[4069] = sym_command_substitution;
	v->a[4070] = state(958);
	v->a[4071] = 12;
	v->a[4072] = sym_redirected_statement;
	v->a[4073] = sym_for_statement;
	v->a[4074] = sym_while_statement;
	v->a[4075] = sym_if_statement;
	v->a[4076] = sym_case_statement;
	v->a[4077] = sym_function_definition;
	v->a[4078] = sym_compound_statement;
	v->a[4079] = sym_subshell;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = sym_list;
	v->a[4081] = sym_negated_command;
	v->a[4082] = sym_command;
	v->a[4083] = sym__variable_assignments;
	v->a[4084] = 31;
	v->a[4085] = actions(3);
	v->a[4086] = 1;
	v->a[4087] = sym_comment;
	v->a[4088] = actions(9);
	v->a[4089] = 1;
	v->a[4090] = anon_sym_for;
	v->a[4091] = actions(13);
	v->a[4092] = 1;
	v->a[4093] = anon_sym_if;
	v->a[4094] = actions(15);
	v->a[4095] = 1;
	v->a[4096] = anon_sym_case;
	v->a[4097] = actions(17);
	v->a[4098] = 1;
	v->a[4099] = anon_sym_LPAREN;
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
