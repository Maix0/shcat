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
	v->a[4601] = anon_sym_DQUOTE;
	v->a[4602] = actions(1495);
	v->a[4603] = 1;
	v->a[4604] = aux_sym_number_token1;
	v->a[4605] = actions(1498);
	v->a[4606] = 1;
	v->a[4607] = aux_sym_number_token2;
	v->a[4608] = actions(1501);
	v->a[4609] = 1;
	v->a[4610] = anon_sym_DOLLAR_LBRACE;
	v->a[4611] = actions(1504);
	v->a[4612] = 1;
	v->a[4613] = anon_sym_DOLLAR_LPAREN;
	v->a[4614] = actions(1507);
	v->a[4615] = 1;
	v->a[4616] = anon_sym_BQUOTE;
	v->a[4617] = actions(1510);
	v->a[4618] = 1;
	v->a[4619] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_231(v);
}

void	small_parse_table_231(t_small_parse_table_array *v)
{
	v->a[4620] = actions(1513);
	v->a[4621] = 1;
	v->a[4622] = aux_sym__simple_variable_name_token1;
	v->a[4623] = actions(1516);
	v->a[4624] = 1;
	v->a[4625] = sym_test_operator;
	v->a[4626] = actions(1519);
	v->a[4627] = 1;
	v->a[4628] = sym__brace_start;
	v->a[4629] = state(1021);
	v->a[4630] = 1;
	v->a[4631] = aux_sym__literal_repeat1;
	v->a[4632] = actions(966);
	v->a[4633] = 2;
	v->a[4634] = sym_file_descriptor;
	v->a[4635] = aux_sym_heredoc_redirect_token1;
	v->a[4636] = actions(1480);
	v->a[4637] = 2;
	v->a[4638] = sym_raw_string;
	v->a[4639] = sym_word;
	small_parse_table_232(v);
}

void	small_parse_table_232(t_small_parse_table_array *v)
{
	v->a[4640] = state(315);
	v->a[4641] = 2;
	v->a[4642] = sym_concatenation;
	v->a[4643] = aux_sym_unset_command_repeat1;
	v->a[4644] = state(742);
	v->a[4645] = 7;
	v->a[4646] = sym_arithmetic_expansion;
	v->a[4647] = sym_brace_expression;
	v->a[4648] = sym_string;
	v->a[4649] = sym_number;
	v->a[4650] = sym_simple_expansion;
	v->a[4651] = sym_expansion;
	v->a[4652] = sym_command_substitution;
	v->a[4653] = actions(964);
	v->a[4654] = 21;
	v->a[4655] = anon_sym_PIPE;
	v->a[4656] = anon_sym_SEMI_SEMI;
	v->a[4657] = anon_sym_SEMI_AMP;
	v->a[4658] = anon_sym_SEMI_SEMI_AMP;
	v->a[4659] = anon_sym_PIPE_AMP;
	small_parse_table_233(v);
}

void	small_parse_table_233(t_small_parse_table_array *v)
{
	v->a[4660] = anon_sym_AMP_AMP;
	v->a[4661] = anon_sym_PIPE_PIPE;
	v->a[4662] = anon_sym_LT;
	v->a[4663] = anon_sym_GT;
	v->a[4664] = anon_sym_GT_GT;
	v->a[4665] = anon_sym_AMP_GT;
	v->a[4666] = anon_sym_AMP_GT_GT;
	v->a[4667] = anon_sym_LT_AMP;
	v->a[4668] = anon_sym_GT_AMP;
	v->a[4669] = anon_sym_GT_PIPE;
	v->a[4670] = anon_sym_LT_AMP_DASH;
	v->a[4671] = anon_sym_GT_AMP_DASH;
	v->a[4672] = anon_sym_LT_LT;
	v->a[4673] = anon_sym_LT_LT_DASH;
	v->a[4674] = anon_sym_AMP;
	v->a[4675] = anon_sym_SEMI;
	v->a[4676] = 6;
	v->a[4677] = actions(3);
	v->a[4678] = 1;
	v->a[4679] = sym_comment;
	small_parse_table_234(v);
}

void	small_parse_table_234(t_small_parse_table_array *v)
{
	v->a[4680] = actions(1526);
	v->a[4681] = 1;
	v->a[4682] = sym_variable_name;
	v->a[4683] = actions(1524);
	v->a[4684] = 2;
	v->a[4685] = aux_sym__simple_variable_name_token1;
	v->a[4686] = aux_sym__multiline_variable_name_token1;
	v->a[4687] = actions(828);
	v->a[4688] = 3;
	v->a[4689] = sym_file_descriptor;
	v->a[4690] = sym_test_operator;
	v->a[4691] = sym__brace_start;
	v->a[4692] = actions(1522);
	v->a[4693] = 9;
	v->a[4694] = anon_sym_BANG;
	v->a[4695] = anon_sym_DASH;
	v->a[4696] = anon_sym_STAR;
	v->a[4697] = anon_sym_QMARK;
	v->a[4698] = anon_sym_DOLLAR;
	v->a[4699] = anon_sym_POUND;
	small_parse_table_235(v);
}

/* EOF small_parse_table_46.c */
