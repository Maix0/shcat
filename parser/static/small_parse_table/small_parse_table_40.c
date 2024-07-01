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
	v->a[4000] = sym_command_name;
	v->a[4001] = state(213);
	v->a[4002] = 1;
	v->a[4003] = sym_variable_assignment;
	v->a[4004] = state(636);
	v->a[4005] = 1;
	v->a[4006] = sym_concatenation;
	v->a[4007] = state(677);
	v->a[4008] = 1;
	v->a[4009] = sym_file_redirect;
	v->a[4010] = state(752);
	v->a[4011] = 1;
	v->a[4012] = aux_sym_command_repeat1;
	v->a[4013] = state(1133);
	v->a[4014] = 1;
	v->a[4015] = sym_pipeline;
	v->a[4016] = state(1226);
	v->a[4017] = 1;
	v->a[4018] = aux_sym_redirected_statement_repeat2;
	v->a[4019] = state(2111);
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = 1;
	v->a[4021] = sym__statement_not_pipeline;
	v->a[4022] = state(2115);
	v->a[4023] = 1;
	v->a[4024] = sym__statements;
	v->a[4025] = actions(160);
	v->a[4026] = 2;
	v->a[4027] = anon_sym_while;
	v->a[4028] = anon_sym_until;
	v->a[4029] = actions(174);
	v->a[4030] = 2;
	v->a[4031] = anon_sym_LT_AMP_DASH;
	v->a[4032] = anon_sym_GT_AMP_DASH;
	v->a[4033] = actions(182);
	v->a[4034] = 2;
	v->a[4035] = sym_raw_string;
	v->a[4036] = sym_number;
	v->a[4037] = state(385);
	v->a[4038] = 5;
	v->a[4039] = sym_arithmetic_expansion;
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = sym_string;
	v->a[4041] = sym_simple_expansion;
	v->a[4042] = sym_expansion;
	v->a[4043] = sym_command_substitution;
	v->a[4044] = actions(172);
	v->a[4045] = 6;
	v->a[4046] = anon_sym_LT;
	v->a[4047] = anon_sym_GT;
	v->a[4048] = anon_sym_GT_GT;
	v->a[4049] = anon_sym_LT_AMP;
	v->a[4050] = anon_sym_GT_AMP;
	v->a[4051] = anon_sym_GT_PIPE;
	v->a[4052] = state(1075);
	v->a[4053] = 12;
	v->a[4054] = sym_redirected_statement;
	v->a[4055] = sym_for_statement;
	v->a[4056] = sym_while_statement;
	v->a[4057] = sym_if_statement;
	v->a[4058] = sym_case_statement;
	v->a[4059] = sym_function_definition;
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = sym_compound_statement;
	v->a[4061] = sym_subshell;
	v->a[4062] = sym_list;
	v->a[4063] = sym_negated_command;
	v->a[4064] = sym_command;
	v->a[4065] = sym__variable_assignments;
	v->a[4066] = 32;
	v->a[4067] = actions(3);
	v->a[4068] = 1;
	v->a[4069] = sym_comment;
	v->a[4070] = actions(9);
	v->a[4071] = 1;
	v->a[4072] = anon_sym_for;
	v->a[4073] = actions(13);
	v->a[4074] = 1;
	v->a[4075] = anon_sym_if;
	v->a[4076] = actions(15);
	v->a[4077] = 1;
	v->a[4078] = anon_sym_case;
	v->a[4079] = actions(17);
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = 1;
	v->a[4081] = anon_sym_LPAREN;
	v->a[4082] = actions(19);
	v->a[4083] = 1;
	v->a[4084] = anon_sym_LBRACE;
	v->a[4085] = actions(45);
	v->a[4086] = 1;
	v->a[4087] = sym_word;
	v->a[4088] = actions(53);
	v->a[4089] = 1;
	v->a[4090] = anon_sym_BANG;
	v->a[4091] = actions(59);
	v->a[4092] = 1;
	v->a[4093] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4094] = actions(61);
	v->a[4095] = 1;
	v->a[4096] = anon_sym_DOLLAR;
	v->a[4097] = actions(63);
	v->a[4098] = 1;
	v->a[4099] = anon_sym_DQUOTE;
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
