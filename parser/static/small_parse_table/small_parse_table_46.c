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
	v->a[4600] = anon_sym_DOLLAR_LPAREN;
	v->a[4601] = actions(67);
	v->a[4602] = 1;
	v->a[4603] = anon_sym_BQUOTE;
	v->a[4604] = actions(211);
	v->a[4605] = 1;
	v->a[4606] = sym_word;
	v->a[4607] = actions(213);
	v->a[4608] = 1;
	v->a[4609] = anon_sym_BANG;
	v->a[4610] = actions(219);
	v->a[4611] = 1;
	v->a[4612] = sym_file_descriptor;
	v->a[4613] = actions(221);
	v->a[4614] = 1;
	v->a[4615] = sym_variable_name;
	v->a[4616] = state(120);
	v->a[4617] = 1;
	v->a[4618] = aux_sym__statements_repeat1;
	v->a[4619] = state(177);
	small_parse_table_231(v);
}

void	small_parse_table_231(t_small_parse_table_array *v)
{
	v->a[4620] = 1;
	v->a[4621] = sym_command_name;
	v->a[4622] = state(208);
	v->a[4623] = 1;
	v->a[4624] = sym_variable_assignment;
	v->a[4625] = state(584);
	v->a[4626] = 1;
	v->a[4627] = sym_concatenation;
	v->a[4628] = state(639);
	v->a[4629] = 1;
	v->a[4630] = aux_sym_command_repeat1;
	v->a[4631] = state(689);
	v->a[4632] = 1;
	v->a[4633] = sym_file_redirect;
	v->a[4634] = state(1073);
	v->a[4635] = 1;
	v->a[4636] = sym_pipeline;
	v->a[4637] = state(1158);
	v->a[4638] = 1;
	v->a[4639] = aux_sym_redirected_statement_repeat2;
	small_parse_table_232(v);
}

void	small_parse_table_232(t_small_parse_table_array *v)
{
	v->a[4640] = state(1906);
	v->a[4641] = 1;
	v->a[4642] = sym__statement_not_pipeline;
	v->a[4643] = state(1949);
	v->a[4644] = 1;
	v->a[4645] = sym__statements;
	v->a[4646] = actions(11);
	v->a[4647] = 2;
	v->a[4648] = anon_sym_while;
	v->a[4649] = anon_sym_until;
	v->a[4650] = actions(217);
	v->a[4651] = 2;
	v->a[4652] = sym_raw_string;
	v->a[4653] = sym_number;
	v->a[4654] = state(347);
	v->a[4655] = 5;
	v->a[4656] = sym_arithmetic_expansion;
	v->a[4657] = sym_string;
	v->a[4658] = sym_simple_expansion;
	v->a[4659] = sym_expansion;
	small_parse_table_233(v);
}

void	small_parse_table_233(t_small_parse_table_array *v)
{
	v->a[4660] = sym_command_substitution;
	v->a[4661] = actions(215);
	v->a[4662] = 7;
	v->a[4663] = anon_sym_LT;
	v->a[4664] = anon_sym_GT;
	v->a[4665] = anon_sym_GT_GT;
	v->a[4666] = anon_sym_LT_AMP;
	v->a[4667] = anon_sym_GT_AMP;
	v->a[4668] = anon_sym_GT_PIPE;
	v->a[4669] = anon_sym_LT_GT;
	v->a[4670] = state(958);
	v->a[4671] = 12;
	v->a[4672] = sym_redirected_statement;
	v->a[4673] = sym_for_statement;
	v->a[4674] = sym_while_statement;
	v->a[4675] = sym_if_statement;
	v->a[4676] = sym_case_statement;
	v->a[4677] = sym_function_definition;
	v->a[4678] = sym_compound_statement;
	v->a[4679] = sym_subshell;
	small_parse_table_234(v);
}

void	small_parse_table_234(t_small_parse_table_array *v)
{
	v->a[4680] = sym_list;
	v->a[4681] = sym_negated_command;
	v->a[4682] = sym_command;
	v->a[4683] = sym__variable_assignments;
	v->a[4684] = 31;
	v->a[4685] = actions(3);
	v->a[4686] = 1;
	v->a[4687] = sym_comment;
	v->a[4688] = actions(9);
	v->a[4689] = 1;
	v->a[4690] = anon_sym_for;
	v->a[4691] = actions(13);
	v->a[4692] = 1;
	v->a[4693] = anon_sym_if;
	v->a[4694] = actions(15);
	v->a[4695] = 1;
	v->a[4696] = anon_sym_case;
	v->a[4697] = actions(17);
	v->a[4698] = 1;
	v->a[4699] = anon_sym_LPAREN;
	small_parse_table_235(v);
}

/* EOF small_parse_table_46.c */
