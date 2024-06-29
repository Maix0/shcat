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
	v->a[4600] = sym_simple_expansion;
	v->a[4601] = sym_expansion;
	v->a[4602] = sym_command_substitution;
	v->a[4603] = actions(55);
	v->a[4604] = 8;
	v->a[4605] = anon_sym_LT;
	v->a[4606] = anon_sym_GT;
	v->a[4607] = anon_sym_GT_GT;
	v->a[4608] = anon_sym_AMP_GT;
	v->a[4609] = anon_sym_AMP_GT_GT;
	v->a[4610] = anon_sym_LT_AMP;
	v->a[4611] = anon_sym_GT_AMP;
	v->a[4612] = anon_sym_GT_PIPE;
	v->a[4613] = state(1174);
	v->a[4614] = 12;
	v->a[4615] = sym_redirected_statement;
	v->a[4616] = sym_for_statement;
	v->a[4617] = sym_while_statement;
	v->a[4618] = sym_if_statement;
	v->a[4619] = sym_case_statement;
	small_parse_table_231(v);
}

void	small_parse_table_231(t_small_parse_table_array *v)
{
	v->a[4620] = sym_function_definition;
	v->a[4621] = sym_compound_statement;
	v->a[4622] = sym_subshell;
	v->a[4623] = sym_list;
	v->a[4624] = sym_negated_command;
	v->a[4625] = sym_command;
	v->a[4626] = sym__variable_assignments;
	v->a[4627] = 33;
	v->a[4628] = actions(3);
	v->a[4629] = 1;
	v->a[4630] = sym_comment;
	v->a[4631] = actions(9);
	v->a[4632] = 1;
	v->a[4633] = anon_sym_for;
	v->a[4634] = actions(13);
	v->a[4635] = 1;
	v->a[4636] = anon_sym_if;
	v->a[4637] = actions(15);
	v->a[4638] = 1;
	v->a[4639] = anon_sym_case;
	small_parse_table_232(v);
}

void	small_parse_table_232(t_small_parse_table_array *v)
{
	v->a[4640] = actions(17);
	v->a[4641] = 1;
	v->a[4642] = anon_sym_LPAREN;
	v->a[4643] = actions(19);
	v->a[4644] = 1;
	v->a[4645] = anon_sym_LBRACE;
	v->a[4646] = actions(45);
	v->a[4647] = 1;
	v->a[4648] = sym_word;
	v->a[4649] = actions(53);
	v->a[4650] = 1;
	v->a[4651] = anon_sym_BANG;
	v->a[4652] = actions(59);
	v->a[4653] = 1;
	v->a[4654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4655] = actions(61);
	v->a[4656] = 1;
	v->a[4657] = anon_sym_DOLLAR;
	v->a[4658] = actions(63);
	v->a[4659] = 1;
	small_parse_table_233(v);
}

void	small_parse_table_233(t_small_parse_table_array *v)
{
	v->a[4660] = anon_sym_DQUOTE;
	v->a[4661] = actions(67);
	v->a[4662] = 1;
	v->a[4663] = anon_sym_DOLLAR_LBRACE;
	v->a[4664] = actions(69);
	v->a[4665] = 1;
	v->a[4666] = anon_sym_DOLLAR_LPAREN;
	v->a[4667] = actions(71);
	v->a[4668] = 1;
	v->a[4669] = anon_sym_BQUOTE;
	v->a[4670] = actions(73);
	v->a[4671] = 1;
	v->a[4672] = sym_file_descriptor;
	v->a[4673] = actions(75);
	v->a[4674] = 1;
	v->a[4675] = sym_variable_name;
	v->a[4676] = actions(218);
	v->a[4677] = 1;
	v->a[4678] = anon_sym_do;
	v->a[4679] = state(118);
	small_parse_table_234(v);
}

void	small_parse_table_234(t_small_parse_table_array *v)
{
	v->a[4680] = 1;
	v->a[4681] = aux_sym__terminated_statement;
	v->a[4682] = state(191);
	v->a[4683] = 1;
	v->a[4684] = sym_command_name;
	v->a[4685] = state(280);
	v->a[4686] = 1;
	v->a[4687] = sym_variable_assignment;
	v->a[4688] = state(624);
	v->a[4689] = 1;
	v->a[4690] = sym_concatenation;
	v->a[4691] = state(726);
	v->a[4692] = 1;
	v->a[4693] = sym_file_redirect;
	v->a[4694] = state(733);
	v->a[4695] = 1;
	v->a[4696] = aux_sym_command_repeat1;
	v->a[4697] = state(1235);
	v->a[4698] = 1;
	v->a[4699] = sym_pipeline;
	small_parse_table_235(v);
}

/* EOF small_parse_table_46.c */
