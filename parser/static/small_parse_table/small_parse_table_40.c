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
	v->a[4000] = actions(115);
	v->a[4001] = 1;
	v->a[4002] = anon_sym_DOLLAR_LBRACE;
	v->a[4003] = actions(117);
	v->a[4004] = 1;
	v->a[4005] = anon_sym_DOLLAR_LPAREN;
	v->a[4006] = actions(119);
	v->a[4007] = 1;
	v->a[4008] = anon_sym_BQUOTE;
	v->a[4009] = actions(121);
	v->a[4010] = 1;
	v->a[4011] = sym_file_descriptor;
	v->a[4012] = actions(123);
	v->a[4013] = 1;
	v->a[4014] = sym_variable_name;
	v->a[4015] = actions(203);
	v->a[4016] = 1;
	v->a[4017] = anon_sym_LF;
	v->a[4018] = state(20);
	v->a[4019] = 1;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = aux_sym__case_item_last_repeat2;
	v->a[4021] = state(127);
	v->a[4022] = 1;
	v->a[4023] = aux_sym__statements_repeat1;
	v->a[4024] = state(178);
	v->a[4025] = 1;
	v->a[4026] = sym_command_name;
	v->a[4027] = state(228);
	v->a[4028] = 1;
	v->a[4029] = sym_variable_assignment;
	v->a[4030] = state(592);
	v->a[4031] = 1;
	v->a[4032] = sym_concatenation;
	v->a[4033] = state(641);
	v->a[4034] = 1;
	v->a[4035] = sym_file_redirect;
	v->a[4036] = state(662);
	v->a[4037] = 1;
	v->a[4038] = aux_sym_command_repeat1;
	v->a[4039] = state(1017);
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = 1;
	v->a[4041] = sym_pipeline;
	v->a[4042] = state(1168);
	v->a[4043] = 1;
	v->a[4044] = aux_sym_redirected_statement_repeat2;
	v->a[4045] = state(1893);
	v->a[4046] = 1;
	v->a[4047] = sym__statements;
	v->a[4048] = state(1901);
	v->a[4049] = 1;
	v->a[4050] = sym__statement_not_pipeline;
	v->a[4051] = actions(91);
	v->a[4052] = 2;
	v->a[4053] = anon_sym_while;
	v->a[4054] = anon_sym_until;
	v->a[4055] = actions(113);
	v->a[4056] = 2;
	v->a[4057] = sym_raw_string;
	v->a[4058] = sym_number;
	v->a[4059] = state(359);
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = 5;
	v->a[4061] = sym_arithmetic_expansion;
	v->a[4062] = sym_string;
	v->a[4063] = sym_simple_expansion;
	v->a[4064] = sym_expansion;
	v->a[4065] = sym_command_substitution;
	v->a[4066] = actions(105);
	v->a[4067] = 7;
	v->a[4068] = anon_sym_LT;
	v->a[4069] = anon_sym_GT;
	v->a[4070] = anon_sym_GT_GT;
	v->a[4071] = anon_sym_LT_AMP;
	v->a[4072] = anon_sym_GT_AMP;
	v->a[4073] = anon_sym_GT_PIPE;
	v->a[4074] = anon_sym_LT_GT;
	v->a[4075] = state(1005);
	v->a[4076] = 12;
	v->a[4077] = sym_redirected_statement;
	v->a[4078] = sym_for_statement;
	v->a[4079] = sym_while_statement;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = sym_if_statement;
	v->a[4081] = sym_case_statement;
	v->a[4082] = sym_function_definition;
	v->a[4083] = sym_compound_statement;
	v->a[4084] = sym_subshell;
	v->a[4085] = sym_list;
	v->a[4086] = sym_negated_command;
	v->a[4087] = sym_command;
	v->a[4088] = sym__variable_assignments;
	v->a[4089] = 32;
	v->a[4090] = actions(3);
	v->a[4091] = 1;
	v->a[4092] = sym_comment;
	v->a[4093] = actions(9);
	v->a[4094] = 1;
	v->a[4095] = anon_sym_for;
	v->a[4096] = actions(13);
	v->a[4097] = 1;
	v->a[4098] = anon_sym_if;
	v->a[4099] = actions(15);
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
