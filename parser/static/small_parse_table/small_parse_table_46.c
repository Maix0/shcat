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
	v->a[4600] = 1;
	v->a[4601] = anon_sym_LBRACE;
	v->a[4602] = actions(49);
	v->a[4603] = 1;
	v->a[4604] = sym_word;
	v->a[4605] = actions(57);
	v->a[4606] = 1;
	v->a[4607] = anon_sym_BANG;
	v->a[4608] = actions(63);
	v->a[4609] = 1;
	v->a[4610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4611] = actions(65);
	v->a[4612] = 1;
	v->a[4613] = anon_sym_DOLLAR;
	v->a[4614] = actions(67);
	v->a[4615] = 1;
	v->a[4616] = anon_sym_DQUOTE;
	v->a[4617] = actions(69);
	v->a[4618] = 1;
	v->a[4619] = sym_raw_string;
	small_parse_table_231(v);
}

void	small_parse_table_231(t_small_parse_table_array *v)
{
	v->a[4620] = actions(71);
	v->a[4621] = 1;
	v->a[4622] = aux_sym_number_token1;
	v->a[4623] = actions(73);
	v->a[4624] = 1;
	v->a[4625] = aux_sym_number_token2;
	v->a[4626] = actions(75);
	v->a[4627] = 1;
	v->a[4628] = anon_sym_DOLLAR_LBRACE;
	v->a[4629] = actions(77);
	v->a[4630] = 1;
	v->a[4631] = anon_sym_DOLLAR_LPAREN;
	v->a[4632] = actions(79);
	v->a[4633] = 1;
	v->a[4634] = anon_sym_BQUOTE;
	v->a[4635] = actions(81);
	v->a[4636] = 1;
	v->a[4637] = sym_file_descriptor;
	v->a[4638] = actions(83);
	v->a[4639] = 1;
	small_parse_table_232(v);
}

void	small_parse_table_232(t_small_parse_table_array *v)
{
	v->a[4640] = sym_variable_name;
	v->a[4641] = actions(234);
	v->a[4642] = 1;
	v->a[4643] = anon_sym_do;
	v->a[4644] = state(107);
	v->a[4645] = 1;
	v->a[4646] = aux_sym__terminated_statement;
	v->a[4647] = state(190);
	v->a[4648] = 1;
	v->a[4649] = sym_command_name;
	v->a[4650] = state(280);
	v->a[4651] = 1;
	v->a[4652] = sym_variable_assignment;
	v->a[4653] = state(582);
	v->a[4654] = 1;
	v->a[4655] = sym_concatenation;
	v->a[4656] = state(587);
	v->a[4657] = 1;
	v->a[4658] = aux_sym_command_repeat1;
	v->a[4659] = state(718);
	small_parse_table_233(v);
}

void	small_parse_table_233(t_small_parse_table_array *v)
{
	v->a[4660] = 1;
	v->a[4661] = sym_file_redirect;
	v->a[4662] = state(1176);
	v->a[4663] = 1;
	v->a[4664] = sym_do_group;
	v->a[4665] = state(1213);
	v->a[4666] = 1;
	v->a[4667] = aux_sym_redirected_statement_repeat2;
	v->a[4668] = state(1233);
	v->a[4669] = 1;
	v->a[4670] = sym_pipeline;
	v->a[4671] = state(2035);
	v->a[4672] = 1;
	v->a[4673] = sym__statement_not_pipeline;
	v->a[4674] = actions(11);
	v->a[4675] = 2;
	v->a[4676] = anon_sym_while;
	v->a[4677] = anon_sym_until;
	v->a[4678] = actions(61);
	v->a[4679] = 2;
	small_parse_table_234(v);
}

void	small_parse_table_234(t_small_parse_table_array *v)
{
	v->a[4680] = anon_sym_LT_AMP_DASH;
	v->a[4681] = anon_sym_GT_AMP_DASH;
	v->a[4682] = state(397);
	v->a[4683] = 6;
	v->a[4684] = sym_arithmetic_expansion;
	v->a[4685] = sym_string;
	v->a[4686] = sym_number;
	v->a[4687] = sym_simple_expansion;
	v->a[4688] = sym_expansion;
	v->a[4689] = sym_command_substitution;
	v->a[4690] = actions(59);
	v->a[4691] = 8;
	v->a[4692] = anon_sym_LT;
	v->a[4693] = anon_sym_GT;
	v->a[4694] = anon_sym_GT_GT;
	v->a[4695] = anon_sym_AMP_GT;
	v->a[4696] = anon_sym_AMP_GT_GT;
	v->a[4697] = anon_sym_LT_AMP;
	v->a[4698] = anon_sym_GT_AMP;
	v->a[4699] = anon_sym_GT_PIPE;
	small_parse_table_235(v);
}

/* EOF small_parse_table_46.c */
