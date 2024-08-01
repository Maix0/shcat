/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_56.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_280(t_small_parse_table_array *v)
{
	v->a[5600] = sym_raw_string;
	v->a[5601] = sym_number;
	v->a[5602] = actions(51);
	v->a[5603] = 3;
	v->a[5604] = anon_sym_LT;
	v->a[5605] = anon_sym_GT;
	v->a[5606] = anon_sym_GT_GT;
	v->a[5607] = state(401);
	v->a[5608] = 5;
	v->a[5609] = sym_arithmetic_expansion;
	v->a[5610] = sym_string;
	v->a[5611] = sym_simple_expansion;
	v->a[5612] = sym_expansion;
	v->a[5613] = sym_command_substitution;
	v->a[5614] = state(949);
	v->a[5615] = 12;
	v->a[5616] = sym_redirected_statement;
	v->a[5617] = sym_for_statement;
	v->a[5618] = sym_while_statement;
	v->a[5619] = sym_if_statement;
	small_parse_table_281(v);
}

void	small_parse_table_281(t_small_parse_table_array *v)
{
	v->a[5620] = sym_case_statement;
	v->a[5621] = sym_function_definition;
	v->a[5622] = sym_compound_statement;
	v->a[5623] = sym_subshell;
	v->a[5624] = sym_list;
	v->a[5625] = sym_negated_command;
	v->a[5626] = sym_command;
	v->a[5627] = sym__variable_assignments;
	v->a[5628] = 30;
	v->a[5629] = actions(3);
	v->a[5630] = 1;
	v->a[5631] = sym_comment;
	v->a[5632] = actions(123);
	v->a[5633] = 1;
	v->a[5634] = sym_word;
	v->a[5635] = actions(126);
	v->a[5636] = 1;
	v->a[5637] = anon_sym_for;
	v->a[5638] = actions(132);
	v->a[5639] = 1;
	small_parse_table_282(v);
}

void	small_parse_table_282(t_small_parse_table_array *v)
{
	v->a[5640] = anon_sym_if;
	v->a[5641] = actions(135);
	v->a[5642] = 1;
	v->a[5643] = anon_sym_fi;
	v->a[5644] = actions(137);
	v->a[5645] = 1;
	v->a[5646] = anon_sym_case;
	v->a[5647] = actions(140);
	v->a[5648] = 1;
	v->a[5649] = anon_sym_LPAREN;
	v->a[5650] = actions(143);
	v->a[5651] = 1;
	v->a[5652] = anon_sym_LBRACE;
	v->a[5653] = actions(146);
	v->a[5654] = 1;
	v->a[5655] = anon_sym_BANG;
	v->a[5656] = actions(152);
	v->a[5657] = 1;
	v->a[5658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5659] = actions(155);
	small_parse_table_283(v);
}

void	small_parse_table_283(t_small_parse_table_array *v)
{
	v->a[5660] = 1;
	v->a[5661] = anon_sym_DOLLAR;
	v->a[5662] = actions(158);
	v->a[5663] = 1;
	v->a[5664] = anon_sym_DQUOTE;
	v->a[5665] = actions(164);
	v->a[5666] = 1;
	v->a[5667] = anon_sym_DOLLAR_LBRACE;
	v->a[5668] = actions(167);
	v->a[5669] = 1;
	v->a[5670] = anon_sym_DOLLAR_LPAREN;
	v->a[5671] = actions(170);
	v->a[5672] = 1;
	v->a[5673] = anon_sym_BQUOTE;
	v->a[5674] = actions(173);
	v->a[5675] = 1;
	v->a[5676] = sym_variable_name;
	v->a[5677] = state(51);
	v->a[5678] = 1;
	v->a[5679] = aux_sym__terminated_statement;
	small_parse_table_284(v);
}

void	small_parse_table_284(t_small_parse_table_array *v)
{
	v->a[5680] = state(185);
	v->a[5681] = 1;
	v->a[5682] = sym_command_name;
	v->a[5683] = state(220);
	v->a[5684] = 1;
	v->a[5685] = sym_variable_assignment;
	v->a[5686] = state(411);
	v->a[5687] = 1;
	v->a[5688] = aux_sym_command_repeat1;
	v->a[5689] = state(551);
	v->a[5690] = 1;
	v->a[5691] = sym_file_redirect;
	v->a[5692] = state(555);
	v->a[5693] = 1;
	v->a[5694] = sym_concatenation;
	v->a[5695] = state(1085);
	v->a[5696] = 1;
	v->a[5697] = sym_pipeline;
	v->a[5698] = state(1126);
	v->a[5699] = 1;
	small_parse_table_285(v);
}

/* EOF small_parse_table_56.c */
