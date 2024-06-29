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
	v->a[4001] = sym_comment;
	v->a[4002] = actions(87);
	v->a[4003] = 1;
	v->a[4004] = sym_word;
	v->a[4005] = actions(89);
	v->a[4006] = 1;
	v->a[4007] = anon_sym_for;
	v->a[4008] = actions(93);
	v->a[4009] = 1;
	v->a[4010] = anon_sym_if;
	v->a[4011] = actions(95);
	v->a[4012] = 1;
	v->a[4013] = anon_sym_case;
	v->a[4014] = actions(97);
	v->a[4015] = 1;
	v->a[4016] = anon_sym_LPAREN;
	v->a[4017] = actions(101);
	v->a[4018] = 1;
	v->a[4019] = anon_sym_LBRACE;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = actions(103);
	v->a[4021] = 1;
	v->a[4022] = anon_sym_BANG;
	v->a[4023] = actions(109);
	v->a[4024] = 1;
	v->a[4025] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4026] = actions(111);
	v->a[4027] = 1;
	v->a[4028] = anon_sym_DOLLAR;
	v->a[4029] = actions(113);
	v->a[4030] = 1;
	v->a[4031] = anon_sym_DQUOTE;
	v->a[4032] = actions(117);
	v->a[4033] = 1;
	v->a[4034] = anon_sym_DOLLAR_LBRACE;
	v->a[4035] = actions(119);
	v->a[4036] = 1;
	v->a[4037] = anon_sym_DOLLAR_LPAREN;
	v->a[4038] = actions(121);
	v->a[4039] = 1;
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = anon_sym_BQUOTE;
	v->a[4041] = actions(123);
	v->a[4042] = 1;
	v->a[4043] = sym_file_descriptor;
	v->a[4044] = actions(125);
	v->a[4045] = 1;
	v->a[4046] = sym_variable_name;
	v->a[4047] = actions(212);
	v->a[4048] = 1;
	v->a[4049] = anon_sym_LF;
	v->a[4050] = state(30);
	v->a[4051] = 1;
	v->a[4052] = aux_sym__case_item_last_repeat2;
	v->a[4053] = state(134);
	v->a[4054] = 1;
	v->a[4055] = aux_sym__statements_repeat1;
	v->a[4056] = state(184);
	v->a[4057] = 1;
	v->a[4058] = sym_command_name;
	v->a[4059] = state(229);
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = 1;
	v->a[4061] = sym_variable_assignment;
	v->a[4062] = state(622);
	v->a[4063] = 1;
	v->a[4064] = sym_concatenation;
	v->a[4065] = state(727);
	v->a[4066] = 1;
	v->a[4067] = aux_sym_command_repeat1;
	v->a[4068] = state(744);
	v->a[4069] = 1;
	v->a[4070] = sym_file_redirect;
	v->a[4071] = state(1096);
	v->a[4072] = 1;
	v->a[4073] = sym_pipeline;
	v->a[4074] = state(1215);
	v->a[4075] = 1;
	v->a[4076] = aux_sym_redirected_statement_repeat2;
	v->a[4077] = state(2104);
	v->a[4078] = 1;
	v->a[4079] = sym__statements;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = state(2122);
	v->a[4081] = 1;
	v->a[4082] = sym__statement_not_pipeline;
	v->a[4083] = actions(91);
	v->a[4084] = 2;
	v->a[4085] = anon_sym_while;
	v->a[4086] = anon_sym_until;
	v->a[4087] = actions(107);
	v->a[4088] = 2;
	v->a[4089] = anon_sym_LT_AMP_DASH;
	v->a[4090] = anon_sym_GT_AMP_DASH;
	v->a[4091] = actions(115);
	v->a[4092] = 2;
	v->a[4093] = sym_raw_string;
	v->a[4094] = sym_number;
	v->a[4095] = state(289);
	v->a[4096] = 5;
	v->a[4097] = sym_arithmetic_expansion;
	v->a[4098] = sym_string;
	v->a[4099] = sym_simple_expansion;
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
