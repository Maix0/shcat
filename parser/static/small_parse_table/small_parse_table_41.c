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
	v->a[4101] = anon_sym_BQUOTE;
	v->a[4102] = actions(81);
	v->a[4103] = 1;
	v->a[4104] = sym_file_descriptor;
	v->a[4105] = actions(83);
	v->a[4106] = 1;
	v->a[4107] = sym_variable_name;
	v->a[4108] = actions(141);
	v->a[4109] = 1;
	v->a[4110] = anon_sym_LF;
	v->a[4111] = state(131);
	v->a[4112] = 1;
	v->a[4113] = aux_sym__statements_repeat1;
	v->a[4114] = state(190);
	v->a[4115] = 1;
	v->a[4116] = sym_command_name;
	v->a[4117] = state(314);
	v->a[4118] = 1;
	v->a[4119] = sym_variable_assignment;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = state(582);
	v->a[4121] = 1;
	v->a[4122] = sym_concatenation;
	v->a[4123] = state(587);
	v->a[4124] = 1;
	v->a[4125] = aux_sym_command_repeat1;
	v->a[4126] = state(689);
	v->a[4127] = 1;
	v->a[4128] = aux_sym__case_item_last_repeat2;
	v->a[4129] = state(718);
	v->a[4130] = 1;
	v->a[4131] = sym_file_redirect;
	v->a[4132] = state(1211);
	v->a[4133] = 1;
	v->a[4134] = sym_pipeline;
	v->a[4135] = state(1213);
	v->a[4136] = 1;
	v->a[4137] = aux_sym_redirected_statement_repeat2;
	v->a[4138] = state(2035);
	v->a[4139] = 1;
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = sym__statement_not_pipeline;
	v->a[4141] = state(2065);
	v->a[4142] = 1;
	v->a[4143] = sym__statements;
	v->a[4144] = actions(11);
	v->a[4145] = 2;
	v->a[4146] = anon_sym_while;
	v->a[4147] = anon_sym_until;
	v->a[4148] = actions(61);
	v->a[4149] = 2;
	v->a[4150] = anon_sym_LT_AMP_DASH;
	v->a[4151] = anon_sym_GT_AMP_DASH;
	v->a[4152] = state(397);
	v->a[4153] = 6;
	v->a[4154] = sym_arithmetic_expansion;
	v->a[4155] = sym_string;
	v->a[4156] = sym_number;
	v->a[4157] = sym_simple_expansion;
	v->a[4158] = sym_expansion;
	v->a[4159] = sym_command_substitution;
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = actions(59);
	v->a[4161] = 8;
	v->a[4162] = anon_sym_LT;
	v->a[4163] = anon_sym_GT;
	v->a[4164] = anon_sym_GT_GT;
	v->a[4165] = anon_sym_AMP_GT;
	v->a[4166] = anon_sym_AMP_GT_GT;
	v->a[4167] = anon_sym_LT_AMP;
	v->a[4168] = anon_sym_GT_AMP;
	v->a[4169] = anon_sym_GT_PIPE;
	v->a[4170] = state(1140);
	v->a[4171] = 12;
	v->a[4172] = sym_redirected_statement;
	v->a[4173] = sym_for_statement;
	v->a[4174] = sym_while_statement;
	v->a[4175] = sym_if_statement;
	v->a[4176] = sym_case_statement;
	v->a[4177] = sym_function_definition;
	v->a[4178] = sym_compound_statement;
	v->a[4179] = sym_subshell;
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = sym_list;
	v->a[4181] = sym_negated_command;
	v->a[4182] = sym_command;
	v->a[4183] = sym_variable_assignments;
	v->a[4184] = 36;
	v->a[4185] = actions(3);
	v->a[4186] = 1;
	v->a[4187] = sym_comment;
	v->a[4188] = actions(95);
	v->a[4189] = 1;
	v->a[4190] = sym_word;
	v->a[4191] = actions(97);
	v->a[4192] = 1;
	v->a[4193] = anon_sym_for;
	v->a[4194] = actions(101);
	v->a[4195] = 1;
	v->a[4196] = anon_sym_if;
	v->a[4197] = actions(103);
	v->a[4198] = 1;
	v->a[4199] = anon_sym_case;
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
