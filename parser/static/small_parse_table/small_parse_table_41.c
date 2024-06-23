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
	v->a[4100] = 5;
	v->a[4101] = sym_arithmetic_expansion;
	v->a[4102] = sym_string;
	v->a[4103] = sym_simple_expansion;
	v->a[4104] = sym_expansion;
	v->a[4105] = sym_command_substitution;
	v->a[4106] = actions(105);
	v->a[4107] = 8;
	v->a[4108] = anon_sym_LT;
	v->a[4109] = anon_sym_GT;
	v->a[4110] = anon_sym_GT_GT;
	v->a[4111] = anon_sym_AMP_GT;
	v->a[4112] = anon_sym_AMP_GT_GT;
	v->a[4113] = anon_sym_LT_AMP;
	v->a[4114] = anon_sym_GT_AMP;
	v->a[4115] = anon_sym_GT_PIPE;
	v->a[4116] = state(1296);
	v->a[4117] = 12;
	v->a[4118] = sym_redirected_statement;
	v->a[4119] = sym_for_statement;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = sym_while_statement;
	v->a[4121] = sym_if_statement;
	v->a[4122] = sym_case_statement;
	v->a[4123] = sym_function_definition;
	v->a[4124] = sym_compound_statement;
	v->a[4125] = sym_subshell;
	v->a[4126] = sym_list;
	v->a[4127] = sym_negated_command;
	v->a[4128] = sym_command;
	v->a[4129] = sym__variable_assignments;
	v->a[4130] = 32;
	v->a[4131] = actions(3);
	v->a[4132] = 1;
	v->a[4133] = sym_comment;
	v->a[4134] = actions(9);
	v->a[4135] = 1;
	v->a[4136] = anon_sym_for;
	v->a[4137] = actions(13);
	v->a[4138] = 1;
	v->a[4139] = anon_sym_if;
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = actions(15);
	v->a[4141] = 1;
	v->a[4142] = anon_sym_case;
	v->a[4143] = actions(17);
	v->a[4144] = 1;
	v->a[4145] = anon_sym_LPAREN;
	v->a[4146] = actions(19);
	v->a[4147] = 1;
	v->a[4148] = anon_sym_LBRACE;
	v->a[4149] = actions(45);
	v->a[4150] = 1;
	v->a[4151] = sym_word;
	v->a[4152] = actions(53);
	v->a[4153] = 1;
	v->a[4154] = anon_sym_BANG;
	v->a[4155] = actions(59);
	v->a[4156] = 1;
	v->a[4157] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4158] = actions(61);
	v->a[4159] = 1;
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = anon_sym_DOLLAR;
	v->a[4161] = actions(63);
	v->a[4162] = 1;
	v->a[4163] = anon_sym_DQUOTE;
	v->a[4164] = actions(67);
	v->a[4165] = 1;
	v->a[4166] = anon_sym_DOLLAR_LBRACE;
	v->a[4167] = actions(69);
	v->a[4168] = 1;
	v->a[4169] = anon_sym_DOLLAR_LPAREN;
	v->a[4170] = actions(71);
	v->a[4171] = 1;
	v->a[4172] = anon_sym_BQUOTE;
	v->a[4173] = actions(73);
	v->a[4174] = 1;
	v->a[4175] = sym_file_descriptor;
	v->a[4176] = actions(75);
	v->a[4177] = 1;
	v->a[4178] = sym_variable_name;
	v->a[4179] = state(30);
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = 1;
	v->a[4181] = aux_sym__terminated_statement;
	v->a[4182] = state(187);
	v->a[4183] = 1;
	v->a[4184] = sym_command_name;
	v->a[4185] = state(288);
	v->a[4186] = 1;
	v->a[4187] = sym_variable_assignment;
	v->a[4188] = state(647);
	v->a[4189] = 1;
	v->a[4190] = sym_concatenation;
	v->a[4191] = state(736);
	v->a[4192] = 1;
	v->a[4193] = aux_sym_command_repeat1;
	v->a[4194] = state(738);
	v->a[4195] = 1;
	v->a[4196] = sym_file_redirect;
	v->a[4197] = state(1443);
	v->a[4198] = 1;
	v->a[4199] = sym_pipeline;
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
