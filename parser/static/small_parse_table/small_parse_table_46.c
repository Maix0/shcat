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
	v->a[4600] = sym_file_descriptor;
	v->a[4601] = actions(75);
	v->a[4602] = 1;
	v->a[4603] = sym_variable_name;
	v->a[4604] = actions(218);
	v->a[4605] = 1;
	v->a[4606] = anon_sym_do;
	v->a[4607] = state(117);
	v->a[4608] = 1;
	v->a[4609] = aux_sym__terminated_statement;
	v->a[4610] = state(189);
	v->a[4611] = 1;
	v->a[4612] = sym_command_name;
	v->a[4613] = state(296);
	v->a[4614] = 1;
	v->a[4615] = sym_variable_assignment;
	v->a[4616] = state(650);
	v->a[4617] = 1;
	v->a[4618] = sym_concatenation;
	v->a[4619] = state(712);
	small_parse_table_231(v);
}

void	small_parse_table_231(t_small_parse_table_array *v)
{
	v->a[4620] = 1;
	v->a[4621] = sym_file_redirect;
	v->a[4622] = state(713);
	v->a[4623] = 1;
	v->a[4624] = aux_sym_command_repeat1;
	v->a[4625] = state(1215);
	v->a[4626] = 1;
	v->a[4627] = sym_pipeline;
	v->a[4628] = state(1333);
	v->a[4629] = 1;
	v->a[4630] = aux_sym_redirected_statement_repeat2;
	v->a[4631] = state(1390);
	v->a[4632] = 1;
	v->a[4633] = sym_do_group;
	v->a[4634] = state(2103);
	v->a[4635] = 1;
	v->a[4636] = sym__statement_not_pipeline;
	v->a[4637] = actions(11);
	v->a[4638] = 2;
	v->a[4639] = anon_sym_while;
	small_parse_table_232(v);
}

void	small_parse_table_232(t_small_parse_table_array *v)
{
	v->a[4640] = anon_sym_until;
	v->a[4641] = actions(57);
	v->a[4642] = 2;
	v->a[4643] = anon_sym_LT_AMP_DASH;
	v->a[4644] = anon_sym_GT_AMP_DASH;
	v->a[4645] = actions(65);
	v->a[4646] = 2;
	v->a[4647] = sym_raw_string;
	v->a[4648] = sym_number;
	v->a[4649] = state(443);
	v->a[4650] = 5;
	v->a[4651] = sym_arithmetic_expansion;
	v->a[4652] = sym_string;
	v->a[4653] = sym_simple_expansion;
	v->a[4654] = sym_expansion;
	v->a[4655] = sym_command_substitution;
	v->a[4656] = actions(55);
	v->a[4657] = 6;
	v->a[4658] = anon_sym_LT;
	v->a[4659] = anon_sym_GT;
	small_parse_table_233(v);
}

void	small_parse_table_233(t_small_parse_table_array *v)
{
	v->a[4660] = anon_sym_GT_GT;
	v->a[4661] = anon_sym_LT_AMP;
	v->a[4662] = anon_sym_GT_AMP;
	v->a[4663] = anon_sym_GT_PIPE;
	v->a[4664] = state(1170);
	v->a[4665] = 12;
	v->a[4666] = sym_redirected_statement;
	v->a[4667] = sym_for_statement;
	v->a[4668] = sym_while_statement;
	v->a[4669] = sym_if_statement;
	v->a[4670] = sym_case_statement;
	v->a[4671] = sym_function_definition;
	v->a[4672] = sym_compound_statement;
	v->a[4673] = sym_subshell;
	v->a[4674] = sym_list;
	v->a[4675] = sym_negated_command;
	v->a[4676] = sym_command;
	v->a[4677] = sym__variable_assignments;
	v->a[4678] = 32;
	v->a[4679] = actions(3);
	small_parse_table_234(v);
}

void	small_parse_table_234(t_small_parse_table_array *v)
{
	v->a[4680] = 1;
	v->a[4681] = sym_comment;
	v->a[4682] = actions(9);
	v->a[4683] = 1;
	v->a[4684] = anon_sym_for;
	v->a[4685] = actions(13);
	v->a[4686] = 1;
	v->a[4687] = anon_sym_if;
	v->a[4688] = actions(15);
	v->a[4689] = 1;
	v->a[4690] = anon_sym_case;
	v->a[4691] = actions(17);
	v->a[4692] = 1;
	v->a[4693] = anon_sym_LPAREN;
	v->a[4694] = actions(19);
	v->a[4695] = 1;
	v->a[4696] = anon_sym_LBRACE;
	v->a[4697] = actions(59);
	v->a[4698] = 1;
	v->a[4699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_235(v);
}

/* EOF small_parse_table_46.c */
