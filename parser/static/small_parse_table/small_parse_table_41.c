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
	v->a[4100] = sym_expansion;
	v->a[4101] = sym_command_substitution;
	v->a[4102] = actions(105);
	v->a[4103] = 8;
	v->a[4104] = anon_sym_LT;
	v->a[4105] = anon_sym_GT;
	v->a[4106] = anon_sym_GT_GT;
	v->a[4107] = anon_sym_AMP_GT;
	v->a[4108] = anon_sym_AMP_GT_GT;
	v->a[4109] = anon_sym_LT_AMP;
	v->a[4110] = anon_sym_GT_AMP;
	v->a[4111] = anon_sym_GT_PIPE;
	v->a[4112] = state(1086);
	v->a[4113] = 12;
	v->a[4114] = sym_redirected_statement;
	v->a[4115] = sym_for_statement;
	v->a[4116] = sym_while_statement;
	v->a[4117] = sym_if_statement;
	v->a[4118] = sym_case_statement;
	v->a[4119] = sym_function_definition;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = sym_compound_statement;
	v->a[4121] = sym_subshell;
	v->a[4122] = sym_list;
	v->a[4123] = sym_negated_command;
	v->a[4124] = sym_command;
	v->a[4125] = sym__variable_assignments;
	v->a[4126] = 34;
	v->a[4127] = actions(3);
	v->a[4128] = 1;
	v->a[4129] = sym_comment;
	v->a[4130] = actions(9);
	v->a[4131] = 1;
	v->a[4132] = anon_sym_for;
	v->a[4133] = actions(13);
	v->a[4134] = 1;
	v->a[4135] = anon_sym_if;
	v->a[4136] = actions(15);
	v->a[4137] = 1;
	v->a[4138] = anon_sym_case;
	v->a[4139] = actions(17);
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = 1;
	v->a[4141] = anon_sym_LPAREN;
	v->a[4142] = actions(19);
	v->a[4143] = 1;
	v->a[4144] = anon_sym_LBRACE;
	v->a[4145] = actions(45);
	v->a[4146] = 1;
	v->a[4147] = sym_word;
	v->a[4148] = actions(53);
	v->a[4149] = 1;
	v->a[4150] = anon_sym_BANG;
	v->a[4151] = actions(59);
	v->a[4152] = 1;
	v->a[4153] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4154] = actions(61);
	v->a[4155] = 1;
	v->a[4156] = anon_sym_DOLLAR;
	v->a[4157] = actions(63);
	v->a[4158] = 1;
	v->a[4159] = anon_sym_DQUOTE;
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = actions(67);
	v->a[4161] = 1;
	v->a[4162] = anon_sym_DOLLAR_LBRACE;
	v->a[4163] = actions(69);
	v->a[4164] = 1;
	v->a[4165] = anon_sym_DOLLAR_LPAREN;
	v->a[4166] = actions(71);
	v->a[4167] = 1;
	v->a[4168] = anon_sym_BQUOTE;
	v->a[4169] = actions(73);
	v->a[4170] = 1;
	v->a[4171] = sym_file_descriptor;
	v->a[4172] = actions(75);
	v->a[4173] = 1;
	v->a[4174] = sym_variable_name;
	v->a[4175] = actions(99);
	v->a[4176] = 1;
	v->a[4177] = anon_sym_LF;
	v->a[4178] = state(130);
	v->a[4179] = 1;
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = aux_sym__statements_repeat1;
	v->a[4181] = state(191);
	v->a[4182] = 1;
	v->a[4183] = sym_command_name;
	v->a[4184] = state(262);
	v->a[4185] = 1;
	v->a[4186] = sym_variable_assignment;
	v->a[4187] = state(624);
	v->a[4188] = 1;
	v->a[4189] = sym_concatenation;
	v->a[4190] = state(709);
	v->a[4191] = 1;
	v->a[4192] = aux_sym__case_item_last_repeat2;
	v->a[4193] = state(726);
	v->a[4194] = 1;
	v->a[4195] = sym_file_redirect;
	v->a[4196] = state(733);
	v->a[4197] = 1;
	v->a[4198] = aux_sym_command_repeat1;
	v->a[4199] = state(1216);
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
