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
	v->a[4100] = sym_function_definition;
	v->a[4101] = sym_compound_statement;
	v->a[4102] = sym_subshell;
	v->a[4103] = sym_list;
	v->a[4104] = sym_negated_command;
	v->a[4105] = sym_command;
	v->a[4106] = sym__variable_assignments;
	v->a[4107] = 30;
	v->a[4108] = actions(3);
	v->a[4109] = 1;
	v->a[4110] = sym_comment;
	v->a[4111] = actions(133);
	v->a[4112] = 1;
	v->a[4113] = sym_word;
	v->a[4114] = actions(136);
	v->a[4115] = 1;
	v->a[4116] = anon_sym_for;
	v->a[4117] = actions(142);
	v->a[4118] = 1;
	v->a[4119] = anon_sym_if;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = actions(147);
	v->a[4121] = 1;
	v->a[4122] = anon_sym_case;
	v->a[4123] = actions(150);
	v->a[4124] = 1;
	v->a[4125] = anon_sym_LPAREN;
	v->a[4126] = actions(153);
	v->a[4127] = 1;
	v->a[4128] = anon_sym_LBRACE;
	v->a[4129] = actions(156);
	v->a[4130] = 1;
	v->a[4131] = anon_sym_BANG;
	v->a[4132] = actions(162);
	v->a[4133] = 1;
	v->a[4134] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4135] = actions(165);
	v->a[4136] = 1;
	v->a[4137] = anon_sym_DOLLAR;
	v->a[4138] = actions(168);
	v->a[4139] = 1;
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = anon_sym_DQUOTE;
	v->a[4141] = actions(174);
	v->a[4142] = 1;
	v->a[4143] = anon_sym_DOLLAR_LBRACE;
	v->a[4144] = actions(177);
	v->a[4145] = 1;
	v->a[4146] = anon_sym_DOLLAR_LPAREN;
	v->a[4147] = actions(180);
	v->a[4148] = 1;
	v->a[4149] = anon_sym_BQUOTE;
	v->a[4150] = actions(183);
	v->a[4151] = 1;
	v->a[4152] = sym_variable_name;
	v->a[4153] = state(36);
	v->a[4154] = 1;
	v->a[4155] = aux_sym__terminated_statement;
	v->a[4156] = state(271);
	v->a[4157] = 1;
	v->a[4158] = sym_command_name;
	v->a[4159] = state(298);
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = 1;
	v->a[4161] = sym_variable_assignment;
	v->a[4162] = state(482);
	v->a[4163] = 1;
	v->a[4164] = aux_sym_command_repeat1;
	v->a[4165] = state(600);
	v->a[4166] = 1;
	v->a[4167] = sym_file_redirect;
	v->a[4168] = state(602);
	v->a[4169] = 1;
	v->a[4170] = sym_concatenation;
	v->a[4171] = state(1012);
	v->a[4172] = 1;
	v->a[4173] = sym_pipeline;
	v->a[4174] = state(1068);
	v->a[4175] = 1;
	v->a[4176] = aux_sym_redirected_statement_repeat2;
	v->a[4177] = state(1609);
	v->a[4178] = 1;
	v->a[4179] = sym__statement_not_pipeline;
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = actions(139);
	v->a[4181] = 2;
	v->a[4182] = anon_sym_while;
	v->a[4183] = anon_sym_until;
	v->a[4184] = actions(145);
	v->a[4185] = 2;
	v->a[4186] = anon_sym_done;
	v->a[4187] = anon_sym_then;
	v->a[4188] = actions(171);
	v->a[4189] = 2;
	v->a[4190] = sym_raw_string;
	v->a[4191] = sym_number;
	v->a[4192] = state(425);
	v->a[4193] = 5;
	v->a[4194] = sym_arithmetic_expansion;
	v->a[4195] = sym_string;
	v->a[4196] = sym_simple_expansion;
	v->a[4197] = sym_expansion;
	v->a[4198] = sym_command_substitution;
	v->a[4199] = actions(159);
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
