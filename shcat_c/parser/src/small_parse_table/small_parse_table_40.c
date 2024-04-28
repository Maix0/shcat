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
	v->a[4001] = anon_sym_BQUOTE;
	v->a[4002] = actions(1567);
	v->a[4003] = 1;
	v->a[4004] = anon_sym_DOLLAR_BQUOTE;
	v->a[4005] = actions(1571);
	v->a[4006] = 1;
	v->a[4007] = sym_test_operator;
	v->a[4008] = actions(1573);
	v->a[4009] = 1;
	v->a[4010] = sym__bare_dollar;
	v->a[4011] = actions(1575);
	v->a[4012] = 1;
	v->a[4013] = sym__brace_start;
	v->a[4014] = state(562);
	v->a[4015] = 1;
	v->a[4016] = aux_sym_command_repeat2;
	v->a[4017] = state(1321);
	v->a[4018] = 1;
	v->a[4019] = aux_sym__literal_repeat1;
	small_parse_table_201(v);
}

void	small_parse_table_201(t_small_parse_table_array *v)
{
	v->a[4020] = state(1712);
	v->a[4021] = 1;
	v->a[4022] = sym_herestring_redirect;
	v->a[4023] = state(1716);
	v->a[4024] = 1;
	v->a[4025] = sym_concatenation;
	v->a[4026] = actions(1543);
	v->a[4027] = 2;
	v->a[4028] = anon_sym_LPAREN_LPAREN;
	v->a[4029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4030] = actions(1545);
	v->a[4031] = 2;
	v->a[4032] = anon_sym_EQ_EQ;
	v->a[4033] = anon_sym_EQ_TILDE;
	v->a[4034] = actions(1569);
	v->a[4035] = 2;
	v->a[4036] = anon_sym_LT_LPAREN;
	v->a[4037] = anon_sym_GT_LPAREN;
	v->a[4038] = actions(1627);
	v->a[4039] = 2;
	small_parse_table_202(v);
}

void	small_parse_table_202(t_small_parse_table_array *v)
{
	v->a[4040] = sym_file_descriptor;
	v->a[4041] = aux_sym_heredoc_redirect_token1;
	v->a[4042] = actions(1541);
	v->a[4043] = 3;
	v->a[4044] = sym_raw_string;
	v->a[4045] = sym_ansi_c_string;
	v->a[4046] = sym_word;
	v->a[4047] = state(1023);
	v->a[4048] = 9;
	v->a[4049] = sym_arithmetic_expansion;
	v->a[4050] = sym_brace_expression;
	v->a[4051] = sym_string;
	v->a[4052] = sym_translated_string;
	v->a[4053] = sym_number;
	v->a[4054] = sym_simple_expansion;
	v->a[4055] = sym_expansion;
	v->a[4056] = sym_command_substitution;
	v->a[4057] = sym_process_substitution;
	v->a[4058] = actions(1625);
	v->a[4059] = 20;
	small_parse_table_203(v);
}

void	small_parse_table_203(t_small_parse_table_array *v)
{
	v->a[4060] = anon_sym_SEMI;
	v->a[4061] = anon_sym_PIPE_PIPE;
	v->a[4062] = anon_sym_AMP_AMP;
	v->a[4063] = anon_sym_PIPE;
	v->a[4064] = anon_sym_AMP;
	v->a[4065] = anon_sym_LT;
	v->a[4066] = anon_sym_GT;
	v->a[4067] = anon_sym_LT_LT;
	v->a[4068] = anon_sym_GT_GT;
	v->a[4069] = anon_sym_RPAREN;
	v->a[4070] = anon_sym_SEMI_SEMI;
	v->a[4071] = anon_sym_PIPE_AMP;
	v->a[4072] = anon_sym_AMP_GT;
	v->a[4073] = anon_sym_AMP_GT_GT;
	v->a[4074] = anon_sym_LT_AMP;
	v->a[4075] = anon_sym_GT_AMP;
	v->a[4076] = anon_sym_GT_PIPE;
	v->a[4077] = anon_sym_LT_AMP_DASH;
	v->a[4078] = anon_sym_GT_AMP_DASH;
	v->a[4079] = anon_sym_LT_LT_DASH;
	small_parse_table_204(v);
}

void	small_parse_table_204(t_small_parse_table_array *v)
{
	v->a[4080] = 8;
	v->a[4081] = actions(3);
	v->a[4082] = 1;
	v->a[4083] = sym_comment;
	v->a[4084] = actions(1458);
	v->a[4085] = 1;
	v->a[4086] = anon_sym_DQUOTE;
	v->a[4087] = actions(1973);
	v->a[4088] = 1;
	v->a[4089] = sym_variable_name;
	v->a[4090] = state(1130);
	v->a[4091] = 1;
	v->a[4092] = sym_string;
	v->a[4093] = actions(1971);
	v->a[4094] = 2;
	v->a[4095] = aux_sym__simple_variable_name_token1;
	v->a[4096] = aux_sym__multiline_variable_name_token1;
	v->a[4097] = actions(1235);
	v->a[4098] = 4;
	v->a[4099] = sym_file_descriptor;
	small_parse_table_205(v);
}

/* EOF small_parse_table_40.c */
