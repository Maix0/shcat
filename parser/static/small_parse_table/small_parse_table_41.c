/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_41.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_205(t_small_parse_table_array *v)
{
	v->a[4100] = actions(19);
	v->a[4101] = 1;
	v->a[4102] = anon_sym_LBRACE;
	v->a[4103] = actions(41);
	v->a[4104] = 1;
	v->a[4105] = sym_word;
	v->a[4106] = actions(49);
	v->a[4107] = 1;
	v->a[4108] = anon_sym_BANG;
	v->a[4109] = actions(53);
	v->a[4110] = 1;
	v->a[4111] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4112] = actions(55);
	v->a[4113] = 1;
	v->a[4114] = anon_sym_DOLLAR;
	v->a[4115] = actions(57);
	v->a[4116] = 1;
	v->a[4117] = anon_sym_DQUOTE;
	v->a[4118] = actions(61);
	v->a[4119] = 1;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = anon_sym_DOLLAR_LBRACE;
	v->a[4121] = actions(63);
	v->a[4122] = 1;
	v->a[4123] = anon_sym_DOLLAR_LPAREN;
	v->a[4124] = actions(65);
	v->a[4125] = 1;
	v->a[4126] = anon_sym_BQUOTE;
	v->a[4127] = actions(67);
	v->a[4128] = 1;
	v->a[4129] = sym_variable_name;
	v->a[4130] = actions(200);
	v->a[4131] = 1;
	v->a[4132] = anon_sym_do;
	v->a[4133] = state(103);
	v->a[4134] = 1;
	v->a[4135] = aux_sym__terminated_statement;
	v->a[4136] = state(185);
	v->a[4137] = 1;
	v->a[4138] = sym_command_name;
	v->a[4139] = state(238);
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = 1;
	v->a[4141] = sym_variable_assignment;
	v->a[4142] = state(411);
	v->a[4143] = 1;
	v->a[4144] = aux_sym_command_repeat1;
	v->a[4145] = state(551);
	v->a[4146] = 1;
	v->a[4147] = sym_file_redirect;
	v->a[4148] = state(555);
	v->a[4149] = 1;
	v->a[4150] = sym_concatenation;
	v->a[4151] = state(1001);
	v->a[4152] = 1;
	v->a[4153] = sym_pipeline;
	v->a[4154] = state(1126);
	v->a[4155] = 1;
	v->a[4156] = aux_sym_redirected_statement_repeat2;
	v->a[4157] = state(1233);
	v->a[4158] = 1;
	v->a[4159] = sym_do_group;
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = state(1561);
	v->a[4161] = 1;
	v->a[4162] = sym__statement_not_pipeline;
	v->a[4163] = actions(11);
	v->a[4164] = 2;
	v->a[4165] = anon_sym_while;
	v->a[4166] = anon_sym_until;
	v->a[4167] = actions(59);
	v->a[4168] = 2;
	v->a[4169] = sym_raw_string;
	v->a[4170] = sym_number;
	v->a[4171] = actions(51);
	v->a[4172] = 3;
	v->a[4173] = anon_sym_LT;
	v->a[4174] = anon_sym_GT;
	v->a[4175] = anon_sym_GT_GT;
	v->a[4176] = state(401);
	v->a[4177] = 5;
	v->a[4178] = sym_arithmetic_expansion;
	v->a[4179] = sym_string;
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = sym_simple_expansion;
	v->a[4181] = sym_expansion;
	v->a[4182] = sym_command_substitution;
	v->a[4183] = state(958);
	v->a[4184] = 12;
	v->a[4185] = sym_redirected_statement;
	v->a[4186] = sym_for_statement;
	v->a[4187] = sym_while_statement;
	v->a[4188] = sym_if_statement;
	v->a[4189] = sym_case_statement;
	v->a[4190] = sym_function_definition;
	v->a[4191] = sym_compound_statement;
	v->a[4192] = sym_subshell;
	v->a[4193] = sym_list;
	v->a[4194] = sym_negated_command;
	v->a[4195] = sym_command;
	v->a[4196] = sym__variable_assignments;
	v->a[4197] = 30;
	v->a[4198] = actions(3);
	v->a[4199] = 1;
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
