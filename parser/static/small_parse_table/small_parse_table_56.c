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
	v->a[5600] = anon_sym_GT;
	v->a[5601] = anon_sym_GT_GT;
	v->a[5602] = anon_sym_LT_AMP;
	v->a[5603] = anon_sym_GT_AMP;
	v->a[5604] = anon_sym_GT_PIPE;
	v->a[5605] = anon_sym_LT_GT;
	v->a[5606] = state(958);
	v->a[5607] = 12;
	v->a[5608] = sym_redirected_statement;
	v->a[5609] = sym_for_statement;
	v->a[5610] = sym_while_statement;
	v->a[5611] = sym_if_statement;
	v->a[5612] = sym_case_statement;
	v->a[5613] = sym_function_definition;
	v->a[5614] = sym_compound_statement;
	v->a[5615] = sym_subshell;
	v->a[5616] = sym_list;
	v->a[5617] = sym_negated_command;
	v->a[5618] = sym_command;
	v->a[5619] = sym__variable_assignments;
	small_parse_table_281(v);
}

void	small_parse_table_281(t_small_parse_table_array *v)
{
	v->a[5620] = 31;
	v->a[5621] = actions(3);
	v->a[5622] = 1;
	v->a[5623] = sym_comment;
	v->a[5624] = actions(9);
	v->a[5625] = 1;
	v->a[5626] = anon_sym_for;
	v->a[5627] = actions(13);
	v->a[5628] = 1;
	v->a[5629] = anon_sym_if;
	v->a[5630] = actions(15);
	v->a[5631] = 1;
	v->a[5632] = anon_sym_case;
	v->a[5633] = actions(17);
	v->a[5634] = 1;
	v->a[5635] = anon_sym_LPAREN;
	v->a[5636] = actions(19);
	v->a[5637] = 1;
	v->a[5638] = anon_sym_LBRACE;
	v->a[5639] = actions(43);
	small_parse_table_282(v);
}

void	small_parse_table_282(t_small_parse_table_array *v)
{
	v->a[5640] = 1;
	v->a[5641] = sym_word;
	v->a[5642] = actions(51);
	v->a[5643] = 1;
	v->a[5644] = anon_sym_BANG;
	v->a[5645] = actions(55);
	v->a[5646] = 1;
	v->a[5647] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5648] = actions(57);
	v->a[5649] = 1;
	v->a[5650] = anon_sym_DOLLAR;
	v->a[5651] = actions(59);
	v->a[5652] = 1;
	v->a[5653] = anon_sym_DQUOTE;
	v->a[5654] = actions(63);
	v->a[5655] = 1;
	v->a[5656] = anon_sym_DOLLAR_LBRACE;
	v->a[5657] = actions(65);
	v->a[5658] = 1;
	v->a[5659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_283(v);
}

void	small_parse_table_283(t_small_parse_table_array *v)
{
	v->a[5660] = actions(67);
	v->a[5661] = 1;
	v->a[5662] = anon_sym_BQUOTE;
	v->a[5663] = actions(69);
	v->a[5664] = 1;
	v->a[5665] = sym_file_descriptor;
	v->a[5666] = actions(71);
	v->a[5667] = 1;
	v->a[5668] = sym_variable_name;
	v->a[5669] = actions(229);
	v->a[5670] = 1;
	v->a[5671] = anon_sym_done;
	v->a[5672] = state(36);
	v->a[5673] = 1;
	v->a[5674] = aux_sym__terminated_statement;
	v->a[5675] = state(182);
	v->a[5676] = 1;
	v->a[5677] = sym_command_name;
	v->a[5678] = state(305);
	v->a[5679] = 1;
	small_parse_table_284(v);
}

void	small_parse_table_284(t_small_parse_table_array *v)
{
	v->a[5680] = sym_variable_assignment;
	v->a[5681] = state(584);
	v->a[5682] = 1;
	v->a[5683] = sym_concatenation;
	v->a[5684] = state(620);
	v->a[5685] = 1;
	v->a[5686] = sym_file_redirect;
	v->a[5687] = state(623);
	v->a[5688] = 1;
	v->a[5689] = aux_sym_command_repeat1;
	v->a[5690] = state(1118);
	v->a[5691] = 1;
	v->a[5692] = sym_pipeline;
	v->a[5693] = state(1201);
	v->a[5694] = 1;
	v->a[5695] = aux_sym_redirected_statement_repeat2;
	v->a[5696] = state(1911);
	v->a[5697] = 1;
	v->a[5698] = sym__statement_not_pipeline;
	v->a[5699] = actions(11);
	small_parse_table_285(v);
}

/* EOF small_parse_table_56.c */
