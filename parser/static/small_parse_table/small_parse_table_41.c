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
	v->a[4100] = 1;
	v->a[4101] = anon_sym_case;
	v->a[4102] = actions(17);
	v->a[4103] = 1;
	v->a[4104] = anon_sym_LPAREN;
	v->a[4105] = actions(19);
	v->a[4106] = 1;
	v->a[4107] = anon_sym_LBRACE;
	v->a[4108] = actions(43);
	v->a[4109] = 1;
	v->a[4110] = sym_word;
	v->a[4111] = actions(51);
	v->a[4112] = 1;
	v->a[4113] = anon_sym_BANG;
	v->a[4114] = actions(55);
	v->a[4115] = 1;
	v->a[4116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4117] = actions(57);
	v->a[4118] = 1;
	v->a[4119] = anon_sym_DOLLAR;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = actions(59);
	v->a[4121] = 1;
	v->a[4122] = anon_sym_DQUOTE;
	v->a[4123] = actions(63);
	v->a[4124] = 1;
	v->a[4125] = anon_sym_DOLLAR_LBRACE;
	v->a[4126] = actions(65);
	v->a[4127] = 1;
	v->a[4128] = anon_sym_DOLLAR_LPAREN;
	v->a[4129] = actions(67);
	v->a[4130] = 1;
	v->a[4131] = anon_sym_BQUOTE;
	v->a[4132] = actions(69);
	v->a[4133] = 1;
	v->a[4134] = sym_file_descriptor;
	v->a[4135] = actions(71);
	v->a[4136] = 1;
	v->a[4137] = sym_variable_name;
	v->a[4138] = actions(205);
	v->a[4139] = 1;
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = anon_sym_do;
	v->a[4141] = state(39);
	v->a[4142] = 1;
	v->a[4143] = aux_sym__terminated_statement;
	v->a[4144] = state(183);
	v->a[4145] = 1;
	v->a[4146] = sym_command_name;
	v->a[4147] = state(347);
	v->a[4148] = 1;
	v->a[4149] = sym_variable_assignment;
	v->a[4150] = state(655);
	v->a[4151] = 1;
	v->a[4152] = aux_sym_command_repeat1;
	v->a[4153] = state(661);
	v->a[4154] = 1;
	v->a[4155] = sym_concatenation;
	v->a[4156] = state(665);
	v->a[4157] = 1;
	v->a[4158] = sym_file_redirect;
	v->a[4159] = state(1145);
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = 1;
	v->a[4161] = sym_do_group;
	v->a[4162] = state(1172);
	v->a[4163] = 1;
	v->a[4164] = sym_pipeline;
	v->a[4165] = state(1198);
	v->a[4166] = 1;
	v->a[4167] = aux_sym_redirected_statement_repeat2;
	v->a[4168] = state(1901);
	v->a[4169] = 1;
	v->a[4170] = sym__statement_not_pipeline;
	v->a[4171] = actions(11);
	v->a[4172] = 2;
	v->a[4173] = anon_sym_while;
	v->a[4174] = anon_sym_until;
	v->a[4175] = actions(61);
	v->a[4176] = 2;
	v->a[4177] = sym_raw_string;
	v->a[4178] = sym_number;
	v->a[4179] = state(455);
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = 5;
	v->a[4181] = sym_arithmetic_expansion;
	v->a[4182] = sym_string;
	v->a[4183] = sym_simple_expansion;
	v->a[4184] = sym_expansion;
	v->a[4185] = sym_command_substitution;
	v->a[4186] = actions(53);
	v->a[4187] = 7;
	v->a[4188] = anon_sym_LT;
	v->a[4189] = anon_sym_GT;
	v->a[4190] = anon_sym_GT_GT;
	v->a[4191] = anon_sym_LT_AMP;
	v->a[4192] = anon_sym_GT_AMP;
	v->a[4193] = anon_sym_GT_PIPE;
	v->a[4194] = anon_sym_LT_GT;
	v->a[4195] = state(1033);
	v->a[4196] = 12;
	v->a[4197] = sym_redirected_statement;
	v->a[4198] = sym_for_statement;
	v->a[4199] = sym_while_statement;
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
