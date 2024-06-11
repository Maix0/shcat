/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_42.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_210(t_small_parse_table_array *v)
{
	v->a[4200] = state(1460);
	v->a[4201] = 1;
	v->a[4202] = aux_sym_redirected_statement_repeat2;
	v->a[4203] = state(2269);
	v->a[4204] = 1;
	v->a[4205] = sym__statement_not_pipeline;
	v->a[4206] = actions(11);
	v->a[4207] = 2;
	v->a[4208] = anon_sym_while;
	v->a[4209] = anon_sym_until;
	v->a[4210] = actions(57);
	v->a[4211] = 2;
	v->a[4212] = anon_sym_LT_AMP_DASH;
	v->a[4213] = anon_sym_GT_AMP_DASH;
	v->a[4214] = actions(65);
	v->a[4215] = 2;
	v->a[4216] = sym_raw_string;
	v->a[4217] = sym_number;
	v->a[4218] = actions(212);
	v->a[4219] = 3;
	small_parse_table_211(v);
}

void	small_parse_table_211(t_small_parse_table_array *v)
{
	v->a[4220] = anon_sym_fi;
	v->a[4221] = anon_sym_elif;
	v->a[4222] = anon_sym_else;
	v->a[4223] = state(394);
	v->a[4224] = 5;
	v->a[4225] = sym_arithmetic_expansion;
	v->a[4226] = sym_string;
	v->a[4227] = sym_simple_expansion;
	v->a[4228] = sym_expansion;
	v->a[4229] = sym_command_substitution;
	v->a[4230] = actions(55);
	v->a[4231] = 8;
	v->a[4232] = anon_sym_LT;
	v->a[4233] = anon_sym_GT;
	v->a[4234] = anon_sym_GT_GT;
	v->a[4235] = anon_sym_AMP_GT;
	v->a[4236] = anon_sym_AMP_GT_GT;
	v->a[4237] = anon_sym_LT_AMP;
	v->a[4238] = anon_sym_GT_AMP;
	v->a[4239] = anon_sym_GT_PIPE;
	small_parse_table_212(v);
}

void	small_parse_table_212(t_small_parse_table_array *v)
{
	v->a[4240] = state(1413);
	v->a[4241] = 12;
	v->a[4242] = sym_redirected_statement;
	v->a[4243] = sym_for_statement;
	v->a[4244] = sym_while_statement;
	v->a[4245] = sym_if_statement;
	v->a[4246] = sym_case_statement;
	v->a[4247] = sym_function_definition;
	v->a[4248] = sym_compound_statement;
	v->a[4249] = sym_subshell;
	v->a[4250] = sym_list;
	v->a[4251] = sym_negated_command;
	v->a[4252] = sym_command;
	v->a[4253] = sym_variable_assignments;
	v->a[4254] = 32;
	v->a[4255] = actions(3);
	v->a[4256] = 1;
	v->a[4257] = sym_comment;
	v->a[4258] = actions(143);
	v->a[4259] = 1;
	small_parse_table_213(v);
}

void	small_parse_table_213(t_small_parse_table_array *v)
{
	v->a[4260] = sym_word;
	v->a[4261] = actions(146);
	v->a[4262] = 1;
	v->a[4263] = anon_sym_for;
	v->a[4264] = actions(152);
	v->a[4265] = 1;
	v->a[4266] = anon_sym_if;
	v->a[4267] = actions(157);
	v->a[4268] = 1;
	v->a[4269] = anon_sym_case;
	v->a[4270] = actions(160);
	v->a[4271] = 1;
	v->a[4272] = anon_sym_LPAREN;
	v->a[4273] = actions(163);
	v->a[4274] = 1;
	v->a[4275] = anon_sym_LBRACE;
	v->a[4276] = actions(166);
	v->a[4277] = 1;
	v->a[4278] = anon_sym_BANG;
	v->a[4279] = actions(175);
	small_parse_table_214(v);
}

void	small_parse_table_214(t_small_parse_table_array *v)
{
	v->a[4280] = 1;
	v->a[4281] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4282] = actions(178);
	v->a[4283] = 1;
	v->a[4284] = anon_sym_DOLLAR;
	v->a[4285] = actions(181);
	v->a[4286] = 1;
	v->a[4287] = anon_sym_DQUOTE;
	v->a[4288] = actions(187);
	v->a[4289] = 1;
	v->a[4290] = anon_sym_DOLLAR_LBRACE;
	v->a[4291] = actions(190);
	v->a[4292] = 1;
	v->a[4293] = anon_sym_DOLLAR_LPAREN;
	v->a[4294] = actions(193);
	v->a[4295] = 1;
	v->a[4296] = anon_sym_BQUOTE;
	v->a[4297] = actions(196);
	v->a[4298] = 1;
	v->a[4299] = sym_file_descriptor;
	small_parse_table_215(v);
}

/* EOF small_parse_table_42.c */
