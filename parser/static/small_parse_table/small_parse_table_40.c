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
	v->a[4000] = sym_command;
	v->a[4001] = sym_variable_assignments;
	v->a[4002] = 34;
	v->a[4003] = actions(3);
	v->a[4004] = 1;
	v->a[4005] = sym_comment;
	v->a[4006] = actions(89);
	v->a[4007] = 1;
	v->a[4008] = sym_word;
	v->a[4009] = actions(91);
	v->a[4010] = 1;
	v->a[4011] = anon_sym_for;
	v->a[4012] = actions(95);
	v->a[4013] = 1;
	v->a[4014] = anon_sym_if;
	v->a[4015] = actions(97);
	v->a[4016] = 1;
	v->a[4017] = anon_sym_case;
	v->a[4018] = actions(99);
	v->a[4019] = 1;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = anon_sym_LPAREN;
	v->a[4021] = actions(101);
	v->a[4022] = 1;
	v->a[4023] = anon_sym_LBRACE;
	v->a[4024] = actions(103);
	v->a[4025] = 1;
	v->a[4026] = anon_sym_BANG;
	v->a[4027] = actions(109);
	v->a[4028] = 1;
	v->a[4029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4030] = actions(111);
	v->a[4031] = 1;
	v->a[4032] = anon_sym_DOLLAR;
	v->a[4033] = actions(113);
	v->a[4034] = 1;
	v->a[4035] = anon_sym_DQUOTE;
	v->a[4036] = actions(117);
	v->a[4037] = 1;
	v->a[4038] = anon_sym_DOLLAR_LBRACE;
	v->a[4039] = actions(119);
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = 1;
	v->a[4041] = anon_sym_DOLLAR_LPAREN;
	v->a[4042] = actions(121);
	v->a[4043] = 1;
	v->a[4044] = anon_sym_BQUOTE;
	v->a[4045] = actions(123);
	v->a[4046] = 1;
	v->a[4047] = sym_file_descriptor;
	v->a[4048] = actions(125);
	v->a[4049] = 1;
	v->a[4050] = sym_variable_name;
	v->a[4051] = actions(210);
	v->a[4052] = 1;
	v->a[4053] = anon_sym_LF;
	v->a[4054] = state(10);
	v->a[4055] = 1;
	v->a[4056] = aux_sym__case_item_last_repeat2;
	v->a[4057] = state(129);
	v->a[4058] = 1;
	v->a[4059] = aux_sym__statements_repeat1;
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = state(182);
	v->a[4061] = 1;
	v->a[4062] = sym_command_name;
	v->a[4063] = state(271);
	v->a[4064] = 1;
	v->a[4065] = sym_variable_assignment;
	v->a[4066] = state(621);
	v->a[4067] = 1;
	v->a[4068] = sym_concatenation;
	v->a[4069] = state(692);
	v->a[4070] = 1;
	v->a[4071] = sym_file_redirect;
	v->a[4072] = state(810);
	v->a[4073] = 1;
	v->a[4074] = aux_sym_command_repeat1;
	v->a[4075] = state(1321);
	v->a[4076] = 1;
	v->a[4077] = sym_pipeline;
	v->a[4078] = state(1432);
	v->a[4079] = 1;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = aux_sym_redirected_statement_repeat2;
	v->a[4081] = state(2254);
	v->a[4082] = 1;
	v->a[4083] = sym__statement_not_pipeline;
	v->a[4084] = state(2255);
	v->a[4085] = 1;
	v->a[4086] = sym__statements;
	v->a[4087] = actions(93);
	v->a[4088] = 2;
	v->a[4089] = anon_sym_while;
	v->a[4090] = anon_sym_until;
	v->a[4091] = actions(107);
	v->a[4092] = 2;
	v->a[4093] = anon_sym_LT_AMP_DASH;
	v->a[4094] = anon_sym_GT_AMP_DASH;
	v->a[4095] = actions(115);
	v->a[4096] = 2;
	v->a[4097] = sym_raw_string;
	v->a[4098] = sym_number;
	v->a[4099] = state(282);
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
