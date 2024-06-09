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
	v->a[4000] = aux_sym_redirected_statement_repeat2;
	v->a[4001] = state(1190);
	v->a[4002] = 1;
	v->a[4003] = sym_pipeline;
	v->a[4004] = state(2040);
	v->a[4005] = 1;
	v->a[4006] = sym__statement_not_pipeline;
	v->a[4007] = state(2045);
	v->a[4008] = 1;
	v->a[4009] = sym__statements;
	v->a[4010] = actions(99);
	v->a[4011] = 2;
	v->a[4012] = anon_sym_while;
	v->a[4013] = anon_sym_until;
	v->a[4014] = actions(115);
	v->a[4015] = 2;
	v->a[4016] = anon_sym_LT_AMP_DASH;
	v->a[4017] = anon_sym_GT_AMP_DASH;
	v->a[4018] = state(282);
	v->a[4019] = 6;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = sym_arithmetic_expansion;
	v->a[4021] = sym_string;
	v->a[4022] = sym_number;
	v->a[4023] = sym_simple_expansion;
	v->a[4024] = sym_expansion;
	v->a[4025] = sym_command_substitution;
	v->a[4026] = actions(113);
	v->a[4027] = 8;
	v->a[4028] = anon_sym_LT;
	v->a[4029] = anon_sym_GT;
	v->a[4030] = anon_sym_GT_GT;
	v->a[4031] = anon_sym_AMP_GT;
	v->a[4032] = anon_sym_AMP_GT_GT;
	v->a[4033] = anon_sym_LT_AMP;
	v->a[4034] = anon_sym_GT_AMP;
	v->a[4035] = anon_sym_GT_PIPE;
	v->a[4036] = state(1048);
	v->a[4037] = 12;
	v->a[4038] = sym_redirected_statement;
	v->a[4039] = sym_for_statement;
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = sym_while_statement;
	v->a[4041] = sym_if_statement;
	v->a[4042] = sym_case_statement;
	v->a[4043] = sym_function_definition;
	v->a[4044] = sym_compound_statement;
	v->a[4045] = sym_subshell;
	v->a[4046] = sym_list;
	v->a[4047] = sym_negated_command;
	v->a[4048] = sym_command;
	v->a[4049] = sym_variable_assignments;
	v->a[4050] = 36;
	v->a[4051] = actions(3);
	v->a[4052] = 1;
	v->a[4053] = sym_comment;
	v->a[4054] = actions(9);
	v->a[4055] = 1;
	v->a[4056] = anon_sym_for;
	v->a[4057] = actions(13);
	v->a[4058] = 1;
	v->a[4059] = anon_sym_if;
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = actions(15);
	v->a[4061] = 1;
	v->a[4062] = anon_sym_case;
	v->a[4063] = actions(17);
	v->a[4064] = 1;
	v->a[4065] = anon_sym_LPAREN;
	v->a[4066] = actions(19);
	v->a[4067] = 1;
	v->a[4068] = anon_sym_LBRACE;
	v->a[4069] = actions(49);
	v->a[4070] = 1;
	v->a[4071] = sym_word;
	v->a[4072] = actions(57);
	v->a[4073] = 1;
	v->a[4074] = anon_sym_BANG;
	v->a[4075] = actions(63);
	v->a[4076] = 1;
	v->a[4077] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4078] = actions(65);
	v->a[4079] = 1;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = anon_sym_DOLLAR;
	v->a[4081] = actions(67);
	v->a[4082] = 1;
	v->a[4083] = anon_sym_DQUOTE;
	v->a[4084] = actions(69);
	v->a[4085] = 1;
	v->a[4086] = sym_raw_string;
	v->a[4087] = actions(71);
	v->a[4088] = 1;
	v->a[4089] = aux_sym_number_token1;
	v->a[4090] = actions(73);
	v->a[4091] = 1;
	v->a[4092] = aux_sym_number_token2;
	v->a[4093] = actions(75);
	v->a[4094] = 1;
	v->a[4095] = anon_sym_DOLLAR_LBRACE;
	v->a[4096] = actions(77);
	v->a[4097] = 1;
	v->a[4098] = anon_sym_DOLLAR_LPAREN;
	v->a[4099] = actions(79);
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
