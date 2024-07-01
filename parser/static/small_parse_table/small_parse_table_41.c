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
	v->a[4100] = actions(67);
	v->a[4101] = 1;
	v->a[4102] = anon_sym_DOLLAR_LBRACE;
	v->a[4103] = actions(69);
	v->a[4104] = 1;
	v->a[4105] = anon_sym_DOLLAR_LPAREN;
	v->a[4106] = actions(71);
	v->a[4107] = 1;
	v->a[4108] = anon_sym_BQUOTE;
	v->a[4109] = actions(73);
	v->a[4110] = 1;
	v->a[4111] = sym_file_descriptor;
	v->a[4112] = actions(75);
	v->a[4113] = 1;
	v->a[4114] = sym_variable_name;
	v->a[4115] = state(28);
	v->a[4116] = 1;
	v->a[4117] = aux_sym__terminated_statement;
	v->a[4118] = state(189);
	v->a[4119] = 1;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = sym_command_name;
	v->a[4121] = state(273);
	v->a[4122] = 1;
	v->a[4123] = sym_variable_assignment;
	v->a[4124] = state(650);
	v->a[4125] = 1;
	v->a[4126] = sym_concatenation;
	v->a[4127] = state(712);
	v->a[4128] = 1;
	v->a[4129] = sym_file_redirect;
	v->a[4130] = state(713);
	v->a[4131] = 1;
	v->a[4132] = aux_sym_command_repeat1;
	v->a[4133] = state(1196);
	v->a[4134] = 1;
	v->a[4135] = sym_pipeline;
	v->a[4136] = state(1333);
	v->a[4137] = 1;
	v->a[4138] = aux_sym_redirected_statement_repeat2;
	v->a[4139] = state(2103);
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = 1;
	v->a[4141] = sym__statement_not_pipeline;
	v->a[4142] = actions(11);
	v->a[4143] = 2;
	v->a[4144] = anon_sym_while;
	v->a[4145] = anon_sym_until;
	v->a[4146] = actions(57);
	v->a[4147] = 2;
	v->a[4148] = anon_sym_LT_AMP_DASH;
	v->a[4149] = anon_sym_GT_AMP_DASH;
	v->a[4150] = actions(65);
	v->a[4151] = 2;
	v->a[4152] = sym_raw_string;
	v->a[4153] = sym_number;
	v->a[4154] = actions(212);
	v->a[4155] = 3;
	v->a[4156] = anon_sym_fi;
	v->a[4157] = anon_sym_elif;
	v->a[4158] = anon_sym_else;
	v->a[4159] = state(443);
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = 5;
	v->a[4161] = sym_arithmetic_expansion;
	v->a[4162] = sym_string;
	v->a[4163] = sym_simple_expansion;
	v->a[4164] = sym_expansion;
	v->a[4165] = sym_command_substitution;
	v->a[4166] = actions(55);
	v->a[4167] = 6;
	v->a[4168] = anon_sym_LT;
	v->a[4169] = anon_sym_GT;
	v->a[4170] = anon_sym_GT_GT;
	v->a[4171] = anon_sym_LT_AMP;
	v->a[4172] = anon_sym_GT_AMP;
	v->a[4173] = anon_sym_GT_PIPE;
	v->a[4174] = state(1187);
	v->a[4175] = 12;
	v->a[4176] = sym_redirected_statement;
	v->a[4177] = sym_for_statement;
	v->a[4178] = sym_while_statement;
	v->a[4179] = sym_if_statement;
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = sym_case_statement;
	v->a[4181] = sym_function_definition;
	v->a[4182] = sym_compound_statement;
	v->a[4183] = sym_subshell;
	v->a[4184] = sym_list;
	v->a[4185] = sym_negated_command;
	v->a[4186] = sym_command;
	v->a[4187] = sym__variable_assignments;
	v->a[4188] = 32;
	v->a[4189] = actions(3);
	v->a[4190] = 1;
	v->a[4191] = sym_comment;
	v->a[4192] = actions(89);
	v->a[4193] = 1;
	v->a[4194] = sym_word;
	v->a[4195] = actions(92);
	v->a[4196] = 1;
	v->a[4197] = anon_sym_for;
	v->a[4198] = actions(98);
	v->a[4199] = 1;
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
