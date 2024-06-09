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
	v->a[5600] = state(1031);
	v->a[5601] = 12;
	v->a[5602] = sym_redirected_statement;
	v->a[5603] = sym_for_statement;
	v->a[5604] = sym_while_statement;
	v->a[5605] = sym_if_statement;
	v->a[5606] = sym_case_statement;
	v->a[5607] = sym_function_definition;
	v->a[5608] = sym_compound_statement;
	v->a[5609] = sym_subshell;
	v->a[5610] = sym_list;
	v->a[5611] = sym_negated_command;
	v->a[5612] = sym_command;
	v->a[5613] = sym_variable_assignments;
	v->a[5614] = 34;
	v->a[5615] = actions(3);
	v->a[5616] = 1;
	v->a[5617] = sym_comment;
	v->a[5618] = actions(9);
	v->a[5619] = 1;
	small_parse_table_281(v);
}

void	small_parse_table_281(t_small_parse_table_array *v)
{
	v->a[5620] = anon_sym_for;
	v->a[5621] = actions(13);
	v->a[5622] = 1;
	v->a[5623] = anon_sym_if;
	v->a[5624] = actions(15);
	v->a[5625] = 1;
	v->a[5626] = anon_sym_case;
	v->a[5627] = actions(17);
	v->a[5628] = 1;
	v->a[5629] = anon_sym_LPAREN;
	v->a[5630] = actions(19);
	v->a[5631] = 1;
	v->a[5632] = anon_sym_LBRACE;
	v->a[5633] = actions(63);
	v->a[5634] = 1;
	v->a[5635] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5636] = actions(65);
	v->a[5637] = 1;
	v->a[5638] = anon_sym_DOLLAR;
	v->a[5639] = actions(67);
	small_parse_table_282(v);
}

void	small_parse_table_282(t_small_parse_table_array *v)
{
	v->a[5640] = 1;
	v->a[5641] = anon_sym_DQUOTE;
	v->a[5642] = actions(69);
	v->a[5643] = 1;
	v->a[5644] = sym_raw_string;
	v->a[5645] = actions(71);
	v->a[5646] = 1;
	v->a[5647] = aux_sym_number_token1;
	v->a[5648] = actions(73);
	v->a[5649] = 1;
	v->a[5650] = aux_sym_number_token2;
	v->a[5651] = actions(75);
	v->a[5652] = 1;
	v->a[5653] = anon_sym_DOLLAR_LBRACE;
	v->a[5654] = actions(77);
	v->a[5655] = 1;
	v->a[5656] = anon_sym_DOLLAR_LPAREN;
	v->a[5657] = actions(79);
	v->a[5658] = 1;
	v->a[5659] = anon_sym_BQUOTE;
	small_parse_table_283(v);
}

void	small_parse_table_283(t_small_parse_table_array *v)
{
	v->a[5660] = actions(81);
	v->a[5661] = 1;
	v->a[5662] = sym_file_descriptor;
	v->a[5663] = actions(83);
	v->a[5664] = 1;
	v->a[5665] = sym_variable_name;
	v->a[5666] = actions(238);
	v->a[5667] = 1;
	v->a[5668] = sym_word;
	v->a[5669] = actions(240);
	v->a[5670] = 1;
	v->a[5671] = anon_sym_BANG;
	v->a[5672] = state(132);
	v->a[5673] = 1;
	v->a[5674] = aux_sym__statements_repeat1;
	v->a[5675] = state(185);
	v->a[5676] = 1;
	v->a[5677] = sym_command_name;
	v->a[5678] = state(297);
	v->a[5679] = 1;
	small_parse_table_284(v);
}

void	small_parse_table_284(t_small_parse_table_array *v)
{
	v->a[5680] = sym_variable_assignment;
	v->a[5681] = state(582);
	v->a[5682] = 1;
	v->a[5683] = sym_concatenation;
	v->a[5684] = state(614);
	v->a[5685] = 1;
	v->a[5686] = aux_sym_command_repeat1;
	v->a[5687] = state(769);
	v->a[5688] = 1;
	v->a[5689] = sym_file_redirect;
	v->a[5690] = state(1133);
	v->a[5691] = 1;
	v->a[5692] = aux_sym_redirected_statement_repeat2;
	v->a[5693] = state(1142);
	v->a[5694] = 1;
	v->a[5695] = sym_pipeline;
	v->a[5696] = state(2041);
	v->a[5697] = 1;
	v->a[5698] = sym__statement_not_pipeline;
	v->a[5699] = state(2100);
	small_parse_table_285(v);
}

/* EOF small_parse_table_56.c */
