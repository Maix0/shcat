/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_46.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_230(t_small_parse_table_array *v)
{
	v->a[4600] = sym__statement_not_pipeline;
	v->a[4601] = state(1602);
	v->a[4602] = 1;
	v->a[4603] = sym__statements;
	v->a[4604] = actions(11);
	v->a[4605] = 2;
	v->a[4606] = anon_sym_while;
	v->a[4607] = anon_sym_until;
	v->a[4608] = actions(214);
	v->a[4609] = 2;
	v->a[4610] = sym_raw_string;
	v->a[4611] = sym_number;
	v->a[4612] = actions(212);
	v->a[4613] = 3;
	v->a[4614] = anon_sym_LT;
	v->a[4615] = anon_sym_GT;
	v->a[4616] = anon_sym_GT_GT;
	v->a[4617] = state(277);
	v->a[4618] = 5;
	v->a[4619] = sym_arithmetic_expansion;
	small_parse_table_231(v);
}

void	small_parse_table_231(t_small_parse_table_array *v)
{
	v->a[4620] = sym_string;
	v->a[4621] = sym_simple_expansion;
	v->a[4622] = sym_expansion;
	v->a[4623] = sym_command_substitution;
	v->a[4624] = state(877);
	v->a[4625] = 12;
	v->a[4626] = sym_redirected_statement;
	v->a[4627] = sym_for_statement;
	v->a[4628] = sym_while_statement;
	v->a[4629] = sym_if_statement;
	v->a[4630] = sym_case_statement;
	v->a[4631] = sym_function_definition;
	v->a[4632] = sym_compound_statement;
	v->a[4633] = sym_subshell;
	v->a[4634] = sym_list;
	v->a[4635] = sym_negated_command;
	v->a[4636] = sym_command;
	v->a[4637] = sym__variable_assignments;
	v->a[4638] = 30;
	v->a[4639] = actions(3);
	small_parse_table_232(v);
}

void	small_parse_table_232(t_small_parse_table_array *v)
{
	v->a[4640] = 1;
	v->a[4641] = sym_comment;
	v->a[4642] = actions(123);
	v->a[4643] = 1;
	v->a[4644] = sym_word;
	v->a[4645] = actions(126);
	v->a[4646] = 1;
	v->a[4647] = anon_sym_for;
	v->a[4648] = actions(132);
	v->a[4649] = 1;
	v->a[4650] = anon_sym_if;
	v->a[4651] = actions(135);
	v->a[4652] = 1;
	v->a[4653] = anon_sym_RBRACE;
	v->a[4654] = actions(137);
	v->a[4655] = 1;
	v->a[4656] = anon_sym_case;
	v->a[4657] = actions(140);
	v->a[4658] = 1;
	v->a[4659] = anon_sym_LPAREN;
	small_parse_table_233(v);
}

void	small_parse_table_233(t_small_parse_table_array *v)
{
	v->a[4660] = actions(143);
	v->a[4661] = 1;
	v->a[4662] = anon_sym_LBRACE;
	v->a[4663] = actions(146);
	v->a[4664] = 1;
	v->a[4665] = anon_sym_BANG;
	v->a[4666] = actions(152);
	v->a[4667] = 1;
	v->a[4668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4669] = actions(155);
	v->a[4670] = 1;
	v->a[4671] = anon_sym_DOLLAR;
	v->a[4672] = actions(158);
	v->a[4673] = 1;
	v->a[4674] = anon_sym_DQUOTE;
	v->a[4675] = actions(164);
	v->a[4676] = 1;
	v->a[4677] = anon_sym_DOLLAR_LBRACE;
	v->a[4678] = actions(167);
	v->a[4679] = 1;
	small_parse_table_234(v);
}

void	small_parse_table_234(t_small_parse_table_array *v)
{
	v->a[4680] = anon_sym_DOLLAR_LPAREN;
	v->a[4681] = actions(170);
	v->a[4682] = 1;
	v->a[4683] = anon_sym_BQUOTE;
	v->a[4684] = actions(173);
	v->a[4685] = 1;
	v->a[4686] = sym_variable_name;
	v->a[4687] = state(42);
	v->a[4688] = 1;
	v->a[4689] = aux_sym__terminated_statement;
	v->a[4690] = state(185);
	v->a[4691] = 1;
	v->a[4692] = sym_command_name;
	v->a[4693] = state(209);
	v->a[4694] = 1;
	v->a[4695] = sym_variable_assignment;
	v->a[4696] = state(411);
	v->a[4697] = 1;
	v->a[4698] = aux_sym_command_repeat1;
	v->a[4699] = state(551);
	small_parse_table_235(v);
}

/* EOF small_parse_table_46.c */
